/*
** Automatically generated from `edit_distance.m'
** by the Mercury compiler,
** version rotd-2025-06-17
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


// :- module edit_distance.
// :- implementation.

/*
INIT mercury__edit_distance__init
ENDINIT
*/

#include "edit_distance.mih"


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




static const MR_VA_PseudoTypeInfo_Struct3 mercury__edit_distance____vpti_func_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_uint_0;

static const MR_PseudoTypeInfo mercury__edit_distance__edit_distance__field_types_edit_params_1_0[4];

static const MR_ConstString mercury__edit_distance__edit_distance__field_names_edit_params_1_0[4];

static const MR_DuFunctorDesc mercury__edit_distance__edit_distance__du_functor_desc_edit_params_1_0;

static const MR_DuFunctorDescPtr mercury__edit_distance__edit_distance__du_stag_ordered_edit_params_1_0[1];

static const MR_DuPtagLayout mercury__edit_distance__edit_distance__du_ptag_ordered_edit_params_1[1];

static const MR_DuFunctorDescPtr mercury__edit_distance__edit_distance__du_name_ordered_edit_params_1[1];

static const MR_Integer mercury__edit_distance__edit_distance__functor_number_map_edit_params_1[1];

static void MR_CALL 
mercury__edit_distance__map__ho7_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__edit_distance__LCMC__pred__map__ho7__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15);

static void MR_CALL 
mercury__edit_distance__map__ho6_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__edit_distance__LCMC__pred__map__ho6__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13);

static MR_bool MR_CALL 
mercury__edit_distance__find_first_close_enough_seq_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word Params_8,
  MR_Word SourceSeq_9,
  MR_Word HeadVar__3_3,
  MR_Unsigned MaxCost_12,
  MR_Unsigned * FirstCost_13,
  MR_Word * FirstTargetSeq_14,
  MR_Word * RestTargetSeqs_15);

static void MR_CALL 
mercury__edit_distance__find_closest_seqs_loop_7_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word Params_1,
  MR_Word SourceSeq_2,
  MR_Word HeadVar__3_3,
  MR_Unsigned STATE_VARIABLE_Cost_0_4,
  MR_Unsigned * STATE_VARIABLE_Cost_5,
  MR_Word STATE_VARIABLE_CostSeqCord_0_6,
  MR_Word * STATE_VARIABLE_CostSeqCord_7);

static void MR_CALL 
mercury__edit_distance__build_rows_11_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word Params_12,
  MR_Unsigned LenA_13,
  MR_Unsigned LenB_14,
  MR_ArrayPtr ItemMapA_15,
  MR_ArrayPtr ItemMapB_16,
  MR_Word MaybeCeiling_17,
  MR_Unsigned RowNum_18,
  MR_ArrayPtr RowTwoAgo0_19,
  MR_ArrayPtr RowOneAgo0_20,
  MR_ArrayPtr RowSpare_21,
  MR_ArrayPtr * FinalRow_22);

static void MR_CALL 
mercury__edit_distance__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_111_108_117_109_110_115_95_95_91_52_93_95_48_15_p_0(
  MR_Word TypeInfo_for_T_137,
  MR_Word Params_16,
  MR_Unsigned LenA_17,
  MR_ArrayPtr ItemMapA_19,
  MR_ArrayPtr ItemMapB_20,
  MR_Unsigned RowNum_21,
  MR_Unsigned J_22,
  MR_ArrayPtr STATE_VARIABLE_RowTwoAgo_0_44,
  MR_ArrayPtr * STATE_VARIABLE_RowTwoAgo_45,
  MR_ArrayPtr STATE_VARIABLE_RowOneAgo_0_46,
  MR_ArrayPtr * STATE_VARIABLE_RowOneAgo_47,
  MR_ArrayPtr STATE_VARIABLE_RowNext_0_48,
  MR_ArrayPtr * STATE_VARIABLE_RowNext_49,
  MR_Unsigned STATE_VARIABLE_MinCostInRow_0_50,
  MR_Unsigned * STATE_VARIABLE_MinCostInRow_51);

static void MR_CALL 
mercury__edit_distance__init_delete_cost_row_4_p_0(
  MR_Unsigned DeleteCost_5,
  MR_Unsigned ColNum_6,
  MR_Unsigned MaxColNum_7,
  MR_Word * Row_8);

static MR_bool MR_CALL 
mercury__edit_distance____Unify____edit_params_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__edit_distance____Compare____edit_params_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__edit_distance_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__edit_distance_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__edit_distance_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__edit_distance_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__edit_distance_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__edit_distance_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__edit_distance_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__edit_distance_scalar_common_2[0])),
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


static const MR_VA_PseudoTypeInfo_Struct3 mercury__edit_distance____vpti_func_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_uint_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
  }
};

static const MR_PseudoTypeInfo mercury__edit_distance__edit_distance__field_types_edit_params_1_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__edit_distance____vpti_func_3__pseudo_1__pseudo_1__plain_builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString mercury__edit_distance__edit_distance__field_names_edit_params_1_0[4] = {
  (MR_String) "cost_of_delete",
  (MR_String) "cost_of_insert",
  (MR_String) "cost_of_replace",
  (MR_String) "cost_of_transpose"
};

