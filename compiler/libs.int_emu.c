/*
** Automatically generated from `int_emu.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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


/* :- module libs.int_emu. */
/* :- implementation. */

/*
INIT mercury__libs__int_emu__init
ENDINIT
*/

#include "libs.int_emu.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "libs.globals.mih"
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




#line 82 "libs.int_emu.c"
static const MR_Integer libs__int_emu__libs__int_emu__functor_number_map_bits_per_int_0[1];

#line 85 "libs.int_emu.c"
static const MR_NotagFunctorDesc libs__int_emu__libs__int_emu__notag_functor_desc_bits_per_int_0;

#line 88 "libs.int_emu.c"
static MR_bool MR_CALL 
libs__int_emu____Unify____bits_per_int_0_0_10001(
#line 91 "libs.int_emu.c"
  MR_Box libs__int_emu__wrapper_arg_1,
#line 93 "libs.int_emu.c"
  MR_Box libs__int_emu__wrapper_arg_2);

#line 96 "libs.int_emu.c"
static void MR_CALL 
libs__int_emu____Compare____bits_per_int_0_0_10001(
#line 99 "libs.int_emu.c"
  MR_Box * libs__int_emu__wrapper_arg_1,
#line 101 "libs.int_emu.c"
  MR_Box libs__int_emu__wrapper_arg_2,
#line 103 "libs.int_emu.c"
  MR_Box libs__int_emu__wrapper_arg_3);

#line 170 "int_emu.m"
static MR_bool MR_CALL 
libs__int_emu__to_int_in_range_3_p_0(
#line 170 "int_emu.m"
  MR_Word libs__int_emu__HeadVar__1_1,
#line 170 "int_emu.m"
  MR_Word libs__int_emu__Integer_5,
#line 170 "int_emu.m"
  MR_Integer * libs__int_emu__Int_6);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 129 "libs.int_emu.c"
static const MR_Integer libs__int_emu__libs__int_emu__functor_number_map_bits_per_int_0[1] = {
  (MR_Integer) 0
};

#line 134 "libs.int_emu.c"
static const MR_NotagFunctorDesc libs__int_emu__libs__int_emu__notag_functor_desc_bits_per_int_0 = {
  (MR_String) "bits_per_int",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 141 "libs.int_emu.c"
const MR_TypeCtorInfo_Struct libs__int_emu__libs__int_emu__type_ctor_info_bits_per_int_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (libs__int_emu____Unify____bits_per_int_0_0_10001)),
  ((MR_Box) (libs__int_emu____Compare____bits_per_int_0_0_10001)),
  (MR_String) "libs.int_emu",
  (MR_String) "bits_per_int",
  {     &libs__int_emu__libs__int_emu__notag_functor_desc_bits_per_int_0 },
  {     &libs__int_emu__libs__int_emu__notag_functor_desc_bits_per_int_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__int_emu__libs__int_emu__functor_number_map_bits_per_int_0
};

#line 158 "libs.int_emu.c"
static MR_bool MR_CALL 
libs__int_emu____Unify____bits_per_int_0_0_10001(
#line 161 "libs.int_emu.c"
  MR_Box libs__int_emu__wrapper_arg_1,
#line 163 "libs.int_emu.c"
  MR_Box libs__int_emu__wrapper_arg_2)
#line 165 "libs.int_emu.c"
{
#line 167 "libs.int_emu.c"
  {
#line 169 "libs.int_emu.c"
    MR_bool libs__int_emu__succeeded;

#line 172 "libs.int_emu.c"
    {
#line 174 "libs.int_emu.c"
      libs__int_emu__succeeded = libs__int_emu____Unify____bits_per_int_0_0(((MR_Word) libs__int_emu__wrapper_arg_1), ((MR_Word) libs__int_emu__wrapper_arg_2));
    }
#line 177 "libs.int_emu.c"
    return libs__int_emu__succeeded;
#line 179 "libs.int_emu.c"
  }
#line 181 "libs.int_emu.c"
}

#line 184 "libs.int_emu.c"
static void MR_CALL 
libs__int_emu____Compare____bits_per_int_0_0_10001(
#line 187 "libs.int_emu.c"
  MR_Box * libs__int_emu__wrapper_arg_1,
#line 189 "libs.int_emu.c"
  MR_Box libs__int_emu__wrapper_arg_2,
#line 191 "libs.int_emu.c"
  MR_Box libs__int_emu__wrapper_arg_3)
#line 193 "libs.int_emu.c"
{
#line 195 "libs.int_emu.c"
  {
#line 197 "libs.int_emu.c"
    MR_Word libs__int_emu__conv0_HeadVar__1_1;

#line 200 "libs.int_emu.c"
    {
#line 202 "libs.int_emu.c"
      libs__int_emu____Compare____bits_per_int_0_0(&libs__int_emu__conv0_HeadVar__1_1, ((MR_Word) libs__int_emu__wrapper_arg_2), ((MR_Word) libs__int_emu__wrapper_arg_3));
    }
#line 205 "libs.int_emu.c"
    *libs__int_emu__wrapper_arg_1 = ((MR_Box) (libs__int_emu__conv0_HeadVar__1_1));
#line 207 "libs.int_emu.c"
  }
#line 209 "libs.int_emu.c"
}

#line 25 "int_emu.m"
void MR_CALL 
libs__int_emu____Compare____bits_per_int_0_0(
#line 25 "int_emu.m"
  MR_Word * libs__int_emu__HeadVar__1_1,
#line 25 "int_emu.m"
  MR_Word libs__int_emu__HeadVar__2_2,
#line 25 "int_emu.m"
  MR_Word libs__int_emu__HeadVar__3_3)
