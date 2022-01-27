/*
** Automatically generated from `mtc_union.m'
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


/* :- module mtc_union. */
/* :- implementation. */

/*
INIT mercury__mtc_union__init
ENDINIT
*/

#include "mtc_union.mih"


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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"



#line 45 "mtc_union.m"
struct mtc_union__main_2_p_0_4_env_0_s {
#line 45 "mtc_union.m"
  MR_Box * mtc_union__main_2_p_0_4_env_0__wrapper_arg_1;
#line 45 "mtc_union.m"
  MR_Box * mtc_union__main_2_p_0_4_env_0__wrapper_arg_2;
#line 45 "mtc_union.m"
  MR_Cont mtc_union__main_2_p_0_4_env_0__cont;
#line 45 "mtc_union.m"
  void * mtc_union__main_2_p_0_4_env_0__cont_env_ptr;
#line 45 "mtc_union.m"
  MR_Word mtc_union__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
#line 45 "mtc_union.m"
  MR_Word mtc_union__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
#line 45 "mtc_union.m"
};


#line 89 "mtc_union.c"
static const MR_EnumFunctorDesc mtc_union__mtc_union__enum_functor_desc_option_0_0;

#line 92 "mtc_union.c"
static const MR_EnumFunctorDesc mtc_union__mtc_union__enum_functor_desc_option_0_1;

#line 95 "mtc_union.c"
static const MR_EnumFunctorDescPtr mtc_union__mtc_union__enum_value_ordered_option_0[2];

#line 98 "mtc_union.c"
static const MR_EnumFunctorDescPtr mtc_union__mtc_union__enum_name_ordered_option_0[2];

#line 101 "mtc_union.c"
static const MR_Integer mtc_union__mtc_union__functor_number_map_option_0[2];

#line 104 "mtc_union.c"
static const MR_FA_TypeInfo_Struct2 mtc_union__tree234__ti_tree234_2mtc_union__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

