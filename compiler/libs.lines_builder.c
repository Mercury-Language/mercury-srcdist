/*
** Automatically generated from `lines_builder.m'
** by the Mercury compiler,
** version rotd-2025-12-03
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


// :- module libs.lines_builder.
// :- implementation.

/*
INIT mercury__libs__lines_builder__init
ENDINIT
*/

#include "libs.lines_builder.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct1 libs__lines_builder__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo libs__lines_builder__libs__lines_builder__field_types_lines_builder_0_0[3];

static const MR_DuFunctorDesc libs__lines_builder__libs__lines_builder__du_functor_desc_lines_builder_0_0;

static const MR_DuFunctorDescPtr libs__lines_builder__libs__lines_builder__du_stag_ordered_lines_builder_0_0[1];

static const MR_DuPtagLayout libs__lines_builder__libs__lines_builder__du_ptag_ordered_lines_builder_0[1];

static const MR_DuFunctorDescPtr libs__lines_builder__libs__lines_builder__du_name_ordered_lines_builder_0[1];

static const MR_Integer libs__lines_builder__libs__lines_builder__functor_number_map_lines_builder_0[1];

static MR_bool MR_CALL 
libs__lines_builder__total_num_code_points_is_at_most_loop_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static void MR_CALL 
libs__lines_builder__total_num_code_points_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_TotalLen_0_2,
  MR_Integer * STATE_VARIABLE_TotalLen_3);

static void MR_CALL 
libs__lines_builder__append_strings_sep_lag_5_p_0(
  MR_String Sep_6,
  MR_String HeadStr_7,
  MR_Word TailStrs_8,
  MR_Word STATE_VARIABLE_LB_0_12,
  MR_Word * STATE_VARIABLE_LB_13);

static void MR_CALL 
libs__lines_builder__count_newlines_in_str_loop_4_p_0(
  MR_String Str_5,
  MR_Integer CurIndex_6,
  MR_Integer STATE_VARIABLE_LineNumber_0_10,
  MR_Integer * STATE_VARIABLE_LineNumber_11);

static MR_bool MR_CALL 
libs__lines_builder____Unify____lines_builder_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__lines_builder____Compare____lines_builder_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__lines_builder_scalar_common_1[1][2];




static /* final */ const MR_Box libs__lines_builder_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"


static const MR_FA_TypeInfo_Struct1 libs__lines_builder__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_PseudoTypeInfo libs__lines_builder__libs__lines_builder__field_types_lines_builder_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&libs__lines_builder__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__lines_builder__libs__lines_builder__du_functor_desc_lines_builder_0_0 = {
  (MR_String) "lines_builder",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__lines_builder__libs__lines_builder__field_types_lines_builder_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__lines_builder__libs__lines_builder__du_stag_ordered_lines_builder_0_0[1] = { &libs__lines_builder__libs__lines_builder__du_functor_desc_lines_builder_0_0 };

static const MR_DuPtagLayout libs__lines_builder__libs__lines_builder__du_ptag_ordered_lines_builder_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__lines_builder__libs__lines_builder__du_stag_ordered_lines_builder_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__lines_builder__libs__lines_builder__du_name_ordered_lines_builder_0[1] = { &libs__lines_builder__libs__lines_builder__du_functor_desc_lines_builder_0_0 };

static const MR_Integer libs__lines_builder__libs__lines_builder__functor_number_map_lines_builder_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct libs__lines_builder__libs__lines_builder__type_ctor_info_lines_builder_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__lines_builder____Unify____lines_builder_0_0_10001)),
  ((MR_Box) (libs__lines_builder____Compare____lines_builder_0_0_10001)),
  (MR_String) "libs.lines_builder",
  (MR_String) "lines_builder",
  { libs__lines_builder__libs__lines_builder__du_name_ordered_lines_builder_0 },
  { libs__lines_builder__libs__lines_builder__du_ptag_ordered_lines_builder_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  libs__lines_builder__libs__lines_builder__functor_number_map_lines_builder_0,

};

void MR_CALL 
libs__lines_builder____Compare____lines_builder_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&libs__lines_builder_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
libs__lines_builder____Unify____lines_builder_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_11_11;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&libs__lines_builder_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

MR_String MR_CALL 
libs__lines_builder__to_string_1_f_0(
  MR_Word LB_3)
{
  MR_String String_4;
  MR_Word RevStrings_7 = ((MR_Word) ((MR_hl_field(0, LB_3, 2))));
  MR_Word Var_8;

  Var_8 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevStrings_7);
  String_4 = mercury__string__append_list_1_f_0(Var_8);
  return String_4;
}

