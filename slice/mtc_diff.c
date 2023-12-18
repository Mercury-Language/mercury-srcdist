/*
** Automatically generated from `mtc_diff.m'
** by the Mercury compiler,
** version rotd-2023-12-18
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


// :- module mtc_diff.
// :- implementation.

/*
INIT mercury__mtc_diff__init
ENDINIT
*/

#include "mtc_diff.mih"


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
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "univ.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct mtc_diff__main_2_p_0_4_env_0_s {
  MR_Box * mtc_diff__main_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mtc_diff__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mtc_diff__main_2_p_0_4_env_0__cont;
  void * mtc_diff__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mtc_diff__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mtc_diff__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_EnumFunctorDesc mtc_diff__mtc_diff__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc mtc_diff__mtc_diff__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDesc mtc_diff__mtc_diff__enum_functor_desc_option_0_2;

static const MR_EnumFunctorDescPtr mtc_diff__mtc_diff__enum_ordinal_ordered_option_0[3];

static const MR_EnumFunctorDescPtr mtc_diff__mtc_diff__enum_name_ordered_option_0[3];

static const MR_Integer mtc_diff__mtc_diff__functor_number_map_option_0[3];

static const MR_FA_TypeInfo_Struct2 mtc_diff__tree234__ti_tree234_2mtc_diff__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static void MR_CALL 
mtc_diff____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mtc_diff____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mtc_diff____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mtc_diff____Unify____option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mtc_diff__option_default_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mtc_diff__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mtc_diff__short_option_2_p_0(
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
mtc_diff__compute_and_output_diff_5_p_0(
  MR_Word StdErrStream_6,
  MR_Word OptionTable_7,
  MR_Word Args_8);

static MR_bool MR_CALL 
mtc_diff____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mtc_diff____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mtc_diff____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mtc_diff____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mtc_diff_scalar_common_1[5][3];

static /* final */ const MR_Box mtc_diff_scalar_common_2[15][2];

static /* final */ const MR_Box mtc_diff_scalar_common_3[1][1];

static /* final */ const MR_Box mtc_diff_scalar_common_4[3][5];


struct mtc_diff__vector_common_type_5_0_s {
  const MR_String mtc_diff__vector_common_type_5_0__vct_5_f_0;
  const MR_Word mtc_diff__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct mtc_diff__vector_common_type_5_0_s mtc_diff_vector_common_5[4];

struct mtc_diff__vector_common_type_6_0_s {
  const MR_Word mtc_diff__vector_common_type_6_0__vct_6_f_0;
  const MR_Word mtc_diff__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct mtc_diff__vector_common_type_6_0_s mtc_diff_vector_common_6[3];



static /* final */ const MR_Box mtc_diff_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mtc_diff__mtc_diff__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mtc_diff_scalar_common_4[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mtc_diff_scalar_common_4[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mtc_diff_scalar_common_4[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mtc_diff_scalar_common_1[1])),
    ((MR_Box) (&mtc_diff_scalar_common_1[2])),
    ((MR_Box) (&mtc_diff_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mtc_diff_scalar_common_2[15][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "Description:\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(1, &mtc_diff_scalar_common_2[0])))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) " [<options>] -o <outputfile> <tracecountfile1> <tracecountfile2>\n")),
    ((MR_Box) (MR_mkword(1, &mtc_diff_scalar_common_2[1])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "count file.")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "\140mtc_diff\' combines multiple trace count files into a single trace")),
    ((MR_Box) (MR_mkword(1, &mtc_diff_scalar_common_2[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "<files> is the trace count files that are to be combined.")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "\tWrite the diff of the input trace counts to the specified file.")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "-o <file>, --output-file <file>")),
    ((MR_Box) (MR_mkword(1, &mtc_diff_scalar_common_2[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "\tPrint version information.")),
    ((MR_Box) (MR_mkword(1, &mtc_diff_scalar_common_2[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "--version")),
    ((MR_Box) (MR_mkword(1, &mtc_diff_scalar_common_2[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "\tPrint this usage message.")),
    ((MR_Box) (MR_mkword(1, &mtc_diff_scalar_common_2[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "-\?, -h, --help")),
    ((MR_Box) (MR_mkword(1, &mtc_diff_scalar_common_2[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2023 The Mercury team\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2006-2012 The University of Melbourne\n")),
    ((MR_Box) (MR_mkword(1, &mtc_diff_scalar_common_2[12])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box mtc_diff_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
};

static /* final */ const MR_Box mtc_diff_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mtc_diff__mtc_diff__type_ctor_info_option_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mtc_diff__mtc_diff__type_ctor_info_option_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mtc_diff__mtc_diff__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};


static /* final */ const struct mtc_diff__vector_common_type_5_0_s mtc_diff_vector_common_5[4] = {
  /* row   0 */
  {
    (MR_String) "help",
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_String) "out",
    (MR_Integer) 2
  },
  /* row   2 */
  {
    (MR_String) "output-file",
    (MR_Integer) 2
  },
  /* row   3 */
  {
    (MR_String) "version",
    (MR_Integer) 1
  },
};

static /* final */ const struct mtc_diff__vector_common_type_6_0_s mtc_diff_vector_common_6[3] = {
  /* row   0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &mtc_diff_scalar_common_3[0]))
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(1, &mtc_diff_scalar_common_3[0]))
  },
  /* row   2 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(3, &mtc_diff_scalar_common_2[14]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc mtc_diff__mtc_diff__enum_functor_desc_option_0_0 = {
  (MR_String) "help",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mtc_diff__mtc_diff__enum_functor_desc_option_0_1 = {
  (MR_String) "version",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mtc_diff__mtc_diff__enum_functor_desc_option_0_2 = {
  (MR_String) "output_filename",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mtc_diff__mtc_diff__enum_ordinal_ordered_option_0[3] = {
  &mtc_diff__mtc_diff__enum_functor_desc_option_0_0,
  &mtc_diff__mtc_diff__enum_functor_desc_option_0_1,
  &mtc_diff__mtc_diff__enum_functor_desc_option_0_2
};

static const MR_EnumFunctorDescPtr mtc_diff__mtc_diff__enum_name_ordered_option_0[3] = {
  &mtc_diff__mtc_diff__enum_functor_desc_option_0_0,
  &mtc_diff__mtc_diff__enum_functor_desc_option_0_2,
  &mtc_diff__mtc_diff__enum_functor_desc_option_0_1
};

static const MR_Integer mtc_diff__mtc_diff__functor_number_map_option_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mtc_diff__mtc_diff__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mtc_diff____Unify____option_0_0_10001)),
  ((MR_Box) (mtc_diff____Compare____option_0_0_10001)),
  (MR_String) "mtc_diff",
  (MR_String) "option",
  { mtc_diff__mtc_diff__enum_name_ordered_option_0 },
  { mtc_diff__mtc_diff__enum_ordinal_ordered_option_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mtc_diff__mtc_diff__functor_number_map_option_0,

};

static const MR_FA_TypeInfo_Struct2 mtc_diff__tree234__ti_tree234_2mtc_diff__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mtc_diff__mtc_diff__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

const MR_TypeCtorInfo_Struct mtc_diff__mtc_diff__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mtc_diff____Unify____option_table_0_0_10001)),
  ((MR_Box) (mtc_diff____Compare____option_table_0_0_10001)),
  (MR_String) "mtc_diff",
  (MR_String) "option_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&mtc_diff__tree234__ti_tree234_2mtc_diff__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
mtc_diff____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mtc_diff_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mtc_diff____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mtc_diff_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mtc_diff____Compare____option_0_0(
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
mtc_diff____Unify____option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mtc_diff__option_default_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&mtc_diff_vector_common_6[0 + slot_0]))->mtc_diff__vector_common_type_6_0__vct_6_f_0;
    *HeadVar__2_2 = ((&mtc_diff_vector_common_6[0 + slot_0]))->mtc_diff__vector_common_type_6_0__vct_6_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 3));
}

static MR_bool MR_CALL 
mtc_diff__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer lo_0 = (MR_Integer) 0;
  MR_Integer hi_1 = (MR_Integer) 3;
  MR_Integer mid_2;
  MR_Integer result_3;

  // binary string simple lookup switch
  ;
  do
  {
    mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
    result_3 = MR_strcmp(HeadVar__1_1, ((&mtc_diff_vector_common_5[0 + mid_2]))->mtc_diff__vector_common_type_5_0__vct_5_f_0);
    if ((result_3 == (MR_Integer) 0))
    {
      *HeadVar__2_2 = ((&mtc_diff_vector_common_5[0 + mid_2]))->mtc_diff__vector_common_type_5_0__vct_5_f_1;
      succeeded = MR_TRUE;
      // jump out of search loop
      ;
      goto label_0;
    }
    else
    if ((result_3 < (MR_Integer) 0))
      hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
    else
      lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
  }
  while ((lo_0 <= hi_1));
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static MR_bool MR_CALL 
mtc_diff__short_option_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 63:
      {
        *HeadVar__2_2 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 104:
      {
        *HeadVar__2_2 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 111:
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
  struct mtc_diff__main_2_p_0_4_env_0_s * env_ptr = (struct mtc_diff__main_2_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mtc_diff__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mtc_diff__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
  *((env_ptr)->mtc_diff__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mtc_diff__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
  ((env_ptr)->mtc_diff__main_2_p_0_4_env_0__cont)((env_ptr)->mtc_diff__main_2_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mtc_diff__main_2_p_0_4_env_0_s env;

  (env).mtc_diff__main_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mtc_diff__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mtc_diff__main_2_p_0_4_env_0__cont = cont;
  (env).mtc_diff__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mtc_diff__option_default_2_p_0(&(env).mtc_diff__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mtc_diff__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &env);
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

  succeeded = mtc_diff__long_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
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

  succeeded = mtc_diff__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
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
  MR_Word StdOutStream_4;
  MR_Word StdErrStream_5;
  MR_Word Args0_6;
  MR_Word Args_8;
  MR_Word GetoptResult_9;

  mercury__io__stdout_stream_3_p_0(&StdOutStream_4);
  mercury__io__stderr_stream_3_p_0(&StdErrStream_5);
  mdbcomp__shared_utilities__unlimit_stack_2_p_0();
  mercury__io__command_line_arguments_3_p_0(&Args0_6);
  mercury__getopt__process_options_4_p_0((MR_Word) (&mtc_diff__mtc_diff__type_ctor_info_option_0), (MR_Word) (MR_mkword(2, &mtc_diff_scalar_common_1[4])), Args0_6, &Args_8, &GetoptResult_9);
  if (((MR_tag((MR_Word) GetoptResult_9)) == (MR_Integer) 1))
  {
    MR_Word GetoptError_11 = ((MR_Word) ((MR_hl_field(1, GetoptResult_9, (MR_Integer) 0))));
    MR_String GetoptErrorMsg_12;

    GetoptErrorMsg_12 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&mtc_diff__mtc_diff__type_ctor_info_option_0), GetoptError_11);
    mercury__io__write_string_4_p_0(StdErrStream_5, GetoptErrorMsg_12);
    mercury__io__write_string_4_p_0(StdErrStream_5, (MR_String) "\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word OptionTable_10 = ((MR_Word) ((MR_hl_field(0, GetoptResult_9, (MR_Integer) 0))));
    MR_Word Var_42;

    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mtc_diff__mtc_diff__type_ctor_info_option_0), OptionTable_10, ((MR_Box) ((MR_Integer) 0)), &Var_42);
    succeeded = ((MR_Integer) 1 == Var_42);
    if (succeeded)
    {
      MR_String ProgName_46;
      MR_Word Var_52;
      MR_Word Var_55;

      mercury__io__progname_base_4_p_0((MR_String) "mtc_diff", &ProgName_46);
      mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "Name: mtc_diff - Mercury trace count diff\n");
      mercury__io__write_strings_4_p_0(StdOutStream_4, (MR_Word) (MR_mkword(1, &mtc_diff_scalar_common_2[13])));
      {
        Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_55, 0) = ((MR_Box) (ProgName_46));
        MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &mtc_diff_scalar_common_2[2])));
      }
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) ((MR_String) "Usage: "));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
      }
      mercury__io__write_strings_4_p_0(StdOutStream_4, Var_52);
      mercury__io__write_prefixed_lines_5_p_0(StdOutStream_4, (MR_String) "\t", (MR_Word) (MR_mkword(1, &mtc_diff_scalar_common_2[4])));
      mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "\nArguments:\n");
      mercury__io__write_prefixed_lines_5_p_0(StdOutStream_4, (MR_String) "\t", (MR_Word) (MR_mkword(1, &mtc_diff_scalar_common_2[5])));
      mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "\nOptions:\n");
      mercury__io__write_prefixed_lines_5_p_0(StdOutStream_4, (MR_String) "\t", (MR_Word) (MR_mkword(1, &mtc_diff_scalar_common_2[11])));
    }
    else
    {
      MR_Word Var_43;

      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mtc_diff__mtc_diff__type_ctor_info_option_0), OptionTable_10, ((MR_Box) ((MR_Integer) 1)), &Var_43);
      succeeded = ((MR_Integer) 1 == Var_43);
      if (succeeded)
      {
        MR_String Version_72;
        MR_String Package_73;

        Version_72 = mercury__library__mercury_version_0_f_0();
        mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "Mercury trace count diff, version ");
        mercury__io__write_string_4_p_0(StdOutStream_4, Version_72);
        Package_73 = mercury__library__package_version_0_f_0();
        succeeded = (strcmp(Package_73, (MR_String) "") == 0);
        if (succeeded)
          mercury__io__nl_3_p_0(StdOutStream_4);
        else
        {
          mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) " (");
          mercury__io__write_string_4_p_0(StdOutStream_4, Package_73);
          mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) ")\n");
        }
        mercury__io__write_strings_4_p_0(StdOutStream_4, (MR_Word) (MR_mkword(1, &mtc_diff_scalar_common_2[13])));
      }
      else
        mtc_diff__compute_and_output_diff_5_p_0(StdErrStream_5, OptionTable_10, Args_8);
    }
  }
}

static void MR_CALL 
mtc_diff__compute_and_output_diff_5_p_0(
  MR_Word StdErrStream_6,
  MR_Word OptionTable_7,
  MR_Word Args_8)
{
  MR_bool succeeded;
  MR_String OutputFile_10;
  MR_String Arg1_11;
  MR_String Arg2_12;
  MR_Word Var_31;
  MR_Word Var_32;

  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mtc_diff__mtc_diff__type_ctor_info_option_0), OptionTable_7, ((MR_Box) ((MR_Integer) 2)), &OutputFile_10);
  succeeded = (strcmp(OutputFile_10, (MR_String) "") == 0);
  succeeded = !(succeeded);
  if (succeeded)
  {
    succeeded = (Args_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Arg1_11 = ((MR_String) ((MR_hl_field(1, Args_8, (MR_Integer) 0))));
      Var_31 = ((MR_Word) ((MR_hl_field(1, Args_8, (MR_Integer) 1))));
      succeeded = (Var_31 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Arg2_12 = ((MR_String) ((MR_hl_field(1, Var_31, (MR_Integer) 0))));
        Var_32 = ((MR_Word) ((MR_hl_field(1, Var_31, (MR_Integer) 1))));
        succeeded = (Var_32 == (MR_Word) ((MR_Unsigned) 0U));
      }
    }
  }
  if (succeeded)
  {
    MR_Word MaybeTraceCounts1_13;
    MR_Word MaybeTraceCounts2_17;
    MR_Word Type1_21;
    MR_Word TraceCounts1_22;
    MR_Word Type2_23;
    MR_Word TraceCounts2_24;

    mdbcomp__trace_counts__read_trace_counts_source_4_p_0(Arg1_11, &MaybeTraceCounts1_13);
    if (((MR_tag((MR_Word) MaybeTraceCounts1_13)) == (MR_Integer) 1))
    {
      MR_String Msg1_16 = ((MR_String) ((MR_hl_field(1, MaybeTraceCounts1_13, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(StdErrStream_6, Msg1_16);
      mercury__io__nl_3_p_0(StdErrStream_6);
    }
    mdbcomp__trace_counts__read_trace_counts_source_4_p_0(Arg2_12, &MaybeTraceCounts2_17);
    if (((MR_tag((MR_Word) MaybeTraceCounts2_17)) == (MR_Integer) 1))
    {
      MR_String Msg2_20 = ((MR_String) ((MR_hl_field(1, MaybeTraceCounts2_17, (MR_Integer) 0))));

      mercury__io__write_string_4_p_0(StdErrStream_6, Msg2_20);
      mercury__io__write_string_4_p_0(StdErrStream_6, (MR_String) "\n");
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    succeeded = ((MR_tag((MR_Word) MaybeTraceCounts1_13)) == (MR_Integer) 0);
    if (succeeded)
    {
      Type1_21 = ((MR_Word) ((MR_hl_field(0, MaybeTraceCounts1_13, (MR_Integer) 0))));
      TraceCounts1_22 = ((MR_Word) ((MR_hl_field(0, MaybeTraceCounts1_13, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) MaybeTraceCounts2_17)) == (MR_Integer) 0);
      if (succeeded)
      {
        Type2_23 = ((MR_Word) ((MR_hl_field(0, MaybeTraceCounts2_17, (MR_Integer) 0))));
        TraceCounts2_24 = ((MR_Word) ((MR_hl_field(0, MaybeTraceCounts2_17, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      MR_Word TraceCounts_25;
      MR_Word WriteResult_26;
      MR_Word Var_44;

      mdbcomp__trace_counts__diff_trace_counts_3_p_0(TraceCounts1_22, TraceCounts2_24, &TraceCounts_25);
      {
        Var_44 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(2, Var_44, 0) = ((MR_Box) (Type1_21));
        MR_hl_field(2, Var_44, 1) = ((MR_Box) (Type2_23));
      }
      mdbcomp__trace_counts__write_trace_counts_to_file_6_p_0(Var_44, TraceCounts_25, OutputFile_10, &WriteResult_26);
      if (!((WriteResult_26 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_Word WriteErrorMsg_27 = ((MR_Word) ((MR_hl_field(1, WriteResult_26, (MR_Integer) 0))));
        MR_String Var_52;

        Var_52 = mercury__io__error_message_1_f_0(WriteErrorMsg_27);
        mercury__io__write_string_4_p_0(StdErrStream_6, (MR_String) "Error writing to file\140");
        mercury__io__write_string_4_p_0(StdErrStream_6, OutputFile_10);
        mercury__io__write_string_4_p_0(StdErrStream_6, (MR_String) "\': ");
        mercury__io__write_string_4_p_0(StdErrStream_6, Var_52);
        mercury__io__write_string_4_p_0(StdErrStream_6, (MR_String) "\n");
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
    }
  }
  else
  {
    MR_String ProgName_68;

    mercury__io__progname_base_4_p_0((MR_String) "mtc_diff", &ProgName_68);
    mercury__io__write_string_4_p_0(StdErrStream_6, (MR_String) "Usage: ");
    mercury__io__write_string_4_p_0(StdErrStream_6, ProgName_68);
    mercury__io__write_string_4_p_0(StdErrStream_6, (MR_String) " [<options>] -o <outputfile> <tracecountfile1> <tracecountfile2>\n");
    mercury__io__write_string_4_p_0(StdErrStream_6, (MR_String) "Use \140");
    mercury__io__write_string_4_p_0(StdErrStream_6, ProgName_68);
    mercury__io__write_string_4_p_0(StdErrStream_6, (MR_String) " --help\' for more information.\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
}

static MR_bool MR_CALL 
mtc_diff____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mtc_diff____Unify____option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mtc_diff____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mtc_diff____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mtc_diff____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mtc_diff____Unify____option_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mtc_diff____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mtc_diff____Compare____option_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mtc_diff__init(void)
{
}

void mercury__mtc_diff__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mtc_diff__mtc_diff__type_ctor_info_option_0);
	MR_register_type_ctor_info(&mtc_diff__mtc_diff__type_ctor_info_option_table_0);
}

void mercury__mtc_diff__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mtc_diff__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mtc_diff.