#line 107 "mtc_union.c"
static MR_bool MR_CALL 
mtc_union____Unify____option_0_0_10001(
#line 110 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_1,
#line 112 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_2);

#line 115 "mtc_union.c"
static void MR_CALL 
mtc_union____Compare____option_0_0_10001(
#line 118 "mtc_union.c"
  MR_Box * mtc_union__wrapper_arg_1,
#line 120 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_2,
#line 122 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_3);

#line 125 "mtc_union.c"
static MR_bool MR_CALL 
mtc_union____Unify____option_table_0_0_10001(
#line 128 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_1,
#line 130 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_2);

#line 133 "mtc_union.c"
static void MR_CALL 
mtc_union____Compare____option_table_0_0_10001(
#line 136 "mtc_union.c"
  MR_Box * mtc_union__wrapper_arg_1,
#line 138 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_2,
#line 140 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_3);

#line 102 "mtc_union.m"
static void MR_CALL 
mtc_union____Compare____option_table_0_0(
#line 102 "mtc_union.m"
  MR_Word * mtc_union__HeadVar__1_1,
#line 102 "mtc_union.m"
  MR_Word mtc_union__HeadVar__2_2,
#line 102 "mtc_union.m"
  MR_Word mtc_union__HeadVar__3_3);

#line 102 "mtc_union.m"
static MR_bool MR_CALL 
mtc_union____Unify____option_table_0_0(
#line 102 "mtc_union.m"
  MR_Word mtc_union__HeadVar__1_1,
#line 102 "mtc_union.m"
  MR_Word mtc_union__HeadVar__2_2);

#line 98 "mtc_union.m"
static void MR_CALL 
mtc_union____Compare____option_0_0(
#line 98 "mtc_union.m"
  MR_Word * mtc_union__HeadVar__1_1,
#line 98 "mtc_union.m"
  MR_Word mtc_union__HeadVar__2_2,
#line 98 "mtc_union.m"
  MR_Word mtc_union__HeadVar__3_3);

#line 98 "mtc_union.m"
static MR_bool MR_CALL 
mtc_union____Unify____option_0_0(
#line 98 "mtc_union.m"
  MR_Word mtc_union__HeadVar__2_1,
#line 98 "mtc_union.m"
  MR_Word mtc_union__HeadVar__2_2);

#line 106 "mtc_union.m"
static void MR_CALL 
mtc_union__option_default_2_p_0(
#line 106 "mtc_union.m"
  MR_Word * mtc_union__HeadVar__1_1,
#line 106 "mtc_union.m"
  MR_Word * mtc_union__HeadVar__2_2,
#line 106 "mtc_union.m"
  MR_Cont mtc_union__cont,
#line 106 "mtc_union.m"
  void * mtc_union__cont_env_ptr);

#line 105 "mtc_union.m"
static MR_bool MR_CALL 
mtc_union__long_option_2_p_0(
#line 105 "mtc_union.m"
  MR_String mtc_union__HeadVar__1_1,
#line 105 "mtc_union.m"
  MR_Word * mtc_union__HeadVar__2_2);

#line 104 "mtc_union.m"
static MR_bool MR_CALL 
mtc_union__short_option_2_p_0(
#line 104 "mtc_union.m"
  MR_Char mtc_union__HeadVar__1_1,
#line 104 "mtc_union.m"
  MR_Word * mtc_union__HeadVar__2_2);

#line 45 "mtc_union.m"
static void MR_CALL 
main_2_p_0_3(
#line 45 "mtc_union.m"
  void * mtc_union__env_ptr_arg);

#line 45 "mtc_union.m"
static void MR_CALL 
main_2_p_0_4(
#line 45 "mtc_union.m"
  MR_Box mtc_union__closure_arg,
#line 45 "mtc_union.m"
  MR_Box * mtc_union__wrapper_arg_1,
#line 45 "mtc_union.m"
  MR_Box * mtc_union__wrapper_arg_2,
#line 45 "mtc_union.m"
  MR_Cont mtc_union__cont,
#line 45 "mtc_union.m"
  void * mtc_union__cont_env_ptr);

#line 45 "mtc_union.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 45 "mtc_union.m"
  MR_Box mtc_union__closure_arg,
#line 45 "mtc_union.m"
  MR_Box mtc_union__wrapper_arg_1,
#line 45 "mtc_union.m"
  MR_Box * mtc_union__wrapper_arg_2);

#line 45 "mtc_union.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 45 "mtc_union.m"
  MR_Box mtc_union__closure_arg,
#line 45 "mtc_union.m"
  MR_Box mtc_union__wrapper_arg_1,
#line 45 "mtc_union.m"
  MR_Box * mtc_union__wrapper_arg_2);


static /* final */ const MR_Box mtc_union_scalar_common_1[5][3];

static /* final */ const MR_Box mtc_union_scalar_common_2[5][2];

static /* final */ const MR_Box mtc_union_scalar_common_3[3][5];

static /* final */ const MR_Box mtc_union_scalar_common_4[1][1];


#line 108 "mtc_union.m"
/* sealed */ struct mtc_union__vector_common_type_5_0_s {
#line 108 "mtc_union.m"
  const MR_Word mtc_union__vector_common_type_5_0__vct_5_f_0;
#line 108 "mtc_union.m"
  const MR_Word mtc_union__vector_common_type_5_0__vct_5_f_1;
#line 108 "mtc_union.m"
};

static /* final */ const struct mtc_union__vector_common_type_5_0_s mtc_union_vector_common_5[2];



static /* final */ const MR_Box mtc_union_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mtc_union__mtc_union__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mtc_union_scalar_common_3[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mtc_union_scalar_common_3[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mtc_union_scalar_common_3[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mtc_union_scalar_common_1[1])),
    ((MR_Box) (&mtc_union_scalar_common_1[2])),
    ((MR_Box) (&mtc_union_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mtc_union_scalar_common_2[5][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "file1, file2, etc should be trace count files.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "to be printed as it is added to the union.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mtc_union_scalar_common_2[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "The -v or --verbose option causes each trace count file name\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mtc_union_scalar_common_2[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "Usage: mtc_union [-v] -o output_file file1 file2 ...\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mtc_union_scalar_common_2[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box mtc_union_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mtc_union__mtc_union__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mtc_union__mtc_union__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mtc_union__mtc_union__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mtc_union_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct mtc_union__vector_common_type_5_0_s mtc_union_vector_common_5[2] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(3), &mtc_union_scalar_common_2[4])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &mtc_union_scalar_common_4[0])
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



#line 393 "mtc_union.c"
static const MR_EnumFunctorDesc mtc_union__mtc_union__enum_functor_desc_option_0_0 = {
  (MR_String) "output_filename",
  (MR_Integer) 0
};

#line 399 "mtc_union.c"
static const MR_EnumFunctorDesc mtc_union__mtc_union__enum_functor_desc_option_0_1 = {
  (MR_String) "verbose",
  (MR_Integer) 1
};

#line 405 "mtc_union.c"
static const MR_EnumFunctorDescPtr mtc_union__mtc_union__enum_value_ordered_option_0[2] = {
  &mtc_union__mtc_union__enum_functor_desc_option_0_0,
  &mtc_union__mtc_union__enum_functor_desc_option_0_1
};

#line 411 "mtc_union.c"
static const MR_EnumFunctorDescPtr mtc_union__mtc_union__enum_name_ordered_option_0[2] = {
  &mtc_union__mtc_union__enum_functor_desc_option_0_0,
  &mtc_union__mtc_union__enum_functor_desc_option_0_1
};

#line 417 "mtc_union.c"
static const MR_Integer mtc_union__mtc_union__functor_number_map_option_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 423 "mtc_union.c"
const MR_TypeCtorInfo_Struct mtc_union__mtc_union__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mtc_union____Unify____option_0_0_10001)),
  ((MR_Box) (mtc_union____Compare____option_0_0_10001)),
  (MR_String) "mtc_union",
  (MR_String) "option",
  {
    mtc_union__mtc_union__enum_name_ordered_option_0
  },
  {
    mtc_union__mtc_union__enum_value_ordered_option_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mtc_union__mtc_union__functor_number_map_option_0
};

#line 444 "mtc_union.c"
static const MR_FA_TypeInfo_Struct2 mtc_union__tree234__ti_tree234_2mtc_union__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mtc_union__mtc_union__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 453 "mtc_union.c"
const MR_TypeCtorInfo_Struct mtc_union__mtc_union__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mtc_union____Unify____option_table_0_0_10001)),
  ((MR_Box) (mtc_union____Compare____option_table_0_0_10001)),
  (MR_String) "mtc_union",
  (MR_String) "option_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mtc_union__tree234__ti_tree234_2mtc_union__type_ctor_info_option_0getopt__type_ctor_info_option_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 474 "mtc_union.c"
static MR_bool MR_CALL 
mtc_union____Unify____option_0_0_10001(
#line 477 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_1,
#line 479 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_2)
#line 481 "mtc_union.c"
{
#line 483 "mtc_union.c"
  {
#line 485 "mtc_union.c"
    MR_bool mtc_union__succeeded;

#line 488 "mtc_union.c"
    {
#line 490 "mtc_union.c"
      mtc_union__succeeded = mtc_union____Unify____option_0_0(((MR_Word) mtc_union__wrapper_arg_1), ((MR_Word) mtc_union__wrapper_arg_2));
    }
#line 493 "mtc_union.c"
    return mtc_union__succeeded;
#line 495 "mtc_union.c"
  }
#line 497 "mtc_union.c"
}

#line 500 "mtc_union.c"
static void MR_CALL 
mtc_union____Compare____option_0_0_10001(
#line 503 "mtc_union.c"
  MR_Box * mtc_union__wrapper_arg_1,
#line 505 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_2,
#line 507 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_3)
#line 509 "mtc_union.c"
{
#line 511 "mtc_union.c"
  {
#line 513 "mtc_union.c"
    MR_Word mtc_union__conv0_HeadVar__1_1;

#line 516 "mtc_union.c"
    {
#line 518 "mtc_union.c"
      mtc_union____Compare____option_0_0(&mtc_union__conv0_HeadVar__1_1, ((MR_Word) mtc_union__wrapper_arg_2), ((MR_Word) mtc_union__wrapper_arg_3));
    }
#line 521 "mtc_union.c"
    *mtc_union__wrapper_arg_1 = ((MR_Box) (mtc_union__conv0_HeadVar__1_1));
#line 523 "mtc_union.c"
  }
#line 525 "mtc_union.c"
}

#line 528 "mtc_union.c"
static MR_bool MR_CALL 
mtc_union____Unify____option_table_0_0_10001(
#line 531 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_1,
#line 533 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_2)
#line 535 "mtc_union.c"
{
#line 537 "mtc_union.c"
  {
#line 539 "mtc_union.c"
    MR_bool mtc_union__succeeded;

#line 542 "mtc_union.c"
    {
#line 544 "mtc_union.c"
      mtc_union__succeeded = mtc_union____Unify____option_table_0_0(((MR_Word) mtc_union__wrapper_arg_1), ((MR_Word) mtc_union__wrapper_arg_2));
    }
#line 547 "mtc_union.c"
    return mtc_union__succeeded;
#line 549 "mtc_union.c"
  }
#line 551 "mtc_union.c"
}

#line 554 "mtc_union.c"
static void MR_CALL 
mtc_union____Compare____option_table_0_0_10001(
#line 557 "mtc_union.c"
  MR_Box * mtc_union__wrapper_arg_1,
#line 559 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_2,
#line 561 "mtc_union.c"
  MR_Box mtc_union__wrapper_arg_3)
#line 563 "mtc_union.c"
{
#line 565 "mtc_union.c"
  {
#line 567 "mtc_union.c"
    MR_Word mtc_union__conv0_HeadVar__1_1;

#line 570 "mtc_union.c"
    {
#line 572 "mtc_union.c"
      mtc_union____Compare____option_table_0_0(&mtc_union__conv0_HeadVar__1_1, ((MR_Word) mtc_union__wrapper_arg_2), ((MR_Word) mtc_union__wrapper_arg_3));
    }
#line 575 "mtc_union.c"
    *mtc_union__wrapper_arg_1 = ((MR_Box) (mtc_union__conv0_HeadVar__1_1));
#line 577 "mtc_union.c"
  }
#line 579 "mtc_union.c"
}

#line 102 "mtc_union.m"
static void MR_CALL 
mtc_union____Compare____option_table_0_0(
#line 102 "mtc_union.m"
  MR_Word * mtc_union__HeadVar__1_1,
#line 102 "mtc_union.m"
  MR_Word mtc_union__HeadVar__2_2,
#line 102 "mtc_union.m"
  MR_Word mtc_union__HeadVar__3_3)
#line 102 "mtc_union.m"
{
#line 102 "mtc_union.m"
  {
#line 102 "mtc_union.m"
    MR_bool mtc_union__succeeded;
#line 102 "mtc_union.m"
    MR_Word mtc_union__Cast_HeadVar1_4 = mtc_union__HeadVar__2_2;
#line 102 "mtc_union.m"
    MR_Word mtc_union__Cast_HeadVar2_5 = mtc_union__HeadVar__3_3;

#line 102 "mtc_union.m"
    {
#line 102 "mtc_union.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mtc_union_scalar_common_1[0], mtc_union__HeadVar__1_1, ((MR_Box) (mtc_union__Cast_HeadVar1_4)), ((MR_Box) (mtc_union__Cast_HeadVar2_5)));
#line 102 "mtc_union.m"
      return;
    }
#line 102 "mtc_union.m"
  }
#line 102 "mtc_union.m"
}

#line 102 "mtc_union.m"
static MR_bool MR_CALL 
mtc_union____Unify____option_table_0_0(
#line 102 "mtc_union.m"
  MR_Word mtc_union__HeadVar__1_1,
#line 102 "mtc_union.m"
  MR_Word mtc_union__HeadVar__2_2)
#line 102 "mtc_union.m"
{
#line 102 "mtc_union.m"
  {
#line 102 "mtc_union.m"
    MR_bool mtc_union__succeeded;
#line 102 "mtc_union.m"
    MR_Word mtc_union__Cast_HeadVar1_3 = mtc_union__HeadVar__1_1;
#line 102 "mtc_union.m"
    MR_Word mtc_union__Cast_HeadVar2_4 = mtc_union__HeadVar__2_2;

#line 102 "mtc_union.m"
    {
#line 102 "mtc_union.m"
      return mtc_union__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mtc_union_scalar_common_1[0], ((MR_Box) (mtc_union__Cast_HeadVar1_3)), ((MR_Box) (mtc_union__Cast_HeadVar2_4)));
    }
#line 102 "mtc_union.m"
    return mtc_union__succeeded;
#line 102 "mtc_union.m"
  }
#line 102 "mtc_union.m"
}

#line 98 "mtc_union.m"
static void MR_CALL 
mtc_union____Compare____option_0_0(
#line 98 "mtc_union.m"
  MR_Word * mtc_union__HeadVar__1_1,
#line 98 "mtc_union.m"
  MR_Word mtc_union__HeadVar__2_2,
#line 98 "mtc_union.m"
  MR_Word mtc_union__HeadVar__3_3)
#line 98 "mtc_union.m"
{
#line 98 "mtc_union.m"
  {
#line 98 "mtc_union.m"
    MR_bool mtc_union__succeeded;
#line 98 "mtc_union.m"
    MR_Integer mtc_union__Cast_HeadVar1_4 = (MR_Integer) mtc_union__HeadVar__2_2;
#line 98 "mtc_union.m"
    MR_Integer mtc_union__Cast_HeadVar2_5 = (MR_Integer) mtc_union__HeadVar__3_3;

#line 98 "mtc_union.m"
    {
#line 98 "mtc_union.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mtc_union__HeadVar__1_1, mtc_union__Cast_HeadVar1_4, mtc_union__Cast_HeadVar2_5);
#line 98 "mtc_union.m"
      return;
    }
#line 98 "mtc_union.m"
  }
#line 98 "mtc_union.m"
}

#line 98 "mtc_union.m"
static MR_bool MR_CALL 
mtc_union____Unify____option_0_0(
#line 98 "mtc_union.m"
  MR_Word mtc_union__HeadVar__2_1,
#line 98 "mtc_union.m"
  MR_Word mtc_union__HeadVar__2_2)
#line 98 "mtc_union.m"
{
#line 685 "mtc_union.c"
  {
#line 687 "mtc_union.c"
    MR_bool mtc_union__succeeded = (mtc_union__HeadVar__2_1 == mtc_union__HeadVar__2_2);

#line 690 "mtc_union.c"
    return mtc_union__succeeded;
#line 692 "mtc_union.c"
  }
#line 98 "mtc_union.m"
}

#line 106 "mtc_union.m"
static void MR_CALL 
mtc_union__option_default_2_p_0(
#line 106 "mtc_union.m"
  MR_Word * mtc_union__HeadVar__1_1,
#line 106 "mtc_union.m"
  MR_Word * mtc_union__HeadVar__2_2,
#line 106 "mtc_union.m"
  MR_Cont mtc_union__cont,
#line 106 "mtc_union.m"
  void * mtc_union__cont_env_ptr)
#line 106 "mtc_union.m"
{
#line 108 "mtc_union.m"
  {
#line 108 "mtc_union.m"
    MR_bool mtc_union__succeeded;

#line 108 "mtc_union.m"
    {
#line 108 "mtc_union.m"
      MR_Integer mtc_union__slot_0 = (MR_Integer) 0;

#line 108 "mtc_union.m"
      do
#line 108 "mtc_union.m"
        {
#line 108 "mtc_union.m"
          *mtc_union__HeadVar__1_1 = ((&mtc_union_vector_common_5[0 + mtc_union__slot_0]))->mtc_union__vector_common_type_5_0__vct_5_f_0;
#line 108 "mtc_union.m"
          *mtc_union__HeadVar__2_2 = ((&mtc_union_vector_common_5[0 + mtc_union__slot_0]))->mtc_union__vector_common_type_5_0__vct_5_f_1;
#line 108 "mtc_union.m"
          {
#line 108 "mtc_union.m"
            mtc_union__cont(mtc_union__cont_env_ptr);
          }
#line 108 "mtc_union.m"
          mtc_union__slot_0 = (mtc_union__slot_0 + (MR_Integer) 1);
#line 108 "mtc_union.m"
        }
#line 108 "mtc_union.m"
      while ((mtc_union__slot_0 < (MR_Integer) 2));
#line 108 "mtc_union.m"
    }
#line 108 "mtc_union.m"
  }
#line 106 "mtc_union.m"
}

#line 105 "mtc_union.m"
static MR_bool MR_CALL 
mtc_union__long_option_2_p_0(
#line 105 "mtc_union.m"
  MR_String mtc_union__HeadVar__1_1,
#line 105 "mtc_union.m"
  MR_Word * mtc_union__HeadVar__2_2)
#line 105 "mtc_union.m"
{
#line 114 "mtc_union.m"
  {
#line 114 "mtc_union.m"
    MR_bool mtc_union__succeeded;

#line 114 "mtc_union.m"
    if ((strcmp(mtc_union__HeadVar__1_1, (MR_String) "out") == 0))
#line 114 "mtc_union.m"
      {
#line 114 "mtc_union.m"
        *mtc_union__HeadVar__2_2 = (MR_Integer) 0;
#line 114 "mtc_union.m"
        mtc_union__succeeded = MR_TRUE;
#line 114 "mtc_union.m"
      }
#line 114 "mtc_union.m"
    else
#line 114 "mtc_union.m"
      if ((strcmp(mtc_union__HeadVar__1_1, (MR_String) "verbose") == 0))
#line 115 "mtc_union.m"
        {
#line 115 "mtc_union.m"
          *mtc_union__HeadVar__2_2 = (MR_Integer) 1;
#line 115 "mtc_union.m"
          mtc_union__succeeded = MR_TRUE;
#line 115 "mtc_union.m"
        }
#line 114 "mtc_union.m"
      else
#line 114 "mtc_union.m"
        mtc_union__succeeded = MR_FALSE;
#line 114 "mtc_union.m"
    return mtc_union__succeeded;
#line 114 "mtc_union.m"
  }
#line 105 "mtc_union.m"
}

#line 104 "mtc_union.m"
static MR_bool MR_CALL 
mtc_union__short_option_2_p_0(
#line 104 "mtc_union.m"
  MR_Char mtc_union__HeadVar__1_1,
#line 104 "mtc_union.m"
  MR_Word * mtc_union__HeadVar__2_2)
#line 104 "mtc_union.m"
{
#line 111 "mtc_union.m"
  {
#line 111 "mtc_union.m"
    MR_bool mtc_union__succeeded;

#line 111 "mtc_union.m"
    if ((mtc_union__HeadVar__1_1 == (MR_Char) 111))
#line 111 "mtc_union.m"
      {
#line 111 "mtc_union.m"
        *mtc_union__HeadVar__2_2 = (MR_Integer) 0;
#line 111 "mtc_union.m"
        mtc_union__succeeded = MR_TRUE;
#line 111 "mtc_union.m"
      }
#line 111 "mtc_union.m"
    else
#line 111 "mtc_union.m"
      if ((mtc_union__HeadVar__1_1 == (MR_Char) 118))
#line 112 "mtc_union.m"
        {
#line 112 "mtc_union.m"
          *mtc_union__HeadVar__2_2 = (MR_Integer) 1;
#line 112 "mtc_union.m"
          mtc_union__succeeded = MR_TRUE;
#line 112 "mtc_union.m"
        }
#line 111 "mtc_union.m"
      else
#line 111 "mtc_union.m"
        mtc_union__succeeded = MR_FALSE;
#line 111 "mtc_union.m"
    return mtc_union__succeeded;
#line 111 "mtc_union.m"
  }
#line 104 "mtc_union.m"
}

#line 45 "mtc_union.m"
static void MR_CALL 
main_2_p_0_3(
#line 45 "mtc_union.m"
  void * mtc_union__env_ptr_arg)
#line 45 "mtc_union.m"
{
#line 45 "mtc_union.m"
  {
#line 45 "mtc_union.m"
    struct mtc_union__main_2_p_0_4_env_0_s * mtc_union__env_ptr = (struct mtc_union__main_2_p_0_4_env_0_s *) mtc_union__env_ptr_arg;

#line 45 "mtc_union.m"
    *((mtc_union__env_ptr)->mtc_union__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mtc_union__env_ptr)->mtc_union__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
#line 45 "mtc_union.m"
    *((mtc_union__env_ptr)->mtc_union__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mtc_union__env_ptr)->mtc_union__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
#line 45 "mtc_union.m"
    {
#line 45 "mtc_union.m"
      ((mtc_union__env_ptr)->mtc_union__main_2_p_0_4_env_0__cont)((mtc_union__env_ptr)->mtc_union__main_2_p_0_4_env_0__cont_env_ptr);
#line 45 "mtc_union.m"
      return;
    }
#line 45 "mtc_union.m"
  }
#line 45 "mtc_union.m"
}

#line 45 "mtc_union.m"
static void MR_CALL 
main_2_p_0_4(
#line 45 "mtc_union.m"
  MR_Box mtc_union__closure_arg,
#line 45 "mtc_union.m"
  MR_Box * mtc_union__wrapper_arg_1,
#line 45 "mtc_union.m"
  MR_Box * mtc_union__wrapper_arg_2,
#line 45 "mtc_union.m"
  MR_Cont mtc_union__cont,
#line 45 "mtc_union.m"
  void * mtc_union__cont_env_ptr)
#line 45 "mtc_union.m"
{
#line 45 "mtc_union.m"
  {
#line 45 "mtc_union.m"
    struct mtc_union__main_2_p_0_4_env_0_s mtc_union__env;

#line 45 "mtc_union.m"
    (mtc_union__env).mtc_union__main_2_p_0_4_env_0__wrapper_arg_1 = mtc_union__wrapper_arg_1;
#line 45 "mtc_union.m"
    (mtc_union__env).mtc_union__main_2_p_0_4_env_0__wrapper_arg_2 = mtc_union__wrapper_arg_2;
#line 45 "mtc_union.m"
    (mtc_union__env).mtc_union__main_2_p_0_4_env_0__cont = mtc_union__cont;
#line 45 "mtc_union.m"
    (mtc_union__env).mtc_union__main_2_p_0_4_env_0__cont_env_ptr = mtc_union__cont_env_ptr;
#line 45 "mtc_union.m"
    {
#line 45 "mtc_union.m"
      MR_Box mtc_union__closure = mtc_union__closure_arg;

#line 45 "mtc_union.m"
      {
#line 45 "mtc_union.m"
        mtc_union__option_default_2_p_0(&(mtc_union__env).mtc_union__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mtc_union__env).mtc_union__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mtc_union__env);
      }
#line 45 "mtc_union.m"
    }
#line 45 "mtc_union.m"
  }
#line 45 "mtc_union.m"
}

#line 45 "mtc_union.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 45 "mtc_union.m"
  MR_Box mtc_union__closure_arg,
#line 45 "mtc_union.m"
  MR_Box mtc_union__wrapper_arg_1,
#line 45 "mtc_union.m"
  MR_Box * mtc_union__wrapper_arg_2)
#line 45 "mtc_union.m"
{
#line 45 "mtc_union.m"
  {
#line 45 "mtc_union.m"
    MR_bool mtc_union__succeeded;
#line 45 "mtc_union.m"
    MR_Box mtc_union__closure = mtc_union__closure_arg;
#line 45 "mtc_union.m"
    MR_Word mtc_union__conv1_HeadVar__2_2;

#line 45 "mtc_union.m"
    {
#line 45 "mtc_union.m"
      mtc_union__succeeded = mtc_union__long_option_2_p_0(((MR_String) mtc_union__wrapper_arg_1), &mtc_union__conv1_HeadVar__2_2);
    }
#line 45 "mtc_union.m"
    if (mtc_union__succeeded)
#line 45 "mtc_union.m"
      {
#line 45 "mtc_union.m"
        *mtc_union__wrapper_arg_2 = ((MR_Box) (mtc_union__conv1_HeadVar__2_2));
#line 45 "mtc_union.m"
        mtc_union__succeeded = MR_TRUE;
#line 45 "mtc_union.m"
      }
#line 45 "mtc_union.m"
    return mtc_union__succeeded;
#line 45 "mtc_union.m"
  }
#line 45 "mtc_union.m"
}

#line 45 "mtc_union.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 45 "mtc_union.m"
  MR_Box mtc_union__closure_arg,
#line 45 "mtc_union.m"
  MR_Box mtc_union__wrapper_arg_1,
#line 45 "mtc_union.m"
  MR_Box * mtc_union__wrapper_arg_2)
#line 45 "mtc_union.m"
{
#line 45 "mtc_union.m"
  {
#line 45 "mtc_union.m"
    MR_bool mtc_union__succeeded;
#line 45 "mtc_union.m"
    MR_Box mtc_union__closure = mtc_union__closure_arg;
#line 45 "mtc_union.m"
    MR_Word mtc_union__conv0_HeadVar__2_2;

#line 45 "mtc_union.m"
    {
#line 45 "mtc_union.m"
      mtc_union__succeeded = mtc_union__short_option_2_p_0(((MR_Char) (MR_Word) mtc_union__wrapper_arg_1), &mtc_union__conv0_HeadVar__2_2);
    }
#line 45 "mtc_union.m"
    if (mtc_union__succeeded)
#line 45 "mtc_union.m"
      {
#line 45 "mtc_union.m"
        *mtc_union__wrapper_arg_2 = ((MR_Box) (mtc_union__conv0_HeadVar__2_2));
#line 45 "mtc_union.m"
        mtc_union__succeeded = MR_TRUE;
#line 45 "mtc_union.m"
      }
#line 45 "mtc_union.m"
    return mtc_union__succeeded;
#line 45 "mtc_union.m"
  }
#line 45 "mtc_union.m"
}

#line 21 "mtc_union.m"
void MR_CALL 
main_2_p_0(void)
#line 21 "mtc_union.m"
{
#line 42 "mtc_union.m"
  {
#line 42 "mtc_union.m"
    MR_bool mtc_union__succeeded;
#line 42 "mtc_union.m"
    MR_Word mtc_union__TypeCtorInfo_59_59;
#line 42 "mtc_union.m"
    MR_Word mtc_union__Args0_4;
#line 42 "mtc_union.m"
    MR_Word mtc_union__Args_6;
#line 42 "mtc_union.m"
    MR_Word mtc_union__GetoptResult_7;

#line 43 "mtc_union.m"
    {
#line 43 "mtc_union.m"
      mdbcomp__shared_utilities__unlimit_stack_2_p_0();
    }
#line 44 "mtc_union.m"
    {
#line 44 "mtc_union.m"
      mercury__io__command_line_arguments_3_p_0(&mtc_union__Args0_4);
    }
#line 1025 "mtc_union.c"
    mtc_union__TypeCtorInfo_59_59 = (MR_Word) &mtc_union__mtc_union__type_ctor_info_option_0;
#line 46 "mtc_union.m"
    {
#line 46 "mtc_union.m"
      mercury__getopt__process_options_4_p_0(mtc_union__TypeCtorInfo_59_59, (MR_Word) MR_mkword(MR_mktag(2), &mtc_union_scalar_common_1[4]), mtc_union__Args0_4, &mtc_union__Args_6, &mtc_union__GetoptResult_7);
    }
#line 80 "mtc_union.m"
    if (((MR_tag((MR_Word) mtc_union__GetoptResult_7)) == (MR_mktag((MR_Integer) 1))))
#line 81 "mtc_union.m"
      {
#line 81 "mtc_union.m"
        MR_String mtc_union__GetoptErrorMsg_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mtc_union__GetoptResult_7, (MR_Integer) 0)));

#line 82 "mtc_union.m"
        {
#line 82 "mtc_union.m"
          mercury__io__write_string_3_p_0(mtc_union__GetoptErrorMsg_22);
        }
#line 83 "mtc_union.m"
        {
#line 83 "mtc_union.m"
          mercury__io__nl_2_p_0();
#line 83 "mtc_union.m"
          return;
        }
#line 81 "mtc_union.m"
      }