static const MR_DuFunctorDesc mercury__edit_distance__edit_distance__du_functor_desc_edit_params_1_0 = {
  (MR_String) "edit_params",
  INT16_C(4),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__edit_distance__edit_distance__field_types_edit_params_1_0,
  mercury__edit_distance__edit_distance__field_names_edit_params_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__edit_distance__edit_distance__du_stag_ordered_edit_params_1_0[1] = { &mercury__edit_distance__edit_distance__du_functor_desc_edit_params_1_0 };

static const MR_DuPtagLayout mercury__edit_distance__edit_distance__du_ptag_ordered_edit_params_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__edit_distance__edit_distance__du_stag_ordered_edit_params_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__edit_distance__edit_distance__du_name_ordered_edit_params_1[1] = { &mercury__edit_distance__edit_distance__du_functor_desc_edit_params_1_0 };

static const MR_Integer mercury__edit_distance__edit_distance__functor_number_map_edit_params_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__edit_distance__edit_distance__type_ctor_info_edit_params_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__edit_distance____Unify____edit_params_1_0_10001)),
  ((MR_Box) (mercury__edit_distance____Compare____edit_params_1_0_10001)),
  (MR_String) "edit_distance",
  (MR_String) "edit_params",
  { mercury__edit_distance__edit_distance__du_name_ordered_edit_params_1 },
  { mercury__edit_distance__edit_distance__du_ptag_ordered_edit_params_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__edit_distance__edit_distance__functor_number_map_edit_params_1,

};

void MR_CALL 
mercury__edit_distance____Compare____edit_params_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Unsigned ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Unsigned ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))));
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
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult3_12, (MR_Word) (ArgX3_10), (MR_Word) (ArgY3_11));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX4_13 == ArgY4_14);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 0;
            else
              *HeadVar__1_1 = (MR_Integer) 2;
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__edit_distance____Unify____edit_params_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Unsigned ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Unsigned ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Unsigned ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Unsigned ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX3_7), (MR_Word) (ArgY3_8));
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__edit_distance__find_best_close_enough_strings_7_p_0(
  MR_Word Params_8,
  MR_String SourceStr_9,
  MR_Word TargetStrs_10,
  MR_Unsigned MaxCost_11,
  MR_Unsigned * BestCost_12,
  MR_String * HeadBestStr_13,
  MR_Word * TailBestStrs_14)
{
  MR_bool succeeded;
  MR_Word SourceCharSeq_15;
  MR_Word TargetCharSeqs_16;
  MR_Word HeadBestCharSeq_17;
  MR_Word TailBestCharSeqs_18;
  MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__edit_distance__find_best_close_enough_strings_7_p_0

	MR_String Str;
	MR_Integer Length;

	Str = SourceStr_9 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_26  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(SourceStr_9, Var_26, (MR_Word) ((MR_Unsigned) 0U), &SourceCharSeq_15);
  mercury__edit_distance__map__ho7_3_p_in__list_0(TargetStrs_10, &TargetCharSeqs_16);
  succeeded = mercury__edit_distance__find_best_close_enough_seqs_7_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Params_8, SourceCharSeq_15, TargetCharSeqs_16, MaxCost_11, BestCost_12, &HeadBestCharSeq_17, &TailBestCharSeqs_18);
  if (succeeded)
  {
    mercury__string__from_char_list_2_p_0(HeadBestCharSeq_17, HeadBestStr_13);
    mercury__edit_distance__map__ho6_3_p_in__list_0(TailBestCharSeqs_18, TailBestStrs_14);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__edit_distance__find_closest_strings_6_p_0(
  MR_Word Params_7,
  MR_String SourceStr_8,
  MR_Word TargetStrs_9,
  MR_Unsigned * BestCost_10,
  MR_String * HeadBestStr_11,
  MR_Word * TailBestStrs_12)
{
  MR_Word SourceCharSeq_13;
  MR_Word TargetCharSeqs_14;
  MR_Word HeadBestCharSeq_15;
  MR_Word TailBestCharSeqs_16;
  MR_Integer Var_24;

{
#define MR_PROC_LABEL mercury__edit_distance__find_closest_strings_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str = SourceStr_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_24  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(SourceStr_8, Var_24, (MR_Word) ((MR_Unsigned) 0U), &SourceCharSeq_13);
  mercury__edit_distance__map__ho7_3_p_in__list_0(TargetStrs_9, &TargetCharSeqs_14);
  mercury__edit_distance__find_closest_seqs_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Params_7, SourceCharSeq_13, TargetCharSeqs_14, BestCost_10, &HeadBestCharSeq_15, &TailBestCharSeqs_16);
  mercury__string__from_char_list_2_p_0(HeadBestCharSeq_15, HeadBestStr_11);
  mercury__edit_distance__map__ho6_3_p_in__list_0(TailBestCharSeqs_16, TailBestStrs_12);
}

static void MR_CALL 
mercury__edit_distance__map__ho7_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Integer Var_12;
    MR_Word * AddrSCCcallarg_9_14;

{
#define MR_PROC_LABEL mercury__edit_distance__map__ho7_3_p_in__list_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_12  = Length;
}
    mercury__string__do_to_char_list_loop_4_p_0(Var_6, Var_12, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__edit_distance__LCMC__pred__map__ho7__1_3_p_0(Var_7, AddrSCCcallarg_9_14);
  }
}