MR_bool MR_CALL 
libs__lines_builder__total_num_code_points_is_at_most_2_p_0(
  MR_Word LB_3,
  MR_Integer MaxLen_4)
{
  MR_bool succeeded;
  MR_Word RevStrs_7 = ((MR_Word) ((MR_hl_field(0, LB_3, 2))));

  succeeded = libs__lines_builder__total_num_code_points_is_at_most_loop_2_p_0(RevStrs_7, MaxLen_4);
  return succeeded;
}

static MR_bool MR_CALL 
libs__lines_builder__total_num_code_points_is_at_most_loop_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_String Str_4 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Strs_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer StrLen_7;
      MR_Integer MaxLen1_8;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_HeadVar__2_2;

      mercury__string__count_code_points_2_p_0(Str_4, &StrLen_7);
      succeeded = (HeadVar__2_2 >= StrLen_7);
      if (succeeded)
      {
        MaxLen1_8 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) StrLen_7);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Strs_5;
        next_value_of_HeadVar__2_2 = MaxLen1_8;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Integer MR_CALL 
libs__lines_builder__total_num_code_points_1_f_0(
  MR_Word LB_3)
{
  MR_Integer TotalLen_4;
  MR_Word RevStrs_7 = ((MR_Word) ((MR_hl_field(0, LB_3, 2))));

  libs__lines_builder__total_num_code_points_acc_3_p_0(RevStrs_7, (MR_Integer) 0, &TotalLen_4);
  return TotalLen_4;
}

static void MR_CALL 
libs__lines_builder__total_num_code_points_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_TotalLen_0_2,
  MR_Integer * STATE_VARIABLE_TotalLen_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_TotalLen_3 = STATE_VARIABLE_TotalLen_0_2;
    else
    {
      MR_String Str_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Strs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Integer STATE_VARIABLE_TotalLen_1_12;
      MR_Integer Var_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_TotalLen_0_2;

      Var_13 = mercury__string__count_code_points_1_f_0(Str_7);
      STATE_VARIABLE_TotalLen_1_12 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_TotalLen_0_2 + (MR_Unsigned) Var_13);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Strs_8;
      next_value_of_STATE_VARIABLE_TotalLen_0_2 = STATE_VARIABLE_TotalLen_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_TotalLen_0_2 = next_value_of_STATE_VARIABLE_TotalLen_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
libs__lines_builder__current_context_3_p_0(
  MR_Word LB_4,
  MR_String * FileName_5,
  MR_Integer * LineNumber_6)
{
  *FileName_5 = ((MR_String) ((MR_hl_field(0, LB_4, 0))));
  *LineNumber_6 = ((MR_Integer) ((MR_hl_field(0, LB_4, 1))));
}

void MR_CALL 
libs__lines_builder__format_4_p_0(
  MR_String FormatStr_5,
  MR_Word PolyTypes_6,
  MR_Word STATE_VARIABLE_LB_0_9,
  MR_Word * STATE_VARIABLE_LB_10)
{
  MR_String Str_8;
  MR_String FileName_11;
  MR_Integer LineNumber0_12;
  MR_Word RevStrs0_13;
  MR_Integer LineNumber_14;
  MR_Word RevStrs_15;

  mercury__string__format_3_p_0(FormatStr_5, PolyTypes_6, &Str_8);
  FileName_11 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_LB_0_9, 0))));
  LineNumber0_12 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LB_0_9, 1))));
  RevStrs0_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LB_0_9, 2))));
  libs__lines_builder__count_newlines_in_str_loop_4_p_0(Str_8, (MR_Integer) 0, LineNumber0_12, &LineNumber_14);
  {
    RevStrs_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevStrs_15, 0) = ((MR_Box) (Str_8));
    MR_hl_field(1, RevStrs_15, 1) = ((MR_Box) (RevStrs0_13));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_LB_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FileName_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (LineNumber_14));
    MR_hl_field(0, base, 2) = ((MR_Box) (RevStrs_15));
  }
}

void MR_CALL 
libs__lines_builder__append_strings_sep_4_p_0(
  MR_String Sep_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_LB_0_3,
  MR_Word * STATE_VARIABLE_LB_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_LB_4 = STATE_VARIABLE_LB_0_3;
  else
  {
    MR_String Str_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Strs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

    libs__lines_builder__append_strings_sep_lag_5_p_0(Sep_1, Str_10, Strs_11, STATE_VARIABLE_LB_0_3, STATE_VARIABLE_LB_4);
  }
}

