/*
** Automatically generated from `measurement_units.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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


/* :- module measurement_units. */
/* :- implementation. */

/*
INIT mercury__measurement_units__init
ENDINIT
*/

#include "measurement_units.mih"


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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




#line 63 "measurement_units.c"
static const MR_PseudoTypeInfo measurement_units__measurement_units__field_types_memory_0_0[2];

#line 66 "measurement_units.c"
static const MR_ConstString measurement_units__measurement_units__field_names_memory_0_0[2];

#line 69 "measurement_units.c"
static const MR_DuFunctorDesc measurement_units__measurement_units__du_functor_desc_memory_0_0;

#line 72 "measurement_units.c"
static const MR_DuFunctorDescPtr measurement_units__measurement_units__du_stag_ordered_memory_0_0[1];

#line 75 "measurement_units.c"
static const MR_DuPtagLayout measurement_units__measurement_units__du_ptag_ordered_memory_0[1];

#line 78 "measurement_units.c"
static const MR_DuFunctorDescPtr measurement_units__measurement_units__du_name_ordered_memory_0[1];

#line 81 "measurement_units.c"
static const MR_Integer measurement_units__measurement_units__functor_number_map_memory_0[1];

#line 84 "measurement_units.c"
static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_memory_units_0_0;

#line 87 "measurement_units.c"
static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_memory_units_0_1;

#line 90 "measurement_units.c"
static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_value_ordered_memory_units_0[2];

#line 93 "measurement_units.c"
static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_name_ordered_memory_units_0[2];

#line 96 "measurement_units.c"
static const MR_Integer measurement_units__measurement_units__functor_number_map_memory_units_0[2];

#line 99 "measurement_units.c"
static const MR_Integer measurement_units__measurement_units__functor_number_map_percent_0[1];

#line 102 "measurement_units.c"
static const MR_NotagFunctorDesc measurement_units__measurement_units__notag_functor_desc_percent_0;

#line 105 "measurement_units.c"
static const MR_Integer measurement_units__measurement_units__functor_number_map_time_0[1];

#line 108 "measurement_units.c"
static const MR_NotagFunctorDesc measurement_units__measurement_units__notag_functor_desc_time_0;

