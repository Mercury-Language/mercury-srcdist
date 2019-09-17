/*
** Automatically generated from `op_mode.m'
** by the Mercury compiler,
** version rotd-2019-09-17
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


// :- module libs.op_mode.
// :- implementation.

/*
INIT mercury__libs__op_mode__init
ENDINIT
*/

#include "libs.op_mode.mih"


#include "libs.mih"
#include "libs.options.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
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
  MR_Word libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_39_39;
  jmp_buf libs__op_mode__decide_op_mode_3_p_0_env_0__commit_0;
  MR_Word libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_48;
  MR_Box libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_48;
};


static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_libs__op_mode__type_ctor_info_op_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__op_mode__set_ordlist__pti_set_ordlist_1__plain_libs__op_mode__type_ctor_info_op_mode_0;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_0;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_1;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_2[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_2;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_3[1];

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_0_3[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_3;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_4[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4;

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_0[2];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_1[1];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_2[1];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_3[1];

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_0[4];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_0[5];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_0[5];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_1;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_2[1];

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_args_0_2[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_2;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_3;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_4[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4;

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_0[3];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_1[1];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_2[1];

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_args_0[3];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_args_0[5];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_args_0[5];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_0;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_1;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_2;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_3;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_4;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_5;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_augment_0_6[1];

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_augment_0_6[1];

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

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_0;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_1;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_2;

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_interface_file_0[3];

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_interface_file_0[3];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_interface_file_0[3];

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

static void MR_CALL 
libs__op_mode__gather_bool_op_mode_4_p_0(
  MR_Word OptionTable_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OpModeSet_0_11,
  MR_Word * STATE_VARIABLE_OpModeSet_12);

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_5(
  void * env_ptr_arg);

static MR_Word MR_CALL 
libs__op_mode__bool_op_modes_0_f_0(void);

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_augment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_augment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_codegen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_codegen_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_interface_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_interface_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_query_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_query_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__op_mode_scalar_common_1[1][3];

static /* final */ const MR_Box libs__op_mode_scalar_common_2[63][2];

static /* final */ const MR_Box libs__op_mode_scalar_common_3[38][1];

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

static /* final */ const MR_Box libs__op_mode_scalar_common_2[63][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 116)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[2])))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[1])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 115)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[5])))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[2])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 114)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[7])))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[4])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 113)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[9])))
  },
  /* row 8 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 106)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[11])))
  },
  /* row 10 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[8])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 105)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[13])))
  },
  /* row 12 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[11])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 104)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[15])))
  },
  /* row 14 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[13])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[12])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 103)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[17])))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[14])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 112)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[18])))
  },
  /* row 18 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 101)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[19])))
  },
  /* row 20 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[18])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 100)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[21])))
  },
  /* row 22 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[21])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[20])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 102)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[23])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[22])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 108)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[25])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 109)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[24])))
  },
  /* row 28 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[27])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[26])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Integer) 130)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[25])))
  },
  /* row 30 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[28])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 121)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[26])))
  },
  /* row 32 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[30])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 118)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[27])))
  },
  /* row 34 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[33])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[32])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 131)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[28])))
  },
  /* row 36 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[35])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[34])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 127)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[29])))
  },
  /* row 38 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[36])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Integer) 120)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[30])))
  },
  /* row 40 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[38])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Integer) 119)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[31])))
  },
  /* row 42 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[40])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Integer) 125)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[32])))
  },
  /* row 44 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[42])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Integer) 124)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[33])))
  },
  /* row 46 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[45])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[44])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Integer) 128)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[34])))
  },
  /* row 48 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[47])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[46])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Integer) 129)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[35])))
  },
  /* row 50 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[49])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[48])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Integer) 126)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[20])))
  },
  /* row 52 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[51])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[50])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Integer) 123)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[0])))
  },
  /* row 54 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[53])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[52])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Integer) 122)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[3])))
  },
  /* row 56 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[55])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[54])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Integer) 107)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 58 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[57])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[56])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Integer) 648)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 60 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[59])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[58])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Integer) 647)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 62 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[61])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[60])))
  },
};

static /* final */ const MR_Box libs__op_mode_scalar_common_3[38][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[0])))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[1])))
  },
  /* row 3 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 16U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 12U))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_Unsigned) 8U))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[0])))
  },
  /* row 20 */
  {
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[3])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 25 */
  {
    (MR_Box) ((MR_Unsigned) 13U)
  },
  /* row 26 */
  {
    (MR_Box) ((MR_Unsigned) 12U)
  },
  /* row 27 */
  {
    (MR_Box) ((MR_Unsigned) 11U)
  },
  /* row 28 */
  {
    (MR_Box) ((MR_Unsigned) 10U)
  },
  /* row 29 */
  {
    (MR_Box) ((MR_Unsigned) 9U)
  },
  /* row 30 */
  {
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row 31 */
  {
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row 32 */
  {
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row 33 */
  {
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row 34 */
  {
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row 35 */
  {
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[20])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[36])))
  },
};

