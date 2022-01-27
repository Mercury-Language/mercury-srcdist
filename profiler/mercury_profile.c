/*
** Automatically generated from `mercury_profile.m'
** by the Mercury compiler,
** version rotd-2021-01-24
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


// :- module mercury_profile.
// :- implementation.

/*
INIT mercury__mercury_profile__init
ENDINIT
*/

#include "mercury_profile.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "call_graph.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "generate_output.mih"
#include "getopt.mih"
#include "globals.mih"
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "options.mih"
#include "output.mih"
#include "output_prof_info.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "process_file.mih"
#include "prof_info.mih"
#include "propagate.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "snapshots.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"



struct mercury_profile__main_2_p_0_4_env_0_s {
  MR_Box * mercury_profile__main_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mercury_profile__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mercury_profile__main_2_p_0_4_env_0__cont;
  void * mercury_profile__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mercury_profile__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mercury_profile__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_FA_PseudoTypeInfo_Struct2 mercury_profile__tree234__pti_tree234_2__plain_options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury_profile__getopt__pti_maybe_option_table_1__plain_options__type_ctor_info_option_0;

static MR_bool MR_CALL 
main_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
mercury_profile__main_2_3_p_0(
  MR_Word Args_4);

static void MR_CALL 
mercury_profile__long_usage_2_p_0(void);

static void MR_CALL 
mercury_profile__postprocess_options_3_p_0(
  MR_Word Args_4);


static /* final */ const MR_Box mercury_profile_scalar_common_1[19][2];

static /* final */ const MR_Box mercury_profile_scalar_common_2[1][1];

static /* final */ const MR_Box mercury_profile_scalar_common_3[3][5];

static /* final */ const MR_Box mercury_profile_scalar_common_4[4][3];

static /* final */ const MR_Box mercury_profile_scalar_common_5[1][7];

static /* final */ const MR_Box mercury_profile_scalar_common_6[1][4];




static /* final */ const MR_Box mercury_profile_scalar_common_1[19][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Options:\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "\tprogram\'s static call graph.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\tgenerated automatically by the Mercury compiler, contain the\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\tfor every module in the program.  The \140.prof\' files, which are\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "\tOtherwise, the <files> specified should be the \140.prof\' file\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "\tis implied: the call graph will be built dynamically.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "\tIf no <files> are specified, then the \140--use-dynamic\' option\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "Arguments:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "\texecution.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\t(call graph based) profile based on data collected during program\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "\tIt outputs a flat profile and optionally also a hierarchical\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\t\140mprof\' produces execution profiles for Mercury programs.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "Description:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) " [<options>] [<files>]\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) " --help\' for more information.\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury_profile_scalar_common_2[1][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box mercury_profile_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&options__options__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&options__options__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&options__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mercury_profile_scalar_common_4[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury_profile_scalar_common_3[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury_profile_scalar_common_3[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury_profile_scalar_common_3[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury_profile_scalar_common_5[0])),
    ((MR_Box) (main_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury_profile_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&options__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_special_data_0)),
    ((MR_Box) (&mercury_profile__tree234__pti_tree234_2__plain_options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&mercury_profile__getopt__pti_maybe_option_table_1__plain_options__type_ctor_info_option_0))
  },
};

static /* final */ const MR_Box mercury_profile_scalar_common_6[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury_profile_scalar_common_4[0])),
    ((MR_Box) (&mercury_profile_scalar_common_4[1])),
    ((MR_Box) (&mercury_profile_scalar_common_4[2])),
    ((MR_Box) (&mercury_profile_scalar_common_4[3]))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 mercury_profile__tree234__pti_tree234_2__plain_options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&options__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_profile__getopt__pti_maybe_option_table_1__plain_options__type_ctor_info_option_0 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) (&options__options__type_ctor_info_option_0)
  }
};

