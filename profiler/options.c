/*
** Automatically generated from `options.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


/* :- module options. */
/* :- implementation. */

/*
INIT mercury__options__init
ENDINIT
*/

#include "options.mih"


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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




#line 63 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_0;

#line 66 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_1;

#line 69 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_2;

#line 72 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_3;

#line 75 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_4;

#line 78 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_5;

#line 81 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_6;

#line 84 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_7;

#line 87 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_8;

#line 90 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_9;

#line 93 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_10;

#line 96 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_11;

#line 99 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_12;

#line 102 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_13;

#line 105 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_14;

#line 108 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_15;

#line 111 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_16;

#line 114 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_17;

#line 117 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_18;

#line 120 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_19;

#line 123 "options.c"
static const MR_EnumFunctorDescPtr options__options__enum_value_ordered_option_0[20];

#line 126 "options.c"
static const MR_EnumFunctorDescPtr options__options__enum_name_ordered_option_0[20];

#line 129 "options.c"
static const MR_Integer options__options__functor_number_map_option_0[20];

#line 132 "options.c"
static const MR_FA_TypeInfo_Struct2 options__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

#line 135 "options.c"
static MR_bool MR_CALL 
options____Unify____option_0_0_10001(
#line 138 "options.c"
  MR_Box options__wrapper_arg_1,
#line 140 "options.c"
  MR_Box options__wrapper_arg_2);

#line 143 "options.c"
static void MR_CALL 
options____Compare____option_0_0_10001(
#line 146 "options.c"
  MR_Box * options__wrapper_arg_1,
#line 148 "options.c"
  MR_Box options__wrapper_arg_2,
#line 150 "options.c"
  MR_Box options__wrapper_arg_3);

#line 153 "options.c"
static MR_bool MR_CALL 
options____Unify____option_table_0_0_10001(
#line 156 "options.c"
  MR_Box options__wrapper_arg_1,
#line 158 "options.c"
  MR_Box options__wrapper_arg_2);

#line 161 "options.c"
static void MR_CALL 
options____Compare____option_table_0_0_10001(
#line 164 "options.c"
  MR_Box * options__wrapper_arg_1,
#line 166 "options.c"
  MR_Box options__wrapper_arg_2,
#line 168 "options.c"
  MR_Box options__wrapper_arg_3);


static /* final */ const MR_Box options_scalar_common_1[1][3];

static /* final */ const MR_Box options_scalar_common_2[3][1];

static /* final */ const MR_Box options_scalar_common_3[7][2];


#line 79 "options.m"
/* sealed */ struct options__vector_common_type_4_0_s {
#line 79 "options.m"
  const MR_Word options__vector_common_type_4_0__vct_4_f_0;
#line 79 "options.m"
  const MR_Word options__vector_common_type_4_0__vct_4_f_1;
#line 79 "options.m"
};

static /* final */ const struct options__vector_common_type_4_0_s options_vector_common_4[20];



static /* final */ const MR_Box options_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&options__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box options_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "Invalid argument to \140--profile\' or \140-p\' option"))
  },
};

static /* final */ const MR_Box options_scalar_common_3[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "Prof.Counts"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "Prof.CallPair"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "Prof.Decl"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "Prof.Snapshots"))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "Prof.MemoryCells"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "Prof.MemoryWords"))
  },
};


static /* final */ const struct options__vector_common_type_4_0_s options_vector_common_4[20] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_2[0])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_2[0])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_2[0])
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_2[0])
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 6 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 7 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 8 */
  {
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(3), &options_scalar_common_3[0])
  },
  /* row 9 */
  {
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(3), &options_scalar_common_3[1])
  },
  /* row 10 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(3), &options_scalar_common_3[2])
  },
  /* row 11 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(3), &options_scalar_common_3[3])
  },
  /* row 12 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_2[1])
  },
  /* row 13 */
  {
    (MR_Integer) 13,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_2[0])
  },
  /* row 14 */
  {
    (MR_Integer) 14,
    (MR_Word) MR_mkword(MR_mktag(3), &options_scalar_common_3[4])
  },
  /* row 15 */
  {
    (MR_Integer) 15,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_2[0])
  },
  /* row 16 */
  {
    (MR_Integer) 16,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_2[0])
  },
  /* row 17 */
  {
    (MR_Integer) 17,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_2[0])
  },
  /* row 18 */
  {
    (MR_Integer) 18,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_2[1])
  },
  /* row 19 */
  {
    (MR_Integer) 19,
    (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_2[0])
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



#line 370 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_0 = {
  (MR_String) "verbose",
  (MR_Integer) 0
};

#line 376 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_1 = {
  (MR_String) "very_verbose",
  (MR_Integer) 1
};

#line 382 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_2 = {
  (MR_String) "dynamic_cg",
  (MR_Integer) 2
};

#line 388 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_3 = {
  (MR_String) "call_graph",
  (MR_Integer) 3
};

#line 394 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_4 = {
  (MR_String) "profile",
  (MR_Integer) 4
};

#line 400 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_5 = {
  (MR_String) "profile_time",
  (MR_Integer) 5
};

#line 406 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_6 = {
  (MR_String) "profile_memory_words",
  (MR_Integer) 6
};

#line 412 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_7 = {
  (MR_String) "profile_memory_cells",
  (MR_Integer) 7
};

#line 418 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_8 = {
  (MR_String) "demangle",
  (MR_Integer) 8
};

#line 424 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_9 = {
  (MR_String) "countfile",
  (MR_Integer) 9
};

#line 430 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_10 = {
  (MR_String) "pairfile",
  (MR_Integer) 10
};

#line 436 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_11 = {
  (MR_String) "declfile",
  (MR_Integer) 11
};

#line 442 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_12 = {
  (MR_String) "libraryfile",
  (MR_Integer) 12
};

#line 448 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_13 = {
  (MR_String) "snapshots",
  (MR_Integer) 13
};

#line 454 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_14 = {
  (MR_String) "snapshots_file",
  (MR_Integer) 14
};

#line 460 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_15 = {
  (MR_String) "snapshots_by_type",
  (MR_Integer) 15
};

