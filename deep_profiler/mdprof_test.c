/*
** Automatically generated from `mdprof_test.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "startup.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 54 "mdprof_test.m"
struct mdprof_test__main_2_p_0_4_env_0_s {
#line 54 "mdprof_test.m"
  MR_Box * mdprof_test__main_2_p_0_4_env_0__wrapper_arg_1;
#line 54 "mdprof_test.m"
  MR_Box * mdprof_test__main_2_p_0_4_env_0__wrapper_arg_2;
#line 54 "mdprof_test.m"
  MR_Cont mdprof_test__main_2_p_0_4_env_0__cont;
#line 54 "mdprof_test.m"
  void * mdprof_test__main_2_p_0_4_env_0__cont_env_ptr;
#line 54 "mdprof_test.m"
  MR_Word mdprof_test__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
#line 54 "mdprof_test.m"
  MR_Word mdprof_test__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
#line 54 "mdprof_test.m"
};


#line 102 "mdprof_test.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_test__tree234__pti_tree234_2__plain_mdprof_test__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

#line 105 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_0;

#line 108 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_1;

#line 111 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_2;

#line 114 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_3;

#line 117 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_4;

#line 120 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_5;

#line 123 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_6;

#line 126 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_7;

#line 129 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_8;

#line 132 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_9;

#line 135 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_10;

#line 138 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_11;

#line 141 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_12;

#line 144 "mdprof_test.c"
static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_value_ordered_option_0[13];

#line 147 "mdprof_test.c"
static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_name_ordered_option_0[13];

#line 150 "mdprof_test.c"
static const MR_Integer mdprof_test__mdprof_test__functor_number_map_option_0[13];

#line 153 "mdprof_test.c"
static const MR_FA_TypeInfo_Struct2 mdprof_test__tree234__ti_tree234_2mdprof_test__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

#line 156 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_options_0_0;

#line 159 "mdprof_test.c"
static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_value_ordered_options_0[1];

#line 162 "mdprof_test.c"
static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_name_ordered_options_0[1];

#line 165 "mdprof_test.c"
static const MR_Integer mdprof_test__mdprof_test__functor_number_map_options_0[1];

#line 168 "mdprof_test.c"
static MR_bool MR_CALL 
mdprof_test____Unify____option_0_0_10001(
#line 171 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_1,
#line 173 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_2);

#line 176 "mdprof_test.c"
static void MR_CALL 
mdprof_test____Compare____option_0_0_10001(
#line 179 "mdprof_test.c"
  MR_Box * mdprof_test__wrapper_arg_1,
#line 181 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_2,
#line 183 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_3);

#line 186 "mdprof_test.c"
static MR_bool MR_CALL 
mdprof_test____Unify____option_table_0_0_10001(
#line 189 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_1,
#line 191 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_2);

#line 194 "mdprof_test.c"
static void MR_CALL 
mdprof_test____Compare____option_table_0_0_10001(
#line 197 "mdprof_test.c"
  MR_Box * mdprof_test__wrapper_arg_1,
#line 199 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_2,
#line 201 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_3);

#line 204 "mdprof_test.c"
static MR_bool MR_CALL 
mdprof_test____Unify____options_0_0_10001(
#line 207 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_1,
#line 209 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_2);

#line 212 "mdprof_test.c"
static void MR_CALL 
mdprof_test____Compare____options_0_0_10001(
#line 215 "mdprof_test.c"
  MR_Box * mdprof_test__wrapper_arg_1,
#line 217 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_2,
#line 219 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_3);

#line 388 "mdprof_test.m"
static void MR_CALL 
mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 388 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__1_1);

#line 388 "mdprof_test.m"
static MR_bool MR_CALL 
mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void);

#line 388 "mdprof_test.m"
static void MR_CALL 
mdprof_test____Compare____options_0_0(
#line 388 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__1_1);

#line 388 "mdprof_test.m"
static MR_bool MR_CALL 
mdprof_test____Unify____options_0_0(void);

#line 389 "mdprof_test.m"
static void MR_CALL 
mdprof_test____Compare____option_table_0_0(
#line 389 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__1_1,
#line 389 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__2_2,
#line 389 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__3_3);

#line 389 "mdprof_test.m"
static MR_bool MR_CALL 
mdprof_test____Unify____option_table_0_0(
#line 389 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__1_1,
#line 389 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__2_2);

#line 373 "mdprof_test.m"
static void MR_CALL 
mdprof_test____Compare____option_0_0(
#line 373 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__1_1,
#line 373 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__2_2,
#line 373 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__3_3);

#line 373 "mdprof_test.m"
static MR_bool MR_CALL 
mdprof_test____Unify____option_0_0(
#line 373 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__2_1,
#line 373 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__2_2);

#line 415 "mdprof_test.m"
static void MR_CALL 
mdprof_test__defaults_2_p_0(
#line 415 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__1_1,
#line 415 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__2_2,
#line 415 "mdprof_test.m"
  MR_Cont mdprof_test__cont,
#line 415 "mdprof_test.m"
  void * mdprof_test__cont_env_ptr);

#line 399 "mdprof_test.m"
static MR_bool MR_CALL 
mdprof_test__long_2_p_0(
#line 399 "mdprof_test.m"
  MR_String mdprof_test__HeadVar__1_1,
#line 399 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__2_2);

#line 391 "mdprof_test.m"
static MR_bool MR_CALL 
mdprof_test__short_2_p_0(
#line 391 "mdprof_test.m"
  MR_Char mdprof_test__HeadVar__1_1,
#line 391 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__2_2);

#line 329 "mdprof_test.m"
static void MR_CALL 
mdprof_test__write_test_html_6_p_0(
#line 329 "mdprof_test.m"
  MR_Word mdprof_test__Options_7,
#line 329 "mdprof_test.m"
  MR_String mdprof_test__BaseName_8,
#line 329 "mdprof_test.m"
  MR_Integer mdprof_test__Num_9,
#line 329 "mdprof_test.m"
  MR_String mdprof_test__HTML_10);

#line 315 "mdprof_test.m"
static void MR_CALL 
mdprof_test__test_recursion_types_histogram_5_p_0(
#line 315 "mdprof_test.m"
  MR_Word mdprof_test__Pref_6,
#line 315 "mdprof_test.m"
  MR_Word mdprof_test__Deep_7,
#line 315 "mdprof_test.m"
  MR_Word mdprof_test__Options_8);

#line 302 "mdprof_test.m"
static void MR_CALL 
mdprof_test__test_procrep_dynamic_coverages_7_p_0(
#line 302 "mdprof_test.m"
  MR_Integer mdprof_test__Cur_8,
#line 302 "mdprof_test.m"
  MR_Integer mdprof_test__Max_9,
#line 302 "mdprof_test.m"
  MR_Word mdprof_test__Pref_10,
#line 302 "mdprof_test.m"
  MR_Word mdprof_test__Deep_11,
#line 302 "mdprof_test.m"
  MR_Word mdprof_test__Options_12);

#line 289 "mdprof_test.m"
static void MR_CALL 
mdprof_test__test_procrep_static_coverages_7_p_0(
#line 289 "mdprof_test.m"
  MR_Integer mdprof_test__Cur_8,
#line 289 "mdprof_test.m"
  MR_Integer mdprof_test__Max_9,
#line 289 "mdprof_test.m"
  MR_Word mdprof_test__Pref_10,
#line 289 "mdprof_test.m"
  MR_Word mdprof_test__Deep_11,
#line 289 "mdprof_test.m"
  MR_Word mdprof_test__Options_12);

#line 221 "mdprof_test.m"
static void MR_CALL 
mdprof_test__test_server_5_p_0(
#line 221 "mdprof_test.m"
  MR_Word mdprof_test__Pref_6,
#line 221 "mdprof_test.m"
  MR_Word mdprof_test__Deep_7,
#line 221 "mdprof_test.m"
  MR_Word mdprof_test__Options_8);

#line 192 "mdprof_test.m"
static void MR_CALL 
mdprof_test__write_help_message_3_p_0(
#line 192 "mdprof_test.m"
  MR_String mdprof_test__ProgName_4);

#line 162 "mdprof_test.m"
static void MR_CALL 
mdprof_test__verify_profile_2_5_p_0(
#line 162 "mdprof_test.m"
  MR_String mdprof_test__ProgName_6,
#line 162 "mdprof_test.m"
  MR_Word mdprof_test__Options_7,
#line 162 "mdprof_test.m"
  MR_String mdprof_test__FileName_8);

#line 96 "mdprof_test.m"
static void MR_CALL 
mdprof_test__main2_5_p_0(
#line 96 "mdprof_test.m"
  MR_String mdprof_test__ProgName_6,
#line 96 "mdprof_test.m"
  MR_Word mdprof_test__Args_7,
#line 96 "mdprof_test.m"
  MR_Word mdprof_test__Options_8);

#line 160 "mdprof_test.m"
static void MR_CALL 
main_2_p_0_5(
#line 160 "mdprof_test.m"
  MR_Box mdprof_test__closure_arg,
#line 160 "mdprof_test.m"
  MR_Box mdprof_test__wrapper_arg_1,
#line 160 "mdprof_test.m"
  MR_Box mdprof_test__wrapper_arg_2,
#line 160 "mdprof_test.m"
  MR_Box * mdprof_test__wrapper_arg_3);

#line 54 "mdprof_test.m"
static void MR_CALL 
main_2_p_0_3(
#line 54 "mdprof_test.m"
  void * mdprof_test__env_ptr_arg);

#line 54 "mdprof_test.m"
static void MR_CALL 
main_2_p_0_4(
#line 54 "mdprof_test.m"
  MR_Box mdprof_test__closure_arg,
#line 54 "mdprof_test.m"
  MR_Box * mdprof_test__wrapper_arg_1,
#line 54 "mdprof_test.m"
  MR_Box * mdprof_test__wrapper_arg_2,
#line 54 "mdprof_test.m"
  MR_Cont mdprof_test__cont,
#line 54 "mdprof_test.m"
  void * mdprof_test__cont_env_ptr);

#line 54 "mdprof_test.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 54 "mdprof_test.m"
  MR_Box mdprof_test__closure_arg,
#line 54 "mdprof_test.m"
  MR_Box mdprof_test__wrapper_arg_1,
#line 54 "mdprof_test.m"
  MR_Box * mdprof_test__wrapper_arg_2);

#line 54 "mdprof_test.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 54 "mdprof_test.m"
  MR_Box mdprof_test__closure_arg,
#line 54 "mdprof_test.m"
  MR_Box mdprof_test__wrapper_arg_1,
#line 54 "mdprof_test.m"
  MR_Box * mdprof_test__wrapper_arg_2);


static /* final */ const MR_Box mdprof_test_scalar_common_1[5][3];

static /* final */ const MR_Box mdprof_test_scalar_common_2[3][5];

static /* final */ const MR_Box mdprof_test_scalar_common_3[3][2];

static /* final */ const MR_Box mdprof_test_scalar_common_4[1][8];

static /* final */ const MR_Box mdprof_test_scalar_common_5[2][1];


#line 417 "mdprof_test.m"
/* sealed */ struct mdprof_test__vector_common_type_6_0_s {
#line 417 "mdprof_test.m"
  const MR_Word mdprof_test__vector_common_type_6_0__vct_6_f_0;
#line 417 "mdprof_test.m"
  const MR_Word mdprof_test__vector_common_type_6_0__vct_6_f_1;
#line 417 "mdprof_test.m"
};

static /* final */ const struct mdprof_test__vector_common_type_6_0_s mdprof_test_vector_common_6[13];



static /* final */ const MR_Box mdprof_test_scalar_common_1[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdprof_test__mdprof_test__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdprof_test_scalar_common_2[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdprof_test_scalar_common_2[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdprof_test_scalar_common_2[2])),
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

static /* final */ const MR_Box mdprof_test_scalar_common_2[3][5] = {
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

static /* final */ const MR_Box mdprof_test_scalar_common_3[3][2] = {
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

static /* final */ const MR_Box mdprof_test_scalar_common_4[1][8] = {
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

static /* final */ const MR_Box mdprof_test_scalar_common_5[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};


static /* final */ const struct mdprof_test__vector_common_type_6_0_s mdprof_test_vector_common_6[13] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_5[0])
  },
  /* row 1 */
  {
    (MR_Integer) 3,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_5[1])
  },
  /* row 2 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(3), &mdprof_test_scalar_common_3[1])
  },
  /* row 3 */
  {
    (MR_Integer) 2,
    (MR_Word) MR_mkword(MR_mktag(3), &mdprof_test_scalar_common_3[1])
  },
  /* row 4 */
  {
    (MR_Integer) 4,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_5[0])
  },
  /* row 5 */
  {
    (MR_Integer) 5,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_5[0])
  },
  /* row 6 */
  {
    (MR_Integer) 6,
    (MR_Word) MR_mkword(MR_mktag(3), &mdprof_test_scalar_common_3[2])
  },
  /* row 7 */
  {
    (MR_Integer) 7,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_5[0])
  },
  /* row 8 */
  {
    (MR_Integer) 8,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_5[0])
  },
  /* row 9 */
  {
    (MR_Integer) 9,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_5[0])
  },
  /* row 10 */
  {
    (MR_Integer) 10,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_5[0])
  },
  /* row 11 */
  {
    (MR_Integer) 11,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_5[0])
  },
  /* row 12 */
  {
    (MR_Integer) 12,
    (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_5[0])
  },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "profile.mh"