static MR_bool MR_CALL 
main_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv4_HeadVar__4_4;

    succeeded = options__special_handler_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv4_HeadVar__4_4);
    if (succeeded)
    {
      *wrapper_arg_4 = ((MR_Box) (conv4_HeadVar__4_4));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mercury_profile__main_2_p_0_4_env_0_s * env_ptr = (struct mercury_profile__main_2_p_0_4_env_0_s *) (env_ptr_arg);

    *((env_ptr)->mercury_profile__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mercury_profile__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((env_ptr)->mercury_profile__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mercury_profile__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    ((env_ptr)->mercury_profile__main_2_p_0_4_env_0__cont)((env_ptr)->mercury_profile__main_2_p_0_4_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury_profile__main_2_p_0_4_env_0_s env;

    (env).mercury_profile__main_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mercury_profile__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).mercury_profile__main_2_p_0_4_env_0__cont = cont;
    (env).mercury_profile__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      options__option_default_2_p_0(&(env).mercury_profile__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mercury_profile__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &env);
    }
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    succeeded = options__long_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = options__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_bool succeeded;
    MR_Word Args0_4;
    MR_Word Args_6;
    MR_Word GetoptResult_7;

    mercury__io__command_line_arguments_3_p_0(&Args0_4);
    mercury__getopt__process_options_4_p_0((MR_Word) (&options__options__type_ctor_info_option_0), (MR_Word) (MR_mkword(MR_mktag(3), &mercury_profile_scalar_common_6[0])), Args0_4, &Args_6, &GetoptResult_7);
    if (((MR_tag((MR_Word) GetoptResult_7)) == (MR_Integer) 1))
    {
      MR_Word Error_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GetoptResult_7, (MR_Integer) 0))));
      MR_String ErrorMessage_9;
      MR_String ProgName_37;
      MR_Word StdErr_38;
      MR_Word Var_42;
      MR_Word Var_44;
      MR_Word Var_46;
      MR_String ProgName_56;
      MR_Word StdErr_57;
      MR_String Version_58;
      MR_String Fullarch_59;
      MR_Word Var_63;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_72;
      MR_Word Var_74;
      MR_Word Var_76;
      MR_Word Var_78;
      MR_Word Var_79;
      MR_Word Var_81;
      MR_Word Var_83;

      ErrorMessage_9 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&options__options__type_ctor_info_option_0), Error_8);
      mercury__io__progname_base_4_p_0((MR_String) "mercury_profile", &ProgName_37);
      mercury__io__stderr_stream_3_p_0(&StdErr_38);
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ErrorMessage_9));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[17])));
      }
      {
        Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) ((MR_String) ": "));
        MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (ProgName_37));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_44));
      }
      mercury__io__write_strings_4_p_0(StdErr_38, Var_42);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      mercury__io__progname_base_4_p_0((MR_String) "mprof", &ProgName_56);
      mercury__io__stderr_stream_3_p_0(&StdErr_57);
      mercury__library__version_2_p_0(&Version_58, &Fullarch_59);
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (ProgName_56));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[18])));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) ((MR_String) "Use \140"));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_83));
      }
      {
        Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) ((MR_String) " [<options>] [<files>]\n"));
        MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_81));
      }
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (ProgName_56));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_79));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) ((MR_String) "Usage: "));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_78));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) ((MR_String) "Copyright (C) 2013-2021 The Mercury team\n"));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) ((MR_String) "Copyright (C) 1995-2012 The University of Melbourne\n"));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (Var_74));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_72));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Fullarch_59));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_70));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) ((MR_String) ", on "));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Version_58));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) ((MR_String) "mprof - Mercury profiler, version "));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_66));
      }
      mercury__io__write_strings_4_p_0(StdErr_57, Var_63);
    }
    else
    {
      MR_Word OptionTable0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GetoptResult_7, (MR_Integer) 0))));

      globals__io_init_3_p_0(OptionTable0_10);
      mercury_profile__postprocess_options_3_p_0(Args_6);
      mercury_profile__main_2_3_p_0(Args_6);
    }
  }
}

