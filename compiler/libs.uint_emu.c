/*
** Automatically generated from `uint_emu.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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


/* :- module libs.uint_emu. */
/* :- implementation. */

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
  MR_Box libs__uint_emu__wrapper_arg_1,
  MR_Box libs__uint_emu__wrapper_arg_2);

static void MR_CALL 
libs__uint_emu____Compare____bits_per_uint_0_0_10001(
  MR_Box * libs__uint_emu__wrapper_arg_1,
  MR_Box libs__uint_emu__wrapper_arg_2,
  MR_Box libs__uint_emu__wrapper_arg_3);







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
  MR_Word * libs__uint_emu__HeadVar__1_1,
  MR_Word libs__uint_emu__HeadVar__2_2,
  MR_Word libs__uint_emu__HeadVar__3_3)
{
  {
    MR_bool libs__uint_emu__succeeded;
    MR_Integer libs__uint_emu__CastX_6 = (MR_Integer) libs__uint_emu__HeadVar__2_2;
    MR_Integer libs__uint_emu__CastY_7 = (MR_Integer) libs__uint_emu__HeadVar__3_3;

    libs__uint_emu__succeeded = (libs__uint_emu__CastX_6 == libs__uint_emu__CastY_7);
    if (libs__uint_emu__succeeded)
      *libs__uint_emu__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer libs__uint_emu__ArgX1_4 = (MR_Integer) libs__uint_emu__HeadVar__2_2;
      MR_Integer libs__uint_emu__ArgY1_5 = (MR_Integer) libs__uint_emu__HeadVar__3_3;

      mercury__private_builtin__builtin_compare_int_3_p_0(libs__uint_emu__HeadVar__1_1, libs__uint_emu__ArgX1_4, libs__uint_emu__ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
libs__uint_emu____Unify____bits_per_uint_0_0(
  MR_Word libs__uint_emu__HeadVar__1_1,
  MR_Word libs__uint_emu__HeadVar__2_2)
{
  {
    MR_bool libs__uint_emu__succeeded;
    MR_Integer libs__uint_emu__CastX_5 = (MR_Integer) libs__uint_emu__HeadVar__1_1;
    MR_Integer libs__uint_emu__CastY_6 = (MR_Integer) libs__uint_emu__HeadVar__2_2;

    libs__uint_emu__succeeded = (libs__uint_emu__CastX_5 == libs__uint_emu__CastY_6);
    if (libs__uint_emu__succeeded)
      libs__uint_emu__succeeded = MR_TRUE;
    else
    {
      MR_Integer libs__uint_emu__ArgX1_3 = (MR_Integer) libs__uint_emu__HeadVar__1_1;
      MR_Integer libs__uint_emu__ArgY1_4 = (MR_Integer) libs__uint_emu__HeadVar__2_2;

      libs__uint_emu__succeeded = (libs__uint_emu__ArgX1_3 == libs__uint_emu__ArgY1_4);
    }
    return libs__uint_emu__succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__unchecked_right_shift_4_p_0(
  MR_Word libs__uint_emu__BitsPerUInt_5,
  MR_Unsigned libs__uint_emu__X_6,
  MR_Integer libs__uint_emu__Y_7,
  MR_Unsigned * libs__uint_emu__Z_8)
{
  {
    MR_bool libs__uint_emu__succeeded;

    libs__uint_emu__succeeded = libs__uint_emu__right_shift_4_p_0(libs__uint_emu__BitsPerUInt_5, libs__uint_emu__X_6, libs__uint_emu__Y_7, libs__uint_emu__Z_8);
    return libs__uint_emu__succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__right_shift_4_p_0(
  MR_Word libs__uint_emu__BitsPerUInt_5,
  MR_Unsigned libs__uint_emu__X_6,
  MR_Integer libs__uint_emu__Y_7,
  MR_Unsigned * libs__uint_emu__Z_8)
{
  {
    MR_bool libs__uint_emu__succeeded = (libs__uint_emu__Y_7 >= (MR_Integer) 0);
    MR_Integer libs__uint_emu__N_9 = (MR_Integer) libs__uint_emu__BitsPerUInt_5;
    MR_Word libs__uint_emu__Var_11;
    MR_Word libs__uint_emu__Var_12;
    MR_Integer libs__uint_emu__BitsPerUInt_15;
    MR_Word libs__uint_emu__Var_16;
    MR_Word libs__uint_emu__Var_17;
    MR_Word libs__uint_emu__Var_18;
    MR_Integer libs__uint_emu__Var_19;
    MR_Word libs__uint_emu__Var_20;

    if (libs__uint_emu__succeeded)
    {
      libs__uint_emu__succeeded = (libs__uint_emu__Y_7 < libs__uint_emu__N_9);
      if (libs__uint_emu__succeeded)
      {
        libs__uint_emu__Var_12 = mercury__integer__from_uint_1_f_0(libs__uint_emu__X_6);
        libs__uint_emu__Var_11 = mercury__integer__f_62_62_2_f_0(libs__uint_emu__Var_12, libs__uint_emu__Y_7);
        libs__uint_emu__BitsPerUInt_15 = (MR_Integer) libs__uint_emu__BitsPerUInt_5;
        libs__uint_emu__Var_16 = mercury__integer__zero_0_f_0();
        libs__uint_emu__succeeded = mercury__integer__f_greater_or_equal_2_p_0(libs__uint_emu__Var_11, libs__uint_emu__Var_16);
        if (libs__uint_emu__succeeded)
        {
          libs__uint_emu__Var_19 = (MR_Integer) 2;
          libs__uint_emu__Var_18 = mercury__integer__integer_1_f_0(libs__uint_emu__Var_19);
          libs__uint_emu__Var_20 = mercury__integer__integer_1_f_0(libs__uint_emu__BitsPerUInt_15);
          libs__uint_emu__Var_17 = mercury__integer__pow_2_f_0(libs__uint_emu__Var_18, libs__uint_emu__Var_20);
          libs__uint_emu__succeeded = mercury__integer__f_less_or_equal_2_p_0(libs__uint_emu__Var_11, libs__uint_emu__Var_17);
          if (libs__uint_emu__succeeded)
            libs__uint_emu__succeeded = mercury__integer__to_uint_2_p_0(libs__uint_emu__Var_11, libs__uint_emu__Z_8);
        }
      }
    }
    return libs__uint_emu__succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__unchecked_left_shift_4_p_0(
  MR_Word libs__uint_emu__BitsPerUInt_5,
  MR_Unsigned libs__uint_emu__X_6,
  MR_Integer libs__uint_emu__Y_7,
  MR_Unsigned * libs__uint_emu__Z_8)
{
  {
    MR_bool libs__uint_emu__succeeded;

    libs__uint_emu__succeeded = libs__uint_emu__left_shift_4_p_0(libs__uint_emu__BitsPerUInt_5, libs__uint_emu__X_6, libs__uint_emu__Y_7, libs__uint_emu__Z_8);
    return libs__uint_emu__succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__left_shift_4_p_0(
  MR_Word libs__uint_emu__BitsPerUInt_5,
  MR_Unsigned libs__uint_emu__X_6,
  MR_Integer libs__uint_emu__Y_7,
  MR_Unsigned * libs__uint_emu__Z_8)
{
  {
    MR_bool libs__uint_emu__succeeded = (libs__uint_emu__Y_7 >= (MR_Integer) 0);
    MR_Integer libs__uint_emu__N_9 = (MR_Integer) libs__uint_emu__BitsPerUInt_5;
    MR_Word libs__uint_emu__Var_11;
    MR_Word libs__uint_emu__Var_12;
    MR_Integer libs__uint_emu__BitsPerUInt_15;
    MR_Word libs__uint_emu__Var_16;
    MR_Word libs__uint_emu__Var_17;
    MR_Word libs__uint_emu__Var_18;
    MR_Integer libs__uint_emu__Var_19;
    MR_Word libs__uint_emu__Var_20;

    if (libs__uint_emu__succeeded)
    {
      libs__uint_emu__succeeded = (libs__uint_emu__Y_7 < libs__uint_emu__N_9);
      if (libs__uint_emu__succeeded)
      {
        libs__uint_emu__Var_12 = mercury__integer__from_uint_1_f_0(libs__uint_emu__X_6);
        libs__uint_emu__Var_11 = mercury__integer__f_60_60_2_f_0(libs__uint_emu__Var_12, libs__uint_emu__Y_7);
        libs__uint_emu__BitsPerUInt_15 = (MR_Integer) libs__uint_emu__BitsPerUInt_5;
        libs__uint_emu__Var_16 = mercury__integer__zero_0_f_0();
        libs__uint_emu__succeeded = mercury__integer__f_greater_or_equal_2_p_0(libs__uint_emu__Var_11, libs__uint_emu__Var_16);
        if (libs__uint_emu__succeeded)
        {
          libs__uint_emu__Var_19 = (MR_Integer) 2;
          libs__uint_emu__Var_18 = mercury__integer__integer_1_f_0(libs__uint_emu__Var_19);
          libs__uint_emu__Var_20 = mercury__integer__integer_1_f_0(libs__uint_emu__BitsPerUInt_15);
          libs__uint_emu__Var_17 = mercury__integer__pow_2_f_0(libs__uint_emu__Var_18, libs__uint_emu__Var_20);
          libs__uint_emu__succeeded = mercury__integer__f_less_or_equal_2_p_0(libs__uint_emu__Var_11, libs__uint_emu__Var_17);
          if (libs__uint_emu__succeeded)
            libs__uint_emu__succeeded = mercury__integer__to_uint_2_p_0(libs__uint_emu__Var_11, libs__uint_emu__Z_8);
        }
      }
    }
    return libs__uint_emu__succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__unchecked_rem_4_p_0(
  MR_Word libs__uint_emu__BitsPerUInt_5,
  MR_Unsigned libs__uint_emu__X_6,
  MR_Unsigned libs__uint_emu__Y_7,
  MR_Unsigned * libs__uint_emu__Z_8)
{
  {
    MR_bool libs__uint_emu__succeeded = (libs__uint_emu__Y_7 == 0U);

    libs__uint_emu__succeeded = !(libs__uint_emu__succeeded);
    if (libs__uint_emu__succeeded)
      libs__uint_emu__succeeded = libs__uint_emu__rem_4_p_0(libs__uint_emu__BitsPerUInt_5, libs__uint_emu__X_6, libs__uint_emu__Y_7, libs__uint_emu__Z_8);
    return libs__uint_emu__succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__rem_4_p_0(
  MR_Word libs__uint_emu__BitsPerUInt_5,
  MR_Unsigned libs__uint_emu__X_6,
  MR_Unsigned libs__uint_emu__Y_7,
  MR_Unsigned * libs__uint_emu__Z_8)
{
  {
    MR_bool libs__uint_emu__succeeded;
    MR_Word libs__uint_emu__Var_9;
    MR_Word libs__uint_emu__Var_10;
    MR_Word libs__uint_emu__Var_11;
    MR_Integer libs__uint_emu__BitsPerUInt_14;
    MR_Word libs__uint_emu__Var_15;
    MR_Word libs__uint_emu__Var_16;
    MR_Word libs__uint_emu__Var_17;
    MR_Integer libs__uint_emu__Var_18;
    MR_Word libs__uint_emu__Var_19;

    libs__uint_emu__Var_10 = mercury__integer__from_uint_1_f_0(libs__uint_emu__X_6);
    libs__uint_emu__Var_11 = mercury__integer__from_uint_1_f_0(libs__uint_emu__Y_7);
    libs__uint_emu__Var_9 = mercury__integer__rem_2_f_0(libs__uint_emu__Var_10, libs__uint_emu__Var_11);
    libs__uint_emu__BitsPerUInt_14 = (MR_Integer) libs__uint_emu__BitsPerUInt_5;
    libs__uint_emu__Var_15 = mercury__integer__zero_0_f_0();
    libs__uint_emu__succeeded = mercury__integer__f_greater_or_equal_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Var_15);
    if (libs__uint_emu__succeeded)
    {
      libs__uint_emu__Var_18 = (MR_Integer) 2;
      libs__uint_emu__Var_17 = mercury__integer__integer_1_f_0(libs__uint_emu__Var_18);
      libs__uint_emu__Var_19 = mercury__integer__integer_1_f_0(libs__uint_emu__BitsPerUInt_14);
      libs__uint_emu__Var_16 = mercury__integer__pow_2_f_0(libs__uint_emu__Var_17, libs__uint_emu__Var_19);
      libs__uint_emu__succeeded = mercury__integer__f_less_or_equal_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Var_16);
      if (libs__uint_emu__succeeded)
        libs__uint_emu__succeeded = mercury__integer__to_uint_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Z_8);
    }
    return libs__uint_emu__succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__mod_4_p_0(
  MR_Word libs__uint_emu__BitsPerUInt_5,
  MR_Unsigned libs__uint_emu__X_6,
  MR_Unsigned libs__uint_emu__Y_7,
  MR_Unsigned * libs__uint_emu__Z_8)
{
  {
    MR_bool libs__uint_emu__succeeded;
    MR_Word libs__uint_emu__Var_9;
    MR_Word libs__uint_emu__Var_10;
    MR_Word libs__uint_emu__Var_11;
    MR_Integer libs__uint_emu__BitsPerUInt_14;
    MR_Word libs__uint_emu__Var_15;
    MR_Word libs__uint_emu__Var_16;
    MR_Word libs__uint_emu__Var_17;
    MR_Integer libs__uint_emu__Var_18;
    MR_Word libs__uint_emu__Var_19;

    libs__uint_emu__Var_10 = mercury__integer__from_uint_1_f_0(libs__uint_emu__X_6);
    libs__uint_emu__Var_11 = mercury__integer__from_uint_1_f_0(libs__uint_emu__Y_7);
    libs__uint_emu__Var_9 = mercury__integer__mod_2_f_0(libs__uint_emu__Var_10, libs__uint_emu__Var_11);
    libs__uint_emu__BitsPerUInt_14 = (MR_Integer) libs__uint_emu__BitsPerUInt_5;
    libs__uint_emu__Var_15 = mercury__integer__zero_0_f_0();
    libs__uint_emu__succeeded = mercury__integer__f_greater_or_equal_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Var_15);
    if (libs__uint_emu__succeeded)
    {
      libs__uint_emu__Var_18 = (MR_Integer) 2;
      libs__uint_emu__Var_17 = mercury__integer__integer_1_f_0(libs__uint_emu__Var_18);
      libs__uint_emu__Var_19 = mercury__integer__integer_1_f_0(libs__uint_emu__BitsPerUInt_14);
      libs__uint_emu__Var_16 = mercury__integer__pow_2_f_0(libs__uint_emu__Var_17, libs__uint_emu__Var_19);
      libs__uint_emu__succeeded = mercury__integer__f_less_or_equal_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Var_16);
      if (libs__uint_emu__succeeded)
        libs__uint_emu__succeeded = mercury__integer__to_uint_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Z_8);
    }
    return libs__uint_emu__succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__unchecked_quotient_4_p_0(
  MR_Word libs__uint_emu__BitsPerUInt_5,
  MR_Unsigned libs__uint_emu__X_6,
  MR_Unsigned libs__uint_emu__Y_7,
  MR_Unsigned * libs__uint_emu__Z_8)
{
  {
    MR_bool libs__uint_emu__succeeded = (libs__uint_emu__Y_7 == 0U);

    libs__uint_emu__succeeded = !(libs__uint_emu__succeeded);
    if (libs__uint_emu__succeeded)
      libs__uint_emu__succeeded = libs__uint_emu__quotient_4_p_0(libs__uint_emu__BitsPerUInt_5, libs__uint_emu__X_6, libs__uint_emu__Y_7, libs__uint_emu__Z_8);
    return libs__uint_emu__succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__quotient_4_p_0(
  MR_Word libs__uint_emu__BitsPerUInt_5,
  MR_Unsigned libs__uint_emu__X_6,
  MR_Unsigned libs__uint_emu__Y_7,
  MR_Unsigned * libs__uint_emu__Z_8)
{
  {
    MR_bool libs__uint_emu__succeeded;
    MR_Word libs__uint_emu__Var_9;
    MR_Word libs__uint_emu__Var_10;
    MR_Word libs__uint_emu__Var_11;
    MR_Integer libs__uint_emu__BitsPerUInt_14;
    MR_Word libs__uint_emu__Var_15;
    MR_Word libs__uint_emu__Var_16;
    MR_Word libs__uint_emu__Var_17;
    MR_Integer libs__uint_emu__Var_18;
    MR_Word libs__uint_emu__Var_19;

    libs__uint_emu__Var_10 = mercury__integer__from_uint_1_f_0(libs__uint_emu__X_6);
    libs__uint_emu__Var_11 = mercury__integer__from_uint_1_f_0(libs__uint_emu__Y_7);
    libs__uint_emu__Var_9 = mercury__integer__f_47_47_2_f_0(libs__uint_emu__Var_10, libs__uint_emu__Var_11);
    libs__uint_emu__BitsPerUInt_14 = (MR_Integer) libs__uint_emu__BitsPerUInt_5;
    libs__uint_emu__Var_15 = mercury__integer__zero_0_f_0();
    libs__uint_emu__succeeded = mercury__integer__f_greater_or_equal_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Var_15);
    if (libs__uint_emu__succeeded)
    {
      libs__uint_emu__Var_18 = (MR_Integer) 2;
      libs__uint_emu__Var_17 = mercury__integer__integer_1_f_0(libs__uint_emu__Var_18);
      libs__uint_emu__Var_19 = mercury__integer__integer_1_f_0(libs__uint_emu__BitsPerUInt_14);
      libs__uint_emu__Var_16 = mercury__integer__pow_2_f_0(libs__uint_emu__Var_17, libs__uint_emu__Var_19);
      libs__uint_emu__succeeded = mercury__integer__f_less_or_equal_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Var_16);
      if (libs__uint_emu__succeeded)
        libs__uint_emu__succeeded = mercury__integer__to_uint_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Z_8);
    }
    return libs__uint_emu__succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__times_4_p_0(
  MR_Word libs__uint_emu__BitsPerUInt_5,
  MR_Unsigned libs__uint_emu__X_6,
  MR_Unsigned libs__uint_emu__Y_7,
  MR_Unsigned * libs__uint_emu__Z_8)
{
  {
    MR_bool libs__uint_emu__succeeded;
    MR_Word libs__uint_emu__Var_9;
    MR_Word libs__uint_emu__Var_10;
    MR_Word libs__uint_emu__Var_11;
    MR_Integer libs__uint_emu__BitsPerUInt_14;
    MR_Word libs__uint_emu__Var_15;
    MR_Word libs__uint_emu__Var_16;
    MR_Word libs__uint_emu__Var_17;
    MR_Integer libs__uint_emu__Var_18;
    MR_Word libs__uint_emu__Var_19;

    libs__uint_emu__Var_10 = mercury__integer__from_uint_1_f_0(libs__uint_emu__X_6);
    libs__uint_emu__Var_11 = mercury__integer__from_uint_1_f_0(libs__uint_emu__Y_7);
    libs__uint_emu__Var_9 = mercury__integer__f_times_2_f_0(libs__uint_emu__Var_10, libs__uint_emu__Var_11);
    libs__uint_emu__BitsPerUInt_14 = (MR_Integer) libs__uint_emu__BitsPerUInt_5;
    libs__uint_emu__Var_15 = mercury__integer__zero_0_f_0();
    libs__uint_emu__succeeded = mercury__integer__f_greater_or_equal_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Var_15);
    if (libs__uint_emu__succeeded)
    {
      libs__uint_emu__Var_18 = (MR_Integer) 2;
      libs__uint_emu__Var_17 = mercury__integer__integer_1_f_0(libs__uint_emu__Var_18);
      libs__uint_emu__Var_19 = mercury__integer__integer_1_f_0(libs__uint_emu__BitsPerUInt_14);
      libs__uint_emu__Var_16 = mercury__integer__pow_2_f_0(libs__uint_emu__Var_17, libs__uint_emu__Var_19);
      libs__uint_emu__succeeded = mercury__integer__f_less_or_equal_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Var_16);
      if (libs__uint_emu__succeeded)
        libs__uint_emu__succeeded = mercury__integer__to_uint_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Z_8);
    }
    return libs__uint_emu__succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__minus_4_p_0(
  MR_Word libs__uint_emu__BitsPerUInt_5,
  MR_Unsigned libs__uint_emu__X_6,
  MR_Unsigned libs__uint_emu__Y_7,
  MR_Unsigned * libs__uint_emu__Z_8)
{
  {
    MR_bool libs__uint_emu__succeeded;
    MR_Word libs__uint_emu__Var_9;
    MR_Word libs__uint_emu__Var_10;
    MR_Word libs__uint_emu__Var_11;
    MR_Integer libs__uint_emu__BitsPerUInt_14;
    MR_Word libs__uint_emu__Var_15;
    MR_Word libs__uint_emu__Var_16;
    MR_Word libs__uint_emu__Var_17;
    MR_Integer libs__uint_emu__Var_18;
    MR_Word libs__uint_emu__Var_19;

    libs__uint_emu__Var_10 = mercury__integer__from_uint_1_f_0(libs__uint_emu__X_6);
    libs__uint_emu__Var_11 = mercury__integer__from_uint_1_f_0(libs__uint_emu__Y_7);
    libs__uint_emu__Var_9 = mercury__integer__f_minus_2_f_0(libs__uint_emu__Var_10, libs__uint_emu__Var_11);
    libs__uint_emu__BitsPerUInt_14 = (MR_Integer) libs__uint_emu__BitsPerUInt_5;
    libs__uint_emu__Var_15 = mercury__integer__zero_0_f_0();
    libs__uint_emu__succeeded = mercury__integer__f_greater_or_equal_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Var_15);
    if (libs__uint_emu__succeeded)
    {
      libs__uint_emu__Var_18 = (MR_Integer) 2;
      libs__uint_emu__Var_17 = mercury__integer__integer_1_f_0(libs__uint_emu__Var_18);
      libs__uint_emu__Var_19 = mercury__integer__integer_1_f_0(libs__uint_emu__BitsPerUInt_14);
      libs__uint_emu__Var_16 = mercury__integer__pow_2_f_0(libs__uint_emu__Var_17, libs__uint_emu__Var_19);
      libs__uint_emu__succeeded = mercury__integer__f_less_or_equal_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Var_16);
      if (libs__uint_emu__succeeded)
        libs__uint_emu__succeeded = mercury__integer__to_uint_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Z_8);
    }
    return libs__uint_emu__succeeded;
  }
}

MR_bool MR_CALL 
libs__uint_emu__plus_4_p_0(
  MR_Word libs__uint_emu__BitsPerUInt_5,
  MR_Unsigned libs__uint_emu__X_6,
  MR_Unsigned libs__uint_emu__Y_7,
  MR_Unsigned * libs__uint_emu__Z_8)
{
  {
    MR_bool libs__uint_emu__succeeded;
    MR_Word libs__uint_emu__Var_9;
    MR_Word libs__uint_emu__Var_10;
    MR_Word libs__uint_emu__Var_11;
    MR_Integer libs__uint_emu__BitsPerUInt_14;
    MR_Word libs__uint_emu__Var_15;
    MR_Word libs__uint_emu__Var_16;
    MR_Word libs__uint_emu__Var_17;
    MR_Integer libs__uint_emu__Var_18;
    MR_Word libs__uint_emu__Var_19;

    libs__uint_emu__Var_10 = mercury__integer__from_uint_1_f_0(libs__uint_emu__X_6);
    libs__uint_emu__Var_11 = mercury__integer__from_uint_1_f_0(libs__uint_emu__Y_7);
    libs__uint_emu__Var_9 = mercury__integer__f_plus_2_f_0(libs__uint_emu__Var_10, libs__uint_emu__Var_11);
    libs__uint_emu__BitsPerUInt_14 = (MR_Integer) libs__uint_emu__BitsPerUInt_5;
    libs__uint_emu__Var_15 = mercury__integer__zero_0_f_0();
    libs__uint_emu__succeeded = mercury__integer__f_greater_or_equal_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Var_15);
    if (libs__uint_emu__succeeded)
    {
      libs__uint_emu__Var_18 = (MR_Integer) 2;
      libs__uint_emu__Var_17 = mercury__integer__integer_1_f_0(libs__uint_emu__Var_18);
      libs__uint_emu__Var_19 = mercury__integer__integer_1_f_0(libs__uint_emu__BitsPerUInt_14);
      libs__uint_emu__Var_16 = mercury__integer__pow_2_f_0(libs__uint_emu__Var_17, libs__uint_emu__Var_19);
      libs__uint_emu__succeeded = mercury__integer__f_less_or_equal_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Var_16);
      if (libs__uint_emu__succeeded)
        libs__uint_emu__succeeded = mercury__integer__to_uint_2_p_0(libs__uint_emu__Var_9, libs__uint_emu__Z_8);
    }
    return libs__uint_emu__succeeded;
  }
}

void MR_CALL 
libs__uint_emu__target_bits_per_uint_2_p_0(
  MR_Word libs__uint_emu__Globals_3,
  MR_Word * libs__uint_emu__HeadVar__2_2)
{
  {
    MR_Integer libs__uint_emu__BitsPerUInt_4;
    MR_Word libs__uint_emu__Target_5;

    libs__globals__get_target_2_p_0(libs__uint_emu__Globals_3, &libs__uint_emu__Target_5);
    switch (libs__uint_emu__Target_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__globals__lookup_int_option_3_p_0(libs__uint_emu__Globals_3, (MR_Integer) 251, &libs__uint_emu__BitsPerUInt_4);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        libs__uint_emu__BitsPerUInt_4 = (MR_Integer) 32;
        break;
    }
    *libs__uint_emu__HeadVar__2_2 = (MR_Word) libs__uint_emu__BitsPerUInt_4;
  }
}

static MR_bool MR_CALL 
libs__uint_emu____Unify____bits_per_uint_0_0_10001(
  MR_Box libs__uint_emu__wrapper_arg_1,
  MR_Box libs__uint_emu__wrapper_arg_2)
{
  {
    MR_bool libs__uint_emu__succeeded;

    libs__uint_emu__succeeded = libs__uint_emu____Unify____bits_per_uint_0_0(((MR_Word) libs__uint_emu__wrapper_arg_1), ((MR_Word) libs__uint_emu__wrapper_arg_2));
    return libs__uint_emu__succeeded;
  }
}

static void MR_CALL 
libs__uint_emu____Compare____bits_per_uint_0_0_10001(
  MR_Box * libs__uint_emu__wrapper_arg_1,
  MR_Box libs__uint_emu__wrapper_arg_2,
  MR_Box libs__uint_emu__wrapper_arg_3)
{
  {
    MR_Word libs__uint_emu__conv0_HeadVar__1_1;

    libs__uint_emu____Compare____bits_per_uint_0_0(&libs__uint_emu__conv0_HeadVar__1_1, ((MR_Word) libs__uint_emu__wrapper_arg_2), ((MR_Word) libs__uint_emu__wrapper_arg_3));
    *libs__uint_emu__wrapper_arg_1 = ((MR_Box) (libs__uint_emu__conv0_HeadVar__1_1));
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

/* :- end_module libs.uint_emu. */