#include "profile.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 661 "mdprof_test.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_test__tree234__pti_tree234_2__plain_mdprof_test__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdprof_test__mdprof_test__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 670 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_0 = {
  (MR_String) "canonical_clique",
  (MR_Integer) 0
};

#line 676 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_1 = {
  (MR_String) "dump",
  (MR_Integer) 1
};

#line 682 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_2 = {
  (MR_String) "dump_options",
  (MR_Integer) 2
};

#line 688 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_3 = {
  (MR_String) "compress",
  (MR_Integer) 3
};

#line 694 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_4 = {
  (MR_String) "help",
  (MR_Integer) 4
};

#line 700 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_5 = {
  (MR_String) "test",
  (MR_Integer) 5
};

#line 706 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_6 = {
  (MR_String) "test_dir",
  (MR_Integer) 6
};

#line 712 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_7 = {
  (MR_String) "verbose",
  (MR_Integer) 7
};

#line 718 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_8 = {
  (MR_String) "version",
  (MR_Integer) 8
};

#line 724 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_9 = {
  (MR_String) "verify_profile",
  (MR_Integer) 9
};

#line 730 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_10 = {
  (MR_String) "static_procrep_coverage",
  (MR_Integer) 10
};

#line 736 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_11 = {
  (MR_String) "dynamic_procrep_coverage",
  (MR_Integer) 11
};

#line 742 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_option_0_12 = {
  (MR_String) "recursion_types_histogram",
  (MR_Integer) 12
};

#line 748 "mdprof_test.c"
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

#line 765 "mdprof_test.c"
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

#line 782 "mdprof_test.c"
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

#line 799 "mdprof_test.c"
const MR_TypeCtorInfo_Struct mdprof_test__mdprof_test__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_test____Unify____option_0_0_10001)),
  ((MR_Box) (mdprof_test____Compare____option_0_0_10001)),
  (MR_String) "mdprof_test",
  (MR_String) "option",
  {
    mdprof_test__mdprof_test__enum_name_ordered_option_0
  },
  {
    mdprof_test__mdprof_test__enum_value_ordered_option_0
  },
  (MR_Integer) 13,
  (MR_Integer) 4,
  mdprof_test__mdprof_test__functor_number_map_option_0
};

#line 820 "mdprof_test.c"
static const MR_FA_TypeInfo_Struct2 mdprof_test__tree234__ti_tree234_2mdprof_test__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdprof_test__mdprof_test__type_ctor_info_option_0,
    (MR_TypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

#line 829 "mdprof_test.c"
const MR_TypeCtorInfo_Struct mdprof_test__mdprof_test__type_ctor_info_option_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdprof_test____Unify____option_table_0_0_10001)),
  ((MR_Box) (mdprof_test____Compare____option_table_0_0_10001)),
  (MR_String) "mdprof_test",
  (MR_String) "option_table",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdprof_test__tree234__ti_tree234_2mdprof_test__type_ctor_info_option_0getopt__type_ctor_info_option_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 850 "mdprof_test.c"
static const MR_EnumFunctorDesc mdprof_test__mdprof_test__enum_functor_desc_options_0_0 = {
  (MR_String) "options",
  (MR_Integer) 0
};

#line 856 "mdprof_test.c"
static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_value_ordered_options_0[1] = {
  &mdprof_test__mdprof_test__enum_functor_desc_options_0_0
};

#line 861 "mdprof_test.c"
static const MR_EnumFunctorDescPtr mdprof_test__mdprof_test__enum_name_ordered_options_0[1] = {
  &mdprof_test__mdprof_test__enum_functor_desc_options_0_0
};

#line 866 "mdprof_test.c"
static const MR_Integer mdprof_test__mdprof_test__functor_number_map_options_0[1] = {
  (MR_Integer) 0
};

#line 871 "mdprof_test.c"
const MR_TypeCtorInfo_Struct mdprof_test__mdprof_test__type_ctor_info_options_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mdprof_test____Unify____options_0_0_10001)),
  ((MR_Box) (mdprof_test____Compare____options_0_0_10001)),
  (MR_String) "mdprof_test",
  (MR_String) "options",
  {
    mdprof_test__mdprof_test__enum_name_ordered_options_0
  },
  {
    mdprof_test__mdprof_test__enum_value_ordered_options_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdprof_test__mdprof_test__functor_number_map_options_0
};

