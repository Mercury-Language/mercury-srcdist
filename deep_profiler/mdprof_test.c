/*
** Automatically generated from `mdprof_test.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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


/* :- module mdprof_test. */
/* :- implementation. */

/*
INIT mercury__mdprof_test__init
ENDINIT
*/

#include "mdprof_test.mih"


#include "conf.mih"
#include "dump.mih"
#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "query.mih"
#include "startup.mih"
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
#include "require.mih"
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

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_value_ordered_option_0[13];

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_name_ordered_option_0[13];

static const MR_Integer mdprof_test__mdprof_test__functor_number_map_option_0[13];

static const MR_FA_TypeInfo_Struct2 mdprof_test__tree234__ti_tree234_2mdprof_test__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_options_0_0;

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_value_ordered_options_0[1];

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_name_ordered_options_0[1];

static const MR_Integer mdprof_test__mdprof_test__functor_number_map_options_0[1];

static void MR_CALL 
mdprof_test____Compare____options_0_0(
  MR_Word * mdprof_test__HeadVar__1_1);

static void MR_CALL 
mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * mdprof_test__HeadVar__1_1);

static MR_bool MR_CALL 
mdprof_test____Unify____options_0_0(void);

static MR_bool MR_CALL 
mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

static void MR_CALL 
mdprof_test____Compare____option_table_0_0(
  MR_Word * mdprof_test__HeadVar__1_1,
  MR_Word mdprof_test__HeadVar__2_2,
  MR_Word mdprof_test__HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_test____Unify____option_table_0_0(
  MR_Word mdprof_test__HeadVar__1_1,
  MR_Word mdprof_test__HeadVar__2_2);

static void MR_CALL 
mdprof_test____Compare____option_0_0(
  MR_Word * mdprof_test__HeadVar__1_1,
  MR_Word mdprof_test__HeadVar__2_2,
  MR_Word mdprof_test__HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_test____Unify____option_0_0(
  MR_Word mdprof_test__HeadVar__2_1,
  MR_Word mdprof_test__HeadVar__2_2);

static void MR_CALL 
mdprof_test__defaults_2_p_0(
  MR_Word * mdprof_test__HeadVar__1_1,
  MR_Word * mdprof_test__HeadVar__2_2,
  MR_Cont mdprof_test__cont,
  void * mdprof_test__cont_env_ptr);

static MR_bool MR_CALL 
mdprof_test__long_2_p_0(
  MR_String mdprof_test__HeadVar__1_1,
  MR_Word * mdprof_test__HeadVar__2_2);

static MR_bool MR_CALL 
mdprof_test__short_2_p_0(
  MR_Char mdprof_test__HeadVar__1_1,
  MR_Word * mdprof_test__HeadVar__2_2);

static void MR_CALL 
mdprof_test__verify_profile_2_5_p_0(
  MR_String mdprof_test__ProgName_6,
  MR_Word mdprof_test__Options_7,
  MR_String mdprof_test__FileName_8);

static void MR_CALL 
main_2_p_0_5(
  MR_Box mdprof_test__closure_arg,
  MR_Box mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2,
  MR_Box * mdprof_test__wrapper_arg_3);

static void MR_CALL 
main_2_p_0_3(
  void * mdprof_test__env_ptr_arg);

static void MR_CALL 
main_2_p_0_4(
  MR_Box mdprof_test__closure_arg,
  MR_Box * mdprof_test__wrapper_arg_1,
  MR_Box * mdprof_test__wrapper_arg_2,
  MR_Cont mdprof_test__cont,
  void * mdprof_test__cont_env_ptr);

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mdprof_test__closure_arg,
  MR_Box mdprof_test__wrapper_arg_1,
  MR_Box * mdprof_test__wrapper_arg_2);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mdprof_test__closure_arg,
  MR_Box mdprof_test__wrapper_arg_1,
  MR_Box * mdprof_test__wrapper_arg_2);

static void MR_CALL 
mdprof_test__main2_5_p_0(
  MR_String mdprof_test__ProgName_6,
  MR_Word mdprof_test__Args_7,
  MR_Word mdprof_test__Options_8);

static void MR_CALL 
mdprof_test__test_server_5_p_0(
  MR_Word mdprof_test__Pref_6,
  MR_Word mdprof_test__Deep_7,
  MR_Word mdprof_test__Options_8);

static void MR_CALL 
mdprof_test__test_recursion_types_histogram_5_p_0(
  MR_Word mdprof_test__Pref_6,
  MR_Word mdprof_test__Deep_7,
  MR_Word mdprof_test__Options_8);

static void MR_CALL 
mdprof_test__test_procrep_dynamic_coverages_7_p_0(
  MR_Integer mdprof_test__Cur_8,
  MR_Integer mdprof_test__Max_9,
  MR_Word mdprof_test__Pref_10,
  MR_Word mdprof_test__Deep_11,
  MR_Word mdprof_test__Options_12);

static void MR_CALL 
mdprof_test__test_procrep_static_coverages_7_p_0(
  MR_Integer mdprof_test__Cur_8,
  MR_Integer mdprof_test__Max_9,
  MR_Word mdprof_test__Pref_10,
  MR_Word mdprof_test__Deep_11,
  MR_Word mdprof_test__Options_12);

static void MR_CALL 
mdprof_test__write_test_html_6_p_0(
  MR_Word mdprof_test__Options_7,
  MR_String mdprof_test__BaseName_8,
  MR_Integer mdprof_test__Num_9,
  MR_String mdprof_test__HTML_10);

static void MR_CALL 
mdprof_test__write_help_message_3_p_0(
  MR_String mdprof_test__ProgName_4);

static MR_bool MR_CALL 
mdprof_test____Unify____option_0_0_10001(
  MR_Box mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2);

