/*
** Automatically generated from `edit_distance.m'
** by the Mercury compiler,
** version rotd-2023-11-13
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

static void MR_CALL 
mercury__edit_distance__find_closest_seqs_loop_7_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word Params_1,
  MR_Word SourceSeq_2,
  MR_Word HeadVar__3_3,
  MR_Unsigned STATE_VARIABLE_Cost_0_4,
  MR_Unsigned * STATE_VARIABLE_Cost_5,
  MR_Word STATE_VARIABLE_CostSeqCord_0_6,
  MR_Word * STATE_VARIABLE_CostSeqCord_7);

static void MR_CALL 
mercury__edit_distance__build_rows_9_p_0(
  MR_Word TypeInfo_for_T_36,
  MR_Word Params_10,
  MR_Unsigned LenA_11,
  MR_Unsigned LenB_12,
  MR_Word ItemMapA_13,
  MR_Word ItemMapB_14,
  MR_Unsigned RowNum_15,
  MR_Word RowTwoAgo_16,
  MR_Word RowOneAgo_17,
  MR_Word * FinalRow_18);

static void MR_CALL 
mercury__edit_distance__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_111_108_117_109_110_115_95_95_91_52_93_95_48_11_p_0(
  MR_Word TypeInfo_for_T_104,
  MR_Word Params_12,
  MR_Unsigned LenA_13,
  MR_Word ItemMapA_15,
  MR_Word ItemMapB_16,
  MR_Unsigned RowNum_17,
  MR_Unsigned J_18,
  MR_Word RowTwoAgo_19,
  MR_Word RowOneAgo_20,
  MR_Word STATE_VARIABLE_RowNext_0_38,
  MR_Word * STATE_VARIABLE_RowNext_39);

static void MR_CALL 
mercury__edit_distance__init_row_zero_5_p_0(
  MR_Unsigned DeleteCost_6,
  MR_Unsigned ColNum_7,
  MR_Unsigned MaxColNum_8,
  MR_Word STATE_VARIABLE_Row_0_10,
  MR_Word * STATE_VARIABLE_Row_11);

static void MR_CALL 
mercury__edit_distance__build_seq_map_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word HeadVar__1_1,
  MR_Unsigned Cur_2,
  MR_Unsigned * HeadVar__3_3,
  MR_Word STATE_VARIABLE_SeqMap_0_4,
  MR_Word * STATE_VARIABLE_SeqMap_5);

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
    MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Unsigned ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Unsigned ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
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
    MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Unsigned ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Unsigned ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Unsigned ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Unsigned ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

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
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
    AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
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
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
      AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_16, (MR_Integer) 1)));
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
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
    AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
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
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
      AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_14, (MR_Integer) 1)));
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
    MR_Word HeadTargetSeq_13 = ((MR_Word) ((MR_hl_field(1, TargetSeqs_9, (MR_Integer) 0))));
    MR_Word TailTargetSeqs_14 = ((MR_Word) ((MR_hl_field(1, TargetSeqs_9, (MR_Integer) 1))));
    MR_Unsigned HeadCost_15;
    MR_Word BestSeqCord_16;
    MR_Word BestSeqList_17;
    MR_Word Var_22;
    MR_Word Var_26;
    MR_Word conv0_BestSeqList_17;
    MR_Box conv2_HeadBestSeq_11;
    MR_Word conv1_TailBestSeqs_12;

    mercury__edit_distance__find_edit_distance_4_p_0(TypeInfo_for_T_23, Params_7, SourceSeq_8, HeadTargetSeq_13, &HeadCost_15);
    {
      TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeInfo_25_25, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(0, TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_T_23));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (HeadTargetSeq_13));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_26));
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
  MR_Word TypeInfo_for_T_32,
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
      MR_Word HeadTargetSeq_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word TailTargetSeqs_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Unsigned HeadCost_22;

      mercury__edit_distance__find_edit_distance_4_p_0(TypeInfo_for_T_32, Params_1, SourceSeq_2, HeadTargetSeq_18, &HeadCost_22);
      succeeded = (HeadCost_22 < STATE_VARIABLE_Cost_0_4);
      if (succeeded)
      {
        MR_Word STATE_VARIABLE_CostSeqCord_28_28;
        MR_Word Var_37;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Unsigned next_value_of_STATE_VARIABLE_Cost_0_4;
        MR_Word next_value_of_STATE_VARIABLE_CostSeqCord_0_6;

        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (HeadTargetSeq_18));
        }
        {
          STATE_VARIABLE_CostSeqCord_28_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_CostSeqCord_28_28, 0) = ((MR_Box) (Var_37));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = TailTargetSeqs_19;
        next_value_of_STATE_VARIABLE_Cost_0_4 = HeadCost_22;
        next_value_of_STATE_VARIABLE_CostSeqCord_0_6 = STATE_VARIABLE_CostSeqCord_28_28;
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
          MR_Word TypeInfo_36_36;
          MR_Word STATE_VARIABLE_CostSeqCord_31_31;
          MR_Word conv0_STATE_VARIABLE_CostSeqCord_31_31;
          MR_Word next_value_of_HeadVar__3_3;
          MR_Word next_value_of_STATE_VARIABLE_CostSeqCord_0_6;

          {
            TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_36_36, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
            MR_hl_field(0, TypeInfo_36_36, 1) = ((MR_Box) (TypeInfo_for_T_32));
          }
          conv0_STATE_VARIABLE_CostSeqCord_31_31 = mercury__cord__snoc_2_f_0(TypeInfo_36_36, (MR_Word) (STATE_VARIABLE_CostSeqCord_0_6), ((MR_Box) (HeadTargetSeq_18)));
          STATE_VARIABLE_CostSeqCord_31_31 = (MR_Word) (conv0_STATE_VARIABLE_CostSeqCord_31_31);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__3_3 = TailTargetSeqs_19;
          next_value_of_STATE_VARIABLE_CostSeqCord_0_6 = STATE_VARIABLE_CostSeqCord_31_31;
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
  MR_Word TypeInfo_for_T_42,
  MR_Word Params_5,
  MR_Word SeqA_6,
  MR_Word SeqB_7,
  MR_Unsigned * Cost_8)
{
  MR_bool succeeded;
  MR_Unsigned LenA_10;
  MR_Word ItemMapA_11;
  MR_Unsigned LenB_12;
  MR_Word ItemMapB_13;
  MR_Unsigned InsertCost_14;
  MR_Unsigned DeleteCost_15;

  mercury__edit_distance__build_seq_map_5_p_0(TypeInfo_for_T_42, SeqA_6, (MR_Unsigned) 0U, &LenA_10, (MR_Word) ((MR_Unsigned) 0U), &ItemMapA_11);
  mercury__edit_distance__build_seq_map_5_p_0(TypeInfo_for_T_42, SeqB_7, (MR_Unsigned) 0U, &LenB_12, (MR_Word) ((MR_Unsigned) 0U), &ItemMapB_13);
  DeleteCost_15 = ((MR_Unsigned) ((MR_hl_field(0, Params_5, (MR_Integer) 0))));
  InsertCost_14 = ((MR_Unsigned) ((MR_hl_field(0, Params_5, (MR_Integer) 1))));
  succeeded = (LenA_10 == (MR_Unsigned) 0U);
  if (succeeded)
    *Cost_8 = (LenB_12 * InsertCost_14);
  else
  {
    succeeded = (LenB_12 == (MR_Unsigned) 0U);
    if (succeeded)
      *Cost_8 = (LenA_10 * DeleteCost_15);
    else
    {
      MR_Word RowOneAgo_17;
      MR_Word FinalRow_18;
      MR_Box conv0_Cost_8;

      mercury__edit_distance__init_row_zero_5_p_0(DeleteCost_15, (MR_Unsigned) 0U, LenA_10, (MR_Word) ((MR_Unsigned) 0U), &RowOneAgo_17);
      mercury__edit_distance__build_rows_9_p_0(TypeInfo_for_T_42, Params_5, LenA_10, LenB_12, ItemMapA_11, ItemMapB_13, (MR_Unsigned) 0U, (MR_Word) ((MR_Unsigned) 0U), RowOneAgo_17, &FinalRow_18);
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), FinalRow_18, ((MR_Box) (LenA_10)), &conv0_Cost_8);
      *Cost_8 = ((MR_Unsigned) (conv0_Cost_8));
    }
  }
}

static void MR_CALL 
mercury__edit_distance__build_rows_9_p_0(
  MR_Word TypeInfo_for_T_36,
  MR_Word Params_10,
  MR_Unsigned LenA_11,
  MR_Unsigned LenB_12,
  MR_Word ItemMapA_13,
  MR_Word ItemMapB_14,
  MR_Unsigned RowNum_15,
  MR_Word RowTwoAgo_16,
  MR_Word RowOneAgo_17,
  MR_Word * FinalRow_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (RowNum_15 < LenB_12);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Unsigned InsertCost_21 = ((MR_Unsigned) ((MR_hl_field(0, Params_10, (MR_Integer) 1))));
      MR_Word RowNext1_22;
      MR_Word RowNext_23;
      MR_Unsigned Var_27;
      MR_Unsigned Var_28 = (RowNum_15 + (MR_Unsigned) 1U);
      MR_Unsigned Var_31;
      MR_Unsigned next_value_of_RowNum_15;
      MR_Word next_value_of_RowTwoAgo_16;
      MR_Word next_value_of_RowOneAgo_17;

      Var_27 = (Var_28 * InsertCost_21);
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_27)), (MR_Word) ((MR_Unsigned) 0U), &RowNext1_22);
      mercury__edit_distance__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_111_108_117_109_110_115_95_95_91_52_93_95_48_11_p_0(TypeInfo_for_T_36, Params_10, LenA_11, ItemMapA_13, ItemMapB_14, RowNum_15, (MR_Unsigned) 0U, RowTwoAgo_16, RowOneAgo_17, RowNext1_22, &RowNext_23);
      Var_31 = (RowNum_15 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_RowNum_15 = Var_31;
      next_value_of_RowTwoAgo_16 = RowOneAgo_17;
      next_value_of_RowOneAgo_17 = RowNext_23;
      RowNum_15 = next_value_of_RowNum_15;
      RowTwoAgo_16 = next_value_of_RowTwoAgo_16;
      RowOneAgo_17 = next_value_of_RowOneAgo_17;
      continue;
    }
    else
      *FinalRow_18 = RowOneAgo_17;
    break;
  }
}

static void MR_CALL 
mercury__edit_distance__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_99_111_108_117_109_110_115_95_95_91_52_93_95_48_11_p_0(
  MR_Word TypeInfo_for_T_104,
  MR_Word Params_12,
  MR_Unsigned LenA_13,
  MR_Word ItemMapA_15,
  MR_Word ItemMapB_16,
  MR_Unsigned RowNum_17,
  MR_Unsigned J_18,
  MR_Word RowTwoAgo_19,
  MR_Word RowOneAgo_20,
  MR_Word STATE_VARIABLE_RowNext_0_38,
  MR_Word * STATE_VARIABLE_RowNext_39)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (J_18 < LenA_13);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Unsigned ColNum_22 = (J_18 + (MR_Unsigned) 1U);
      MR_Unsigned DiagCost_23;
      MR_Box CurAJ_25;
      MR_Box CurBI_26;
      MR_Unsigned MinCost_27;
      MR_Word STATE_VARIABLE_RowNext_86_86;
      MR_Unsigned Var_87;
      MR_Box conv0_DiagCost_23;
      MR_Unsigned next_value_of_J_18;
      MR_Word next_value_of_STATE_VARIABLE_RowNext_0_38;

      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), RowOneAgo_20, ((MR_Box) (J_18)), &conv0_DiagCost_23);
      DiagCost_23 = ((MR_Unsigned) (conv0_DiagCost_23));
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_for_T_104, ItemMapA_15, ((MR_Box) (J_18)), &CurAJ_25);
      mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_for_T_104, ItemMapB_16, ((MR_Box) (RowNum_17)), &CurBI_26);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_104, CurAJ_25, CurBI_26);
      if (succeeded)
        MinCost_27 = DiagCost_23;
      else
      {
        MR_Word ReplacementCostFunc_29 = ((MR_Word) ((MR_hl_field(0, Params_12, (MR_Integer) 2))));
        MR_Unsigned ReplacementCost_30;
        MR_Unsigned LeftCost_31;
        MR_Unsigned DeleteCost_32;
        MR_Unsigned UpCost_33;
        MR_Unsigned InsertCost_34;
        MR_Unsigned MinCost0_35;
        MR_Unsigned Var_47;
        MR_Unsigned Var_48;
        MR_Unsigned Var_49;
        MR_Unsigned Var_50;
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, ReplacementCostFunc_29, (MR_Integer) 1))));
        MR_Box conv2_Var_47;
        MR_Box conv3_LeftCost_31;
        MR_Box conv4_UpCost_33;
        MR_Unsigned Var_52;
        MR_Unsigned Var_53;
        MR_Unsigned Var_54;
        MR_Unsigned Var_55;
        MR_Unsigned Var_56;
        MR_Box Var_106;
        MR_Box Var_107;

        conv2_Var_47 = func_1(((MR_Box) (ReplacementCostFunc_29)), CurAJ_25, CurBI_26);
        Var_47 = ((MR_Unsigned) (conv2_Var_47));
        ReplacementCost_30 = (DiagCost_23 + Var_47);
        mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), STATE_VARIABLE_RowNext_0_38, ((MR_Box) (J_18)), &conv3_LeftCost_31);
        LeftCost_31 = ((MR_Unsigned) (conv3_LeftCost_31));
        Var_48 = ((MR_Unsigned) ((MR_hl_field(0, Params_12, (MR_Integer) 0))));
        DeleteCost_32 = (LeftCost_31 + Var_48);
        mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), RowOneAgo_20, ((MR_Box) (ColNum_22)), &conv4_UpCost_33);
        UpCost_33 = ((MR_Unsigned) (conv4_UpCost_33));
        Var_49 = ((MR_Unsigned) ((MR_hl_field(0, Params_12, (MR_Integer) 1))));
        InsertCost_34 = (UpCost_33 + Var_49);
        Var_50 = mercury__uint__min_2_f_0(DeleteCost_32, ReplacementCost_30);
        MinCost0_35 = mercury__uint__min_2_f_0(InsertCost_34, Var_50);
        succeeded = (RowNum_17 > (MR_Unsigned) 0U);
        if (succeeded)
        {
          Var_52 = (MR_Unsigned) 0U;
          succeeded = (J_18 > Var_52);
          if (succeeded)
          {
            Var_54 = (MR_Unsigned) 1U;
            Var_53 = (RowNum_17 - Var_54);
            mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_for_T_104, ItemMapB_16, ((MR_Box) (Var_53)), &Var_106);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_104, CurAJ_25, Var_106);
            if (succeeded)
            {
              Var_56 = (MR_Unsigned) 1U;
              Var_55 = (J_18 - Var_56);
              mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_for_T_104, ItemMapA_15, ((MR_Box) (Var_55)), &Var_107);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_104, CurBI_26, Var_107);
            }
          }
        }
        if (succeeded)
        {
          MR_Unsigned TransDiagCost_36;
          MR_Unsigned TransposeCost_37;
          MR_Unsigned Var_57 = (J_18 - (MR_Unsigned) 1U);
          MR_Unsigned Var_59;
          MR_Box conv5_TransDiagCost_36;

          mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), RowTwoAgo_19, ((MR_Box) (Var_57)), &conv5_TransDiagCost_36);
          TransDiagCost_36 = ((MR_Unsigned) (conv5_TransDiagCost_36));
          Var_59 = ((MR_Unsigned) ((MR_hl_field(0, Params_12, (MR_Integer) 3))));
          TransposeCost_37 = (TransDiagCost_36 + Var_59);
          MinCost_27 = mercury__uint__min_2_f_0(MinCost0_35, TransposeCost_37);
        }
        else
          MinCost_27 = MinCost0_35;
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (ColNum_22)), ((MR_Box) (MinCost_27)), STATE_VARIABLE_RowNext_0_38, &STATE_VARIABLE_RowNext_86_86);
      Var_87 = (J_18 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_J_18 = Var_87;
      next_value_of_STATE_VARIABLE_RowNext_0_38 = STATE_VARIABLE_RowNext_86_86;
      J_18 = next_value_of_J_18;
      STATE_VARIABLE_RowNext_0_38 = next_value_of_STATE_VARIABLE_RowNext_0_38;
      continue;
    }
    else
      *STATE_VARIABLE_RowNext_39 = STATE_VARIABLE_RowNext_0_38;
    break;
  }
}

static void MR_CALL 
mercury__edit_distance__init_row_zero_5_p_0(
  MR_Unsigned DeleteCost_6,
  MR_Unsigned ColNum_7,
  MR_Unsigned MaxColNum_8,
  MR_Word STATE_VARIABLE_Row_0_10,
  MR_Word * STATE_VARIABLE_Row_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (ColNum_7 <= MaxColNum_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Unsigned Var_12 = (ColNum_7 * DeleteCost_6);
      MR_Word STATE_VARIABLE_Row_13_13;
      MR_Unsigned Var_14;
      MR_Unsigned next_value_of_ColNum_7;
      MR_Word next_value_of_STATE_VARIABLE_Row_0_10;

      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), ((MR_Box) (ColNum_7)), ((MR_Box) (Var_12)), STATE_VARIABLE_Row_0_10, &STATE_VARIABLE_Row_13_13);
      Var_14 = (ColNum_7 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_ColNum_7 = Var_14;
      next_value_of_STATE_VARIABLE_Row_0_10 = STATE_VARIABLE_Row_13_13;
      ColNum_7 = next_value_of_ColNum_7;
      STATE_VARIABLE_Row_0_10 = next_value_of_STATE_VARIABLE_Row_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_Row_11 = STATE_VARIABLE_Row_0_10;
    break;
  }
}

static void MR_CALL 
mercury__edit_distance__build_seq_map_5_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word HeadVar__1_1,
  MR_Unsigned Cur_2,
  MR_Unsigned * HeadVar__3_3,
  MR_Word STATE_VARIABLE_SeqMap_0_4,
  MR_Word * STATE_VARIABLE_SeqMap_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = Cur_2;
      *STATE_VARIABLE_SeqMap_5 = STATE_VARIABLE_SeqMap_0_4;
    }
    else
    {
      MR_Box Item_10 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
      MR_Word Items_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_SeqMap_17_17;
      MR_Unsigned Var_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Unsigned next_value_of_Cur_2;
      MR_Word next_value_of_STATE_VARIABLE_SeqMap_0_4;

      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), TypeInfo_for_T_21, ((MR_Box) (Cur_2)), Item_10, STATE_VARIABLE_SeqMap_0_4, &STATE_VARIABLE_SeqMap_17_17);
      Var_18 = (Cur_2 + (MR_Unsigned) 1U);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Items_11;
      next_value_of_Cur_2 = Var_18;
      next_value_of_STATE_VARIABLE_SeqMap_0_4 = STATE_VARIABLE_SeqMap_17_17;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      Cur_2 = next_value_of_Cur_2;
      STATE_VARIABLE_SeqMap_0_4 = next_value_of_STATE_VARIABLE_SeqMap_0_4;
      continue;
    }
    break;
  }
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
