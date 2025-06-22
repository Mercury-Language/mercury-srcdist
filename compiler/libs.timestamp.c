/*
** Automatically generated from `timestamp.m'
** by the Mercury compiler,
** version rotd-2025-06-22
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


// :- module libs.timestamp.
// :- implementation.

/*
INIT mercury__libs__timestamp__init
ENDINIT
*/

#include "libs.timestamp.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0;

static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1;

static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_ordinal_ordered_maybe_return_timestamp_0[2];

static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_name_ordered_maybe_return_timestamp_0[2];

static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_maybe_return_timestamp_0[2];

static const MR_PseudoTypeInfo libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_0[1];

static const MR_DuArgLocn libs__timestamp__libs__timestamp__field_locns_read_module_and_timestamps_0_0[1];

static const MR_DuFunctorDesc libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_0;

static const MR_PseudoTypeInfo libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_1[1];

static const MR_DuFunctorDesc libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_1;

static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_0[1];

static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_1[1];

static const MR_DuPtagLayout libs__timestamp__libs__timestamp__du_ptag_ordered_read_module_and_timestamps_0[2];

static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_name_ordered_read_module_and_timestamps_0[2];

static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_read_module_and_timestamps_0[2];

static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_timestamp_0[1];

static const MR_NotagFunctorDesc libs__timestamp__libs__timestamp__notag_functor_desc_timestamp_0;

static MR_bool MR_CALL 
libs__timestamp__plausible_timestamp_char_1_p_0(
  MR_Char Char_2);

static MR_String MR_CALL 
libs__timestamp__gmtime_to_timestamp_string_9_f_0(
  MR_Integer Yr_1,
  MR_Integer Mnt_2,
  MR_Integer MD_3,
  MR_Integer Hrs_4,
  MR_Integer Min_5,
  MR_Integer Sec_6,
  MR_Integer YD_7,
  MR_Integer WD_8,
  MR_Integer N_9);

static MR_bool MR_CALL 
libs__timestamp__parse_timestamp_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
libs__timestamp____Unify____maybe_return_timestamp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__timestamp____Compare____maybe_return_timestamp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__timestamp____Unify____read_module_and_timestamps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__timestamp____Compare____read_module_and_timestamps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__timestamp____Unify____timestamp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__timestamp____Compare____timestamp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__timestamp_scalar_common_1[1][4];

static /* final */ const MR_Box libs__timestamp_scalar_common_2[1][3];