#line 25 "int_emu.m"
{
#line 25 "int_emu.m"
  {
#line 25 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 25 "int_emu.m"
    MR_Integer libs__int_emu__CastX_6 = (MR_Integer) libs__int_emu__HeadVar__2_2;
#line 25 "int_emu.m"
    MR_Integer libs__int_emu__CastY_7 = (MR_Integer) libs__int_emu__HeadVar__3_3;

#line 25 "int_emu.m"
    libs__int_emu__succeeded = (libs__int_emu__CastX_6 == libs__int_emu__CastY_7);
#line 25 "int_emu.m"
    if (libs__int_emu__succeeded)
#line 236 "libs.int_emu.c"
      *libs__int_emu__HeadVar__1_1 = (MR_Integer) 0;
#line 25 "int_emu.m"
    else
#line 25 "int_emu.m"
      {
#line 25 "int_emu.m"
        MR_Integer libs__int_emu__V_4_4 = (MR_Integer) libs__int_emu__HeadVar__2_2;
#line 25 "int_emu.m"
        MR_Integer libs__int_emu__V_5_5 = (MR_Integer) libs__int_emu__HeadVar__3_3;

#line 25 "int_emu.m"
        {
#line 25 "int_emu.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(libs__int_emu__HeadVar__1_1, libs__int_emu__V_4_4, libs__int_emu__V_5_5);
#line 25 "int_emu.m"
          return;
        }
#line 25 "int_emu.m"
      }
#line 25 "int_emu.m"
  }
#line 25 "int_emu.m"
}

#line 25 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu____Unify____bits_per_int_0_0(
#line 25 "int_emu.m"
  MR_Word libs__int_emu__HeadVar__1_1,
#line 25 "int_emu.m"
  MR_Word libs__int_emu__HeadVar__2_2)
#line 25 "int_emu.m"
{
#line 25 "int_emu.m"
  {
#line 25 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 25 "int_emu.m"
    MR_Integer libs__int_emu__CastX_5 = (MR_Integer) libs__int_emu__HeadVar__1_1;
#line 25 "int_emu.m"
    MR_Integer libs__int_emu__CastY_6 = (MR_Integer) libs__int_emu__HeadVar__2_2;

#line 25 "int_emu.m"
    libs__int_emu__succeeded = (libs__int_emu__CastX_5 == libs__int_emu__CastY_6);
#line 25 "int_emu.m"
    if (libs__int_emu__succeeded)
#line 25 "int_emu.m"
      libs__int_emu__succeeded = MR_TRUE;
#line 25 "int_emu.m"
    else
#line 25 "int_emu.m"
      {
#line 25 "int_emu.m"
        MR_Integer libs__int_emu__V_3_3 = (MR_Integer) libs__int_emu__HeadVar__1_1;
#line 25 "int_emu.m"
        MR_Integer libs__int_emu__V_4_4 = (MR_Integer) libs__int_emu__HeadVar__2_2;

#line 294 "libs.int_emu.c"
        libs__int_emu__succeeded = (libs__int_emu__V_3_3 == libs__int_emu__V_4_4);
#line 25 "int_emu.m"
      }
#line 25 "int_emu.m"
    return libs__int_emu__succeeded;
#line 25 "int_emu.m"
  }
#line 25 "int_emu.m"
}

#line 170 "int_emu.m"
static MR_bool MR_CALL 
libs__int_emu__to_int_in_range_3_p_0(
#line 170 "int_emu.m"
  MR_Word libs__int_emu__HeadVar__1_1,
#line 170 "int_emu.m"
  MR_Word libs__int_emu__Integer_5,
#line 170 "int_emu.m"
  MR_Integer * libs__int_emu__Int_6)
#line 170 "int_emu.m"
{
#line 172 "int_emu.m"
  {
#line 172 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 172 "int_emu.m"
    MR_Integer libs__int_emu__BitsPerInt_4 = (MR_Integer) libs__int_emu__HeadVar__1_1;
#line 172 "int_emu.m"
    MR_Word libs__int_emu__V_7_7;
#line 172 "int_emu.m"
    MR_Word libs__int_emu__V_8_8;
#line 172 "int_emu.m"
    MR_Word libs__int_emu__V_9_9;
#line 172 "int_emu.m"
    MR_Word libs__int_emu__V_11_11;
#line 172 "int_emu.m"
    MR_Integer libs__int_emu__V_12_12;
#line 172 "int_emu.m"
    MR_Word libs__int_emu__V_14_14;
#line 172 "int_emu.m"
    MR_Word libs__int_emu__V_15_15;
#line 172 "int_emu.m"
    MR_Word libs__int_emu__V_16_16;
#line 172 "int_emu.m"
    MR_Integer libs__int_emu__V_17_17;
#line 172 "int_emu.m"
    MR_Word libs__int_emu__V_18_18;
#line 172 "int_emu.m"
    MR_Integer libs__int_emu__V_19_19;
#line 172 "int_emu.m"
    MR_Integer libs__int_emu__V_20_20;
#line 172 "int_emu.m"
    MR_Word libs__int_emu__V_21_21;

#line 173 "int_emu.m"
    {
#line 173 "int_emu.m"
      libs__int_emu__V_9_9 = mercury__integer__integer_1_f_0((MR_Integer) 2);
    }
#line 173 "int_emu.m"
    libs__int_emu__V_12_12 = (libs__int_emu__BitsPerInt_4 - (MR_Integer) 1);
#line 173 "int_emu.m"
    {
#line 173 "int_emu.m"
      libs__int_emu__V_11_11 = mercury__integer__integer_1_f_0(libs__int_emu__V_12_12);
    }
#line 173 "int_emu.m"
    {
#line 173 "int_emu.m"
      libs__int_emu__V_8_8 = mercury__integer__pow_2_f_0(libs__int_emu__V_9_9, libs__int_emu__V_11_11);
    }
#line 173 "int_emu.m"
    {
#line 173 "int_emu.m"
      libs__int_emu__V_7_7 = mercury__integer__f_minus_1_f_0(libs__int_emu__V_8_8);
    }
#line 173 "int_emu.m"
    {
#line 173 "int_emu.m"
      libs__int_emu__succeeded = mercury__integer__f_greater_or_equal_2_p_0(libs__int_emu__Integer_5, libs__int_emu__V_7_7);
    }
#line 172 "int_emu.m"
    if (libs__int_emu__succeeded)
#line 172 "int_emu.m"
      {
#line 174 "int_emu.m"
        libs__int_emu__V_17_17 = (MR_Integer) 2;
#line 174 "int_emu.m"
        {
#line 174 "int_emu.m"
          libs__int_emu__V_16_16 = mercury__integer__integer_1_f_0(libs__int_emu__V_17_17);
        }
#line 174 "int_emu.m"
        libs__int_emu__V_20_20 = (MR_Integer) 1;
#line 174 "int_emu.m"
        libs__int_emu__V_19_19 = (libs__int_emu__BitsPerInt_4 - libs__int_emu__V_20_20);
#line 174 "int_emu.m"
        {
#line 174 "int_emu.m"
          libs__int_emu__V_18_18 = mercury__integer__integer_1_f_0(libs__int_emu__V_19_19);
        }
#line 174 "int_emu.m"
        {
#line 174 "int_emu.m"
          libs__int_emu__V_15_15 = mercury__integer__pow_2_f_0(libs__int_emu__V_16_16, libs__int_emu__V_18_18);
        }
#line 174 "int_emu.m"
        {
#line 174 "int_emu.m"
          libs__int_emu__V_21_21 = mercury__integer__one_0_f_0();
        }
#line 174 "int_emu.m"
        {
#line 174 "int_emu.m"
          libs__int_emu__V_14_14 = mercury__integer__f_minus_2_f_0(libs__int_emu__V_15_15, libs__int_emu__V_21_21);
        }
#line 174 "int_emu.m"
        {
#line 174 "int_emu.m"
          libs__int_emu__succeeded = mercury__integer__f_less_or_equal_2_p_0(libs__int_emu__Integer_5, libs__int_emu__V_14_14);
        }
#line 172 "int_emu.m"
        if (libs__int_emu__succeeded)
#line 175 "int_emu.m"
          {
#line 175 "int_emu.m"
            return libs__int_emu__succeeded = mercury__integer__to_int_2_p_0(libs__int_emu__Integer_5, libs__int_emu__Int_6);
          }
#line 172 "int_emu.m"
      }
#line 172 "int_emu.m"
    return libs__int_emu__succeeded;
#line 172 "int_emu.m"
  }
#line 170 "int_emu.m"
}