#line 466 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_16 = {
  (MR_String) "snapshots_brief",
  (MR_Integer) 16
};

#line 472 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_17 = {
  (MR_String) "snapshots_include_runtime",
  (MR_Integer) 17
};

#line 478 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_18 = {
  (MR_String) "snapshots_recalc_size",
  (MR_Integer) 18
};

#line 484 "options.c"
static const MR_EnumFunctorDesc options__options__enum_functor_desc_option_0_19 = {
  (MR_String) "help",
  (MR_Integer) 19
};

#line 490 "options.c"
static const MR_EnumFunctorDescPtr options__options__enum_value_ordered_option_0[20] = {
  &options__options__enum_functor_desc_option_0_0,
  &options__options__enum_functor_desc_option_0_1,
  &options__options__enum_functor_desc_option_0_2,
  &options__options__enum_functor_desc_option_0_3,
  &options__options__enum_functor_desc_option_0_4,
  &options__options__enum_functor_desc_option_0_5,
  &options__options__enum_functor_desc_option_0_6,
  &options__options__enum_functor_desc_option_0_7,
  &options__options__enum_functor_desc_option_0_8,
  &options__options__enum_functor_desc_option_0_9,
  &options__options__enum_functor_desc_option_0_10,
  &options__options__enum_functor_desc_option_0_11,
  &options__options__enum_functor_desc_option_0_12,
  &options__options__enum_functor_desc_option_0_13,
  &options__options__enum_functor_desc_option_0_14,
  &options__options__enum_functor_desc_option_0_15,
  &options__options__enum_functor_desc_option_0_16,
  &options__options__enum_functor_desc_option_0_17,
  &options__options__enum_functor_desc_option_0_18,
  &options__options__enum_functor_desc_option_0_19
};

#line 514 "options.c"
static const MR_EnumFunctorDescPtr options__options__enum_name_ordered_option_0[20] = {
  &options__options__enum_functor_desc_option_0_3,
  &options__options__enum_functor_desc_option_0_9,
  &options__options__enum_functor_desc_option_0_11,
  &options__options__enum_functor_desc_option_0_8,
  &options__options__enum_functor_desc_option_0_2,
  &options__options__enum_functor_desc_option_0_19,
  &options__options__enum_functor_desc_option_0_12,
  &options__options__enum_functor_desc_option_0_10,
  &options__options__enum_functor_desc_option_0_4,
  &options__options__enum_functor_desc_option_0_7,
  &options__options__enum_functor_desc_option_0_6,
  &options__options__enum_functor_desc_option_0_5,
  &options__options__enum_functor_desc_option_0_13,
  &options__options__enum_functor_desc_option_0_16,
  &options__options__enum_functor_desc_option_0_15,
  &options__options__enum_functor_desc_option_0_14,
  &options__options__enum_functor_desc_option_0_17,
  &options__options__enum_functor_desc_option_0_18,
  &options__options__enum_functor_desc_option_0_0,
  &options__options__enum_functor_desc_option_0_1
};

#line 538 "options.c"
static const MR_Integer options__options__functor_number_map_option_0[20] = {
  (MR_Integer) 18,
  (MR_Integer) 19,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 11,
  (MR_Integer) 10,
  (MR_Integer) 9,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 12,
  (MR_Integer) 15,
  (MR_Integer) 14,
  (MR_Integer) 13,
  (MR_Integer) 16,
  (MR_Integer) 17,
  (MR_Integer) 5
};

#line 562 "options.c"
const MR_TypeCtorInfo_Struct options__options__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (options____Unify____option_0_0_10001)),
  ((MR_Box) (options____Compare____option_0_0_10001)),
  (MR_String) "options",
  (MR_String) "option",
  {
    options__options__enum_name_ordered_option_0
  },
  {
    options__options__enum_value_ordered_option_0
  },
  (MR_Integer) 20,
  (MR_Integer) 4,
  options__options__functor_number_map_option_0
};

#line 583 "options.c"
static const MR_FA_TypeInfo_Struct2 options__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &options__options__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 592 "options.c"
const MR_TypeCtorInfo_Struct options__options__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (options____Unify____option_table_0_0_10001)),
  ((MR_Box) (options____Compare____option_table_0_0_10001)),
  (MR_String) "options",
  (MR_String) "option_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &options__tree234__ti_tree234_2options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 613 "options.c"
static MR_bool MR_CALL 
options____Unify____option_0_0_10001(
#line 616 "options.c"
  MR_Box options__wrapper_arg_1,
#line 618 "options.c"
  MR_Box options__wrapper_arg_2)
#line 620 "options.c"
{
#line 622 "options.c"
  {
#line 624 "options.c"
    MR_bool options__succeeded;

#line 627 "options.c"
    {
#line 629 "options.c"
      options__succeeded = options____Unify____option_0_0(((MR_Word) options__wrapper_arg_1), ((MR_Word) options__wrapper_arg_2));
    }
#line 632 "options.c"
    return options__succeeded;
#line 634 "options.c"
  }
#line 636 "options.c"
}

#line 639 "options.c"
static void MR_CALL 
options____Compare____option_0_0_10001(
#line 642 "options.c"
  MR_Box * options__wrapper_arg_1,
#line 644 "options.c"
  MR_Box options__wrapper_arg_2,
#line 646 "options.c"
  MR_Box options__wrapper_arg_3)
#line 648 "options.c"
{
#line 650 "options.c"
  {
#line 652 "options.c"
    MR_Word options__conv0_HeadVar__1_1;

#line 655 "options.c"
    {
#line 657 "options.c"
      options____Compare____option_0_0(&options__conv0_HeadVar__1_1, ((MR_Word) options__wrapper_arg_2), ((MR_Word) options__wrapper_arg_3));
    }
#line 660 "options.c"
    *options__wrapper_arg_1 = ((MR_Box) (options__conv0_HeadVar__1_1));
#line 662 "options.c"
  }
#line 664 "options.c"
}

#line 667 "options.c"
static MR_bool MR_CALL 
options____Unify____option_table_0_0_10001(
#line 670 "options.c"
  MR_Box options__wrapper_arg_1,
#line 672 "options.c"
  MR_Box options__wrapper_arg_2)
