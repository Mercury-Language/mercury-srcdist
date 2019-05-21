/*
** Automatically generated from `timestamp.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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


/* :- module libs.timestamp. */
/* :- implementation. */

/*
INIT mercury__libs__timestamp__init
ENDINIT
*/

#include "libs.timestamp.mih"


#include "libs.mih"
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
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0;

static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1;

static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_value_ordered_maybe_return_timestamp_0[2];

static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_name_ordered_maybe_return_timestamp_0[2];

static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_maybe_return_timestamp_0[2];

static const MR_PseudoTypeInfo libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_0[1];

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
  MR_Char libs__timestamp__Char_2);

static MR_String MR_CALL 
libs__timestamp__gmtime_to_timestamp_2_9_f_0(
  MR_Integer libs__timestamp__Yr_1,
  MR_Integer libs__timestamp__Mnt_2,
  MR_Integer libs__timestamp__MD_3,
  MR_Integer libs__timestamp__Hrs_4,
  MR_Integer libs__timestamp__Min_5,
  MR_Integer libs__timestamp__Sec_6,
  MR_Integer libs__timestamp__YD_7,
  MR_Integer libs__timestamp__WD_8,
  MR_Integer libs__timestamp__N_9);

static MR_bool MR_CALL 
libs__timestamp__string_to_timestamp_1_f_0_1(
  MR_Box libs__timestamp__closure_arg,
  MR_Box libs__timestamp__wrapper_arg_1);

static MR_bool MR_CALL 
libs__timestamp____Unify____maybe_return_timestamp_0_0_10001(
  MR_Box libs__timestamp__wrapper_arg_1,
  MR_Box libs__timestamp__wrapper_arg_2);

static void MR_CALL 
libs__timestamp____Compare____maybe_return_timestamp_0_0_10001(
  MR_Box * libs__timestamp__wrapper_arg_1,
  MR_Box libs__timestamp__wrapper_arg_2,
  MR_Box libs__timestamp__wrapper_arg_3);

static MR_bool MR_CALL 
libs__timestamp____Unify____read_module_and_timestamps_0_0_10001(
  MR_Box libs__timestamp__wrapper_arg_1,
  MR_Box libs__timestamp__wrapper_arg_2);

static void MR_CALL 
libs__timestamp____Compare____read_module_and_timestamps_0_0_10001(
  MR_Box * libs__timestamp__wrapper_arg_1,
  MR_Box libs__timestamp__wrapper_arg_2,
  MR_Box libs__timestamp__wrapper_arg_3);

static MR_bool MR_CALL 
libs__timestamp____Unify____timestamp_0_0_10001(
  MR_Box libs__timestamp__wrapper_arg_1,
  MR_Box libs__timestamp__wrapper_arg_2);

static void MR_CALL 
libs__timestamp____Compare____timestamp_0_0_10001(
  MR_Box * libs__timestamp__wrapper_arg_1,
  MR_Box libs__timestamp__wrapper_arg_2,
  MR_Box libs__timestamp__wrapper_arg_3);


static /* final */ const MR_Box libs__timestamp_scalar_common_1[1][4];

static /* final */ const MR_Box libs__timestamp_scalar_common_2[1][3];