static /* final */ const MR_Box libs__timestamp_scalar_common_1[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box libs__timestamp_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&libs__timestamp_scalar_common_1[0])),
    ((MR_Box) (libs__timestamp__parse_timestamp_string_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "libs.timestamp.mh"


static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0 = {
  (MR_String) "do_not_return_timestamp",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1 = {
  (MR_String) "do_return_timestamp",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_ordinal_ordered_maybe_return_timestamp_0[2] = {
  &libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0,
  &libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1
};

static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_name_ordered_maybe_return_timestamp_0[2] = {
  &libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0,
  &libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1
};

static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_maybe_return_timestamp_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__timestamp__libs__timestamp__type_ctor_info_maybe_return_timestamp_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__timestamp____Unify____maybe_return_timestamp_0_0_10001)),
  ((MR_Box) (libs__timestamp____Compare____maybe_return_timestamp_0_0_10001)),
  (MR_String) "libs.timestamp",
  (MR_String) "maybe_return_timestamp",
  { libs__timestamp__libs__timestamp__enum_name_ordered_maybe_return_timestamp_0 },
  { libs__timestamp__libs__timestamp__enum_ordinal_ordered_maybe_return_timestamp_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__timestamp__libs__timestamp__functor_number_map_maybe_return_timestamp_0,

};

static const MR_PseudoTypeInfo libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_0[1] = { (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_maybe_return_timestamp_0) };

static const MR_DuArgLocn libs__timestamp__libs__timestamp__field_locns_read_module_and_timestamps_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_0 = {
  (MR_String) "always_read_module",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_0,
  NULL,
  libs__timestamp__libs__timestamp__field_locns_read_module_and_timestamps_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_1[1] = { (MR_PseudoTypeInfo) (&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0) };

static const MR_DuFunctorDesc libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_1 = {
  (MR_String) "do_not_read_module_if_match",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_0[1] = { &libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_0 };

static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_1[1] = { &libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_1 };

static const MR_DuPtagLayout libs__timestamp__libs__timestamp__du_ptag_ordered_read_module_and_timestamps_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_name_ordered_read_module_and_timestamps_0[2] = {
  &libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_0,
  &libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_1
};

static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_read_module_and_timestamps_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__timestamp__libs__timestamp__type_ctor_info_read_module_and_timestamps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__timestamp____Unify____read_module_and_timestamps_0_0_10001)),
  ((MR_Box) (libs__timestamp____Compare____read_module_and_timestamps_0_0_10001)),
  (MR_String) "libs.timestamp",
  (MR_String) "read_module_and_timestamps",
  { libs__timestamp__libs__timestamp__du_name_ordered_read_module_and_timestamps_0 },
  { libs__timestamp__libs__timestamp__du_ptag_ordered_read_module_and_timestamps_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__timestamp__libs__timestamp__functor_number_map_read_module_and_timestamps_0,

};

static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_timestamp_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc libs__timestamp__libs__timestamp__notag_functor_desc_timestamp_0 = {
  (MR_String) "timestamp",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (libs__timestamp____Unify____timestamp_0_0_10001)),
  ((MR_Box) (libs__timestamp____Compare____timestamp_0_0_10001)),
  (MR_String) "libs.timestamp",
  (MR_String) "timestamp",
  { &libs__timestamp__libs__timestamp__notag_functor_desc_timestamp_0 },
  { &libs__timestamp__libs__timestamp__notag_functor_desc_timestamp_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  libs__timestamp__libs__timestamp__functor_number_map_timestamp_0,

};

void MR_CALL 
libs__timestamp____Compare____timestamp_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
libs__timestamp____Unify____timestamp_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
  return succeeded;
}

void MR_CALL 
libs__timestamp____Compare____read_module_and_timestamps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
      MR_Integer Var_14 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_15 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_14 < Var_15);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_14 > Var_15);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_String Var_12 = (MR_String) (ArgX1_6);
    MR_String Var_13 = (MR_String) (ArgY1_7);

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_12, Var_13);
  }
}

MR_bool MR_CALL 
libs__timestamp____Unify____read_module_and_timestamps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Integer CastX_11;
    MR_Integer CastY_12;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      CastX_11 = (MR_Integer) (ArgX1_5);
      CastY_12 = (MR_Integer) (ArgY1_6);
      succeeded = (CastX_11 == CastY_12);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_String ArgX1_9 = (MR_String) (ArgX1_5);
        MR_String ArgY1_10 = (MR_String) (ArgY1_6);

        succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
libs__timestamp____Compare____maybe_return_timestamp_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
libs__timestamp____Unify____maybe_return_timestamp_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
libs__timestamp__plausible_timestamp_char_1_p_0(
  MR_Char Char_2)
{
  MR_bool succeeded;
  MR_Integer CharInt_3;
  MR_Integer HighestInt_4;

  mercury__char__to_int_2_p_0(Char_2, &CharInt_3);
  mercury__char__to_int_2_p_0((MR_Char) 58, &HighestInt_4);
  succeeded = (CharInt_3 <= HighestInt_4);
  return succeeded;
}

static MR_String MR_CALL 
libs__timestamp__gmtime_to_timestamp_string_9_f_0(
  MR_Integer Yr_1,
  MR_Integer Mnt_2,
  MR_Integer MD_3,
  MR_Integer Hrs_4,
  MR_Integer Min_5,
  MR_Integer Sec_6,
  MR_Integer YD_7,
  MR_Integer WD_8,
  MR_Integer N_9)
{
  MR_String Result_10;

{
#define MR_PROC_LABEL libs__timestamp__gmtime_to_timestamp_string_9_f_0

	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;
	MR_String Result;

	Yr = Yr_1 ;
	Mnt = Mnt_2 ;
	MD = MD_3 ;
	Hrs = Hrs_4 ;
	Min = Min_5 ;
	Sec = Sec_6 ;
	YD = YD_7 ;
	WD = WD_8 ;
	N = N_9 ;
		{
{
    int size;
    struct tm t;

    t.tm_sec = (int) Sec;
    t.tm_min = (int) Min;
    t.tm_hour = (int) Hrs;
    t.tm_mon = (int) Mnt;
    t.tm_year = (int) Yr;
    t.tm_wday = (int) WD;
    t.tm_mday = (int) MD;
    t.tm_yday = (int) YD;
    t.tm_isdst = (int) N;

    size = sizeof "yyyy-mm-dd hh:mm:ss";
    MR_allocate_aligned_string_msg(Result, size - 1, MR_ALLOC_ID);

    strftime(Result, size, "%Y-%m-%d %H:%M:%S", &t);
}

		;}
#undef MR_PROC_LABEL
	Result_10  = Result;
}
  return Result_10;
}