#line 111 "measurement_units.c"
static MR_bool MR_CALL 
measurement_units____Unify____memory_0_0_10001(
#line 114 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_1,
#line 116 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2);

#line 119 "measurement_units.c"
static void MR_CALL 
measurement_units____Compare____memory_0_0_10001(
#line 122 "measurement_units.c"
  MR_Box * measurement_units__wrapper_arg_1,
#line 124 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2,
#line 126 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_3);

#line 129 "measurement_units.c"
static MR_bool MR_CALL 
measurement_units____Unify____memory_units_0_0_10001(
#line 132 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_1,
#line 134 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2);

#line 137 "measurement_units.c"
static void MR_CALL 
measurement_units____Compare____memory_units_0_0_10001(
#line 140 "measurement_units.c"
  MR_Box * measurement_units__wrapper_arg_1,
#line 142 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2,
#line 144 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_3);

#line 147 "measurement_units.c"
static MR_bool MR_CALL 
measurement_units____Unify____percent_0_0_10001(
#line 150 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_1,
#line 152 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2);

#line 155 "measurement_units.c"
static void MR_CALL 
measurement_units____Compare____percent_0_0_10001(
#line 158 "measurement_units.c"
  MR_Box * measurement_units__wrapper_arg_1,
#line 160 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2,
#line 162 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_3);

#line 165 "measurement_units.c"
static MR_bool MR_CALL 
measurement_units____Unify____probability_0_0_10001(
#line 168 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_1,
#line 170 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2);

#line 173 "measurement_units.c"
static void MR_CALL 
measurement_units____Compare____probability_0_0_10001(
#line 176 "measurement_units.c"
  MR_Box * measurement_units__wrapper_arg_1,
#line 178 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2,
#line 180 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_3);

#line 183 "measurement_units.c"
static MR_bool MR_CALL 
measurement_units____Unify____time_0_0_10001(
#line 186 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_1,
#line 188 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2);

#line 191 "measurement_units.c"
static void MR_CALL 
measurement_units____Compare____time_0_0_10001(
#line 194 "measurement_units.c"
  MR_Box * measurement_units__wrapper_arg_1,
#line 196 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2,
#line 198 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_3);

#line 200 "measurement_units.m"
static MR_bool MR_CALL 
measurement_units__IntroducedFrom__pred__compare_memory__200__1_2_p_0(
#line 200 "measurement_units.m"
  MR_Integer measurement_units__WordSizeA_8,
#line 200 "measurement_units.m"
  MR_Integer measurement_units__WordSizeB_10);

#line 358 "measurement_units.m"
static MR_Word MR_CALL 
measurement_units__add_commas_1_f_0(
#line 358 "measurement_units.m"
  MR_Word measurement_units__HeadVar__1_1);

#line 200 "measurement_units.m"
static MR_bool MR_CALL 
measurement_units__compare_memory_3_p_0_1(
#line 200 "measurement_units.m"
  MR_Box measurement_units__closure_arg);


static /* final */ const MR_Box measurement_units_scalar_common_1[1][5];




static /* final */ const MR_Box measurement_units_scalar_common_1[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 251 "measurement_units.c"
static const MR_PseudoTypeInfo measurement_units__measurement_units__field_types_memory_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 257 "measurement_units.c"
static const MR_ConstString measurement_units__measurement_units__field_names_memory_0_0[2] = {
  (MR_String) "words",
  (MR_String) "word_size"
};

#line 263 "measurement_units.c"
static const MR_DuFunctorDesc measurement_units__measurement_units__du_functor_desc_memory_0_0 = {
  (MR_String) "memory",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  measurement_units__measurement_units__field_types_memory_0_0,
  measurement_units__measurement_units__field_names_memory_0_0,
  NULL,
  NULL
};

#line 278 "measurement_units.c"
static const MR_DuFunctorDescPtr measurement_units__measurement_units__du_stag_ordered_memory_0_0[1] = {
  &measurement_units__measurement_units__du_functor_desc_memory_0_0
};

#line 283 "measurement_units.c"
static const MR_DuPtagLayout measurement_units__measurement_units__du_ptag_ordered_memory_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    measurement_units__measurement_units__du_stag_ordered_memory_0_0
  }
};

#line 292 "measurement_units.c"
static const MR_DuFunctorDescPtr measurement_units__measurement_units__du_name_ordered_memory_0[1] = {
  &measurement_units__measurement_units__du_functor_desc_memory_0_0
};

#line 297 "measurement_units.c"
static const MR_Integer measurement_units__measurement_units__functor_number_map_memory_0[1] = {
  (MR_Integer) 0
};

#line 302 "measurement_units.c"
const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_memory_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (measurement_units____Unify____memory_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____memory_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "memory",
  {
    measurement_units__measurement_units__du_name_ordered_memory_0
  },
  {
    measurement_units__measurement_units__du_ptag_ordered_memory_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurement_units__measurement_units__functor_number_map_memory_0
};

#line 323 "measurement_units.c"
static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_memory_units_0_0 = {
  (MR_String) "units_words",
  (MR_Integer) 0
};

#line 329 "measurement_units.c"
static const MR_EnumFunctorDesc measurement_units__measurement_units__enum_functor_desc_memory_units_0_1 = {
  (MR_String) "units_bytes",
  (MR_Integer) 1
};

#line 335 "measurement_units.c"
static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_value_ordered_memory_units_0[2] = {
  &measurement_units__measurement_units__enum_functor_desc_memory_units_0_0,
  &measurement_units__measurement_units__enum_functor_desc_memory_units_0_1
};

#line 341 "measurement_units.c"
static const MR_EnumFunctorDescPtr measurement_units__measurement_units__enum_name_ordered_memory_units_0[2] = {
  &measurement_units__measurement_units__enum_functor_desc_memory_units_0_1,
  &measurement_units__measurement_units__enum_functor_desc_memory_units_0_0
};

#line 347 "measurement_units.c"
static const MR_Integer measurement_units__measurement_units__functor_number_map_memory_units_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 353 "measurement_units.c"
const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_memory_units_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (measurement_units____Unify____memory_units_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____memory_units_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "memory_units",
  {
    measurement_units__measurement_units__enum_name_ordered_memory_units_0
  },
  {
    measurement_units__measurement_units__enum_value_ordered_memory_units_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  measurement_units__measurement_units__functor_number_map_memory_units_0
};

#line 374 "measurement_units.c"
static const MR_Integer measurement_units__measurement_units__functor_number_map_percent_0[1] = {
  (MR_Integer) 0
};

#line 379 "measurement_units.c"
static const MR_NotagFunctorDesc measurement_units__measurement_units__notag_functor_desc_percent_0 = {
  (MR_String) "percent_float",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  NULL
};

#line 386 "measurement_units.c"
const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_percent_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (measurement_units____Unify____percent_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____percent_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "percent",
  {
    &measurement_units__measurement_units__notag_functor_desc_percent_0
  },
  {
    &measurement_units__measurement_units__notag_functor_desc_percent_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurement_units__measurement_units__functor_number_map_percent_0
};

#line 407 "measurement_units.c"
const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_probability_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (measurement_units____Unify____probability_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____probability_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "probability",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 428 "measurement_units.c"
static const MR_Integer measurement_units__measurement_units__functor_number_map_time_0[1] = {
  (MR_Integer) 0
};

#line 433 "measurement_units.c"
static const MR_NotagFunctorDesc measurement_units__measurement_units__notag_functor_desc_time_0 = {
  (MR_String) "time_sec",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  NULL
};

#line 440 "measurement_units.c"
const MR_TypeCtorInfo_Struct measurement_units__measurement_units__type_ctor_info_time_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (measurement_units____Unify____time_0_0_10001)),
  ((MR_Box) (measurement_units____Compare____time_0_0_10001)),
  (MR_String) "measurement_units",
  (MR_String) "time",
  {
    &measurement_units__measurement_units__notag_functor_desc_time_0
  },
  {
    &measurement_units__measurement_units__notag_functor_desc_time_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  measurement_units__measurement_units__functor_number_map_time_0
};

#line 461 "measurement_units.c"
static MR_bool MR_CALL 
measurement_units____Unify____memory_0_0_10001(
#line 464 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_1,
#line 466 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2)
#line 468 "measurement_units.c"
{
#line 470 "measurement_units.c"
  {
#line 472 "measurement_units.c"
    MR_bool measurement_units__succeeded;

#line 475 "measurement_units.c"
    {
#line 477 "measurement_units.c"
      measurement_units__succeeded = measurement_units____Unify____memory_0_0(((MR_Word) measurement_units__wrapper_arg_1), ((MR_Word) measurement_units__wrapper_arg_2));
    }
#line 480 "measurement_units.c"
    return measurement_units__succeeded;
#line 482 "measurement_units.c"
  }
#line 484 "measurement_units.c"
}

#line 487 "measurement_units.c"
static void MR_CALL 
measurement_units____Compare____memory_0_0_10001(
#line 490 "measurement_units.c"
  MR_Box * measurement_units__wrapper_arg_1,
#line 492 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2,
#line 494 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_3)
#line 496 "measurement_units.c"
{
#line 498 "measurement_units.c"
  {
#line 500 "measurement_units.c"
    MR_Word measurement_units__conv0_HeadVar__1_1;

#line 503 "measurement_units.c"
    {
#line 505 "measurement_units.c"
      measurement_units____Compare____memory_0_0(&measurement_units__conv0_HeadVar__1_1, ((MR_Word) measurement_units__wrapper_arg_2), ((MR_Word) measurement_units__wrapper_arg_3));
    }
#line 508 "measurement_units.c"
    *measurement_units__wrapper_arg_1 = ((MR_Box) (measurement_units__conv0_HeadVar__1_1));
#line 510 "measurement_units.c"
  }
#line 512 "measurement_units.c"
}

#line 515 "measurement_units.c"
static MR_bool MR_CALL 
measurement_units____Unify____memory_units_0_0_10001(
#line 518 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_1,
#line 520 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2)
#line 522 "measurement_units.c"
{
#line 524 "measurement_units.c"
  {
#line 526 "measurement_units.c"
    MR_bool measurement_units__succeeded;

#line 529 "measurement_units.c"
    {
#line 531 "measurement_units.c"
      measurement_units__succeeded = measurement_units____Unify____memory_units_0_0(((MR_Word) measurement_units__wrapper_arg_1), ((MR_Word) measurement_units__wrapper_arg_2));
    }
#line 534 "measurement_units.c"
    return measurement_units__succeeded;
#line 536 "measurement_units.c"
  }
#line 538 "measurement_units.c"
}

#line 541 "measurement_units.c"
static void MR_CALL 
measurement_units____Compare____memory_units_0_0_10001(
#line 544 "measurement_units.c"
  MR_Box * measurement_units__wrapper_arg_1,
#line 546 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2,
#line 548 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_3)
#line 550 "measurement_units.c"
{
#line 552 "measurement_units.c"
  {
#line 554 "measurement_units.c"
    MR_Word measurement_units__conv0_HeadVar__1_1;

#line 557 "measurement_units.c"
    {
#line 559 "measurement_units.c"
      measurement_units____Compare____memory_units_0_0(&measurement_units__conv0_HeadVar__1_1, ((MR_Word) measurement_units__wrapper_arg_2), ((MR_Word) measurement_units__wrapper_arg_3));
    }
#line 562 "measurement_units.c"
    *measurement_units__wrapper_arg_1 = ((MR_Box) (measurement_units__conv0_HeadVar__1_1));
#line 564 "measurement_units.c"
  }
#line 566 "measurement_units.c"
}

#line 569 "measurement_units.c"
static MR_bool MR_CALL 
measurement_units____Unify____percent_0_0_10001(
#line 572 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_1,
#line 574 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2)
#line 576 "measurement_units.c"
{
#line 578 "measurement_units.c"
  {
#line 580 "measurement_units.c"
    MR_bool measurement_units__succeeded;

#line 583 "measurement_units.c"
    {
#line 585 "measurement_units.c"
      measurement_units__succeeded = measurement_units____Unify____percent_0_0(((MR_Word) measurement_units__wrapper_arg_1), ((MR_Word) measurement_units__wrapper_arg_2));
    }
#line 588 "measurement_units.c"
    return measurement_units__succeeded;
#line 590 "measurement_units.c"
  }
#line 592 "measurement_units.c"
}

#line 595 "measurement_units.c"
static void MR_CALL 
measurement_units____Compare____percent_0_0_10001(
#line 598 "measurement_units.c"
  MR_Box * measurement_units__wrapper_arg_1,
#line 600 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2,
#line 602 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_3)
#line 604 "measurement_units.c"
{
#line 606 "measurement_units.c"
  {
#line 608 "measurement_units.c"
    MR_Word measurement_units__conv0_HeadVar__1_1;

#line 611 "measurement_units.c"
    {
#line 613 "measurement_units.c"
      measurement_units____Compare____percent_0_0(&measurement_units__conv0_HeadVar__1_1, ((MR_Word) measurement_units__wrapper_arg_2), ((MR_Word) measurement_units__wrapper_arg_3));
    }
#line 616 "measurement_units.c"
    *measurement_units__wrapper_arg_1 = ((MR_Box) (measurement_units__conv0_HeadVar__1_1));
#line 618 "measurement_units.c"
  }
#line 620 "measurement_units.c"
}

#line 623 "measurement_units.c"
static MR_bool MR_CALL 
measurement_units____Unify____probability_0_0_10001(
#line 626 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_1,
#line 628 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2)
#line 630 "measurement_units.c"
{
#line 632 "measurement_units.c"
  {
#line 634 "measurement_units.c"
    MR_bool measurement_units__succeeded;

#line 637 "measurement_units.c"
    {
#line 639 "measurement_units.c"
      measurement_units__succeeded = measurement_units____Unify____probability_0_0(MR_unbox_float(measurement_units__wrapper_arg_1), MR_unbox_float(measurement_units__wrapper_arg_2));
    }
#line 642 "measurement_units.c"
    return measurement_units__succeeded;
#line 644 "measurement_units.c"
  }
#line 646 "measurement_units.c"
}

#line 649 "measurement_units.c"
static void MR_CALL 
measurement_units____Compare____probability_0_0_10001(
#line 652 "measurement_units.c"
  MR_Box * measurement_units__wrapper_arg_1,
#line 654 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2,
#line 656 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_3)
#line 658 "measurement_units.c"
{
#line 660 "measurement_units.c"
  {
#line 662 "measurement_units.c"
    MR_Word measurement_units__conv0_HeadVar__1_1;

#line 665 "measurement_units.c"
    {
#line 667 "measurement_units.c"
      measurement_units____Compare____probability_0_0(&measurement_units__conv0_HeadVar__1_1, MR_unbox_float(measurement_units__wrapper_arg_2), MR_unbox_float(measurement_units__wrapper_arg_3));
    }
#line 670 "measurement_units.c"
    *measurement_units__wrapper_arg_1 = ((MR_Box) (measurement_units__conv0_HeadVar__1_1));
#line 672 "measurement_units.c"
  }
#line 674 "measurement_units.c"
}

#line 677 "measurement_units.c"
static MR_bool MR_CALL 
measurement_units____Unify____time_0_0_10001(
#line 680 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_1,
#line 682 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2)
#line 684 "measurement_units.c"
{
#line 686 "measurement_units.c"
  {
#line 688 "measurement_units.c"
    MR_bool measurement_units__succeeded;

#line 691 "measurement_units.c"
    {
#line 693 "measurement_units.c"
      measurement_units__succeeded = measurement_units____Unify____time_0_0(((MR_Word) measurement_units__wrapper_arg_1), ((MR_Word) measurement_units__wrapper_arg_2));
    }
#line 696 "measurement_units.c"
    return measurement_units__succeeded;
#line 698 "measurement_units.c"
  }
#line 700 "measurement_units.c"
}

#line 703 "measurement_units.c"
static void MR_CALL 
measurement_units____Compare____time_0_0_10001(
#line 706 "measurement_units.c"
  MR_Box * measurement_units__wrapper_arg_1,
#line 708 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_2,
#line 710 "measurement_units.c"
  MR_Box measurement_units__wrapper_arg_3)
#line 712 "measurement_units.c"
{
#line 714 "measurement_units.c"
  {
#line 716 "measurement_units.c"
    MR_Word measurement_units__conv0_HeadVar__1_1;

#line 719 "measurement_units.c"
    {
#line 721 "measurement_units.c"
      measurement_units____Compare____time_0_0(&measurement_units__conv0_HeadVar__1_1, ((MR_Word) measurement_units__wrapper_arg_2), ((MR_Word) measurement_units__wrapper_arg_3));
    }
#line 724 "measurement_units.c"
    *measurement_units__wrapper_arg_1 = ((MR_Box) (measurement_units__conv0_HeadVar__1_1));
#line 726 "measurement_units.c"
  }
#line 728 "measurement_units.c"
}

#line 200 "measurement_units.m"
static MR_bool MR_CALL 
measurement_units__IntroducedFrom__pred__compare_memory__200__1_2_p_0(
#line 200 "measurement_units.m"
  MR_Integer measurement_units__WordSizeA_8,
#line 200 "measurement_units.m"
  MR_Integer measurement_units__WordSizeB_10)
#line 200 "measurement_units.m"
{
#line 200 "measurement_units.m"
  {
#line 200 "measurement_units.m"
    MR_bool measurement_units__succeeded = (measurement_units__WordSizeA_8 == measurement_units__WordSizeB_10);

#line 200 "measurement_units.m"
    return measurement_units__succeeded;
#line 200 "measurement_units.m"
  }
#line 200 "measurement_units.m"
}

#line 227 "measurement_units.m"
void MR_CALL 
measurement_units____Compare____time_0_0(
#line 227 "measurement_units.m"
  MR_Word * measurement_units__HeadVar__1_1,
#line 227 "measurement_units.m"
  MR_Word measurement_units__HeadVar__2_2,
#line 227 "measurement_units.m"
  MR_Word measurement_units__HeadVar__3_3)
#line 227 "measurement_units.m"
{
#line 227 "measurement_units.m"
  {
#line 227 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 227 "measurement_units.m"
    MR_Integer measurement_units__CastX_6 = (MR_Integer) measurement_units__HeadVar__2_2;
#line 227 "measurement_units.m"
    MR_Integer measurement_units__CastY_7 = (MR_Integer) measurement_units__HeadVar__3_3;

#line 227 "measurement_units.m"
    measurement_units__succeeded = (measurement_units__CastX_6 == measurement_units__CastY_7);
#line 227 "measurement_units.m"
    if (measurement_units__succeeded)
#line 776 "measurement_units.c"
      *measurement_units__HeadVar__1_1 = (MR_Integer) 0;
#line 227 "measurement_units.m"
    else
#line 227 "measurement_units.m"
      {
#line 227 "measurement_units.m"
        MR_Float measurement_units__V_4_4 = MR_unbox_float((MR_Box) measurement_units__HeadVar__2_2);
#line 227 "measurement_units.m"
        MR_Float measurement_units__V_5_5 = MR_unbox_float((MR_Box) measurement_units__HeadVar__3_3);

#line 227 "measurement_units.m"
        {
#line 227 "measurement_units.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(measurement_units__HeadVar__1_1, measurement_units__V_4_4, measurement_units__V_5_5);
#line 227 "measurement_units.m"
          return;
        }
#line 227 "measurement_units.m"
      }
#line 227 "measurement_units.m"
  }
#line 227 "measurement_units.m"
}

#line 227 "measurement_units.m"
MR_bool MR_CALL 
measurement_units____Unify____time_0_0(
#line 227 "measurement_units.m"
  MR_Word measurement_units__HeadVar__1_1,
#line 227 "measurement_units.m"
  MR_Word measurement_units__HeadVar__2_2)
#line 227 "measurement_units.m"
{
#line 227 "measurement_units.m"
  {
#line 227 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 227 "measurement_units.m"
    MR_Integer measurement_units__CastX_5 = (MR_Integer) measurement_units__HeadVar__1_1;
#line 227 "measurement_units.m"
    MR_Integer measurement_units__CastY_6 = (MR_Integer) measurement_units__HeadVar__2_2;

#line 227 "measurement_units.m"
    measurement_units__succeeded = (measurement_units__CastX_5 == measurement_units__CastY_6);
#line 227 "measurement_units.m"
    if (measurement_units__succeeded)
#line 227 "measurement_units.m"
      measurement_units__succeeded = MR_TRUE;
#line 227 "measurement_units.m"
    else
#line 227 "measurement_units.m"
      {
#line 227 "measurement_units.m"
        MR_Float measurement_units__V_3_3 = MR_unbox_float((MR_Box) measurement_units__HeadVar__1_1);
#line 227 "measurement_units.m"
        MR_Float measurement_units__V_4_4 = MR_unbox_float((MR_Box) measurement_units__HeadVar__2_2);

#line 834 "measurement_units.c"
        measurement_units__succeeded = (measurement_units__V_3_3 == measurement_units__V_4_4);
#line 227 "measurement_units.m"
      }
#line 227 "measurement_units.m"
    return measurement_units__succeeded;
#line 227 "measurement_units.m"
  }
#line 227 "measurement_units.m"
}

#line 285 "measurement_units.m"
void MR_CALL 
measurement_units____Compare____probability_0_0(
#line 285 "measurement_units.m"
  MR_Word * measurement_units__HeadVar__1_1,
#line 285 "measurement_units.m"
  MR_Float measurement_units__HeadVar__2_2,
#line 285 "measurement_units.m"
  MR_Float measurement_units__HeadVar__3_3)
#line 285 "measurement_units.m"
{
#line 285 "measurement_units.m"
  {
#line 285 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 285 "measurement_units.m"
    MR_Float measurement_units__Cast_HeadVar1_4 = measurement_units__HeadVar__2_2;
#line 285 "measurement_units.m"
    MR_Float measurement_units__Cast_HeadVar2_5 = measurement_units__HeadVar__3_3;

#line 285 "measurement_units.m"
    {
#line 285 "measurement_units.m"
      mercury__private_builtin__builtin_compare_float_3_p_0(measurement_units__HeadVar__1_1, measurement_units__Cast_HeadVar1_4, measurement_units__Cast_HeadVar2_5);
#line 285 "measurement_units.m"
      return;
    }
#line 285 "measurement_units.m"
  }
#line 285 "measurement_units.m"
}

#line 285 "measurement_units.m"
MR_bool MR_CALL 
measurement_units____Unify____probability_0_0(
#line 285 "measurement_units.m"
  MR_Float measurement_units__HeadVar__1_1,
#line 285 "measurement_units.m"
  MR_Float measurement_units__HeadVar__2_2)
#line 285 "measurement_units.m"
{
#line 285 "measurement_units.m"
  {
#line 285 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 285 "measurement_units.m"
    MR_Float measurement_units__Cast_HeadVar1_3 = measurement_units__HeadVar__1_1;
#line 285 "measurement_units.m"
    MR_Float measurement_units__Cast_HeadVar2_4 = measurement_units__HeadVar__2_2;

#line 285 "measurement_units.m"
    measurement_units__succeeded = (measurement_units__Cast_HeadVar1_3 == measurement_units__Cast_HeadVar2_4);
#line 285 "measurement_units.m"
    return measurement_units__succeeded;
#line 285 "measurement_units.m"
  }
#line 285 "measurement_units.m"
}

#line 209 "measurement_units.m"
void MR_CALL 
measurement_units____Compare____percent_0_0(
#line 209 "measurement_units.m"
  MR_Word * measurement_units__HeadVar__1_1,
#line 209 "measurement_units.m"
  MR_Word measurement_units__HeadVar__2_2,
#line 209 "measurement_units.m"
  MR_Word measurement_units__HeadVar__3_3)
#line 209 "measurement_units.m"
{
#line 209 "measurement_units.m"
  {
#line 209 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 209 "measurement_units.m"
    MR_Integer measurement_units__CastX_6 = (MR_Integer) measurement_units__HeadVar__2_2;
#line 209 "measurement_units.m"
    MR_Integer measurement_units__CastY_7 = (MR_Integer) measurement_units__HeadVar__3_3;

#line 209 "measurement_units.m"
    measurement_units__succeeded = (measurement_units__CastX_6 == measurement_units__CastY_7);
#line 209 "measurement_units.m"
    if (measurement_units__succeeded)
#line 928 "measurement_units.c"
      *measurement_units__HeadVar__1_1 = (MR_Integer) 0;
#line 209 "measurement_units.m"
    else
#line 209 "measurement_units.m"
      {
#line 209 "measurement_units.m"
        MR_Float measurement_units__V_4_4 = MR_unbox_float((MR_Box) measurement_units__HeadVar__2_2);
#line 209 "measurement_units.m"
        MR_Float measurement_units__V_5_5 = MR_unbox_float((MR_Box) measurement_units__HeadVar__3_3);

#line 209 "measurement_units.m"
        {
#line 209 "measurement_units.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(measurement_units__HeadVar__1_1, measurement_units__V_4_4, measurement_units__V_5_5);
#line 209 "measurement_units.m"
          return;
        }
#line 209 "measurement_units.m"
      }
#line 209 "measurement_units.m"
  }
#line 209 "measurement_units.m"
}

#line 209 "measurement_units.m"
MR_bool MR_CALL 
measurement_units____Unify____percent_0_0(
#line 209 "measurement_units.m"
  MR_Word measurement_units__HeadVar__1_1,
#line 209 "measurement_units.m"
  MR_Word measurement_units__HeadVar__2_2)
#line 209 "measurement_units.m"
{
#line 209 "measurement_units.m"
  {
#line 209 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 209 "measurement_units.m"
    MR_Integer measurement_units__CastX_5 = (MR_Integer) measurement_units__HeadVar__1_1;
#line 209 "measurement_units.m"
    MR_Integer measurement_units__CastY_6 = (MR_Integer) measurement_units__HeadVar__2_2;

#line 209 "measurement_units.m"
    measurement_units__succeeded = (measurement_units__CastX_5 == measurement_units__CastY_6);
#line 209 "measurement_units.m"
    if (measurement_units__succeeded)
#line 209 "measurement_units.m"
      measurement_units__succeeded = MR_TRUE;
#line 209 "measurement_units.m"
    else
#line 209 "measurement_units.m"
      {
#line 209 "measurement_units.m"
        MR_Float measurement_units__V_3_3 = MR_unbox_float((MR_Box) measurement_units__HeadVar__1_1);
#line 209 "measurement_units.m"
        MR_Float measurement_units__V_4_4 = MR_unbox_float((MR_Box) measurement_units__HeadVar__2_2);

#line 986 "measurement_units.c"
        measurement_units__succeeded = (measurement_units__V_3_3 == measurement_units__V_4_4);
#line 209 "measurement_units.m"
      }
#line 209 "measurement_units.m"
    return measurement_units__succeeded;
#line 209 "measurement_units.m"
  }
#line 209 "measurement_units.m"
}

#line 28 "measurement_units.m"
void MR_CALL 
measurement_units____Compare____memory_units_0_0(
#line 28 "measurement_units.m"
  MR_Word * measurement_units__HeadVar__1_1,
#line 28 "measurement_units.m"
  MR_Word measurement_units__HeadVar__2_2,
#line 28 "measurement_units.m"
  MR_Word measurement_units__HeadVar__3_3)
#line 28 "measurement_units.m"
{
#line 28 "measurement_units.m"
  {
#line 28 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 28 "measurement_units.m"
    MR_Integer measurement_units__Cast_HeadVar1_4 = (MR_Integer) measurement_units__HeadVar__2_2;
#line 28 "measurement_units.m"
    MR_Integer measurement_units__Cast_HeadVar2_5 = (MR_Integer) measurement_units__HeadVar__3_3;

#line 28 "measurement_units.m"
    {
#line 28 "measurement_units.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(measurement_units__HeadVar__1_1, measurement_units__Cast_HeadVar1_4, measurement_units__Cast_HeadVar2_5);
#line 28 "measurement_units.m"
      return;
    }
#line 28 "measurement_units.m"
  }
#line 28 "measurement_units.m"
}

#line 28 "measurement_units.m"
MR_bool MR_CALL 
measurement_units____Unify____memory_units_0_0(
#line 28 "measurement_units.m"
  MR_Word measurement_units__HeadVar__2_1,
#line 28 "measurement_units.m"
  MR_Word measurement_units__HeadVar__2_2)
#line 28 "measurement_units.m"
{
#line 1038 "measurement_units.c"
  {
#line 1040 "measurement_units.c"
    MR_bool measurement_units__succeeded = (measurement_units__HeadVar__2_1 == measurement_units__HeadVar__2_2);

#line 1043 "measurement_units.c"
    return measurement_units__succeeded;
#line 1045 "measurement_units.c"
  }
#line 28 "measurement_units.m"
}

#line 176 "measurement_units.m"
void MR_CALL 
measurement_units____Compare____memory_0_0(
#line 176 "measurement_units.m"
  MR_Word * measurement_units__HeadVar__1_1,
#line 176 "measurement_units.m"
  MR_Word measurement_units__HeadVar__2_2,
#line 176 "measurement_units.m"
  MR_Word measurement_units__HeadVar__3_3)
#line 176 "measurement_units.m"
{
#line 176 "measurement_units.m"
  {
#line 176 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 176 "measurement_units.m"
    MR_Integer measurement_units__CastX_9 = (MR_Integer) measurement_units__HeadVar__2_2;
#line 176 "measurement_units.m"
    MR_Integer measurement_units__CastY_10 = (MR_Integer) measurement_units__HeadVar__3_3;

#line 176 "measurement_units.m"
    measurement_units__succeeded = (measurement_units__CastX_9 == measurement_units__CastY_10);
#line 176 "measurement_units.m"
    if (measurement_units__succeeded)
#line 1074 "measurement_units.c"
      *measurement_units__HeadVar__1_1 = (MR_Integer) 0;
#line 176 "measurement_units.m"
    else
#line 176 "measurement_units.m"
      {
#line 176 "measurement_units.m"
        MR_Float measurement_units__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "measurement_units.m"
        MR_Integer measurement_units__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "measurement_units.m"
        MR_Float measurement_units__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, (MR_Integer) 0)));
#line 176 "measurement_units.m"
        MR_Integer measurement_units__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, (MR_Integer) 1)));
#line 176 "measurement_units.m"
        MR_Word measurement_units__V_8_8;

#line 176 "measurement_units.m"
        {
#line 176 "measurement_units.m"
          mercury__private_builtin__builtin_compare_float_3_p_0(&measurement_units__V_8_8, measurement_units__V_4_4, measurement_units__V_6_6);
        }
#line 1096 "measurement_units.c"
        measurement_units__succeeded = (measurement_units__V_8_8 == (MR_Integer) 0);
#line 176 "measurement_units.m"
        measurement_units__succeeded = !(measurement_units__succeeded);
#line 176 "measurement_units.m"
        if (measurement_units__succeeded)
#line 176 "measurement_units.m"
          *measurement_units__HeadVar__1_1 = measurement_units__V_8_8;
#line 176 "measurement_units.m"
        else
#line 176 "measurement_units.m"
          {
#line 176 "measurement_units.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(measurement_units__HeadVar__1_1, measurement_units__V_5_5, measurement_units__V_7_7);
#line 176 "measurement_units.m"
            return;
          }
#line 176 "measurement_units.m"
      }
#line 176 "measurement_units.m"
  }
#line 176 "measurement_units.m"
}

#line 176 "measurement_units.m"
MR_bool MR_CALL 
measurement_units____Unify____memory_0_0(
#line 176 "measurement_units.m"
  MR_Word measurement_units__HeadVar__1_1,
#line 176 "measurement_units.m"
  MR_Word measurement_units__HeadVar__2_2)
#line 176 "measurement_units.m"
{
#line 176 "measurement_units.m"
  {
#line 176 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 176 "measurement_units.m"
    MR_Integer measurement_units__CastX_7 = (MR_Integer) measurement_units__HeadVar__1_1;
#line 176 "measurement_units.m"
    MR_Integer measurement_units__CastY_8 = (MR_Integer) measurement_units__HeadVar__2_2;

#line 176 "measurement_units.m"
    measurement_units__succeeded = (measurement_units__CastX_7 == measurement_units__CastY_8);
#line 176 "measurement_units.m"
    if (measurement_units__succeeded)
#line 176 "measurement_units.m"
      measurement_units__succeeded = MR_TRUE;
#line 176 "measurement_units.m"
    else
#line 176 "measurement_units.m"
      {
#line 176 "measurement_units.m"
        MR_Float measurement_units__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__HeadVar__1_1, (MR_Integer) 0)));
#line 176 "measurement_units.m"
        MR_Integer measurement_units__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__HeadVar__1_1, (MR_Integer) 1)));
#line 176 "measurement_units.m"
        MR_Float measurement_units__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "measurement_units.m"
        MR_Integer measurement_units__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__HeadVar__2_2, (MR_Integer) 1)));

#line 1157 "measurement_units.c"
        measurement_units__succeeded = (measurement_units__V_3_3 == measurement_units__V_5_5);
#line 176 "measurement_units.m"
        if (measurement_units__succeeded)
#line 1161 "measurement_units.c"
          measurement_units__succeeded = (measurement_units__V_4_4 == measurement_units__V_6_6);
#line 176 "measurement_units.m"
      }
#line 176 "measurement_units.m"
    return measurement_units__succeeded;
#line 176 "measurement_units.m"
  }
#line 176 "measurement_units.m"
}

#line 358 "measurement_units.m"
static MR_Word MR_CALL 
measurement_units__add_commas_1_f_0(
#line 358 "measurement_units.m"
  MR_Word measurement_units__HeadVar__1_1)
#line 358 "measurement_units.m"
{
#line 360 "measurement_units.m"
  {
#line 360 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 360 "measurement_units.m"
    MR_Word measurement_units__HeadVar__2_2;

#line 360 "measurement_units.m"
    if ((measurement_units__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 360 "measurement_units.m"
      measurement_units__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 360 "measurement_units.m"
    else
#line 360 "measurement_units.m"
      {
#line 360 "measurement_units.m"
        MR_Word measurement_units__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__HeadVar__1_1, (MR_Integer) 1)));
#line 360 "measurement_units.m"
        MR_Char measurement_units__V_36_36 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__HeadVar__1_1, (MR_Integer) 0)));

#line 360 "measurement_units.m"
        if ((measurement_units__V_35_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "measurement_units.m"
          {
#line 361 "measurement_units.m"
            {
#line 361 "measurement_units.m"
              measurement_units__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 361 "measurement_units.m"
              MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (measurement_units__V_36_36));
#line 361 "measurement_units.m"
              MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 361 "measurement_units.m"
            }
#line 361 "measurement_units.m"
          }
#line 360 "measurement_units.m"
        else
#line 360 "measurement_units.m"
          {
#line 360 "measurement_units.m"
            MR_Word measurement_units__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__V_35_35, (MR_Integer) 1)));
#line 360 "measurement_units.m"
            MR_Char measurement_units__V_38_38 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__V_35_35, (MR_Integer) 0)));

#line 360 "measurement_units.m"
            if ((measurement_units__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 362 "measurement_units.m"
              {
#line 362 "measurement_units.m"
                MR_Word measurement_units__V_10_10;

#line 362 "measurement_units.m"
                {
#line 362 "measurement_units.m"
                  measurement_units__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "measurement_units.m"
                  MR_hl_field(MR_mktag(1), measurement_units__V_10_10, 0) = ((MR_Box) (MR_Word) (measurement_units__V_38_38));
#line 362 "measurement_units.m"
                  MR_hl_field(MR_mktag(1), measurement_units__V_10_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 362 "measurement_units.m"
                }
#line 362 "measurement_units.m"
                {
#line 362 "measurement_units.m"
                  measurement_units__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "measurement_units.m"
                  MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (measurement_units__V_36_36));
#line 362 "measurement_units.m"
                  MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 1) = ((MR_Box) (measurement_units__V_10_10));
#line 362 "measurement_units.m"
                }
#line 362 "measurement_units.m"
              }
#line 360 "measurement_units.m"
            else
#line 360 "measurement_units.m"
              {
#line 360 "measurement_units.m"
                MR_Word measurement_units__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__V_37_37, (MR_Integer) 1)));