static void MR_CALL 
mercury__edit_distance__LCMC__pred__map__ho7__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_8;
      MR_Integer Var_12;
      MR_Word * AddrSCCcallarg_9_14;
      MR_Word HeadVar__3_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_15;

{
#define MR_PROC_LABEL mercury__edit_distance__LCMC__pred__map__ho7__1_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_12  = Length;
}
      mercury__string__do_to_char_list_loop_4_p_0(Var_6, Var_12, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
      {
        HeadVar__3_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_16, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_16, 1) = NULL;
      }
      AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_16, 1)));
      *AddrOfHeadVar__3_15 = HeadVar__3_16;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_15 = AddrSCCcallarg_9_14;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_15 = next_value_of_AddrOfHeadVar__3_15;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__edit_distance__map__ho6_3_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_String Var_8;
    MR_Word * AddrSCCcallarg_9_12;

    mercury__string__from_char_list_2_p_0(Var_6, &Var_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__edit_distance__LCMC__pred__map__ho6__1_3_p_0(Var_7, AddrSCCcallarg_9_12);
  }
}

static void MR_CALL 
mercury__edit_distance__LCMC__pred__map__ho6__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_String Var_8;
      MR_Word * AddrSCCcallarg_9_12;
      MR_Word HeadVar__3_14;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_13;

      mercury__string__from_char_list_2_p_0(Var_6, &Var_8);
      {
        HeadVar__3_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_14, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_14, 1) = NULL;
      }
      AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_14, 1)));
      *AddrOfHeadVar__3_13 = HeadVar__3_14;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_13 = AddrSCCcallarg_9_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_13 = next_value_of_AddrOfHeadVar__3_13;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__edit_distance__find_best_close_enough_seqs_7_p_0(
  MR_Word TypeInfo_for_T_27,
  MR_Word Params_8,
  MR_Word SourceSeq_9,
  MR_Word TargetSeqs_10,
  MR_Unsigned MaxCost_11,
  MR_Unsigned * BestCost_12,
  MR_Word * HeadBestSeq_13,
  MR_Word * TailBestSeqs_14)
{
  MR_bool succeeded;

  if ((TargetSeqs_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140edit_distance.find_best_close_enough_seqs\'/7", (MR_String) "Calling find_best_close_enough_seqs on an empty list of target sequences does not make sense");
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word TypeCtorInfo_28_28;
    MR_Word TypeInfo_29_29;
    MR_Unsigned FirstCost_17;
    MR_Word FirstTargetSeq_18;
    MR_Word RestTargetSeqs_19;
    MR_Word BestSeqCord_20;
    MR_Word BestSeqList_21;
    MR_Word Var_26;
    MR_Word Var_30;
    MR_Word conv0_BestSeqList_21;
    MR_Box conv2_HeadBestSeq_13;
    MR_Word conv1_TailBestSeqs_14;

    succeeded = mercury__edit_distance__find_first_close_enough_seq_7_p_0(TypeInfo_for_T_27, Params_8, SourceSeq_9, TargetSeqs_10, MaxCost_11, &FirstCost_17, &FirstTargetSeq_18, &RestTargetSeqs_19);
    if (succeeded)
    {
      TypeCtorInfo_28_28 = (MR_Word) (&mercury__list__list__type_ctor_info_list_1);
      {
        TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TypeInfo_29_29, 0) = ((MR_Box) (TypeCtorInfo_28_28));
        MR_hl_field(0, TypeInfo_29_29, 1) = ((MR_Box) (TypeInfo_for_T_27));
      }
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_30, 0) = ((MR_Box) (FirstTargetSeq_18));
      }
      {
        Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_30));
      }
      mercury__edit_distance__find_closest_seqs_loop_7_p_0(TypeInfo_for_T_27, Params_8, SourceSeq_9, RestTargetSeqs_19, FirstCost_17, BestCost_12, Var_26, &BestSeqCord_20);
      conv0_BestSeqList_21 = mercury__cord__to_list_1_f_0(TypeInfo_29_29, (MR_Word) (BestSeqCord_20));
      BestSeqList_21 = (MR_Word) (conv0_BestSeqList_21);
      mercury__list__det_head_tail_3_p_0(TypeInfo_29_29, (MR_Word) (BestSeqList_21), &conv2_HeadBestSeq_13, &conv1_TailBestSeqs_14);
      *HeadBestSeq_13 = ((MR_Word) (conv2_HeadBestSeq_13));
      *TailBestSeqs_14 = (MR_Word) (conv1_TailBestSeqs_14);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__edit_distance__find_first_close_enough_seq_7_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word Params_8,
  MR_Word SourceSeq_9,
  MR_Word HeadVar__3_3,
  MR_Unsigned MaxCost_12,
  MR_Unsigned * FirstCost_13,
  MR_Word * FirstTargetSeq_14,
  MR_Word * RestTargetSeqs_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word HeadTargetSeq_10;
    MR_Word TailTargetSeqs_11;
    MR_Unsigned HeadCost_16;
    MR_Word Var_17;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      HeadTargetSeq_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      TailTargetSeqs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      {
        Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_17, 0) = ((MR_Box) (MaxCost_12));
      }
      mercury__edit_distance__find_edit_distance_ceiling_5_p_0(TypeInfo_for_T_18, Params_8, SourceSeq_9, HeadTargetSeq_10, Var_17, &HeadCost_16);
      succeeded = (HeadCost_16 <= MaxCost_12);
      if (succeeded)
      {
        *FirstCost_13 = HeadCost_16;
        *FirstTargetSeq_14 = HeadTargetSeq_10;
        *RestTargetSeqs_15 = TailTargetSeqs_11;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__3_3 = TailTargetSeqs_11;

        // direct tailcall eliminated
        ;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__edit_distance__find_closest_seqs_6_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word Params_7,
  MR_Word SourceSeq_8,
  MR_Word TargetSeqs_9,
  MR_Unsigned * BestCost_10,
  MR_Word * HeadBestSeq_11,
  MR_Word * TailBestSeqs_12)
{
  if ((TargetSeqs_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140edit_distance.find_closest_seqs\'/6", (MR_String) "Calling find_closest_seqs on an empty list of target sequences does not make sense");
      return;
    }
  else
  {
    MR_Word TypeInfo_25_25;
    MR_Word HeadTargetSeq_13 = ((MR_Word) ((MR_hl_field(1, TargetSeqs_9, 0))));
    MR_Word TailTargetSeqs_14 = ((MR_Word) ((MR_hl_field(1, TargetSeqs_9, 1))));
    MR_Unsigned HeadCost_15;
    MR_Word BestSeqCord_16;
    MR_Word BestSeqList_17;
    MR_Word Var_22;
    MR_Word Var_27;
    MR_Word conv0_BestSeqList_17;
    MR_Box conv2_HeadBestSeq_11;
    MR_Word conv1_TailBestSeqs_12;

    mercury__edit_distance__find_edit_distance_ceiling_5_p_0(TypeInfo_for_T_23, Params_7, SourceSeq_8, HeadTargetSeq_13, (MR_Word) ((MR_Unsigned) 0U), &HeadCost_15);
    {
      TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_23));
    }
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (HeadTargetSeq_13));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_27));
    }
    mercury__edit_distance__find_closest_seqs_loop_7_p_0(TypeInfo_for_T_23, Params_7, SourceSeq_8, TailTargetSeqs_14, HeadCost_15, BestCost_10, Var_22, &BestSeqCord_16);
    conv0_BestSeqList_17 = mercury__cord__to_list_1_f_0(TypeInfo_25_25, (MR_Word) (BestSeqCord_16));
    BestSeqList_17 = (MR_Word) (conv0_BestSeqList_17);
    mercury__list__det_head_tail_3_p_0(TypeInfo_25_25, (MR_Word) (BestSeqList_17), &conv2_HeadBestSeq_11, &conv1_TailBestSeqs_12);
    *HeadBestSeq_11 = ((MR_Word) (conv2_HeadBestSeq_11));
    *TailBestSeqs_12 = (MR_Word) (conv1_TailBestSeqs_12);
  }
}

