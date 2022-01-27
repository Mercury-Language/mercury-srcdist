/*
** Automatically generated from `mdprof_dump.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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


/* :- module mdprof_dump. */
/* :- implementation. */

/*
INIT mercury__mdprof_dump__init
ENDINIT
*/

#include "mdprof_dump.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dump.mih"
#include "enum.mih"
#include "exclude.mih"
#include "getopt.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "random.mih"
#include "read_profile.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 48 "mdprof_dump.m"
struct mdprof_dump__main_2_p_0_4_env_0_s {
#line 48 "mdprof_dump.m"
  MR_Box * mdprof_dump__main_2_p_0_4_env_0__wrapper_arg_1;
#line 48 "mdprof_dump.m"
  MR_Box * mdprof_dump__main_2_p_0_4_env_0__wrapper_arg_2;
#line 48 "mdprof_dump.m"
  MR_Cont mdprof_dump__main_2_p_0_4_env_0__cont;
#line 48 "mdprof_dump.m"
  void * mdprof_dump__main_2_p_0_4_env_0__cont_env_ptr;
#line 48 "mdprof_dump.m"
  MR_Word mdprof_dump__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
#line 48 "mdprof_dump.m"
  MR_Word mdprof_dump__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
#line 48 "mdprof_dump.m"
};


#line 99 "mdprof_dump.c"
static const MR_EnumFunctorDesc mdprof_dump__mdprof_dump__enum_functor_desc_option_0_0;

#line 102 "mdprof_dump.c"
static const MR_EnumFunctorDesc mdprof_dump__mdprof_dump__enum_functor_desc_option_0_1;

#line 105 "mdprof_dump.c"
static const MR_EnumFunctorDesc mdprof_dump__mdprof_dump__enum_functor_desc_option_0_2;

#line 108 "mdprof_dump.c"
static const MR_EnumFunctorDescPtr mdprof_dump__mdprof_dump__enum_value_ordered_option_0[3];

#line 111 "mdprof_dump.c"
static const MR_EnumFunctorDescPtr mdprof_dump__mdprof_dump__enum_name_ordered_option_0[3];

#line 114 "mdprof_dump.c"
static const MR_Integer mdprof_dump__mdprof_dump__functor_number_map_option_0[3];

#line 117 "mdprof_dump.c"
static const MR_FA_TypeInfo_Struct2 mdprof_dump__tree234__ti_tree234_2mdprof_dump__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