static void MR_CALL 
mdprof_test____Compare____option_0_0_10001(
  MR_Box * mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2,
  MR_Box mdprof_test__wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_test____Unify____option_table_0_0_10001(
  MR_Box mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2);

static void MR_CALL 
mdprof_test____Compare____option_table_0_0_10001(
  MR_Box * mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2,
  MR_Box mdprof_test__wrapper_arg_3);

static MR_bool MR_CALL 
mdprof_test____Unify____options_0_0_10001(
  MR_Box mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2);

static void MR_CALL 
mdprof_test____Compare____options_0_0_10001(
  MR_Box * mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2,
  MR_Box mdprof_test__wrapper_arg_3);


static /* final */ const MR_Box mdprof_test_scalar_common_1[5][3];

static /* final */ const MR_Box mdprof_test_scalar_common_2[3][1];

static /* final */ const MR_Box mdprof_test_scalar_common_3[3][5];

static /* final */ const MR_Box mdprof_test_scalar_common_4[3][2];

static /* final */ const MR_Box mdprof_test_scalar_common_5[1][8];


/* sealed */ struct mdprof_test__vector_common_type_6_0_s {
  const MR_String mdprof_test__vector_common_type_6_0__vct_6_f_0;
  const MR_Word mdprof_test__vector_common_type_6_0__vct_6_f_1;
};

static /* final */ const struct mdprof_test__vector_common_type_6_0_s mdprof_test_vector_common_6[64];

/* sealed */ struct mdprof_test__vector_common_type_7_0_s {
  const MR_Word mdprof_test__vector_common_type_7_0__vct_7_f_0;
  const MR_Word mdprof_test__vector_common_type_7_0__vct_7_f_1;
};

static /* final */ const struct mdprof_test__vector_common_type_7_0_s mdprof_test_vector_common_7[13];



static /* final */ const MR_Box mdprof_test_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdprof_test__mdprof_test__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdprof_test_scalar_common_3[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdprof_test_scalar_common_3[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdprof_test_scalar_common_3[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdprof_test_scalar_common_1[1])),
    ((MR_Box) (&mdprof_test_scalar_common_1[2])),
    ((MR_Box) (&mdprof_test_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mdprof_test_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 1 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box mdprof_test_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdprof_test__mdprof_test__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_test__mdprof_test__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_test__mdprof_test__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mdprof_test_scalar_common_4[3][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Deep.data")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "deep_test"))
  },
};

static /* final */ const MR_Box mdprof_test_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_test__tree234__pti_tree234_2__plain_mdprof_test__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct mdprof_test__vector_common_type_6_0_s mdprof_test_vector_common_6[64] = {
  /* row 0 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 1 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 2 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 3 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 4 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 5 */
  {
    (MR_String) "version",
    (MR_Integer) 8
  },
  /* row 6 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 7 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 8 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 9 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 10 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 11 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 12 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 13 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 14 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 15 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 16 */
  {
    (MR_String) "test",
    (MR_Integer) 5
  },
  /* row 17 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 18 */
  {
    (MR_String) "recursion-types-histogram",
    (MR_Integer) 12
  },
  /* row 19 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 20 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 21 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 22 */
  {
    (MR_String) "static-procrep-coverage",
    (MR_Integer) 10
  },
  /* row 23 */
  {
    (MR_String) "dump-options",
    (MR_Integer) 2
  },
  /* row 24 */
  {
    (MR_String) "test-dir",
    (MR_Integer) 6
  },
  /* row 25 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 26 */
  {
    (MR_String) "dynamic-procrep-coverage",
    (MR_Integer) 11
  },
  /* row 27 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 28 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 29 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 30 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 31 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 32 */
  {
    (MR_String) "compress",
    (MR_Integer) 3
  },
  /* row 33 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 34 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 35 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 36 */
  {
    (MR_String) "canonical-clique",
    (MR_Integer) 0
  },
  /* row 37 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 38 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 39 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 40 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 41 */
  {
    (MR_String) "verify-profile",
    (MR_Integer) 9
  },
  /* row 42 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 43 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 44 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 45 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 46 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 47 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 48 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 49 */
  {
    (MR_String) "verbose",
    (MR_Integer) 7
  },
  /* row 50 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 51 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 52 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 53 */
  {
    (MR_String) "help",
    (MR_Integer) 4
  },
  /* row 54 */
  {
    (MR_String) "dump",
    (MR_Integer) 1
  },
  /* row 55 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 56 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 57 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 58 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 59 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 60 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 61 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 62 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
  /* row 63 */
  {
    NULL,
    (MR_Word) (MR_Integer) 0
  },
};

static /* final */ const struct mdprof_test__vector_common_type_7_0_s mdprof_test_vector_common_7[13] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_2[1])
  },
  /* row 1 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_2[2])
  },
  /* row 2 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(3), &mdprof_test_scalar_common_4[1])
  },
  /* row 3 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(3), &mdprof_test_scalar_common_4[1])
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_2[1])
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_2[1])
  },
  /* row 6 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(3), &mdprof_test_scalar_common_4[2])
  },
  /* row 7 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_2[1])
  },
  /* row 8 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_2[1])
  },
  /* row 9 */
  {
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_2[1])
  },
  /* row 10 */
  {
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_2[1])
  },
  /* row 11 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_2[1])
  },
  /* row 12 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_2[1])
  },
};


#include "array.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 mdprof_test__tree234__pti_tree234_2__plain_mdprof_test__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdprof_test__mdprof_test__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_0 = {
  (MR_String) "canonical_clique",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_1 = {
  (MR_String) "dump",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_2 = {
  (MR_String) "dump_options",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_3 = {
  (MR_String) "compress",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_4 = {
  (MR_String) "help",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_5 = {
  (MR_String) "test",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_6 = {
  (MR_String) "test_dir",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_7 = {
  (MR_String) "verbose",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_8 = {
  (MR_String) "version",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_9 = {
  (MR_String) "verify_profile",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_10 = {
  (MR_String) "static_procrep_coverage",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_11 = {
  (MR_String) "dynamic_procrep_coverage",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_12 = {
  (MR_String) "recursion_types_histogram",
  (MR_Integer) 12
};

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_value_ordered_option_0[13] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_test____Unify____option_0_0_10001)),
  ((MR_Box) (mdprof_test____Compare____option_0_0_10001)),
  (MR_String) "mdprof_test",
  (MR_String) "option",
  {     mdprof_test__mdprof_test__enum_name_ordered_option_0 },
  {     mdprof_test__mdprof_test__enum_value_ordered_option_0 },
  (MR_Integer) 13,
  (MR_Integer) 4,
  mdprof_test__mdprof_test__functor_number_map_option_0
};

static const MR_FA_TypeInfo_Struct2 mdprof_test__tree234__ti_tree234_2mdprof_test__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdprof_test__mdprof_test__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

const MR_TypeCtorInfo_Struct mdprof_test__mdprof_test__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdprof_test____Unify____option_table_0_0_10001)),
  ((MR_Box) (mdprof_test____Compare____option_table_0_0_10001)),
  (MR_String) "mdprof_test",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdprof_test__tree234__ti_tree234_2mdprof_test__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_options_0_0 = {
  (MR_String) "options",
  (MR_Integer) 0
};

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_value_ordered_options_0[1] = {
  &mdprof_test__mdprof_test__enum_functor_desc_options_0_0
};

static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_name_ordered_options_0[1] = {
  &mdprof_test__mdprof_test__enum_functor_desc_options_0_0
};

static const MR_Integer mdprof_test__mdprof_test__functor_number_map_options_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_test__mdprof_test__type_ctor_info_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mdprof_test____Unify____options_0_0_10001)),
  ((MR_Box) (mdprof_test____Compare____options_0_0_10001)),
  (MR_String) "mdprof_test",
  (MR_String) "options",
  {     mdprof_test__mdprof_test__enum_name_ordered_options_0 },
  {     mdprof_test__mdprof_test__enum_value_ordered_options_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdprof_test__mdprof_test__functor_number_map_options_0
};

static void MR_CALL 
mdprof_test____Compare____options_0_0(
  MR_Word * mdprof_test__HeadVar__1_1)
{
  {
    mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mdprof_test__HeadVar__1_1);
  }
}

static void MR_CALL 
mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * mdprof_test__HeadVar__1_1)
{
  *mdprof_test__HeadVar__1_1 = (MR_Integer) 0;
}

static MR_bool MR_CALL 
mdprof_test____Unify____options_0_0(void)
{
  {
    MR_bool mdprof_test__succeeded;

    {
      mdprof_test__succeeded = mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
    return mdprof_test__succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

static void MR_CALL 
mdprof_test____Compare____option_table_0_0(
  MR_Word * mdprof_test__HeadVar__1_1,
  MR_Word mdprof_test__HeadVar__2_2,
  MR_Word mdprof_test__HeadVar__3_3)
{
  {
    MR_Word mdprof_test__Cast_HeadVar1_4 = mdprof_test__HeadVar__2_2;
    MR_Word mdprof_test__Cast_HeadVar2_5 = mdprof_test__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdprof_test_scalar_common_1[0], mdprof_test__HeadVar__1_1, ((MR_Box) (mdprof_test__Cast_HeadVar1_4)), ((MR_Box) (mdprof_test__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
mdprof_test____Unify____option_table_0_0(
  MR_Word mdprof_test__HeadVar__1_1,
  MR_Word mdprof_test__HeadVar__2_2)
{
  {
    MR_bool mdprof_test__succeeded;
    MR_Word mdprof_test__Cast_HeadVar1_3 = mdprof_test__HeadVar__1_1;
    MR_Word mdprof_test__Cast_HeadVar2_4 = mdprof_test__HeadVar__2_2;

    {
      mdprof_test__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdprof_test_scalar_common_1[0], ((MR_Box) (mdprof_test__Cast_HeadVar1_3)), ((MR_Box) (mdprof_test__Cast_HeadVar2_4)));
    }
    return mdprof_test__succeeded;
  }
}

static void MR_CALL 
mdprof_test____Compare____option_0_0(
  MR_Word * mdprof_test__HeadVar__1_1,
  MR_Word mdprof_test__HeadVar__2_2,
  MR_Word mdprof_test__HeadVar__3_3)
{
  {
    MR_Integer mdprof_test__Cast_HeadVar1_4 = (MR_Integer) mdprof_test__HeadVar__2_2;
    MR_Integer mdprof_test__Cast_HeadVar2_5 = (MR_Integer) mdprof_test__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_test__HeadVar__1_1, mdprof_test__Cast_HeadVar1_4, mdprof_test__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mdprof_test____Unify____option_0_0(
  MR_Word mdprof_test__HeadVar__2_1,
  MR_Word mdprof_test__HeadVar__2_2)
{
  {
    MR_bool mdprof_test__succeeded = (mdprof_test__HeadVar__2_1 == mdprof_test__HeadVar__2_2);

    return mdprof_test__succeeded;
  }
}

static void MR_CALL 
mdprof_test__defaults_2_p_0(
  MR_Word * mdprof_test__HeadVar__1_1,
  MR_Word * mdprof_test__HeadVar__2_2,
  MR_Cont mdprof_test__cont,
  void * mdprof_test__cont_env_ptr)
{
  {
    MR_Integer mdprof_test__slot_0 = (MR_Integer) 0;

    do
    {
      *mdprof_test__HeadVar__1_1 = ((&mdprof_test_vector_common_7[0 + mdprof_test__slot_0]))->mdprof_test__vector_common_type_7_0__vct_7_f_0;
      *mdprof_test__HeadVar__2_2 = ((&mdprof_test_vector_common_7[0 + mdprof_test__slot_0]))->mdprof_test__vector_common_type_7_0__vct_7_f_1;
      {
        mdprof_test__cont(mdprof_test__cont_env_ptr);
      }
      mdprof_test__slot_0 = (mdprof_test__slot_0 + (MR_Integer) 1);
    }
    while ((mdprof_test__slot_0 < (MR_Integer) 13));
  }
}

static MR_bool MR_CALL 
mdprof_test__long_2_p_0(
  MR_String mdprof_test__HeadVar__1_1,
  MR_Word * mdprof_test__HeadVar__2_2)
{
  {
    MR_bool mdprof_test__succeeded;
    MR_Integer mdprof_test__slot_0;
    MR_String mdprof_test__str_1;

    /* hashed string simple lookup switch */
    /* compute the hash value of the input string */
    mdprof_test__slot_0 = ((MR_hash_string5(mdprof_test__HeadVar__1_1)) & (MR_Integer) 63);
    /* no collisions; no hash chain loop */
    /* lookup the string for this hash slot */
    mdprof_test__str_1 = ((&mdprof_test_vector_common_6[0 + mdprof_test__slot_0]))->mdprof_test__vector_common_type_6_0__vct_6_f_0;
    /* did we find a match? */
    if ((((mdprof_test__str_1 != NULL)) && ((strcmp(mdprof_test__str_1, mdprof_test__HeadVar__1_1) == 0))))
    {
      /* we found a match; look up the results */
      *mdprof_test__HeadVar__2_2 = ((&mdprof_test_vector_common_6[0 + mdprof_test__slot_0]))->mdprof_test__vector_common_type_6_0__vct_6_f_1;
      mdprof_test__succeeded = MR_TRUE;
      /* jump out of search loop */
      goto label_0;
    }
    mdprof_test__succeeded = MR_FALSE;
  label_0:;
    return mdprof_test__succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_test__short_2_p_0(
  MR_Char mdprof_test__HeadVar__1_1,
  MR_Word * mdprof_test__HeadVar__2_2)
{
  {
    MR_bool mdprof_test__succeeded;

    switch (mdprof_test__HeadVar__1_1) {
      default:
        mdprof_test__succeeded = MR_FALSE;
        break;
      case (MR_Char) 68:
        {
          *mdprof_test__HeadVar__2_2 = (MR_Integer) 2;
          mdprof_test__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 84:
        {
          *mdprof_test__HeadVar__2_2 = (MR_Integer) 5;
          mdprof_test__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 99:
        {
          *mdprof_test__HeadVar__2_2 = (MR_Integer) 0;
          mdprof_test__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 100:
        {
          *mdprof_test__HeadVar__2_2 = (MR_Integer) 1;
          mdprof_test__succeeded = MR_TRUE;
        }
        break;
      case (MR_Char) 118:
        {
          *mdprof_test__HeadVar__2_2 = (MR_Integer) 7;
          mdprof_test__succeeded = MR_TRUE;
        }
        break;
    }
    return mdprof_test__succeeded;
  }
}

static void MR_CALL 
mdprof_test__verify_profile_2_5_p_0(
  MR_String mdprof_test__ProgName_6,
  MR_Word mdprof_test__Options_7,
  MR_String mdprof_test__FileName_8)
{
  {
    MR_Word mdprof_test__Canonical_10;
    MR_String mdprof_test__ScriptName_12;
    MR_Word mdprof_test__Res_13;
    MR_Word mdprof_test__Var_22;

    {
      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) &mdprof_test__mdprof_test__type_ctor_info_option_0, mdprof_test__Options_7, ((MR_Box) ((MR_Integer) 0)), &mdprof_test__Canonical_10);
    }
    {
      conf__script_name_3_p_0(&mdprof_test__ScriptName_12);
    }
    {
      mdprof_test__Var_22 = dump__default_dump_options_0_f_0();
    }
    {
      startup__read_and_startup_10_p_0((MR_String) "dummy_server", mdprof_test__ScriptName_12, mdprof_test__FileName_8, mdprof_test__Canonical_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdprof_test__Var_22, &mdprof_test__Res_13);
    }
    if (((MR_tag((MR_Word) mdprof_test__Res_13)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String mdprof_test__Error_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_test__Res_13, (MR_Integer) 0)));

      {
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
      {
        mercury__io__write_string_3_p_0(mdprof_test__ProgName_6);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) ": error reading ");
      }
      {
        mercury__io__write_string_3_p_0(mdprof_test__FileName_8);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) ": ");
      }
      {
        mercury__io__write_string_3_p_0(mdprof_test__Error_15);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
    else
    {
    }
  }
}