#line 69 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__rem_bits_per_int_3_p_0(
#line 69 "int_emu.m"
  MR_Integer libs__int_emu__X_4,
#line 69 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 69 "int_emu.m"
  MR_Integer * libs__int_emu__Z_6)
#line 69 "int_emu.m"
{
#line 166 "int_emu.m"
  {
#line 166 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 166 "int_emu.m"
    MR_Integer libs__int_emu__Y_7 = (MR_Integer) libs__int_emu__BitsPerInt_5;
#line 166 "int_emu.m"
    MR_Word libs__int_emu__V_12_12;
#line 166 "int_emu.m"
    MR_Word libs__int_emu__V_13_13;
#line 166 "int_emu.m"
    MR_Word libs__int_emu__V_14_14;

#line 118 "int_emu.m"
    {
#line 118 "int_emu.m"
      libs__int_emu__V_13_13 = mercury__integer__integer_1_f_0(libs__int_emu__X_4);
    }
#line 118 "int_emu.m"
    {
#line 118 "int_emu.m"
      libs__int_emu__V_14_14 = mercury__integer__integer_1_f_0(libs__int_emu__Y_7);
    }
#line 118 "int_emu.m"
    {
#line 118 "int_emu.m"
      libs__int_emu__V_12_12 = mercury__integer__rem_2_f_0(libs__int_emu__V_13_13, libs__int_emu__V_14_14);
    }
#line 118 "int_emu.m"
    {
#line 118 "int_emu.m"
      return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_12_12, libs__int_emu__Z_6);
    }
#line 166 "int_emu.m"
    return libs__int_emu__succeeded;
#line 166 "int_emu.m"
  }
#line 69 "int_emu.m"
}

#line 67 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__times_bits_per_int_3_p_0(
#line 67 "int_emu.m"
  MR_Integer libs__int_emu__X_4,
#line 67 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 67 "int_emu.m"
  MR_Integer * libs__int_emu__Z_6)
#line 67 "int_emu.m"
{
#line 162 "int_emu.m"
  {
#line 162 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 162 "int_emu.m"
    MR_Integer libs__int_emu__Y_7 = (MR_Integer) libs__int_emu__BitsPerInt_5;
#line 162 "int_emu.m"
    MR_Word libs__int_emu__V_12_12;
#line 162 "int_emu.m"
    MR_Word libs__int_emu__V_13_13;
#line 162 "int_emu.m"
    MR_Word libs__int_emu__V_14_14;

#line 105 "int_emu.m"
    {
#line 105 "int_emu.m"
      libs__int_emu__V_13_13 = mercury__integer__integer_1_f_0(libs__int_emu__X_4);
    }
#line 105 "int_emu.m"
    {
#line 105 "int_emu.m"
      libs__int_emu__V_14_14 = mercury__integer__integer_1_f_0(libs__int_emu__Y_7);
    }
#line 105 "int_emu.m"
    {
#line 105 "int_emu.m"
      libs__int_emu__V_12_12 = mercury__integer__f_times_2_f_0(libs__int_emu__V_13_13, libs__int_emu__V_14_14);
    }
#line 105 "int_emu.m"
    {
#line 105 "int_emu.m"
      return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_12_12, libs__int_emu__Z_6);
    }
#line 162 "int_emu.m"
    return libs__int_emu__succeeded;
#line 162 "int_emu.m"
  }
#line 67 "int_emu.m"
}

#line 65 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__quot_bits_per_int_3_p_0(
#line 65 "int_emu.m"
  MR_Integer libs__int_emu__X_4,
#line 65 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 65 "int_emu.m"
  MR_Integer * libs__int_emu__Z_6)
