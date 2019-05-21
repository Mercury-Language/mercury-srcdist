/*
** Automatically generated from `mdprof_dump.m'
** by the Mercury compiler,
** version rotd-2018-02-18
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


// :- module mdprof_dump.
// :- implementation.

/*
INIT mercury__mdprof_dump__init
ENDINIT
*/

#include "mdprof_dump.mih"


#include "dump.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "read_profile.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "integer.mih"
#include "io.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"



struct mdprof_dump__main_2_p_0_4_env_0_s {
  MR_Box * mdprof_dump__main_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mdprof_dump__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mdprof_dump__main_2_p_0_4_env_0__cont;
  void * mdprof_dump__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mdprof_dump__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mdprof_dump__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_EnumFunctorDesc mdprof_dump__mdprof_dump__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc mdprof_dump__mdprof_dump__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDesc mdprof_dump__mdprof_dump__enum_functor_desc_option_0_2;

static const MR_EnumFunctorDescPtr mdprof_dump__mdprof_dump__enum_value_ordered_option_0[3];

static const MR_EnumFunctorDescPtr mdprof_dump__mdprof_dump__enum_name_ordered_option_0[3];

static const MR_Integer mdprof_dump__mdprof_dump__functor_number_map_option_0[3];

static const MR_FA_TypeInfo_Struct2 mdprof_dump__tree234__ti_tree234_2mdprof_dump__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static void MR_CALL 
mdprof_dump____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_dump____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_dump____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_dump____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_dump__defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdprof_dump__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdprof_dump__short_option_2_p_0(
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
mdprof_dump__usage_3_p_0(
  MR_String ProgName_4);

static void MR_CALL 
mdprof_dump__make_dump_options_2_p_0(
  MR_Word Options_3,
  MR_Word * MaybeDumpOptions_4);

static void MR_CALL 
mdprof_dump__main_2_4_p_0(
  MR_Word DumpOptions_5,
  MR_String FileName_6);

static MR_bool MR_CALL 
mdprof_dump____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_dump____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_dump____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_dump____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdprof_dump_scalar_common_1[5][3];

static /* final */ const MR_Box mdprof_dump_scalar_common_2[3][5];

static /* final */ const MR_Box mdprof_dump_scalar_common_3[1][1];

static /* final */ const MR_Box mdprof_dump_scalar_common_4[1][2];


/* sealed */ struct mdprof_dump__vector_common_type_5_0_s {
  const MR_Word mdprof_dump__vector_common_type_5_0__vct_5_f_0;
  const MR_Word mdprof_dump__vector_common_type_5_0__vct_5_f_1;
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
#include "read_profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_EnumFunctorDesc mdprof_dump__mdprof_dump__enum_functor_desc_option_0_0 = {
  (MR_String) "help",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdprof_dump__mdprof_dump__enum_functor_desc_option_0_1 = {
  (MR_String) "dump_options",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdprof_dump__mdprof_dump__enum_functor_desc_option_0_2 = {
  (MR_String) "option_restrict",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mdprof_dump__mdprof_dump__enum_value_ordered_option_0[3] = {
  &mdprof_dump__mdprof_dump__enum_functor_desc_option_0_0,
  &mdprof_dump__mdprof_dump__enum_functor_desc_option_0_1,
  &mdprof_dump__mdprof_dump__enum_functor_desc_option_0_2
};

static const MR_EnumFunctorDescPtr mdprof_dump__mdprof_dump__enum_name_ordered_option_0[3] = {
  &mdprof_dump__mdprof_dump__enum_functor_desc_option_0_1,
  &mdprof_dump__mdprof_dump__enum_functor_desc_option_0_0,
  &mdprof_dump__mdprof_dump__enum_functor_desc_option_0_2
};

static const MR_Integer mdprof_dump__mdprof_dump__functor_number_map_option_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mdprof_dump__mdprof_dump__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_dump____Unify____option_0_0_10001)),
  ((MR_Box) (mdprof_dump____Compare____option_0_0_10001)),
  (MR_String) "mdprof_dump",
  (MR_String) "option",
  {     mdprof_dump__mdprof_dump__enum_name_ordered_option_0 },
  {     mdprof_dump__mdprof_dump__enum_value_ordered_option_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdprof_dump__mdprof_dump__functor_number_map_option_0
};

static const MR_FA_TypeInfo_Struct2 mdprof_dump__tree234__ti_tree234_2mdprof_dump__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdprof_dump__mdprof_dump__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

const MR_TypeCtorInfo_Struct mdprof_dump__mdprof_dump__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdprof_dump____Unify____option_table_0_0_10001)),
  ((MR_Box) (mdprof_dump____Compare____option_table_0_0_10001)),
  (MR_String) "mdprof_dump",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdprof_dump__tree234__ti_tree234_2mdprof_dump__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
mdprof_dump____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &mdprof_dump_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
mdprof_dump____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdprof_dump_scalar_common_1[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_dump____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdprof_dump____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mdprof_dump__defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer slot_0 = (MR_Integer) 0;

    do
    {
      *HeadVar__1_1 = ((&mdprof_dump_vector_common_5[0 + slot_0]))->mdprof_dump__vector_common_type_5_0__vct_5_f_0;
      *HeadVar__2_2 = ((&mdprof_dump_vector_common_5[0 + slot_0]))->mdprof_dump__vector_common_type_5_0__vct_5_f_1;
      cont(cont_env_ptr);
      slot_0 = (slot_0 + (MR_Integer) 1);
    }
    while ((slot_0 < (MR_Integer) 3));
  }
}