static void MR_CALL 
main_2_p_0_5(
  MR_Box mdprof_test__closure_arg,
  MR_Box mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2,
  MR_Box * mdprof_test__wrapper_arg_3)
{
  {
    MR_Box mdprof_test__closure = mdprof_test__closure_arg;

    {
      mdprof_test__verify_profile_2_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__closure, (MR_Integer) 4))), ((MR_String) mdprof_test__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * mdprof_test__env_ptr_arg)
{
  {
    struct mdprof_test__main_2_p_0_4_env_0_s * mdprof_test__env_ptr = (struct mdprof_test__main_2_p_0_4_env_0_s *) mdprof_test__env_ptr_arg;

    *((mdprof_test__env_ptr)->mdprof_test__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdprof_test__env_ptr)->mdprof_test__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((mdprof_test__env_ptr)->mdprof_test__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdprof_test__env_ptr)->mdprof_test__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    {
      ((mdprof_test__env_ptr)->mdprof_test__main_2_p_0_4_env_0__cont)((mdprof_test__env_ptr)->mdprof_test__main_2_p_0_4_env_0__cont_env_ptr);
    }
  }
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box mdprof_test__closure_arg,
  MR_Box * mdprof_test__wrapper_arg_1,
  MR_Box * mdprof_test__wrapper_arg_2,
  MR_Cont mdprof_test__cont,
  void * mdprof_test__cont_env_ptr)
{
  {
    struct mdprof_test__main_2_p_0_4_env_0_s mdprof_test__env;

    (mdprof_test__env).mdprof_test__main_2_p_0_4_env_0__wrapper_arg_1 = mdprof_test__wrapper_arg_1;
    (mdprof_test__env).mdprof_test__main_2_p_0_4_env_0__wrapper_arg_2 = mdprof_test__wrapper_arg_2;
    (mdprof_test__env).mdprof_test__main_2_p_0_4_env_0__cont = mdprof_test__cont;
    (mdprof_test__env).mdprof_test__main_2_p_0_4_env_0__cont_env_ptr = mdprof_test__cont_env_ptr;
    {
      MR_Box mdprof_test__closure = mdprof_test__closure_arg;

      {
        mdprof_test__defaults_2_p_0(&(mdprof_test__env).mdprof_test__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mdprof_test__env).mdprof_test__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mdprof_test__env);
      }
    }
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box mdprof_test__closure_arg,
  MR_Box mdprof_test__wrapper_arg_1,
  MR_Box * mdprof_test__wrapper_arg_2)
{
  {
    MR_bool mdprof_test__succeeded;
    MR_Box mdprof_test__closure = mdprof_test__closure_arg;
    MR_Word mdprof_test__conv1_HeadVar__2_2;

    {
      mdprof_test__succeeded = mdprof_test__long_2_p_0(((MR_String) mdprof_test__wrapper_arg_1), &mdprof_test__conv1_HeadVar__2_2);
    }
    if (mdprof_test__succeeded)
    {
      *mdprof_test__wrapper_arg_2 = ((MR_Box) (mdprof_test__conv1_HeadVar__2_2));
      mdprof_test__succeeded = MR_TRUE;
    }
    return mdprof_test__succeeded;
  }
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box mdprof_test__closure_arg,
  MR_Box mdprof_test__wrapper_arg_1,
  MR_Box * mdprof_test__wrapper_arg_2)
{
  {
    MR_bool mdprof_test__succeeded;
    MR_Box mdprof_test__closure = mdprof_test__closure_arg;
    MR_Word mdprof_test__conv0_HeadVar__2_2;

    {
      mdprof_test__succeeded = mdprof_test__short_2_p_0(((MR_Char) (MR_Word) mdprof_test__wrapper_arg_1), &mdprof_test__conv0_HeadVar__2_2);
    }
    if (mdprof_test__succeeded)
    {
      *mdprof_test__wrapper_arg_2 = ((MR_Box) (mdprof_test__conv0_HeadVar__2_2));
      mdprof_test__succeeded = MR_TRUE;
    }
    return mdprof_test__succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_bool mdprof_test__succeeded;
    MR_Word mdprof_test__TypeCtorInfo_44_44;
    MR_String mdprof_test__ProgName_4;
    MR_Word mdprof_test__Args0_5;
    MR_Word mdprof_test__Args_6;
    MR_Word mdprof_test__MaybeOptions_7;

    {
      mercury__io__progname_base_4_p_0((MR_String) "mdprof_test", &mdprof_test__ProgName_4);
    }
    {
      mercury__io__command_line_arguments_3_p_0(&mdprof_test__Args0_5);
    }
    mdprof_test__TypeCtorInfo_44_44 = (MR_Word) &mdprof_test__mdprof_test__type_ctor_info_option_0;
    {
      mercury__getopt__process_options_4_p_0(mdprof_test__TypeCtorInfo_44_44, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_test_scalar_common_1[4]), mdprof_test__Args0_5, &mdprof_test__Args_6, &mdprof_test__MaybeOptions_7);
    }
    if (((MR_tag((MR_Word) mdprof_test__MaybeOptions_7)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String mdprof_test__Msg_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_test__MaybeOptions_7, (MR_Integer) 0)));

      {
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
      {
        mercury__io__write_string_3_p_0(mdprof_test__ProgName_4);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) ": error parsing options: ");
      }
      {
        mercury__io__write_string_3_p_0(mdprof_test__Msg_12);
      }
      {
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
    }
    else
    {
      MR_Word mdprof_test__Options_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__MaybeOptions_7, (MR_Integer) 0)));
      MR_Word mdprof_test__Help_9;
      MR_Word mdprof_test__Version_10;
      MR_Word mdprof_test__Verify_11;

      {
        mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_44_44, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 4)), &mdprof_test__Help_9);
      }
      {
        mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_44_44, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 8)), &mdprof_test__Version_10);
      }
      {
        mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_44_44, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 9)), &mdprof_test__Verify_11);
      }
      switch (mdprof_test__Help_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            mdprof_test__write_help_message_3_p_0(mdprof_test__ProgName_4);
          }
          break;
      }
      switch (mdprof_test__Version_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mdprof_test__Version_54;
            MR_String mdprof_test__Fullarch_55;

            {
              mercury__library__version_2_p_0(&mdprof_test__Version_54, &mdprof_test__Fullarch_55);
            }
            {
              mercury__io__write_string_3_p_0(mdprof_test__ProgName_4);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ": Mercury deep profiler\n");
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "version: ");
            }
            {
              mercury__io__write_string_3_p_0(mdprof_test__Version_54);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", on ");
            }
            {
              mercury__io__write_string_3_p_0(mdprof_test__Fullarch_55);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ".\n");
            }
          }
          break;
      }
      mdprof_test__succeeded = (mdprof_test__Help_9 == (MR_Integer) 0);
      if (mdprof_test__succeeded)
        mdprof_test__succeeded = (mdprof_test__Version_10 == (MR_Integer) 0);
      if (mdprof_test__succeeded)
        switch (mdprof_test__Verify_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mdprof_test__main2_5_p_0(mdprof_test__ProgName_4, mdprof_test__Args_6, mdprof_test__Options_8);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdprof_test__Args_83;
              MR_Word mdprof_test__Var_88;
              MR_Box mdprof_test__conv4_STATE_VARIABLE_IO_14;

              if ((mdprof_test__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mdprof_test__Args_83 = (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_4[0]);
              }
              else
                mdprof_test__Args_83 = mdprof_test__Args_6;
              {
                mdprof_test__Var_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdprof_test__Var_88, 0) = ((MR_Box) (&mdprof_test_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), mdprof_test__Var_88, 1) = ((MR_Box) (main_2_p_0_5));
                MR_hl_field(MR_mktag(0), mdprof_test__Var_88, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), mdprof_test__Var_88, 3) = ((MR_Box) (mdprof_test__ProgName_4));
                MR_hl_field(MR_mktag(0), mdprof_test__Var_88, 4) = ((MR_Box) (mdprof_test__Options_8));
              }
              {
                mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdprof_test__Var_88, mdprof_test__Args_83, ((MR_Box) ((MR_Integer) 0)), &mdprof_test__conv4_STATE_VARIABLE_IO_14);
              }
            }
            break;
        }
      else
      {
      }
    }
  }
}

