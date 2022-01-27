/*
** Automatically generated from `mdprof_report_feedback.m'
** by the Mercury compiler,
** version 2015-10-27
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


/* :- module mdprof_report_feedback. */
/* :- implementation. */

/*
INIT mercury__mdprof_report_feedback__init
ENDINIT
*/

#include "mdprof_report_feedback.mih"


#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
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
#include "mdprof_fb.automatic_parallelism.autopar_reports.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



#line 52 "mdprof_report_feedback.m"
struct mdprof_report_feedback__main_2_p_0_4_env_0_s {
#line 52 "mdprof_report_feedback.m"
  MR_Box * mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_1;
#line 52 "mdprof_report_feedback.m"
  MR_Box * mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_2;
#line 52 "mdprof_report_feedback.m"
  MR_Cont mdprof_report_feedback__main_2_p_0_4_env_0__cont;
#line 52 "mdprof_report_feedback.m"
  void * mdprof_report_feedback__main_2_p_0_4_env_0__cont_env_ptr;
#line 52 "mdprof_report_feedback.m"
  MR_Word mdprof_report_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
#line 52 "mdprof_report_feedback.m"
  MR_Word mdprof_report_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
#line 52 "mdprof_report_feedback.m"
};


#line 102 "mdprof_report_feedback.c"
static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_0;

#line 105 "mdprof_report_feedback.c"
static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_1;

#line 108 "mdprof_report_feedback.c"
static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_2;

#line 111 "mdprof_report_feedback.c"
static const MR_EnumFunctorDescPtr mdprof_report_feedback__mdprof_report_feedback__enum_value_ordered_option_0[3];

#line 114 "mdprof_report_feedback.c"
static const MR_EnumFunctorDescPtr mdprof_report_feedback__mdprof_report_feedback__enum_name_ordered_option_0[3];

#line 117 "mdprof_report_feedback.c"
static const MR_Integer mdprof_report_feedback__mdprof_report_feedback__functor_number_map_option_0[3];

#line 120 "mdprof_report_feedback.c"
static MR_bool MR_CALL 
mdprof_report_feedback____Unify____option_0_0_10001(
#line 123 "mdprof_report_feedback.c"
  MR_Box mdprof_report_feedback__wrapper_arg_1,
#line 125 "mdprof_report_feedback.c"
  MR_Box mdprof_report_feedback__wrapper_arg_2);

#line 128 "mdprof_report_feedback.c"
static void MR_CALL 
mdprof_report_feedback____Compare____option_0_0_10001(
#line 131 "mdprof_report_feedback.c"
  MR_Box * mdprof_report_feedback__wrapper_arg_1,
#line 133 "mdprof_report_feedback.c"
  MR_Box mdprof_report_feedback__wrapper_arg_2,
#line 135 "mdprof_report_feedback.c"
  MR_Box mdprof_report_feedback__wrapper_arg_3);

#line 137 "mdprof_report_feedback.m"
static void MR_CALL 
mdprof_report_feedback____Compare____option_0_0(
#line 137 "mdprof_report_feedback.m"
  MR_Word * mdprof_report_feedback__HeadVar__1_1,
#line 137 "mdprof_report_feedback.m"
  MR_Word mdprof_report_feedback__HeadVar__2_2,
#line 137 "mdprof_report_feedback.m"
  MR_Word mdprof_report_feedback__HeadVar__3_3);

#line 137 "mdprof_report_feedback.m"
static MR_bool MR_CALL 
mdprof_report_feedback____Unify____option_0_0(
#line 137 "mdprof_report_feedback.m"
  MR_Word mdprof_report_feedback__HeadVar__2_1,
#line 137 "mdprof_report_feedback.m"
  MR_Word mdprof_report_feedback__HeadVar__2_2);

#line 164 "mdprof_report_feedback.m"
static void MR_CALL 
mdprof_report_feedback__post_process_options_5_p_0(
#line 164 "mdprof_report_feedback.m"
  MR_String mdprof_report_feedback__ProgName_6,
#line 164 "mdprof_report_feedback.m"
  MR_Word mdprof_report_feedback__STATE_VARIABLE_Options_0_11,
#line 164 "mdprof_report_feedback.m"
  MR_Word * mdprof_report_feedback__STATE_VARIABLE_Options_12);

#line 158 "mdprof_report_feedback.m"
static void MR_CALL 
mdprof_report_feedback__defaults_2_p_0(
#line 158 "mdprof_report_feedback.m"
  MR_Word * mdprof_report_feedback__HeadVar__1_1,
#line 158 "mdprof_report_feedback.m"
  MR_Word * mdprof_report_feedback__HeadVar__2_2,
#line 158 "mdprof_report_feedback.m"
  MR_Cont mdprof_report_feedback__cont,
#line 158 "mdprof_report_feedback.m"
  void * mdprof_report_feedback__cont_env_ptr);

#line 152 "mdprof_report_feedback.m"
static MR_bool MR_CALL 
mdprof_report_feedback__long_2_p_0(
#line 152 "mdprof_report_feedback.m"
  MR_String mdprof_report_feedback__HeadVar__1_1,
#line 152 "mdprof_report_feedback.m"
  MR_Word * mdprof_report_feedback__HeadVar__2_2);

#line 146 "mdprof_report_feedback.m"
static MR_bool MR_CALL 
mdprof_report_feedback__short_2_p_0(
#line 146 "mdprof_report_feedback.m"
  MR_Char mdprof_report_feedback__HeadVar__1_1,
#line 146 "mdprof_report_feedback.m"
  MR_Word * mdprof_report_feedback__HeadVar__2_2);

#line 120 "mdprof_report_feedback.m"
static void MR_CALL 
mdprof_report_feedback__write_version_message_3_p_0(
#line 120 "mdprof_report_feedback.m"
  MR_String mdprof_report_feedback__ProgName_4);

#line 115 "mdprof_report_feedback.m"
static void MR_CALL 
mdprof_report_feedback__write_help_message_3_p_0(
#line 115 "mdprof_report_feedback.m"
  MR_String mdprof_report_feedback__ProgName_4);

#line 52 "mdprof_report_feedback.m"
static void MR_CALL 
main_2_p_0_3(
#line 52 "mdprof_report_feedback.m"
  void * mdprof_report_feedback__env_ptr_arg);

#line 52 "mdprof_report_feedback.m"
static void MR_CALL 
main_2_p_0_4(
#line 52 "mdprof_report_feedback.m"
  MR_Box mdprof_report_feedback__closure_arg,
#line 52 "mdprof_report_feedback.m"
  MR_Box * mdprof_report_feedback__wrapper_arg_1,
#line 52 "mdprof_report_feedback.m"
  MR_Box * mdprof_report_feedback__wrapper_arg_2,
#line 52 "mdprof_report_feedback.m"
  MR_Cont mdprof_report_feedback__cont,
#line 52 "mdprof_report_feedback.m"
  void * mdprof_report_feedback__cont_env_ptr);

#line 52 "mdprof_report_feedback.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 52 "mdprof_report_feedback.m"
  MR_Box mdprof_report_feedback__closure_arg,
