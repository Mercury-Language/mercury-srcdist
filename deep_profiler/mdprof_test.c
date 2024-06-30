/*
** Automatically generated from `mdprof_test.m'
** by the Mercury compiler,
** version rotd-2024-06-30
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


// :- module mdprof_test.
// :- implementation.

/*
INIT mercury__mdprof_test__init
ENDINIT
*/

#include "mdprof_test.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "conf.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dump.mih"
#include "enum.mih"
#include "exclude.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "library.mih"
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
#include "query.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "startup.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "io.call_system.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct mdprof_test__main_2_p_0_4_env_0_s {
  MR_Box * mdprof_test__main_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mdprof_test__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mdprof_test__main_2_p_0_4_env_0__cont;
  void * mdprof_test__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mdprof_test__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mdprof_test__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_FA_PseudoTypeInfo_Struct2 mdprof_test__tree234__pti_tree234_2__plain_mdprof_test__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_2;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_3;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_4;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_5;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_6;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_7;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_8;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_9;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_10;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_11;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_12;

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_ordinal_ordered_option_0[13];

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_name_ordered_option_0[13];

static const MR_Integer mdprof_test__mdprof_test__functor_number_map_option_0[13];

static const MR_FA_TypeInfo_Struct2 mdprof_test__tree234__ti_tree234_2mdprof_test__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_options_0_0;

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_ordinal_ordered_options_0[1];

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_name_ordered_options_0[1];

static const MR_Integer mdprof_test__mdprof_test__functor_number_map_options_0[1];

static void MR_CALL 
mdprof_test____Compare____options_0_0(
  MR_Word * HeadVar__1_1);

static void MR_CALL 
mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1);

static MR_bool MR_CALL 
mdprof_test____Unify____options_0_0(void);

static void MR_CALL 
mdprof_test____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_test____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_test____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_test____Unify____option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_test__defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdprof_test__long_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdprof_test__short_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mdprof_test__verify_profile_2_6_p_0(
  MR_Word ErrorStream_7,
  MR_String ProgName_8,
  MR_Word Options_9,
  MR_String FileName_10);

static void MR_CALL 
main_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
mdprof_test__write_version_message_4_p_0(
  MR_Word OutputStream_5,
  MR_String ProgName_6);

static void MR_CALL 
mdprof_test__main_2_6_p_0(
  MR_Word ErrorStream_7,
  MR_String ProgName_8,
  MR_Word Args_9,
  MR_Word Options_10);

static void MR_CALL 
mdprof_test__test_server_5_p_0(
  MR_Word Pref_6,
  MR_Word Deep_7,
  MR_Word Options_8);

static void MR_CALL 
mdprof_test__test_recursion_types_histogram_5_p_0(
  MR_Word Pref_6,
  MR_Word Deep_7,
  MR_Word Options_8);

static void MR_CALL 
mdprof_test__test_procrep_dynamic_coverages_7_p_0(
  MR_Integer Cur_8,
  MR_Integer Max_9,
  MR_Word Pref_10,
  MR_Word Deep_11,
  MR_Word Options_12);

static void MR_CALL 
mdprof_test__test_procrep_static_coverages_7_p_0(
  MR_Integer Cur_8,
  MR_Integer Max_9,
  MR_Word Pref_10,
  MR_Word Deep_11,
  MR_Word Options_12);

static void MR_CALL 
mdprof_test__write_test_html_6_p_0(
  MR_Word Options_7,
  MR_String BaseName_8,
  MR_Integer Num_9,
  MR_String HTML_10);

static void MR_CALL 
mdprof_test__write_help_message_4_p_0(
  MR_Word OutputStream_5,
  MR_String ProgName_6);

static MR_bool MR_CALL 
mdprof_test____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_test____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_test____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_test____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_test____Unify____options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_test____Compare____options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdprof_test_scalar_common_1[5][3];

static /* final */ const MR_Box mdprof_test_scalar_common_2[3][2];

static /* final */ const MR_Box mdprof_test_scalar_common_3[3][1];

static /* final */ const MR_Box mdprof_test_scalar_common_4[3][5];

static /* final */ const MR_Box mdprof_test_scalar_common_5[1][9];