static void MR_CALL 
libs__lines_builder__append_strings_sep_lag_5_p_0(
  MR_String Sep_6,
  MR_String HeadStr_7,
  MR_Word TailStrs_8,
  MR_Word STATE_VARIABLE_LB_0_12,
  MR_Word * STATE_VARIABLE_LB_13)
{
  while (MR_TRUE)
  {
    MR_Word STATE_VARIABLE_LB_1_14;
    MR_String FileName_16 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_LB_0_12, 0))));
    MR_Integer LineNumber0_17 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LB_0_12, 1))));
    MR_Word RevStrs0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LB_0_12, 2))));
    MR_Integer LineNumber_19;
    MR_Word RevStrs_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    libs__lines_builder__count_newlines_in_str_loop_4_p_0(HeadStr_7, (MR_Integer) 0, LineNumber0_17, &LineNumber_19);
    {
      RevStrs_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RevStrs_20, 0) = ((MR_Box) (HeadStr_7));
      MR_hl_field(1, RevStrs_20, 1) = ((MR_Box) (RevStrs0_18));
    }
    {
      STATE_VARIABLE_LB_1_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, STATE_VARIABLE_LB_1_14, 0) = ((MR_Box) (FileName_16));
      MR_hl_field(0, STATE_VARIABLE_LB_1_14, 1) = ((MR_Box) (LineNumber_19));
      MR_hl_field(0, STATE_VARIABLE_LB_1_14, 2) = ((MR_Box) (RevStrs_20));
    }
    if ((TailStrs_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LB_13 = STATE_VARIABLE_LB_1_14;
    else
    {
      MR_String HeadTailStr_10 = ((MR_String) ((MR_hl_field(1, TailStrs_8, 0))));
      MR_Word TailTailStrs_11 = ((MR_Word) ((MR_hl_field(1, TailStrs_8, 1))));
      MR_Word STATE_VARIABLE_LB_2_15;
      MR_Integer LineNumber_25;
      MR_Word RevStrs_26;
      MR_String next_value_of_HeadStr_7;
      MR_Word next_value_of_TailStrs_8;
      MR_Word next_value_of_STATE_VARIABLE_LB_0_12;

      libs__lines_builder__count_newlines_in_str_loop_4_p_0(Sep_6, (MR_Integer) 0, LineNumber_19, &LineNumber_25);
      {
        RevStrs_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RevStrs_26, 0) = ((MR_Box) (Sep_6));
        MR_hl_field(1, RevStrs_26, 1) = ((MR_Box) (RevStrs_20));
      }
      {
        STATE_VARIABLE_LB_2_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_LB_2_15, 0) = ((MR_Box) (FileName_16));
        MR_hl_field(0, STATE_VARIABLE_LB_2_15, 1) = ((MR_Box) (LineNumber_25));
        MR_hl_field(0, STATE_VARIABLE_LB_2_15, 2) = ((MR_Box) (RevStrs_26));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadStr_7 = HeadTailStr_10;
      next_value_of_TailStrs_8 = TailTailStrs_11;
      next_value_of_STATE_VARIABLE_LB_0_12 = STATE_VARIABLE_LB_2_15;
      HeadStr_7 = next_value_of_HeadStr_7;
      TailStrs_8 = next_value_of_TailStrs_8;
      STATE_VARIABLE_LB_0_12 = next_value_of_STATE_VARIABLE_LB_0_12;
      continue;
    }
    break;
  }
}

void MR_CALL 
libs__lines_builder__append_strings_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_LB_0_2,
  MR_Word * STATE_VARIABLE_LB_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_LB_3 = STATE_VARIABLE_LB_0_2;
    else
    {
      MR_String Str_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Strs_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_LB_1_12;
      MR_String FileName_13 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_LB_0_2, 0))));
      MR_Integer LineNumber0_14 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LB_0_2, 1))));
      MR_Word RevStrs0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LB_0_2, 2))));
      MR_Integer LineNumber_16;
      MR_Word RevStrs_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_LB_0_2;

      libs__lines_builder__count_newlines_in_str_loop_4_p_0(Str_7, (MR_Integer) 0, LineNumber0_14, &LineNumber_16);
      {
        RevStrs_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RevStrs_17, 0) = ((MR_Box) (Str_7));
        MR_hl_field(1, RevStrs_17, 1) = ((MR_Box) (RevStrs0_15));
      }
      {
        STATE_VARIABLE_LB_1_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_LB_1_12, 0) = ((MR_Box) (FileName_13));
        MR_hl_field(0, STATE_VARIABLE_LB_1_12, 1) = ((MR_Box) (LineNumber_16));
        MR_hl_field(0, STATE_VARIABLE_LB_1_12, 2) = ((MR_Box) (RevStrs_17));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Strs_8;
      next_value_of_STATE_VARIABLE_LB_0_2 = STATE_VARIABLE_LB_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_LB_0_2 = next_value_of_STATE_VARIABLE_LB_0_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
