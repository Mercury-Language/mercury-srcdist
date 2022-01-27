/*
** Automatically generated from `mdice.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module mdice. */
/* :- implementation. */

/*
INIT mercury__mdice__init
ENDINIT
*/

#include "mdice.mih"


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
#include "getopt.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "univ.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.slice_and_dice.mih"
#include "mdbcomp.trace_counts.mih"



#line 42 "mdice.m"
struct mdice__main_2_p_0_4_env_0_s {
#line 42 "mdice.m"
  MR_Box * mdice__main_2_p_0_4_env_0__wrapper_arg_1;
#line 42 "mdice.m"
  MR_Box * mdice__main_2_p_0_4_env_0__wrapper_arg_2;
#line 42 "mdice.m"
  MR_Cont mdice__main_2_p_0_4_env_0__cont;
#line 42 "mdice.m"
  void * mdice__main_2_p_0_4_env_0__cont_env_ptr;
#line 42 "mdice.m"
  MR_Word mdice__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
#line 42 "mdice.m"
  MR_Word mdice__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
#line 42 "mdice.m"
};


#line 89 "mdice.c"
static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_0;

#line 92 "mdice.c"
static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_1;

#line 95 "mdice.c"
static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_2;

#line 98 "mdice.c"
static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_3;

#line 101 "mdice.c"
static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_4;

#line 104 "mdice.c"
static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_5;

#line 107 "mdice.c"
static const MR_EnumFunctorDescPtr mdice__mdice__enum_value_ordered_option_0[6];

#line 110 "mdice.c"
static const MR_EnumFunctorDescPtr mdice__mdice__enum_name_ordered_option_0[6];

#line 113 "mdice.c"
static const MR_Integer mdice__mdice__functor_number_map_option_0[6];

#line 116 "mdice.c"
static const MR_FA_TypeInfo_Struct2 mdice__tree234__ti_tree234_2mdice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

#line 119 "mdice.c"
static MR_bool MR_CALL 
mdice____Unify____option_0_0_10001(
#line 122 "mdice.c"
  MR_Box mdice__wrapper_arg_1,
#line 124 "mdice.c"
  MR_Box mdice__wrapper_arg_2);

#line 127 "mdice.c"
static void MR_CALL 
mdice____Compare____option_0_0_10001(
#line 130 "mdice.c"
  MR_Box * mdice__wrapper_arg_1,
#line 132 "mdice.c"
  MR_Box mdice__wrapper_arg_2,
#line 134 "mdice.c"
  MR_Box mdice__wrapper_arg_3);

#line 137 "mdice.c"
static MR_bool MR_CALL 
mdice____Unify____option_table_0_0_10001(
#line 140 "mdice.c"
  MR_Box mdice__wrapper_arg_1,
#line 142 "mdice.c"
  MR_Box mdice__wrapper_arg_2);

#line 145 "mdice.c"
static void MR_CALL 
mdice____Compare____option_table_0_0_10001(
#line 148 "mdice.c"
  MR_Box * mdice__wrapper_arg_1,
#line 150 "mdice.c"
  MR_Box mdice__wrapper_arg_2,
#line 152 "mdice.c"
  MR_Box mdice__wrapper_arg_3);

#line 113 "mdice.m"
static void MR_CALL 
mdice____Compare____option_table_0_0(
#line 113 "mdice.m"
  MR_Word * mdice__HeadVar__1_1,
#line 113 "mdice.m"
  MR_Word mdice__HeadVar__2_2,
#line 113 "mdice.m"
  MR_Word mdice__HeadVar__3_3);

#line 113 "mdice.m"
static MR_bool MR_CALL 
mdice____Unify____option_table_0_0(
#line 113 "mdice.m"
  MR_Word mdice__HeadVar__1_1,
#line 113 "mdice.m"
  MR_Word mdice__HeadVar__2_2);

#line 105 "mdice.m"
static void MR_CALL 
mdice____Compare____option_0_0(
#line 105 "mdice.m"
  MR_Word * mdice__HeadVar__1_1,
#line 105 "mdice.m"
  MR_Word mdice__HeadVar__2_2,
#line 105 "mdice.m"
  MR_Word mdice__HeadVar__3_3);

#line 105 "mdice.m"
static MR_bool MR_CALL 
mdice____Unify____option_0_0(
#line 105 "mdice.m"
  MR_Word mdice__HeadVar__2_1,
#line 105 "mdice.m"
  MR_Word mdice__HeadVar__2_2);

#line 117 "mdice.m"
static void MR_CALL 
mdice__option_default_2_p_0(
#line 117 "mdice.m"
  MR_Word * mdice__HeadVar__1_1,
#line 117 "mdice.m"
  MR_Word * mdice__HeadVar__2_2,
#line 117 "mdice.m"
  MR_Cont mdice__cont,
#line 117 "mdice.m"
  void * mdice__cont_env_ptr);

#line 116 "mdice.m"
static MR_bool MR_CALL 
mdice__long_option_2_p_0(
#line 116 "mdice.m"
  MR_String mdice__HeadVar__1_1,
#line 116 "mdice.m"
  MR_Word * mdice__HeadVar__2_2);

#line 115 "mdice.m"
static MR_bool MR_CALL 
mdice__short_option_2_p_0(
#line 115 "mdice.m"
  MR_Char mdice__HeadVar__1_1,
#line 115 "mdice.m"
  MR_Word * mdice__HeadVar__2_2);

