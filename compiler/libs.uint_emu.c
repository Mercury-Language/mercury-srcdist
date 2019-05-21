/*
** Automatically generated from `uint_emu.m'
** by the Mercury compiler,
** version rotd-2017-10-11
** configured for x86_64-pc-linux-gnu.
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


// :- module libs.uint_emu.
// :- implementation.

/*
INIT mercury__libs__uint_emu__init
ENDINIT
*/

#include "libs.uint_emu.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_Integer libs__uint_emu__libs__uint_emu__functor_number_map_bits_per_uint_0[1];

static const MR_NotagFunctorDesc libs__uint_emu__libs__uint_emu__notag_functor_desc_bits_per_uint_0;

static MR_bool MR_CALL 
libs__uint_emu____Unify____bits_per_uint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__uint_emu____Compare____bits_per_uint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_Integer libs__uint_emu__libs__uint_emu__functor_number_map_bits_per_uint_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc libs__uint_emu__libs__uint_emu__notag_functor_desc_bits_per_uint_0 = {
  (MR_String) "bits_per_uint",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct libs__uint_emu__libs__uint_emu__type_ctor_info_bits_per_uint_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (libs__uint_emu____Unify____bits_per_uint_0_0_10001)),
  ((MR_Box) (libs__uint_emu____Compare____bits_per_uint_0_0_10001)),
  (MR_String) "libs.uint_emu",
  (MR_String) "bits_per_uint",
  {     &libs__uint_emu__libs__uint_emu__notag_functor_desc_bits_per_uint_0 },
  {     &libs__uint_emu__libs__uint_emu__notag_functor_desc_bits_per_uint_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__uint_emu__libs__uint_emu__functor_number_map_bits_per_uint_0
};

void MR_CALL 
libs__uint_emu____Compare____bits_per_uint_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_7 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) HeadVar__2_2;
      MR_Integer ArgY1_5 = (MR_Integer) HeadVar__3_3;

      mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
