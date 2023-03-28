/*
** Automatically generated from `mdprof_report_feedback.m'
** by the Mercury compiler,
** version rotd-2023-03-28
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module mdprof_report_feedback.
// :- implementation.

/*
INIT mercury__mdprof_report_feedback__init
ENDINIT
*/

#include "mdprof_report_feedback.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mdprof_fb.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.program_representation.mih"
#include "mdprof_fb.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "mdprof_fb.automatic_parallelism.autopar_reports.mih"



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

static const MR_EnumFunctorDescPtr mdprof_report_feedback__mdprof_report_feedback__enum_ordinal_ordered_option_0[3];

static const MR_EnumFunctorDescPtr mdprof_report_feedback__mdprof_report_feedback__enum_name_ordered_option_0[3];

static const MR_Integer mdprof_report_feedback__mdprof_report_feedback__functor_number_map_option_0[3];

static void MR_CALL 
mdprof_report_feedback____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_report_feedback____Unify____option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_report_feedback__defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdprof_report_feedback__long_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdprof_report_feedback__short_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mdprof_report_feedback__write_version_message_4_p_0(
  MR_Word OutputStream_5,
  MR_String ProgName_6);

static void MR_CALL 
mdprof_report_feedback__write_help_message_4_p_0(
  MR_Word OutputStream_5,
  MR_String ProgName_6);

static MR_bool MR_CALL 
mdprof_report_feedback____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_report_feedback____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdprof_report_feedback_scalar_common_1[4][1];

static /* final */ const MR_Box mdprof_report_feedback_scalar_common_2[3][5];

static /* final */ const MR_Box mdprof_report_feedback_scalar_common_3[4][3];


struct mdprof_report_feedback__vector_common_type_4_0_s {
  const MR_Word mdprof_report_feedback__vector_common_type_4_0__vct_4_f_0;
  const MR_Word mdprof_report_feedback__vector_common_type_4_0__vct_4_f_1;
};

static /* final */ const struct mdprof_report_feedback__vector_common_type_4_0_s mdprof_report_feedback_vector_common_4[3];



static /* final */ const MR_Box mdprof_report_feedback_scalar_common_1[4][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
};

