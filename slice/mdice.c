/*
** Automatically generated from `mdice.m'
** by the Mercury compiler,
** version rotd-2025-07-07
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


// :- module mdice.
// :- implementation.

/*
INIT mercury__mdice__init
ENDINIT
*/

#include "mdice.mih"


#include "array.mih"
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
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.shared_utilities.mih"
#include "mdbcomp.slice_and_dice.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct mdice__main_2_p_0_4_env_0_s {
  MR_Box * mdice__main_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mdice__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mdice__main_2_p_0_4_env_0__cont;
  void * mdice__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mdice__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mdice__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_2;

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_3;

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_4;

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_5;

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_6;

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_7;

static const MR_EnumFunctorDescPtr mdice__mdice__enum_ordinal_ordered_option_0[8];

static const MR_EnumFunctorDescPtr mdice__mdice__enum_name_ordered_option_0[8];

static const MR_Integer mdice__mdice__functor_number_map_option_0[8];

static const MR_FA_TypeInfo_Struct2 mdice__tree234__ti_tree234_2mdice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static void MR_CALL 
mdice____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdice____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdice____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdice____Unify____option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdice__option_default_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdice__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdice__short_option_2_p_0(
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
mdice__compute_and_output_dice_6_p_0(
  MR_Word StdOutStream_7,
  MR_Word OptionTable_8,
  MR_String PassFileName_9,
  MR_String FailFileName_10);

static MR_bool MR_CALL 
mdice____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdice____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdice____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdice____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdice_scalar_common_1[5][3];

static /* final */ const MR_Box mdice_scalar_common_2[29][2];

static /* final */ const MR_Box mdice_scalar_common_3[5][1];

static /* final */ const MR_Box mdice_scalar_common_4[3][5];


struct mdice__vector_common_type_5_0_s {
  const MR_String mdice__vector_common_type_5_0__vct_5_f_0;
  const MR_Word mdice__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct mdice__vector_common_type_5_0_s mdice_vector_common_5[32];

struct mdice__vector_common_type_6_0_s {
  const MR_Word mdice__vector_common_type_6_0__vct_6_f_0;
  const MR_Word mdice__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct mdice__vector_common_type_6_0_s mdice_vector_common_6[8];



static /* final */ const MR_Box mdice_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdice__mdice__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdice_scalar_common_4[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdice_scalar_common_4[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdice_scalar_common_4[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdice_scalar_common_1[1])),
    ((MR_Box) (&mdice_scalar_common_1[2])),
    ((MR_Box) (&mdice_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mdice_scalar_common_2[29][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "Use \140mdice --help\' for more information.\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "Usage: mdice [<options>] <passfile> <failfile>\n")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[0])))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "program.")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "\140mdice\' creates a comparison between passing and failing runs of a")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[2])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "\tA value of zero means there is no maximum width.")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "\tThe maximum width of the column containing file names and line numbers.")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[4])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "-f <N>, --max-file-column-width <N>")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "\tA value of zero means there is no maximum width.")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "\tThe maximum width of the column containing ports and goal paths.")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "-p <N>, --max-path-column-width <N>")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "\tnames. A value of zero means there is no maximum width.")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "\tThe maximum width of the column containing predicate and function")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "-n <N>, --max-name-column-width <N>")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "\tRestrict the output to the given module and its submodules (if any).")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "-m <module>, --module <module>")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "\tLimit the output to at most N lines.")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "-l <N>, --limit <N>")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "\t(See the Mercury User\'s Guide for details.)")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "\tSpecify how the output should be sorted.")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "-s <sortspec>, --sort <sortspec>")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "\tPrint version information.")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[19])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "--version")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[20])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "\twithout doing any further processing.")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "\tPrint help about using mdice (on the standard output) and exit")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[22])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "-\?, -h, --help")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[23])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2013-2025 The Mercury team\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "Copyright (C) 2005-2012 The University of Melbourne\n")),
    ((MR_Box) (MR_mkword(1, &mdice_scalar_common_2[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "S"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) ""))
  },
};

static /* final */ const MR_Box mdice_scalar_common_3[5][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 100)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 35)) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 12)) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 20)) },
};