static void MR_CALL 
mercury__edit_distance__find_closest_seqs_loop_7_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word Params_1,
  MR_Word SourceSeq_2,
  MR_Word HeadVar__3_3,
  MR_Unsigned STATE_VARIABLE_Cost_0_4,
  MR_Unsigned * STATE_VARIABLE_Cost_5,
  MR_Word STATE_VARIABLE_CostSeqCord_0_6,
  MR_Word * STATE_VARIABLE_CostSeqCord_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CostSeqCord_7 = STATE_VARIABLE_CostSeqCord_0_6;
      *STATE_VARIABLE_Cost_5 = STATE_VARIABLE_Cost_0_4;
    }
    else
    {
      MR_Word HeadTargetSeq_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word TailTargetSeqs_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Unsigned HeadCost_22;
      MR_Word Var_27;

      {
        Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_27, 0) = ((MR_Box) (STATE_VARIABLE_Cost_0_4));
      }
      mercury__edit_distance__find_edit_distance_ceiling_5_p_0(TypeInfo_for_T_33, Params_1, SourceSeq_2, HeadTargetSeq_18, Var_27, &HeadCost_22);
      succeeded = (HeadCost_22 < STATE_VARIABLE_Cost_0_4);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_CostSeqCord_1_29;
        MR_Word Var_38;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Unsigned next_value_of_STATE_VARIABLE_Cost_0_4;
        MR_Word next_value_of_STATE_VARIABLE_CostSeqCord_0_6;

        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_38, 0) = ((MR_Box) (HeadTargetSeq_18));
        }
        {
          STATE_VARIABLE_CostSeqCord_1_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_CostSeqCord_1_29, 0) = ((MR_Box) (Var_38));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = TailTargetSeqs_19;
        next_value_of_STATE_VARIABLE_Cost_0_4 = HeadCost_22;
        next_value_of_STATE_VARIABLE_CostSeqCord_0_6 = STATE_VARIABLE_CostSeqCord_1_29;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        STATE_VARIABLE_Cost_0_4 = next_value_of_STATE_VARIABLE_Cost_0_4;
        STATE_VARIABLE_CostSeqCord_0_6 = next_value_of_STATE_VARIABLE_CostSeqCord_0_6;
        continue;
      }
      else
      {
        succeeded = (HeadCost_22 == STATE_VARIABLE_Cost_0_4);
        if (succeeded)
        {
          MR_Word TypeInfo_37_37;
          MR_Word STATE_VARIABLE_CostSeqCord_3_32;
          MR_Word conv0_STATE_VARIABLE_CostSeqCord_3_32;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_STATE_VARIABLE_CostSeqCord_0_6;

          {
            TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_37_37, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
            MR_hl_field(0, TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_for_T_33));
          }
          conv0_STATE_VARIABLE_CostSeqCord_3_32 = mercury__cord__snoc_2_f_0(TypeInfo_37_37, (MR_Word) (STATE_VARIABLE_CostSeqCord_0_6), ((MR_Box) (HeadTargetSeq_18)));
          STATE_VARIABLE_CostSeqCord_3_32 = (MR_Word) (conv0_STATE_VARIABLE_CostSeqCord_3_32);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = TailTargetSeqs_19;
          next_value_of_STATE_VARIABLE_CostSeqCord_0_6 = STATE_VARIABLE_CostSeqCord_3_32;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          STATE_VARIABLE_CostSeqCord_0_6 = next_value_of_STATE_VARIABLE_CostSeqCord_0_6;
          continue;
        }
        else
        {
          MR_Word next_value_of_HeadVar__3_3 = TailTargetSeqs_19;

          // direct tailcall eliminated
          ;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__edit_distance__find_edit_distance_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Params_5,
  MR_Word SeqA_6,
  MR_Word SeqB_7,
  MR_Unsigned * Cost_8)
{
  mercury__edit_distance__find_edit_distance_ceiling_5_p_0(TypeInfo_for_T_10, Params_5, SeqA_6, SeqB_7, (MR_Word) ((MR_Unsigned) 0U), Cost_8);
}