#line 65 "int_emu.m"
{
#line 158 "int_emu.m"
  {
#line 158 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 158 "int_emu.m"
    MR_Integer libs__int_emu__Y_7 = (MR_Integer) libs__int_emu__BitsPerInt_5;
#line 158 "int_emu.m"
    MR_Word libs__int_emu__V_12_12;
#line 158 "int_emu.m"
    MR_Word libs__int_emu__V_13_13;
#line 158 "int_emu.m"
    MR_Word libs__int_emu__V_14_14;

#line 108 "int_emu.m"
    {
#line 108 "int_emu.m"
      libs__int_emu__V_13_13 = mercury__integer__integer_1_f_0(libs__int_emu__X_4);
    }
#line 108 "int_emu.m"
    {
#line 108 "int_emu.m"
      libs__int_emu__V_14_14 = mercury__integer__integer_1_f_0(libs__int_emu__Y_7);
    }
#line 108 "int_emu.m"
    {
#line 108 "int_emu.m"
      libs__int_emu__V_12_12 = mercury__integer__f_47_47_2_f_0(libs__int_emu__V_13_13, libs__int_emu__V_14_14);
    }
#line 108 "int_emu.m"
    {
#line 108 "int_emu.m"
      return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_12_12, libs__int_emu__Z_6);
    }
#line 158 "int_emu.m"
    return libs__int_emu__succeeded;
#line 158 "int_emu.m"
  }
#line 65 "int_emu.m"
}

#line 62 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__floor_to_multiple_of_bits_per_int_3_p_0(
#line 62 "int_emu.m"
  MR_Integer libs__int_emu__X_4,
#line 62 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 62 "int_emu.m"
  MR_Integer * libs__int_emu__FloorInt_6)
#line 62 "int_emu.m"
{
#line 147 "int_emu.m"
  {
#line 147 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 147 "int_emu.m"
    MR_Integer libs__int_emu__N_7 = (MR_Integer) libs__int_emu__BitsPerInt_5;
#line 147 "int_emu.m"
    MR_Word libs__int_emu__Trunc_8;
#line 147 "int_emu.m"
    MR_Word libs__int_emu__Floor0_9;
#line 147 "int_emu.m"
    MR_Word libs__int_emu__Floor_10;
#line 147 "int_emu.m"
    MR_Word libs__int_emu__V_11_11;
#line 147 "int_emu.m"
    MR_Word libs__int_emu__V_12_12;
#line 147 "int_emu.m"
    MR_Word libs__int_emu__V_13_13;
#line 151 "int_emu.m"
    MR_Word libs__int_emu__V_14_14;

#line 149 "int_emu.m"
    {
#line 149 "int_emu.m"
      libs__int_emu__V_11_11 = mercury__integer__integer_1_f_0(libs__int_emu__X_4);
    }
#line 149 "int_emu.m"
    {
#line 149 "int_emu.m"
      libs__int_emu__V_12_12 = mercury__integer__integer_1_f_0(libs__int_emu__N_7);
    }
#line 149 "int_emu.m"
    {
#line 149 "int_emu.m"
      libs__int_emu__Trunc_8 = mercury__integer__f_47_47_2_f_0(libs__int_emu__V_11_11, libs__int_emu__V_12_12);
    }
#line 150 "int_emu.m"
    {
#line 150 "int_emu.m"
      libs__int_emu__V_13_13 = mercury__integer__integer_1_f_0(libs__int_emu__N_7);
    }
#line 150 "int_emu.m"
    {
#line 150 "int_emu.m"
      libs__int_emu__Floor0_9 = mercury__integer__f_times_2_f_0(libs__int_emu__Trunc_8, libs__int_emu__V_13_13);
    }
#line 151 "int_emu.m"
    {
#line 151 "int_emu.m"
      libs__int_emu__V_14_14 = mercury__integer__integer_1_f_0(libs__int_emu__X_4);
    }
#line 151 "int_emu.m"
    {
#line 151 "int_emu.m"
      libs__int_emu__succeeded = mercury__integer__f_greater_than_2_p_0(libs__int_emu__Floor0_9, libs__int_emu__V_14_14);
    }
#line 153 "int_emu.m"
    if (libs__int_emu__succeeded)
#line 152 "int_emu.m"
      {
#line 152 "int_emu.m"
        MR_Word libs__int_emu__V_15_15;

#line 152 "int_emu.m"
        {
#line 152 "int_emu.m"
          libs__int_emu__V_15_15 = mercury__integer__integer_1_f_0(libs__int_emu__N_7);
        }
#line 152 "int_emu.m"
        {
#line 152 "int_emu.m"
          libs__int_emu__Floor_10 = mercury__integer__f_minus_2_f_0(libs__int_emu__Floor0_9, libs__int_emu__V_15_15);
        }
#line 152 "int_emu.m"
      }
#line 153 "int_emu.m"
    else
#line 154 "int_emu.m"
      libs__int_emu__Floor_10 = libs__int_emu__Floor0_9;
#line 156 "int_emu.m"
    {
#line 156 "int_emu.m"
      return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__Floor_10, libs__int_emu__FloorInt_6);
    }
#line 147 "int_emu.m"
    return libs__int_emu__succeeded;
#line 147 "int_emu.m"
  }
#line 62 "int_emu.m"
}

#line 59 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__unchecked_right_shift_4_p_0(
#line 59 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 59 "int_emu.m"
  MR_Integer libs__int_emu__X_6,
#line 59 "int_emu.m"
  MR_Integer libs__int_emu__Y_7,
#line 59 "int_emu.m"
  MR_Integer * libs__int_emu__Z_8)
#line 59 "int_emu.m"
{
#line 141 "int_emu.m"
  {
#line 141 "int_emu.m"
    MR_bool libs__int_emu__succeeded = (libs__int_emu__Y_7 >= (MR_Integer) 0);
#line 141 "int_emu.m"
    MR_Integer libs__int_emu__N_9 = (MR_Integer) libs__int_emu__BitsPerInt_5;

#line 141 "int_emu.m"
    if (libs__int_emu__succeeded)
#line 141 "int_emu.m"
      {
#line 144 "int_emu.m"
        libs__int_emu__succeeded = (libs__int_emu__Y_7 < libs__int_emu__N_9);
#line 141 "int_emu.m"
        if (libs__int_emu__succeeded)
#line 145 "int_emu.m"
          {
#line 145 "int_emu.m"
            return libs__int_emu__succeeded = libs__int_emu__right_shift_4_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__X_6, libs__int_emu__Y_7, libs__int_emu__Z_8);
          }
#line 141 "int_emu.m"
      }
#line 141 "int_emu.m"
    return libs__int_emu__succeeded;
#line 141 "int_emu.m"
  }