static void MR_CALL 
mdprof_test__main2_5_p_0(
  MR_String mdprof_test__ProgName_6,
  MR_Word mdprof_test__Args_7,
  MR_Word mdprof_test__Options_8)
{
  {
    MR_bool mdprof_test__succeeded = ((MR_tag((MR_Word) mdprof_test__Args_7)) == (MR_mktag((MR_Integer) 1)));
    MR_String mdprof_test__FileName_10;
    MR_Word mdprof_test__Var_26;

    if (mdprof_test__succeeded)
    {
      mdprof_test__FileName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_test__Args_7, (MR_Integer) 0)));
      mdprof_test__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_test__Args_7, (MR_Integer) 1)));
      mdprof_test__succeeded = (mdprof_test__Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (mdprof_test__succeeded)
    {
      MR_Word mdprof_test__TypeCtorInfo_52_52 = (MR_Word) &mdprof_test__mdprof_test__type_ctor_info_option_0;
      MR_Word mdprof_test__Canonical_11;
      MR_Word mdprof_test__Verbose_12;
      MR_Word mdprof_test__DumpStages_13;
      MR_Word mdprof_test__DumpArrayOptionsStr_14;
      MR_Word mdprof_test__DumpOptions_15;
      MR_String mdprof_test__Machine_16;
      MR_String mdprof_test__ScriptName_17;
      MR_Word mdprof_test__MaybeOutput_18;
      MR_Word mdprof_test__StartupResult_20;

      {
        mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_52_52, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 0)), &mdprof_test__Canonical_11);
      }
      {
        mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_52_52, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 7)), &mdprof_test__Verbose_12);
      }
      {
        mercury__getopt__lookup_accumulating_option_3_p_0(mdprof_test__TypeCtorInfo_52_52, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 1)), &mdprof_test__DumpStages_13);
      }
      {
        mercury__getopt__lookup_accumulating_option_3_p_0(mdprof_test__TypeCtorInfo_52_52, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 2)), &mdprof_test__DumpArrayOptionsStr_14);
      }
      {
        dump__dump_array_options_to_dump_options_2_p_0(mdprof_test__DumpArrayOptionsStr_14, &mdprof_test__DumpOptions_15);
      }
      {
        conf__server_name_port_3_p_0(&mdprof_test__Machine_16);
      }
      {
        conf__script_name_3_p_0(&mdprof_test__ScriptName_17);
      }
      switch (mdprof_test__Verbose_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mdprof_test__MaybeOutput_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdprof_test__Stdout_19;

            {
              mercury__io__stdout_stream_3_p_0(&mdprof_test__Stdout_19);
            }
            {
              mdprof_test__MaybeOutput_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdprof_test__MaybeOutput_18, 0) = ((MR_Box) (mdprof_test__Stdout_19));
            }
          }
          break;
      }
      {
        startup__read_and_startup_10_p_0(mdprof_test__Machine_16, mdprof_test__ScriptName_17, mdprof_test__FileName_10, mdprof_test__Canonical_11, mdprof_test__MaybeOutput_18, mdprof_test__DumpStages_13, mdprof_test__DumpOptions_15, &mdprof_test__StartupResult_20);
      }
      if (((MR_tag((MR_Word) mdprof_test__StartupResult_20)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mdprof_test__Error_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_test__StartupResult_20, (MR_Integer) 0)));

        {
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        {
          mercury__io__write_string_3_p_0(mdprof_test__ProgName_6);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ": error reading ");
        }
        {
          mercury__io__write_string_3_p_0(mdprof_test__FileName_10);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ": ");
        }
        {
          mercury__io__write_string_3_p_0(mdprof_test__Error_23);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
      }
      else
      {
        MR_Word mdprof_test__Deep_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__StartupResult_20, (MR_Integer) 0)));
        MR_Word mdprof_test__Test_22;

        {
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_52_52, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 5)), &mdprof_test__Test_22);
        }
        switch (mdprof_test__Test_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdprof_test__Var_47;

              {
                mdprof_test__Var_47 = query__default_preferences_1_f_0(mdprof_test__Deep_21);
              }
              {
                mdprof_test__test_server_5_p_0(mdprof_test__Var_47, mdprof_test__Deep_21, mdprof_test__Options_8);
              }
            }
            break;
        }
      }
    }
    else
    {
      {
        mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
      }
      {
        mdprof_test__write_help_message_3_p_0(mdprof_test__ProgName_6);
      }
    }
  }
}