#line 674 "options.c"
{
#line 676 "options.c"
  {
#line 678 "options.c"
    MR_bool options__succeeded;

#line 681 "options.c"
    {
#line 683 "options.c"
      options__succeeded = options____Unify____option_table_0_0(((MR_Word) options__wrapper_arg_1), ((MR_Word) options__wrapper_arg_2));
    }
#line 686 "options.c"
    return options__succeeded;
#line 688 "options.c"
  }
#line 690 "options.c"
}

#line 693 "options.c"
static void MR_CALL 
options____Compare____option_table_0_0_10001(
#line 696 "options.c"
  MR_Box * options__wrapper_arg_1,
#line 698 "options.c"
  MR_Box options__wrapper_arg_2,
#line 700 "options.c"
  MR_Box options__wrapper_arg_3)
#line 702 "options.c"
{
#line 704 "options.c"
  {
#line 706 "options.c"
    MR_Word options__conv0_HeadVar__1_1;

#line 709 "options.c"
    {
#line 711 "options.c"
      options____Compare____option_table_0_0(&options__conv0_HeadVar__1_1, ((MR_Word) options__wrapper_arg_2), ((MR_Word) options__wrapper_arg_3));
    }
#line 714 "options.c"
    *options__wrapper_arg_1 = ((MR_Box) (options__conv0_HeadVar__1_1));
#line 716 "options.c"
  }
#line 718 "options.c"
}

#line 54 "options.m"
void MR_CALL 
options____Compare____option_table_0_0(
#line 54 "options.m"
  MR_Word * options__HeadVar__1_1,
#line 54 "options.m"
  MR_Word options__HeadVar__2_2,
#line 54 "options.m"
  MR_Word options__HeadVar__3_3)
#line 54 "options.m"
{
#line 54 "options.m"
  {
#line 54 "options.m"
    MR_bool options__succeeded;
#line 54 "options.m"
    MR_Word options__Cast_HeadVar1_4 = options__HeadVar__2_2;
#line 54 "options.m"
    MR_Word options__Cast_HeadVar2_5 = options__HeadVar__3_3;

#line 54 "options.m"
    {
#line 54 "options.m"
      mercury__builtin__compare_3_p_0((MR_Word) &options_scalar_common_1[0], options__HeadVar__1_1, ((MR_Box) (options__Cast_HeadVar1_4)), ((MR_Box) (options__Cast_HeadVar2_5)));
#line 54 "options.m"
      return;
    }
#line 54 "options.m"
  }
#line 54 "options.m"
}

#line 54 "options.m"
MR_bool MR_CALL 
options____Unify____option_table_0_0(
#line 54 "options.m"
  MR_Word options__HeadVar__1_1,
#line 54 "options.m"
  MR_Word options__HeadVar__2_2)
#line 54 "options.m"
{
#line 54 "options.m"
  {
#line 54 "options.m"
    MR_bool options__succeeded;
#line 54 "options.m"
    MR_Word options__Cast_HeadVar1_3 = options__HeadVar__1_1;
#line 54 "options.m"
    MR_Word options__Cast_HeadVar2_4 = options__HeadVar__2_2;

#line 54 "options.m"
    {
#line 54 "options.m"
      return options__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &options_scalar_common_1[0], ((MR_Box) (options__Cast_HeadVar1_3)), ((MR_Box) (options__Cast_HeadVar2_4)));
    }
#line 54 "options.m"
    return options__succeeded;
#line 54 "options.m"
  }
#line 54 "options.m"
}

#line 27 "options.m"
void MR_CALL 
options____Compare____option_0_0(
#line 27 "options.m"
  MR_Word * options__HeadVar__1_1,
#line 27 "options.m"
  MR_Word options__HeadVar__2_2,
#line 27 "options.m"
  MR_Word options__HeadVar__3_3)
#line 27 "options.m"
{
#line 27 "options.m"
  {
#line 27 "options.m"
    MR_bool options__succeeded;
#line 27 "options.m"
    MR_Integer options__Cast_HeadVar1_4 = (MR_Integer) options__HeadVar__2_2;
#line 27 "options.m"
    MR_Integer options__Cast_HeadVar2_5 = (MR_Integer) options__HeadVar__3_3;

#line 27 "options.m"
    {
#line 27 "options.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(options__HeadVar__1_1, options__Cast_HeadVar1_4, options__Cast_HeadVar2_5);
#line 27 "options.m"
      return;
    }
#line 27 "options.m"
  }
#line 27 "options.m"
}

#line 27 "options.m"
MR_bool MR_CALL 
options____Unify____option_0_0(
#line 27 "options.m"
  MR_Word options__HeadVar__2_1,
#line 27 "options.m"
  MR_Word options__HeadVar__2_2)
#line 27 "options.m"
{
#line 824 "options.c"
  {
#line 826 "options.c"
    MR_bool options__succeeded = (options__HeadVar__2_1 == options__HeadVar__2_2);

#line 829 "options.c"
    return options__succeeded;
#line 831 "options.c"
  }
#line 27 "options.m"
}

#line 67 "options.m"
void MR_CALL 
options__maybe_flush_output_3_p_0(
#line 67 "options.m"
  MR_Word options__HeadVar__1_1)
#line 67 "options.m"
{
#line 226 "options.m"
  {
#line 226 "options.m"
    MR_bool options__succeeded;

#line 226 "options.m"
    if ((options__HeadVar__1_1 == (MR_Integer) 0))
#line 228 "options.m"
      {
#line 228 "options.m"
      }
#line 226 "options.m"
    else
#line 227 "options.m"
      {
#line 227 "options.m"
        mercury__io__flush_output_2_p_0();
#line 227 "options.m"
        return;
      }
#line 226 "options.m"
  }
#line 67 "options.m"
}

#line 66 "options.m"
void MR_CALL 
options__maybe_write_string_4_p_0(
#line 66 "options.m"
  MR_Word options__HeadVar__1_1,
#line 66 "options.m"
  MR_String options__String_2)