static /* final */ const MR_Box libs__timestamp_scalar_common_1[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box libs__timestamp_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__timestamp_scalar_common_1[0])),
    ((MR_Box) (libs__timestamp__string_to_timestamp_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "libs.timestamp.mh"



static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0 = {
  (MR_String) "do_return_timestamp",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1 = {
  (MR_String) "dont_return_timestamp",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_value_ordered_maybe_return_timestamp_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__timestamp____Unify____maybe_return_timestamp_0_0_10001)),
  ((MR_Box) (libs__timestamp____Compare____maybe_return_timestamp_0_0_10001)),
  (MR_String) "libs.timestamp",
  (MR_String) "maybe_return_timestamp",
  {     libs__timestamp__libs__timestamp__enum_name_ordered_maybe_return_timestamp_0 },
  {     libs__timestamp__libs__timestamp__enum_value_ordered_maybe_return_timestamp_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__timestamp__libs__timestamp__functor_number_map_maybe_return_timestamp_0
};

static const MR_PseudoTypeInfo libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_0[1] = {
  (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_maybe_return_timestamp_0
};

static const MR_DuFunctorDesc libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_0 = {
  (MR_String) "always_read_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_1[1] = {
  (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
};

static const MR_DuFunctorDesc libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_1 = {
  (MR_String) "dont_read_module_if_match",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_0[1] = {
  &libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_0
};

static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_1[1] = {
  &libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_1
};

static const MR_DuPtagLayout libs__timestamp__libs__timestamp__du_ptag_ordered_read_module_and_timestamps_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__timestamp____Unify____read_module_and_timestamps_0_0_10001)),
  ((MR_Box) (libs__timestamp____Compare____read_module_and_timestamps_0_0_10001)),
  (MR_String) "libs.timestamp",
  (MR_String) "read_module_and_timestamps",
  {     libs__timestamp__libs__timestamp__du_name_ordered_read_module_and_timestamps_0 },
  {     libs__timestamp__libs__timestamp__du_ptag_ordered_read_module_and_timestamps_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__timestamp__libs__timestamp__functor_number_map_read_module_and_timestamps_0
};

static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_timestamp_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc libs__timestamp__libs__timestamp__notag_functor_desc_timestamp_0 = {
  (MR_String) "timestamp",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (libs__timestamp____Unify____timestamp_0_0_10001)),
  ((MR_Box) (libs__timestamp____Compare____timestamp_0_0_10001)),
  (MR_String) "libs.timestamp",
  (MR_String) "timestamp",
  {     &libs__timestamp__libs__timestamp__notag_functor_desc_timestamp_0 },
  {     &libs__timestamp__libs__timestamp__notag_functor_desc_timestamp_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__timestamp__libs__timestamp__functor_number_map_timestamp_0
};

void MR_CALL 
libs__timestamp____Compare____timestamp_0_0(
  MR_Word * libs__timestamp__HeadVar__1_1,
  MR_Word libs__timestamp__HeadVar__2_2,
  MR_Word libs__timestamp__HeadVar__3_3)
{
  {
    MR_bool libs__timestamp__succeeded;
    MR_Integer libs__timestamp__CastX_6 = (MR_Integer) libs__timestamp__HeadVar__2_2;
    MR_Integer libs__timestamp__CastY_7 = (MR_Integer) libs__timestamp__HeadVar__3_3;

    libs__timestamp__succeeded = (libs__timestamp__CastX_6 == libs__timestamp__CastY_7);
    if (libs__timestamp__succeeded)
      *libs__timestamp__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String libs__timestamp__ArgX1_4 = (MR_String) libs__timestamp__HeadVar__2_2;
        MR_String libs__timestamp__ArgY1_5 = (MR_String) libs__timestamp__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(libs__timestamp__HeadVar__1_1, libs__timestamp__ArgX1_4, libs__timestamp__ArgY1_5);
        }
      }
  }
}

MR_bool MR_CALL 
libs__timestamp____Unify____timestamp_0_0(
  MR_Word libs__timestamp__HeadVar__1_1,
  MR_Word libs__timestamp__HeadVar__2_2)
{
  {
    MR_bool libs__timestamp__succeeded;
    MR_Integer libs__timestamp__CastX_5 = (MR_Integer) libs__timestamp__HeadVar__1_1;
    MR_Integer libs__timestamp__CastY_6 = (MR_Integer) libs__timestamp__HeadVar__2_2;

    libs__timestamp__succeeded = (libs__timestamp__CastX_5 == libs__timestamp__CastY_6);
    if (libs__timestamp__succeeded)
      libs__timestamp__succeeded = MR_TRUE;
    else
      {
        MR_String libs__timestamp__ArgX1_3 = (MR_String) libs__timestamp__HeadVar__1_1;
        MR_String libs__timestamp__ArgY1_4 = (MR_String) libs__timestamp__HeadVar__2_2;

        libs__timestamp__succeeded = (strcmp(libs__timestamp__ArgX1_3, libs__timestamp__ArgY1_4) == 0);
      }
    return libs__timestamp__succeeded;
  }
}

void MR_CALL 
libs__timestamp____Compare____read_module_and_timestamps_0_0(
  MR_Word * libs__timestamp__HeadVar__1_1,
  MR_Word libs__timestamp__HeadVar__2_2,
  MR_Word libs__timestamp__HeadVar__3_3)
{
  {
    MR_bool libs__timestamp__succeeded;
    MR_Integer libs__timestamp__CastX_12 = (MR_Integer) libs__timestamp__HeadVar__2_2;
    MR_Integer libs__timestamp__CastY_13 = (MR_Integer) libs__timestamp__HeadVar__3_3;

    libs__timestamp__succeeded = (libs__timestamp__CastX_12 == libs__timestamp__CastY_13);
    if (libs__timestamp__succeeded)
      *libs__timestamp__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) libs__timestamp__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word libs__timestamp__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__timestamp__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) libs__timestamp__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word libs__timestamp__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__timestamp__HeadVar__3_3, (MR_Integer) 0)));
            MR_Integer libs__timestamp__Var_18 = (MR_Integer) libs__timestamp__Var_16;
            MR_Integer libs__timestamp__Var_19 = (MR_Integer) libs__timestamp__ArgY1_5;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(libs__timestamp__HeadVar__1_1, libs__timestamp__Var_18, libs__timestamp__Var_19);
            }
          }
        else
          *libs__timestamp__HeadVar__1_1 = (MR_Integer) 1;
      }
    else
      {
        MR_Word libs__timestamp__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__timestamp__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) libs__timestamp__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
          *libs__timestamp__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word libs__timestamp__ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__timestamp__HeadVar__3_3, (MR_Integer) 0)));
            MR_String libs__timestamp__Var_20 = (MR_String) libs__timestamp__Var_17;
            MR_String libs__timestamp__Var_21 = (MR_String) libs__timestamp__ArgY1_11;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(libs__timestamp__HeadVar__1_1, libs__timestamp__Var_20, libs__timestamp__Var_21);
            }
          }
      }
  }
}