#line 120 "mdprof_dump.c"
static MR_bool MR_CALL 
mdprof_dump____Unify____option_0_0_10001(
#line 123 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_1,
#line 125 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_2);

#line 128 "mdprof_dump.c"
static void MR_CALL 
mdprof_dump____Compare____option_0_0_10001(
#line 131 "mdprof_dump.c"
  MR_Box * mdprof_dump__wrapper_arg_1,
#line 133 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_2,
#line 135 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_3);

#line 138 "mdprof_dump.c"
static MR_bool MR_CALL 
mdprof_dump____Unify____option_table_0_0_10001(
#line 141 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_1,
#line 143 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_2);

#line 146 "mdprof_dump.c"
static void MR_CALL 
mdprof_dump____Compare____option_table_0_0_10001(
#line 149 "mdprof_dump.c"
  MR_Box * mdprof_dump__wrapper_arg_1,
#line 151 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_2,
#line 153 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_3);

#line 130 "mdprof_dump.m"
static void MR_CALL 
mdprof_dump____Compare____option_table_0_0(
#line 130 "mdprof_dump.m"
  MR_Word * mdprof_dump__HeadVar__1_1,
#line 130 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__2_2,
#line 130 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__3_3);

#line 130 "mdprof_dump.m"
static MR_bool MR_CALL 
mdprof_dump____Unify____option_table_0_0(
#line 130 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__1_1,
#line 130 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__2_2);

#line 125 "mdprof_dump.m"
static void MR_CALL 
mdprof_dump____Compare____option_0_0(
#line 125 "mdprof_dump.m"
  MR_Word * mdprof_dump__HeadVar__1_1,
#line 125 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__2_2,
#line 125 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__3_3);

#line 125 "mdprof_dump.m"
static MR_bool MR_CALL 
mdprof_dump____Unify____option_0_0(
#line 125 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__2_1,
#line 125 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__2_2);

#line 152 "mdprof_dump.m"
static void MR_CALL 
mdprof_dump__usage_3_p_0(
#line 152 "mdprof_dump.m"
  MR_String mdprof_dump__ProgName_4);

#line 144 "mdprof_dump.m"
static void MR_CALL 
mdprof_dump__defaults_2_p_0(
#line 144 "mdprof_dump.m"
  MR_Word * mdprof_dump__HeadVar__1_1,
#line 144 "mdprof_dump.m"
  MR_Word * mdprof_dump__HeadVar__2_2,
#line 144 "mdprof_dump.m"
  MR_Cont mdprof_dump__cont,
#line 144 "mdprof_dump.m"
  void * mdprof_dump__cont_env_ptr);

#line 138 "mdprof_dump.m"
static MR_bool MR_CALL 
mdprof_dump__long_option_2_p_0(
#line 138 "mdprof_dump.m"
  MR_String mdprof_dump__HeadVar__1_1,
#line 138 "mdprof_dump.m"
  MR_Word * mdprof_dump__HeadVar__2_2);

#line 132 "mdprof_dump.m"
static MR_bool MR_CALL 
mdprof_dump__short_option_2_p_0(
#line 132 "mdprof_dump.m"
  MR_Char mdprof_dump__HeadVar__1_1,
#line 132 "mdprof_dump.m"
  MR_Word * mdprof_dump__HeadVar__2_2);

#line 105 "mdprof_dump.m"
static void MR_CALL 
mdprof_dump__make_dump_options_2_p_0(
#line 105 "mdprof_dump.m"
  MR_Word mdprof_dump__Options_3,
#line 105 "mdprof_dump.m"
  MR_Word * mdprof_dump__MaybeDumpOptions_4);

#line 86 "mdprof_dump.m"
static void MR_CALL 
mdprof_dump__main_2_4_p_0(
#line 86 "mdprof_dump.m"
  MR_Word mdprof_dump__DumpOptions_5,
#line 86 "mdprof_dump.m"
  MR_String mdprof_dump__FileName_6);

#line 48 "mdprof_dump.m"
static void MR_CALL 
main_2_p_0_3(
#line 48 "mdprof_dump.m"
  void * mdprof_dump__env_ptr_arg);

#line 48 "mdprof_dump.m"
static void MR_CALL 
main_2_p_0_4(
#line 48 "mdprof_dump.m"
  MR_Box mdprof_dump__closure_arg,
#line 48 "mdprof_dump.m"
  MR_Box * mdprof_dump__wrapper_arg_1,
#line 48 "mdprof_dump.m"
  MR_Box * mdprof_dump__wrapper_arg_2,
#line 48 "mdprof_dump.m"
  MR_Cont mdprof_dump__cont,
#line 48 "mdprof_dump.m"
  void * mdprof_dump__cont_env_ptr);

#line 48 "mdprof_dump.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 48 "mdprof_dump.m"
  MR_Box mdprof_dump__closure_arg,
#line 48 "mdprof_dump.m"
  MR_Box mdprof_dump__wrapper_arg_1,
#line 48 "mdprof_dump.m"
  MR_Box * mdprof_dump__wrapper_arg_2);

#line 48 "mdprof_dump.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 48 "mdprof_dump.m"
  MR_Box mdprof_dump__closure_arg,
#line 48 "mdprof_dump.m"
  MR_Box mdprof_dump__wrapper_arg_1,
#line 48 "mdprof_dump.m"
  MR_Box * mdprof_dump__wrapper_arg_2);


static /* final */ const MR_Box mdprof_dump_scalar_common_1[5][3];

static /* final */ const MR_Box mdprof_dump_scalar_common_2[3][5];

static /* final */ const MR_Box mdprof_dump_scalar_common_3[1][1];

static /* final */ const MR_Box mdprof_dump_scalar_common_4[1][2];


#line 146 "mdprof_dump.m"
/* sealed */ struct mdprof_dump__vector_common_type_5_0_s {
#line 146 "mdprof_dump.m"
  const MR_Word mdprof_dump__vector_common_type_5_0__vct_5_f_0;
#line 146 "mdprof_dump.m"
  const MR_Word mdprof_dump__vector_common_type_5_0__vct_5_f_1;
#line 146 "mdprof_dump.m"
};

static /* final */ const struct mdprof_dump__vector_common_type_5_0_s mdprof_dump_vector_common_5[3];



static /* final */ const MR_Box mdprof_dump_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdprof_dump__mdprof_dump__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdprof_dump_scalar_common_2[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdprof_dump_scalar_common_2[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdprof_dump_scalar_common_2[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdprof_dump_scalar_common_1[1])),
    ((MR_Box) (&mdprof_dump_scalar_common_1[2])),
    ((MR_Box) (&mdprof_dump_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mdprof_dump_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdprof_dump__mdprof_dump__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_dump__mdprof_dump__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_dump__mdprof_dump__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mdprof_dump_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_dump_scalar_common_4[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};


static /* final */ const struct mdprof_dump__vector_common_type_5_0_s mdprof_dump_vector_common_5[3] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_dump_scalar_common_3[0])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(3), &mdprof_dump_scalar_common_4[0])
  },
  /* row 2 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_dump_scalar_common_3[0])
  },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "read_profile.mh"
#include "read_profile.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 417 "mdprof_dump.c"
static const MR_EnumFunctorDesc mdprof_dump__mdprof_dump__enum_functor_desc_option_0_0 = {
  (MR_String) "help",
  (MR_Integer) 0
};

#line 423 "mdprof_dump.c"
static const MR_EnumFunctorDesc mdprof_dump__mdprof_dump__enum_functor_desc_option_0_1 = {
  (MR_String) "dump_options",
  (MR_Integer) 1
};

#line 429 "mdprof_dump.c"
static const MR_EnumFunctorDesc mdprof_dump__mdprof_dump__enum_functor_desc_option_0_2 = {
  (MR_String) "option_restrict",
  (MR_Integer) 2
};

#line 435 "mdprof_dump.c"
static const MR_EnumFunctorDescPtr mdprof_dump__mdprof_dump__enum_value_ordered_option_0[3] = {
  &mdprof_dump__mdprof_dump__enum_functor_desc_option_0_0,
  &mdprof_dump__mdprof_dump__enum_functor_desc_option_0_1,
  &mdprof_dump__mdprof_dump__enum_functor_desc_option_0_2
};

#line 442 "mdprof_dump.c"
static const MR_EnumFunctorDescPtr mdprof_dump__mdprof_dump__enum_name_ordered_option_0[3] = {
  &mdprof_dump__mdprof_dump__enum_functor_desc_option_0_1,
  &mdprof_dump__mdprof_dump__enum_functor_desc_option_0_0,
  &mdprof_dump__mdprof_dump__enum_functor_desc_option_0_2
};

#line 449 "mdprof_dump.c"
static const MR_Integer mdprof_dump__mdprof_dump__functor_number_map_option_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 456 "mdprof_dump.c"
const MR_TypeCtorInfo_Struct mdprof_dump__mdprof_dump__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_dump____Unify____option_0_0_10001)),
  ((MR_Box) (mdprof_dump____Compare____option_0_0_10001)),
  (MR_String) "mdprof_dump",
  (MR_String) "option",
  {
    mdprof_dump__mdprof_dump__enum_name_ordered_option_0
  },
  {
    mdprof_dump__mdprof_dump__enum_value_ordered_option_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdprof_dump__mdprof_dump__functor_number_map_option_0
};

#line 477 "mdprof_dump.c"
static const MR_FA_TypeInfo_Struct2 mdprof_dump__tree234__ti_tree234_2mdprof_dump__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdprof_dump__mdprof_dump__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 486 "mdprof_dump.c"
const MR_TypeCtorInfo_Struct mdprof_dump__mdprof_dump__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdprof_dump____Unify____option_table_0_0_10001)),
  ((MR_Box) (mdprof_dump____Compare____option_table_0_0_10001)),
  (MR_String) "mdprof_dump",
  (MR_String) "option_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdprof_dump__tree234__ti_tree234_2mdprof_dump__type_ctor_info_option_0getopt__type_ctor_info_option_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 507 "mdprof_dump.c"
static MR_bool MR_CALL 
mdprof_dump____Unify____option_0_0_10001(
#line 510 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_1,
#line 512 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_2)
#line 514 "mdprof_dump.c"
{
#line 516 "mdprof_dump.c"
  {
#line 518 "mdprof_dump.c"
    MR_bool mdprof_dump__succeeded;

#line 521 "mdprof_dump.c"
    {
#line 523 "mdprof_dump.c"
      mdprof_dump__succeeded = mdprof_dump____Unify____option_0_0(((MR_Word) mdprof_dump__wrapper_arg_1), ((MR_Word) mdprof_dump__wrapper_arg_2));
    }
#line 526 "mdprof_dump.c"
    return mdprof_dump__succeeded;
#line 528 "mdprof_dump.c"
  }
#line 530 "mdprof_dump.c"
}

#line 533 "mdprof_dump.c"
static void MR_CALL 
mdprof_dump____Compare____option_0_0_10001(
#line 536 "mdprof_dump.c"
  MR_Box * mdprof_dump__wrapper_arg_1,
#line 538 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_2,
#line 540 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_3)
#line 542 "mdprof_dump.c"
{
#line 544 "mdprof_dump.c"
  {
#line 546 "mdprof_dump.c"
    MR_Word mdprof_dump__conv0_HeadVar__1_1;

#line 549 "mdprof_dump.c"
    {
#line 551 "mdprof_dump.c"
      mdprof_dump____Compare____option_0_0(&mdprof_dump__conv0_HeadVar__1_1, ((MR_Word) mdprof_dump__wrapper_arg_2), ((MR_Word) mdprof_dump__wrapper_arg_3));
    }
#line 554 "mdprof_dump.c"
    *mdprof_dump__wrapper_arg_1 = ((MR_Box) (mdprof_dump__conv0_HeadVar__1_1));
#line 556 "mdprof_dump.c"
  }
#line 558 "mdprof_dump.c"
}

#line 561 "mdprof_dump.c"
static MR_bool MR_CALL 
mdprof_dump____Unify____option_table_0_0_10001(
#line 564 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_1,
#line 566 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_2)
#line 568 "mdprof_dump.c"
{
#line 570 "mdprof_dump.c"
  {
#line 572 "mdprof_dump.c"
    MR_bool mdprof_dump__succeeded;

#line 575 "mdprof_dump.c"
    {
#line 577 "mdprof_dump.c"
      mdprof_dump__succeeded = mdprof_dump____Unify____option_table_0_0(((MR_Word) mdprof_dump__wrapper_arg_1), ((MR_Word) mdprof_dump__wrapper_arg_2));
    }
#line 580 "mdprof_dump.c"
    return mdprof_dump__succeeded;
#line 582 "mdprof_dump.c"
  }
#line 584 "mdprof_dump.c"
}

#line 587 "mdprof_dump.c"
static void MR_CALL 
mdprof_dump____Compare____option_table_0_0_10001(
#line 590 "mdprof_dump.c"
  MR_Box * mdprof_dump__wrapper_arg_1,
#line 592 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_2,
#line 594 "mdprof_dump.c"
  MR_Box mdprof_dump__wrapper_arg_3)
#line 596 "mdprof_dump.c"
{
#line 598 "mdprof_dump.c"
  {
#line 600 "mdprof_dump.c"
    MR_Word mdprof_dump__conv0_HeadVar__1_1;

#line 603 "mdprof_dump.c"
    {
#line 605 "mdprof_dump.c"
      mdprof_dump____Compare____option_table_0_0(&mdprof_dump__conv0_HeadVar__1_1, ((MR_Word) mdprof_dump__wrapper_arg_2), ((MR_Word) mdprof_dump__wrapper_arg_3));
    }
#line 608 "mdprof_dump.c"
    *mdprof_dump__wrapper_arg_1 = ((MR_Box) (mdprof_dump__conv0_HeadVar__1_1));
#line 610 "mdprof_dump.c"
  }
#line 612 "mdprof_dump.c"
}

#line 130 "mdprof_dump.m"
static void MR_CALL 
mdprof_dump____Compare____option_table_0_0(
#line 130 "mdprof_dump.m"
  MR_Word * mdprof_dump__HeadVar__1_1,
#line 130 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__2_2,
#line 130 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__3_3)
#line 130 "mdprof_dump.m"
{
#line 130 "mdprof_dump.m"
  {
#line 130 "mdprof_dump.m"
    MR_bool mdprof_dump__succeeded;
#line 130 "mdprof_dump.m"
    MR_Word mdprof_dump__Cast_HeadVar1_4 = mdprof_dump__HeadVar__2_2;
#line 130 "mdprof_dump.m"
    MR_Word mdprof_dump__Cast_HeadVar2_5 = mdprof_dump__HeadVar__3_3;

#line 130 "mdprof_dump.m"
    {
#line 130 "mdprof_dump.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdprof_dump_scalar_common_1[0], mdprof_dump__HeadVar__1_1, ((MR_Box) (mdprof_dump__Cast_HeadVar1_4)), ((MR_Box) (mdprof_dump__Cast_HeadVar2_5)));
#line 130 "mdprof_dump.m"
      return;
    }
#line 130 "mdprof_dump.m"
  }
#line 130 "mdprof_dump.m"
}

#line 130 "mdprof_dump.m"
static MR_bool MR_CALL 
mdprof_dump____Unify____option_table_0_0(
#line 130 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__1_1,
#line 130 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__2_2)
#line 130 "mdprof_dump.m"
{
#line 130 "mdprof_dump.m"
  {
#line 130 "mdprof_dump.m"
    MR_bool mdprof_dump__succeeded;
#line 130 "mdprof_dump.m"
    MR_Word mdprof_dump__Cast_HeadVar1_3 = mdprof_dump__HeadVar__1_1;
#line 130 "mdprof_dump.m"
    MR_Word mdprof_dump__Cast_HeadVar2_4 = mdprof_dump__HeadVar__2_2;

#line 130 "mdprof_dump.m"
    {
#line 130 "mdprof_dump.m"
      return mdprof_dump__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdprof_dump_scalar_common_1[0], ((MR_Box) (mdprof_dump__Cast_HeadVar1_3)), ((MR_Box) (mdprof_dump__Cast_HeadVar2_4)));
    }
#line 130 "mdprof_dump.m"
    return mdprof_dump__succeeded;
#line 130 "mdprof_dump.m"
  }
#line 130 "mdprof_dump.m"
}

#line 125 "mdprof_dump.m"
static void MR_CALL 
mdprof_dump____Compare____option_0_0(
#line 125 "mdprof_dump.m"
  MR_Word * mdprof_dump__HeadVar__1_1,
#line 125 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__2_2,
#line 125 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__3_3)
#line 125 "mdprof_dump.m"
{
#line 125 "mdprof_dump.m"
  {
#line 125 "mdprof_dump.m"
    MR_bool mdprof_dump__succeeded;
#line 125 "mdprof_dump.m"
    MR_Integer mdprof_dump__Cast_HeadVar1_4 = (MR_Integer) mdprof_dump__HeadVar__2_2;
#line 125 "mdprof_dump.m"
    MR_Integer mdprof_dump__Cast_HeadVar2_5 = (MR_Integer) mdprof_dump__HeadVar__3_3;

#line 125 "mdprof_dump.m"
    {
#line 125 "mdprof_dump.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_dump__HeadVar__1_1, mdprof_dump__Cast_HeadVar1_4, mdprof_dump__Cast_HeadVar2_5);
#line 125 "mdprof_dump.m"
      return;
    }
#line 125 "mdprof_dump.m"
  }
#line 125 "mdprof_dump.m"
}

#line 125 "mdprof_dump.m"
static MR_bool MR_CALL 
mdprof_dump____Unify____option_0_0(
#line 125 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__2_1,
#line 125 "mdprof_dump.m"
  MR_Word mdprof_dump__HeadVar__2_2)
#line 125 "mdprof_dump.m"
{
#line 718 "mdprof_dump.c"
  {
#line 720 "mdprof_dump.c"
    MR_bool mdprof_dump__succeeded = (mdprof_dump__HeadVar__2_1 == mdprof_dump__HeadVar__2_2);

#line 723 "mdprof_dump.c"
    return mdprof_dump__succeeded;
#line 725 "mdprof_dump.c"
  }
#line 125 "mdprof_dump.m"
}

#line 152 "mdprof_dump.m"
static void MR_CALL 
mdprof_dump__usage_3_p_0(
#line 152 "mdprof_dump.m"
  MR_String mdprof_dump__ProgName_4)
#line 152 "mdprof_dump.m"
{
#line 154 "mdprof_dump.m"
  {
#line 154 "mdprof_dump.m"
    MR_bool mdprof_dump__succeeded;
#line 154 "mdprof_dump.m"
    MR_Word mdprof_dump__StdErr_6;
#line 154 "mdprof_dump.m"
    MR_String mdprof_dump__V_18_18;
#line 154 "mdprof_dump.m"
    MR_String mdprof_dump__V_20_20;

#line 155 "mdprof_dump.m"
    {
#line 155 "mdprof_dump.m"
      mercury__io__stderr_stream_3_p_0(&mdprof_dump__StdErr_6);
    }
#line 753 "mdprof_dump.c"
    {
#line 755 "mdprof_dump.c"
      mdprof_dump__V_18_18 = mercury__string__f_43_43_2_f_0(mdprof_dump__ProgName_4, (MR_String) " [-h] [-D what] [filename]\n");
    }
#line 758 "mdprof_dump.c"
    {
#line 760 "mdprof_dump.c"
      mdprof_dump__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "Usage: ", mdprof_dump__V_18_18);
    }
#line 763 "mdprof_dump.c"
    {
#line 765 "mdprof_dump.c"
      mercury__io__write_string_4_p_0(mdprof_dump__StdErr_6, mdprof_dump__V_20_20);
    }
#line 158 "mdprof_dump.m"
    {
#line 158 "mdprof_dump.m"
      mercury__io__write_string_4_p_0(mdprof_dump__StdErr_6, (MR_String) "Options:\n\t-h, --help\n\t\tDisplay this message.\n\t-r, --restrict\n\t\tDo not dump proc and call-site statics that are\n\t\tnot referenced from the proc dynamics\n\t-D all\n\t" "\tDump all arrays, (default).\n\t-D csd\n\t\tDump call-site dynamics.\n\t-D pd\n\t\tDump proc dynamics.\n\t-D css\n\t\tDump call-site statics.\n\t-D ps\n\t\tDump proc statics.\n\nThe " "following options are unimplemented.\n\t-D clique\n\t\tDump information about cliques.\n\t-D rev\n\t\tDump reverse links.\n\t-D prop\n\t\tDump propagated measurement informati" "on.\n");
#line 158 "mdprof_dump.m"
      return;
    }
#line 154 "mdprof_dump.m"
  }
#line 152 "mdprof_dump.m"
}

#line 144 "mdprof_dump.m"
static void MR_CALL 
mdprof_dump__defaults_2_p_0(
#line 144 "mdprof_dump.m"
  MR_Word * mdprof_dump__HeadVar__1_1,
#line 144 "mdprof_dump.m"
  MR_Word * mdprof_dump__HeadVar__2_2,
#line 144 "mdprof_dump.m"
  MR_Cont mdprof_dump__cont,
#line 144 "mdprof_dump.m"
  void * mdprof_dump__cont_env_ptr)
#line 144 "mdprof_dump.m"
{
#line 146 "mdprof_dump.m"
  {
#line 146 "mdprof_dump.m"
    MR_bool mdprof_dump__succeeded;

#line 146 "mdprof_dump.m"
    {
#line 146 "mdprof_dump.m"
      MR_Integer mdprof_dump__slot_0 = (MR_Integer) 0;

#line 146 "mdprof_dump.m"
      do
#line 146 "mdprof_dump.m"
        {
#line 146 "mdprof_dump.m"
          *mdprof_dump__HeadVar__1_1 = ((&mdprof_dump_vector_common_5[0 + mdprof_dump__slot_0]))->mdprof_dump__vector_common_type_5_0__vct_5_f_0;
#line 146 "mdprof_dump.m"
          *mdprof_dump__HeadVar__2_2 = ((&mdprof_dump_vector_common_5[0 + mdprof_dump__slot_0]))->mdprof_dump__vector_common_type_5_0__vct_5_f_1;
#line 146 "mdprof_dump.m"
          {
#line 146 "mdprof_dump.m"
            mdprof_dump__cont(mdprof_dump__cont_env_ptr);
          }
#line 146 "mdprof_dump.m"
          mdprof_dump__slot_0 = (mdprof_dump__slot_0 + (MR_Integer) 1);
#line 146 "mdprof_dump.m"
        }
#line 146 "mdprof_dump.m"
      while ((mdprof_dump__slot_0 < (MR_Integer) 3));
#line 146 "mdprof_dump.m"
    }
#line 146 "mdprof_dump.m"
  }
#line 144 "mdprof_dump.m"
}

#line 138 "mdprof_dump.m"
static MR_bool MR_CALL 
mdprof_dump__long_option_2_p_0(
#line 138 "mdprof_dump.m"
  MR_String mdprof_dump__HeadVar__1_1,
#line 138 "mdprof_dump.m"
  MR_Word * mdprof_dump__HeadVar__2_2)
#line 138 "mdprof_dump.m"
{
#line 140 "mdprof_dump.m"
  {
#line 140 "mdprof_dump.m"
    MR_bool mdprof_dump__succeeded;

#line 140 "mdprof_dump.m"
    if ((strcmp(mdprof_dump__HeadVar__1_1, (MR_String) "help") == 0))
#line 140 "mdprof_dump.m"
      {
#line 140 "mdprof_dump.m"
        *mdprof_dump__HeadVar__2_2 = (MR_Integer) 0;
#line 140 "mdprof_dump.m"
        mdprof_dump__succeeded = MR_TRUE;
#line 140 "mdprof_dump.m"
      }
#line 140 "mdprof_dump.m"
    else
#line 140 "mdprof_dump.m"
      if ((strcmp(mdprof_dump__HeadVar__1_1, (MR_String) "restrict") == 0))
#line 142 "mdprof_dump.m"
        {
#line 142 "mdprof_dump.m"
          *mdprof_dump__HeadVar__2_2 = (MR_Integer) 2;
#line 142 "mdprof_dump.m"
          mdprof_dump__succeeded = MR_TRUE;
#line 142 "mdprof_dump.m"
        }
#line 140 "mdprof_dump.m"
      else
#line 140 "mdprof_dump.m"
        if ((strcmp(mdprof_dump__HeadVar__1_1, (MR_String) "dump-options") == 0))
#line 141 "mdprof_dump.m"
          {
#line 141 "mdprof_dump.m"
            *mdprof_dump__HeadVar__2_2 = (MR_Integer) 1;
#line 141 "mdprof_dump.m"
            mdprof_dump__succeeded = MR_TRUE;
#line 141 "mdprof_dump.m"
          }
#line 140 "mdprof_dump.m"
        else
#line 140 "mdprof_dump.m"
          mdprof_dump__succeeded = MR_FALSE;
#line 140 "mdprof_dump.m"
    return mdprof_dump__succeeded;
#line 140 "mdprof_dump.m"
  }
#line 138 "mdprof_dump.m"
}

#line 132 "mdprof_dump.m"
static MR_bool MR_CALL 
mdprof_dump__short_option_2_p_0(
#line 132 "mdprof_dump.m"
  MR_Char mdprof_dump__HeadVar__1_1,
#line 132 "mdprof_dump.m"
  MR_Word * mdprof_dump__HeadVar__2_2)
#line 132 "mdprof_dump.m"
{
#line 134 "mdprof_dump.m"
  {
#line 134 "mdprof_dump.m"
    MR_bool mdprof_dump__succeeded;

#line 134 "mdprof_dump.m"
    if ((mdprof_dump__HeadVar__1_1 == (MR_Char) 68))
#line 135 "mdprof_dump.m"
      {
#line 135 "mdprof_dump.m"
        *mdprof_dump__HeadVar__2_2 = (MR_Integer) 1;
#line 135 "mdprof_dump.m"
        mdprof_dump__succeeded = MR_TRUE;
#line 135 "mdprof_dump.m"
      }
#line 134 "mdprof_dump.m"
    else
#line 134 "mdprof_dump.m"
      if ((mdprof_dump__HeadVar__1_1 == (MR_Char) 104))
#line 134 "mdprof_dump.m"
        {
#line 134 "mdprof_dump.m"
          *mdprof_dump__HeadVar__2_2 = (MR_Integer) 0;
#line 134 "mdprof_dump.m"
          mdprof_dump__succeeded = MR_TRUE;
#line 134 "mdprof_dump.m"
        }
#line 134 "mdprof_dump.m"
      else
#line 134 "mdprof_dump.m"
        if ((mdprof_dump__HeadVar__1_1 == (MR_Char) 114))
#line 136 "mdprof_dump.m"
          {
#line 136 "mdprof_dump.m"
            *mdprof_dump__HeadVar__2_2 = (MR_Integer) 2;
#line 136 "mdprof_dump.m"
            mdprof_dump__succeeded = MR_TRUE;
#line 136 "mdprof_dump.m"
          }
#line 134 "mdprof_dump.m"
        else
#line 134 "mdprof_dump.m"
          mdprof_dump__succeeded = MR_FALSE;
#line 134 "mdprof_dump.m"
    return mdprof_dump__succeeded;
#line 134 "mdprof_dump.m"
  }
#line 132 "mdprof_dump.m"
}

#line 105 "mdprof_dump.m"
static void MR_CALL 
mdprof_dump__make_dump_options_2_p_0(
#line 105 "mdprof_dump.m"
  MR_Word mdprof_dump__Options_3,
#line 105 "mdprof_dump.m"
  MR_Word * mdprof_dump__MaybeDumpOptions_4)
#line 105 "mdprof_dump.m"
{
#line 108 "mdprof_dump.m"
  {
#line 108 "mdprof_dump.m"
    MR_bool mdprof_dump__succeeded;
#line 108 "mdprof_dump.m"
    MR_Word mdprof_dump__TypeCtorInfo_26_26 = (MR_Word) &mdprof_dump__mdprof_dump__type_ctor_info_option_0;
#line 108 "mdprof_dump.m"
    MR_Word mdprof_dump__ArrayOptionStrs_5;
#line 108 "mdprof_dump.m"
    MR_Word mdprof_dump__RestrictBool_6;
#line 108 "mdprof_dump.m"
    MR_Word mdprof_dump__Restrict_7;
#line 108 "mdprof_dump.m"
    MR_Word mdprof_dump__DumpOptions0_8;
#line 108 "mdprof_dump.m"
    MR_Word mdprof_dump__V_12_12;
#line 118 "mdprof_dump.m"
    MR_Word mdprof_dump__V_15_15;
#line 118 "mdprof_dump.m"
    MR_Word mdprof_dump__V_16_16;
#line 118 "mdprof_dump.m"
    MR_Word mdprof_dump__V_17_17;
#line 118 "mdprof_dump.m"
    MR_Word mdprof_dump__V_18_18;
#line 118 "mdprof_dump.m"
    MR_Word mdprof_dump__V_19_19;
#line 118 "mdprof_dump.m"
    MR_Word mdprof_dump__V_14_14;
#line 121 "mdprof_dump.m"
    MR_Word mdprof_dump__ArrayOptions_9;

#line 109 "mdprof_dump.m"
    {
#line 109 "mdprof_dump.m"
      mercury__getopt__lookup_accumulating_option_3_p_0(mdprof_dump__TypeCtorInfo_26_26, mdprof_dump__Options_3, ((MR_Box) ((MR_Integer) 1)), &mdprof_dump__ArrayOptionStrs_5);
    }
#line 110 "mdprof_dump.m"
    {
#line 110 "mdprof_dump.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_dump__TypeCtorInfo_26_26, mdprof_dump__Options_3, ((MR_Box) ((MR_Integer) 2)), &mdprof_dump__RestrictBool_6);
    }
#line 114 "mdprof_dump.m"
    if ((mdprof_dump__RestrictBool_6 == (MR_Integer) 0))
#line 116 "mdprof_dump.m"
      mdprof_dump__Restrict_7 = (MR_Integer) 1;
#line 114 "mdprof_dump.m"
    else
#line 113 "mdprof_dump.m"
      mdprof_dump__Restrict_7 = (MR_Integer) 0;
#line 118 "mdprof_dump.m"
    {
#line 118 "mdprof_dump.m"
      mdprof_dump__V_12_12 = dump__default_dump_options_0_f_0();
    }
#line 118 "mdprof_dump.m"
    mdprof_dump__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__V_12_12, (MR_Integer) 0)));
#line 118 "mdprof_dump.m"
    mdprof_dump__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__V_12_12, (MR_Integer) 1)));
#line 118 "mdprof_dump.m"
    mdprof_dump__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__V_12_12, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 118 "mdprof_dump.m"
    mdprof_dump__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__V_12_12, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 118 "mdprof_dump.m"
    mdprof_dump__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__V_12_12, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 118 "mdprof_dump.m"
    mdprof_dump__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__V_12_12, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 118 "mdprof_dump.m"
    {
#line 118 "mdprof_dump.m"
      mdprof_dump__DumpOptions0_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 118 "mdprof_dump.m"
      MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_8, 0) = ((MR_Box) (mdprof_dump__Restrict_7));
#line 118 "mdprof_dump.m"
      MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_8, 1) = ((MR_Box) (mdprof_dump__V_15_15));
#line 118 "mdprof_dump.m"
      MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_8, 2) = ((MR_Box) ((mdprof_dump__V_16_16 | ((((mdprof_dump__V_17_17 << (MR_Integer) 1)) | ((((mdprof_dump__V_18_18 << (MR_Integer) 2)) | ((mdprof_dump__V_19_19 << (MR_Integer) 3)))))))));
#line 118 "mdprof_dump.m"
    }
#line 119 "mdprof_dump.m"
    {
#line 119 "mdprof_dump.m"
      mdprof_dump__succeeded = dump__dump_array_options_2_p_0(mdprof_dump__ArrayOptionStrs_5, &mdprof_dump__ArrayOptions_9);
    }
#line 121 "mdprof_dump.m"
    if (mdprof_dump__succeeded)
#line 120 "mdprof_dump.m"
      {
#line 120 "mdprof_dump.m"
        MR_Word mdprof_dump__V_13_13;
#line 120 "mdprof_dump.m"
        MR_Word mdprof_dump__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_8, (MR_Integer) 0)));
#line 120 "mdprof_dump.m"
        MR_Word mdprof_dump__V_22_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_8, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 120 "mdprof_dump.m"
        MR_Word mdprof_dump__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_8, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 120 "mdprof_dump.m"
        MR_Word mdprof_dump__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_8, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 120 "mdprof_dump.m"
        MR_Word mdprof_dump__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_8, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 120 "mdprof_dump.m"
        MR_Word mdprof_dump__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_8, (MR_Integer) 1)));

#line 120 "mdprof_dump.m"
        {
#line 120 "mdprof_dump.m"
          mdprof_dump__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 120 "mdprof_dump.m"
          MR_hl_field(MR_mktag(0), mdprof_dump__V_13_13, 0) = ((MR_Box) (mdprof_dump__V_20_20));
#line 120 "mdprof_dump.m"
          MR_hl_field(MR_mktag(0), mdprof_dump__V_13_13, 1) = ((MR_Box) (mdprof_dump__ArrayOptions_9));
#line 120 "mdprof_dump.m"
          MR_hl_field(MR_mktag(0), mdprof_dump__V_13_13, 2) = ((MR_Box) ((mdprof_dump__V_22_22 | ((((mdprof_dump__V_23_23 << (MR_Integer) 1)) | ((((mdprof_dump__V_24_24 << (MR_Integer) 2)) | ((mdprof_dump__V_25_25 << (MR_Integer) 3)))))))));
#line 120 "mdprof_dump.m"
        }
#line 120 "mdprof_dump.m"
        {
#line 120 "mdprof_dump.m"
          MR_Word base;
#line 120 "mdprof_dump.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 120 "mdprof_dump.m"
          *mdprof_dump__MaybeDumpOptions_4 = base;
#line 120 "mdprof_dump.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdprof_dump__V_13_13));
#line 120 "mdprof_dump.m"
        }
#line 120 "mdprof_dump.m"
      }
#line 121 "mdprof_dump.m"
    else
#line 122 "mdprof_dump.m"
      *mdprof_dump__MaybeDumpOptions_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 108 "mdprof_dump.m"
  }
#line 105 "mdprof_dump.m"
}

#line 86 "mdprof_dump.m"
static void MR_CALL 
mdprof_dump__main_2_4_p_0(
#line 86 "mdprof_dump.m"
  MR_Word mdprof_dump__DumpOptions_5,
#line 86 "mdprof_dump.m"
  MR_String mdprof_dump__FileName_6)
#line 86 "mdprof_dump.m"
{
#line 88 "mdprof_dump.m"
  {
#line 88 "mdprof_dump.m"
    MR_bool mdprof_dump__succeeded;
#line 88 "mdprof_dump.m"
    MR_Word mdprof_dump__MaybeInitialDeep_8;

#line 89 "mdprof_dump.m"
    {
#line 89 "mdprof_dump.m"
      read_profile__read_call_graph_4_p_0(mdprof_dump__FileName_6, &mdprof_dump__MaybeInitialDeep_8);
    }
#line 93 "mdprof_dump.m"
    if (((MR_tag((MR_Word) mdprof_dump__MaybeInitialDeep_8)) == (MR_mktag((MR_Integer) 1))))
#line 94 "mdprof_dump.m"
      {
#line 94 "mdprof_dump.m"
        MR_String mdprof_dump__Msg_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_dump__MaybeInitialDeep_8, (MR_Integer) 0)));
#line 94 "mdprof_dump.m"
        MR_String mdprof_dump__V_23_23;
#line 94 "mdprof_dump.m"
        MR_String mdprof_dump__V_25_25;
#line 94 "mdprof_dump.m"
        MR_String mdprof_dump__V_26_26;
#line 94 "mdprof_dump.m"
        MR_String mdprof_dump__V_28_28;

#line 1129 "mdprof_dump.c"
        {
#line 1131 "mdprof_dump.c"
          mdprof_dump__V_23_23 = mercury__string__f_43_43_2_f_0(mdprof_dump__FileName_6, (MR_String) "\n");
        }
#line 1134 "mdprof_dump.c"
        {
#line 1136 "mdprof_dump.c"
          mdprof_dump__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdprof_dump__V_23_23);
        }
#line 1139 "mdprof_dump.c"
        {
#line 1141 "mdprof_dump.c"
          mdprof_dump__V_26_26 = mercury__string__f_43_43_2_f_0(mdprof_dump__Msg_10, mdprof_dump__V_25_25);
        }
#line 1144 "mdprof_dump.c"
        {
#line 1146 "mdprof_dump.c"
          mdprof_dump__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot read ", mdprof_dump__V_26_26);
        }
#line 1149 "mdprof_dump.c"
        {
#line 1151 "mdprof_dump.c"
          mercury__io__write_string_3_p_0(mdprof_dump__V_28_28);
#line 1153 "mdprof_dump.c"
          return;
        }
#line 94 "mdprof_dump.m"
      }
#line 93 "mdprof_dump.m"
    else
#line 91 "mdprof_dump.m"
      {
#line 91 "mdprof_dump.m"
        MR_Word mdprof_dump__InitialDeep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__MaybeInitialDeep_8, (MR_Integer) 0)));

#line 92 "mdprof_dump.m"
        {
#line 92 "mdprof_dump.m"
          dump__dump_initial_deep_4_p_0(mdprof_dump__InitialDeep_9, mdprof_dump__DumpOptions_5);
#line 92 "mdprof_dump.m"
          return;
        }
#line 91 "mdprof_dump.m"
      }
#line 88 "mdprof_dump.m"
  }
#line 86 "mdprof_dump.m"
}

#line 48 "mdprof_dump.m"
static void MR_CALL 
main_2_p_0_3(
#line 48 "mdprof_dump.m"
  void * mdprof_dump__env_ptr_arg)
#line 48 "mdprof_dump.m"
{
#line 48 "mdprof_dump.m"
  {
#line 48 "mdprof_dump.m"
    struct mdprof_dump__main_2_p_0_4_env_0_s * mdprof_dump__env_ptr = (struct mdprof_dump__main_2_p_0_4_env_0_s *) mdprof_dump__env_ptr_arg;

#line 48 "mdprof_dump.m"
    *((mdprof_dump__env_ptr)->mdprof_dump__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdprof_dump__env_ptr)->mdprof_dump__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
#line 48 "mdprof_dump.m"
    *((mdprof_dump__env_ptr)->mdprof_dump__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdprof_dump__env_ptr)->mdprof_dump__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
#line 48 "mdprof_dump.m"
    {
#line 48 "mdprof_dump.m"
      ((mdprof_dump__env_ptr)->mdprof_dump__main_2_p_0_4_env_0__cont)((mdprof_dump__env_ptr)->mdprof_dump__main_2_p_0_4_env_0__cont_env_ptr);
#line 48 "mdprof_dump.m"
      return;
    }
#line 48 "mdprof_dump.m"
  }
#line 48 "mdprof_dump.m"
}

#line 48 "mdprof_dump.m"
static void MR_CALL 
main_2_p_0_4(
#line 48 "mdprof_dump.m"
  MR_Box mdprof_dump__closure_arg,
#line 48 "mdprof_dump.m"
  MR_Box * mdprof_dump__wrapper_arg_1,
#line 48 "mdprof_dump.m"
  MR_Box * mdprof_dump__wrapper_arg_2,
#line 48 "mdprof_dump.m"
  MR_Cont mdprof_dump__cont,
#line 48 "mdprof_dump.m"
  void * mdprof_dump__cont_env_ptr)
#line 48 "mdprof_dump.m"
{
#line 48 "mdprof_dump.m"
  {
#line 48 "mdprof_dump.m"
    struct mdprof_dump__main_2_p_0_4_env_0_s mdprof_dump__env;

#line 48 "mdprof_dump.m"
    (mdprof_dump__env).mdprof_dump__main_2_p_0_4_env_0__wrapper_arg_1 = mdprof_dump__wrapper_arg_1;
#line 48 "mdprof_dump.m"
    (mdprof_dump__env).mdprof_dump__main_2_p_0_4_env_0__wrapper_arg_2 = mdprof_dump__wrapper_arg_2;
#line 48 "mdprof_dump.m"
    (mdprof_dump__env).mdprof_dump__main_2_p_0_4_env_0__cont = mdprof_dump__cont;
#line 48 "mdprof_dump.m"
    (mdprof_dump__env).mdprof_dump__main_2_p_0_4_env_0__cont_env_ptr = mdprof_dump__cont_env_ptr;
#line 48 "mdprof_dump.m"
    {
#line 48 "mdprof_dump.m"
      MR_Box mdprof_dump__closure = mdprof_dump__closure_arg;

#line 48 "mdprof_dump.m"
      {
#line 48 "mdprof_dump.m"
        mdprof_dump__defaults_2_p_0(&(mdprof_dump__env).mdprof_dump__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mdprof_dump__env).mdprof_dump__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mdprof_dump__env);
      }
#line 48 "mdprof_dump.m"
    }
#line 48 "mdprof_dump.m"
  }
#line 48 "mdprof_dump.m"
}

#line 48 "mdprof_dump.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 48 "mdprof_dump.m"
  MR_Box mdprof_dump__closure_arg,
#line 48 "mdprof_dump.m"
  MR_Box mdprof_dump__wrapper_arg_1,
#line 48 "mdprof_dump.m"
  MR_Box * mdprof_dump__wrapper_arg_2)
#line 48 "mdprof_dump.m"
{
#line 48 "mdprof_dump.m"
  {
#line 48 "mdprof_dump.m"
    MR_bool mdprof_dump__succeeded;
#line 48 "mdprof_dump.m"
    MR_Box mdprof_dump__closure = mdprof_dump__closure_arg;
#line 48 "mdprof_dump.m"
    MR_Word mdprof_dump__conv1_HeadVar__2_2;

#line 48 "mdprof_dump.m"
    {
#line 48 "mdprof_dump.m"
      mdprof_dump__succeeded = mdprof_dump__long_option_2_p_0(((MR_String) mdprof_dump__wrapper_arg_1), &mdprof_dump__conv1_HeadVar__2_2);
    }
#line 48 "mdprof_dump.m"
    if (mdprof_dump__succeeded)
#line 48 "mdprof_dump.m"
      {
#line 48 "mdprof_dump.m"
        *mdprof_dump__wrapper_arg_2 = ((MR_Box) (mdprof_dump__conv1_HeadVar__2_2));
#line 48 "mdprof_dump.m"
        mdprof_dump__succeeded = MR_TRUE;
#line 48 "mdprof_dump.m"
      }
#line 48 "mdprof_dump.m"
    return mdprof_dump__succeeded;
#line 48 "mdprof_dump.m"
  }
#line 48 "mdprof_dump.m"
}

#line 48 "mdprof_dump.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 48 "mdprof_dump.m"
  MR_Box mdprof_dump__closure_arg,
#line 48 "mdprof_dump.m"
  MR_Box mdprof_dump__wrapper_arg_1,
#line 48 "mdprof_dump.m"
  MR_Box * mdprof_dump__wrapper_arg_2)
#line 48 "mdprof_dump.m"
{
#line 48 "mdprof_dump.m"
  {
#line 48 "mdprof_dump.m"
    MR_bool mdprof_dump__succeeded;
#line 48 "mdprof_dump.m"
    MR_Box mdprof_dump__closure = mdprof_dump__closure_arg;
#line 48 "mdprof_dump.m"
    MR_Word mdprof_dump__conv0_HeadVar__2_2;

#line 48 "mdprof_dump.m"
    {
#line 48 "mdprof_dump.m"
      mdprof_dump__succeeded = mdprof_dump__short_option_2_p_0(((MR_Char) (MR_Word) mdprof_dump__wrapper_arg_1), &mdprof_dump__conv0_HeadVar__2_2);
    }
#line 48 "mdprof_dump.m"
    if (mdprof_dump__succeeded)
#line 48 "mdprof_dump.m"
      {
#line 48 "mdprof_dump.m"
        *mdprof_dump__wrapper_arg_2 = ((MR_Box) (mdprof_dump__conv0_HeadVar__2_2));
#line 48 "mdprof_dump.m"
        mdprof_dump__succeeded = MR_TRUE;
#line 48 "mdprof_dump.m"
      }
#line 48 "mdprof_dump.m"
    return mdprof_dump__succeeded;
#line 48 "mdprof_dump.m"
  }
#line 48 "mdprof_dump.m"
}

#line 26 "mdprof_dump.m"
void MR_CALL 
main_2_p_0(void)
#line 26 "mdprof_dump.m"
{
#line 45 "mdprof_dump.m"
  {
#line 45 "mdprof_dump.m"
    MR_bool mdprof_dump__succeeded;
#line 45 "mdprof_dump.m"
    MR_Word mdprof_dump__TypeCtorInfo_50_50;
#line 45 "mdprof_dump.m"
    MR_String mdprof_dump__ProgName_4;
#line 45 "mdprof_dump.m"
    MR_Word mdprof_dump__Args0_5;
#line 45 "mdprof_dump.m"
    MR_Word mdprof_dump__Args_7;
#line 45 "mdprof_dump.m"
    MR_Word mdprof_dump__MaybeOptions_8;

#line 46 "mdprof_dump.m"
    {
#line 46 "mdprof_dump.m"
      mercury__io__progname_base_4_p_0((MR_String) "mdprof_dump", &mdprof_dump__ProgName_4);
    }
#line 47 "mdprof_dump.m"
    {
#line 47 "mdprof_dump.m"
      mercury__io__command_line_arguments_3_p_0(&mdprof_dump__Args0_5);
    }
#line 1366 "mdprof_dump.c"
    mdprof_dump__TypeCtorInfo_50_50 = (MR_Word) &mdprof_dump__mdprof_dump__type_ctor_info_option_0;
#line 49 "mdprof_dump.m"
    {
#line 49 "mdprof_dump.m"
      mercury__getopt__process_options_4_p_0(mdprof_dump__TypeCtorInfo_50_50, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_dump_scalar_common_1[4]), mdprof_dump__Args0_5, &mdprof_dump__Args_7, &mdprof_dump__MaybeOptions_8);
    }
#line 79 "mdprof_dump.m"
    if (((MR_tag((MR_Word) mdprof_dump__MaybeOptions_8)) == (MR_mktag((MR_Integer) 1))))
#line 80 "mdprof_dump.m"
      {
#line 80 "mdprof_dump.m"
        MR_String mdprof_dump__Message_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_dump__MaybeOptions_8, (MR_Integer) 0)));
#line 80 "mdprof_dump.m"
        MR_Word mdprof_dump__Stderr_18;
#line 80 "mdprof_dump.m"
        MR_String mdprof_dump__V_62_62;
#line 80 "mdprof_dump.m"
        MR_String mdprof_dump__V_64_64;
#line 80 "mdprof_dump.m"
        MR_String mdprof_dump__V_65_65;

#line 81 "mdprof_dump.m"
        {
#line 81 "mdprof_dump.m"
          mercury__io__stderr_stream_3_p_0(&mdprof_dump__Stderr_18);
        }
#line 1393 "mdprof_dump.c"
        {
#line 1395 "mdprof_dump.c"
          mdprof_dump__V_62_62 = mercury__string__f_43_43_2_f_0(mdprof_dump__Message_17, (MR_String) "\n");
        }
#line 1398 "mdprof_dump.c"
        {
#line 1400 "mdprof_dump.c"
          mdprof_dump__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdprof_dump__V_62_62);
        }
#line 1403 "mdprof_dump.c"
        {
#line 1405 "mdprof_dump.c"
          mdprof_dump__V_65_65 = mercury__string__f_43_43_2_f_0(mdprof_dump__ProgName_4, mdprof_dump__V_64_64);
        }
#line 1408 "mdprof_dump.c"
        {
#line 1410 "mdprof_dump.c"
          mercury__io__write_string_4_p_0(mdprof_dump__Stderr_18, mdprof_dump__V_65_65);
        }
#line 83 "mdprof_dump.m"
        {
#line 83 "mdprof_dump.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 83 "mdprof_dump.m"
          return;
        }
#line 80 "mdprof_dump.m"
      }
#line 79 "mdprof_dump.m"
    else
#line 51 "mdprof_dump.m"
      {
#line 51 "mdprof_dump.m"
        MR_Word mdprof_dump__Options_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__MaybeOptions_8, (MR_Integer) 0)));
#line 51 "mdprof_dump.m"
        MR_Word mdprof_dump__NeedsHelp_10;

#line 52 "mdprof_dump.m"
        {
#line 52 "mdprof_dump.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_dump__TypeCtorInfo_50_50, mdprof_dump__Options_9, ((MR_Box) ((MR_Integer) 0)), &mdprof_dump__NeedsHelp_10);
        }
#line 56 "mdprof_dump.m"
        if ((mdprof_dump__NeedsHelp_10 == (MR_Integer) 0))
#line 57 "mdprof_dump.m"
          if ((mdprof_dump__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 64 "mdprof_dump.m"
            {
#line 64 "mdprof_dump.m"
              MR_Word mdprof_dump__TypeCtorInfo_26_89 = (MR_Word) &mdprof_dump__mdprof_dump__type_ctor_info_option_0;
#line 64 "mdprof_dump.m"
              MR_Word mdprof_dump__ArrayOptionStrs_68;
#line 64 "mdprof_dump.m"
              MR_Word mdprof_dump__RestrictBool_69;
#line 64 "mdprof_dump.m"
              MR_Word mdprof_dump__Restrict_70;
#line 64 "mdprof_dump.m"
              MR_Word mdprof_dump__DumpOptions0_71;
#line 64 "mdprof_dump.m"
              MR_Word mdprof_dump__V_75_75;
#line 118 "mdprof_dump.m"
              MR_Word mdprof_dump__V_78_78;
#line 118 "mdprof_dump.m"
              MR_Word mdprof_dump__V_79_79;
#line 118 "mdprof_dump.m"
              MR_Word mdprof_dump__V_80_80;
#line 118 "mdprof_dump.m"
              MR_Word mdprof_dump__V_81_81;
#line 118 "mdprof_dump.m"
              MR_Word mdprof_dump__V_82_82;
#line 118 "mdprof_dump.m"
              MR_Word mdprof_dump__V_77_77;
#line 1466 "mdprof_dump.c"
              MR_Word mdprof_dump__ArrayOptions_72;

#line 109 "mdprof_dump.m"
              {
#line 109 "mdprof_dump.m"
                mercury__getopt__lookup_accumulating_option_3_p_0(mdprof_dump__TypeCtorInfo_26_89, mdprof_dump__Options_9, ((MR_Box) ((MR_Integer) 1)), &mdprof_dump__ArrayOptionStrs_68);
              }
#line 110 "mdprof_dump.m"
              {
#line 110 "mdprof_dump.m"
                mercury__getopt__lookup_bool_option_3_p_0(mdprof_dump__TypeCtorInfo_26_89, mdprof_dump__Options_9, ((MR_Box) ((MR_Integer) 2)), &mdprof_dump__RestrictBool_69);
              }
#line 114 "mdprof_dump.m"
              if ((mdprof_dump__RestrictBool_69 == (MR_Integer) 0))
#line 116 "mdprof_dump.m"
                mdprof_dump__Restrict_70 = (MR_Integer) 1;
#line 114 "mdprof_dump.m"
              else
#line 113 "mdprof_dump.m"
                mdprof_dump__Restrict_70 = (MR_Integer) 0;
#line 118 "mdprof_dump.m"
              {
#line 118 "mdprof_dump.m"
                mdprof_dump__V_75_75 = dump__default_dump_options_0_f_0();
              }
#line 118 "mdprof_dump.m"
              mdprof_dump__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__V_75_75, (MR_Integer) 0)));
#line 118 "mdprof_dump.m"
              mdprof_dump__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__V_75_75, (MR_Integer) 1)));
#line 118 "mdprof_dump.m"
              mdprof_dump__V_79_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__V_75_75, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 118 "mdprof_dump.m"
              mdprof_dump__V_80_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__V_75_75, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 118 "mdprof_dump.m"
              mdprof_dump__V_81_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__V_75_75, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 118 "mdprof_dump.m"
              mdprof_dump__V_82_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__V_75_75, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 118 "mdprof_dump.m"
              {
#line 118 "mdprof_dump.m"
                mdprof_dump__DumpOptions0_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 118 "mdprof_dump.m"
                MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_71, 0) = ((MR_Box) (mdprof_dump__Restrict_70));
#line 118 "mdprof_dump.m"
                MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_71, 1) = ((MR_Box) (mdprof_dump__V_78_78));
#line 118 "mdprof_dump.m"
                MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_71, 2) = ((MR_Box) ((mdprof_dump__V_79_79 | ((((mdprof_dump__V_80_80 << (MR_Integer) 1)) | ((((mdprof_dump__V_81_81 << (MR_Integer) 2)) | ((mdprof_dump__V_82_82 << (MR_Integer) 3)))))))));
#line 118 "mdprof_dump.m"
              }
#line 119 "mdprof_dump.m"
              {
#line 119 "mdprof_dump.m"
                mdprof_dump__succeeded = dump__dump_array_options_2_p_0(mdprof_dump__ArrayOptionStrs_68, &mdprof_dump__ArrayOptions_72);
              }
#line 1521 "mdprof_dump.c"
              if (mdprof_dump__succeeded)
#line 1523 "mdprof_dump.c"
                {
#line 1525 "mdprof_dump.c"
                  MR_Word mdprof_dump__DumpOptions_13;
#line 120 "mdprof_dump.m"
                  MR_Word mdprof_dump__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_71, (MR_Integer) 0)));
#line 120 "mdprof_dump.m"
                  MR_Word mdprof_dump__V_85_85 = ((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_71, (MR_Integer) 2)))) & (MR_Integer) 1);
#line 120 "mdprof_dump.m"
                  MR_Word mdprof_dump__V_86_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_71, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 120 "mdprof_dump.m"
                  MR_Word mdprof_dump__V_87_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_71, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 120 "mdprof_dump.m"
                  MR_Word mdprof_dump__V_88_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_71, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 120 "mdprof_dump.m"
                  MR_Word mdprof_dump__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions0_71, (MR_Integer) 1)));

#line 120 "mdprof_dump.m"
                  {
#line 120 "mdprof_dump.m"
                    mdprof_dump__DumpOptions_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 120 "mdprof_dump.m"
                    MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions_13, 0) = ((MR_Box) (mdprof_dump__V_83_83));
#line 120 "mdprof_dump.m"
                    MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions_13, 1) = ((MR_Box) (mdprof_dump__ArrayOptions_72));
#line 120 "mdprof_dump.m"
                    MR_hl_field(MR_mktag(0), mdprof_dump__DumpOptions_13, 2) = ((MR_Box) ((mdprof_dump__V_85_85 | ((((mdprof_dump__V_86_86 << (MR_Integer) 1)) | ((((mdprof_dump__V_87_87 << (MR_Integer) 2)) | ((mdprof_dump__V_88_88 << (MR_Integer) 3)))))))));
#line 120 "mdprof_dump.m"
                  }
#line 69 "mdprof_dump.m"
                  {
#line 69 "mdprof_dump.m"
                    mdprof_dump__main_2_4_p_0(mdprof_dump__DumpOptions_13, (MR_String) "Deep.data");
#line 69 "mdprof_dump.m"
                    return;
                  }
#line 1559 "mdprof_dump.c"
                }
#line 1561 "mdprof_dump.c"
              else
#line 71 "mdprof_dump.m"
                {
#line 71 "mdprof_dump.m"
                  mdprof_dump__usage_3_p_0(mdprof_dump__ProgName_4);
#line 71 "mdprof_dump.m"
                  return;
                }
#line 64 "mdprof_dump.m"
            }
#line 57 "mdprof_dump.m"
          else
#line 74 "mdprof_dump.m"
            {
#line 74 "mdprof_dump.m"
              MR_Word mdprof_dump__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_dump__Args_7, (MR_Integer) 1)));
#line 74 "mdprof_dump.m"
              MR_String mdprof_dump__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_dump__Args_7, (MR_Integer) 0)));

#line 74 "mdprof_dump.m"
              if ((mdprof_dump__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 64 "mdprof_dump.m"
                {
#line 64 "mdprof_dump.m"
                  MR_Word mdprof_dump__MaybeDumpOptions_54;

#line 66 "mdprof_dump.m"
                  {
#line 66 "mdprof_dump.m"
                    mdprof_dump__make_dump_options_2_p_0(mdprof_dump__Options_9, &mdprof_dump__MaybeDumpOptions_54);
                  }
#line 70 "mdprof_dump.m"
                  if ((mdprof_dump__MaybeDumpOptions_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 71 "mdprof_dump.m"
                    {
#line 71 "mdprof_dump.m"
                      mdprof_dump__usage_3_p_0(mdprof_dump__ProgName_4);
#line 71 "mdprof_dump.m"
                      return;
                    }
#line 70 "mdprof_dump.m"
                  else
#line 68 "mdprof_dump.m"
                    {
#line 68 "mdprof_dump.m"
                      MR_Word mdprof_dump__DumpOptions_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_dump__MaybeDumpOptions_54, (MR_Integer) 0)));

#line 69 "mdprof_dump.m"
                      {
#line 69 "mdprof_dump.m"
                        mdprof_dump__main_2_4_p_0(mdprof_dump__DumpOptions_51, mdprof_dump__V_60_60);
#line 69 "mdprof_dump.m"
                        return;
                      }
#line 68 "mdprof_dump.m"
                    }
#line 64 "mdprof_dump.m"
                }
#line 74 "mdprof_dump.m"
              else
#line 76 "mdprof_dump.m"
                {
#line 76 "mdprof_dump.m"
                  mdprof_dump__usage_3_p_0(mdprof_dump__ProgName_4);
#line 76 "mdprof_dump.m"
                  return;
                }
#line 74 "mdprof_dump.m"
            }
#line 56 "mdprof_dump.m"
        else
#line 54 "mdprof_dump.m"
          {
#line 54 "mdprof_dump.m"
            mdprof_dump__usage_3_p_0(mdprof_dump__ProgName_4);
#line 54 "mdprof_dump.m"
            return;
          }
#line 51 "mdprof_dump.m"
      }
#line 45 "mdprof_dump.m"
  }
#line 26 "mdprof_dump.m"
}

void mercury__mdprof_dump__init(void)
{
}

void mercury__mdprof_dump__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdprof_dump__mdprof_dump__type_ctor_info_option_0);
	MR_register_type_ctor_info(&mdprof_dump__mdprof_dump__type_ctor_info_option_table_0);
}

void mercury__mdprof_dump__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdprof_dump. */
