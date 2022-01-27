/*
** Automatically generated from `op_mode.m'
** by the Mercury compiler,
** version rotd-2016-02-26
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


/* :- module libs.op_mode. */
/* :- implementation. */

/*
INIT mercury__libs__op_mode__init
ENDINIT
*/

#include "libs.op_mode.mih"


#include "libs.mih"
#include "libs.options.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
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
#include "univ.mih"



struct libs__op_mode__decide_op_mode_3_p_0_env_0_s {
  MR_bool libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded;
  MR_Word libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_73_73;
  MR_Word libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_49_49;
  jmp_buf libs__op_mode__decide_op_mode_3_p_0_env_0__commit_0;
  MR_Word libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_64;
  MR_Box libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_64;
};


static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_libs__op_mode__type_ctor_info_op_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__op_mode__set_ordlist__pti_set_ordlist_1__plain_libs__op_mode__type_ctor_info_op_mode_0;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_0[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_0;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_1;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_2[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_2;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_3[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_3;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_4[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4;

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_0[1];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_1[1];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_2[1];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_3[2];

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_0[4];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_0[5];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_0[5];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_1;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_2;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_3;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_5;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_6[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_6;

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_0[6];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_1[1];

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_args_0[2];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_args_0[7];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_args_0[7];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_0;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_1;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_2;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_3;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_4;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_5;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_augment_0_6[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_6;

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_0[6];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_1[1];

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_augment_0[2];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_augment_0[7];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_augment_0[7];

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_0;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_1;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_2;

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_codegen_0[3];

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_codegen_0[3];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_codegen_0[3];

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_make_0_0;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_make_0_1;

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_make_0[2];

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_make_0[2];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_make_0[2];

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_0;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_1;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_2;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_3;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_4;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_5;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_6;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_7;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_8;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_9;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_10;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_11;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_12;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_13;

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_query_0[14];

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_query_0[14];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_query_0[14];

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_0_0_10001(
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_0_0_10001(
  MR_Box * libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box libs__op_mode__wrapper_arg_3);

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_args_0_0_10001(
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_args_0_0_10001(
  MR_Box * libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box libs__op_mode__wrapper_arg_3);

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_augment_0_0_10001(
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_augment_0_0_10001(
  MR_Box * libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box libs__op_mode__wrapper_arg_3);

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_codegen_0_0_10001(
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_codegen_0_0_10001(
  MR_Box * libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box libs__op_mode__wrapper_arg_3);

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_make_0_0_10001(
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_make_0_0_10001(
  MR_Box * libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box libs__op_mode__wrapper_arg_3);

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_query_0_0_10001(
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_query_0_0_10001(
  MR_Box * libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box libs__op_mode__wrapper_arg_3);

static MR_Word MR_CALL 
libs__op_mode__bool_op_modes_0_f_0(void);

static void MR_CALL 
libs__op_mode__gather_bool_op_mode_4_p_0(
  MR_Word libs__op_mode__OptionTable_5,
  MR_Word libs__op_mode__HeadVar__2_2,
  MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_0_11,
  MR_Word * libs__op_mode__STATE_VARIABLE_OpModeSet_12);

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_1(
  MR_Box libs__op_mode__closure_arg,
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box * libs__op_mode__wrapper_arg_3);

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_2(
  void * libs__op_mode__env_ptr_arg);

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_4(
  void * libs__op_mode__env_ptr_arg);

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_3(
  void * libs__op_mode__env_ptr_arg);

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_5(
  void * libs__op_mode__env_ptr_arg);


static /* final */ const MR_Box libs__op_mode_scalar_common_1[1][3];

static /* final */ const MR_Box libs__op_mode_scalar_common_2[94][2];

static /* final */ const MR_Box libs__op_mode_scalar_common_3[14][1];

static /* final */ const MR_Box libs__op_mode_scalar_common_4[1][7];


/* sealed */ struct libs__op_mode__vector_common_type_5_0_s {
  const MR_String libs__op_mode__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct libs__op_mode__vector_common_type_5_0_s libs__op_mode_vector_common_5[14];



static /* final */ const MR_Box libs__op_mode_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0))
  },
};

static /* final */ const MR_Box libs__op_mode_scalar_common_2[94][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[1])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 101)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[1])))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 100)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[3])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[4])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Integer) 99)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[6])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[5])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 98)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[11])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[9])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[6])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Integer) 91)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[14])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[12])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[7])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 90)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[16])))
  },
  /* row 18 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[15])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[8])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_Integer) 89)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[20])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[18])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[9])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 88)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[23])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[21])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Integer) 97)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[25])))
  },
  /* row 27 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[26])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[24])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Integer) 86)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[28])))
  },
  /* row 30 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[27])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Integer) 85)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[31])))
  },
  /* row 33 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[32])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[30])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 87)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[34])))
  },
  /* row 36 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[35])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[33])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Integer) 93)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[37])))
  },
  /* row 39 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[36])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Integer) 94)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[39])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 13))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_Integer) 115)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[43])))
  },
  /* row 45 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[44])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[42])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 12))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Integer) 106)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[46])))
  },
  /* row 48 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[47])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[45])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 11))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Integer) 103)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[50])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[48])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Integer) 116)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[52])))
  },
  /* row 54 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[53])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[51])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_Integer) 112)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[55])))
  },
  /* row 57 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[56])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[54])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Integer) 105)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[58])))
  },
  /* row 60 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[59])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[57])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_Integer) 104)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[61])))
  },
  /* row 63 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[62])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[60])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_Integer) 110)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[64])))
  },
  /* row 66 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[65])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[63])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_Integer) 109)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[67])))
  },
  /* row 69 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[68])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[66])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_Integer) 113)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[70])))
  },
  /* row 72 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[71])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[69])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_Integer) 114)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[73])))
  },
  /* row 75 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[74])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[72])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_Integer) 111)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[76])))
  },
  /* row 78 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[77])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[75])))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_Integer) 108)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[79])))
  },
  /* row 81 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[80])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[78])))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_Integer) 107)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[82])))
  },
  /* row 84 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[83])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[81])))
  },
  /* row 85 */
  {
    ((MR_Box) ((MR_Integer) 92)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 86 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[85])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[84])))
  },
  /* row 87 */
  {
    ((MR_Box) ((MR_Integer) 612)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[10])))
  },
  /* row 88 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[87])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[86])))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_Integer) 611)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[11])))
  },
  /* row 90 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[89])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[88])))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[13])))
  },
  /* row 92 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[5])))
  },
  /* row 93 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[4])))
  },
};

static /* final */ const MR_Box libs__op_mode_scalar_common_3[14][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[12])))
  },
};