#line 892 "mdprof_test.c"
static MR_bool MR_CALL 
mdprof_test____Unify____option_0_0_10001(
#line 895 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_1,
#line 897 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_2)
#line 899 "mdprof_test.c"
{
#line 901 "mdprof_test.c"
  {
#line 903 "mdprof_test.c"
    MR_bool mdprof_test__succeeded;

#line 906 "mdprof_test.c"
    {
#line 908 "mdprof_test.c"
      mdprof_test__succeeded = mdprof_test____Unify____option_0_0(((MR_Word) mdprof_test__wrapper_arg_1), ((MR_Word) mdprof_test__wrapper_arg_2));
    }
#line 911 "mdprof_test.c"
    return mdprof_test__succeeded;
#line 913 "mdprof_test.c"
  }
#line 915 "mdprof_test.c"
}

#line 918 "mdprof_test.c"
static void MR_CALL 
mdprof_test____Compare____option_0_0_10001(
#line 921 "mdprof_test.c"
  MR_Box * mdprof_test__wrapper_arg_1,
#line 923 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_2,
#line 925 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_3)
#line 927 "mdprof_test.c"
{
#line 929 "mdprof_test.c"
  {
#line 931 "mdprof_test.c"
    MR_Word mdprof_test__conv0_HeadVar__1_1;

#line 934 "mdprof_test.c"
    {
#line 936 "mdprof_test.c"
      mdprof_test____Compare____option_0_0(&mdprof_test__conv0_HeadVar__1_1, ((MR_Word) mdprof_test__wrapper_arg_2), ((MR_Word) mdprof_test__wrapper_arg_3));
    }
#line 939 "mdprof_test.c"
    *mdprof_test__wrapper_arg_1 = ((MR_Box) (mdprof_test__conv0_HeadVar__1_1));
#line 941 "mdprof_test.c"
  }
#line 943 "mdprof_test.c"
}

#line 946 "mdprof_test.c"
static MR_bool MR_CALL 
mdprof_test____Unify____option_table_0_0_10001(
#line 949 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_1,
#line 951 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_2)
#line 953 "mdprof_test.c"
{
#line 955 "mdprof_test.c"
  {
#line 957 "mdprof_test.c"
    MR_bool mdprof_test__succeeded;

#line 960 "mdprof_test.c"
    {
#line 962 "mdprof_test.c"
      mdprof_test__succeeded = mdprof_test____Unify____option_table_0_0(((MR_Word) mdprof_test__wrapper_arg_1), ((MR_Word) mdprof_test__wrapper_arg_2));
    }
#line 965 "mdprof_test.c"
    return mdprof_test__succeeded;
#line 967 "mdprof_test.c"
  }
#line 969 "mdprof_test.c"
}

#line 972 "mdprof_test.c"
static void MR_CALL 
mdprof_test____Compare____option_table_0_0_10001(
#line 975 "mdprof_test.c"
  MR_Box * mdprof_test__wrapper_arg_1,
#line 977 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_2,
#line 979 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_3)
#line 981 "mdprof_test.c"
{
#line 983 "mdprof_test.c"
  {
#line 985 "mdprof_test.c"
    MR_Word mdprof_test__conv0_HeadVar__1_1;

#line 988 "mdprof_test.c"
    {
#line 990 "mdprof_test.c"
      mdprof_test____Compare____option_table_0_0(&mdprof_test__conv0_HeadVar__1_1, ((MR_Word) mdprof_test__wrapper_arg_2), ((MR_Word) mdprof_test__wrapper_arg_3));
    }
#line 993 "mdprof_test.c"
    *mdprof_test__wrapper_arg_1 = ((MR_Box) (mdprof_test__conv0_HeadVar__1_1));
#line 995 "mdprof_test.c"
  }
#line 997 "mdprof_test.c"
}

#line 1000 "mdprof_test.c"
static MR_bool MR_CALL 
mdprof_test____Unify____options_0_0_10001(
#line 1003 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_1,
#line 1005 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_2)
#line 1007 "mdprof_test.c"
{
#line 1009 "mdprof_test.c"
  {
#line 1011 "mdprof_test.c"
    MR_bool mdprof_test__succeeded;

#line 1014 "mdprof_test.c"
    {
#line 1016 "mdprof_test.c"
      mdprof_test__succeeded = mdprof_test____Unify____options_0_0();
    }
#line 1019 "mdprof_test.c"
    return mdprof_test__succeeded;
#line 1021 "mdprof_test.c"
  }
#line 1023 "mdprof_test.c"
}

#line 1026 "mdprof_test.c"
static void MR_CALL 
mdprof_test____Compare____options_0_0_10001(
#line 1029 "mdprof_test.c"
  MR_Box * mdprof_test__wrapper_arg_1,
#line 1031 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_2,
#line 1033 "mdprof_test.c"
  MR_Box mdprof_test__wrapper_arg_3)
#line 1035 "mdprof_test.c"
{
#line 1037 "mdprof_test.c"
  {
#line 1039 "mdprof_test.c"
    MR_Word mdprof_test__conv0_HeadVar__1_1;

#line 1042 "mdprof_test.c"
    {
#line 1044 "mdprof_test.c"
      mdprof_test____Compare____options_0_0(&mdprof_test__conv0_HeadVar__1_1);
    }
#line 1047 "mdprof_test.c"
    *mdprof_test__wrapper_arg_1 = ((MR_Box) (mdprof_test__conv0_HeadVar__1_1));
#line 1049 "mdprof_test.c"
  }
#line 1051 "mdprof_test.c"
}

#line 388 "mdprof_test.m"
static void MR_CALL 
mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 388 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__1_1)
#line 388 "mdprof_test.m"
{
#line 388 "mdprof_test.m"
  {
#line 388 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;

#line 388 "mdprof_test.m"
    *mdprof_test__HeadVar__1_1 = (MR_Integer) 0;
#line 388 "mdprof_test.m"
  }
#line 388 "mdprof_test.m"
}

#line 388 "mdprof_test.m"
static MR_bool MR_CALL 
mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 388 "mdprof_test.m"
{
#line 388 "mdprof_test.m"
  {
#line 388 "mdprof_test.m"
    return MR_TRUE;
#line 388 "mdprof_test.m"
  }
#line 388 "mdprof_test.m"
}

#line 388 "mdprof_test.m"
static void MR_CALL 
mdprof_test____Compare____options_0_0(
#line 388 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__1_1)
#line 388 "mdprof_test.m"
{
#line 388 "mdprof_test.m"
  {
#line 388 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;

#line 388 "mdprof_test.m"
    {
#line 388 "mdprof_test.m"
      mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mdprof_test__HeadVar__1_1);
#line 388 "mdprof_test.m"
      return;
    }
#line 388 "mdprof_test.m"
  }
#line 388 "mdprof_test.m"
}

#line 388 "mdprof_test.m"
static MR_bool MR_CALL 
mdprof_test____Unify____options_0_0(void)
#line 388 "mdprof_test.m"
{
#line 388 "mdprof_test.m"
  {
#line 388 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;

#line 388 "mdprof_test.m"
    {
#line 388 "mdprof_test.m"
      return mdprof_test__succeeded = mdprof_test__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_112_114_111_102_95_116_101_115_116_95_95_111_112_116_105_111_110_115_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 388 "mdprof_test.m"
    return mdprof_test__succeeded;
#line 388 "mdprof_test.m"
  }
#line 388 "mdprof_test.m"
}

#line 389 "mdprof_test.m"
static void MR_CALL 
mdprof_test____Compare____option_table_0_0(
#line 389 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__1_1,
#line 389 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__2_2,
#line 389 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__3_3)
#line 389 "mdprof_test.m"
{
#line 389 "mdprof_test.m"
  {
#line 389 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;
#line 389 "mdprof_test.m"
    MR_Word mdprof_test__Cast_HeadVar1_4 = mdprof_test__HeadVar__2_2;
#line 389 "mdprof_test.m"
    MR_Word mdprof_test__Cast_HeadVar2_5 = mdprof_test__HeadVar__3_3;

#line 389 "mdprof_test.m"
    {
#line 389 "mdprof_test.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdprof_test_scalar_common_1[0], mdprof_test__HeadVar__1_1, ((MR_Box) (mdprof_test__Cast_HeadVar1_4)), ((MR_Box) (mdprof_test__Cast_HeadVar2_5)));
#line 389 "mdprof_test.m"
      return;
    }
#line 389 "mdprof_test.m"
  }
#line 389 "mdprof_test.m"
}

#line 389 "mdprof_test.m"
static MR_bool MR_CALL 
mdprof_test____Unify____option_table_0_0(
#line 389 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__1_1,
#line 389 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__2_2)
#line 389 "mdprof_test.m"
{
#line 389 "mdprof_test.m"
  {
#line 389 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;
#line 389 "mdprof_test.m"
    MR_Word mdprof_test__Cast_HeadVar1_3 = mdprof_test__HeadVar__1_1;
#line 389 "mdprof_test.m"
    MR_Word mdprof_test__Cast_HeadVar2_4 = mdprof_test__HeadVar__2_2;

#line 389 "mdprof_test.m"
    {
#line 389 "mdprof_test.m"
      return mdprof_test__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdprof_test_scalar_common_1[0], ((MR_Box) (mdprof_test__Cast_HeadVar1_3)), ((MR_Box) (mdprof_test__Cast_HeadVar2_4)));
    }
#line 389 "mdprof_test.m"
    return mdprof_test__succeeded;
#line 389 "mdprof_test.m"
  }
#line 389 "mdprof_test.m"
}

#line 373 "mdprof_test.m"
static void MR_CALL 
mdprof_test____Compare____option_0_0(
#line 373 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__1_1,
#line 373 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__2_2,
#line 373 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__3_3)
#line 373 "mdprof_test.m"
{
#line 373 "mdprof_test.m"
  {
#line 373 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;
#line 373 "mdprof_test.m"
    MR_Integer mdprof_test__Cast_HeadVar1_4 = (MR_Integer) mdprof_test__HeadVar__2_2;
#line 373 "mdprof_test.m"
    MR_Integer mdprof_test__Cast_HeadVar2_5 = (MR_Integer) mdprof_test__HeadVar__3_3;

#line 373 "mdprof_test.m"
    {
#line 373 "mdprof_test.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_test__HeadVar__1_1, mdprof_test__Cast_HeadVar1_4, mdprof_test__Cast_HeadVar2_5);
#line 373 "mdprof_test.m"
      return;
    }
#line 373 "mdprof_test.m"
  }
#line 373 "mdprof_test.m"
}

#line 373 "mdprof_test.m"
static MR_bool MR_CALL 
mdprof_test____Unify____option_0_0(
#line 373 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__2_1,
#line 373 "mdprof_test.m"
  MR_Word mdprof_test__HeadVar__2_2)
#line 373 "mdprof_test.m"
{
#line 1236 "mdprof_test.c"
  {
#line 1238 "mdprof_test.c"
    MR_bool mdprof_test__succeeded = (mdprof_test__HeadVar__2_1 == mdprof_test__HeadVar__2_2);

#line 1241 "mdprof_test.c"
    return mdprof_test__succeeded;
#line 1243 "mdprof_test.c"
  }
#line 373 "mdprof_test.m"
}

#line 415 "mdprof_test.m"
static void MR_CALL 
mdprof_test__defaults_2_p_0(
#line 415 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__1_1,
#line 415 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__2_2,
#line 415 "mdprof_test.m"
  MR_Cont mdprof_test__cont,
#line 415 "mdprof_test.m"
  void * mdprof_test__cont_env_ptr)
#line 415 "mdprof_test.m"
{
#line 417 "mdprof_test.m"
  {
#line 417 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;

#line 417 "mdprof_test.m"
    {
#line 417 "mdprof_test.m"
      MR_Integer mdprof_test__slot_0 = (MR_Integer) 0;

#line 417 "mdprof_test.m"
      do
#line 417 "mdprof_test.m"
        {
#line 417 "mdprof_test.m"
          *mdprof_test__HeadVar__1_1 = ((&mdprof_test_vector_common_6[0 + mdprof_test__slot_0]))->mdprof_test__vector_common_type_6_0__vct_6_f_0;
#line 417 "mdprof_test.m"
          *mdprof_test__HeadVar__2_2 = ((&mdprof_test_vector_common_6[0 + mdprof_test__slot_0]))->mdprof_test__vector_common_type_6_0__vct_6_f_1;
#line 417 "mdprof_test.m"
          {
#line 417 "mdprof_test.m"
            mdprof_test__cont(mdprof_test__cont_env_ptr);
          }
#line 417 "mdprof_test.m"
          mdprof_test__slot_0 = (mdprof_test__slot_0 + (MR_Integer) 1);
#line 417 "mdprof_test.m"
        }
#line 417 "mdprof_test.m"
      while ((mdprof_test__slot_0 < (MR_Integer) 13));
#line 417 "mdprof_test.m"
    }
#line 417 "mdprof_test.m"
  }
#line 415 "mdprof_test.m"
}

#line 399 "mdprof_test.m"
static MR_bool MR_CALL 
mdprof_test__long_2_p_0(
#line 399 "mdprof_test.m"
  MR_String mdprof_test__HeadVar__1_1,
#line 399 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__2_2)
#line 399 "mdprof_test.m"
{
#line 401 "mdprof_test.m"
  {
#line 401 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;

#line 401 "mdprof_test.m"
    if ((strcmp(mdprof_test__HeadVar__1_1, (MR_String) "dump") == 0))
#line 403 "mdprof_test.m"
      {
#line 403 "mdprof_test.m"
        *mdprof_test__HeadVar__2_2 = (MR_Integer) 1;
#line 403 "mdprof_test.m"
        mdprof_test__succeeded = MR_TRUE;
#line 403 "mdprof_test.m"
      }
#line 401 "mdprof_test.m"
    else
#line 401 "mdprof_test.m"
      if ((strcmp(mdprof_test__HeadVar__1_1, (MR_String) "help") == 0))
#line 405 "mdprof_test.m"
        {
#line 405 "mdprof_test.m"
          *mdprof_test__HeadVar__2_2 = (MR_Integer) 4;
#line 405 "mdprof_test.m"
          mdprof_test__succeeded = MR_TRUE;
#line 405 "mdprof_test.m"
        }
#line 401 "mdprof_test.m"
      else
#line 401 "mdprof_test.m"
        if ((strcmp(mdprof_test__HeadVar__1_1, (MR_String) "test") == 0))
#line 406 "mdprof_test.m"
          {
#line 406 "mdprof_test.m"
            *mdprof_test__HeadVar__2_2 = (MR_Integer) 5;
#line 406 "mdprof_test.m"
            mdprof_test__succeeded = MR_TRUE;
#line 406 "mdprof_test.m"
          }
#line 401 "mdprof_test.m"
        else
#line 401 "mdprof_test.m"
          if ((strcmp(mdprof_test__HeadVar__1_1, (MR_String) "verbose") == 0))
#line 408 "mdprof_test.m"
            {
#line 408 "mdprof_test.m"
              *mdprof_test__HeadVar__2_2 = (MR_Integer) 7;
#line 408 "mdprof_test.m"
              mdprof_test__succeeded = MR_TRUE;
#line 408 "mdprof_test.m"
            }
#line 401 "mdprof_test.m"
          else
#line 401 "mdprof_test.m"
            if ((strcmp(mdprof_test__HeadVar__1_1, (MR_String) "version") == 0))
#line 409 "mdprof_test.m"
              {
#line 409 "mdprof_test.m"
                *mdprof_test__HeadVar__2_2 = (MR_Integer) 8;
#line 409 "mdprof_test.m"
                mdprof_test__succeeded = MR_TRUE;
#line 409 "mdprof_test.m"
              }
#line 401 "mdprof_test.m"
            else
#line 401 "mdprof_test.m"
              if ((strcmp(mdprof_test__HeadVar__1_1, (MR_String) "compress") == 0))
#line 402 "mdprof_test.m"
                {
#line 402 "mdprof_test.m"
                  *mdprof_test__HeadVar__2_2 = (MR_Integer) 3;
#line 402 "mdprof_test.m"
                  mdprof_test__succeeded = MR_TRUE;
#line 402 "mdprof_test.m"
                }
#line 401 "mdprof_test.m"
              else
#line 401 "mdprof_test.m"
                if ((strcmp(mdprof_test__HeadVar__1_1, (MR_String) "test-dir") == 0))
#line 407 "mdprof_test.m"
                  {
#line 407 "mdprof_test.m"
                    *mdprof_test__HeadVar__2_2 = (MR_Integer) 6;
#line 407 "mdprof_test.m"
                    mdprof_test__succeeded = MR_TRUE;
#line 407 "mdprof_test.m"
                  }
#line 401 "mdprof_test.m"
                else
#line 401 "mdprof_test.m"
                  if ((strcmp(mdprof_test__HeadVar__1_1, (MR_String) "dump-options") == 0))
#line 404 "mdprof_test.m"
                    {
#line 404 "mdprof_test.m"
                      *mdprof_test__HeadVar__2_2 = (MR_Integer) 2;
#line 404 "mdprof_test.m"
                      mdprof_test__succeeded = MR_TRUE;
#line 404 "mdprof_test.m"
                    }
#line 401 "mdprof_test.m"
                  else
#line 401 "mdprof_test.m"
                    if ((strcmp(mdprof_test__HeadVar__1_1, (MR_String) "verify-profile") == 0))
#line 410 "mdprof_test.m"
                      {
#line 410 "mdprof_test.m"
                        *mdprof_test__HeadVar__2_2 = (MR_Integer) 9;
#line 410 "mdprof_test.m"
                        mdprof_test__succeeded = MR_TRUE;
#line 410 "mdprof_test.m"
                      }
#line 401 "mdprof_test.m"
                    else
#line 401 "mdprof_test.m"
                      if ((strcmp(mdprof_test__HeadVar__1_1, (MR_String) "canonical-clique") == 0))
#line 401 "mdprof_test.m"
                        {
#line 401 "mdprof_test.m"
                          *mdprof_test__HeadVar__2_2 = (MR_Integer) 0;
#line 401 "mdprof_test.m"
                          mdprof_test__succeeded = MR_TRUE;
#line 401 "mdprof_test.m"
                        }
#line 401 "mdprof_test.m"
                      else
#line 401 "mdprof_test.m"
                        if ((strcmp(mdprof_test__HeadVar__1_1, (MR_String) "static-procrep-coverage") == 0))
#line 411 "mdprof_test.m"
                          {
#line 411 "mdprof_test.m"
                            *mdprof_test__HeadVar__2_2 = (MR_Integer) 10;
#line 411 "mdprof_test.m"
                            mdprof_test__succeeded = MR_TRUE;
#line 411 "mdprof_test.m"
                          }
#line 401 "mdprof_test.m"
                        else
#line 401 "mdprof_test.m"
                          if ((strcmp(mdprof_test__HeadVar__1_1, (MR_String) "dynamic-procrep-coverage") == 0))
#line 412 "mdprof_test.m"
                            {
#line 412 "mdprof_test.m"
                              *mdprof_test__HeadVar__2_2 = (MR_Integer) 11;
#line 412 "mdprof_test.m"
                              mdprof_test__succeeded = MR_TRUE;
#line 412 "mdprof_test.m"
                            }
#line 401 "mdprof_test.m"
                          else
#line 401 "mdprof_test.m"
                            if ((strcmp(mdprof_test__HeadVar__1_1, (MR_String) "recursion-types-histogram") == 0))
#line 413 "mdprof_test.m"
                              {
#line 413 "mdprof_test.m"
                                *mdprof_test__HeadVar__2_2 = (MR_Integer) 12;
#line 413 "mdprof_test.m"
                                mdprof_test__succeeded = MR_TRUE;
#line 413 "mdprof_test.m"
                              }
#line 401 "mdprof_test.m"
                            else
#line 401 "mdprof_test.m"
                              mdprof_test__succeeded = MR_FALSE;
#line 401 "mdprof_test.m"
    return mdprof_test__succeeded;
#line 401 "mdprof_test.m"
  }
#line 399 "mdprof_test.m"
}

#line 391 "mdprof_test.m"
static MR_bool MR_CALL 
mdprof_test__short_2_p_0(
#line 391 "mdprof_test.m"
  MR_Char mdprof_test__HeadVar__1_1,
#line 391 "mdprof_test.m"
  MR_Word * mdprof_test__HeadVar__2_2)
#line 391 "mdprof_test.m"
{
#line 393 "mdprof_test.m"
  {
#line 393 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;

#line 393 "mdprof_test.m"
    if ((mdprof_test__HeadVar__1_1 == (MR_Char) 68))
#line 395 "mdprof_test.m"
      {
#line 395 "mdprof_test.m"
        *mdprof_test__HeadVar__2_2 = (MR_Integer) 2;
#line 395 "mdprof_test.m"
        mdprof_test__succeeded = MR_TRUE;
#line 395 "mdprof_test.m"
      }
#line 393 "mdprof_test.m"
    else
#line 393 "mdprof_test.m"
      if ((mdprof_test__HeadVar__1_1 == (MR_Char) 84))
#line 396 "mdprof_test.m"
        {
#line 396 "mdprof_test.m"
          *mdprof_test__HeadVar__2_2 = (MR_Integer) 5;
#line 396 "mdprof_test.m"
          mdprof_test__succeeded = MR_TRUE;
#line 396 "mdprof_test.m"
        }
#line 393 "mdprof_test.m"
      else
#line 393 "mdprof_test.m"
        if ((mdprof_test__HeadVar__1_1 == (MR_Char) 99))
#line 393 "mdprof_test.m"
          {
#line 393 "mdprof_test.m"
            *mdprof_test__HeadVar__2_2 = (MR_Integer) 0;
#line 393 "mdprof_test.m"
            mdprof_test__succeeded = MR_TRUE;
#line 393 "mdprof_test.m"
          }
#line 393 "mdprof_test.m"
        else
#line 393 "mdprof_test.m"
          if ((mdprof_test__HeadVar__1_1 == (MR_Char) 100))
#line 394 "mdprof_test.m"
            {
#line 394 "mdprof_test.m"
              *mdprof_test__HeadVar__2_2 = (MR_Integer) 1;
#line 394 "mdprof_test.m"
              mdprof_test__succeeded = MR_TRUE;
#line 394 "mdprof_test.m"
            }
#line 393 "mdprof_test.m"
          else
#line 393 "mdprof_test.m"
            if ((mdprof_test__HeadVar__1_1 == (MR_Char) 118))
#line 397 "mdprof_test.m"
              {
#line 397 "mdprof_test.m"
                *mdprof_test__HeadVar__2_2 = (MR_Integer) 7;
#line 397 "mdprof_test.m"
                mdprof_test__succeeded = MR_TRUE;
#line 397 "mdprof_test.m"
              }
#line 393 "mdprof_test.m"
            else
#line 393 "mdprof_test.m"
              mdprof_test__succeeded = MR_FALSE;
#line 393 "mdprof_test.m"
    return mdprof_test__succeeded;
#line 393 "mdprof_test.m"
  }
#line 391 "mdprof_test.m"
}

#line 329 "mdprof_test.m"
static void MR_CALL 
mdprof_test__write_test_html_6_p_0(
#line 329 "mdprof_test.m"
  MR_Word mdprof_test__Options_7,
#line 329 "mdprof_test.m"
  MR_String mdprof_test__BaseName_8,
#line 329 "mdprof_test.m"
  MR_Integer mdprof_test__Num_9,
#line 329 "mdprof_test.m"
  MR_String mdprof_test__HTML_10)
#line 329 "mdprof_test.m"
{
#line 332 "mdprof_test.m"
  {
#line 332 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;
#line 332 "mdprof_test.m"
    MR_Word mdprof_test__TypeCtorInfo_67_67;
#line 332 "mdprof_test.m"
    MR_Integer mdprof_test__Bunch_12;
#line 332 "mdprof_test.m"
    MR_String mdprof_test__DirName_13;
#line 332 "mdprof_test.m"
    MR_String mdprof_test__BunchName_14;
#line 332 "mdprof_test.m"
    MR_String mdprof_test__FileName_17;
#line 332 "mdprof_test.m"
    MR_Word mdprof_test__Res_18;
#line 332 "mdprof_test.m"
    MR_Integer mdprof_test__V_27_27 = (mdprof_test__Num_9 - (MR_Integer) 1);
#line 332 "mdprof_test.m"
    MR_Word mdprof_test__V_32_32;
#line 332 "mdprof_test.m"
    MR_Word mdprof_test__V_33_33;
#line 332 "mdprof_test.m"
    MR_Word mdprof_test__V_34_34;
#line 332 "mdprof_test.m"
    MR_Word mdprof_test__V_35_35;
#line 332 "mdprof_test.m"
    MR_Word mdprof_test__V_36_36;
#line 332 "mdprof_test.m"
    MR_Word mdprof_test__V_37_37;
#line 332 "mdprof_test.m"
    MR_Word mdprof_test__V_51_51;
#line 332 "mdprof_test.m"
    MR_Word mdprof_test__V_52_52;
#line 332 "mdprof_test.m"
    MR_Word mdprof_test__V_53_53;
#line 332 "mdprof_test.m"
    MR_Word mdprof_test__V_55_55;
#line 332 "mdprof_test.m"
    MR_Word mdprof_test__V_56_56;
#line 343 "mdprof_test.m"
    MR_Integer mdprof_test__V_39_39;
#line 343 "mdprof_test.m"
    MR_Integer mdprof_test__V_40_40;

#line 339 "mdprof_test.m"
    {
#line 339 "mdprof_test.m"
      mdprof_test__Bunch_12 = mercury__int__f_47_47_2_f_0(mdprof_test__V_27_27, (MR_Integer) 1000);
    }
#line 1622 "mdprof_test.c"
    mdprof_test__TypeCtorInfo_67_67 = (MR_Word) &mdprof_test__mdprof_test__type_ctor_info_option_0;
#line 340 "mdprof_test.m"
    {
#line 340 "mdprof_test.m"
      mercury__getopt__lookup_string_option_3_p_0(mdprof_test__TypeCtorInfo_67_67, mdprof_test__Options_7, ((MR_Box) ((MR_Integer) 6)), &mdprof_test__DirName_13);
    }
#line 342 "mdprof_test.m"
    {
#line 342 "mdprof_test.m"
      mdprof_test__V_33_33 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "mdprof_test.m"
      MR_hl_field(MR_mktag(2), mdprof_test__V_33_33, 0) = ((MR_Box) (mdprof_test__DirName_13));
#line 342 "mdprof_test.m"
    }
#line 342 "mdprof_test.m"
    {
#line 342 "mdprof_test.m"
      mdprof_test__V_35_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "mdprof_test.m"
      MR_hl_field(MR_mktag(2), mdprof_test__V_35_35, 0) = ((MR_Box) (mdprof_test__BaseName_8));
#line 342 "mdprof_test.m"
    }
#line 342 "mdprof_test.m"
    {
#line 342 "mdprof_test.m"
      mdprof_test__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_37_37, 0) = ((MR_Box) (mdprof_test__Bunch_12));
#line 342 "mdprof_test.m"
    }
#line 342 "mdprof_test.m"
    {
#line 342 "mdprof_test.m"
      mdprof_test__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_36_36, 0) = ((MR_Box) (mdprof_test__V_37_37));
#line 342 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "mdprof_test.m"
    }
#line 342 "mdprof_test.m"
    {
#line 342 "mdprof_test.m"
      mdprof_test__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_34_34, 0) = ((MR_Box) (mdprof_test__V_35_35));
#line 342 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_34_34, 1) = ((MR_Box) (mdprof_test__V_36_36));
#line 342 "mdprof_test.m"
    }
#line 341 "mdprof_test.m"
    {
#line 341 "mdprof_test.m"
      mdprof_test__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 341 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_32_32, 0) = ((MR_Box) (mdprof_test__V_33_33));
#line 341 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_32_32, 1) = ((MR_Box) (mdprof_test__V_34_34));
#line 341 "mdprof_test.m"
    }
#line 341 "mdprof_test.m"
    {
#line 341 "mdprof_test.m"
      mercury__string__format_3_p_0((MR_String) "%s/%s_%04d", mdprof_test__V_32_32, &mdprof_test__BunchName_14);
    }
#line 343 "mdprof_test.m"
    mdprof_test__V_40_40 = (mdprof_test__Num_9 - (MR_Integer) 1);
#line 343 "mdprof_test.m"
    {
#line 343 "mdprof_test.m"
      mdprof_test__V_39_39 = mercury__int__rem_2_f_0(mdprof_test__V_40_40, (MR_Integer) 1000);
    }
#line 343 "mdprof_test.m"
    mdprof_test__succeeded = (mdprof_test__V_39_39 == (MR_Integer) 0);
#line 347 "mdprof_test.m"
    if (mdprof_test__succeeded)
#line 345 "mdprof_test.m"
      {
#line 345 "mdprof_test.m"
        MR_String mdprof_test__Cmd_15;
#line 345 "mdprof_test.m"
        MR_String mdprof_test__V_69_69;
#line 345 "mdprof_test.m"
        MR_String mdprof_test__V_70_70;
#line 346 "mdprof_test.m"
        MR_Word mdprof_test__V_16_16;

#line 1710 "mdprof_test.c"
        {
#line 1712 "mdprof_test.c"
          mdprof_test__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) " || mkdir -p ", mdprof_test__BunchName_14);
        }
#line 1715 "mdprof_test.c"
        {
#line 1717 "mdprof_test.c"
          mdprof_test__V_70_70 = mercury__string__f_43_43_2_f_0(mdprof_test__BunchName_14, mdprof_test__V_69_69);
        }
#line 1720 "mdprof_test.c"
        {
#line 1722 "mdprof_test.c"
          mdprof_test__Cmd_15 = mercury__string__f_43_43_2_f_0((MR_String) "test -d ", mdprof_test__V_70_70);
        }
#line 346 "mdprof_test.m"
        {
#line 346 "mdprof_test.m"
          mercury__io__call_system_4_p_0(mdprof_test__Cmd_15, &mdprof_test__V_16_16);
        }
#line 345 "mdprof_test.m"
      }
#line 347 "mdprof_test.m"
    else
#line 346 "mdprof_test.m"
      {
#line 346 "mdprof_test.m"
      }
#line 351 "mdprof_test.m"
    {
#line 351 "mdprof_test.m"
      mdprof_test__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 351 "mdprof_test.m"
      MR_hl_field(MR_mktag(2), mdprof_test__V_52_52, 0) = ((MR_Box) (mdprof_test__BunchName_14));
#line 351 "mdprof_test.m"
    }
#line 351 "mdprof_test.m"
    {
#line 351 "mdprof_test.m"
      mdprof_test__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 351 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_56_56, 0) = ((MR_Box) (mdprof_test__Num_9));
#line 351 "mdprof_test.m"
    }
#line 351 "mdprof_test.m"
    {
#line 351 "mdprof_test.m"
      mdprof_test__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_55_55, 0) = ((MR_Box) (mdprof_test__V_56_56));
#line 351 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "mdprof_test.m"
    }
#line 351 "mdprof_test.m"
    {
#line 351 "mdprof_test.m"
      mdprof_test__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_53_53, 0) = ((MR_Box) (mdprof_test__V_35_35));
#line 351 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_53_53, 1) = ((MR_Box) (mdprof_test__V_55_55));
#line 351 "mdprof_test.m"
    }
#line 350 "mdprof_test.m"
    {
#line 350 "mdprof_test.m"
      mdprof_test__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_51_51, 0) = ((MR_Box) (mdprof_test__V_52_52));
#line 350 "mdprof_test.m"
      MR_hl_field(MR_mktag(1), mdprof_test__V_51_51, 1) = ((MR_Box) (mdprof_test__V_53_53));
#line 350 "mdprof_test.m"
    }