static void MR_CALL 
mercury_profile__main_2_3_p_0(
  MR_Word Args_4)
{
  {
    MR_Word Globals_6;
    MR_Word Help_7;

    globals__io_get_globals_3_p_0(&Globals_6);
    globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 19, &Help_7);
    switch (Help_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Snapshots_8;

          globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 13, &Snapshots_8);
          switch (Snapshots_8) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word StdErr_21;
                MR_Word StdOut_22;
                MR_Word Verbose_23;
                MR_Word Prof0_24;
                MR_Word CallGraph0_25;
                MR_Word CallGraphOpt_26;
                MR_Word Prof_28;
                MR_Word IndexMap_29;
                MR_Word OutputProf_30;
                MR_Word Var_31;

                mercury__io__stderr_stream_3_p_0(&StdErr_21);
                mercury__io__set_output_stream_4_p_0(StdErr_21, &StdOut_22);
                globals__io_lookup_bool_option_4_p_0((MR_Integer) 0, &Verbose_23);
                options__maybe_write_string_4_p_0(Verbose_23, (MR_String) "% Processing input files...");
                process_file__process_profiling_data_files_4_p_0(&Prof0_24, &CallGraph0_25);
                options__maybe_write_string_4_p_0(Verbose_23, (MR_String) " done\n");
                globals__io_lookup_bool_option_4_p_0((MR_Integer) 3, &CallGraphOpt_26);
                switch (CallGraphOpt_26) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Prof_28 = Prof0_24;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word CallGraph_27;

                      options__maybe_write_string_4_p_0(Verbose_23, (MR_String) "% Building call graph...");
                      call_graph__build_call_graph_5_p_0(Args_4, CallGraph0_25, &CallGraph_27);
                      options__maybe_write_string_4_p_0(Verbose_23, (MR_String) " done\n");
                      options__maybe_write_string_4_p_0(Verbose_23, (MR_String) "% Propagating counts...");
                      propagate__propagate_counts_5_p_0(CallGraph_27, Prof0_24, &Prof_28);
                      options__maybe_write_string_4_p_0(Verbose_23, (MR_String) " done\n");
                    }
                    break;
                }
                options__maybe_write_string_4_p_0(Verbose_23, (MR_String) "% Generating output...");
                generate_output__generate_prof_output_5_p_0(Prof_28, &IndexMap_29, &OutputProf_30);
                options__maybe_write_string_4_p_0(Verbose_23, (MR_String) " done\n");
                mercury__io__set_output_stream_4_p_0(StdOut_22, &Var_31);
                output__output_profile_4_p_0(OutputProf_30, IndexMap_29);
                mercury__io__nl_2_p_0();
              }
              break;
            case (MR_Integer) 1:
              snapshots__show_snapshots_2_p_0();
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        mercury_profile__long_usage_2_p_0();
        break;
    }
  }
}

static void MR_CALL 
mercury_profile__long_usage_2_p_0(void)
{
  {
    MR_String ProgName_4;
    MR_String Version_5;
    MR_String Fullarch_6;
    MR_Word Var_11;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_24;
    MR_Word Var_26;

    mercury__io__progname_base_4_p_0((MR_String) "mprof", &ProgName_4);
    mercury__library__version_2_p_0(&Version_5, &Fullarch_6);
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (ProgName_4));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_1[16])));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) ((MR_String) "Usage: "));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) ((MR_String) "Copyright (C) 2013-2021 The Mercury team\n\n"));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) ((MR_String) "Copyright (C) 1995-2012 The University of Melbourne\n"));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Fullarch_6));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) ((MR_String) ", on "));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Version_5));
      MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_15));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) ((MR_String) "Name: mprof - Mercury profiler, version "));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_14));
    }
    mercury__io__write_strings_3_p_0(Var_11);
    options__options_help_2_p_0();
  }
}

static void MR_CALL 
mercury_profile__postprocess_options_3_p_0(
  MR_Word Args_4)
{
  {
    MR_Word VeryVerbose_6;

    globals__io_lookup_bool_option_4_p_0((MR_Integer) 1, &VeryVerbose_6);
    switch (VeryVerbose_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        globals__io_set_option_4_p_0((MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_2[0])));
        break;
    }
    if ((Args_4 == (MR_Word) ((MR_Unsigned) 0U)))
      globals__io_set_option_4_p_0((MR_Integer) 2, (MR_Word) (MR_mkword(MR_mktag(1), &mercury_profile_scalar_common_2[0])));
  }
}

void mercury__mercury_profile__init(void)
{
}

void mercury__mercury_profile__init_type_tables(void)
{
}

void mercury__mercury_profile__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mercury_profile__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mercury_profile.