#line 66 "options.m"
{
#line 222 "options.m"
  {
#line 222 "options.m"
    MR_bool options__succeeded;

#line 222 "options.m"
    if ((options__HeadVar__1_1 == (MR_Integer) 0))
#line 224 "options.m"
      {
#line 224 "options.m"
      }
#line 222 "options.m"
    else
#line 223 "options.m"
      {
#line 223 "options.m"
        mercury__io__write_string_3_p_0(options__String_2);
#line 223 "options.m"
        return;
      }
#line 222 "options.m"
  }
#line 66 "options.m"
}

#line 62 "options.m"
void MR_CALL 
options__options_help_2_p_0(void)
#line 62 "options.m"
{
#line 166 "options.m"
  {
#line 166 "options.m"
    MR_bool options__succeeded;

#line 167 "options.m"
    {
#line 167 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-h, --help\n");
    }
#line 168 "options.m"
    {
#line 168 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tPrint this usage message.\n");
    }
#line 170 "options.m"
    {
#line 170 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\nProfiler Options:\n");
    }
#line 171 "options.m"
    {
#line 171 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-c, --call-graph\n");
    }
#line 172 "options.m"
    {
#line 172 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tInclude the call graph profile.\n");
    }
#line 173 "options.m"
    {
#line 173 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-d, --use-dynamic\n");
    }
#line 174 "options.m"
    {
#line 174 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tBuild the call graph dynamically.\n");
    }
#line 175 "options.m"
    {
#line 175 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-p, --profile {time, memory-words, memory-cells}\n");
    }
#line 176 "options.m"
    {
#line 176 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tSelect what to profile: time, amount of memory allocated, or\n");
    }
#line 177 "options.m"
    {
#line 177 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tnumber of memory allocations (regardless of size).\n");
    }
#line 178 "options.m"
    {
#line 178 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-m\n");
    }
#line 179 "options.m"
    {
#line 179 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tSame as \140--profile memory-words\'\n");
    }
#line 180 "options.m"
    {
#line 180 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-M\n");
    }
#line 181 "options.m"
    {
#line 181 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tSame as \140--profile memory-cells\'.\n");
    }
#line 182 "options.m"
    {
#line 182 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-t\n");
    }
#line 183 "options.m"
    {
#line 183 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tSame as \140--profile time\'.\n");
    }
#line 184 "options.m"
    {
#line 184 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t--no-demangle\n");
    }
#line 185 "options.m"
    {
#line 185 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tOutput the mangled predicate and function names.\n");
    }
#line 187 "options.m"
    {
#line 187 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\nFilename Options:\n");
    }
#line 188 "options.m"
    {
#line 188 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-C <file>, --count-file <file>\n");
    }
#line 189 "options.m"
    {
#line 189 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the count file. Usually \140Prof.Counts\',\n");
    }
#line 190 "options.m"
    {
#line 190 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\t\140Prof.MemoryWords\', or \140Prof.MemoryCells\'.\n");
    }
#line 191 "options.m"
    {
#line 191 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-D <file>, --declaration-file <file>\n");
    }
#line 192 "options.m"
    {
#line 192 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the declaration file. Usually \140Prof.Decl\'.\n");
    }
#line 193 "options.m"
    {
#line 193 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-P <file>, --call-pair-file <file>\n");
    }
#line 194 "options.m"
    {
#line 194 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the call-pair file. Usually \140Prof.CallPair\'.\n");
    }
#line 195 "options.m"
    {
#line 195 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-L <file>, --library-callgraph <file>\n");
    }
#line 196 "options.m"
    {
#line 196 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the file which contains the call graph for\n");
    }
#line 197 "options.m"
    {
#line 197 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tthe library modules.\n");
    }
#line 199 "options.m"
    {
#line 199 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\nSnapshot options:\n");
    }
#line 200 "options.m"
    {
#line 200 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-s, --snapshots\n");
    }
#line 201 "options.m"
    {
#line 201 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tShow summary of heap objects at the times\n");
    }
#line 202 "options.m"
    {
#line 202 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\t\140benchmarking.report_memory_attribution\' was called.\n");
    }
#line 203 "options.m"
    {
#line 203 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tThis overrides other profiler modes.\n");
    }
#line 204 "options.m"
    {
#line 204 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t--snapshots-file <file>\n");
    }
#line 205 "options.m"
    {
#line 205 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tName of the snapshots file. Usually \140Prof.Snapshots\'.\n");
    }
#line 206 "options.m"
    {
#line 206 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-T, --snapshots-by-type\n");
    }
#line 207 "options.m"
    {
#line 207 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tGroup results by type.\n");
    }
#line 208 "options.m"
    {
#line 208 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-b, --snapshots-brief\n");
    }
#line 209 "options.m"
    {
#line 209 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tGenerate a brief profile.\n");
    }
#line 210 "options.m"
    {
#line 210 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-r, --snapshots-include-runtime\n");
    }
#line 211 "options.m"
    {
#line 211 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tInclude internal Mercury runtime structures in the\n");
    }
#line 212 "options.m"
    {
#line 212 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tprofile. These are excluded by default.\n");
    }
#line 214 "options.m"
    {
#line 214 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\nVerbosity Options:\n");
    }
#line 215 "options.m"
    {
#line 215 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-v, --verbose\n");
    }
#line 216 "options.m"
    {
#line 216 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tOutput progress messages at each stage.\n");
    }
#line 217 "options.m"
    {
#line 217 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t-V, --very_verbose\n");
    }
#line 218 "options.m"
    {
#line 218 "options.m"
      mercury__io__write_string_3_p_0((MR_String) "\t\tOutput very verbose progress messages.\n");
#line 218 "options.m"
      return;
    }
#line 166 "options.m"
  }
#line 62 "options.m"
}

#line 59 "options.m"
MR_bool MR_CALL 
options__special_handler_4_p_0(
#line 59 "options.m"
  MR_Word options__HeadVar__1_1,
#line 59 "options.m"
  MR_Word options__HeadVar__2_2,
#line 59 "options.m"
  MR_Word options__STATE_VARIABLE_OptionTable_0_3,
#line 59 "options.m"
  MR_Word * options__HeadVar__4_4)
