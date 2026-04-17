/*
** Automatically generated from `ranges.m'
** by the Mercury compiler,
** version rotd-2026-04-17
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


// :- module ranges.
// :- implementation.

/*
INIT mercury__ranges__init
ENDINIT
*/

#include "ranges.mih"
#include "ranges.mh"


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
#include "set.mih"
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



struct mercury__ranges__nondet_member_2_p_0_env_0_s {
  MR_Integer * mercury__ranges__nondet_member_2_p_0_env_0__N_4;
  MR_Cont mercury__ranges__nondet_member_2_p_0_env_0__cont;
  void * mercury__ranges__nondet_member_2_p_0_env_0__cont_env_ptr;
  MR_Integer mercury__ranges__nondet_member_2_p_0_env_0__Lo_5;
  MR_Integer mercury__ranges__nondet_member_2_p_0_env_0__Hi_6;
};


static const MR_DuFunctorDesc mercury__ranges__ranges__du_functor_desc_ranges_0_0;

static const MR_PseudoTypeInfo mercury__ranges__ranges__field_types_ranges_0_1[3];

static const MR_DuFunctorDesc mercury__ranges__ranges__du_functor_desc_ranges_0_1;

static const MR_DuFunctorDescPtr mercury__ranges__ranges__du_stag_ordered_ranges_0_0[1];

static const MR_DuFunctorDescPtr mercury__ranges__ranges__du_stag_ordered_ranges_0_1[1];

static const MR_DuPtagLayout mercury__ranges__ranges__du_ptag_ordered_ranges_0[2];

static const MR_DuFunctorDescPtr mercury__ranges__ranges__du_name_ordered_ranges_0[2];

static const MR_Integer mercury__ranges__ranges__functor_number_map_ranges_0[2];

static MR_Word MR_CALL 
mercury__ranges__contraction_0_4_f_0(
  MR_Integer L0_1,
  MR_Integer H0_2,
  MR_Word HeadVar__3_3,
  MR_Integer C_4);

static void MR_CALL 
mercury__ranges__LCMC__func__contraction_0__1_5_p_0(
  MR_Integer L0_1,
  MR_Integer H0_2,
  MR_Word HeadVar__3_3,
  MR_Integer C_4,
  MR_Word * AddrOfHeadVar__5_33);

static MR_Word MR_CALL 
mercury__ranges__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Integer Var_12,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__ranges__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Integer Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14);

static MR_Integer MR_CALL 
mercury__ranges__element_index_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer I_2);

static void MR_CALL 
mercury__ranges__foldl__ho6_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__ranges__compare_lex_2_7_p_0(
  MR_Word * tscc_output_ptr_1_Result_4,
  MR_Integer tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17,
  MR_Integer tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18,
  MR_Integer tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19,
  MR_Integer tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22);

static MR_Word MR_CALL 
mercury__ranges__diff_a_nb_3_f_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Integer tscc_proc_2_input_2_UB_2,
  MR_Word tscc_proc_2_input_3_Bs0_3);

static void MR_CALL 
mercury__ranges__LCMC__func__diff_a_nb__1_4_p_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1,
  MR_Integer tscc_proc_1_input_2_UB_2,
  MR_Word tscc_proc_1_input_3_Bs0_3,
  MR_Word * tscc_proc_1_input_4_AddrOfHeadVar__4_24);

static void MR_CALL 
mercury__ranges__LCMC__func__int_a_nb__1_4_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Integer tscc_proc_2_input_2_UB_2,
  MR_Word tscc_proc_2_input_3_Bs0_3,
  MR_Word * tscc_proc_2_input_4_AddrOfHeadVar__4_48);

static void MR_CALL 
mercury__ranges__LCMC__func__diff_na_nb__1_5_p_0(
  MR_Integer tscc_proc_3_input_1_UA_6,
  MR_Word tscc_proc_3_input_2_As0_7,
  MR_Integer tscc_proc_3_input_3_UB_8,
  MR_Word tscc_proc_3_input_4_Bs0_9,
  MR_Word * tscc_proc_3_input_5_AddrOfResult_86);

static MR_Word MR_CALL 
mercury__ranges__int_na_b_3_f_0(
  MR_Integer tscc_proc_2_input_1_UA_1,
  MR_Word tscc_proc_2_input_2_As0_2,
  MR_Word tscc_proc_2_input_3_HeadVar__3_3);

static MR_Word MR_CALL 
mercury__ranges__diff_na_nb_4_f_0(
  MR_Integer tscc_proc_3_input_1_UA_6,
  MR_Word tscc_proc_3_input_2_As0_7,
  MR_Integer tscc_proc_3_input_3_UB_8,
  MR_Word tscc_proc_3_input_4_Bs0_9);

static MR_Word MR_CALL 
mercury__ranges__n_union_na_b_4_f_0(
  MR_Integer L_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static MR_Word MR_CALL 
mercury__ranges__n_union_a_nb_4_f_0(
  MR_Integer L_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4);

static MR_Word MR_CALL 
mercury__ranges__n_diff_na_b_4_f_0(
  MR_Integer L_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
mercury__ranges__nondet_member_2_p_0_1(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__ranges____Unify____ranges_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__ranges____Compare____ranges_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__ranges_scalar_common_1[2][3];

static /* final */ const MR_Box mercury__ranges_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__ranges_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__ranges_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) -1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__ranges_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ranges_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__ranges_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ranges_scalar_common_2[0])),
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
#include "ranges.mh"
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

#line 583 "ranges.m"
MR_Word 
ML_ranges_empty(void)
#line 583 "ranges.m"
{
#line 583 "ranges.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__ranges__empty_0_f_0();
	return ret_value;
}

#line 588 "ranges.m"
MR_Word 
ML_ranges_universe(void)
#line 588 "ranges.m"
{
#line 588 "ranges.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__ranges__universe_0_f_0();
	return ret_value;
}

#line 593 "ranges.m"
MR_Word 
ML_ranges_range(
  MR_Integer Lo_4,
  MR_Integer Hi_5)
#line 593 "ranges.m"
{
#line 593 "ranges.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__ranges__range_2_f_0((MR_Integer) Lo_4, (MR_Integer) Hi_5);
	return ret_value;
}

#line 616 "ranges.m"
MR_bool 
ML_ranges_is_empty(
  MR_Word HeadVar__1_1)
#line 616 "ranges.m"
{
#line 616 "ranges.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__ranges__is_empty_1_p_0((MR_Word) HeadVar__1_1);
	return ret_value;
}

#line 658 "ranges.m"
MR_Word 
ML_ranges_insert(
  MR_Integer E_4,
  MR_Word Set0_5)
#line 658 "ranges.m"
{
#line 658 "ranges.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mercury__ranges__insert_2_f_0((MR_Integer) E_4, (MR_Word) Set0_5);
	return ret_value;
}

#line 1044 "ranges.m"
MR_bool 
ML_ranges_split(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Integer * Hi_6,
  MR_Word * Rest_7)
#line 1044 "ranges.m"
{
#line 1044 "ranges.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__ranges__split_4_p_0((MR_Word) HeadVar__1_1, (MR_Integer *) HeadVar__2_2, (MR_Integer *) Hi_6, (MR_Word *) Rest_7);
	return ret_value;
}

#line 1111 "ranges.m"
MR_Integer 
ML_ranges_count(
  MR_Word Set_3)
#line 1111 "ranges.m"
{
#line 1111 "ranges.m"
	MR_Integer ret_value;
	ret_value = (MR_Integer)mercury__ranges__count_1_f_0((MR_Word) Set_3);
	return ret_value;
}

#line 1128 "ranges.m"
MR_Integer 
ML_ranges_size(
  MR_Word Xs_3)
#line 1128 "ranges.m"
{
#line 1128 "ranges.m"
	MR_Integer ret_value;
	ret_value = (MR_Integer)mercury__ranges__size_1_f_0((MR_Word) Xs_3);
	return ret_value;
}


static const MR_DuFunctorDesc mercury__ranges__ranges__du_functor_desc_ranges_0_0 = {
  (MR_String) "nil",
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

static const MR_PseudoTypeInfo mercury__ranges__ranges__field_types_ranges_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__ranges__ranges__type_ctor_info_ranges_0)
};

static const MR_DuFunctorDesc mercury__ranges__ranges__du_functor_desc_ranges_0_1 = {
  (MR_String) "range",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__ranges__ranges__field_types_ranges_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__ranges__ranges__du_stag_ordered_ranges_0_0[1] = { &mercury__ranges__ranges__du_functor_desc_ranges_0_0 };

static const MR_DuFunctorDescPtr mercury__ranges__ranges__du_stag_ordered_ranges_0_1[1] = { &mercury__ranges__ranges__du_functor_desc_ranges_0_1 };

static const MR_DuPtagLayout mercury__ranges__ranges__du_ptag_ordered_ranges_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__ranges__ranges__du_stag_ordered_ranges_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ranges__ranges__du_stag_ordered_ranges_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__ranges__ranges__du_name_ordered_ranges_0[2] = {
  &mercury__ranges__ranges__du_functor_desc_ranges_0_0,
  &mercury__ranges__ranges__du_functor_desc_ranges_0_1
};

static const MR_Integer mercury__ranges__ranges__functor_number_map_ranges_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__ranges__ranges__type_ctor_info_ranges_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ranges____Unify____ranges_0_0_10001)),
  ((MR_Box) (mercury__ranges____Compare____ranges_0_0_10001)),
  (MR_String) "ranges",
  (MR_String) "ranges",
  { mercury__ranges__ranges__du_name_ordered_ranges_0 },
  { mercury__ranges__ranges__du_ptag_ordered_ranges_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__ranges__ranges__functor_number_map_ranges_0,

};

void MR_CALL 
mercury__ranges____Compare____ranges_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 == ArgY1_5);
        if (succeeded)
          SubResult1_6 = (MR_Integer) 0;
        else
          SubResult1_6 = (MR_Integer) 2;
      }
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
            SubResult2_9 = (MR_Integer) 0;
          else
            SubResult2_9 = (MR_Integer) 2;
        }
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word next_value_of_HeadVar__2_2 = ArgX3_10;
          MR_Word next_value_of_HeadVar__3_3 = ArgY3_11;

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

MR_bool MR_CALL 
mercury__ranges____Unify____ranges_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_10 == CastX_9);
    }
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer ArgY1_4;
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer ArgY2_6;
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Word ArgY3_8;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
        ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        succeeded = (ArgX1_3 == ArgY1_4);
        if (succeeded)
        {
          succeeded = (ArgX2_5 == ArgY2_6);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = ArgX3_7;
            next_value_of_HeadVar__2_2 = ArgY3_8;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__range_foldr_4_p_5(
  MR_Word TypeInfo_for_A_20,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Integer L_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer U_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Box STATE_VARIABLE_Acc_1_16;
    MR_Integer Var_17;
    MR_Integer Var_19;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    succeeded = mercury__ranges__range_foldr_4_p_5(TypeInfo_for_A_20, P_1, Rest_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_1_16);
    if (succeeded)
    {
      Var_19 = (MR_Integer) 1;
      Var_17 = (MR_Integer) ((MR_Unsigned) L_10 + (MR_Unsigned) Var_19);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      succeeded = func_0(((MR_Box) (P_1)), ((MR_Box) (Var_17)), ((MR_Box) (U_11)), STATE_VARIABLE_Acc_1_16, STATE_VARIABLE_Acc_4);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ranges__range_foldr_4_p_4(
  MR_Word TypeInfo_for_A_20,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Integer L_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer U_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Box STATE_VARIABLE_Acc_1_16;
    MR_Integer Var_17;
    MR_Integer Var_19;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    succeeded = mercury__ranges__range_foldr_4_p_4(TypeInfo_for_A_20, P_1, Rest_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_1_16);
    if (succeeded)
    {
      Var_19 = (MR_Integer) 1;
      Var_17 = (MR_Integer) ((MR_Unsigned) L_10 + (MR_Unsigned) Var_19);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      succeeded = func_0(((MR_Box) (P_1)), ((MR_Box) (Var_17)), ((MR_Box) (U_11)), STATE_VARIABLE_Acc_1_16, STATE_VARIABLE_Acc_4);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ranges__range_foldr_4_p_3(
  MR_Word TypeInfo_for_A_20,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Integer L_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer U_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Box STATE_VARIABLE_Acc_1_16;
    MR_Integer Var_17;
    MR_Integer Var_19;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    succeeded = mercury__ranges__range_foldr_4_p_3(TypeInfo_for_A_20, P_1, Rest_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_1_16);
    if (succeeded)
    {
      Var_19 = (MR_Integer) 1;
      Var_17 = (MR_Integer) ((MR_Unsigned) L_10 + (MR_Unsigned) Var_19);
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      succeeded = func_0(((MR_Box) (P_1)), ((MR_Box) (Var_17)), ((MR_Box) (U_11)), STATE_VARIABLE_Acc_1_16, STATE_VARIABLE_Acc_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__ranges__range_foldr_4_p_2(
  MR_Word TypeInfo_for_A_20,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
  else
  {
    MR_Integer L_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer U_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Box STATE_VARIABLE_Acc_1_16;
    MR_Integer Var_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__ranges__range_foldr_4_p_2(TypeInfo_for_A_20, P_1, Rest_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_1_16);
    Var_17 = (MR_Integer) ((MR_Unsigned) L_10 + (MR_Unsigned) 1);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
    func_0(((MR_Box) (P_1)), ((MR_Box) (Var_17)), ((MR_Box) (U_11)), STATE_VARIABLE_Acc_1_16, STATE_VARIABLE_Acc_4);
  }
}

void MR_CALL 
mercury__ranges__range_foldr_4_p_1(
  MR_Word TypeInfo_for_A_20,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
  else
  {
    MR_Integer L_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer U_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Box STATE_VARIABLE_Acc_1_16;
    MR_Integer Var_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__ranges__range_foldr_4_p_1(TypeInfo_for_A_20, P_1, Rest_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_1_16);
    Var_17 = (MR_Integer) ((MR_Unsigned) L_10 + (MR_Unsigned) 1);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
    func_0(((MR_Box) (P_1)), ((MR_Box) (Var_17)), ((MR_Box) (U_11)), STATE_VARIABLE_Acc_1_16, STATE_VARIABLE_Acc_4);
  }
}

void MR_CALL 
mercury__ranges__range_foldr_4_p_0(
  MR_Word TypeInfo_for_A_20,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
  else
  {
    MR_Integer L_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer U_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Box STATE_VARIABLE_Acc_1_16;
    MR_Integer Var_17;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

    mercury__ranges__range_foldr_4_p_0(TypeInfo_for_A_20, P_1, Rest_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_1_16);
    Var_17 = (MR_Integer) ((MR_Unsigned) L_10 + (MR_Unsigned) 1);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
    func_0(((MR_Box) (P_1)), ((MR_Box) (Var_17)), ((MR_Box) (U_11)), STATE_VARIABLE_Acc_1_16, STATE_VARIABLE_Acc_4);
  }
}

MR_bool MR_CALL 
mercury__ranges__range_foldl2_6_p_5(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer L_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Rest_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) L_15 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_25;
      MR_Box STATE_VARIABLE_Acc2_1_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      succeeded = func_0(((MR_Box) (P_1)), ((MR_Box) (Var_24)), ((MR_Box) (U_16)), STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_1_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_1_26);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Rest_17;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_1_25;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_1_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
        STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__range_foldl2_6_p_4(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer L_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Rest_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) L_15 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_25;
      MR_Box STATE_VARIABLE_Acc2_1_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      succeeded = func_0(((MR_Box) (P_1)), ((MR_Box) (Var_24)), ((MR_Box) (U_16)), STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_1_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_1_26);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Rest_17;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_1_25;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_1_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
        STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__range_foldl2_6_p_3(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer L_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Rest_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) L_15 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_25;
      MR_Box STATE_VARIABLE_Acc2_1_26;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      succeeded = func_0(((MR_Box) (P_1)), ((MR_Box) (Var_24)), ((MR_Box) (U_16)), STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_1_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_1_26);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Rest_17;
        next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_1_25;
        next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_1_26;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
        STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__ranges__range_foldl2_6_p_2(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    }
    else
    {
      MR_Integer L_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Rest_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) L_15 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_25;
      MR_Box STATE_VARIABLE_Acc2_1_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      func_0(((MR_Box) (P_1)), ((MR_Box) (Var_24)), ((MR_Box) (U_16)), STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_1_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_1_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Rest_17;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_1_25;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_1_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
      STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__range_foldl2_6_p_1(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    }
    else
    {
      MR_Integer L_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Rest_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) L_15 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_25;
      MR_Box STATE_VARIABLE_Acc2_1_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      func_0(((MR_Box) (P_1)), ((MR_Box) (Var_24)), ((MR_Box) (U_16)), STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_1_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_1_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Rest_17;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_1_25;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_1_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
      STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__range_foldl2_6_p_0(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
      *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    }
    else
    {
      MR_Integer L_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_16 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Rest_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer Var_24 = (MR_Integer) ((MR_Unsigned) L_15 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_25;
      MR_Box STATE_VARIABLE_Acc2_1_26;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

      func_0(((MR_Box) (P_1)), ((MR_Box) (Var_24)), ((MR_Box) (U_16)), STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_1_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_1_26);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Rest_17;
      next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_1_25;
      next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_1_26;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
      STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__range_foldl_4_p_5(
  MR_Word TypeInfo_for_A_19,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer L_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) L_10 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc_1_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (P_1)), ((MR_Box) (Var_16)), ((MR_Box) (U_11)), STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_1_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Rest_12;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_1_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__range_foldl_4_p_4(
  MR_Word TypeInfo_for_A_19,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer L_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) L_10 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc_1_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (P_1)), ((MR_Box) (Var_16)), ((MR_Box) (U_11)), STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_1_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Rest_12;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_1_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__range_foldl_4_p_3(
  MR_Word TypeInfo_for_A_19,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer L_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) L_10 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc_1_17;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      succeeded = func_0(((MR_Box) (P_1)), ((MR_Box) (Var_16)), ((MR_Box) (U_11)), STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_1_17);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Rest_12;
        next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_1_17;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__ranges__range_foldl_4_p_2(
  MR_Word TypeInfo_for_A_19,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    else
    {
      MR_Integer L_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) L_10 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc_1_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (P_1)), ((MR_Box) (Var_16)), ((MR_Box) (U_11)), STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_1_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Rest_12;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_1_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__range_foldl_4_p_1(
  MR_Word TypeInfo_for_A_19,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    else
    {
      MR_Integer L_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) L_10 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc_1_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (P_1)), ((MR_Box) (Var_16)), ((MR_Box) (U_11)), STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_1_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Rest_12;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_1_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__range_foldl_4_p_0(
  MR_Word TypeInfo_for_A_19,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    else
    {
      MR_Integer L_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Rest_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) L_10 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc_1_17;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

      func_0(((MR_Box) (P_1)), ((MR_Box) (Var_16)), ((MR_Box) (U_11)), STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_1_17);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Rest_12;
      next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_1_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__foldr_4_p_5(
  MR_Word TypeInfo_for_A_17,
  MR_Word P_5,
  MR_Word Ranges_6,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  MR_bool succeeded;

  if ((Ranges_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc_12 = STATE_VARIABLE_Acc_0_11;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Integer L_8 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 0))));
    MR_Integer H_9 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 1))));
    MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, Ranges_6, 2))));
    MR_Box STATE_VARIABLE_Acc_1_13;
    MR_Integer Var_14;
    MR_Integer Var_16;

    succeeded = mercury__ranges__foldr_4_p_5(TypeInfo_for_A_17, P_5, Rest_10, STATE_VARIABLE_Acc_0_11, &STATE_VARIABLE_Acc_1_13);
    if (succeeded)
    {
      Var_16 = (MR_Integer) 1;
      Var_14 = (MR_Integer) ((MR_Unsigned) L_8 + (MR_Unsigned) Var_16);
      succeeded = mercury__int__fold_down_5_p_6(TypeInfo_for_A_17, P_5, Var_14, H_9, STATE_VARIABLE_Acc_1_13, STATE_VARIABLE_Acc_12);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ranges__foldr_4_p_4(
  MR_Word TypeInfo_for_A_17,
  MR_Word P_5,
  MR_Word Ranges_6,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  MR_bool succeeded;

  if ((Ranges_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc_12 = STATE_VARIABLE_Acc_0_11;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Integer L_8 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 0))));
    MR_Integer H_9 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 1))));
    MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, Ranges_6, 2))));
    MR_Box STATE_VARIABLE_Acc_1_13;
    MR_Integer Var_14;
    MR_Integer Var_16;

    succeeded = mercury__ranges__foldr_4_p_4(TypeInfo_for_A_17, P_5, Rest_10, STATE_VARIABLE_Acc_0_11, &STATE_VARIABLE_Acc_1_13);
    if (succeeded)
    {
      Var_16 = (MR_Integer) 1;
      Var_14 = (MR_Integer) ((MR_Unsigned) L_8 + (MR_Unsigned) Var_16);
      succeeded = mercury__int__fold_down_5_p_5(TypeInfo_for_A_17, P_5, Var_14, H_9, STATE_VARIABLE_Acc_1_13, STATE_VARIABLE_Acc_12);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ranges__foldr_4_p_3(
  MR_Word TypeInfo_for_A_17,
  MR_Word P_5,
  MR_Word Ranges_6,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  MR_bool succeeded;

  if ((Ranges_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc_12 = STATE_VARIABLE_Acc_0_11;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Integer L_8 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 0))));
    MR_Integer H_9 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 1))));
    MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, Ranges_6, 2))));
    MR_Box STATE_VARIABLE_Acc_1_13;
    MR_Integer Var_14;
    MR_Integer Var_16;

    succeeded = mercury__ranges__foldr_4_p_3(TypeInfo_for_A_17, P_5, Rest_10, STATE_VARIABLE_Acc_0_11, &STATE_VARIABLE_Acc_1_13);
    if (succeeded)
    {
      Var_16 = (MR_Integer) 1;
      Var_14 = (MR_Integer) ((MR_Unsigned) L_8 + (MR_Unsigned) Var_16);
      succeeded = mercury__int__fold_down_5_p_4(TypeInfo_for_A_17, P_5, Var_14, H_9, STATE_VARIABLE_Acc_1_13, STATE_VARIABLE_Acc_12);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__ranges__foldr_4_p_2(
  MR_Word TypeInfo_for_A_17,
  MR_Word P_5,
  MR_Word Ranges_6,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  if ((Ranges_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_12 = STATE_VARIABLE_Acc_0_11;
  else
  {
    MR_Integer L_8 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 0))));
    MR_Integer H_9 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 1))));
    MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, Ranges_6, 2))));
    MR_Box STATE_VARIABLE_Acc_1_13;
    MR_Integer Var_14;

    mercury__ranges__foldr_4_p_2(TypeInfo_for_A_17, P_5, Rest_10, STATE_VARIABLE_Acc_0_11, &STATE_VARIABLE_Acc_1_13);
    Var_14 = (MR_Integer) ((MR_Unsigned) L_8 + (MR_Unsigned) 1);
    mercury__int__fold_down_5_p_2(TypeInfo_for_A_17, P_5, Var_14, H_9, STATE_VARIABLE_Acc_1_13, STATE_VARIABLE_Acc_12);
  }
}

void MR_CALL 
mercury__ranges__foldr_4_p_1(
  MR_Word TypeInfo_for_A_17,
  MR_Word P_5,
  MR_Word Ranges_6,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  if ((Ranges_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_12 = STATE_VARIABLE_Acc_0_11;
  else
  {
    MR_Integer L_8 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 0))));
    MR_Integer H_9 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 1))));
    MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, Ranges_6, 2))));
    MR_Box STATE_VARIABLE_Acc_1_13;
    MR_Integer Var_14;

    mercury__ranges__foldr_4_p_1(TypeInfo_for_A_17, P_5, Rest_10, STATE_VARIABLE_Acc_0_11, &STATE_VARIABLE_Acc_1_13);
    Var_14 = (MR_Integer) ((MR_Unsigned) L_8 + (MR_Unsigned) 1);
    mercury__int__fold_down_5_p_1(TypeInfo_for_A_17, P_5, Var_14, H_9, STATE_VARIABLE_Acc_1_13, STATE_VARIABLE_Acc_12);
  }
}

void MR_CALL 
mercury__ranges__foldr_4_p_0(
  MR_Word TypeInfo_for_A_17,
  MR_Word P_5,
  MR_Word Ranges_6,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  if ((Ranges_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_12 = STATE_VARIABLE_Acc_0_11;
  else
  {
    MR_Integer L_8 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 0))));
    MR_Integer H_9 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 1))));
    MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, Ranges_6, 2))));
    MR_Box STATE_VARIABLE_Acc_1_13;
    MR_Integer Var_14;

    mercury__ranges__foldr_4_p_0(TypeInfo_for_A_17, P_5, Rest_10, STATE_VARIABLE_Acc_0_11, &STATE_VARIABLE_Acc_1_13);
    Var_14 = (MR_Integer) ((MR_Unsigned) L_8 + (MR_Unsigned) 1);
    mercury__int__fold_down_5_p_0(TypeInfo_for_A_17, P_5, Var_14, H_9, STATE_VARIABLE_Acc_1_13, STATE_VARIABLE_Acc_12);
  }
}