#line 52 "mdprof_report_feedback.m"
  MR_Box mdprof_report_feedback__wrapper_arg_1,
#line 52 "mdprof_report_feedback.m"
  MR_Box * mdprof_report_feedback__wrapper_arg_2);

#line 52 "mdprof_report_feedback.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 52 "mdprof_report_feedback.m"
  MR_Box mdprof_report_feedback__closure_arg,
#line 52 "mdprof_report_feedback.m"
  MR_Box mdprof_report_feedback__wrapper_arg_1,
#line 52 "mdprof_report_feedback.m"
  MR_Box * mdprof_report_feedback__wrapper_arg_2);


static /* final */ const MR_Box mdprof_report_feedback_scalar_common_1[3][5];

static /* final */ const MR_Box mdprof_report_feedback_scalar_common_2[4][3];

static /* final */ const MR_Box mdprof_report_feedback_scalar_common_3[5][1];


#line 160 "mdprof_report_feedback.m"
/* sealed */ struct mdprof_report_feedback__vector_common_type_4_0_s {
#line 160 "mdprof_report_feedback.m"
  const MR_Word mdprof_report_feedback__vector_common_type_4_0__vct_4_f_0;
#line 160 "mdprof_report_feedback.m"
  const MR_Word mdprof_report_feedback__vector_common_type_4_0__vct_4_f_1;
#line 160 "mdprof_report_feedback.m"
};

static /* final */ const struct mdprof_report_feedback__vector_common_type_4_0_s mdprof_report_feedback_vector_common_4[3];



static /* final */ const MR_Box mdprof_report_feedback_scalar_common_1[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mdprof_report_feedback_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdprof_report_feedback_scalar_common_1[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdprof_report_feedback_scalar_common_1[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdprof_report_feedback_scalar_common_1[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdprof_report_feedback_scalar_common_2[0])),
    ((MR_Box) (&mdprof_report_feedback_scalar_common_2[1])),
    ((MR_Box) (&mdprof_report_feedback_scalar_common_2[2]))
  },
};

static /* final */ const MR_Box mdprof_report_feedback_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
};