#line 59 "options.m"
{
#line 146 "options.m"
  {
#line 146 "options.m"
    MR_bool options__succeeded;

#line 146 "options.m"
    if ((options__HeadVar__1_1 == (MR_Integer) 4))
#line 146 "options.m"
      {
#line 146 "options.m"
        MR_String options__WhatToProfile_5;
#line 150 "options.m"
        MR_String options__CountFile_8;

#line 146 "options.m"
        options__succeeded = ((((MR_tag((MR_Word) options__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), options__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 146 "options.m"
        if (options__succeeded)
#line 146 "options.m"
          {
#line 146 "options.m"
            options__WhatToProfile_5 = ((MR_String) (MR_hl_field(MR_mktag(3), options__HeadVar__2_2, (MR_Integer) 1)));
#line 162 "options.m"
            if ((strcmp(options__WhatToProfile_5, (MR_String) "time") == 0))
#line 164 "options.m"
              {
#line 164 "options.m"
                options__CountFile_8 = (MR_String) "Prof.Counts";
#line 164 "options.m"
                options__succeeded = MR_TRUE;
#line 164 "options.m"
              }
#line 162 "options.m"
            else
#line 162 "options.m"
              if ((strcmp(options__WhatToProfile_5, (MR_String) "memory-cells") == 0))
#line 163 "options.m"
                {
#line 163 "options.m"
                  options__CountFile_8 = (MR_String) "Prof.MemoryCells";
#line 163 "options.m"
                  options__succeeded = MR_TRUE;
#line 163 "options.m"
                }
#line 162 "options.m"
              else
#line 162 "options.m"
                if ((strcmp(options__WhatToProfile_5, (MR_String) "memory-words") == 0))
#line 162 "options.m"
                  {
#line 162 "options.m"
                    options__CountFile_8 = (MR_String) "Prof.MemoryWords";
#line 162 "options.m"
                    options__succeeded = MR_TRUE;
#line 162 "options.m"
                  }
#line 162 "options.m"
                else
#line 162 "options.m"
                  options__succeeded = MR_FALSE;
#line 150 "options.m"
            if (options__succeeded)
#line 148 "options.m"
              {
#line 148 "options.m"
                MR_Word options__V_11_11;
#line 148 "options.m"
                MR_Word options__STATE_VARIABLE_OptionTable_12_12;

#line 148 "options.m"
                {
#line 148 "options.m"
                  options__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "options.m"
                  MR_hl_field(MR_mktag(3), options__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 148 "options.m"
                  MR_hl_field(MR_mktag(3), options__V_11_11, 1) = ((MR_Box) (options__CountFile_8));
#line 148 "options.m"
                }
#line 148 "options.m"
                {
#line 148 "options.m"
                  mercury__map__set_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (options__V_11_11)), options__STATE_VARIABLE_OptionTable_0_3, &options__STATE_VARIABLE_OptionTable_12_12);
                }
#line 149 "options.m"
                {
#line 149 "options.m"
                  MR_Word base;
#line 149 "options.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 149 "options.m"
                  *options__HeadVar__4_4 = base;
#line 149 "options.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (options__STATE_VARIABLE_OptionTable_12_12));
#line 149 "options.m"
                }
#line 148 "options.m"
              }
#line 150 "options.m"
            else
#line 151 "options.m"
              {
#line 151 "options.m"
                *options__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &options_scalar_common_2[2]);
#line 151 "options.m"
              }
#line 150 "options.m"
            options__succeeded = MR_TRUE;
#line 146 "options.m"
          }
#line 146 "options.m"
      }
#line 146 "options.m"
    else
#line 146 "options.m"
      if ((options__HeadVar__1_1 == (MR_Integer) 7))
#line 155 "options.m"
        {
#line 155 "options.m"
          MR_Word options__STATE_VARIABLE_OptionTable_27;

#line 156 "options.m"
          {
#line 156 "options.m"
            mercury__map__set_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (MR_mkword(MR_mktag(3), &options_scalar_common_3[5]))), options__STATE_VARIABLE_OptionTable_0_3, &options__STATE_VARIABLE_OptionTable_27);
          }
#line 155 "options.m"
          {
#line 155 "options.m"
            MR_Word base;
#line 155 "options.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 155 "options.m"
            *options__HeadVar__4_4 = base;
#line 155 "options.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (options__STATE_VARIABLE_OptionTable_27));
#line 155 "options.m"
          }
#line 155 "options.m"
          options__succeeded = MR_TRUE;
#line 155 "options.m"
        }
#line 146 "options.m"
      else
#line 146 "options.m"
        if ((options__HeadVar__1_1 == (MR_Integer) 6))
#line 153 "options.m"
          {
#line 153 "options.m"
            MR_Word options__STATE_VARIABLE_OptionTable_19;

#line 154 "options.m"
            {
#line 154 "options.m"
              mercury__map__set_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (MR_mkword(MR_mktag(3), &options_scalar_common_3[6]))), options__STATE_VARIABLE_OptionTable_0_3, &options__STATE_VARIABLE_OptionTable_19);
            }
#line 153 "options.m"
            {
#line 153 "options.m"
              MR_Word base;
#line 153 "options.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 153 "options.m"
              *options__HeadVar__4_4 = base;
#line 153 "options.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (options__STATE_VARIABLE_OptionTable_19));
#line 153 "options.m"
            }
#line 153 "options.m"
            options__succeeded = MR_TRUE;
#line 153 "options.m"
          }
#line 146 "options.m"
        else
#line 146 "options.m"
          if ((options__HeadVar__1_1 == (MR_Integer) 5))
#line 157 "options.m"
            {
#line 157 "options.m"
              MR_Word options__STATE_VARIABLE_OptionTable_35;

#line 158 "options.m"
              {
#line 158 "options.m"
                mercury__map__set_4_p_0((MR_Word) &options__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 9)), ((MR_Box) (MR_mkword(MR_mktag(3), &options_scalar_common_3[0]))), options__STATE_VARIABLE_OptionTable_0_3, &options__STATE_VARIABLE_OptionTable_35);
              }