#line 360 "measurement_units.m"
                MR_Char measurement_units__V_40_40 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__V_37_37, (MR_Integer) 0)));

#line 360 "measurement_units.m"
                if ((measurement_units__V_39_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 363 "measurement_units.m"
                  {
#line 363 "measurement_units.m"
                    MR_Word measurement_units__V_18_18;
#line 363 "measurement_units.m"
                    MR_Word measurement_units__V_19_19;

#line 363 "measurement_units.m"
                    {
#line 363 "measurement_units.m"
                      measurement_units__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_19_19, 0) = ((MR_Box) (MR_Word) (measurement_units__V_40_40));
#line 363 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 363 "measurement_units.m"
                    }
#line 363 "measurement_units.m"
                    {
#line 363 "measurement_units.m"
                      measurement_units__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_18_18, 0) = ((MR_Box) (MR_Word) (measurement_units__V_38_38));
#line 363 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_18_18, 1) = ((MR_Box) (measurement_units__V_19_19));
#line 363 "measurement_units.m"
                    }
#line 363 "measurement_units.m"
                    {
#line 363 "measurement_units.m"
                      measurement_units__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (measurement_units__V_36_36));
#line 363 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 1) = ((MR_Box) (measurement_units__V_18_18));
#line 363 "measurement_units.m"
                    }