MR_bool MR_CALL 
libs__timestamp____Unify____read_module_and_timestamps_0_0(
  MR_Word libs__timestamp__HeadVar__1_1,
  MR_Word libs__timestamp__HeadVar__2_2)
{
  {
    MR_bool libs__timestamp__succeeded;
    MR_Integer libs__timestamp__CastX_7 = (MR_Integer) libs__timestamp__HeadVar__1_1;
    MR_Integer libs__timestamp__CastY_8 = (MR_Integer) libs__timestamp__HeadVar__2_2;

    libs__timestamp__succeeded = (libs__timestamp__CastX_7 == libs__timestamp__CastY_8);
    if (libs__timestamp__succeeded)
      libs__timestamp__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) libs__timestamp__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word libs__timestamp__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__timestamp__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word libs__timestamp__ArgY1_4;

        libs__timestamp__succeeded = ((MR_tag((MR_Word) libs__timestamp__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (libs__timestamp__succeeded)
          {
            libs__timestamp__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__timestamp__HeadVar__2_2, (MR_Integer) 0)));
            libs__timestamp__succeeded = (libs__timestamp__ArgX1_3 == libs__timestamp__ArgY1_4);
          }
      }
    else
      {
        MR_Word libs__timestamp__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__timestamp__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word libs__timestamp__ArgY1_6;
        MR_Integer libs__timestamp__CastX_11;
        MR_Integer libs__timestamp__CastY_12;

        libs__timestamp__succeeded = ((MR_tag((MR_Word) libs__timestamp__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (libs__timestamp__succeeded)
          {
            libs__timestamp__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__timestamp__HeadVar__2_2, (MR_Integer) 0)));
            libs__timestamp__CastX_11 = (MR_Integer) libs__timestamp__ArgX1_5;
            libs__timestamp__CastY_12 = (MR_Integer) libs__timestamp__ArgY1_6;
            libs__timestamp__succeeded = (libs__timestamp__CastX_11 == libs__timestamp__CastY_12);
            if (libs__timestamp__succeeded)
              libs__timestamp__succeeded = MR_TRUE;
            else
              {
                MR_String libs__timestamp__ArgX1_9 = (MR_String) libs__timestamp__ArgX1_5;
                MR_String libs__timestamp__ArgY1_10 = (MR_String) libs__timestamp__ArgY1_6;

                libs__timestamp__succeeded = (strcmp(libs__timestamp__ArgX1_9, libs__timestamp__ArgY1_10) == 0);
              }
          }
      }
    return libs__timestamp__succeeded;
  }
}