#line 80 "mtc_union.m"
    else
#line 48 "mtc_union.m"
      {
#line 48 "mtc_union.m"
        MR_Word mtc_union__OptionTable_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mtc_union__GetoptResult_7, (MR_Integer) 0)));
#line 48 "mtc_union.m"
        MR_String mtc_union__OutputFile_9;
#line 51 "mtc_union.m"
        MR_String mtc_union__V_10_10;
#line 51 "mtc_union.m"
        MR_Word mtc_union__V_11_11;

#line 49 "mtc_union.m"
        {
#line 49 "mtc_union.m"
          mercury__getopt__lookup_string_option_3_p_0(mtc_union__TypeCtorInfo_59_59, mtc_union__OptionTable_8, ((MR_Box) ((MR_Integer) 0)), &mtc_union__OutputFile_9);
        }
#line 51 "mtc_union.m"
        mtc_union__succeeded = ((MR_tag((MR_Word) mtc_union__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 51 "mtc_union.m"
        if (mtc_union__succeeded)
#line 51 "mtc_union.m"
          {
#line 51 "mtc_union.m"
            mtc_union__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mtc_union__Args_6, (MR_Integer) 0)));
#line 51 "mtc_union.m"
            mtc_union__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mtc_union__Args_6, (MR_Integer) 1)));