static MR_bool MR_CALL 
mdprof_dump__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((strcmp(HeadVar__1_1, (MR_String) "help") == 0))
    {
      *HeadVar__2_2 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(HeadVar__1_1, (MR_String) "restrict") == 0))
    {
      *HeadVar__2_2 = (MR_Integer) 2;
      succeeded = MR_TRUE;
    }
    else
    if ((strcmp(HeadVar__1_1, (MR_String) "dump-options") == 0))
    {
      *HeadVar__2_2 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_dump__short_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (HeadVar__1_1) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Char) 68:
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
      case (MR_Char) 114:
        {
          *HeadVar__2_2 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mdprof_dump__main_2_p_0_4_env_0_s * env_ptr = (struct mdprof_dump__main_2_p_0_4_env_0_s *) env_ptr_arg;

    *((env_ptr)->mdprof_dump__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdprof_dump__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((env_ptr)->mdprof_dump__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdprof_dump__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    ((env_ptr)->mdprof_dump__main_2_p_0_4_env_0__cont)((env_ptr)->mdprof_dump__main_2_p_0_4_env_0__cont_env_ptr);
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
    struct mdprof_dump__main_2_p_0_4_env_0_s env;

    (env).mdprof_dump__main_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mdprof_dump__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).mdprof_dump__main_2_p_0_4_env_0__cont = cont;
    (env).mdprof_dump__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      mdprof_dump__defaults_2_p_0(&(env).mdprof_dump__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mdprof_dump__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &env);
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

    succeeded = mdprof_dump__long_option_2_p_0(((MR_String) wrapper_arg_1), &conv1_HeadVar__2_2);
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

    succeeded = mdprof_dump__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
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
    MR_Word TypeCtorInfo_50_50;
    MR_String ProgName_4;
    MR_Word Args0_5;
    MR_Word Args_7;
    MR_Word MaybeOptions_8;

    mercury__io__progname_base_4_p_0((MR_String) "mdprof_dump", &ProgName_4);
    mercury__io__command_line_arguments_3_p_0(&Args0_5);
    TypeCtorInfo_50_50 = (MR_Word) &mdprof_dump__mdprof_dump__type_ctor_info_option_0;
    mercury__getopt__process_options_4_p_0(TypeCtorInfo_50_50, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_dump_scalar_common_1[4]), Args0_5, &Args_7, &MaybeOptions_8);
    if (((MR_tag((MR_Word) MaybeOptions_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Message_17 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeOptions_8, (MR_Integer) 0)));
      MR_Word Stderr_18;

      mercury__io__stderr_stream_3_p_0(&Stderr_18);
      mercury__io__write_string_4_p_0(Stderr_18, ProgName_4);
      mercury__io__write_string_4_p_0(Stderr_18, (MR_String) ": ");
      mercury__io__write_string_4_p_0(Stderr_18, Message_17);
      mercury__io__write_string_4_p_0(Stderr_18, (MR_String) "\n");
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word Options_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeOptions_8, (MR_Integer) 0)));
      MR_Word NeedsHelp_10;

      mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_50_50, Options_9, ((MR_Box) ((MR_Integer) 0)), &NeedsHelp_10);
      switch (NeedsHelp_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          if ((Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word TypeCtorInfo_26_89 = (MR_Word) &mdprof_dump__mdprof_dump__type_ctor_info_option_0;
            MR_Word ArrayOptionStrs_68;
            MR_Word RestrictBool_69;
            MR_Word Restrict_70;
            MR_Word DumpOptions0_71;
            MR_Word Var_75;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_81;
            MR_Word Var_82;
            MR_Word Var_77;
            MR_Word ArrayOptions_72;

            mercury__getopt__lookup_accumulating_option_3_p_0(TypeCtorInfo_26_89, Options_9, ((MR_Box) ((MR_Integer) 1)), &ArrayOptionStrs_68);
            mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_26_89, Options_9, ((MR_Box) ((MR_Integer) 2)), &RestrictBool_69);
            switch (RestrictBool_69) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Restrict_70 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                Restrict_70 = (MR_Integer) 0;
                break;
            }
            Var_75 = dump__default_dump_options_0_f_0();
            Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 0)));
            Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 1)));
            Var_79 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 2)))) & (MR_Integer) 1);
            Var_80 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            Var_81 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            Var_82 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_75, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            {
              DumpOptions0_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), DumpOptions0_71, 0) = ((MR_Box) (Restrict_70));
              MR_hl_field(MR_mktag(0), DumpOptions0_71, 1) = ((MR_Box) (Var_78));
              MR_hl_field(MR_mktag(0), DumpOptions0_71, 2) = ((MR_Box) ((Var_79 | ((((Var_80 << (MR_Integer) 1)) | ((((Var_81 << (MR_Integer) 2)) | ((Var_82 << (MR_Integer) 3)))))))));
            }
            succeeded = dump__dump_array_options_2_p_0(ArrayOptionStrs_68, &ArrayOptions_72);
            if (succeeded)
            {
              MR_Word DumpOptions_13;
              MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), DumpOptions0_71, (MR_Integer) 0)));
              MR_Word Var_85 = ((((MR_Word) (MR_hl_field(MR_mktag(0), DumpOptions0_71, (MR_Integer) 2)))) & (MR_Integer) 1);
              MR_Word Var_86 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), DumpOptions0_71, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word Var_87 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), DumpOptions0_71, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word Var_88 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), DumpOptions0_71, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), DumpOptions0_71, (MR_Integer) 1)));

              {
                DumpOptions_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), DumpOptions_13, 0) = ((MR_Box) (Var_83));
                MR_hl_field(MR_mktag(0), DumpOptions_13, 1) = ((MR_Box) (ArrayOptions_72));
                MR_hl_field(MR_mktag(0), DumpOptions_13, 2) = ((MR_Box) ((Var_85 | ((((Var_86 << (MR_Integer) 1)) | ((((Var_87 << (MR_Integer) 2)) | ((Var_88 << (MR_Integer) 3)))))))));
              }
              mdprof_dump__main_2_4_p_0(DumpOptions_13, (MR_String) "Deep.data");
            }
            else
              mdprof_dump__usage_3_p_0(ProgName_4);
          }
          else
          {
            MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 1)));
            MR_String Var_60 = ((MR_String) (MR_hl_field(MR_mktag(1), Args_7, (MR_Integer) 0)));

            if ((Var_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word MaybeDumpOptions_54;

              mdprof_dump__make_dump_options_2_p_0(Options_9, &MaybeDumpOptions_54);
              if ((MaybeDumpOptions_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                mdprof_dump__usage_3_p_0(ProgName_4);
              else
              {
                MR_Word DumpOptions_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDumpOptions_54, (MR_Integer) 0)));

                mdprof_dump__main_2_4_p_0(DumpOptions_51, Var_60);
              }
            }
            else
              mdprof_dump__usage_3_p_0(ProgName_4);
          }
          break;
        case (MR_Integer) 1:
          mdprof_dump__usage_3_p_0(ProgName_4);
          break;
      }
    }
  }
}