void MR_CALL 
libs__timestamp____Compare____maybe_return_timestamp_0_0(
  MR_Word * libs__timestamp__HeadVar__1_1,
  MR_Word libs__timestamp__HeadVar__2_2,
  MR_Word libs__timestamp__HeadVar__3_3)
{
  {
    MR_bool libs__timestamp__succeeded;
    MR_Integer libs__timestamp__Cast_HeadVar1_4 = (MR_Integer) libs__timestamp__HeadVar__2_2;
    MR_Integer libs__timestamp__Cast_HeadVar2_5 = (MR_Integer) libs__timestamp__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__timestamp__HeadVar__1_1, libs__timestamp__Cast_HeadVar1_4, libs__timestamp__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__timestamp____Unify____maybe_return_timestamp_0_0(
  MR_Word libs__timestamp__HeadVar__2_1,
  MR_Word libs__timestamp__HeadVar__2_2)
{
  {
    MR_bool libs__timestamp__succeeded = (libs__timestamp__HeadVar__2_1 == libs__timestamp__HeadVar__2_2);

    return libs__timestamp__succeeded;
  }
}

static MR_bool MR_CALL 
libs__timestamp__plausible_timestamp_char_1_p_0(
  MR_Char libs__timestamp__Char_2)
{
  {
    MR_bool libs__timestamp__succeeded;
    MR_Integer libs__timestamp__CharInt_3;
    MR_Integer libs__timestamp__HighestInt_4;

    {
      mercury__char__to_int_2_p_0(libs__timestamp__Char_2, &libs__timestamp__CharInt_3);
    }
    {
      mercury__char__to_int_2_p_0((MR_Char) 58, &libs__timestamp__HighestInt_4);
    }
    libs__timestamp__succeeded = (libs__timestamp__CharInt_3 <= libs__timestamp__HighestInt_4);
    return libs__timestamp__succeeded;
  }
}

static MR_String MR_CALL 
libs__timestamp__gmtime_to_timestamp_2_9_f_0(
  MR_Integer libs__timestamp__Yr_1,
  MR_Integer libs__timestamp__Mnt_2,
  MR_Integer libs__timestamp__MD_3,
  MR_Integer libs__timestamp__Hrs_4,
  MR_Integer libs__timestamp__Min_5,
  MR_Integer libs__timestamp__Sec_6,
  MR_Integer libs__timestamp__YD_7,
  MR_Integer libs__timestamp__WD_8,
  MR_Integer libs__timestamp__N_9)
{
  {
    MR_bool libs__timestamp__succeeded;
    MR_String libs__timestamp__Result_10;

{
#define MR_PROC_LABEL libs__timestamp__gmtime_to_timestamp_2_9_f_0

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

	Yr =  libs__timestamp__Yr_1 ;
	Mnt =  libs__timestamp__Mnt_2 ;
	MD =  libs__timestamp__MD_3 ;
	Hrs =  libs__timestamp__Hrs_4 ;
	Min =  libs__timestamp__Min_5 ;
	Sec =  libs__timestamp__Sec_6 ;
	YD =  libs__timestamp__YD_7 ;
	WD =  libs__timestamp__WD_8 ;
	N =  libs__timestamp__N_9 ;
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
	 libs__timestamp__Result_10  = Result;
}
    return libs__timestamp__Result_10;
  }
}

MR_Word MR_CALL 
libs__timestamp__newest_timestamp_0_f_0(void)
{
  {
    MR_bool libs__timestamp__succeeded;

    return (MR_Word) ((MR_Box) ((MR_String) "9999-99-99 99:99:99"));
  }
}

MR_Word MR_CALL 
libs__timestamp__oldest_timestamp_0_f_0(void)
{
  {
    MR_bool libs__timestamp__succeeded;

    return (MR_Word) ((MR_Box) ((MR_String) "0000-00-00 00:00:00"));
  }
}

static MR_bool MR_CALL 
libs__timestamp__string_to_timestamp_1_f_0_1(
  MR_Box libs__timestamp__closure_arg,
  MR_Box libs__timestamp__wrapper_arg_1)
{
  {
    MR_bool libs__timestamp__succeeded;
    MR_Box libs__timestamp__closure = libs__timestamp__closure_arg;

    {
      libs__timestamp__succeeded = libs__timestamp__plausible_timestamp_char_1_p_0(((MR_Char) (MR_Word) libs__timestamp__wrapper_arg_1));
    }
    return libs__timestamp__succeeded;
  }
}

MR_bool MR_CALL 
libs__timestamp__string_to_timestamp_1_f_0(
  MR_String libs__timestamp__Timestamp_3,
  MR_Word * libs__timestamp__HeadVar__2_2)
{
  {
    MR_bool libs__timestamp__succeeded;
    MR_Integer libs__timestamp__TimestampLength_4;
    MR_Integer libs__timestamp__ShouldBeTimestampLength_5;
    MR_Integer libs__timestamp__Month_7;
    MR_Integer libs__timestamp__Day_8;
    MR_Integer libs__timestamp__Hour_9;
    MR_Integer libs__timestamp__Minute_10;
    MR_Integer libs__timestamp__Second_11;
    MR_String libs__timestamp__Var_13;
    MR_String libs__timestamp__Var_14;
    MR_Integer libs__timestamp__Var_15;
    MR_Integer libs__timestamp__Var_16;
    MR_Integer libs__timestamp__Var_17;
    MR_Char libs__timestamp__Var_18;
    MR_String libs__timestamp__Var_19;
    MR_Integer libs__timestamp__Var_20;
    MR_Integer libs__timestamp__Var_21;
    MR_Integer libs__timestamp__Var_22;
    MR_Integer libs__timestamp__Var_23;
    MR_Integer libs__timestamp__Var_24;
    MR_Char libs__timestamp__Var_25;
    MR_String libs__timestamp__Var_26;
    MR_Integer libs__timestamp__Var_27;
    MR_Integer libs__timestamp__Var_28;
    MR_Integer libs__timestamp__Var_29;
    MR_Integer libs__timestamp__Var_30;
    MR_Integer libs__timestamp__Var_31;
    MR_Char libs__timestamp__Var_32;
    MR_String libs__timestamp__Var_33;
    MR_Integer libs__timestamp__Var_34;
    MR_Integer libs__timestamp__Var_35;
    MR_Integer libs__timestamp__Var_36;
    MR_Integer libs__timestamp__Var_37;
    MR_Integer libs__timestamp__Var_38;
    MR_Char libs__timestamp__Var_39;
    MR_String libs__timestamp__Var_40;
    MR_Integer libs__timestamp__Var_41;
    MR_Integer libs__timestamp__Var_42;
    MR_Integer libs__timestamp__Var_43;
    MR_Integer libs__timestamp__Var_44;
    MR_Integer libs__timestamp__Var_45;
    MR_Char libs__timestamp__Var_46;
    MR_String libs__timestamp__Var_47;
    MR_Integer libs__timestamp__Var_48;
    MR_Integer libs__timestamp__Var_49;
    MR_Integer libs__timestamp__Var_50;
    MR_Integer libs__timestamp__Var_51;
    MR_Char libs__timestamp__Var_53;
    MR_Char libs__timestamp__Var_54;
    MR_Char libs__timestamp__Var_55;
    MR_Char libs__timestamp__Var_56;
    MR_Char libs__timestamp__Var_57;
    MR_Integer libs__timestamp__Var_6;

    *libs__timestamp__HeadVar__2_2 = (MR_Word) libs__timestamp__Timestamp_3;
    {
      libs__timestamp__succeeded = mercury__string__all_match_2_p_0((MR_Word) &libs__timestamp_scalar_common_2[0], libs__timestamp__Timestamp_3);
    }
    if (libs__timestamp__succeeded)
      {
        {
          mercury__string__length_2_p_0(libs__timestamp__Timestamp_3, &libs__timestamp__TimestampLength_4);
        }
        libs__timestamp__Var_13 = (MR_String) "yyyy-mm-dd hh:mm:ss";
        {
          mercury__string__length_2_p_1(libs__timestamp__Var_13, &libs__timestamp__ShouldBeTimestampLength_5);
        }
        libs__timestamp__succeeded = (libs__timestamp__TimestampLength_4 == libs__timestamp__ShouldBeTimestampLength_5);
        if (libs__timestamp__succeeded)
          {
            libs__timestamp__Var_15 = (MR_Integer) 0;
            libs__timestamp__Var_16 = (MR_Integer) 4;
            {
              libs__timestamp__Var_14 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__Var_15, libs__timestamp__Var_16);
            }
            {
              libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__Var_14, &libs__timestamp__Var_6);
            }
            if (libs__timestamp__succeeded)
              {
                libs__timestamp__Var_17 = (MR_Integer) 4;
                libs__timestamp__Var_18 = (MR_Char) 45;
                {
                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__Var_17, &libs__timestamp__Var_53);
                }
                libs__timestamp__succeeded = (libs__timestamp__Var_18 == libs__timestamp__Var_53);
                if (libs__timestamp__succeeded)
                  {
                    libs__timestamp__Var_20 = (MR_Integer) 5;
                    libs__timestamp__Var_21 = (MR_Integer) 7;
                    {
                      libs__timestamp__Var_19 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__Var_20, libs__timestamp__Var_21);
                    }
                    {
                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__Var_19, &libs__timestamp__Month_7);
                    }
                    if (libs__timestamp__succeeded)
                      {
                        libs__timestamp__Var_22 = (MR_Integer) 1;
                        libs__timestamp__succeeded = (libs__timestamp__Month_7 >= libs__timestamp__Var_22);
                        if (libs__timestamp__succeeded)
                          {
                            libs__timestamp__Var_23 = (MR_Integer) 12;
                            libs__timestamp__succeeded = (libs__timestamp__Month_7 <= libs__timestamp__Var_23);
                            if (libs__timestamp__succeeded)
                              {
                                libs__timestamp__Var_24 = (MR_Integer) 7;
                                libs__timestamp__Var_25 = (MR_Char) 45;
                                {
                                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__Var_24, &libs__timestamp__Var_54);
                                }
                                libs__timestamp__succeeded = (libs__timestamp__Var_25 == libs__timestamp__Var_54);
                                if (libs__timestamp__succeeded)
                                  {
                                    libs__timestamp__Var_27 = (MR_Integer) 8;
                                    libs__timestamp__Var_28 = (MR_Integer) 10;
                                    {
                                      libs__timestamp__Var_26 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__Var_27, libs__timestamp__Var_28);
                                    }
                                    {
                                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__Var_26, &libs__timestamp__Day_8);
                                    }
                                    if (libs__timestamp__succeeded)
                                      {
                                        libs__timestamp__Var_29 = (MR_Integer) 1;
                                        libs__timestamp__succeeded = (libs__timestamp__Day_8 >= libs__timestamp__Var_29);
                                        if (libs__timestamp__succeeded)
                                          {
                                            libs__timestamp__Var_30 = (MR_Integer) 31;
                                            libs__timestamp__succeeded = (libs__timestamp__Day_8 <= libs__timestamp__Var_30);
                                            if (libs__timestamp__succeeded)
                                              {
                                                libs__timestamp__Var_31 = (MR_Integer) 10;
                                                libs__timestamp__Var_32 = (MR_Char) 32;
                                                {
                                                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__Var_31, &libs__timestamp__Var_55);
                                                }
                                                libs__timestamp__succeeded = (libs__timestamp__Var_32 == libs__timestamp__Var_55);
                                                if (libs__timestamp__succeeded)
                                                  {
                                                    libs__timestamp__Var_34 = (MR_Integer) 11;
                                                    libs__timestamp__Var_35 = (MR_Integer) 13;
                                                    {
                                                      libs__timestamp__Var_33 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__Var_34, libs__timestamp__Var_35);
                                                    }
                                                    {
                                                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__Var_33, &libs__timestamp__Hour_9);
                                                    }
                                                    if (libs__timestamp__succeeded)
                                                      {
                                                        libs__timestamp__Var_36 = (MR_Integer) 0;
                                                        libs__timestamp__succeeded = (libs__timestamp__Hour_9 >= libs__timestamp__Var_36);
                                                        if (libs__timestamp__succeeded)
                                                          {
                                                            libs__timestamp__Var_37 = (MR_Integer) 23;
                                                            libs__timestamp__succeeded = (libs__timestamp__Hour_9 <= libs__timestamp__Var_37);
                                                            if (libs__timestamp__succeeded)
                                                              {
                                                                libs__timestamp__Var_38 = (MR_Integer) 13;
                                                                libs__timestamp__Var_39 = (MR_Char) 58;
                                                                {
                                                                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__Var_38, &libs__timestamp__Var_56);
                                                                }
                                                                libs__timestamp__succeeded = (libs__timestamp__Var_39 == libs__timestamp__Var_56);
                                                                if (libs__timestamp__succeeded)
                                                                  {
                                                                    libs__timestamp__Var_41 = (MR_Integer) 14;
                                                                    libs__timestamp__Var_42 = (MR_Integer) 16;
                                                                    {
                                                                      libs__timestamp__Var_40 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__Var_41, libs__timestamp__Var_42);
                                                                    }
                                                                    {
                                                                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__Var_40, &libs__timestamp__Minute_10);
                                                                    }
                                                                    if (libs__timestamp__succeeded)
                                                                      {
                                                                        libs__timestamp__Var_43 = (MR_Integer) 0;
                                                                        libs__timestamp__succeeded = (libs__timestamp__Minute_10 >= libs__timestamp__Var_43);
                                                                        if (libs__timestamp__succeeded)
                                                                          {
                                                                            libs__timestamp__Var_44 = (MR_Integer) 59;
                                                                            libs__timestamp__succeeded = (libs__timestamp__Minute_10 <= libs__timestamp__Var_44);
                                                                            if (libs__timestamp__succeeded)
                                                                              {
                                                                                libs__timestamp__Var_45 = (MR_Integer) 16;
                                                                                libs__timestamp__Var_46 = (MR_Char) 58;
                                                                                {
                                                                                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__Var_45, &libs__timestamp__Var_57);
                                                                                }
                                                                                libs__timestamp__succeeded = (libs__timestamp__Var_46 == libs__timestamp__Var_57);
                                                                                if (libs__timestamp__succeeded)
                                                                                  {
                                                                                    libs__timestamp__Var_48 = (MR_Integer) 17;
                                                                                    libs__timestamp__Var_49 = (MR_Integer) 19;
                                                                                    {
                                                                                      libs__timestamp__Var_47 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__Var_48, libs__timestamp__Var_49);
                                                                                    }
                                                                                    {
                                                                                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__Var_47, &libs__timestamp__Second_11);
                                                                                    }
                                                                                    if (libs__timestamp__succeeded)
                                                                                      {
                                                                                        libs__timestamp__Var_50 = (MR_Integer) 0;
                                                                                        libs__timestamp__succeeded = (libs__timestamp__Second_11 >= libs__timestamp__Var_50);
                                                                                        if (libs__timestamp__succeeded)
                                                                                          {
                                                                                            libs__timestamp__Var_51 = (MR_Integer) 61;
                                                                                            libs__timestamp__succeeded = (libs__timestamp__Second_11 <= libs__timestamp__Var_51);
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
    return libs__timestamp__succeeded;
  }
}

MR_String MR_CALL 
libs__timestamp__timestamp_to_string_1_f_0(
  MR_Word libs__timestamp__HeadVar__1_1)
{
  {
    MR_bool libs__timestamp__succeeded;
    MR_String libs__timestamp__Timestamp_3 = (MR_String) libs__timestamp__HeadVar__1_1;

    return libs__timestamp__Timestamp_3;
  }
}

MR_Word MR_CALL 
libs__timestamp__time_t_to_timestamp_1_f_0(
  MR_Word libs__timestamp__Time_3)
{
  {
    MR_bool libs__timestamp__succeeded;
    MR_Word libs__timestamp__HeadVar__2_2;
    MR_Word libs__timestamp__Var_4;
    MR_Integer libs__timestamp__Year_5;
    MR_Integer libs__timestamp__Month_6;
    MR_Integer libs__timestamp__MD_7;
    MR_Integer libs__timestamp__Hrs_8;
    MR_Integer libs__timestamp__Min_9;
    MR_Integer libs__timestamp__Sec_10;
    MR_Integer libs__timestamp__YD_11;
    MR_Integer libs__timestamp__WD_12;
    MR_Word libs__timestamp__DST_13;
    MR_String libs__timestamp__Var_14;
    MR_Integer libs__timestamp__Var_15;

    {
      libs__timestamp__Var_4 = mercury__time__gmtime_1_f_0(libs__timestamp__Time_3);
    }
    libs__timestamp__Year_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__Var_4, (MR_Integer) 0)));
    libs__timestamp__Month_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__Var_4, (MR_Integer) 1)));
    libs__timestamp__MD_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__Var_4, (MR_Integer) 2)));
    libs__timestamp__Hrs_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__Var_4, (MR_Integer) 3)));
    libs__timestamp__Min_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__Var_4, (MR_Integer) 4)));
    libs__timestamp__Sec_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__Var_4, (MR_Integer) 5)));
    libs__timestamp__YD_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__Var_4, (MR_Integer) 6)));
    libs__timestamp__WD_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__Var_4, (MR_Integer) 7)));
    libs__timestamp__DST_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__timestamp__Var_4, (MR_Integer) 8)));
    if ((libs__timestamp__DST_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__timestamp__Var_15 = (MR_Integer) -1;
    else
      {
        MR_Word libs__timestamp__DST_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__timestamp__DST_13, (MR_Integer) 0)));

        switch (libs__timestamp__DST_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            libs__timestamp__Var_15 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            libs__timestamp__Var_15 = (MR_Integer) 0;
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

	Yr =  libs__timestamp__Year_5 ;
	Mnt =  libs__timestamp__Month_6 ;
	MD =  libs__timestamp__MD_7 ;
	Hrs =  libs__timestamp__Hrs_8 ;
	Min =  libs__timestamp__Min_9 ;
	Sec =  libs__timestamp__Sec_10 ;
	YD =  libs__timestamp__YD_11 ;
	WD =  libs__timestamp__WD_12 ;
	N =  libs__timestamp__Var_15 ;
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
	 libs__timestamp__Var_14  = Result;
}
    libs__timestamp__HeadVar__2_2 = (MR_Word) libs__timestamp__Var_14;
    return libs__timestamp__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