struct mdprof_test__vector_common_type_6_0_s {
  const MR_String mdprof_test__vector_common_type_6_0__vct_6_f_0;
  const MR_Word mdprof_test__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct mdprof_test__vector_common_type_6_0_s mdprof_test_vector_common_6[64];

struct mdprof_test__vector_common_type_7_0_s {
  const MR_Word mdprof_test__vector_common_type_7_0__vct_7_f_0;
  const MR_Word mdprof_test__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct mdprof_test__vector_common_type_7_0_s mdprof_test_vector_common_7[13];



static /* final */ const MR_Box mdprof_test_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdprof_test__mdprof_test__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdprof_test_scalar_common_4[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdprof_test_scalar_common_4[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdprof_test_scalar_common_4[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mdprof_test_scalar_common_1[1])),
    ((MR_Box) (&mdprof_test_scalar_common_1[2])),
    ((MR_Box) (&mdprof_test_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mdprof_test_scalar_common_2[3][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "Deep.data")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "deep_test"))
  },
};

static /* final */ const MR_Box mdprof_test_scalar_common_3[3][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 1U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box mdprof_test_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdprof_test__mdprof_test__type_ctor_info_option_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_test__mdprof_test__type_ctor_info_option_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_test__mdprof_test__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mdprof_test_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_test__tree234__pti_tree234_2__plain_mdprof_test__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct mdprof_test__vector_common_type_6_0_s mdprof_test_vector_common_6[64] = {
  /* row   0 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
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
    (MR_String) "version",
    (MR_Integer) 8
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
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  11 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
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
    (MR_String) "test",
    (MR_Integer) 5
  },
  /* row  17 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  18 */
  {
    (MR_String) "recursion-types-histogram",
    (MR_Integer) 12
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
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  22 */
  {
    (MR_String) "static-procrep-coverage",
    (MR_Integer) 10
  },
  /* row  23 */
  {
    (MR_String) "dump-options",
    (MR_Integer) 2
  },
  /* row  24 */
  {
    (MR_String) "test-dir",
    (MR_Integer) 6
  },
  /* row  25 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  26 */
  {
    (MR_String) "dynamic-procrep-coverage",
    (MR_Integer) 11
  },
  /* row  27 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  28 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  29 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  30 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  31 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  32 */
  {
    (MR_String) "compress",
    (MR_Integer) 3
  },
  /* row  33 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  34 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  35 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  36 */
  {
    (MR_String) "canonical-clique",
    (MR_Integer) 0
  },
  /* row  37 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  38 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  39 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  40 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  41 */
  {
    (MR_String) "verify-profile",
    (MR_Integer) 9
  },
  /* row  42 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  43 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  44 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  45 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  46 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  47 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  48 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  49 */
  {
    (MR_String) "verbose",
    (MR_Integer) 7
  },
  /* row  50 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  51 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  52 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  53 */
  {
    (MR_String) "help",
    (MR_Integer) 4
  },
  /* row  54 */
  {
    (MR_String) "dump",
    (MR_Integer) 1
  },
  /* row  55 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  56 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  57 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  58 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  59 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  60 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  61 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  62 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
  /* row  63 */
  {
    NULL,
    (MR_Word) ((MR_Integer) 0)
  },
};

static /* final */ const struct mdprof_test__vector_common_type_7_0_s mdprof_test_vector_common_7[13] = {
  /* row   0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(1, &mdprof_test_scalar_common_3[1]))
  },
  /* row   1 */
  {
    (MR_Integer) 3,
    (MR_Word) (MR_mkword(1, &mdprof_test_scalar_common_3[2]))
  },
  /* row   2 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(3, &mdprof_test_scalar_common_2[1]))
  },
  /* row   3 */
  {
    (MR_Integer) 2,
    (MR_Word) (MR_mkword(3, &mdprof_test_scalar_common_2[1]))
  },
  /* row   4 */
  {
    (MR_Integer) 4,
    (MR_Word) (MR_mkword(1, &mdprof_test_scalar_common_3[1]))
  },
  /* row   5 */
  {
    (MR_Integer) 5,
    (MR_Word) (MR_mkword(1, &mdprof_test_scalar_common_3[1]))
  },
  /* row   6 */
  {
    (MR_Integer) 6,
    (MR_Word) (MR_mkword(3, &mdprof_test_scalar_common_2[2]))
  },
  /* row   7 */
  {
    (MR_Integer) 7,
    (MR_Word) (MR_mkword(1, &mdprof_test_scalar_common_3[1]))
  },
  /* row   8 */
  {
    (MR_Integer) 8,
    (MR_Word) (MR_mkword(1, &mdprof_test_scalar_common_3[1]))
  },
  /* row   9 */
  {
    (MR_Integer) 9,
    (MR_Word) (MR_mkword(1, &mdprof_test_scalar_common_3[1]))
  },
  /* row  10 */
  {
    (MR_Integer) 10,
    (MR_Word) (MR_mkword(1, &mdprof_test_scalar_common_3[1]))
  },
  /* row  11 */
  {
    (MR_Integer) 11,
    (MR_Word) (MR_mkword(1, &mdprof_test_scalar_common_3[1]))
  },
  /* row  12 */
  {
    (MR_Integer) 12,
    (MR_Word) (MR_mkword(1, &mdprof_test_scalar_common_3[1]))
  },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"


static const MR_FA_PseudoTypeInfo_Struct2 mdprof_test__tree234__pti_tree234_2__plain_mdprof_test__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdprof_test__mdprof_test__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_0 = {
  (MR_String) "canonical_clique",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_1 = {
  (MR_String) "dump",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_2 = {
  (MR_String) "dump_options",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_3 = {
  (MR_String) "compress",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_4 = {
  (MR_String) "help",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_5 = {
  (MR_String) "test",
  INT32_C(5)
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_6 = {
  (MR_String) "test_dir",
  INT32_C(6)
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_7 = {
  (MR_String) "verbose",
  INT32_C(7)
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_8 = {
  (MR_String) "version",
  INT32_C(8)
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_9 = {
  (MR_String) "verify_profile",
  INT32_C(9)
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_10 = {
  (MR_String) "static_procrep_coverage",
  INT32_C(10)
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_11 = {
  (MR_String) "dynamic_procrep_coverage",
  INT32_C(11)
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_12 = {
  (MR_String) "recursion_types_histogram",
  INT32_C(12)
};

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_ordinal_ordered_option_0[13] = {
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_0,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_1,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_2,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_3,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_4,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_5,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_6,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_7,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_8,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_9,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_10,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_11,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_12
};

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_name_ordered_option_0[13] = {
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_0,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_3,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_1,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_2,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_11,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_4,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_12,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_10,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_5,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_6,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_7,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_9,
  &mdprof_test__mdprof_test__enum_functor_desc_option_0_8
};

static const MR_Integer mdprof_test__mdprof_test__functor_number_map_option_0[13] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 12,
  (MR_Integer) 11,
  (MR_Integer) 7,
  (MR_Integer) 4,
  (MR_Integer) 6
};

const MR_TypeCtorInfo_Struct mdprof_test__mdprof_test__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_test____Unify____option_0_0_10001)),
  ((MR_Box) (mdprof_test____Compare____option_0_0_10001)),
  (MR_String) "mdprof_test",
  (MR_String) "option",
  { mdprof_test__mdprof_test__enum_name_ordered_option_0 },
  { mdprof_test__mdprof_test__enum_ordinal_ordered_option_0 },
  (MR_Integer) 13,
  UINT16_C(12),
  mdprof_test__mdprof_test__functor_number_map_option_0,

};

static const MR_FA_TypeInfo_Struct2 mdprof_test__tree234__ti_tree234_2mdprof_test__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdprof_test__mdprof_test__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

const MR_TypeCtorInfo_Struct mdprof_test__mdprof_test__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdprof_test____Unify____option_table_0_0_10001)),
  ((MR_Box) (mdprof_test____Compare____option_table_0_0_10001)),
  (MR_String) "mdprof_test",
  (MR_String) "option_table",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdprof_test__tree234__ti_tree234_2mdprof_test__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_options_0_0 = {
  (MR_String) "options",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_ordinal_ordered_options_0[1] = { &mdprof_test__mdprof_test__enum_functor_desc_options_0_0 };

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_name_ordered_options_0[1] = { &mdprof_test__mdprof_test__enum_functor_desc_options_0_0 };

static const MR_Integer mdprof_test__mdprof_test__functor_number_map_options_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdprof_test__mdprof_test__type_ctor_info_options_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mdprof_test____Unify____options_0_0_10001)),
  ((MR_Box) (mdprof_test____Compare____options_0_0_10001)),
  (MR_String) "mdprof_test",
  (MR_String) "options",
  { mdprof_test__mdprof_test__enum_name_ordered_options_0 },
  { mdprof_test__mdprof_test__enum_ordinal_ordered_options_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdprof_test__mdprof_test__functor_number_map_options_0,

};

static void MR_CALL 
mdprof_test____Compare____options_0_0(
  MR_Word * HeadVar__1_1)
{
  mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

static void MR_CALL 
mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
mdprof_test____Unify____options_0_0(void)
{
  return MR_TRUE;
}

static void MR_CALL 
mdprof_test____Compare____option_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdprof_test_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
mdprof_test____Unify____option_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdprof_test_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
mdprof_test____Compare____option_0_0(
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
mdprof_test____Unify____option_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mdprof_test__defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer slot_0 = (MR_Integer) 0;

  do
  {
    *HeadVar__1_1 = ((&mdprof_test_vector_common_7[0 + slot_0]))->mdprof_test__vector_common_type_7_0__vct_7_f_0;
    *HeadVar__2_2 = ((&mdprof_test_vector_common_7[0 + slot_0]))->mdprof_test__vector_common_type_7_0__vct_7_f_1;
    cont(cont_env_ptr);
    slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
  }
  while ((slot_0 < (MR_Integer) 13));
}

static MR_bool MR_CALL 
mdprof_test__long_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer slot_0 = ((MR_hash_string5(HeadVar__1_1)) & (MR_Integer) 63);
  MR_String str_1 = ((&mdprof_test_vector_common_6[0 + slot_0]))->mdprof_test__vector_common_type_6_0__vct_6_f_0;

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
    *HeadVar__2_2 = ((&mdprof_test_vector_common_6[0 + slot_0]))->mdprof_test__vector_common_type_6_0__vct_6_f_1;
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
mdprof_test__short_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (HeadVar__1_1) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Char) 68:
      {
        *HeadVar__2_2 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 84:
      {
        *HeadVar__2_2 = (MR_Integer) 5;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 99:
      {
        *HeadVar__2_2 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 100:
      {
        *HeadVar__2_2 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Char) 118:
      {
        *HeadVar__2_2 = (MR_Integer) 7;
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
mdprof_test__verify_profile_2_6_p_0(
  MR_Word ErrorStream_7,
  MR_String ProgName_8,
  MR_Word Options_9,
  MR_String FileName_10)
{
  MR_Word Canonical_12;
  MR_String ScriptName_14;
  MR_Word Res_15;
  MR_Word Var_24;

  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_9, ((MR_Box) ((MR_Integer) 0)), &Canonical_12);
  conf__script_name_3_p_0(&ScriptName_14);
  Var_24 = dump__default_dump_options_0_f_0();
  startup__read_and_startup_10_p_0((MR_String) "dummy_server", ScriptName_14, FileName_10, Canonical_12, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Var_24, &Res_15);
  if (((MR_tag((MR_Word) Res_15)) == (MR_Integer) 1))
  {
    MR_String Error_17 = ((MR_String) ((MR_hl_field(1, Res_15, (MR_Integer) 0))));

    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    mercury__io__write_string_4_p_0(ErrorStream_7, ProgName_8);
    mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) ": error reading ");
    mercury__io__write_string_4_p_0(ErrorStream_7, FileName_10);
    mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) ": ");
    mercury__io__write_string_4_p_0(ErrorStream_7, Error_17);
    mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) "\n");
  }
}

static void MR_CALL 
main_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdprof_test__verify_profile_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)));
}

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg)
{
  struct mdprof_test__main_2_p_0_4_env_0_s * env_ptr = (struct mdprof_test__main_2_p_0_4_env_0_s *) (env_ptr_arg);

  *((env_ptr)->mdprof_test__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdprof_test__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
  *((env_ptr)->mdprof_test__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdprof_test__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
  ((env_ptr)->mdprof_test__main_2_p_0_4_env_0__cont)((env_ptr)->mdprof_test__main_2_p_0_4_env_0__cont_env_ptr);
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mdprof_test__main_2_p_0_4_env_0_s env;

  (env).mdprof_test__main_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).mdprof_test__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
  (env).mdprof_test__main_2_p_0_4_env_0__cont = cont;
  (env).mdprof_test__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    mdprof_test__defaults_2_p_0(&(env).mdprof_test__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mdprof_test__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &env);
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

  succeeded = mdprof_test__long_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
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

  succeeded = mdprof_test__short_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
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

  mercury__io__progname_base_4_p_0((MR_String) "mdprof_test", &ProgName_4);
  mercury__io__command_line_arguments_3_p_0(&Args0_5);
  mercury__getopt__process_options_4_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), (MR_Word) (MR_mkword(2, &mdprof_test_scalar_common_1[4])), Args0_5, &Args_6, &MaybeOptions_7);
  mercury__io__stdout_stream_3_p_0(&StdOut_8);
  mercury__io__stderr_stream_3_p_0(&StdErr_9);
  if (((MR_tag((MR_Word) MaybeOptions_7)) == (MR_Integer) 1))
  {
    MR_Word Error_14 = ((MR_Word) ((MR_hl_field(1, MaybeOptions_7, (MR_Integer) 0))));
    MR_String Msg_15;

    Msg_15 = mercury__getopt__option_error_to_string_1_f_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Error_14);
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    mercury__io__write_string_4_p_0(StdErr_9, ProgName_4);
    mercury__io__write_string_4_p_0(StdErr_9, (MR_String) ": error parsing options: ");
    mercury__io__write_string_4_p_0(StdErr_9, Msg_15);
    mercury__io__write_string_4_p_0(StdErr_9, (MR_String) "\n");
  }
  else
  {
    MR_Word Options_10 = ((MR_Word) ((MR_hl_field(0, MaybeOptions_7, (MR_Integer) 0))));
    MR_Word Help_11;
    MR_Word Version_12;
    MR_Word Verify_13;

    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 4)), &Help_11);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 8)), &Version_12);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 9)), &Verify_13);
    switch (Help_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(StdOut_8, (MR_String) "Usage: ");
          mercury__io__write_string_4_p_0(StdOut_8, ProgName_4);
          mercury__io__write_string_4_p_0(StdOut_8, (MR_String) " [<options>] <filename>\n");
          mercury__io__write_string_4_p_0(StdOut_8, (MR_String) "<filename> must name a deep profiling data file.\nYou should specify one of the following options:\n--help      Generate this help message.\n--version   Report the" " program\'s version number.\n--verbose   Generate progress messages during startup.\n--test      Test the deep profiler, generating all\n\t\t\tpossible web pages of th" "e popular types.\n--verify-profile\n\t\t\tVerify that <filename> is a well-formed deep profiling\n\t\t\tdata file.\n\nYou may also specify the following options:.\n--test-d" "ir <dirname>\n\t\t\tPut the generated web pages into <dirname>.\n--no-compress\n\t\t\tDon\'t compress the resulting files, this speeds the test.\n--procrep-coverage\n\t\t\tRun" " the procrep coverage query on every static procedure\n--recursion-types-histogram\n\t\t\tRun the recursion types histogram query\n");
        }
        break;
    }
    switch (Version_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        mdprof_test__write_version_message_4_p_0(StdOut_8, ProgName_4);
        break;
    }
    succeeded = (Help_11 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (Version_12 == (MR_Integer) 0);
    if (succeeded)
      switch (Verify_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mdprof_test__main_2_6_p_0(StdErr_9, ProgName_4, Args_6, Options_10);
          break;
        case (MR_Integer) 1:
          {
            MR_Word Args_103;
            MR_Word Var_104;
            MR_Box conv4_STATE_VARIABLE_IO_17;

            if ((Args_6 == (MR_Word) ((MR_Unsigned) 0U)))
              Args_103 = (MR_Word) (MR_mkword(1, &mdprof_test_scalar_common_2[0]));
            else
              Args_103 = Args_6;
            {
              Var_104 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_104, 0) = ((MR_Box) (&mdprof_test_scalar_common_5[0]));
              MR_hl_field(0, Var_104, 1) = ((MR_Box) (main_2_p_0_5));
              MR_hl_field(0, Var_104, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_104, 3) = ((MR_Box) (StdErr_9));
              MR_hl_field(0, Var_104, 4) = ((MR_Box) (ProgName_4));
              MR_hl_field(0, Var_104, 5) = ((MR_Box) (Options_10));
            }
            mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_104, Args_103, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_17);
          }
          break;
      }
  }
}