MR_bool MR_CALL 
mercury__ranges__foldl3_8_p_3(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word TypeInfo_for_C_30,
  MR_Word P_9,
  MR_Word Ranges_10,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Ranges_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_18 = STATE_VARIABLE_Acc1_0_17;
      *STATE_VARIABLE_Acc2_20 = STATE_VARIABLE_Acc2_0_19;
      *STATE_VARIABLE_Acc3_22 = STATE_VARIABLE_Acc3_0_21;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer L_14 = ((MR_Integer) ((MR_hl_field(1, Ranges_10, 0))));
      MR_Integer U_15 = ((MR_Integer) ((MR_hl_field(1, Ranges_10, 1))));
      MR_Word Rest_16 = ((MR_Word) ((MR_hl_field(1, Ranges_10, 2))));
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) L_14 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_24;
      MR_Box STATE_VARIABLE_Acc2_1_25;
      MR_Box STATE_VARIABLE_Acc3_1_26;
      MR_Word next_value_of_Ranges_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_21;

      succeeded = mercury__int__fold_up3_9_p_7(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeInfo_for_C_30, P_9, Var_23, U_15, STATE_VARIABLE_Acc1_0_17, &STATE_VARIABLE_Acc1_1_24, STATE_VARIABLE_Acc2_0_19, &STATE_VARIABLE_Acc2_1_25, STATE_VARIABLE_Acc3_0_21, &STATE_VARIABLE_Acc3_1_26);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Ranges_10 = Rest_16;
        next_value_of_STATE_VARIABLE_Acc1_0_17 = STATE_VARIABLE_Acc1_1_24;
        next_value_of_STATE_VARIABLE_Acc2_0_19 = STATE_VARIABLE_Acc2_1_25;
        next_value_of_STATE_VARIABLE_Acc3_0_21 = STATE_VARIABLE_Acc3_1_26;
        Ranges_10 = next_value_of_Ranges_10;
        STATE_VARIABLE_Acc1_0_17 = next_value_of_STATE_VARIABLE_Acc1_0_17;
        STATE_VARIABLE_Acc2_0_19 = next_value_of_STATE_VARIABLE_Acc2_0_19;
        STATE_VARIABLE_Acc3_0_21 = next_value_of_STATE_VARIABLE_Acc3_0_21;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__ranges__foldl3_8_p_2(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word TypeInfo_for_C_30,
  MR_Word P_9,
  MR_Word Ranges_10,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Ranges_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_18 = STATE_VARIABLE_Acc1_0_17;
      *STATE_VARIABLE_Acc2_20 = STATE_VARIABLE_Acc2_0_19;
      *STATE_VARIABLE_Acc3_22 = STATE_VARIABLE_Acc3_0_21;
    }
    else
    {
      MR_Integer L_14 = ((MR_Integer) ((MR_hl_field(1, Ranges_10, 0))));
      MR_Integer U_15 = ((MR_Integer) ((MR_hl_field(1, Ranges_10, 1))));
      MR_Word Rest_16 = ((MR_Word) ((MR_hl_field(1, Ranges_10, 2))));
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) L_14 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_24;
      MR_Box STATE_VARIABLE_Acc2_1_25;
      MR_Box STATE_VARIABLE_Acc3_1_26;
      MR_Word next_value_of_Ranges_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_21;

      mercury__int__fold_up3_9_p_2(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeInfo_for_C_30, P_9, Var_23, U_15, STATE_VARIABLE_Acc1_0_17, &STATE_VARIABLE_Acc1_1_24, STATE_VARIABLE_Acc2_0_19, &STATE_VARIABLE_Acc2_1_25, STATE_VARIABLE_Acc3_0_21, &STATE_VARIABLE_Acc3_1_26);
      // direct tailcall eliminated
      ;
      next_value_of_Ranges_10 = Rest_16;
      next_value_of_STATE_VARIABLE_Acc1_0_17 = STATE_VARIABLE_Acc1_1_24;
      next_value_of_STATE_VARIABLE_Acc2_0_19 = STATE_VARIABLE_Acc2_1_25;
      next_value_of_STATE_VARIABLE_Acc3_0_21 = STATE_VARIABLE_Acc3_1_26;
      Ranges_10 = next_value_of_Ranges_10;
      STATE_VARIABLE_Acc1_0_17 = next_value_of_STATE_VARIABLE_Acc1_0_17;
      STATE_VARIABLE_Acc2_0_19 = next_value_of_STATE_VARIABLE_Acc2_0_19;
      STATE_VARIABLE_Acc3_0_21 = next_value_of_STATE_VARIABLE_Acc3_0_21;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__foldl3_8_p_1(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word TypeInfo_for_C_30,
  MR_Word P_9,
  MR_Word Ranges_10,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Ranges_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_18 = STATE_VARIABLE_Acc1_0_17;
      *STATE_VARIABLE_Acc2_20 = STATE_VARIABLE_Acc2_0_19;
      *STATE_VARIABLE_Acc3_22 = STATE_VARIABLE_Acc3_0_21;
    }
    else
    {
      MR_Integer L_14 = ((MR_Integer) ((MR_hl_field(1, Ranges_10, 0))));
      MR_Integer U_15 = ((MR_Integer) ((MR_hl_field(1, Ranges_10, 1))));
      MR_Word Rest_16 = ((MR_Word) ((MR_hl_field(1, Ranges_10, 2))));
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) L_14 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_24;
      MR_Box STATE_VARIABLE_Acc2_1_25;
      MR_Box STATE_VARIABLE_Acc3_1_26;
      MR_Word next_value_of_Ranges_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_21;

      mercury__int__fold_up3_9_p_1(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeInfo_for_C_30, P_9, Var_23, U_15, STATE_VARIABLE_Acc1_0_17, &STATE_VARIABLE_Acc1_1_24, STATE_VARIABLE_Acc2_0_19, &STATE_VARIABLE_Acc2_1_25, STATE_VARIABLE_Acc3_0_21, &STATE_VARIABLE_Acc3_1_26);
      // direct tailcall eliminated
      ;
      next_value_of_Ranges_10 = Rest_16;
      next_value_of_STATE_VARIABLE_Acc1_0_17 = STATE_VARIABLE_Acc1_1_24;
      next_value_of_STATE_VARIABLE_Acc2_0_19 = STATE_VARIABLE_Acc2_1_25;
      next_value_of_STATE_VARIABLE_Acc3_0_21 = STATE_VARIABLE_Acc3_1_26;
      Ranges_10 = next_value_of_Ranges_10;
      STATE_VARIABLE_Acc1_0_17 = next_value_of_STATE_VARIABLE_Acc1_0_17;
      STATE_VARIABLE_Acc2_0_19 = next_value_of_STATE_VARIABLE_Acc2_0_19;
      STATE_VARIABLE_Acc3_0_21 = next_value_of_STATE_VARIABLE_Acc3_0_21;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__foldl3_8_p_0(
  MR_Word TypeInfo_for_A_28,
  MR_Word TypeInfo_for_B_29,
  MR_Word TypeInfo_for_C_30,
  MR_Word P_9,
  MR_Word Ranges_10,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Box STATE_VARIABLE_Acc3_0_21,
  MR_Box * STATE_VARIABLE_Acc3_22)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Ranges_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_18 = STATE_VARIABLE_Acc1_0_17;
      *STATE_VARIABLE_Acc2_20 = STATE_VARIABLE_Acc2_0_19;
      *STATE_VARIABLE_Acc3_22 = STATE_VARIABLE_Acc3_0_21;
    }
    else
    {
      MR_Integer L_14 = ((MR_Integer) ((MR_hl_field(1, Ranges_10, 0))));
      MR_Integer U_15 = ((MR_Integer) ((MR_hl_field(1, Ranges_10, 1))));
      MR_Word Rest_16 = ((MR_Word) ((MR_hl_field(1, Ranges_10, 2))));
      MR_Integer Var_23 = (MR_Integer) ((MR_Unsigned) L_14 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_24;
      MR_Box STATE_VARIABLE_Acc2_1_25;
      MR_Box STATE_VARIABLE_Acc3_1_26;
      MR_Word next_value_of_Ranges_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_19;
      MR_Box next_value_of_STATE_VARIABLE_Acc3_0_21;

      mercury__int__fold_up3_9_p_0(TypeInfo_for_A_28, TypeInfo_for_B_29, TypeInfo_for_C_30, P_9, Var_23, U_15, STATE_VARIABLE_Acc1_0_17, &STATE_VARIABLE_Acc1_1_24, STATE_VARIABLE_Acc2_0_19, &STATE_VARIABLE_Acc2_1_25, STATE_VARIABLE_Acc3_0_21, &STATE_VARIABLE_Acc3_1_26);
      // direct tailcall eliminated
      ;
      next_value_of_Ranges_10 = Rest_16;
      next_value_of_STATE_VARIABLE_Acc1_0_17 = STATE_VARIABLE_Acc1_1_24;
      next_value_of_STATE_VARIABLE_Acc2_0_19 = STATE_VARIABLE_Acc2_1_25;
      next_value_of_STATE_VARIABLE_Acc3_0_21 = STATE_VARIABLE_Acc3_1_26;
      Ranges_10 = next_value_of_Ranges_10;
      STATE_VARIABLE_Acc1_0_17 = next_value_of_STATE_VARIABLE_Acc1_0_17;
      STATE_VARIABLE_Acc2_0_19 = next_value_of_STATE_VARIABLE_Acc2_0_19;
      STATE_VARIABLE_Acc3_0_21 = next_value_of_STATE_VARIABLE_Acc3_0_21;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__foldl2_6_p_5(
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word P_7,
  MR_Word Ranges_8,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Ranges_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_15 = STATE_VARIABLE_Acc1_0_14;
      *STATE_VARIABLE_Acc2_17 = STATE_VARIABLE_Acc2_0_16;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer L_11 = ((MR_Integer) ((MR_hl_field(1, Ranges_8, 0))));
      MR_Integer U_12 = ((MR_Integer) ((MR_hl_field(1, Ranges_8, 1))));
      MR_Word Rest_13 = ((MR_Word) ((MR_hl_field(1, Ranges_8, 2))));
      MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) L_11 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_19;
      MR_Box STATE_VARIABLE_Acc2_1_20;
      MR_Word next_value_of_Ranges_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_14;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_16;

      succeeded = mercury__int__fold_up2_7_p_7(TypeInfo_for_A_22, TypeInfo_for_B_23, P_7, Var_18, U_12, STATE_VARIABLE_Acc1_0_14, &STATE_VARIABLE_Acc1_1_19, STATE_VARIABLE_Acc2_0_16, &STATE_VARIABLE_Acc2_1_20);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Ranges_8 = Rest_13;
        next_value_of_STATE_VARIABLE_Acc1_0_14 = STATE_VARIABLE_Acc1_1_19;
        next_value_of_STATE_VARIABLE_Acc2_0_16 = STATE_VARIABLE_Acc2_1_20;
        Ranges_8 = next_value_of_Ranges_8;
        STATE_VARIABLE_Acc1_0_14 = next_value_of_STATE_VARIABLE_Acc1_0_14;
        STATE_VARIABLE_Acc2_0_16 = next_value_of_STATE_VARIABLE_Acc2_0_16;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__foldl2_6_p_4(
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word P_7,
  MR_Word Ranges_8,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Ranges_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_15 = STATE_VARIABLE_Acc1_0_14;
      *STATE_VARIABLE_Acc2_17 = STATE_VARIABLE_Acc2_0_16;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer L_11 = ((MR_Integer) ((MR_hl_field(1, Ranges_8, 0))));
      MR_Integer U_12 = ((MR_Integer) ((MR_hl_field(1, Ranges_8, 1))));
      MR_Word Rest_13 = ((MR_Word) ((MR_hl_field(1, Ranges_8, 2))));
      MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) L_11 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_19;
      MR_Box STATE_VARIABLE_Acc2_1_20;
      MR_Word next_value_of_Ranges_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_14;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_16;

      succeeded = mercury__int__fold_up2_7_p_6(TypeInfo_for_A_22, TypeInfo_for_B_23, P_7, Var_18, U_12, STATE_VARIABLE_Acc1_0_14, &STATE_VARIABLE_Acc1_1_19, STATE_VARIABLE_Acc2_0_16, &STATE_VARIABLE_Acc2_1_20);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Ranges_8 = Rest_13;
        next_value_of_STATE_VARIABLE_Acc1_0_14 = STATE_VARIABLE_Acc1_1_19;
        next_value_of_STATE_VARIABLE_Acc2_0_16 = STATE_VARIABLE_Acc2_1_20;
        Ranges_8 = next_value_of_Ranges_8;
        STATE_VARIABLE_Acc1_0_14 = next_value_of_STATE_VARIABLE_Acc1_0_14;
        STATE_VARIABLE_Acc2_0_16 = next_value_of_STATE_VARIABLE_Acc2_0_16;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__foldl2_6_p_3(
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word P_7,
  MR_Word Ranges_8,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Ranges_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_15 = STATE_VARIABLE_Acc1_0_14;
      *STATE_VARIABLE_Acc2_17 = STATE_VARIABLE_Acc2_0_16;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer L_11 = ((MR_Integer) ((MR_hl_field(1, Ranges_8, 0))));
      MR_Integer U_12 = ((MR_Integer) ((MR_hl_field(1, Ranges_8, 1))));
      MR_Word Rest_13 = ((MR_Word) ((MR_hl_field(1, Ranges_8, 2))));
      MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) L_11 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_19;
      MR_Box STATE_VARIABLE_Acc2_1_20;
      MR_Word next_value_of_Ranges_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_14;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_16;

      succeeded = mercury__int__fold_up2_7_p_5(TypeInfo_for_A_22, TypeInfo_for_B_23, P_7, Var_18, U_12, STATE_VARIABLE_Acc1_0_14, &STATE_VARIABLE_Acc1_1_19, STATE_VARIABLE_Acc2_0_16, &STATE_VARIABLE_Acc2_1_20);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Ranges_8 = Rest_13;
        next_value_of_STATE_VARIABLE_Acc1_0_14 = STATE_VARIABLE_Acc1_1_19;
        next_value_of_STATE_VARIABLE_Acc2_0_16 = STATE_VARIABLE_Acc2_1_20;
        Ranges_8 = next_value_of_Ranges_8;
        STATE_VARIABLE_Acc1_0_14 = next_value_of_STATE_VARIABLE_Acc1_0_14;
        STATE_VARIABLE_Acc2_0_16 = next_value_of_STATE_VARIABLE_Acc2_0_16;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__ranges__foldl2_6_p_2(
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word P_7,
  MR_Word Ranges_8,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Ranges_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_15 = STATE_VARIABLE_Acc1_0_14;
      *STATE_VARIABLE_Acc2_17 = STATE_VARIABLE_Acc2_0_16;
    }
    else
    {
      MR_Integer L_11 = ((MR_Integer) ((MR_hl_field(1, Ranges_8, 0))));
      MR_Integer U_12 = ((MR_Integer) ((MR_hl_field(1, Ranges_8, 1))));
      MR_Word Rest_13 = ((MR_Word) ((MR_hl_field(1, Ranges_8, 2))));
      MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) L_11 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_19;
      MR_Box STATE_VARIABLE_Acc2_1_20;
      MR_Word next_value_of_Ranges_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_14;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_16;

      mercury__int__fold_up2_7_p_2(TypeInfo_for_A_22, TypeInfo_for_B_23, P_7, Var_18, U_12, STATE_VARIABLE_Acc1_0_14, &STATE_VARIABLE_Acc1_1_19, STATE_VARIABLE_Acc2_0_16, &STATE_VARIABLE_Acc2_1_20);
      // direct tailcall eliminated
      ;
      next_value_of_Ranges_8 = Rest_13;
      next_value_of_STATE_VARIABLE_Acc1_0_14 = STATE_VARIABLE_Acc1_1_19;
      next_value_of_STATE_VARIABLE_Acc2_0_16 = STATE_VARIABLE_Acc2_1_20;
      Ranges_8 = next_value_of_Ranges_8;
      STATE_VARIABLE_Acc1_0_14 = next_value_of_STATE_VARIABLE_Acc1_0_14;
      STATE_VARIABLE_Acc2_0_16 = next_value_of_STATE_VARIABLE_Acc2_0_16;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__foldl2_6_p_1(
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word P_7,
  MR_Word Ranges_8,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Ranges_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_15 = STATE_VARIABLE_Acc1_0_14;
      *STATE_VARIABLE_Acc2_17 = STATE_VARIABLE_Acc2_0_16;
    }
    else
    {
      MR_Integer L_11 = ((MR_Integer) ((MR_hl_field(1, Ranges_8, 0))));
      MR_Integer U_12 = ((MR_Integer) ((MR_hl_field(1, Ranges_8, 1))));
      MR_Word Rest_13 = ((MR_Word) ((MR_hl_field(1, Ranges_8, 2))));
      MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) L_11 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_19;
      MR_Box STATE_VARIABLE_Acc2_1_20;
      MR_Word next_value_of_Ranges_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_14;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_16;

      mercury__int__fold_up2_7_p_1(TypeInfo_for_A_22, TypeInfo_for_B_23, P_7, Var_18, U_12, STATE_VARIABLE_Acc1_0_14, &STATE_VARIABLE_Acc1_1_19, STATE_VARIABLE_Acc2_0_16, &STATE_VARIABLE_Acc2_1_20);
      // direct tailcall eliminated
      ;
      next_value_of_Ranges_8 = Rest_13;
      next_value_of_STATE_VARIABLE_Acc1_0_14 = STATE_VARIABLE_Acc1_1_19;
      next_value_of_STATE_VARIABLE_Acc2_0_16 = STATE_VARIABLE_Acc2_1_20;
      Ranges_8 = next_value_of_Ranges_8;
      STATE_VARIABLE_Acc1_0_14 = next_value_of_STATE_VARIABLE_Acc1_0_14;
      STATE_VARIABLE_Acc2_0_16 = next_value_of_STATE_VARIABLE_Acc2_0_16;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__foldl2_6_p_0(
  MR_Word TypeInfo_for_A_22,
  MR_Word TypeInfo_for_B_23,
  MR_Word P_7,
  MR_Word Ranges_8,
  MR_Box STATE_VARIABLE_Acc1_0_14,
  MR_Box * STATE_VARIABLE_Acc1_15,
  MR_Box STATE_VARIABLE_Acc2_0_16,
  MR_Box * STATE_VARIABLE_Acc2_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Ranges_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc1_15 = STATE_VARIABLE_Acc1_0_14;
      *STATE_VARIABLE_Acc2_17 = STATE_VARIABLE_Acc2_0_16;
    }
    else
    {
      MR_Integer L_11 = ((MR_Integer) ((MR_hl_field(1, Ranges_8, 0))));
      MR_Integer U_12 = ((MR_Integer) ((MR_hl_field(1, Ranges_8, 1))));
      MR_Word Rest_13 = ((MR_Word) ((MR_hl_field(1, Ranges_8, 2))));
      MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) L_11 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc1_1_19;
      MR_Box STATE_VARIABLE_Acc2_1_20;
      MR_Word next_value_of_Ranges_8;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_14;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_16;

      mercury__int__fold_up2_7_p_0(TypeInfo_for_A_22, TypeInfo_for_B_23, P_7, Var_18, U_12, STATE_VARIABLE_Acc1_0_14, &STATE_VARIABLE_Acc1_1_19, STATE_VARIABLE_Acc2_0_16, &STATE_VARIABLE_Acc2_1_20);
      // direct tailcall eliminated
      ;
      next_value_of_Ranges_8 = Rest_13;
      next_value_of_STATE_VARIABLE_Acc1_0_14 = STATE_VARIABLE_Acc1_1_19;
      next_value_of_STATE_VARIABLE_Acc2_0_16 = STATE_VARIABLE_Acc2_1_20;
      Ranges_8 = next_value_of_Ranges_8;
      STATE_VARIABLE_Acc1_0_14 = next_value_of_STATE_VARIABLE_Acc1_0_14;
      STATE_VARIABLE_Acc2_0_16 = next_value_of_STATE_VARIABLE_Acc2_0_16;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__foldl_4_p_5(
  MR_Word TypeInfo_for_A_16,
  MR_Word P_5,
  MR_Word Ranges_6,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Ranges_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_12 = STATE_VARIABLE_Acc_0_11;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer L_8 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 0))));
      MR_Integer U_9 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 1))));
      MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, Ranges_6, 2))));
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) L_8 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc_1_14;
      MR_Word next_value_of_Ranges_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_11;

      succeeded = mercury__int__fold_up_5_p_6(TypeInfo_for_A_16, P_5, Var_13, U_9, STATE_VARIABLE_Acc_0_11, &STATE_VARIABLE_Acc_1_14);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Ranges_6 = Rest_10;
        next_value_of_STATE_VARIABLE_Acc_0_11 = STATE_VARIABLE_Acc_1_14;
        Ranges_6 = next_value_of_Ranges_6;
        STATE_VARIABLE_Acc_0_11 = next_value_of_STATE_VARIABLE_Acc_0_11;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__foldl_4_p_4(
  MR_Word TypeInfo_for_A_16,
  MR_Word P_5,
  MR_Word Ranges_6,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Ranges_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_12 = STATE_VARIABLE_Acc_0_11;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer L_8 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 0))));
      MR_Integer U_9 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 1))));
      MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, Ranges_6, 2))));
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) L_8 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc_1_14;
      MR_Word next_value_of_Ranges_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_11;

      succeeded = mercury__int__fold_up_5_p_5(TypeInfo_for_A_16, P_5, Var_13, U_9, STATE_VARIABLE_Acc_0_11, &STATE_VARIABLE_Acc_1_14);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Ranges_6 = Rest_10;
        next_value_of_STATE_VARIABLE_Acc_0_11 = STATE_VARIABLE_Acc_1_14;
        Ranges_6 = next_value_of_Ranges_6;
        STATE_VARIABLE_Acc_0_11 = next_value_of_STATE_VARIABLE_Acc_0_11;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__foldl_4_p_3(
  MR_Word TypeInfo_for_A_16,
  MR_Word P_5,
  MR_Word Ranges_6,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((Ranges_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Acc_12 = STATE_VARIABLE_Acc_0_11;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer L_8 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 0))));
      MR_Integer U_9 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 1))));
      MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, Ranges_6, 2))));
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) L_8 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc_1_14;
      MR_Word next_value_of_Ranges_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_11;

      succeeded = mercury__int__fold_up_5_p_4(TypeInfo_for_A_16, P_5, Var_13, U_9, STATE_VARIABLE_Acc_0_11, &STATE_VARIABLE_Acc_1_14);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Ranges_6 = Rest_10;
        next_value_of_STATE_VARIABLE_Acc_0_11 = STATE_VARIABLE_Acc_1_14;
        Ranges_6 = next_value_of_Ranges_6;
        STATE_VARIABLE_Acc_0_11 = next_value_of_STATE_VARIABLE_Acc_0_11;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__ranges__foldl_4_p_2(
  MR_Word TypeInfo_for_A_16,
  MR_Word P_5,
  MR_Word Ranges_6,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Ranges_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_12 = STATE_VARIABLE_Acc_0_11;
    else
    {
      MR_Integer L_8 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 0))));
      MR_Integer U_9 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 1))));
      MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, Ranges_6, 2))));
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) L_8 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc_1_14;
      MR_Word next_value_of_Ranges_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_11;

      mercury__int__fold_up_5_p_2(TypeInfo_for_A_16, P_5, Var_13, U_9, STATE_VARIABLE_Acc_0_11, &STATE_VARIABLE_Acc_1_14);
      // direct tailcall eliminated
      ;
      next_value_of_Ranges_6 = Rest_10;
      next_value_of_STATE_VARIABLE_Acc_0_11 = STATE_VARIABLE_Acc_1_14;
      Ranges_6 = next_value_of_Ranges_6;
      STATE_VARIABLE_Acc_0_11 = next_value_of_STATE_VARIABLE_Acc_0_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__foldl_4_p_1(
  MR_Word TypeInfo_for_A_16,
  MR_Word P_5,
  MR_Word Ranges_6,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Ranges_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_12 = STATE_VARIABLE_Acc_0_11;
    else
    {
      MR_Integer L_8 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 0))));
      MR_Integer U_9 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 1))));
      MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, Ranges_6, 2))));
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) L_8 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc_1_14;
      MR_Word next_value_of_Ranges_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_11;

      mercury__int__fold_up_5_p_1(TypeInfo_for_A_16, P_5, Var_13, U_9, STATE_VARIABLE_Acc_0_11, &STATE_VARIABLE_Acc_1_14);
      // direct tailcall eliminated
      ;
      next_value_of_Ranges_6 = Rest_10;
      next_value_of_STATE_VARIABLE_Acc_0_11 = STATE_VARIABLE_Acc_1_14;
      Ranges_6 = next_value_of_Ranges_6;
      STATE_VARIABLE_Acc_0_11 = next_value_of_STATE_VARIABLE_Acc_0_11;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__foldl_4_p_0(
  MR_Word TypeInfo_for_A_16,
  MR_Word P_5,
  MR_Word Ranges_6,
  MR_Box STATE_VARIABLE_Acc_0_11,
  MR_Box * STATE_VARIABLE_Acc_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Ranges_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Acc_12 = STATE_VARIABLE_Acc_0_11;
    else
    {
      MR_Integer L_8 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 0))));
      MR_Integer U_9 = ((MR_Integer) ((MR_hl_field(1, Ranges_6, 1))));
      MR_Word Rest_10 = ((MR_Word) ((MR_hl_field(1, Ranges_6, 2))));
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) L_8 + (MR_Unsigned) 1);
      MR_Box STATE_VARIABLE_Acc_1_14;
      MR_Word next_value_of_Ranges_6;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_11;

      mercury__int__fold_up_5_p_0(TypeInfo_for_A_16, P_5, Var_13, U_9, STATE_VARIABLE_Acc_0_11, &STATE_VARIABLE_Acc_1_14);
      // direct tailcall eliminated
      ;
      next_value_of_Ranges_6 = Rest_10;
      next_value_of_STATE_VARIABLE_Acc_0_11 = STATE_VARIABLE_Acc_1_14;
      Ranges_6 = next_value_of_Ranges_6;
      STATE_VARIABLE_Acc_0_11 = next_value_of_STATE_VARIABLE_Acc_0_11;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__ranges__contraction_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer C_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer L_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer H_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word As_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));

      succeeded = (C_2 < (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_14;
        MR_Integer Var_15;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Integer next_value_of_C_2;

        Var_14 = mercury__ranges__negate_aux_2_f_0(HeadVar__1_1, (MR_Word) ((MR_Unsigned) 0U));
        Var_15 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) C_2);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_14;
        next_value_of_C_2 = Var_15;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        C_2 = next_value_of_C_2;
        continue;
      }
      else
      {
        succeeded = (C_2 == (MR_Integer) 0);
        if (succeeded)
          HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__ranges_scalar_common_1[1]));
        else
        {
          succeeded = (C_2 == (MR_Integer) 1);
          if (succeeded)
            HeadVar__3_3 = HeadVar__1_1;
          else
          {
            MR_Integer L0_11;
            MR_Integer H0_12;
            MR_Integer Var_19;
            MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) L_6 + (MR_Unsigned) 1);

            succeeded = (Var_20 > (MR_Integer) 0);
            if (succeeded)
            {
              MR_Integer Var_25;
              MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) Var_20 + (MR_Unsigned) C_2);

              Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
              Var_19 = (Var_25 / C_2);
            }
            else
              Var_19 = (Var_20 / C_2);
            L0_11 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) 1);
            succeeded = (H_7 > (MR_Integer) 0);
            if (succeeded)
              H0_12 = (H_7 / C_2);
            else
            {
              MR_Integer Var_29;
              MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) H_7 - (MR_Unsigned) C_2);

              Var_29 = (MR_Integer) ((MR_Unsigned) Var_30 + (MR_Unsigned) 1);
              H0_12 = (Var_29 / C_2);
            }
            HeadVar__3_3 = mercury__ranges__contraction_0_4_f_0(L0_11, H0_12, As_8, C_2);
          }
        }
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static MR_Word MR_CALL 
mercury__ranges__contraction_0_4_f_0(
  MR_Integer L0_1,
  MR_Integer H0_2,
  MR_Word HeadVar__3_3,
  MR_Integer C_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__5_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L0_1));
        MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (H0_2));
        MR_hl_field(1, HeadVar__5_5, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Integer L1_12 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Integer H1_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word As_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Integer L1N_17;
      MR_Integer H1N_18;
      MR_Integer Var_19;
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) L1_12 + (MR_Unsigned) 1);

      succeeded = (Var_20 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer Var_25;
        MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) Var_20 + (MR_Unsigned) C_4);

        Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
        Var_19 = (Var_25 / C_4);
      }
      else
        Var_19 = (Var_20 / C_4);
      L1N_17 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) 1);
      succeeded = (H1_13 > (MR_Integer) 0);
      if (succeeded)
        H1N_18 = (H1_13 / C_4);
      else
      {
        MR_Integer Var_29;
        MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) H1_13 - (MR_Unsigned) C_4);

        Var_29 = (MR_Integer) ((MR_Unsigned) Var_30 + (MR_Unsigned) 1);
        H1N_18 = (Var_29 / C_4);
      }
      succeeded = (H0_2 >= L1N_17);
      if (succeeded)
      {
        MR_Integer next_value_of_H0_2 = H1N_18;
        MR_Word next_value_of_HeadVar__3_3 = As_14;

        // direct tailcall eliminated
        ;
        H0_2 = next_value_of_H0_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
      else
      {
        MR_Word * AddrSCCcallarg_23_32;

        {
          HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L0_1));
          MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (H0_2));
          MR_hl_field(1, HeadVar__5_5, 2) = NULL;
        }
        AddrSCCcallarg_23_32 = (MR_Word *) (&(MR_hl_field(1, HeadVar__5_5, 2)));
        mercury__ranges__LCMC__func__contraction_0__1_5_p_0(L1N_17, H1N_18, As_14, C_4, AddrSCCcallarg_23_32);
      }
    }
    return HeadVar__5_5;
    break;
  }
}

static void MR_CALL 
mercury__ranges__LCMC__func__contraction_0__1_5_p_0(
  MR_Integer L0_1,
  MR_Integer H0_2,
  MR_Word HeadVar__3_3,
  MR_Integer C_4,
  MR_Word * AddrOfHeadVar__5_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word HeadVar__5_5;

      {
        HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L0_1));
        MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (H0_2));
        MR_hl_field(1, HeadVar__5_5, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *AddrOfHeadVar__5_33 = HeadVar__5_5;
    }
    else
    {
      MR_Integer L1_12 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Integer H1_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word As_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Integer L1N_17;
      MR_Integer H1N_18;
      MR_Integer Var_19;
      MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) L1_12 + (MR_Unsigned) 1);

      succeeded = (Var_20 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer Var_25;
        MR_Integer Var_26 = (MR_Integer) ((MR_Unsigned) Var_20 + (MR_Unsigned) C_4);

        Var_25 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
        Var_19 = (Var_25 / C_4);
      }
      else
        Var_19 = (Var_20 / C_4);
      L1N_17 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) 1);
      succeeded = (H1_13 > (MR_Integer) 0);
      if (succeeded)
        H1N_18 = (H1_13 / C_4);
      else
      {
        MR_Integer Var_29;
        MR_Integer Var_30 = (MR_Integer) ((MR_Unsigned) H1_13 - (MR_Unsigned) C_4);

        Var_29 = (MR_Integer) ((MR_Unsigned) Var_30 + (MR_Unsigned) 1);
        H1N_18 = (Var_29 / C_4);
      }
      succeeded = (H0_2 >= L1N_17);
      if (succeeded)
      {
        MR_Integer next_value_of_H0_2 = H1N_18;
        MR_Word next_value_of_HeadVar__3_3 = As_14;

        // direct tailcall eliminated
        ;
        H0_2 = next_value_of_H0_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
      else
      {
        MR_Word * AddrSCCcallarg_23_32;
        MR_Word HeadVar__5_34;
        MR_Integer next_value_of_L0_1;
        MR_Integer next_value_of_H0_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word * next_value_of_AddrOfHeadVar__5_33;

        {
          HeadVar__5_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__5_34, 0) = ((MR_Box) (L0_1));
          MR_hl_field(1, HeadVar__5_34, 1) = ((MR_Box) (H0_2));
          MR_hl_field(1, HeadVar__5_34, 2) = NULL;
        }
        AddrSCCcallarg_23_32 = (MR_Word *) (&(MR_hl_field(1, HeadVar__5_34, 2)));
        *AddrOfHeadVar__5_33 = HeadVar__5_34;
        // direct tailcall eliminated
        ;
        next_value_of_L0_1 = L1N_17;
        next_value_of_H0_2 = H1N_18;
        next_value_of_HeadVar__3_3 = As_14;
        next_value_of_AddrOfHeadVar__5_33 = AddrSCCcallarg_23_32;
        L0_1 = next_value_of_L0_1;
        H0_2 = next_value_of_H0_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        AddrOfHeadVar__5_33 = next_value_of_AddrOfHeadVar__5_33;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__ranges__dilation_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer C_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      succeeded = (C_2 < (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word Var_14;
        MR_Integer Var_15;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Integer next_value_of_C_2;

        Var_14 = mercury__ranges__negate_aux_2_f_0(HeadVar__1_1, (MR_Word) ((MR_Unsigned) 0U));
        Var_15 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) C_2);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_14;
        next_value_of_C_2 = Var_15;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        C_2 = next_value_of_C_2;
        continue;
      }
      else
      {
        succeeded = (C_2 == (MR_Integer) 0);
        if (succeeded)
          HeadVar__3_3 = (MR_Word) (MR_mkword(1, &mercury__ranges_scalar_common_1[1]));
        else
        {
          succeeded = (C_2 == (MR_Integer) 1);
          if (succeeded)
            HeadVar__3_3 = HeadVar__1_1;
          else
          {
            MR_Word L_11;
            MR_Word L0_12;

            L_11 = mercury__ranges__to_sorted_list_1_f_0(HeadVar__1_1);
            L0_12 = mercury__ranges__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(C_2, L_11);
            mercury__ranges__foldl__ho6_4_p_in__list_0(L0_12, (MR_Word) ((MR_Unsigned) 0U), &HeadVar__3_3);
          }
        }
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static MR_Word MR_CALL 
mercury__ranges__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Integer Var_12,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) Var_12 * (MR_Unsigned) Var_6);
    MR_Word * AddrSCCcallarg_9_13;

    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
    mercury__ranges__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_95_95_49_3_p_0(Var_12, Var_7, AddrSCCcallarg_9_13);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__ranges__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Integer Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Var_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) Var_12 * (MR_Unsigned) Var_6);
      MR_Word * AddrSCCcallarg_9_13;
      MR_Word HeadVar__3_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_14;

      {
        HeadVar__3_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_15, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_15, 1) = NULL;
      }
      AddrSCCcallarg_9_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_15, 1)));
      *AddrOfHeadVar__3_14 = HeadVar__3_15;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_14 = AddrSCCcallarg_9_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_14 = next_value_of_AddrOfHeadVar__3_14;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__ranges__shift_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer C_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer L_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Integer H_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word As0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));

    succeeded = (C_2 == (MR_Integer) 0);
    if (succeeded)
      HeadVar__3_3 = HeadVar__1_1;
    else
    {
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) L_6 + (MR_Unsigned) C_2);
      MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) H_7 + (MR_Unsigned) C_2);
      MR_Word * AddrSCCcallarg_13_14;

      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_11));
        MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_12));
        MR_hl_field(1, HeadVar__3_3, 2) = NULL;
      }
      AddrSCCcallarg_13_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
      mercury__ranges__LCMC__func__shift__1_3_p_0(As0_8, C_2, AddrSCCcallarg_13_14);
    }
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__ranges__LCMC__func__shift__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer C_2,
  MR_Word * AddrOfHeadVar__3_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer L_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer H_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word As0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));

      succeeded = (C_2 == (MR_Integer) 0);
      if (succeeded)
        *AddrOfHeadVar__3_15 = HeadVar__1_1;
      else
      {
        MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) L_6 + (MR_Unsigned) C_2);
        MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) H_7 + (MR_Unsigned) C_2);
        MR_Word * AddrSCCcallarg_13_14;
        MR_Word HeadVar__3_17;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word * next_value_of_AddrOfHeadVar__3_15;

        {
          HeadVar__3_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_17, 0) = ((MR_Box) (Var_11));
          MR_hl_field(1, HeadVar__3_17, 1) = ((MR_Box) (Var_12));
          MR_hl_field(1, HeadVar__3_17, 2) = NULL;
        }
        AddrSCCcallarg_13_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_17, 2)));
        *AddrOfHeadVar__3_15 = HeadVar__3_17;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = As0_8;
        next_value_of_AddrOfHeadVar__3_15 = AddrSCCcallarg_13_14;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        AddrOfHeadVar__3_15 = next_value_of_AddrOfHeadVar__3_15;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__LCMC__func__plus__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_71)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_71 = (MR_Word) ((MR_Unsigned) 0U);
      else
        *AddrOfHeadVar__3_71 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer Var_65 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Var_66 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_71 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Integer Var_68 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Integer Var_69 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));

        if ((Var_67 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((Var_64 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Integer Var_16;
            MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) Var_66 + (MR_Unsigned) Var_69);
            MR_Integer Var_19;
            MR_Word HeadVar__3_74;

            Var_16 = (MR_Integer) ((MR_Unsigned) Var_17 + (MR_Unsigned) 1);
            Var_19 = (MR_Integer) ((MR_Unsigned) Var_65 + (MR_Unsigned) Var_68);
            {
              HeadVar__3_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__3_74, 0) = ((MR_Box) (Var_16));
              MR_hl_field(1, HeadVar__3_74, 1) = ((MR_Box) (Var_19));
              MR_hl_field(1, HeadVar__3_74, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            *AddrOfHeadVar__3_71 = HeadVar__3_74;
          }
          else
          {
            MR_Integer Lx1_24 = ((MR_Integer) ((MR_hl_field(1, Var_64, 0))));
            MR_Integer Hx1_25 = ((MR_Integer) ((MR_hl_field(1, Var_64, 1))));
            MR_Word Xs1_26 = ((MR_Word) ((MR_hl_field(1, Var_64, 2))));
            MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Lx1_24 - (MR_Unsigned) Var_65);
            MR_Integer Var_33 = (MR_Integer) ((MR_Unsigned) Var_68 - (MR_Unsigned) Var_69);

            succeeded = (Var_32 < Var_33);
            if (succeeded)
            {
              MR_Word Var_34;
              MR_Word Var_35;
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word next_value_of_HeadVar__2_2;

              {
                Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_66));
                MR_hl_field(1, Var_34, 1) = ((MR_Box) (Hx1_25));
                MR_hl_field(1, Var_34, 2) = ((MR_Box) (Xs1_26));
              }
              {
                Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_69));
                MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_68));
                MR_hl_field(1, Var_35, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Var_34;
              next_value_of_HeadVar__2_2 = Var_35;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            else
            {
              MR_Integer Var_37;
              MR_Integer Var_38 = (MR_Integer) ((MR_Unsigned) Var_66 + (MR_Unsigned) Var_69);
              MR_Integer Var_40;
              MR_Word Var_42;
              MR_Word * AddrSCCcallarg_41_70;
              MR_Word HeadVar__3_75;
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word * next_value_of_AddrOfHeadVar__3_71;

              Var_37 = (MR_Integer) ((MR_Unsigned) Var_38 + (MR_Unsigned) 1);
              Var_40 = (MR_Integer) ((MR_Unsigned) Var_65 + (MR_Unsigned) Var_68);
              {
                Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_69));
                MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_68));
                MR_hl_field(1, Var_42, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                HeadVar__3_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__3_75, 0) = ((MR_Box) (Var_37));
                MR_hl_field(1, HeadVar__3_75, 1) = ((MR_Box) (Var_40));
                MR_hl_field(1, HeadVar__3_75, 2) = NULL;
              }
              AddrSCCcallarg_41_70 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_75, 2)));
              *AddrOfHeadVar__3_71 = HeadVar__3_75;
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Var_64;
              next_value_of_HeadVar__2_2 = Var_42;
              next_value_of_AddrOfHeadVar__3_71 = AddrSCCcallarg_41_70;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              AddrOfHeadVar__3_71 = next_value_of_AddrOfHeadVar__3_71;
              continue;
            }
          }
        else
        {
          MR_Word A_54;
          MR_Word B_55;
          MR_Word Var_58;
          MR_Word HeadVar__3_81;

          {
            Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_69));
            MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_68));
            MR_hl_field(1, Var_58, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          A_54 = mercury__ranges__plus_2_f_0(HeadVar__1_1, Var_58);
          B_55 = mercury__ranges__plus_2_f_0(HeadVar__1_1, Var_67);
          HeadVar__3_81 = mercury__ranges__union_2_f_0(A_54, B_55);
          *AddrOfHeadVar__3_71 = HeadVar__3_81;
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__ranges__plus_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
        HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_64 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer Var_65 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Var_66 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_67 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Integer Var_68 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Integer Var_69 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));

        if ((Var_67 == (MR_Word) ((MR_Unsigned) 0U)))
          if ((Var_64 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Integer Var_16;
            MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) Var_66 + (MR_Unsigned) Var_69);
            MR_Integer Var_19;

            Var_16 = (MR_Integer) ((MR_Unsigned) Var_17 + (MR_Unsigned) 1);
            Var_19 = (MR_Integer) ((MR_Unsigned) Var_65 + (MR_Unsigned) Var_68);
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_16));
              MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_19));
              MR_hl_field(1, HeadVar__3_3, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            MR_Integer Lx1_24 = ((MR_Integer) ((MR_hl_field(1, Var_64, 0))));
            MR_Integer Hx1_25 = ((MR_Integer) ((MR_hl_field(1, Var_64, 1))));
            MR_Word Xs1_26 = ((MR_Word) ((MR_hl_field(1, Var_64, 2))));
            MR_Integer Var_32 = (MR_Integer) ((MR_Unsigned) Lx1_24 - (MR_Unsigned) Var_65);
            MR_Integer Var_33 = (MR_Integer) ((MR_Unsigned) Var_68 - (MR_Unsigned) Var_69);

            succeeded = (Var_32 < Var_33);
            if (succeeded)
            {
              MR_Word Var_34;
              MR_Word Var_35;
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word next_value_of_HeadVar__2_2;

              {
                Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_66));
                MR_hl_field(1, Var_34, 1) = ((MR_Box) (Hx1_25));
                MR_hl_field(1, Var_34, 2) = ((MR_Box) (Xs1_26));
              }
              {
                Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_69));
                MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_68));
                MR_hl_field(1, Var_35, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Var_34;
              next_value_of_HeadVar__2_2 = Var_35;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              continue;
            }
            else
            {
              MR_Integer Var_37;
              MR_Integer Var_38 = (MR_Integer) ((MR_Unsigned) Var_66 + (MR_Unsigned) Var_69);
              MR_Integer Var_40;
              MR_Word Var_42;
              MR_Word * AddrSCCcallarg_41_70;

              Var_37 = (MR_Integer) ((MR_Unsigned) Var_38 + (MR_Unsigned) 1);
              Var_40 = (MR_Integer) ((MR_Unsigned) Var_65 + (MR_Unsigned) Var_68);
              {
                Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_69));
                MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_68));
                MR_hl_field(1, Var_42, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_37));
                MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_40));
                MR_hl_field(1, HeadVar__3_3, 2) = NULL;
              }
              AddrSCCcallarg_41_70 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
              mercury__ranges__LCMC__func__plus__1_3_p_0(Var_64, Var_42, AddrSCCcallarg_41_70);
            }
          }
        else
        {
          MR_Word A_54;
          MR_Word B_55;
          MR_Word Var_58;

          {
            Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_69));
            MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_68));
            MR_hl_field(1, Var_58, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          A_54 = mercury__ranges__plus_2_f_0(HeadVar__1_1, Var_58);
          B_55 = mercury__ranges__plus_2_f_0(HeadVar__1_1, Var_67);
          HeadVar__3_3 = mercury__ranges__union_2_f_0(A_54, B_55);
        }
      }
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Word MR_CALL 
mercury__ranges__negate_1_f_0(
  MR_Word As_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__ranges__negate_aux_2_f_0(As_3, (MR_Word) ((MR_Unsigned) 0U));
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ranges__negate_aux_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = HeadVar__2_2;
    else
    {
      MR_Integer L_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer U_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word As_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Word Var_9;
      MR_Integer Var_10;
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) U_6);
      MR_Integer Var_13;
      MR_Integer Var_14;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      Var_10 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) 1);
      Var_14 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) L_5);
      Var_13 = (MR_Integer) ((MR_Unsigned) Var_14 - (MR_Unsigned) 1);
      {
        Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_10));
        MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_13));
        MR_hl_field(1, Var_9, 2) = ((MR_Box) (HeadVar__2_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = As_7;
      next_value_of_HeadVar__2_2 = Var_9;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    return HeadVar__3_3;
    break;
  }
}

void MR_CALL 
mercury__ranges__restrict_range_4_p_0(
  MR_Integer Min_5,
  MR_Integer Max_6,
  MR_Word STATE_VARIABLE_Set_0_8,
  MR_Word * STATE_VARIABLE_Set_9)
{
  MR_Word Var_10;
  MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Min_5 - (MR_Unsigned) 1);

  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_11));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) (Max_6));
    MR_hl_field(1, Var_10, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *STATE_VARIABLE_Set_9 = mercury__ranges__intersect_2_f_0(Var_10, STATE_VARIABLE_Set_0_8);
}

MR_Word MR_CALL 
mercury__ranges__restrict_range_3_f_0(
  MR_Integer Min_5,
  MR_Integer Max_6,
  MR_Word As_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_8;
  MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) Min_5 - (MR_Unsigned) 1);

  {
    Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_8, 0) = ((MR_Box) (Var_9));
    MR_hl_field(1, Var_8, 1) = ((MR_Box) (Max_6));
    MR_hl_field(1, Var_8, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  HeadVar__4_4 = mercury__ranges__intersect_2_f_0(Var_8, As_7);
  return HeadVar__4_4;
}

void MR_CALL 
mercury__ranges__restrict_max_3_p_0(
  MR_Integer Max_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  *STATE_VARIABLE_Set_7 = mercury__ranges__restrict_max_2_f_0(Max_4, STATE_VARIABLE_Set_0_6);
}

MR_Word MR_CALL 
mercury__ranges__restrict_max_2_f_0(
  MR_Integer Max_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer L_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer U_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word As0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));

    succeeded = (Max_1 <= L_6);
    if (succeeded)
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      succeeded = (Max_1 <= U_7);
      if (succeeded)
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (L_6));
          MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Max_1));
          MR_hl_field(1, HeadVar__3_3, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      else
      {
        MR_Word * AddrSCCcallarg_11_12;

        {
          HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (L_6));
          MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (U_7));
          MR_hl_field(1, HeadVar__3_3, 2) = NULL;
        }
        AddrSCCcallarg_11_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
        mercury__ranges__LCMC__func__restrict_max__1_3_p_0(Max_1, As0_8, AddrSCCcallarg_11_12);
      }
    }
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__ranges__LCMC__func__restrict_max__1_3_p_0(
  MR_Integer Max_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer L_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word As0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));

      succeeded = (Max_1 <= L_6);
      if (succeeded)
        *AddrOfHeadVar__3_13 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        succeeded = (Max_1 <= U_7);
        if (succeeded)
        {
          MR_Word HeadVar__3_15;

          {
            HeadVar__3_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__3_15, 0) = ((MR_Box) (L_6));
            MR_hl_field(1, HeadVar__3_15, 1) = ((MR_Box) (Max_1));
            MR_hl_field(1, HeadVar__3_15, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *AddrOfHeadVar__3_13 = HeadVar__3_15;
        }
        else
        {
          MR_Word * AddrSCCcallarg_11_12;
          MR_Word HeadVar__3_16;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_13;

          {
            HeadVar__3_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__3_16, 0) = ((MR_Box) (L_6));
            MR_hl_field(1, HeadVar__3_16, 1) = ((MR_Box) (U_7));
            MR_hl_field(1, HeadVar__3_16, 2) = NULL;
          }
          AddrSCCcallarg_11_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_16, 2)));
          *AddrOfHeadVar__3_13 = HeadVar__3_16;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = As0_8;
          next_value_of_AddrOfHeadVar__3_13 = AddrSCCcallarg_11_12;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_13 = next_value_of_AddrOfHeadVar__3_13;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__restrict_min_3_p_0(
  MR_Integer Min_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  *STATE_VARIABLE_Set_7 = mercury__ranges__restrict_min_2_f_0(Min_4, STATE_VARIABLE_Set_0_6);
}