#line 42 "mdice.m"
static void MR_CALL 
main_2_p_0_3(
#line 42 "mdice.m"
  void * mdice__env_ptr_arg);

#line 42 "mdice.m"
static void MR_CALL 
main_2_p_0_4(
#line 42 "mdice.m"
  MR_Box mdice__closure_arg,
#line 42 "mdice.m"
  MR_Box * mdice__wrapper_arg_1,
#line 42 "mdice.m"
  MR_Box * mdice__wrapper_arg_2,
#line 42 "mdice.m"
  MR_Cont mdice__cont,
#line 42 "mdice.m"
  void * mdice__cont_env_ptr);

#line 42 "mdice.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 42 "mdice.m"
  MR_Box mdice__closure_arg,
#line 42 "mdice.m"
  MR_Box mdice__wrapper_arg_1,
#line 42 "mdice.m"
  MR_Box * mdice__wrapper_arg_2);

#line 42 "mdice.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 42 "mdice.m"
  MR_Box mdice__closure_arg,
#line 42 "mdice.m"
  MR_Box mdice__wrapper_arg_1,
#line 42 "mdice.m"
  MR_Box * mdice__wrapper_arg_2);


static /* final */ const MR_Box mdice_scalar_common_1[5][3];

static /* final */ const MR_Box mdice_scalar_common_2[3][5];

static /* final */ const MR_Box mdice_scalar_common_3[2][2];

static /* final */ const MR_Box mdice_scalar_common_4[4][1];


#line 119 "mdice.m"
/* sealed */ struct mdice__vector_common_type_5_0_s {
#line 119 "mdice.m"
  const MR_Word mdice__vector_common_type_5_0__vct_5_f_0;
#line 119 "mdice.m"
  const MR_Word mdice__vector_common_type_5_0__vct_5_f_1;
#line 119 "mdice.m"
};

static /* final */ const struct mdice__vector_common_type_5_0_s mdice_vector_common_5[6];



static /* final */ const MR_Box mdice_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdice__mdice__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdice_scalar_common_2[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdice_scalar_common_2[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdice_scalar_common_2[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdice_scalar_common_1[1])),
    ((MR_Box) (&mdice_scalar_common_1[2])),
    ((MR_Box) (&mdice_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mdice_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdice__mdice__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdice__mdice__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdice__mdice__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mdice_scalar_common_3[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "S"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box mdice_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 100))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 35))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 12))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 20))
  },
};