#line 363 "measurement_units.m"
                  }
#line 360 "measurement_units.m"
                else
#line 364 "measurement_units.m"
                  {
#line 364 "measurement_units.m"
                    MR_Word measurement_units__V_29_29;
#line 364 "measurement_units.m"
                    MR_Word measurement_units__V_30_30;
#line 364 "measurement_units.m"
                    MR_Word measurement_units__V_31_31;
#line 364 "measurement_units.m"
                    MR_Word measurement_units__V_33_33;

#line 364 "measurement_units.m"
                    {
#line 364 "measurement_units.m"
                      measurement_units__V_33_33 = measurement_units__add_commas_1_f_0(measurement_units__V_39_39);
                    }
#line 364 "measurement_units.m"
                    {
#line 364 "measurement_units.m"
                      measurement_units__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Char) 44));
#line 364 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_31_31, 1) = ((MR_Box) (measurement_units__V_33_33));
#line 364 "measurement_units.m"
                    }
#line 364 "measurement_units.m"
                    {
#line 364 "measurement_units.m"
                      measurement_units__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_30_30, 0) = ((MR_Box) (MR_Word) (measurement_units__V_40_40));
#line 364 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_30_30, 1) = ((MR_Box) (measurement_units__V_31_31));
#line 364 "measurement_units.m"
                    }
#line 364 "measurement_units.m"
                    {
#line 364 "measurement_units.m"
                      measurement_units__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_29_29, 0) = ((MR_Box) (MR_Word) (measurement_units__V_38_38));
#line 364 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_29_29, 1) = ((MR_Box) (measurement_units__V_30_30));
#line 364 "measurement_units.m"
                    }
#line 364 "measurement_units.m"
                    {
#line 364 "measurement_units.m"
                      measurement_units__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 0) = ((MR_Box) (MR_Word) (measurement_units__V_36_36));
#line 364 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__HeadVar__2_2, 1) = ((MR_Box) (measurement_units__V_29_29));
#line 364 "measurement_units.m"
                    }
#line 364 "measurement_units.m"
                  }
#line 360 "measurement_units.m"
              }
#line 360 "measurement_units.m"
          }
#line 360 "measurement_units.m"
      }
#line 360 "measurement_units.m"
    return measurement_units__HeadVar__2_2;
#line 360 "measurement_units.m"
  }
#line 358 "measurement_units.m"
}

#line 158 "measurement_units.m"
MR_String MR_CALL 
measurement_units__four_decimal_fraction_1_f_0(
#line 158 "measurement_units.m"
  MR_Float measurement_units__Measure_3)
#line 158 "measurement_units.m"
{
#line 347 "measurement_units.m"
  {
#line 347 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 347 "measurement_units.m"
    MR_String measurement_units__HeadVar__2_2;

#line 347 "measurement_units.m"
    {
#line 347 "measurement_units.m"
      return measurement_units__HeadVar__2_2 = measurement_units__decimal_fraction_2_f_0((MR_String) "%.4f", measurement_units__Measure_3);
    }
#line 347 "measurement_units.m"
    return measurement_units__HeadVar__2_2;
#line 347 "measurement_units.m"
  }
#line 158 "measurement_units.m"
}

#line 157 "measurement_units.m"
MR_String MR_CALL 
measurement_units__two_decimal_fraction_1_f_0(
#line 157 "measurement_units.m"
  MR_Float measurement_units__Measure_3)
#line 157 "measurement_units.m"
{
#line 345 "measurement_units.m"
  {
#line 345 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 345 "measurement_units.m"
    MR_String measurement_units__HeadVar__2_2;

#line 345 "measurement_units.m"
    {
#line 345 "measurement_units.m"
      return measurement_units__HeadVar__2_2 = measurement_units__decimal_fraction_2_f_0((MR_String) "%.2f", measurement_units__Measure_3);
    }
#line 345 "measurement_units.m"
    return measurement_units__HeadVar__2_2;
#line 345 "measurement_units.m"
  }
#line 157 "measurement_units.m"
}

#line 156 "measurement_units.m"
MR_String MR_CALL 
measurement_units__one_decimal_fraction_1_f_0(
#line 156 "measurement_units.m"
  MR_Float measurement_units__Measure_3)
#line 156 "measurement_units.m"
{
#line 343 "measurement_units.m"
  {
#line 343 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 343 "measurement_units.m"
    MR_String measurement_units__HeadVar__2_2;

#line 343 "measurement_units.m"
    {
#line 343 "measurement_units.m"
      return measurement_units__HeadVar__2_2 = measurement_units__decimal_fraction_2_f_0((MR_String) "%.1f", measurement_units__Measure_3);
    }
#line 343 "measurement_units.m"
    return measurement_units__HeadVar__2_2;
#line 343 "measurement_units.m"
  }
#line 156 "measurement_units.m"
}

#line 154 "measurement_units.m"
MR_String MR_CALL 
measurement_units__decimal_fraction_2_f_0(
#line 154 "measurement_units.m"
  MR_String measurement_units__Format_4,
#line 154 "measurement_units.m"
  MR_Float measurement_units__Measure_5)