MR_Word MR_CALL 
mercury__ranges__restrict_min_2_f_0(
  MR_Integer Min_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer L_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer U_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word As1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));

      succeeded = (Min_1 <= L_7);
      if (succeeded)
        HeadVar__3_3 = HeadVar__2_2;
      else
      {
        succeeded = (Min_1 <= U_8);
        if (succeeded)
        {
          MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Min_1 - (MR_Unsigned) 1);

          {
            HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_11));
            MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (U_8));
            MR_hl_field(1, HeadVar__3_3, 2) = ((MR_Box) (As1_9));
          }
        }
        else
        {
          MR_Word next_value_of_HeadVar__2_2 = As1_9;

          // direct tailcall eliminated
          ;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return HeadVar__3_3;
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__search_range_4_p_0(
  MR_Integer N_5,
  MR_Word HeadVar__2_2,
  MR_Integer * Lo_9,
  MR_Integer * Hi_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer Lo0_6;
    MR_Integer Hi0_7;
    MR_Word Rest_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Lo0_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Hi0_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      Rest_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      succeeded = (N_5 > Lo0_6);
      if (succeeded)
        succeeded = (N_5 <= Hi0_7);
      if (succeeded)
      {
        *Lo_9 = (MR_Integer) ((MR_Unsigned) Lo0_6 + (MR_Unsigned) 1);
        *Hi_10 = Hi0_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = Rest_8;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__next_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer N0_7,
  MR_Integer * N_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer L_4;
    MR_Integer U_5;
    MR_Word As_6;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      L_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      U_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      As_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      succeeded = (N0_7 < U_5);
      if (succeeded)
      {
        MR_Integer Var_9;

        succeeded = (L_4 > N0_7);
        if (succeeded)
          Var_9 = L_4;
        else
          Var_9 = N0_7;
        *N_8 = (MR_Integer) ((MR_Unsigned) Var_9 + (MR_Unsigned) 1);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = As_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__greatest_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * U_6)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer U0_4;
  MR_Word As_5;

  if (succeeded)
  {
    U0_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    As_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    mercury__ranges__greatest_loop_3_p_0(U0_4, As_5, U_6);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__ranges__greatest_loop_3_p_0(
  MR_Integer U_1,
  MR_Word HeadVar__2_2,
  MR_Integer * U_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *U_3 = U_1;
    else
    {
      MR_Integer U0_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word As_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Integer next_value_of_U_1 = U0_7;
      MR_Word next_value_of_HeadVar__2_2 = As_8;

      // direct tailcall eliminated
      ;
      U_1 = next_value_of_U_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__least_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer L_3;
  MR_Integer Var_6;

  if (succeeded)
  {
    L_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    Var_6 = (MR_Integer) 1;
    *HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) L_3 + (MR_Unsigned) Var_6);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Integer MR_CALL 
mercury__ranges__median_1_f_0(
  MR_Word Set_3)
{
  MR_bool succeeded;
  MR_Integer Median_4;
  MR_Integer Count_5;
  MR_Integer MiddleIndex_6;
  MR_Unsigned UN_13;

  mercury__ranges__ucount_acc_3_p_0(Set_3, (MR_Unsigned) 0U, &UN_13);
{
#define MR_PROC_LABEL mercury__ranges__median_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = UN_13 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Count_5  = I;
}
  succeeded = (Count_5 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) Count_5 + (MR_Unsigned) 1);

    MiddleIndex_6 = (Var_8 / (MR_Integer) 2);
  }
  else
    mercury__require__error_2_p_0((MR_String) "function \140ranges.median\'/1", (MR_String) "empty set");
  Median_4 = mercury__ranges__element_index_2_f_0(Set_3, MiddleIndex_6);
  return Median_4;
}

static MR_Integer MR_CALL 
mercury__ranges__element_index_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer I_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Box conv0_HeadVar__3_3;

      conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_String) "function \140ranges.element_index\'/2", (MR_String) "index out of range");
      HeadVar__3_3 = ((MR_Integer) (conv0_HeadVar__3_3));
    }
    else
    {
      MR_Integer L_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer U_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Rest_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer N0_12 = (MR_Integer) ((MR_Unsigned) L_7 + (MR_Unsigned) I_2);

      succeeded = (N0_12 <= U_8);
      if (succeeded)
        HeadVar__3_3 = N0_12;
      else
      {
        MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) N0_12 - (MR_Unsigned) U_8);
        MR_Word next_value_of_HeadVar__1_1 = Rest_9;
        MR_Integer next_value_of_I_2 = Var_13;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        I_2 = next_value_of_I_2;
        continue;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Integer MR_CALL 
mercury__ranges__size_1_f_0(
  MR_Word Xs_3)
{
  MR_Integer HeadVar__2_2;
  MR_Unsigned UN_4;

  mercury__ranges__ucount_acc_3_p_0(Xs_3, (MR_Unsigned) 0U, &UN_4);
{
#define MR_PROC_LABEL mercury__ranges__size_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = UN_4 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = I;
}
  return HeadVar__2_2;
}

MR_Unsigned MR_CALL 
mercury__ranges__ucount_1_f_0(
  MR_Word Set_3)
{
  MR_Unsigned N_4;

  mercury__ranges__ucount_acc_3_p_0(Set_3, (MR_Unsigned) 0U, &N_4);
  return N_4;
}

MR_Integer MR_CALL 
mercury__ranges__count_1_f_0(
  MR_Word Set_3)
{
  MR_Integer N_4;
  MR_Unsigned UN_5;

  mercury__ranges__ucount_acc_3_p_0(Set_3, (MR_Unsigned) 0U, &UN_5);
{
#define MR_PROC_LABEL mercury__ranges__count_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = UN_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	N_4  = I;
}
  return N_4;
}

void MR_CALL 
mercury__ranges__ucount_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Unsigned STATE_VARIABLE_N_0_2,
  MR_Unsigned * STATE_VARIABLE_N_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_N_3 = STATE_VARIABLE_N_0_2;
    else
    {
      MR_Integer Lo_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer Hi_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Rest_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Unsigned STATE_VARIABLE_N_1_13;
      MR_Unsigned Var_14;
      MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) Hi_8 - (MR_Unsigned) Lo_7);
      MR_Word next_value_of_HeadVar__1_1;
      MR_Unsigned next_value_of_STATE_VARIABLE_N_0_2;

{
#define MR_PROC_LABEL mercury__ranges__ucount_acc_3_p_0

	MR_Integer I;
	MR_Unsigned U;

	I = Var_15 ;
		{

    U = (MR_Unsigned) I;


		;}
#undef MR_PROC_LABEL
	Var_14  = U;
}
      STATE_VARIABLE_N_1_13 = (STATE_VARIABLE_N_0_2 + Var_14);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Rest_9;
      next_value_of_STATE_VARIABLE_N_0_2 = STATE_VARIABLE_N_1_13;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_N_0_2 = next_value_of_STATE_VARIABLE_N_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__ranges__to_sorted_list_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Lo_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Integer Hi_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Rest_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word Var_6;

    Var_6 = mercury__ranges__to_sorted_list_1_f_0(Rest_5);
    HeadVar__2_2 = mercury__ranges__to_sorted_list_2_3_f_0(Lo_3, Hi_4, Var_6);
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ranges__to_sorted_list_2_3_f_0(
  MR_Integer Lo_5,
  MR_Integer Hi_6,
  MR_Word List_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Hi_6 == Lo_5);
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__4_4 = List_7;
    else
    {
      MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) Hi_6 - (MR_Unsigned) 1);
      MR_Word Var_10;
      MR_Integer next_value_of_Hi_6;
      MR_Word next_value_of_List_7;

      {
        Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_10, 0) = ((MR_Box) (Hi_6));
        MR_hl_field(1, Var_10, 1) = ((MR_Box) (List_7));
      }
      // direct tailcall eliminated
      ;
      next_value_of_Hi_6 = Var_8;
      next_value_of_List_7 = Var_10;
      Hi_6 = next_value_of_Hi_6;
      List_7 = next_value_of_List_7;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

MR_Word MR_CALL 
mercury__ranges__from_set_1_f_0(
  MR_Word Set_3)
{
  MR_Word HeadVar__2_2;

  mercury__ranges__set_to_ranges_2_p_0(Set_3, &HeadVar__2_2);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__ranges__set_to_ranges_1_f_0(
  MR_Word Set_3)
{
  MR_Word Ranges_4;

  mercury__ranges__set_to_ranges_2_p_0(Set_3, &Ranges_4);
  return Ranges_4;
}

void MR_CALL 
mercury__ranges__set_to_ranges_2_p_0(
  MR_Word Set_3,
  MR_Word * Ranges_4)
{
  MR_Word Var_19 = (MR_Word) (Set_3);

  mercury__ranges__foldl__ho6_4_p_in__list_0(Var_19, (MR_Word) ((MR_Unsigned) 0U), Ranges_4);
}

MR_Word MR_CALL 
mercury__ranges__from_list_1_f_0(
  MR_Word List_3)
{
  MR_Word HeadVar__2_2;

  mercury__ranges__foldl__ho6_4_p_in__list_0(List_3, (MR_Word) ((MR_Unsigned) 0U), &HeadVar__2_2);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__ranges__list_to_ranges_2_p_0(
  MR_Word List_3,
  MR_Word * Set_4)
{
  mercury__ranges__foldl__ho6_4_p_in__list_0(List_3, (MR_Word) ((MR_Unsigned) 0U), Set_4);
}

MR_Word MR_CALL 
mercury__ranges__list_to_ranges_1_f_0(
  MR_Word List_3)
{
  MR_Word Set_4;

  mercury__ranges__foldl__ho6_4_p_in__list_0(List_3, (MR_Word) ((MR_Unsigned) 0U), &Set_4);
  return Set_4;
}

static void MR_CALL 
mercury__ranges__foldl__ho6_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Integer Var_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_13;
      MR_Word Var_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      Var_16 = mercury__ranges__make_singleton_set_1_f_0(Var_9);
      Var_13 = mercury__ranges__union_2_f_0(HeadVar__3_3, Var_16);
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

void MR_CALL 
mercury__ranges__prune_to_prev_non_member_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Integer STATE_VARIABLE_N_0_3,
  MR_Integer * STATE_VARIABLE_N_4)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_N_4 = STATE_VARIABLE_N_0_3;
  }
  else
  {
    MR_Integer LA_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Integer UA_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word As0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));

    succeeded = (STATE_VARIABLE_N_0_3 <= LA_8);
    if (succeeded)
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_N_4 = STATE_VARIABLE_N_0_3;
    }
    else
    {
      succeeded = (STATE_VARIABLE_N_0_3 <= UA_9);
      if (succeeded)
      {
        *STATE_VARIABLE_N_4 = LA_8;
        *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word * AddrResult0_16;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LA_8));
          MR_hl_field(1, base, 1) = ((MR_Box) (UA_9));
          MR_hl_field(1, base, 2) = NULL;
        }
        AddrResult0_16 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__2_2, 2)));
        mercury__ranges__LCMC__pred__prune_to_prev_non_member__1_4_p_0(As0_10, AddrResult0_16, STATE_VARIABLE_N_0_3, STATE_VARIABLE_N_4);
      }
    }
  }
}

void MR_CALL 
mercury__ranges__LCMC__pred__prune_to_prev_non_member__1_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_17,
  MR_Integer STATE_VARIABLE_N_0_3,
  MR_Integer * STATE_VARIABLE_N_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_17 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_N_4 = STATE_VARIABLE_N_0_3;
    }
    else
    {
      MR_Integer LA_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer UA_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word As0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));

      succeeded = (STATE_VARIABLE_N_0_3 <= LA_8);
      if (succeeded)
      {
        *AddrOfHeadVar__2_17 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_N_4 = STATE_VARIABLE_N_0_3;
      }
      else
      {
        succeeded = (STATE_VARIABLE_N_0_3 <= UA_9);
        if (succeeded)
        {
          *STATE_VARIABLE_N_4 = LA_8;
          *AddrOfHeadVar__2_17 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word * AddrResult0_16;
          MR_Word HeadVar__2_20;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word * next_value_of_AddrOfHeadVar__2_17;

          {
            HeadVar__2_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__2_20, 0) = ((MR_Box) (LA_8));
            MR_hl_field(1, HeadVar__2_20, 1) = ((MR_Box) (UA_9));
            MR_hl_field(1, HeadVar__2_20, 2) = NULL;
          }
          AddrResult0_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_20, 2)));
          *AddrOfHeadVar__2_17 = HeadVar__2_20;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = As0_10;
          next_value_of_AddrOfHeadVar__2_17 = AddrResult0_16;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          AddrOfHeadVar__2_17 = next_value_of_AddrOfHeadVar__2_17;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__prune_to_next_non_member_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Integer STATE_VARIABLE_N_0_3,
  MR_Integer * STATE_VARIABLE_N_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_N_4 = STATE_VARIABLE_N_0_3;
    }
    else
    {
      MR_Integer LA_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer UA_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word As0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));

      succeeded = (STATE_VARIABLE_N_0_3 <= LA_9);
      if (succeeded)
      {
        *HeadVar__2_2 = HeadVar__1_1;
        *STATE_VARIABLE_N_4 = STATE_VARIABLE_N_0_3;
      }
      else
      {
        succeeded = (STATE_VARIABLE_N_0_3 <= UA_10);
        if (succeeded)
        {
          *STATE_VARIABLE_N_4 = (MR_Integer) ((MR_Unsigned) UA_10 + (MR_Unsigned) 1);
          *HeadVar__2_2 = As0_11;
        }
        else
        {
          MR_Word next_value_of_HeadVar__1_1 = As0_11;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__split_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Integer * Hi_6,
  MR_Word * Rest_7)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer Lo_5;
  MR_Integer Var_8;

  if (succeeded)
  {
    Lo_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    *Hi_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    *Rest_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    Var_8 = (MR_Integer) 1;
    *HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Lo_5 + (MR_Unsigned) Var_8);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__ranges__difference_3_p_0(
  MR_Word Xs_4,
  MR_Word Ys_5,
  MR_Word * Difference_6)
{
  *Difference_6 = mercury__ranges__difference_2_f_0(Xs_4, Ys_5);
}

MR_Word MR_CALL 
mercury__ranges__intersection_2_f_0(
  MR_Word Xs_4,
  MR_Word Ys_5)
{
  MR_Word HeadVar__3_3;

  HeadVar__3_3 = mercury__ranges__intersect_2_f_0(Xs_4, Ys_5);
  return HeadVar__3_3;
}

void MR_CALL 
mercury__ranges__intersect_3_p_0(
  MR_Word Xs_4,
  MR_Word Ys_5,
  MR_Word * Intersection_6)
{
  *Intersection_6 = mercury__ranges__intersect_2_f_0(Xs_4, Ys_5);
}

void MR_CALL 
mercury__ranges__union_3_p_0(
  MR_Word Xs_4,
  MR_Word Ys_5,
  MR_Word * Union_6)
{
  *Union_6 = mercury__ranges__union_2_f_0(Xs_4, Ys_5);
}

void MR_CALL 
mercury__ranges__compare_lex_3_p_0(
  MR_Word * tscc_output_ptr_1_Result_4,
  MR_Word tscc_proc_1_input_1_A_5,
  MR_Word tscc_proc_1_input_2_B_6)
{
  MR_Integer tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17;
  MR_Integer tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18;
  MR_Integer tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19;
  MR_Integer tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20;
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21;
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22;
  MR_Word tscc_output_1_Result_4;

  // The code for TSCC PROC 1: pred ranges.compare_lex/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ranges.compare_lex/3-0
  ;
  // proc 2 in TSCC: pred ranges.compare_lex_2/7-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Result_4;
    MR_Word A_5 = tscc_proc_1_input_1_A_5;
    MR_Word B_6 = tscc_proc_1_input_2_B_6;

    if ((A_5 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((B_6 == (MR_Word) ((MR_Unsigned) 0U)))
        Result_4 = (MR_Integer) 0;
      else
        Result_4 = (MR_Integer) 1;
    else
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, A_5, 2))));
      MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(1, A_5, 1))));
      MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(1, A_5, 0))));

      if ((B_6 == (MR_Word) ((MR_Unsigned) 0U)))
        Result_4 = (MR_Integer) 2;
      else
      {
        MR_Integer LBB_16 = ((MR_Integer) ((MR_hl_field(1, B_6, 0))));
        MR_Integer UBB_17 = ((MR_Integer) ((MR_hl_field(1, B_6, 1))));
        MR_Word BPrime_18 = ((MR_Word) ((MR_hl_field(1, B_6, 2))));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) Var_25 + (MR_Unsigned) 1);
        MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) LBB_16 + (MR_Unsigned) 1);
        MR_Integer next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = Var_19;
        MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = Var_24;
        MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = Var_20;
        MR_Integer next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = UBB_17;
        MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = Var_23;
        MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = BPrime_18;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17;
        tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18;
        tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19;
        tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20;
        tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21;
        tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22;
        goto top_of_proc_2;
      }
    }
    tscc_output_1_Result_4 = Result_4;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Result_8;
    MR_Integer STATE_VARIABLE_LBA_0_17 = tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17;
    MR_Integer STATE_VARIABLE_UBA_0_18 = tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18;
    MR_Integer STATE_VARIABLE_LBB_0_19 = tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19;
    MR_Integer STATE_VARIABLE_UBB_0_20 = tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20;
    MR_Word STATE_VARIABLE_NextA_0_21 = tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21;
    MR_Word STATE_VARIABLE_NextB_0_22 = tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22;
    MR_bool succeeded = (STATE_VARIABLE_LBA_0_17 < STATE_VARIABLE_LBB_0_19);
    MR_Word LBResult_15;

    if (succeeded)
      LBResult_15 = (MR_Integer) 1;
    else
    {
      succeeded = (STATE_VARIABLE_LBA_0_17 == STATE_VARIABLE_LBB_0_19);
      if (succeeded)
        LBResult_15 = (MR_Integer) 0;
      else
        LBResult_15 = (MR_Integer) 2;
    }
    switch (LBResult_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Result_8 = LBResult_15;
        break;
      case (MR_Integer) 0:
        {
          MR_Word UBResult_16;

          succeeded = (STATE_VARIABLE_UBA_0_18 < STATE_VARIABLE_UBB_0_20);
          if (succeeded)
            UBResult_16 = (MR_Integer) 1;
          else
          {
            succeeded = (STATE_VARIABLE_UBA_0_18 == STATE_VARIABLE_UBB_0_20);
            if (succeeded)
              UBResult_16 = (MR_Integer) 0;
            else
              UBResult_16 = (MR_Integer) 2;
          }
          switch (UBResult_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                succeeded = (STATE_VARIABLE_LBA_0_17 == STATE_VARIABLE_UBA_0_18);
                if (succeeded)
                  succeeded = (STATE_VARIABLE_LBB_0_19 == STATE_VARIABLE_UBB_0_20);
                if (succeeded)
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_A_5 = STATE_VARIABLE_NextA_0_21;
                  MR_Word next_value_of_tscc_proc_1_input_2_B_6 = STATE_VARIABLE_NextB_0_22;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_A_5 = next_value_of_tscc_proc_1_input_1_A_5;
                  tscc_proc_1_input_2_B_6 = next_value_of_tscc_proc_1_input_2_B_6;
                  goto top_of_proc_1;
                }
                else
                {
                  succeeded = (STATE_VARIABLE_LBA_0_17 < STATE_VARIABLE_UBA_0_18);
                  if (succeeded)
                    succeeded = (STATE_VARIABLE_LBB_0_19 == STATE_VARIABLE_UBB_0_20);
                  if (succeeded)
                  {
                    MR_Integer STATE_VARIABLE_LBA_1_23 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LBA_0_17 + (MR_Unsigned) 1);

                    if ((STATE_VARIABLE_NextB_0_22 == (MR_Word) ((MR_Unsigned) 0U)))
                      Result_8 = (MR_Integer) 2;
                    else
                    {
                      MR_Integer STATE_VARIABLE_LBB_1_25 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_NextB_0_22, 0))));
                      MR_Integer STATE_VARIABLE_UBB_1_26 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_NextB_0_22, 1))));
                      MR_Word STATE_VARIABLE_NextB_1_27 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_NextB_0_22, 2))));
                      MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LBB_1_25 + (MR_Unsigned) 1);
                      MR_Integer next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = STATE_VARIABLE_LBA_1_23;
                      MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = STATE_VARIABLE_UBA_0_18;
                      MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = Var_28;
                      MR_Integer next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = STATE_VARIABLE_UBB_1_26;
                      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = STATE_VARIABLE_NextA_0_21;
                      MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = STATE_VARIABLE_NextB_1_27;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17;
                      tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18;
                      tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19;
                      tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20;
                      tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21;
                      tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22;
                      goto top_of_proc_2;
                    }
                  }
                  else
                  {
                    succeeded = (STATE_VARIABLE_LBA_0_17 == STATE_VARIABLE_UBA_0_18);
                    if (succeeded)
                      succeeded = (STATE_VARIABLE_LBB_0_19 < STATE_VARIABLE_UBB_0_20);
                    if (succeeded)
                    {
                      MR_Integer STATE_VARIABLE_LBB_1_44 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LBB_0_19 + (MR_Unsigned) 1);

                      if ((STATE_VARIABLE_NextA_0_21 == (MR_Word) ((MR_Unsigned) 0U)))
                        Result_8 = (MR_Integer) 1;
                      else
                      {
                        MR_Integer STATE_VARIABLE_UBA_1_33 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_NextA_0_21, 1))));
                        MR_Word STATE_VARIABLE_NextA_1_34 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_NextA_0_21, 2))));
                        MR_Integer Var_35;
                        MR_Integer STATE_VARIABLE_LBA_1_41 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_NextA_0_21, 0))));
                        MR_Integer next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17;
                        MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18;
                        MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19;
                        MR_Integer next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20;
                        MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21;
                        MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22;

                        Var_35 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LBA_1_41 + (MR_Unsigned) 1);
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = Var_35;
                        next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = STATE_VARIABLE_UBA_1_33;
                        next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = STATE_VARIABLE_LBB_1_44;
                        next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = STATE_VARIABLE_UBB_0_20;
                        next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = STATE_VARIABLE_NextA_1_34;
                        next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = STATE_VARIABLE_NextB_0_22;
                        tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17;
                        tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18;
                        tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19;
                        tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20;
                        tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21;
                        tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22;
                        goto top_of_proc_2;
                      }
                    }
                    else
                    {
                      MR_Integer STATE_VARIABLE_LBA_1_45 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LBA_0_17 + (MR_Unsigned) 1);
                      MR_Integer STATE_VARIABLE_LBB_1_46 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LBB_0_19 + (MR_Unsigned) 1);
                      MR_Integer next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = STATE_VARIABLE_LBA_1_45;
                      MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = STATE_VARIABLE_UBA_0_18;
                      MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = STATE_VARIABLE_LBB_1_46;
                      MR_Integer next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = STATE_VARIABLE_UBB_0_20;
                      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = STATE_VARIABLE_NextA_0_21;
                      MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = STATE_VARIABLE_NextB_0_22;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17;
                      tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18;
                      tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19;
                      tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20;
                      tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21;
                      tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22;
                      goto top_of_proc_2;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_tscc_proc_1_input_1_A_5 = STATE_VARIABLE_NextA_0_21;
                MR_Word next_value_of_tscc_proc_1_input_2_B_6 = STATE_VARIABLE_NextB_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_A_5 = next_value_of_tscc_proc_1_input_1_A_5;
                tscc_proc_1_input_2_B_6 = next_value_of_tscc_proc_1_input_2_B_6;
                goto top_of_proc_1;
              }
              break;
          }
        }
        break;
    }
    tscc_output_1_Result_4 = Result_8;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_Result_4 = tscc_output_1_Result_4;
  return;
}

static void MR_CALL 
mercury__ranges__compare_lex_2_7_p_0(
  MR_Word * tscc_output_ptr_1_Result_4,
  MR_Integer tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17,
  MR_Integer tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18,
  MR_Integer tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19,
  MR_Integer tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22)
{
  MR_Word tscc_proc_1_input_1_A_5;
  MR_Word tscc_proc_1_input_2_B_6;
  MR_Word tscc_output_1_Result_4;

  // The code for TSCC PROC 2: pred ranges.compare_lex_2/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ranges.compare_lex/3-0
  ;
  // proc 2 in TSCC: pred ranges.compare_lex_2/7-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Result_4;
    MR_Word A_5 = tscc_proc_1_input_1_A_5;
    MR_Word B_6 = tscc_proc_1_input_2_B_6;

    if ((A_5 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((B_6 == (MR_Word) ((MR_Unsigned) 0U)))
        Result_4 = (MR_Integer) 0;
      else
        Result_4 = (MR_Integer) 1;
    else
    {
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(1, A_5, 2))));
      MR_Integer Var_24 = ((MR_Integer) ((MR_hl_field(1, A_5, 1))));
      MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(1, A_5, 0))));

      if ((B_6 == (MR_Word) ((MR_Unsigned) 0U)))
        Result_4 = (MR_Integer) 2;
      else
      {
        MR_Integer LBB_16 = ((MR_Integer) ((MR_hl_field(1, B_6, 0))));
        MR_Integer UBB_17 = ((MR_Integer) ((MR_hl_field(1, B_6, 1))));
        MR_Word BPrime_18 = ((MR_Word) ((MR_hl_field(1, B_6, 2))));
        MR_Integer Var_19 = (MR_Integer) ((MR_Unsigned) Var_25 + (MR_Unsigned) 1);
        MR_Integer Var_20 = (MR_Integer) ((MR_Unsigned) LBB_16 + (MR_Unsigned) 1);
        MR_Integer next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = Var_19;
        MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = Var_24;
        MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = Var_20;
        MR_Integer next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = UBB_17;
        MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = Var_23;
        MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = BPrime_18;

        // direct tailcall eliminated
        ;
        tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17;
        tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18;
        tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19;
        tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20;
        tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21;
        tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22;
        goto top_of_proc_2;
      }
    }
    tscc_output_1_Result_4 = Result_4;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Result_8;
    MR_Integer STATE_VARIABLE_LBA_0_17 = tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17;
    MR_Integer STATE_VARIABLE_UBA_0_18 = tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18;
    MR_Integer STATE_VARIABLE_LBB_0_19 = tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19;
    MR_Integer STATE_VARIABLE_UBB_0_20 = tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20;
    MR_Word STATE_VARIABLE_NextA_0_21 = tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21;
    MR_Word STATE_VARIABLE_NextB_0_22 = tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22;
    MR_bool succeeded = (STATE_VARIABLE_LBA_0_17 < STATE_VARIABLE_LBB_0_19);
    MR_Word LBResult_15;

    if (succeeded)
      LBResult_15 = (MR_Integer) 1;
    else
    {
      succeeded = (STATE_VARIABLE_LBA_0_17 == STATE_VARIABLE_LBB_0_19);
      if (succeeded)
        LBResult_15 = (MR_Integer) 0;
      else
        LBResult_15 = (MR_Integer) 2;
    }
    switch (LBResult_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Result_8 = LBResult_15;
        break;
      case (MR_Integer) 0:
        {
          MR_Word UBResult_16;

          succeeded = (STATE_VARIABLE_UBA_0_18 < STATE_VARIABLE_UBB_0_20);
          if (succeeded)
            UBResult_16 = (MR_Integer) 1;
          else
          {
            succeeded = (STATE_VARIABLE_UBA_0_18 == STATE_VARIABLE_UBB_0_20);
            if (succeeded)
              UBResult_16 = (MR_Integer) 0;
            else
              UBResult_16 = (MR_Integer) 2;
          }
          switch (UBResult_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                succeeded = (STATE_VARIABLE_LBA_0_17 == STATE_VARIABLE_UBA_0_18);
                if (succeeded)
                  succeeded = (STATE_VARIABLE_LBB_0_19 == STATE_VARIABLE_UBB_0_20);
                if (succeeded)
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_A_5 = STATE_VARIABLE_NextA_0_21;
                  MR_Word next_value_of_tscc_proc_1_input_2_B_6 = STATE_VARIABLE_NextB_0_22;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_A_5 = next_value_of_tscc_proc_1_input_1_A_5;
                  tscc_proc_1_input_2_B_6 = next_value_of_tscc_proc_1_input_2_B_6;
                  goto top_of_proc_1;
                }
                else
                {
                  succeeded = (STATE_VARIABLE_LBA_0_17 < STATE_VARIABLE_UBA_0_18);
                  if (succeeded)
                    succeeded = (STATE_VARIABLE_LBB_0_19 == STATE_VARIABLE_UBB_0_20);
                  if (succeeded)
                  {
                    MR_Integer STATE_VARIABLE_LBA_1_23 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LBA_0_17 + (MR_Unsigned) 1);

                    if ((STATE_VARIABLE_NextB_0_22 == (MR_Word) ((MR_Unsigned) 0U)))
                      Result_8 = (MR_Integer) 2;
                    else
                    {
                      MR_Integer STATE_VARIABLE_LBB_1_25 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_NextB_0_22, 0))));
                      MR_Integer STATE_VARIABLE_UBB_1_26 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_NextB_0_22, 1))));
                      MR_Word STATE_VARIABLE_NextB_1_27 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_NextB_0_22, 2))));
                      MR_Integer Var_28 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LBB_1_25 + (MR_Unsigned) 1);
                      MR_Integer next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = STATE_VARIABLE_LBA_1_23;
                      MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = STATE_VARIABLE_UBA_0_18;
                      MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = Var_28;
                      MR_Integer next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = STATE_VARIABLE_UBB_1_26;
                      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = STATE_VARIABLE_NextA_0_21;
                      MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = STATE_VARIABLE_NextB_1_27;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17;
                      tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18;
                      tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19;
                      tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20;
                      tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21;
                      tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22;
                      goto top_of_proc_2;
                    }
                  }
                  else
                  {
                    succeeded = (STATE_VARIABLE_LBA_0_17 == STATE_VARIABLE_UBA_0_18);
                    if (succeeded)
                      succeeded = (STATE_VARIABLE_LBB_0_19 < STATE_VARIABLE_UBB_0_20);
                    if (succeeded)
                    {
                      MR_Integer STATE_VARIABLE_LBB_1_44 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LBB_0_19 + (MR_Unsigned) 1);

                      if ((STATE_VARIABLE_NextA_0_21 == (MR_Word) ((MR_Unsigned) 0U)))
                        Result_8 = (MR_Integer) 1;
                      else
                      {
                        MR_Integer STATE_VARIABLE_UBA_1_33 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_NextA_0_21, 1))));
                        MR_Word STATE_VARIABLE_NextA_1_34 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_NextA_0_21, 2))));
                        MR_Integer Var_35;
                        MR_Integer STATE_VARIABLE_LBA_1_41 = ((MR_Integer) ((MR_hl_field(1, STATE_VARIABLE_NextA_0_21, 0))));
                        MR_Integer next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17;
                        MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18;
                        MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19;
                        MR_Integer next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20;
                        MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21;
                        MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22;

                        Var_35 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LBA_1_41 + (MR_Unsigned) 1);
                        // direct tailcall eliminated
                        ;
                        next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = Var_35;
                        next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = STATE_VARIABLE_UBA_1_33;
                        next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = STATE_VARIABLE_LBB_1_44;
                        next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = STATE_VARIABLE_UBB_0_20;
                        next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = STATE_VARIABLE_NextA_1_34;
                        next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = STATE_VARIABLE_NextB_0_22;
                        tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17;
                        tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18;
                        tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19;
                        tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20;
                        tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21;
                        tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22;
                        goto top_of_proc_2;
                      }
                    }
                    else
                    {
                      MR_Integer STATE_VARIABLE_LBA_1_45 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LBA_0_17 + (MR_Unsigned) 1);
                      MR_Integer STATE_VARIABLE_LBB_1_46 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LBB_0_19 + (MR_Unsigned) 1);
                      MR_Integer next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = STATE_VARIABLE_LBA_1_45;
                      MR_Integer next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = STATE_VARIABLE_UBA_0_18;
                      MR_Integer next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = STATE_VARIABLE_LBB_1_46;
                      MR_Integer next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = STATE_VARIABLE_UBB_0_20;
                      MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = STATE_VARIABLE_NextA_0_21;
                      MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = STATE_VARIABLE_NextB_0_22;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17 = next_value_of_tscc_proc_2_input_1_STATE_VARIABLE_LBA_0_17;
                      tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18 = next_value_of_tscc_proc_2_input_2_STATE_VARIABLE_UBA_0_18;
                      tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19 = next_value_of_tscc_proc_2_input_3_STATE_VARIABLE_LBB_0_19;
                      tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20 = next_value_of_tscc_proc_2_input_4_STATE_VARIABLE_UBB_0_20;
                      tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_NextA_0_21;
                      tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_NextB_0_22;
                      goto top_of_proc_2;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word next_value_of_tscc_proc_1_input_1_A_5 = STATE_VARIABLE_NextA_0_21;
                MR_Word next_value_of_tscc_proc_1_input_2_B_6 = STATE_VARIABLE_NextB_0_22;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_A_5 = next_value_of_tscc_proc_1_input_1_A_5;
                tscc_proc_1_input_2_B_6 = next_value_of_tscc_proc_1_input_2_B_6;
                goto top_of_proc_1;
              }
              break;
          }
        }
        break;
    }
    tscc_output_1_Result_4 = Result_8;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_Result_4 = tscc_output_1_Result_4;
  return;
}

MR_bool MR_CALL 
mercury__ranges__disjoint_2_p_0(
  MR_Word SetA_3,
  MR_Word SetB_4)
{
  MR_bool succeeded;
  MR_Word Var_5;

  Var_5 = mercury__ranges__intersect_2_f_0(SetA_3, SetB_4);
  succeeded = (Var_5 == (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

MR_Word MR_CALL 
mercury__ranges__intersect_2_f_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1,
  MR_Word tscc_proc_1_input_2_HeadVar__2_2)
{
  MR_Word tscc_proc_2_input_1_HeadVar__1_1;
  MR_Integer tscc_proc_2_input_2_UB_2;
  MR_Word tscc_proc_2_input_3_Bs0_3;
  MR_Word tscc_output_1_HeadVar__3_3;

  // The code for TSCC PROC 1: func ranges.intersect/2-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: func ranges.intersect/2-0
  ;
  // proc 2 in TSCC: func ranges.diff_a_nb/3-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_2_HeadVar__2_2;
    MR_Word HeadVar__3_3;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer LB_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Integer UB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Bs0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Word R_17;

        succeeded = (Var_21 < LB_13);
        if (succeeded)
          R_17 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_21 == LB_13);
          if (succeeded)
            R_17 = (MR_Integer) 0;
          else
            R_17 = (MR_Integer) 2;
        }
        switch (R_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = HeadVar__2_2;
              MR_Integer next_value_of_tscc_proc_2_input_2_UB_2 = Var_20;
              MR_Word next_value_of_tscc_proc_2_input_3_Bs0_3 = Var_19;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              tscc_proc_2_input_2_UB_2 = next_value_of_tscc_proc_2_input_2_UB_2;
              tscc_proc_2_input_3_Bs0_3 = next_value_of_tscc_proc_2_input_3_Bs0_3;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word R_22;

              succeeded = (Var_20 < UB_14);
              if (succeeded)
                R_22 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_20 > UB_14);
                if (succeeded)
                  R_22 = (MR_Integer) 2;
                else
                  R_22 = (MR_Integer) 0;
              }
              switch (R_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word * AddrSCCcallarg_23_27;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_20));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_23_27 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__diff_a_nb__1_4_p_0(Var_19, UB_14, Bs0_15, AddrSCCcallarg_23_27);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word * AddrSCCcallarg_24_28;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_20));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_24_28 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__intersect__1_3_p_0(Var_19, Bs0_15, AddrSCCcallarg_24_28);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word * AddrSCCcallarg_25_29;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (UB_14));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_25_29 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__diff_a_nb__1_4_p_0(Bs0_15, Var_20, Var_19, AddrSCCcallarg_25_29);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = HeadVar__1_1;
              MR_Integer next_value_of_tscc_proc_2_input_2_UB_2 = UB_14;
              MR_Word next_value_of_tscc_proc_2_input_3_Bs0_3 = Bs0_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              tscc_proc_2_input_2_UB_2 = next_value_of_tscc_proc_2_input_2_UB_2;
              tscc_proc_2_input_3_Bs0_3 = next_value_of_tscc_proc_2_input_3_Bs0_3;
              goto top_of_proc_2;
            }
            break;
        }
      }
    }
    tscc_output_1_HeadVar__3_3 = HeadVar__3_3;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
    MR_Integer UB_2 = tscc_proc_2_input_2_UB_2;
    MR_Word Bs0_3 = tscc_proc_2_input_3_Bs0_3;
    MR_Word HeadVar__4_4;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer LA_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer UA_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word As0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Word R_14;

      succeeded = (LA_8 < UB_2);
      if (succeeded)
        R_14 = (MR_Integer) 1;
      else
      {
        succeeded = (LA_8 == UB_2);
        if (succeeded)
          R_14 = (MR_Integer) 0;
        else
          R_14 = (MR_Integer) 2;
      }
      switch (R_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word R_16;

            succeeded = (UA_9 < UB_2);
            if (succeeded)
              R_16 = (MR_Integer) 1;
            else
            {
              succeeded = (UA_9 == UB_2);
              if (succeeded)
                R_16 = (MR_Integer) 0;
              else
                R_16 = (MR_Integer) 2;
            }
            switch (R_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word * AddrSCCcallarg_17_21;

                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_4, 2) = NULL;
                  }
                  AddrSCCcallarg_17_21 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_4, 2)));
                  mercury__ranges__LCMC__func__diff_a_nb__1_4_p_0(As0_10, UB_2, Bs0_3, AddrSCCcallarg_17_21);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word * AddrSCCcallarg_18_22;

                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_4, 2) = NULL;
                  }
                  AddrSCCcallarg_18_22 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_4, 2)));
                  mercury__ranges__LCMC__func__intersect__1_3_p_0(As0_10, Bs0_3, AddrSCCcallarg_18_22);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word * AddrSCCcallarg_19_23;

                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (UB_2));
                    MR_hl_field(1, HeadVar__4_4, 2) = NULL;
                  }
                  AddrSCCcallarg_19_23 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_4, 2)));
                  mercury__ranges__LCMC__func__diff_a_nb__1_4_p_0(Bs0_3, UA_9, As0_10, AddrSCCcallarg_19_23);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Bs0_3;
            MR_Integer next_value_of_tscc_proc_2_input_2_UB_2 = UA_9;
            MR_Word next_value_of_tscc_proc_2_input_3_Bs0_3 = As0_10;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
            tscc_proc_2_input_2_UB_2 = next_value_of_tscc_proc_2_input_2_UB_2;
            tscc_proc_2_input_3_Bs0_3 = next_value_of_tscc_proc_2_input_3_Bs0_3;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__1_1;
            MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_3;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
            goto top_of_proc_1;
          }
          break;
      }
    }
    tscc_output_1_HeadVar__3_3 = HeadVar__4_4;
    goto tscc_end;
  }