void MR_CALL 
mercury__edit_distance__find_edit_distance_ceiling_5_p_0(
  MR_Word TypeInfo_for_T_54,
  MR_Word Params_6,
  MR_Word SeqA_7,
  MR_Word SeqB_8,
  MR_Word MaybeCeiling_9,
  MR_Unsigned * Cost_10)
{
  MR_bool succeeded;
  MR_Integer LenIntA_13;
  MR_Integer LenIntB_14;
  MR_Unsigned LenA_15;
  MR_Unsigned LenB_16;
  MR_ArrayPtr ItemMapA_17;
  MR_ArrayPtr ItemMapB_18;
  MR_Unsigned InsertCost_19;
  MR_Unsigned DeleteCost_20;

  mercury__list__length_acc_3_p_0(TypeInfo_for_T_54, SeqA_7, (MR_Integer) 0, &LenIntA_13);
  mercury__list__length_acc_3_p_0(TypeInfo_for_T_54, SeqB_8, (MR_Integer) 0, &LenIntB_14);
  LenA_15 = mercury__uint__det_from_int_1_f_0(LenIntA_13);
  LenB_16 = mercury__uint__det_from_int_1_f_0(LenIntB_14);
  mercury__array__from_list_2_p_0(TypeInfo_for_T_54, SeqA_7, &ItemMapA_17);
  mercury__array__from_list_2_p_0(TypeInfo_for_T_54, SeqB_8, &ItemMapB_18);
  DeleteCost_20 = ((MR_Unsigned) ((MR_hl_field(0, Params_6, 0))));
  InsertCost_19 = ((MR_Unsigned) ((MR_hl_field(0, Params_6, 1))));
  succeeded = (LenA_15 == (MR_Unsigned) 0U);
  if (succeeded)
    *Cost_10 = (LenB_16 * InsertCost_19);
  else
  {
    succeeded = (LenB_16 == (MR_Unsigned) 0U);
    if (succeeded)
      *Cost_10 = (LenA_15 * DeleteCost_20);
    else
    {
      MR_ArrayPtr RowTwoAgo_21;
      MR_Word RowOneAgoList_22;
      MR_ArrayPtr RowOneAgo_23;
      MR_ArrayPtr RowSpare_24;
      MR_ArrayPtr FinalRow_25;
      MR_Integer Var_37;
      MR_Unsigned Var_38 = (LenA_15 + (MR_Unsigned) 1U);
      MR_Integer Var_42;
      MR_Unsigned Var_43;
      MR_Integer Var_47;
      MR_ArrayPtr conv0_RowTwoAgo_21;
      MR_ArrayPtr conv1_RowOneAgo_23;
      MR_ArrayPtr conv2_RowSpare_24;
      MR_Box conv3_Cost_10;

{
#define MR_PROC_LABEL mercury__edit_distance__find_edit_distance_ceiling_5_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_38 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_37  = I;
}
      mercury__array__init_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Var_37, ((MR_Box) ((MR_Unsigned) 0U)), &conv0_RowTwoAgo_21);
      RowTwoAgo_21 = (MR_ArrayPtr) (conv0_RowTwoAgo_21);
      mercury__edit_distance__init_delete_cost_row_4_p_0(DeleteCost_20, (MR_Unsigned) 0U, LenA_15, &RowOneAgoList_22);
      mercury__array__from_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), RowOneAgoList_22, &conv1_RowOneAgo_23);
      RowOneAgo_23 = (MR_ArrayPtr) (conv1_RowOneAgo_23);
      Var_43 = (LenA_15 + (MR_Unsigned) 1U);
{
#define MR_PROC_LABEL mercury__edit_distance__find_edit_distance_ceiling_5_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = Var_43 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_42  = I;
}
      mercury__array__init_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Var_42, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_RowSpare_24);
      RowSpare_24 = (MR_ArrayPtr) (conv2_RowSpare_24);
      mercury__edit_distance__build_rows_11_p_0(TypeInfo_for_T_54, Params_6, LenA_15, LenB_16, ItemMapA_17, ItemMapB_18, MaybeCeiling_9, (MR_Unsigned) 0U, RowTwoAgo_21, RowOneAgo_23, RowSpare_24, &FinalRow_25);
{
#define MR_PROC_LABEL mercury__edit_distance__find_edit_distance_ceiling_5_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = LenA_15 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	Var_47  = I;
}
      mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_ArrayPtr) (FinalRow_25), Var_47, &conv3_Cost_10);
      *Cost_10 = ((MR_Unsigned) (conv3_Cost_10));
    }
  }
}