static void MR_CALL 
mdprof_test__test_server_5_p_0(
  MR_Word mdprof_test__Pref_6,
  MR_Word mdprof_test__Deep_7,
  MR_Word mdprof_test__Options_8)
{
  {
    MR_Word mdprof_test__TypeCtorInfo_94_94 = (MR_Word) &mdprof_test__mdprof_test__type_ctor_info_option_0;
    MR_String mdprof_test__DirName_10;
    MR_String mdprof_test__Cmd_11;
    MR_Word mdprof_test__StaticProcrepCoverage_13;
    MR_Word mdprof_test__DynamicProcrepCoverage_15;
    MR_Word mdprof_test__RecTypesHistogram_17;
    MR_String mdprof_test__Var_98;
    MR_String mdprof_test__Var_99;
    MR_Word mdprof_test__Var_12;

    {
      mercury__getopt__lookup_string_option_3_p_0(mdprof_test__TypeCtorInfo_94_94, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 6)), &mdprof_test__DirName_10);
    }
    {
      mdprof_test__Var_98 = mercury__string__f_43_43_2_f_0((MR_String) " || mkdir -p ", mdprof_test__DirName_10);
    }
    {
      mdprof_test__Var_99 = mercury__string__f_43_43_2_f_0(mdprof_test__DirName_10, mdprof_test__Var_98);
    }
    {
      mdprof_test__Cmd_11 = mercury__string__f_43_43_2_f_0((MR_String) "test -d ", mdprof_test__Var_99);
    }
    {
      mercury__io__call_system_4_p_0(mdprof_test__Cmd_11, &mdprof_test__Var_12);
    }
    {
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_94_94, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 10)), &mdprof_test__StaticProcrepCoverage_13);
    }
    switch (mdprof_test__StaticProcrepCoverage_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mdprof_test__NumProcStatics_14;
          MR_ArrayPtr mdprof_test__Var_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 8)));
          MR_Word mdprof_test__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 0)));
          MR_String mdprof_test__Var_39 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 1)));
          MR_String mdprof_test__Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 2)));
          MR_String mdprof_test__Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 3)));
          MR_Word mdprof_test__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 4)));
          MR_ArrayPtr mdprof_test__Var_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 5)));
          MR_ArrayPtr mdprof_test__Var_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 6)));
          MR_ArrayPtr mdprof_test__Var_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 7)));
          MR_ArrayPtr mdprof_test__Var_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 9)));
          MR_ArrayPtr mdprof_test__Var_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 10)));
          MR_ArrayPtr mdprof_test__Var_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 11)));
          MR_ArrayPtr mdprof_test__Var_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 12)));
          MR_ArrayPtr mdprof_test__Var_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 13)));
          MR_ArrayPtr mdprof_test__Var_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 14)));
          MR_ArrayPtr mdprof_test__Var_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 15)));
          MR_ArrayPtr mdprof_test__Var_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 16)));
          MR_ArrayPtr mdprof_test__Var_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 17)));
          MR_ArrayPtr mdprof_test__Var_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 18)));
          MR_ArrayPtr mdprof_test__Var_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 19)));
          MR_ArrayPtr mdprof_test__Var_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 20)));
          MR_ArrayPtr mdprof_test__Var_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 21)));
          MR_ArrayPtr mdprof_test__Var_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 22)));
          MR_ArrayPtr mdprof_test__Var_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 23)));
          MR_ArrayPtr mdprof_test__Var_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 24)));
          MR_Word mdprof_test__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 25)));
          MR_Word mdprof_test__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 26)));
          MR_Word mdprof_test__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 27)));
          MR_Word mdprof_test__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 28)));

          {
            mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) mdprof_test__Var_29, &mdprof_test__NumProcStatics_14);
          }
          {
            mdprof_test__test_procrep_static_coverages_7_p_0((MR_Integer) 1, mdprof_test__NumProcStatics_14, mdprof_test__Pref_6, mdprof_test__Deep_7, mdprof_test__Options_8);
          }
        }
        break;
    }
    {
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_94_94, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 11)), &mdprof_test__DynamicProcrepCoverage_15);
    }
    switch (mdprof_test__DynamicProcrepCoverage_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer mdprof_test__NumProcDynamics_16;
          MR_ArrayPtr mdprof_test__Var_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 6)));
          MR_Word mdprof_test__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 0)));
          MR_String mdprof_test__Var_67 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 1)));
          MR_String mdprof_test__Var_68 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 2)));
          MR_String mdprof_test__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 3)));
          MR_Word mdprof_test__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 4)));
          MR_ArrayPtr mdprof_test__Var_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 5)));
          MR_ArrayPtr mdprof_test__Var_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 7)));
          MR_ArrayPtr mdprof_test__Var_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 8)));
          MR_ArrayPtr mdprof_test__Var_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 9)));
          MR_ArrayPtr mdprof_test__Var_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 10)));
          MR_ArrayPtr mdprof_test__Var_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 11)));
          MR_ArrayPtr mdprof_test__Var_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 12)));
          MR_ArrayPtr mdprof_test__Var_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 13)));
          MR_ArrayPtr mdprof_test__Var_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 14)));
          MR_ArrayPtr mdprof_test__Var_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 15)));
          MR_ArrayPtr mdprof_test__Var_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 16)));
          MR_ArrayPtr mdprof_test__Var_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 17)));
          MR_ArrayPtr mdprof_test__Var_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 18)));
          MR_ArrayPtr mdprof_test__Var_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 19)));
          MR_ArrayPtr mdprof_test__Var_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 20)));
          MR_ArrayPtr mdprof_test__Var_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 21)));
          MR_ArrayPtr mdprof_test__Var_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 22)));
          MR_ArrayPtr mdprof_test__Var_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 23)));
          MR_ArrayPtr mdprof_test__Var_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 24)));
          MR_Word mdprof_test__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 25)));
          MR_Word mdprof_test__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 26)));
          MR_Word mdprof_test__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 27)));
          MR_Word mdprof_test__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 28)));

          {
            mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) mdprof_test__Var_33, &mdprof_test__NumProcDynamics_16);
          }
          {
            mdprof_test__test_procrep_dynamic_coverages_7_p_0((MR_Integer) 1, mdprof_test__NumProcDynamics_16, mdprof_test__Pref_6, mdprof_test__Deep_7, mdprof_test__Options_8);
          }
        }
        break;
    }
    {
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_94_94, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 12)), &mdprof_test__RecTypesHistogram_17);
    }
    switch (mdprof_test__RecTypesHistogram_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mdprof_test__test_recursion_types_histogram_5_p_0(mdprof_test__Pref_6, mdprof_test__Deep_7, mdprof_test__Options_8);
        }
        break;
    }
  }
}