#line 59 "int_emu.m"
}

#line 57 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__right_shift_4_p_0(
#line 57 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 57 "int_emu.m"
  MR_Integer libs__int_emu__X_6,
#line 57 "int_emu.m"
  MR_Integer libs__int_emu__Y_7,
#line 57 "int_emu.m"
  MR_Integer * libs__int_emu__Z_8)
#line 57 "int_emu.m"
{
#line 137 "int_emu.m"
  {
#line 137 "int_emu.m"
    MR_bool libs__int_emu__succeeded = (libs__int_emu__Y_7 < (MR_Integer) 0);

#line 137 "int_emu.m"
    if (libs__int_emu__succeeded)
#line 136 "int_emu.m"
      {
#line 136 "int_emu.m"
        MR_Integer libs__int_emu__V_10_10 = ((MR_Integer) 0 - libs__int_emu__Y_7);
#line 136 "int_emu.m"
        MR_Integer libs__int_emu__N_17 = (MR_Integer) libs__int_emu__BitsPerInt_5;
#line 136 "int_emu.m"
        MR_Word libs__int_emu__V_18_18;
#line 136 "int_emu.m"
        MR_Word libs__int_emu__V_19_19;
#line 136 "int_emu.m"
        MR_Integer libs__int_emu__V_20_20;

#line 126 "int_emu.m"
        {
#line 126 "int_emu.m"
          libs__int_emu__V_19_19 = mercury__integer__integer_1_f_0(libs__int_emu__X_6);
        }
#line 126 "int_emu.m"
        {
#line 126 "int_emu.m"
          libs__int_emu__V_20_20 = mercury__int__min_2_f_0(libs__int_emu__V_10_10, libs__int_emu__N_17);
        }
#line 126 "int_emu.m"
        {
#line 126 "int_emu.m"
          libs__int_emu__V_18_18 = mercury__integer__f_60_60_2_f_0(libs__int_emu__V_19_19, libs__int_emu__V_20_20);
        }
#line 126 "int_emu.m"
        {
#line 126 "int_emu.m"
          return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_18_18, libs__int_emu__Z_8);
        }
#line 136 "int_emu.m"
      }
#line 137 "int_emu.m"
    else
#line 138 "int_emu.m"
      {
#line 138 "int_emu.m"
        MR_Word libs__int_emu__V_11_11;
#line 138 "int_emu.m"
        MR_Word libs__int_emu__V_12_12;

#line 138 "int_emu.m"
        {
#line 138 "int_emu.m"
          libs__int_emu__V_12_12 = mercury__integer__integer_1_f_0(libs__int_emu__X_6);
        }
#line 138 "int_emu.m"
        {
#line 138 "int_emu.m"
          libs__int_emu__V_11_11 = mercury__integer__f_62_62_2_f_0(libs__int_emu__V_12_12, libs__int_emu__Y_7);
        }
#line 138 "int_emu.m"
        {
#line 138 "int_emu.m"
          return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_11_11, libs__int_emu__Z_8);
        }
#line 138 "int_emu.m"
      }
#line 137 "int_emu.m"
    return libs__int_emu__succeeded;
#line 137 "int_emu.m"
  }
#line 57 "int_emu.m"
}

#line 54 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__unchecked_left_shift_4_p_0(
#line 54 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 54 "int_emu.m"
  MR_Integer libs__int_emu__X_6,
#line 54 "int_emu.m"
  MR_Integer libs__int_emu__Y_7,
#line 54 "int_emu.m"
  MR_Integer * libs__int_emu__Z_8)
#line 54 "int_emu.m"
{
#line 128 "int_emu.m"
  {
#line 128 "int_emu.m"
    MR_bool libs__int_emu__succeeded = (libs__int_emu__Y_7 >= (MR_Integer) 0);
#line 128 "int_emu.m"
    MR_Integer libs__int_emu__N_15 = (MR_Integer) libs__int_emu__BitsPerInt_5;
#line 128 "int_emu.m"
    MR_Word libs__int_emu__V_16_16;
#line 128 "int_emu.m"
    MR_Word libs__int_emu__V_17_17;
#line 128 "int_emu.m"
    MR_Integer libs__int_emu__V_18_18;

#line 128 "int_emu.m"
    if (libs__int_emu__succeeded)
#line 128 "int_emu.m"
      {
#line 131 "int_emu.m"
        libs__int_emu__succeeded = (libs__int_emu__Y_7 < libs__int_emu__N_15);
#line 128 "int_emu.m"
        if (libs__int_emu__succeeded)
#line 128 "int_emu.m"
          {
#line 126 "int_emu.m"
            {
#line 126 "int_emu.m"
              libs__int_emu__V_17_17 = mercury__integer__integer_1_f_0(libs__int_emu__X_6);
            }
#line 126 "int_emu.m"
            {
#line 126 "int_emu.m"
              libs__int_emu__V_18_18 = mercury__int__min_2_f_0(libs__int_emu__Y_7, libs__int_emu__N_15);
            }
#line 126 "int_emu.m"
            {
#line 126 "int_emu.m"
              libs__int_emu__V_16_16 = mercury__integer__f_60_60_2_f_0(libs__int_emu__V_17_17, libs__int_emu__V_18_18);
            }
#line 126 "int_emu.m"
            {
#line 126 "int_emu.m"
              return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_16_16, libs__int_emu__Z_8);
            }
#line 128 "int_emu.m"
          }
#line 128 "int_emu.m"
      }
#line 128 "int_emu.m"
    return libs__int_emu__succeeded;
#line 128 "int_emu.m"
  }