tscc_end:;
  return tscc_output_1_HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__ranges__diff_a_nb_3_f_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Integer tscc_proc_2_input_2_UB_2,
  MR_Word tscc_proc_2_input_3_Bs0_3)
{
  MR_Word tscc_proc_1_input_1_HeadVar__1_1;
  MR_Word tscc_proc_1_input_2_HeadVar__2_2;
  MR_Word tscc_output_1_HeadVar__3_3;

  // The code for TSCC PROC 2: func ranges.diff_a_nb/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: func ranges.intersect/2-0
  ;
  // proc 2 in TSCC: func ranges.diff_a_nb/3-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_2_HeadVar__2_2;
    MR_Word HeadVar__3_3;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer LB_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Integer UB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Bs0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Word R_17;

        succeeded = (Var_21 < LB_13);
        if (succeeded)
          R_17 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_21 == LB_13);
          if (succeeded)
            R_17 = (MR_Integer) 0;
          else
            R_17 = (MR_Integer) 2;
        }
        switch (R_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = HeadVar__2_2;
              MR_Integer next_value_of_tscc_proc_2_input_2_UB_2 = Var_20;
              MR_Word next_value_of_tscc_proc_2_input_3_Bs0_3 = Var_19;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              tscc_proc_2_input_2_UB_2 = next_value_of_tscc_proc_2_input_2_UB_2;
              tscc_proc_2_input_3_Bs0_3 = next_value_of_tscc_proc_2_input_3_Bs0_3;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word R_22;

              succeeded = (Var_20 < UB_14);
              if (succeeded)
                R_22 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_20 > UB_14);
                if (succeeded)
                  R_22 = (MR_Integer) 2;
                else
                  R_22 = (MR_Integer) 0;
              }
              switch (R_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word * AddrSCCcallarg_23_27;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_20));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_23_27 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__diff_a_nb__1_4_p_0(Var_19, UB_14, Bs0_15, AddrSCCcallarg_23_27);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word * AddrSCCcallarg_24_28;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_20));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_24_28 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__intersect__1_3_p_0(Var_19, Bs0_15, AddrSCCcallarg_24_28);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word * AddrSCCcallarg_25_29;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (UB_14));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_25_29 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__diff_a_nb__1_4_p_0(Bs0_15, Var_20, Var_19, AddrSCCcallarg_25_29);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = HeadVar__1_1;
              MR_Integer next_value_of_tscc_proc_2_input_2_UB_2 = UB_14;
              MR_Word next_value_of_tscc_proc_2_input_3_Bs0_3 = Bs0_15;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
              tscc_proc_2_input_2_UB_2 = next_value_of_tscc_proc_2_input_2_UB_2;
              tscc_proc_2_input_3_Bs0_3 = next_value_of_tscc_proc_2_input_3_Bs0_3;
              goto top_of_proc_2;
            }
            break;
        }
      }
    }
    tscc_output_1_HeadVar__3_3 = HeadVar__3_3;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
    MR_Integer UB_2 = tscc_proc_2_input_2_UB_2;
    MR_Word Bs0_3 = tscc_proc_2_input_3_Bs0_3;
    MR_Word HeadVar__4_4;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer LA_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer UA_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word As0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Word R_14;

      succeeded = (LA_8 < UB_2);
      if (succeeded)
        R_14 = (MR_Integer) 1;
      else
      {
        succeeded = (LA_8 == UB_2);
        if (succeeded)
          R_14 = (MR_Integer) 0;
        else
          R_14 = (MR_Integer) 2;
      }
      switch (R_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word R_16;

            succeeded = (UA_9 < UB_2);
            if (succeeded)
              R_16 = (MR_Integer) 1;
            else
            {
              succeeded = (UA_9 == UB_2);
              if (succeeded)
                R_16 = (MR_Integer) 0;
              else
                R_16 = (MR_Integer) 2;
            }
            switch (R_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word * AddrSCCcallarg_17_21;

                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_4, 2) = NULL;
                  }
                  AddrSCCcallarg_17_21 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_4, 2)));
                  mercury__ranges__LCMC__func__diff_a_nb__1_4_p_0(As0_10, UB_2, Bs0_3, AddrSCCcallarg_17_21);
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word * AddrSCCcallarg_18_22;

                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_4, 2) = NULL;
                  }
                  AddrSCCcallarg_18_22 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_4, 2)));
                  mercury__ranges__LCMC__func__intersect__1_3_p_0(As0_10, Bs0_3, AddrSCCcallarg_18_22);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word * AddrSCCcallarg_19_23;

                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (UB_2));
                    MR_hl_field(1, HeadVar__4_4, 2) = NULL;
                  }
                  AddrSCCcallarg_19_23 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_4, 2)));
                  mercury__ranges__LCMC__func__diff_a_nb__1_4_p_0(Bs0_3, UA_9, As0_10, AddrSCCcallarg_19_23);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Bs0_3;
            MR_Integer next_value_of_tscc_proc_2_input_2_UB_2 = UA_9;
            MR_Word next_value_of_tscc_proc_2_input_3_Bs0_3 = As0_10;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
            tscc_proc_2_input_2_UB_2 = next_value_of_tscc_proc_2_input_2_UB_2;
            tscc_proc_2_input_3_Bs0_3 = next_value_of_tscc_proc_2_input_3_Bs0_3;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__1_1;
            MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_3;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
            goto top_of_proc_1;
          }
          break;
      }
    }
    tscc_output_1_HeadVar__3_3 = HeadVar__4_4;
    goto tscc_end;
  }
tscc_end:;
  return tscc_output_1_HeadVar__3_3;
}

static void MR_CALL 
mercury__ranges__LCMC__func__diff_a_nb__1_4_p_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1,
  MR_Integer tscc_proc_1_input_2_UB_2,
  MR_Word tscc_proc_1_input_3_Bs0_3,
  MR_Word * tscc_proc_1_input_4_AddrOfHeadVar__4_24)
{
  MR_Word tscc_proc_2_input_1_HeadVar__1_1;
  MR_Word tscc_proc_2_input_2_HeadVar__2_2;
  MR_Word * tscc_proc_2_input_3_AddrOfHeadVar__3_30;

  // The code for TSCC PROC 1: pred ranges.LCMC__func__diff_a_nb__1/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ranges.LCMC__func__diff_a_nb__1/4-0
  ;
  // proc 2 in TSCC: pred ranges.LCMC__func__intersect__1/3-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Integer UB_2 = tscc_proc_1_input_2_UB_2;
    MR_Word Bs0_3 = tscc_proc_1_input_3_Bs0_3;
    MR_Word * AddrOfHeadVar__4_24 = tscc_proc_1_input_4_AddrOfHeadVar__4_24;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__4_24 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer LA_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer UA_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word As0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Word R_14;

      succeeded = (LA_8 < UB_2);
      if (succeeded)
        R_14 = (MR_Integer) 1;
      else
      {
        succeeded = (LA_8 == UB_2);
        if (succeeded)
          R_14 = (MR_Integer) 0;
        else
          R_14 = (MR_Integer) 2;
      }
      switch (R_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word R_16;

            succeeded = (UA_9 < UB_2);
            if (succeeded)
              R_16 = (MR_Integer) 1;
            else
            {
              succeeded = (UA_9 == UB_2);
              if (succeeded)
                R_16 = (MR_Integer) 0;
              else
                R_16 = (MR_Integer) 2;
            }
            switch (R_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word * AddrSCCcallarg_17_21;
                  MR_Word HeadVar__4_25;
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  MR_Integer next_value_of_tscc_proc_1_input_2_UB_2;
                  MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3;
                  MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;

                  {
                    HeadVar__4_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_25, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_25, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_25, 2) = NULL;
                  }
                  AddrSCCcallarg_17_21 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_25, 2)));
                  *AddrOfHeadVar__4_24 = HeadVar__4_25;
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = As0_10;
                  next_value_of_tscc_proc_1_input_2_UB_2 = UB_2;
                  next_value_of_tscc_proc_1_input_3_Bs0_3 = Bs0_3;
                  next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrSCCcallarg_17_21;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
                  tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
                  tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word * AddrSCCcallarg_18_22;
                  MR_Word HeadVar__4_28;
                  MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                  MR_Word * next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30;

                  {
                    HeadVar__4_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_28, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_28, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_28, 2) = NULL;
                  }
                  AddrSCCcallarg_18_22 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_28, 2)));
                  *AddrOfHeadVar__4_24 = HeadVar__4_28;
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = As0_10;
                  next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = Bs0_3;
                  next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30 = AddrSCCcallarg_18_22;
                  tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                  tscc_proc_2_input_3_AddrOfHeadVar__3_30 = next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30;
                  goto top_of_proc_2;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word * AddrSCCcallarg_19_23;
                  MR_Word HeadVar__4_31;
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  MR_Integer next_value_of_tscc_proc_1_input_2_UB_2;
                  MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3;
                  MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;

                  {
                    HeadVar__4_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_31, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_31, 1) = ((MR_Box) (UB_2));
                    MR_hl_field(1, HeadVar__4_31, 2) = NULL;
                  }
                  AddrSCCcallarg_19_23 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_31, 2)));
                  *AddrOfHeadVar__4_24 = HeadVar__4_31;
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_3;
                  next_value_of_tscc_proc_1_input_2_UB_2 = UA_9;
                  next_value_of_tscc_proc_1_input_3_Bs0_3 = As0_10;
                  next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrSCCcallarg_19_23;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
                  tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
                  tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
                  goto top_of_proc_1;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_3;
            MR_Integer next_value_of_tscc_proc_1_input_2_UB_2 = UA_9;
            MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3 = As0_10;
            MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrOfHeadVar__4_24;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
            tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
            tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = HeadVar__1_1;
            MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = Bs0_3;
            MR_Word * next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30 = AddrOfHeadVar__4_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
            tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
            tscc_proc_2_input_3_AddrOfHeadVar__3_30 = next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30;
            goto top_of_proc_2;
          }
          break;
      }
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_2_input_2_HeadVar__2_2;
    MR_Word * AddrOfHeadVar__3_30 = tscc_proc_2_input_3_AddrOfHeadVar__3_30;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_30 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_30 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer LB_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Integer UB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Bs0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Word R_17;

        succeeded = (Var_21 < LB_13);
        if (succeeded)
          R_17 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_21 == LB_13);
          if (succeeded)
            R_17 = (MR_Integer) 0;
          else
            R_17 = (MR_Integer) 2;
        }
        switch (R_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__2_2;
              MR_Integer next_value_of_tscc_proc_1_input_2_UB_2 = Var_20;
              MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3 = Var_19;
              MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrOfHeadVar__3_30;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
              tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
              tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word R_22;

              succeeded = (Var_20 < UB_14);
              if (succeeded)
                R_22 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_20 > UB_14);
                if (succeeded)
                  R_22 = (MR_Integer) 2;
                else
                  R_22 = (MR_Integer) 0;
              }
              switch (R_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word * AddrSCCcallarg_23_27;
                    MR_Word HeadVar__3_32;
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    MR_Integer next_value_of_tscc_proc_1_input_2_UB_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3;
                    MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;

                    {
                      HeadVar__3_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_32, 0) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_32, 1) = ((MR_Box) (Var_20));
                      MR_hl_field(1, HeadVar__3_32, 2) = NULL;
                    }
                    AddrSCCcallarg_23_27 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_32, 2)));
                    *AddrOfHeadVar__3_30 = HeadVar__3_32;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Var_19;
                    next_value_of_tscc_proc_1_input_2_UB_2 = UB_14;
                    next_value_of_tscc_proc_1_input_3_Bs0_3 = Bs0_15;
                    next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrSCCcallarg_23_27;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
                    tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
                    tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word * AddrSCCcallarg_24_28;
                    MR_Word HeadVar__3_35;
                    MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                    MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                    MR_Word * next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30;

                    {
                      HeadVar__3_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_35, 0) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_35, 1) = ((MR_Box) (Var_20));
                      MR_hl_field(1, HeadVar__3_35, 2) = NULL;
                    }
                    AddrSCCcallarg_24_28 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_35, 2)));
                    *AddrOfHeadVar__3_30 = HeadVar__3_35;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Var_19;
                    next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = Bs0_15;
                    next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30 = AddrSCCcallarg_24_28;
                    tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                    tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                    tscc_proc_2_input_3_AddrOfHeadVar__3_30 = next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30;
                    goto top_of_proc_2;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word * AddrSCCcallarg_25_29;
                    MR_Word HeadVar__3_38;
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    MR_Integer next_value_of_tscc_proc_1_input_2_UB_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3;
                    MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;

                    {
                      HeadVar__3_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_38, 0) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_38, 1) = ((MR_Box) (UB_14));
                      MR_hl_field(1, HeadVar__3_38, 2) = NULL;
                    }
                    AddrSCCcallarg_25_29 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_38, 2)));
                    *AddrOfHeadVar__3_30 = HeadVar__3_38;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_15;
                    next_value_of_tscc_proc_1_input_2_UB_2 = Var_20;
                    next_value_of_tscc_proc_1_input_3_Bs0_3 = Var_19;
                    next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrSCCcallarg_25_29;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
                    tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
                    tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__1_1;
              MR_Integer next_value_of_tscc_proc_1_input_2_UB_2 = UB_14;
              MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3 = Bs0_15;
              MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrOfHeadVar__3_30;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
              tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
              tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
              goto top_of_proc_1;
            }
            break;
        }
      }
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

void MR_CALL 
mercury__ranges__LCMC__func__intersect__1_3_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Word tscc_proc_2_input_2_HeadVar__2_2,
  MR_Word * tscc_proc_2_input_3_AddrOfHeadVar__3_30)
{
  MR_Word tscc_proc_1_input_1_HeadVar__1_1;
  MR_Integer tscc_proc_1_input_2_UB_2;
  MR_Word tscc_proc_1_input_3_Bs0_3;
  MR_Word * tscc_proc_1_input_4_AddrOfHeadVar__4_24;

  // The code for TSCC PROC 2: pred ranges.LCMC__func__intersect__1/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ranges.LCMC__func__diff_a_nb__1/4-0
  ;
  // proc 2 in TSCC: pred ranges.LCMC__func__intersect__1/3-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Integer UB_2 = tscc_proc_1_input_2_UB_2;
    MR_Word Bs0_3 = tscc_proc_1_input_3_Bs0_3;
    MR_Word * AddrOfHeadVar__4_24 = tscc_proc_1_input_4_AddrOfHeadVar__4_24;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__4_24 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer LA_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer UA_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word As0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Word R_14;

      succeeded = (LA_8 < UB_2);
      if (succeeded)
        R_14 = (MR_Integer) 1;
      else
      {
        succeeded = (LA_8 == UB_2);
        if (succeeded)
          R_14 = (MR_Integer) 0;
        else
          R_14 = (MR_Integer) 2;
      }
      switch (R_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word R_16;

            succeeded = (UA_9 < UB_2);
            if (succeeded)
              R_16 = (MR_Integer) 1;
            else
            {
              succeeded = (UA_9 == UB_2);
              if (succeeded)
                R_16 = (MR_Integer) 0;
              else
                R_16 = (MR_Integer) 2;
            }
            switch (R_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word * AddrSCCcallarg_17_21;
                  MR_Word HeadVar__4_25;
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  MR_Integer next_value_of_tscc_proc_1_input_2_UB_2;
                  MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3;
                  MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;

                  {
                    HeadVar__4_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_25, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_25, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_25, 2) = NULL;
                  }
                  AddrSCCcallarg_17_21 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_25, 2)));
                  *AddrOfHeadVar__4_24 = HeadVar__4_25;
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = As0_10;
                  next_value_of_tscc_proc_1_input_2_UB_2 = UB_2;
                  next_value_of_tscc_proc_1_input_3_Bs0_3 = Bs0_3;
                  next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrSCCcallarg_17_21;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
                  tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
                  tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word * AddrSCCcallarg_18_22;
                  MR_Word HeadVar__4_28;
                  MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                  MR_Word * next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30;

                  {
                    HeadVar__4_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_28, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_28, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_28, 2) = NULL;
                  }
                  AddrSCCcallarg_18_22 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_28, 2)));
                  *AddrOfHeadVar__4_24 = HeadVar__4_28;
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = As0_10;
                  next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = Bs0_3;
                  next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30 = AddrSCCcallarg_18_22;
                  tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                  tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                  tscc_proc_2_input_3_AddrOfHeadVar__3_30 = next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30;
                  goto top_of_proc_2;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word * AddrSCCcallarg_19_23;
                  MR_Word HeadVar__4_31;
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  MR_Integer next_value_of_tscc_proc_1_input_2_UB_2;
                  MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3;
                  MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;

                  {
                    HeadVar__4_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_31, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_31, 1) = ((MR_Box) (UB_2));
                    MR_hl_field(1, HeadVar__4_31, 2) = NULL;
                  }
                  AddrSCCcallarg_19_23 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_31, 2)));
                  *AddrOfHeadVar__4_24 = HeadVar__4_31;
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_3;
                  next_value_of_tscc_proc_1_input_2_UB_2 = UA_9;
                  next_value_of_tscc_proc_1_input_3_Bs0_3 = As0_10;
                  next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrSCCcallarg_19_23;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
                  tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
                  tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
                  goto top_of_proc_1;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_3;
            MR_Integer next_value_of_tscc_proc_1_input_2_UB_2 = UA_9;
            MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3 = As0_10;
            MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrOfHeadVar__4_24;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
            tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
            tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = HeadVar__1_1;
            MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = Bs0_3;
            MR_Word * next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30 = AddrOfHeadVar__4_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
            tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
            tscc_proc_2_input_3_AddrOfHeadVar__3_30 = next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30;
            goto top_of_proc_2;
          }
          break;
      }
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_2_input_2_HeadVar__2_2;
    MR_Word * AddrOfHeadVar__3_30 = tscc_proc_2_input_3_AddrOfHeadVar__3_30;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_30 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_30 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Integer LB_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Integer UB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Bs0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Word R_17;

        succeeded = (Var_21 < LB_13);
        if (succeeded)
          R_17 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_21 == LB_13);
          if (succeeded)
            R_17 = (MR_Integer) 0;
          else
            R_17 = (MR_Integer) 2;
        }
        switch (R_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__2_2;
              MR_Integer next_value_of_tscc_proc_1_input_2_UB_2 = Var_20;
              MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3 = Var_19;
              MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrOfHeadVar__3_30;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
              tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
              tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word R_22;

              succeeded = (Var_20 < UB_14);
              if (succeeded)
                R_22 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_20 > UB_14);
                if (succeeded)
                  R_22 = (MR_Integer) 2;
                else
                  R_22 = (MR_Integer) 0;
              }
              switch (R_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word * AddrSCCcallarg_23_27;
                    MR_Word HeadVar__3_32;
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    MR_Integer next_value_of_tscc_proc_1_input_2_UB_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3;
                    MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;

                    {
                      HeadVar__3_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_32, 0) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_32, 1) = ((MR_Box) (Var_20));
                      MR_hl_field(1, HeadVar__3_32, 2) = NULL;
                    }
                    AddrSCCcallarg_23_27 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_32, 2)));
                    *AddrOfHeadVar__3_30 = HeadVar__3_32;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Var_19;
                    next_value_of_tscc_proc_1_input_2_UB_2 = UB_14;
                    next_value_of_tscc_proc_1_input_3_Bs0_3 = Bs0_15;
                    next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrSCCcallarg_23_27;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
                    tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
                    tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word * AddrSCCcallarg_24_28;
                    MR_Word HeadVar__3_35;
                    MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                    MR_Word next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                    MR_Word * next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30;

                    {
                      HeadVar__3_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_35, 0) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_35, 1) = ((MR_Box) (Var_20));
                      MR_hl_field(1, HeadVar__3_35, 2) = NULL;
                    }
                    AddrSCCcallarg_24_28 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_35, 2)));
                    *AddrOfHeadVar__3_30 = HeadVar__3_35;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Var_19;
                    next_value_of_tscc_proc_2_input_2_HeadVar__2_2 = Bs0_15;
                    next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30 = AddrSCCcallarg_24_28;
                    tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                    tscc_proc_2_input_2_HeadVar__2_2 = next_value_of_tscc_proc_2_input_2_HeadVar__2_2;
                    tscc_proc_2_input_3_AddrOfHeadVar__3_30 = next_value_of_tscc_proc_2_input_3_AddrOfHeadVar__3_30;
                    goto top_of_proc_2;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word * AddrSCCcallarg_25_29;
                    MR_Word HeadVar__3_38;
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    MR_Integer next_value_of_tscc_proc_1_input_2_UB_2;
                    MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3;
                    MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;

                    {
                      HeadVar__3_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_38, 0) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_38, 1) = ((MR_Box) (UB_14));
                      MR_hl_field(1, HeadVar__3_38, 2) = NULL;
                    }
                    AddrSCCcallarg_25_29 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_38, 2)));
                    *AddrOfHeadVar__3_30 = HeadVar__3_38;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_15;
                    next_value_of_tscc_proc_1_input_2_UB_2 = Var_20;
                    next_value_of_tscc_proc_1_input_3_Bs0_3 = Var_19;
                    next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrSCCcallarg_25_29;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
                    tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
                    tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__1_1;
              MR_Integer next_value_of_tscc_proc_1_input_2_UB_2 = UB_14;
              MR_Word next_value_of_tscc_proc_1_input_3_Bs0_3 = Bs0_15;
              MR_Word * next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24 = AddrOfHeadVar__3_30;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
              tscc_proc_1_input_2_UB_2 = next_value_of_tscc_proc_1_input_2_UB_2;
              tscc_proc_1_input_3_Bs0_3 = next_value_of_tscc_proc_1_input_3_Bs0_3;
              tscc_proc_1_input_4_AddrOfHeadVar__4_24 = next_value_of_tscc_proc_1_input_4_AddrOfHeadVar__4_24;
              goto top_of_proc_1;
            }
            break;
        }
      }
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

MR_bool MR_CALL 
mercury__ranges__subset_2_p_0(
  MR_Word SetA_3,
  MR_Word SetB_4)
{
  MR_bool succeeded;
  MR_Word Var_5;

  Var_5 = mercury__ranges__difference_2_f_0(SetA_3, SetB_4);
  succeeded = (Var_5 == (MR_Word) ((MR_Unsigned) 0U));
  return succeeded;
}

MR_Word MR_CALL 
mercury__ranges__delete_list_2_f_0(
  MR_Word Es_4,
  MR_Word Set0_5)
{
  MR_Word Set_6;

  mercury__ranges__delete_list_3_p_0(Es_4, Set0_5, &Set_6);
  return Set_6;
}