#line 52 "mtc_union.m"
            mtc_union__succeeded = (strcmp(mtc_union__OutputFile_9, (MR_String) "") == 0);
#line 52 "mtc_union.m"
            mtc_union__succeeded = !(mtc_union__succeeded);
#line 51 "mtc_union.m"
          }
#line 77 "mtc_union.m"
        if (mtc_union__succeeded)
#line 54 "mtc_union.m"
          {
#line 54 "mtc_union.m"
            MR_Word mtc_union__Verbose_12;
#line 54 "mtc_union.m"
            MR_Integer mtc_union__NumTests_13;
#line 54 "mtc_union.m"
            MR_Word mtc_union__Kinds_14;
#line 54 "mtc_union.m"
            MR_Word mtc_union__TraceCounts_15;
#line 54 "mtc_union.m"
            MR_Word mtc_union__MaybeReadError_16;
#line 54 "mtc_union.m"
            MR_Word mtc_union__StdErr_17;

#line 54 "mtc_union.m"
            {
#line 54 "mtc_union.m"
              mercury__getopt__lookup_bool_option_3_p_0(mtc_union__TypeCtorInfo_59_59, mtc_union__OptionTable_8, ((MR_Box) ((MR_Integer) 1)), &mtc_union__Verbose_12);
            }
#line 55 "mtc_union.m"
            {
#line 55 "mtc_union.m"
              mdbcomp__trace_counts__read_and_union_trace_counts_8_p_0(mtc_union__Verbose_12, mtc_union__Args_6, &mtc_union__NumTests_13, &mtc_union__Kinds_14, &mtc_union__TraceCounts_15, &mtc_union__MaybeReadError_16);
            }
#line 57 "mtc_union.m"
            {
#line 57 "mtc_union.m"
              mercury__io__stderr_stream_3_p_0(&mtc_union__StdErr_17);
            }
#line 62 "mtc_union.m"
            if ((mtc_union__MaybeReadError_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 63 "mtc_union.m"
              {
#line 63 "mtc_union.m"
                MR_Word mtc_union__Type_19;
#line 63 "mtc_union.m"
                MR_Word mtc_union__WriteResult_20;
#line 63 "mtc_union.m"
                MR_Word mtc_union__V_36_36;

#line 64 "mtc_union.m"
                {
#line 64 "mtc_union.m"
                  mtc_union__V_36_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__trace_counts__mdbcomp__trace_counts__type_ctor_info_trace_count_file_type_0, mtc_union__Kinds_14);
                }
#line 64 "mtc_union.m"
                {
#line 64 "mtc_union.m"
                  mtc_union__Type_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 64 "mtc_union.m"
                  MR_hl_field(MR_mktag(1), mtc_union__Type_19, 0) = ((MR_Box) (mtc_union__NumTests_13));
#line 64 "mtc_union.m"
                  MR_hl_field(MR_mktag(1), mtc_union__Type_19, 1) = ((MR_Box) (mtc_union__V_36_36));
#line 64 "mtc_union.m"
                }
#line 65 "mtc_union.m"
                {
#line 65 "mtc_union.m"
                  mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0(mtc_union__Type_19, mtc_union__TraceCounts_15, mtc_union__OutputFile_9, &mtc_union__WriteResult_20);
                }
#line 69 "mtc_union.m"
                if ((mtc_union__WriteResult_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "mtc_union.m"
                  {
#line 68 "mtc_union.m"
                  }
#line 69 "mtc_union.m"
                else
#line 70 "mtc_union.m"
                  {
#line 70 "mtc_union.m"
                    MR_Word mtc_union__WriteErrorMsg_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mtc_union__WriteResult_20, (MR_Integer) 0)));
#line 70 "mtc_union.m"
                    MR_String mtc_union__V_38_38;
#line 70 "mtc_union.m"
                    MR_String mtc_union__V_41_41;
#line 70 "mtc_union.m"
                    MR_String mtc_union__V_43_43;
#line 70 "mtc_union.m"
                    MR_String mtc_union__V_44_44;
#line 70 "mtc_union.m"
                    MR_String mtc_union__V_46_46;
#line 70 "mtc_union.m"
                    MR_String mtc_union__V_48_48;

#line 73 "mtc_union.m"
                    {
#line 73 "mtc_union.m"
                      mtc_union__V_48_48 = mercury__string__string_1_f_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (mtc_union__WriteErrorMsg_21)));
                    }
#line 72 "mtc_union.m"
                    {
#line 72 "mtc_union.m"
                      mtc_union__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mtc_union__V_48_48);
                    }