static /* final */ const MR_Box mdice_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdice__mdice__type_ctor_info_option_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdice__mdice__type_ctor_info_option_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdice__mdice__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};


static /* final */ const struct mdice__vector_common_type_5_0_s mdice_vector_common_5[32] = {
  /* row   0 */
  {
    (MR_String) "max-path-column",
    (MR_Integer) 5
  },
  /* row   1 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   2 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   3 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   4 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   5 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   6 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   7 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   8 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row   9 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  10 */
  {
    (MR_String) "max-name-column",
    (MR_Integer) 4
  },
  /* row  11 */
  {
    (MR_String) "max-file-column",
    (MR_Integer) 6
  },
  /* row  12 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  13 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  14 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  15 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  16 */
  {
    (MR_String) "limit",
    (MR_Integer) 3
  },
  /* row  17 */
  {
    (MR_String) "max-path-column-width",
    (MR_Integer) 5
  },
  /* row  18 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  19 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  20 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  21 */
  {
    (MR_String) "help",
    (MR_Integer) 0
  },
  /* row  22 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  23 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  24 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  25 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  26 */
  {
    (MR_String) "max-file-column-width",
    (MR_Integer) 6
  },
  /* row  27 */
  {
    (MR_String) "max-name-column-width",
    (MR_Integer) 4
  },
  /* row  28 */
  {
    (MR_String) "module",
    (MR_Integer) 7
  },
  /* row  29 */
  {
    (MR_String) "version",
    (MR_Integer) 1
  },
  /* row  30 */
  {
    (MR_String) "sort",
    (MR_Integer) 2
  },
  /* row  31 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
};

static /* final */ const struct mdice__vector_common_type_6_0_s mdice_vector_common_6[8] = {
  /* row   0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &mdice_scalar_common_3[0]))
  },
  /* row   1 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(1, &mdice_scalar_common_3[0]))
  },
  /* row   2 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(3, &mdice_scalar_common_2[27]))
  },
  /* row   3 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(2, &mdice_scalar_common_3[1]))
  },
  /* row   4 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(2, &mdice_scalar_common_3[2]))
  },
  /* row   5 */
  {
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(2, &mdice_scalar_common_3[3]))
  },
  /* row   6 */
  {
    (MR_Integer) 6,
    (MR_Word) (MR_mkword(2, &mdice_scalar_common_3[4]))
  },
  /* row   7 */
  {
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(3, &mdice_scalar_common_2[28]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_0 = {
  (MR_String) "help",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_1 = {
  (MR_String) "version",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_2 = {
  (MR_String) "sort",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_3 = {
  (MR_String) "max_row",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_4 = {
  (MR_String) "max_name_column_width",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_5 = {
  (MR_String) "max_path_column_width",
  INT32_C(5)
};

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_6 = {
  (MR_String) "max_file_column_width",
  INT32_C(6)
};

static const MR_EnumFunctorDesc mdice__mdice__enum_functor_desc_option_0_7 = {
  (MR_String) "modulename",
  INT32_C(7)
};

static const MR_EnumFunctorDescPtr mdice__mdice__enum_ordinal_ordered_option_0[8] = {
  &mdice__mdice__enum_functor_desc_option_0_0,
  &mdice__mdice__enum_functor_desc_option_0_1,
  &mdice__mdice__enum_functor_desc_option_0_2,
  &mdice__mdice__enum_functor_desc_option_0_3,
  &mdice__mdice__enum_functor_desc_option_0_4,
  &mdice__mdice__enum_functor_desc_option_0_5,
  &mdice__mdice__enum_functor_desc_option_0_6,
  &mdice__mdice__enum_functor_desc_option_0_7
};

static const MR_EnumFunctorDescPtr mdice__mdice__enum_name_ordered_option_0[8] = {
  &mdice__mdice__enum_functor_desc_option_0_0,
  &mdice__mdice__enum_functor_desc_option_0_6,
  &mdice__mdice__enum_functor_desc_option_0_4,
  &mdice__mdice__enum_functor_desc_option_0_5,
  &mdice__mdice__enum_functor_desc_option_0_3,
  &mdice__mdice__enum_functor_desc_option_0_7,
  &mdice__mdice__enum_functor_desc_option_0_2,
  &mdice__mdice__enum_functor_desc_option_0_1
};

static const MR_Integer mdice__mdice__functor_number_map_option_0[8] = {
  (MR_Integer) 0,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct mdice__mdice__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdice____Unify____option_0_0_10001)),
  ((MR_Box) (mdice____Compare____option_0_0_10001)),
  (MR_String) "mdice",
  (MR_String) "option",
  { mdice__mdice__enum_name_ordered_option_0 },
  { mdice__mdice__enum_ordinal_ordered_option_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  mdice__mdice__functor_number_map_option_0,

};

static const MR_FA_TypeInfo_Struct2 mdice__tree234__ti_tree234_2mdice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdice__mdice__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

const MR_TypeCtorInfo_Struct mdice__mdice__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdice____Unify____option_table_0_0_10001)),
  ((MR_Box) (mdice____Compare____option_table_0_0_10001)),
  (MR_String) "mdice",
  (MR_String) "option_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdice__tree234__ti_tree234_2mdice__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
mdice____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdice_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mdice____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdice_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mdice____Compare____option_0_0(
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
mdice____Unify____option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mdice__option_default_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&mdice_vector_common_6[0 + slot_0]))->mdice__vector_common_type_6_0__vct_6_f_0;
    *HeadVar__2_2 = ((&mdice_vector_common_6[0 + slot_0]))->mdice__vector_common_type_6_0__vct_6_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 8));
}

static MR_bool MR_CALL 
mdice__long_option_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string4(HeadVar__1_1)) & (MR_Integer) 31);
  MR_String str_1 = ((&mdice_vector_common_5[0 + slot_0]))->mdice__vector_common_type_5_0__vct_5_f_0;

  // hashed string simple lookup switch
  ;
  // compute the hash value of the input string
  ;
  // no collisions; no hash chain loop
  ;
  // lookup the string for this hash slot
  ;
  // did we find a match?
  ;
  if ((((str_1 != NULL)) && ((strcmp(str_1, HeadVar__1_1) == 0))))
  {
    // we found a match; look up the results
    ;
    *HeadVar__2_2 = ((&mdice_vector_common_5[0 + slot_0]))->mdice__vector_common_type_5_0__vct_5_f_1;
    succeeded = MR_TRUE;
    // jump out of search loop
    ;
    goto label_0;
  }
  succeeded = MR_FALSE;