void MR_CALL 
mercury__ranges__delete_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Set_3 = STATE_VARIABLE_Set_0_2;
    else
    {
      MR_Integer E_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Es_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Set_1_12;
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_2;

      Var_13 = mercury__ranges__make_singleton_set_1_f_0(E_7);
      STATE_VARIABLE_Set_1_12 = mercury__ranges__difference_2_f_0(STATE_VARIABLE_Set_0_2, Var_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Es_8;
      next_value_of_STATE_VARIABLE_Set_0_2 = STATE_VARIABLE_Set_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Set_0_2 = next_value_of_STATE_VARIABLE_Set_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__delete_3_p_0(
  MR_Integer E_4,
  MR_Word Set0_5,
  MR_Word * Set_6)
{
  MR_Word Var_7;

  Var_7 = mercury__ranges__make_singleton_set_1_f_0(E_4);
  *Set_6 = mercury__ranges__difference_2_f_0(Set0_5, Var_7);
}

MR_Word MR_CALL 
mercury__ranges__delete_2_f_0(
  MR_Integer E_4,
  MR_Word Set0_5)
{
  MR_Word Set_6;
  MR_Word Var_7;

  Var_7 = mercury__ranges__make_singleton_set_1_f_0(E_4);
  Set_6 = mercury__ranges__difference_2_f_0(Set0_5, Var_7);
  return Set_6;
}

void MR_CALL 
mercury__ranges__LCMC__func__difference__1_3_p_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1,
  MR_Word tscc_proc_1_input_2_HeadVar__2_2,
  MR_Word * tscc_proc_1_input_3_AddrOfHeadVar__3_55)
{
  MR_Word tscc_proc_2_input_1_HeadVar__1_1;
  MR_Integer tscc_proc_2_input_2_UB_2;
  MR_Word tscc_proc_2_input_3_Bs0_3;
  MR_Word * tscc_proc_2_input_4_AddrOfHeadVar__4_48;
  MR_Integer tscc_proc_3_input_1_UA_6;
  MR_Word tscc_proc_3_input_2_As0_7;
  MR_Integer tscc_proc_3_input_3_UB_8;
  MR_Word tscc_proc_3_input_4_Bs0_9;
  MR_Word * tscc_proc_3_input_5_AddrOfResult_86;

  // The code for TSCC PROC 1: pred ranges.LCMC__func__difference__1/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ranges.LCMC__func__difference__1/3-0
  ;
  // proc 2 in TSCC: pred ranges.LCMC__func__int_a_nb__1/4-0
  ;
  // proc 3 in TSCC: pred ranges.LCMC__func__diff_na_nb__1/5-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_2_HeadVar__2_2;
    MR_Word * AddrOfHeadVar__3_55 = tscc_proc_1_input_3_AddrOfHeadVar__3_55;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_55 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_55 = HeadVar__1_1;
      else
      {
        MR_Integer LB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Integer UB_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Bs0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Word R_18;

        succeeded = (Var_22 < LB_14);
        if (succeeded)
          R_18 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_22 == LB_14);
          if (succeeded)
            R_18 = (MR_Integer) 0;
          else
            R_18 = (MR_Integer) 2;
        }
        switch (R_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer LB_30 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer UB_31 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word Bs0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word R_34;

              succeeded = (Var_21 < LB_30);
              if (succeeded)
                R_34 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_21 > LB_30);
                if (succeeded)
                  R_34 = (MR_Integer) 2;
                else
                  R_34 = (MR_Integer) 0;
              }
              switch (R_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word * AddrSCCcallarg_35_52;
                    MR_Word HeadVar__3_58;
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;

                    {
                      HeadVar__3_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_58, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_58, 1) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_58, 2) = NULL;
                    }
                    AddrSCCcallarg_35_52 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_58, 2)));
                    *AddrOfHeadVar__3_55 = HeadVar__3_58;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Var_20;
                    next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = HeadVar__2_2;
                    next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrSCCcallarg_35_52;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word * AddrSCCcallarg_36_53;
                    MR_Word HeadVar__3_61;
                    MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                    MR_Integer next_value_of_tscc_proc_2_input_2_UB_2;
                    MR_Word next_value_of_tscc_proc_2_input_3_Bs0_3;
                    MR_Word * next_value_of_tscc_proc_2_input_4_AddrOfHeadVar__4_48;

                    {
                      HeadVar__3_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_61, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_61, 1) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_61, 2) = NULL;
                    }
                    AddrSCCcallarg_36_53 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_61, 2)));
                    *AddrOfHeadVar__3_55 = HeadVar__3_61;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Var_20;
                    next_value_of_tscc_proc_2_input_2_UB_2 = UB_31;
                    next_value_of_tscc_proc_2_input_3_Bs0_3 = Bs0_32;
                    next_value_of_tscc_proc_2_input_4_AddrOfHeadVar__4_48 = AddrSCCcallarg_36_53;
                    tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                    tscc_proc_2_input_2_UB_2 = next_value_of_tscc_proc_2_input_2_UB_2;
                    tscc_proc_2_input_3_Bs0_3 = next_value_of_tscc_proc_2_input_3_Bs0_3;
                    tscc_proc_2_input_4_AddrOfHeadVar__4_48 = next_value_of_tscc_proc_2_input_4_AddrOfHeadVar__4_48;
                    goto top_of_proc_2;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word * AddrSCCcallarg_37_54;
                    MR_Word HeadVar__3_64;
                    MR_Integer next_value_of_tscc_proc_3_input_1_UA_6;
                    MR_Word next_value_of_tscc_proc_3_input_2_As0_7;
                    MR_Integer next_value_of_tscc_proc_3_input_3_UB_8;
                    MR_Word next_value_of_tscc_proc_3_input_4_Bs0_9;
                    MR_Word * next_value_of_tscc_proc_3_input_5_AddrOfResult_86;

                    {
                      HeadVar__3_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_64, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_64, 1) = ((MR_Box) (LB_30));
                      MR_hl_field(1, HeadVar__3_64, 2) = NULL;
                    }
                    AddrSCCcallarg_37_54 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_64, 2)));
                    *AddrOfHeadVar__3_55 = HeadVar__3_64;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_3_input_1_UA_6 = UB_31;
                    next_value_of_tscc_proc_3_input_2_As0_7 = Bs0_32;
                    next_value_of_tscc_proc_3_input_3_UB_8 = Var_21;
                    next_value_of_tscc_proc_3_input_4_Bs0_9 = Var_20;
                    next_value_of_tscc_proc_3_input_5_AddrOfResult_86 = AddrSCCcallarg_37_54;
                    tscc_proc_3_input_1_UA_6 = next_value_of_tscc_proc_3_input_1_UA_6;
                    tscc_proc_3_input_2_As0_7 = next_value_of_tscc_proc_3_input_2_As0_7;
                    tscc_proc_3_input_3_UB_8 = next_value_of_tscc_proc_3_input_3_UB_8;
                    tscc_proc_3_input_4_Bs0_9 = next_value_of_tscc_proc_3_input_4_Bs0_9;
                    tscc_proc_3_input_5_AddrOfResult_86 = next_value_of_tscc_proc_3_input_5_AddrOfResult_86;
                    goto top_of_proc_3;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word R_39;

              succeeded = (UB_15 < Var_21);
              if (succeeded)
                R_39 = (MR_Integer) 1;
              else
              {
                succeeded = (UB_15 > Var_21);
                if (succeeded)
                  R_39 = (MR_Integer) 2;
                else
                  R_39 = (MR_Integer) 0;
              }
              switch (R_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word HeadVar__3_70;

                    HeadVar__3_70 = mercury__ranges__n_union_a_nb_4_f_0(UB_15, Bs0_16, Var_21, Var_20);
                    *AddrOfHeadVar__3_55 = HeadVar__3_70;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Var_20;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_16;
                    MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfHeadVar__3_55;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word HeadVar__3_71;

                    HeadVar__3_71 = mercury__ranges__int_na_b_3_f_0(UB_15, Bs0_16, Var_20);
                    *AddrOfHeadVar__3_55 = HeadVar__3_71;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer LA_44 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
              MR_Integer UA_45 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
              MR_Word As0_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
              MR_Word R_50;

              succeeded = (LA_44 < UB_15);
              if (succeeded)
                R_50 = (MR_Integer) 1;
              else
              {
                succeeded = (LA_44 > UB_15);
                if (succeeded)
                  R_50 = (MR_Integer) 2;
                else
                  R_50 = (MR_Integer) 0;
              }
              switch (R_50) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Integer next_value_of_tscc_proc_3_input_1_UA_6 = UB_15;
                    MR_Word next_value_of_tscc_proc_3_input_2_As0_7 = Bs0_16;
                    MR_Integer next_value_of_tscc_proc_3_input_3_UB_8 = UA_45;
                    MR_Word next_value_of_tscc_proc_3_input_4_Bs0_9 = As0_46;
                    MR_Word * next_value_of_tscc_proc_3_input_5_AddrOfResult_86 = AddrOfHeadVar__3_55;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_3_input_1_UA_6 = next_value_of_tscc_proc_3_input_1_UA_6;
                    tscc_proc_3_input_2_As0_7 = next_value_of_tscc_proc_3_input_2_As0_7;
                    tscc_proc_3_input_3_UB_8 = next_value_of_tscc_proc_3_input_3_UB_8;
                    tscc_proc_3_input_4_Bs0_9 = next_value_of_tscc_proc_3_input_4_Bs0_9;
                    tscc_proc_3_input_5_AddrOfResult_86 = next_value_of_tscc_proc_3_input_5_AddrOfResult_86;
                    goto top_of_proc_3;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word HeadVar__3_75;

                    HeadVar__3_75 = mercury__ranges__n_union_na_b_4_f_0(LA_44, UA_45, As0_46, Bs0_16);
                    *AddrOfHeadVar__3_55 = HeadVar__3_75;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__1_1;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_16;
                    MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfHeadVar__3_55;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
      }
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
    MR_Integer UB_2 = tscc_proc_2_input_2_UB_2;
    MR_Word Bs0_3 = tscc_proc_2_input_3_Bs0_3;
    MR_Word * AddrOfHeadVar__4_48 = tscc_proc_2_input_4_AddrOfHeadVar__4_48;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__4_48 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer LA_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer UA_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word As0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Word R_14;

      succeeded = (LA_8 < UB_2);
      if (succeeded)
        R_14 = (MR_Integer) 1;
      else
      {
        succeeded = (LA_8 == UB_2);
        if (succeeded)
          R_14 = (MR_Integer) 0;
        else
          R_14 = (MR_Integer) 2;
      }
      switch (R_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word R_16;

            succeeded = (UB_2 < UA_9);
            if (succeeded)
              R_16 = (MR_Integer) 1;
            else
            {
              succeeded = (UB_2 > UA_9);
              if (succeeded)
                R_16 = (MR_Integer) 2;
              else
                R_16 = (MR_Integer) 0;
            }
            switch (R_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word HeadVar__4_49;

                  HeadVar__4_49 = mercury__ranges__n_union_a_nb_4_f_0(UB_2, Bs0_3, UA_9, As0_10);
                  *AddrOfHeadVar__4_48 = HeadVar__4_49;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = As0_10;
                  MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_3;
                  MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfHeadVar__4_48;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                  tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadVar__4_50;

                  HeadVar__4_50 = mercury__ranges__int_na_b_3_f_0(UB_2, Bs0_3, As0_10);
                  *AddrOfHeadVar__4_48 = HeadVar__4_50;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 0:
          if ((Bs0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *AddrOfHeadVar__4_48 = HeadVar__1_1;
          else
          {
            MR_Integer LB_25 = ((MR_Integer) ((MR_hl_field(1, Bs0_3, 0))));
            MR_Integer UB_26 = ((MR_Integer) ((MR_hl_field(1, Bs0_3, 1))));
            MR_Word Bs0_27 = ((MR_Word) ((MR_hl_field(1, Bs0_3, 2))));
            MR_Word R_29;

            succeeded = (UA_9 < LB_25);
            if (succeeded)
              R_29 = (MR_Integer) 1;
            else
            {
              succeeded = (UA_9 == LB_25);
              if (succeeded)
                R_29 = (MR_Integer) 0;
              else
                R_29 = (MR_Integer) 2;
            }
            switch (R_29) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word * AddrSCCcallarg_30_47;
                  MR_Word HeadVar__4_54;
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                  MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;

                  {
                    HeadVar__4_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_54, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_54, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_54, 2) = NULL;
                  }
                  AddrSCCcallarg_30_47 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_54, 2)));
                  *AddrOfHeadVar__4_48 = HeadVar__4_54;
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = As0_10;
                  next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_3;
                  next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrSCCcallarg_30_47;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                  tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_31;
                  MR_Word HeadVar__4_57;

                  if ((As0_10 == (MR_Word) ((MR_Unsigned) 0U)))
                    Var_31 = (MR_Word) ((MR_Unsigned) 0U);
                  else
                  {
                    MR_Integer LA_37 = ((MR_Integer) ((MR_hl_field(1, As0_10, 0))));
                    MR_Integer UA_38 = ((MR_Integer) ((MR_hl_field(1, As0_10, 1))));
                    MR_Word As0_39 = ((MR_Word) ((MR_hl_field(1, As0_10, 2))));
                    MR_Word R_43;

                    succeeded = (LA_37 < UB_26);
                    if (succeeded)
                      R_43 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (LA_37 > UB_26);
                      if (succeeded)
                        R_43 = (MR_Integer) 2;
                      else
                        R_43 = (MR_Integer) 0;
                    }
                    switch (R_43) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        Var_31 = mercury__ranges__diff_na_nb_4_f_0(UB_26, Bs0_27, UA_38, As0_39);
                        break;
                      case (MR_Integer) 0:
                        Var_31 = mercury__ranges__n_union_na_b_4_f_0(LA_37, UA_38, As0_39, Bs0_27);
                        break;
                      case (MR_Integer) 2:
                        Var_31 = mercury__ranges__difference_2_f_0(As0_10, Bs0_27);
                        break;
                    }
                  }
                  {
                    HeadVar__4_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_57, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_57, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_57, 2) = ((MR_Box) (Var_31));
                  }
                  *AddrOfHeadVar__4_48 = HeadVar__4_57;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_32;
                  MR_Word R_45;
                  MR_Word HeadVar__4_58;

                  succeeded = (UB_26 < UA_9);
                  if (succeeded)
                    R_45 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (UB_26 > UA_9);
                    if (succeeded)
                      R_45 = (MR_Integer) 2;
                    else
                      R_45 = (MR_Integer) 0;
                  }
                  switch (R_45) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Var_32 = mercury__ranges__n_union_a_nb_4_f_0(UB_26, Bs0_27, UA_9, As0_10);
                      break;
                    case (MR_Integer) 0:
                      Var_32 = mercury__ranges__difference_2_f_0(As0_10, Bs0_27);
                      break;
                    case (MR_Integer) 2:
                      Var_32 = mercury__ranges__int_na_b_3_f_0(UB_26, Bs0_27, As0_10);
                      break;
                  }
                  {
                    HeadVar__4_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_58, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_58, 1) = ((MR_Box) (LB_25));
                    MR_hl_field(1, HeadVar__4_58, 2) = ((MR_Box) (Var_32));
                  }
                  *AddrOfHeadVar__4_48 = HeadVar__4_58;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__1_1;
            MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_3;
            MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfHeadVar__4_48;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
            tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
            goto top_of_proc_1;
          }
          break;
      }
    }
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Integer UA_6 = tscc_proc_3_input_1_UA_6;
    MR_Word As0_7 = tscc_proc_3_input_2_As0_7;
    MR_Integer UB_8 = tscc_proc_3_input_3_UB_8;
    MR_Word Bs0_9 = tscc_proc_3_input_4_Bs0_9;
    MR_Word * AddrOfResult_86 = tscc_proc_3_input_5_AddrOfResult_86;
    MR_bool succeeded = (UA_6 < UB_8);
    MR_Word R_11;

    if (succeeded)
      R_11 = (MR_Integer) 1;
    else
    {
      succeeded = (UA_6 == UB_8);
      if (succeeded)
        R_11 = (MR_Integer) 0;
      else
        R_11 = (MR_Integer) 2;
    }
    switch (R_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((As0_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Result_10;

          {
            Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
            MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_8));
            MR_hl_field(1, Result_10, 2) = ((MR_Box) (Bs0_9));
          }
          *AddrOfResult_86 = Result_10;
        }
        else
        {
          MR_Integer LA_18 = ((MR_Integer) ((MR_hl_field(1, As0_7, 0))));
          MR_Integer UA_19 = ((MR_Integer) ((MR_hl_field(1, As0_7, 1))));
          MR_Word As0_20 = ((MR_Word) ((MR_hl_field(1, As0_7, 2))));
          MR_Word R_24;

          succeeded = (LA_18 < UB_8);
          if (succeeded)
            R_24 = (MR_Integer) 1;
          else
          {
            succeeded = (LA_18 == UB_8);
            if (succeeded)
              R_24 = (MR_Integer) 0;
            else
              R_24 = (MR_Integer) 2;
          }
          switch (R_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_25;
                MR_Word R_29;
                MR_Word Result_87;

                succeeded = (UA_19 < UB_8);
                if (succeeded)
                  R_29 = (MR_Integer) 1;
                else
                {
                  succeeded = (UA_19 > UB_8);
                  if (succeeded)
                    R_29 = (MR_Integer) 2;
                  else
                    R_29 = (MR_Integer) 0;
                }
                switch (R_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    Var_25 = mercury__ranges__n_union_a_nb_4_f_0(UA_19, As0_20, UB_8, Bs0_9);
                    break;
                  case (MR_Integer) 0:
                    Var_25 = mercury__ranges__difference_2_f_0(Bs0_9, As0_20);
                    break;
                  case (MR_Integer) 2:
                    Var_25 = mercury__ranges__int_na_b_3_f_0(UA_19, As0_20, Bs0_9);
                    break;
                }
                {
                  Result_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_87, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_87, 1) = ((MR_Box) (LA_18));
                  MR_hl_field(1, Result_87, 2) = ((MR_Box) (Var_25));
                }
                *AddrOfResult_86 = Result_87;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_26;
                MR_Word Result_88;

                if ((Bs0_9 == (MR_Word) ((MR_Unsigned) 0U)))
                  Var_26 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Integer LB_36 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 0))));
                  MR_Integer UB_37 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 1))));
                  MR_Word Bs0_38 = ((MR_Word) ((MR_hl_field(1, Bs0_9, 2))));
                  MR_Word R_40;

                  succeeded = (UA_19 < LB_36);
                  if (succeeded)
                    R_40 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (UA_19 > LB_36);
                    if (succeeded)
                      R_40 = (MR_Integer) 2;
                    else
                      R_40 = (MR_Integer) 0;
                  }
                  switch (R_40) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Var_26 = mercury__ranges__difference_2_f_0(Bs0_9, As0_20);
                      break;
                    case (MR_Integer) 0:
                      Var_26 = mercury__ranges__n_union_a_nb_4_f_0(UA_19, As0_20, UB_37, Bs0_38);
                      break;
                    case (MR_Integer) 2:
                      Var_26 = mercury__ranges__diff_na_nb_4_f_0(UA_19, As0_20, UB_37, Bs0_38);
                      break;
                  }
                }
                {
                  Result_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_88, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_88, 1) = ((MR_Box) (LA_18));
                  MR_hl_field(1, Result_88, 2) = ((MR_Box) (Var_26));
                }
                *AddrOfResult_86 = Result_88;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrSCCcallarg_27_84;
                MR_Word Result_89;
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;

                {
                  Result_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_89, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_89, 1) = ((MR_Box) (UB_8));
                  MR_hl_field(1, Result_89, 2) = NULL;
                }
                AddrSCCcallarg_27_84 = (MR_Word *) (&(MR_hl_field(1, Result_89, 2)));
                *AddrOfResult_86 = Result_89;
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
                next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
                next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrSCCcallarg_27_84;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                goto top_of_proc_1;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
          MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
          MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfResult_86;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
          tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
          tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        if ((Bs0_9 == (MR_Word) ((MR_Unsigned) 0U)))
          *AddrOfResult_86 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Integer LB_47 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 0))));
          MR_Integer UB_48 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 1))));
          MR_Word Bs0_49 = ((MR_Word) ((MR_hl_field(1, Bs0_9, 2))));
          MR_Word R_51;

          succeeded = (UA_6 < LB_47);
          if (succeeded)
            R_51 = (MR_Integer) 1;
          else
          {
            succeeded = (UA_6 == LB_47);
            if (succeeded)
              R_51 = (MR_Integer) 0;
            else
              R_51 = (MR_Integer) 2;
          }
          switch (R_51) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
                MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfResult_86;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 0:
              if ((As0_7 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Result_95;

                {
                  Result_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_95, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_95, 1) = ((MR_Box) (UB_48));
                  MR_hl_field(1, Result_95, 2) = ((MR_Box) (Bs0_49));
                }
                *AddrOfResult_86 = Result_95;
              }
              else
              {
                MR_Integer LA_58 = ((MR_Integer) ((MR_hl_field(1, As0_7, 0))));
                MR_Integer UA_59 = ((MR_Integer) ((MR_hl_field(1, As0_7, 1))));
                MR_Word As0_60 = ((MR_Word) ((MR_hl_field(1, As0_7, 2))));
                MR_Word R_64;

                succeeded = (LA_58 < UB_48);
                if (succeeded)
                  R_64 = (MR_Integer) 1;
                else
                {
                  succeeded = (LA_58 == UB_48);
                  if (succeeded)
                    R_64 = (MR_Integer) 0;
                  else
                    R_64 = (MR_Integer) 2;
                }
                switch (R_64) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_65;
                      MR_Word R_69;
                      MR_Word Result_96;

                      succeeded = (UA_59 < UB_48);
                      if (succeeded)
                        R_69 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (UA_59 > UB_48);
                        if (succeeded)
                          R_69 = (MR_Integer) 2;
                        else
                          R_69 = (MR_Integer) 0;
                      }
                      switch (R_69) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          Var_65 = mercury__ranges__n_union_a_nb_4_f_0(UA_59, As0_60, UB_48, Bs0_49);
                          break;
                        case (MR_Integer) 0:
                          Var_65 = mercury__ranges__difference_2_f_0(Bs0_49, As0_60);
                          break;
                        case (MR_Integer) 2:
                          Var_65 = mercury__ranges__int_na_b_3_f_0(UA_59, As0_60, Bs0_49);
                          break;
                      }
                      {
                        Result_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_96, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_96, 1) = ((MR_Box) (LA_58));
                        MR_hl_field(1, Result_96, 2) = ((MR_Box) (Var_65));
                      }
                      *AddrOfResult_86 = Result_96;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_66;
                      MR_Word Result_97;

                      if ((Bs0_49 == (MR_Word) ((MR_Unsigned) 0U)))
                        Var_66 = (MR_Word) ((MR_Unsigned) 0U);
                      else
                      {
                        MR_Integer LB_76 = ((MR_Integer) ((MR_hl_field(1, Bs0_49, 0))));
                        MR_Integer UB_77 = ((MR_Integer) ((MR_hl_field(1, Bs0_49, 1))));
                        MR_Word Bs0_78 = ((MR_Word) ((MR_hl_field(1, Bs0_49, 2))));
                        MR_Word R_80;

                        succeeded = (UA_59 < LB_76);
                        if (succeeded)
                          R_80 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (UA_59 > LB_76);
                          if (succeeded)
                            R_80 = (MR_Integer) 2;
                          else
                            R_80 = (MR_Integer) 0;
                        }
                        switch (R_80) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            Var_66 = mercury__ranges__difference_2_f_0(Bs0_49, As0_60);
                            break;
                          case (MR_Integer) 0:
                            Var_66 = mercury__ranges__n_union_a_nb_4_f_0(UA_59, As0_60, UB_77, Bs0_78);
                            break;
                          case (MR_Integer) 2:
                            Var_66 = mercury__ranges__diff_na_nb_4_f_0(UA_59, As0_60, UB_77, Bs0_78);
                            break;
                        }
                      }
                      {
                        Result_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_97, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_97, 1) = ((MR_Box) (LA_58));
                        MR_hl_field(1, Result_97, 2) = ((MR_Box) (Var_66));
                      }
                      *AddrOfResult_86 = Result_97;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word * AddrSCCcallarg_67_85;
                      MR_Word Result_98;
                      MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                      MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;

                      {
                        Result_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_98, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_98, 1) = ((MR_Box) (UB_48));
                        MR_hl_field(1, Result_98, 2) = NULL;
                      }
                      AddrSCCcallarg_67_85 = (MR_Word *) (&(MR_hl_field(1, Result_98, 2)));
                      *AddrOfResult_86 = Result_98;
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_49;
                      next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
                      next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrSCCcallarg_67_85;
                      tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                      tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                      tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word R_82;

                succeeded = (UA_6 < UB_48);
                if (succeeded)
                  R_82 = (MR_Integer) 1;
                else
                {
                  succeeded = (UA_6 > UB_48);
                  if (succeeded)
                    R_82 = (MR_Integer) 2;
                  else
                    R_82 = (MR_Integer) 0;
                }
                switch (R_82) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Result_104;

                      Result_104 = mercury__ranges__n_union_a_nb_4_f_0(UA_6, As0_7, UB_48, Bs0_49);
                      *AddrOfResult_86 = Result_104;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_49;
                      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
                      MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfResult_86;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                      tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                      tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Result_105;

                      Result_105 = mercury__ranges__int_na_b_3_f_0(UA_6, As0_7, Bs0_49);
                      *AddrOfResult_86 = Result_105;
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
mercury__ranges__LCMC__func__int_a_nb__1_4_p_0(
  MR_Word tscc_proc_2_input_1_HeadVar__1_1,
  MR_Integer tscc_proc_2_input_2_UB_2,
  MR_Word tscc_proc_2_input_3_Bs0_3,
  MR_Word * tscc_proc_2_input_4_AddrOfHeadVar__4_48)
{
  MR_Word tscc_proc_1_input_1_HeadVar__1_1;
  MR_Word tscc_proc_1_input_2_HeadVar__2_2;
  MR_Word * tscc_proc_1_input_3_AddrOfHeadVar__3_55;
  MR_Integer tscc_proc_3_input_1_UA_6;
  MR_Word tscc_proc_3_input_2_As0_7;
  MR_Integer tscc_proc_3_input_3_UB_8;
  MR_Word tscc_proc_3_input_4_Bs0_9;
  MR_Word * tscc_proc_3_input_5_AddrOfResult_86;

  // The code for TSCC PROC 2: pred ranges.LCMC__func__int_a_nb__1/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ranges.LCMC__func__difference__1/3-0
  ;
  // proc 2 in TSCC: pred ranges.LCMC__func__int_a_nb__1/4-0
  ;
  // proc 3 in TSCC: pred ranges.LCMC__func__diff_na_nb__1/5-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_2_HeadVar__2_2;
    MR_Word * AddrOfHeadVar__3_55 = tscc_proc_1_input_3_AddrOfHeadVar__3_55;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_55 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_55 = HeadVar__1_1;
      else
      {
        MR_Integer LB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Integer UB_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Bs0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Word R_18;

        succeeded = (Var_22 < LB_14);
        if (succeeded)
          R_18 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_22 == LB_14);
          if (succeeded)
            R_18 = (MR_Integer) 0;
          else
            R_18 = (MR_Integer) 2;
        }
        switch (R_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer LB_30 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer UB_31 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word Bs0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word R_34;

              succeeded = (Var_21 < LB_30);
              if (succeeded)
                R_34 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_21 > LB_30);
                if (succeeded)
                  R_34 = (MR_Integer) 2;
                else
                  R_34 = (MR_Integer) 0;
              }
              switch (R_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word * AddrSCCcallarg_35_52;
                    MR_Word HeadVar__3_58;
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;

                    {
                      HeadVar__3_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_58, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_58, 1) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_58, 2) = NULL;
                    }
                    AddrSCCcallarg_35_52 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_58, 2)));
                    *AddrOfHeadVar__3_55 = HeadVar__3_58;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Var_20;
                    next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = HeadVar__2_2;
                    next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrSCCcallarg_35_52;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word * AddrSCCcallarg_36_53;
                    MR_Word HeadVar__3_61;
                    MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                    MR_Integer next_value_of_tscc_proc_2_input_2_UB_2;
                    MR_Word next_value_of_tscc_proc_2_input_3_Bs0_3;
                    MR_Word * next_value_of_tscc_proc_2_input_4_AddrOfHeadVar__4_48;

                    {
                      HeadVar__3_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_61, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_61, 1) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_61, 2) = NULL;
                    }
                    AddrSCCcallarg_36_53 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_61, 2)));
                    *AddrOfHeadVar__3_55 = HeadVar__3_61;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Var_20;
                    next_value_of_tscc_proc_2_input_2_UB_2 = UB_31;
                    next_value_of_tscc_proc_2_input_3_Bs0_3 = Bs0_32;
                    next_value_of_tscc_proc_2_input_4_AddrOfHeadVar__4_48 = AddrSCCcallarg_36_53;
                    tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                    tscc_proc_2_input_2_UB_2 = next_value_of_tscc_proc_2_input_2_UB_2;
                    tscc_proc_2_input_3_Bs0_3 = next_value_of_tscc_proc_2_input_3_Bs0_3;
                    tscc_proc_2_input_4_AddrOfHeadVar__4_48 = next_value_of_tscc_proc_2_input_4_AddrOfHeadVar__4_48;
                    goto top_of_proc_2;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word * AddrSCCcallarg_37_54;
                    MR_Word HeadVar__3_64;
                    MR_Integer next_value_of_tscc_proc_3_input_1_UA_6;
                    MR_Word next_value_of_tscc_proc_3_input_2_As0_7;
                    MR_Integer next_value_of_tscc_proc_3_input_3_UB_8;
                    MR_Word next_value_of_tscc_proc_3_input_4_Bs0_9;
                    MR_Word * next_value_of_tscc_proc_3_input_5_AddrOfResult_86;

                    {
                      HeadVar__3_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_64, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_64, 1) = ((MR_Box) (LB_30));
                      MR_hl_field(1, HeadVar__3_64, 2) = NULL;
                    }
                    AddrSCCcallarg_37_54 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_64, 2)));
                    *AddrOfHeadVar__3_55 = HeadVar__3_64;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_3_input_1_UA_6 = UB_31;
                    next_value_of_tscc_proc_3_input_2_As0_7 = Bs0_32;
                    next_value_of_tscc_proc_3_input_3_UB_8 = Var_21;
                    next_value_of_tscc_proc_3_input_4_Bs0_9 = Var_20;
                    next_value_of_tscc_proc_3_input_5_AddrOfResult_86 = AddrSCCcallarg_37_54;
                    tscc_proc_3_input_1_UA_6 = next_value_of_tscc_proc_3_input_1_UA_6;
                    tscc_proc_3_input_2_As0_7 = next_value_of_tscc_proc_3_input_2_As0_7;
                    tscc_proc_3_input_3_UB_8 = next_value_of_tscc_proc_3_input_3_UB_8;
                    tscc_proc_3_input_4_Bs0_9 = next_value_of_tscc_proc_3_input_4_Bs0_9;
                    tscc_proc_3_input_5_AddrOfResult_86 = next_value_of_tscc_proc_3_input_5_AddrOfResult_86;
                    goto top_of_proc_3;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word R_39;

              succeeded = (UB_15 < Var_21);
              if (succeeded)
                R_39 = (MR_Integer) 1;
              else
              {
                succeeded = (UB_15 > Var_21);
                if (succeeded)
                  R_39 = (MR_Integer) 2;
                else
                  R_39 = (MR_Integer) 0;
              }
              switch (R_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word HeadVar__3_70;

                    HeadVar__3_70 = mercury__ranges__n_union_a_nb_4_f_0(UB_15, Bs0_16, Var_21, Var_20);
                    *AddrOfHeadVar__3_55 = HeadVar__3_70;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Var_20;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_16;
                    MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfHeadVar__3_55;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word HeadVar__3_71;

                    HeadVar__3_71 = mercury__ranges__int_na_b_3_f_0(UB_15, Bs0_16, Var_20);
                    *AddrOfHeadVar__3_55 = HeadVar__3_71;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer LA_44 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
              MR_Integer UA_45 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
              MR_Word As0_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
              MR_Word R_50;

              succeeded = (LA_44 < UB_15);
              if (succeeded)
                R_50 = (MR_Integer) 1;
              else
              {
                succeeded = (LA_44 > UB_15);
                if (succeeded)
                  R_50 = (MR_Integer) 2;
                else
                  R_50 = (MR_Integer) 0;
              }
              switch (R_50) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Integer next_value_of_tscc_proc_3_input_1_UA_6 = UB_15;
                    MR_Word next_value_of_tscc_proc_3_input_2_As0_7 = Bs0_16;
                    MR_Integer next_value_of_tscc_proc_3_input_3_UB_8 = UA_45;
                    MR_Word next_value_of_tscc_proc_3_input_4_Bs0_9 = As0_46;
                    MR_Word * next_value_of_tscc_proc_3_input_5_AddrOfResult_86 = AddrOfHeadVar__3_55;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_3_input_1_UA_6 = next_value_of_tscc_proc_3_input_1_UA_6;
                    tscc_proc_3_input_2_As0_7 = next_value_of_tscc_proc_3_input_2_As0_7;
                    tscc_proc_3_input_3_UB_8 = next_value_of_tscc_proc_3_input_3_UB_8;
                    tscc_proc_3_input_4_Bs0_9 = next_value_of_tscc_proc_3_input_4_Bs0_9;
                    tscc_proc_3_input_5_AddrOfResult_86 = next_value_of_tscc_proc_3_input_5_AddrOfResult_86;
                    goto top_of_proc_3;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word HeadVar__3_75;

                    HeadVar__3_75 = mercury__ranges__n_union_na_b_4_f_0(LA_44, UA_45, As0_46, Bs0_16);
                    *AddrOfHeadVar__3_55 = HeadVar__3_75;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__1_1;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_16;
                    MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfHeadVar__3_55;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
      }
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
    MR_Integer UB_2 = tscc_proc_2_input_2_UB_2;
    MR_Word Bs0_3 = tscc_proc_2_input_3_Bs0_3;
    MR_Word * AddrOfHeadVar__4_48 = tscc_proc_2_input_4_AddrOfHeadVar__4_48;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__4_48 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer LA_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer UA_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word As0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Word R_14;

      succeeded = (LA_8 < UB_2);
      if (succeeded)
        R_14 = (MR_Integer) 1;
      else
      {
        succeeded = (LA_8 == UB_2);
        if (succeeded)
          R_14 = (MR_Integer) 0;
        else
          R_14 = (MR_Integer) 2;
      }
      switch (R_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word R_16;

            succeeded = (UB_2 < UA_9);
            if (succeeded)
              R_16 = (MR_Integer) 1;
            else
            {
              succeeded = (UB_2 > UA_9);
              if (succeeded)
                R_16 = (MR_Integer) 2;
              else
                R_16 = (MR_Integer) 0;
            }
            switch (R_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word HeadVar__4_49;

                  HeadVar__4_49 = mercury__ranges__n_union_a_nb_4_f_0(UB_2, Bs0_3, UA_9, As0_10);
                  *AddrOfHeadVar__4_48 = HeadVar__4_49;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = As0_10;
                  MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_3;
                  MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfHeadVar__4_48;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                  tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadVar__4_50;

                  HeadVar__4_50 = mercury__ranges__int_na_b_3_f_0(UB_2, Bs0_3, As0_10);
                  *AddrOfHeadVar__4_48 = HeadVar__4_50;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 0:
          if ((Bs0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *AddrOfHeadVar__4_48 = HeadVar__1_1;
          else
          {
            MR_Integer LB_25 = ((MR_Integer) ((MR_hl_field(1, Bs0_3, 0))));
            MR_Integer UB_26 = ((MR_Integer) ((MR_hl_field(1, Bs0_3, 1))));
            MR_Word Bs0_27 = ((MR_Word) ((MR_hl_field(1, Bs0_3, 2))));
            MR_Word R_29;

            succeeded = (UA_9 < LB_25);
            if (succeeded)
              R_29 = (MR_Integer) 1;
            else
            {
              succeeded = (UA_9 == LB_25);
              if (succeeded)
                R_29 = (MR_Integer) 0;
              else
                R_29 = (MR_Integer) 2;
            }
            switch (R_29) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word * AddrSCCcallarg_30_47;
                  MR_Word HeadVar__4_54;
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                  MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;

                  {
                    HeadVar__4_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_54, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_54, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_54, 2) = NULL;
                  }
                  AddrSCCcallarg_30_47 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_54, 2)));
                  *AddrOfHeadVar__4_48 = HeadVar__4_54;
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = As0_10;
                  next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_3;
                  next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrSCCcallarg_30_47;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                  tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_31;
                  MR_Word HeadVar__4_57;

                  if ((As0_10 == (MR_Word) ((MR_Unsigned) 0U)))
                    Var_31 = (MR_Word) ((MR_Unsigned) 0U);
                  else
                  {
                    MR_Integer LA_37 = ((MR_Integer) ((MR_hl_field(1, As0_10, 0))));
                    MR_Integer UA_38 = ((MR_Integer) ((MR_hl_field(1, As0_10, 1))));
                    MR_Word As0_39 = ((MR_Word) ((MR_hl_field(1, As0_10, 2))));
                    MR_Word R_43;

                    succeeded = (LA_37 < UB_26);
                    if (succeeded)
                      R_43 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (LA_37 > UB_26);
                      if (succeeded)
                        R_43 = (MR_Integer) 2;
                      else
                        R_43 = (MR_Integer) 0;
                    }
                    switch (R_43) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        Var_31 = mercury__ranges__diff_na_nb_4_f_0(UB_26, Bs0_27, UA_38, As0_39);
                        break;
                      case (MR_Integer) 0:
                        Var_31 = mercury__ranges__n_union_na_b_4_f_0(LA_37, UA_38, As0_39, Bs0_27);
                        break;
                      case (MR_Integer) 2:
                        Var_31 = mercury__ranges__difference_2_f_0(As0_10, Bs0_27);
                        break;
                    }
                  }
                  {
                    HeadVar__4_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_57, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_57, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_57, 2) = ((MR_Box) (Var_31));
                  }
                  *AddrOfHeadVar__4_48 = HeadVar__4_57;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_32;
                  MR_Word R_45;
                  MR_Word HeadVar__4_58;

                  succeeded = (UB_26 < UA_9);
                  if (succeeded)
                    R_45 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (UB_26 > UA_9);
                    if (succeeded)
                      R_45 = (MR_Integer) 2;
                    else
                      R_45 = (MR_Integer) 0;
                  }
                  switch (R_45) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Var_32 = mercury__ranges__n_union_a_nb_4_f_0(UB_26, Bs0_27, UA_9, As0_10);
                      break;
                    case (MR_Integer) 0:
                      Var_32 = mercury__ranges__difference_2_f_0(As0_10, Bs0_27);
                      break;
                    case (MR_Integer) 2:
                      Var_32 = mercury__ranges__int_na_b_3_f_0(UB_26, Bs0_27, As0_10);
                      break;
                  }
                  {
                    HeadVar__4_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_58, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_58, 1) = ((MR_Box) (LB_25));
                    MR_hl_field(1, HeadVar__4_58, 2) = ((MR_Box) (Var_32));
                  }
                  *AddrOfHeadVar__4_48 = HeadVar__4_58;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__1_1;
            MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_3;
            MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfHeadVar__4_48;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
            tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
            goto top_of_proc_1;
          }
          break;
      }
    }
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Integer UA_6 = tscc_proc_3_input_1_UA_6;
    MR_Word As0_7 = tscc_proc_3_input_2_As0_7;
    MR_Integer UB_8 = tscc_proc_3_input_3_UB_8;
    MR_Word Bs0_9 = tscc_proc_3_input_4_Bs0_9;
    MR_Word * AddrOfResult_86 = tscc_proc_3_input_5_AddrOfResult_86;
    MR_bool succeeded = (UA_6 < UB_8);
    MR_Word R_11;

    if (succeeded)
      R_11 = (MR_Integer) 1;
    else
    {
      succeeded = (UA_6 == UB_8);
      if (succeeded)
        R_11 = (MR_Integer) 0;
      else
        R_11 = (MR_Integer) 2;
    }
    switch (R_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((As0_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Result_10;

          {
            Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
            MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_8));
            MR_hl_field(1, Result_10, 2) = ((MR_Box) (Bs0_9));
          }
          *AddrOfResult_86 = Result_10;
        }
        else
        {
          MR_Integer LA_18 = ((MR_Integer) ((MR_hl_field(1, As0_7, 0))));
          MR_Integer UA_19 = ((MR_Integer) ((MR_hl_field(1, As0_7, 1))));
          MR_Word As0_20 = ((MR_Word) ((MR_hl_field(1, As0_7, 2))));
          MR_Word R_24;

          succeeded = (LA_18 < UB_8);
          if (succeeded)
            R_24 = (MR_Integer) 1;
          else
          {
            succeeded = (LA_18 == UB_8);
            if (succeeded)
              R_24 = (MR_Integer) 0;
            else
              R_24 = (MR_Integer) 2;
          }
          switch (R_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_25;
                MR_Word R_29;
                MR_Word Result_87;

                succeeded = (UA_19 < UB_8);
                if (succeeded)
                  R_29 = (MR_Integer) 1;
                else
                {
                  succeeded = (UA_19 > UB_8);
                  if (succeeded)
                    R_29 = (MR_Integer) 2;
                  else
                    R_29 = (MR_Integer) 0;
                }
                switch (R_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    Var_25 = mercury__ranges__n_union_a_nb_4_f_0(UA_19, As0_20, UB_8, Bs0_9);
                    break;
                  case (MR_Integer) 0:
                    Var_25 = mercury__ranges__difference_2_f_0(Bs0_9, As0_20);
                    break;
                  case (MR_Integer) 2:
                    Var_25 = mercury__ranges__int_na_b_3_f_0(UA_19, As0_20, Bs0_9);
                    break;
                }
                {
                  Result_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_87, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_87, 1) = ((MR_Box) (LA_18));
                  MR_hl_field(1, Result_87, 2) = ((MR_Box) (Var_25));
                }
                *AddrOfResult_86 = Result_87;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_26;
                MR_Word Result_88;

                if ((Bs0_9 == (MR_Word) ((MR_Unsigned) 0U)))
                  Var_26 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Integer LB_36 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 0))));
                  MR_Integer UB_37 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 1))));
                  MR_Word Bs0_38 = ((MR_Word) ((MR_hl_field(1, Bs0_9, 2))));
                  MR_Word R_40;

                  succeeded = (UA_19 < LB_36);
                  if (succeeded)
                    R_40 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (UA_19 > LB_36);
                    if (succeeded)
                      R_40 = (MR_Integer) 2;
                    else
                      R_40 = (MR_Integer) 0;
                  }
                  switch (R_40) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Var_26 = mercury__ranges__difference_2_f_0(Bs0_9, As0_20);
                      break;
                    case (MR_Integer) 0:
                      Var_26 = mercury__ranges__n_union_a_nb_4_f_0(UA_19, As0_20, UB_37, Bs0_38);
                      break;
                    case (MR_Integer) 2:
                      Var_26 = mercury__ranges__diff_na_nb_4_f_0(UA_19, As0_20, UB_37, Bs0_38);
                      break;
                  }
                }
                {
                  Result_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_88, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_88, 1) = ((MR_Box) (LA_18));
                  MR_hl_field(1, Result_88, 2) = ((MR_Box) (Var_26));
                }
                *AddrOfResult_86 = Result_88;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrSCCcallarg_27_84;
                MR_Word Result_89;
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;

                {
                  Result_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_89, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_89, 1) = ((MR_Box) (UB_8));
                  MR_hl_field(1, Result_89, 2) = NULL;
                }
                AddrSCCcallarg_27_84 = (MR_Word *) (&(MR_hl_field(1, Result_89, 2)));
                *AddrOfResult_86 = Result_89;
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
                next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
                next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrSCCcallarg_27_84;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                goto top_of_proc_1;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
          MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
          MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfResult_86;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
          tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
          tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        if ((Bs0_9 == (MR_Word) ((MR_Unsigned) 0U)))
          *AddrOfResult_86 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Integer LB_47 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 0))));
          MR_Integer UB_48 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 1))));
          MR_Word Bs0_49 = ((MR_Word) ((MR_hl_field(1, Bs0_9, 2))));
          MR_Word R_51;

          succeeded = (UA_6 < LB_47);
          if (succeeded)
            R_51 = (MR_Integer) 1;
          else
          {
            succeeded = (UA_6 == LB_47);
            if (succeeded)
              R_51 = (MR_Integer) 0;
            else
              R_51 = (MR_Integer) 2;
          }
          switch (R_51) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
                MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfResult_86;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 0:
              if ((As0_7 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Result_95;

                {
                  Result_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_95, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_95, 1) = ((MR_Box) (UB_48));
                  MR_hl_field(1, Result_95, 2) = ((MR_Box) (Bs0_49));
                }
                *AddrOfResult_86 = Result_95;
              }
              else
              {
                MR_Integer LA_58 = ((MR_Integer) ((MR_hl_field(1, As0_7, 0))));
                MR_Integer UA_59 = ((MR_Integer) ((MR_hl_field(1, As0_7, 1))));
                MR_Word As0_60 = ((MR_Word) ((MR_hl_field(1, As0_7, 2))));
                MR_Word R_64;

                succeeded = (LA_58 < UB_48);
                if (succeeded)
                  R_64 = (MR_Integer) 1;
                else
                {
                  succeeded = (LA_58 == UB_48);
                  if (succeeded)
                    R_64 = (MR_Integer) 0;
                  else
                    R_64 = (MR_Integer) 2;
                }
                switch (R_64) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_65;
                      MR_Word R_69;
                      MR_Word Result_96;

                      succeeded = (UA_59 < UB_48);
                      if (succeeded)
                        R_69 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (UA_59 > UB_48);
                        if (succeeded)
                          R_69 = (MR_Integer) 2;
                        else
                          R_69 = (MR_Integer) 0;
                      }
                      switch (R_69) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          Var_65 = mercury__ranges__n_union_a_nb_4_f_0(UA_59, As0_60, UB_48, Bs0_49);
                          break;
                        case (MR_Integer) 0:
                          Var_65 = mercury__ranges__difference_2_f_0(Bs0_49, As0_60);
                          break;
                        case (MR_Integer) 2:
                          Var_65 = mercury__ranges__int_na_b_3_f_0(UA_59, As0_60, Bs0_49);
                          break;
                      }
                      {
                        Result_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_96, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_96, 1) = ((MR_Box) (LA_58));
                        MR_hl_field(1, Result_96, 2) = ((MR_Box) (Var_65));
                      }
                      *AddrOfResult_86 = Result_96;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_66;
                      MR_Word Result_97;

                      if ((Bs0_49 == (MR_Word) ((MR_Unsigned) 0U)))
                        Var_66 = (MR_Word) ((MR_Unsigned) 0U);
                      else
                      {
                        MR_Integer LB_76 = ((MR_Integer) ((MR_hl_field(1, Bs0_49, 0))));
                        MR_Integer UB_77 = ((MR_Integer) ((MR_hl_field(1, Bs0_49, 1))));
                        MR_Word Bs0_78 = ((MR_Word) ((MR_hl_field(1, Bs0_49, 2))));
                        MR_Word R_80;

                        succeeded = (UA_59 < LB_76);
                        if (succeeded)
                          R_80 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (UA_59 > LB_76);
                          if (succeeded)
                            R_80 = (MR_Integer) 2;
                          else
                            R_80 = (MR_Integer) 0;
                        }
                        switch (R_80) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            Var_66 = mercury__ranges__difference_2_f_0(Bs0_49, As0_60);
                            break;
                          case (MR_Integer) 0:
                            Var_66 = mercury__ranges__n_union_a_nb_4_f_0(UA_59, As0_60, UB_77, Bs0_78);
                            break;
                          case (MR_Integer) 2:
                            Var_66 = mercury__ranges__diff_na_nb_4_f_0(UA_59, As0_60, UB_77, Bs0_78);
                            break;
                        }
                      }
                      {
                        Result_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_97, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_97, 1) = ((MR_Box) (LA_58));
                        MR_hl_field(1, Result_97, 2) = ((MR_Box) (Var_66));
                      }
                      *AddrOfResult_86 = Result_97;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word * AddrSCCcallarg_67_85;
                      MR_Word Result_98;
                      MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                      MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;

                      {
                        Result_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_98, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_98, 1) = ((MR_Box) (UB_48));
                        MR_hl_field(1, Result_98, 2) = NULL;
                      }
                      AddrSCCcallarg_67_85 = (MR_Word *) (&(MR_hl_field(1, Result_98, 2)));
                      *AddrOfResult_86 = Result_98;
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_49;
                      next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
                      next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrSCCcallarg_67_85;
                      tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                      tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                      tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word R_82;

                succeeded = (UA_6 < UB_48);
                if (succeeded)
                  R_82 = (MR_Integer) 1;
                else
                {
                  succeeded = (UA_6 > UB_48);
                  if (succeeded)
                    R_82 = (MR_Integer) 2;
                  else
                    R_82 = (MR_Integer) 0;
                }
                switch (R_82) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Result_104;

                      Result_104 = mercury__ranges__n_union_a_nb_4_f_0(UA_6, As0_7, UB_48, Bs0_49);
                      *AddrOfResult_86 = Result_104;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_49;
                      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
                      MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfResult_86;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                      tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                      tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Result_105;

                      Result_105 = mercury__ranges__int_na_b_3_f_0(UA_6, As0_7, Bs0_49);
                      *AddrOfResult_86 = Result_105;
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