#line 72 "mtc_union.m"
                    {
#line 72 "mtc_union.m"
                      mtc_union__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "\'", mtc_union__V_46_46);
                    }
#line 72 "mtc_union.m"
                    {
#line 72 "mtc_union.m"
                      mtc_union__V_43_43 = mercury__string__f_43_43_2_f_0(mtc_union__OutputFile_9, mtc_union__V_44_44);
                    }
#line 72 "mtc_union.m"
                    {
#line 72 "mtc_union.m"
                      mtc_union__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "file \140", mtc_union__V_43_43);
                    }
#line 71 "mtc_union.m"
                    {
#line 71 "mtc_union.m"
                      mtc_union__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "Error writing to ", mtc_union__V_41_41);
                    }
#line 71 "mtc_union.m"
                    {
#line 71 "mtc_union.m"
                      mercury__io__write_string_4_p_0(mtc_union__StdErr_17, mtc_union__V_38_38);
                    }
#line 74 "mtc_union.m"
                    {
#line 74 "mtc_union.m"
                      mercury__io__nl_3_p_0(mtc_union__StdErr_17);
#line 74 "mtc_union.m"
                      return;
                    }
#line 70 "mtc_union.m"
                  }
#line 63 "mtc_union.m"
              }
#line 62 "mtc_union.m"
            else