libs__uint_emu____Unify____bits_per_uint_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer ArgY1_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__unchecked_right_shift_4_p_0(
  MR_Word BitsPerUInt_5,
  MR_Unsigned X_6,
  MR_Integer Y_7,
  MR_Unsigned * Z_8)
{
  {
    MR_bool succeeded;

    succeeded = libs__uint_emu__right_shift_4_p_0(BitsPerUInt_5, X_6, Y_7, Z_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__right_shift_4_p_0(
  MR_Word BitsPerUInt_5,
  MR_Unsigned X_6,
  MR_Integer Y_7,
  MR_Unsigned * Z_8)
{
  {
    MR_bool succeeded = (Y_7 >= (MR_Integer) 0);
    MR_Integer N_9 = (MR_Integer) BitsPerUInt_5;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Integer BitsPerUInt_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Integer Var_19;
    MR_Word Var_20;

    if (succeeded)
    {
      succeeded = (Y_7 < N_9);
      if (succeeded)
      {
        Var_12 = mercury__integer__from_uint_1_f_0(X_6);
        Var_11 = mercury__integer__f_62_62_2_f_0(Var_12, Y_7);
        BitsPerUInt_15 = (MR_Integer) BitsPerUInt_5;
        Var_16 = mercury__integer__zero_0_f_0();
        succeeded = mercury__integer__f_greater_or_equal_2_p_0(Var_11, Var_16);
        if (succeeded)
        {
          Var_19 = (MR_Integer) 2;
          Var_18 = mercury__integer__integer_1_f_0(Var_19);
          Var_20 = mercury__integer__integer_1_f_0(BitsPerUInt_15);
          Var_17 = mercury__integer__pow_2_f_0(Var_18, Var_20);
          succeeded = mercury__integer__f_less_or_equal_2_p_0(Var_11, Var_17);
          if (succeeded)
            succeeded = mercury__integer__to_uint_2_p_0(Var_11, Z_8);
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__unchecked_left_shift_4_p_0(
  MR_Word BitsPerUInt_5,
  MR_Unsigned X_6,
  MR_Integer Y_7,
  MR_Unsigned * Z_8)
{
  {
    MR_bool succeeded;

    succeeded = libs__uint_emu__left_shift_4_p_0(BitsPerUInt_5, X_6, Y_7, Z_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__left_shift_4_p_0(
  MR_Word BitsPerUInt_5,
  MR_Unsigned X_6,
  MR_Integer Y_7,
  MR_Unsigned * Z_8)
{
  {
    MR_bool succeeded = (Y_7 >= (MR_Integer) 0);
    MR_Integer N_9 = (MR_Integer) BitsPerUInt_5;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Integer BitsPerUInt_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Integer Var_19;
    MR_Word Var_20;

    if (succeeded)
    {
      succeeded = (Y_7 < N_9);
      if (succeeded)
      {
        Var_12 = mercury__integer__from_uint_1_f_0(X_6);
        Var_11 = mercury__integer__f_60_60_2_f_0(Var_12, Y_7);
        BitsPerUInt_15 = (MR_Integer) BitsPerUInt_5;
        Var_16 = mercury__integer__zero_0_f_0();
        succeeded = mercury__integer__f_greater_or_equal_2_p_0(Var_11, Var_16);
        if (succeeded)
        {
          Var_19 = (MR_Integer) 2;
          Var_18 = mercury__integer__integer_1_f_0(Var_19);
          Var_20 = mercury__integer__integer_1_f_0(BitsPerUInt_15);
          Var_17 = mercury__integer__pow_2_f_0(Var_18, Var_20);
          succeeded = mercury__integer__f_less_or_equal_2_p_0(Var_11, Var_17);
          if (succeeded)
            succeeded = mercury__integer__to_uint_2_p_0(Var_11, Z_8);
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__unchecked_rem_4_p_0(
  MR_Word BitsPerUInt_5,
  MR_Unsigned X_6,
  MR_Unsigned Y_7,
  MR_Unsigned * Z_8)
{
  {
    MR_bool succeeded = (Y_7 == 0U);

    succeeded = !(succeeded);
    if (succeeded)
      succeeded = libs__uint_emu__rem_4_p_0(BitsPerUInt_5, X_6, Y_7, Z_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__rem_4_p_0(
  MR_Word BitsPerUInt_5,
  MR_Unsigned X_6,
  MR_Unsigned Y_7,
  MR_Unsigned * Z_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer BitsPerUInt_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;
    MR_Word Var_19;

    Var_10 = mercury__integer__from_uint_1_f_0(X_6);
    Var_11 = mercury__integer__from_uint_1_f_0(Y_7);
    Var_9 = mercury__integer__rem_2_f_0(Var_10, Var_11);
    BitsPerUInt_14 = (MR_Integer) BitsPerUInt_5;
    Var_15 = mercury__integer__zero_0_f_0();
    succeeded = mercury__integer__f_greater_or_equal_2_p_0(Var_9, Var_15);
    if (succeeded)
    {
      Var_18 = (MR_Integer) 2;
      Var_17 = mercury__integer__integer_1_f_0(Var_18);
      Var_19 = mercury__integer__integer_1_f_0(BitsPerUInt_14);
      Var_16 = mercury__integer__pow_2_f_0(Var_17, Var_19);
      succeeded = mercury__integer__f_less_or_equal_2_p_0(Var_9, Var_16);
      if (succeeded)
        succeeded = mercury__integer__to_uint_2_p_0(Var_9, Z_8);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__mod_4_p_0(
  MR_Word BitsPerUInt_5,
  MR_Unsigned X_6,
  MR_Unsigned Y_7,
  MR_Unsigned * Z_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer BitsPerUInt_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;
    MR_Word Var_19;

    Var_10 = mercury__integer__from_uint_1_f_0(X_6);
    Var_11 = mercury__integer__from_uint_1_f_0(Y_7);
    Var_9 = mercury__integer__mod_2_f_0(Var_10, Var_11);
    BitsPerUInt_14 = (MR_Integer) BitsPerUInt_5;
    Var_15 = mercury__integer__zero_0_f_0();
    succeeded = mercury__integer__f_greater_or_equal_2_p_0(Var_9, Var_15);
    if (succeeded)
    {
      Var_18 = (MR_Integer) 2;
      Var_17 = mercury__integer__integer_1_f_0(Var_18);
      Var_19 = mercury__integer__integer_1_f_0(BitsPerUInt_14);
      Var_16 = mercury__integer__pow_2_f_0(Var_17, Var_19);
      succeeded = mercury__integer__f_less_or_equal_2_p_0(Var_9, Var_16);
      if (succeeded)
        succeeded = mercury__integer__to_uint_2_p_0(Var_9, Z_8);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__unchecked_quotient_4_p_0(
  MR_Word BitsPerUInt_5,
  MR_Unsigned X_6,
  MR_Unsigned Y_7,
  MR_Unsigned * Z_8)
{
  {
    MR_bool succeeded = (Y_7 == 0U);

    succeeded = !(succeeded);
    if (succeeded)
      succeeded = libs__uint_emu__quotient_4_p_0(BitsPerUInt_5, X_6, Y_7, Z_8);
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__quotient_4_p_0(
  MR_Word BitsPerUInt_5,
  MR_Unsigned X_6,
  MR_Unsigned Y_7,
  MR_Unsigned * Z_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer BitsPerUInt_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;
    MR_Word Var_19;

    Var_10 = mercury__integer__from_uint_1_f_0(X_6);
    Var_11 = mercury__integer__from_uint_1_f_0(Y_7);
    Var_9 = mercury__integer__f_47_47_2_f_0(Var_10, Var_11);
    BitsPerUInt_14 = (MR_Integer) BitsPerUInt_5;
    Var_15 = mercury__integer__zero_0_f_0();
    succeeded = mercury__integer__f_greater_or_equal_2_p_0(Var_9, Var_15);
    if (succeeded)
    {
      Var_18 = (MR_Integer) 2;
      Var_17 = mercury__integer__integer_1_f_0(Var_18);
      Var_19 = mercury__integer__integer_1_f_0(BitsPerUInt_14);
      Var_16 = mercury__integer__pow_2_f_0(Var_17, Var_19);
      succeeded = mercury__integer__f_less_or_equal_2_p_0(Var_9, Var_16);
      if (succeeded)
        succeeded = mercury__integer__to_uint_2_p_0(Var_9, Z_8);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__times_4_p_0(
  MR_Word BitsPerUInt_5,
  MR_Unsigned X_6,
  MR_Unsigned Y_7,
  MR_Unsigned * Z_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer BitsPerUInt_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;
    MR_Word Var_19;

    Var_10 = mercury__integer__from_uint_1_f_0(X_6);
    Var_11 = mercury__integer__from_uint_1_f_0(Y_7);
    Var_9 = mercury__integer__f_times_2_f_0(Var_10, Var_11);
    BitsPerUInt_14 = (MR_Integer) BitsPerUInt_5;
    Var_15 = mercury__integer__zero_0_f_0();
    succeeded = mercury__integer__f_greater_or_equal_2_p_0(Var_9, Var_15);
    if (succeeded)
    {
      Var_18 = (MR_Integer) 2;
      Var_17 = mercury__integer__integer_1_f_0(Var_18);
      Var_19 = mercury__integer__integer_1_f_0(BitsPerUInt_14);
      Var_16 = mercury__integer__pow_2_f_0(Var_17, Var_19);
      succeeded = mercury__integer__f_less_or_equal_2_p_0(Var_9, Var_16);
      if (succeeded)
        succeeded = mercury__integer__to_uint_2_p_0(Var_9, Z_8);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__minus_4_p_0(
  MR_Word BitsPerUInt_5,
  MR_Unsigned X_6,
  MR_Unsigned Y_7,
  MR_Unsigned * Z_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer BitsPerUInt_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;
    MR_Word Var_19;

    Var_10 = mercury__integer__from_uint_1_f_0(X_6);
    Var_11 = mercury__integer__from_uint_1_f_0(Y_7);
    Var_9 = mercury__integer__f_minus_2_f_0(Var_10, Var_11);
    BitsPerUInt_14 = (MR_Integer) BitsPerUInt_5;
    Var_15 = mercury__integer__zero_0_f_0();
    succeeded = mercury__integer__f_greater_or_equal_2_p_0(Var_9, Var_15);
    if (succeeded)
    {
      Var_18 = (MR_Integer) 2;
      Var_17 = mercury__integer__integer_1_f_0(Var_18);
      Var_19 = mercury__integer__integer_1_f_0(BitsPerUInt_14);
      Var_16 = mercury__integer__pow_2_f_0(Var_17, Var_19);
      succeeded = mercury__integer__f_less_or_equal_2_p_0(Var_9, Var_16);
      if (succeeded)
        succeeded = mercury__integer__to_uint_2_p_0(Var_9, Z_8);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__plus_4_p_0(
  MR_Word BitsPerUInt_5,
  MR_Unsigned X_6,
  MR_Unsigned Y_7,
  MR_Unsigned * Z_8)
{
  {
    MR_bool succeeded;
    MR_Word Var_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer BitsPerUInt_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;
    MR_Word Var_19;

    Var_10 = mercury__integer__from_uint_1_f_0(X_6);
    Var_11 = mercury__integer__from_uint_1_f_0(Y_7);
    Var_9 = mercury__integer__f_plus_2_f_0(Var_10, Var_11);
    BitsPerUInt_14 = (MR_Integer) BitsPerUInt_5;
    Var_15 = mercury__integer__zero_0_f_0();
    succeeded = mercury__integer__f_greater_or_equal_2_p_0(Var_9, Var_15);
    if (succeeded)
    {
      Var_18 = (MR_Integer) 2;
      Var_17 = mercury__integer__integer_1_f_0(Var_18);
      Var_19 = mercury__integer__integer_1_f_0(BitsPerUInt_14);
      Var_16 = mercury__integer__pow_2_f_0(Var_17, Var_19);
      succeeded = mercury__integer__f_less_or_equal_2_p_0(Var_9, Var_16);
      if (succeeded)
        succeeded = mercury__integer__to_uint_2_p_0(Var_9, Z_8);
    }
    return succeeded;
  }
}

void MR_CALL 
libs__uint_emu__target_bits_per_uint_2_p_0(
  MR_Word Globals_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Integer BitsPerUInt_4;
    MR_Word Target_5;

    libs__globals__get_target_2_p_0(Globals_3, &Target_5);
    switch (Target_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__globals__lookup_int_option_3_p_0(Globals_3, (MR_Integer) 251, &BitsPerUInt_4);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        BitsPerUInt_4 = (MR_Integer) 32;
        break;
    }
    *HeadVar__2_2 = (MR_Word) BitsPerUInt_4;
  }
}

static MR_bool MR_CALL 
libs__uint_emu____Unify____bits_per_uint_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__uint_emu____Unify____bits_per_uint_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
libs__uint_emu____Compare____bits_per_uint_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__uint_emu____Compare____bits_per_uint_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__libs__uint_emu__init(void)
{
}

void mercury__libs__uint_emu__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__uint_emu__libs__uint_emu__type_ctor_info_bits_per_uint_0);
}

void mercury__libs__uint_emu__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__uint_emu__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.uint_emu.