static void MR_CALL 
mdprof_test__write_version_message_4_p_0(
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
mdprof_test__main_2_6_p_0(
  MR_Word ErrorStream_7,
  MR_String ProgName_8,
  MR_Word Args_9,
  MR_Word Options_10)
{
  MR_bool succeeded = (Args_9 != (MR_Word) ((MR_Unsigned) 0U));
  MR_String FileName_12;
  MR_Word Var_28;

  if (succeeded)
  {
    FileName_12 = ((MR_String) ((MR_hl_field(1, Args_9, (MR_Integer) 0))));
    Var_28 = ((MR_Word) ((MR_hl_field(1, Args_9, (MR_Integer) 1))));
    succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 0U));
  }
  if (succeeded)
  {
    MR_Word Canonical_13;
    MR_Word Verbose_14;
    MR_Word DumpStages_15;
    MR_Word DumpArrayOptionsStr_16;
    MR_Word DumpOptions_17;
    MR_String Machine_18;
    MR_String ScriptName_19;
    MR_Word MaybeOutput_20;
    MR_Word StartupResult_22;

    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 0)), &Canonical_13);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 7)), &Verbose_14);
    mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 1)), &DumpStages_15);
    mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 2)), &DumpArrayOptionsStr_16);
    dump__dump_array_options_to_dump_options_2_p_0(DumpArrayOptionsStr_16, &DumpOptions_17);
    conf__server_name_port_3_p_0(&Machine_18);
    conf__script_name_3_p_0(&ScriptName_19);
    switch (Verbose_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeOutput_20 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Word Stdout_21;

          mercury__io__stdout_stream_3_p_0(&Stdout_21);
          {
            MaybeOutput_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeOutput_20, 0) = ((MR_Box) (Stdout_21));
          }
        }
        break;
    }
    startup__read_and_startup_10_p_0(Machine_18, ScriptName_19, FileName_12, Canonical_13, MaybeOutput_20, DumpStages_15, DumpOptions_17, &StartupResult_22);
    if (((MR_tag((MR_Word) StartupResult_22)) == (MR_Integer) 1))
    {
      MR_String Error_25 = ((MR_String) ((MR_hl_field(1, StartupResult_22, (MR_Integer) 0))));

      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      mercury__io__write_string_4_p_0(ErrorStream_7, ProgName_8);
      mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) ": error reading ");
      mercury__io__write_string_4_p_0(ErrorStream_7, FileName_12);
      mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) ": ");
      mercury__io__write_string_4_p_0(ErrorStream_7, Error_25);
      mercury__io__write_string_4_p_0(ErrorStream_7, (MR_String) "\n");
    }
    else
    {
      MR_Word Deep_23 = ((MR_Word) ((MR_hl_field(0, StartupResult_22, (MR_Integer) 0))));
      MR_Word Test_24;

      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 5)), &Test_24);
      switch (Test_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_38;

            Var_38 = query__default_preferences_1_f_0(Deep_23);
            mdprof_test__test_server_5_p_0(Var_38, Deep_23, Options_10);
          }
          break;
      }
    }
  }
  else
  {
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    mdprof_test__write_help_message_4_p_0(ErrorStream_7, ProgName_8);
  }
}