static void MR_CALL 
mdprof_test__test_recursion_types_histogram_5_p_0(
  MR_Word mdprof_test__Pref_6,
  MR_Word mdprof_test__Deep_7,
  MR_Word mdprof_test__Options_8)
{
  {
    MR_String mdprof_test__HTML_10;

    {
      query__try_exec_4_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), mdprof_test__Pref_6, mdprof_test__Deep_7, &mdprof_test__HTML_10);
    }
    {
      mdprof_test__write_test_html_6_p_0(mdprof_test__Options_8, (MR_String) "recursion_types_histogram", (MR_Integer) 1, mdprof_test__HTML_10);
    }
  }
}

static void MR_CALL 
mdprof_test__test_procrep_dynamic_coverages_7_p_0(
  MR_Integer mdprof_test__Cur_8,
  MR_Integer mdprof_test__Max_9,
  MR_Word mdprof_test__Pref_10,
  MR_Word mdprof_test__Deep_11,
  MR_Word mdprof_test__Options_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mdprof_test__succeeded = (mdprof_test__Cur_8 <= mdprof_test__Max_9);

      if (mdprof_test__succeeded)
      {
        MR_String mdprof_test__HTML_14;
        MR_Word mdprof_test__Var_17;
        MR_Word mdprof_test__Var_18 = (MR_Word) mdprof_test__Cur_8;
        MR_Integer mdprof_test__Var_21;

        {
          mdprof_test__Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), mdprof_test__Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), mdprof_test__Var_17, 1) = ((MR_Box) (mdprof_test__Var_18));
        }
        {
          query__try_exec_4_p_0(mdprof_test__Var_17, mdprof_test__Pref_10, mdprof_test__Deep_11, &mdprof_test__HTML_14);
        }
        {
          mdprof_test__write_test_html_6_p_0(mdprof_test__Options_12, (MR_String) "procrep_static_coverage", mdprof_test__Cur_8, mdprof_test__HTML_14);
        }
        mdprof_test__Var_21 = (mdprof_test__Cur_8 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mdprof_test__next_value_of_Cur_8 = mdprof_test__Var_21;

          mdprof_test__Cur_8 = mdprof_test__next_value_of_Cur_8;
        }
        continue;
      }
      else
      {
      }
    }
    break;
  }
}