#line 157 "options.m"
              {
#line 157 "options.m"
                MR_Word base;
#line 157 "options.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 157 "options.m"
                *options__HeadVar__4_4 = base;
#line 157 "options.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (options__STATE_VARIABLE_OptionTable_35));
#line 157 "options.m"
              }
#line 157 "options.m"
              options__succeeded = MR_TRUE;
#line 157 "options.m"
            }
#line 146 "options.m"
          else
#line 146 "options.m"
            options__succeeded = MR_FALSE;
#line 146 "options.m"
    return options__succeeded;
#line 146 "options.m"
  }
#line 59 "options.m"
}

#line 58 "options.m"
void MR_CALL 
options__option_default_2_p_0(
#line 58 "options.m"
  MR_Word * options__HeadVar__1_1,
#line 58 "options.m"
  MR_Word * options__HeadVar__2_2,
#line 58 "options.m"
  MR_Cont options__cont,
#line 58 "options.m"
  void * options__cont_env_ptr)
#line 58 "options.m"
{
#line 79 "options.m"
  {
#line 79 "options.m"
    MR_bool options__succeeded;

#line 79 "options.m"
    {
#line 79 "options.m"
      MR_Integer options__slot_0 = (MR_Integer) 0;

#line 79 "options.m"
      do
#line 79 "options.m"
        {
#line 79 "options.m"
          *options__HeadVar__1_1 = ((&options_vector_common_4[0 + options__slot_0]))->options__vector_common_type_4_0__vct_4_f_0;
#line 79 "options.m"
          *options__HeadVar__2_2 = ((&options_vector_common_4[0 + options__slot_0]))->options__vector_common_type_4_0__vct_4_f_1;
#line 79 "options.m"
          {
#line 79 "options.m"
            options__cont(options__cont_env_ptr);
          }
#line 79 "options.m"
          options__slot_0 = (options__slot_0 + (MR_Integer) 1);
#line 79 "options.m"
        }
#line 79 "options.m"
      while ((options__slot_0 < (MR_Integer) 20));
#line 79 "options.m"
    }
#line 79 "options.m"
  }
#line 58 "options.m"
}

#line 57 "options.m"
MR_bool MR_CALL 
options__long_option_2_p_0(
#line 57 "options.m"
  MR_String options__HeadVar__1_1,
#line 57 "options.m"
  MR_Word * options__HeadVar__2_2)