static /* final */ const MR_Box mdprof_report_feedback_scalar_common_2[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mdprof_report_feedback_scalar_common_3[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mdprof_report_feedback_scalar_common_2[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdprof_report_feedback_scalar_common_2[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdprof_report_feedback_scalar_common_2[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdprof_report_feedback_scalar_common_3[0])),
    ((MR_Box) (&mdprof_report_feedback_scalar_common_3[1])),
    ((MR_Box) (&mdprof_report_feedback_scalar_common_3[2]))
  },
};


static /* final */ const struct mdprof_report_feedback__vector_common_type_4_0_s mdprof_report_feedback_vector_common_4[3] = {
  /* row   0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &mdprof_report_feedback_scalar_common_1[0]))
  },
  /* row   1 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(2, &mdprof_report_feedback_scalar_common_1[1]))
  },
  /* row   2 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(1, &mdprof_report_feedback_scalar_common_1[0]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_0 = {
  (MR_String) "help",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_1 = {
  (MR_String) "version",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdprof_report_feedback__mdprof_report_feedback__enum_functor_desc_option_0_2 = {
  (MR_String) "verbosity",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mdprof_report_feedback__mdprof_report_feedback__enum_ordinal_ordered_option_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_report_feedback____Unify____option_0_0_10001)),
  ((MR_Box) (mdprof_report_feedback____Compare____option_0_0_10001)),
  (MR_String) "mdprof_report_feedback",
  (MR_String) "option",
  { mdprof_report_feedback__mdprof_report_feedback__enum_name_ordered_option_0 },
  { mdprof_report_feedback__mdprof_report_feedback__enum_ordinal_ordered_option_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdprof_report_feedback__mdprof_report_feedback__functor_number_map_option_0,

};

static void MR_CALL 
mdprof_report_feedback____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

static MR_bool MR_CALL 
mdprof_report_feedback____Unify____option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mdprof_report_feedback__defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&mdprof_report_feedback_vector_common_4[0 + slot_0]))->mdprof_report_feedback__vector_common_type_4_0__vct_4_f_0;
    *HeadVar__2_2 = ((&mdprof_report_feedback_vector_common_4[0 + slot_0]))->mdprof_report_feedback__vector_common_type_4_0__vct_4_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 3));
}

static MR_bool MR_CALL 
mdprof_report_feedback__long_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((strcmp(HeadVar__1_1, (MR_String) "help") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 0;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__1_1, (MR_String) "version") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
  if ((strcmp(HeadVar__1_1, (MR_String) "verbosity") == 0))
  {
    *HeadVar__2_2 = (MR_Integer) 2;
    succeeded = MR_TRUE;
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

static MR_bool MR_CALL 
mdprof_report_feedback__short_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 86:
      {
        *HeadVar__2_2 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 104:
      {
        *HeadVar__2_2 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 118:
      {
        *HeadVar__2_2 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg)
{
  struct mdprof_report_feedback__main_2_p_0_4_env_0_s * env_ptr = (struct mdprof_report_feedback__main_2_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
  *((env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
  ((env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__cont)((env_ptr)->mdprof_report_feedback__main_2_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdprof_report_feedback__main_2_p_0_4_env_0_s env;

  (env).mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdprof_report_feedback__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdprof_report_feedback__main_2_p_0_4_env_0__cont = cont;
  (env).mdprof_report_feedback__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdprof_report_feedback__defaults_2_p_0(&(env).mdprof_report_feedback__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mdprof_report_feedback__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &env);
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  succeeded = mdprof_report_feedback__long_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = mdprof_report_feedback__short_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
main_2_p_0(void)
{
  MR_bool succeeded;
  MR_String ProgName_4;
  MR_Word Args0_5;
  MR_Word Args_6;
  MR_Word MaybeOptions_7;
  MR_Word StdOut_8;
  MR_Word StdErr_9;

  mercury__io__progname_base_4_p_0((MR_String) "mdprof_report_feedback", &ProgName_4);
  mercury__io__command_line_arguments_3_p_0(&Args0_5);
  mercury__getopt__process_options_4_p_0((MR_Word) (&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0), (MR_Word) (MR_mkword(2, &mdprof_report_feedback_scalar_common_3[3])), Args0_5, &Args_6, &MaybeOptions_7);
  mercury__io__stdout_stream_3_p_0(&StdOut_8);
  mercury__io__stderr_stream_3_p_0(&StdErr_9);
  if (((MR_tag((MR_Word) MaybeOptions_7)) == (MR_Integer) 1))
  {
    MR_Word Error_22 = ((MR_Word) ((MR_hl_field(1, MaybeOptions_7, (MR_Integer) 0))));
    MR_String Msg_23;
    MR_String Var_89;
    MR_String Var_95;

    Msg_23 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0), Error_22);
    mercury__io__write_string_4_p_0(StdErr_9, ProgName_4);
    mercury__io__write_string_4_p_0(StdErr_9, (MR_String) ": error parsing options: ");
    mercury__io__write_string_4_p_0(StdErr_9, Msg_23);
    mercury__io__write_string_4_p_0(StdErr_9, (MR_String) "\n");
    Var_95 = mercury__string__f_43_43_2_f_0(ProgName_4, (MR_String) " [options] <feedbackfile>\n    This command outputs a report that shows the contents of the named\n    feedback file in a human-readable form.\n\n    You may specif" "y the following general options:\n\n    -h --help       Generate this help message.\n    -V --version    Report the program\'s version number.\n    -v --verbosity  <" "0-4>\n                    Generate messages. The higher the argument, the more\n                    verbose the program becomes. 2 is recommended, and\n           " "         is the default.\n");
    Var_89 = mercury__string__f_43_43_2_f_0((MR_String) "Usage: ", Var_95);
    mercury__io__write_string_4_p_0(StdErr_9, Var_89);
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word Options0_10 = ((MR_Word) ((MR_hl_field(0, MaybeOptions_7, (MR_Integer) 0))));
    MR_Word Options_11;
    MR_Word Help_12;
    MR_Word Version_13;
    MR_Integer VerbosityLevel_97;
    MR_Word StdErr_98;

    mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0), Options0_10, ((MR_Box) ((MR_Integer) 2)), &VerbosityLevel_97);
    mercury__io__stderr_stream_3_p_0(&StdErr_98);
    succeeded = (VerbosityLevel_97 < (MR_Integer) 0);
    if (succeeded)
    {
      mercury__io__write_string_4_p_0(StdErr_98, ProgName_4);
      mercury__io__write_string_4_p_0(StdErr_98, (MR_String) ": warning: verbosity level should not be negative.\n");
      mercury__map__set_4_p_0((MR_Word) (&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (MR_mkword(2, &mdprof_report_feedback_scalar_common_1[2]))), Options0_10, &Options_11);
    }
    else
    {
      succeeded = (VerbosityLevel_97 > (MR_Integer) 4);
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(StdErr_98, ProgName_4);
        mercury__io__write_string_4_p_0(StdErr_98, (MR_String) ": warning: verbosity level should not exceed 4.\n");
        mercury__map__set_4_p_0((MR_Word) (&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 2)), ((MR_Box) (MR_mkword(2, &mdprof_report_feedback_scalar_common_1[3]))), Options0_10, &Options_11);
      }
      else
        Options_11 = Options0_10;
    }
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0), Options_11, ((MR_Box) ((MR_Integer) 0)), &Help_12);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_report_feedback__mdprof_report_feedback__type_ctor_info_option_0), Options_11, ((MR_Box) ((MR_Integer) 1)), &Version_13);
    succeeded = (Version_13 == (MR_Integer) 1);
    if (succeeded)
      mdprof_report_feedback__write_version_message_4_p_0(StdOut_8, ProgName_4);
    else
    {
      succeeded = (Help_12 == (MR_Integer) 1);
      if (succeeded)
        mdprof_report_feedback__write_help_message_4_p_0(StdOut_8, ProgName_4);
      else
      if ((Args_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mdprof_report_feedback__write_help_message_4_p_0(StdErr_9, ProgName_4);
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
      else
      {
        MR_Word Var_77 = ((MR_Word) ((MR_hl_field(1, Args_6, (MR_Integer) 1))));
        MR_String Var_78 = ((MR_String) ((MR_hl_field(1, Args_6, (MR_Integer) 0))));

        if ((Var_77 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word FeedbackResult_15;

          mdbcomp__feedback__read_feedback_file_5_p_0(Var_78, (MR_Word) ((MR_Unsigned) 0U), &FeedbackResult_15);
          if (((MR_tag((MR_Word) FeedbackResult_15)) == (MR_Integer) 1))
          {
            MR_Word FeedbackError_17 = ((MR_Word) ((MR_hl_field(1, FeedbackResult_15, (MR_Integer) 0))));
            MR_String Message_18;

            mdbcomp__feedback__feedback_read_error_message_string_3_p_0(Var_78, FeedbackError_17, &Message_18);
            mercury__io__write_string_4_p_0(StdErr_9, ProgName_4);
            mercury__io__write_string_4_p_0(StdErr_9, (MR_String) ": ");
            mercury__io__write_string_4_p_0(StdErr_9, Message_18);
            mercury__io__write_string_4_p_0(StdErr_9, (MR_String) "\n");
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          else
          {
            MR_Word Feedback_16 = ((MR_Word) ((MR_hl_field(0, FeedbackResult_15, (MR_Integer) 0))));

            mdprof_fb__automatic_parallelism__autopar_reports__print_feedback_report_4_p_0(StdOut_8, Feedback_16);
          }
        }
        else
        {
          mdprof_report_feedback__write_help_message_4_p_0(StdErr_9, ProgName_4);
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
      }
    }
  }
}

static void MR_CALL 
mdprof_report_feedback__write_version_message_4_p_0(
  MR_Word OutputStream_5,
  MR_String ProgName_6)
{
  MR_String Version_8;
  MR_String Fullarch_9;

  mercury__library__version_2_p_0(&Version_8, &Fullarch_9);
  mercury__io__write_string_4_p_0(OutputStream_5, ProgName_6);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) ": Mercury deep profiler\n");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "version: ");
  mercury__io__write_string_4_p_0(OutputStream_5, Version_8);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) ", on ");
  mercury__io__write_string_4_p_0(OutputStream_5, Fullarch_9);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) ".\n");
}

static void MR_CALL 
mdprof_report_feedback__write_help_message_4_p_0(
  MR_Word OutputStream_5,
  MR_String ProgName_6)
{
  MR_String Var_10;
  MR_String Var_16;

  Var_16 = mercury__string__f_43_43_2_f_0(ProgName_6, (MR_String) " [options] <feedbackfile>\n    This command outputs a report that shows the contents of the named\n    feedback file in a human-readable form.\n\n    You may specif" "y the following general options:\n\n    -h --help       Generate this help message.\n    -V --version    Report the program\'s version number.\n    -v --verbosity  <" "0-4>\n                    Generate messages. The higher the argument, the more\n                    verbose the program becomes. 2 is recommended, and\n           " "         is the default.\n");
  Var_10 = mercury__string__f_43_43_2_f_0((MR_String) "Usage: ", Var_16);
  mercury__io__write_string_4_p_0(OutputStream_5, Var_10);
}

static MR_bool MR_CALL 
mdprof_report_feedback____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_report_feedback____Unify____option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_report_feedback____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_report_feedback____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_report_feedback__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdprof_report_feedback.