static void MR_CALL 
mdprof_test__test_procrep_static_coverages_7_p_0(
  MR_Integer mdprof_test__Cur_8,
  MR_Integer mdprof_test__Max_9,
  MR_Word mdprof_test__Pref_10,
  MR_Word mdprof_test__Deep_11,
  MR_Word mdprof_test__Options_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mdprof_test__succeeded = (mdprof_test__Cur_8 <= mdprof_test__Max_9);

      if (mdprof_test__succeeded)
      {
        MR_String mdprof_test__HTML_14;
        MR_Word mdprof_test__Var_17;
        MR_Word mdprof_test__Var_18 = (MR_Word) mdprof_test__Cur_8;
        MR_Integer mdprof_test__Var_21;

        {
          mdprof_test__Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), mdprof_test__Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(3), mdprof_test__Var_17, 1) = ((MR_Box) (mdprof_test__Var_18));
        }
        {
          query__try_exec_4_p_0(mdprof_test__Var_17, mdprof_test__Pref_10, mdprof_test__Deep_11, &mdprof_test__HTML_14);
        }
        {
          mdprof_test__write_test_html_6_p_0(mdprof_test__Options_12, (MR_String) "procrep_dynamic_coverage", mdprof_test__Cur_8, mdprof_test__HTML_14);
        }
        mdprof_test__Var_21 = (mdprof_test__Cur_8 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mdprof_test__next_value_of_Cur_8 = mdprof_test__Var_21;

          mdprof_test__Cur_8 = mdprof_test__next_value_of_Cur_8;
        }
        continue;
      }
      else
      {
      }
    }
    break;
  }
}