static void MR_CALL 
mdprof_test__test_server_5_p_0(
  MR_Word Pref_6,
  MR_Word Deep_7,
  MR_Word Options_8)
{
  MR_String DirName_10;
  MR_String Cmd_11;
  MR_Word StaticProcrepCoverage_13;
  MR_Word DynamicProcrepCoverage_15;
  MR_Word RecTypesHistogram_17;
  MR_String Var_99;
  MR_String Var_100;
  MR_Word Var_12;

  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 6)), &DirName_10);
  Var_99 = mercury__string__f_43_43_2_f_0((MR_String) " || mkdir -p ", DirName_10);
  Var_100 = mercury__string__f_43_43_2_f_0(DirName_10, Var_99);
  Cmd_11 = mercury__string__f_43_43_2_f_0((MR_String) "test -d ", Var_100);
  mercury__io__call_system__call_system_4_p_0(Cmd_11, &Var_12);
  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 10)), &StaticProcrepCoverage_13);
  switch (StaticProcrepCoverage_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer NumProcStatics_14;
        MR_ArrayPtr Var_29 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_7, (MR_Integer) 8))));

        mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_static_0), (MR_ArrayPtr) (Var_29), &NumProcStatics_14);
        mdprof_test__test_procrep_static_coverages_7_p_0((MR_Integer) 1, NumProcStatics_14, Pref_6, Deep_7, Options_8);
      }
      break;
  }
  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 11)), &DynamicProcrepCoverage_15);
  switch (DynamicProcrepCoverage_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer NumProcDynamics_16;
        MR_ArrayPtr Var_33 = ((MR_ArrayPtr) ((MR_hl_field(0, Deep_7, (MR_Integer) 6))));

        mercury__array__max_2_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_ArrayPtr) (Var_33), &NumProcDynamics_16);
        mdprof_test__test_procrep_dynamic_coverages_7_p_0((MR_Integer) 1, NumProcDynamics_16, Pref_6, Deep_7, Options_8);
      }
      break;
  }
  mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_8, ((MR_Box) ((MR_Integer) 12)), &RecTypesHistogram_17);
  switch (RecTypesHistogram_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      mdprof_test__test_recursion_types_histogram_5_p_0(Pref_6, Deep_7, Options_8);
      break;
  }
}