static void MR_CALL 
mercury__edit_distance__build_rows_11_p_0(
  MR_Word TypeInfo_for_T_47,
  MR_Word Params_12,
  MR_Unsigned LenA_13,
  MR_Unsigned LenB_14,
  MR_ArrayPtr ItemMapA_15,
  MR_ArrayPtr ItemMapB_16,
  MR_Word MaybeCeiling_17,
  MR_Unsigned RowNum_18,
  MR_ArrayPtr RowTwoAgo0_19,
  MR_ArrayPtr RowOneAgo0_20,
  MR_ArrayPtr RowSpare_21,
  MR_ArrayPtr * FinalRow_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (RowNum_18 < LenB_14);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Unsigned InsertCost_26 = ((MR_Unsigned) ((MR_hl_field(0, Params_12, 1))));
      MR_ArrayPtr RowNext1_28;
      MR_Unsigned MinCostInRow0_29;
      MR_ArrayPtr RowTwoAgo_30;
      MR_ArrayPtr RowOneAgo_31;
      MR_ArrayPtr RowNext_32;
      MR_Unsigned MinCostInRow_33;
      MR_Unsigned Var_38 = (RowNum_18 + (MR_Unsigned) 1U);
      MR_ArrayPtr conv0_RowNext1_28;
      MR_Unsigned Ceiling_34;

      MinCostInRow0_29 = (Var_38 * InsertCost_26);
      mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Integer) 0, ((MR_Box) (MinCostInRow0_29)), (MR_ArrayPtr) (RowSpare_21), &conv0_RowNext1_28);
      RowNext1_28 = (MR_ArrayPtr) (conv0_RowNext1_28);
      mercury__edit_distance__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_111_108_117_109_110_115_95_95_91_52_93_95_48_15_p_0(TypeInfo_for_T_47, Params_12, LenA_13, ItemMapA_15, ItemMapB_16, RowNum_18, (MR_Unsigned) 0U, RowTwoAgo0_19, &RowTwoAgo_30, RowOneAgo0_20, &RowOneAgo_31, RowNext1_28, &RowNext_32, MinCostInRow0_29, &MinCostInRow_33);
      succeeded = (MaybeCeiling_17 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Ceiling_34 = ((MR_Unsigned) ((MR_hl_field(1, MaybeCeiling_17, 0))));
        succeeded = (MinCostInRow_33 > Ceiling_34);
      }
      if (succeeded)
        *FinalRow_22 = RowNext_32;
      else
      {
        MR_Unsigned Var_42 = (RowNum_18 + (MR_Unsigned) 1U);
        MR_Unsigned next_value_of_RowNum_18 = Var_42;
        MR_ArrayPtr next_value_of_RowTwoAgo0_19 = RowOneAgo_31;
        MR_ArrayPtr next_value_of_RowOneAgo0_20 = RowNext_32;
        MR_ArrayPtr next_value_of_RowSpare_21 = RowTwoAgo_30;

        // direct tailcall eliminated
        ;
        RowNum_18 = next_value_of_RowNum_18;
        RowTwoAgo0_19 = next_value_of_RowTwoAgo0_19;
        RowOneAgo0_20 = next_value_of_RowOneAgo0_20;
        RowSpare_21 = next_value_of_RowSpare_21;
        continue;
      }
    }
    else
      *FinalRow_22 = RowOneAgo0_20;
    break;
  }
}