static MR_bool MR_CALL 
libs__timestamp__parse_timestamp_string_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = libs__timestamp__plausible_timestamp_char_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  return succeeded;
}

MR_bool MR_CALL 
libs__timestamp__parse_timestamp_string_2_p_0(
  MR_String Timestamp_3,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer TimestampLength_4;
  MR_Integer ShouldBeTimestampLength_5;
  MR_Integer Month_7;
  MR_Integer Day_8;
  MR_Integer Hour_9;
  MR_Integer Minute_10;
  MR_Integer Second_11;
  MR_String Var_13;
  MR_String Var_14;
  MR_Integer Var_15;
  MR_Integer Var_16;
  MR_Integer Var_17;
  MR_Char Var_18;
  MR_String Var_19;
  MR_Integer Var_20;
  MR_Integer Var_21;
  MR_Integer Var_22;
  MR_Integer Var_23;
  MR_Integer Var_24;
  MR_Char Var_25;
  MR_String Var_26;
  MR_Integer Var_27;
  MR_Integer Var_28;
  MR_Integer Var_29;
  MR_Integer Var_30;
  MR_Integer Var_31;
  MR_Char Var_32;
  MR_String Var_33;
  MR_Integer Var_34;
  MR_Integer Var_35;
  MR_Integer Var_36;
  MR_Integer Var_37;
  MR_Integer Var_38;
  MR_Char Var_39;
  MR_String Var_40;
  MR_Integer Var_41;
  MR_Integer Var_42;
  MR_Integer Var_43;
  MR_Integer Var_44;
  MR_Integer Var_45;
  MR_Char Var_46;
  MR_String Var_47;
  MR_Integer Var_48;
  MR_Integer Var_49;
  MR_Integer Var_50;
  MR_Integer Var_51;
  MR_Char Var_53;
  MR_Char Var_54;
  MR_Char Var_55;
  MR_Char Var_56;
  MR_Char Var_57;
  MR_Integer Var_6;

  *HeadVar__2_2 = (MR_Word) (Timestamp_3);
  succeeded = mercury__string__all_match_2_p_0((MR_Word) (&libs__timestamp_scalar_common_2[0]), Timestamp_3);
  if (succeeded)
  {
    mercury__string__length_2_p_0(Timestamp_3, &TimestampLength_4);
    Var_13 = (MR_String) "yyyy-mm-dd hh:mm:ss";
    mercury__string__length_2_p_1(Var_13, &ShouldBeTimestampLength_5);
    succeeded = (TimestampLength_4 == ShouldBeTimestampLength_5);
    if (succeeded)
    {
      Var_15 = (MR_Integer) 0;
      Var_16 = (MR_Integer) 4;
      Var_14 = mercury__string__unsafe_between_3_f_0(Timestamp_3, Var_15, Var_16);
      succeeded = mercury__string__to_int_2_p_0(Var_14, &Var_6);
      if (succeeded)
      {
        Var_17 = (MR_Integer) 4;
        Var_18 = (MR_Char) 45;
        mercury__string__unsafe_index_3_p_0(Timestamp_3, Var_17, &Var_53);
        succeeded = (Var_18 == Var_53);
        if (succeeded)
        {
          Var_20 = (MR_Integer) 5;
          Var_21 = (MR_Integer) 7;
          Var_19 = mercury__string__unsafe_between_3_f_0(Timestamp_3, Var_20, Var_21);
          succeeded = mercury__string__to_int_2_p_0(Var_19, &Month_7);
          if (succeeded)
          {
            Var_22 = (MR_Integer) 1;
            succeeded = (Month_7 >= Var_22);
            if (succeeded)
            {
              Var_23 = (MR_Integer) 12;
              succeeded = (Month_7 <= Var_23);
              if (succeeded)
              {
                Var_24 = (MR_Integer) 7;
                Var_25 = (MR_Char) 45;
                mercury__string__unsafe_index_3_p_0(Timestamp_3, Var_24, &Var_54);
                succeeded = (Var_25 == Var_54);
                if (succeeded)
                {
                  Var_27 = (MR_Integer) 8;
                  Var_28 = (MR_Integer) 10;
                  Var_26 = mercury__string__unsafe_between_3_f_0(Timestamp_3, Var_27, Var_28);
                  succeeded = mercury__string__to_int_2_p_0(Var_26, &Day_8);
                  if (succeeded)
                  {
                    Var_29 = (MR_Integer) 1;
                    succeeded = (Day_8 >= Var_29);
                    if (succeeded)
                    {
                      Var_30 = (MR_Integer) 31;
                      succeeded = (Day_8 <= Var_30);
                      if (succeeded)
                      {
                        Var_31 = (MR_Integer) 10;
                        Var_32 = (MR_Char) 32;
                        mercury__string__unsafe_index_3_p_0(Timestamp_3, Var_31, &Var_55);
                        succeeded = (Var_32 == Var_55);
                        if (succeeded)
                        {
                          Var_34 = (MR_Integer) 11;
                          Var_35 = (MR_Integer) 13;
                          Var_33 = mercury__string__unsafe_between_3_f_0(Timestamp_3, Var_34, Var_35);
                          succeeded = mercury__string__to_int_2_p_0(Var_33, &Hour_9);
                          if (succeeded)
                          {
                            Var_36 = (MR_Integer) 0;
                            succeeded = (Hour_9 >= Var_36);
                            if (succeeded)
                            {
                              Var_37 = (MR_Integer) 23;
                              succeeded = (Hour_9 <= Var_37);
                              if (succeeded)
                              {
                                Var_38 = (MR_Integer) 13;
                                Var_39 = (MR_Char) 58;
                                mercury__string__unsafe_index_3_p_0(Timestamp_3, Var_38, &Var_56);
                                succeeded = (Var_39 == Var_56);
                                if (succeeded)
                                {
                                  Var_41 = (MR_Integer) 14;
                                  Var_42 = (MR_Integer) 16;
                                  Var_40 = mercury__string__unsafe_between_3_f_0(Timestamp_3, Var_41, Var_42);
                                  succeeded = mercury__string__to_int_2_p_0(Var_40, &Minute_10);
                                  if (succeeded)
                                  {
                                    Var_43 = (MR_Integer) 0;
                                    succeeded = (Minute_10 >= Var_43);
                                    if (succeeded)
                                    {
                                      Var_44 = (MR_Integer) 59;
                                      succeeded = (Minute_10 <= Var_44);
                                      if (succeeded)
                                      {
                                        Var_45 = (MR_Integer) 16;
                                        Var_46 = (MR_Char) 58;
                                        mercury__string__unsafe_index_3_p_0(Timestamp_3, Var_45, &Var_57);
                                        succeeded = (Var_46 == Var_57);
                                        if (succeeded)
                                        {
                                          Var_48 = (MR_Integer) 17;
                                          Var_49 = (MR_Integer) 19;
                                          Var_47 = mercury__string__unsafe_between_3_f_0(Timestamp_3, Var_48, Var_49);
                                          succeeded = mercury__string__to_int_2_p_0(Var_47, &Second_11);
                                          if (succeeded)
                                          {
                                            Var_50 = (MR_Integer) 0;
                                            succeeded = (Second_11 >= Var_50);
                                            if (succeeded)
                                            {
                                              Var_51 = (MR_Integer) 61;
                                              succeeded = (Second_11 <= Var_51);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_String MR_CALL 
libs__timestamp__timestamp_to_string_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String Timestamp_3 = (MR_String) (HeadVar__1_1);

  return Timestamp_3;
}

MR_Word MR_CALL 
libs__timestamp__time_t_to_timestamp_1_f_0(
  MR_Word Time_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;
  MR_Integer Year_5;
  MR_Integer Month_6;
  MR_Integer MD_7;
  MR_Integer Hrs_8;
  MR_Integer Min_9;
  MR_Integer Sec_10;
  MR_Integer YD_11;
  MR_Integer WD_12;
  MR_Word DST_13;
  MR_String Var_14;
  MR_Integer Var_15;

  Var_4 = mercury__time__gmtime_1_f_0(Time_3);
  Year_5 = ((MR_Integer) ((MR_hl_field(0, Var_4, 0))));
  Month_6 = ((MR_Integer) ((MR_hl_field(0, Var_4, 1))));
  MD_7 = ((MR_Integer) ((MR_hl_field(0, Var_4, 2))));
  Hrs_8 = ((MR_Integer) ((MR_hl_field(0, Var_4, 3))));
  Min_9 = ((MR_Integer) ((MR_hl_field(0, Var_4, 4))));
  Sec_10 = ((MR_Integer) ((MR_hl_field(0, Var_4, 5))));
  YD_11 = ((MR_Integer) ((MR_hl_field(0, Var_4, 6))));
  WD_12 = ((MR_Integer) ((MR_hl_field(0, Var_4, 7))));
  DST_13 = ((MR_Word) ((MR_hl_field(0, Var_4, 8))));
  if ((DST_13 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_15 = (MR_Integer) -1;
  else
  {
    MR_Word DST_16 = ((MR_Word) ((MR_hl_field(1, DST_13, 0))));

    switch (DST_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Var_15 = (MR_Integer) 1;
        break;
      case (MR_Integer) 0:
        Var_15 = (MR_Integer) 0;
        break;
    }
  }
{
#define MR_PROC_LABEL libs__timestamp__time_t_to_timestamp_1_f_0

	MR_Integer Yr;
	MR_Integer Mnt;
	MR_Integer MD;
	MR_Integer Hrs;
	MR_Integer Min;
	MR_Integer Sec;
	MR_Integer YD;
	MR_Integer WD;
	MR_Integer N;
	MR_String Result;

	Yr = Year_5 ;
	Mnt = Month_6 ;
	MD = MD_7 ;
	Hrs = Hrs_8 ;
	Min = Min_9 ;
	Sec = Sec_10 ;
	YD = YD_11 ;
	WD = WD_12 ;
	N = Var_15 ;
		{
{
    int size;
    struct tm t;

    t.tm_sec = (int) Sec;
    t.tm_min = (int) Min;
    t.tm_hour = (int) Hrs;
    t.tm_mon = (int) Mnt;
    t.tm_year = (int) Yr;
    t.tm_wday = (int) WD;
    t.tm_mday = (int) MD;
    t.tm_yday = (int) YD;
    t.tm_isdst = (int) N;

    size = sizeof "yyyy-mm-dd hh:mm:ss";
    MR_allocate_aligned_string_msg(Result, size - 1, MR_ALLOC_ID);

    strftime(Result, size, "%Y-%m-%d %H:%M:%S", &t);
}

		;}
#undef MR_PROC_LABEL
	Var_14  = Result;
}
  HeadVar__2_2 = (MR_Word) (Var_14);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
libs__timestamp__newest_timestamp_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_String) "9999-99-99 99:99:99")));
}

MR_Word MR_CALL 
libs__timestamp__oldest_timestamp_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_String) "0000-00-00 00:00:00")));
}

static MR_bool MR_CALL 
libs__timestamp____Unify____maybe_return_timestamp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__timestamp____Unify____maybe_return_timestamp_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__timestamp____Compare____maybe_return_timestamp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__timestamp____Compare____maybe_return_timestamp_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__timestamp____Unify____read_module_and_timestamps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__timestamp____Unify____read_module_and_timestamps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__timestamp____Compare____read_module_and_timestamps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__timestamp____Compare____read_module_and_timestamps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__timestamp____Unify____timestamp_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__timestamp____Unify____timestamp_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__timestamp____Compare____timestamp_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__timestamp____Compare____timestamp_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__timestamp__init(void)
{
}

void mercury__libs__timestamp__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&libs__timestamp__libs__timestamp__type_ctor_info_maybe_return_timestamp_0);
  MR_register_type_ctor_info(&libs__timestamp__libs__timestamp__type_ctor_info_read_module_and_timestamps_0);
  MR_register_type_ctor_info(&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0);
}

void mercury__libs__timestamp__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__timestamp__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module libs.timestamp.