#line 350 "mdprof_test.m"
    {
#line 350 "mdprof_test.m"
      mercury__string__format_3_p_0((MR_String) "%s/%s_%06d.html", mdprof_test__V_51_51, &mdprof_test__FileName_17);
    }
#line 352 "mdprof_test.m"
    {
#line 352 "mdprof_test.m"
      mercury__io__open_output_4_p_0(mdprof_test__FileName_17, &mdprof_test__Res_18);
    }
#line 365 "mdprof_test.m"
    if (((MR_tag((MR_Word) mdprof_test__Res_18)) == (MR_mktag((MR_Integer) 1))))
#line 366 "mdprof_test.m"
      {
#line 366 "mdprof_test.m"
        MR_Word mdprof_test__Err_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_test__Res_18, (MR_Integer) 0)));
#line 366 "mdprof_test.m"
        MR_String mdprof_test__ErrMsg_24;

#line 367 "mdprof_test.m"
        {
#line 367 "mdprof_test.m"
          mercury__io__error_message_2_p_0(mdprof_test__Err_23, &mdprof_test__ErrMsg_24);
        }
#line 368 "mdprof_test.m"
        {
#line 368 "mdprof_test.m"
          mercury__require__error_1_p_0(mdprof_test__ErrMsg_24);
#line 368 "mdprof_test.m"
          return;
        }
#line 366 "mdprof_test.m"
      }
#line 365 "mdprof_test.m"
    else
#line 354 "mdprof_test.m"
      {
#line 354 "mdprof_test.m"
        MR_Word mdprof_test__Stream_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Res_18, (MR_Integer) 0)));
#line 354 "mdprof_test.m"
        MR_Word mdprof_test__Compress_20;