static /* final */ const struct mdprof_report_feedback__vector_common_type_4_0_s mdprof_report_feedback_vector_common_4[3] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_report_feedback_scalar_common_3[1])
  },
  /* row 1 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_report_feedback_scalar_common_3[2])
  },
  /* row 2 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_report_feedback_scalar_common_3[1])
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 371 "mdprof_report_feedback.c"
static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_0 = {
  (MR_String) "help",
  (MR_Integer) 0
};

#line 377 "mdprof_report_feedback.c"
static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_1 = {
  (MR_String) "version",
  (MR_Integer) 1
};

#line 383 "mdprof_report_feedback.c"
static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_2 = {
  (MR_String) "verbosity",
  (MR_Integer) 2
};

#line 389 "mdprof_report_feedback.c"
static const MR_EnumFunctorDescPtr mdprof_report_feedback__mdprof_report_feedback__enum_value_ordered_option_0[3] = {
  &mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_0,
  &mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_1,
  &mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_2
};

#line 396 "mdprof_report_feedback.c"
static const MR_EnumFunctorDescPtr mdprof_report_feedback__mdprof_report_feedback__enum_name_ordered_option_0[3] = {
  &mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_0,
  &mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_2,
  &mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_1
};

#line 403 "mdprof_report_feedback.c"
static const MR_Integer mdprof_report_feedback__mdprof_report_feedback__functor_number_map_option_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 410 "mdprof_report_feedback.c"
const MR_TypeCtorInfo_Struct mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_report_feedback____Unify____option_0_0_10001)),
  ((MR_Box) (mdprof_report_feedback____Compare____option_0_0_10001)),
  (MR_String) "mdprof_report_feedback",
  (MR_String) "option",
  {     mdprof_report_feedback__mdprof_report_feedback__enum_name_ordered_option_0 },
  {     mdprof_report_feedback__mdprof_report_feedback__enum_value_ordered_option_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdprof_report_feedback__mdprof_report_feedback__functor_number_map_option_0
};

#line 427 "mdprof_report_feedback.c"
static MR_bool MR_CALL 
mdprof_report_feedback____Unify____option_0_0_10001(
#line 430 "mdprof_report_feedback.c"
  MR_Box mdprof_report_feedback__wrapper_arg_1,
#line 432 "mdprof_report_feedback.c"
  MR_Box mdprof_report_feedback__wrapper_arg_2)
#line 434 "mdprof_report_feedback.c"
{
#line 436 "mdprof_report_feedback.c"
  {
#line 438 "mdprof_report_feedback.c"
    MR_bool mdprof_report_feedback__succeeded;

#line 441 "mdprof_report_feedback.c"
    {
#line 443 "mdprof_report_feedback.c"
      mdprof_report_feedback__succeeded = mdprof_report_feedback____Unify____option_0_0(((MR_Word) mdprof_report_feedback__wrapper_arg_1), ((MR_Word) mdprof_report_feedback__wrapper_arg_2));
    }
#line 446 "mdprof_report_feedback.c"
    return mdprof_report_feedback__succeeded;
#line 448 "mdprof_report_feedback.c"
  }
#line 450 "mdprof_report_feedback.c"
}

#line 453 "mdprof_report_feedback.c"
static void MR_CALL 
mdprof_report_feedback____Compare____option_0_0_10001(
#line 456 "mdprof_report_feedback.c"
  MR_Box * mdprof_report_feedback__wrapper_arg_1,
#line 458 "mdprof_report_feedback.c"
  MR_Box mdprof_report_feedback__wrapper_arg_2,
#line 460 "mdprof_report_feedback.c"
  MR_Box mdprof_report_feedback__wrapper_arg_3)
#line 462 "mdprof_report_feedback.c"
{
#line 464 "mdprof_report_feedback.c"
  {
#line 466 "mdprof_report_feedback.c"
    MR_Word mdprof_report_feedback__conv0_HeadVar__1_1;

#line 469 "mdprof_report_feedback.c"
    {
#line 471 "mdprof_report_feedback.c"
      mdprof_report_feedback____Compare____option_0_0(&mdprof_report_feedback__conv0_HeadVar__1_1, ((MR_Word) mdprof_report_feedback__wrapper_arg_2), ((MR_Word) mdprof_report_feedback__wrapper_arg_3));
    }
#line 474 "mdprof_report_feedback.c"
    *mdprof_report_feedback__wrapper_arg_1 = ((MR_Box) (mdprof_report_feedback__conv0_HeadVar__1_1));
#line 476 "mdprof_report_feedback.c"
  }
#line 478 "mdprof_report_feedback.c"
}

#line 137 "mdprof_report_feedback.m"
static void MR_CALL 
mdprof_report_feedback____Compare____option_0_0(
#line 137 "mdprof_report_feedback.m"
  MR_Word * mdprof_report_feedback__HeadVar__1_1,
#line 137 "mdprof_report_feedback.m"
  MR_Word mdprof_report_feedback__HeadVar__2_2,
#line 137 "mdprof_report_feedback.m"
  MR_Word mdprof_report_feedback__HeadVar__3_3)
#line 137 "mdprof_report_feedback.m"
{
#line 137 "mdprof_report_feedback.m"
  {
#line 137 "mdprof_report_feedback.m"
    MR_bool mdprof_report_feedback__succeeded;
#line 137 "mdprof_report_feedback.m"
    MR_Integer mdprof_report_feedback__Cast_HeadVar1_4 = (MR_Integer) mdprof_report_feedback__HeadVar__2_2;
#line 137 "mdprof_report_feedback.m"
    MR_Integer mdprof_report_feedback__Cast_HeadVar2_5 = (MR_Integer) mdprof_report_feedback__HeadVar__3_3;

#line 137 "mdprof_report_feedback.m"
    {
#line 137 "mdprof_report_feedback.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_report_feedback__HeadVar__1_1, mdprof_report_feedback__Cast_HeadVar1_4, mdprof_report_feedback__Cast_HeadVar2_5);
#line 137 "mdprof_report_feedback.m"
      return;
    }
#line 137 "mdprof_report_feedback.m"
  }
#line 137 "mdprof_report_feedback.m"
}

#line 137 "mdprof_report_feedback.m"
static MR_bool MR_CALL 
mdprof_report_feedback____Unify____option_0_0(
#line 137 "mdprof_report_feedback.m"
  MR_Word mdprof_report_feedback__HeadVar__2_1,
#line 137 "mdprof_report_feedback.m"
  MR_Word mdprof_report_feedback__HeadVar__2_2)
#line 137 "mdprof_report_feedback.m"
{
#line 522 "mdprof_report_feedback.c"
  {
#line 524 "mdprof_report_feedback.c"
    MR_bool mdprof_report_feedback__succeeded = (mdprof_report_feedback__HeadVar__2_1 == mdprof_report_feedback__HeadVar__2_2);

#line 527 "mdprof_report_feedback.c"
    return mdprof_report_feedback__succeeded;
#line 529 "mdprof_report_feedback.c"
  }
#line 137 "mdprof_report_feedback.m"
}

#line 164 "mdprof_report_feedback.m"
static void MR_CALL 
mdprof_report_feedback__post_process_options_5_p_0(
#line 164 "mdprof_report_feedback.m"
  MR_String mdprof_report_feedback__ProgName_6,
#line 164 "mdprof_report_feedback.m"
  MR_Word mdprof_report_feedback__STATE_VARIABLE_Options_0_11,
#line 164 "mdprof_report_feedback.m"
  MR_Word * mdprof_report_feedback__STATE_VARIABLE_Options_12)
#line 164 "mdprof_report_feedback.m"
{
#line 168 "mdprof_report_feedback.m"
  {
#line 168 "mdprof_report_feedback.m"
    MR_bool mdprof_report_feedback__succeeded;
#line 168 "mdprof_report_feedback.m"
    MR_Integer mdprof_report_feedback__VerbosityLevel_9;
#line 168 "mdprof_report_feedback.m"
    MR_Word mdprof_report_feedback__Stderr_10;

#line 169 "mdprof_report_feedback.m"
    {
#line 169 "mdprof_report_feedback.m"
      mercury__getopt__lookup_int_option_3_p_0((MR_Word) &mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0, mdprof_report_feedback__STATE_VARIABLE_Options_0_11, ((MR_Box) ((MR_Integer) 2)), &mdprof_report_feedback__VerbosityLevel_9);
    }
#line 170 "mdprof_report_feedback.m"
    {
#line 170 "mdprof_report_feedback.m"
      mercury__io__stderr_stream_3_p_0(&mdprof_report_feedback__Stderr_10);
    }
#line 171 "mdprof_report_feedback.m"
    mdprof_report_feedback__succeeded = (mdprof_report_feedback__VerbosityLevel_9 < (MR_Integer) 0);
#line 176 "mdprof_report_feedback.m"
    if (mdprof_report_feedback__succeeded)
#line 174 "mdprof_report_feedback.m"
      {
#line 174 "mdprof_report_feedback.m"
        MR_String mdprof_report_feedback__V_39_39;

#line 174 "mdprof_report_feedback.m"
        {
#line 174 "mdprof_report_feedback.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_report_feedback_scalar_common_3[0], mdprof_report_feedback__ProgName_6, &mdprof_report_feedback__V_39_39);
        }
#line 174 "mdprof_report_feedback.m"
        {
#line 174 "mdprof_report_feedback.m"
          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_10, mdprof_report_feedback__V_39_39);
        }
#line 172 "mdprof_report_feedback.m"
        {
#line 172 "mdprof_report_feedback.m"
          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_10, (MR_String) ": warning: verbosity level should not be negative.\n");
        }
#line 191 "mdprof_report_feedback.m"
        {
#line 191 "mdprof_report_feedback.m"
          mercury__map__set_4_p_0((MR_Word) &mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (MR_mkword(MR_mktag(2), &mdprof_report_feedback_scalar_common_3[3]))), mdprof_report_feedback__STATE_VARIABLE_Options_0_11, mdprof_report_feedback__STATE_VARIABLE_Options_12);
#line 191 "mdprof_report_feedback.m"
          return;
        }
#line 174 "mdprof_report_feedback.m"
      }
#line 176 "mdprof_report_feedback.m"
    else
#line 181 "mdprof_report_feedback.m"
      {
#line 176 "mdprof_report_feedback.m"
        mdprof_report_feedback__succeeded = (mdprof_report_feedback__VerbosityLevel_9 > (MR_Integer) 4);
#line 181 "mdprof_report_feedback.m"
        if (mdprof_report_feedback__succeeded)
#line 179 "mdprof_report_feedback.m"
          {
#line 179 "mdprof_report_feedback.m"
            MR_String mdprof_report_feedback__V_48_48;

#line 179 "mdprof_report_feedback.m"
            {
#line 179 "mdprof_report_feedback.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_report_feedback_scalar_common_3[0], mdprof_report_feedback__ProgName_6, &mdprof_report_feedback__V_48_48);
            }
#line 179 "mdprof_report_feedback.m"
            {
#line 179 "mdprof_report_feedback.m"
              mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_10, mdprof_report_feedback__V_48_48);
            }
#line 177 "mdprof_report_feedback.m"
            {
#line 177 "mdprof_report_feedback.m"
              mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_10, (MR_String) ": warning: verbosity level should not exceed 4.\n");
            }
#line 191 "mdprof_report_feedback.m"
            {
#line 191 "mdprof_report_feedback.m"
              mercury__map__set_4_p_0((MR_Word) &mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (MR_mkword(MR_mktag(2), &mdprof_report_feedback_scalar_common_3[4]))), mdprof_report_feedback__STATE_VARIABLE_Options_0_11, mdprof_report_feedback__STATE_VARIABLE_Options_12);
#line 191 "mdprof_report_feedback.m"
              return;
            }
#line 179 "mdprof_report_feedback.m"
          }
#line 181 "mdprof_report_feedback.m"
        else
#line 182 "mdprof_report_feedback.m"
          *mdprof_report_feedback__STATE_VARIABLE_Options_12 = mdprof_report_feedback__STATE_VARIABLE_Options_0_11;
#line 181 "mdprof_report_feedback.m"
      }
#line 168 "mdprof_report_feedback.m"
  }
#line 164 "mdprof_report_feedback.m"
}

#line 158 "mdprof_report_feedback.m"
static void MR_CALL 
mdprof_report_feedback__defaults_2_p_0(
#line 158 "mdprof_report_feedback.m"
  MR_Word * mdprof_report_feedback__HeadVar__1_1,
#line 158 "mdprof_report_feedback.m"
  MR_Word * mdprof_report_feedback__HeadVar__2_2,
#line 158 "mdprof_report_feedback.m"
  MR_Cont mdprof_report_feedback__cont,
#line 158 "mdprof_report_feedback.m"
  void * mdprof_report_feedback__cont_env_ptr)
#line 158 "mdprof_report_feedback.m"
{
#line 160 "mdprof_report_feedback.m"
  {
#line 160 "mdprof_report_feedback.m"
    MR_bool mdprof_report_feedback__succeeded;

#line 160 "mdprof_report_feedback.m"
    {
#line 160 "mdprof_report_feedback.m"
      MR_Integer mdprof_report_feedback__slot_0 = (MR_Integer) 0;

#line 160 "mdprof_report_feedback.m"
      do
#line 160 "mdprof_report_feedback.m"
        {
#line 160 "mdprof_report_feedback.m"
          *mdprof_report_feedback__HeadVar__1_1 = ((&mdprof_report_feedback_vector_common_4[0 + mdprof_report_feedback__slot_0]))->mdprof_report_feedback__vector_common_type_4_0__vct_4_f_0;
#line 160 "mdprof_report_feedback.m"
          *mdprof_report_feedback__HeadVar__2_2 = ((&mdprof_report_feedback_vector_common_4[0 + mdprof_report_feedback__slot_0]))->mdprof_report_feedback__vector_common_type_4_0__vct_4_f_1;
#line 160 "mdprof_report_feedback.m"
          {
#line 160 "mdprof_report_feedback.m"
            mdprof_report_feedback__cont(mdprof_report_feedback__cont_env_ptr);
          }
#line 160 "mdprof_report_feedback.m"
          mdprof_report_feedback__slot_0 = (mdprof_report_feedback__slot_0 + (MR_Integer) 1);
#line 160 "mdprof_report_feedback.m"
        }
#line 160 "mdprof_report_feedback.m"
      while ((mdprof_report_feedback__slot_0 < (MR_Integer) 3));
#line 160 "mdprof_report_feedback.m"
    }
#line 160 "mdprof_report_feedback.m"
  }
#line 158 "mdprof_report_feedback.m"
}

#line 152 "mdprof_report_feedback.m"
static MR_bool MR_CALL 
mdprof_report_feedback__long_2_p_0(
#line 152 "mdprof_report_feedback.m"
  MR_String mdprof_report_feedback__HeadVar__1_1,
#line 152 "mdprof_report_feedback.m"
  MR_Word * mdprof_report_feedback__HeadVar__2_2)
#line 152 "mdprof_report_feedback.m"
{
#line 154 "mdprof_report_feedback.m"
  {
#line 154 "mdprof_report_feedback.m"
    MR_bool mdprof_report_feedback__succeeded;

#line 154 "mdprof_report_feedback.m"
    if ((strcmp(mdprof_report_feedback__HeadVar__1_1, (MR_String) "help") == 0))
#line 154 "mdprof_report_feedback.m"
      {
#line 154 "mdprof_report_feedback.m"
        *mdprof_report_feedback__HeadVar__2_2 = (MR_Integer) 0;
#line 154 "mdprof_report_feedback.m"
        mdprof_report_feedback__succeeded = MR_TRUE;
#line 154 "mdprof_report_feedback.m"
      }
#line 154 "mdprof_report_feedback.m"
    else
#line 154 "mdprof_report_feedback.m"
    if ((strcmp(mdprof_report_feedback__HeadVar__1_1, (MR_String) "version") == 0))
#line 156 "mdprof_report_feedback.m"
      {
#line 156 "mdprof_report_feedback.m"
        *mdprof_report_feedback__HeadVar__2_2 = (MR_Integer) 1;
#line 156 "mdprof_report_feedback.m"
        mdprof_report_feedback__succeeded = MR_TRUE;
#line 156 "mdprof_report_feedback.m"
      }
#line 154 "mdprof_report_feedback.m"
    else
#line 154 "mdprof_report_feedback.m"
    if ((strcmp(mdprof_report_feedback__HeadVar__1_1, (MR_String) "verbosity") == 0))
#line 155 "mdprof_report_feedback.m"
      {
#line 155 "mdprof_report_feedback.m"
        *mdprof_report_feedback__HeadVar__2_2 = (MR_Integer) 2;
#line 155 "mdprof_report_feedback.m"
        mdprof_report_feedback__succeeded = MR_TRUE;
#line 155 "mdprof_report_feedback.m"
      }
#line 154 "mdprof_report_feedback.m"
    else
#line 154 "mdprof_report_feedback.m"
      mdprof_report_feedback__succeeded = MR_FALSE;
#line 154 "mdprof_report_feedback.m"
    return mdprof_report_feedback__succeeded;
#line 154 "mdprof_report_feedback.m"
  }
#line 152 "mdprof_report_feedback.m"
}

#line 146 "mdprof_report_feedback.m"
static MR_bool MR_CALL 
mdprof_report_feedback__short_2_p_0(
#line 146 "mdprof_report_feedback.m"
  MR_Char mdprof_report_feedback__HeadVar__1_1,
#line 146 "mdprof_report_feedback.m"
  MR_Word * mdprof_report_feedback__HeadVar__2_2)
#line 146 "mdprof_report_feedback.m"
{
#line 148 "mdprof_report_feedback.m"
  {
#line 148 "mdprof_report_feedback.m"
    MR_bool mdprof_report_feedback__succeeded;

#line 148 "mdprof_report_feedback.m"
#line 148 "mdprof_report_feedback.m"
    switch (mdprof_report_feedback__HeadVar__1_1) {
#line 148 "mdprof_report_feedback.m"
      default:
#line 148 "mdprof_report_feedback.m"
        mdprof_report_feedback__succeeded = MR_FALSE;
#line 148 "mdprof_report_feedback.m"
        break;
#line 148 "mdprof_report_feedback.m"
      case (MR_Char) 86:
#line 150 "mdprof_report_feedback.m"
        {
#line 150 "mdprof_report_feedback.m"
          *mdprof_report_feedback__HeadVar__2_2 = (MR_Integer) 1;
#line 150 "mdprof_report_feedback.m"
          mdprof_report_feedback__succeeded = MR_TRUE;
#line 150 "mdprof_report_feedback.m"
        }
#line 148 "mdprof_report_feedback.m"
        break;
#line 148 "mdprof_report_feedback.m"
      case (MR_Char) 104:
#line 148 "mdprof_report_feedback.m"
        {
#line 148 "mdprof_report_feedback.m"
          *mdprof_report_feedback__HeadVar__2_2 = (MR_Integer) 0;
#line 148 "mdprof_report_feedback.m"
          mdprof_report_feedback__succeeded = MR_TRUE;
#line 148 "mdprof_report_feedback.m"
        }
#line 148 "mdprof_report_feedback.m"
        break;
#line 148 "mdprof_report_feedback.m"
      case (MR_Char) 118:
#line 149 "mdprof_report_feedback.m"
        {
#line 149 "mdprof_report_feedback.m"
          *mdprof_report_feedback__HeadVar__2_2 = (MR_Integer) 2;
#line 149 "mdprof_report_feedback.m"
          mdprof_report_feedback__succeeded = MR_TRUE;
#line 149 "mdprof_report_feedback.m"
        }
#line 148 "mdprof_report_feedback.m"
        break;
#line 148 "mdprof_report_feedback.m"
    }
#line 148 "mdprof_report_feedback.m"
    return mdprof_report_feedback__succeeded;
#line 148 "mdprof_report_feedback.m"
  }
#line 146 "mdprof_report_feedback.m"
}

#line 120 "mdprof_report_feedback.m"
static void MR_CALL 
mdprof_report_feedback__write_version_message_3_p_0(
#line 120 "mdprof_report_feedback.m"
  MR_String mdprof_report_feedback__ProgName_4)
#line 120 "mdprof_report_feedback.m"
{
#line 122 "mdprof_report_feedback.m"
  {
#line 122 "mdprof_report_feedback.m"
    MR_bool mdprof_report_feedback__succeeded;
#line 122 "mdprof_report_feedback.m"
    MR_String mdprof_report_feedback__Version_6;
#line 122 "mdprof_report_feedback.m"
    MR_String mdprof_report_feedback__Fullarch_7;
#line 122 "mdprof_report_feedback.m"
    MR_String mdprof_report_feedback__V_23_23;
#line 122 "mdprof_report_feedback.m"
    MR_Word mdprof_report_feedback__V_29_29;
#line 122 "mdprof_report_feedback.m"
    MR_String mdprof_report_feedback__V_34_34;
#line 122 "mdprof_report_feedback.m"
    MR_String mdprof_report_feedback__V_44_44;

#line 123 "mdprof_report_feedback.m"
    {
#line 123 "mdprof_report_feedback.m"
      mercury__library__version_2_p_0(&mdprof_report_feedback__Version_6, &mdprof_report_feedback__Fullarch_7);
    }
#line 850 "mdprof_report_feedback.c"
    mdprof_report_feedback__V_29_29 = (MR_Word) &mdprof_report_feedback_scalar_common_3[0];
#line 124 "mdprof_report_feedback.m"
    {
#line 124 "mdprof_report_feedback.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_report_feedback__V_29_29, mdprof_report_feedback__ProgName_4, &mdprof_report_feedback__V_23_23);
    }
#line 124 "mdprof_report_feedback.m"
    {
#line 124 "mdprof_report_feedback.m"
      mercury__io__write_string_3_p_0(mdprof_report_feedback__V_23_23);
    }
#line 124 "mdprof_report_feedback.m"
    {
#line 124 "mdprof_report_feedback.m"
      mercury__io__write_string_3_p_0((MR_String) ": Mercury deep profiler\n");
    }
#line 125 "mdprof_report_feedback.m"
    {
#line 125 "mdprof_report_feedback.m"
      mercury__io__write_string_3_p_0((MR_String) "version: ");
    }
#line 125 "mdprof_report_feedback.m"
    {
#line 125 "mdprof_report_feedback.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_report_feedback__V_29_29, mdprof_report_feedback__Version_6, &mdprof_report_feedback__V_34_34);
    }
#line 125 "mdprof_report_feedback.m"
    {
#line 125 "mdprof_report_feedback.m"
      mercury__io__write_string_3_p_0(mdprof_report_feedback__V_34_34);
    }
#line 125 "mdprof_report_feedback.m"
    {
#line 125 "mdprof_report_feedback.m"
      mercury__io__write_string_3_p_0((MR_String) ", on ");
    }
#line 125 "mdprof_report_feedback.m"
    {
#line 125 "mdprof_report_feedback.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_report_feedback__V_29_29, mdprof_report_feedback__Fullarch_7, &mdprof_report_feedback__V_44_44);
    }
#line 125 "mdprof_report_feedback.m"
    {
#line 125 "mdprof_report_feedback.m"
      mercury__io__write_string_3_p_0(mdprof_report_feedback__V_44_44);
    }
#line 125 "mdprof_report_feedback.m"
    {
#line 125 "mdprof_report_feedback.m"
      mercury__io__write_string_3_p_0((MR_String) ".\n");
#line 125 "mdprof_report_feedback.m"
      return;
    }
#line 122 "mdprof_report_feedback.m"
  }
#line 120 "mdprof_report_feedback.m"
}

#line 115 "mdprof_report_feedback.m"
static void MR_CALL 
mdprof_report_feedback__write_help_message_3_p_0(
#line 115 "mdprof_report_feedback.m"
  MR_String mdprof_report_feedback__ProgName_4)
#line 115 "mdprof_report_feedback.m"
{
#line 117 "mdprof_report_feedback.m"
  {
#line 117 "mdprof_report_feedback.m"
    MR_bool mdprof_report_feedback__succeeded;
#line 117 "mdprof_report_feedback.m"
    MR_String mdprof_report_feedback__V_8_8;
#line 117 "mdprof_report_feedback.m"
    MR_String mdprof_report_feedback__V_17_17;
#line 117 "mdprof_report_feedback.m"
    MR_String mdprof_report_feedback__V_24_24;

#line 113 "mdprof_report_feedback.m"
    {
#line 113 "mdprof_report_feedback.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_report_feedback_scalar_common_3[0], mdprof_report_feedback__ProgName_4, &mdprof_report_feedback__V_17_17);
    }
#line 113 "mdprof_report_feedback.m"
    {
#line 113 "mdprof_report_feedback.m"
      mdprof_report_feedback__V_24_24 = mercury__string__f_43_43_2_f_0(mdprof_report_feedback__V_17_17, (MR_String) " [options] <feedbackfile>\n    This command outputs a report that shows the contents of the named\n    feedback file in a human-readable form.\n\n    You may specif" "y the following general options:\n\n    -h --help       Generate this help message.\n    -V --version    Report the program\'s version number.\n    -v --verbosity  <" "0-4>\n                    Generate messages. The higher the argument, the more\n                    verbose the program becomes. 2 is recommended, and\n           " "         is the default.\n");
    }
#line 113 "mdprof_report_feedback.m"
    {
#line 113 "mdprof_report_feedback.m"
      mdprof_report_feedback__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "Usage: ", mdprof_report_feedback__V_24_24);
    }
#line 118 "mdprof_report_feedback.m"
    {
#line 118 "mdprof_report_feedback.m"
      mercury__io__write_string_3_p_0(mdprof_report_feedback__V_8_8);
#line 118 "mdprof_report_feedback.m"
      return;
    }
#line 117 "mdprof_report_feedback.m"
  }
#line 115 "mdprof_report_feedback.m"
}

#line 52 "mdprof_report_feedback.m"
static void MR_CALL 
main_2_p_0_3(
#line 52 "mdprof_report_feedback.m"
  void * mdprof_report_feedback__env_ptr_arg)
#line 52 "mdprof_report_feedback.m"
{
#line 52 "mdprof_report_feedback.m"
  {
#line 52 "mdprof_report_feedback.m"
    struct mdprof_report_feedback__main_2_p_0_4_env_0_s * mdprof_report_feedback__env_ptr = (struct mdprof_report_feedback__main_2_p_0_4_env_0_s *) mdprof_report_feedback__env_ptr_arg;

#line 52 "mdprof_report_feedback.m"
    *((mdprof_report_feedback__env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdprof_report_feedback__env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
#line 52 "mdprof_report_feedback.m"
    *((mdprof_report_feedback__env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdprof_report_feedback__env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
#line 52 "mdprof_report_feedback.m"
    {
#line 52 "mdprof_report_feedback.m"
      ((mdprof_report_feedback__env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__cont)((mdprof_report_feedback__env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__cont_env_ptr);
#line 52 "mdprof_report_feedback.m"
      return;
    }
#line 52 "mdprof_report_feedback.m"
  }
#line 52 "mdprof_report_feedback.m"
}

#line 52 "mdprof_report_feedback.m"
static void MR_CALL 
main_2_p_0_4(
#line 52 "mdprof_report_feedback.m"
  MR_Box mdprof_report_feedback__closure_arg,
#line 52 "mdprof_report_feedback.m"
  MR_Box * mdprof_report_feedback__wrapper_arg_1,
#line 52 "mdprof_report_feedback.m"
  MR_Box * mdprof_report_feedback__wrapper_arg_2,
#line 52 "mdprof_report_feedback.m"
  MR_Cont mdprof_report_feedback__cont,
#line 52 "mdprof_report_feedback.m"
  void * mdprof_report_feedback__cont_env_ptr)
#line 52 "mdprof_report_feedback.m"
{
#line 52 "mdprof_report_feedback.m"
  {
#line 52 "mdprof_report_feedback.m"
    struct mdprof_report_feedback__main_2_p_0_4_env_0_s mdprof_report_feedback__env;

#line 52 "mdprof_report_feedback.m"
    (mdprof_report_feedback__env).mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_1 = mdprof_report_feedback__wrapper_arg_1;
#line 52 "mdprof_report_feedback.m"
    (mdprof_report_feedback__env).mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_2 = mdprof_report_feedback__wrapper_arg_2;
#line 52 "mdprof_report_feedback.m"
    (mdprof_report_feedback__env).mdprof_report_feedback__main_2_p_0_4_env_0__cont = mdprof_report_feedback__cont;
#line 52 "mdprof_report_feedback.m"
    (mdprof_report_feedback__env).mdprof_report_feedback__main_2_p_0_4_env_0__cont_env_ptr = mdprof_report_feedback__cont_env_ptr;
#line 52 "mdprof_report_feedback.m"
    {
#line 52 "mdprof_report_feedback.m"
      MR_Box mdprof_report_feedback__closure = mdprof_report_feedback__closure_arg;

#line 52 "mdprof_report_feedback.m"
      {
#line 52 "mdprof_report_feedback.m"
        mdprof_report_feedback__defaults_2_p_0(&(mdprof_report_feedback__env).mdprof_report_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mdprof_report_feedback__env).mdprof_report_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mdprof_report_feedback__env);
      }
#line 52 "mdprof_report_feedback.m"
    }
#line 52 "mdprof_report_feedback.m"
  }
#line 52 "mdprof_report_feedback.m"
}

#line 52 "mdprof_report_feedback.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 52 "mdprof_report_feedback.m"
  MR_Box mdprof_report_feedback__closure_arg,
#line 52 "mdprof_report_feedback.m"
  MR_Box mdprof_report_feedback__wrapper_arg_1,
#line 52 "mdprof_report_feedback.m"
  MR_Box * mdprof_report_feedback__wrapper_arg_2)
#line 52 "mdprof_report_feedback.m"
{
#line 52 "mdprof_report_feedback.m"
  {
#line 52 "mdprof_report_feedback.m"
    MR_bool mdprof_report_feedback__succeeded;
#line 52 "mdprof_report_feedback.m"
    MR_Box mdprof_report_feedback__closure = mdprof_report_feedback__closure_arg;
#line 52 "mdprof_report_feedback.m"
    MR_Word mdprof_report_feedback__conv1_HeadVar__2_2;

#line 52 "mdprof_report_feedback.m"
    {
#line 52 "mdprof_report_feedback.m"
      mdprof_report_feedback__succeeded = mdprof_report_feedback__long_2_p_0(((MR_String) mdprof_report_feedback__wrapper_arg_1), &mdprof_report_feedback__conv1_HeadVar__2_2);
    }
#line 52 "mdprof_report_feedback.m"
    if (mdprof_report_feedback__succeeded)
#line 52 "mdprof_report_feedback.m"
      {
#line 52 "mdprof_report_feedback.m"
        *mdprof_report_feedback__wrapper_arg_2 = ((MR_Box) (mdprof_report_feedback__conv1_HeadVar__2_2));
#line 52 "mdprof_report_feedback.m"
        mdprof_report_feedback__succeeded = MR_TRUE;
#line 52 "mdprof_report_feedback.m"
      }
#line 52 "mdprof_report_feedback.m"
    return mdprof_report_feedback__succeeded;
#line 52 "mdprof_report_feedback.m"
  }
#line 52 "mdprof_report_feedback.m"
}

#line 52 "mdprof_report_feedback.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 52 "mdprof_report_feedback.m"
  MR_Box mdprof_report_feedback__closure_arg,
#line 52 "mdprof_report_feedback.m"
  MR_Box mdprof_report_feedback__wrapper_arg_1,
#line 52 "mdprof_report_feedback.m"
  MR_Box * mdprof_report_feedback__wrapper_arg_2)
#line 52 "mdprof_report_feedback.m"
{
#line 52 "mdprof_report_feedback.m"
  {
#line 52 "mdprof_report_feedback.m"
    MR_bool mdprof_report_feedback__succeeded;
#line 52 "mdprof_report_feedback.m"
    MR_Box mdprof_report_feedback__closure = mdprof_report_feedback__closure_arg;
#line 52 "mdprof_report_feedback.m"
    MR_Word mdprof_report_feedback__conv0_HeadVar__2_2;

#line 52 "mdprof_report_feedback.m"
    {
#line 52 "mdprof_report_feedback.m"
      mdprof_report_feedback__succeeded = mdprof_report_feedback__short_2_p_0(((MR_Char) (MR_Word) mdprof_report_feedback__wrapper_arg_1), &mdprof_report_feedback__conv0_HeadVar__2_2);
    }
#line 52 "mdprof_report_feedback.m"
    if (mdprof_report_feedback__succeeded)
#line 52 "mdprof_report_feedback.m"
      {
#line 52 "mdprof_report_feedback.m"
        *mdprof_report_feedback__wrapper_arg_2 = ((MR_Box) (mdprof_report_feedback__conv0_HeadVar__2_2));
#line 52 "mdprof_report_feedback.m"
        mdprof_report_feedback__succeeded = MR_TRUE;
#line 52 "mdprof_report_feedback.m"
      }
#line 52 "mdprof_report_feedback.m"
    return mdprof_report_feedback__succeeded;
#line 52 "mdprof_report_feedback.m"
  }
#line 52 "mdprof_report_feedback.m"
}

#line 24 "mdprof_report_feedback.m"
void MR_CALL 
main_2_p_0(void)
#line 24 "mdprof_report_feedback.m"
{
#line 49 "mdprof_report_feedback.m"
  {
#line 49 "mdprof_report_feedback.m"
    MR_bool mdprof_report_feedback__succeeded;
#line 49 "mdprof_report_feedback.m"
    MR_Word mdprof_report_feedback__TypeCtorInfo_70_70;
#line 49 "mdprof_report_feedback.m"
    MR_String mdprof_report_feedback__ProgName_4;
#line 49 "mdprof_report_feedback.m"
    MR_Word mdprof_report_feedback__Args0_5;
#line 49 "mdprof_report_feedback.m"
    MR_Word mdprof_report_feedback__Args_6;
#line 49 "mdprof_report_feedback.m"
    MR_Word mdprof_report_feedback__MaybeOptions_7;
#line 49 "mdprof_report_feedback.m"
    MR_Word mdprof_report_feedback__Stderr_8;

#line 50 "mdprof_report_feedback.m"
    {
#line 50 "mdprof_report_feedback.m"
      mercury__io__progname_base_4_p_0((MR_String) "mdprof_report_feedback", &mdprof_report_feedback__ProgName_4);
    }
#line 51 "mdprof_report_feedback.m"
    {
#line 51 "mdprof_report_feedback.m"
      mercury__io__command_line_arguments_3_p_0(&mdprof_report_feedback__Args0_5);
    }
#line 1143 "mdprof_report_feedback.c"
    mdprof_report_feedback__TypeCtorInfo_70_70 = (MR_Word) &mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0;
#line 52 "mdprof_report_feedback.m"
    {
#line 52 "mdprof_report_feedback.m"
      mercury__getopt__process_options_4_p_0(mdprof_report_feedback__TypeCtorInfo_70_70, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_report_feedback_scalar_common_2[3]), mdprof_report_feedback__Args0_5, &mdprof_report_feedback__Args_6, &mdprof_report_feedback__MaybeOptions_7);
    }
#line 54 "mdprof_report_feedback.m"
    {
#line 54 "mdprof_report_feedback.m"
      mercury__io__stderr_stream_3_p_0(&mdprof_report_feedback__Stderr_8);
    }
#line 88 "mdprof_report_feedback.m"
    if (((MR_tag((MR_Word) mdprof_report_feedback__MaybeOptions_7)) == (MR_mktag((MR_Integer) 1))))
#line 89 "mdprof_report_feedback.m"
      {
#line 89 "mdprof_report_feedback.m"
        MR_String mdprof_report_feedback__Msg_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_report_feedback__MaybeOptions_7, (MR_Integer) 0)));
#line 89 "mdprof_report_feedback.m"
        MR_String mdprof_report_feedback__V_97_97;
#line 89 "mdprof_report_feedback.m"
        MR_Word mdprof_report_feedback__V_103_103 = (MR_Word) &mdprof_report_feedback_scalar_common_3[0];
#line 89 "mdprof_report_feedback.m"
        MR_String mdprof_report_feedback__V_107_107;

#line 91 "mdprof_report_feedback.m"
        {
#line 91 "mdprof_report_feedback.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_report_feedback__V_103_103, mdprof_report_feedback__ProgName_4, &mdprof_report_feedback__V_97_97);
        }
#line 91 "mdprof_report_feedback.m"
        {
#line 91 "mdprof_report_feedback.m"
          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, mdprof_report_feedback__V_97_97);
        }
#line 90 "mdprof_report_feedback.m"
        {
#line 90 "mdprof_report_feedback.m"
          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, (MR_String) ": error parsing options: ");
        }
#line 91 "mdprof_report_feedback.m"
        {
#line 91 "mdprof_report_feedback.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_report_feedback__V_103_103, mdprof_report_feedback__Msg_21, &mdprof_report_feedback__V_107_107);
        }
#line 91 "mdprof_report_feedback.m"
        {
#line 91 "mdprof_report_feedback.m"
          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, mdprof_report_feedback__V_107_107);
        }
#line 90 "mdprof_report_feedback.m"
        {
#line 90 "mdprof_report_feedback.m"
          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, (MR_String) "\n");
        }
#line 92 "mdprof_report_feedback.m"
        {
#line 92 "mdprof_report_feedback.m"
          mdprof_report_feedback__write_help_message_3_p_0(mdprof_report_feedback__ProgName_4);
        }
#line 93 "mdprof_report_feedback.m"
        {
#line 93 "mdprof_report_feedback.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 93 "mdprof_report_feedback.m"
          return;
        }
#line 89 "mdprof_report_feedback.m"
      }
#line 88 "mdprof_report_feedback.m"
    else
#line 56 "mdprof_report_feedback.m"
      {
#line 56 "mdprof_report_feedback.m"
        MR_Word mdprof_report_feedback__Options0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_report_feedback__MaybeOptions_7, (MR_Integer) 0)));
#line 56 "mdprof_report_feedback.m"
        MR_Word mdprof_report_feedback__Options_10;
#line 56 "mdprof_report_feedback.m"
        MR_Word mdprof_report_feedback__Help_11;
#line 56 "mdprof_report_feedback.m"
        MR_Word mdprof_report_feedback__Version_12;

#line 57 "mdprof_report_feedback.m"
        {
#line 57 "mdprof_report_feedback.m"
          mdprof_report_feedback__post_process_options_5_p_0(mdprof_report_feedback__ProgName_4, mdprof_report_feedback__Options0_9, &mdprof_report_feedback__Options_10);
        }
#line 58 "mdprof_report_feedback.m"
        {
#line 58 "mdprof_report_feedback.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_report_feedback__TypeCtorInfo_70_70, mdprof_report_feedback__Options_10, ((MR_Box) ((MR_Integer) 0)), &mdprof_report_feedback__Help_11);
        }
#line 59 "mdprof_report_feedback.m"
        {
#line 59 "mdprof_report_feedback.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_report_feedback__TypeCtorInfo_70_70, mdprof_report_feedback__Options_10, ((MR_Box) ((MR_Integer) 1)), &mdprof_report_feedback__Version_12);
        }
#line 60 "mdprof_report_feedback.m"
        mdprof_report_feedback__succeeded = (mdprof_report_feedback__Version_12 == (MR_Integer) 1);
#line 62 "mdprof_report_feedback.m"
        if (mdprof_report_feedback__succeeded)
#line 61 "mdprof_report_feedback.m"
          {
#line 61 "mdprof_report_feedback.m"
            mdprof_report_feedback__write_version_message_3_p_0(mdprof_report_feedback__ProgName_4);
#line 61 "mdprof_report_feedback.m"
            return;
          }
#line 62 "mdprof_report_feedback.m"
        else
#line 64 "mdprof_report_feedback.m"
          {
#line 62 "mdprof_report_feedback.m"
            mdprof_report_feedback__succeeded = (mdprof_report_feedback__Help_11 == (MR_Integer) 1);
#line 64 "mdprof_report_feedback.m"
            if (mdprof_report_feedback__succeeded)
#line 63 "mdprof_report_feedback.m"
              {
#line 63 "mdprof_report_feedback.m"
                mdprof_report_feedback__write_help_message_3_p_0(mdprof_report_feedback__ProgName_4);
#line 63 "mdprof_report_feedback.m"
                return;
              }
#line 64 "mdprof_report_feedback.m"
            else
#line 80 "mdprof_report_feedback.m"
            if ((mdprof_report_feedback__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 83 "mdprof_report_feedback.m"
              {
#line 84 "mdprof_report_feedback.m"
                {
#line 84 "mdprof_report_feedback.m"
                  mdprof_report_feedback__write_help_message_3_p_0(mdprof_report_feedback__ProgName_4);
                }
#line 85 "mdprof_report_feedback.m"
                {
#line 85 "mdprof_report_feedback.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 85 "mdprof_report_feedback.m"
                  return;
                }
#line 83 "mdprof_report_feedback.m"
              }
#line 80 "mdprof_report_feedback.m"
            else
#line 80 "mdprof_report_feedback.m"
              {
#line 80 "mdprof_report_feedback.m"
                MR_Word mdprof_report_feedback__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_report_feedback__Args_6, (MR_Integer) 1)));
#line 80 "mdprof_report_feedback.m"
                MR_String mdprof_report_feedback__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_report_feedback__Args_6, (MR_Integer) 0)));

#line 80 "mdprof_report_feedback.m"
                if ((mdprof_report_feedback__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 66 "mdprof_report_feedback.m"
                  {
#line 66 "mdprof_report_feedback.m"
                    MR_Word mdprof_report_feedback__FeedbackResult_14;

#line 67 "mdprof_report_feedback.m"
                    {
#line 67 "mdprof_report_feedback.m"
                      mdbcomp__feedback__read_feedback_file_5_p_0(mdprof_report_feedback__V_76_76, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdprof_report_feedback__FeedbackResult_14);
                    }
#line 72 "mdprof_report_feedback.m"
                    if (((MR_tag((MR_Word) mdprof_report_feedback__FeedbackResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 73 "mdprof_report_feedback.m"
                      {
#line 73 "mdprof_report_feedback.m"
                        MR_Word mdprof_report_feedback__FeedbackError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_report_feedback__FeedbackResult_14, (MR_Integer) 0)));
#line 73 "mdprof_report_feedback.m"
                        MR_String mdprof_report_feedback__Message_17;
#line 73 "mdprof_report_feedback.m"
                        MR_String mdprof_report_feedback__V_78_78;
#line 73 "mdprof_report_feedback.m"
                        MR_Word mdprof_report_feedback__V_84_84;
#line 73 "mdprof_report_feedback.m"
                        MR_String mdprof_report_feedback__V_88_88;

#line 74 "mdprof_report_feedback.m"
                        {
#line 74 "mdprof_report_feedback.m"
                          mdbcomp__feedback__feedback_read_error_message_string_3_p_0(mdprof_report_feedback__V_76_76, mdprof_report_feedback__FeedbackError_16, &mdprof_report_feedback__Message_17);
                        }
#line 1327 "mdprof_report_feedback.c"
                        mdprof_report_feedback__V_84_84 = (MR_Word) &mdprof_report_feedback_scalar_common_3[0];
#line 77 "mdprof_report_feedback.m"
                        {
#line 77 "mdprof_report_feedback.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_report_feedback__V_84_84, mdprof_report_feedback__ProgName_4, &mdprof_report_feedback__V_78_78);
                        }
#line 77 "mdprof_report_feedback.m"
                        {
#line 77 "mdprof_report_feedback.m"
                          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, mdprof_report_feedback__V_78_78);
                        }
#line 76 "mdprof_report_feedback.m"
                        {
#line 76 "mdprof_report_feedback.m"
                          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, (MR_String) ": ");
                        }
#line 77 "mdprof_report_feedback.m"
                        {
#line 77 "mdprof_report_feedback.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_report_feedback__V_84_84, mdprof_report_feedback__Message_17, &mdprof_report_feedback__V_88_88);
                        }
#line 77 "mdprof_report_feedback.m"
                        {
#line 77 "mdprof_report_feedback.m"
                          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, mdprof_report_feedback__V_88_88);
                        }
#line 76 "mdprof_report_feedback.m"
                        {
#line 76 "mdprof_report_feedback.m"
                          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, (MR_String) "\n");
                        }
#line 78 "mdprof_report_feedback.m"
                        {
#line 78 "mdprof_report_feedback.m"
                          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 78 "mdprof_report_feedback.m"
                          return;
                        }
#line 73 "mdprof_report_feedback.m"
                      }
#line 72 "mdprof_report_feedback.m"
                    else
#line 70 "mdprof_report_feedback.m"
                      {
#line 70 "mdprof_report_feedback.m"
                        MR_Word mdprof_report_feedback__Feedback_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_report_feedback__FeedbackResult_14, (MR_Integer) 0)));

#line 71 "mdprof_report_feedback.m"
                        {
#line 71 "mdprof_report_feedback.m"
                          mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_3_p_0(mdprof_report_feedback__Feedback_15);
#line 71 "mdprof_report_feedback.m"
                          return;
                        }
#line 70 "mdprof_report_feedback.m"
                      }
#line 66 "mdprof_report_feedback.m"
                  }
#line 80 "mdprof_report_feedback.m"
                else
#line 83 "mdprof_report_feedback.m"
                  {
#line 84 "mdprof_report_feedback.m"
                    {
#line 84 "mdprof_report_feedback.m"
                      mdprof_report_feedback__write_help_message_3_p_0(mdprof_report_feedback__ProgName_4);
                    }
#line 85 "mdprof_report_feedback.m"
                    {
#line 85 "mdprof_report_feedback.m"
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 85 "mdprof_report_feedback.m"
                      return;
                    }
#line 83 "mdprof_report_feedback.m"
                  }
#line 80 "mdprof_report_feedback.m"
              }
#line 64 "mdprof_report_feedback.m"
          }
#line 56 "mdprof_report_feedback.m"
      }
#line 49 "mdprof_report_feedback.m"
  }
#line 24 "mdprof_report_feedback.m"
}

void mercury__mdprof_report_feedback__init(void)
{
}

void mercury__mdprof_report_feedback__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0);
}

void mercury__mdprof_report_feedback__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdprof_report_feedback. */