static void MR_CALL 
mdprof_test__test_recursion_types_histogram_5_p_0(
  MR_Word Pref_6,
  MR_Word Deep_7,
  MR_Word Options_8)
{
  MR_String HTML_10;

  query__try_exec_4_p_0((MR_Word) ((MR_Unsigned) 12U), Pref_6, Deep_7, &HTML_10);
  mdprof_test__write_test_html_6_p_0(Options_8, (MR_String) "recursion_types_histogram", (MR_Integer) 1, HTML_10);
}

static void MR_CALL 
mdprof_test__test_procrep_dynamic_coverages_7_p_0(
  MR_Integer Cur_8,
  MR_Integer Max_9,
  MR_Word Pref_10,
  MR_Word Deep_11,
  MR_Word Options_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Cur_8 <= Max_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_String HTML_14;
      MR_Word Var_17;
      MR_Word Var_18 = (MR_Word) (Cur_8);
      MR_Integer Var_21;
      MR_Integer next_value_of_Cur_8;

      {
        Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(3, Var_17, 1) = ((MR_Box) (Var_18));
      }
      query__try_exec_4_p_0(Var_17, Pref_10, Deep_11, &HTML_14);
      mdprof_test__write_test_html_6_p_0(Options_12, (MR_String) "procrep_static_coverage", Cur_8, HTML_14);
      Var_21 = (MR_Integer) ((MR_Unsigned) Cur_8 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_8 = Var_21;
      Cur_8 = next_value_of_Cur_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mdprof_test__test_procrep_static_coverages_7_p_0(
  MR_Integer Cur_8,
  MR_Integer Max_9,
  MR_Word Pref_10,
  MR_Word Deep_11,
  MR_Word Options_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Cur_8 <= Max_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_String HTML_14;
      MR_Word Var_17;
      MR_Word Var_18 = (MR_Word) (Cur_8);
      MR_Integer Var_21;
      MR_Integer next_value_of_Cur_8;

      {
        Var_17 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_17, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, Var_17, 1) = ((MR_Box) (Var_18));
      }
      query__try_exec_4_p_0(Var_17, Pref_10, Deep_11, &HTML_14);
      mdprof_test__write_test_html_6_p_0(Options_12, (MR_String) "procrep_dynamic_coverage", Cur_8, HTML_14);
      Var_21 = (MR_Integer) ((MR_Unsigned) Cur_8 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Cur_8 = Var_21;
      Cur_8 = next_value_of_Cur_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mdprof_test__write_test_html_6_p_0(
  MR_Word Options_7,
  MR_String BaseName_8,
  MR_Integer Num_9,
  MR_String HTML_10)
{
  MR_bool succeeded;
  MR_Integer Bunch_12;
  MR_String DirName_13;
  MR_String BunchName_14;
  MR_String FileName_17;
  MR_Word Res_18;
  MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) Num_9 - (MR_Unsigned) 1);
  MR_String Var_67;
  MR_String Var_76;
  MR_String Var_77;
  MR_String Var_79;
  MR_String Var_85;
  MR_String Var_93;
  MR_String Var_95;
  MR_String Var_96;
  MR_String Var_98;
  MR_Integer Var_39;
  MR_Integer Var_40;

  Bunch_12 = mercury__int__f_47_47_2_f_0(Var_27, (MR_Integer) 1000);
  mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_7, ((MR_Box) ((MR_Integer) 6)), &DirName_13);
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&mdprof_test_scalar_common_3[0]), (MR_Integer) 4, Bunch_12, &Var_67);
  Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_67);
  Var_77 = mercury__string__f_43_43_2_f_0(BaseName_8, Var_76);
  Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_77);
  BunchName_14 = mercury__string__f_43_43_2_f_0(DirName_13, Var_79);
  Var_40 = (MR_Integer) ((MR_Unsigned) Num_9 - (MR_Unsigned) 1);
  Var_39 = mercury__int__rem_2_f_0(Var_40, (MR_Integer) 1000);
  succeeded = (Var_39 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_String Cmd_15;
    MR_String Var_81;
    MR_String Var_82;
    MR_Word Var_16;

    Var_81 = mercury__string__f_43_43_2_f_0((MR_String) " || mkdir -p ", BunchName_14);
    Var_82 = mercury__string__f_43_43_2_f_0(BunchName_14, Var_81);
    Cmd_15 = mercury__string__f_43_43_2_f_0((MR_String) "test -d ", Var_82);
    mercury__io__call_system__call_system_4_p_0(Cmd_15, &Var_16);
  }
  mercury__string__format__format_signed_int_component_width_noprec_4_p_0((MR_Word) (&mdprof_test_scalar_common_3[0]), (MR_Integer) 6, Num_9, &Var_85);
  Var_93 = mercury__string__f_43_43_2_f_0(Var_85, (MR_String) ".html");
  Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_93);
  Var_96 = mercury__string__f_43_43_2_f_0(BaseName_8, Var_95);
  Var_98 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_96);
  FileName_17 = mercury__string__f_43_43_2_f_0(BunchName_14, Var_98);
  mercury__io__open_output_4_p_0(FileName_17, &Res_18);
  if (((MR_tag((MR_Word) Res_18)) == (MR_Integer) 1))
  {
    MR_Word Err_23 = ((MR_Word) ((MR_hl_field(1, Res_18, (MR_Integer) 0))));
    MR_String ErrMsg_24;

    mercury__io__error_message_2_p_0(Err_23, &ErrMsg_24);
    {
      mercury__require__error_1_p_0(ErrMsg_24);
      return;
    }
  }
  else
  {
    MR_Word Stream_19 = ((MR_Word) ((MR_hl_field(0, Res_18, (MR_Integer) 0))));
    MR_Word Compress_20;

    mercury__io__write_string_4_p_0(Stream_19, HTML_10);
    mercury__io__close_output_3_p_0(Stream_19);
    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&mdprof_test__mdprof_test__type_ctor_info_option_0), Options_7, ((MR_Box) ((MR_Integer) 3)), &Compress_20);
    switch (Compress_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String GzipCmd_21;
          MR_Word Var_22;

          GzipCmd_21 = mercury__string__f_43_43_2_f_0((MR_String) "gzip ", FileName_17);
          mercury__io__call_system__call_system_4_p_0(GzipCmd_21, &Var_22);
        }
        break;
    }
  }
}

