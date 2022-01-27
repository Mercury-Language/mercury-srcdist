/*
** Automatically generated from `mdprof_report_feedback.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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



struct mdprof_report_feedback__main_2_p_0_4_env_0_s {
  MR_Box * mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mdprof_report_feedback__main_2_p_0_4_env_0__cont;
  void * mdprof_report_feedback__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mdprof_report_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mdprof_report_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_2;

static const MR_EnumFunctorDescPtr mdprof_report_feedback__mdprof_report_feedback__enum_value_ordered_option_0[3];

static const MR_EnumFunctorDescPtr mdprof_report_feedback__mdprof_report_feedback__enum_name_ordered_option_0[3];

static const MR_Integer mdprof_report_feedback__mdprof_report_feedback__functor_number_map_option_0[3];

static MR_bool MR_CALL 
mdprof_report_feedback____Unify____option_0_0_10001(
  MR_Box mdprof_report_feedback__wrapper_arg_1,
  MR_Box mdprof_report_feedback__wrapper_arg_2);

static void MR_CALL 
mdprof_report_feedback____Compare____option_0_0_10001(
  MR_Box * mdprof_report_feedback__wrapper_arg_1,
  MR_Box mdprof_report_feedback__wrapper_arg_2,
  MR_Box mdprof_report_feedback__wrapper_arg_3);

static void MR_CALL 
mdprof_report_feedback____Compare____option_0_0(
  MR_Word * mdprof_report_feedback__HeadVar__1_1,
  MR_Word mdprof_report_feedback__HeadVar__2_2,
  MR_Word mdprof_report_feedback__HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_report_feedback____Unify____option_0_0(
  MR_Word mdprof_report_feedback__HeadVar__2_1,
  MR_Word mdprof_report_feedback__HeadVar__2_2);

static void MR_CALL 
mdprof_report_feedback__post_process_options_5_p_0(
  MR_String mdprof_report_feedback__ProgName_6,
  MR_Word mdprof_report_feedback__STATE_VARIABLE_Options_0_11,
  MR_Word * mdprof_report_feedback__STATE_VARIABLE_Options_12);

static void MR_CALL 
mdprof_report_feedback__defaults_2_p_0(
  MR_Word * mdprof_report_feedback__HeadVar__1_1,
  MR_Word * mdprof_report_feedback__HeadVar__2_2,
  MR_Cont mdprof_report_feedback__cont,
  void * mdprof_report_feedback__cont_env_ptr);

static MR_bool MR_CALL 
mdprof_report_feedback__long_2_p_0(
  MR_String mdprof_report_feedback__HeadVar__1_1,
  MR_Word * mdprof_report_feedback__HeadVar__2_2);

static MR_bool MR_CALL 
mdprof_report_feedback__short_2_p_0(
  MR_Char mdprof_report_feedback__HeadVar__1_1,
  MR_Word * mdprof_report_feedback__HeadVar__2_2);

static void MR_CALL 
mdprof_report_feedback__write_version_message_3_p_0(
  MR_String mdprof_report_feedback__ProgName_4);

static void MR_CALL 
mdprof_report_feedback__write_help_message_3_p_0(
  MR_String mdprof_report_feedback__ProgName_4);

static void MR_CALL 
main_2_p_0_3(
  void * mdprof_report_feedback__env_ptr_arg);

static void MR_CALL 
main_2_p_0_4(
  MR_Box mdprof_report_feedback__closure_arg,
  MR_Box * mdprof_report_feedback__wrapper_arg_1,
  MR_Box * mdprof_report_feedback__wrapper_arg_2,
  MR_Cont mdprof_report_feedback__cont,
  void * mdprof_report_feedback__cont_env_ptr);

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mdprof_report_feedback__closure_arg,
  MR_Box mdprof_report_feedback__wrapper_arg_1,
  MR_Box * mdprof_report_feedback__wrapper_arg_2);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mdprof_report_feedback__closure_arg,
  MR_Box mdprof_report_feedback__wrapper_arg_1,
  MR_Box * mdprof_report_feedback__wrapper_arg_2);


static /* final */ const MR_Box mdprof_report_feedback_scalar_common_1[3][5];

static /* final */ const MR_Box mdprof_report_feedback_scalar_common_2[4][3];

static /* final */ const MR_Box mdprof_report_feedback_scalar_common_3[4][1];