#line 355 "mdprof_test.m"
        {
#line 355 "mdprof_test.m"
          mercury__io__write_string_4_p_0(mdprof_test__Stream_19, mdprof_test__HTML_10);
        }
#line 356 "mdprof_test.m"
        {
#line 356 "mdprof_test.m"
          mercury__io__close_output_3_p_0(mdprof_test__Stream_19);
        }
#line 357 "mdprof_test.m"
        {
#line 357 "mdprof_test.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_67_67, mdprof_test__Options_7, ((MR_Box) ((MR_Integer) 3)), &mdprof_test__Compress_20);
        }
#line 362 "mdprof_test.m"
        if ((mdprof_test__Compress_20 == (MR_Integer) 0))
#line 363 "mdprof_test.m"
          {
#line 363 "mdprof_test.m"
          }
#line 362 "mdprof_test.m"
        else
#line 359 "mdprof_test.m"
          {
#line 359 "mdprof_test.m"
            MR_String mdprof_test__GzipCmd_21;
#line 361 "mdprof_test.m"
            MR_Word mdprof_test__V_22_22;

#line 1856 "mdprof_test.c"
            {
#line 1858 "mdprof_test.c"
              mdprof_test__GzipCmd_21 = mercury__string__f_43_43_2_f_0((MR_String) "gzip ", mdprof_test__FileName_17);
            }
#line 361 "mdprof_test.m"
            {
#line 361 "mdprof_test.m"
              mercury__io__call_system_4_p_0(mdprof_test__GzipCmd_21, &mdprof_test__V_22_22);
            }
#line 359 "mdprof_test.m"
          }
#line 354 "mdprof_test.m"
      }
#line 332 "mdprof_test.m"
  }
#line 329 "mdprof_test.m"
}

#line 315 "mdprof_test.m"
static void MR_CALL 
mdprof_test__test_recursion_types_histogram_5_p_0(
#line 315 "mdprof_test.m"
  MR_Word mdprof_test__Pref_6,
#line 315 "mdprof_test.m"
  MR_Word mdprof_test__Deep_7,
#line 315 "mdprof_test.m"
  MR_Word mdprof_test__Options_8)
#line 315 "mdprof_test.m"
{
#line 319 "mdprof_test.m"
  {
#line 319 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;
#line 320 "mdprof_test.m"
    MR_String mdprof_test__HTML_10;

#line 320 "mdprof_test.m"
    {
#line 320 "mdprof_test.m"
      query__try_exec_6_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), mdprof_test__Pref_6, mdprof_test__Deep_7, &mdprof_test__HTML_10);
    }
#line 321 "mdprof_test.m"
    {
#line 321 "mdprof_test.m"
      mdprof_test__write_test_html_6_p_0(mdprof_test__Options_8, (MR_String) "recursion_types_histogram", (MR_Integer) 1, mdprof_test__HTML_10);
#line 321 "mdprof_test.m"
      return;
    }
#line 319 "mdprof_test.m"
  }
#line 315 "mdprof_test.m"
}

#line 302 "mdprof_test.m"
static void MR_CALL 
mdprof_test__test_procrep_dynamic_coverages_7_p_0(
#line 302 "mdprof_test.m"
  MR_Integer mdprof_test__Cur_8,
#line 302 "mdprof_test.m"
  MR_Integer mdprof_test__Max_9,
#line 302 "mdprof_test.m"
  MR_Word mdprof_test__Pref_10,
#line 302 "mdprof_test.m"
  MR_Word mdprof_test__Deep_11,
#line 302 "mdprof_test.m"
  MR_Word mdprof_test__Options_12)
#line 302 "mdprof_test.m"
{
#line 311 "mdprof_test.m"
  while (MR_TRUE)
#line 311 "mdprof_test.m"
    {
#line 311 "mdprof_test.m"
      /* tailcall optimized into a loop */
#line 311 "mdprof_test.m"
      {
#line 311 "mdprof_test.m"
        MR_bool mdprof_test__succeeded = (mdprof_test__Cur_8 <= mdprof_test__Max_9);

#line 311 "mdprof_test.m"
        if (mdprof_test__succeeded)
#line 308 "mdprof_test.m"
          {
#line 308 "mdprof_test.m"
            MR_String mdprof_test__HTML_14;
#line 308 "mdprof_test.m"
            MR_Word mdprof_test__V_17_17;
#line 308 "mdprof_test.m"
            MR_Word mdprof_test__V_19_19 = (MR_Word) mdprof_test__Cur_8;
#line 308 "mdprof_test.m"
            MR_Integer mdprof_test__V_22_22;

#line 307 "mdprof_test.m"
            {
#line 307 "mdprof_test.m"
              mdprof_test__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "mdprof_test.m"
              MR_hl_field(MR_mktag(3), mdprof_test__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 307 "mdprof_test.m"
              MR_hl_field(MR_mktag(3), mdprof_test__V_17_17, 1) = ((MR_Box) (mdprof_test__V_19_19));
#line 307 "mdprof_test.m"
            }
#line 307 "mdprof_test.m"
            {
#line 307 "mdprof_test.m"
              query__try_exec_6_p_0(mdprof_test__V_17_17, mdprof_test__Pref_10, mdprof_test__Deep_11, &mdprof_test__HTML_14);
            }
#line 309 "mdprof_test.m"
            {
#line 309 "mdprof_test.m"
              mdprof_test__write_test_html_6_p_0(mdprof_test__Options_12, (MR_String) "procrep_static_coverage", mdprof_test__Cur_8, mdprof_test__HTML_14);
            }
#line 310 "mdprof_test.m"
            mdprof_test__V_22_22 = (mdprof_test__Cur_8 + (MR_Integer) 1);
#line 310 "mdprof_test.m"
            /* direct tailcall eliminated */
#line 310 "mdprof_test.m"
            {
#line 310 "mdprof_test.m"
              MR_Integer mdprof_test__Cur__tmp_copy_8 = mdprof_test__V_22_22;

#line 310 "mdprof_test.m"
              mdprof_test__Cur_8 = mdprof_test__Cur__tmp_copy_8;
#line 310 "mdprof_test.m"
            }
#line 310 "mdprof_test.m"
            continue;
#line 308 "mdprof_test.m"
          }
#line 311 "mdprof_test.m"
        else
#line 310 "mdprof_test.m"
          {
#line 310 "mdprof_test.m"
          }
#line 311 "mdprof_test.m"
      }
#line 311 "mdprof_test.m"
      break;
#line 311 "mdprof_test.m"
    }
#line 302 "mdprof_test.m"
}

#line 289 "mdprof_test.m"
static void MR_CALL 
mdprof_test__test_procrep_static_coverages_7_p_0(
#line 289 "mdprof_test.m"
  MR_Integer mdprof_test__Cur_8,
#line 289 "mdprof_test.m"
  MR_Integer mdprof_test__Max_9,
#line 289 "mdprof_test.m"
  MR_Word mdprof_test__Pref_10,
#line 289 "mdprof_test.m"
  MR_Word mdprof_test__Deep_11,
#line 289 "mdprof_test.m"
  MR_Word mdprof_test__Options_12)
#line 289 "mdprof_test.m"
{
#line 298 "mdprof_test.m"
  while (MR_TRUE)
#line 298 "mdprof_test.m"
    {
#line 298 "mdprof_test.m"
      /* tailcall optimized into a loop */
#line 298 "mdprof_test.m"
      {
#line 298 "mdprof_test.m"
        MR_bool mdprof_test__succeeded = (mdprof_test__Cur_8 <= mdprof_test__Max_9);

#line 298 "mdprof_test.m"
        if (mdprof_test__succeeded)
#line 295 "mdprof_test.m"
          {
#line 295 "mdprof_test.m"
            MR_String mdprof_test__HTML_14;
#line 295 "mdprof_test.m"
            MR_Word mdprof_test__V_17_17;
#line 295 "mdprof_test.m"
            MR_Word mdprof_test__V_19_19 = (MR_Word) mdprof_test__Cur_8;
#line 295 "mdprof_test.m"
            MR_Integer mdprof_test__V_22_22;

#line 294 "mdprof_test.m"
            {
#line 294 "mdprof_test.m"
              mdprof_test__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "mdprof_test.m"
              MR_hl_field(MR_mktag(3), mdprof_test__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 294 "mdprof_test.m"
              MR_hl_field(MR_mktag(3), mdprof_test__V_17_17, 1) = ((MR_Box) (mdprof_test__V_19_19));
#line 294 "mdprof_test.m"
            }
#line 294 "mdprof_test.m"
            {
#line 294 "mdprof_test.m"
              query__try_exec_6_p_0(mdprof_test__V_17_17, mdprof_test__Pref_10, mdprof_test__Deep_11, &mdprof_test__HTML_14);
            }
#line 296 "mdprof_test.m"
            {
#line 296 "mdprof_test.m"
              mdprof_test__write_test_html_6_p_0(mdprof_test__Options_12, (MR_String) "procrep_dynamic_coverage", mdprof_test__Cur_8, mdprof_test__HTML_14);
            }
#line 297 "mdprof_test.m"
            mdprof_test__V_22_22 = (mdprof_test__Cur_8 + (MR_Integer) 1);
#line 297 "mdprof_test.m"
            /* direct tailcall eliminated */
#line 297 "mdprof_test.m"
            {
#line 297 "mdprof_test.m"
              MR_Integer mdprof_test__Cur__tmp_copy_8 = mdprof_test__V_22_22;

#line 297 "mdprof_test.m"
              mdprof_test__Cur_8 = mdprof_test__Cur__tmp_copy_8;
#line 297 "mdprof_test.m"
            }
#line 297 "mdprof_test.m"
            continue;
#line 295 "mdprof_test.m"
          }
#line 298 "mdprof_test.m"
        else
#line 297 "mdprof_test.m"
          {
#line 297 "mdprof_test.m"
          }
#line 298 "mdprof_test.m"
      }
#line 298 "mdprof_test.m"
      break;
#line 298 "mdprof_test.m"
    }
#line 289 "mdprof_test.m"
}

#line 221 "mdprof_test.m"
static void MR_CALL 
mdprof_test__test_server_5_p_0(
#line 221 "mdprof_test.m"
  MR_Word mdprof_test__Pref_6,
#line 221 "mdprof_test.m"
  MR_Word mdprof_test__Deep_7,
#line 221 "mdprof_test.m"
  MR_Word mdprof_test__Options_8)
#line 221 "mdprof_test.m"
{
#line 224 "mdprof_test.m"
  {
#line 224 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;
#line 224 "mdprof_test.m"
    MR_Word mdprof_test__TypeCtorInfo_94_94 = (MR_Word) &mdprof_test__mdprof_test__type_ctor_info_option_0;
#line 224 "mdprof_test.m"
    MR_String mdprof_test__DirName_10;
#line 224 "mdprof_test.m"
    MR_String mdprof_test__Cmd_11;
#line 224 "mdprof_test.m"
    MR_Word mdprof_test__StaticProcrepCoverage_13;
#line 224 "mdprof_test.m"
    MR_Word mdprof_test__DynamicProcrepCoverage_15;
#line 224 "mdprof_test.m"
    MR_Word mdprof_test__RecTypesHistogram_17;
#line 224 "mdprof_test.m"
    MR_String mdprof_test__V_98_98;
#line 224 "mdprof_test.m"
    MR_String mdprof_test__V_99_99;
#line 227 "mdprof_test.m"
    MR_Word mdprof_test__V_12_12;

#line 225 "mdprof_test.m"
    {
#line 225 "mdprof_test.m"
      mercury__getopt__lookup_string_option_3_p_0(mdprof_test__TypeCtorInfo_94_94, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 6)), &mdprof_test__DirName_10);
    }
#line 2131 "mdprof_test.c"
    {
#line 2133 "mdprof_test.c"
      mdprof_test__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) " || mkdir -p ", mdprof_test__DirName_10);
    }
#line 2136 "mdprof_test.c"
    {
#line 2138 "mdprof_test.c"
      mdprof_test__V_99_99 = mercury__string__f_43_43_2_f_0(mdprof_test__DirName_10, mdprof_test__V_98_98);
    }
#line 2141 "mdprof_test.c"
    {
#line 2143 "mdprof_test.c"
      mdprof_test__Cmd_11 = mercury__string__f_43_43_2_f_0((MR_String) "test -d ", mdprof_test__V_99_99);
    }
#line 227 "mdprof_test.m"
    {
#line 227 "mdprof_test.m"
      mercury__io__call_system_4_p_0(mdprof_test__Cmd_11, &mdprof_test__V_12_12);
    }
#line 235 "mdprof_test.m"
    {
#line 235 "mdprof_test.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_94_94, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 10)), &mdprof_test__StaticProcrepCoverage_13);
    }
#line 242 "mdprof_test.m"
    if ((mdprof_test__StaticProcrepCoverage_13 == (MR_Integer) 0))
#line 243 "mdprof_test.m"
      {
#line 243 "mdprof_test.m"
      }