static void MR_CALL 
mdprof_dump__usage_3_p_0(
  MR_String ProgName_4)
{
  {
    MR_Word StdErr_6;

    mercury__io__stderr_stream_3_p_0(&StdErr_6);
    mercury__io__write_string_4_p_0(StdErr_6, (MR_String) "Usage: ");
    mercury__io__write_string_4_p_0(StdErr_6, ProgName_4);
    mercury__io__write_string_4_p_0(StdErr_6, (MR_String) " [-h] [-D what] [filename]\n");
    mercury__io__write_string_4_p_0(StdErr_6, (MR_String) "Options:\n\t-h, --help\n\t\tDisplay this message.\n\t-r, --restrict\n\t\tDo not dump proc and call-site statics that are\n\t\tnot referenced from the proc dynamics\n\t-D all\n\t" "\tDump all arrays, (default).\n\t-D csd\n\t\tDump call-site dynamics.\n\t-D pd\n\t\tDump proc dynamics.\n\t-D css\n\t\tDump call-site statics.\n\t-D ps\n\t\tDump proc statics.\n\nThe " "following options are unimplemented.\n\t-D clique\n\t\tDump information about cliques.\n\t-D rev\n\t\tDump reverse links.\n\t-D prop\n\t\tDump propagated measurement informati" "on.\n");
  }
}