#line 154 "measurement_units.m"
{
#line 325 "measurement_units.m"
  {
#line 325 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 325 "measurement_units.m"
    MR_String measurement_units__Representation_6;
#line 325 "measurement_units.m"
    MR_String measurement_units__Str0_7;
#line 325 "measurement_units.m"
    MR_Word measurement_units__SubStrings_8;
#line 325 "measurement_units.m"
    MR_Word measurement_units__V_12_12;
#line 325 "measurement_units.m"
    MR_Word measurement_units__V_13_13;
#line 333 "measurement_units.m"
    MR_String measurement_units__WholeString0_9;
#line 333 "measurement_units.m"
    MR_String measurement_units__FractionString_10;
#line 329 "measurement_units.m"
    MR_Word measurement_units__V_16_16;
#line 329 "measurement_units.m"
    MR_Word measurement_units__V_17_17;

#line 326 "measurement_units.m"
    {
#line 326 "measurement_units.m"
      measurement_units__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 326 "measurement_units.m"
      MR_hl_field(MR_mktag(0), measurement_units__V_13_13, 0) = MR_box_float(measurement_units__Measure_5);
#line 326 "measurement_units.m"
    }
#line 326 "measurement_units.m"
    {
#line 326 "measurement_units.m"
      measurement_units__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "measurement_units.m"
      MR_hl_field(MR_mktag(1), measurement_units__V_12_12, 0) = ((MR_Box) (measurement_units__V_13_13));
#line 326 "measurement_units.m"
      MR_hl_field(MR_mktag(1), measurement_units__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 326 "measurement_units.m"
    }
#line 326 "measurement_units.m"
    {
#line 326 "measurement_units.m"
      mercury__string__format_3_p_0(measurement_units__Format_4, measurement_units__V_12_12, &measurement_units__Str0_7);
    }
#line 327 "measurement_units.m"
    {
#line 327 "measurement_units.m"
      measurement_units__SubStrings_8 = mercury__string__split_at_char_2_f_0((MR_Char) 46, measurement_units__Str0_7);
    }
#line 329 "measurement_units.m"
    measurement_units__succeeded = ((MR_tag((MR_Word) measurement_units__SubStrings_8)) == (MR_mktag((MR_Integer) 1)));
#line 329 "measurement_units.m"
    if (measurement_units__succeeded)
#line 329 "measurement_units.m"
      {
#line 329 "measurement_units.m"
        measurement_units__WholeString0_9 = ((MR_String) (MR_hl_field(MR_mktag(1), measurement_units__SubStrings_8, (MR_Integer) 0)));
#line 329 "measurement_units.m"
        measurement_units__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__SubStrings_8, (MR_Integer) 1)));
#line 329 "measurement_units.m"
        measurement_units__succeeded = ((MR_tag((MR_Word) measurement_units__V_16_16)) == (MR_mktag((MR_Integer) 1)));
#line 329 "measurement_units.m"
        if (measurement_units__succeeded)
#line 329 "measurement_units.m"
          {
#line 329 "measurement_units.m"
            measurement_units__FractionString_10 = ((MR_String) (MR_hl_field(MR_mktag(1), measurement_units__V_16_16, (MR_Integer) 0)));
#line 329 "measurement_units.m"
            measurement_units__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__V_16_16, (MR_Integer) 1)));
#line 329 "measurement_units.m"
            measurement_units__succeeded = (measurement_units__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "measurement_units.m"
          }
#line 329 "measurement_units.m"
      }
#line 333 "measurement_units.m"
    if (measurement_units__succeeded)
#line 331 "measurement_units.m"
      {
#line 331 "measurement_units.m"
        MR_Word measurement_units__TypeCtorInfo_9_29;
#line 331 "measurement_units.m"
        MR_String measurement_units__WholeString_11;
#line 331 "measurement_units.m"
        MR_String measurement_units__V_18_18;
#line 331 "measurement_units.m"
        MR_Word measurement_units__Chars0_25;
#line 331 "measurement_units.m"
        MR_Word measurement_units__RevChars0_26;
#line 331 "measurement_units.m"
        MR_Word measurement_units__V_27_27;
#line 331 "measurement_units.m"
        MR_Word measurement_units__V_28_28;

#line 354 "measurement_units.m"
        {
#line 354 "measurement_units.m"
          mercury__string__to_char_list_2_p_0(measurement_units__WholeString0_9, &measurement_units__Chars0_25);
        }
#line 1564 "measurement_units.c"
        measurement_units__TypeCtorInfo_9_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 355 "measurement_units.m"
        {
#line 355 "measurement_units.m"
          mercury__list__reverse_2_p_0(measurement_units__TypeCtorInfo_9_29, measurement_units__Chars0_25, &measurement_units__RevChars0_26);
        }
#line 356 "measurement_units.m"
        {
#line 356 "measurement_units.m"
          measurement_units__V_28_28 = measurement_units__add_commas_1_f_0(measurement_units__RevChars0_26);
        }
#line 356 "measurement_units.m"
        {
#line 356 "measurement_units.m"
          measurement_units__V_27_27 = mercury__list__reverse_1_f_0(measurement_units__TypeCtorInfo_9_29, measurement_units__V_28_28);
        }
#line 356 "measurement_units.m"
        {
#line 356 "measurement_units.m"
          mercury__string__from_char_list_2_p_0(measurement_units__V_27_27, &measurement_units__WholeString_11);
        }
#line 332 "measurement_units.m"
        {
#line 332 "measurement_units.m"
          measurement_units__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ".", measurement_units__FractionString_10);
        }
#line 332 "measurement_units.m"
        {
#line 332 "measurement_units.m"
          return measurement_units__Representation_6 = mercury__string__f_43_43_2_f_0(measurement_units__WholeString_11, measurement_units__V_18_18);
        }
#line 331 "measurement_units.m"
      }
#line 333 "measurement_units.m"
    else
#line 339 "measurement_units.m"
      {
#line 339 "measurement_units.m"
        MR_String measurement_units__WholeString_22;
#line 336 "measurement_units.m"
        MR_Word measurement_units__V_20_20;

#line 336 "measurement_units.m"
        measurement_units__succeeded = ((MR_tag((MR_Word) measurement_units__SubStrings_8)) == (MR_mktag((MR_Integer) 1)));
#line 336 "measurement_units.m"
        if (measurement_units__succeeded)
#line 336 "measurement_units.m"
          {
#line 336 "measurement_units.m"
            measurement_units__WholeString_22 = ((MR_String) (MR_hl_field(MR_mktag(1), measurement_units__SubStrings_8, (MR_Integer) 0)));
#line 336 "measurement_units.m"
            measurement_units__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), measurement_units__SubStrings_8, (MR_Integer) 1)));
#line 336 "measurement_units.m"
            measurement_units__succeeded = (measurement_units__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 336 "measurement_units.m"
          }
#line 339 "measurement_units.m"
        if (measurement_units__succeeded)
#line 353 "measurement_units.m"
          {
#line 353 "measurement_units.m"
            MR_Word measurement_units__TypeCtorInfo_9_36;
#line 353 "measurement_units.m"
            MR_Word measurement_units__Chars0_32;
#line 353 "measurement_units.m"
            MR_Word measurement_units__RevChars0_33;
#line 353 "measurement_units.m"
            MR_Word measurement_units__V_34_34;
#line 353 "measurement_units.m"
            MR_Word measurement_units__V_35_35;

#line 354 "measurement_units.m"
            {
#line 354 "measurement_units.m"
              mercury__string__to_char_list_2_p_0(measurement_units__WholeString_22, &measurement_units__Chars0_32);
            }
#line 1641 "measurement_units.c"
            measurement_units__TypeCtorInfo_9_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 355 "measurement_units.m"
            {
#line 355 "measurement_units.m"
              mercury__list__reverse_2_p_0(measurement_units__TypeCtorInfo_9_36, measurement_units__Chars0_32, &measurement_units__RevChars0_33);
            }
#line 356 "measurement_units.m"
            {
#line 356 "measurement_units.m"
              measurement_units__V_35_35 = measurement_units__add_commas_1_f_0(measurement_units__RevChars0_33);
            }
#line 356 "measurement_units.m"
            {
#line 356 "measurement_units.m"
              measurement_units__V_34_34 = mercury__list__reverse_1_f_0(measurement_units__TypeCtorInfo_9_36, measurement_units__V_35_35);
            }
#line 356 "measurement_units.m"
            {
#line 356 "measurement_units.m"
              mercury__string__from_char_list_2_p_0(measurement_units__V_34_34, &measurement_units__Representation_6);
            }
#line 353 "measurement_units.m"
          }
#line 339 "measurement_units.m"
        else
#line 340 "measurement_units.m"
          {
#line 340 "measurement_units.m"
            {
#line 340 "measurement_units.m"
              mercury__require__error_1_p_0((MR_String) "decimal_fraction: Didn\'t split on decimal point properly");
            }
#line 340 "measurement_units.m"
          }
#line 339 "measurement_units.m"
      }
#line 325 "measurement_units.m"
    return measurement_units__Representation_6;
#line 325 "measurement_units.m"
  }
#line 154 "measurement_units.m"
}

#line 149 "measurement_units.m"
MR_String MR_CALL 
measurement_units__commas_1_f_0(
#line 149 "measurement_units.m"
  MR_Integer measurement_units__Num_3)
#line 149 "measurement_units.m"
{
#line 321 "measurement_units.m"
  {
#line 321 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 321 "measurement_units.m"
    MR_String measurement_units__Str_4;
#line 321 "measurement_units.m"
    MR_Word measurement_units__TypeCtorInfo_9_12;
#line 321 "measurement_units.m"
    MR_String measurement_units__Str0_5;
#line 321 "measurement_units.m"
    MR_Word measurement_units__Chars0_8;
#line 321 "measurement_units.m"
    MR_Word measurement_units__RevChars0_9;
#line 321 "measurement_units.m"
    MR_Word measurement_units__V_10_10;
#line 321 "measurement_units.m"
    MR_Word measurement_units__V_11_11;

#line 322 "measurement_units.m"
    {
#line 322 "measurement_units.m"
      mercury__string__int_to_string_2_p_0(measurement_units__Num_3, &measurement_units__Str0_5);
    }
#line 354 "measurement_units.m"
    {
#line 354 "measurement_units.m"
      mercury__string__to_char_list_2_p_0(measurement_units__Str0_5, &measurement_units__Chars0_8);
    }
#line 1721 "measurement_units.c"
    measurement_units__TypeCtorInfo_9_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 355 "measurement_units.m"
    {
#line 355 "measurement_units.m"
      mercury__list__reverse_2_p_0(measurement_units__TypeCtorInfo_9_12, measurement_units__Chars0_8, &measurement_units__RevChars0_9);
    }
#line 356 "measurement_units.m"
    {
#line 356 "measurement_units.m"
      measurement_units__V_11_11 = measurement_units__add_commas_1_f_0(measurement_units__RevChars0_9);
    }
#line 356 "measurement_units.m"
    {
#line 356 "measurement_units.m"
      measurement_units__V_10_10 = mercury__list__reverse_1_f_0(measurement_units__TypeCtorInfo_9_12, measurement_units__V_11_11);
    }
#line 356 "measurement_units.m"
    {
#line 356 "measurement_units.m"
      mercury__string__from_char_list_2_p_0(measurement_units__V_10_10, &measurement_units__Str_4);
    }
#line 321 "measurement_units.m"
    return measurement_units__Str_4;
#line 321 "measurement_units.m"
  }
#line 149 "measurement_units.m"
}

#line 140 "measurement_units.m"
MR_Float MR_CALL 
measurement_units__not_probability_1_f_0(
#line 140 "measurement_units.m"
  MR_Float measurement_units__X_3)
#line 140 "measurement_units.m"
{
#line 314 "measurement_units.m"
  {
#line 314 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 314 "measurement_units.m"
    MR_Float measurement_units__HeadVar__2_2 = (((MR_Float) 1.0000000000000000) - measurement_units__X_3);

#line 314 "measurement_units.m"
    return measurement_units__HeadVar__2_2;
#line 314 "measurement_units.m"
  }
#line 140 "measurement_units.m"
}

#line 136 "measurement_units.m"
MR_Float MR_CALL 
measurement_units__and_2_f_0(
#line 136 "measurement_units.m"
  MR_Float measurement_units__A_4,
#line 136 "measurement_units.m"
  MR_Float measurement_units__B_5)
#line 136 "measurement_units.m"
{
#line 312 "measurement_units.m"
  {
#line 312 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 312 "measurement_units.m"
    MR_Float measurement_units__HeadVar__3_3 = (measurement_units__A_4 * measurement_units__B_5);

#line 312 "measurement_units.m"
    return measurement_units__HeadVar__3_3;
#line 312 "measurement_units.m"
  }
#line 136 "measurement_units.m"
}

