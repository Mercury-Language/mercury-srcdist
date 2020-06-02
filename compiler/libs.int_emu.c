/*
** Automatically generated from `int_emu.m'
** by the Mercury compiler,
** version rotd-2020-06-02
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


// :- module libs.int_emu.
// :- implementation.

/*
INIT mercury__libs__int_emu__init
ENDINIT
*/

#include "libs.int_emu.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.sym_name.mih"




static const MR_Integer libs__int_emu__libs__int_emu__functor_number_map_bits_per_int_0[1];

static const MR_NotagFunctorDesc libs__int_emu__libs__int_emu__notag_functor_desc_bits_per_int_0;

static MR_bool MR_CALL 
libs__int_emu__to_int_in_range_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Integer_5,
  MR_Integer * Int_6);

static MR_bool MR_CALL 
libs__int_emu____Unify____bits_per_int_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__int_emu____Compare____bits_per_int_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_Integer libs__int_emu__libs__int_emu__functor_number_map_bits_per_int_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc libs__int_emu__libs__int_emu__notag_functor_desc_bits_per_int_0 = {
  (MR_String) "bits_per_int",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct libs__int_emu__libs__int_emu__type_ctor_info_bits_per_int_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (libs__int_emu____Unify____bits_per_int_0_0_10001)),
  ((MR_Box) (libs__int_emu____Compare____bits_per_int_0_0_10001)),
  (MR_String) "libs.int_emu",
  (MR_String) "bits_per_int",
  {     &libs__int_emu__libs__int_emu__notag_functor_desc_bits_per_int_0 },
  {     &libs__int_emu__libs__int_emu__notag_functor_desc_bits_per_int_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  libs__int_emu__libs__int_emu__functor_number_map_bits_per_int_0
};

void MR_CALL 
libs__int_emu____Compare____bits_per_int_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
      MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