#line 54 "int_emu.m"
}

#line 52 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__left_shift_4_p_0(
#line 52 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 52 "int_emu.m"
  MR_Integer libs__int_emu__X_6,
#line 52 "int_emu.m"
  MR_Integer libs__int_emu__Y_7,
#line 52 "int_emu.m"
  MR_Integer * libs__int_emu__Z_8)
#line 52 "int_emu.m"
{
#line 124 "int_emu.m"
  {
#line 124 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 124 "int_emu.m"
    MR_Integer libs__int_emu__N_9 = (MR_Integer) libs__int_emu__BitsPerInt_5;
#line 124 "int_emu.m"
    MR_Word libs__int_emu__V_10_10;
#line 124 "int_emu.m"
    MR_Word libs__int_emu__V_11_11;
#line 124 "int_emu.m"
    MR_Integer libs__int_emu__V_12_12;

#line 126 "int_emu.m"
    {
#line 126 "int_emu.m"
      libs__int_emu__V_11_11 = mercury__integer__integer_1_f_0(libs__int_emu__X_6);
    }
#line 126 "int_emu.m"
    {
#line 126 "int_emu.m"
      libs__int_emu__V_12_12 = mercury__int__min_2_f_0(libs__int_emu__Y_7, libs__int_emu__N_9);
    }
#line 126 "int_emu.m"
    {
#line 126 "int_emu.m"
      libs__int_emu__V_10_10 = mercury__integer__f_60_60_2_f_0(libs__int_emu__V_11_11, libs__int_emu__V_12_12);
    }
#line 126 "int_emu.m"
    {
#line 126 "int_emu.m"
      return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_10_10, libs__int_emu__Z_8);
    }
#line 124 "int_emu.m"
    return libs__int_emu__succeeded;
#line 124 "int_emu.m"
  }
#line 52 "int_emu.m"
}

#line 49 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__unchecked_rem_4_p_0(
#line 49 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 49 "int_emu.m"
  MR_Integer libs__int_emu__X_6,
#line 49 "int_emu.m"
  MR_Integer libs__int_emu__Y_7,
#line 49 "int_emu.m"
  MR_Integer * libs__int_emu__Z_8)
#line 49 "int_emu.m"
{
#line 120 "int_emu.m"
  {
#line 120 "int_emu.m"
    MR_bool libs__int_emu__succeeded = (libs__int_emu__Y_7 == (MR_Integer) 0);
#line 120 "int_emu.m"
    MR_Word libs__int_emu__V_13_13;
#line 120 "int_emu.m"
    MR_Word libs__int_emu__V_14_14;
#line 120 "int_emu.m"
    MR_Word libs__int_emu__V_15_15;

#line 121 "int_emu.m"
    libs__int_emu__succeeded = !(libs__int_emu__succeeded);
#line 120 "int_emu.m"
    if (libs__int_emu__succeeded)
#line 120 "int_emu.m"
      {
#line 118 "int_emu.m"
        {
#line 118 "int_emu.m"
          libs__int_emu__V_14_14 = mercury__integer__integer_1_f_0(libs__int_emu__X_6);
        }
#line 118 "int_emu.m"
        {
#line 118 "int_emu.m"
          libs__int_emu__V_15_15 = mercury__integer__integer_1_f_0(libs__int_emu__Y_7);
        }
#line 118 "int_emu.m"
        {
#line 118 "int_emu.m"
          libs__int_emu__V_13_13 = mercury__integer__rem_2_f_0(libs__int_emu__V_14_14, libs__int_emu__V_15_15);
        }
#line 118 "int_emu.m"
        {
#line 118 "int_emu.m"
          return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_13_13, libs__int_emu__Z_8);
        }
#line 120 "int_emu.m"
      }
#line 120 "int_emu.m"
    return libs__int_emu__succeeded;
#line 120 "int_emu.m"
  }
#line 49 "int_emu.m"
}

#line 47 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__rem_4_p_0(
#line 47 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 47 "int_emu.m"
  MR_Integer libs__int_emu__X_6,
#line 47 "int_emu.m"
  MR_Integer libs__int_emu__Y_7,
#line 47 "int_emu.m"
  MR_Integer * libs__int_emu__Z_8)
#line 47 "int_emu.m"
{
#line 117 "int_emu.m"
  {
#line 117 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 117 "int_emu.m"
    MR_Word libs__int_emu__V_9_9;
#line 117 "int_emu.m"
    MR_Word libs__int_emu__V_10_10;
#line 117 "int_emu.m"
    MR_Word libs__int_emu__V_11_11;

#line 118 "int_emu.m"
    {
#line 118 "int_emu.m"
      libs__int_emu__V_10_10 = mercury__integer__integer_1_f_0(libs__int_emu__X_6);
    }
#line 118 "int_emu.m"
    {
#line 118 "int_emu.m"
      libs__int_emu__V_11_11 = mercury__integer__integer_1_f_0(libs__int_emu__Y_7);
    }
#line 118 "int_emu.m"
    {
#line 118 "int_emu.m"
      libs__int_emu__V_9_9 = mercury__integer__rem_2_f_0(libs__int_emu__V_10_10, libs__int_emu__V_11_11);
    }
#line 118 "int_emu.m"
    {
#line 118 "int_emu.m"
      return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_9_9, libs__int_emu__Z_8);
    }
#line 117 "int_emu.m"
    return libs__int_emu__succeeded;
#line 117 "int_emu.m"
  }
#line 47 "int_emu.m"
}

#line 45 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__mod_4_p_0(
#line 45 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 45 "int_emu.m"
  MR_Integer libs__int_emu__X_6,
#line 45 "int_emu.m"
  MR_Integer libs__int_emu__Y_7,
#line 45 "int_emu.m"
  MR_Integer * libs__int_emu__Z_8)