static void MR_CALL 
mdprof_test__write_help_message_4_p_0(
  MR_Word OutputStream_5,
  MR_String ProgName_6)
{
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "Usage: ");
  mercury__io__write_string_4_p_0(OutputStream_5, ProgName_6);
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) " [<options>] <filename>\n");
  mercury__io__write_string_4_p_0(OutputStream_5, (MR_String) "<filename> must name a deep profiling data file.\nYou should specify one of the following options:\n--help      Generate this help message.\n--version   Report the" " program\'s version number.\n--verbose   Generate progress messages during startup.\n--test      Test the deep profiler, generating all\n\t\t\tpossible web pages of th" "e popular types.\n--verify-profile\n\t\t\tVerify that <filename> is a well-formed deep profiling\n\t\t\tdata file.\n\nYou may also specify the following options:.\n--test-d" "ir <dirname>\n\t\t\tPut the generated web pages into <dirname>.\n--no-compress\n\t\t\tDon\'t compress the resulting files, this speeds the test.\n--procrep-coverage\n\t\t\tRun" " the procrep coverage query on every static procedure\n--recursion-types-histogram\n\t\t\tRun the recursion types histogram query\n");
}

static MR_bool MR_CALL 
mdprof_test____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_test____Unify____option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_test____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_test____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_test____Unify____option_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_test____Unify____option_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdprof_test____Compare____option_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_test____Compare____option_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdprof_test____Unify____options_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdprof_test____Unify____options_0_0();
  return succeeded;
}

static void MR_CALL 
mdprof_test____Compare____options_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdprof_test____Compare____options_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdprof_test__init(void)
{
}

void mercury__mdprof_test__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdprof_test__mdprof_test__type_ctor_info_option_0);
	MR_register_type_ctor_info(&mdprof_test__mdprof_test__type_ctor_info_option_table_0);
	MR_register_type_ctor_info(&mdprof_test__mdprof_test__type_ctor_info_options_0);
}

void mercury__mdprof_test__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_test__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdprof_test.