static void MR_CALL 
mercury__ranges__LCMC__func__diff_na_nb__1_5_p_0(
  MR_Integer tscc_proc_3_input_1_UA_6,
  MR_Word tscc_proc_3_input_2_As0_7,
  MR_Integer tscc_proc_3_input_3_UB_8,
  MR_Word tscc_proc_3_input_4_Bs0_9,
  MR_Word * tscc_proc_3_input_5_AddrOfResult_86)
{
  MR_Word tscc_proc_1_input_1_HeadVar__1_1;
  MR_Word tscc_proc_1_input_2_HeadVar__2_2;
  MR_Word * tscc_proc_1_input_3_AddrOfHeadVar__3_55;
  MR_Word tscc_proc_2_input_1_HeadVar__1_1;
  MR_Integer tscc_proc_2_input_2_UB_2;
  MR_Word tscc_proc_2_input_3_Bs0_3;
  MR_Word * tscc_proc_2_input_4_AddrOfHeadVar__4_48;

  // The code for TSCC PROC 3: pred ranges.LCMC__func__diff_na_nb__1/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ranges.LCMC__func__difference__1/3-0
  ;
  // proc 2 in TSCC: pred ranges.LCMC__func__int_a_nb__1/4-0
  ;
  // proc 3 in TSCC: pred ranges.LCMC__func__diff_na_nb__1/5-0
  ;
  ;
  goto top_of_proc_3;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_2_HeadVar__2_2;
    MR_Word * AddrOfHeadVar__3_55 = tscc_proc_1_input_3_AddrOfHeadVar__3_55;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_55 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_55 = HeadVar__1_1;
      else
      {
        MR_Integer LB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Integer UB_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Bs0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Word R_18;

        succeeded = (Var_22 < LB_14);
        if (succeeded)
          R_18 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_22 == LB_14);
          if (succeeded)
            R_18 = (MR_Integer) 0;
          else
            R_18 = (MR_Integer) 2;
        }
        switch (R_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer LB_30 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer UB_31 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word Bs0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word R_34;

              succeeded = (Var_21 < LB_30);
              if (succeeded)
                R_34 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_21 > LB_30);
                if (succeeded)
                  R_34 = (MR_Integer) 2;
                else
                  R_34 = (MR_Integer) 0;
              }
              switch (R_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word * AddrSCCcallarg_35_52;
                    MR_Word HeadVar__3_58;
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;

                    {
                      HeadVar__3_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_58, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_58, 1) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_58, 2) = NULL;
                    }
                    AddrSCCcallarg_35_52 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_58, 2)));
                    *AddrOfHeadVar__3_55 = HeadVar__3_58;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Var_20;
                    next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = HeadVar__2_2;
                    next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrSCCcallarg_35_52;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word * AddrSCCcallarg_36_53;
                    MR_Word HeadVar__3_61;
                    MR_Word next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                    MR_Integer next_value_of_tscc_proc_2_input_2_UB_2;
                    MR_Word next_value_of_tscc_proc_2_input_3_Bs0_3;
                    MR_Word * next_value_of_tscc_proc_2_input_4_AddrOfHeadVar__4_48;

                    {
                      HeadVar__3_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_61, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_61, 1) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_61, 2) = NULL;
                    }
                    AddrSCCcallarg_36_53 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_61, 2)));
                    *AddrOfHeadVar__3_55 = HeadVar__3_61;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_2_input_1_HeadVar__1_1 = Var_20;
                    next_value_of_tscc_proc_2_input_2_UB_2 = UB_31;
                    next_value_of_tscc_proc_2_input_3_Bs0_3 = Bs0_32;
                    next_value_of_tscc_proc_2_input_4_AddrOfHeadVar__4_48 = AddrSCCcallarg_36_53;
                    tscc_proc_2_input_1_HeadVar__1_1 = next_value_of_tscc_proc_2_input_1_HeadVar__1_1;
                    tscc_proc_2_input_2_UB_2 = next_value_of_tscc_proc_2_input_2_UB_2;
                    tscc_proc_2_input_3_Bs0_3 = next_value_of_tscc_proc_2_input_3_Bs0_3;
                    tscc_proc_2_input_4_AddrOfHeadVar__4_48 = next_value_of_tscc_proc_2_input_4_AddrOfHeadVar__4_48;
                    goto top_of_proc_2;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word * AddrSCCcallarg_37_54;
                    MR_Word HeadVar__3_64;
                    MR_Integer next_value_of_tscc_proc_3_input_1_UA_6;
                    MR_Word next_value_of_tscc_proc_3_input_2_As0_7;
                    MR_Integer next_value_of_tscc_proc_3_input_3_UB_8;
                    MR_Word next_value_of_tscc_proc_3_input_4_Bs0_9;
                    MR_Word * next_value_of_tscc_proc_3_input_5_AddrOfResult_86;

                    {
                      HeadVar__3_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_64, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_64, 1) = ((MR_Box) (LB_30));
                      MR_hl_field(1, HeadVar__3_64, 2) = NULL;
                    }
                    AddrSCCcallarg_37_54 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_64, 2)));
                    *AddrOfHeadVar__3_55 = HeadVar__3_64;
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_3_input_1_UA_6 = UB_31;
                    next_value_of_tscc_proc_3_input_2_As0_7 = Bs0_32;
                    next_value_of_tscc_proc_3_input_3_UB_8 = Var_21;
                    next_value_of_tscc_proc_3_input_4_Bs0_9 = Var_20;
                    next_value_of_tscc_proc_3_input_5_AddrOfResult_86 = AddrSCCcallarg_37_54;
                    tscc_proc_3_input_1_UA_6 = next_value_of_tscc_proc_3_input_1_UA_6;
                    tscc_proc_3_input_2_As0_7 = next_value_of_tscc_proc_3_input_2_As0_7;
                    tscc_proc_3_input_3_UB_8 = next_value_of_tscc_proc_3_input_3_UB_8;
                    tscc_proc_3_input_4_Bs0_9 = next_value_of_tscc_proc_3_input_4_Bs0_9;
                    tscc_proc_3_input_5_AddrOfResult_86 = next_value_of_tscc_proc_3_input_5_AddrOfResult_86;
                    goto top_of_proc_3;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word R_39;

              succeeded = (UB_15 < Var_21);
              if (succeeded)
                R_39 = (MR_Integer) 1;
              else
              {
                succeeded = (UB_15 > Var_21);
                if (succeeded)
                  R_39 = (MR_Integer) 2;
                else
                  R_39 = (MR_Integer) 0;
              }
              switch (R_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word HeadVar__3_70;

                    HeadVar__3_70 = mercury__ranges__n_union_a_nb_4_f_0(UB_15, Bs0_16, Var_21, Var_20);
                    *AddrOfHeadVar__3_55 = HeadVar__3_70;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Var_20;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_16;
                    MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfHeadVar__3_55;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word HeadVar__3_71;

                    HeadVar__3_71 = mercury__ranges__int_na_b_3_f_0(UB_15, Bs0_16, Var_20);
                    *AddrOfHeadVar__3_55 = HeadVar__3_71;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer LA_44 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
              MR_Integer UA_45 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
              MR_Word As0_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
              MR_Word R_50;

              succeeded = (LA_44 < UB_15);
              if (succeeded)
                R_50 = (MR_Integer) 1;
              else
              {
                succeeded = (LA_44 > UB_15);
                if (succeeded)
                  R_50 = (MR_Integer) 2;
                else
                  R_50 = (MR_Integer) 0;
              }
              switch (R_50) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Integer next_value_of_tscc_proc_3_input_1_UA_6 = UB_15;
                    MR_Word next_value_of_tscc_proc_3_input_2_As0_7 = Bs0_16;
                    MR_Integer next_value_of_tscc_proc_3_input_3_UB_8 = UA_45;
                    MR_Word next_value_of_tscc_proc_3_input_4_Bs0_9 = As0_46;
                    MR_Word * next_value_of_tscc_proc_3_input_5_AddrOfResult_86 = AddrOfHeadVar__3_55;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_3_input_1_UA_6 = next_value_of_tscc_proc_3_input_1_UA_6;
                    tscc_proc_3_input_2_As0_7 = next_value_of_tscc_proc_3_input_2_As0_7;
                    tscc_proc_3_input_3_UB_8 = next_value_of_tscc_proc_3_input_3_UB_8;
                    tscc_proc_3_input_4_Bs0_9 = next_value_of_tscc_proc_3_input_4_Bs0_9;
                    tscc_proc_3_input_5_AddrOfResult_86 = next_value_of_tscc_proc_3_input_5_AddrOfResult_86;
                    goto top_of_proc_3;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word HeadVar__3_75;

                    HeadVar__3_75 = mercury__ranges__n_union_na_b_4_f_0(LA_44, UA_45, As0_46, Bs0_16);
                    *AddrOfHeadVar__3_55 = HeadVar__3_75;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__1_1;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_16;
                    MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfHeadVar__3_55;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
      }
    }
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_2_input_1_HeadVar__1_1;
    MR_Integer UB_2 = tscc_proc_2_input_2_UB_2;
    MR_Word Bs0_3 = tscc_proc_2_input_3_Bs0_3;
    MR_Word * AddrOfHeadVar__4_48 = tscc_proc_2_input_4_AddrOfHeadVar__4_48;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__4_48 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer LA_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Integer UA_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word As0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Word R_14;

      succeeded = (LA_8 < UB_2);
      if (succeeded)
        R_14 = (MR_Integer) 1;
      else
      {
        succeeded = (LA_8 == UB_2);
        if (succeeded)
          R_14 = (MR_Integer) 0;
        else
          R_14 = (MR_Integer) 2;
      }
      switch (R_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word R_16;

            succeeded = (UB_2 < UA_9);
            if (succeeded)
              R_16 = (MR_Integer) 1;
            else
            {
              succeeded = (UB_2 > UA_9);
              if (succeeded)
                R_16 = (MR_Integer) 2;
              else
                R_16 = (MR_Integer) 0;
            }
            switch (R_16) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word HeadVar__4_49;

                  HeadVar__4_49 = mercury__ranges__n_union_a_nb_4_f_0(UB_2, Bs0_3, UA_9, As0_10);
                  *AddrOfHeadVar__4_48 = HeadVar__4_49;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = As0_10;
                  MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_3;
                  MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfHeadVar__4_48;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                  tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word HeadVar__4_50;

                  HeadVar__4_50 = mercury__ranges__int_na_b_3_f_0(UB_2, Bs0_3, As0_10);
                  *AddrOfHeadVar__4_48 = HeadVar__4_50;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 0:
          if ((Bs0_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *AddrOfHeadVar__4_48 = HeadVar__1_1;
          else
          {
            MR_Integer LB_25 = ((MR_Integer) ((MR_hl_field(1, Bs0_3, 0))));
            MR_Integer UB_26 = ((MR_Integer) ((MR_hl_field(1, Bs0_3, 1))));
            MR_Word Bs0_27 = ((MR_Word) ((MR_hl_field(1, Bs0_3, 2))));
            MR_Word R_29;

            succeeded = (UA_9 < LB_25);
            if (succeeded)
              R_29 = (MR_Integer) 1;
            else
            {
              succeeded = (UA_9 == LB_25);
              if (succeeded)
                R_29 = (MR_Integer) 0;
              else
                R_29 = (MR_Integer) 2;
            }
            switch (R_29) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word * AddrSCCcallarg_30_47;
                  MR_Word HeadVar__4_54;
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                  MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;

                  {
                    HeadVar__4_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_54, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_54, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_54, 2) = NULL;
                  }
                  AddrSCCcallarg_30_47 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_54, 2)));
                  *AddrOfHeadVar__4_48 = HeadVar__4_54;
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = As0_10;
                  next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_3;
                  next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrSCCcallarg_30_47;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                  tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_31;
                  MR_Word HeadVar__4_57;

                  if ((As0_10 == (MR_Word) ((MR_Unsigned) 0U)))
                    Var_31 = (MR_Word) ((MR_Unsigned) 0U);
                  else
                  {
                    MR_Integer LA_37 = ((MR_Integer) ((MR_hl_field(1, As0_10, 0))));
                    MR_Integer UA_38 = ((MR_Integer) ((MR_hl_field(1, As0_10, 1))));
                    MR_Word As0_39 = ((MR_Word) ((MR_hl_field(1, As0_10, 2))));
                    MR_Word R_43;

                    succeeded = (LA_37 < UB_26);
                    if (succeeded)
                      R_43 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (LA_37 > UB_26);
                      if (succeeded)
                        R_43 = (MR_Integer) 2;
                      else
                        R_43 = (MR_Integer) 0;
                    }
                    switch (R_43) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        Var_31 = mercury__ranges__diff_na_nb_4_f_0(UB_26, Bs0_27, UA_38, As0_39);
                        break;
                      case (MR_Integer) 0:
                        Var_31 = mercury__ranges__n_union_na_b_4_f_0(LA_37, UA_38, As0_39, Bs0_27);
                        break;
                      case (MR_Integer) 2:
                        Var_31 = mercury__ranges__difference_2_f_0(As0_10, Bs0_27);
                        break;
                    }
                  }
                  {
                    HeadVar__4_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_57, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_57, 1) = ((MR_Box) (UA_9));
                    MR_hl_field(1, HeadVar__4_57, 2) = ((MR_Box) (Var_31));
                  }
                  *AddrOfHeadVar__4_48 = HeadVar__4_57;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_32;
                  MR_Word R_45;
                  MR_Word HeadVar__4_58;

                  succeeded = (UB_26 < UA_9);
                  if (succeeded)
                    R_45 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (UB_26 > UA_9);
                    if (succeeded)
                      R_45 = (MR_Integer) 2;
                    else
                      R_45 = (MR_Integer) 0;
                  }
                  switch (R_45) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Var_32 = mercury__ranges__n_union_a_nb_4_f_0(UB_26, Bs0_27, UA_9, As0_10);
                      break;
                    case (MR_Integer) 0:
                      Var_32 = mercury__ranges__difference_2_f_0(As0_10, Bs0_27);
                      break;
                    case (MR_Integer) 2:
                      Var_32 = mercury__ranges__int_na_b_3_f_0(UB_26, Bs0_27, As0_10);
                      break;
                  }
                  {
                    HeadVar__4_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_58, 0) = ((MR_Box) (LA_8));
                    MR_hl_field(1, HeadVar__4_58, 1) = ((MR_Box) (LB_25));
                    MR_hl_field(1, HeadVar__4_58, 2) = ((MR_Box) (Var_32));
                  }
                  *AddrOfHeadVar__4_48 = HeadVar__4_58;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__1_1;
            MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_3;
            MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfHeadVar__4_48;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
            tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
            goto top_of_proc_1;
          }
          break;
      }
    }
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Integer UA_6 = tscc_proc_3_input_1_UA_6;
    MR_Word As0_7 = tscc_proc_3_input_2_As0_7;
    MR_Integer UB_8 = tscc_proc_3_input_3_UB_8;
    MR_Word Bs0_9 = tscc_proc_3_input_4_Bs0_9;
    MR_Word * AddrOfResult_86 = tscc_proc_3_input_5_AddrOfResult_86;
    MR_bool succeeded = (UA_6 < UB_8);
    MR_Word R_11;

    if (succeeded)
      R_11 = (MR_Integer) 1;
    else
    {
      succeeded = (UA_6 == UB_8);
      if (succeeded)
        R_11 = (MR_Integer) 0;
      else
        R_11 = (MR_Integer) 2;
    }
    switch (R_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((As0_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Result_10;

          {
            Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
            MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_8));
            MR_hl_field(1, Result_10, 2) = ((MR_Box) (Bs0_9));
          }
          *AddrOfResult_86 = Result_10;
        }
        else
        {
          MR_Integer LA_18 = ((MR_Integer) ((MR_hl_field(1, As0_7, 0))));
          MR_Integer UA_19 = ((MR_Integer) ((MR_hl_field(1, As0_7, 1))));
          MR_Word As0_20 = ((MR_Word) ((MR_hl_field(1, As0_7, 2))));
          MR_Word R_24;

          succeeded = (LA_18 < UB_8);
          if (succeeded)
            R_24 = (MR_Integer) 1;
          else
          {
            succeeded = (LA_18 == UB_8);
            if (succeeded)
              R_24 = (MR_Integer) 0;
            else
              R_24 = (MR_Integer) 2;
          }
          switch (R_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_25;
                MR_Word R_29;
                MR_Word Result_87;

                succeeded = (UA_19 < UB_8);
                if (succeeded)
                  R_29 = (MR_Integer) 1;
                else
                {
                  succeeded = (UA_19 > UB_8);
                  if (succeeded)
                    R_29 = (MR_Integer) 2;
                  else
                    R_29 = (MR_Integer) 0;
                }
                switch (R_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    Var_25 = mercury__ranges__n_union_a_nb_4_f_0(UA_19, As0_20, UB_8, Bs0_9);
                    break;
                  case (MR_Integer) 0:
                    Var_25 = mercury__ranges__difference_2_f_0(Bs0_9, As0_20);
                    break;
                  case (MR_Integer) 2:
                    Var_25 = mercury__ranges__int_na_b_3_f_0(UA_19, As0_20, Bs0_9);
                    break;
                }
                {
                  Result_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_87, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_87, 1) = ((MR_Box) (LA_18));
                  MR_hl_field(1, Result_87, 2) = ((MR_Box) (Var_25));
                }
                *AddrOfResult_86 = Result_87;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_26;
                MR_Word Result_88;

                if ((Bs0_9 == (MR_Word) ((MR_Unsigned) 0U)))
                  Var_26 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Integer LB_36 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 0))));
                  MR_Integer UB_37 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 1))));
                  MR_Word Bs0_38 = ((MR_Word) ((MR_hl_field(1, Bs0_9, 2))));
                  MR_Word R_40;

                  succeeded = (UA_19 < LB_36);
                  if (succeeded)
                    R_40 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (UA_19 > LB_36);
                    if (succeeded)
                      R_40 = (MR_Integer) 2;
                    else
                      R_40 = (MR_Integer) 0;
                  }
                  switch (R_40) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Var_26 = mercury__ranges__difference_2_f_0(Bs0_9, As0_20);
                      break;
                    case (MR_Integer) 0:
                      Var_26 = mercury__ranges__n_union_a_nb_4_f_0(UA_19, As0_20, UB_37, Bs0_38);
                      break;
                    case (MR_Integer) 2:
                      Var_26 = mercury__ranges__diff_na_nb_4_f_0(UA_19, As0_20, UB_37, Bs0_38);
                      break;
                  }
                }
                {
                  Result_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_88, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_88, 1) = ((MR_Box) (LA_18));
                  MR_hl_field(1, Result_88, 2) = ((MR_Box) (Var_26));
                }
                *AddrOfResult_86 = Result_88;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrSCCcallarg_27_84;
                MR_Word Result_89;
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;

                {
                  Result_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_89, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_89, 1) = ((MR_Box) (UB_8));
                  MR_hl_field(1, Result_89, 2) = NULL;
                }
                AddrSCCcallarg_27_84 = (MR_Word *) (&(MR_hl_field(1, Result_89, 2)));
                *AddrOfResult_86 = Result_89;
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
                next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
                next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrSCCcallarg_27_84;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                goto top_of_proc_1;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
          MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
          MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfResult_86;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
          tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
          tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        if ((Bs0_9 == (MR_Word) ((MR_Unsigned) 0U)))
          *AddrOfResult_86 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Integer LB_47 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 0))));
          MR_Integer UB_48 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 1))));
          MR_Word Bs0_49 = ((MR_Word) ((MR_hl_field(1, Bs0_9, 2))));
          MR_Word R_51;

          succeeded = (UA_6 < LB_47);
          if (succeeded)
            R_51 = (MR_Integer) 1;
          else
          {
            succeeded = (UA_6 == LB_47);
            if (succeeded)
              R_51 = (MR_Integer) 0;
            else
              R_51 = (MR_Integer) 2;
          }
          switch (R_51) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
                MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfResult_86;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 0:
              if ((As0_7 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Result_95;

                {
                  Result_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_95, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_95, 1) = ((MR_Box) (UB_48));
                  MR_hl_field(1, Result_95, 2) = ((MR_Box) (Bs0_49));
                }
                *AddrOfResult_86 = Result_95;
              }
              else
              {
                MR_Integer LA_58 = ((MR_Integer) ((MR_hl_field(1, As0_7, 0))));
                MR_Integer UA_59 = ((MR_Integer) ((MR_hl_field(1, As0_7, 1))));
                MR_Word As0_60 = ((MR_Word) ((MR_hl_field(1, As0_7, 2))));
                MR_Word R_64;

                succeeded = (LA_58 < UB_48);
                if (succeeded)
                  R_64 = (MR_Integer) 1;
                else
                {
                  succeeded = (LA_58 == UB_48);
                  if (succeeded)
                    R_64 = (MR_Integer) 0;
                  else
                    R_64 = (MR_Integer) 2;
                }
                switch (R_64) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_65;
                      MR_Word R_69;
                      MR_Word Result_96;

                      succeeded = (UA_59 < UB_48);
                      if (succeeded)
                        R_69 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (UA_59 > UB_48);
                        if (succeeded)
                          R_69 = (MR_Integer) 2;
                        else
                          R_69 = (MR_Integer) 0;
                      }
                      switch (R_69) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          Var_65 = mercury__ranges__n_union_a_nb_4_f_0(UA_59, As0_60, UB_48, Bs0_49);
                          break;
                        case (MR_Integer) 0:
                          Var_65 = mercury__ranges__difference_2_f_0(Bs0_49, As0_60);
                          break;
                        case (MR_Integer) 2:
                          Var_65 = mercury__ranges__int_na_b_3_f_0(UA_59, As0_60, Bs0_49);
                          break;
                      }
                      {
                        Result_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_96, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_96, 1) = ((MR_Box) (LA_58));
                        MR_hl_field(1, Result_96, 2) = ((MR_Box) (Var_65));
                      }
                      *AddrOfResult_86 = Result_96;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_66;
                      MR_Word Result_97;

                      if ((Bs0_49 == (MR_Word) ((MR_Unsigned) 0U)))
                        Var_66 = (MR_Word) ((MR_Unsigned) 0U);
                      else
                      {
                        MR_Integer LB_76 = ((MR_Integer) ((MR_hl_field(1, Bs0_49, 0))));
                        MR_Integer UB_77 = ((MR_Integer) ((MR_hl_field(1, Bs0_49, 1))));
                        MR_Word Bs0_78 = ((MR_Word) ((MR_hl_field(1, Bs0_49, 2))));
                        MR_Word R_80;

                        succeeded = (UA_59 < LB_76);
                        if (succeeded)
                          R_80 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (UA_59 > LB_76);
                          if (succeeded)
                            R_80 = (MR_Integer) 2;
                          else
                            R_80 = (MR_Integer) 0;
                        }
                        switch (R_80) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            Var_66 = mercury__ranges__difference_2_f_0(Bs0_49, As0_60);
                            break;
                          case (MR_Integer) 0:
                            Var_66 = mercury__ranges__n_union_a_nb_4_f_0(UA_59, As0_60, UB_77, Bs0_78);
                            break;
                          case (MR_Integer) 2:
                            Var_66 = mercury__ranges__diff_na_nb_4_f_0(UA_59, As0_60, UB_77, Bs0_78);
                            break;
                        }
                      }
                      {
                        Result_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_97, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_97, 1) = ((MR_Box) (LA_58));
                        MR_hl_field(1, Result_97, 2) = ((MR_Box) (Var_66));
                      }
                      *AddrOfResult_86 = Result_97;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word * AddrSCCcallarg_67_85;
                      MR_Word Result_98;
                      MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                      MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;

                      {
                        Result_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_98, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_98, 1) = ((MR_Box) (UB_48));
                        MR_hl_field(1, Result_98, 2) = NULL;
                      }
                      AddrSCCcallarg_67_85 = (MR_Word *) (&(MR_hl_field(1, Result_98, 2)));
                      *AddrOfResult_86 = Result_98;
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_49;
                      next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
                      next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrSCCcallarg_67_85;
                      tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                      tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                      tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word R_82;

                succeeded = (UA_6 < UB_48);
                if (succeeded)
                  R_82 = (MR_Integer) 1;
                else
                {
                  succeeded = (UA_6 > UB_48);
                  if (succeeded)
                    R_82 = (MR_Integer) 2;
                  else
                    R_82 = (MR_Integer) 0;
                }
                switch (R_82) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Result_104;

                      Result_104 = mercury__ranges__n_union_a_nb_4_f_0(UA_6, As0_7, UB_48, Bs0_49);
                      *AddrOfResult_86 = Result_104;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_49;
                      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;
                      MR_Word * next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55 = AddrOfResult_86;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                      tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                      tscc_proc_1_input_3_AddrOfHeadVar__3_55 = next_value_of_tscc_proc_1_input_3_AddrOfHeadVar__3_55;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Result_105;

                      Result_105 = mercury__ranges__int_na_b_3_f_0(UA_6, As0_7, Bs0_49);
                      *AddrOfResult_86 = Result_105;
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
    }
    goto tscc_end;
  }
tscc_end:;
  return;
}

MR_Word MR_CALL 
mercury__ranges__difference_2_f_0(
  MR_Word tscc_proc_1_input_1_HeadVar__1_1,
  MR_Word tscc_proc_1_input_2_HeadVar__2_2)
{
  MR_Integer tscc_proc_2_input_1_UA_1;
  MR_Word tscc_proc_2_input_2_As0_2;
  MR_Word tscc_proc_2_input_3_HeadVar__3_3;
  MR_Integer tscc_proc_3_input_1_UA_6;
  MR_Word tscc_proc_3_input_2_As0_7;
  MR_Integer tscc_proc_3_input_3_UB_8;
  MR_Word tscc_proc_3_input_4_Bs0_9;
  MR_Word tscc_output_1_HeadVar__3_3;

  // The code for TSCC PROC 1: func ranges.difference/2-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: func ranges.difference/2-0
  ;
  // proc 2 in TSCC: func ranges.int_na_b/3-0
  ;
  // proc 3 in TSCC: func ranges.diff_na_nb/4-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_2_HeadVar__2_2;
    MR_Word HeadVar__3_3;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__3_3 = HeadVar__1_1;
      else
      {
        MR_Integer LB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Integer UB_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Bs0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Word R_18;

        succeeded = (Var_22 < LB_14);
        if (succeeded)
          R_18 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_22 == LB_14);
          if (succeeded)
            R_18 = (MR_Integer) 0;
          else
            R_18 = (MR_Integer) 2;
        }
        switch (R_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer LB_30 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer UB_31 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word Bs0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word R_34;

              succeeded = (Var_21 < LB_30);
              if (succeeded)
                R_34 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_21 > LB_30);
                if (succeeded)
                  R_34 = (MR_Integer) 2;
                else
                  R_34 = (MR_Integer) 0;
              }
              switch (R_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word * AddrSCCcallarg_35_52;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_35_52 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__difference__1_3_p_0(Var_20, HeadVar__2_2, AddrSCCcallarg_35_52);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word * AddrSCCcallarg_36_53;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_36_53 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__int_a_nb__1_4_p_0(Var_20, UB_31, Bs0_32, AddrSCCcallarg_36_53);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word * AddrSCCcallarg_37_54;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (LB_30));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_37_54 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__diff_na_nb__1_5_p_0(UB_31, Bs0_32, Var_21, Var_20, AddrSCCcallarg_37_54);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word R_39;

              succeeded = (UB_15 < Var_21);
              if (succeeded)
                R_39 = (MR_Integer) 1;
              else
              {
                succeeded = (UB_15 > Var_21);
                if (succeeded)
                  R_39 = (MR_Integer) 2;
                else
                  R_39 = (MR_Integer) 0;
              }
              switch (R_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  HeadVar__3_3 = mercury__ranges__n_union_a_nb_4_f_0(UB_15, Bs0_16, Var_21, Var_20);
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Var_20;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_16;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer next_value_of_tscc_proc_2_input_1_UA_1 = UB_15;
                    MR_Word next_value_of_tscc_proc_2_input_2_As0_2 = Bs0_16;
                    MR_Word next_value_of_tscc_proc_2_input_3_HeadVar__3_3 = Var_20;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_2_input_1_UA_1 = next_value_of_tscc_proc_2_input_1_UA_1;
                    tscc_proc_2_input_2_As0_2 = next_value_of_tscc_proc_2_input_2_As0_2;
                    tscc_proc_2_input_3_HeadVar__3_3 = next_value_of_tscc_proc_2_input_3_HeadVar__3_3;
                    goto top_of_proc_2;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer LA_44 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
              MR_Integer UA_45 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
              MR_Word As0_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
              MR_Word R_50;

              succeeded = (LA_44 < UB_15);
              if (succeeded)
                R_50 = (MR_Integer) 1;
              else
              {
                succeeded = (LA_44 > UB_15);
                if (succeeded)
                  R_50 = (MR_Integer) 2;
                else
                  R_50 = (MR_Integer) 0;
              }
              switch (R_50) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Integer next_value_of_tscc_proc_3_input_1_UA_6 = UB_15;
                    MR_Word next_value_of_tscc_proc_3_input_2_As0_7 = Bs0_16;
                    MR_Integer next_value_of_tscc_proc_3_input_3_UB_8 = UA_45;
                    MR_Word next_value_of_tscc_proc_3_input_4_Bs0_9 = As0_46;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_3_input_1_UA_6 = next_value_of_tscc_proc_3_input_1_UA_6;
                    tscc_proc_3_input_2_As0_7 = next_value_of_tscc_proc_3_input_2_As0_7;
                    tscc_proc_3_input_3_UB_8 = next_value_of_tscc_proc_3_input_3_UB_8;
                    tscc_proc_3_input_4_Bs0_9 = next_value_of_tscc_proc_3_input_4_Bs0_9;
                    goto top_of_proc_3;
                  }
                  break;
                case (MR_Integer) 0:
                  HeadVar__3_3 = mercury__ranges__n_union_na_b_4_f_0(LA_44, UA_45, As0_46, Bs0_16);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__1_1;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_16;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
      }
    }
    tscc_output_1_HeadVar__3_3 = HeadVar__3_3;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Integer UA_1 = tscc_proc_2_input_1_UA_1;
    MR_Word As0_2 = tscc_proc_2_input_2_As0_2;
    MR_Word HeadVar__3_3 = tscc_proc_2_input_3_HeadVar__3_3;
    MR_Word HeadVar__4_4;
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer LB_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Integer UB_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Bs0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Word R_14;

      succeeded = (UA_1 < LB_10);
      if (succeeded)
        R_14 = (MR_Integer) 1;
      else
      {
        succeeded = (UA_1 == LB_10);
        if (succeeded)
          R_14 = (MR_Integer) 0;
        else
          R_14 = (MR_Integer) 2;
      }
      switch (R_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__3_3;
            MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_2;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 0:
          if ((As0_2 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (UA_1));
              MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (UB_11));
              MR_hl_field(1, HeadVar__4_4, 2) = ((MR_Box) (Bs0_12));
            }
          else
          {
            MR_Integer LA_21 = ((MR_Integer) ((MR_hl_field(1, As0_2, 0))));
            MR_Integer UA_22 = ((MR_Integer) ((MR_hl_field(1, As0_2, 1))));
            MR_Word As0_23 = ((MR_Word) ((MR_hl_field(1, As0_2, 2))));
            MR_Word R_27;

            succeeded = (LA_21 < UB_11);
            if (succeeded)
              R_27 = (MR_Integer) 1;
            else
            {
              succeeded = (LA_21 == UB_11);
              if (succeeded)
                R_27 = (MR_Integer) 0;
              else
                R_27 = (MR_Integer) 2;
            }
            switch (R_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_28;
                  MR_Word R_32;

                  succeeded = (UA_22 < UB_11);
                  if (succeeded)
                    R_32 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (UA_22 > UB_11);
                    if (succeeded)
                      R_32 = (MR_Integer) 2;
                    else
                      R_32 = (MR_Integer) 0;
                  }
                  switch (R_32) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Var_28 = mercury__ranges__n_union_a_nb_4_f_0(UA_22, As0_23, UB_11, Bs0_12);
                      break;
                    case (MR_Integer) 0:
                      Var_28 = mercury__ranges__difference_2_f_0(Bs0_12, As0_23);
                      break;
                    case (MR_Integer) 2:
                      Var_28 = mercury__ranges__int_na_b_3_f_0(UA_22, As0_23, Bs0_12);
                      break;
                  }
                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (UA_1));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (LA_21));
                    MR_hl_field(1, HeadVar__4_4, 2) = ((MR_Box) (Var_28));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_29;

                  if ((Bs0_12 == (MR_Word) ((MR_Unsigned) 0U)))
                    Var_29 = (MR_Word) ((MR_Unsigned) 0U);
                  else
                  {
                    MR_Integer LB_39 = ((MR_Integer) ((MR_hl_field(1, Bs0_12, 0))));
                    MR_Integer UB_40 = ((MR_Integer) ((MR_hl_field(1, Bs0_12, 1))));
                    MR_Word Bs0_41 = ((MR_Word) ((MR_hl_field(1, Bs0_12, 2))));
                    MR_Word R_43;

                    succeeded = (UA_22 < LB_39);
                    if (succeeded)
                      R_43 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (UA_22 > LB_39);
                      if (succeeded)
                        R_43 = (MR_Integer) 2;
                      else
                        R_43 = (MR_Integer) 0;
                    }
                    switch (R_43) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        Var_29 = mercury__ranges__difference_2_f_0(Bs0_12, As0_23);
                        break;
                      case (MR_Integer) 0:
                        Var_29 = mercury__ranges__n_union_a_nb_4_f_0(UA_22, As0_23, UB_40, Bs0_41);
                        break;
                      case (MR_Integer) 2:
                        Var_29 = mercury__ranges__diff_na_nb_4_f_0(UA_22, As0_23, UB_40, Bs0_41);
                        break;
                    }
                  }
                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (UA_1));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (LA_21));
                    MR_hl_field(1, HeadVar__4_4, 2) = ((MR_Box) (Var_29));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word * AddrSCCcallarg_30_47;

                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (UA_1));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (UB_11));
                    MR_hl_field(1, HeadVar__4_4, 2) = NULL;
                  }
                  AddrSCCcallarg_30_47 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_4, 2)));
                  mercury__ranges__LCMC__func__difference__1_3_p_0(Bs0_12, As0_2, AddrSCCcallarg_30_47);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word R_45;

            succeeded = (UA_1 < UB_11);
            if (succeeded)
              R_45 = (MR_Integer) 1;
            else
            {
              succeeded = (UA_1 > UB_11);
              if (succeeded)
                R_45 = (MR_Integer) 2;
              else
                R_45 = (MR_Integer) 0;
            }
            switch (R_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                HeadVar__4_4 = mercury__ranges__n_union_a_nb_4_f_0(UA_1, As0_2, UB_11, Bs0_12);
                break;
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_12;
                  MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_2;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer next_value_of_tscc_proc_2_input_1_UA_1 = UA_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_As0_2 = As0_2;
                  MR_Word next_value_of_tscc_proc_2_input_3_HeadVar__3_3 = Bs0_12;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_UA_1 = next_value_of_tscc_proc_2_input_1_UA_1;
                  tscc_proc_2_input_2_As0_2 = next_value_of_tscc_proc_2_input_2_As0_2;
                  tscc_proc_2_input_3_HeadVar__3_3 = next_value_of_tscc_proc_2_input_3_HeadVar__3_3;
                  goto top_of_proc_2;
                }
                break;
            }
          }
          break;
      }
    }
    tscc_output_1_HeadVar__3_3 = HeadVar__4_4;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Integer UA_6 = tscc_proc_3_input_1_UA_6;
    MR_Word As0_7 = tscc_proc_3_input_2_As0_7;
    MR_Integer UB_8 = tscc_proc_3_input_3_UB_8;
    MR_Word Bs0_9 = tscc_proc_3_input_4_Bs0_9;
    MR_Word Result_10;
    MR_bool succeeded = (UA_6 < UB_8);
    MR_Word R_11;

    if (succeeded)
      R_11 = (MR_Integer) 1;
    else
    {
      succeeded = (UA_6 == UB_8);
      if (succeeded)
        R_11 = (MR_Integer) 0;
      else
        R_11 = (MR_Integer) 2;
    }
    switch (R_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((As0_7 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
            MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_8));
            MR_hl_field(1, Result_10, 2) = ((MR_Box) (Bs0_9));
          }
        else
        {
          MR_Integer LA_18 = ((MR_Integer) ((MR_hl_field(1, As0_7, 0))));
          MR_Integer UA_19 = ((MR_Integer) ((MR_hl_field(1, As0_7, 1))));
          MR_Word As0_20 = ((MR_Word) ((MR_hl_field(1, As0_7, 2))));
          MR_Word R_24;

          succeeded = (LA_18 < UB_8);
          if (succeeded)
            R_24 = (MR_Integer) 1;
          else
          {
            succeeded = (LA_18 == UB_8);
            if (succeeded)
              R_24 = (MR_Integer) 0;
            else
              R_24 = (MR_Integer) 2;
          }
          switch (R_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_25;
                MR_Word R_29;

                succeeded = (UA_19 < UB_8);
                if (succeeded)
                  R_29 = (MR_Integer) 1;
                else
                {
                  succeeded = (UA_19 > UB_8);
                  if (succeeded)
                    R_29 = (MR_Integer) 2;
                  else
                    R_29 = (MR_Integer) 0;
                }
                switch (R_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    Var_25 = mercury__ranges__n_union_a_nb_4_f_0(UA_19, As0_20, UB_8, Bs0_9);
                    break;
                  case (MR_Integer) 0:
                    Var_25 = mercury__ranges__difference_2_f_0(Bs0_9, As0_20);
                    break;
                  case (MR_Integer) 2:
                    Var_25 = mercury__ranges__int_na_b_3_f_0(UA_19, As0_20, Bs0_9);
                    break;
                }
                {
                  Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_10, 1) = ((MR_Box) (LA_18));
                  MR_hl_field(1, Result_10, 2) = ((MR_Box) (Var_25));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_26;

                if ((Bs0_9 == (MR_Word) ((MR_Unsigned) 0U)))
                  Var_26 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Integer LB_36 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 0))));
                  MR_Integer UB_37 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 1))));
                  MR_Word Bs0_38 = ((MR_Word) ((MR_hl_field(1, Bs0_9, 2))));
                  MR_Word R_40;

                  succeeded = (UA_19 < LB_36);
                  if (succeeded)
                    R_40 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (UA_19 > LB_36);
                    if (succeeded)
                      R_40 = (MR_Integer) 2;
                    else
                      R_40 = (MR_Integer) 0;
                  }
                  switch (R_40) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Var_26 = mercury__ranges__difference_2_f_0(Bs0_9, As0_20);
                      break;
                    case (MR_Integer) 0:
                      Var_26 = mercury__ranges__n_union_a_nb_4_f_0(UA_19, As0_20, UB_37, Bs0_38);
                      break;
                    case (MR_Integer) 2:
                      Var_26 = mercury__ranges__diff_na_nb_4_f_0(UA_19, As0_20, UB_37, Bs0_38);
                      break;
                  }
                }
                {
                  Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_10, 1) = ((MR_Box) (LA_18));
                  MR_hl_field(1, Result_10, 2) = ((MR_Box) (Var_26));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrSCCcallarg_27_84;

                {
                  Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_8));
                  MR_hl_field(1, Result_10, 2) = NULL;
                }
                AddrSCCcallarg_27_84 = (MR_Word *) (&(MR_hl_field(1, Result_10, 2)));
                mercury__ranges__LCMC__func__difference__1_3_p_0(Bs0_9, As0_7, AddrSCCcallarg_27_84);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
          MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
          tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        if ((Bs0_9 == (MR_Word) ((MR_Unsigned) 0U)))
          Result_10 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Integer LB_47 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 0))));
          MR_Integer UB_48 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 1))));
          MR_Word Bs0_49 = ((MR_Word) ((MR_hl_field(1, Bs0_9, 2))));
          MR_Word R_51;

          succeeded = (UA_6 < LB_47);
          if (succeeded)
            R_51 = (MR_Integer) 1;
          else
          {
            succeeded = (UA_6 == LB_47);
            if (succeeded)
              R_51 = (MR_Integer) 0;
            else
              R_51 = (MR_Integer) 2;
          }
          switch (R_51) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 0:
              if ((As0_7 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_48));
                  MR_hl_field(1, Result_10, 2) = ((MR_Box) (Bs0_49));
                }
              else
              {
                MR_Integer LA_58 = ((MR_Integer) ((MR_hl_field(1, As0_7, 0))));
                MR_Integer UA_59 = ((MR_Integer) ((MR_hl_field(1, As0_7, 1))));
                MR_Word As0_60 = ((MR_Word) ((MR_hl_field(1, As0_7, 2))));
                MR_Word R_64;

                succeeded = (LA_58 < UB_48);
                if (succeeded)
                  R_64 = (MR_Integer) 1;
                else
                {
                  succeeded = (LA_58 == UB_48);
                  if (succeeded)
                    R_64 = (MR_Integer) 0;
                  else
                    R_64 = (MR_Integer) 2;
                }
                switch (R_64) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_65;
                      MR_Word R_69;

                      succeeded = (UA_59 < UB_48);
                      if (succeeded)
                        R_69 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (UA_59 > UB_48);
                        if (succeeded)
                          R_69 = (MR_Integer) 2;
                        else
                          R_69 = (MR_Integer) 0;
                      }
                      switch (R_69) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          Var_65 = mercury__ranges__n_union_a_nb_4_f_0(UA_59, As0_60, UB_48, Bs0_49);
                          break;
                        case (MR_Integer) 0:
                          Var_65 = mercury__ranges__difference_2_f_0(Bs0_49, As0_60);
                          break;
                        case (MR_Integer) 2:
                          Var_65 = mercury__ranges__int_na_b_3_f_0(UA_59, As0_60, Bs0_49);
                          break;
                      }
                      {
                        Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_10, 1) = ((MR_Box) (LA_58));
                        MR_hl_field(1, Result_10, 2) = ((MR_Box) (Var_65));
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_66;

                      if ((Bs0_49 == (MR_Word) ((MR_Unsigned) 0U)))
                        Var_66 = (MR_Word) ((MR_Unsigned) 0U);
                      else
                      {
                        MR_Integer LB_76 = ((MR_Integer) ((MR_hl_field(1, Bs0_49, 0))));
                        MR_Integer UB_77 = ((MR_Integer) ((MR_hl_field(1, Bs0_49, 1))));
                        MR_Word Bs0_78 = ((MR_Word) ((MR_hl_field(1, Bs0_49, 2))));
                        MR_Word R_80;

                        succeeded = (UA_59 < LB_76);
                        if (succeeded)
                          R_80 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (UA_59 > LB_76);
                          if (succeeded)
                            R_80 = (MR_Integer) 2;
                          else
                            R_80 = (MR_Integer) 0;
                        }
                        switch (R_80) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            Var_66 = mercury__ranges__difference_2_f_0(Bs0_49, As0_60);
                            break;
                          case (MR_Integer) 0:
                            Var_66 = mercury__ranges__n_union_a_nb_4_f_0(UA_59, As0_60, UB_77, Bs0_78);
                            break;
                          case (MR_Integer) 2:
                            Var_66 = mercury__ranges__diff_na_nb_4_f_0(UA_59, As0_60, UB_77, Bs0_78);
                            break;
                        }
                      }
                      {
                        Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_10, 1) = ((MR_Box) (LA_58));
                        MR_hl_field(1, Result_10, 2) = ((MR_Box) (Var_66));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word * AddrSCCcallarg_67_85;

                      {
                        Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_48));
                        MR_hl_field(1, Result_10, 2) = NULL;
                      }
                      AddrSCCcallarg_67_85 = (MR_Word *) (&(MR_hl_field(1, Result_10, 2)));
                      mercury__ranges__LCMC__func__difference__1_3_p_0(Bs0_49, As0_7, AddrSCCcallarg_67_85);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word R_82;

                succeeded = (UA_6 < UB_48);
                if (succeeded)
                  R_82 = (MR_Integer) 1;
                else
                {
                  succeeded = (UA_6 > UB_48);
                  if (succeeded)
                    R_82 = (MR_Integer) 2;
                  else
                    R_82 = (MR_Integer) 0;
                }
                switch (R_82) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    Result_10 = mercury__ranges__n_union_a_nb_4_f_0(UA_6, As0_7, UB_48, Bs0_49);
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_49;
                      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                      tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer next_value_of_tscc_proc_2_input_1_UA_1 = UA_6;
                      MR_Word next_value_of_tscc_proc_2_input_2_As0_2 = As0_7;
                      MR_Word next_value_of_tscc_proc_2_input_3_HeadVar__3_3 = Bs0_49;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_UA_1 = next_value_of_tscc_proc_2_input_1_UA_1;
                      tscc_proc_2_input_2_As0_2 = next_value_of_tscc_proc_2_input_2_As0_2;
                      tscc_proc_2_input_3_HeadVar__3_3 = next_value_of_tscc_proc_2_input_3_HeadVar__3_3;
                      goto top_of_proc_2;
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
    }
    tscc_output_1_HeadVar__3_3 = Result_10;
    goto tscc_end;
  }