libs__timestamp____Unify____maybe_return_timestamp_0_0_10001(
  MR_Box libs__timestamp__wrapper_arg_1,
  MR_Box libs__timestamp__wrapper_arg_2)
{
  {
    MR_bool libs__timestamp__succeeded;

    {
      libs__timestamp__succeeded = libs__timestamp____Unify____maybe_return_timestamp_0_0(((MR_Word) libs__timestamp__wrapper_arg_1), ((MR_Word) libs__timestamp__wrapper_arg_2));
    }
    return libs__timestamp__succeeded;
  }
}

static void MR_CALL 
libs__timestamp____Compare____maybe_return_timestamp_0_0_10001(
  MR_Box * libs__timestamp__wrapper_arg_1,
  MR_Box libs__timestamp__wrapper_arg_2,
  MR_Box libs__timestamp__wrapper_arg_3)
{
  {
    MR_Word libs__timestamp__conv0_HeadVar__1_1;

    {
      libs__timestamp____Compare____maybe_return_timestamp_0_0(&libs__timestamp__conv0_HeadVar__1_1, ((MR_Word) libs__timestamp__wrapper_arg_2), ((MR_Word) libs__timestamp__wrapper_arg_3));
    }
    *libs__timestamp__wrapper_arg_1 = ((MR_Box) (libs__timestamp__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__timestamp____Unify____read_module_and_timestamps_0_0_10001(
  MR_Box libs__timestamp__wrapper_arg_1,
  MR_Box libs__timestamp__wrapper_arg_2)
{
  {
    MR_bool libs__timestamp__succeeded;

    {
      libs__timestamp__succeeded = libs__timestamp____Unify____read_module_and_timestamps_0_0(((MR_Word) libs__timestamp__wrapper_arg_1), ((MR_Word) libs__timestamp__wrapper_arg_2));
    }
    return libs__timestamp__succeeded;
  }
}

static void MR_CALL 
libs__timestamp____Compare____read_module_and_timestamps_0_0_10001(
  MR_Box * libs__timestamp__wrapper_arg_1,
  MR_Box libs__timestamp__wrapper_arg_2,
  MR_Box libs__timestamp__wrapper_arg_3)
{
  {
    MR_Word libs__timestamp__conv0_HeadVar__1_1;

    {
      libs__timestamp____Compare____read_module_and_timestamps_0_0(&libs__timestamp__conv0_HeadVar__1_1, ((MR_Word) libs__timestamp__wrapper_arg_2), ((MR_Word) libs__timestamp__wrapper_arg_3));
    }
    *libs__timestamp__wrapper_arg_1 = ((MR_Box) (libs__timestamp__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__timestamp____Unify____timestamp_0_0_10001(
  MR_Box libs__timestamp__wrapper_arg_1,
  MR_Box libs__timestamp__wrapper_arg_2)
{
  {
    MR_bool libs__timestamp__succeeded;

    {
      libs__timestamp__succeeded = libs__timestamp____Unify____timestamp_0_0(((MR_Word) libs__timestamp__wrapper_arg_1), ((MR_Word) libs__timestamp__wrapper_arg_2));
    }
    return libs__timestamp__succeeded;
  }
}

static void MR_CALL 
libs__timestamp____Compare____timestamp_0_0_10001(
  MR_Box * libs__timestamp__wrapper_arg_1,
  MR_Box libs__timestamp__wrapper_arg_2,
  MR_Box libs__timestamp__wrapper_arg_3)
{
  {
    MR_Word libs__timestamp__conv0_HeadVar__1_1;

    {
      libs__timestamp____Compare____timestamp_0_0(&libs__timestamp__conv0_HeadVar__1_1, ((MR_Word) libs__timestamp__wrapper_arg_2), ((MR_Word) libs__timestamp__wrapper_arg_3));
    }
    *libs__timestamp__wrapper_arg_1 = ((MR_Box) (libs__timestamp__conv0_HeadVar__1_1));
  }
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

/* :- end_module libs.timestamp. */