static /* final */ const MR_Box libs__op_mode_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
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


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_libs__op_mode__type_ctor_info_op_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 libs__op_mode__set_ordlist__pti_set_ordlist_1__plain_libs__op_mode__type_ctor_info_op_mode_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0)
  }
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_0 = {
  (MR_String) "opm_top_make",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_1 = {
  (MR_String) "opm_top_generate_source_file_mapping",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_2 = {
  (MR_String) "opm_top_generate_standalone_interface",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  libs__op_mode__libs__op_mode__field_types_op_mode_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_3[1] = {
  (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_query_0)
};

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_0_3[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 4
  }
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_3 = {
  (MR_String) "opm_top_query",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  libs__op_mode__libs__op_mode__field_types_op_mode_0_3,
  NULL,
  libs__op_mode__libs__op_mode__field_locns_op_mode_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_4[1] = {
  (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_args_0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4 = {
  (MR_String) "opm_top_args",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(4),
  libs__op_mode__libs__op_mode__field_types_op_mode_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_0[2] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_1
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_1[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_2
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_2[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_3
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_3[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4
};

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__op_mode____Unify____op_mode_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode",
  {     libs__op_mode__libs__op_mode__du_name_ordered_op_mode_0 },
  {     libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_0
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0 = {
  (MR_String) "opma_generate_dependencies",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_1 = {
  (MR_String) "opma_generate_dependency_file",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_2[1] = {
  (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_interface_file_0)
};

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_args_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_2 = {
  (MR_String) "opma_make_interface",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  libs__op_mode__libs__op_mode__field_types_op_mode_args_0_2,
  NULL,
  libs__op_mode__libs__op_mode__field_locns_op_mode_args_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_3 = {
  (MR_String) "opma_convert_to_mercury",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_4[1] = {
  (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4 = {
  (MR_String) "opma_augment",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(4),
  libs__op_mode__libs__op_mode__field_types_op_mode_args_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_0[3] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_3
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_1[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_2
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_2[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4
};

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_args_0[3] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_args_0[5] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_3,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_2
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_args_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_args_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__op_mode____Unify____op_mode_args_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_args_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_args",
  {     libs__op_mode__libs__op_mode__du_name_ordered_op_mode_args_0 },
  {     libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_args_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_args_0
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_0 = {
  (MR_String) "opmau_make_opt_int",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_1 = {
  (MR_String) "opmau_make_trans_opt_int",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_2 = {
  (MR_String) "opmau_make_analysis_registry",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_3 = {
  (MR_String) "opmau_make_xml_documentation",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_4 = {
  (MR_String) "opmau_typecheck_only",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_5 = {
  (MR_String) "opmau_errorcheck_only",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_augment_0_6[1] = {
  (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_codegen_0)
};

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_augment_0_6[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_6 = {
  (MR_String) "opmau_generate_code",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(6),
  libs__op_mode__libs__op_mode__field_types_op_mode_augment_0_6,
  NULL,
  libs__op_mode__libs__op_mode__field_locns_op_mode_augment_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(6),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__op_mode____Unify____op_mode_augment_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_augment_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_augment",
  {     libs__op_mode__libs__op_mode__du_name_ordered_op_mode_augment_0 },
  {     libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_augment_0 },
  (MR_Integer) 7,
  UINT16_C(4),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_augment_0
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_0 = {
  (MR_String) "opmcg_target_code_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_1 = {
  (MR_String) "opmcg_target_and_object_code_only",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_2 = {
  (MR_String) "opmcg_target_object_and_executable",
  INT32_C(2)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__op_mode____Unify____op_mode_codegen_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_codegen_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_codegen",
  {     libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_codegen_0 },
  {     libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_codegen_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_codegen_0
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_0 = {
  (MR_String) "omif_int0",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_1 = {
  (MR_String) "omif_int1_int2",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_2 = {
  (MR_String) "omif_int3",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_interface_file_0[3] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_2
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_interface_file_0[3] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_2
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_interface_file_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_interface_file_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__op_mode____Unify____op_mode_interface_file_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_interface_file_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_interface_file",
  {     libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_interface_file_0 },
  {     libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_interface_file_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_interface_file_0
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_0 = {
  (MR_String) "opmq_output_cc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_1 = {
  (MR_String) "opmq_output_c_compiler_type",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_2 = {
  (MR_String) "opmq_output_cflags",
  INT32_C(2)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_3 = {
  (MR_String) "opmq_output_c_include_directory_flags",
  INT32_C(3)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_4 = {
  (MR_String) "opmq_output_grade_defines",
  INT32_C(4)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_5 = {
  (MR_String) "opmq_output_csharp_compiler",
  INT32_C(5)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_6 = {
  (MR_String) "opmq_output_csharp_compiler_type",
  INT32_C(6)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_7 = {
  (MR_String) "opmq_output_link_command",
  INT32_C(7)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_8 = {
  (MR_String) "opmq_output_shared_lib_link_command",
  INT32_C(8)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_9 = {
  (MR_String) "opmq_output_library_link_flags",
  INT32_C(9)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_10 = {
  (MR_String) "opmq_output_class_dir",
  INT32_C(10)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_11 = {
  (MR_String) "opmq_output_grade_string",
  INT32_C(11)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_12 = {
  (MR_String) "opmq_output_libgrades",
  INT32_C(12)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_13 = {
  (MR_String) "opmq_output_target_arch",
  INT32_C(13)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__op_mode____Unify____op_mode_query_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_query_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_query",
  {     libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_query_0 },
  {     libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_query_0 },
  (MR_Integer) 14,
  UINT16_C(4),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_query_0
};

void MR_CALL 
libs__op_mode____Compare____op_mode_query_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_query_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
libs__op_mode____Compare____op_mode_interface_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_interface_file_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
libs__op_mode____Compare____op_mode_codegen_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_codegen_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
libs__op_mode____Compare____op_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_34 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_35 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_34 == CastY_35);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_40 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_40, ArgY1_13);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
                  MR_Integer Var_42 = (MR_Integer) (Var_41);
                  MR_Integer Var_43 = (MR_Integer) (ArgY1_23);

                  succeeded = (Var_42 < Var_43);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_42 > Var_43);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));

                  libs__op_mode____Compare____op_mode_args_0_0(HeadVar__1_1, Var_39, ArgY1_33);
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
libs__op_mode____Compare____op_mode_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Integer Var_30 = (MR_Integer) (Var_29);
                  MR_Integer Var_31 = (MR_Integer) (ArgY1_11);

                  succeeded = (Var_30 < Var_31);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_30 > Var_31);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  libs__op_mode____Compare____op_mode_augment_0_0(HeadVar__1_1, Var_28, ArgY1_23);
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
libs__op_mode____Compare____op_mode_augment_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_18 == CastY_19);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 5:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
                  MR_Integer Var_22 = (MR_Integer) (Var_21);
                  MR_Integer Var_23 = (MR_Integer) (ArgY1_17);

                  succeeded = (Var_22 < Var_23);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_22 > Var_23);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
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
libs__op_mode____Unify____op_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
              succeeded = (ArgX1_9 == ArgY1_10);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = libs__op_mode____Unify____op_mode_args_0_0(ArgX1_11, ArgY1_12);
            }
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = libs__op_mode____Unify____op_mode_augment_0_0(ArgX1_11, ArgY1_12);
            }
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_augment_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_12 == CastX_11);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_14 == CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
            MR_Word ArgY1_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              succeeded = (ArgX1_15 == ArgY1_16);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
libs__op_mode__gather_bool_op_mode_4_p_0(
  MR_Word OptionTable_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OpModeSet_0_11,
  MR_Word * STATE_VARIABLE_OpModeSet_12)
{
  {
    MR_bool succeeded;
    MR_Word Option_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word OpMode_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word OptionValue_9;
    MR_Box conv0_OptionValue_9;
    MR_Word BoolValue_10;

    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), OptionTable_5, ((MR_Box) (Option_6)), &conv0_OptionValue_9);
    OptionValue_9 = ((MR_Word) (conv0_OptionValue_9));
    succeeded = ((MR_tag((MR_Word) OptionValue_9)) == (MR_Integer) 1);
    if (succeeded)
    {
      BoolValue_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), OptionValue_9, (MR_Integer) 0))) & (MR_Integer) 1);
      switch (BoolValue_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_OpModeSet_12 = STATE_VARIABLE_OpModeSet_0_11;
          break;
        case (MR_Integer) 1:
          mercury__set__insert_3_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) (OpMode_7)), STATE_VARIABLE_OpModeSet_0_11, STATE_VARIABLE_OpModeSet_12);
          break;
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.op_mode.gather_bool_op_mode\'/4", (MR_String) "not a boolean");
        return;
      }
  }
}

MR_String MR_CALL 
libs__op_mode__op_mode_to_option_string_2_f_0(
  MR_Word OptionTable_4,
  MR_Word MOP_5)
{
  {
    MR_bool succeeded;
    MR_String Str_6;

    switch (MR_tag((MR_Word) MOP_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(MOP_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word RebuildOption_7;
              MR_Box conv0_RebuildOption_7;
              MR_Word Rebuild_8;

              mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) ((MR_Integer) 648)), &conv0_RebuildOption_7);
              RebuildOption_7 = ((MR_Word) (conv0_RebuildOption_7));
              succeeded = ((MR_tag((MR_Word) RebuildOption_7)) == (MR_Integer) 1);
              if (succeeded)
              {
                Rebuild_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), RebuildOption_7, (MR_Integer) 0))) & (MR_Integer) 1);
                switch (Rebuild_8) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Str_6 = (MR_String) "--make";
                    break;
                  case (MR_Integer) 1:
                    Str_6 = (MR_String) "--rebuild";
                    break;
                }
              }
              else
                mercury__require__unexpected_2_p_0((MR_String) "function \140libs.op_mode.op_mode_to_option_string\'/2", (MR_String) "rebuild option is not bool");
            }
            break;
          case (MR_Integer) 1:
            Str_6 = (MR_String) "--generate-source-file-mapping";
            break;
        }
        break;
      case (MR_Integer) 1:
        Str_6 = (MR_String) "--generate-standalone-interface";
        break;
      case (MR_Integer) 2:
        {
          MR_Word MOPQ_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), MOP_5, (MR_Integer) 0))) & (MR_Integer) 15);

          Str_6 = ((&libs__op_mode_vector_common_5[0 + MOPQ_10]))->libs__op_mode__vector_common_type_5_0__vct_5_f_0;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word MOPA_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MOP_5, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) MOPA_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(MOPA_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Str_6 = (MR_String) "--generate-dependencies";
                  break;
                case (MR_Integer) 1:
                  Str_6 = (MR_String) "--generate-dependency_file";
                  break;
                case (MR_Integer) 2:
                  Str_6 = (MR_String) "--convert-to-mercury";
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word InterfaceFile_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MOPA_11, (MR_Integer) 0))) & (MR_Integer) 3);

                switch (InterfaceFile_12) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Str_6 = (MR_String) "--make-private-interface";
                    break;
                  case (MR_Integer) 1:
                    Str_6 = (MR_String) "--make-interface";
                    break;
                  case (MR_Integer) 2:
                    Str_6 = (MR_String) "--make-short-interface";
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word MOPAU_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MOPA_11, (MR_Integer) 0))));

                switch (MR_tag((MR_Word) MOPAU_13)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(MOPAU_13)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Str_6 = (MR_String) "--make-opt-int";
                        break;
                      case (MR_Integer) 1:
                        Str_6 = (MR_String) "--make-trans-opt";
                        break;
                      case (MR_Integer) 2:
                        Str_6 = (MR_String) "--make-analysis-registry";
                        break;
                      case (MR_Integer) 3:
                        Str_6 = (MR_String) "--make-xml-doc";
                        break;
                      case (MR_Integer) 4:
                        Str_6 = (MR_String) "--typecheck-only";
                        break;
                      case (MR_Integer) 5:
                        Str_6 = (MR_String) "--errorcheck-only";
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MOPCG_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), MOPAU_13, (MR_Integer) 0))) & (MR_Integer) 3);

                      switch (MOPCG_14) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          Str_6 = (MR_String) "--compile-only";
                          break;
                        case (MR_Integer) 0:
                          Str_6 = (MR_String) "--target-code-only";
                          break;
                        case (MR_Integer) 2:
                          mercury__require__unexpected_2_p_0((MR_String) "function \140libs.op_mode.op_mode_to_option_string\'/2", (MR_String) "opmcg_target_object_and_executable");
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
    return Str_6;
  }
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_OpModeSet_12;

    libs__op_mode__gather_bool_op_mode_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_OpModeSet_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_OpModeSet_12));
  }
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_48 = ((MR_Word) ((env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_48));
    libs__op_mode__decide_op_mode_3_p_0_3(env_ptr);
  }
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) (env_ptr_arg);

    switch (MR_tag((MR_Word) (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_48)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        {
          MR_Word OpModeArgs_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_48, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) OpModeArgs_63)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 1:
              (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word OpModeAugment_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpModeArgs_63, (MR_Integer) 0))));

                if ((((((((OpModeAugment_65 == (MR_Word) ((MR_Unsigned) 8U))) || ((OpModeAugment_65 == (MR_Word) ((MR_Unsigned) 0U))))) || ((OpModeAugment_65 == (MR_Word) ((MR_Unsigned) 4U))))) || ((OpModeAugment_65 == (MR_Word) ((MR_Unsigned) 12U)))))
                  (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
                else
                  (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_FALSE;
              }
              break;
          }
        }
        break;
    }
    if ((env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
      libs__op_mode__decide_op_mode_3_p_0_2(env_ptr);
  }
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_5(
  void * env_ptr_arg)
{
  {
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__commit_0) == 0)
      {
        mercury__set__member_2_p_1((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), &(env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_48, (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_39_39, libs__op_mode__decide_op_mode_3_p_0_4, env_ptr);
        (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0(
  MR_Word OptionTable_4,
  MR_Word * OpMode_5,
  MR_Word * OtherOpModes_6)
{
  {
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s env;

    {
      MR_Word GenStandaloneOption_8;
      MR_Word InvokedByMMCMake_11;
      MR_Word OpModes0_12;
      MR_Word STATE_VARIABLE_OpModeSet_20_20;
      MR_Word Var_21;
      MR_Word Var_22;
      MR_Word STATE_VARIABLE_OpModeSet_23_23;
      MR_Word STATE_VARIABLE_OpModeSet_26_26;
      MR_Word STATE_VARIABLE_OpModeSet_31_31;
      MR_Box conv1_STATE_VARIABLE_OpModeSet_23_23;
      MR_Box conv2_GenStandaloneOption_8;
      MR_Word MaybeBaseName_9;

      mercury__set__init_1_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), &STATE_VARIABLE_OpModeSet_20_20);
      {
        Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&libs__op_mode_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (libs__op_mode__decide_op_mode_3_p_0_1));
        MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (OptionTable_4));
      }
      Var_22 = libs__op_mode__bool_op_modes_0_f_0();
      mercury__list__foldl_4_p_0((MR_Word) (&libs__op_mode_scalar_common_1[0]), (MR_Word) (&libs__op_mode_scalar_common_2[0]), Var_21, Var_22, ((MR_Box) (STATE_VARIABLE_OpModeSet_20_20)), &conv1_STATE_VARIABLE_OpModeSet_23_23);
      STATE_VARIABLE_OpModeSet_23_23 = ((MR_Word) (conv1_STATE_VARIABLE_OpModeSet_23_23));
      mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) ((MR_Integer) 111)), &conv2_GenStandaloneOption_8);
      GenStandaloneOption_8 = ((MR_Word) (conv2_GenStandaloneOption_8));
      (env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) GenStandaloneOption_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GenStandaloneOption_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
      {
        MaybeBaseName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GenStandaloneOption_8, (MR_Integer) 1))));
        if ((MaybeBaseName_9 == (MR_Word) ((MR_Unsigned) 0U)))
          STATE_VARIABLE_OpModeSet_26_26 = STATE_VARIABLE_OpModeSet_23_23;
        else
        {
          MR_String BaseName_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeBaseName_9, (MR_Integer) 0))));
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (BaseName_10));
          }
          mercury__set__insert_3_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) (Var_25)), STATE_VARIABLE_OpModeSet_23_23, &STATE_VARIABLE_OpModeSet_26_26);
        }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.op_mode.decide_op_mode\'/3", (MR_String) "generate_standalone_interface is not maybe_string");
          return;
        }
      mercury__getopt_io__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_4, ((MR_Box) ((MR_Integer) 652)), &InvokedByMMCMake_11);
      switch (InvokedByMMCMake_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          STATE_VARIABLE_OpModeSet_31_31 = STATE_VARIABLE_OpModeSet_26_26;
          break;
        case (MR_Integer) 1:
          mercury__set__delete_3_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_OpModeSet_26_26, &STATE_VARIABLE_OpModeSet_31_31);
          break;
      }
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), STATE_VARIABLE_OpModeSet_31_31, &OpModes0_12);
      if ((OpModes0_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *OpMode_5 = (MR_Word) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[37]));
        *OtherOpModes_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpModes0_12, (MR_Integer) 1))));
        MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpModes0_12, (MR_Integer) 0))));

        if ((Var_57 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *OpMode_5 = Var_58;
          *OtherOpModes_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          (env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_OpModeSet_31_31);
          if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
          {
            *OpMode_5 = (MR_Word) ((MR_Unsigned) 0U);
            *OtherOpModes_6 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MR_Word HeadFilteredOpMode_18;
            MR_Word TailFilteredOpModes_19;
            MR_Word FilteredOpModes_17;
            MR_Word STATE_VARIABLE_OpModeSet_35_35;

            mercury__set__delete_3_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[9]))), STATE_VARIABLE_OpModeSet_31_31, &STATE_VARIABLE_OpModeSet_35_35);
            mercury__set__delete_3_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[7]))), STATE_VARIABLE_OpModeSet_35_35, &(env).libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_39_39);
            libs__op_mode__decide_op_mode_3_p_0_5(&env);
            if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
            {
              mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), (env).libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_39_39, &FilteredOpModes_17);
              (env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = (FilteredOpModes_17 != (MR_Word) ((MR_Unsigned) 0U));
              if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
              {
                HeadFilteredOpMode_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FilteredOpModes_17, (MR_Integer) 0))));
                TailFilteredOpModes_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FilteredOpModes_17, (MR_Integer) 1))));
              }
            }
            if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
            {
              *OpMode_5 = HeadFilteredOpMode_18;
              *OtherOpModes_6 = TailFilteredOpModes_19;
            }
            else
            {
              *OpMode_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpModes0_12, (MR_Integer) 0))));
              *OtherOpModes_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpModes0_12, (MR_Integer) 1))));
            }
          }
        }
      }
    }
  }
}

static MR_Word MR_CALL 
libs__op_mode__bool_op_modes_0_f_0(void)
{
  return (MR_Word) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[62]));
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__op_mode____Unify____op_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__op_mode____Compare____op_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__op_mode____Unify____op_mode_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__op_mode____Compare____op_mode_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_augment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__op_mode____Unify____op_mode_augment_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_augment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__op_mode____Compare____op_mode_augment_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_codegen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__op_mode____Unify____op_mode_codegen_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_codegen_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__op_mode____Compare____op_mode_codegen_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_interface_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__op_mode____Unify____op_mode_interface_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_interface_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__op_mode____Compare____op_mode_interface_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_query_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__op_mode____Unify____op_mode_query_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_query_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__op_mode____Compare____op_mode_query_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_interface_file_0);
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_query_0);
}

void mercury__libs__op_mode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__op_mode__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.op_mode.