#line 45 "int_emu.m"
{
#line 114 "int_emu.m"
  {
#line 114 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 114 "int_emu.m"
    MR_Word libs__int_emu__V_9_9;
#line 114 "int_emu.m"
    MR_Word libs__int_emu__V_10_10;
#line 114 "int_emu.m"
    MR_Word libs__int_emu__V_11_11;

#line 115 "int_emu.m"
    {
#line 115 "int_emu.m"
      libs__int_emu__V_10_10 = mercury__integer__integer_1_f_0(libs__int_emu__X_6);
    }
#line 115 "int_emu.m"
    {
#line 115 "int_emu.m"
      libs__int_emu__V_11_11 = mercury__integer__integer_1_f_0(libs__int_emu__Y_7);
    }
#line 115 "int_emu.m"
    {
#line 115 "int_emu.m"
      libs__int_emu__V_9_9 = mercury__integer__mod_2_f_0(libs__int_emu__V_10_10, libs__int_emu__V_11_11);
    }
#line 115 "int_emu.m"
    {
#line 115 "int_emu.m"
      return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_9_9, libs__int_emu__Z_8);
    }
#line 114 "int_emu.m"
    return libs__int_emu__succeeded;
#line 114 "int_emu.m"
  }
#line 45 "int_emu.m"
}

#line 42 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__unchecked_quotient_4_p_0(
#line 42 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 42 "int_emu.m"
  MR_Integer libs__int_emu__X_6,
#line 42 "int_emu.m"
  MR_Integer libs__int_emu__Y_7,
#line 42 "int_emu.m"
  MR_Integer * libs__int_emu__Z_8)
#line 42 "int_emu.m"
{
#line 110 "int_emu.m"
  {
#line 110 "int_emu.m"
    MR_bool libs__int_emu__succeeded = (libs__int_emu__Y_7 == (MR_Integer) 0);
#line 110 "int_emu.m"
    MR_Word libs__int_emu__V_13_13;
#line 110 "int_emu.m"
    MR_Word libs__int_emu__V_14_14;
#line 110 "int_emu.m"
    MR_Word libs__int_emu__V_15_15;

#line 111 "int_emu.m"
    libs__int_emu__succeeded = !(libs__int_emu__succeeded);
#line 110 "int_emu.m"
    if (libs__int_emu__succeeded)
#line 110 "int_emu.m"
      {
#line 108 "int_emu.m"
        {
#line 108 "int_emu.m"
          libs__int_emu__V_14_14 = mercury__integer__integer_1_f_0(libs__int_emu__X_6);
        }
#line 108 "int_emu.m"
        {
#line 108 "int_emu.m"
          libs__int_emu__V_15_15 = mercury__integer__integer_1_f_0(libs__int_emu__Y_7);
        }
#line 108 "int_emu.m"
        {
#line 108 "int_emu.m"
          libs__int_emu__V_13_13 = mercury__integer__f_47_47_2_f_0(libs__int_emu__V_14_14, libs__int_emu__V_15_15);
        }
#line 108 "int_emu.m"
        {
#line 108 "int_emu.m"
          return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_13_13, libs__int_emu__Z_8);
        }
#line 110 "int_emu.m"
      }
#line 110 "int_emu.m"
    return libs__int_emu__succeeded;
#line 110 "int_emu.m"
  }
#line 42 "int_emu.m"
}

#line 40 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__quotient_4_p_0(
#line 40 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 40 "int_emu.m"
  MR_Integer libs__int_emu__X_6,
#line 40 "int_emu.m"
  MR_Integer libs__int_emu__Y_7,
#line 40 "int_emu.m"
  MR_Integer * libs__int_emu__Z_8)
#line 40 "int_emu.m"
{
#line 107 "int_emu.m"
  {
#line 107 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 107 "int_emu.m"
    MR_Word libs__int_emu__V_9_9;
#line 107 "int_emu.m"
    MR_Word libs__int_emu__V_10_10;
#line 107 "int_emu.m"
    MR_Word libs__int_emu__V_11_11;

#line 108 "int_emu.m"
    {
#line 108 "int_emu.m"
      libs__int_emu__V_10_10 = mercury__integer__integer_1_f_0(libs__int_emu__X_6);
    }
#line 108 "int_emu.m"
    {
#line 108 "int_emu.m"
      libs__int_emu__V_11_11 = mercury__integer__integer_1_f_0(libs__int_emu__Y_7);
    }
#line 108 "int_emu.m"
    {
#line 108 "int_emu.m"
      libs__int_emu__V_9_9 = mercury__integer__f_47_47_2_f_0(libs__int_emu__V_10_10, libs__int_emu__V_11_11);
    }
#line 108 "int_emu.m"
    {
#line 108 "int_emu.m"
      return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_9_9, libs__int_emu__Z_8);
    }
#line 107 "int_emu.m"
    return libs__int_emu__succeeded;
#line 107 "int_emu.m"
  }
#line 40 "int_emu.m"
}

#line 38 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__times_4_p_0(
#line 38 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 38 "int_emu.m"
  MR_Integer libs__int_emu__X_6,
#line 38 "int_emu.m"
  MR_Integer libs__int_emu__Y_7,
#line 38 "int_emu.m"
  MR_Integer * libs__int_emu__Z_8)
#line 38 "int_emu.m"
{
#line 104 "int_emu.m"
  {
#line 104 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 104 "int_emu.m"
    MR_Word libs__int_emu__V_9_9;
#line 104 "int_emu.m"
    MR_Word libs__int_emu__V_10_10;
#line 104 "int_emu.m"
    MR_Word libs__int_emu__V_11_11;

#line 105 "int_emu.m"
    {
#line 105 "int_emu.m"
      libs__int_emu__V_10_10 = mercury__integer__integer_1_f_0(libs__int_emu__X_6);
    }
#line 105 "int_emu.m"
    {
#line 105 "int_emu.m"
      libs__int_emu__V_11_11 = mercury__integer__integer_1_f_0(libs__int_emu__Y_7);
    }
#line 105 "int_emu.m"
    {
#line 105 "int_emu.m"
      libs__int_emu__V_9_9 = mercury__integer__f_times_2_f_0(libs__int_emu__V_10_10, libs__int_emu__V_11_11);
    }
#line 105 "int_emu.m"
    {
#line 105 "int_emu.m"
      return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_9_9, libs__int_emu__Z_8);
    }
#line 104 "int_emu.m"
    return libs__int_emu__succeeded;
#line 104 "int_emu.m"
  }