#line 242 "mdprof_test.m"
    else
#line 238 "mdprof_test.m"
      {
#line 238 "mdprof_test.m"
        MR_Integer mdprof_test__NumProcStatics_14;
#line 238 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_29_29 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 8)));
#line 239 "mdprof_test.m"
        MR_Word mdprof_test__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 0)));
#line 239 "mdprof_test.m"
        MR_String mdprof_test__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 1)));
#line 239 "mdprof_test.m"
        MR_String mdprof_test__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 2)));
#line 239 "mdprof_test.m"
        MR_String mdprof_test__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 3)));
#line 239 "mdprof_test.m"
        MR_Word mdprof_test__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 4)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 5)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_44_44 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 6)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_45_45 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 7)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_46_46 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 9)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_47_47 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 10)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_48_48 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 11)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_49_49 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 12)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_50_50 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 13)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_51_51 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 14)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_52_52 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 15)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_53_53 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 16)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_54_54 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 17)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_55_55 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 18)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_56_56 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 19)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_57_57 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 20)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_58_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 21)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_59_59 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 22)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 23)));
#line 239 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_61_61 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 24)));
#line 239 "mdprof_test.m"
        MR_Word mdprof_test__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 25)));
#line 239 "mdprof_test.m"
        MR_Word mdprof_test__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 26)));
#line 239 "mdprof_test.m"
        MR_Word mdprof_test__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 27)));
#line 239 "mdprof_test.m"
        MR_Word mdprof_test__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 28)));

#line 239 "mdprof_test.m"
        {
#line 239 "mdprof_test.m"
          mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_static_0, (MR_ArrayPtr) mdprof_test__V_29_29, &mdprof_test__NumProcStatics_14);
        }
#line 240 "mdprof_test.m"
        {
#line 240 "mdprof_test.m"
          mdprof_test__test_procrep_static_coverages_7_p_0((MR_Integer) 1, mdprof_test__NumProcStatics_14, mdprof_test__Pref_6, mdprof_test__Deep_7, mdprof_test__Options_8);
        }
#line 238 "mdprof_test.m"
      }
#line 246 "mdprof_test.m"
    {
#line 246 "mdprof_test.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_94_94, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 11)), &mdprof_test__DynamicProcrepCoverage_15);
    }
#line 253 "mdprof_test.m"
    if ((mdprof_test__DynamicProcrepCoverage_15 == (MR_Integer) 0))
#line 254 "mdprof_test.m"
      {
#line 254 "mdprof_test.m"
      }
#line 253 "mdprof_test.m"
    else
#line 249 "mdprof_test.m"
      {
#line 249 "mdprof_test.m"
        MR_Integer mdprof_test__NumProcDynamics_16;
#line 249 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_33_33 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 6)));
#line 250 "mdprof_test.m"
        MR_Word mdprof_test__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 0)));
#line 250 "mdprof_test.m"
        MR_String mdprof_test__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 1)));
#line 250 "mdprof_test.m"
        MR_String mdprof_test__V_68_68 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 2)));
#line 250 "mdprof_test.m"
        MR_String mdprof_test__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 3)));
#line 250 "mdprof_test.m"
        MR_Word mdprof_test__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 4)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_71_71 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 5)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_72_72 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 7)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_73_73 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 8)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_74_74 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 9)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_75_75 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 10)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_76_76 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 11)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_77_77 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 12)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_78_78 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 13)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_79_79 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 14)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_80_80 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 15)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_81_81 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 16)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_82_82 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 17)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_83_83 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 18)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_84_84 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 19)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_85_85 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 20)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_86_86 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 21)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_87_87 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 22)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_88_88 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 23)));
#line 250 "mdprof_test.m"
        MR_ArrayPtr mdprof_test__V_89_89 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 24)));
#line 250 "mdprof_test.m"
        MR_Word mdprof_test__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 25)));
#line 250 "mdprof_test.m"
        MR_Word mdprof_test__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 26)));
#line 250 "mdprof_test.m"
        MR_Word mdprof_test__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 27)));
#line 250 "mdprof_test.m"
        MR_Word mdprof_test__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__Deep_7, (MR_Integer) 28)));

#line 250 "mdprof_test.m"
        {
#line 250 "mdprof_test.m"
          mercury__array__max_2_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_ArrayPtr) mdprof_test__V_33_33, &mdprof_test__NumProcDynamics_16);
        }
#line 251 "mdprof_test.m"
        {
#line 251 "mdprof_test.m"
          mdprof_test__test_procrep_dynamic_coverages_7_p_0((MR_Integer) 1, mdprof_test__NumProcDynamics_16, mdprof_test__Pref_6, mdprof_test__Deep_7, mdprof_test__Options_8);
        }
#line 249 "mdprof_test.m"
      }
#line 257 "mdprof_test.m"
    {
#line 257 "mdprof_test.m"
      mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_94_94, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 12)), &mdprof_test__RecTypesHistogram_17);
    }
#line 261 "mdprof_test.m"
    if ((mdprof_test__RecTypesHistogram_17 == (MR_Integer) 0))
#line 262 "mdprof_test.m"
      {
#line 262 "mdprof_test.m"
      }
#line 261 "mdprof_test.m"
    else
#line 260 "mdprof_test.m"
      {
#line 260 "mdprof_test.m"
        mdprof_test__test_recursion_types_histogram_5_p_0(mdprof_test__Pref_6, mdprof_test__Deep_7, mdprof_test__Options_8);
#line 260 "mdprof_test.m"
        return;
      }
#line 224 "mdprof_test.m"
  }
#line 221 "mdprof_test.m"
}

#line 192 "mdprof_test.m"
static void MR_CALL 
mdprof_test__write_help_message_3_p_0(
#line 192 "mdprof_test.m"
  MR_String mdprof_test__ProgName_4)
#line 192 "mdprof_test.m"
{
#line 194 "mdprof_test.m"
  {
#line 194 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;
#line 194 "mdprof_test.m"
    MR_String mdprof_test__V_52_52;
#line 194 "mdprof_test.m"
    MR_String mdprof_test__V_54_54;

#line 2368 "mdprof_test.c"
    {
#line 2370 "mdprof_test.c"
      mdprof_test__V_52_52 = mercury__string__f_43_43_2_f_0(mdprof_test__ProgName_4, (MR_String) " [<options>] <filename>\n");
    }
#line 2373 "mdprof_test.c"
    {
#line 2375 "mdprof_test.c"
      mdprof_test__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "Usage: ", mdprof_test__V_52_52);
    }
#line 2378 "mdprof_test.c"
    {
#line 2380 "mdprof_test.c"
      mercury__io__write_string_3_p_0(mdprof_test__V_54_54);
    }
#line 196 "mdprof_test.m"
    {
#line 196 "mdprof_test.m"
      mercury__io__write_string_3_p_0((MR_String) "<filename> must name a deep profiling data file.\nYou should specify one of the following options:\n--help      Generate this help message.\n--version   Report the" " program\'s version number.\n--verbose   Generate progress messages during startup.\n--test      Test the deep profiler, generating all\n\t\t\tpossible web pages of th" "e popular types.\n--verify-profile\n\t\t\tVerify that <filename> is a well-formed deep profiling\n\t\t\tdata file.\n\nYou may also specify the following options:.\n--test-d" "ir <dirname>\n\t\t\tPut the generated web pages into <dirname>.\n--no-compress\n\t\t\tDon\'t compress the resulting files, this speeds the test.\n--procrep-coverage\n\t\t\tRun" " the procrep coverage query on every static procedure\n--recursion-types-histogram\n\t\t\tRun the recursion types histogram query\n");
#line 196 "mdprof_test.m"
      return;
    }
#line 194 "mdprof_test.m"
  }
#line 192 "mdprof_test.m"
}

#line 162 "mdprof_test.m"
static void MR_CALL 
mdprof_test__verify_profile_2_5_p_0(
#line 162 "mdprof_test.m"
  MR_String mdprof_test__ProgName_6,
#line 162 "mdprof_test.m"
  MR_Word mdprof_test__Options_7,
#line 162 "mdprof_test.m"
  MR_String mdprof_test__FileName_8)
#line 162 "mdprof_test.m"
{
#line 165 "mdprof_test.m"
  {
#line 165 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;
#line 165 "mdprof_test.m"
    MR_Word mdprof_test__Canonical_10;
#line 165 "mdprof_test.m"
    MR_String mdprof_test__ScriptName_12;
#line 165 "mdprof_test.m"
    MR_Word mdprof_test__Res_13;
#line 165 "mdprof_test.m"
    MR_Word mdprof_test__V_22_22;

#line 166 "mdprof_test.m"
    {
#line 166 "mdprof_test.m"
      mercury__getopt__lookup_bool_option_3_p_0((MR_Word) &mdprof_test__mdprof_test__type_ctor_info_option_0, mdprof_test__Options_7, ((MR_Box) ((MR_Integer) 0)), &mdprof_test__Canonical_10);
    }
#line 168 "mdprof_test.m"
    {
#line 168 "mdprof_test.m"
      conf__script_name_3_p_0(&mdprof_test__ScriptName_12);
    }
#line 169 "mdprof_test.m"
    {
#line 169 "mdprof_test.m"
      mdprof_test__V_22_22 = dump__default_dump_options_0_f_0();
    }
#line 169 "mdprof_test.m"
    {
#line 169 "mdprof_test.m"
      startup__read_and_startup_10_p_0((MR_String) "dummy_server", mdprof_test__ScriptName_12, mdprof_test__FileName_8, mdprof_test__Canonical_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdprof_test__V_22_22, &mdprof_test__Res_13);
    }
#line 173 "mdprof_test.m"
    if (((MR_tag((MR_Word) mdprof_test__Res_13)) == (MR_mktag((MR_Integer) 1))))
#line 174 "mdprof_test.m"
      {
#line 174 "mdprof_test.m"
        MR_String mdprof_test__Error_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_test__Res_13, (MR_Integer) 0)));
#line 174 "mdprof_test.m"
        MR_String mdprof_test__V_37_37;
#line 174 "mdprof_test.m"
        MR_String mdprof_test__V_39_39;
#line 174 "mdprof_test.m"
        MR_String mdprof_test__V_40_40;
#line 174 "mdprof_test.m"
        MR_String mdprof_test__V_42_42;
#line 174 "mdprof_test.m"
        MR_String mdprof_test__V_43_43;

#line 175 "mdprof_test.m"
        {
#line 175 "mdprof_test.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 2461 "mdprof_test.c"
        {
#line 2463 "mdprof_test.c"
          mdprof_test__V_37_37 = mercury__string__f_43_43_2_f_0(mdprof_test__Error_15, (MR_String) "\n");
        }
#line 2466 "mdprof_test.c"
        {
#line 2468 "mdprof_test.c"
          mdprof_test__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdprof_test__V_37_37);
        }
#line 2471 "mdprof_test.c"
        {
#line 2473 "mdprof_test.c"
          mdprof_test__V_40_40 = mercury__string__f_43_43_2_f_0(mdprof_test__FileName_8, mdprof_test__V_39_39);
        }
#line 2476 "mdprof_test.c"
        {
#line 2478 "mdprof_test.c"
          mdprof_test__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ": error reading ", mdprof_test__V_40_40);
        }
#line 2481 "mdprof_test.c"
        {
#line 2483 "mdprof_test.c"
          mdprof_test__V_43_43 = mercury__string__f_43_43_2_f_0(mdprof_test__ProgName_6, mdprof_test__V_42_42);
        }
#line 2486 "mdprof_test.c"
        {
#line 2488 "mdprof_test.c"
          mercury__io__write_string_3_p_0(mdprof_test__V_43_43);
#line 2490 "mdprof_test.c"
          return;
        }
#line 174 "mdprof_test.m"
      }
#line 173 "mdprof_test.m"
    else
#line 172 "mdprof_test.m"
      {
#line 172 "mdprof_test.m"
      }
#line 165 "mdprof_test.m"
  }
#line 162 "mdprof_test.m"
}

#line 96 "mdprof_test.m"
static void MR_CALL 
mdprof_test__main2_5_p_0(
#line 96 "mdprof_test.m"
  MR_String mdprof_test__ProgName_6,
#line 96 "mdprof_test.m"
  MR_Word mdprof_test__Args_7,
#line 96 "mdprof_test.m"
  MR_Word mdprof_test__Options_8)
#line 96 "mdprof_test.m"
{
#line 133 "mdprof_test.m"
  {
#line 133 "mdprof_test.m"
    MR_bool mdprof_test__succeeded = ((MR_tag((MR_Word) mdprof_test__Args_7)) == (MR_mktag((MR_Integer) 1)));
#line 133 "mdprof_test.m"
    MR_String mdprof_test__FileName_10;
#line 100 "mdprof_test.m"
    MR_Word mdprof_test__V_26_26;

#line 100 "mdprof_test.m"
    if (mdprof_test__succeeded)
#line 100 "mdprof_test.m"
      {
#line 100 "mdprof_test.m"
        mdprof_test__FileName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_test__Args_7, (MR_Integer) 0)));