static /* final */ const struct mdice__vector_common_type_5_0_s mdice_vector_common_5[6] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(3), &mdice_scalar_common_3[0])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(2), &mdice_scalar_common_4[0])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(2), &mdice_scalar_common_4[1])
  },
  /* row 3 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(2), &mdice_scalar_common_4[2])
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(2), &mdice_scalar_common_4[3])
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(3), &mdice_scalar_common_3[1])
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
#include "array.mh"
#include "array.mh"



#line 422 "mdice.c"
static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_0 = {
  (MR_String) "sort",
  (MR_Integer) 0
};

#line 428 "mdice.c"
static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_1 = {
  (MR_String) "max_row",
  (MR_Integer) 1
};

#line 434 "mdice.c"
static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_2 = {
  (MR_String) "max_pred_column",
  (MR_Integer) 2
};

#line 440 "mdice.c"
static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_3 = {
  (MR_String) "max_path_column",
  (MR_Integer) 3
};

#line 446 "mdice.c"
static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_4 = {
  (MR_String) "max_file_column",
  (MR_Integer) 4
};

#line 452 "mdice.c"
static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_5 = {
  (MR_String) "modulename",
  (MR_Integer) 5
};

#line 458 "mdice.c"
static const MR_EnumFunctorDescPtr mdice__mdice__enum_value_ordered_option_0[6] = {
  &mdice__mdice__enum_functor_desc_option_0_0,
  &mdice__mdice__enum_functor_desc_option_0_1,
  &mdice__mdice__enum_functor_desc_option_0_2,
  &mdice__mdice__enum_functor_desc_option_0_3,
  &mdice__mdice__enum_functor_desc_option_0_4,
  &mdice__mdice__enum_functor_desc_option_0_5
};

#line 468 "mdice.c"
static const MR_EnumFunctorDescPtr mdice__mdice__enum_name_ordered_option_0[6] = {
  &mdice__mdice__enum_functor_desc_option_0_4,
  &mdice__mdice__enum_functor_desc_option_0_3,
  &mdice__mdice__enum_functor_desc_option_0_2,
  &mdice__mdice__enum_functor_desc_option_0_1,
  &mdice__mdice__enum_functor_desc_option_0_5,
  &mdice__mdice__enum_functor_desc_option_0_0
};

#line 478 "mdice.c"
static const MR_Integer mdice__mdice__functor_number_map_option_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4
};

#line 488 "mdice.c"
const MR_TypeCtorInfo_Struct mdice__mdice__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdice____Unify____option_0_0_10001)),
  ((MR_Box) (mdice____Compare____option_0_0_10001)),
  (MR_String) "mdice",
  (MR_String) "option",
  {
    mdice__mdice__enum_name_ordered_option_0
  },
  {
    mdice__mdice__enum_value_ordered_option_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mdice__mdice__functor_number_map_option_0
};

#line 509 "mdice.c"
static const MR_FA_TypeInfo_Struct2 mdice__tree234__ti_tree234_2mdice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdice__mdice__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 518 "mdice.c"
const MR_TypeCtorInfo_Struct mdice__mdice__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdice____Unify____option_table_0_0_10001)),
  ((MR_Box) (mdice____Compare____option_table_0_0_10001)),
  (MR_String) "mdice",
  (MR_String) "option_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdice__tree234__ti_tree234_2mdice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 539 "mdice.c"
static MR_bool MR_CALL 
mdice____Unify____option_0_0_10001(
#line 542 "mdice.c"
  MR_Box mdice__wrapper_arg_1,
#line 544 "mdice.c"
  MR_Box mdice__wrapper_arg_2)
#line 546 "mdice.c"
{
#line 548 "mdice.c"
  {
#line 550 "mdice.c"
    MR_bool mdice__succeeded;

#line 553 "mdice.c"
    {
#line 555 "mdice.c"
      mdice__succeeded = mdice____Unify____option_0_0(((MR_Word) mdice__wrapper_arg_1), ((MR_Word) mdice__wrapper_arg_2));
    }
#line 558 "mdice.c"
    return mdice__succeeded;
#line 560 "mdice.c"
  }
#line 562 "mdice.c"
}

#line 565 "mdice.c"
static void MR_CALL 
mdice____Compare____option_0_0_10001(
#line 568 "mdice.c"
  MR_Box * mdice__wrapper_arg_1,
#line 570 "mdice.c"
  MR_Box mdice__wrapper_arg_2,
#line 572 "mdice.c"
  MR_Box mdice__wrapper_arg_3)
#line 574 "mdice.c"
{
#line 576 "mdice.c"
  {
#line 578 "mdice.c"
    MR_Word mdice__conv0_HeadVar__1_1;

#line 581 "mdice.c"
    {
#line 583 "mdice.c"
      mdice____Compare____option_0_0(&mdice__conv0_HeadVar__1_1, ((MR_Word) mdice__wrapper_arg_2), ((MR_Word) mdice__wrapper_arg_3));
    }
#line 586 "mdice.c"
    *mdice__wrapper_arg_1 = ((MR_Box) (mdice__conv0_HeadVar__1_1));
#line 588 "mdice.c"
  }
#line 590 "mdice.c"
}

#line 593 "mdice.c"
static MR_bool MR_CALL 
mdice____Unify____option_table_0_0_10001(
#line 596 "mdice.c"
  MR_Box mdice__wrapper_arg_1,
#line 598 "mdice.c"
  MR_Box mdice__wrapper_arg_2)
#line 600 "mdice.c"
{
#line 602 "mdice.c"
  {
#line 604 "mdice.c"
    MR_bool mdice__succeeded;

#line 607 "mdice.c"
    {
#line 609 "mdice.c"
      mdice__succeeded = mdice____Unify____option_table_0_0(((MR_Word) mdice__wrapper_arg_1), ((MR_Word) mdice__wrapper_arg_2));
    }
#line 612 "mdice.c"
    return mdice__succeeded;
#line 614 "mdice.c"
  }
#line 616 "mdice.c"
}

#line 619 "mdice.c"
static void MR_CALL 
mdice____Compare____option_table_0_0_10001(
#line 622 "mdice.c"
  MR_Box * mdice__wrapper_arg_1,
#line 624 "mdice.c"
  MR_Box mdice__wrapper_arg_2,
#line 626 "mdice.c"
  MR_Box mdice__wrapper_arg_3)
#line 628 "mdice.c"
{
#line 630 "mdice.c"
  {
#line 632 "mdice.c"
    MR_Word mdice__conv0_HeadVar__1_1;

#line 635 "mdice.c"
    {
#line 637 "mdice.c"
      mdice____Compare____option_table_0_0(&mdice__conv0_HeadVar__1_1, ((MR_Word) mdice__wrapper_arg_2), ((MR_Word) mdice__wrapper_arg_3));
    }
#line 640 "mdice.c"
    *mdice__wrapper_arg_1 = ((MR_Box) (mdice__conv0_HeadVar__1_1));
#line 642 "mdice.c"
  }
#line 644 "mdice.c"
}

#line 113 "mdice.m"
static void MR_CALL 
mdice____Compare____option_table_0_0(
#line 113 "mdice.m"
  MR_Word * mdice__HeadVar__1_1,
#line 113 "mdice.m"
  MR_Word mdice__HeadVar__2_2,
#line 113 "mdice.m"
  MR_Word mdice__HeadVar__3_3)
#line 113 "mdice.m"
{
#line 113 "mdice.m"
  {
#line 113 "mdice.m"
    MR_bool mdice__succeeded;
#line 113 "mdice.m"
    MR_Word mdice__Cast_HeadVar1_4 = mdice__HeadVar__2_2;
#line 113 "mdice.m"
    MR_Word mdice__Cast_HeadVar2_5 = mdice__HeadVar__3_3;

#line 113 "mdice.m"
    {
#line 113 "mdice.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdice_scalar_common_1[0], mdice__HeadVar__1_1, ((MR_Box) (mdice__Cast_HeadVar1_4)), ((MR_Box) (mdice__Cast_HeadVar2_5)));
#line 113 "mdice.m"
      return;
    }
#line 113 "mdice.m"
  }
#line 113 "mdice.m"
}

#line 113 "mdice.m"
static MR_bool MR_CALL 
mdice____Unify____option_table_0_0(
#line 113 "mdice.m"
  MR_Word mdice__HeadVar__1_1,
#line 113 "mdice.m"
  MR_Word mdice__HeadVar__2_2)
#line 113 "mdice.m"
{
#line 113 "mdice.m"
  {
#line 113 "mdice.m"
    MR_bool mdice__succeeded;
#line 113 "mdice.m"
    MR_Word mdice__Cast_HeadVar1_3 = mdice__HeadVar__1_1;
#line 113 "mdice.m"
    MR_Word mdice__Cast_HeadVar2_4 = mdice__HeadVar__2_2;

#line 113 "mdice.m"
    {
#line 113 "mdice.m"
      return mdice__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdice_scalar_common_1[0], ((MR_Box) (mdice__Cast_HeadVar1_3)), ((MR_Box) (mdice__Cast_HeadVar2_4)));
    }
#line 113 "mdice.m"
    return mdice__succeeded;
#line 113 "mdice.m"
  }
#line 113 "mdice.m"
}

#line 105 "mdice.m"
static void MR_CALL 
mdice____Compare____option_0_0(
#line 105 "mdice.m"
  MR_Word * mdice__HeadVar__1_1,
#line 105 "mdice.m"
  MR_Word mdice__HeadVar__2_2,
#line 105 "mdice.m"
  MR_Word mdice__HeadVar__3_3)
#line 105 "mdice.m"
{
#line 105 "mdice.m"
  {
#line 105 "mdice.m"
    MR_bool mdice__succeeded;
#line 105 "mdice.m"
    MR_Integer mdice__Cast_HeadVar1_4 = (MR_Integer) mdice__HeadVar__2_2;
#line 105 "mdice.m"
    MR_Integer mdice__Cast_HeadVar2_5 = (MR_Integer) mdice__HeadVar__3_3;

#line 105 "mdice.m"
    {
#line 105 "mdice.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdice__HeadVar__1_1, mdice__Cast_HeadVar1_4, mdice__Cast_HeadVar2_5);
#line 105 "mdice.m"
      return;
    }
#line 105 "mdice.m"
  }
#line 105 "mdice.m"
}

#line 105 "mdice.m"
static MR_bool MR_CALL 
mdice____Unify____option_0_0(
#line 105 "mdice.m"
  MR_Word mdice__HeadVar__2_1,
#line 105 "mdice.m"
  MR_Word mdice__HeadVar__2_2)
#line 105 "mdice.m"
{
#line 750 "mdice.c"
  {
#line 752 "mdice.c"
    MR_bool mdice__succeeded = (mdice__HeadVar__2_1 == mdice__HeadVar__2_2);

#line 755 "mdice.c"
    return mdice__succeeded;
#line 757 "mdice.c"
  }
#line 105 "mdice.m"
}

#line 117 "mdice.m"
static void MR_CALL 
mdice__option_default_2_p_0(
#line 117 "mdice.m"
  MR_Word * mdice__HeadVar__1_1,
#line 117 "mdice.m"
  MR_Word * mdice__HeadVar__2_2,
#line 117 "mdice.m"
  MR_Cont mdice__cont,
#line 117 "mdice.m"
  void * mdice__cont_env_ptr)
#line 117 "mdice.m"
{
#line 119 "mdice.m"
  {
#line 119 "mdice.m"
    MR_bool mdice__succeeded;

#line 119 "mdice.m"
    {
#line 119 "mdice.m"
      MR_Integer mdice__slot_0 = (MR_Integer) 0;

#line 119 "mdice.m"
      do
#line 119 "mdice.m"
        {
#line 119 "mdice.m"
          *mdice__HeadVar__1_1 = ((&mdice_vector_common_5[0 + mdice__slot_0]))->mdice__vector_common_type_5_0__vct_5_f_0;
#line 119 "mdice.m"
          *mdice__HeadVar__2_2 = ((&mdice_vector_common_5[0 + mdice__slot_0]))->mdice__vector_common_type_5_0__vct_5_f_1;
#line 119 "mdice.m"
          {
#line 119 "mdice.m"
            mdice__cont(mdice__cont_env_ptr);
          }
#line 119 "mdice.m"
          mdice__slot_0 = (mdice__slot_0 + (MR_Integer) 1);
#line 119 "mdice.m"
        }
#line 119 "mdice.m"
      while ((mdice__slot_0 < (MR_Integer) 6));
#line 119 "mdice.m"
    }
#line 119 "mdice.m"
  }
#line 117 "mdice.m"
}

#line 116 "mdice.m"
static MR_bool MR_CALL 
mdice__long_option_2_p_0(
#line 116 "mdice.m"
  MR_String mdice__HeadVar__1_1,
#line 116 "mdice.m"
  MR_Word * mdice__HeadVar__2_2)
#line 116 "mdice.m"
{
#line 133 "mdice.m"
  {
#line 133 "mdice.m"
    MR_bool mdice__succeeded;

#line 133 "mdice.m"
    if ((strcmp(mdice__HeadVar__1_1, (MR_String) "sort") == 0))
#line 133 "mdice.m"
      {
#line 133 "mdice.m"
        *mdice__HeadVar__2_2 = (MR_Integer) 0;
#line 133 "mdice.m"
        mdice__succeeded = MR_TRUE;
#line 133 "mdice.m"
      }
#line 133 "mdice.m"
    else
#line 133 "mdice.m"
      if ((strcmp(mdice__HeadVar__1_1, (MR_String) "limit") == 0))
#line 134 "mdice.m"
        {
#line 134 "mdice.m"
          *mdice__HeadVar__2_2 = (MR_Integer) 1;
#line 134 "mdice.m"
          mdice__succeeded = MR_TRUE;
#line 134 "mdice.m"
        }
#line 133 "mdice.m"
      else
#line 133 "mdice.m"
        if ((strcmp(mdice__HeadVar__1_1, (MR_String) "module") == 0))
#line 138 "mdice.m"
          {
#line 138 "mdice.m"
            *mdice__HeadVar__2_2 = (MR_Integer) 5;
#line 138 "mdice.m"
            mdice__succeeded = MR_TRUE;
#line 138 "mdice.m"
          }
#line 133 "mdice.m"
        else
#line 133 "mdice.m"
          if ((strcmp(mdice__HeadVar__1_1, (MR_String) "max-file-column") == 0))
#line 137 "mdice.m"
            {
#line 137 "mdice.m"
              *mdice__HeadVar__2_2 = (MR_Integer) 4;
#line 137 "mdice.m"
              mdice__succeeded = MR_TRUE;
#line 137 "mdice.m"
            }
#line 133 "mdice.m"
          else
#line 133 "mdice.m"
            if ((strcmp(mdice__HeadVar__1_1, (MR_String) "max-name-column") == 0))
#line 135 "mdice.m"
              {
#line 135 "mdice.m"
                *mdice__HeadVar__2_2 = (MR_Integer) 2;
#line 135 "mdice.m"
                mdice__succeeded = MR_TRUE;
#line 135 "mdice.m"
              }
#line 133 "mdice.m"
            else
#line 133 "mdice.m"
              if ((strcmp(mdice__HeadVar__1_1, (MR_String) "max-path-column") == 0))
#line 136 "mdice.m"
                {
#line 136 "mdice.m"
                  *mdice__HeadVar__2_2 = (MR_Integer) 3;
#line 136 "mdice.m"
                  mdice__succeeded = MR_TRUE;
#line 136 "mdice.m"
                }
#line 133 "mdice.m"
              else
#line 133 "mdice.m"
                mdice__succeeded = MR_FALSE;
#line 133 "mdice.m"
    return mdice__succeeded;
#line 133 "mdice.m"
  }
#line 116 "mdice.m"
}

#line 115 "mdice.m"
static MR_bool MR_CALL 
mdice__short_option_2_p_0(
#line 115 "mdice.m"
  MR_Char mdice__HeadVar__1_1,
#line 115 "mdice.m"
  MR_Word * mdice__HeadVar__2_2)
#line 115 "mdice.m"
{
#line 126 "mdice.m"
  {
#line 126 "mdice.m"
    MR_bool mdice__succeeded;

#line 126 "mdice.m"
    if ((mdice__HeadVar__1_1 == (MR_Char) 102))
#line 130 "mdice.m"
      {
#line 130 "mdice.m"
        *mdice__HeadVar__2_2 = (MR_Integer) 4;
#line 130 "mdice.m"
        mdice__succeeded = MR_TRUE;
#line 130 "mdice.m"
      }
#line 126 "mdice.m"
    else
#line 126 "mdice.m"
      if ((mdice__HeadVar__1_1 == (MR_Char) 108))
#line 127 "mdice.m"
        {
#line 127 "mdice.m"
          *mdice__HeadVar__2_2 = (MR_Integer) 1;
#line 127 "mdice.m"
          mdice__succeeded = MR_TRUE;
#line 127 "mdice.m"
        }
#line 126 "mdice.m"
      else
#line 126 "mdice.m"
        if ((mdice__HeadVar__1_1 == (MR_Char) 109))
#line 131 "mdice.m"
          {
#line 131 "mdice.m"
            *mdice__HeadVar__2_2 = (MR_Integer) 5;
#line 131 "mdice.m"
            mdice__succeeded = MR_TRUE;
#line 131 "mdice.m"
          }
#line 126 "mdice.m"
        else
#line 126 "mdice.m"
          if ((mdice__HeadVar__1_1 == (MR_Char) 110))
#line 128 "mdice.m"
            {
#line 128 "mdice.m"
              *mdice__HeadVar__2_2 = (MR_Integer) 2;
#line 128 "mdice.m"
              mdice__succeeded = MR_TRUE;
#line 128 "mdice.m"
            }
#line 126 "mdice.m"
          else
#line 126 "mdice.m"
            if ((mdice__HeadVar__1_1 == (MR_Char) 112))
#line 129 "mdice.m"
              {
#line 129 "mdice.m"
                *mdice__HeadVar__2_2 = (MR_Integer) 3;
#line 129 "mdice.m"
                mdice__succeeded = MR_TRUE;
#line 129 "mdice.m"
              }
#line 126 "mdice.m"
            else
#line 126 "mdice.m"
              if ((mdice__HeadVar__1_1 == (MR_Char) 115))
#line 126 "mdice.m"
                {
#line 126 "mdice.m"
                  *mdice__HeadVar__2_2 = (MR_Integer) 0;
#line 126 "mdice.m"
                  mdice__succeeded = MR_TRUE;
#line 126 "mdice.m"
                }
#line 126 "mdice.m"
              else
#line 126 "mdice.m"
                mdice__succeeded = MR_FALSE;
#line 126 "mdice.m"
    return mdice__succeeded;
#line 126 "mdice.m"
  }
#line 115 "mdice.m"
}

#line 42 "mdice.m"
static void MR_CALL 
main_2_p_0_3(
#line 42 "mdice.m"
  void * mdice__env_ptr_arg)
#line 42 "mdice.m"
{
#line 42 "mdice.m"
  {
#line 42 "mdice.m"
    struct mdice__main_2_p_0_4_env_0_s * mdice__env_ptr = (struct mdice__main_2_p_0_4_env_0_s *) mdice__env_ptr_arg;

#line 42 "mdice.m"
    *((mdice__env_ptr)->mdice__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdice__env_ptr)->mdice__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
#line 42 "mdice.m"
    *((mdice__env_ptr)->mdice__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdice__env_ptr)->mdice__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
#line 42 "mdice.m"
    {
#line 42 "mdice.m"
      ((mdice__env_ptr)->mdice__main_2_p_0_4_env_0__cont)((mdice__env_ptr)->mdice__main_2_p_0_4_env_0__cont_env_ptr);
#line 42 "mdice.m"
      return;
    }
#line 42 "mdice.m"
  }
#line 42 "mdice.m"
}

#line 42 "mdice.m"
static void MR_CALL 
main_2_p_0_4(
#line 42 "mdice.m"
  MR_Box mdice__closure_arg,
#line 42 "mdice.m"
  MR_Box * mdice__wrapper_arg_1,
#line 42 "mdice.m"
  MR_Box * mdice__wrapper_arg_2,
#line 42 "mdice.m"
  MR_Cont mdice__cont,
#line 42 "mdice.m"
  void * mdice__cont_env_ptr)
#line 42 "mdice.m"
{
#line 42 "mdice.m"
  {
#line 42 "mdice.m"
    struct mdice__main_2_p_0_4_env_0_s mdice__env;

#line 42 "mdice.m"
    (mdice__env).mdice__main_2_p_0_4_env_0__wrapper_arg_1 = mdice__wrapper_arg_1;
#line 42 "mdice.m"
    (mdice__env).mdice__main_2_p_0_4_env_0__wrapper_arg_2 = mdice__wrapper_arg_2;
#line 42 "mdice.m"
    (mdice__env).mdice__main_2_p_0_4_env_0__cont = mdice__cont;
#line 42 "mdice.m"
    (mdice__env).mdice__main_2_p_0_4_env_0__cont_env_ptr = mdice__cont_env_ptr;
#line 42 "mdice.m"
    {
#line 42 "mdice.m"
      MR_Box mdice__closure = mdice__closure_arg;

#line 42 "mdice.m"
      {
#line 42 "mdice.m"
        mdice__option_default_2_p_0(&(mdice__env).mdice__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mdice__env).mdice__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mdice__env);
      }
#line 42 "mdice.m"
    }
#line 42 "mdice.m"
  }
#line 42 "mdice.m"
}

#line 42 "mdice.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 42 "mdice.m"
  MR_Box mdice__closure_arg,
#line 42 "mdice.m"
  MR_Box mdice__wrapper_arg_1,
#line 42 "mdice.m"
  MR_Box * mdice__wrapper_arg_2)
#line 42 "mdice.m"
{
#line 42 "mdice.m"
  {
#line 42 "mdice.m"
    MR_bool mdice__succeeded;
#line 42 "mdice.m"
    MR_Box mdice__closure = mdice__closure_arg;
#line 42 "mdice.m"
    MR_Word mdice__conv1_HeadVar__2_2;

#line 42 "mdice.m"
    {
#line 42 "mdice.m"
      mdice__succeeded = mdice__long_option_2_p_0(((MR_String) mdice__wrapper_arg_1), &mdice__conv1_HeadVar__2_2);
    }
#line 42 "mdice.m"
    if (mdice__succeeded)
#line 42 "mdice.m"
      {
#line 42 "mdice.m"
        *mdice__wrapper_arg_2 = ((MR_Box) (mdice__conv1_HeadVar__2_2));
#line 42 "mdice.m"
        mdice__succeeded = MR_TRUE;
#line 42 "mdice.m"
      }
#line 42 "mdice.m"
    return mdice__succeeded;
#line 42 "mdice.m"
  }
#line 42 "mdice.m"
}

#line 42 "mdice.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 42 "mdice.m"
  MR_Box mdice__closure_arg,
#line 42 "mdice.m"
  MR_Box mdice__wrapper_arg_1,
#line 42 "mdice.m"
  MR_Box * mdice__wrapper_arg_2)
#line 42 "mdice.m"
{
#line 42 "mdice.m"
  {
#line 42 "mdice.m"
    MR_bool mdice__succeeded;
#line 42 "mdice.m"
    MR_Box mdice__closure = mdice__closure_arg;
#line 42 "mdice.m"
    MR_Word mdice__conv0_HeadVar__2_2;

#line 42 "mdice.m"
    {
#line 42 "mdice.m"
      mdice__succeeded = mdice__short_option_2_p_0(((MR_Char) (MR_Word) mdice__wrapper_arg_1), &mdice__conv0_HeadVar__2_2);
    }
#line 42 "mdice.m"
    if (mdice__succeeded)
#line 42 "mdice.m"
      {
#line 42 "mdice.m"
        *mdice__wrapper_arg_2 = ((MR_Box) (mdice__conv0_HeadVar__2_2));
#line 42 "mdice.m"
        mdice__succeeded = MR_TRUE;
#line 42 "mdice.m"
      }
#line 42 "mdice.m"
    return mdice__succeeded;
#line 42 "mdice.m"
  }
#line 42 "mdice.m"
}

#line 21 "mdice.m"
void MR_CALL 
main_2_p_0(void)
#line 21 "mdice.m"
{
#line 39 "mdice.m"
  {
#line 39 "mdice.m"
    MR_bool mdice__succeeded;
#line 39 "mdice.m"
    MR_Word mdice__TypeCtorInfo_63_63;
#line 39 "mdice.m"
    MR_Word mdice__Args0_4;
#line 39 "mdice.m"
    MR_Word mdice__Args_6;
#line 39 "mdice.m"
    MR_Word mdice__GetoptResult_7;

#line 40 "mdice.m"
    {
#line 40 "mdice.m"
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
#line 41 "mdice.m"
    {
#line 41 "mdice.m"
      mercury__io__command_line_arguments_3_p_0(&mdice__Args0_4);
    }
#line 1186 "mdice.c"
    mdice__TypeCtorInfo_63_63 = (MR_Word) &mdice__mdice__type_ctor_info_option_0;
#line 43 "mdice.m"
    {
#line 43 "mdice.m"
      mercury__getopt__process_options_4_p_0(mdice__TypeCtorInfo_63_63, (MR_Word) MR_mkword(MR_mktag(2), &mdice_scalar_common_1[4]), mdice__Args0_4, &mdice__Args_6, &mdice__GetoptResult_7);
    }
#line 89 "mdice.m"
    if (((MR_tag((MR_Word) mdice__GetoptResult_7)) == (MR_mktag((MR_Integer) 1))))
#line 90 "mdice.m"
      {
#line 90 "mdice.m"
        MR_String mdice__GetoptErrorMsg_27 = ((MR_String) (MR_hl_field(MR_mktag(1), mdice__GetoptResult_7, (MR_Integer) 0)));

#line 91 "mdice.m"
        {
#line 91 "mdice.m"
          mercury__io__write_string_3_p_0(mdice__GetoptErrorMsg_27);
        }
#line 92 "mdice.m"
        {
#line 92 "mdice.m"
          mercury__io__nl_2_p_0();
#line 92 "mdice.m"
          return;
        }
#line 90 "mdice.m"
      }
#line 89 "mdice.m"
    else
#line 45 "mdice.m"
      {
#line 45 "mdice.m"
        MR_Word mdice__OptionTable_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdice__GetoptResult_7, (MR_Integer) 0)));

#line 49 "mdice.m"
        if ((mdice__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 97 "mdice.m"
          {
#line 98 "mdice.m"
            {
#line 98 "mdice.m"
              mercury__io__write_string_3_p_0((MR_String) "Usage: mdice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] passfile failfile\n");
#line 98 "mdice.m"
              return;
            }
#line 97 "mdice.m"
          }
#line 49 "mdice.m"
        else
#line 49 "mdice.m"
          {
#line 49 "mdice.m"
            MR_Word mdice__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdice__Args_6, (MR_Integer) 1)));
#line 49 "mdice.m"
            MR_String mdice__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(1), mdice__Args_6, (MR_Integer) 0)));

#line 49 "mdice.m"
            if ((mdice__V_64_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 97 "mdice.m"
              {
#line 98 "mdice.m"
                {
#line 98 "mdice.m"
                  mercury__io__write_string_3_p_0((MR_String) "Usage: mdice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] passfile failfile\n");
#line 98 "mdice.m"
                  return;
                }
#line 97 "mdice.m"
              }
#line 49 "mdice.m"
            else
#line 49 "mdice.m"
              {
#line 49 "mdice.m"
                MR_Word mdice__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdice__V_64_64, (MR_Integer) 1)));
#line 49 "mdice.m"
                MR_String mdice__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(1), mdice__V_64_64, (MR_Integer) 0)));

#line 49 "mdice.m"
                if ((mdice__V_66_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 53 "mdice.m"
                  {
#line 53 "mdice.m"
                    MR_String mdice__SortStr_12;
#line 53 "mdice.m"
                    MR_String mdice__Module_13;
#line 53 "mdice.m"
                    MR_Integer mdice__MaxRow_14;
#line 53 "mdice.m"
                    MR_Integer mdice__MaxPredColumn_15;
#line 53 "mdice.m"
                    MR_Integer mdice__MaxPathColumn_16;
#line 53 "mdice.m"
                    MR_Integer mdice__MaxFileColumn_17;
#line 53 "mdice.m"
                    MR_Word mdice__MaybeMaxPredColumn_18;
#line 53 "mdice.m"
                    MR_Word mdice__MaybeMaxPathColumn_19;
#line 53 "mdice.m"
                    MR_Word mdice__MaybeMaxFileColumn_20;
#line 53 "mdice.m"
                    MR_String mdice__DiceStr_21;
#line 53 "mdice.m"
                    MR_String mdice__Problem_22;

#line 54 "mdice.m"
                    {
#line 54 "mdice.m"
                      mercury__getopt__lookup_string_option_3_p_0(mdice__TypeCtorInfo_63_63, mdice__OptionTable_8, ((MR_Box) ((MR_Integer) 0)), &mdice__SortStr_12);
                    }
#line 55 "mdice.m"
                    {
#line 55 "mdice.m"
                      mercury__getopt__lookup_string_option_3_p_0(mdice__TypeCtorInfo_63_63, mdice__OptionTable_8, ((MR_Box) ((MR_Integer) 5)), &mdice__Module_13);
                    }
#line 56 "mdice.m"
                    {
#line 56 "mdice.m"
                      mercury__getopt__lookup_int_option_3_p_0(mdice__TypeCtorInfo_63_63, mdice__OptionTable_8, ((MR_Box) ((MR_Integer) 1)), &mdice__MaxRow_14);
                    }
#line 57 "mdice.m"
                    {
#line 57 "mdice.m"
                      mercury__getopt__lookup_int_option_3_p_0(mdice__TypeCtorInfo_63_63, mdice__OptionTable_8, ((MR_Box) ((MR_Integer) 2)), &mdice__MaxPredColumn_15);
                    }
#line 58 "mdice.m"
                    {
#line 58 "mdice.m"
                      mercury__getopt__lookup_int_option_3_p_0(mdice__TypeCtorInfo_63_63, mdice__OptionTable_8, ((MR_Box) ((MR_Integer) 3)), &mdice__MaxPathColumn_16);
                    }
#line 59 "mdice.m"
                    {
#line 59 "mdice.m"
                      mercury__getopt__lookup_int_option_3_p_0(mdice__TypeCtorInfo_63_63, mdice__OptionTable_8, ((MR_Box) ((MR_Integer) 4)), &mdice__MaxFileColumn_17);
                    }
#line 60 "mdice.m"
                    mdice__succeeded = (mdice__MaxPredColumn_15 == (MR_Integer) 0);
#line 62 "mdice.m"
                    if (mdice__succeeded)
#line 61 "mdice.m"
                      mdice__MaybeMaxPredColumn_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 62 "mdice.m"
                    else
#line 63 "mdice.m"
                      {
#line 63 "mdice.m"
                        mdice__MaybeMaxPredColumn_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 63 "mdice.m"
                        MR_hl_field(MR_mktag(1), mdice__MaybeMaxPredColumn_18, 0) = ((MR_Box) (mdice__MaxPredColumn_15));
#line 63 "mdice.m"
                      }
#line 65 "mdice.m"
                    mdice__succeeded = (mdice__MaxPathColumn_16 == (MR_Integer) 0);
#line 67 "mdice.m"
                    if (mdice__succeeded)
#line 66 "mdice.m"
                      mdice__MaybeMaxPathColumn_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 67 "mdice.m"
                    else
#line 68 "mdice.m"
                      {
#line 68 "mdice.m"
                        mdice__MaybeMaxPathColumn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 68 "mdice.m"
                        MR_hl_field(MR_mktag(1), mdice__MaybeMaxPathColumn_19, 0) = ((MR_Box) (mdice__MaxPathColumn_16));
#line 68 "mdice.m"
                      }
#line 70 "mdice.m"
                    mdice__succeeded = (mdice__MaxFileColumn_17 == (MR_Integer) 0);
#line 72 "mdice.m"
                    if (mdice__succeeded)
#line 71 "mdice.m"
                      mdice__MaybeMaxFileColumn_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 72 "mdice.m"
                    else
#line 73 "mdice.m"
                      {
#line 73 "mdice.m"
                        mdice__MaybeMaxFileColumn_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 73 "mdice.m"
                        MR_hl_field(MR_mktag(1), mdice__MaybeMaxFileColumn_20, 0) = ((MR_Box) (mdice__MaxFileColumn_17));
#line 73 "mdice.m"
                      }
#line 75 "mdice.m"
                    {
#line 75 "mdice.m"
                      mdbcomp__slice_and_dice__read_dice_to_string_12_p_0(mdice__V_65_65, mdice__V_67_67, mdice__SortStr_12, mdice__MaxRow_14, mdice__MaybeMaxPredColumn_18, mdice__MaybeMaxPathColumn_19, mdice__MaybeMaxFileColumn_20, mdice__Module_13, &mdice__DiceStr_21, &mdice__Problem_22);
                    }
#line 78 "mdice.m"
                    mdice__succeeded = (strcmp(mdice__Problem_22, (MR_String) "") == 0);
#line 80 "mdice.m"
                    if (mdice__succeeded)
#line 79 "mdice.m"
                      {
#line 79 "mdice.m"
                        mercury__io__write_string_3_p_0(mdice__DiceStr_21);
#line 79 "mdice.m"
                        return;
                      }
#line 80 "mdice.m"
                    else
#line 81 "mdice.m"
                      {
#line 81 "mdice.m"
                        {
#line 81 "mdice.m"
                          mercury__io__write_string_3_p_0(mdice__Problem_22);
                        }
#line 82 "mdice.m"
                        {
#line 82 "mdice.m"
                          mercury__io__nl_2_p_0();
                        }
#line 83 "mdice.m"
                        {
#line 83 "mdice.m"
                          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 83 "mdice.m"
                          return;
                        }
#line 81 "mdice.m"
                      }
#line 53 "mdice.m"
                  }
#line 49 "mdice.m"
                else
#line 97 "mdice.m"
                  {
#line 98 "mdice.m"
                    {
#line 98 "mdice.m"
                      mercury__io__write_string_3_p_0((MR_String) "Usage: mdice [-s sortspec] [-m module] [-l N] [-n N] [-p N] [-f N] passfile failfile\n");
#line 98 "mdice.m"
                      return;
                    }
#line 97 "mdice.m"
                  }
#line 49 "mdice.m"
              }
#line 49 "mdice.m"
          }
#line 45 "mdice.m"
      }
#line 39 "mdice.m"
  }
#line 21 "mdice.m"
}

void mercury__mdice__init(void)
{
}

void mercury__mdice__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdice__mdice__type_ctor_info_option_0);
	MR_register_type_ctor_info(&mdice__mdice__type_ctor_info_option_table_0);
}

void mercury__mdice__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdice. */