#line 135 "measurement_units.m"
MR_Float MR_CALL 
measurement_units__or_2_f_0(
#line 135 "measurement_units.m"
  MR_Float measurement_units__A_4,
#line 135 "measurement_units.m"
  MR_Float measurement_units__B_5)
#line 135 "measurement_units.m"
{
#line 309 "measurement_units.m"
  {
#line 309 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 309 "measurement_units.m"
    MR_Float measurement_units__HeadVar__3_3;
#line 309 "measurement_units.m"
    MR_Float measurement_units__V_6_6;
#line 309 "measurement_units.m"
    MR_Float measurement_units__V_7_7 = (((MR_Float) 1.0000000000000000) - measurement_units__A_4);
#line 309 "measurement_units.m"
    MR_Float measurement_units__V_8_8 = (((MR_Float) 1.0000000000000000) - measurement_units__B_5);

#line 312 "measurement_units.m"
    measurement_units__V_6_6 = (measurement_units__V_7_7 * measurement_units__V_8_8);
#line 314 "measurement_units.m"
    measurement_units__HeadVar__3_3 = (((MR_Float) 1.0000000000000000) - measurement_units__V_6_6);
#line 309 "measurement_units.m"
    return measurement_units__HeadVar__3_3;
#line 309 "measurement_units.m"
  }
#line 135 "measurement_units.m"
}

#line 131 "measurement_units.m"
MR_Float MR_CALL 
measurement_units__probability_to_float_1_f_0(
#line 131 "measurement_units.m"
  MR_Float measurement_units__Prob_3)
#line 131 "measurement_units.m"
{
#line 302 "measurement_units.m"
  {
#line 302 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 302 "measurement_units.m"
    MR_Float measurement_units__Prob_2 = measurement_units__Prob_3;

#line 302 "measurement_units.m"
    return measurement_units__Prob_2;
#line 302 "measurement_units.m"
  }
#line 131 "measurement_units.m"
}

#line 127 "measurement_units.m"
MR_Float MR_CALL 
measurement_units__probable_1_f_0(
#line 127 "measurement_units.m"
  MR_Float measurement_units__Prob_3)