#line 57 "options.m"
{
#line 124 "options.m"
  {
#line 124 "options.m"
    MR_bool options__succeeded;

#line 124 "options.m"
    if ((strcmp(options__HeadVar__1_1, (MR_String) "help") == 0))
#line 129 "options.m"
      {
#line 129 "options.m"
        *options__HeadVar__2_2 = (MR_Integer) 19;
#line 129 "options.m"
        options__succeeded = MR_TRUE;
#line 129 "options.m"
      }
#line 124 "options.m"
    else
#line 124 "options.m"
      if ((strcmp(options__HeadVar__1_1, (MR_String) "profile") == 0))
#line 132 "options.m"
        {
#line 132 "options.m"
          *options__HeadVar__2_2 = (MR_Integer) 4;
#line 132 "options.m"
          options__succeeded = MR_TRUE;
#line 132 "options.m"
        }
#line 124 "options.m"
      else
#line 124 "options.m"
        if ((strcmp(options__HeadVar__1_1, (MR_String) "verbose") == 0))
#line 143 "options.m"
          {
#line 143 "options.m"
            *options__HeadVar__2_2 = (MR_Integer) 0;
#line 143 "options.m"
            options__succeeded = MR_TRUE;
#line 143 "options.m"
          }
#line 124 "options.m"
        else
#line 124 "options.m"
          if ((strcmp(options__HeadVar__1_1, (MR_String) "demangle") == 0))
#line 128 "options.m"
            {
#line 128 "options.m"
              *options__HeadVar__2_2 = (MR_Integer) 8;
#line 128 "options.m"
              options__succeeded = MR_TRUE;
#line 128 "options.m"
            }
#line 124 "options.m"
          else
#line 124 "options.m"
            if ((strcmp(options__HeadVar__1_1, (MR_String) "snapshots") == 0))
#line 136 "options.m"
              {
#line 136 "options.m"
                *options__HeadVar__2_2 = (MR_Integer) 13;
#line 136 "options.m"
                options__succeeded = MR_TRUE;
#line 136 "options.m"
              }
#line 124 "options.m"
            else
#line 124 "options.m"
              if ((strcmp(options__HeadVar__1_1, (MR_String) "call-graph") == 0))
#line 125 "options.m"
                {
#line 125 "options.m"
                  *options__HeadVar__2_2 = (MR_Integer) 3;
#line 125 "options.m"
                  options__succeeded = MR_TRUE;
#line 125 "options.m"
                }
#line 124 "options.m"
              else
#line 124 "options.m"
                if ((strcmp(options__HeadVar__1_1, (MR_String) "count-file") == 0))
#line 126 "options.m"
                  {
#line 126 "options.m"
                    *options__HeadVar__2_2 = (MR_Integer) 9;
#line 126 "options.m"
                    options__succeeded = MR_TRUE;
#line 126 "options.m"
                  }
#line 124 "options.m"
                else
#line 124 "options.m"
                  if ((strcmp(options__HeadVar__1_1, (MR_String) "use-dynamic") == 0))
#line 142 "options.m"
                    {
#line 142 "options.m"
                      *options__HeadVar__2_2 = (MR_Integer) 2;
#line 142 "options.m"
                      options__succeeded = MR_TRUE;
#line 142 "options.m"
                    }
#line 124 "options.m"
                  else
#line 124 "options.m"
                    if ((strcmp(options__HeadVar__1_1, (MR_String) "profile-time") == 0))
#line 135 "options.m"
                      {
#line 135 "options.m"
                        *options__HeadVar__2_2 = (MR_Integer) 5;
#line 135 "options.m"
                        options__succeeded = MR_TRUE;
#line 135 "options.m"
                      }
#line 124 "options.m"
                    else
#line 124 "options.m"
                      if ((strcmp(options__HeadVar__1_1, (MR_String) "very-verbose") == 0))
#line 144 "options.m"
                        {
#line 144 "options.m"
                          *options__HeadVar__2_2 = (MR_Integer) 1;
#line 144 "options.m"
                          options__succeeded = MR_TRUE;
#line 144 "options.m"
                        }
#line 124 "options.m"
                      else
#line 124 "options.m"
                        if ((strcmp(options__HeadVar__1_1, (MR_String) "call-pair-file") == 0))
#line 124 "options.m"
                          {
#line 124 "options.m"
                            *options__HeadVar__2_2 = (MR_Integer) 10;
#line 124 "options.m"
                            options__succeeded = MR_TRUE;
#line 124 "options.m"
                          }
#line 124 "options.m"
                        else
#line 124 "options.m"
                          if ((strcmp(options__HeadVar__1_1, (MR_String) "snapshots-file") == 0))
#line 139 "options.m"
                            {
#line 139 "options.m"
                              *options__HeadVar__2_2 = (MR_Integer) 14;
#line 139 "options.m"
                              options__succeeded = MR_TRUE;
#line 139 "options.m"
                            }
#line 124 "options.m"
                          else
#line 124 "options.m"
                            if ((strcmp(options__HeadVar__1_1, (MR_String) "snapshots-brief") == 0))
#line 137 "options.m"
                              {
#line 137 "options.m"
                                *options__HeadVar__2_2 = (MR_Integer) 16;
#line 137 "options.m"
                                options__succeeded = MR_TRUE;
#line 137 "options.m"
                              }
#line 124 "options.m"
                            else
#line 124 "options.m"
                              if ((strcmp(options__HeadVar__1_1, (MR_String) "declaration-file") == 0))
#line 127 "options.m"
                                {
#line 127 "options.m"
                                  *options__HeadVar__2_2 = (MR_Integer) 11;
#line 127 "options.m"
                                  options__succeeded = MR_TRUE;
#line 127 "options.m"
                                }
#line 124 "options.m"
                              else
#line 124 "options.m"
                                if ((strcmp(options__HeadVar__1_1, (MR_String) "library-callgraph") == 0))
#line 131 "options.m"
                                  {
#line 131 "options.m"
                                    *options__HeadVar__2_2 = (MR_Integer) 19;
#line 131 "options.m"
                                    options__succeeded = MR_TRUE;
#line 131 "options.m"
                                  }
#line 124 "options.m"
                                else
#line 124 "options.m"
                                  if ((strcmp(options__HeadVar__1_1, (MR_String) "snapshots-by-type") == 0))
#line 138 "options.m"
                                    {
#line 138 "options.m"
                                      *options__HeadVar__2_2 = (MR_Integer) 15;
#line 138 "options.m"
                                      options__succeeded = MR_TRUE;
#line 138 "options.m"
                                    }
#line 124 "options.m"
                                  else
#line 124 "options.m"
                                    if ((strcmp(options__HeadVar__1_1, (MR_String) "profile-memory-cells") == 0))
#line 134 "options.m"
                                      {
#line 134 "options.m"
                                        *options__HeadVar__2_2 = (MR_Integer) 7;
#line 134 "options.m"
                                        options__succeeded = MR_TRUE;
#line 134 "options.m"
                                      }
#line 124 "options.m"
                                    else
#line 124 "options.m"
                                      if ((strcmp(options__HeadVar__1_1, (MR_String) "profile-memory-words") == 0))
#line 133 "options.m"
                                        {
#line 133 "options.m"
                                          *options__HeadVar__2_2 = (MR_Integer) 6;
#line 133 "options.m"
                                          options__succeeded = MR_TRUE;
#line 133 "options.m"
                                        }
#line 124 "options.m"
                                      else
#line 124 "options.m"
                                        if ((strcmp(options__HeadVar__1_1, (MR_String) "snapshots-recalc-size") == 0))
#line 141 "options.m"
                                          {
#line 141 "options.m"
                                            *options__HeadVar__2_2 = (MR_Integer) 18;
#line 141 "options.m"
                                            options__succeeded = MR_TRUE;
#line 141 "options.m"
                                          }
#line 124 "options.m"
                                        else
#line 124 "options.m"
                                          if ((strcmp(options__HeadVar__1_1, (MR_String) "snapshots-include-runtime") == 0))
#line 140 "options.m"
                                            {
#line 140 "options.m"
                                              *options__HeadVar__2_2 = (MR_Integer) 17;
#line 140 "options.m"
                                              options__succeeded = MR_TRUE;
#line 140 "options.m"
                                            }
#line 124 "options.m"
                                          else
#line 124 "options.m"
                                            options__succeeded = MR_FALSE;
#line 124 "options.m"
    return options__succeeded;
#line 124 "options.m"
  }
#line 57 "options.m"
}

#line 56 "options.m"
MR_bool MR_CALL 
options__short_option_2_p_0(
#line 56 "options.m"
  MR_Char options__HeadVar__1_1,
#line 56 "options.m"
  MR_Word * options__HeadVar__2_2)
