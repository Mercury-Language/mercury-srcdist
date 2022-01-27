/*
** Automatically generated from `timestamp.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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




#line 67 "libs.timestamp.c"
static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0;

#line 70 "libs.timestamp.c"
static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1;

#line 73 "libs.timestamp.c"
static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_value_ordered_maybe_return_timestamp_0[2];

#line 76 "libs.timestamp.c"
static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_name_ordered_maybe_return_timestamp_0[2];

#line 79 "libs.timestamp.c"
static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_maybe_return_timestamp_0[2];

#line 82 "libs.timestamp.c"
static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_timestamp_0[1];

#line 85 "libs.timestamp.c"
static const MR_NotagFunctorDesc libs__timestamp__libs__timestamp__notag_functor_desc_timestamp_0;

#line 88 "libs.timestamp.c"
static MR_bool MR_CALL 
libs__timestamp____Unify____maybe_return_timestamp_0_0_10001(
#line 91 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_1,
#line 93 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2);

#line 96 "libs.timestamp.c"
static void MR_CALL 
libs__timestamp____Compare____maybe_return_timestamp_0_0_10001(
#line 99 "libs.timestamp.c"
  MR_Box * libs__timestamp__wrapper_arg_1,
#line 101 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2,
#line 103 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_3);

#line 106 "libs.timestamp.c"
static MR_bool MR_CALL 
libs__timestamp____Unify____timestamp_0_0_10001(
#line 109 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_1,
#line 111 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2);

#line 114 "libs.timestamp.c"
static void MR_CALL 
libs__timestamp____Compare____timestamp_0_0_10001(
#line 117 "libs.timestamp.c"
  MR_Box * libs__timestamp__wrapper_arg_1,
#line 119 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2,
#line 121 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_3);

#line 205 "timestamp.m"
static MR_bool MR_CALL 
libs__timestamp__plausible_timestamp_char_1_p_0(
#line 205 "timestamp.m"
  MR_Char libs__timestamp__Char_2);

#line 89 "timestamp.m"
static MR_String MR_CALL 
libs__timestamp__gmtime_to_timestamp_2_9_f_0(
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__Yr_1,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__Mnt_2,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__MD_3,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__Hrs_4,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__Min_5,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__Sec_6,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__YD_7,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__WD_8,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__N_9);

#line 167 "timestamp.m"
static MR_bool MR_CALL 
libs__timestamp__string_to_timestamp_1_f_0_1(
#line 167 "timestamp.m"
  MR_Box libs__timestamp__closure_arg,
#line 167 "timestamp.m"
  MR_Box libs__timestamp__wrapper_arg_1);


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



#include "libs.timestamp.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "array.mh"
#include "array.mh"



#line 203 "libs.timestamp.c"
static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0 = {
  (MR_String) "do_return_timestamp",
  (MR_Integer) 0
};

#line 209 "libs.timestamp.c"
static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1 = {
  (MR_String) "do_not_return_timestamp",
  (MR_Integer) 1
};

#line 215 "libs.timestamp.c"
static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_value_ordered_maybe_return_timestamp_0[2] = {
  &libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0,
  &libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1
};

#line 221 "libs.timestamp.c"
static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_name_ordered_maybe_return_timestamp_0[2] = {
  &libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1,
  &libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0
};

#line 227 "libs.timestamp.c"
static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_maybe_return_timestamp_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 233 "libs.timestamp.c"
const MR_TypeCtorInfo_Struct libs__timestamp__libs__timestamp__type_ctor_info_maybe_return_timestamp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__timestamp____Unify____maybe_return_timestamp_0_0_10001)),
  ((MR_Box) (libs__timestamp____Compare____maybe_return_timestamp_0_0_10001)),
  (MR_String) "libs.timestamp",
  (MR_String) "maybe_return_timestamp",
  {
    libs__timestamp__libs__timestamp__enum_name_ordered_maybe_return_timestamp_0
  },
  {
    libs__timestamp__libs__timestamp__enum_value_ordered_maybe_return_timestamp_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__timestamp__libs__timestamp__functor_number_map_maybe_return_timestamp_0
};

#line 254 "libs.timestamp.c"
static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_timestamp_0[1] = {
  (MR_Integer) 0
};

#line 259 "libs.timestamp.c"
static const MR_NotagFunctorDesc libs__timestamp__libs__timestamp__notag_functor_desc_timestamp_0 = {
  (MR_String) "timestamp",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 266 "libs.timestamp.c"
const MR_TypeCtorInfo_Struct libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (libs__timestamp____Unify____timestamp_0_0_10001)),
  ((MR_Box) (libs__timestamp____Compare____timestamp_0_0_10001)),
  (MR_String) "libs.timestamp",
  (MR_String) "timestamp",
  {
    &libs__timestamp__libs__timestamp__notag_functor_desc_timestamp_0
  },
  {
    &libs__timestamp__libs__timestamp__notag_functor_desc_timestamp_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__timestamp__libs__timestamp__functor_number_map_timestamp_0
};

#line 287 "libs.timestamp.c"
static MR_bool MR_CALL 
libs__timestamp____Unify____maybe_return_timestamp_0_0_10001(
#line 290 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_1,
#line 292 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2)
#line 294 "libs.timestamp.c"
{
#line 296 "libs.timestamp.c"
  {
#line 298 "libs.timestamp.c"
    MR_bool libs__timestamp__succeeded;

#line 301 "libs.timestamp.c"
    {
#line 303 "libs.timestamp.c"
      libs__timestamp__succeeded = libs__timestamp____Unify____maybe_return_timestamp_0_0(((MR_Word) libs__timestamp__wrapper_arg_1), ((MR_Word) libs__timestamp__wrapper_arg_2));
    }
#line 306 "libs.timestamp.c"
    return libs__timestamp__succeeded;
#line 308 "libs.timestamp.c"
  }
#line 310 "libs.timestamp.c"
}

#line 313 "libs.timestamp.c"
static void MR_CALL 
libs__timestamp____Compare____maybe_return_timestamp_0_0_10001(
#line 316 "libs.timestamp.c"
  MR_Box * libs__timestamp__wrapper_arg_1,
#line 318 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2,
#line 320 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_3)
#line 322 "libs.timestamp.c"
{
#line 324 "libs.timestamp.c"
  {
#line 326 "libs.timestamp.c"
    MR_Word libs__timestamp__conv0_HeadVar__1_1;

#line 329 "libs.timestamp.c"
    {
#line 331 "libs.timestamp.c"
      libs__timestamp____Compare____maybe_return_timestamp_0_0(&libs__timestamp__conv0_HeadVar__1_1, ((MR_Word) libs__timestamp__wrapper_arg_2), ((MR_Word) libs__timestamp__wrapper_arg_3));
    }
#line 334 "libs.timestamp.c"
    *libs__timestamp__wrapper_arg_1 = ((MR_Box) (libs__timestamp__conv0_HeadVar__1_1));
#line 336 "libs.timestamp.c"
  }
#line 338 "libs.timestamp.c"
}

#line 341 "libs.timestamp.c"
static MR_bool MR_CALL 
libs__timestamp____Unify____timestamp_0_0_10001(
#line 344 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_1,
#line 346 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2)
#line 348 "libs.timestamp.c"
{
#line 350 "libs.timestamp.c"
  {
#line 352 "libs.timestamp.c"
    MR_bool libs__timestamp__succeeded;

#line 355 "libs.timestamp.c"
    {
#line 357 "libs.timestamp.c"
      libs__timestamp__succeeded = libs__timestamp____Unify____timestamp_0_0(((MR_Word) libs__timestamp__wrapper_arg_1), ((MR_Word) libs__timestamp__wrapper_arg_2));
    }
#line 360 "libs.timestamp.c"
    return libs__timestamp__succeeded;
#line 362 "libs.timestamp.c"
  }
#line 364 "libs.timestamp.c"
}

#line 367 "libs.timestamp.c"
static void MR_CALL 
libs__timestamp____Compare____timestamp_0_0_10001(
#line 370 "libs.timestamp.c"
  MR_Box * libs__timestamp__wrapper_arg_1,
#line 372 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2,
#line 374 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_3)
#line 376 "libs.timestamp.c"
{
#line 378 "libs.timestamp.c"
  {
#line 380 "libs.timestamp.c"
    MR_Word libs__timestamp__conv0_HeadVar__1_1;

#line 383 "libs.timestamp.c"
    {
#line 385 "libs.timestamp.c"
      libs__timestamp____Compare____timestamp_0_0(&libs__timestamp__conv0_HeadVar__1_1, ((MR_Word) libs__timestamp__wrapper_arg_2), ((MR_Word) libs__timestamp__wrapper_arg_3));
    }
#line 388 "libs.timestamp.c"
    *libs__timestamp__wrapper_arg_1 = ((MR_Box) (libs__timestamp__conv0_HeadVar__1_1));
#line 390 "libs.timestamp.c"
  }
#line 392 "libs.timestamp.c"
}

#line 75 "timestamp.m"
void MR_CALL 
libs__timestamp____Compare____timestamp_0_0(
#line 75 "timestamp.m"
  MR_Word * libs__timestamp__HeadVar__1_1,
#line 75 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__2_2,
#line 75 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__3_3)
#line 75 "timestamp.m"
{
#line 75 "timestamp.m"
  {
#line 75 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 75 "timestamp.m"
    MR_Integer libs__timestamp__CastX_6 = (MR_Integer) libs__timestamp__HeadVar__2_2;
#line 75 "timestamp.m"
    MR_Integer libs__timestamp__CastY_7 = (MR_Integer) libs__timestamp__HeadVar__3_3;

#line 75 "timestamp.m"
    libs__timestamp__succeeded = (libs__timestamp__CastX_6 == libs__timestamp__CastY_7);
#line 75 "timestamp.m"
    if (libs__timestamp__succeeded)
#line 419 "libs.timestamp.c"
      *libs__timestamp__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "timestamp.m"
    else
#line 75 "timestamp.m"
      {
#line 75 "timestamp.m"
        MR_String libs__timestamp__V_4_4 = (MR_String) libs__timestamp__HeadVar__2_2;
#line 75 "timestamp.m"
        MR_String libs__timestamp__V_5_5 = (MR_String) libs__timestamp__HeadVar__3_3;

#line 75 "timestamp.m"
        {
#line 75 "timestamp.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(libs__timestamp__HeadVar__1_1, libs__timestamp__V_4_4, libs__timestamp__V_5_5);
#line 75 "timestamp.m"
          return;
        }
#line 75 "timestamp.m"
      }
#line 75 "timestamp.m"
  }
#line 75 "timestamp.m"
}

#line 75 "timestamp.m"
MR_bool MR_CALL 
libs__timestamp____Unify____timestamp_0_0(
#line 75 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__1_1,
#line 75 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__2_2)
#line 75 "timestamp.m"
{
#line 75 "timestamp.m"
  {
#line 75 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 75 "timestamp.m"
    MR_Integer libs__timestamp__CastX_5 = (MR_Integer) libs__timestamp__HeadVar__1_1;
#line 75 "timestamp.m"
    MR_Integer libs__timestamp__CastY_6 = (MR_Integer) libs__timestamp__HeadVar__2_2;

#line 75 "timestamp.m"
    libs__timestamp__succeeded = (libs__timestamp__CastX_5 == libs__timestamp__CastY_6);
#line 75 "timestamp.m"
    if (libs__timestamp__succeeded)
#line 75 "timestamp.m"
      libs__timestamp__succeeded = MR_TRUE;
#line 75 "timestamp.m"
    else
#line 75 "timestamp.m"
      {
#line 75 "timestamp.m"
        MR_String libs__timestamp__V_3_3 = (MR_String) libs__timestamp__HeadVar__1_1;
#line 75 "timestamp.m"
        MR_String libs__timestamp__V_4_4 = (MR_String) libs__timestamp__HeadVar__2_2;

#line 477 "libs.timestamp.c"
        libs__timestamp__succeeded = (strcmp(libs__timestamp__V_3_3, libs__timestamp__V_4_4) == 0);
#line 75 "timestamp.m"
      }
#line 75 "timestamp.m"
    return libs__timestamp__succeeded;
#line 75 "timestamp.m"
  }
#line 75 "timestamp.m"
}

#line 22 "timestamp.m"
void MR_CALL 
libs__timestamp____Compare____maybe_return_timestamp_0_0(
#line 22 "timestamp.m"
  MR_Word * libs__timestamp__HeadVar__1_1,
#line 22 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__2_2,
#line 22 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__3_3)
#line 22 "timestamp.m"
{
#line 22 "timestamp.m"
  {
#line 22 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 22 "timestamp.m"
    MR_Integer libs__timestamp__Cast_HeadVar1_4 = (MR_Integer) libs__timestamp__HeadVar__2_2;
#line 22 "timestamp.m"
    MR_Integer libs__timestamp__Cast_HeadVar2_5 = (MR_Integer) libs__timestamp__HeadVar__3_3;

#line 22 "timestamp.m"
    {
#line 22 "timestamp.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__timestamp__HeadVar__1_1, libs__timestamp__Cast_HeadVar1_4, libs__timestamp__Cast_HeadVar2_5);
#line 22 "timestamp.m"
      return;
    }
#line 22 "timestamp.m"
  }
#line 22 "timestamp.m"
}

#line 22 "timestamp.m"
MR_bool MR_CALL 
libs__timestamp____Unify____maybe_return_timestamp_0_0(
#line 22 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__2_1,
#line 22 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__2_2)
#line 22 "timestamp.m"
{
#line 529 "libs.timestamp.c"
  {
#line 531 "libs.timestamp.c"
    MR_bool libs__timestamp__succeeded = (libs__timestamp__HeadVar__2_1 == libs__timestamp__HeadVar__2_2);

#line 534 "libs.timestamp.c"
    return libs__timestamp__succeeded;
#line 536 "libs.timestamp.c"
  }
#line 22 "timestamp.m"
}

#line 205 "timestamp.m"
static MR_bool MR_CALL 
libs__timestamp__plausible_timestamp_char_1_p_0(
#line 205 "timestamp.m"
  MR_Char libs__timestamp__Char_2)
#line 205 "timestamp.m"
{
#line 207 "timestamp.m"
  {
#line 207 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 207 "timestamp.m"
    MR_Integer libs__timestamp__CharInt_3;
#line 207 "timestamp.m"
    MR_Integer libs__timestamp__HighestInt_4;

#line 208 "timestamp.m"
    {
#line 208 "timestamp.m"
      mercury__char__to_int_2_p_0(libs__timestamp__Char_2, &libs__timestamp__CharInt_3);
    }
#line 209 "timestamp.m"
    {
#line 209 "timestamp.m"
      mercury__char__to_int_2_p_0((MR_Char) 58, &libs__timestamp__HighestInt_4);
    }
#line 210 "timestamp.m"
    libs__timestamp__succeeded = (libs__timestamp__CharInt_3 <= libs__timestamp__HighestInt_4);
#line 207 "timestamp.m"
    return libs__timestamp__succeeded;
#line 207 "timestamp.m"
  }
#line 205 "timestamp.m"
}

#line 89 "timestamp.m"
static MR_String MR_CALL 
libs__timestamp__gmtime_to_timestamp_2_9_f_0(
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__Yr_1,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__Mnt_2,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__MD_3,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__Hrs_4,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__Min_5,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__Sec_6,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__YD_7,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__WD_8,
#line 89 "timestamp.m"
  MR_Integer libs__timestamp__N_9)
#line 89 "timestamp.m"
{
#line 96 "timestamp.m"
  {
#line 96 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 96 "timestamp.m"
    MR_String libs__timestamp__Result_10;

#line 100 "timestamp.m"
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
#line 100 "timestamp.m"
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
#line 651 "libs.timestamp.c"

		;}
#undef MR_PROC_LABEL
	 libs__timestamp__Result_10  = Result;
#line 100 "timestamp.m"
}
#line 96 "timestamp.m"
    return libs__timestamp__Result_10;
#line 96 "timestamp.m"
  }
#line 89 "timestamp.m"
}

#line 54 "timestamp.m"
MR_Word MR_CALL 
libs__timestamp__newest_timestamp_0_f_0(void)
#line 54 "timestamp.m"
{
#line 79 "timestamp.m"
  {
#line 79 "timestamp.m"
    MR_bool libs__timestamp__succeeded;

#line 79 "timestamp.m"
    return (MR_Word) ((MR_Box) ((MR_String) "9999-99-99 99:99:99"));
#line 79 "timestamp.m"
  }
#line 54 "timestamp.m"
}

#line 50 "timestamp.m"
MR_Word MR_CALL 
libs__timestamp__oldest_timestamp_0_f_0(void)
#line 50 "timestamp.m"
{
#line 78 "timestamp.m"
  {
#line 78 "timestamp.m"
    MR_bool libs__timestamp__succeeded;

#line 78 "timestamp.m"
    return (MR_Word) ((MR_Box) ((MR_String) "0000-00-00 00:00:00"));
#line 78 "timestamp.m"
  }
#line 50 "timestamp.m"
}

#line 167 "timestamp.m"
static MR_bool MR_CALL 
libs__timestamp__string_to_timestamp_1_f_0_1(
#line 167 "timestamp.m"
  MR_Box libs__timestamp__closure_arg,
#line 167 "timestamp.m"
  MR_Box libs__timestamp__wrapper_arg_1)
#line 167 "timestamp.m"
{
#line 167 "timestamp.m"
  {
#line 167 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 167 "timestamp.m"
    MR_Box libs__timestamp__closure = libs__timestamp__closure_arg;

#line 167 "timestamp.m"
    {
#line 167 "timestamp.m"
      return libs__timestamp__succeeded = libs__timestamp__plausible_timestamp_char_1_p_0(((MR_Char) (MR_Word) libs__timestamp__wrapper_arg_1));
    }
#line 167 "timestamp.m"
    return libs__timestamp__succeeded;
#line 167 "timestamp.m"
  }
#line 167 "timestamp.m"
}

#line 46 "timestamp.m"
MR_bool MR_CALL 
libs__timestamp__string_to_timestamp_1_f_0(
#line 46 "timestamp.m"
  MR_String libs__timestamp__Timestamp_3,
#line 46 "timestamp.m"
  MR_Word * libs__timestamp__HeadVar__2_2)
#line 46 "timestamp.m"
{
#line 161 "timestamp.m"
  {
#line 161 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__Month_5;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__Day_6;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__Hour_7;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__Minute_8;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__Second_9;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_11_11;
#line 161 "timestamp.m"
    MR_String libs__timestamp__V_12_12;
#line 161 "timestamp.m"
    MR_String libs__timestamp__V_13_13;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_14_14;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_15_15;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_16_16;
#line 161 "timestamp.m"
    MR_Char libs__timestamp__V_17_17;
#line 161 "timestamp.m"
    MR_String libs__timestamp__V_18_18;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_19_19;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_20_20;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_21_21;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_22_22;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_23_23;
#line 161 "timestamp.m"
    MR_Char libs__timestamp__V_24_24;
#line 161 "timestamp.m"
    MR_String libs__timestamp__V_25_25;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_26_26;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_27_27;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_28_28;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_29_29;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_30_30;
#line 161 "timestamp.m"
    MR_Char libs__timestamp__V_31_31;
#line 161 "timestamp.m"
    MR_String libs__timestamp__V_32_32;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_33_33;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_34_34;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_35_35;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_36_36;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_37_37;
#line 161 "timestamp.m"
    MR_Char libs__timestamp__V_38_38;
#line 161 "timestamp.m"
    MR_String libs__timestamp__V_39_39;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_40_40;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_41_41;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_42_42;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_43_43;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_44_44;
#line 161 "timestamp.m"
    MR_Char libs__timestamp__V_45_45;
#line 161 "timestamp.m"
    MR_String libs__timestamp__V_46_46;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_47_47;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_48_48;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_49_49;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_50_50;
#line 161 "timestamp.m"
    MR_Integer libs__timestamp__V_53_53;
#line 161 "timestamp.m"
    MR_Char libs__timestamp__V_54_54;
#line 161 "timestamp.m"
    MR_Char libs__timestamp__V_55_55;
#line 161 "timestamp.m"
    MR_Char libs__timestamp__V_56_56;
#line 161 "timestamp.m"
    MR_Char libs__timestamp__V_57_57;
#line 161 "timestamp.m"
    MR_Char libs__timestamp__V_58_58;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_4_4;

#line 161 "timestamp.m"
    *libs__timestamp__HeadVar__2_2 = (MR_Word) libs__timestamp__Timestamp_3;
#line 167 "timestamp.m"
    {
#line 167 "timestamp.m"
      libs__timestamp__succeeded = mercury__string__all_match_2_p_0((MR_Word) &libs__timestamp_scalar_common_2[0], libs__timestamp__Timestamp_3);
    }
#line 161 "timestamp.m"
    if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
      {
#line 168 "timestamp.m"
        {
#line 168 "timestamp.m"
          libs__timestamp__V_11_11 = mercury__string__length_1_f_0(libs__timestamp__Timestamp_3);
        }
#line 168 "timestamp.m"
        libs__timestamp__V_12_12 = (MR_String) "yyyy-mm-dd hh:mm:ss";
#line 168 "timestamp.m"
        {
#line 168 "timestamp.m"
          libs__timestamp__V_53_53 = mercury__string__length_1_f_0(libs__timestamp__V_12_12);
        }
#line 168 "timestamp.m"
        libs__timestamp__succeeded = (libs__timestamp__V_11_11 == libs__timestamp__V_53_53);
#line 161 "timestamp.m"
        if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
          {
#line 170 "timestamp.m"
            libs__timestamp__V_14_14 = (MR_Integer) 0;
#line 170 "timestamp.m"
            libs__timestamp__V_15_15 = (MR_Integer) 4;
#line 170 "timestamp.m"
            {
#line 170 "timestamp.m"
              libs__timestamp__V_13_13 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__V_14_14, libs__timestamp__V_15_15);
            }
#line 170 "timestamp.m"
            {
#line 170 "timestamp.m"
              libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__V_13_13, &libs__timestamp__V_4_4);
            }
#line 161 "timestamp.m"
            if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
              {
#line 172 "timestamp.m"
                libs__timestamp__V_16_16 = (MR_Integer) 4;
#line 172 "timestamp.m"
                libs__timestamp__V_17_17 = (MR_Char) 45;
#line 172 "timestamp.m"
                {
#line 172 "timestamp.m"
                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__V_16_16, &libs__timestamp__V_54_54);
                }
#line 172 "timestamp.m"
                libs__timestamp__succeeded = (libs__timestamp__V_17_17 == libs__timestamp__V_54_54);
#line 161 "timestamp.m"
                if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                  {
#line 174 "timestamp.m"
                    libs__timestamp__V_19_19 = (MR_Integer) 5;
#line 174 "timestamp.m"
                    libs__timestamp__V_20_20 = (MR_Integer) 7;
#line 174 "timestamp.m"
                    {
#line 174 "timestamp.m"
                      libs__timestamp__V_18_18 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__V_19_19, libs__timestamp__V_20_20);
                    }
#line 174 "timestamp.m"
                    {
#line 174 "timestamp.m"
                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__V_18_18, &libs__timestamp__Month_5);
                    }
#line 161 "timestamp.m"
                    if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                      {
#line 175 "timestamp.m"
                        libs__timestamp__V_21_21 = (MR_Integer) 1;
#line 175 "timestamp.m"
                        libs__timestamp__succeeded = (libs__timestamp__Month_5 >= libs__timestamp__V_21_21);
#line 161 "timestamp.m"
                        if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                          {
#line 176 "timestamp.m"
                            libs__timestamp__V_22_22 = (MR_Integer) 12;
#line 176 "timestamp.m"
                            libs__timestamp__succeeded = (libs__timestamp__Month_5 <= libs__timestamp__V_22_22);
#line 161 "timestamp.m"
                            if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                              {
#line 178 "timestamp.m"
                                libs__timestamp__V_23_23 = (MR_Integer) 7;
#line 178 "timestamp.m"
                                libs__timestamp__V_24_24 = (MR_Char) 45;
#line 178 "timestamp.m"
                                {
#line 178 "timestamp.m"
                                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__V_23_23, &libs__timestamp__V_55_55);
                                }
#line 178 "timestamp.m"
                                libs__timestamp__succeeded = (libs__timestamp__V_24_24 == libs__timestamp__V_55_55);
#line 161 "timestamp.m"
                                if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                  {
#line 180 "timestamp.m"
                                    libs__timestamp__V_26_26 = (MR_Integer) 8;
#line 180 "timestamp.m"
                                    libs__timestamp__V_27_27 = (MR_Integer) 10;
#line 180 "timestamp.m"
                                    {
#line 180 "timestamp.m"
                                      libs__timestamp__V_25_25 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__V_26_26, libs__timestamp__V_27_27);
                                    }
#line 180 "timestamp.m"
                                    {
#line 180 "timestamp.m"
                                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__V_25_25, &libs__timestamp__Day_6);
                                    }
#line 161 "timestamp.m"
                                    if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                      {
#line 181 "timestamp.m"
                                        libs__timestamp__V_28_28 = (MR_Integer) 1;
#line 181 "timestamp.m"
                                        libs__timestamp__succeeded = (libs__timestamp__Day_6 >= libs__timestamp__V_28_28);
#line 161 "timestamp.m"
                                        if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                          {
#line 182 "timestamp.m"
                                            libs__timestamp__V_29_29 = (MR_Integer) 31;
#line 182 "timestamp.m"
                                            libs__timestamp__succeeded = (libs__timestamp__Day_6 <= libs__timestamp__V_29_29);
#line 161 "timestamp.m"
                                            if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                              {
#line 184 "timestamp.m"
                                                libs__timestamp__V_30_30 = (MR_Integer) 10;
#line 184 "timestamp.m"
                                                libs__timestamp__V_31_31 = (MR_Char) 32;
#line 184 "timestamp.m"
                                                {
#line 184 "timestamp.m"
                                                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__V_30_30, &libs__timestamp__V_56_56);
                                                }
#line 184 "timestamp.m"
                                                libs__timestamp__succeeded = (libs__timestamp__V_31_31 == libs__timestamp__V_56_56);
#line 161 "timestamp.m"
                                                if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                                  {
#line 186 "timestamp.m"
                                                    libs__timestamp__V_33_33 = (MR_Integer) 11;
#line 186 "timestamp.m"
                                                    libs__timestamp__V_34_34 = (MR_Integer) 13;
#line 186 "timestamp.m"
                                                    {
#line 186 "timestamp.m"
                                                      libs__timestamp__V_32_32 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__V_33_33, libs__timestamp__V_34_34);
                                                    }
#line 186 "timestamp.m"
                                                    {
#line 186 "timestamp.m"
                                                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__V_32_32, &libs__timestamp__Hour_7);
                                                    }
#line 161 "timestamp.m"
                                                    if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                                      {
#line 187 "timestamp.m"
                                                        libs__timestamp__V_35_35 = (MR_Integer) 0;
#line 187 "timestamp.m"
                                                        libs__timestamp__succeeded = (libs__timestamp__Hour_7 >= libs__timestamp__V_35_35);
#line 161 "timestamp.m"
                                                        if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                                          {
#line 188 "timestamp.m"
                                                            libs__timestamp__V_36_36 = (MR_Integer) 23;
#line 188 "timestamp.m"
                                                            libs__timestamp__succeeded = (libs__timestamp__Hour_7 <= libs__timestamp__V_36_36);
#line 161 "timestamp.m"
                                                            if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                                              {
#line 190 "timestamp.m"
                                                                libs__timestamp__V_37_37 = (MR_Integer) 13;
#line 190 "timestamp.m"
                                                                libs__timestamp__V_38_38 = (MR_Char) 58;
#line 190 "timestamp.m"
                                                                {
#line 190 "timestamp.m"
                                                                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__V_37_37, &libs__timestamp__V_57_57);
                                                                }
#line 190 "timestamp.m"
                                                                libs__timestamp__succeeded = (libs__timestamp__V_38_38 == libs__timestamp__V_57_57);
#line 161 "timestamp.m"
                                                                if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                                                  {
#line 192 "timestamp.m"
                                                                    libs__timestamp__V_40_40 = (MR_Integer) 14;
#line 192 "timestamp.m"
                                                                    libs__timestamp__V_41_41 = (MR_Integer) 16;
#line 192 "timestamp.m"
                                                                    {
#line 192 "timestamp.m"
                                                                      libs__timestamp__V_39_39 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__V_40_40, libs__timestamp__V_41_41);
                                                                    }
#line 192 "timestamp.m"
                                                                    {
#line 192 "timestamp.m"
                                                                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__V_39_39, &libs__timestamp__Minute_8);
                                                                    }
#line 161 "timestamp.m"
                                                                    if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                                                      {
#line 193 "timestamp.m"
                                                                        libs__timestamp__V_42_42 = (MR_Integer) 0;
#line 193 "timestamp.m"
                                                                        libs__timestamp__succeeded = (libs__timestamp__Minute_8 >= libs__timestamp__V_42_42);
#line 161 "timestamp.m"
                                                                        if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                                                          {
#line 194 "timestamp.m"
                                                                            libs__timestamp__V_43_43 = (MR_Integer) 59;
#line 194 "timestamp.m"
                                                                            libs__timestamp__succeeded = (libs__timestamp__Minute_8 <= libs__timestamp__V_43_43);
#line 161 "timestamp.m"
                                                                            if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                                                              {
#line 196 "timestamp.m"
                                                                                libs__timestamp__V_44_44 = (MR_Integer) 16;
#line 196 "timestamp.m"
                                                                                libs__timestamp__V_45_45 = (MR_Char) 58;
#line 196 "timestamp.m"
                                                                                {
#line 196 "timestamp.m"
                                                                                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__V_44_44, &libs__timestamp__V_58_58);
                                                                                }
#line 196 "timestamp.m"
                                                                                libs__timestamp__succeeded = (libs__timestamp__V_45_45 == libs__timestamp__V_58_58);
#line 161 "timestamp.m"
                                                                                if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                                                                  {
#line 198 "timestamp.m"
                                                                                    libs__timestamp__V_47_47 = (MR_Integer) 17;
#line 198 "timestamp.m"
                                                                                    libs__timestamp__V_48_48 = (MR_Integer) 19;
#line 198 "timestamp.m"
                                                                                    {
#line 198 "timestamp.m"
                                                                                      libs__timestamp__V_46_46 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__V_47_47, libs__timestamp__V_48_48);
                                                                                    }
#line 198 "timestamp.m"
                                                                                    {
#line 198 "timestamp.m"
                                                                                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__V_46_46, &libs__timestamp__Second_9);
                                                                                    }
#line 161 "timestamp.m"
                                                                                    if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                                                                      {
#line 199 "timestamp.m"
                                                                                        libs__timestamp__V_49_49 = (MR_Integer) 0;
#line 199 "timestamp.m"
                                                                                        libs__timestamp__succeeded = (libs__timestamp__Second_9 >= libs__timestamp__V_49_49);
#line 161 "timestamp.m"
                                                                                        if (libs__timestamp__succeeded)
#line 161 "timestamp.m"
                                                                                          {
#line 200 "timestamp.m"
                                                                                            libs__timestamp__V_50_50 = (MR_Integer) 61;
#line 200 "timestamp.m"
                                                                                            libs__timestamp__succeeded = (libs__timestamp__Second_9 <= libs__timestamp__V_50_50);
#line 161 "timestamp.m"
                                                                                          }
#line 161 "timestamp.m"
                                                                                      }
#line 161 "timestamp.m"
                                                                                  }
#line 161 "timestamp.m"
                                                                              }
#line 161 "timestamp.m"
                                                                          }
#line 161 "timestamp.m"
                                                                      }
#line 161 "timestamp.m"
                                                                  }
#line 161 "timestamp.m"
                                                              }
#line 161 "timestamp.m"
                                                          }
#line 161 "timestamp.m"
                                                      }
#line 161 "timestamp.m"
                                                  }
#line 161 "timestamp.m"
                                              }
#line 161 "timestamp.m"
                                          }
#line 161 "timestamp.m"
                                      }
#line 161 "timestamp.m"
                                  }
#line 161 "timestamp.m"
                              }
#line 161 "timestamp.m"
                          }
#line 161 "timestamp.m"
                      }
#line 161 "timestamp.m"
                  }
#line 161 "timestamp.m"
              }
#line 161 "timestamp.m"
          }
#line 161 "timestamp.m"
      }
#line 161 "timestamp.m"
    return libs__timestamp__succeeded;
#line 161 "timestamp.m"
  }
#line 46 "timestamp.m"
}

#line 41 "timestamp.m"
MR_String MR_CALL 
libs__timestamp__timestamp_to_string_1_f_0(
#line 41 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__1_1)
#line 41 "timestamp.m"
{
#line 159 "timestamp.m"
  {
#line 159 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 159 "timestamp.m"
    MR_String libs__timestamp__Timestamp_3 = (MR_String) libs__timestamp__HeadVar__1_1;

#line 159 "timestamp.m"
    return libs__timestamp__Timestamp_3;
#line 159 "timestamp.m"
  }
#line 41 "timestamp.m"
}

#line 36 "timestamp.m"
MR_Word MR_CALL 
libs__timestamp__time_t_to_timestamp_1_f_0(
#line 36 "timestamp.m"
  MR_Word libs__timestamp__Time_3)
#line 36 "timestamp.m"
{
#line 81 "timestamp.m"
  {
#line 81 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 81 "timestamp.m"
    MR_Word libs__timestamp__HeadVar__2_2;
#line 81 "timestamp.m"
    MR_Word libs__timestamp__V_4_4;
#line 81 "timestamp.m"
    MR_Integer libs__timestamp__Year_5;
#line 81 "timestamp.m"
    MR_Integer libs__timestamp__Month_6;
#line 81 "timestamp.m"
    MR_Integer libs__timestamp__MD_7;
#line 81 "timestamp.m"
    MR_Integer libs__timestamp__Hrs_8;
#line 81 "timestamp.m"
    MR_Integer libs__timestamp__Min_9;
#line 81 "timestamp.m"
    MR_Integer libs__timestamp__Sec_10;
#line 81 "timestamp.m"
    MR_Integer libs__timestamp__YD_11;
#line 81 "timestamp.m"
    MR_Integer libs__timestamp__WD_12;
#line 81 "timestamp.m"
    MR_Word libs__timestamp__DST_13;
#line 81 "timestamp.m"
    MR_String libs__timestamp__V_14_14;
#line 81 "timestamp.m"
    MR_Integer libs__timestamp__V_15_15;

#line 81 "timestamp.m"
    {
#line 81 "timestamp.m"
      libs__timestamp__V_4_4 = mercury__time__gmtime_1_f_0(libs__timestamp__Time_3);
    }
#line 85 "timestamp.m"
    libs__timestamp__Year_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 0)));
#line 85 "timestamp.m"
    libs__timestamp__Month_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 1)));
#line 85 "timestamp.m"
    libs__timestamp__MD_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 2)));
#line 85 "timestamp.m"
    libs__timestamp__Hrs_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 3)));
#line 85 "timestamp.m"
    libs__timestamp__Min_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 4)));
#line 85 "timestamp.m"
    libs__timestamp__Sec_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 5)));
#line 85 "timestamp.m"
    libs__timestamp__YD_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 6)));
#line 85 "timestamp.m"
    libs__timestamp__WD_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 7)));
#line 85 "timestamp.m"
    libs__timestamp__DST_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 8)));
#line 151 "timestamp.m"
    if ((libs__timestamp__DST_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 155 "timestamp.m"
      libs__timestamp__V_15_15 = (MR_Integer) -1;
#line 151 "timestamp.m"
    else
#line 151 "timestamp.m"
      {
#line 151 "timestamp.m"
        MR_Word libs__timestamp__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__timestamp__DST_13, (MR_Integer) 0)));

#line 151 "timestamp.m"
        if ((libs__timestamp__V_20_20 == (MR_Integer) 1))
#line 152 "timestamp.m"
          libs__timestamp__V_15_15 = (MR_Integer) 1;
#line 151 "timestamp.m"
        else
#line 154 "timestamp.m"
          libs__timestamp__V_15_15 = (MR_Integer) 0;
#line 151 "timestamp.m"
      }
#line 100 "timestamp.m"
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
	N =  libs__timestamp__V_15_15 ;
		{
#line 100 "timestamp.m"
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
#line 1332 "libs.timestamp.c"

		;}
#undef MR_PROC_LABEL
	 libs__timestamp__V_14_14  = Result;
#line 100 "timestamp.m"
}
#line 86 "timestamp.m"
    libs__timestamp__HeadVar__2_2 = (MR_Word) libs__timestamp__V_14_14;
#line 81 "timestamp.m"
    return libs__timestamp__HeadVar__2_2;
#line 81 "timestamp.m"
  }
#line 36 "timestamp.m"
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
	MR_register_type_ctor_info(&libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0);
}

void mercury__libs__timestamp__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.timestamp. */