label_0:;
  return succeeded;
}

static MR_bool MR_CALL 
mdice__short_option_2_p_0(
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
    case (MR_Char) 102:
      {
        *HeadVar__2_2 = (MR_Integer) 6;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 104:
      {
        *HeadVar__2_2 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 108:
      {
        *HeadVar__2_2 = (MR_Integer) 3;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 109:
      {
        *HeadVar__2_2 = (MR_Integer) 7;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 110:
      {
        *HeadVar__2_2 = (MR_Integer) 4;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 112:
      {
        *HeadVar__2_2 = (MR_Integer) 5;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 115:
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
  struct mdice__main_2_p_0_4_env_0_s * env_ptr = (struct mdice__main_2_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdice__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdice__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
  *((env_ptr)->mdice__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdice__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
  ((env_ptr)->mdice__main_2_p_0_4_env_0__cont)((env_ptr)->mdice__main_2_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdice__main_2_p_0_4_env_0_s env;

  (env).mdice__main_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdice__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdice__main_2_p_0_4_env_0__cont = cont;
  (env).mdice__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdice__option_default_2_p_0(&(env).mdice__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mdice__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &env);
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

  succeeded = mdice__long_option_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
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

  succeeded = mdice__short_option_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
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
  MR_Word Args0_5;
  MR_Word Args_7;
  MR_Word GetoptResult_8;

  mercury__io__stdout_stream_3_p_0(&StdOutStream_4);
  mdbcomp__shared_utilities__unlimit_stack_2_p_0();
  mercury__io__command_line_arguments_3_p_0(&Args0_5);
  mercury__getopt__process_options_4_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), (MR_Word) (MR_mkword(2, &mdice_scalar_common_1[4])), Args0_5, &Args_7, &GetoptResult_8);
  if (((MR_tag((MR_Word) GetoptResult_8)) == (MR_Integer) 1))
  {
    MR_Word GetoptError_18 = ((MR_Word) ((MR_hl_field(1, GetoptResult_8, 0))));
    MR_String GetoptErrorMsg_19;
    MR_Word StdErrStream_52;

    GetoptErrorMsg_19 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), GetoptError_18);
    mercury__io__stderr_stream_3_p_0(&StdErrStream_52);
    mercury__io__write_string_4_p_0(StdErrStream_52, GetoptErrorMsg_19);
    mercury__io__write_string_4_p_0(StdErrStream_52, (MR_String) "\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word OptionTable_9 = ((MR_Word) ((MR_hl_field(0, GetoptResult_8, 0))));
    MR_Word Var_60;

    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 0)), &Var_60);
    succeeded = ((MR_Integer) 1 == Var_60);
    if (succeeded)
    {
      mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "Name: mdice - Mercury dice tool\n");
      mercury__io__write_strings_4_p_0(StdOutStream_4, (MR_Word) (MR_mkword(1, &mdice_scalar_common_2[26])));
      mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "\nUsage: mdice [<options>] <passfile> <failfile>\n");
      mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "\nDescription:\n");
      mercury__io__write_prefixed_lines_5_p_0(StdOutStream_4, (MR_String) "\t", (MR_Word) (MR_mkword(1, &mdice_scalar_common_2[3])));
      mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "\nArguments:\n");
      mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "\tArguments are assumed to Mercury trace count files.\n");
      mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "\nOptions:\n");
      mercury__io__write_prefixed_lines_5_p_0(StdOutStream_4, (MR_String) "\t", (MR_Word) (MR_mkword(1, &mdice_scalar_common_2[24])));
    }
    else
    {
      MR_Word Var_61;

      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 1)), &Var_61);
      succeeded = ((MR_Integer) 1 == Var_61);
      if (succeeded)
      {
        MR_String Version_99;
        MR_String Package_100;

        Version_99 = mercury__library__mercury_version_0_f_0();
        mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) "Mercury dice tool, version ");
        mercury__io__write_string_4_p_0(StdOutStream_4, Version_99);
        Package_100 = mercury__library__package_version_0_f_0();
        succeeded = (strcmp(Package_100, (MR_String) "") == 0);
        if (succeeded)
          mercury__io__nl_3_p_0(StdOutStream_4);
        else
        {
          mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) " (");
          mercury__io__write_string_4_p_0(StdOutStream_4, Package_100);
          mercury__io__write_string_4_p_0(StdOutStream_4, (MR_String) ")\n");
        }
        mercury__io__write_strings_4_p_0(StdOutStream_4, (MR_Word) (MR_mkword(1, &mdice_scalar_common_2[26])));
      }
      else
      if ((Args_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word StdErrStream_15;

        mercury__io__stderr_stream_3_p_0(&StdErrStream_15);
        mercury__io__write_strings_4_p_0(StdErrStream_15, (MR_Word) (MR_mkword(1, &mdice_scalar_common_2[1])));
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
      else
      {
        MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, Args_7, 1))));
        MR_String Var_75 = ((MR_String) ((MR_hl_field(1, Args_7, 0))));

        if ((Var_74 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word StdErrStream_62;

          mercury__io__stderr_stream_3_p_0(&StdErrStream_62);
          mercury__io__write_strings_4_p_0(StdErrStream_62, (MR_Word) (MR_mkword(1, &mdice_scalar_common_2[1])));
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        else
        {
          MR_Word Var_76 = ((MR_Word) ((MR_hl_field(1, Var_74, 1))));
          MR_String Var_77 = ((MR_String) ((MR_hl_field(1, Var_74, 0))));

          if ((Var_76 == (MR_Word) ((MR_Unsigned) 0U)))
            mdice__compute_and_output_dice_6_p_0(StdOutStream_4, OptionTable_9, Var_75, Var_77);
          else
          {
            MR_Word StdErrStream_66;

            mercury__io__stderr_stream_3_p_0(&StdErrStream_66);
            mercury__io__write_strings_4_p_0(StdErrStream_66, (MR_Word) (MR_mkword(1, &mdice_scalar_common_2[1])));
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
        }
      }
    }
  }
}