static /* final */ const MR_Box libs__op_mode_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__op_mode__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__op_mode__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_libs__op_mode__type_ctor_info_op_mode_0)),
    ((MR_Box) (&libs__op_mode__set_ordlist__pti_set_ordlist_1__plain_libs__op_mode__type_ctor_info_op_mode_0)),
    ((MR_Box) (&libs__op_mode__set_ordlist__pti_set_ordlist_1__plain_libs__op_mode__type_ctor_info_op_mode_0))
  },
};


static /* final */ const struct libs__op_mode__vector_common_type_5_0_s libs__op_mode_vector_common_5[14] = {
  /* row 0 */   {     (MR_String) "--output-cc" },
  /* row 1 */   {     (MR_String) "--output-c-compiler-type" },
  /* row 2 */   {     (MR_String) "--output-cflags" },
  /* row 3 */   {     (MR_String) "--output-c-include-directory-flags" },
  /* row 4 */   {     (MR_String) "--output-grade-defines" },
  /* row 5 */   {     (MR_String) "--output-csharp-compiler" },
  /* row 6 */   {     (MR_String) "--output-csharp-compiler-type" },
  /* row 7 */   {     (MR_String) "--output-link-command" },
  /* row 8 */   {     (MR_String) "--output-shared-lib-link-command" },
  /* row 9 */   {     (MR_String) "--output-library-link-flags" },
  /* row 10 */   {     (MR_String) "--output-class-dir" },
  /* row 11 */   {     (MR_String) "--output-grade-string" },
  /* row 12 */   {     (MR_String) "--output-libgrades" },
  /* row 13 */   {     (MR_String) "--output-target-arch" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_libs__op_mode__type_ctor_info_op_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__op_mode__set_ordlist__pti_set_ordlist_1__plain_libs__op_mode__type_ctor_info_op_mode_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0
  }
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_0[1] = {
  (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_make_0
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_0 = {
  (MR_String) "opm_top_make",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__op_mode__libs__op_mode__field_types_op_mode_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_1 = {
  (MR_String) "opm_top_generate_source_file_mapping",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_2 = {
  (MR_String) "opm_top_generate_standalone_interface",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  libs__op_mode__libs__op_mode__field_types_op_mode_0_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_3[1] = {
  (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_query_0
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_3 = {
  (MR_String) "opm_top_query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  libs__op_mode__libs__op_mode__field_types_op_mode_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_4[1] = {
  (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_args_0
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4 = {
  (MR_String) "opm_top_args",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__op_mode__libs__op_mode__field_types_op_mode_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_0[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_1
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_1[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_0
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_2[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_2
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_3[2] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_3,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4
};

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_3
  }
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_0[5] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_3
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__op_mode____Unify____op_mode_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode",
  {     libs__op_mode__libs__op_mode__du_name_ordered_op_mode_0 },
  {     libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_0
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0 = {
  (MR_String) "opma_generate_dependencies",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_1 = {
  (MR_String) "opma_generate_dependency_file",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_2 = {
  (MR_String) "opma_make_private_interface",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_3 = {
  (MR_String) "opma_make_short_interface",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4 = {
  (MR_String) "opma_make_interface",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_5 = {
  (MR_String) "opma_convert_to_mercury",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_6[1] = {
  (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_6 = {
  (MR_String) "opma_augment",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 6,
  libs__op_mode__libs__op_mode__field_types_op_mode_args_0_6,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_0[6] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_3,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_5
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_1[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_6
};

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_args_0[2] = {
  {
    (MR_Integer) 6,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_1
  }
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_args_0[7] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_6,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_5,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_3
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_args_0[7] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__op_mode____Unify____op_mode_args_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_args_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_args",
  {     libs__op_mode__libs__op_mode__du_name_ordered_op_mode_args_0 },
  {     libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_args_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_args_0
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_0 = {
  (MR_String) "opmau_make_opt_int",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_1 = {
  (MR_String) "opmau_make_trans_opt_int",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_2 = {
  (MR_String) "opmau_make_analysis_registry",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_3 = {
  (MR_String) "opmau_make_xml_documentation",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_4 = {
  (MR_String) "opmau_typecheck_only",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_5 = {
  (MR_String) "opmau_errorcheck_only",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_augment_0_6[1] = {
  (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_codegen_0
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_6 = {
  (MR_String) "opmau_generate_code",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 6,
  libs__op_mode__libs__op_mode__field_types_op_mode_augment_0_6,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_0[6] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_3,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_4,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_5
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_1[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_6
};

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_augment_0[2] = {
  {
    (MR_Integer) 6,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_1
  }
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_augment_0[7] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_5,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_6,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_3,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_4
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_augment_0[7] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__op_mode____Unify____op_mode_augment_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_augment_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_augment",
  {     libs__op_mode__libs__op_mode__du_name_ordered_op_mode_augment_0 },
  {     libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_augment_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_augment_0
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_0 = {
  (MR_String) "opmcg_target_code_only",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_1 = {
  (MR_String) "opmcg_target_and_object_code_only",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_2 = {
  (MR_String) "opmcg_target_object_and_executable",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_codegen_0[3] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_2
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_codegen_0[3] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_2
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_codegen_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_codegen_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__op_mode____Unify____op_mode_codegen_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_codegen_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_codegen",
  {     libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_codegen_0 },
  {     libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_codegen_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_codegen_0
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_make_0_0 = {
  (MR_String) "opmm_need_not_rebuild",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_make_0_1 = {
  (MR_String) "opmm_must_rebuild",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_make_0[2] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_make_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_make_0_1
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_make_0[2] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_make_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_make_0_0
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_make_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_make_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__op_mode____Unify____op_mode_make_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_make_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_make",
  {     libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_make_0 },
  {     libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_make_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_make_0
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_0 = {
  (MR_String) "opmq_output_cc",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_1 = {
  (MR_String) "opmq_output_c_compiler_type",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_2 = {
  (MR_String) "opmq_output_cflags",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_3 = {
  (MR_String) "opmq_output_c_include_directory_flags",
  (MR_Integer) 3
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_4 = {
  (MR_String) "opmq_output_grade_defines",
  (MR_Integer) 4
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_5 = {
  (MR_String) "opmq_output_csharp_compiler",
  (MR_Integer) 5
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_6 = {
  (MR_String) "opmq_output_csharp_compiler_type",
  (MR_Integer) 6
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_7 = {
  (MR_String) "opmq_output_link_command",
  (MR_Integer) 7
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_8 = {
  (MR_String) "opmq_output_shared_lib_link_command",
  (MR_Integer) 8
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_9 = {
  (MR_String) "opmq_output_library_link_flags",
  (MR_Integer) 9
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_10 = {
  (MR_String) "opmq_output_class_dir",
  (MR_Integer) 10
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_11 = {
  (MR_String) "opmq_output_grade_string",
  (MR_Integer) 11
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_12 = {
  (MR_String) "opmq_output_libgrades",
  (MR_Integer) 12
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_13 = {
  (MR_String) "opmq_output_target_arch",
  (MR_Integer) 13
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_query_0[14] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_2,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_3,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_4,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_5,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_6,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_7,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_8,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_9,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_10,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_11,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_12,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_13
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_query_0[14] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_3,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_2,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_10,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_5,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_6,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_4,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_11,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_12,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_9,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_7,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_8,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_13
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_query_0[14] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 10,
  (MR_Integer) 4,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 13
};

const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_query_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__op_mode____Unify____op_mode_query_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_query_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_query",
  {     libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_query_0 },
  {     libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_query_0 },
  (MR_Integer) 14,
  (MR_Integer) 4,
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_query_0
};

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_0_0_10001(
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2)
{
  {
    MR_bool libs__op_mode__succeeded;

    {
      libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_0_0(((MR_Word) libs__op_mode__wrapper_arg_1), ((MR_Word) libs__op_mode__wrapper_arg_2));
    }
    return libs__op_mode__succeeded;
  }
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_0_0_10001(
  MR_Box * libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box libs__op_mode__wrapper_arg_3)
{
  {
    MR_Word libs__op_mode__conv0_HeadVar__1_1;

    {
      libs__op_mode____Compare____op_mode_0_0(&libs__op_mode__conv0_HeadVar__1_1, ((MR_Word) libs__op_mode__wrapper_arg_2), ((MR_Word) libs__op_mode__wrapper_arg_3));
    }
    *libs__op_mode__wrapper_arg_1 = ((MR_Box) (libs__op_mode__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_args_0_0_10001(
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2)
{
  {
    MR_bool libs__op_mode__succeeded;

    {
      libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_args_0_0(((MR_Word) libs__op_mode__wrapper_arg_1), ((MR_Word) libs__op_mode__wrapper_arg_2));
    }
    return libs__op_mode__succeeded;
  }
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_args_0_0_10001(
  MR_Box * libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box libs__op_mode__wrapper_arg_3)
{
  {
    MR_Word libs__op_mode__conv0_HeadVar__1_1;

    {
      libs__op_mode____Compare____op_mode_args_0_0(&libs__op_mode__conv0_HeadVar__1_1, ((MR_Word) libs__op_mode__wrapper_arg_2), ((MR_Word) libs__op_mode__wrapper_arg_3));
    }
    *libs__op_mode__wrapper_arg_1 = ((MR_Box) (libs__op_mode__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_augment_0_0_10001(
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2)
{
  {
    MR_bool libs__op_mode__succeeded;

    {
      libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_augment_0_0(((MR_Word) libs__op_mode__wrapper_arg_1), ((MR_Word) libs__op_mode__wrapper_arg_2));
    }
    return libs__op_mode__succeeded;
  }
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_augment_0_0_10001(
  MR_Box * libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box libs__op_mode__wrapper_arg_3)
{
  {
    MR_Word libs__op_mode__conv0_HeadVar__1_1;

    {
      libs__op_mode____Compare____op_mode_augment_0_0(&libs__op_mode__conv0_HeadVar__1_1, ((MR_Word) libs__op_mode__wrapper_arg_2), ((MR_Word) libs__op_mode__wrapper_arg_3));
    }
    *libs__op_mode__wrapper_arg_1 = ((MR_Box) (libs__op_mode__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_codegen_0_0_10001(
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2)
{
  {
    MR_bool libs__op_mode__succeeded;

    {
      libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_codegen_0_0(((MR_Word) libs__op_mode__wrapper_arg_1), ((MR_Word) libs__op_mode__wrapper_arg_2));
    }
    return libs__op_mode__succeeded;
  }
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_codegen_0_0_10001(
  MR_Box * libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box libs__op_mode__wrapper_arg_3)
{
  {
    MR_Word libs__op_mode__conv0_HeadVar__1_1;

    {
      libs__op_mode____Compare____op_mode_codegen_0_0(&libs__op_mode__conv0_HeadVar__1_1, ((MR_Word) libs__op_mode__wrapper_arg_2), ((MR_Word) libs__op_mode__wrapper_arg_3));
    }
    *libs__op_mode__wrapper_arg_1 = ((MR_Box) (libs__op_mode__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_make_0_0_10001(
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2)
{
  {
    MR_bool libs__op_mode__succeeded;

    {
      libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_make_0_0(((MR_Word) libs__op_mode__wrapper_arg_1), ((MR_Word) libs__op_mode__wrapper_arg_2));
    }
    return libs__op_mode__succeeded;
  }
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_make_0_0_10001(
  MR_Box * libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box libs__op_mode__wrapper_arg_3)
{
  {
    MR_Word libs__op_mode__conv0_HeadVar__1_1;

    {
      libs__op_mode____Compare____op_mode_make_0_0(&libs__op_mode__conv0_HeadVar__1_1, ((MR_Word) libs__op_mode__wrapper_arg_2), ((MR_Word) libs__op_mode__wrapper_arg_3));
    }
    *libs__op_mode__wrapper_arg_1 = ((MR_Box) (libs__op_mode__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_query_0_0_10001(
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2)
{
  {
    MR_bool libs__op_mode__succeeded;

    {
      libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_query_0_0(((MR_Word) libs__op_mode__wrapper_arg_1), ((MR_Word) libs__op_mode__wrapper_arg_2));
    }
    return libs__op_mode__succeeded;
  }
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_query_0_0_10001(
  MR_Box * libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box libs__op_mode__wrapper_arg_3)
{
  {
    MR_Word libs__op_mode__conv0_HeadVar__1_1;

    {
      libs__op_mode____Compare____op_mode_query_0_0(&libs__op_mode__conv0_HeadVar__1_1, ((MR_Word) libs__op_mode__wrapper_arg_2), ((MR_Word) libs__op_mode__wrapper_arg_3));
    }
    *libs__op_mode__wrapper_arg_1 = ((MR_Box) (libs__op_mode__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
libs__op_mode____Compare____op_mode_query_0_0(
  MR_Word * libs__op_mode__HeadVar__1_1,
  MR_Word libs__op_mode__HeadVar__2_2,
  MR_Word libs__op_mode__HeadVar__3_3)
{
  {
    MR_bool libs__op_mode__succeeded;
    MR_Integer libs__op_mode__Cast_HeadVar1_4 = (MR_Integer) libs__op_mode__HeadVar__2_2;
    MR_Integer libs__op_mode__Cast_HeadVar2_5 = (MR_Integer) libs__op_mode__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__op_mode__HeadVar__1_1, libs__op_mode__Cast_HeadVar1_4, libs__op_mode__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_query_0_0(
  MR_Word libs__op_mode__HeadVar__2_1,
  MR_Word libs__op_mode__HeadVar__2_2)
{
  {
    MR_bool libs__op_mode__succeeded = (libs__op_mode__HeadVar__2_1 == libs__op_mode__HeadVar__2_2);

    return libs__op_mode__succeeded;
  }
}

void MR_CALL 
libs__op_mode____Compare____op_mode_make_0_0(
  MR_Word * libs__op_mode__HeadVar__1_1,
  MR_Word libs__op_mode__HeadVar__2_2,
  MR_Word libs__op_mode__HeadVar__3_3)
{
  {
    MR_bool libs__op_mode__succeeded;
    MR_Integer libs__op_mode__Cast_HeadVar1_4 = (MR_Integer) libs__op_mode__HeadVar__2_2;
    MR_Integer libs__op_mode__Cast_HeadVar2_5 = (MR_Integer) libs__op_mode__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__op_mode__HeadVar__1_1, libs__op_mode__Cast_HeadVar1_4, libs__op_mode__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_make_0_0(
  MR_Word libs__op_mode__HeadVar__2_1,
  MR_Word libs__op_mode__HeadVar__2_2)
{
  {
    MR_bool libs__op_mode__succeeded = (libs__op_mode__HeadVar__2_1 == libs__op_mode__HeadVar__2_2);

    return libs__op_mode__succeeded;
  }
}

void MR_CALL 
libs__op_mode____Compare____op_mode_codegen_0_0(
  MR_Word * libs__op_mode__HeadVar__1_1,
  MR_Word libs__op_mode__HeadVar__2_2,
  MR_Word libs__op_mode__HeadVar__3_3)
{
  {
    MR_bool libs__op_mode__succeeded;
    MR_Integer libs__op_mode__Cast_HeadVar1_4 = (MR_Integer) libs__op_mode__HeadVar__2_2;
    MR_Integer libs__op_mode__Cast_HeadVar2_5 = (MR_Integer) libs__op_mode__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__op_mode__HeadVar__1_1, libs__op_mode__Cast_HeadVar1_4, libs__op_mode__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_codegen_0_0(
  MR_Word libs__op_mode__HeadVar__2_1,
  MR_Word libs__op_mode__HeadVar__2_2)
{
  {
    MR_bool libs__op_mode__succeeded = (libs__op_mode__HeadVar__2_1 == libs__op_mode__HeadVar__2_2);

    return libs__op_mode__succeeded;
  }
}

void MR_CALL 
libs__op_mode____Compare____op_mode_augment_0_0(
  MR_Word * libs__op_mode__HeadVar__1_1,
  MR_Word libs__op_mode__HeadVar__2_2,
  MR_Word libs__op_mode__HeadVar__3_3)
{
  {
    MR_bool libs__op_mode__succeeded;
    MR_Integer libs__op_mode__CastX_18 = (MR_Integer) libs__op_mode__HeadVar__2_2;
    MR_Integer libs__op_mode__CastY_19 = (MR_Integer) libs__op_mode__HeadVar__3_3;

    libs__op_mode__succeeded = (libs__op_mode__CastX_18 == libs__op_mode__CastY_19);
    if (libs__op_mode__succeeded)
      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(libs__op_mode__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 5:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 5:
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__op_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word libs__op_mode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer libs__op_mode__V_22_22 = (MR_Integer) libs__op_mode__V_21_21;
                  MR_Integer libs__op_mode__V_23_23 = (MR_Integer) libs__op_mode__V_17_17;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(libs__op_mode__HeadVar__1_1, libs__op_mode__V_22_22, libs__op_mode__V_23_23);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_augment_0_0(
  MR_Word libs__op_mode__HeadVar__1_1,
  MR_Word libs__op_mode__HeadVar__2_2)
{
  {
    MR_bool libs__op_mode__succeeded;
    MR_Integer libs__op_mode__CastX_17 = (MR_Integer) libs__op_mode__HeadVar__1_1;
    MR_Integer libs__op_mode__CastY_18 = (MR_Integer) libs__op_mode__HeadVar__2_2;

    libs__op_mode__succeeded = (libs__op_mode__CastX_17 == libs__op_mode__CastY_18);
    if (libs__op_mode__succeeded)
      libs__op_mode__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) libs__op_mode__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(libs__op_mode__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer libs__op_mode__CastX_3 = (MR_Integer) libs__op_mode__HeadVar__1_1;
                MR_Integer libs__op_mode__CastY_4 = (MR_Integer) libs__op_mode__HeadVar__2_2;

                libs__op_mode__succeeded = (libs__op_mode__CastY_4 == libs__op_mode__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer libs__op_mode__CastX_5 = (MR_Integer) libs__op_mode__HeadVar__1_1;
                MR_Integer libs__op_mode__CastY_6 = (MR_Integer) libs__op_mode__HeadVar__2_2;

                libs__op_mode__succeeded = (libs__op_mode__CastY_6 == libs__op_mode__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer libs__op_mode__CastX_7 = (MR_Integer) libs__op_mode__HeadVar__1_1;
                MR_Integer libs__op_mode__CastY_8 = (MR_Integer) libs__op_mode__HeadVar__2_2;

                libs__op_mode__succeeded = (libs__op_mode__CastY_8 == libs__op_mode__CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer libs__op_mode__CastX_9 = (MR_Integer) libs__op_mode__HeadVar__1_1;
                MR_Integer libs__op_mode__CastY_10 = (MR_Integer) libs__op_mode__HeadVar__2_2;

                libs__op_mode__succeeded = (libs__op_mode__CastY_10 == libs__op_mode__CastX_9);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer libs__op_mode__CastX_11 = (MR_Integer) libs__op_mode__HeadVar__1_1;
                MR_Integer libs__op_mode__CastY_12 = (MR_Integer) libs__op_mode__HeadVar__2_2;

                libs__op_mode__succeeded = (libs__op_mode__CastY_12 == libs__op_mode__CastX_11);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer libs__op_mode__CastX_13 = (MR_Integer) libs__op_mode__HeadVar__1_1;
                MR_Integer libs__op_mode__CastY_14 = (MR_Integer) libs__op_mode__HeadVar__2_2;

                libs__op_mode__succeeded = (libs__op_mode__CastY_14 == libs__op_mode__CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__op_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__op_mode__V_16_16;

            libs__op_mode__succeeded = ((MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (libs__op_mode__succeeded)
              {
                libs__op_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));
                libs__op_mode__succeeded = (libs__op_mode__V_15_15 == libs__op_mode__V_16_16);
              }
          }
          break;
      }
    return libs__op_mode__succeeded;
  }
}

void MR_CALL 
libs__op_mode____Compare____op_mode_args_0_0(
  MR_Word * libs__op_mode__HeadVar__1_1,
  MR_Word libs__op_mode__HeadVar__2_2,
  MR_Word libs__op_mode__HeadVar__3_3)
{
  {
    MR_bool libs__op_mode__succeeded;
    MR_Integer libs__op_mode__CastX_18 = (MR_Integer) libs__op_mode__HeadVar__2_2;
    MR_Integer libs__op_mode__CastY_19 = (MR_Integer) libs__op_mode__HeadVar__3_3;

    libs__op_mode__succeeded = (libs__op_mode__CastX_18 == libs__op_mode__CastY_19);
    if (libs__op_mode__succeeded)
      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(libs__op_mode__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 5:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 5:
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__op_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word libs__op_mode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    libs__op_mode____Compare____op_mode_augment_0_0(libs__op_mode__HeadVar__1_1, libs__op_mode__V_21_21, libs__op_mode__V_17_17);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_args_0_0(
  MR_Word libs__op_mode__HeadVar__1_1,
  MR_Word libs__op_mode__HeadVar__2_2)
{
  {
    MR_bool libs__op_mode__succeeded;
    MR_Integer libs__op_mode__CastX_17 = (MR_Integer) libs__op_mode__HeadVar__1_1;
    MR_Integer libs__op_mode__CastY_18 = (MR_Integer) libs__op_mode__HeadVar__2_2;

    libs__op_mode__succeeded = (libs__op_mode__CastX_17 == libs__op_mode__CastY_18);
    if (libs__op_mode__succeeded)
      libs__op_mode__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) libs__op_mode__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(libs__op_mode__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer libs__op_mode__CastX_3 = (MR_Integer) libs__op_mode__HeadVar__1_1;
                MR_Integer libs__op_mode__CastY_4 = (MR_Integer) libs__op_mode__HeadVar__2_2;

                libs__op_mode__succeeded = (libs__op_mode__CastY_4 == libs__op_mode__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer libs__op_mode__CastX_5 = (MR_Integer) libs__op_mode__HeadVar__1_1;
                MR_Integer libs__op_mode__CastY_6 = (MR_Integer) libs__op_mode__HeadVar__2_2;

                libs__op_mode__succeeded = (libs__op_mode__CastY_6 == libs__op_mode__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer libs__op_mode__CastX_7 = (MR_Integer) libs__op_mode__HeadVar__1_1;
                MR_Integer libs__op_mode__CastY_8 = (MR_Integer) libs__op_mode__HeadVar__2_2;

                libs__op_mode__succeeded = (libs__op_mode__CastY_8 == libs__op_mode__CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer libs__op_mode__CastX_9 = (MR_Integer) libs__op_mode__HeadVar__1_1;
                MR_Integer libs__op_mode__CastY_10 = (MR_Integer) libs__op_mode__HeadVar__2_2;

                libs__op_mode__succeeded = (libs__op_mode__CastY_10 == libs__op_mode__CastX_9);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer libs__op_mode__CastX_11 = (MR_Integer) libs__op_mode__HeadVar__1_1;
                MR_Integer libs__op_mode__CastY_12 = (MR_Integer) libs__op_mode__HeadVar__2_2;

                libs__op_mode__succeeded = (libs__op_mode__CastY_12 == libs__op_mode__CastX_11);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer libs__op_mode__CastX_13 = (MR_Integer) libs__op_mode__HeadVar__1_1;
                MR_Integer libs__op_mode__CastY_14 = (MR_Integer) libs__op_mode__HeadVar__2_2;

                libs__op_mode__succeeded = (libs__op_mode__CastY_14 == libs__op_mode__CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__op_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__op_mode__V_16_16;

            libs__op_mode__succeeded = ((MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (libs__op_mode__succeeded)
              {
                libs__op_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));
                {
                  libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_augment_0_0(libs__op_mode__V_15_15, libs__op_mode__V_16_16);
                }
              }
          }
          break;
      }
    return libs__op_mode__succeeded;
  }
}

void MR_CALL 
libs__op_mode____Compare____op_mode_0_0(
  MR_Word * libs__op_mode__HeadVar__1_1,
  MR_Word libs__op_mode__HeadVar__2_2,
  MR_Word libs__op_mode__HeadVar__3_3)
{
  {
    MR_bool libs__op_mode__succeeded;
    MR_Integer libs__op_mode__CastX_44 = (MR_Integer) libs__op_mode__HeadVar__2_2;
    MR_Integer libs__op_mode__CastY_45 = (MR_Integer) libs__op_mode__HeadVar__3_3;

    libs__op_mode__succeeded = (libs__op_mode__CastX_44 == libs__op_mode__CastY_45);
    if (libs__op_mode__succeeded)
      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__op_mode__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word libs__op_mode__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer libs__op_mode__V_54_54 = (MR_Integer) libs__op_mode__V_52_52;
                  MR_Integer libs__op_mode__V_55_55 = (MR_Integer) libs__op_mode__V_5_5;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(libs__op_mode__HeadVar__1_1, libs__op_mode__V_54_54, libs__op_mode__V_55_55);
                  }
                }
                break;
              case (MR_Integer) 2:
                *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String libs__op_mode__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String libs__op_mode__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(libs__op_mode__HeadVar__1_1, libs__op_mode__V_51_51, libs__op_mode__V_21_21);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word libs__op_mode__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word libs__op_mode__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer libs__op_mode__V_56_56 = (MR_Integer) libs__op_mode__V_53_53;
                          MR_Integer libs__op_mode__V_57_57 = (MR_Integer) libs__op_mode__V_32_32;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(libs__op_mode__HeadVar__1_1, libs__op_mode__V_56_56, libs__op_mode__V_57_57);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word libs__op_mode__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word libs__op_mode__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            libs__op_mode____Compare____op_mode_args_0_0(libs__op_mode__HeadVar__1_1, libs__op_mode__V_50_50, libs__op_mode__V_43_43);
                          }
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_0_0(
  MR_Word libs__op_mode__HeadVar__1_1,
  MR_Word libs__op_mode__HeadVar__2_2)
{
  {
    MR_bool libs__op_mode__succeeded;
    MR_Integer libs__op_mode__CastX_13 = (MR_Integer) libs__op_mode__HeadVar__1_1;
    MR_Integer libs__op_mode__CastY_14 = (MR_Integer) libs__op_mode__HeadVar__2_2;

    libs__op_mode__succeeded = (libs__op_mode__CastX_13 == libs__op_mode__CastY_14);
    if (libs__op_mode__succeeded)
      libs__op_mode__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) libs__op_mode__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer libs__op_mode__CastX_5 = (MR_Integer) libs__op_mode__HeadVar__1_1;
            MR_Integer libs__op_mode__CastY_6 = (MR_Integer) libs__op_mode__HeadVar__2_2;

            libs__op_mode__succeeded = (libs__op_mode__CastY_6 == libs__op_mode__CastX_5);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__op_mode__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word libs__op_mode__V_4_4;

            libs__op_mode__succeeded = ((MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (libs__op_mode__succeeded)
              {
                libs__op_mode__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));
                libs__op_mode__succeeded = (libs__op_mode__V_3_3 == libs__op_mode__V_4_4);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String libs__op_mode__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__op_mode__HeadVar__1_1, (MR_Integer) 0)));
            MR_String libs__op_mode__V_8_8;

            libs__op_mode__succeeded = ((MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (libs__op_mode__succeeded)
              {
                libs__op_mode__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));
                libs__op_mode__succeeded = (strcmp(libs__op_mode__V_7_7, libs__op_mode__V_8_8) == 0);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word libs__op_mode__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word libs__op_mode__V_10_10;

                libs__op_mode__succeeded = ((((MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (libs__op_mode__succeeded)
                  {
                    libs__op_mode__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__2_2, (MR_Integer) 1)));
                    libs__op_mode__succeeded = (libs__op_mode__V_9_9 == libs__op_mode__V_10_10);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word libs__op_mode__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word libs__op_mode__V_12_12;

                libs__op_mode__succeeded = ((((MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (libs__op_mode__succeeded)
                  {
                    libs__op_mode__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_args_0_0(libs__op_mode__V_11_11, libs__op_mode__V_12_12);
                    }
                  }
              }
              break;
          }
          break;
      }
    return libs__op_mode__succeeded;
  }
}

static MR_Word MR_CALL 
libs__op_mode__bool_op_modes_0_f_0(void)
{
  {
    MR_bool libs__op_mode__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[90]);
  }
}

static void MR_CALL 
libs__op_mode__gather_bool_op_mode_4_p_0(
  MR_Word libs__op_mode__OptionTable_5,
  MR_Word libs__op_mode__HeadVar__2_2,
  MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_0_11,
  MR_Word * libs__op_mode__STATE_VARIABLE_OpModeSet_12)
{
  {
    MR_bool libs__op_mode__succeeded;
    MR_Word libs__op_mode__Option_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word libs__op_mode__OpMode_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__op_mode__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word libs__op_mode__OptionValue_9;
    MR_Box libs__op_mode__conv0_OptionValue_9;
    MR_Word libs__op_mode__BoolValue_10;

    {
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__op_mode__OptionTable_5, ((MR_Box) (libs__op_mode__Option_6)), &libs__op_mode__conv0_OptionValue_9);
    }
    libs__op_mode__OptionValue_9 = ((MR_Word) libs__op_mode__conv0_OptionValue_9);
    libs__op_mode__succeeded = ((MR_tag((MR_Word) libs__op_mode__OptionValue_9)) == (MR_mktag((MR_Integer) 1)));
    if (libs__op_mode__succeeded)
      {
        libs__op_mode__BoolValue_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__OptionValue_9, (MR_Integer) 0)));
        switch (libs__op_mode__BoolValue_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *libs__op_mode__STATE_VARIABLE_OpModeSet_12 = libs__op_mode__STATE_VARIABLE_OpModeSet_0_11;
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__set__insert_3_p_0((MR_Word) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0, ((MR_Box) (libs__op_mode__OpMode_7)), libs__op_mode__STATE_VARIABLE_OpModeSet_0_11, libs__op_mode__STATE_VARIABLE_OpModeSet_12);
              }
            }
            break;
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "libs.op_mode", (MR_String) "predicate \140libs.op_mode.gather_bool_op_mode\'/4", (MR_String) "not a boolean");
          return;
        }
      }
  }
}

MR_String MR_CALL 
libs__op_mode__op_mode_to_option_string_1_f_0(
  MR_Word libs__op_mode__MOP_3)
{
  {
    MR_bool libs__op_mode__succeeded;
    MR_String libs__op_mode__Str_4;

    switch (MR_tag((MR_Word) libs__op_mode__MOP_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__op_mode__Str_4 = (MR_String) "--generate-source-file-mapping";
        break;
      case (MR_Integer) 1:
        {
          MR_Word libs__op_mode__MOPM_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__MOP_3, (MR_Integer) 0)));

          switch (libs__op_mode__MOPM_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              libs__op_mode__Str_4 = (MR_String) "--rebuild";
              break;
            case (MR_Integer) 0:
              libs__op_mode__Str_4 = (MR_String) "--make";
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        libs__op_mode__Str_4 = (MR_String) "--generate-standalone-interface";
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__MOP_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word libs__op_mode__MOPQ_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__MOP_3, (MR_Integer) 1)));

              libs__op_mode__Str_4 = ((&libs__op_mode_vector_common_5[0 + libs__op_mode__MOPQ_7]))->libs__op_mode__vector_common_type_5_0__vct_5_f_0;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word libs__op_mode__MOPA_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__MOP_3, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) libs__op_mode__MOPA_8)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(libs__op_mode__MOPA_8)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      libs__op_mode__Str_4 = (MR_String) "--generate-dependencies";
                      break;
                    case (MR_Integer) 1:
                      libs__op_mode__Str_4 = (MR_String) "--generate-dependency_file";
                      break;
                    case (MR_Integer) 2:
                      libs__op_mode__Str_4 = (MR_String) "--make-private-interface";
                      break;
                    case (MR_Integer) 3:
                      libs__op_mode__Str_4 = (MR_String) "--make-short-interface";
                      break;
                    case (MR_Integer) 4:
                      libs__op_mode__Str_4 = (MR_String) "--make-interface";
                      break;
                    case (MR_Integer) 5:
                      libs__op_mode__Str_4 = (MR_String) "--convert-to-mercury";
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word libs__op_mode__MOPAU_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__MOPA_8, (MR_Integer) 0)));

                    switch (MR_tag((MR_Word) libs__op_mode__MOPAU_9)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (MR_unmkbody(libs__op_mode__MOPAU_9)) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            libs__op_mode__Str_4 = (MR_String) "--make-opt-int";
                            break;
                          case (MR_Integer) 1:
                            libs__op_mode__Str_4 = (MR_String) "--make-trans-opt";
                            break;
                          case (MR_Integer) 2:
                            libs__op_mode__Str_4 = (MR_String) "--make-analysis-registry";
                            break;
                          case (MR_Integer) 3:
                            libs__op_mode__Str_4 = (MR_String) "--make-xml-doc";
                            break;
                          case (MR_Integer) 4:
                            libs__op_mode__Str_4 = (MR_String) "--typecheck-only";
                            break;
                          case (MR_Integer) 5:
                            libs__op_mode__Str_4 = (MR_String) "--errorcheck-only";
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word libs__op_mode__MOPCG_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__MOPAU_9, (MR_Integer) 0)));

                          switch (libs__op_mode__MOPCG_10) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              libs__op_mode__Str_4 = (MR_String) "--compile-only";
                              break;
                            case (MR_Integer) 0:
                              libs__op_mode__Str_4 = (MR_String) "--target-code-only";
                              break;
                            case (MR_Integer) 2:
                              {
                                {
                                  mercury__require__unexpected_3_p_0((MR_String) "libs.op_mode", (MR_String) "function \140libs.op_mode.op_mode_to_option_string\'/1", (MR_String) "opmcg_target_object_and_executable");
                                }
                              }
                              break;
                          }
                        }
                        break;
                    }
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return libs__op_mode__Str_4;
  }
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_1(
  MR_Box libs__op_mode__closure_arg,
  MR_Box libs__op_mode__wrapper_arg_1,
  MR_Box libs__op_mode__wrapper_arg_2,
  MR_Box * libs__op_mode__wrapper_arg_3)
{
  {
    MR_Box libs__op_mode__closure = libs__op_mode__closure_arg;
    MR_Word libs__op_mode__conv0_STATE_VARIABLE_OpModeSet_12;

    {
      libs__op_mode__gather_bool_op_mode_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__op_mode__closure, (MR_Integer) 3))), ((MR_Word) libs__op_mode__wrapper_arg_1), ((MR_Word) libs__op_mode__wrapper_arg_2), &libs__op_mode__conv0_STATE_VARIABLE_OpModeSet_12);
    }
    *libs__op_mode__wrapper_arg_3 = ((MR_Box) (libs__op_mode__conv0_STATE_VARIABLE_OpModeSet_12));
  }
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_2(
  void * libs__op_mode__env_ptr_arg)
{
  {
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * libs__op_mode__env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) libs__op_mode__env_ptr_arg;

    MR_builtin_longjmp((libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_4(
  void * libs__op_mode__env_ptr_arg)
{
  {
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * libs__op_mode__env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) libs__op_mode__env_ptr_arg;

    (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_64 = ((MR_Word) (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_64);
    {
      libs__op_mode__decide_op_mode_3_p_0_3(libs__op_mode__env_ptr);
    }
  }
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_3(
  void * libs__op_mode__env_ptr_arg)
{
  {
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * libs__op_mode__env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) libs__op_mode__env_ptr_arg;

    switch (MR_tag((MR_Word) (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_64)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_64, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word libs__op_mode__OpModeArgs_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_64, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) libs__op_mode__OpModeArgs_88)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word libs__op_mode__OpModeAugment_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__OpModeArgs_88, (MR_Integer) 0)));

                    if ((((((((libs__op_mode__OpModeAugment_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || ((libs__op_mode__OpModeAugment_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))) || ((libs__op_mode__OpModeAugment_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || ((libs__op_mode__OpModeAugment_89 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))))
                      (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
                    else
                      (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_FALSE;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    if ((libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
      {
        libs__op_mode__decide_op_mode_3_p_0_2(libs__op_mode__env_ptr);
      }
  }
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_5(
  void * libs__op_mode__env_ptr_arg)
{
  {
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * libs__op_mode__env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) libs__op_mode__env_ptr_arg;

    if (MR_builtin_setjmp((libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__set__member_2_p_1((libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_73_73, &(libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_64, (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_49_49, libs__op_mode__decide_op_mode_3_p_0_4, libs__op_mode__env_ptr);
        }
        (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0(
  MR_Word libs__op_mode__OptionTable_4,
  MR_Word * libs__op_mode__OpMode_5,
  MR_Word * libs__op_mode__OtherOpModes_6)
{
  {
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s libs__op_mode__env;

    {
      MR_Word libs__op_mode__TypeCtorInfo_79_79;
      MR_Word libs__op_mode__GenStandaloneOption_8;
      MR_Word libs__op_mode__InvokedByMMCMake_11;
      MR_Word libs__op_mode__OpModes0_12;
      MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_20_20;
      MR_Word libs__op_mode__V_21_21;
      MR_Word libs__op_mode__V_22_22;
      MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_23_23;
      MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_26_26;
      MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_35_35;
      MR_Box libs__op_mode__conv1_STATE_VARIABLE_OpModeSet_23_23;
      MR_Box libs__op_mode__conv2_GenStandaloneOption_8;
      MR_Word libs__op_mode__MaybeBaseName_9;

      (libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_73_73 = (MR_Word) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0;
      {
        mercury__set__init_1_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_73_73, &libs__op_mode__STATE_VARIABLE_OpModeSet_20_20);
      }
      {
        libs__op_mode__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), libs__op_mode__V_21_21, 0) = ((MR_Box) (&libs__op_mode_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), libs__op_mode__V_21_21, 1) = ((MR_Box) (libs__op_mode__decide_op_mode_3_p_0_1));
        MR_hl_field(MR_mktag(0), libs__op_mode__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), libs__op_mode__V_21_21, 3) = ((MR_Box) (libs__op_mode__OptionTable_4));
      }
      {
        libs__op_mode__V_22_22 = libs__op_mode__bool_op_modes_0_f_0();
      }
      {
        mercury__list__foldl_4_p_0((MR_Word) &libs__op_mode_scalar_common_1[0], (MR_Word) &libs__op_mode_scalar_common_2[0], libs__op_mode__V_21_21, libs__op_mode__V_22_22, ((MR_Box) (libs__op_mode__STATE_VARIABLE_OpModeSet_20_20)), &libs__op_mode__conv1_STATE_VARIABLE_OpModeSet_23_23);
      }
      libs__op_mode__STATE_VARIABLE_OpModeSet_23_23 = ((MR_Word) libs__op_mode__conv1_STATE_VARIABLE_OpModeSet_23_23);
      libs__op_mode__TypeCtorInfo_79_79 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
      {
        mercury__map__lookup_3_p_0(libs__op_mode__TypeCtorInfo_79_79, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__op_mode__OptionTable_4, ((MR_Box) ((MR_Integer) 96)), &libs__op_mode__conv2_GenStandaloneOption_8);
      }
      libs__op_mode__GenStandaloneOption_8 = ((MR_Word) libs__op_mode__conv2_GenStandaloneOption_8);
      (libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) libs__op_mode__GenStandaloneOption_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__GenStandaloneOption_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if ((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
        {
          libs__op_mode__MaybeBaseName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__GenStandaloneOption_8, (MR_Integer) 1)));
          if ((libs__op_mode__MaybeBaseName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            libs__op_mode__STATE_VARIABLE_OpModeSet_26_26 = libs__op_mode__STATE_VARIABLE_OpModeSet_23_23;
          else
            {
              MR_String libs__op_mode__BaseName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__op_mode__MaybeBaseName_9, (MR_Integer) 0)));
              MR_Word libs__op_mode__V_25_25;

              {
                libs__op_mode__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), libs__op_mode__V_25_25, 0) = ((MR_Box) (libs__op_mode__BaseName_10));
              }
              {
                mercury__set__insert_3_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_73_73, ((MR_Box) (libs__op_mode__V_25_25)), libs__op_mode__STATE_VARIABLE_OpModeSet_23_23, &libs__op_mode__STATE_VARIABLE_OpModeSet_26_26);
              }
            }
        }
      else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "libs.op_mode", (MR_String) "predicate \140libs.op_mode.decide_op_mode\'/3", (MR_String) "generate_standalone_interface is not maybe_string");
            return;
          }
        }
      {
        mercury__getopt_io__lookup_bool_option_3_p_0(libs__op_mode__TypeCtorInfo_79_79, libs__op_mode__OptionTable_4, ((MR_Box) ((MR_Integer) 616)), &libs__op_mode__InvokedByMMCMake_11);
      }
      switch (libs__op_mode__InvokedByMMCMake_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          libs__op_mode__STATE_VARIABLE_OpModeSet_35_35 = libs__op_mode__STATE_VARIABLE_OpModeSet_26_26;
          break;
        case (MR_Integer) 1:
          {
            MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_32_32;

            {
              mercury__set__delete_3_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_73_73, ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[11]))), libs__op_mode__STATE_VARIABLE_OpModeSet_26_26, &libs__op_mode__STATE_VARIABLE_OpModeSet_32_32);
            }
            {
              mercury__set__delete_3_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_73_73, ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[10]))), libs__op_mode__STATE_VARIABLE_OpModeSet_32_32, &libs__op_mode__STATE_VARIABLE_OpModeSet_35_35);
            }
          }
          break;
      }
      {
        mercury__set__to_sorted_list_2_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_73_73, libs__op_mode__STATE_VARIABLE_OpModeSet_35_35, &libs__op_mode__OpModes0_12);
      }
      if ((libs__op_mode__OpModes0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *libs__op_mode__OpMode_5 = (MR_Word) MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[91]);
          *libs__op_mode__OtherOpModes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
      else
        {
          MR_Word libs__op_mode__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__OpModes0_12, (MR_Integer) 1)));
          MR_Word libs__op_mode__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__OpModes0_12, (MR_Integer) 0)));

          if ((libs__op_mode__V_81_81 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *libs__op_mode__OpMode_5 = libs__op_mode__V_82_82;
              *libs__op_mode__OtherOpModes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          else
            {
              MR_Word libs__op_mode__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[10]);

              {
                (libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = mercury__set__member_2_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_73_73, ((MR_Box) (libs__op_mode__V_38_38)), libs__op_mode__STATE_VARIABLE_OpModeSet_35_35);
              }
              if ((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
                {
                  *libs__op_mode__OpMode_5 = libs__op_mode__V_38_38;
                  *libs__op_mode__OtherOpModes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
              else
                {
                  MR_Word libs__op_mode__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[11]);

                  {
                    (libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = mercury__set__member_2_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_73_73, ((MR_Box) (libs__op_mode__V_41_41)), libs__op_mode__STATE_VARIABLE_OpModeSet_35_35);
                  }
                  if ((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
                    {
                      *libs__op_mode__OpMode_5 = libs__op_mode__V_41_41;
                      *libs__op_mode__OtherOpModes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word libs__op_mode__HeadFilteredOpMode_18;
                      MR_Word libs__op_mode__TailFilteredOpModes_19;
                      MR_Word libs__op_mode__FilteredOpModes_17;
                      MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_45_45;

                      {
                        mercury__set__delete_3_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_73_73, ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[92]))), libs__op_mode__STATE_VARIABLE_OpModeSet_35_35, &libs__op_mode__STATE_VARIABLE_OpModeSet_45_45);
                      }
                      {
                        mercury__set__delete_3_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_73_73, ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_2[93]))), libs__op_mode__STATE_VARIABLE_OpModeSet_45_45, &(libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_49_49);
                      }
                      {
                        libs__op_mode__decide_op_mode_3_p_0_5(&libs__op_mode__env);
                      }
                      if ((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
                        {
                          {
                            mercury__set__to_sorted_list_2_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_73_73, (libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_49_49, &libs__op_mode__FilteredOpModes_17);
                          }
                          (libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) libs__op_mode__FilteredOpModes_17)) == (MR_mktag((MR_Integer) 1)));
                          if ((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
                            {
                              libs__op_mode__HeadFilteredOpMode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__FilteredOpModes_17, (MR_Integer) 0)));
                              libs__op_mode__TailFilteredOpModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__FilteredOpModes_17, (MR_Integer) 1)));
                            }
                        }
                      if ((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
                        {
                          *libs__op_mode__OpMode_5 = libs__op_mode__HeadFilteredOpMode_18;
                          *libs__op_mode__OtherOpModes_6 = libs__op_mode__TailFilteredOpModes_19;
                        }
                      else
                        {
                          *libs__op_mode__OpMode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__OpModes0_12, (MR_Integer) 0)));
                          *libs__op_mode__OtherOpModes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__OpModes0_12, (MR_Integer) 1)));
                        }
                    }
                }
            }
        }
    }
  }
}

void mercury__libs__op_mode__init(void)
{
}

void mercury__libs__op_mode__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0);
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_args_0);
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0);
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_codegen_0);
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_make_0);
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_query_0);
}

void mercury__libs__op_mode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.op_mode. */