#line 38 "int_emu.m"
}

#line 36 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__minus_4_p_0(
#line 36 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 36 "int_emu.m"
  MR_Integer libs__int_emu__X_6,
#line 36 "int_emu.m"
  MR_Integer libs__int_emu__Y_7,
#line 36 "int_emu.m"
  MR_Integer * libs__int_emu__Z_8)
#line 36 "int_emu.m"
{
#line 101 "int_emu.m"
  {
#line 101 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 101 "int_emu.m"
    MR_Word libs__int_emu__V_9_9;
#line 101 "int_emu.m"
    MR_Word libs__int_emu__V_10_10;
#line 101 "int_emu.m"
    MR_Word libs__int_emu__V_11_11;

#line 102 "int_emu.m"
    {
#line 102 "int_emu.m"
      libs__int_emu__V_10_10 = mercury__integer__integer_1_f_0(libs__int_emu__X_6);
    }
#line 102 "int_emu.m"
    {
#line 102 "int_emu.m"
      libs__int_emu__V_11_11 = mercury__integer__integer_1_f_0(libs__int_emu__Y_7);
    }
#line 102 "int_emu.m"
    {
#line 102 "int_emu.m"
      libs__int_emu__V_9_9 = mercury__integer__f_minus_2_f_0(libs__int_emu__V_10_10, libs__int_emu__V_11_11);
    }
#line 102 "int_emu.m"
    {
#line 102 "int_emu.m"
      return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_9_9, libs__int_emu__Z_8);
    }
#line 101 "int_emu.m"
    return libs__int_emu__succeeded;
#line 101 "int_emu.m"
  }
#line 36 "int_emu.m"
}

#line 34 "int_emu.m"
MR_bool MR_CALL 
libs__int_emu__plus_4_p_0(
#line 34 "int_emu.m"
  MR_Word libs__int_emu__BitsPerInt_5,
#line 34 "int_emu.m"
  MR_Integer libs__int_emu__X_6,
#line 34 "int_emu.m"
  MR_Integer libs__int_emu__Y_7,
#line 34 "int_emu.m"
  MR_Integer * libs__int_emu__Z_8)
#line 34 "int_emu.m"
{
#line 98 "int_emu.m"
  {
#line 98 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 98 "int_emu.m"
    MR_Word libs__int_emu__V_9_9;
#line 98 "int_emu.m"
    MR_Word libs__int_emu__V_10_10;
#line 98 "int_emu.m"
    MR_Word libs__int_emu__V_11_11;

#line 99 "int_emu.m"
    {
#line 99 "int_emu.m"
      libs__int_emu__V_10_10 = mercury__integer__integer_1_f_0(libs__int_emu__X_6);
    }
#line 99 "int_emu.m"
    {
#line 99 "int_emu.m"
      libs__int_emu__V_11_11 = mercury__integer__integer_1_f_0(libs__int_emu__Y_7);
    }
#line 99 "int_emu.m"
    {
#line 99 "int_emu.m"
      libs__int_emu__V_9_9 = mercury__integer__f_plus_2_f_0(libs__int_emu__V_10_10, libs__int_emu__V_11_11);
    }
#line 99 "int_emu.m"
    {
#line 99 "int_emu.m"
      return libs__int_emu__succeeded = libs__int_emu__to_int_in_range_3_p_0(libs__int_emu__BitsPerInt_5, libs__int_emu__V_9_9, libs__int_emu__Z_8);
    }
#line 98 "int_emu.m"
    return libs__int_emu__succeeded;
#line 98 "int_emu.m"
  }
#line 34 "int_emu.m"
}

#line 30 "int_emu.m"
void MR_CALL 
libs__int_emu__target_bits_per_int_2_p_0(
#line 30 "int_emu.m"
  MR_Word libs__int_emu__Globals_3,
#line 30 "int_emu.m"
  MR_Word * libs__int_emu__HeadVar__2_2)
#line 30 "int_emu.m"
{
#line 83 "int_emu.m"
  {
#line 83 "int_emu.m"
    MR_bool libs__int_emu__succeeded;
#line 83 "int_emu.m"
    MR_Integer libs__int_emu__BitsPerInt_4;
#line 83 "int_emu.m"
    MR_Word libs__int_emu__Target_5;

#line 84 "int_emu.m"
    {
#line 84 "int_emu.m"
      libs__globals__get_target_2_p_0(libs__int_emu__Globals_3, &libs__int_emu__Target_5);
    }
#line 88 "int_emu.m"
#line 88 "int_emu.m"
    switch (libs__int_emu__Target_5) {
#line 88 "int_emu.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 88 "int_emu.m"
      case (MR_Integer) 0:
#line 86 "int_emu.m"
        {
#line 87 "int_emu.m"
          {
#line 87 "int_emu.m"
            libs__globals__lookup_int_option_3_p_0(libs__int_emu__Globals_3, (MR_Integer) 237, &libs__int_emu__BitsPerInt_4);
          }
#line 86 "int_emu.m"
        }
#line 88 "int_emu.m"
        break;
#line 88 "int_emu.m"
      case (MR_Integer) 1:
#line 88 "int_emu.m"
      case (MR_Integer) 3:
#line 88 "int_emu.m"
      case (MR_Integer) 2:
#line 93 "int_emu.m"
        libs__int_emu__BitsPerInt_4 = (MR_Integer) 32;
#line 88 "int_emu.m"
        break;
#line 88 "int_emu.m"
    }
#line 83 "int_emu.m"
    *libs__int_emu__HeadVar__2_2 = (MR_Word) libs__int_emu__BitsPerInt_4;
#line 83 "int_emu.m"
  }
#line 30 "int_emu.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.int_emu. */