static void MR_CALL 
mdprof_test__write_test_html_6_p_0(
  MR_Word mdprof_test__Options_7,
  MR_String mdprof_test__BaseName_8,
  MR_Integer mdprof_test__Num_9,
  MR_String mdprof_test__HTML_10)
{
  {
    MR_bool mdprof_test__succeeded;
    MR_Word mdprof_test__TypeCtorInfo_67_67;
    MR_Integer mdprof_test__Bunch_12;
    MR_String mdprof_test__DirName_13;
    MR_String mdprof_test__BunchName_14;
    MR_String mdprof_test__FileName_17;
    MR_Word mdprof_test__Res_18;
    MR_Integer mdprof_test__Var_27 = (mdprof_test__Num_9 - (MR_Integer) 1);
    MR_String mdprof_test__Var_68;
    MR_Word mdprof_test__Var_74;
    MR_String mdprof_test__Var_77;
    MR_String mdprof_test__Var_78;
    MR_String mdprof_test__Var_80;
    MR_String mdprof_test__Var_86;
    MR_String mdprof_test__Var_94;
    MR_String mdprof_test__Var_96;
    MR_String mdprof_test__Var_97;
    MR_String mdprof_test__Var_99;
    MR_Integer mdprof_test__Var_39;
    MR_Integer mdprof_test__Var_40;

    {
      mdprof_test__Bunch_12 = mercury__int__f_47_47_2_f_0(mdprof_test__Var_27, (MR_Integer) 1000);
    }
    mdprof_test__TypeCtorInfo_67_67 = (MR_Word) &mdprof_test__mdprof_test__type_ctor_info_option_0;
    {
      mercury__getopt__lookup_string_option_3_p_0(mdprof_test__TypeCtorInfo_67_67, mdprof_test__Options_7, ((MR_Box) ((MR_Integer) 6)), &mdprof_test__DirName_13);
    }
    mdprof_test__Var_74 = (MR_Word) &mdprof_test_scalar_common_2[0];
    {
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mdprof_test__Var_74, (MR_Integer) 4, mdprof_test__Bunch_12, &mdprof_test__Var_68);
    }
    {
      mdprof_test__Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "_", mdprof_test__Var_68);
    }
    {
      mdprof_test__Var_78 = mercury__string__f_43_43_2_f_0(mdprof_test__BaseName_8, mdprof_test__Var_77);
    }
    {
      mdprof_test__Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdprof_test__Var_78);
    }
    {
      mdprof_test__BunchName_14 = mercury__string__f_43_43_2_f_0(mdprof_test__DirName_13, mdprof_test__Var_80);
    }
    mdprof_test__Var_40 = (mdprof_test__Num_9 - (MR_Integer) 1);
    {
      mdprof_test__Var_39 = mercury__int__rem_2_f_0(mdprof_test__Var_40, (MR_Integer) 1000);
    }
    mdprof_test__succeeded = (mdprof_test__Var_39 == (MR_Integer) 0);
    if (mdprof_test__succeeded)
    {
      MR_String mdprof_test__Cmd_15;
      MR_String mdprof_test__Var_82;
      MR_String mdprof_test__Var_83;
      MR_Word mdprof_test__Var_16;

      {
        mdprof_test__Var_82 = mercury__string__f_43_43_2_f_0((MR_String) " || mkdir -p ", mdprof_test__BunchName_14);
      }
      {
        mdprof_test__Var_83 = mercury__string__f_43_43_2_f_0(mdprof_test__BunchName_14, mdprof_test__Var_82);
      }
      {
        mdprof_test__Cmd_15 = mercury__string__f_43_43_2_f_0((MR_String) "test -d ", mdprof_test__Var_83);
      }
      {
        mercury__io__call_system_4_p_0(mdprof_test__Cmd_15, &mdprof_test__Var_16);
      }
    }
    else
    {
    }
    {
      mercury__string__format__format_signed_int_component_width_noprec_4_p_0(mdprof_test__Var_74, (MR_Integer) 6, mdprof_test__Num_9, &mdprof_test__Var_86);
    }
    {
      mdprof_test__Var_94 = mercury__string__f_43_43_2_f_0(mdprof_test__Var_86, (MR_String) ".html");
    }
    {
      mdprof_test__Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "_", mdprof_test__Var_94);
    }
    {
      mdprof_test__Var_97 = mercury__string__f_43_43_2_f_0(mdprof_test__BaseName_8, mdprof_test__Var_96);
    }
    {
      mdprof_test__Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdprof_test__Var_97);
    }
    {
      mdprof_test__FileName_17 = mercury__string__f_43_43_2_f_0(mdprof_test__BunchName_14, mdprof_test__Var_99);
    }
    {
      mercury__io__open_output_4_p_0(mdprof_test__FileName_17, &mdprof_test__Res_18);
    }
    if (((MR_tag((MR_Word) mdprof_test__Res_18)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mdprof_test__Err_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_test__Res_18, (MR_Integer) 0)));
      MR_String mdprof_test__ErrMsg_24;

      {
        mercury__io__error_message_2_p_0(mdprof_test__Err_23, &mdprof_test__ErrMsg_24);
      }
      {
        mercury__require__error_1_p_0(mdprof_test__ErrMsg_24);
        return;
      }
    }
    else
    {
      MR_Word mdprof_test__Stream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Res_18, (MR_Integer) 0)));
      MR_Word mdprof_test__Compress_20;

      {
        mercury__io__write_string_4_p_0(mdprof_test__Stream_19, mdprof_test__HTML_10);
      }
      {
        mercury__io__close_output_3_p_0(mdprof_test__Stream_19);
      }
      {
        mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_67_67, mdprof_test__Options_7, ((MR_Box) ((MR_Integer) 3)), &mdprof_test__Compress_20);
      }
      switch (mdprof_test__Compress_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mdprof_test__GzipCmd_21;
            MR_Word mdprof_test__Var_22;

            {
              mdprof_test__GzipCmd_21 = mercury__string__f_43_43_2_f_0((MR_String) "gzip ", mdprof_test__FileName_17);
            }
            {
              mercury__io__call_system_4_p_0(mdprof_test__GzipCmd_21, &mdprof_test__Var_22);
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
mdprof_test__write_help_message_3_p_0(
  MR_String mdprof_test__ProgName_4)
{
  {
    {
      mercury__io__write_string_3_p_0((MR_String) "Usage: ");
    }
    {
      mercury__io__write_string_3_p_0(mdprof_test__ProgName_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) " [<options>] <filename>\n");
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "<filename> must name a deep profiling data file.\nYou should specify one of the following options:\n--help      Generate this help message.\n--version   Report the" " program\'s version number.\n--verbose   Generate progress messages during startup.\n--test      Test the deep profiler, generating all\n\t\t\tpossible web pages of th" "e popular types.\n--verify-profile\n\t\t\tVerify that <filename> is a well-formed deep profiling\n\t\t\tdata file.\n\nYou may also specify the following options:.\n--test-d" "ir <dirname>\n\t\t\tPut the generated web pages into <dirname>.\n--no-compress\n\t\t\tDon\'t compress the resulting files, this speeds the test.\n--procrep-coverage\n\t\t\tRun" " the procrep coverage query on every static procedure\n--recursion-types-histogram\n\t\t\tRun the recursion types histogram query\n");
    }
  }
}

static MR_bool MR_CALL 
mdprof_test____Unify____option_0_0_10001(
  MR_Box mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2)
{
  {
    MR_bool mdprof_test__succeeded;

    {
      mdprof_test__succeeded = mdprof_test____Unify____option_0_0(((MR_Word) mdprof_test__wrapper_arg_1), ((MR_Word) mdprof_test__wrapper_arg_2));
    }
    return mdprof_test__succeeded;
  }
}

static void MR_CALL 
mdprof_test____Compare____option_0_0_10001(
  MR_Box * mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2,
  MR_Box mdprof_test__wrapper_arg_3)
{
  {
    MR_Word mdprof_test__conv0_HeadVar__1_1;

    {
      mdprof_test____Compare____option_0_0(&mdprof_test__conv0_HeadVar__1_1, ((MR_Word) mdprof_test__wrapper_arg_2), ((MR_Word) mdprof_test__wrapper_arg_3));
    }
    *mdprof_test__wrapper_arg_1 = ((MR_Box) (mdprof_test__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_test____Unify____option_table_0_0_10001(
  MR_Box mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2)
{
  {
    MR_bool mdprof_test__succeeded;

    {
      mdprof_test__succeeded = mdprof_test____Unify____option_table_0_0(((MR_Word) mdprof_test__wrapper_arg_1), ((MR_Word) mdprof_test__wrapper_arg_2));
    }
    return mdprof_test__succeeded;
  }
}

static void MR_CALL 
mdprof_test____Compare____option_table_0_0_10001(
  MR_Box * mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2,
  MR_Box mdprof_test__wrapper_arg_3)
{
  {
    MR_Word mdprof_test__conv0_HeadVar__1_1;

    {
      mdprof_test____Compare____option_table_0_0(&mdprof_test__conv0_HeadVar__1_1, ((MR_Word) mdprof_test__wrapper_arg_2), ((MR_Word) mdprof_test__wrapper_arg_3));
    }
    *mdprof_test__wrapper_arg_1 = ((MR_Box) (mdprof_test__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdprof_test____Unify____options_0_0_10001(
  MR_Box mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2)
{
  {
    MR_bool mdprof_test__succeeded;

    {
      mdprof_test__succeeded = mdprof_test____Unify____options_0_0();
    }
    return mdprof_test__succeeded;
  }
}

static void MR_CALL 
mdprof_test____Compare____options_0_0_10001(
  MR_Box * mdprof_test__wrapper_arg_1,
  MR_Box mdprof_test__wrapper_arg_2,
  MR_Box mdprof_test__wrapper_arg_3)
{
  {
    MR_Word mdprof_test__conv0_HeadVar__1_1;

    {
      mdprof_test____Compare____options_0_0(&mdprof_test__conv0_HeadVar__1_1);
    }
    *mdprof_test__wrapper_arg_1 = ((MR_Box) (mdprof_test__conv0_HeadVar__1_1));
  }
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

/* :- end_module mdprof_test. */