static void MR_CALL 
mdprof_dump__make_dump_options_2_p_0(
  MR_Word Options_3,
  MR_Word * MaybeDumpOptions_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_26_26 = (MR_Word) &mdprof_dump__mdprof_dump__type_ctor_info_option_0;
    MR_Word ArrayOptionStrs_5;
    MR_Word RestrictBool_6;
    MR_Word Restrict_7;
    MR_Word DumpOptions0_8;
    MR_Word Var_12;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_14;
    MR_Word ArrayOptions_9;

    mercury__getopt__lookup_accumulating_option_3_p_0(TypeCtorInfo_26_26, Options_3, ((MR_Box) ((MR_Integer) 1)), &ArrayOptionStrs_5);
    mercury__getopt__lookup_bool_option_3_p_0(TypeCtorInfo_26_26, Options_3, ((MR_Box) ((MR_Integer) 2)), &RestrictBool_6);
    switch (RestrictBool_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Restrict_7 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        Restrict_7 = (MR_Integer) 0;
        break;
    }
    Var_12 = dump__default_dump_options_0_f_0();
    Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0)));
    Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1)));
    Var_16 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 2)))) & (MR_Integer) 1);
    Var_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    Var_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    Var_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    {
      DumpOptions0_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), DumpOptions0_8, 0) = ((MR_Box) (Restrict_7));
      MR_hl_field(MR_mktag(0), DumpOptions0_8, 1) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), DumpOptions0_8, 2) = ((MR_Box) ((Var_16 | ((((Var_17 << (MR_Integer) 1)) | ((((Var_18 << (MR_Integer) 2)) | ((Var_19 << (MR_Integer) 3)))))))));
    }
    succeeded = dump__dump_array_options_2_p_0(ArrayOptionStrs_5, &ArrayOptions_9);
    if (succeeded)
    {
      MR_Word Var_13;
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), DumpOptions0_8, (MR_Integer) 0)));
      MR_Word Var_22 = ((((MR_Word) (MR_hl_field(MR_mktag(0), DumpOptions0_8, (MR_Integer) 2)))) & (MR_Integer) 1);
      MR_Word Var_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), DumpOptions0_8, (MR_Integer) 2)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), DumpOptions0_8, (MR_Integer) 2)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), DumpOptions0_8, (MR_Integer) 2)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), DumpOptions0_8, (MR_Integer) 1)));

      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (ArrayOptions_9));
        MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((Var_22 | ((((Var_23 << (MR_Integer) 1)) | ((((Var_24 << (MR_Integer) 2)) | ((Var_25 << (MR_Integer) 3)))))))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDumpOptions_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_13));
      }
    }
    else
      *MaybeDumpOptions_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static void MR_CALL 
mdprof_dump__main_2_4_p_0(
  MR_Word DumpOptions_5,
  MR_String FileName_6)
{
  {
    MR_Word MaybeInitialDeep_8;

    read_profile__read_call_graph_4_p_0(FileName_6, &MaybeInitialDeep_8);
    if (((MR_tag((MR_Word) MaybeInitialDeep_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Msg_10 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeInitialDeep_8, (MR_Integer) 0)));

      mercury__io__write_string_3_p_0((MR_String) "Cannot read ");
      mercury__io__write_string_3_p_0(Msg_10);
      mercury__io__write_string_3_p_0((MR_String) ": ");
      mercury__io__write_string_3_p_0(FileName_6);
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    else
    {
      MR_Word InitialDeep_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeInitialDeep_8, (MR_Integer) 0)));

      dump__dump_initial_deep_4_p_0(InitialDeep_9, DumpOptions_5);
    }
  }
}

static MR_bool MR_CALL 
mdprof_dump____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_dump____Unify____option_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_dump____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_dump____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_dump____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_dump____Unify____option_table_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_dump____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_dump____Compare____option_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_dump__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdprof_dump.