libs__lines_builder__append_string_3_p_0(
  MR_String Str_4,
  MR_Word STATE_VARIABLE_LB_0_11,
  MR_Word * STATE_VARIABLE_LB_12)
{
  MR_String FileName_6 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_LB_0_11, 0))));
  MR_Integer LineNumber0_7 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LB_0_11, 1))));
  MR_Word RevStrs0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LB_0_11, 2))));
  MR_Integer LineNumber_9;
  MR_Word RevStrs_10;

  libs__lines_builder__count_newlines_in_str_loop_4_p_0(Str_4, (MR_Integer) 0, LineNumber0_7, &LineNumber_9);
  {
    RevStrs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevStrs_10, 0) = ((MR_Box) (Str_4));
    MR_hl_field(1, RevStrs_10, 1) = ((MR_Box) (RevStrs0_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_LB_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FileName_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (LineNumber_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (RevStrs_10));
  }
}

static void MR_CALL 
libs__lines_builder__count_newlines_in_str_loop_4_p_0(
  MR_String Str_5,
  MR_Integer CurIndex_6,
  MR_Integer STATE_VARIABLE_LineNumber_0_10,
  MR_Integer * STATE_VARIABLE_LineNumber_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NextIndex_8;
    MR_Char Char_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__string__unsafe_index_next_4_p_0(Str_5, CurIndex_6, &NextIndex_8, &Char_9);
    if (succeeded)
    {
      MR_Integer STATE_VARIABLE_LineNumber_1_12;
      MR_Integer next_value_of_CurIndex_6;
      MR_Integer next_value_of_STATE_VARIABLE_LineNumber_0_10;

      succeeded = (Char_9 == (MR_Char) 10);
      if (succeeded)
        STATE_VARIABLE_LineNumber_1_12 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_LineNumber_0_10 + (MR_Unsigned) 1);
      else
        STATE_VARIABLE_LineNumber_1_12 = STATE_VARIABLE_LineNumber_0_10;
      // direct tailcall eliminated
      ;
      next_value_of_CurIndex_6 = NextIndex_8;
      next_value_of_STATE_VARIABLE_LineNumber_0_10 = STATE_VARIABLE_LineNumber_1_12;
      CurIndex_6 = next_value_of_CurIndex_6;
      STATE_VARIABLE_LineNumber_0_10 = next_value_of_STATE_VARIABLE_LineNumber_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_LineNumber_11 = STATE_VARIABLE_LineNumber_0_10;
    break;
  }
}

void MR_CALL 
libs__lines_builder__append_char_3_p_0(
  MR_Char Char_4,
  MR_Word STATE_VARIABLE_LB_0_11,
  MR_Word * STATE_VARIABLE_LB_12)
{
  MR_bool succeeded = (Char_4 == (MR_Char) 10);
  MR_String FileName_6 = ((MR_String) ((MR_hl_field(0, STATE_VARIABLE_LB_0_11, 0))));
  MR_Integer LineNumber0_7 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_LB_0_11, 1))));
  MR_Word RevStrings0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_LB_0_11, 2))));
  MR_Integer LineNumber_9;
  MR_Word RevStrings_10;
  MR_String Var_13;

  if (succeeded)
    LineNumber_9 = (MR_Integer) ((MR_Unsigned) LineNumber0_7 + (MR_Unsigned) 1);
  else
    LineNumber_9 = LineNumber0_7;
  Var_13 = mercury__string__char_to_string_1_f_0(Char_4);
  {
    RevStrings_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RevStrings_10, 0) = ((MR_Box) (Var_13));
    MR_hl_field(1, RevStrings_10, 1) = ((MR_Box) (RevStrings0_8));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_LB_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FileName_6));
    MR_hl_field(0, base, 1) = ((MR_Box) (LineNumber_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (RevStrings_10));
  }
}

MR_Word MR_CALL 
libs__lines_builder__init_2_f_0(
  MR_String FileName_4,
  MR_Integer InitialLineNumber_5)
{
  MR_Word LB_6;

  {
    LB_6 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LB_6, 0) = ((MR_Box) (FileName_4));
    MR_hl_field(0, LB_6, 1) = ((MR_Box) (InitialLineNumber_5));
    MR_hl_field(0, LB_6, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return LB_6;
}

static MR_bool MR_CALL 
libs__lines_builder____Unify____lines_builder_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__lines_builder____Unify____lines_builder_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__lines_builder____Compare____lines_builder_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__lines_builder____Compare____lines_builder_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__lines_builder__init(void)
{
}

void mercury__libs__lines_builder__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&libs__lines_builder__libs__lines_builder__type_ctor_info_lines_builder_0);
}

void mercury__libs__lines_builder__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__lines_builder__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.lines_builder.