tscc_end:;
  return tscc_output_1_HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__ranges__int_na_b_3_f_0(
  MR_Integer tscc_proc_2_input_1_UA_1,
  MR_Word tscc_proc_2_input_2_As0_2,
  MR_Word tscc_proc_2_input_3_HeadVar__3_3)
{
  MR_Word tscc_proc_1_input_1_HeadVar__1_1;
  MR_Word tscc_proc_1_input_2_HeadVar__2_2;
  MR_Integer tscc_proc_3_input_1_UA_6;
  MR_Word tscc_proc_3_input_2_As0_7;
  MR_Integer tscc_proc_3_input_3_UB_8;
  MR_Word tscc_proc_3_input_4_Bs0_9;
  MR_Word tscc_output_1_HeadVar__3_3;

  // The code for TSCC PROC 2: func ranges.int_na_b/3-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: func ranges.difference/2-0
  ;
  // proc 2 in TSCC: func ranges.int_na_b/3-0
  ;
  // proc 3 in TSCC: func ranges.diff_na_nb/4-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_2_HeadVar__2_2;
    MR_Word HeadVar__3_3;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__3_3 = HeadVar__1_1;
      else
      {
        MR_Integer LB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Integer UB_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Bs0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Word R_18;

        succeeded = (Var_22 < LB_14);
        if (succeeded)
          R_18 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_22 == LB_14);
          if (succeeded)
            R_18 = (MR_Integer) 0;
          else
            R_18 = (MR_Integer) 2;
        }
        switch (R_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer LB_30 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer UB_31 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word Bs0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word R_34;

              succeeded = (Var_21 < LB_30);
              if (succeeded)
                R_34 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_21 > LB_30);
                if (succeeded)
                  R_34 = (MR_Integer) 2;
                else
                  R_34 = (MR_Integer) 0;
              }
              switch (R_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word * AddrSCCcallarg_35_52;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_35_52 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__difference__1_3_p_0(Var_20, HeadVar__2_2, AddrSCCcallarg_35_52);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word * AddrSCCcallarg_36_53;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_36_53 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__int_a_nb__1_4_p_0(Var_20, UB_31, Bs0_32, AddrSCCcallarg_36_53);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word * AddrSCCcallarg_37_54;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (LB_30));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_37_54 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__diff_na_nb__1_5_p_0(UB_31, Bs0_32, Var_21, Var_20, AddrSCCcallarg_37_54);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word R_39;

              succeeded = (UB_15 < Var_21);
              if (succeeded)
                R_39 = (MR_Integer) 1;
              else
              {
                succeeded = (UB_15 > Var_21);
                if (succeeded)
                  R_39 = (MR_Integer) 2;
                else
                  R_39 = (MR_Integer) 0;
              }
              switch (R_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  HeadVar__3_3 = mercury__ranges__n_union_a_nb_4_f_0(UB_15, Bs0_16, Var_21, Var_20);
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Var_20;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_16;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer next_value_of_tscc_proc_2_input_1_UA_1 = UB_15;
                    MR_Word next_value_of_tscc_proc_2_input_2_As0_2 = Bs0_16;
                    MR_Word next_value_of_tscc_proc_2_input_3_HeadVar__3_3 = Var_20;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_2_input_1_UA_1 = next_value_of_tscc_proc_2_input_1_UA_1;
                    tscc_proc_2_input_2_As0_2 = next_value_of_tscc_proc_2_input_2_As0_2;
                    tscc_proc_2_input_3_HeadVar__3_3 = next_value_of_tscc_proc_2_input_3_HeadVar__3_3;
                    goto top_of_proc_2;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer LA_44 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
              MR_Integer UA_45 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
              MR_Word As0_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
              MR_Word R_50;

              succeeded = (LA_44 < UB_15);
              if (succeeded)
                R_50 = (MR_Integer) 1;
              else
              {
                succeeded = (LA_44 > UB_15);
                if (succeeded)
                  R_50 = (MR_Integer) 2;
                else
                  R_50 = (MR_Integer) 0;
              }
              switch (R_50) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Integer next_value_of_tscc_proc_3_input_1_UA_6 = UB_15;
                    MR_Word next_value_of_tscc_proc_3_input_2_As0_7 = Bs0_16;
                    MR_Integer next_value_of_tscc_proc_3_input_3_UB_8 = UA_45;
                    MR_Word next_value_of_tscc_proc_3_input_4_Bs0_9 = As0_46;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_3_input_1_UA_6 = next_value_of_tscc_proc_3_input_1_UA_6;
                    tscc_proc_3_input_2_As0_7 = next_value_of_tscc_proc_3_input_2_As0_7;
                    tscc_proc_3_input_3_UB_8 = next_value_of_tscc_proc_3_input_3_UB_8;
                    tscc_proc_3_input_4_Bs0_9 = next_value_of_tscc_proc_3_input_4_Bs0_9;
                    goto top_of_proc_3;
                  }
                  break;
                case (MR_Integer) 0:
                  HeadVar__3_3 = mercury__ranges__n_union_na_b_4_f_0(LA_44, UA_45, As0_46, Bs0_16);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__1_1;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_16;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
      }
    }
    tscc_output_1_HeadVar__3_3 = HeadVar__3_3;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Integer UA_1 = tscc_proc_2_input_1_UA_1;
    MR_Word As0_2 = tscc_proc_2_input_2_As0_2;
    MR_Word HeadVar__3_3 = tscc_proc_2_input_3_HeadVar__3_3;
    MR_Word HeadVar__4_4;
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer LB_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Integer UB_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Bs0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Word R_14;

      succeeded = (UA_1 < LB_10);
      if (succeeded)
        R_14 = (MR_Integer) 1;
      else
      {
        succeeded = (UA_1 == LB_10);
        if (succeeded)
          R_14 = (MR_Integer) 0;
        else
          R_14 = (MR_Integer) 2;
      }
      switch (R_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__3_3;
            MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_2;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 0:
          if ((As0_2 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (UA_1));
              MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (UB_11));
              MR_hl_field(1, HeadVar__4_4, 2) = ((MR_Box) (Bs0_12));
            }
          else
          {
            MR_Integer LA_21 = ((MR_Integer) ((MR_hl_field(1, As0_2, 0))));
            MR_Integer UA_22 = ((MR_Integer) ((MR_hl_field(1, As0_2, 1))));
            MR_Word As0_23 = ((MR_Word) ((MR_hl_field(1, As0_2, 2))));
            MR_Word R_27;

            succeeded = (LA_21 < UB_11);
            if (succeeded)
              R_27 = (MR_Integer) 1;
            else
            {
              succeeded = (LA_21 == UB_11);
              if (succeeded)
                R_27 = (MR_Integer) 0;
              else
                R_27 = (MR_Integer) 2;
            }
            switch (R_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_28;
                  MR_Word R_32;

                  succeeded = (UA_22 < UB_11);
                  if (succeeded)
                    R_32 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (UA_22 > UB_11);
                    if (succeeded)
                      R_32 = (MR_Integer) 2;
                    else
                      R_32 = (MR_Integer) 0;
                  }
                  switch (R_32) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Var_28 = mercury__ranges__n_union_a_nb_4_f_0(UA_22, As0_23, UB_11, Bs0_12);
                      break;
                    case (MR_Integer) 0:
                      Var_28 = mercury__ranges__difference_2_f_0(Bs0_12, As0_23);
                      break;
                    case (MR_Integer) 2:
                      Var_28 = mercury__ranges__int_na_b_3_f_0(UA_22, As0_23, Bs0_12);
                      break;
                  }
                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (UA_1));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (LA_21));
                    MR_hl_field(1, HeadVar__4_4, 2) = ((MR_Box) (Var_28));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_29;

                  if ((Bs0_12 == (MR_Word) ((MR_Unsigned) 0U)))
                    Var_29 = (MR_Word) ((MR_Unsigned) 0U);
                  else
                  {
                    MR_Integer LB_39 = ((MR_Integer) ((MR_hl_field(1, Bs0_12, 0))));
                    MR_Integer UB_40 = ((MR_Integer) ((MR_hl_field(1, Bs0_12, 1))));
                    MR_Word Bs0_41 = ((MR_Word) ((MR_hl_field(1, Bs0_12, 2))));
                    MR_Word R_43;

                    succeeded = (UA_22 < LB_39);
                    if (succeeded)
                      R_43 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (UA_22 > LB_39);
                      if (succeeded)
                        R_43 = (MR_Integer) 2;
                      else
                        R_43 = (MR_Integer) 0;
                    }
                    switch (R_43) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        Var_29 = mercury__ranges__difference_2_f_0(Bs0_12, As0_23);
                        break;
                      case (MR_Integer) 0:
                        Var_29 = mercury__ranges__n_union_a_nb_4_f_0(UA_22, As0_23, UB_40, Bs0_41);
                        break;
                      case (MR_Integer) 2:
                        Var_29 = mercury__ranges__diff_na_nb_4_f_0(UA_22, As0_23, UB_40, Bs0_41);
                        break;
                    }
                  }
                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (UA_1));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (LA_21));
                    MR_hl_field(1, HeadVar__4_4, 2) = ((MR_Box) (Var_29));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word * AddrSCCcallarg_30_47;

                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (UA_1));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (UB_11));
                    MR_hl_field(1, HeadVar__4_4, 2) = NULL;
                  }
                  AddrSCCcallarg_30_47 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_4, 2)));
                  mercury__ranges__LCMC__func__difference__1_3_p_0(Bs0_12, As0_2, AddrSCCcallarg_30_47);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word R_45;

            succeeded = (UA_1 < UB_11);
            if (succeeded)
              R_45 = (MR_Integer) 1;
            else
            {
              succeeded = (UA_1 > UB_11);
              if (succeeded)
                R_45 = (MR_Integer) 2;
              else
                R_45 = (MR_Integer) 0;
            }
            switch (R_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                HeadVar__4_4 = mercury__ranges__n_union_a_nb_4_f_0(UA_1, As0_2, UB_11, Bs0_12);
                break;
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_12;
                  MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_2;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer next_value_of_tscc_proc_2_input_1_UA_1 = UA_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_As0_2 = As0_2;
                  MR_Word next_value_of_tscc_proc_2_input_3_HeadVar__3_3 = Bs0_12;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_UA_1 = next_value_of_tscc_proc_2_input_1_UA_1;
                  tscc_proc_2_input_2_As0_2 = next_value_of_tscc_proc_2_input_2_As0_2;
                  tscc_proc_2_input_3_HeadVar__3_3 = next_value_of_tscc_proc_2_input_3_HeadVar__3_3;
                  goto top_of_proc_2;
                }
                break;
            }
          }
          break;
      }
    }
    tscc_output_1_HeadVar__3_3 = HeadVar__4_4;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Integer UA_6 = tscc_proc_3_input_1_UA_6;
    MR_Word As0_7 = tscc_proc_3_input_2_As0_7;
    MR_Integer UB_8 = tscc_proc_3_input_3_UB_8;
    MR_Word Bs0_9 = tscc_proc_3_input_4_Bs0_9;
    MR_Word Result_10;
    MR_bool succeeded = (UA_6 < UB_8);
    MR_Word R_11;

    if (succeeded)
      R_11 = (MR_Integer) 1;
    else
    {
      succeeded = (UA_6 == UB_8);
      if (succeeded)
        R_11 = (MR_Integer) 0;
      else
        R_11 = (MR_Integer) 2;
    }
    switch (R_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((As0_7 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
            MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_8));
            MR_hl_field(1, Result_10, 2) = ((MR_Box) (Bs0_9));
          }
        else
        {
          MR_Integer LA_18 = ((MR_Integer) ((MR_hl_field(1, As0_7, 0))));
          MR_Integer UA_19 = ((MR_Integer) ((MR_hl_field(1, As0_7, 1))));
          MR_Word As0_20 = ((MR_Word) ((MR_hl_field(1, As0_7, 2))));
          MR_Word R_24;

          succeeded = (LA_18 < UB_8);
          if (succeeded)
            R_24 = (MR_Integer) 1;
          else
          {
            succeeded = (LA_18 == UB_8);
            if (succeeded)
              R_24 = (MR_Integer) 0;
            else
              R_24 = (MR_Integer) 2;
          }
          switch (R_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_25;
                MR_Word R_29;

                succeeded = (UA_19 < UB_8);
                if (succeeded)
                  R_29 = (MR_Integer) 1;
                else
                {
                  succeeded = (UA_19 > UB_8);
                  if (succeeded)
                    R_29 = (MR_Integer) 2;
                  else
                    R_29 = (MR_Integer) 0;
                }
                switch (R_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    Var_25 = mercury__ranges__n_union_a_nb_4_f_0(UA_19, As0_20, UB_8, Bs0_9);
                    break;
                  case (MR_Integer) 0:
                    Var_25 = mercury__ranges__difference_2_f_0(Bs0_9, As0_20);
                    break;
                  case (MR_Integer) 2:
                    Var_25 = mercury__ranges__int_na_b_3_f_0(UA_19, As0_20, Bs0_9);
                    break;
                }
                {
                  Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_10, 1) = ((MR_Box) (LA_18));
                  MR_hl_field(1, Result_10, 2) = ((MR_Box) (Var_25));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_26;

                if ((Bs0_9 == (MR_Word) ((MR_Unsigned) 0U)))
                  Var_26 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Integer LB_36 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 0))));
                  MR_Integer UB_37 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 1))));
                  MR_Word Bs0_38 = ((MR_Word) ((MR_hl_field(1, Bs0_9, 2))));
                  MR_Word R_40;

                  succeeded = (UA_19 < LB_36);
                  if (succeeded)
                    R_40 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (UA_19 > LB_36);
                    if (succeeded)
                      R_40 = (MR_Integer) 2;
                    else
                      R_40 = (MR_Integer) 0;
                  }
                  switch (R_40) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Var_26 = mercury__ranges__difference_2_f_0(Bs0_9, As0_20);
                      break;
                    case (MR_Integer) 0:
                      Var_26 = mercury__ranges__n_union_a_nb_4_f_0(UA_19, As0_20, UB_37, Bs0_38);
                      break;
                    case (MR_Integer) 2:
                      Var_26 = mercury__ranges__diff_na_nb_4_f_0(UA_19, As0_20, UB_37, Bs0_38);
                      break;
                  }
                }
                {
                  Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_10, 1) = ((MR_Box) (LA_18));
                  MR_hl_field(1, Result_10, 2) = ((MR_Box) (Var_26));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrSCCcallarg_27_84;

                {
                  Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_8));
                  MR_hl_field(1, Result_10, 2) = NULL;
                }
                AddrSCCcallarg_27_84 = (MR_Word *) (&(MR_hl_field(1, Result_10, 2)));
                mercury__ranges__LCMC__func__difference__1_3_p_0(Bs0_9, As0_7, AddrSCCcallarg_27_84);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
          MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
          tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        if ((Bs0_9 == (MR_Word) ((MR_Unsigned) 0U)))
          Result_10 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Integer LB_47 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 0))));
          MR_Integer UB_48 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 1))));
          MR_Word Bs0_49 = ((MR_Word) ((MR_hl_field(1, Bs0_9, 2))));
          MR_Word R_51;

          succeeded = (UA_6 < LB_47);
          if (succeeded)
            R_51 = (MR_Integer) 1;
          else
          {
            succeeded = (UA_6 == LB_47);
            if (succeeded)
              R_51 = (MR_Integer) 0;
            else
              R_51 = (MR_Integer) 2;
          }
          switch (R_51) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 0:
              if ((As0_7 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_48));
                  MR_hl_field(1, Result_10, 2) = ((MR_Box) (Bs0_49));
                }
              else
              {
                MR_Integer LA_58 = ((MR_Integer) ((MR_hl_field(1, As0_7, 0))));
                MR_Integer UA_59 = ((MR_Integer) ((MR_hl_field(1, As0_7, 1))));
                MR_Word As0_60 = ((MR_Word) ((MR_hl_field(1, As0_7, 2))));
                MR_Word R_64;

                succeeded = (LA_58 < UB_48);
                if (succeeded)
                  R_64 = (MR_Integer) 1;
                else
                {
                  succeeded = (LA_58 == UB_48);
                  if (succeeded)
                    R_64 = (MR_Integer) 0;
                  else
                    R_64 = (MR_Integer) 2;
                }
                switch (R_64) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_65;
                      MR_Word R_69;

                      succeeded = (UA_59 < UB_48);
                      if (succeeded)
                        R_69 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (UA_59 > UB_48);
                        if (succeeded)
                          R_69 = (MR_Integer) 2;
                        else
                          R_69 = (MR_Integer) 0;
                      }
                      switch (R_69) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          Var_65 = mercury__ranges__n_union_a_nb_4_f_0(UA_59, As0_60, UB_48, Bs0_49);
                          break;
                        case (MR_Integer) 0:
                          Var_65 = mercury__ranges__difference_2_f_0(Bs0_49, As0_60);
                          break;
                        case (MR_Integer) 2:
                          Var_65 = mercury__ranges__int_na_b_3_f_0(UA_59, As0_60, Bs0_49);
                          break;
                      }
                      {
                        Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_10, 1) = ((MR_Box) (LA_58));
                        MR_hl_field(1, Result_10, 2) = ((MR_Box) (Var_65));
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_66;

                      if ((Bs0_49 == (MR_Word) ((MR_Unsigned) 0U)))
                        Var_66 = (MR_Word) ((MR_Unsigned) 0U);
                      else
                      {
                        MR_Integer LB_76 = ((MR_Integer) ((MR_hl_field(1, Bs0_49, 0))));
                        MR_Integer UB_77 = ((MR_Integer) ((MR_hl_field(1, Bs0_49, 1))));
                        MR_Word Bs0_78 = ((MR_Word) ((MR_hl_field(1, Bs0_49, 2))));
                        MR_Word R_80;

                        succeeded = (UA_59 < LB_76);
                        if (succeeded)
                          R_80 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (UA_59 > LB_76);
                          if (succeeded)
                            R_80 = (MR_Integer) 2;
                          else
                            R_80 = (MR_Integer) 0;
                        }
                        switch (R_80) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            Var_66 = mercury__ranges__difference_2_f_0(Bs0_49, As0_60);
                            break;
                          case (MR_Integer) 0:
                            Var_66 = mercury__ranges__n_union_a_nb_4_f_0(UA_59, As0_60, UB_77, Bs0_78);
                            break;
                          case (MR_Integer) 2:
                            Var_66 = mercury__ranges__diff_na_nb_4_f_0(UA_59, As0_60, UB_77, Bs0_78);
                            break;
                        }
                      }
                      {
                        Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_10, 1) = ((MR_Box) (LA_58));
                        MR_hl_field(1, Result_10, 2) = ((MR_Box) (Var_66));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word * AddrSCCcallarg_67_85;

                      {
                        Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_48));
                        MR_hl_field(1, Result_10, 2) = NULL;
                      }
                      AddrSCCcallarg_67_85 = (MR_Word *) (&(MR_hl_field(1, Result_10, 2)));
                      mercury__ranges__LCMC__func__difference__1_3_p_0(Bs0_49, As0_7, AddrSCCcallarg_67_85);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word R_82;

                succeeded = (UA_6 < UB_48);
                if (succeeded)
                  R_82 = (MR_Integer) 1;
                else
                {
                  succeeded = (UA_6 > UB_48);
                  if (succeeded)
                    R_82 = (MR_Integer) 2;
                  else
                    R_82 = (MR_Integer) 0;
                }
                switch (R_82) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    Result_10 = mercury__ranges__n_union_a_nb_4_f_0(UA_6, As0_7, UB_48, Bs0_49);
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_49;
                      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                      tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer next_value_of_tscc_proc_2_input_1_UA_1 = UA_6;
                      MR_Word next_value_of_tscc_proc_2_input_2_As0_2 = As0_7;
                      MR_Word next_value_of_tscc_proc_2_input_3_HeadVar__3_3 = Bs0_49;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_UA_1 = next_value_of_tscc_proc_2_input_1_UA_1;
                      tscc_proc_2_input_2_As0_2 = next_value_of_tscc_proc_2_input_2_As0_2;
                      tscc_proc_2_input_3_HeadVar__3_3 = next_value_of_tscc_proc_2_input_3_HeadVar__3_3;
                      goto top_of_proc_2;
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
    }
    tscc_output_1_HeadVar__3_3 = Result_10;
    goto tscc_end;
  }