libs__int_emu____Unify____bits_per_int_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__rem_bits_per_int_3_p_0(
  MR_Integer X_4,
  MR_Word BitsPerInt_5,
  MR_Integer * Z_6)
{
  {
    MR_bool succeeded;
    MR_Integer Y_7 = (MR_Integer) (BitsPerInt_5);
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;

    Var_13 = mercury__integer__integer_1_f_0(X_4);
    Var_14 = mercury__integer__integer_1_f_0(Y_7);
    Var_12 = mercury__integer__rem_2_f_0(Var_13, Var_14);
    succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_12, Z_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__times_bits_per_int_3_p_0(
  MR_Integer X_4,
  MR_Word BitsPerInt_5,
  MR_Integer * Z_6)
{
  {
    MR_bool succeeded;
    MR_Integer Y_7 = (MR_Integer) (BitsPerInt_5);
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;

    Var_13 = mercury__integer__integer_1_f_0(X_4);
    Var_14 = mercury__integer__integer_1_f_0(Y_7);
    Var_12 = mercury__integer__f_times_2_f_0(Var_13, Var_14);
    succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_12, Z_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__quot_bits_per_int_3_p_0(
  MR_Integer X_4,
  MR_Word BitsPerInt_5,
  MR_Integer * Z_6)
{
  {
    MR_bool succeeded;
    MR_Integer Y_7 = (MR_Integer) (BitsPerInt_5);
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;

    Var_13 = mercury__integer__integer_1_f_0(X_4);
    Var_14 = mercury__integer__integer_1_f_0(Y_7);
    Var_12 = mercury__integer__f_47_47_2_f_0(Var_13, Var_14);
    succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_12, Z_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__floor_to_multiple_of_bits_per_int_3_p_0(
  MR_Integer X_4,
  MR_Word BitsPerInt_5,
  MR_Integer * FloorInt_6)
{
  {
    MR_bool succeeded;
    MR_Integer N_7 = (MR_Integer) (BitsPerInt_5);
    MR_Word Trunc_8;
    MR_Word Floor0_9;
    MR_Word Floor_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;

    Var_11 = mercury__integer__integer_1_f_0(X_4);
    Var_12 = mercury__integer__integer_1_f_0(N_7);
    Trunc_8 = mercury__integer__f_47_47_2_f_0(Var_11, Var_12);
    Var_13 = mercury__integer__integer_1_f_0(N_7);
    Floor0_9 = mercury__integer__f_times_2_f_0(Trunc_8, Var_13);
    Var_14 = mercury__integer__integer_1_f_0(X_4);
    succeeded = mercury__integer__f_greater_than_2_p_0(Floor0_9, Var_14);
    if (succeeded)
    {
      MR_Word Var_15;

      Var_15 = mercury__integer__integer_1_f_0(N_7);
      Floor_10 = mercury__integer__f_minus_2_f_0(Floor0_9, Var_15);
    }
    else
      Floor_10 = Floor0_9;
    succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Floor_10, FloorInt_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__unchecked_right_shift_4_p_0(
  MR_Word BitsPerInt_5,
  MR_Integer X_6,
  MR_Integer Y_7,
  MR_Integer * Z_8)
{
  {
    MR_bool succeeded = (Y_7 >= (MR_Integer) 0);
    MR_Integer N_9 = (MR_Integer) (BitsPerInt_5);

    if (succeeded)
    {
      succeeded = (Y_7 < N_9);
      if (succeeded)
        succeeded = libs__int_emu__right_shift_4_p_0(BitsPerInt_5, X_6, Y_7, Z_8);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__right_shift_4_p_0(
  MR_Word BitsPerInt_5,
  MR_Integer X_6,
  MR_Integer Y_7,
  MR_Integer * Z_8)
{
  {
    MR_bool succeeded = (Y_7 < (MR_Integer) 0);

    if (succeeded)
    {
      MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Y_7);
      MR_Integer N_17 = (MR_Integer) (BitsPerInt_5);
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Integer Var_20;

      Var_19 = mercury__integer__integer_1_f_0(X_6);
      Var_20 = mercury__int__min_2_f_0(Var_10, N_17);
      Var_18 = mercury__integer__f_60_60_2_f_0(Var_19, Var_20);
      succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_18, Z_8);
    }
    else
    {
      MR_Word Var_11;
      MR_Word Var_12;

      Var_12 = mercury__integer__integer_1_f_0(X_6);
      Var_11 = mercury__integer__f_62_62_2_f_0(Var_12, Y_7);
      succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_11, Z_8);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__unchecked_left_shift_4_p_0(
  MR_Word BitsPerInt_5,
  MR_Integer X_6,
  MR_Integer Y_7,
  MR_Integer * Z_8)
{
  {
    MR_bool succeeded = (Y_7 >= (MR_Integer) 0);
    MR_Integer N_15 = (MR_Integer) (BitsPerInt_5);
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;

    if (succeeded)
    {
      succeeded = (Y_7 < N_15);
      if (succeeded)
      {
        Var_17 = mercury__integer__integer_1_f_0(X_6);
        Var_18 = mercury__int__min_2_f_0(Y_7, N_15);
        Var_16 = mercury__integer__f_60_60_2_f_0(Var_17, Var_18);
        succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_16, Z_8);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__left_shift_4_p_0(
  MR_Word BitsPerInt_5,
  MR_Integer X_6,
  MR_Integer Y_7,
  MR_Integer * Z_8)
{
  {
    MR_bool succeeded;
    MR_Integer N_9 = (MR_Integer) (BitsPerInt_5);
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer Var_12;

    Var_11 = mercury__integer__integer_1_f_0(X_6);
    Var_12 = mercury__int__min_2_f_0(Y_7, N_9);
    Var_10 = mercury__integer__f_60_60_2_f_0(Var_11, Var_12);
    succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_10, Z_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__unchecked_rem_4_p_0(
  MR_Word BitsPerInt_5,
  MR_Integer X_6,
  MR_Integer Y_7,
  MR_Integer * Z_8)
{
  {
    MR_bool succeeded = (Y_7 != (MR_Integer) 0);
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;

    if (succeeded)
    {
      Var_14 = mercury__integer__integer_1_f_0(X_6);
      Var_15 = mercury__integer__integer_1_f_0(Y_7);
      Var_13 = mercury__integer__rem_2_f_0(Var_14, Var_15);
      succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_13, Z_8);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__rem_4_p_0(
  MR_Word BitsPerInt_5,
  MR_Integer X_6,
  MR_Integer Y_7,
  MR_Integer * Z_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    Var_10 = mercury__integer__integer_1_f_0(X_6);
    Var_11 = mercury__integer__integer_1_f_0(Y_7);
    Var_9 = mercury__integer__rem_2_f_0(Var_10, Var_11);
    succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_9, Z_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__mod_4_p_0(
  MR_Word BitsPerInt_5,
  MR_Integer X_6,
  MR_Integer Y_7,
  MR_Integer * Z_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    Var_10 = mercury__integer__integer_1_f_0(X_6);
    Var_11 = mercury__integer__integer_1_f_0(Y_7);
    Var_9 = mercury__integer__mod_2_f_0(Var_10, Var_11);
    succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_9, Z_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__unchecked_quotient_4_p_0(
  MR_Word BitsPerInt_5,
  MR_Integer X_6,
  MR_Integer Y_7,
  MR_Integer * Z_8)
{
  {
    MR_bool succeeded = (Y_7 != (MR_Integer) 0);
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;

    if (succeeded)
    {
      Var_14 = mercury__integer__integer_1_f_0(X_6);
      Var_15 = mercury__integer__integer_1_f_0(Y_7);
      Var_13 = mercury__integer__f_47_47_2_f_0(Var_14, Var_15);
      succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_13, Z_8);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__quotient_4_p_0(
  MR_Word BitsPerInt_5,
  MR_Integer X_6,
  MR_Integer Y_7,
  MR_Integer * Z_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    Var_10 = mercury__integer__integer_1_f_0(X_6);
    Var_11 = mercury__integer__integer_1_f_0(Y_7);
    Var_9 = mercury__integer__f_47_47_2_f_0(Var_10, Var_11);
    succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_9, Z_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__times_4_p_0(
  MR_Word BitsPerInt_5,
  MR_Integer X_6,
  MR_Integer Y_7,
  MR_Integer * Z_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    Var_10 = mercury__integer__integer_1_f_0(X_6);
    Var_11 = mercury__integer__integer_1_f_0(Y_7);
    Var_9 = mercury__integer__f_times_2_f_0(Var_10, Var_11);
    succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_9, Z_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__minus_4_p_0(
  MR_Word BitsPerInt_5,
  MR_Integer X_6,
  MR_Integer Y_7,
  MR_Integer * Z_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    Var_10 = mercury__integer__integer_1_f_0(X_6);
    Var_11 = mercury__integer__integer_1_f_0(Y_7);
    Var_9 = mercury__integer__f_minus_2_f_0(Var_10, Var_11);
    succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_9, Z_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__int_emu__plus_4_p_0(
  MR_Word BitsPerInt_5,
  MR_Integer X_6,
  MR_Integer Y_7,
  MR_Integer * Z_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;

    Var_10 = mercury__integer__integer_1_f_0(X_6);
    Var_11 = mercury__integer__integer_1_f_0(Y_7);
    Var_9 = mercury__integer__f_plus_2_f_0(Var_10, Var_11);
    succeeded = libs__int_emu__to_int_in_range_3_p_0(BitsPerInt_5, Var_9, Z_8);
    return succeeded;
  }
}

static MR_bool MR_CALL 
libs__int_emu__to_int_in_range_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Integer_5,
  MR_Integer * Int_6)
{
  {
    MR_bool succeeded;
    MR_Integer BitsPerInt_4 = (MR_Integer) (HeadVar__1_1);
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Word Var_11;
    MR_Integer Var_12;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Integer Var_17;
    MR_Word Var_18;
    MR_Integer Var_19;
    MR_Integer Var_20;
    MR_Word Var_21;

    Var_9 = mercury__integer__integer_1_f_0((MR_Integer) 2);
    Var_12 = (MR_Integer) ((MR_Unsigned) BitsPerInt_4 - (MR_Unsigned) 1);
    Var_11 = mercury__integer__integer_1_f_0(Var_12);
    Var_8 = mercury__integer__pow_2_f_0(Var_9, Var_11);
    Var_7 = mercury__integer__f_minus_1_f_0(Var_8);
    succeeded = mercury__integer__f_greater_or_equal_2_p_0(Integer_5, Var_7);
    if (succeeded)
    {
      Var_17 = (MR_Integer) 2;
      Var_16 = mercury__integer__integer_1_f_0(Var_17);
      Var_20 = (MR_Integer) 1;
      Var_19 = (MR_Integer) ((MR_Unsigned) BitsPerInt_4 - (MR_Unsigned) Var_20);
      Var_18 = mercury__integer__integer_1_f_0(Var_19);
      Var_15 = mercury__integer__pow_2_f_0(Var_16, Var_18);
      Var_21 = mercury__integer__one_0_f_0();
      Var_14 = mercury__integer__f_minus_2_f_0(Var_15, Var_21);
      succeeded = mercury__integer__f_less_or_equal_2_p_0(Integer_5, Var_14);
      if (succeeded)
        succeeded = mercury__integer__to_int_2_p_0(Integer_5, Int_6);
    }
    return succeeded;
  }
}

void MR_CALL 
libs__int_emu__target_bits_per_int_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Integer BitsPerInt_4;
    MR_Word Target_5;

    libs__globals__get_target_2_p_0(Globals_3, &Target_5);
    switch (Target_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 264, &BitsPerInt_4);
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        BitsPerInt_4 = (MR_Integer) 32;
        break;
    }
    *HeadVar__2_2 = (MR_Word) (BitsPerInt_4);
  }
}

static MR_bool MR_CALL 
libs__int_emu____Unify____bits_per_int_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__int_emu____Unify____bits_per_int_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__int_emu____Compare____bits_per_int_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__int_emu____Compare____bits_per_int_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__libs__int_emu__init(void)
{
}

void mercury__libs__int_emu__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__int_emu__libs__int_emu__type_ctor_info_bits_per_int_0);
}

void mercury__libs__int_emu__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__int_emu__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.int_emu.