#line 56 "options.m"
{
#line 106 "options.m"
  {
#line 106 "options.m"
    MR_bool options__succeeded;

#line 106 "options.m"
    if ((options__HeadVar__1_1 == (MR_Char) 67))
#line 107 "options.m"
      {
#line 107 "options.m"
        *options__HeadVar__2_2 = (MR_Integer) 9;
#line 107 "options.m"
        options__succeeded = MR_TRUE;
#line 107 "options.m"
      }
#line 106 "options.m"
    else
#line 106 "options.m"
      if ((options__HeadVar__1_1 == (MR_Char) 68))
#line 110 "options.m"
        {
#line 110 "options.m"
          *options__HeadVar__2_2 = (MR_Integer) 11;
#line 110 "options.m"
          options__succeeded = MR_TRUE;
#line 110 "options.m"
        }
#line 106 "options.m"
      else
#line 106 "options.m"
        if ((options__HeadVar__1_1 == (MR_Char) 76))
#line 112 "options.m"
          {
#line 112 "options.m"
            *options__HeadVar__2_2 = (MR_Integer) 12;
#line 112 "options.m"
            options__succeeded = MR_TRUE;
#line 112 "options.m"
          }
#line 106 "options.m"
        else
#line 106 "options.m"
          if ((options__HeadVar__1_1 == (MR_Char) 77))
#line 114 "options.m"
            {
#line 114 "options.m"
              *options__HeadVar__2_2 = (MR_Integer) 7;
#line 114 "options.m"
              options__succeeded = MR_TRUE;
#line 114 "options.m"
            }
#line 106 "options.m"
          else
#line 106 "options.m"
            if ((options__HeadVar__1_1 == (MR_Char) 80))
#line 116 "options.m"
              {
#line 116 "options.m"
                *options__HeadVar__2_2 = (MR_Integer) 10;
#line 116 "options.m"
                options__succeeded = MR_TRUE;
#line 116 "options.m"
              }
#line 106 "options.m"
            else
#line 106 "options.m"
              if ((options__HeadVar__1_1 == (MR_Char) 84))
#line 120 "options.m"
                {
#line 120 "options.m"
                  *options__HeadVar__2_2 = (MR_Integer) 15;
#line 120 "options.m"
                  options__succeeded = MR_TRUE;
#line 120 "options.m"
                }
#line 106 "options.m"
              else
#line 106 "options.m"
                if ((options__HeadVar__1_1 == (MR_Char) 86))
#line 122 "options.m"
                  {
#line 122 "options.m"
                    *options__HeadVar__2_2 = (MR_Integer) 1;
#line 122 "options.m"
                    options__succeeded = MR_TRUE;
#line 122 "options.m"
                  }
#line 106 "options.m"
                else
#line 106 "options.m"
                  if ((options__HeadVar__1_1 == (MR_Char) 98))
#line 106 "options.m"
                    {
#line 106 "options.m"
                      *options__HeadVar__2_2 = (MR_Integer) 16;
#line 106 "options.m"
                      options__succeeded = MR_TRUE;
#line 106 "options.m"
                    }
#line 106 "options.m"
                  else
#line 106 "options.m"
                    if ((options__HeadVar__1_1 == (MR_Char) 99))
#line 108 "options.m"
                      {
#line 108 "options.m"
                        *options__HeadVar__2_2 = (MR_Integer) 3;
#line 108 "options.m"
                        options__succeeded = MR_TRUE;
#line 108 "options.m"
                      }
#line 106 "options.m"
                    else
#line 106 "options.m"
                      if ((options__HeadVar__1_1 == (MR_Char) 100))
#line 109 "options.m"
                        {
#line 109 "options.m"
                          *options__HeadVar__2_2 = (MR_Integer) 2;
#line 109 "options.m"
                          options__succeeded = MR_TRUE;
#line 109 "options.m"
                        }
#line 106 "options.m"
                      else
#line 106 "options.m"
                        if ((options__HeadVar__1_1 == (MR_Char) 104))
#line 111 "options.m"
                          {
#line 111 "options.m"
                            *options__HeadVar__2_2 = (MR_Integer) 19;
#line 111 "options.m"
                            options__succeeded = MR_TRUE;
#line 111 "options.m"
                          }
#line 106 "options.m"
                        else
#line 106 "options.m"
                          if ((options__HeadVar__1_1 == (MR_Char) 109))
#line 113 "options.m"
                            {
#line 113 "options.m"
                              *options__HeadVar__2_2 = (MR_Integer) 6;
#line 113 "options.m"
                              options__succeeded = MR_TRUE;
#line 113 "options.m"
                            }
#line 106 "options.m"
                          else
#line 106 "options.m"
                            if ((options__HeadVar__1_1 == (MR_Char) 112))
#line 115 "options.m"
                              {
#line 115 "options.m"
                                *options__HeadVar__2_2 = (MR_Integer) 4;
#line 115 "options.m"
                                options__succeeded = MR_TRUE;
#line 115 "options.m"
                              }
#line 106 "options.m"
                            else
#line 106 "options.m"
                              if ((options__HeadVar__1_1 == (MR_Char) 114))
#line 117 "options.m"
                                {
#line 117 "options.m"
                                  *options__HeadVar__2_2 = (MR_Integer) 17;
#line 117 "options.m"
                                  options__succeeded = MR_TRUE;
#line 117 "options.m"
                                }
#line 106 "options.m"
                              else
#line 106 "options.m"
                                if ((options__HeadVar__1_1 == (MR_Char) 115))
#line 118 "options.m"
                                  {
#line 118 "options.m"
                                    *options__HeadVar__2_2 = (MR_Integer) 13;
#line 118 "options.m"
                                    options__succeeded = MR_TRUE;
#line 118 "options.m"
                                  }
#line 106 "options.m"
                                else
#line 106 "options.m"
                                  if ((options__HeadVar__1_1 == (MR_Char) 116))
#line 119 "options.m"
                                    {
#line 119 "options.m"
                                      *options__HeadVar__2_2 = (MR_Integer) 5;
#line 119 "options.m"
                                      options__succeeded = MR_TRUE;
#line 119 "options.m"
                                    }
#line 106 "options.m"
                                  else
#line 106 "options.m"
                                    if ((options__HeadVar__1_1 == (MR_Char) 118))
#line 121 "options.m"
                                      {
#line 121 "options.m"
                                        *options__HeadVar__2_2 = (MR_Integer) 0;
#line 121 "options.m"
                                        options__succeeded = MR_TRUE;
#line 121 "options.m"
                                      }
#line 106 "options.m"
                                    else
#line 106 "options.m"
                                      options__succeeded = MR_FALSE;
#line 106 "options.m"
    return options__succeeded;
#line 106 "options.m"
  }
#line 56 "options.m"
}

void mercury__options__init(void)
{
}

void mercury__options__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&options__options__type_ctor_info_option_0);
	MR_register_type_ctor_info(&options__options__type_ctor_info_option_table_0);
}

void mercury__options__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module options. */
