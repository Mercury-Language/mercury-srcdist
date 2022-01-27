/*
** Automatically generated from `timestamp.m'
** by the Mercury compiler,
** version DEV
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
#include "integer.mih"
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




#line 68 "libs.timestamp.c"
static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0;

#line 71 "libs.timestamp.c"
static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1;

#line 74 "libs.timestamp.c"
static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_value_ordered_maybe_return_timestamp_0[2];

#line 77 "libs.timestamp.c"
static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_name_ordered_maybe_return_timestamp_0[2];

#line 80 "libs.timestamp.c"
static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_maybe_return_timestamp_0[2];

#line 83 "libs.timestamp.c"
static const MR_PseudoTypeInfo libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_0[1];

#line 86 "libs.timestamp.c"
static const MR_DuFunctorDesc libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_0;

#line 89 "libs.timestamp.c"
static const MR_PseudoTypeInfo libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_1[1];

#line 92 "libs.timestamp.c"
static const MR_DuFunctorDesc libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_1;

#line 95 "libs.timestamp.c"
static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_0[1];

#line 98 "libs.timestamp.c"
static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_1[1];

#line 101 "libs.timestamp.c"
static const MR_DuPtagLayout libs__timestamp__libs__timestamp__du_ptag_ordered_read_module_and_timestamps_0[2];

#line 104 "libs.timestamp.c"
static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_name_ordered_read_module_and_timestamps_0[2];

#line 107 "libs.timestamp.c"
static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_read_module_and_timestamps_0[2];

#line 110 "libs.timestamp.c"
static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_timestamp_0[1];

#line 113 "libs.timestamp.c"
static const MR_NotagFunctorDesc libs__timestamp__libs__timestamp__notag_functor_desc_timestamp_0;

#line 116 "libs.timestamp.c"
static MR_bool MR_CALL 
libs__timestamp____Unify____maybe_return_timestamp_0_0_10001(
#line 119 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_1,
#line 121 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2);

#line 124 "libs.timestamp.c"
static void MR_CALL 
libs__timestamp____Compare____maybe_return_timestamp_0_0_10001(
#line 127 "libs.timestamp.c"
  MR_Box * libs__timestamp__wrapper_arg_1,
#line 129 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2,
#line 131 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_3);

#line 134 "libs.timestamp.c"
static MR_bool MR_CALL 
libs__timestamp____Unify____read_module_and_timestamps_0_0_10001(
#line 137 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_1,
#line 139 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2);

#line 142 "libs.timestamp.c"
static void MR_CALL 
libs__timestamp____Compare____read_module_and_timestamps_0_0_10001(
#line 145 "libs.timestamp.c"
  MR_Box * libs__timestamp__wrapper_arg_1,
#line 147 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2,
#line 149 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_3);

#line 152 "libs.timestamp.c"
static MR_bool MR_CALL 
libs__timestamp____Unify____timestamp_0_0_10001(
#line 155 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_1,
#line 157 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2);

#line 160 "libs.timestamp.c"
static void MR_CALL 
libs__timestamp____Compare____timestamp_0_0_10001(
#line 163 "libs.timestamp.c"
  MR_Box * libs__timestamp__wrapper_arg_1,
#line 165 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2,
#line 167 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_3);

#line 214 "timestamp.m"
static MR_bool MR_CALL 
libs__timestamp__plausible_timestamp_char_1_p_0(
#line 214 "timestamp.m"
  MR_Char libs__timestamp__Char_2);

#line 98 "timestamp.m"
static MR_String MR_CALL 
libs__timestamp__gmtime_to_timestamp_2_9_f_0(
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__Yr_1,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__Mnt_2,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__MD_3,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__Hrs_4,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__Min_5,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__Sec_6,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__YD_7,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__WD_8,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__N_9);

#line 176 "timestamp.m"
static MR_bool MR_CALL 
libs__timestamp__string_to_timestamp_1_f_0_1(
#line 176 "timestamp.m"
  MR_Box libs__timestamp__closure_arg,
#line 176 "timestamp.m"
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



#line 245 "libs.timestamp.c"
static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0 = {
  (MR_String) "do_return_timestamp",
  (MR_Integer) 0
};

#line 251 "libs.timestamp.c"
static const MR_EnumFunctorDesc libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1 = {
  (MR_String) "dont_return_timestamp",
  (MR_Integer) 1
};

#line 257 "libs.timestamp.c"
static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_value_ordered_maybe_return_timestamp_0[2] = {
  &libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0,
  &libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1
};

#line 263 "libs.timestamp.c"
static const MR_EnumFunctorDescPtr libs__timestamp__libs__timestamp__enum_name_ordered_maybe_return_timestamp_0[2] = {
  &libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_0,
  &libs__timestamp__libs__timestamp__enum_functor_desc_maybe_return_timestamp_0_1
};

#line 269 "libs.timestamp.c"
static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_maybe_return_timestamp_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 275 "libs.timestamp.c"
const MR_TypeCtorInfo_Struct libs__timestamp__libs__timestamp__type_ctor_info_maybe_return_timestamp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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

#line 292 "libs.timestamp.c"
static const MR_PseudoTypeInfo libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_0[1] = {
  (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_maybe_return_timestamp_0
};

#line 297 "libs.timestamp.c"
static const MR_DuFunctorDesc libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_0 = {
  (MR_String) "always_read_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_0,
  NULL,
  NULL,
  NULL
};

#line 312 "libs.timestamp.c"
static const MR_PseudoTypeInfo libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_1[1] = {
  (MR_PseudoTypeInfo) &libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0
};

#line 317 "libs.timestamp.c"
static const MR_DuFunctorDesc libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_1 = {
  (MR_String) "dont_read_module_if_match",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  libs__timestamp__libs__timestamp__field_types_read_module_and_timestamps_0_1,
  NULL,
  NULL,
  NULL
};

#line 332 "libs.timestamp.c"
static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_0[1] = {
  &libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_0
};

#line 337 "libs.timestamp.c"
static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_1[1] = {
  &libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_1
};

#line 342 "libs.timestamp.c"
static const MR_DuPtagLayout libs__timestamp__libs__timestamp__du_ptag_ordered_read_module_and_timestamps_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__timestamp__libs__timestamp__du_stag_ordered_read_module_and_timestamps_0_1
  }
};

#line 356 "libs.timestamp.c"
static const MR_DuFunctorDescPtr libs__timestamp__libs__timestamp__du_name_ordered_read_module_and_timestamps_0[2] = {
  &libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_0,
  &libs__timestamp__libs__timestamp__du_functor_desc_read_module_and_timestamps_0_1
};

#line 362 "libs.timestamp.c"
static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_read_module_and_timestamps_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 368 "libs.timestamp.c"
const MR_TypeCtorInfo_Struct libs__timestamp__libs__timestamp__type_ctor_info_read_module_and_timestamps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 385 "libs.timestamp.c"
static const MR_Integer libs__timestamp__libs__timestamp__functor_number_map_timestamp_0[1] = {
  (MR_Integer) 0
};

#line 390 "libs.timestamp.c"
static const MR_NotagFunctorDesc libs__timestamp__libs__timestamp__notag_functor_desc_timestamp_0 = {
  (MR_String) "timestamp",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 397 "libs.timestamp.c"
const MR_TypeCtorInfo_Struct libs__timestamp__libs__timestamp__type_ctor_info_timestamp_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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

#line 414 "libs.timestamp.c"
static MR_bool MR_CALL 
libs__timestamp____Unify____maybe_return_timestamp_0_0_10001(
#line 417 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_1,
#line 419 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2)
#line 421 "libs.timestamp.c"
{
#line 423 "libs.timestamp.c"
  {
#line 425 "libs.timestamp.c"
    MR_bool libs__timestamp__succeeded;

#line 428 "libs.timestamp.c"
    {
#line 430 "libs.timestamp.c"
      libs__timestamp__succeeded = libs__timestamp____Unify____maybe_return_timestamp_0_0(((MR_Word) libs__timestamp__wrapper_arg_1), ((MR_Word) libs__timestamp__wrapper_arg_2));
    }
#line 433 "libs.timestamp.c"
    return libs__timestamp__succeeded;
#line 435 "libs.timestamp.c"
  }
#line 437 "libs.timestamp.c"
}

#line 440 "libs.timestamp.c"
static void MR_CALL 
libs__timestamp____Compare____maybe_return_timestamp_0_0_10001(
#line 443 "libs.timestamp.c"
  MR_Box * libs__timestamp__wrapper_arg_1,
#line 445 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2,
#line 447 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_3)
#line 449 "libs.timestamp.c"
{
#line 451 "libs.timestamp.c"
  {
#line 453 "libs.timestamp.c"
    MR_Word libs__timestamp__conv0_HeadVar__1_1;

#line 456 "libs.timestamp.c"
    {
#line 458 "libs.timestamp.c"
      libs__timestamp____Compare____maybe_return_timestamp_0_0(&libs__timestamp__conv0_HeadVar__1_1, ((MR_Word) libs__timestamp__wrapper_arg_2), ((MR_Word) libs__timestamp__wrapper_arg_3));
    }
#line 461 "libs.timestamp.c"
    *libs__timestamp__wrapper_arg_1 = ((MR_Box) (libs__timestamp__conv0_HeadVar__1_1));
#line 463 "libs.timestamp.c"
  }
#line 465 "libs.timestamp.c"
}

#line 468 "libs.timestamp.c"
static MR_bool MR_CALL 
libs__timestamp____Unify____read_module_and_timestamps_0_0_10001(
#line 471 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_1,
#line 473 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2)
#line 475 "libs.timestamp.c"
{
#line 477 "libs.timestamp.c"
  {
#line 479 "libs.timestamp.c"
    MR_bool libs__timestamp__succeeded;

#line 482 "libs.timestamp.c"
    {
#line 484 "libs.timestamp.c"
      libs__timestamp__succeeded = libs__timestamp____Unify____read_module_and_timestamps_0_0(((MR_Word) libs__timestamp__wrapper_arg_1), ((MR_Word) libs__timestamp__wrapper_arg_2));
    }
#line 487 "libs.timestamp.c"
    return libs__timestamp__succeeded;
#line 489 "libs.timestamp.c"
  }
#line 491 "libs.timestamp.c"
}

#line 494 "libs.timestamp.c"
static void MR_CALL 
libs__timestamp____Compare____read_module_and_timestamps_0_0_10001(
#line 497 "libs.timestamp.c"
  MR_Box * libs__timestamp__wrapper_arg_1,
#line 499 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2,
#line 501 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_3)
#line 503 "libs.timestamp.c"
{
#line 505 "libs.timestamp.c"
  {
#line 507 "libs.timestamp.c"
    MR_Word libs__timestamp__conv0_HeadVar__1_1;

#line 510 "libs.timestamp.c"
    {
#line 512 "libs.timestamp.c"
      libs__timestamp____Compare____read_module_and_timestamps_0_0(&libs__timestamp__conv0_HeadVar__1_1, ((MR_Word) libs__timestamp__wrapper_arg_2), ((MR_Word) libs__timestamp__wrapper_arg_3));
    }
#line 515 "libs.timestamp.c"
    *libs__timestamp__wrapper_arg_1 = ((MR_Box) (libs__timestamp__conv0_HeadVar__1_1));
#line 517 "libs.timestamp.c"
  }
#line 519 "libs.timestamp.c"
}

#line 522 "libs.timestamp.c"
static MR_bool MR_CALL 
libs__timestamp____Unify____timestamp_0_0_10001(
#line 525 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_1,
#line 527 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2)
#line 529 "libs.timestamp.c"
{
#line 531 "libs.timestamp.c"
  {
#line 533 "libs.timestamp.c"
    MR_bool libs__timestamp__succeeded;

#line 536 "libs.timestamp.c"
    {
#line 538 "libs.timestamp.c"
      libs__timestamp__succeeded = libs__timestamp____Unify____timestamp_0_0(((MR_Word) libs__timestamp__wrapper_arg_1), ((MR_Word) libs__timestamp__wrapper_arg_2));
    }
#line 541 "libs.timestamp.c"
    return libs__timestamp__succeeded;
#line 543 "libs.timestamp.c"
  }
#line 545 "libs.timestamp.c"
}

#line 548 "libs.timestamp.c"
static void MR_CALL 
libs__timestamp____Compare____timestamp_0_0_10001(
#line 551 "libs.timestamp.c"
  MR_Box * libs__timestamp__wrapper_arg_1,
#line 553 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_2,
#line 555 "libs.timestamp.c"
  MR_Box libs__timestamp__wrapper_arg_3)
#line 557 "libs.timestamp.c"
{
#line 559 "libs.timestamp.c"
  {
#line 561 "libs.timestamp.c"
    MR_Word libs__timestamp__conv0_HeadVar__1_1;

#line 564 "libs.timestamp.c"
    {
#line 566 "libs.timestamp.c"
      libs__timestamp____Compare____timestamp_0_0(&libs__timestamp__conv0_HeadVar__1_1, ((MR_Word) libs__timestamp__wrapper_arg_2), ((MR_Word) libs__timestamp__wrapper_arg_3));
    }
#line 569 "libs.timestamp.c"
    *libs__timestamp__wrapper_arg_1 = ((MR_Box) (libs__timestamp__conv0_HeadVar__1_1));
#line 571 "libs.timestamp.c"
  }
#line 573 "libs.timestamp.c"
}

#line 84 "timestamp.m"
void MR_CALL 
libs__timestamp____Compare____timestamp_0_0(
#line 84 "timestamp.m"
  MR_Word * libs__timestamp__HeadVar__1_1,
#line 84 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__2_2,
#line 84 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__3_3)
#line 84 "timestamp.m"
{
#line 84 "timestamp.m"
  {
#line 84 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 84 "timestamp.m"
    MR_Integer libs__timestamp__CastX_6 = (MR_Integer) libs__timestamp__HeadVar__2_2;
#line 84 "timestamp.m"
    MR_Integer libs__timestamp__CastY_7 = (MR_Integer) libs__timestamp__HeadVar__3_3;

#line 84 "timestamp.m"
    libs__timestamp__succeeded = (libs__timestamp__CastX_6 == libs__timestamp__CastY_7);
#line 84 "timestamp.m"
    if (libs__timestamp__succeeded)
#line 600 "libs.timestamp.c"
      *libs__timestamp__HeadVar__1_1 = (MR_Integer) 0;
#line 84 "timestamp.m"
    else
#line 84 "timestamp.m"
      {
#line 84 "timestamp.m"
        MR_String libs__timestamp__V_4_4 = (MR_String) libs__timestamp__HeadVar__2_2;
#line 84 "timestamp.m"
        MR_String libs__timestamp__V_5_5 = (MR_String) libs__timestamp__HeadVar__3_3;

#line 84 "timestamp.m"
        {
#line 84 "timestamp.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(libs__timestamp__HeadVar__1_1, libs__timestamp__V_4_4, libs__timestamp__V_5_5);
#line 84 "timestamp.m"
          return;
        }
#line 84 "timestamp.m"
      }
#line 84 "timestamp.m"
  }
#line 84 "timestamp.m"
}

#line 84 "timestamp.m"
MR_bool MR_CALL 
libs__timestamp____Unify____timestamp_0_0(
#line 84 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__1_1,
#line 84 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__2_2)
#line 84 "timestamp.m"
{
#line 84 "timestamp.m"
  {
#line 84 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 84 "timestamp.m"
    MR_Integer libs__timestamp__CastX_5 = (MR_Integer) libs__timestamp__HeadVar__1_1;
#line 84 "timestamp.m"
    MR_Integer libs__timestamp__CastY_6 = (MR_Integer) libs__timestamp__HeadVar__2_2;

#line 84 "timestamp.m"
    libs__timestamp__succeeded = (libs__timestamp__CastX_5 == libs__timestamp__CastY_6);
#line 84 "timestamp.m"
    if (libs__timestamp__succeeded)
#line 84 "timestamp.m"
      libs__timestamp__succeeded = MR_TRUE;
#line 84 "timestamp.m"
    else
#line 84 "timestamp.m"
      {
#line 84 "timestamp.m"
        MR_String libs__timestamp__V_3_3 = (MR_String) libs__timestamp__HeadVar__1_1;
#line 84 "timestamp.m"
        MR_String libs__timestamp__V_4_4 = (MR_String) libs__timestamp__HeadVar__2_2;

#line 658 "libs.timestamp.c"
        libs__timestamp__succeeded = (strcmp(libs__timestamp__V_3_3, libs__timestamp__V_4_4) == 0);
#line 84 "timestamp.m"
      }
#line 84 "timestamp.m"
    return libs__timestamp__succeeded;
#line 84 "timestamp.m"
  }
#line 84 "timestamp.m"
}

#line 28 "timestamp.m"
void MR_CALL 
libs__timestamp____Compare____read_module_and_timestamps_0_0(
#line 28 "timestamp.m"
  MR_Word * libs__timestamp__HeadVar__1_1,
#line 28 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__2_2,
#line 28 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__3_3)
#line 28 "timestamp.m"
{
#line 28 "timestamp.m"
  {
#line 28 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 28 "timestamp.m"
    MR_Integer libs__timestamp__CastX_12 = (MR_Integer) libs__timestamp__HeadVar__2_2;
#line 28 "timestamp.m"
    MR_Integer libs__timestamp__CastY_13 = (MR_Integer) libs__timestamp__HeadVar__3_3;

#line 28 "timestamp.m"
    libs__timestamp__succeeded = (libs__timestamp__CastX_12 == libs__timestamp__CastY_13);
#line 28 "timestamp.m"
    if (libs__timestamp__succeeded)
#line 693 "libs.timestamp.c"
      *libs__timestamp__HeadVar__1_1 = (MR_Integer) 0;
#line 28 "timestamp.m"
    else
#line 28 "timestamp.m"
    if (((MR_tag((MR_Word) libs__timestamp__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 28 "timestamp.m"
      {
#line 28 "timestamp.m"
        MR_Word libs__timestamp__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__timestamp__HeadVar__2_2, (MR_Integer) 0)));

#line 28 "timestamp.m"
        if (((MR_tag((MR_Word) libs__timestamp__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 28 "timestamp.m"
          {
#line 28 "timestamp.m"
            MR_Word libs__timestamp__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__timestamp__HeadVar__3_3, (MR_Integer) 0)));
#line 28 "timestamp.m"
            MR_Integer libs__timestamp__V_18_18 = (MR_Integer) libs__timestamp__V_16_16;
#line 28 "timestamp.m"
            MR_Integer libs__timestamp__V_19_19 = (MR_Integer) libs__timestamp__V_5_5;

#line 28 "timestamp.m"
            {
#line 28 "timestamp.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(libs__timestamp__HeadVar__1_1, libs__timestamp__V_18_18, libs__timestamp__V_19_19);
#line 28 "timestamp.m"
              return;
            }
#line 28 "timestamp.m"
          }
#line 28 "timestamp.m"
        else
#line 726 "libs.timestamp.c"
          *libs__timestamp__HeadVar__1_1 = (MR_Integer) 1;
#line 28 "timestamp.m"
      }
#line 28 "timestamp.m"
    else
#line 28 "timestamp.m"
      {
#line 28 "timestamp.m"
        MR_Word libs__timestamp__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__timestamp__HeadVar__2_2, (MR_Integer) 0)));

#line 28 "timestamp.m"
        if (((MR_tag((MR_Word) libs__timestamp__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 739 "libs.timestamp.c"
          *libs__timestamp__HeadVar__1_1 = (MR_Integer) 2;
#line 28 "timestamp.m"
        else
#line 28 "timestamp.m"
          {
#line 28 "timestamp.m"
            MR_Word libs__timestamp__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__timestamp__HeadVar__3_3, (MR_Integer) 0)));
#line 28 "timestamp.m"
            MR_String libs__timestamp__V_20_20 = (MR_String) libs__timestamp__V_17_17;
#line 28 "timestamp.m"
            MR_String libs__timestamp__V_21_21 = (MR_String) libs__timestamp__V_11_11;

#line 28 "timestamp.m"
            {
#line 28 "timestamp.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(libs__timestamp__HeadVar__1_1, libs__timestamp__V_20_20, libs__timestamp__V_21_21);
#line 28 "timestamp.m"
              return;
            }
#line 28 "timestamp.m"
          }
#line 28 "timestamp.m"
      }
#line 28 "timestamp.m"
  }
#line 28 "timestamp.m"
}

#line 28 "timestamp.m"
MR_bool MR_CALL 
libs__timestamp____Unify____read_module_and_timestamps_0_0(
#line 28 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__1_1,
#line 28 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__2_2)
#line 28 "timestamp.m"
{
#line 28 "timestamp.m"
  {
#line 28 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 28 "timestamp.m"
    MR_Integer libs__timestamp__CastX_7 = (MR_Integer) libs__timestamp__HeadVar__1_1;
#line 28 "timestamp.m"
    MR_Integer libs__timestamp__CastY_8 = (MR_Integer) libs__timestamp__HeadVar__2_2;

#line 28 "timestamp.m"
    libs__timestamp__succeeded = (libs__timestamp__CastX_7 == libs__timestamp__CastY_8);
#line 28 "timestamp.m"
    if (libs__timestamp__succeeded)
#line 28 "timestamp.m"
      libs__timestamp__succeeded = MR_TRUE;
#line 28 "timestamp.m"
    else
#line 28 "timestamp.m"
    if (((MR_tag((MR_Word) libs__timestamp__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 28 "timestamp.m"
      {
#line 28 "timestamp.m"
        MR_Word libs__timestamp__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__timestamp__HeadVar__1_1, (MR_Integer) 0)));
#line 28 "timestamp.m"
        MR_Word libs__timestamp__V_4_4;

#line 28 "timestamp.m"
        libs__timestamp__succeeded = ((MR_tag((MR_Word) libs__timestamp__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 28 "timestamp.m"
        if (libs__timestamp__succeeded)
#line 28 "timestamp.m"
          {
#line 28 "timestamp.m"
            libs__timestamp__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__timestamp__HeadVar__2_2, (MR_Integer) 0)));
#line 811 "libs.timestamp.c"
            libs__timestamp__succeeded = (libs__timestamp__V_3_3 == libs__timestamp__V_4_4);
#line 28 "timestamp.m"
          }
#line 28 "timestamp.m"
      }
#line 28 "timestamp.m"
    else
#line 28 "timestamp.m"
      {
#line 28 "timestamp.m"
        MR_Word libs__timestamp__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__timestamp__HeadVar__1_1, (MR_Integer) 0)));
#line 28 "timestamp.m"
        MR_Word libs__timestamp__V_6_6;
#line 84 "timestamp.m"
        MR_Integer libs__timestamp__CastX_11;
#line 84 "timestamp.m"
        MR_Integer libs__timestamp__CastY_12;

#line 28 "timestamp.m"
        libs__timestamp__succeeded = ((MR_tag((MR_Word) libs__timestamp__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 28 "timestamp.m"
        if (libs__timestamp__succeeded)
#line 28 "timestamp.m"
          {
#line 28 "timestamp.m"
            libs__timestamp__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__timestamp__HeadVar__2_2, (MR_Integer) 0)));
#line 84 "timestamp.m"
            libs__timestamp__CastX_11 = (MR_Integer) libs__timestamp__V_5_5;
#line 84 "timestamp.m"
            libs__timestamp__CastY_12 = (MR_Integer) libs__timestamp__V_6_6;
#line 84 "timestamp.m"
            libs__timestamp__succeeded = (libs__timestamp__CastX_11 == libs__timestamp__CastY_12);
#line 84 "timestamp.m"
            if (libs__timestamp__succeeded)
#line 84 "timestamp.m"
              libs__timestamp__succeeded = MR_TRUE;
#line 84 "timestamp.m"
            else
#line 84 "timestamp.m"
              {
#line 84 "timestamp.m"
                MR_String libs__timestamp__V_9_9 = (MR_String) libs__timestamp__V_5_5;
#line 84 "timestamp.m"
                MR_String libs__timestamp__V_10_10 = (MR_String) libs__timestamp__V_6_6;

#line 857 "libs.timestamp.c"
                libs__timestamp__succeeded = (strcmp(libs__timestamp__V_9_9, libs__timestamp__V_10_10) == 0);
#line 84 "timestamp.m"
              }
#line 28 "timestamp.m"
          }
#line 28 "timestamp.m"
      }
#line 28 "timestamp.m"
    return libs__timestamp__succeeded;
#line 28 "timestamp.m"
  }
#line 28 "timestamp.m"
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
#line 913 "libs.timestamp.c"
  {
#line 915 "libs.timestamp.c"
    MR_bool libs__timestamp__succeeded = (libs__timestamp__HeadVar__2_1 == libs__timestamp__HeadVar__2_2);

#line 918 "libs.timestamp.c"
    return libs__timestamp__succeeded;
#line 920 "libs.timestamp.c"
  }
#line 22 "timestamp.m"
}

#line 214 "timestamp.m"
static MR_bool MR_CALL 
libs__timestamp__plausible_timestamp_char_1_p_0(
#line 214 "timestamp.m"
  MR_Char libs__timestamp__Char_2)
#line 214 "timestamp.m"
{
#line 216 "timestamp.m"
  {
#line 216 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 216 "timestamp.m"
    MR_Integer libs__timestamp__CharInt_3;
#line 216 "timestamp.m"
    MR_Integer libs__timestamp__HighestInt_4;

#line 217 "timestamp.m"
    {
#line 217 "timestamp.m"
      mercury__char__to_int_2_p_0(libs__timestamp__Char_2, &libs__timestamp__CharInt_3);
    }
#line 218 "timestamp.m"
    {
#line 218 "timestamp.m"
      mercury__char__to_int_2_p_0((MR_Char) 58, &libs__timestamp__HighestInt_4);
    }
#line 219 "timestamp.m"
    libs__timestamp__succeeded = (libs__timestamp__CharInt_3 <= libs__timestamp__HighestInt_4);
#line 216 "timestamp.m"
    return libs__timestamp__succeeded;
#line 216 "timestamp.m"
  }
#line 214 "timestamp.m"
}

#line 98 "timestamp.m"
static MR_String MR_CALL 
libs__timestamp__gmtime_to_timestamp_2_9_f_0(
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__Yr_1,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__Mnt_2,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__MD_3,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__Hrs_4,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__Min_5,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__Sec_6,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__YD_7,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__WD_8,
#line 98 "timestamp.m"
  MR_Integer libs__timestamp__N_9)
#line 98 "timestamp.m"
{
#line 105 "timestamp.m"
  {
#line 105 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 105 "timestamp.m"
    MR_String libs__timestamp__Result_10;

#line 109 "timestamp.m"
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
#line 109 "timestamp.m"
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
#line 1035 "libs.timestamp.c"

		;}
#undef MR_PROC_LABEL
	 libs__timestamp__Result_10  = Result;
#line 109 "timestamp.m"
}
#line 105 "timestamp.m"
    return libs__timestamp__Result_10;
#line 105 "timestamp.m"
  }
#line 98 "timestamp.m"
}

#line 63 "timestamp.m"
MR_Word MR_CALL 
libs__timestamp__newest_timestamp_0_f_0(void)
#line 63 "timestamp.m"
{
#line 88 "timestamp.m"
  {
#line 88 "timestamp.m"
    MR_bool libs__timestamp__succeeded;

#line 88 "timestamp.m"
    return (MR_Word) ((MR_Box) ((MR_String) "9999-99-99 99:99:99"));
#line 88 "timestamp.m"
  }
#line 63 "timestamp.m"
}

#line 59 "timestamp.m"
MR_Word MR_CALL 
libs__timestamp__oldest_timestamp_0_f_0(void)
#line 59 "timestamp.m"
{
#line 87 "timestamp.m"
  {
#line 87 "timestamp.m"
    MR_bool libs__timestamp__succeeded;

#line 87 "timestamp.m"
    return (MR_Word) ((MR_Box) ((MR_String) "0000-00-00 00:00:00"));
#line 87 "timestamp.m"
  }
#line 59 "timestamp.m"
}

#line 176 "timestamp.m"
static MR_bool MR_CALL 
libs__timestamp__string_to_timestamp_1_f_0_1(
#line 176 "timestamp.m"
  MR_Box libs__timestamp__closure_arg,
#line 176 "timestamp.m"
  MR_Box libs__timestamp__wrapper_arg_1)
#line 176 "timestamp.m"
{
#line 176 "timestamp.m"
  {
#line 176 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 176 "timestamp.m"
    MR_Box libs__timestamp__closure = libs__timestamp__closure_arg;

#line 176 "timestamp.m"
    {
#line 176 "timestamp.m"
      return libs__timestamp__succeeded = libs__timestamp__plausible_timestamp_char_1_p_0(((MR_Char) (MR_Word) libs__timestamp__wrapper_arg_1));
    }
#line 176 "timestamp.m"
    return libs__timestamp__succeeded;
#line 176 "timestamp.m"
  }
#line 176 "timestamp.m"
}

#line 55 "timestamp.m"
MR_bool MR_CALL 
libs__timestamp__string_to_timestamp_1_f_0(
#line 55 "timestamp.m"
  MR_String libs__timestamp__Timestamp_3,
#line 55 "timestamp.m"
  MR_Word * libs__timestamp__HeadVar__2_2)
#line 55 "timestamp.m"
{
#line 170 "timestamp.m"
  {
#line 170 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__Month_5;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__Day_6;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__Hour_7;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__Minute_8;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__Second_9;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_11_11;
#line 170 "timestamp.m"
    MR_String libs__timestamp__V_12_12;
#line 170 "timestamp.m"
    MR_String libs__timestamp__V_13_13;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_14_14;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_15_15;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_16_16;
#line 170 "timestamp.m"
    MR_Char libs__timestamp__V_17_17;
#line 170 "timestamp.m"
    MR_String libs__timestamp__V_18_18;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_19_19;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_20_20;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_21_21;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_22_22;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_23_23;
#line 170 "timestamp.m"
    MR_Char libs__timestamp__V_24_24;
#line 170 "timestamp.m"
    MR_String libs__timestamp__V_25_25;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_26_26;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_27_27;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_28_28;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_29_29;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_30_30;
#line 170 "timestamp.m"
    MR_Char libs__timestamp__V_31_31;
#line 170 "timestamp.m"
    MR_String libs__timestamp__V_32_32;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_33_33;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_34_34;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_35_35;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_36_36;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_37_37;
#line 170 "timestamp.m"
    MR_Char libs__timestamp__V_38_38;
#line 170 "timestamp.m"
    MR_String libs__timestamp__V_39_39;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_40_40;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_41_41;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_42_42;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_43_43;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_44_44;
#line 170 "timestamp.m"
    MR_Char libs__timestamp__V_45_45;
#line 170 "timestamp.m"
    MR_String libs__timestamp__V_46_46;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_47_47;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_48_48;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_49_49;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_50_50;
#line 170 "timestamp.m"
    MR_Integer libs__timestamp__V_53_53;
#line 170 "timestamp.m"
    MR_Char libs__timestamp__V_54_54;
#line 170 "timestamp.m"
    MR_Char libs__timestamp__V_55_55;
#line 170 "timestamp.m"
    MR_Char libs__timestamp__V_56_56;
#line 170 "timestamp.m"
    MR_Char libs__timestamp__V_57_57;
#line 170 "timestamp.m"
    MR_Char libs__timestamp__V_58_58;
#line 179 "timestamp.m"
    MR_Integer libs__timestamp__V_4_4;

#line 170 "timestamp.m"
    *libs__timestamp__HeadVar__2_2 = (MR_Word) libs__timestamp__Timestamp_3;
#line 176 "timestamp.m"
    {
#line 176 "timestamp.m"
      libs__timestamp__succeeded = mercury__string__all_match_2_p_0((MR_Word) &libs__timestamp_scalar_common_2[0], libs__timestamp__Timestamp_3);
    }
#line 170 "timestamp.m"
    if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
      {
#line 177 "timestamp.m"
        {
#line 177 "timestamp.m"
          libs__timestamp__V_11_11 = mercury__string__length_1_f_0(libs__timestamp__Timestamp_3);
        }
#line 177 "timestamp.m"
        libs__timestamp__V_12_12 = (MR_String) "yyyy-mm-dd hh:mm:ss";
#line 177 "timestamp.m"
        {
#line 177 "timestamp.m"
          libs__timestamp__V_53_53 = mercury__string__length_1_f_0(libs__timestamp__V_12_12);
        }
#line 177 "timestamp.m"
        libs__timestamp__succeeded = (libs__timestamp__V_11_11 == libs__timestamp__V_53_53);
#line 170 "timestamp.m"
        if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
          {
#line 179 "timestamp.m"
            libs__timestamp__V_14_14 = (MR_Integer) 0;
#line 179 "timestamp.m"
            libs__timestamp__V_15_15 = (MR_Integer) 4;
#line 179 "timestamp.m"
            {
#line 179 "timestamp.m"
              libs__timestamp__V_13_13 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__V_14_14, libs__timestamp__V_15_15);
            }
#line 179 "timestamp.m"
            {
#line 179 "timestamp.m"
              libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__V_13_13, &libs__timestamp__V_4_4);
            }
#line 170 "timestamp.m"
            if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
              {
#line 181 "timestamp.m"
                libs__timestamp__V_16_16 = (MR_Integer) 4;
#line 181 "timestamp.m"
                libs__timestamp__V_17_17 = (MR_Char) 45;
#line 181 "timestamp.m"
                {
#line 181 "timestamp.m"
                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__V_16_16, &libs__timestamp__V_54_54);
                }
#line 181 "timestamp.m"
                libs__timestamp__succeeded = (libs__timestamp__V_17_17 == libs__timestamp__V_54_54);
#line 170 "timestamp.m"
                if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                  {
#line 183 "timestamp.m"
                    libs__timestamp__V_19_19 = (MR_Integer) 5;
#line 183 "timestamp.m"
                    libs__timestamp__V_20_20 = (MR_Integer) 7;
#line 183 "timestamp.m"
                    {
#line 183 "timestamp.m"
                      libs__timestamp__V_18_18 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__V_19_19, libs__timestamp__V_20_20);
                    }
#line 183 "timestamp.m"
                    {
#line 183 "timestamp.m"
                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__V_18_18, &libs__timestamp__Month_5);
                    }
#line 170 "timestamp.m"
                    if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                      {
#line 184 "timestamp.m"
                        libs__timestamp__V_21_21 = (MR_Integer) 1;
#line 184 "timestamp.m"
                        libs__timestamp__succeeded = (libs__timestamp__Month_5 >= libs__timestamp__V_21_21);
#line 170 "timestamp.m"
                        if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                          {
#line 185 "timestamp.m"
                            libs__timestamp__V_22_22 = (MR_Integer) 12;
#line 185 "timestamp.m"
                            libs__timestamp__succeeded = (libs__timestamp__Month_5 <= libs__timestamp__V_22_22);
#line 170 "timestamp.m"
                            if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                              {
#line 187 "timestamp.m"
                                libs__timestamp__V_23_23 = (MR_Integer) 7;
#line 187 "timestamp.m"
                                libs__timestamp__V_24_24 = (MR_Char) 45;
#line 187 "timestamp.m"
                                {
#line 187 "timestamp.m"
                                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__V_23_23, &libs__timestamp__V_55_55);
                                }
#line 187 "timestamp.m"
                                libs__timestamp__succeeded = (libs__timestamp__V_24_24 == libs__timestamp__V_55_55);
#line 170 "timestamp.m"
                                if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                  {
#line 189 "timestamp.m"
                                    libs__timestamp__V_26_26 = (MR_Integer) 8;
#line 189 "timestamp.m"
                                    libs__timestamp__V_27_27 = (MR_Integer) 10;
#line 189 "timestamp.m"
                                    {
#line 189 "timestamp.m"
                                      libs__timestamp__V_25_25 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__V_26_26, libs__timestamp__V_27_27);
                                    }
#line 189 "timestamp.m"
                                    {
#line 189 "timestamp.m"
                                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__V_25_25, &libs__timestamp__Day_6);
                                    }
#line 170 "timestamp.m"
                                    if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                      {
#line 190 "timestamp.m"
                                        libs__timestamp__V_28_28 = (MR_Integer) 1;
#line 190 "timestamp.m"
                                        libs__timestamp__succeeded = (libs__timestamp__Day_6 >= libs__timestamp__V_28_28);
#line 170 "timestamp.m"
                                        if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                          {
#line 191 "timestamp.m"
                                            libs__timestamp__V_29_29 = (MR_Integer) 31;
#line 191 "timestamp.m"
                                            libs__timestamp__succeeded = (libs__timestamp__Day_6 <= libs__timestamp__V_29_29);
#line 170 "timestamp.m"
                                            if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                              {
#line 193 "timestamp.m"
                                                libs__timestamp__V_30_30 = (MR_Integer) 10;
#line 193 "timestamp.m"
                                                libs__timestamp__V_31_31 = (MR_Char) 32;
#line 193 "timestamp.m"
                                                {
#line 193 "timestamp.m"
                                                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__V_30_30, &libs__timestamp__V_56_56);
                                                }
#line 193 "timestamp.m"
                                                libs__timestamp__succeeded = (libs__timestamp__V_31_31 == libs__timestamp__V_56_56);
#line 170 "timestamp.m"
                                                if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                                  {
#line 195 "timestamp.m"
                                                    libs__timestamp__V_33_33 = (MR_Integer) 11;
#line 195 "timestamp.m"
                                                    libs__timestamp__V_34_34 = (MR_Integer) 13;
#line 195 "timestamp.m"
                                                    {
#line 195 "timestamp.m"
                                                      libs__timestamp__V_32_32 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__V_33_33, libs__timestamp__V_34_34);
                                                    }
#line 195 "timestamp.m"
                                                    {
#line 195 "timestamp.m"
                                                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__V_32_32, &libs__timestamp__Hour_7);
                                                    }
#line 170 "timestamp.m"
                                                    if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                                      {
#line 196 "timestamp.m"
                                                        libs__timestamp__V_35_35 = (MR_Integer) 0;
#line 196 "timestamp.m"
                                                        libs__timestamp__succeeded = (libs__timestamp__Hour_7 >= libs__timestamp__V_35_35);
#line 170 "timestamp.m"
                                                        if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                                          {
#line 197 "timestamp.m"
                                                            libs__timestamp__V_36_36 = (MR_Integer) 23;
#line 197 "timestamp.m"
                                                            libs__timestamp__succeeded = (libs__timestamp__Hour_7 <= libs__timestamp__V_36_36);
#line 170 "timestamp.m"
                                                            if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                                              {
#line 199 "timestamp.m"
                                                                libs__timestamp__V_37_37 = (MR_Integer) 13;
#line 199 "timestamp.m"
                                                                libs__timestamp__V_38_38 = (MR_Char) 58;
#line 199 "timestamp.m"
                                                                {
#line 199 "timestamp.m"
                                                                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__V_37_37, &libs__timestamp__V_57_57);
                                                                }
#line 199 "timestamp.m"
                                                                libs__timestamp__succeeded = (libs__timestamp__V_38_38 == libs__timestamp__V_57_57);
#line 170 "timestamp.m"
                                                                if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                                                  {
#line 201 "timestamp.m"
                                                                    libs__timestamp__V_40_40 = (MR_Integer) 14;
#line 201 "timestamp.m"
                                                                    libs__timestamp__V_41_41 = (MR_Integer) 16;
#line 201 "timestamp.m"
                                                                    {
#line 201 "timestamp.m"
                                                                      libs__timestamp__V_39_39 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__V_40_40, libs__timestamp__V_41_41);
                                                                    }
#line 201 "timestamp.m"
                                                                    {
#line 201 "timestamp.m"
                                                                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__V_39_39, &libs__timestamp__Minute_8);
                                                                    }
#line 170 "timestamp.m"
                                                                    if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                                                      {
#line 202 "timestamp.m"
                                                                        libs__timestamp__V_42_42 = (MR_Integer) 0;
#line 202 "timestamp.m"
                                                                        libs__timestamp__succeeded = (libs__timestamp__Minute_8 >= libs__timestamp__V_42_42);
#line 170 "timestamp.m"
                                                                        if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                                                          {
#line 203 "timestamp.m"
                                                                            libs__timestamp__V_43_43 = (MR_Integer) 59;
#line 203 "timestamp.m"
                                                                            libs__timestamp__succeeded = (libs__timestamp__Minute_8 <= libs__timestamp__V_43_43);
#line 170 "timestamp.m"
                                                                            if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                                                              {
#line 205 "timestamp.m"
                                                                                libs__timestamp__V_44_44 = (MR_Integer) 16;
#line 205 "timestamp.m"
                                                                                libs__timestamp__V_45_45 = (MR_Char) 58;
#line 205 "timestamp.m"
                                                                                {
#line 205 "timestamp.m"
                                                                                  mercury__string__unsafe_index_3_p_0(libs__timestamp__Timestamp_3, libs__timestamp__V_44_44, &libs__timestamp__V_58_58);
                                                                                }
#line 205 "timestamp.m"
                                                                                libs__timestamp__succeeded = (libs__timestamp__V_45_45 == libs__timestamp__V_58_58);
#line 170 "timestamp.m"
                                                                                if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                                                                  {
#line 207 "timestamp.m"
                                                                                    libs__timestamp__V_47_47 = (MR_Integer) 17;
#line 207 "timestamp.m"
                                                                                    libs__timestamp__V_48_48 = (MR_Integer) 19;
#line 207 "timestamp.m"
                                                                                    {
#line 207 "timestamp.m"
                                                                                      libs__timestamp__V_46_46 = mercury__string__unsafe_between_3_f_0(libs__timestamp__Timestamp_3, libs__timestamp__V_47_47, libs__timestamp__V_48_48);
                                                                                    }
#line 207 "timestamp.m"
                                                                                    {
#line 207 "timestamp.m"
                                                                                      libs__timestamp__succeeded = mercury__string__to_int_2_p_0(libs__timestamp__V_46_46, &libs__timestamp__Second_9);
                                                                                    }
#line 170 "timestamp.m"
                                                                                    if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                                                                      {
#line 208 "timestamp.m"
                                                                                        libs__timestamp__V_49_49 = (MR_Integer) 0;
#line 208 "timestamp.m"
                                                                                        libs__timestamp__succeeded = (libs__timestamp__Second_9 >= libs__timestamp__V_49_49);
#line 170 "timestamp.m"
                                                                                        if (libs__timestamp__succeeded)
#line 170 "timestamp.m"
                                                                                          {
#line 209 "timestamp.m"
                                                                                            libs__timestamp__V_50_50 = (MR_Integer) 61;
#line 209 "timestamp.m"
                                                                                            libs__timestamp__succeeded = (libs__timestamp__Second_9 <= libs__timestamp__V_50_50);
#line 170 "timestamp.m"
                                                                                          }
#line 170 "timestamp.m"
                                                                                      }
#line 170 "timestamp.m"
                                                                                  }
#line 170 "timestamp.m"
                                                                              }
#line 170 "timestamp.m"
                                                                          }
#line 170 "timestamp.m"
                                                                      }
#line 170 "timestamp.m"
                                                                  }
#line 170 "timestamp.m"
                                                              }
#line 170 "timestamp.m"
                                                          }
#line 170 "timestamp.m"
                                                      }
#line 170 "timestamp.m"
                                                  }
#line 170 "timestamp.m"
                                              }
#line 170 "timestamp.m"
                                          }
#line 170 "timestamp.m"
                                      }
#line 170 "timestamp.m"
                                  }
#line 170 "timestamp.m"
                              }
#line 170 "timestamp.m"
                          }
#line 170 "timestamp.m"
                      }
#line 170 "timestamp.m"
                  }
#line 170 "timestamp.m"
              }
#line 170 "timestamp.m"
          }
#line 170 "timestamp.m"
      }
#line 170 "timestamp.m"
    return libs__timestamp__succeeded;
#line 170 "timestamp.m"
  }
#line 55 "timestamp.m"
}

#line 50 "timestamp.m"
MR_String MR_CALL 
libs__timestamp__timestamp_to_string_1_f_0(
#line 50 "timestamp.m"
  MR_Word libs__timestamp__HeadVar__1_1)
#line 50 "timestamp.m"
{
#line 168 "timestamp.m"
  {
#line 168 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 168 "timestamp.m"
    MR_String libs__timestamp__Timestamp_3 = (MR_String) libs__timestamp__HeadVar__1_1;

#line 168 "timestamp.m"
    return libs__timestamp__Timestamp_3;
#line 168 "timestamp.m"
  }
#line 50 "timestamp.m"
}

#line 45 "timestamp.m"
MR_Word MR_CALL 
libs__timestamp__time_t_to_timestamp_1_f_0(
#line 45 "timestamp.m"
  MR_Word libs__timestamp__Time_3)
#line 45 "timestamp.m"
{
#line 90 "timestamp.m"
  {
#line 90 "timestamp.m"
    MR_bool libs__timestamp__succeeded;
#line 90 "timestamp.m"
    MR_Word libs__timestamp__HeadVar__2_2;
#line 90 "timestamp.m"
    MR_Word libs__timestamp__V_4_4;
#line 90 "timestamp.m"
    MR_Integer libs__timestamp__Year_5;
#line 90 "timestamp.m"
    MR_Integer libs__timestamp__Month_6;
#line 90 "timestamp.m"
    MR_Integer libs__timestamp__MD_7;
#line 90 "timestamp.m"
    MR_Integer libs__timestamp__Hrs_8;
#line 90 "timestamp.m"
    MR_Integer libs__timestamp__Min_9;
#line 90 "timestamp.m"
    MR_Integer libs__timestamp__Sec_10;
#line 90 "timestamp.m"
    MR_Integer libs__timestamp__YD_11;
#line 90 "timestamp.m"
    MR_Integer libs__timestamp__WD_12;
#line 90 "timestamp.m"
    MR_Word libs__timestamp__DST_13;
#line 90 "timestamp.m"
    MR_String libs__timestamp__V_14_14;
#line 90 "timestamp.m"
    MR_Integer libs__timestamp__V_15_15;

#line 90 "timestamp.m"
    {
#line 90 "timestamp.m"
      libs__timestamp__V_4_4 = mercury__time__gmtime_1_f_0(libs__timestamp__Time_3);
    }
#line 94 "timestamp.m"
    libs__timestamp__Year_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 0)));
#line 94 "timestamp.m"
    libs__timestamp__Month_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 1)));
#line 94 "timestamp.m"
    libs__timestamp__MD_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 2)));
#line 94 "timestamp.m"
    libs__timestamp__Hrs_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 3)));
#line 94 "timestamp.m"
    libs__timestamp__Min_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 4)));
#line 94 "timestamp.m"
    libs__timestamp__Sec_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 5)));
#line 94 "timestamp.m"
    libs__timestamp__YD_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 6)));
#line 94 "timestamp.m"
    libs__timestamp__WD_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 7)));
#line 94 "timestamp.m"
    libs__timestamp__DST_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__timestamp__V_4_4, (MR_Integer) 8)));
#line 160 "timestamp.m"
    if ((libs__timestamp__DST_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 164 "timestamp.m"
      libs__timestamp__V_15_15 = (MR_Integer) -1;
#line 160 "timestamp.m"
    else
#line 160 "timestamp.m"
      {
#line 160 "timestamp.m"
        MR_Word libs__timestamp__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__timestamp__DST_13, (MR_Integer) 0)));

#line 160 "timestamp.m"
#line 160 "timestamp.m"
        switch (libs__timestamp__V_20_20) {
#line 160 "timestamp.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 160 "timestamp.m"
          case (MR_Integer) 1:
#line 161 "timestamp.m"
            libs__timestamp__V_15_15 = (MR_Integer) 1;
#line 160 "timestamp.m"
            break;
#line 160 "timestamp.m"
          case (MR_Integer) 0:
#line 163 "timestamp.m"
            libs__timestamp__V_15_15 = (MR_Integer) 0;
#line 160 "timestamp.m"
            break;
#line 160 "timestamp.m"
        }
#line 160 "timestamp.m"
      }
#line 109 "timestamp.m"
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
#line 109 "timestamp.m"
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
#line 1727 "libs.timestamp.c"

		;}
#undef MR_PROC_LABEL
	 libs__timestamp__V_14_14  = Result;
#line 109 "timestamp.m"
}
#line 95 "timestamp.m"
    libs__timestamp__HeadVar__2_2 = (MR_Word) libs__timestamp__V_14_14;
#line 90 "timestamp.m"
    return libs__timestamp__HeadVar__2_2;
#line 90 "timestamp.m"
  }
#line 45 "timestamp.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.timestamp. */