tscc_end:;
  return tscc_output_1_HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__ranges__diff_na_nb_4_f_0(
  MR_Integer tscc_proc_3_input_1_UA_6,
  MR_Word tscc_proc_3_input_2_As0_7,
  MR_Integer tscc_proc_3_input_3_UB_8,
  MR_Word tscc_proc_3_input_4_Bs0_9)
{
  MR_Word tscc_proc_1_input_1_HeadVar__1_1;
  MR_Word tscc_proc_1_input_2_HeadVar__2_2;
  MR_Integer tscc_proc_2_input_1_UA_1;
  MR_Word tscc_proc_2_input_2_As0_2;
  MR_Word tscc_proc_2_input_3_HeadVar__3_3;
  MR_Word tscc_output_1_HeadVar__3_3;

  // The code for TSCC PROC 3: func ranges.diff_na_nb/4-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: func ranges.difference/2-0
  ;
  // proc 2 in TSCC: func ranges.int_na_b/3-0
  ;
  // proc 3 in TSCC: func ranges.diff_na_nb/4-0
  ;
  ;
  goto top_of_proc_3;
top_of_proc_1:;
  {
    MR_Word HeadVar__1_1 = tscc_proc_1_input_1_HeadVar__1_1;
    MR_Word HeadVar__2_2 = tscc_proc_1_input_2_HeadVar__2_2;
    MR_Word HeadVar__3_3;
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__3_3 = HeadVar__1_1;
      else
      {
        MR_Integer LB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Integer UB_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Bs0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Word R_18;

        succeeded = (Var_22 < LB_14);
        if (succeeded)
          R_18 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_22 == LB_14);
          if (succeeded)
            R_18 = (MR_Integer) 0;
          else
            R_18 = (MR_Integer) 2;
        }
        switch (R_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Integer LB_30 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Integer UB_31 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Word Bs0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Word R_34;

              succeeded = (Var_21 < LB_30);
              if (succeeded)
                R_34 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_21 > LB_30);
                if (succeeded)
                  R_34 = (MR_Integer) 2;
                else
                  R_34 = (MR_Integer) 0;
              }
              switch (R_34) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word * AddrSCCcallarg_35_52;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_35_52 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__difference__1_3_p_0(Var_20, HeadVar__2_2, AddrSCCcallarg_35_52);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word * AddrSCCcallarg_36_53;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_36_53 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__int_a_nb__1_4_p_0(Var_20, UB_31, Bs0_32, AddrSCCcallarg_36_53);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word * AddrSCCcallarg_37_54;

                    {
                      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (LB_30));
                      MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                    }
                    AddrSCCcallarg_37_54 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                    mercury__ranges__LCMC__func__diff_na_nb__1_5_p_0(UB_31, Bs0_32, Var_21, Var_20, AddrSCCcallarg_37_54);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word R_39;

              succeeded = (UB_15 < Var_21);
              if (succeeded)
                R_39 = (MR_Integer) 1;
              else
              {
                succeeded = (UB_15 > Var_21);
                if (succeeded)
                  R_39 = (MR_Integer) 2;
                else
                  R_39 = (MR_Integer) 0;
              }
              switch (R_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  HeadVar__3_3 = mercury__ranges__n_union_a_nb_4_f_0(UB_15, Bs0_16, Var_21, Var_20);
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Var_20;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_16;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer next_value_of_tscc_proc_2_input_1_UA_1 = UB_15;
                    MR_Word next_value_of_tscc_proc_2_input_2_As0_2 = Bs0_16;
                    MR_Word next_value_of_tscc_proc_2_input_3_HeadVar__3_3 = Var_20;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_2_input_1_UA_1 = next_value_of_tscc_proc_2_input_1_UA_1;
                    tscc_proc_2_input_2_As0_2 = next_value_of_tscc_proc_2_input_2_As0_2;
                    tscc_proc_2_input_3_HeadVar__3_3 = next_value_of_tscc_proc_2_input_3_HeadVar__3_3;
                    goto top_of_proc_2;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer LA_44 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
              MR_Integer UA_45 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
              MR_Word As0_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
              MR_Word R_50;

              succeeded = (LA_44 < UB_15);
              if (succeeded)
                R_50 = (MR_Integer) 1;
              else
              {
                succeeded = (LA_44 > UB_15);
                if (succeeded)
                  R_50 = (MR_Integer) 2;
                else
                  R_50 = (MR_Integer) 0;
              }
              switch (R_50) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Integer next_value_of_tscc_proc_3_input_1_UA_6 = UB_15;
                    MR_Word next_value_of_tscc_proc_3_input_2_As0_7 = Bs0_16;
                    MR_Integer next_value_of_tscc_proc_3_input_3_UB_8 = UA_45;
                    MR_Word next_value_of_tscc_proc_3_input_4_Bs0_9 = As0_46;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_3_input_1_UA_6 = next_value_of_tscc_proc_3_input_1_UA_6;
                    tscc_proc_3_input_2_As0_7 = next_value_of_tscc_proc_3_input_2_As0_7;
                    tscc_proc_3_input_3_UB_8 = next_value_of_tscc_proc_3_input_3_UB_8;
                    tscc_proc_3_input_4_Bs0_9 = next_value_of_tscc_proc_3_input_4_Bs0_9;
                    goto top_of_proc_3;
                  }
                  break;
                case (MR_Integer) 0:
                  HeadVar__3_3 = mercury__ranges__n_union_na_b_4_f_0(LA_44, UA_45, As0_46, Bs0_16);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__1_1;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = Bs0_16;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                    tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
      }
    }
    tscc_output_1_HeadVar__3_3 = HeadVar__3_3;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Integer UA_1 = tscc_proc_2_input_1_UA_1;
    MR_Word As0_2 = tscc_proc_2_input_2_As0_2;
    MR_Word HeadVar__3_3 = tscc_proc_2_input_3_HeadVar__3_3;
    MR_Word HeadVar__4_4;
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer LB_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Integer UB_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word Bs0_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
      MR_Word R_14;

      succeeded = (UA_1 < LB_10);
      if (succeeded)
        R_14 = (MR_Integer) 1;
      else
      {
        succeeded = (UA_1 == LB_10);
        if (succeeded)
          R_14 = (MR_Integer) 0;
        else
          R_14 = (MR_Integer) 2;
      }
      switch (R_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = HeadVar__3_3;
            MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_2;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
            tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 0:
          if ((As0_2 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (UA_1));
              MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (UB_11));
              MR_hl_field(1, HeadVar__4_4, 2) = ((MR_Box) (Bs0_12));
            }
          else
          {
            MR_Integer LA_21 = ((MR_Integer) ((MR_hl_field(1, As0_2, 0))));
            MR_Integer UA_22 = ((MR_Integer) ((MR_hl_field(1, As0_2, 1))));
            MR_Word As0_23 = ((MR_Word) ((MR_hl_field(1, As0_2, 2))));
            MR_Word R_27;

            succeeded = (LA_21 < UB_11);
            if (succeeded)
              R_27 = (MR_Integer) 1;
            else
            {
              succeeded = (LA_21 == UB_11);
              if (succeeded)
                R_27 = (MR_Integer) 0;
              else
                R_27 = (MR_Integer) 2;
            }
            switch (R_27) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Var_28;
                  MR_Word R_32;

                  succeeded = (UA_22 < UB_11);
                  if (succeeded)
                    R_32 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (UA_22 > UB_11);
                    if (succeeded)
                      R_32 = (MR_Integer) 2;
                    else
                      R_32 = (MR_Integer) 0;
                  }
                  switch (R_32) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Var_28 = mercury__ranges__n_union_a_nb_4_f_0(UA_22, As0_23, UB_11, Bs0_12);
                      break;
                    case (MR_Integer) 0:
                      Var_28 = mercury__ranges__difference_2_f_0(Bs0_12, As0_23);
                      break;
                    case (MR_Integer) 2:
                      Var_28 = mercury__ranges__int_na_b_3_f_0(UA_22, As0_23, Bs0_12);
                      break;
                  }
                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (UA_1));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (LA_21));
                    MR_hl_field(1, HeadVar__4_4, 2) = ((MR_Box) (Var_28));
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Var_29;

                  if ((Bs0_12 == (MR_Word) ((MR_Unsigned) 0U)))
                    Var_29 = (MR_Word) ((MR_Unsigned) 0U);
                  else
                  {
                    MR_Integer LB_39 = ((MR_Integer) ((MR_hl_field(1, Bs0_12, 0))));
                    MR_Integer UB_40 = ((MR_Integer) ((MR_hl_field(1, Bs0_12, 1))));
                    MR_Word Bs0_41 = ((MR_Word) ((MR_hl_field(1, Bs0_12, 2))));
                    MR_Word R_43;

                    succeeded = (UA_22 < LB_39);
                    if (succeeded)
                      R_43 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (UA_22 > LB_39);
                      if (succeeded)
                        R_43 = (MR_Integer) 2;
                      else
                        R_43 = (MR_Integer) 0;
                    }
                    switch (R_43) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        Var_29 = mercury__ranges__difference_2_f_0(Bs0_12, As0_23);
                        break;
                      case (MR_Integer) 0:
                        Var_29 = mercury__ranges__n_union_a_nb_4_f_0(UA_22, As0_23, UB_40, Bs0_41);
                        break;
                      case (MR_Integer) 2:
                        Var_29 = mercury__ranges__diff_na_nb_4_f_0(UA_22, As0_23, UB_40, Bs0_41);
                        break;
                    }
                  }
                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (UA_1));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (LA_21));
                    MR_hl_field(1, HeadVar__4_4, 2) = ((MR_Box) (Var_29));
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word * AddrSCCcallarg_30_47;

                  {
                    HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (UA_1));
                    MR_hl_field(1, HeadVar__4_4, 1) = ((MR_Box) (UB_11));
                    MR_hl_field(1, HeadVar__4_4, 2) = NULL;
                  }
                  AddrSCCcallarg_30_47 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_4, 2)));
                  mercury__ranges__LCMC__func__difference__1_3_p_0(Bs0_12, As0_2, AddrSCCcallarg_30_47);
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word R_45;

            succeeded = (UA_1 < UB_11);
            if (succeeded)
              R_45 = (MR_Integer) 1;
            else
            {
              succeeded = (UA_1 > UB_11);
              if (succeeded)
                R_45 = (MR_Integer) 2;
              else
                R_45 = (MR_Integer) 0;
            }
            switch (R_45) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                HeadVar__4_4 = mercury__ranges__n_union_a_nb_4_f_0(UA_1, As0_2, UB_11, Bs0_12);
                break;
              case (MR_Integer) 0:
                {
                  MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_12;
                  MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_2;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                  tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                  goto top_of_proc_1;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer next_value_of_tscc_proc_2_input_1_UA_1 = UA_1;
                  MR_Word next_value_of_tscc_proc_2_input_2_As0_2 = As0_2;
                  MR_Word next_value_of_tscc_proc_2_input_3_HeadVar__3_3 = Bs0_12;

                  // direct tailcall eliminated
                  ;
                  tscc_proc_2_input_1_UA_1 = next_value_of_tscc_proc_2_input_1_UA_1;
                  tscc_proc_2_input_2_As0_2 = next_value_of_tscc_proc_2_input_2_As0_2;
                  tscc_proc_2_input_3_HeadVar__3_3 = next_value_of_tscc_proc_2_input_3_HeadVar__3_3;
                  goto top_of_proc_2;
                }
                break;
            }
          }
          break;
      }
    }
    tscc_output_1_HeadVar__3_3 = HeadVar__4_4;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Integer UA_6 = tscc_proc_3_input_1_UA_6;
    MR_Word As0_7 = tscc_proc_3_input_2_As0_7;
    MR_Integer UB_8 = tscc_proc_3_input_3_UB_8;
    MR_Word Bs0_9 = tscc_proc_3_input_4_Bs0_9;
    MR_Word Result_10;
    MR_bool succeeded = (UA_6 < UB_8);
    MR_Word R_11;

    if (succeeded)
      R_11 = (MR_Integer) 1;
    else
    {
      succeeded = (UA_6 == UB_8);
      if (succeeded)
        R_11 = (MR_Integer) 0;
      else
        R_11 = (MR_Integer) 2;
    }
    switch (R_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((As0_7 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
            MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_8));
            MR_hl_field(1, Result_10, 2) = ((MR_Box) (Bs0_9));
          }
        else
        {
          MR_Integer LA_18 = ((MR_Integer) ((MR_hl_field(1, As0_7, 0))));
          MR_Integer UA_19 = ((MR_Integer) ((MR_hl_field(1, As0_7, 1))));
          MR_Word As0_20 = ((MR_Word) ((MR_hl_field(1, As0_7, 2))));
          MR_Word R_24;

          succeeded = (LA_18 < UB_8);
          if (succeeded)
            R_24 = (MR_Integer) 1;
          else
          {
            succeeded = (LA_18 == UB_8);
            if (succeeded)
              R_24 = (MR_Integer) 0;
            else
              R_24 = (MR_Integer) 2;
          }
          switch (R_24) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Var_25;
                MR_Word R_29;

                succeeded = (UA_19 < UB_8);
                if (succeeded)
                  R_29 = (MR_Integer) 1;
                else
                {
                  succeeded = (UA_19 > UB_8);
                  if (succeeded)
                    R_29 = (MR_Integer) 2;
                  else
                    R_29 = (MR_Integer) 0;
                }
                switch (R_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    Var_25 = mercury__ranges__n_union_a_nb_4_f_0(UA_19, As0_20, UB_8, Bs0_9);
                    break;
                  case (MR_Integer) 0:
                    Var_25 = mercury__ranges__difference_2_f_0(Bs0_9, As0_20);
                    break;
                  case (MR_Integer) 2:
                    Var_25 = mercury__ranges__int_na_b_3_f_0(UA_19, As0_20, Bs0_9);
                    break;
                }
                {
                  Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_10, 1) = ((MR_Box) (LA_18));
                  MR_hl_field(1, Result_10, 2) = ((MR_Box) (Var_25));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Var_26;

                if ((Bs0_9 == (MR_Word) ((MR_Unsigned) 0U)))
                  Var_26 = (MR_Word) ((MR_Unsigned) 0U);
                else
                {
                  MR_Integer LB_36 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 0))));
                  MR_Integer UB_37 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 1))));
                  MR_Word Bs0_38 = ((MR_Word) ((MR_hl_field(1, Bs0_9, 2))));
                  MR_Word R_40;

                  succeeded = (UA_19 < LB_36);
                  if (succeeded)
                    R_40 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (UA_19 > LB_36);
                    if (succeeded)
                      R_40 = (MR_Integer) 2;
                    else
                      R_40 = (MR_Integer) 0;
                  }
                  switch (R_40) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      Var_26 = mercury__ranges__difference_2_f_0(Bs0_9, As0_20);
                      break;
                    case (MR_Integer) 0:
                      Var_26 = mercury__ranges__n_union_a_nb_4_f_0(UA_19, As0_20, UB_37, Bs0_38);
                      break;
                    case (MR_Integer) 2:
                      Var_26 = mercury__ranges__diff_na_nb_4_f_0(UA_19, As0_20, UB_37, Bs0_38);
                      break;
                  }
                }
                {
                  Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_10, 1) = ((MR_Box) (LA_18));
                  MR_hl_field(1, Result_10, 2) = ((MR_Box) (Var_26));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrSCCcallarg_27_84;

                {
                  Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_8));
                  MR_hl_field(1, Result_10, 2) = NULL;
                }
                AddrSCCcallarg_27_84 = (MR_Word *) (&(MR_hl_field(1, Result_10, 2)));
                mercury__ranges__LCMC__func__difference__1_3_p_0(Bs0_9, As0_7, AddrSCCcallarg_27_84);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
          MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
          tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        if ((Bs0_9 == (MR_Word) ((MR_Unsigned) 0U)))
          Result_10 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Integer LB_47 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 0))));
          MR_Integer UB_48 = ((MR_Integer) ((MR_hl_field(1, Bs0_9, 1))));
          MR_Word Bs0_49 = ((MR_Word) ((MR_hl_field(1, Bs0_9, 2))));
          MR_Word R_51;

          succeeded = (UA_6 < LB_47);
          if (succeeded)
            R_51 = (MR_Integer) 1;
          else
          {
            succeeded = (UA_6 == LB_47);
            if (succeeded)
              R_51 = (MR_Integer) 0;
            else
              R_51 = (MR_Integer) 2;
          }
          switch (R_51) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_9;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 0:
              if ((As0_7 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                  MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_48));
                  MR_hl_field(1, Result_10, 2) = ((MR_Box) (Bs0_49));
                }
              else
              {
                MR_Integer LA_58 = ((MR_Integer) ((MR_hl_field(1, As0_7, 0))));
                MR_Integer UA_59 = ((MR_Integer) ((MR_hl_field(1, As0_7, 1))));
                MR_Word As0_60 = ((MR_Word) ((MR_hl_field(1, As0_7, 2))));
                MR_Word R_64;

                succeeded = (LA_58 < UB_48);
                if (succeeded)
                  R_64 = (MR_Integer) 1;
                else
                {
                  succeeded = (LA_58 == UB_48);
                  if (succeeded)
                    R_64 = (MR_Integer) 0;
                  else
                    R_64 = (MR_Integer) 2;
                }
                switch (R_64) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_65;
                      MR_Word R_69;

                      succeeded = (UA_59 < UB_48);
                      if (succeeded)
                        R_69 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (UA_59 > UB_48);
                        if (succeeded)
                          R_69 = (MR_Integer) 2;
                        else
                          R_69 = (MR_Integer) 0;
                      }
                      switch (R_69) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          Var_65 = mercury__ranges__n_union_a_nb_4_f_0(UA_59, As0_60, UB_48, Bs0_49);
                          break;
                        case (MR_Integer) 0:
                          Var_65 = mercury__ranges__difference_2_f_0(Bs0_49, As0_60);
                          break;
                        case (MR_Integer) 2:
                          Var_65 = mercury__ranges__int_na_b_3_f_0(UA_59, As0_60, Bs0_49);
                          break;
                      }
                      {
                        Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_10, 1) = ((MR_Box) (LA_58));
                        MR_hl_field(1, Result_10, 2) = ((MR_Box) (Var_65));
                      }
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_66;

                      if ((Bs0_49 == (MR_Word) ((MR_Unsigned) 0U)))
                        Var_66 = (MR_Word) ((MR_Unsigned) 0U);
                      else
                      {
                        MR_Integer LB_76 = ((MR_Integer) ((MR_hl_field(1, Bs0_49, 0))));
                        MR_Integer UB_77 = ((MR_Integer) ((MR_hl_field(1, Bs0_49, 1))));
                        MR_Word Bs0_78 = ((MR_Word) ((MR_hl_field(1, Bs0_49, 2))));
                        MR_Word R_80;

                        succeeded = (UA_59 < LB_76);
                        if (succeeded)
                          R_80 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (UA_59 > LB_76);
                          if (succeeded)
                            R_80 = (MR_Integer) 2;
                          else
                            R_80 = (MR_Integer) 0;
                        }
                        switch (R_80) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            Var_66 = mercury__ranges__difference_2_f_0(Bs0_49, As0_60);
                            break;
                          case (MR_Integer) 0:
                            Var_66 = mercury__ranges__n_union_a_nb_4_f_0(UA_59, As0_60, UB_77, Bs0_78);
                            break;
                          case (MR_Integer) 2:
                            Var_66 = mercury__ranges__diff_na_nb_4_f_0(UA_59, As0_60, UB_77, Bs0_78);
                            break;
                        }
                      }
                      {
                        Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_10, 1) = ((MR_Box) (LA_58));
                        MR_hl_field(1, Result_10, 2) = ((MR_Box) (Var_66));
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word * AddrSCCcallarg_67_85;

                      {
                        Result_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, Result_10, 0) = ((MR_Box) (UA_6));
                        MR_hl_field(1, Result_10, 1) = ((MR_Box) (UB_48));
                        MR_hl_field(1, Result_10, 2) = NULL;
                      }
                      AddrSCCcallarg_67_85 = (MR_Word *) (&(MR_hl_field(1, Result_10, 2)));
                      mercury__ranges__LCMC__func__difference__1_3_p_0(Bs0_49, As0_7, AddrSCCcallarg_67_85);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word R_82;

                succeeded = (UA_6 < UB_48);
                if (succeeded)
                  R_82 = (MR_Integer) 1;
                else
                {
                  succeeded = (UA_6 > UB_48);
                  if (succeeded)
                    R_82 = (MR_Integer) 2;
                  else
                    R_82 = (MR_Integer) 0;
                }
                switch (R_82) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    Result_10 = mercury__ranges__n_union_a_nb_4_f_0(UA_6, As0_7, UB_48, Bs0_49);
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word next_value_of_tscc_proc_1_input_1_HeadVar__1_1 = Bs0_49;
                      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__2_2 = As0_7;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_1_input_1_HeadVar__1_1 = next_value_of_tscc_proc_1_input_1_HeadVar__1_1;
                      tscc_proc_1_input_2_HeadVar__2_2 = next_value_of_tscc_proc_1_input_2_HeadVar__2_2;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer next_value_of_tscc_proc_2_input_1_UA_1 = UA_6;
                      MR_Word next_value_of_tscc_proc_2_input_2_As0_2 = As0_7;
                      MR_Word next_value_of_tscc_proc_2_input_3_HeadVar__3_3 = Bs0_49;

                      // direct tailcall eliminated
                      ;
                      tscc_proc_2_input_1_UA_1 = next_value_of_tscc_proc_2_input_1_UA_1;
                      tscc_proc_2_input_2_As0_2 = next_value_of_tscc_proc_2_input_2_As0_2;
                      tscc_proc_2_input_3_HeadVar__3_3 = next_value_of_tscc_proc_2_input_3_HeadVar__3_3;
                      goto top_of_proc_2;
                    }
                    break;
                }
              }
              break;
          }
        }
        break;
    }
    tscc_output_1_HeadVar__3_3 = Result_10;
    goto tscc_end;
  }
tscc_end:;
  return tscc_output_1_HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__ranges__n_union_na_b_4_f_0(
  MR_Integer L_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__5_5;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L_1));
      MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (HeadVar__2_2));
      MR_hl_field(1, HeadVar__5_5, 2) = ((MR_Box) (HeadVar__3_3));
    }
  else
  {
    MR_Integer LB_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, 0))));
    MR_Integer UB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, 1))));
    MR_Word Bs0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 2))));
    MR_Word R_17;

    succeeded = (HeadVar__2_2 < LB_13);
    if (succeeded)
      R_17 = (MR_Integer) 1;
    else
    {
      succeeded = (HeadVar__2_2 == LB_13);
      if (succeeded)
        R_17 = (MR_Integer) 0;
      else
        R_17 = (MR_Integer) 2;
    }
    switch (R_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word * AddrSCCcallarg_18_35;

          {
            HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L_1));
            MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (HeadVar__2_2));
            MR_hl_field(1, HeadVar__5_5, 2) = NULL;
          }
          AddrSCCcallarg_18_35 = (MR_Word *) (&(MR_hl_field(1, HeadVar__5_5, 2)));
          mercury__ranges__LCMC__func__difference__1_3_p_0(HeadVar__3_3, HeadVar__4_4, AddrSCCcallarg_18_35);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_19;

          if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
            Var_19 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Integer LA_25 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 0))));
            MR_Integer UA_26 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
            MR_Word As0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
            MR_Word R_31;

            succeeded = (LA_25 < UB_14);
            if (succeeded)
              R_31 = (MR_Integer) 1;
            else
            {
              succeeded = (LA_25 > UB_14);
              if (succeeded)
                R_31 = (MR_Integer) 2;
              else
                R_31 = (MR_Integer) 0;
            }
            switch (R_31) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Var_19 = mercury__ranges__diff_na_nb_4_f_0(UB_14, Bs0_15, UA_26, As0_27);
                break;
              case (MR_Integer) 0:
                Var_19 = mercury__ranges__n_union_na_b_4_f_0(LA_25, UA_26, As0_27, Bs0_15);
                break;
              case (MR_Integer) 2:
                Var_19 = mercury__ranges__difference_2_f_0(HeadVar__3_3, Bs0_15);
                break;
            }
          }
          {
            HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L_1));
            MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (HeadVar__2_2));
            MR_hl_field(1, HeadVar__5_5, 2) = ((MR_Box) (Var_19));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_20;
          MR_Word R_33;

          succeeded = (UB_14 < HeadVar__2_2);
          if (succeeded)
            R_33 = (MR_Integer) 1;
          else
          {
            succeeded = (UB_14 > HeadVar__2_2);
            if (succeeded)
              R_33 = (MR_Integer) 2;
            else
              R_33 = (MR_Integer) 0;
          }
          switch (R_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Var_20 = mercury__ranges__n_union_a_nb_4_f_0(UB_14, Bs0_15, HeadVar__2_2, HeadVar__3_3);
              break;
            case (MR_Integer) 0:
              Var_20 = mercury__ranges__difference_2_f_0(HeadVar__3_3, Bs0_15);
              break;
            case (MR_Integer) 2:
              Var_20 = mercury__ranges__int_na_b_3_f_0(UB_14, Bs0_15, HeadVar__3_3);
              break;
          }
          {
            HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L_1));
            MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (LB_13));
            MR_hl_field(1, HeadVar__5_5, 2) = ((MR_Box) (Var_20));
          }
        }
        break;
    }
  }
  return HeadVar__5_5;
}

static MR_Word MR_CALL 
mercury__ranges__n_union_a_nb_4_f_0(
  MR_Integer L_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  MR_bool succeeded;
  MR_Word HeadVar__5_5;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L_1));
      MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (HeadVar__3_3));
      MR_hl_field(1, HeadVar__5_5, 2) = ((MR_Box) (HeadVar__4_4));
    }
  else
  {
    MR_Integer LA_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Integer UA_12 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word As0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word R_17;

    succeeded = (LA_11 < HeadVar__3_3);
    if (succeeded)
      R_17 = (MR_Integer) 1;
    else
    {
      succeeded = (LA_11 == HeadVar__3_3);
      if (succeeded)
        R_17 = (MR_Integer) 0;
      else
        R_17 = (MR_Integer) 2;
    }
    switch (R_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_18;
          MR_Word R_22;

          succeeded = (UA_12 < HeadVar__3_3);
          if (succeeded)
            R_22 = (MR_Integer) 1;
          else
          {
            succeeded = (UA_12 > HeadVar__3_3);
            if (succeeded)
              R_22 = (MR_Integer) 2;
            else
              R_22 = (MR_Integer) 0;
          }
          switch (R_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              Var_18 = mercury__ranges__n_union_a_nb_4_f_0(UA_12, As0_13, HeadVar__3_3, HeadVar__4_4);
              break;
            case (MR_Integer) 0:
              Var_18 = mercury__ranges__difference_2_f_0(HeadVar__4_4, As0_13);
              break;
            case (MR_Integer) 2:
              Var_18 = mercury__ranges__int_na_b_3_f_0(UA_12, As0_13, HeadVar__4_4);
              break;
          }
          {
            HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L_1));
            MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (LA_11));
            MR_hl_field(1, HeadVar__5_5, 2) = ((MR_Box) (Var_18));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_19;

          if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
            Var_19 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Integer LB_29 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, 0))));
            MR_Integer UB_30 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, 1))));
            MR_Word Bs0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 2))));
            MR_Word R_33;

            succeeded = (UA_12 < LB_29);
            if (succeeded)
              R_33 = (MR_Integer) 1;
            else
            {
              succeeded = (UA_12 > LB_29);
              if (succeeded)
                R_33 = (MR_Integer) 2;
              else
                R_33 = (MR_Integer) 0;
            }
            switch (R_33) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Var_19 = mercury__ranges__difference_2_f_0(HeadVar__4_4, As0_13);
                break;
              case (MR_Integer) 0:
                Var_19 = mercury__ranges__n_union_a_nb_4_f_0(UA_12, As0_13, UB_30, Bs0_31);
                break;
              case (MR_Integer) 2:
                Var_19 = mercury__ranges__diff_na_nb_4_f_0(UA_12, As0_13, UB_30, Bs0_31);
                break;
            }
          }
          {
            HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L_1));
            MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (LA_11));
            MR_hl_field(1, HeadVar__5_5, 2) = ((MR_Box) (Var_19));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word * AddrSCCcallarg_20_35;

          {
            HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L_1));
            MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (HeadVar__3_3));
            MR_hl_field(1, HeadVar__5_5, 2) = NULL;
          }
          AddrSCCcallarg_20_35 = (MR_Word *) (&(MR_hl_field(1, HeadVar__5_5, 2)));
          mercury__ranges__LCMC__func__difference__1_3_p_0(HeadVar__4_4, HeadVar__2_2, AddrSCCcallarg_20_35);
        }
        break;
    }
  }
  return HeadVar__5_5;
}

MR_Word MR_CALL 
mercury__ranges__insert_list_2_f_0(
  MR_Word Es_4,
  MR_Word Set0_5)
{
  MR_Word Set_6;

  mercury__ranges__insert_list_3_p_0(Es_4, Set0_5, &Set_6);
  return Set_6;
}

void MR_CALL 
mercury__ranges__insert_list_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Set_3 = STATE_VARIABLE_Set_0_2;
    else
    {
      MR_Integer E_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Es_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Set_1_12;
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_2;

      Var_13 = mercury__ranges__make_singleton_set_1_f_0(E_7);
      STATE_VARIABLE_Set_1_12 = mercury__ranges__union_2_f_0(STATE_VARIABLE_Set_0_2, Var_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Es_8;
      next_value_of_STATE_VARIABLE_Set_0_2 = STATE_VARIABLE_Set_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Set_0_2 = next_value_of_STATE_VARIABLE_Set_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__ranges__insert_3_p_0(
  MR_Integer E_4,
  MR_Word Set0_5,
  MR_Word * Set_6)
{
  MR_Word Var_7;

  Var_7 = mercury__ranges__make_singleton_set_1_f_0(E_4);
  *Set_6 = mercury__ranges__union_2_f_0(Set0_5, Var_7);
}

MR_Word MR_CALL 
mercury__ranges__insert_2_f_0(
  MR_Integer E_4,
  MR_Word Set0_5)
{
  MR_Word Set_6;
  MR_Word Var_7;

  Var_7 = mercury__ranges__make_singleton_set_1_f_0(E_4);
  Set_6 = mercury__ranges__union_2_f_0(Set0_5, Var_7);
  return Set_6;
}

MR_Word MR_CALL 
mercury__ranges__union_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = HeadVar__2_2;
  else
  {
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = HeadVar__1_1;
    else
    {
      MR_Integer LB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Integer UB_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Bs0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      MR_Word R_18;

      succeeded = (Var_22 < LB_14);
      if (succeeded)
        R_18 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_22 == LB_14);
        if (succeeded)
          R_18 = (MR_Integer) 0;
        else
          R_18 = (MR_Integer) 2;
      }
      switch (R_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          HeadVar__3_3 = mercury__ranges__n_diff_na_b_4_f_0(Var_22, Var_21, Var_20, HeadVar__2_2);
          break;
        case (MR_Integer) 0:
          {
            MR_Word R_23;

            succeeded = (Var_21 < UB_15);
            if (succeeded)
              R_23 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_21 > UB_15);
              if (succeeded)
                R_23 = (MR_Integer) 2;
              else
                R_23 = (MR_Integer) 0;
            }
            switch (R_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                HeadVar__3_3 = mercury__ranges__n_diff_na_b_4_f_0(Var_22, UB_15, Bs0_16, Var_20);
                break;
              case (MR_Integer) 0:
                {
                  MR_Word * AddrSCCcallarg_24_26;

                  {
                    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_22));
                    MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_21));
                    MR_hl_field(1, HeadVar__3_3, 2) = NULL;
                  }
                  AddrSCCcallarg_24_26 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 2)));
                  mercury__ranges__LCMC__func__union__1_3_p_0(Var_20, Bs0_16, AddrSCCcallarg_24_26);
                }
                break;
              case (MR_Integer) 2:
                HeadVar__3_3 = mercury__ranges__n_diff_na_b_4_f_0(Var_22, Var_21, Var_20, Bs0_16);
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          HeadVar__3_3 = mercury__ranges__n_diff_na_b_4_f_0(LB_14, UB_15, Bs0_16, HeadVar__1_1);
          break;
      }
    }
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__ranges__LCMC__func__union__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_27 = HeadVar__2_2;
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      MR_Integer Var_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__3_27 = HeadVar__1_1;
      else
      {
        MR_Integer LB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Integer UB_15 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word Bs0_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
        MR_Word R_18;

        succeeded = (Var_22 < LB_14);
        if (succeeded)
          R_18 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_22 == LB_14);
          if (succeeded)
            R_18 = (MR_Integer) 0;
          else
            R_18 = (MR_Integer) 2;
        }
        switch (R_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word HeadVar__3_29;

              HeadVar__3_29 = mercury__ranges__n_diff_na_b_4_f_0(Var_22, Var_21, Var_20, HeadVar__2_2);
              *AddrOfHeadVar__3_27 = HeadVar__3_29;
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word R_23;

              succeeded = (Var_21 < UB_15);
              if (succeeded)
                R_23 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_21 > UB_15);
                if (succeeded)
                  R_23 = (MR_Integer) 2;
                else
                  R_23 = (MR_Integer) 0;
              }
              switch (R_23) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word HeadVar__3_30;

                    HeadVar__3_30 = mercury__ranges__n_diff_na_b_4_f_0(Var_22, UB_15, Bs0_16, Var_20);
                    *AddrOfHeadVar__3_27 = HeadVar__3_30;
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word * AddrSCCcallarg_24_26;
                    MR_Word HeadVar__3_31;
                    MR_Word next_value_of_HeadVar__1_1;
                    MR_Word next_value_of_HeadVar__2_2;
                    MR_Word * next_value_of_AddrOfHeadVar__3_27;

                    {
                      HeadVar__3_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HeadVar__3_31, 0) = ((MR_Box) (Var_22));
                      MR_hl_field(1, HeadVar__3_31, 1) = ((MR_Box) (Var_21));
                      MR_hl_field(1, HeadVar__3_31, 2) = NULL;
                    }
                    AddrSCCcallarg_24_26 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_31, 2)));
                    *AddrOfHeadVar__3_27 = HeadVar__3_31;
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = Var_20;
                    next_value_of_HeadVar__2_2 = Bs0_16;
                    next_value_of_AddrOfHeadVar__3_27 = AddrSCCcallarg_24_26;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    AddrOfHeadVar__3_27 = next_value_of_AddrOfHeadVar__3_27;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word HeadVar__3_34;

                    HeadVar__3_34 = mercury__ranges__n_diff_na_b_4_f_0(Var_22, Var_21, Var_20, Bs0_16);
                    *AddrOfHeadVar__3_27 = HeadVar__3_34;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word HeadVar__3_37;

              HeadVar__3_37 = mercury__ranges__n_diff_na_b_4_f_0(LB_14, UB_15, Bs0_16, HeadVar__1_1);
              *AddrOfHeadVar__3_27 = HeadVar__3_37;
            }
            break;
        }
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__ranges__n_diff_na_b_4_f_0(
  MR_Integer L_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__5_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L_1));
        MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(1, HeadVar__5_5, 2) = ((MR_Box) (HeadVar__3_3));
      }
    else
    {
      MR_Integer LB_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Integer UB_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word Bs0_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 2))));
      MR_Word R_17;

      succeeded = (HeadVar__2_2 < LB_13);
      if (succeeded)
        R_17 = (MR_Integer) 1;
      else
      {
        succeeded = (HeadVar__2_2 == LB_13);
        if (succeeded)
          R_17 = (MR_Integer) 0;
        else
          R_17 = (MR_Integer) 2;
      }
      switch (R_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word * AddrSCCcallarg_18_23;

            {
              HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L_1));
              MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (HeadVar__2_2));
              MR_hl_field(1, HeadVar__5_5, 2) = NULL;
            }
            AddrSCCcallarg_18_23 = (MR_Word *) (&(MR_hl_field(1, HeadVar__5_5, 2)));
            mercury__ranges__LCMC__func__union__1_3_p_0(HeadVar__3_3, HeadVar__4_4, AddrSCCcallarg_18_23);
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Integer next_value_of_HeadVar__2_2 = UB_14;
            MR_Word next_value_of_HeadVar__3_3 = Bs0_15;
            MR_Word next_value_of_HeadVar__4_4 = HeadVar__3_3;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word R_20;

            succeeded = (HeadVar__2_2 < UB_14);
            if (succeeded)
              R_20 = (MR_Integer) 1;
            else
            {
              succeeded = (HeadVar__2_2 == UB_14);
              if (succeeded)
                R_20 = (MR_Integer) 0;
              else
                R_20 = (MR_Integer) 2;
            }
            switch (R_20) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Integer next_value_of_HeadVar__2_2 = UB_14;
                  MR_Word next_value_of_HeadVar__3_3 = Bs0_15;
                  MR_Word next_value_of_HeadVar__4_4 = HeadVar__3_3;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  HeadVar__4_4 = next_value_of_HeadVar__4_4;
                  continue;
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word * AddrSCCcallarg_21_24;

                  {
                    HeadVar__5_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, HeadVar__5_5, 0) = ((MR_Box) (L_1));
                    MR_hl_field(1, HeadVar__5_5, 1) = ((MR_Box) (HeadVar__2_2));
                    MR_hl_field(1, HeadVar__5_5, 2) = NULL;
                  }
                  AddrSCCcallarg_21_24 = (MR_Word *) (&(MR_hl_field(1, HeadVar__5_5, 2)));
                  mercury__ranges__LCMC__func__union__1_3_p_0(HeadVar__3_3, Bs0_15, AddrSCCcallarg_21_24);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word next_value_of_HeadVar__4_4 = Bs0_15;

                  // direct tailcall eliminated
                  ;
                  HeadVar__4_4 = next_value_of_HeadVar__4_4;
                  continue;
                }
                break;
            }
          }
          break;
      }
    }
    return HeadVar__5_5;
    break;
  }
}

void MR_CALL 
mercury__ranges__range_member_3_p_0(
  MR_Integer * Lo_4,
  MR_Integer * Hi_5,
  MR_Word Ranges_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  mercury__ranges__nondet_range_member_3_p_0(Ranges_6, Lo_4, Hi_5, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__ranges__nondet_member_2_p_0_1(
  void * env_ptr_arg)
{
  struct mercury__ranges__nondet_member_2_p_0_env_0_s * env_ptr = (struct mercury__ranges__nondet_member_2_p_0_env_0_s *) (env_ptr_arg);

  mercury__int__nondet_int_in_range_3_p_0((env_ptr)->mercury__ranges__nondet_member_2_p_0_env_0__Lo_5, (env_ptr)->mercury__ranges__nondet_member_2_p_0_env_0__Hi_6, (env_ptr)->mercury__ranges__nondet_member_2_p_0_env_0__N_4, (env_ptr)->mercury__ranges__nondet_member_2_p_0_env_0__cont, (env_ptr)->mercury__ranges__nondet_member_2_p_0_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__ranges__nondet_member_2_p_0(
  MR_Word Set_3,
  MR_Integer * N_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__ranges__nondet_member_2_p_0_env_0_s env;

  (env).mercury__ranges__nondet_member_2_p_0_env_0__N_4 = N_4;
  (env).mercury__ranges__nondet_member_2_p_0_env_0__cont = cont;
  (env).mercury__ranges__nondet_member_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  mercury__ranges__nondet_range_member_3_p_0(Set_3, &(env).mercury__ranges__nondet_member_2_p_0_env_0__Lo_5, &(env).mercury__ranges__nondet_member_2_p_0_env_0__Hi_6, mercury__ranges__nondet_member_2_p_0_1, &env);
}

void MR_CALL 
mercury__ranges__nondet_range_member_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Lo_7,
  MR_Integer * Hi_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer Lo0_4;
    MR_Integer Hi0_5;
    MR_Word Rest_6;

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Lo0_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      Hi0_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
      Rest_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
      *Lo_7 = (MR_Integer) ((MR_Unsigned) Lo0_4 + (MR_Unsigned) 1);
      *Hi_8 = Hi0_5;
      cont(cont_env_ptr);
      {
        MR_Word next_value_of_HeadVar__1_1 = Rest_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__contains_2_p_0(
  MR_Word Set_3,
  MR_Integer E_4)
{
  MR_bool succeeded;

  succeeded = mercury__ranges__member_2_p_0(E_4, Set_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ranges__member_2_p_0(
  MR_Integer N_3,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer Lo_4;
    MR_Integer Hi_5;
    MR_Word Rest_6;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Lo_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Hi_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
      Rest_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      succeeded = (N_3 > Lo_4);
      if (succeeded)
        succeeded = (N_3 <= Hi_5);
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__2_2 = Rest_6;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ranges__is_singleton_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * N_3)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer Var_4;
  MR_Integer Var_5;
  MR_Word Var_6;

  if (succeeded)
  {
    Var_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
    *N_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
    Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    Var_5 = (MR_Integer) ((MR_Unsigned) *N_3 - (MR_Unsigned) Var_4);
    succeeded = (Var_5 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ranges__is_contiguous_3_p_0(
  MR_Word Range_4,
  MR_Integer * HeadVar__2_2,
  MR_Integer * Hi_6)
{
  MR_bool succeeded = (Range_4 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer Lo_5;
  MR_Word Var_8;

  if (succeeded)
  {
    Lo_5 = ((MR_Integer) ((MR_hl_field(1, Range_4, 0))));
    *Hi_6 = ((MR_Integer) ((MR_hl_field(1, Range_4, 1))));
    Var_8 = ((MR_Word) ((MR_hl_field(1, Range_4, 2))));
    *HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Lo_5 + (MR_Unsigned) 1);
    succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ranges__is_non_empty_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
}

MR_bool MR_CALL 
mercury__ranges__is_empty_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
}

MR_Word MR_CALL 
mercury__ranges__make_singleton_set_1_f_0(
  MR_Integer Elem_3)
{
  MR_bool succeeded;
  MR_Word Ranges_4;
  MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__ranges__make_singleton_set_1_f_0

	MR_Integer Min;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = (MR_Integer) LONG_MIN;
    #if defined(LLONG_MIN)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Min = (MR_Integer) LLONG_MIN;
    #endif
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }


		;}
#undef MR_PROC_LABEL
	Var_10  = Min;
}
  succeeded = (Elem_3 == Var_10);
  if (succeeded)
    mercury__require__error_2_p_0((MR_String) "function \140ranges.make_singleton_set\'/1", (MR_String) "cannot represent min_int");
  else
  {
    MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) Elem_3 - (MR_Unsigned) 1);

    {
      Ranges_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Ranges_4, 0) = ((MR_Box) (Var_7));
      MR_hl_field(1, Ranges_4, 1) = ((MR_Box) (Elem_3));
      MR_hl_field(1, Ranges_4, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  return Ranges_4;
}

MR_Word MR_CALL 
mercury__ranges__range_2_f_0(
  MR_Integer Lo_4,
  MR_Integer Hi_5)
{
  MR_bool succeeded;
  MR_Word Ranges_6;
  MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__ranges__range_2_f_0

	MR_Integer Min;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = (MR_Integer) LONG_MIN;
    #if defined(LLONG_MIN)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Min = (MR_Integer) LLONG_MIN;
    #endif
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }


		;}
#undef MR_PROC_LABEL
	Var_12  = Min;
}
  succeeded = (Lo_4 == Var_12);
  if (succeeded)
    mercury__require__error_2_p_0((MR_String) "function \140ranges.range\'/2", (MR_String) "cannot represent min_int");
  else
  {
    succeeded = (Lo_4 > Hi_5);
    if (succeeded)
      Ranges_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) Lo_4 - (MR_Unsigned) 1);

      {
        Ranges_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Ranges_6, 0) = ((MR_Box) (Var_9));
        MR_hl_field(1, Ranges_6, 1) = ((MR_Box) (Hi_5));
        MR_hl_field(1, Ranges_6, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
  }
  return Ranges_6;
}

MR_Word MR_CALL 
mercury__ranges__universe_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Integer Var_2;
  MR_Integer Var_3;

{
#define MR_PROC_LABEL mercury__ranges__universe_0_f_0

	MR_Integer Min;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Min = INT_MIN;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Min = (MR_Integer) LONG_MIN;
    #if defined(LLONG_MIN)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Min = (MR_Integer) LLONG_MIN;
    #endif
    } else {
        MR_fatal_error("Unable to figure out min integer size");
    }


		;}
#undef MR_PROC_LABEL
	Var_2  = Min;
}
{
#define MR_PROC_LABEL mercury__ranges__universe_0_f_0

	MR_Integer Max;

		{

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }


		;}
#undef MR_PROC_LABEL
	Var_3  = Max;
}
  {
    HeadVar__1_1 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__1_1, 0) = ((MR_Box) (Var_2));
    MR_hl_field(1, HeadVar__1_1, 1) = ((MR_Box) (Var_3));
    MR_hl_field(1, HeadVar__1_1, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__1_1;
}

MR_Word MR_CALL 
mercury__ranges__empty_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__ranges____Unify____ranges_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__ranges____Unify____ranges_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__ranges____Compare____ranges_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ranges____Compare____ranges_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ranges__init(void)
{
}

void mercury__ranges__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__ranges__ranges__type_ctor_info_ranges_0);
}

void mercury__ranges__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ranges__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module ranges.