static void MR_CALL 
mdice__compute_and_output_dice_6_p_0(
  MR_Word StdOutStream_7,
  MR_Word OptionTable_8,
  MR_String PassFileName_9,
  MR_String FailFileName_10)
{
  MR_bool succeeded;
  MR_String SortStr_12;
  MR_String Module_13;
  MR_Integer MaxRow_14;
  MR_Integer MaxNameColumnWidth_15;
  MR_Integer MaxPathColumnWidth_16;
  MR_Integer MaxFileColumnWidth_17;
  MR_Word MaybeMaxNameColumnWidth_18;
  MR_Word MaybeMaxPathColumnWidth_19;
  MR_Word MaybeMaxFileColumnWidth_20;
  MR_String DiceStr_21;
  MR_String Problem_22;

  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_8, ((MR_Box) ((MR_Integer) 2)), &SortStr_12);
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_8, ((MR_Box) ((MR_Integer) 7)), &Module_13);
  mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_8, ((MR_Box) ((MR_Integer) 3)), &MaxRow_14);
  mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_8, ((MR_Box) ((MR_Integer) 4)), &MaxNameColumnWidth_15);
  mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_8, ((MR_Box) ((MR_Integer) 5)), &MaxPathColumnWidth_16);
  mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&mdice__mdice__type_ctor_info_option_0), OptionTable_8, ((MR_Box) ((MR_Integer) 6)), &MaxFileColumnWidth_17);
  succeeded = (MaxNameColumnWidth_15 == (MR_Integer) 0);
  if (succeeded)
    MaybeMaxNameColumnWidth_18 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      MaybeMaxNameColumnWidth_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeMaxNameColumnWidth_18, 0) = ((MR_Box) (MaxNameColumnWidth_15));
    }
  succeeded = (MaxPathColumnWidth_16 == (MR_Integer) 0);
  if (succeeded)
    MaybeMaxPathColumnWidth_19 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      MaybeMaxPathColumnWidth_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeMaxPathColumnWidth_19, 0) = ((MR_Box) (MaxPathColumnWidth_16));
    }
  succeeded = (MaxFileColumnWidth_17 == (MR_Integer) 0);
  if (succeeded)
    MaybeMaxFileColumnWidth_20 = (MR_Word) ((MR_Unsigned) 0U);
  else
    {
      MaybeMaxFileColumnWidth_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeMaxFileColumnWidth_20, 0) = ((MR_Box) (MaxFileColumnWidth_17));
    }
  mdbcomp__slice_and_dice__read_dice_to_string_12_p_0(PassFileName_9, FailFileName_10, SortStr_12, MaxRow_14, MaybeMaxNameColumnWidth_18, MaybeMaxPathColumnWidth_19, MaybeMaxFileColumnWidth_20, Module_13, &DiceStr_21, &Problem_22);
  succeeded = (strcmp(Problem_22, (MR_String) "") == 0);
  if (succeeded)
    mercury__io__write_string_4_p_0(StdOutStream_7, DiceStr_21);
  else
  {
    MR_Word StdErrStream_23;

    mercury__io__stderr_stream_3_p_0(&StdErrStream_23);
    mercury__io__write_string_4_p_0(StdErrStream_23, Problem_22);
    mercury__io__write_string_4_p_0(StdErrStream_23, (MR_String) "\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
}

static MR_bool MR_CALL 
mdice____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdice____Unify____option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdice____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdice____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdice____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdice____Unify____option_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdice____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdice____Compare____option_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdice__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module mdice.