static void MR_CALL 
mercury__edit_distance__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_111_108_117_109_110_115_95_95_91_52_93_95_48_15_p_0(
  MR_Word TypeInfo_for_T_137,
  MR_Word Params_16,
  MR_Unsigned LenA_17,
  MR_ArrayPtr ItemMapA_19,
  MR_ArrayPtr ItemMapB_20,
  MR_Unsigned RowNum_21,
  MR_Unsigned J_22,
  MR_ArrayPtr STATE_VARIABLE_RowTwoAgo_0_44,
  MR_ArrayPtr * STATE_VARIABLE_RowTwoAgo_45,
  MR_ArrayPtr STATE_VARIABLE_RowOneAgo_0_46,
  MR_ArrayPtr * STATE_VARIABLE_RowOneAgo_47,
  MR_ArrayPtr STATE_VARIABLE_RowNext_0_48,
  MR_ArrayPtr * STATE_VARIABLE_RowNext_49,
  MR_Unsigned STATE_VARIABLE_MinCostInRow_0_50,
  MR_Unsigned * STATE_VARIABLE_MinCostInRow_51)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (J_22 < LenA_17);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Unsigned ColNum_27 = (J_22 + (MR_Unsigned) 1U);
      MR_Unsigned DiagCost_28;
      MR_Box CurAJ_30;
      MR_Box CurBI_31;
      MR_Unsigned MinCost_32;
      MR_Integer Var_53;
      MR_Integer Var_54;
      MR_Integer Var_55;
      MR_Integer Var_109;
      MR_ArrayPtr STATE_VARIABLE_RowNext_1_110;
      MR_Unsigned STATE_VARIABLE_MinCostInRow_1_111;
      MR_Unsigned Var_112;
      MR_Box conv0_DiagCost_28;
      MR_ArrayPtr conv6_STATE_VARIABLE_RowNext_1_110;
      MR_Unsigned next_value_of_J_22;
      MR_ArrayPtr next_value_of_STATE_VARIABLE_RowNext_0_48;
      MR_Unsigned next_value_of_STATE_VARIABLE_MinCostInRow_0_50;

      Var_53 = mercury__uint__cast_to_int_1_f_0(J_22);
      mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_ArrayPtr) (STATE_VARIABLE_RowOneAgo_0_46), Var_53, &conv0_DiagCost_28);
      DiagCost_28 = ((MR_Unsigned) (conv0_DiagCost_28));
      Var_54 = mercury__uint__cast_to_int_1_f_0(J_22);
      mercury__array__lookup_3_p_0(TypeInfo_for_T_137, ItemMapA_19, Var_54, &CurAJ_30);
      Var_55 = mercury__uint__cast_to_int_1_f_0(RowNum_21);
      mercury__array__lookup_3_p_0(TypeInfo_for_T_137, ItemMapB_20, Var_55, &CurBI_31);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_137, CurAJ_30, CurBI_31);
      if (succeeded)
        MinCost_32 = DiagCost_28;
      else
      {
        MR_Word ReplacementCostFunc_35 = ((MR_Word) ((MR_hl_field(0, Params_16, 2))));
        MR_Unsigned ReplacementCost_36;
        MR_Unsigned LeftCost_37;
        MR_Unsigned DeleteCost_38;
        MR_Unsigned UpCost_39;
        MR_Unsigned InsertCost_40;
        MR_Unsigned MinCost0_41;
        MR_Unsigned Var_63;
        MR_Integer Var_64;
        MR_Unsigned Var_65;
        MR_Integer Var_66;
        MR_Unsigned Var_67;
        MR_Unsigned Var_68;
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, ReplacementCostFunc_35, 1))));
        MR_Box conv2_Var_63;
        MR_Box conv3_LeftCost_37;
        MR_Box conv4_UpCost_39;
        MR_Unsigned Var_70;
        MR_Integer Var_71;
        MR_Unsigned Var_72;
        MR_Unsigned Var_73;
        MR_Integer Var_74;
        MR_Unsigned Var_75;
        MR_Unsigned Var_76;
        MR_Box Var_139;
        MR_Box Var_140;

        conv2_Var_63 = func_1(((MR_Box) (ReplacementCostFunc_35)), CurAJ_30, CurBI_31);
        Var_63 = ((MR_Unsigned) (conv2_Var_63));
        ReplacementCost_36 = (DiagCost_28 + Var_63);
        Var_64 = mercury__uint__cast_to_int_1_f_0(J_22);
        mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_ArrayPtr) (STATE_VARIABLE_RowNext_0_48), Var_64, &conv3_LeftCost_37);
        LeftCost_37 = ((MR_Unsigned) (conv3_LeftCost_37));
        Var_65 = ((MR_Unsigned) ((MR_hl_field(0, Params_16, 0))));
        DeleteCost_38 = (LeftCost_37 + Var_65);
        Var_66 = mercury__uint__cast_to_int_1_f_0(ColNum_27);
        mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_ArrayPtr) (STATE_VARIABLE_RowOneAgo_0_46), Var_66, &conv4_UpCost_39);
        UpCost_39 = ((MR_Unsigned) (conv4_UpCost_39));
        Var_67 = ((MR_Unsigned) ((MR_hl_field(0, Params_16, 1))));
        InsertCost_40 = (UpCost_39 + Var_67);
        Var_68 = mercury__uint__min_2_f_0(DeleteCost_38, ReplacementCost_36);
        MinCost0_41 = mercury__uint__min_2_f_0(InsertCost_40, Var_68);
        succeeded = (RowNum_21 > (MR_Unsigned) 0U);
        if (succeeded)
        {
          Var_70 = (MR_Unsigned) 0U;
          succeeded = (J_22 > Var_70);
          if (succeeded)
          {
            Var_73 = (MR_Unsigned) 1U;
            Var_72 = (RowNum_21 - Var_73);
            Var_71 = mercury__uint__cast_to_int_1_f_0(Var_72);
            mercury__array__lookup_3_p_0(TypeInfo_for_T_137, ItemMapB_20, Var_71, &Var_139);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_137, CurAJ_30, Var_139);
            if (succeeded)
            {
              Var_76 = (MR_Unsigned) 1U;
              Var_75 = (J_22 - Var_76);
              Var_74 = mercury__uint__cast_to_int_1_f_0(Var_75);
              mercury__array__lookup_3_p_0(TypeInfo_for_T_137, ItemMapA_19, Var_74, &Var_140);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_137, CurBI_31, Var_140);
            }
          }
        }
        if (succeeded)
        {
          MR_Unsigned TransDiagCost_42;
          MR_Unsigned TransposeCost_43;
          MR_Integer Var_77;
          MR_Unsigned Var_78 = (J_22 - (MR_Unsigned) 1U);
          MR_Unsigned Var_80;
          MR_Box conv5_TransDiagCost_42;

          Var_77 = mercury__uint__cast_to_int_1_f_0(Var_78);
          mercury__array__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_ArrayPtr) (STATE_VARIABLE_RowTwoAgo_0_44), Var_77, &conv5_TransDiagCost_42);
          TransDiagCost_42 = ((MR_Unsigned) (conv5_TransDiagCost_42));
          Var_80 = ((MR_Unsigned) ((MR_hl_field(0, Params_16, 3))));
          TransposeCost_43 = (TransDiagCost_42 + Var_80);
          MinCost_32 = mercury__uint__min_2_f_0(MinCost0_41, TransposeCost_43);
        }
        else
          MinCost_32 = MinCost0_41;
      }
      Var_109 = mercury__uint__cast_to_int_1_f_0(ColNum_27);
      mercury__array__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Var_109, ((MR_Box) (MinCost_32)), (MR_ArrayPtr) (STATE_VARIABLE_RowNext_0_48), &conv6_STATE_VARIABLE_RowNext_1_110);
      STATE_VARIABLE_RowNext_1_110 = (MR_ArrayPtr) (conv6_STATE_VARIABLE_RowNext_1_110);
      succeeded = (MinCost_32 < STATE_VARIABLE_MinCostInRow_0_50);
      if (succeeded)
        STATE_VARIABLE_MinCostInRow_1_111 = MinCost_32;
      else
        STATE_VARIABLE_MinCostInRow_1_111 = STATE_VARIABLE_MinCostInRow_0_50;
      Var_112 = (J_22 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_J_22 = Var_112;
      next_value_of_STATE_VARIABLE_RowNext_0_48 = STATE_VARIABLE_RowNext_1_110;
      next_value_of_STATE_VARIABLE_MinCostInRow_0_50 = STATE_VARIABLE_MinCostInRow_1_111;
      J_22 = next_value_of_J_22;
      STATE_VARIABLE_RowNext_0_48 = next_value_of_STATE_VARIABLE_RowNext_0_48;
      STATE_VARIABLE_MinCostInRow_0_50 = next_value_of_STATE_VARIABLE_MinCostInRow_0_50;
      continue;
    }
    else
    {
      *STATE_VARIABLE_MinCostInRow_51 = STATE_VARIABLE_MinCostInRow_0_50;
      *STATE_VARIABLE_RowNext_49 = STATE_VARIABLE_RowNext_0_48;
      *STATE_VARIABLE_RowOneAgo_47 = STATE_VARIABLE_RowOneAgo_0_46;
      *STATE_VARIABLE_RowTwoAgo_45 = STATE_VARIABLE_RowTwoAgo_0_44;
    }
    break;
  }
}

static void MR_CALL 
mercury__edit_distance__init_delete_cost_row_4_p_0(
  MR_Unsigned DeleteCost_5,
  MR_Unsigned ColNum_6,
  MR_Unsigned MaxColNum_7,
  MR_Word * Row_8)
{
  MR_bool succeeded = (ColNum_6 <= MaxColNum_7);

  if (succeeded)
  {
    MR_Word RowTail_9;
    MR_Unsigned Var_10 = (ColNum_6 + (MR_Unsigned) 1U);
    MR_Unsigned Var_12;

    mercury__edit_distance__init_delete_cost_row_4_p_0(DeleteCost_5, Var_10, MaxColNum_7, &RowTail_9);
    Var_12 = (ColNum_6 * DeleteCost_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Row_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (RowTail_9));
    }
  }
  else
    *Row_8 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__edit_distance____Unify____edit_params_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__edit_distance____Unify____edit_params_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__edit_distance____Compare____edit_params_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__edit_distance____Compare____edit_params_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__edit_distance__init(void)
{
}

void mercury__edit_distance__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__edit_distance__edit_distance__type_ctor_info_edit_params_1);
}

void mercury__edit_distance__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__edit_distance__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module edit_distance.