#line 100 "mdprof_test.m"
        mdprof_test__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_test__Args_7, (MR_Integer) 1)));
#line 100 "mdprof_test.m"
        mdprof_test__succeeded = (mdprof_test__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 100 "mdprof_test.m"
      }
#line 133 "mdprof_test.m"
    if (mdprof_test__succeeded)
#line 101 "mdprof_test.m"
      {
#line 101 "mdprof_test.m"
        MR_Word mdprof_test__TypeCtorInfo_52_52 = (MR_Word) &mdprof_test__mdprof_test__type_ctor_info_option_0;
#line 101 "mdprof_test.m"
        MR_Word mdprof_test__Canonical_11;
#line 101 "mdprof_test.m"
        MR_Word mdprof_test__Verbose_12;
#line 101 "mdprof_test.m"
        MR_Word mdprof_test__DumpStages_13;
#line 101 "mdprof_test.m"
        MR_Word mdprof_test__DumpArrayOptionsStr_14;
#line 101 "mdprof_test.m"
        MR_Word mdprof_test__DumpOptions_15;
#line 101 "mdprof_test.m"
        MR_String mdprof_test__Machine_16;
#line 101 "mdprof_test.m"
        MR_String mdprof_test__ScriptName_17;
#line 101 "mdprof_test.m"
        MR_Word mdprof_test__MaybeOutput_18;
#line 101 "mdprof_test.m"
        MR_Word mdprof_test__StartupResult_20;

#line 101 "mdprof_test.m"
        {
#line 101 "mdprof_test.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_52_52, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 0)), &mdprof_test__Canonical_11);
        }
#line 102 "mdprof_test.m"
        {
#line 102 "mdprof_test.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_52_52, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 7)), &mdprof_test__Verbose_12);
        }
#line 103 "mdprof_test.m"
        {
#line 103 "mdprof_test.m"
          mercury__getopt__lookup_accumulating_option_3_p_0(mdprof_test__TypeCtorInfo_52_52, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 1)), &mdprof_test__DumpStages_13);
        }
#line 104 "mdprof_test.m"
        {
#line 104 "mdprof_test.m"
          mercury__getopt__lookup_accumulating_option_3_p_0(mdprof_test__TypeCtorInfo_52_52, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 2)), &mdprof_test__DumpArrayOptionsStr_14);
        }
#line 105 "mdprof_test.m"
        {
#line 105 "mdprof_test.m"
          dump__dump_array_options_to_dump_options_2_p_0(mdprof_test__DumpArrayOptionsStr_14, &mdprof_test__DumpOptions_15);
        }
#line 106 "mdprof_test.m"
        {
#line 106 "mdprof_test.m"
          conf__server_name_port_3_p_0(&mdprof_test__Machine_16);
        }
#line 107 "mdprof_test.m"
        {
#line 107 "mdprof_test.m"
          conf__script_name_3_p_0(&mdprof_test__ScriptName_17);
        }
#line 111 "mdprof_test.m"
        if ((mdprof_test__Verbose_12 == (MR_Integer) 0))
#line 110 "mdprof_test.m"
          mdprof_test__MaybeOutput_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 111 "mdprof_test.m"
        else
#line 112 "mdprof_test.m"
          {
#line 112 "mdprof_test.m"
            MR_Word mdprof_test__Stdout_19;

#line 113 "mdprof_test.m"
            {
#line 113 "mdprof_test.m"
              mercury__io__stdout_stream_3_p_0(&mdprof_test__Stdout_19);
            }
#line 114 "mdprof_test.m"
            {
#line 114 "mdprof_test.m"
              mdprof_test__MaybeOutput_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 114 "mdprof_test.m"
              MR_hl_field(MR_mktag(1), mdprof_test__MaybeOutput_18, 0) = ((MR_Box) (mdprof_test__Stdout_19));
#line 114 "mdprof_test.m"
            }
#line 112 "mdprof_test.m"
          }
#line 116 "mdprof_test.m"
        {
#line 116 "mdprof_test.m"
          startup__read_and_startup_10_p_0(mdprof_test__Machine_16, mdprof_test__ScriptName_17, mdprof_test__FileName_10, mdprof_test__Canonical_11, mdprof_test__MaybeOutput_18, mdprof_test__DumpStages_13, mdprof_test__DumpOptions_15, &mdprof_test__StartupResult_20);
        }
#line 127 "mdprof_test.m"
        if (((MR_tag((MR_Word) mdprof_test__StartupResult_20)) == (MR_mktag((MR_Integer) 1))))
#line 128 "mdprof_test.m"
          {
#line 128 "mdprof_test.m"
            MR_String mdprof_test__Error_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_test__StartupResult_20, (MR_Integer) 0)));
#line 128 "mdprof_test.m"
            MR_String mdprof_test__V_54_54;
#line 128 "mdprof_test.m"
            MR_String mdprof_test__V_56_56;
#line 128 "mdprof_test.m"
            MR_String mdprof_test__V_57_57;
#line 128 "mdprof_test.m"
            MR_String mdprof_test__V_59_59;
#line 128 "mdprof_test.m"
            MR_String mdprof_test__V_60_60;

#line 129 "mdprof_test.m"
            {
#line 129 "mdprof_test.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
            }
#line 2651 "mdprof_test.c"
            {
#line 2653 "mdprof_test.c"
              mdprof_test__V_54_54 = mercury__string__f_43_43_2_f_0(mdprof_test__Error_23, (MR_String) "\n");
            }
#line 2656 "mdprof_test.c"
            {
#line 2658 "mdprof_test.c"
              mdprof_test__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdprof_test__V_54_54);
            }
#line 2661 "mdprof_test.c"
            {
#line 2663 "mdprof_test.c"
              mdprof_test__V_57_57 = mercury__string__f_43_43_2_f_0(mdprof_test__FileName_10, mdprof_test__V_56_56);
            }
#line 2666 "mdprof_test.c"
            {
#line 2668 "mdprof_test.c"
              mdprof_test__V_59_59 = mercury__string__f_43_43_2_f_0((MR_String) ": error reading ", mdprof_test__V_57_57);
            }
#line 2671 "mdprof_test.c"
            {
#line 2673 "mdprof_test.c"
              mdprof_test__V_60_60 = mercury__string__f_43_43_2_f_0(mdprof_test__ProgName_6, mdprof_test__V_59_59);
            }
#line 2676 "mdprof_test.c"
            {
#line 2678 "mdprof_test.c"
              mercury__io__write_string_3_p_0(mdprof_test__V_60_60);
#line 2680 "mdprof_test.c"
              return;
            }
#line 128 "mdprof_test.m"
          }
#line 127 "mdprof_test.m"
        else
#line 119 "mdprof_test.m"
          {
#line 119 "mdprof_test.m"
            MR_Word mdprof_test__Deep_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__StartupResult_20, (MR_Integer) 0)));
#line 119 "mdprof_test.m"
            MR_Word mdprof_test__Test_22;

#line 120 "mdprof_test.m"
            {
#line 120 "mdprof_test.m"
              mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_52_52, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 5)), &mdprof_test__Test_22);
            }
#line 123 "mdprof_test.m"
            if ((mdprof_test__Test_22 == (MR_Integer) 0))
#line 122 "mdprof_test.m"
              {
#line 122 "mdprof_test.m"
              }
#line 123 "mdprof_test.m"
            else
#line 124 "mdprof_test.m"
              {
#line 124 "mdprof_test.m"
                MR_Word mdprof_test__V_47_47;

#line 125 "mdprof_test.m"
                {
#line 125 "mdprof_test.m"
                  mdprof_test__V_47_47 = query__default_preferences_1_f_0(mdprof_test__Deep_21);
                }
#line 125 "mdprof_test.m"
                {
#line 125 "mdprof_test.m"
                  mdprof_test__test_server_5_p_0(mdprof_test__V_47_47, mdprof_test__Deep_21, mdprof_test__Options_8);
#line 125 "mdprof_test.m"
                  return;
                }
#line 124 "mdprof_test.m"
              }
#line 119 "mdprof_test.m"
          }
#line 101 "mdprof_test.m"
      }
#line 133 "mdprof_test.m"
    else
#line 134 "mdprof_test.m"
      {
#line 134 "mdprof_test.m"
        {
#line 134 "mdprof_test.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 135 "mdprof_test.m"
        {
#line 135 "mdprof_test.m"
          mdprof_test__write_help_message_3_p_0(mdprof_test__ProgName_6);
#line 135 "mdprof_test.m"
          return;
        }
#line 134 "mdprof_test.m"
      }
#line 133 "mdprof_test.m"
  }
#line 96 "mdprof_test.m"
}

#line 160 "mdprof_test.m"
static void MR_CALL 
main_2_p_0_5(
#line 160 "mdprof_test.m"
  MR_Box mdprof_test__closure_arg,
#line 160 "mdprof_test.m"
  MR_Box mdprof_test__wrapper_arg_1,
#line 160 "mdprof_test.m"
  MR_Box mdprof_test__wrapper_arg_2,
#line 160 "mdprof_test.m"
  MR_Box * mdprof_test__wrapper_arg_3)
#line 160 "mdprof_test.m"
{
#line 160 "mdprof_test.m"
  {
#line 160 "mdprof_test.m"
    MR_Box mdprof_test__closure = mdprof_test__closure_arg;

#line 160 "mdprof_test.m"
    {
#line 160 "mdprof_test.m"
      mdprof_test__verify_profile_2_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdprof_test__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__closure, (MR_Integer) 4))), ((MR_String) mdprof_test__wrapper_arg_1));
#line 160 "mdprof_test.m"
      return;
    }
#line 160 "mdprof_test.m"
  }
#line 160 "mdprof_test.m"
}

#line 54 "mdprof_test.m"
static void MR_CALL 
main_2_p_0_3(
#line 54 "mdprof_test.m"
  void * mdprof_test__env_ptr_arg)
#line 54 "mdprof_test.m"
{
#line 54 "mdprof_test.m"
  {
#line 54 "mdprof_test.m"
    struct mdprof_test__main_2_p_0_4_env_0_s * mdprof_test__env_ptr = (struct mdprof_test__main_2_p_0_4_env_0_s *) mdprof_test__env_ptr_arg;

#line 54 "mdprof_test.m"
    *((mdprof_test__env_ptr)->mdprof_test__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdprof_test__env_ptr)->mdprof_test__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
#line 54 "mdprof_test.m"
    *((mdprof_test__env_ptr)->mdprof_test__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdprof_test__env_ptr)->mdprof_test__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
#line 54 "mdprof_test.m"
    {
#line 54 "mdprof_test.m"
      ((mdprof_test__env_ptr)->mdprof_test__main_2_p_0_4_env_0__cont)((mdprof_test__env_ptr)->mdprof_test__main_2_p_0_4_env_0__cont_env_ptr);
#line 54 "mdprof_test.m"
      return;
    }
#line 54 "mdprof_test.m"
  }
#line 54 "mdprof_test.m"
}

#line 54 "mdprof_test.m"
static void MR_CALL 
main_2_p_0_4(
#line 54 "mdprof_test.m"
  MR_Box mdprof_test__closure_arg,
#line 54 "mdprof_test.m"
  MR_Box * mdprof_test__wrapper_arg_1,
#line 54 "mdprof_test.m"
  MR_Box * mdprof_test__wrapper_arg_2,
#line 54 "mdprof_test.m"
  MR_Cont mdprof_test__cont,
#line 54 "mdprof_test.m"
  void * mdprof_test__cont_env_ptr)
#line 54 "mdprof_test.m"
{
#line 54 "mdprof_test.m"
  {
#line 54 "mdprof_test.m"
    struct mdprof_test__main_2_p_0_4_env_0_s mdprof_test__env;

#line 54 "mdprof_test.m"
    (mdprof_test__env).mdprof_test__main_2_p_0_4_env_0__wrapper_arg_1 = mdprof_test__wrapper_arg_1;
#line 54 "mdprof_test.m"
    (mdprof_test__env).mdprof_test__main_2_p_0_4_env_0__wrapper_arg_2 = mdprof_test__wrapper_arg_2;
#line 54 "mdprof_test.m"
    (mdprof_test__env).mdprof_test__main_2_p_0_4_env_0__cont = mdprof_test__cont;
#line 54 "mdprof_test.m"
    (mdprof_test__env).mdprof_test__main_2_p_0_4_env_0__cont_env_ptr = mdprof_test__cont_env_ptr;
#line 54 "mdprof_test.m"
    {
#line 54 "mdprof_test.m"
      MR_Box mdprof_test__closure = mdprof_test__closure_arg;

#line 54 "mdprof_test.m"
      {
#line 54 "mdprof_test.m"
        mdprof_test__defaults_2_p_0(&(mdprof_test__env).mdprof_test__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mdprof_test__env).mdprof_test__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mdprof_test__env);
      }
#line 54 "mdprof_test.m"
    }
#line 54 "mdprof_test.m"
  }