#line 59 "mtc_union.m"
              {
#line 59 "mtc_union.m"
                MR_String mtc_union__ReadErrorMsg_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mtc_union__MaybeReadError_16, (MR_Integer) 0)));

#line 60 "mtc_union.m"
                {
#line 60 "mtc_union.m"
                  mercury__io__write_string_4_p_0(mtc_union__StdErr_17, mtc_union__ReadErrorMsg_18);
                }
#line 61 "mtc_union.m"
                {
#line 61 "mtc_union.m"
                  mercury__io__nl_3_p_0(mtc_union__StdErr_17);
#line 61 "mtc_union.m"
                  return;
                }
#line 59 "mtc_union.m"
              }
#line 54 "mtc_union.m"
          }
#line 77 "mtc_union.m"
        else
#line 88 "mtc_union.m"
          {
#line 89 "mtc_union.m"
            {
#line 89 "mtc_union.m"
              mercury__io__write_strings_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &mtc_union_scalar_common_2[3]));
#line 89 "mtc_union.m"
              return;
            }
#line 88 "mtc_union.m"
          }
#line 48 "mtc_union.m"
      }
#line 42 "mtc_union.m"
  }
#line 21 "mtc_union.m"
}

void mercury__mtc_union__init(void)
{
}

void mercury__mtc_union__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mtc_union__mtc_union__type_ctor_info_option_0);
	MR_register_type_ctor_info(&mtc_union__mtc_union__type_ctor_info_option_table_0);
}

void mercury__mtc_union__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mtc_union. */