/* sealed */ struct mdprof_report_feedback__vector_common_type_4_0_s {
  const MR_Word mdprof_report_feedback__vector_common_type_4_0__vct_4_f_0;
  const MR_Word mdprof_report_feedback__vector_common_type_4_0__vct_4_f_1;
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

static /* final */ const MR_Box mdprof_report_feedback_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
};


static /* final */ const struct mdprof_report_feedback__vector_common_type_4_0_s mdprof_report_feedback_vector_common_4[3] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_report_feedback_scalar_common_3[0])
  },
  /* row 1 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(2), &mdprof_report_feedback_scalar_common_3[1])
  },
  /* row 2 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_report_feedback_scalar_common_3[0])
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_0 = {
  (MR_String) "help",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_1 = {
  (MR_String) "version",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_2 = {
  (MR_String) "verbosity",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mdprof_report_feedback__mdprof_report_feedback__enum_value_ordered_option_0[3] = {
  &mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_0,
  &mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_1,
  &mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_2
};

static const MR_EnumFunctorDescPtr mdprof_report_feedback__mdprof_report_feedback__enum_name_ordered_option_0[3] = {
  &mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_0,
  &mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_2,
  &mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_1
};

static const MR_Integer mdprof_report_feedback__mdprof_report_feedback__functor_number_map_option_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
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

static MR_bool MR_CALL 
mdprof_report_feedback____Unify____option_0_0_10001(
  MR_Box mdprof_report_feedback__wrapper_arg_1,
  MR_Box mdprof_report_feedback__wrapper_arg_2)
{
  {
    MR_bool mdprof_report_feedback__succeeded;

    {
      mdprof_report_feedback__succeeded = mdprof_report_feedback____Unify____option_0_0(((MR_Word) mdprof_report_feedback__wrapper_arg_1), ((MR_Word) mdprof_report_feedback__wrapper_arg_2));
    }
    return mdprof_report_feedback__succeeded;
  }
}

static void MR_CALL 
mdprof_report_feedback____Compare____option_0_0_10001(
  MR_Box * mdprof_report_feedback__wrapper_arg_1,
  MR_Box mdprof_report_feedback__wrapper_arg_2,
  MR_Box mdprof_report_feedback__wrapper_arg_3)
{
  {
    MR_Word mdprof_report_feedback__conv0_HeadVar__1_1;

    {
      mdprof_report_feedback____Compare____option_0_0(&mdprof_report_feedback__conv0_HeadVar__1_1, ((MR_Word) mdprof_report_feedback__wrapper_arg_2), ((MR_Word) mdprof_report_feedback__wrapper_arg_3));
    }
    *mdprof_report_feedback__wrapper_arg_1 = ((MR_Box) (mdprof_report_feedback__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mdprof_report_feedback____Compare____option_0_0(
  MR_Word * mdprof_report_feedback__HeadVar__1_1,
  MR_Word mdprof_report_feedback__HeadVar__2_2,
  MR_Word mdprof_report_feedback__HeadVar__3_3)
{
  {
    MR_bool mdprof_report_feedback__succeeded;
    MR_Integer mdprof_report_feedback__Cast_HeadVar1_4 = (MR_Integer) mdprof_report_feedback__HeadVar__2_2;
    MR_Integer mdprof_report_feedback__Cast_HeadVar2_5 = (MR_Integer) mdprof_report_feedback__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_report_feedback__HeadVar__1_1, mdprof_report_feedback__Cast_HeadVar1_4, mdprof_report_feedback__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mdprof_report_feedback____Unify____option_0_0(
  MR_Word mdprof_report_feedback__HeadVar__2_1,
  MR_Word mdprof_report_feedback__HeadVar__2_2)
{
  {
    MR_bool mdprof_report_feedback__succeeded = (mdprof_report_feedback__HeadVar__2_1 == mdprof_report_feedback__HeadVar__2_2);

    return mdprof_report_feedback__succeeded;
  }
}

static void MR_CALL 
mdprof_report_feedback__post_process_options_5_p_0(
  MR_String mdprof_report_feedback__ProgName_6,
  MR_Word mdprof_report_feedback__STATE_VARIABLE_Options_0_11,
  MR_Word * mdprof_report_feedback__STATE_VARIABLE_Options_12)
{
  {
    MR_bool mdprof_report_feedback__succeeded;
    MR_Integer mdprof_report_feedback__VerbosityLevel_9;
    MR_Word mdprof_report_feedback__Stderr_10;

    {
      mercury__getopt__lookup_int_option_3_p_0((MR_Word) &mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0, mdprof_report_feedback__STATE_VARIABLE_Options_0_11, ((MR_Box) ((MR_Integer) 2)), &mdprof_report_feedback__VerbosityLevel_9);
    }
    {
      mercury__io__stderr_stream_3_p_0(&mdprof_report_feedback__Stderr_10);
    }
    mdprof_report_feedback__succeeded = (mdprof_report_feedback__VerbosityLevel_9 < (MR_Integer) 0);
    if (mdprof_report_feedback__succeeded)
      {
        {
          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_10, mdprof_report_feedback__ProgName_6);
        }
        {
          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_10, (MR_String) ": warning: verbosity level should not be negative.\n");
        }
        {
          mercury__map__set_4_p_0((MR_Word) &mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (MR_mkword(MR_mktag(2), &mdprof_report_feedback_scalar_common_3[2]))), mdprof_report_feedback__STATE_VARIABLE_Options_0_11, mdprof_report_feedback__STATE_VARIABLE_Options_12);
        }
      }
    else
      {
        mdprof_report_feedback__succeeded = (mdprof_report_feedback__VerbosityLevel_9 > (MR_Integer) 4);
        if (mdprof_report_feedback__succeeded)
          {
            {
              mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_10, mdprof_report_feedback__ProgName_6);
            }
            {
              mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_10, (MR_String) ": warning: verbosity level should not exceed 4.\n");
            }
            {
              mercury__map__set_4_p_0((MR_Word) &mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0, (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0, ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (MR_mkword(MR_mktag(2), &mdprof_report_feedback_scalar_common_3[3]))), mdprof_report_feedback__STATE_VARIABLE_Options_0_11, mdprof_report_feedback__STATE_VARIABLE_Options_12);
            }
          }
        else
          *mdprof_report_feedback__STATE_VARIABLE_Options_12 = mdprof_report_feedback__STATE_VARIABLE_Options_0_11;
      }
  }
}

static void MR_CALL 
mdprof_report_feedback__defaults_2_p_0(
  MR_Word * mdprof_report_feedback__HeadVar__1_1,
  MR_Word * mdprof_report_feedback__HeadVar__2_2,
  MR_Cont mdprof_report_feedback__cont,
  void * mdprof_report_feedback__cont_env_ptr)
{
  {
    MR_bool mdprof_report_feedback__succeeded;

    {
      MR_Integer mdprof_report_feedback__slot_0 = (MR_Integer) 0;

      do
        {
          *mdprof_report_feedback__HeadVar__1_1 = ((&mdprof_report_feedback_vector_common_4[0 + mdprof_report_feedback__slot_0]))->mdprof_report_feedback__vector_common_type_4_0__vct_4_f_0;
          *mdprof_report_feedback__HeadVar__2_2 = ((&mdprof_report_feedback_vector_common_4[0 + mdprof_report_feedback__slot_0]))->mdprof_report_feedback__vector_common_type_4_0__vct_4_f_1;
          {
            mdprof_report_feedback__cont(mdprof_report_feedback__cont_env_ptr);
          }
          mdprof_report_feedback__slot_0 = (mdprof_report_feedback__slot_0 + (MR_Integer) 1);
        }
      while ((mdprof_report_feedback__slot_0 < (MR_Integer) 3));
    }
  }
}

static MR_bool MR_CALL 
mdprof_report_feedback__long_2_p_0(
  MR_String mdprof_report_feedback__HeadVar__1_1,
  MR_Word * mdprof_report_feedback__HeadVar__2_2)
{
  {
    MR_bool mdprof_report_feedback__succeeded;

    if ((strcmp(mdprof_report_feedback__HeadVar__1_1, (MR_String) "help") == 0))
      {
        *mdprof_report_feedback__HeadVar__2_2 = (MR_Integer) 0;
        mdprof_report_feedback__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(mdprof_report_feedback__HeadVar__1_1, (MR_String) "version") == 0))
      {
        *mdprof_report_feedback__HeadVar__2_2 = (MR_Integer) 1;
        mdprof_report_feedback__succeeded = MR_TRUE;
      }
    else
    if ((strcmp(mdprof_report_feedback__HeadVar__1_1, (MR_String) "verbosity") == 0))
      {
        *mdprof_report_feedback__HeadVar__2_2 = (MR_Integer) 2;
        mdprof_report_feedback__succeeded = MR_TRUE;
      }
    else
      mdprof_report_feedback__succeeded = MR_FALSE;
    return mdprof_report_feedback__succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_report_feedback__short_2_p_0(
  MR_Char mdprof_report_feedback__HeadVar__1_1,
  MR_Word * mdprof_report_feedback__HeadVar__2_2)
{
  {
    MR_bool mdprof_report_feedback__succeeded;

    switch (mdprof_report_feedback__HeadVar__1_1) {
      default:
        mdprof_report_feedback__succeeded = MR_FALSE;
        break;
      case (MR_Char) 86:
        {
          *mdprof_report_feedback__HeadVar__2_2 = (MR_Integer) 1;
          mdprof_report_feedback__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 104:
        {
          *mdprof_report_feedback__HeadVar__2_2 = (MR_Integer) 0;
          mdprof_report_feedback__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 118:
        {
          *mdprof_report_feedback__HeadVar__2_2 = (MR_Integer) 2;
          mdprof_report_feedback__succeeded = MR_TRUE;
        }
        break;
    }
    return mdprof_report_feedback__succeeded;
  }
}

static void MR_CALL 
mdprof_report_feedback__write_version_message_3_p_0(
  MR_String mdprof_report_feedback__ProgName_4)
{
  {
    MR_bool mdprof_report_feedback__succeeded;
    MR_String mdprof_report_feedback__Version_6;
    MR_String mdprof_report_feedback__Fullarch_7;

    {
      mercury__library__version_2_p_0(&mdprof_report_feedback__Version_6, &mdprof_report_feedback__Fullarch_7);
    }
    {
      mercury__io__write_string_3_p_0(mdprof_report_feedback__ProgName_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ": Mercury deep profiler\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "version: ");
    }
    {
      mercury__io__write_string_3_p_0(mdprof_report_feedback__Version_6);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ", on ");
    }
    {
      mercury__io__write_string_3_p_0(mdprof_report_feedback__Fullarch_7);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ".\n");
    }
  }
}

static void MR_CALL 
mdprof_report_feedback__write_help_message_3_p_0(
  MR_String mdprof_report_feedback__ProgName_4)
{
  {
    MR_bool mdprof_report_feedback__succeeded;
    MR_String mdprof_report_feedback__V_8_8;
    MR_String mdprof_report_feedback__V_17_17;

    {
      mdprof_report_feedback__V_17_17 = mercury__string__f_43_43_2_f_0(mdprof_report_feedback__ProgName_4, (MR_String) " [options] <feedbackfile>\n    This command outputs a report that shows the contents of the named\n    feedback file in a human-readable form.\n\n    You may specif" "y the following general options:\n\n    -h --help       Generate this help message.\n    -V --version    Report the program\'s version number.\n    -v --verbosity  <" "0-4>\n                    Generate messages. The higher the argument, the more\n                    verbose the program becomes. 2 is recommended, and\n           " "         is the default.\n");
    }
    {
      mdprof_report_feedback__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "Usage: ", mdprof_report_feedback__V_17_17);
    }
    {
      mercury__io__write_string_3_p_0(mdprof_report_feedback__V_8_8);
    }
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * mdprof_report_feedback__env_ptr_arg)
{
  {
    struct mdprof_report_feedback__main_2_p_0_4_env_0_s * mdprof_report_feedback__env_ptr = (struct mdprof_report_feedback__main_2_p_0_4_env_0_s *) mdprof_report_feedback__env_ptr_arg;

    *((mdprof_report_feedback__env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdprof_report_feedback__env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((mdprof_report_feedback__env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdprof_report_feedback__env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    {
      ((mdprof_report_feedback__env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__cont)((mdprof_report_feedback__env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box mdprof_report_feedback__closure_arg,
  MR_Box * mdprof_report_feedback__wrapper_arg_1,
  MR_Box * mdprof_report_feedback__wrapper_arg_2,
  MR_Cont mdprof_report_feedback__cont,
  void * mdprof_report_feedback__cont_env_ptr)
{
  {
    struct mdprof_report_feedback__main_2_p_0_4_env_0_s mdprof_report_feedback__env;

    (mdprof_report_feedback__env).mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_1 = mdprof_report_feedback__wrapper_arg_1;
    (mdprof_report_feedback__env).mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_2 = mdprof_report_feedback__wrapper_arg_2;
    (mdprof_report_feedback__env).mdprof_report_feedback__main_2_p_0_4_env_0__cont = mdprof_report_feedback__cont;
    (mdprof_report_feedback__env).mdprof_report_feedback__main_2_p_0_4_env_0__cont_env_ptr = mdprof_report_feedback__cont_env_ptr;
    {
      MR_Box mdprof_report_feedback__closure = mdprof_report_feedback__closure_arg;

      {
        mdprof_report_feedback__defaults_2_p_0(&(mdprof_report_feedback__env).mdprof_report_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mdprof_report_feedback__env).mdprof_report_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mdprof_report_feedback__env);
      }
    }
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mdprof_report_feedback__closure_arg,
  MR_Box mdprof_report_feedback__wrapper_arg_1,
  MR_Box * mdprof_report_feedback__wrapper_arg_2)
{
  {
    MR_bool mdprof_report_feedback__succeeded;
    MR_Box mdprof_report_feedback__closure = mdprof_report_feedback__closure_arg;
    MR_Word mdprof_report_feedback__conv1_HeadVar__2_2;

    {
      mdprof_report_feedback__succeeded = mdprof_report_feedback__long_2_p_0(((MR_String) mdprof_report_feedback__wrapper_arg_1), &mdprof_report_feedback__conv1_HeadVar__2_2);
    }
    if (mdprof_report_feedback__succeeded)
      {
        *mdprof_report_feedback__wrapper_arg_2 = ((MR_Box) (mdprof_report_feedback__conv1_HeadVar__2_2));
        mdprof_report_feedback__succeeded = MR_TRUE;
      }
    return mdprof_report_feedback__succeeded;
  }
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mdprof_report_feedback__closure_arg,
  MR_Box mdprof_report_feedback__wrapper_arg_1,
  MR_Box * mdprof_report_feedback__wrapper_arg_2)
{
  {
    MR_bool mdprof_report_feedback__succeeded;
    MR_Box mdprof_report_feedback__closure = mdprof_report_feedback__closure_arg;
    MR_Word mdprof_report_feedback__conv0_HeadVar__2_2;

    {
      mdprof_report_feedback__succeeded = mdprof_report_feedback__short_2_p_0(((MR_Char) (MR_Word) mdprof_report_feedback__wrapper_arg_1), &mdprof_report_feedback__conv0_HeadVar__2_2);
    }
    if (mdprof_report_feedback__succeeded)
      {
        *mdprof_report_feedback__wrapper_arg_2 = ((MR_Box) (mdprof_report_feedback__conv0_HeadVar__2_2));
        mdprof_report_feedback__succeeded = MR_TRUE;
      }
    return mdprof_report_feedback__succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_bool mdprof_report_feedback__succeeded;
    MR_Word mdprof_report_feedback__TypeCtorInfo_70_70;
    MR_String mdprof_report_feedback__ProgName_4;
    MR_Word mdprof_report_feedback__Args0_5;
    MR_Word mdprof_report_feedback__Args_6;
    MR_Word mdprof_report_feedback__MaybeOptions_7;
    MR_Word mdprof_report_feedback__Stderr_8;

    {
      mercury__io__progname_base_4_p_0((MR_String) "mdprof_report_feedback", &mdprof_report_feedback__ProgName_4);
    }
    {
      mercury__io__command_line_arguments_3_p_0(&mdprof_report_feedback__Args0_5);
    }
    mdprof_report_feedback__TypeCtorInfo_70_70 = (MR_Word) &mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0;
    {
      mercury__getopt__process_options_4_p_0(mdprof_report_feedback__TypeCtorInfo_70_70, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_report_feedback_scalar_common_2[3]), mdprof_report_feedback__Args0_5, &mdprof_report_feedback__Args_6, &mdprof_report_feedback__MaybeOptions_7);
    }
    {
      mercury__io__stderr_stream_3_p_0(&mdprof_report_feedback__Stderr_8);
    }
    if (((MR_tag((MR_Word) mdprof_report_feedback__MaybeOptions_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdprof_report_feedback__Msg_21 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_report_feedback__MaybeOptions_7, (MR_Integer) 0)));

        {
          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, mdprof_report_feedback__ProgName_4);
        }
        {
          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, (MR_String) ": error parsing options: ");
        }
        {
          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, mdprof_report_feedback__Msg_21);
        }
        {
          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, (MR_String) "\n");
        }
        {
          mdprof_report_feedback__write_help_message_3_p_0(mdprof_report_feedback__ProgName_4);
        }
        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
      }
    else
      {
        MR_Word mdprof_report_feedback__Options0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_report_feedback__MaybeOptions_7, (MR_Integer) 0)));
        MR_Word mdprof_report_feedback__Options_10;
        MR_Word mdprof_report_feedback__Help_11;
        MR_Word mdprof_report_feedback__Version_12;

        {
          mdprof_report_feedback__post_process_options_5_p_0(mdprof_report_feedback__ProgName_4, mdprof_report_feedback__Options0_9, &mdprof_report_feedback__Options_10);
        }
        {
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_report_feedback__TypeCtorInfo_70_70, mdprof_report_feedback__Options_10, ((MR_Box) ((MR_Integer) 0)), &mdprof_report_feedback__Help_11);
        }
        {
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_report_feedback__TypeCtorInfo_70_70, mdprof_report_feedback__Options_10, ((MR_Box) ((MR_Integer) 1)), &mdprof_report_feedback__Version_12);
        }
        mdprof_report_feedback__succeeded = (mdprof_report_feedback__Version_12 == (MR_Integer) 1);
        if (mdprof_report_feedback__succeeded)
          {
            mdprof_report_feedback__write_version_message_3_p_0(mdprof_report_feedback__ProgName_4);
          }
        else
          {
            mdprof_report_feedback__succeeded = (mdprof_report_feedback__Help_11 == (MR_Integer) 1);
            if (mdprof_report_feedback__succeeded)
              {
                mdprof_report_feedback__write_help_message_3_p_0(mdprof_report_feedback__ProgName_4);
              }
            else
            if ((mdprof_report_feedback__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mdprof_report_feedback__write_help_message_3_p_0(mdprof_report_feedback__ProgName_4);
                }
                {
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
              }
            else
              {
                MR_Word mdprof_report_feedback__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_report_feedback__Args_6, (MR_Integer) 1)));
                MR_String mdprof_report_feedback__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_report_feedback__Args_6, (MR_Integer) 0)));

                if ((mdprof_report_feedback__V_75_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word mdprof_report_feedback__FeedbackResult_14;

                    {
                      mdbcomp__feedback__read_feedback_file_5_p_0(mdprof_report_feedback__V_76_76, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdprof_report_feedback__FeedbackResult_14);
                    }
                    if (((MR_tag((MR_Word) mdprof_report_feedback__FeedbackResult_14)) == (MR_mktag((MR_Integer) 1))))
                      {
                        MR_Word mdprof_report_feedback__FeedbackError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_report_feedback__FeedbackResult_14, (MR_Integer) 0)));
                        MR_String mdprof_report_feedback__Message_17;

                        {
                          mdbcomp__feedback__feedback_read_error_message_string_3_p_0(mdprof_report_feedback__V_76_76, mdprof_report_feedback__FeedbackError_16, &mdprof_report_feedback__Message_17);
                        }
                        {
                          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, mdprof_report_feedback__ProgName_4);
                        }
                        {
                          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, (MR_String) ": ");
                        }
                        {
                          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, mdprof_report_feedback__Message_17);
                        }
                        {
                          mercury__io__write_string_4_p_0(mdprof_report_feedback__Stderr_8, (MR_String) "\n");
                        }
                        {
                          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                        }
                      }
                    else
                      {
                        MR_Word mdprof_report_feedback__Feedback_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_report_feedback__FeedbackResult_14, (MR_Integer) 0)));

                        {
                          mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_3_p_0(mdprof_report_feedback__Feedback_15);
                        }
                      }
                  }
                else
                  {
                    {
                      mdprof_report_feedback__write_help_message_3_p_0(mdprof_report_feedback__ProgName_4);
                    }
                    {
                      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                    }
                  }
              }
          }
      }
  }
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