#line 54 "mdprof_test.m"
}

#line 54 "mdprof_test.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 54 "mdprof_test.m"
  MR_Box mdprof_test__closure_arg,
#line 54 "mdprof_test.m"
  MR_Box mdprof_test__wrapper_arg_1,
#line 54 "mdprof_test.m"
  MR_Box * mdprof_test__wrapper_arg_2)
#line 54 "mdprof_test.m"
{
#line 54 "mdprof_test.m"
  {
#line 54 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;
#line 54 "mdprof_test.m"
    MR_Box mdprof_test__closure = mdprof_test__closure_arg;
#line 54 "mdprof_test.m"
    MR_Word mdprof_test__conv1_HeadVar__2_2;

#line 54 "mdprof_test.m"
    {
#line 54 "mdprof_test.m"
      mdprof_test__succeeded = mdprof_test__long_2_p_0(((MR_String) mdprof_test__wrapper_arg_1), &mdprof_test__conv1_HeadVar__2_2);
    }
#line 54 "mdprof_test.m"
    if (mdprof_test__succeeded)
#line 54 "mdprof_test.m"
      {
#line 54 "mdprof_test.m"
        *mdprof_test__wrapper_arg_2 = ((MR_Box) (mdprof_test__conv1_HeadVar__2_2));
#line 54 "mdprof_test.m"
        mdprof_test__succeeded = MR_TRUE;
#line 54 "mdprof_test.m"
      }
#line 54 "mdprof_test.m"
    return mdprof_test__succeeded;
#line 54 "mdprof_test.m"
  }
#line 54 "mdprof_test.m"
}

#line 54 "mdprof_test.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 54 "mdprof_test.m"
  MR_Box mdprof_test__closure_arg,
#line 54 "mdprof_test.m"
  MR_Box mdprof_test__wrapper_arg_1,
#line 54 "mdprof_test.m"
  MR_Box * mdprof_test__wrapper_arg_2)
#line 54 "mdprof_test.m"
{
#line 54 "mdprof_test.m"
  {
#line 54 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;
#line 54 "mdprof_test.m"
    MR_Box mdprof_test__closure = mdprof_test__closure_arg;
#line 54 "mdprof_test.m"
    MR_Word mdprof_test__conv0_HeadVar__2_2;

#line 54 "mdprof_test.m"
    {
#line 54 "mdprof_test.m"
      mdprof_test__succeeded = mdprof_test__short_2_p_0(((MR_Char) (MR_Word) mdprof_test__wrapper_arg_1), &mdprof_test__conv0_HeadVar__2_2);
    }
#line 54 "mdprof_test.m"
    if (mdprof_test__succeeded)
#line 54 "mdprof_test.m"
      {
#line 54 "mdprof_test.m"
        *mdprof_test__wrapper_arg_2 = ((MR_Box) (mdprof_test__conv0_HeadVar__2_2));
#line 54 "mdprof_test.m"
        mdprof_test__succeeded = MR_TRUE;
#line 54 "mdprof_test.m"
      }
#line 54 "mdprof_test.m"
    return mdprof_test__succeeded;
#line 54 "mdprof_test.m"
  }
#line 54 "mdprof_test.m"
}

#line 23 "mdprof_test.m"
void MR_CALL 
main_2_p_0(void)
#line 23 "mdprof_test.m"
{
#line 51 "mdprof_test.m"
  {
#line 51 "mdprof_test.m"
    MR_bool mdprof_test__succeeded;
#line 51 "mdprof_test.m"
    MR_Word mdprof_test__TypeCtorInfo_44_44;
#line 51 "mdprof_test.m"
    MR_String mdprof_test__ProgName_4;
#line 51 "mdprof_test.m"
    MR_Word mdprof_test__Args0_5;
#line 51 "mdprof_test.m"
    MR_Word mdprof_test__Args_6;
#line 51 "mdprof_test.m"
    MR_Word mdprof_test__MaybeOptions_7;

#line 52 "mdprof_test.m"
    {
#line 52 "mdprof_test.m"
      mercury__io__progname_base_4_p_0((MR_String) "mdprof_test", &mdprof_test__ProgName_4);
    }
#line 53 "mdprof_test.m"
    {
#line 53 "mdprof_test.m"
      mercury__io__command_line_arguments_3_p_0(&mdprof_test__Args0_5);
    }
#line 2970 "mdprof_test.c"
    mdprof_test__TypeCtorInfo_44_44 = (MR_Word) &mdprof_test__mdprof_test__type_ctor_info_option_0;
#line 54 "mdprof_test.m"
    {
#line 54 "mdprof_test.m"
      mercury__getopt__process_options_4_p_0(mdprof_test__TypeCtorInfo_44_44, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_test_scalar_common_1[4]), mdprof_test__Args0_5, &mdprof_test__Args_6, &mdprof_test__MaybeOptions_7);
    }
#line 87 "mdprof_test.m"
    if (((MR_tag((MR_Word) mdprof_test__MaybeOptions_7)) == (MR_mktag((MR_Integer) 1))))
#line 88 "mdprof_test.m"
      {
#line 88 "mdprof_test.m"
        MR_String mdprof_test__Msg_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_test__MaybeOptions_7, (MR_Integer) 0)));
#line 88 "mdprof_test.m"
        MR_String mdprof_test__V_46_46;
#line 88 "mdprof_test.m"
        MR_String mdprof_test__V_48_48;
#line 88 "mdprof_test.m"
        MR_String mdprof_test__V_49_49;

#line 89 "mdprof_test.m"
        {
#line 89 "mdprof_test.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
#line 2995 "mdprof_test.c"
        {
#line 2997 "mdprof_test.c"
          mdprof_test__V_46_46 = mercury__string__f_43_43_2_f_0(mdprof_test__Msg_12, (MR_String) "\n");
        }
#line 3000 "mdprof_test.c"
        {
#line 3002 "mdprof_test.c"
          mdprof_test__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) ": error parsing options: ", mdprof_test__V_46_46);
        }
#line 3005 "mdprof_test.c"
        {
#line 3007 "mdprof_test.c"
          mdprof_test__V_49_49 = mercury__string__f_43_43_2_f_0(mdprof_test__ProgName_4, mdprof_test__V_48_48);
        }
#line 3010 "mdprof_test.c"
        {
#line 3012 "mdprof_test.c"
          mercury__io__write_string_3_p_0(mdprof_test__V_49_49);
#line 3014 "mdprof_test.c"
          return;
        }
#line 88 "mdprof_test.m"
      }
#line 87 "mdprof_test.m"
    else
#line 57 "mdprof_test.m"
      {
#line 57 "mdprof_test.m"
        MR_Word mdprof_test__Options_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_test__MaybeOptions_7, (MR_Integer) 0)));
#line 57 "mdprof_test.m"
        MR_Word mdprof_test__Help_9;
#line 57 "mdprof_test.m"
        MR_Word mdprof_test__Version_10;
#line 57 "mdprof_test.m"
        MR_Word mdprof_test__Verify_11;

#line 58 "mdprof_test.m"
        {
#line 58 "mdprof_test.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_44_44, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 4)), &mdprof_test__Help_9);
        }
#line 59 "mdprof_test.m"
        {
#line 59 "mdprof_test.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_44_44, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 8)), &mdprof_test__Version_10);
        }
#line 60 "mdprof_test.m"
        {
#line 60 "mdprof_test.m"
          mercury__getopt__lookup_bool_option_3_p_0(mdprof_test__TypeCtorInfo_44_44, mdprof_test__Options_8, ((MR_Box) ((MR_Integer) 9)), &mdprof_test__Verify_11);
        }
#line 64 "mdprof_test.m"
        if ((mdprof_test__Help_9 == (MR_Integer) 0))
#line 65 "mdprof_test.m"
          {
#line 65 "mdprof_test.m"
          }
#line 64 "mdprof_test.m"
        else
#line 63 "mdprof_test.m"
          {
#line 63 "mdprof_test.m"
            mdprof_test__write_help_message_3_p_0(mdprof_test__ProgName_4);
          }
#line 70 "mdprof_test.m"
        if ((mdprof_test__Version_10 == (MR_Integer) 0))
#line 71 "mdprof_test.m"
          {
#line 71 "mdprof_test.m"
          }
#line 70 "mdprof_test.m"
        else
#line 184 "mdprof_test.m"
          {
#line 184 "mdprof_test.m"
            MR_String mdprof_test__Version_54;

#line 185 "mdprof_test.m"
            {
#line 185 "mdprof_test.m"
              mercury__library__version_1_p_0(&mdprof_test__Version_54);
            }
#line 186 "mdprof_test.m"
            {
#line 186 "mdprof_test.m"
              mercury__io__write_string_3_p_0(mdprof_test__ProgName_4);
            }
#line 187 "mdprof_test.m"
            {
#line 187 "mdprof_test.m"
              mercury__io__write_string_3_p_0((MR_String) ": Mercury deep profiler");
            }
#line 188 "mdprof_test.m"
            {
#line 188 "mdprof_test.m"
              mercury__io__nl_2_p_0();
            }
#line 189 "mdprof_test.m"
            {
#line 189 "mdprof_test.m"
              mercury__io__write_string_3_p_0(mdprof_test__Version_54);
            }
#line 190 "mdprof_test.m"
            {
#line 190 "mdprof_test.m"
              mercury__io__nl_2_p_0();
            }
#line 184 "mdprof_test.m"
          }
#line 74 "mdprof_test.m"
        mdprof_test__succeeded = (mdprof_test__Help_9 == (MR_Integer) 0);
#line 74 "mdprof_test.m"
        if (mdprof_test__succeeded)
#line 75 "mdprof_test.m"
          mdprof_test__succeeded = (mdprof_test__Version_10 == (MR_Integer) 0);
#line 84 "mdprof_test.m"
        if (mdprof_test__succeeded)
#line 80 "mdprof_test.m"
          if ((mdprof_test__Verify_11 == (MR_Integer) 0))
#line 79 "mdprof_test.m"
            {
#line 79 "mdprof_test.m"
              mdprof_test__main2_5_p_0(mdprof_test__ProgName_4, mdprof_test__Args_6, mdprof_test__Options_8);
#line 79 "mdprof_test.m"
              return;
            }
#line 80 "mdprof_test.m"
          else
#line 152 "mdprof_test.m"
            {
#line 152 "mdprof_test.m"
              MR_Word mdprof_test__Args_67;
#line 152 "mdprof_test.m"
              MR_Word mdprof_test__V_72_72;
#line 160 "mdprof_test.m"
              MR_Box mdprof_test__conv4_STATE_VARIABLE_IO_14;

#line 156 "mdprof_test.m"
              if ((mdprof_test__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 154 "mdprof_test.m"
                {
#line 155 "mdprof_test.m"
                  mdprof_test__Args_67 = (MR_Word) MR_mkword(MR_mktag(1), &mdprof_test_scalar_common_3[0]);
#line 154 "mdprof_test.m"
                }
#line 156 "mdprof_test.m"
              else
#line 158 "mdprof_test.m"
                mdprof_test__Args_67 = mdprof_test__Args_6;
#line 160 "mdprof_test.m"
              {
#line 160 "mdprof_test.m"
                mdprof_test__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 160 "mdprof_test.m"
                MR_hl_field(MR_mktag(0), mdprof_test__V_72_72, 0) = ((MR_Box) (&mdprof_test_scalar_common_4[0]));
#line 160 "mdprof_test.m"
                MR_hl_field(MR_mktag(0), mdprof_test__V_72_72, 1) = ((MR_Box) (main_2_p_0_5));
#line 160 "mdprof_test.m"
                MR_hl_field(MR_mktag(0), mdprof_test__V_72_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 160 "mdprof_test.m"
                MR_hl_field(MR_mktag(0), mdprof_test__V_72_72, 3) = ((MR_Box) (mdprof_test__ProgName_4));
#line 160 "mdprof_test.m"
                MR_hl_field(MR_mktag(0), mdprof_test__V_72_72, 4) = ((MR_Box) (mdprof_test__Options_8));
#line 160 "mdprof_test.m"
              }
#line 160 "mdprof_test.m"
              {
#line 160 "mdprof_test.m"
                mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdprof_test__V_72_72, mdprof_test__Args_67, ((MR_Box) ((MR_Integer) 0)), &mdprof_test__conv4_STATE_VARIABLE_IO_14);
              }
#line 152 "mdprof_test.m"
            }
#line 84 "mdprof_test.m"
        else
#line 82 "mdprof_test.m"
          {
#line 82 "mdprof_test.m"
          }
#line 57 "mdprof_test.m"
      }
#line 51 "mdprof_test.m"
  }
#line 23 "mdprof_test.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdprof_test. */