#line 127 "measurement_units.m"
{
#line 291 "measurement_units.m"
  {
#line 291 "measurement_units.m"
    MR_bool measurement_units__succeeded = (measurement_units__Prob_3 <= ((MR_Float) 1.0000000000000000));
#line 291 "measurement_units.m"
    MR_Float measurement_units__Prob_2 = measurement_units__Prob_3;
#line 293 "measurement_units.m"
    MR_Float measurement_units__V_5_5;

#line 293 "measurement_units.m"
    if (measurement_units__succeeded)
#line 293 "measurement_units.m"
      {
#line 294 "measurement_units.m"
        measurement_units__V_5_5 = (MR_Float) 0.0000000000000000;
#line 294 "measurement_units.m"
        measurement_units__succeeded = (measurement_units__Prob_3 >= measurement_units__V_5_5);
#line 293 "measurement_units.m"
      }
#line 297 "measurement_units.m"
    if (measurement_units__succeeded)
#line 296 "measurement_units.m"
      {
#line 296 "measurement_units.m"
      }
#line 297 "measurement_units.m"
    else
#line 298 "measurement_units.m"
      {
#line 298 "measurement_units.m"
        MR_String measurement_units__V_6_6;
#line 298 "measurement_units.m"
        MR_Word measurement_units__V_8_8;
#line 298 "measurement_units.m"
        MR_Word measurement_units__V_9_9;

#line 299 "measurement_units.m"
        {
#line 299 "measurement_units.m"
          measurement_units__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 299 "measurement_units.m"
          MR_hl_field(MR_mktag(0), measurement_units__V_9_9, 0) = MR_box_float(measurement_units__Prob_3);
#line 299 "measurement_units.m"
        }
#line 298 "measurement_units.m"
        {
#line 298 "measurement_units.m"
          measurement_units__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "measurement_units.m"
          MR_hl_field(MR_mktag(1), measurement_units__V_8_8, 0) = ((MR_Box) (measurement_units__V_9_9));
#line 298 "measurement_units.m"
          MR_hl_field(MR_mktag(1), measurement_units__V_8_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "measurement_units.m"
        }
#line 298 "measurement_units.m"
        {
#line 298 "measurement_units.m"
          measurement_units__V_6_6 = mercury__string__format_2_f_0((MR_String) "Probability %f out of range 0.0 to 1.0 inclusive", measurement_units__V_8_8);
        }
#line 298 "measurement_units.m"
        {
#line 298 "measurement_units.m"
          mercury__require__error_1_p_0(measurement_units__V_6_6);
        }
#line 298 "measurement_units.m"
      }
#line 291 "measurement_units.m"
    return measurement_units__Prob_2;
#line 291 "measurement_units.m"
  }
#line 127 "measurement_units.m"
}

#line 122 "measurement_units.m"
MR_Float MR_CALL 
measurement_units__impossible_0_f_0(void)
#line 122 "measurement_units.m"
{
#line 289 "measurement_units.m"
  {
#line 289 "measurement_units.m"
    MR_bool measurement_units__succeeded;

#line 289 "measurement_units.m"
    return (MR_Float) 0.0000000000000000;
#line 289 "measurement_units.m"
  }
#line 122 "measurement_units.m"
}

#line 118 "measurement_units.m"
MR_Float MR_CALL 
measurement_units__certain_0_f_0(void)
#line 118 "measurement_units.m"
{
#line 287 "measurement_units.m"
  {
#line 287 "measurement_units.m"
    MR_bool measurement_units__succeeded;

#line 287 "measurement_units.m"
    return (MR_Float) 1.0000000000000000;
#line 287 "measurement_units.m"
  }
#line 118 "measurement_units.m"
}

#line 107 "measurement_units.m"
MR_String MR_CALL 
measurement_units__format_time_1_f_0(
#line 107 "measurement_units.m"
  MR_Word measurement_units__HeadVar__1_1)
#line 107 "measurement_units.m"
{
#line 262 "measurement_units.m"
  {
#line 262 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 262 "measurement_units.m"
    MR_String measurement_units__String_4;
#line 262 "measurement_units.m"
    MR_Float measurement_units__F_3 = MR_unbox_float((MR_Box) measurement_units__HeadVar__1_1);

#line 263 "measurement_units.m"
    measurement_units__succeeded = (measurement_units__F_3 < ((MR_Float) 1.0000000000000001e-09));
#line 266 "measurement_units.m"
    if (measurement_units__succeeded)
#line 265 "measurement_units.m"
      {
#line 265 "measurement_units.m"
        MR_Word measurement_units__V_7_7;
#line 265 "measurement_units.m"
        MR_Word measurement_units__V_8_8;
#line 265 "measurement_units.m"
        MR_Float measurement_units__V_9_9;

#line 265 "measurement_units.m"
        {
#line 265 "measurement_units.m"
          measurement_units__V_9_9 = mercury__float__f_slash_2_f_0(measurement_units__F_3, (MR_Float) 9.9999999999999998e-13);
        }
#line 265 "measurement_units.m"
        {
#line 265 "measurement_units.m"
          measurement_units__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 265 "measurement_units.m"
          MR_hl_field(MR_mktag(0), measurement_units__V_8_8, 0) = MR_box_float(measurement_units__V_9_9);
#line 265 "measurement_units.m"
        }
#line 265 "measurement_units.m"
        {
#line 265 "measurement_units.m"
          measurement_units__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "measurement_units.m"
          MR_hl_field(MR_mktag(1), measurement_units__V_7_7, 0) = ((MR_Box) (measurement_units__V_8_8));
#line 265 "measurement_units.m"
          MR_hl_field(MR_mktag(1), measurement_units__V_7_7, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "measurement_units.m"
        }
#line 265 "measurement_units.m"
        {
#line 265 "measurement_units.m"
          mercury__string__format_3_p_0((MR_String) "%.1fps", measurement_units__V_7_7, &measurement_units__String_4);
        }
#line 265 "measurement_units.m"
      }
#line 266 "measurement_units.m"
    else
#line 269 "measurement_units.m"
      {
#line 266 "measurement_units.m"
        measurement_units__succeeded = (measurement_units__F_3 < ((MR_Float) 9.9999999999999995e-07));
#line 269 "measurement_units.m"
        if (measurement_units__succeeded)
#line 268 "measurement_units.m"
          {
#line 268 "measurement_units.m"
            MR_Word measurement_units__V_14_14;
#line 268 "measurement_units.m"
            MR_Word measurement_units__V_15_15;
#line 268 "measurement_units.m"
            MR_Float measurement_units__V_16_16;

#line 268 "measurement_units.m"
            {
#line 268 "measurement_units.m"
              measurement_units__V_16_16 = mercury__float__f_slash_2_f_0(measurement_units__F_3, (MR_Float) 1.0000000000000001e-09);
            }
#line 268 "measurement_units.m"
            {
#line 268 "measurement_units.m"
              measurement_units__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 268 "measurement_units.m"
              MR_hl_field(MR_mktag(0), measurement_units__V_15_15, 0) = MR_box_float(measurement_units__V_16_16);
#line 268 "measurement_units.m"
            }
#line 268 "measurement_units.m"
            {
#line 268 "measurement_units.m"
              measurement_units__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "measurement_units.m"
              MR_hl_field(MR_mktag(1), measurement_units__V_14_14, 0) = ((MR_Box) (measurement_units__V_15_15));
#line 268 "measurement_units.m"
              MR_hl_field(MR_mktag(1), measurement_units__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "measurement_units.m"
            }
#line 268 "measurement_units.m"
            {
#line 268 "measurement_units.m"
              mercury__string__format_3_p_0((MR_String) "%.1fns", measurement_units__V_14_14, &measurement_units__String_4);
            }
#line 268 "measurement_units.m"
          }
#line 269 "measurement_units.m"
        else
#line 272 "measurement_units.m"
          {
#line 269 "measurement_units.m"
            measurement_units__succeeded = (measurement_units__F_3 < ((MR_Float) 0.0010000000000000000));
#line 272 "measurement_units.m"
            if (measurement_units__succeeded)
#line 271 "measurement_units.m"
              {
#line 271 "measurement_units.m"
                MR_Word measurement_units__V_21_21;
#line 271 "measurement_units.m"
                MR_Word measurement_units__V_22_22;
#line 271 "measurement_units.m"
                MR_Float measurement_units__V_23_23;

#line 271 "measurement_units.m"
                {
#line 271 "measurement_units.m"
                  measurement_units__V_23_23 = mercury__float__f_slash_2_f_0(measurement_units__F_3, (MR_Float) 9.9999999999999995e-07);
                }
#line 271 "measurement_units.m"
                {
#line 271 "measurement_units.m"
                  measurement_units__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 271 "measurement_units.m"
                  MR_hl_field(MR_mktag(0), measurement_units__V_22_22, 0) = MR_box_float(measurement_units__V_23_23);
#line 271 "measurement_units.m"
                }
#line 271 "measurement_units.m"
                {
#line 271 "measurement_units.m"
                  measurement_units__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "measurement_units.m"
                  MR_hl_field(MR_mktag(1), measurement_units__V_21_21, 0) = ((MR_Box) (measurement_units__V_22_22));
#line 271 "measurement_units.m"
                  MR_hl_field(MR_mktag(1), measurement_units__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "measurement_units.m"
                }
#line 271 "measurement_units.m"
                {
#line 271 "measurement_units.m"
                  mercury__string__format_3_p_0((MR_String) "%.1fus", measurement_units__V_21_21, &measurement_units__String_4);
                }
#line 271 "measurement_units.m"
              }
#line 272 "measurement_units.m"
            else
#line 275 "measurement_units.m"
              {
#line 272 "measurement_units.m"
                measurement_units__succeeded = (measurement_units__F_3 < ((MR_Float) 1.0000000000000000));
#line 275 "measurement_units.m"
                if (measurement_units__succeeded)
#line 274 "measurement_units.m"
                  {
#line 274 "measurement_units.m"
                    MR_Word measurement_units__V_28_28;
#line 274 "measurement_units.m"
                    MR_Word measurement_units__V_29_29;
#line 274 "measurement_units.m"
                    MR_Float measurement_units__V_30_30;

#line 274 "measurement_units.m"
                    {
#line 274 "measurement_units.m"
                      measurement_units__V_30_30 = mercury__float__f_slash_2_f_0(measurement_units__F_3, (MR_Float) 0.0010000000000000000);
                    }
#line 274 "measurement_units.m"
                    {
#line 274 "measurement_units.m"
                      measurement_units__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 274 "measurement_units.m"
                      MR_hl_field(MR_mktag(0), measurement_units__V_29_29, 0) = MR_box_float(measurement_units__V_30_30);
#line 274 "measurement_units.m"
                    }
#line 274 "measurement_units.m"
                    {
#line 274 "measurement_units.m"
                      measurement_units__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_28_28, 0) = ((MR_Box) (measurement_units__V_29_29));
#line 274 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "measurement_units.m"
                    }
#line 274 "measurement_units.m"
                    {
#line 274 "measurement_units.m"
                      mercury__string__format_3_p_0((MR_String) "%.1fms", measurement_units__V_28_28, &measurement_units__String_4);
                    }
#line 274 "measurement_units.m"
                  }
#line 275 "measurement_units.m"
                else
#line 277 "measurement_units.m"
                  {
#line 277 "measurement_units.m"
                    MR_Word measurement_units__V_34_34;
#line 277 "measurement_units.m"
                    MR_Word measurement_units__V_35_35;

#line 277 "measurement_units.m"
                    {
#line 277 "measurement_units.m"
                      measurement_units__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 277 "measurement_units.m"
                      MR_hl_field(MR_mktag(0), measurement_units__V_35_35, 0) = MR_box_float(measurement_units__F_3);
#line 277 "measurement_units.m"
                    }
#line 277 "measurement_units.m"
                    {
#line 277 "measurement_units.m"
                      measurement_units__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_34_34, 0) = ((MR_Box) (measurement_units__V_35_35));
#line 277 "measurement_units.m"
                      MR_hl_field(MR_mktag(1), measurement_units__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 277 "measurement_units.m"
                    }
#line 277 "measurement_units.m"
                    {
#line 277 "measurement_units.m"
                      mercury__string__format_3_p_0((MR_String) "%.1fs", measurement_units__V_34_34, &measurement_units__String_4);
                    }
#line 277 "measurement_units.m"
                  }
#line 275 "measurement_units.m"
              }
#line 272 "measurement_units.m"
          }
#line 269 "measurement_units.m"
      }
#line 262 "measurement_units.m"
    return measurement_units__String_4;
#line 262 "measurement_units.m"
  }
#line 107 "measurement_units.m"
}

#line 98 "measurement_units.m"
MR_Word MR_CALL 
measurement_units__time_percall_2_f_0(
#line 98 "measurement_units.m"
  MR_Word measurement_units__HeadVar__1_1,
#line 98 "measurement_units.m"
  MR_Integer measurement_units__Calls_5)
#line 98 "measurement_units.m"
{
#line 235 "measurement_units.m"
  {
#line 235 "measurement_units.m"
    MR_bool measurement_units__succeeded = (measurement_units__Calls_5 == (MR_Integer) 0);
#line 235 "measurement_units.m"
    MR_Word measurement_units__HeadVar__3_3;
#line 235 "measurement_units.m"
    MR_Float measurement_units__Time_4 = MR_unbox_float((MR_Box) measurement_units__HeadVar__1_1);
#line 235 "measurement_units.m"
    MR_Float measurement_units__TimePerCall_6;

#line 238 "measurement_units.m"
    if (measurement_units__succeeded)
#line 237 "measurement_units.m"
      measurement_units__TimePerCall_6 = (MR_Float) 0.0000000000000000;
#line 238 "measurement_units.m"
    else
#line 239 "measurement_units.m"
      {
#line 239 "measurement_units.m"
        MR_Float measurement_units__V_7_7;

#line 239 "measurement_units.m"
        {
#line 239 "measurement_units.m"
          measurement_units__V_7_7 = mercury__float__float_1_f_0(measurement_units__Calls_5);
        }
#line 239 "measurement_units.m"
        {
#line 239 "measurement_units.m"
          measurement_units__TimePerCall_6 = mercury__float__f_slash_2_f_0(measurement_units__Time_4, measurement_units__V_7_7);
        }
#line 239 "measurement_units.m"
      }
#line 235 "measurement_units.m"
    measurement_units__HeadVar__3_3 = (MR_Word) MR_box_float(measurement_units__TimePerCall_6);
#line 235 "measurement_units.m"
    return measurement_units__HeadVar__3_3;
#line 235 "measurement_units.m"
  }
#line 98 "measurement_units.m"
}

#line 92 "measurement_units.m"
MR_Word MR_CALL 
measurement_units__ticks_to_time_2_f_0(
#line 92 "measurement_units.m"
  MR_Integer measurement_units__Ticks_4,
#line 92 "measurement_units.m"
  MR_Integer measurement_units__TicksPerSec_5)
#line 92 "measurement_units.m"
{
#line 230 "measurement_units.m"
  {
#line 230 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 230 "measurement_units.m"
    MR_Word measurement_units__Time_6;
#line 230 "measurement_units.m"
    MR_Float measurement_units__SecPerTick_7;
#line 230 "measurement_units.m"
    MR_Float measurement_units__V_9_9;
#line 230 "measurement_units.m"
    MR_Float measurement_units__V_10_10;
#line 230 "measurement_units.m"
    MR_Float measurement_units__V_11_11;

#line 232 "measurement_units.m"
    {
#line 232 "measurement_units.m"
      measurement_units__V_9_9 = mercury__float__float_1_f_0(measurement_units__TicksPerSec_5);
    }
#line 232 "measurement_units.m"
    {
#line 232 "measurement_units.m"
      measurement_units__SecPerTick_7 = mercury__float__f_slash_2_f_0((MR_Float) 1.0000000000000000, measurement_units__V_9_9);
    }
#line 233 "measurement_units.m"
    {
#line 233 "measurement_units.m"
      measurement_units__V_11_11 = mercury__float__float_1_f_0(measurement_units__Ticks_4);
    }
#line 233 "measurement_units.m"
    measurement_units__V_10_10 = (measurement_units__V_11_11 * measurement_units__SecPerTick_7);
#line 233 "measurement_units.m"
    measurement_units__Time_6 = (MR_Word) MR_box_float(measurement_units__V_10_10);
#line 230 "measurement_units.m"
    return measurement_units__Time_6;
#line 230 "measurement_units.m"
  }
#line 92 "measurement_units.m"
}

#line 77 "measurement_units.m"
MR_bool MR_CALL 
measurement_units__percent_at_or_above_threshold_2_p_0(
#line 77 "measurement_units.m"
  MR_Integer measurement_units__Threshold_3,
#line 77 "measurement_units.m"
  MR_Word measurement_units__HeadVar__2_2)
#line 77 "measurement_units.m"
{
#line 217 "measurement_units.m"
  {
#line 217 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 217 "measurement_units.m"
    MR_Float measurement_units__P_4 = MR_unbox_float((MR_Box) measurement_units__HeadVar__2_2);
#line 217 "measurement_units.m"
    MR_Float measurement_units__V_5_5;
#line 217 "measurement_units.m"
    MR_Float measurement_units__V_6_6;
#line 217 "measurement_units.m"
    MR_Float measurement_units__V_7_7;

#line 218 "measurement_units.m"
    {
#line 218 "measurement_units.m"
      measurement_units__V_7_7 = mercury__float__float_1_f_0((MR_Integer) 100);
    }
#line 218 "measurement_units.m"
    measurement_units__V_5_5 = (measurement_units__P_4 * measurement_units__V_7_7);
#line 218 "measurement_units.m"
    {
#line 218 "measurement_units.m"
      measurement_units__V_6_6 = mercury__float__float_1_f_0(measurement_units__Threshold_3);
    }
#line 218 "measurement_units.m"
    measurement_units__succeeded = (measurement_units__V_5_5 >= measurement_units__V_6_6);
#line 217 "measurement_units.m"
    return measurement_units__succeeded;
#line 217 "measurement_units.m"
  }
#line 77 "measurement_units.m"
}

#line 75 "measurement_units.m"
MR_String MR_CALL 
measurement_units__format_percent_1_f_0(
#line 75 "measurement_units.m"
  MR_Word measurement_units__HeadVar__1_1)
#line 75 "measurement_units.m"
{
#line 214 "measurement_units.m"
  {
#line 214 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 214 "measurement_units.m"
    MR_String measurement_units__String_4;
#line 214 "measurement_units.m"
    MR_Float measurement_units__P_3 = MR_unbox_float((MR_Box) measurement_units__HeadVar__1_1);
#line 214 "measurement_units.m"
    MR_Word measurement_units__V_6_6;
#line 214 "measurement_units.m"
    MR_Word measurement_units__V_7_7;
#line 214 "measurement_units.m"
    MR_Float measurement_units__V_8_8 = (measurement_units__P_3 * ((MR_Float) 100.00000000000000));

#line 215 "measurement_units.m"
    {
#line 215 "measurement_units.m"
      measurement_units__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 215 "measurement_units.m"
      MR_hl_field(MR_mktag(0), measurement_units__V_7_7, 0) = MR_box_float(measurement_units__V_8_8);
#line 215 "measurement_units.m"
    }
#line 215 "measurement_units.m"
    {
#line 215 "measurement_units.m"
      measurement_units__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "measurement_units.m"
      MR_hl_field(MR_mktag(1), measurement_units__V_6_6, 0) = ((MR_Box) (measurement_units__V_7_7));
#line 215 "measurement_units.m"
      MR_hl_field(MR_mktag(1), measurement_units__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "measurement_units.m"
    }
#line 215 "measurement_units.m"
    {
#line 215 "measurement_units.m"
      mercury__string__format_3_p_0((MR_String) "%.2f", measurement_units__V_6_6, &measurement_units__String_4);
    }
#line 214 "measurement_units.m"
    return measurement_units__String_4;
#line 214 "measurement_units.m"
  }
#line 75 "measurement_units.m"
}

#line 70 "measurement_units.m"
MR_Word MR_CALL 
measurement_units__percent_1_f_0(
#line 70 "measurement_units.m"
  MR_Float measurement_units__P_3)
#line 70 "measurement_units.m"
{
#line 212 "measurement_units.m"
  {
#line 212 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 212 "measurement_units.m"
    MR_Word measurement_units__HeadVar__2_2 = (MR_Word) MR_box_float(measurement_units__P_3);

#line 212 "measurement_units.m"
    return measurement_units__HeadVar__2_2;
#line 212 "measurement_units.m"
  }
#line 70 "measurement_units.m"
}

#line 200 "measurement_units.m"
static MR_bool MR_CALL 
measurement_units__compare_memory_3_p_0_1(
#line 200 "measurement_units.m"
  MR_Box measurement_units__closure_arg)
#line 200 "measurement_units.m"
{
#line 200 "measurement_units.m"
  {
#line 200 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 200 "measurement_units.m"
    MR_Box measurement_units__closure = measurement_units__closure_arg;

#line 200 "measurement_units.m"
    {
#line 200 "measurement_units.m"
      return measurement_units__succeeded = measurement_units__IntroducedFrom__pred__compare_memory__200__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__closure, (MR_Integer) 4))));
    }
#line 200 "measurement_units.m"
    return measurement_units__succeeded;
#line 200 "measurement_units.m"
  }
#line 200 "measurement_units.m"
}

#line 56 "measurement_units.m"
void MR_CALL 
measurement_units__compare_memory_3_p_0(
#line 56 "measurement_units.m"
  MR_Word measurement_units__MemoryA_4,
#line 56 "measurement_units.m"
  MR_Word measurement_units__MemoryB_5,
#line 56 "measurement_units.m"
  MR_Word * measurement_units__Result_6)
#line 56 "measurement_units.m"
{
#line 197 "measurement_units.m"
  {
#line 197 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 197 "measurement_units.m"
    MR_Float measurement_units__WordsA_7 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__MemoryA_4, (MR_Integer) 0)));
#line 197 "measurement_units.m"
    MR_Integer measurement_units__WordSizeA_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__MemoryA_4, (MR_Integer) 1)));
#line 197 "measurement_units.m"
    MR_Float measurement_units__WordsB_9 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__MemoryB_5, (MR_Integer) 0)));
#line 197 "measurement_units.m"
    MR_Integer measurement_units__WordSizeB_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__MemoryB_5, (MR_Integer) 1)));
#line 197 "measurement_units.m"
    MR_Word measurement_units__V_11_11;

#line 200 "measurement_units.m"
    {
#line 200 "measurement_units.m"
      measurement_units__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 200 "measurement_units.m"
      MR_hl_field(MR_mktag(0), measurement_units__V_11_11, 0) = ((MR_Box) (&measurement_units_scalar_common_1[0]));
#line 200 "measurement_units.m"
      MR_hl_field(MR_mktag(0), measurement_units__V_11_11, 1) = ((MR_Box) (measurement_units__compare_memory_3_p_0_1));
#line 200 "measurement_units.m"
      MR_hl_field(MR_mktag(0), measurement_units__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 200 "measurement_units.m"
      MR_hl_field(MR_mktag(0), measurement_units__V_11_11, 3) = ((MR_Box) (measurement_units__WordSizeA_8));
#line 200 "measurement_units.m"
      MR_hl_field(MR_mktag(0), measurement_units__V_11_11, 4) = ((MR_Box) (measurement_units__WordSizeB_10));
#line 200 "measurement_units.m"
    }
#line 200 "measurement_units.m"
    {
#line 200 "measurement_units.m"
      mercury__require__require_2_p_0(measurement_units__V_11_11, (MR_String) "compare_memory: word size mismatch");
    }
#line 202 "measurement_units.m"
    {
#line 202 "measurement_units.m"
      mercury__private_builtin__builtin_compare_float_3_p_0(measurement_units__Result_6, measurement_units__WordsA_7, measurement_units__WordsB_9);
#line 202 "measurement_units.m"
      return;
    }
#line 197 "measurement_units.m"
  }
#line 56 "measurement_units.m"
}

#line 54 "measurement_units.m"
MR_String MR_CALL 
measurement_units__format_memory_3_f_0(
#line 54 "measurement_units.m"
  MR_Word measurement_units__HeadVar__1_1,
#line 54 "measurement_units.m"
  MR_Word measurement_units__HeadVar__2_2,
#line 54 "measurement_units.m"
  MR_Integer measurement_units__Decimals_3)
#line 54 "measurement_units.m"
{
#line 192 "measurement_units.m"
  {
#line 192 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 192 "measurement_units.m"
    MR_String measurement_units__HeadVar__4_4;
#line 192 "measurement_units.m"
    MR_Integer measurement_units__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__HeadVar__1_1, (MR_Integer) 1)));
#line 192 "measurement_units.m"
    MR_Float measurement_units__V_14_14 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__HeadVar__1_1, (MR_Integer) 0)));

#line 192 "measurement_units.m"
    if ((measurement_units__HeadVar__2_2 == (MR_Integer) 1))
#line 192 "measurement_units.m"
      {
#line 192 "measurement_units.m"
        MR_Float measurement_units__V_8_8;
#line 192 "measurement_units.m"
        MR_Float measurement_units__V_9_9;
#line 192 "measurement_units.m"
        MR_String measurement_units__Format_18;
#line 192 "measurement_units.m"
        MR_String measurement_units__V_20_20;
#line 192 "measurement_units.m"
        MR_String measurement_units__V_21_21;

#line 193 "measurement_units.m"
        {
#line 193 "measurement_units.m"
          measurement_units__V_9_9 = mercury__float__float_1_f_0(measurement_units__V_13_13);
        }
#line 193 "measurement_units.m"
        measurement_units__V_8_8 = (measurement_units__V_14_14 * measurement_units__V_9_9);
#line 371 "measurement_units.m"
        {
#line 371 "measurement_units.m"
          measurement_units__V_21_21 = mercury__string__string_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (measurement_units__Decimals_3)));
        }
#line 371 "measurement_units.m"
        {
#line 371 "measurement_units.m"
          measurement_units__V_20_20 = mercury__string__f_43_43_2_f_0(measurement_units__V_21_21, (MR_String) "f");
        }
#line 371 "measurement_units.m"
        {
#line 371 "measurement_units.m"
          measurement_units__Format_18 = mercury__string__f_43_43_2_f_0((MR_String) "%.", measurement_units__V_20_20);
        }
#line 372 "measurement_units.m"
        {
#line 372 "measurement_units.m"
          return measurement_units__HeadVar__4_4 = measurement_units__decimal_fraction_2_f_0(measurement_units__Format_18, measurement_units__V_8_8);
        }
#line 192 "measurement_units.m"
      }
#line 192 "measurement_units.m"
    else
#line 370 "measurement_units.m"
      {
#line 370 "measurement_units.m"
        MR_String measurement_units__Format_27;
#line 370 "measurement_units.m"
        MR_String measurement_units__V_29_29;
#line 370 "measurement_units.m"
        MR_String measurement_units__V_30_30;

#line 371 "measurement_units.m"
        {
#line 371 "measurement_units.m"
          measurement_units__V_30_30 = mercury__string__string_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (measurement_units__Decimals_3)));
        }
#line 371 "measurement_units.m"
        {
#line 371 "measurement_units.m"
          measurement_units__V_29_29 = mercury__string__f_43_43_2_f_0(measurement_units__V_30_30, (MR_String) "f");
        }
#line 371 "measurement_units.m"
        {
#line 371 "measurement_units.m"
          measurement_units__Format_27 = mercury__string__f_43_43_2_f_0((MR_String) "%.", measurement_units__V_29_29);
        }
#line 372 "measurement_units.m"
        {
#line 372 "measurement_units.m"
          return measurement_units__HeadVar__4_4 = measurement_units__decimal_fraction_2_f_0(measurement_units__Format_27, measurement_units__V_14_14);
        }
#line 370 "measurement_units.m"
      }
#line 192 "measurement_units.m"
    return measurement_units__HeadVar__4_4;
#line 192 "measurement_units.m"
  }
#line 54 "measurement_units.m"
}

#line 48 "measurement_units.m"
MR_Word MR_CALL 
measurement_units__f_slash_2_f_0(
#line 48 "measurement_units.m"
  MR_Word measurement_units__HeadVar__1_1,
#line 48 "measurement_units.m"
  MR_Integer measurement_units__Denom_6)
#line 48 "measurement_units.m"
{
#line 185 "measurement_units.m"
  {
#line 185 "measurement_units.m"
    MR_bool measurement_units__succeeded = (measurement_units__Denom_6 == (MR_Integer) 0);
#line 185 "measurement_units.m"
    MR_Word measurement_units__HeadVar__3_3;
#line 185 "measurement_units.m"
    MR_Float measurement_units__Nom_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), measurement_units__HeadVar__1_1, (MR_Integer) 0)));
#line 185 "measurement_units.m"
    MR_Integer measurement_units__BPW_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), measurement_units__HeadVar__1_1, (MR_Integer) 1)));

#line 185 "measurement_units.m"
    if (measurement_units__succeeded)
#line 187 "measurement_units.m"
      {
#line 185 "measurement_units.m"
        {
#line 185 "measurement_units.m"
          measurement_units__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "measurement_units.m"
          MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, 0) = MR_box_float((MR_Float) 0.0000000000000000);
#line 185 "measurement_units.m"
          MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, 1) = ((MR_Box) (measurement_units__BPW_5));
#line 185 "measurement_units.m"
        }
#line 187 "measurement_units.m"
      }
#line 185 "measurement_units.m"
    else
#line 189 "measurement_units.m"
      {
#line 189 "measurement_units.m"
        MR_Float measurement_units__V_8_8;
#line 189 "measurement_units.m"
        MR_Float measurement_units__V_9_9;

#line 189 "measurement_units.m"
        {
#line 189 "measurement_units.m"
          measurement_units__V_9_9 = mercury__float__float_1_f_0(measurement_units__Denom_6);
        }
#line 189 "measurement_units.m"
        {
#line 189 "measurement_units.m"
          measurement_units__V_8_8 = mercury__float__f_slash_2_f_0(measurement_units__Nom_4, measurement_units__V_9_9);
        }
#line 185 "measurement_units.m"
        {
#line 185 "measurement_units.m"
          measurement_units__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "measurement_units.m"
          MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, 0) = MR_box_float(measurement_units__V_8_8);
#line 185 "measurement_units.m"
          MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, 1) = ((MR_Box) (measurement_units__BPW_5));
#line 185 "measurement_units.m"
        }
#line 189 "measurement_units.m"
      }
#line 185 "measurement_units.m"
    return measurement_units__HeadVar__3_3;
#line 185 "measurement_units.m"
  }
#line 48 "measurement_units.m"
}

#line 43 "measurement_units.m"
MR_Word MR_CALL 
measurement_units__memory_words_2_f_0(
#line 43 "measurement_units.m"
  MR_Integer measurement_units__WordsI_4,
#line 43 "measurement_units.m"
  MR_Integer measurement_units__BytesPerWord_5)
#line 43 "measurement_units.m"
{
#line 182 "measurement_units.m"
  {
#line 182 "measurement_units.m"
    MR_bool measurement_units__succeeded;
#line 182 "measurement_units.m"
    MR_Word measurement_units__HeadVar__3_3;
#line 182 "measurement_units.m"
    MR_Float measurement_units__WordsF_6;

#line 183 "measurement_units.m"
    {
#line 183 "measurement_units.m"
      measurement_units__WordsF_6 = mercury__float__float_1_f_0(measurement_units__WordsI_4);
    }
#line 182 "measurement_units.m"
    {
#line 182 "measurement_units.m"
      measurement_units__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 182 "measurement_units.m"
      MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, 0) = MR_box_float(measurement_units__WordsF_6);
#line 182 "measurement_units.m"
      MR_hl_field(MR_mktag(0), measurement_units__HeadVar__3_3, 1) = ((MR_Box) (measurement_units__BytesPerWord_5));
#line 182 "measurement_units.m"
    }
#line 182 "measurement_units.m"
    return measurement_units__HeadVar__3_3;
#line 182 "measurement_units.m"
  }
#line 43 "measurement_units.m"
}

void mercury__measurement_units__init(void)
{
}

void mercury__measurement_units__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_memory_0);
	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_memory_units_0);
	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_percent_0);
	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_probability_0);
	MR_register_type_ctor_info(&measurement_units__measurement_units__type_ctor_info_time_0);
}

void mercury__measurement_units__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module measurement_units. */
