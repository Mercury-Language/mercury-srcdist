/*
** Automatically generated from `op_mode.m'
** by the Mercury compiler,
** version rotd-2024-04-23
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
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
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
#include "libs.optimization_options.mih"
#include "libs.options.mih"



struct libs__op_mode__decide_op_mode_3_p_0_env_0_s {
  MR_bool libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded;
  MR_Word libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_44_44;
  jmp_buf libs__op_mode__decide_op_mode_3_p_0_env_0__commit_0;
  MR_Word libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_49;
  MR_Box libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_49;
};


static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_libs__op_mode__type_ctor_info_op_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 libs__op_mode__set_ordlist__pti_set_ordlist_1__plain_libs__op_mode__type_ctor_info_op_mode_0;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_maybe_make_ints_0_0;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_maybe_make_ints_0_1;

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_ordinal_ordered_maybe_make_ints_0[2];

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_maybe_make_ints_0[2];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_maybe_make_ints_0[2];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_0;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_1;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_2[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_2;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_3[1];

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_0_3[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_3;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_4[2];

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_0_4[2];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4;

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_0[2];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_1[1];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_2[1];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_3[1];

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_0[4];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_0[5];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_0[5];

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_0[1];

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_args_0_0[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_1;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_2[1];

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_args_0_2[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_2;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_3;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_4[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4;

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_0[2];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_1[1];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_2[1];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_3[1];

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_args_0[4];

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

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_codegen_0[3];

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_codegen_0[3];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_codegen_0[3];

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_0;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_1;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_interface_file_0_2;

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_interface_file_0[3];

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_interface_file_0[3];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_interface_file_0[3];

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_invoked_by_mmc_make_0_0;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_invoked_by_mmc_make_0_1;

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_invoked_by_mmc_make_0[2];

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_invoked_by_mmc_make_0[2];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_invoked_by_mmc_make_0[2];

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

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_14;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_15;

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_query_0[16];

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_query_0[16];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_query_0[16];

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
libs__op_mode__bool_op_modes_1_f_0(
  MR_Word InvokedByMMCMake_3);

static MR_bool MR_CALL 
libs__op_mode____Unify____maybe_make_ints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____maybe_make_ints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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
libs__op_mode____Unify____op_mode_invoked_by_mmc_make_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_invoked_by_mmc_make_0_0_10001(
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

static /* final */ const MR_Box libs__op_mode_scalar_common_2[20][2];

static /* final */ const MR_Box libs__op_mode_scalar_common_3[25][1];

static /* final */ const MR_Box libs__op_mode_scalar_common_4[1][7];


struct libs__op_mode__vector_common_type_5_0_s {
  const MR_String libs__op_mode__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct libs__op_mode__vector_common_type_5_0_s libs__op_mode_vector_common_5[16];



static /* final */ const MR_Box libs__op_mode_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0))
  },
};

static /* final */ const MR_Box libs__op_mode_scalar_common_2[20][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 664)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 666)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 122)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 139)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[4])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Integer) 140)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[5])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Integer) 143)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[0])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Integer) 146)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Integer) 145)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Integer) 141)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Integer) 142)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Integer) 135)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[10])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Integer) 136)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Integer) 144)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Integer) 148)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Integer) 134)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[14])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Integer) 138)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[15])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Integer) 137)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[16])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Integer) 149)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[17])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Integer) 147)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[18])))
  },
};

static /* final */ const MR_Box libs__op_mode_scalar_common_3[25][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   1 */
  { ((MR_Box) (MR_mkword(1, &libs__op_mode_scalar_common_3[0]))) },
  /* row   2 */
  { ((MR_Box) ((MR_Unsigned) 16U)) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 20U)) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   7 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   8 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   9 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row  10 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row  11 */
  { (MR_Box) ((MR_Unsigned) 9U) },
  /* row  12 */
  { (MR_Box) ((MR_Unsigned) 10U) },
  /* row  13 */
  { (MR_Box) ((MR_Unsigned) 7U) },
  /* row  14 */
  { (MR_Box) ((MR_Unsigned) 11U) },
  /* row  15 */
  { (MR_Box) ((MR_Unsigned) 12U) },
  /* row  16 */
  { (MR_Box) ((MR_Unsigned) 13U) },
  /* row  17 */
  { (MR_Box) ((MR_Unsigned) 14U) },
  /* row  18 */
  { (MR_Box) ((MR_Unsigned) 15U) },
  /* row  19 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row  20 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row  21 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row  22 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row  23 */
  { ((MR_Box) (MR_mkword(1, &libs__op_mode_scalar_common_3[4]))) },
  /* row  24 */
  { ((MR_Box) (MR_mkword(1, &libs__op_mode_scalar_common_3[5]))) },
};

static /* final */ const MR_Box libs__op_mode_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__op_mode__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__op_mode__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_libs__op_mode__type_ctor_info_op_mode_0)),
    ((MR_Box) (&libs__op_mode__set_ordlist__pti_set_ordlist_1__plain_libs__op_mode__type_ctor_info_op_mode_0)),
    ((MR_Box) (&libs__op_mode__set_ordlist__pti_set_ordlist_1__plain_libs__op_mode__type_ctor_info_op_mode_0))
  },
};


static /* final */ const struct libs__op_mode__vector_common_type_5_0_s libs__op_mode_vector_common_5[16] = {
  /* row   0 */   { (MR_String) "--output-cc" },
  /* row   1 */   { (MR_String) "--output-c-compiler-type" },
  /* row   2 */   { (MR_String) "--output-cflags" },
  /* row   3 */   { (MR_String) "--output-c-include-directory-flags" },
  /* row   4 */   { (MR_String) "--output-grade-defines" },
  /* row   5 */   { (MR_String) "--output-csharp-compiler" },
  /* row   6 */   { (MR_String) "--output-csharp-compiler-type" },
  /* row   7 */   { (MR_String) "--output-class-dir" },
  /* row   8 */   { (MR_String) "--output-link-command" },
  /* row   9 */   { (MR_String) "--output-shared-lib-link-command" },
  /* row  10 */   { (MR_String) "--output-library-link-flags" },
  /* row  11 */   { (MR_String) "--output-grade-string" },
  /* row  12 */   { (MR_String) "--output-libgrades" },
  /* row  13 */   { (MR_String) "--output-stdlib-grades" },
  /* row  14 */   { (MR_String) "--output-stdlib-modules" },
  /* row  15 */   { (MR_String) "--output-target-arch" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
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
  { (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0) }
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_maybe_make_ints_0_0 = {
  (MR_String) "do_not_make_ints",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_maybe_make_ints_0_1 = {
  (MR_String) "do_make_ints",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_ordinal_ordered_maybe_make_ints_0[2] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_maybe_make_ints_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_maybe_make_ints_0_1
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_maybe_make_ints_0[2] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_maybe_make_ints_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_maybe_make_ints_0_0
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_maybe_make_ints_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_maybe_make_ints_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__op_mode____Unify____maybe_make_ints_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____maybe_make_ints_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "maybe_make_ints",
  { libs__op_mode__libs__op_mode__enum_name_ordered_maybe_make_ints_0 },
  { libs__op_mode__libs__op_mode__enum_ordinal_ordered_maybe_make_ints_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__op_mode__libs__op_mode__functor_number_map_maybe_make_ints_0,

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

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_3[1] = { (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_query_0) };

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

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_4[2] = {
  (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_args_0),
  (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0)
};

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_0_4[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4 = {
  (MR_String) "opm_top_args",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(4),
  libs__op_mode__libs__op_mode__field_types_op_mode_0_4,
  NULL,
  libs__op_mode__libs__op_mode__field_locns_op_mode_0_4,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_0[2] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_1
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_1[1] = { &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_2 };

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_2[1] = { &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_3 };

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_3[1] = { &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4 };

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__op_mode____Unify____op_mode_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode",
  { libs__op_mode__libs__op_mode__du_name_ordered_op_mode_0 },
  { libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_0,

};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_0[1] = { (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_maybe_make_ints_0) };

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_args_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0 = {
  (MR_String) "opma_generate_dependencies",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  libs__op_mode__libs__op_mode__field_types_op_mode_args_0_0,
  NULL,
  libs__op_mode__libs__op_mode__field_locns_op_mode_args_0_0,
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
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_2[1] = { (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_interface_file_0) };

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
  UINT8_C(2),
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
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_4[1] = { (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0) };

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4 = {
  (MR_String) "opma_augment",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(4),
  libs__op_mode__libs__op_mode__field_types_op_mode_args_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_0[2] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_3
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_1[1] = { &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0 };

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_2[1] = { &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_2 };

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_3[1] = { &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4 };

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_args_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__op_mode____Unify____op_mode_args_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_args_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_args",
  { libs__op_mode__libs__op_mode__du_name_ordered_op_mode_args_0 },
  { libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_args_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_args_0,

};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_0 = {
  (MR_String) "opmau_make_plain_opt",
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
  (MR_String) "opmau_make_trans_opt",
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

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_augment_0_6[1] = { (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_codegen_0) };

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

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_1[1] = { &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_6 };

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_augment_0[2] = {
  {
    UINT32_C(6),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__op_mode____Unify____op_mode_augment_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_augment_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_augment",
  { libs__op_mode__libs__op_mode__du_name_ordered_op_mode_augment_0 },
  { libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_augment_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_augment_0,

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

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_codegen_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__op_mode____Unify____op_mode_codegen_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_codegen_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_codegen",
  { libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_codegen_0 },
  { libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_codegen_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_codegen_0,

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

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_interface_file_0[3] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__op_mode____Unify____op_mode_interface_file_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_interface_file_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_interface_file",
  { libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_interface_file_0 },
  { libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_interface_file_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_interface_file_0,

};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_invoked_by_mmc_make_0_0 = {
  (MR_String) "op_mode_not_invoked_by_mmc_make",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_invoked_by_mmc_make_0_1 = {
  (MR_String) "op_mode_invoked_by_mmc_make",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_invoked_by_mmc_make_0[2] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_invoked_by_mmc_make_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_invoked_by_mmc_make_0_1
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_invoked_by_mmc_make_0[2] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_invoked_by_mmc_make_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_invoked_by_mmc_make_0_0
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_invoked_by_mmc_make_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__op_mode____Unify____op_mode_invoked_by_mmc_make_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_invoked_by_mmc_make_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_invoked_by_mmc_make",
  { libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_invoked_by_mmc_make_0 },
  { libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_invoked_by_mmc_make_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_invoked_by_mmc_make_0,

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
  (MR_String) "opmq_output_java_class_dir",
  INT32_C(7)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_8 = {
  (MR_String) "opmq_output_link_command",
  INT32_C(8)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_9 = {
  (MR_String) "opmq_output_shared_lib_link_command",
  INT32_C(9)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_10 = {
  (MR_String) "opmq_output_library_link_flags",
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
  (MR_String) "opmq_output_stdlib_grades",
  INT32_C(13)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_14 = {
  (MR_String) "opmq_output_stdlib_modules",
  INT32_C(14)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_15 = {
  (MR_String) "opmq_output_target_arch",
  INT32_C(15)
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_query_0[16] = {
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
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_13,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_14,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_15
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_query_0[16] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_3,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_2,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_5,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_6,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_4,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_11,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_7,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_12,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_10,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_8,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_9,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_13,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_14,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_15
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_query_0[16] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 11,
  (MR_Integer) 12,
  (MR_Integer) 10,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 13,
  (MR_Integer) 14,
  (MR_Integer) 15
};

const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_query_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__op_mode____Unify____op_mode_query_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_query_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_query",
  { libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_query_0 },
  { libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_query_0 },
  (MR_Integer) 16,
  UINT16_C(12),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_query_0,

};

void MR_CALL 
libs__op_mode____Compare____op_mode_query_0_0(
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

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_query_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__op_mode____Compare____op_mode_invoked_by_mmc_make_0_0(
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

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_invoked_by_mmc_make_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__op_mode____Compare____op_mode_interface_file_0_0(
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

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_interface_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__op_mode____Compare____op_mode_codegen_0_0(
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

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_codegen_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
libs__op_mode____Compare____op_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_13 == CastY_14);
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
              case (MR_Integer) 2:
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
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
              MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 15);
              MR_Integer Var_21 = (MR_Integer) (ArgX1_6);
              MR_Integer Var_22 = (MR_Integer) (ArgY1_7);

              succeeded = (Var_21 < Var_22);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_21 > Var_22);
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
        break;
      case (MR_Integer) 3:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word ArgY2_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word SubResult1_10;

              libs__op_mode____Compare____op_mode_args_0_0(&SubResult1_10, ArgX1_8, ArgY1_9);
              succeeded = (SubResult1_10 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_10;
              else
              {
                MR_Integer Var_19 = (MR_Integer) (ArgX2_11);
                MR_Integer Var_20 = (MR_Integer) (ArgY2_12);

                succeeded = (Var_19 < Var_20);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_19 > Var_20);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
            }
            break;
        }
        break;
    }
}

void MR_CALL 
libs__op_mode____Compare____op_mode_args_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_10 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_11 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_10 == CastY_11);
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
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
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
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
              MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_17 < Var_18);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_17 > Var_18);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
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
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Integer Var_15 = (MR_Integer) (ArgX1_6);
              MR_Integer Var_16 = (MR_Integer) (ArgY1_7);

              succeeded = (Var_15 < Var_16);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_15 > Var_16);
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
        break;
      case (MR_Integer) 3:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));

              libs__op_mode____Compare____op_mode_augment_0_0(HeadVar__1_1, ArgX1_8, ArgY1_9);
            }
            break;
        }
        break;
    }
}

void MR_CALL 
libs__op_mode____Compare____op_mode_augment_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
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
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
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
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
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
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                  case (MR_Integer) 4:
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
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 4:
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
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
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
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
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
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
              MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
              MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

              succeeded = (Var_9 < Var_10);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 1;
              else
              {
                succeeded = (Var_9 > Var_10);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 2;
                else
                  *HeadVar__1_1 = (MR_Integer) 0;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
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
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);
            succeeded = (ArgX1_9 == ArgY1_10);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;
          MR_Word ArgX2_13 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_14 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
            succeeded = libs__op_mode____Unify____op_mode_args_0_0(ArgX1_11, ArgY1_12);
            if (succeeded)
              succeeded = (ArgX2_13 == ArgY2_14);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_args_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 1:
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
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = libs__op_mode____Unify____op_mode_augment_0_0(ArgX1_11, ArgY1_12);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_augment_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_Word ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
          MR_Word ArgY1_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
            succeeded = (ArgX1_15 == ArgY1_16);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
libs__op_mode____Compare____maybe_make_ints_0_0(
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

MR_bool MR_CALL 
libs__op_mode____Unify____maybe_make_ints_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
libs__op_mode__gather_bool_op_mode_4_p_0(
  MR_Word OptionTable_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_OpModeSet_0_11,
  MR_Word * STATE_VARIABLE_OpModeSet_12)
{
  MR_bool succeeded;
  MR_Word Option_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word OpMode_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word OptionValue_9;
  MR_Box conv0_OptionValue_9;
  MR_Word BoolValue_10;

  mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_5, ((MR_Box) (Option_6)), &conv0_OptionValue_9);
  OptionValue_9 = ((MR_Word) (conv0_OptionValue_9));
  succeeded = ((MR_tag((MR_Word) OptionValue_9)) == (MR_Integer) 1);
  if (succeeded)
  {
    BoolValue_10 = ((MR_Unsigned) ((MR_hl_field(1, OptionValue_9, (MR_Integer) 0))) & (MR_Integer) 1);
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

MR_String MR_CALL 
libs__op_mode__op_mode_to_option_string_2_f_0(
  MR_Word OptionTable_4,
  MR_Word MOP_5)
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

            mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) ((MR_Integer) 666)), &conv0_RebuildOption_7);
            RebuildOption_7 = ((MR_Word) (conv0_RebuildOption_7));
            succeeded = ((MR_tag((MR_Word) RebuildOption_7)) == (MR_Integer) 1);
            if (succeeded)
            {
              Rebuild_8 = ((MR_Unsigned) ((MR_hl_field(1, RebuildOption_7, (MR_Integer) 0))) & (MR_Integer) 1);
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
        MR_Word MOPQ_10 = ((MR_Unsigned) ((MR_hl_field(2, MOP_5, (MR_Integer) 0))) & (MR_Integer) 15);

        Str_6 = ((&libs__op_mode_vector_common_5[0 + MOPQ_10]))->libs__op_mode__vector_common_type_5_0__vct_5_f_0;
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word MOPA_11 = ((MR_Word) ((MR_hl_field(3, MOP_5, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) MOPA_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(MOPA_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Str_6 = (MR_String) "--generate-dependency_file";
                break;
              case (MR_Integer) 1:
                Str_6 = (MR_String) "--convert-to-mercury";
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word MaybeMakeInts_13 = ((MR_Unsigned) ((MR_hl_field(1, MOPA_11, (MR_Integer) 0))) & (MR_Integer) 1);

              switch (MaybeMakeInts_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  Str_6 = (MR_String) "--generate-dependencies-ints";
                  break;
                case (MR_Integer) 0:
                  Str_6 = (MR_String) "--generate-dependencies";
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word InterfaceFile_14 = ((MR_Unsigned) ((MR_hl_field(2, MOPA_11, (MR_Integer) 0))) & (MR_Integer) 3);

              switch (InterfaceFile_14) {
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
          case (MR_Integer) 3:
            {
              MR_Word MOPAU_15 = ((MR_Word) ((MR_hl_field(3, MOPA_11, (MR_Integer) 0))));

              switch (MR_tag((MR_Word) MOPAU_15)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(MOPAU_15)) {
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
                    MR_Word MOPCG_16 = ((MR_Unsigned) ((MR_hl_field(1, MOPAU_15, (MR_Integer) 0))) & (MR_Integer) 3);

                    switch (MOPCG_16) {
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

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_OpModeSet_12;

  libs__op_mode__gather_bool_op_mode_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_OpModeSet_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_OpModeSet_12));
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_2(
  void * env_ptr_arg)
{
  struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_4(
  void * env_ptr_arg)
{
  struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_49 = ((MR_Word) ((env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_49));
  libs__op_mode__decide_op_mode_3_p_0_3(env_ptr);
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_3(
  void * env_ptr_arg)
{
  struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) (env_ptr_arg);

  switch (MR_tag((MR_Word) (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_49)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
      break;
    case (MR_Integer) 3:
      {
        MR_Word OpModeArgs_62 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_49, (MR_Integer) 0))));
        MR_Word Var_63 = ((MR_Unsigned) ((MR_hl_field(3, (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_49, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(3, (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_49, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) OpModeArgs_62)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            {
              MR_Word OpModeAugment_66 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_62, (MR_Integer) 0))));

              if ((((((((OpModeAugment_66 == (MR_Word) ((MR_Unsigned) 8U))) || ((OpModeAugment_66 == (MR_Word) ((MR_Unsigned) 0U))))) || ((OpModeAugment_66 == (MR_Word) ((MR_Unsigned) 4U))))) || ((OpModeAugment_66 == (MR_Word) ((MR_Unsigned) 12U)))))
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

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_5(
  void * env_ptr_arg)
{
  struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__commit_0) == 0)
    {
      mercury__set__member_2_p_1((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), &(env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_49, (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_44_44, libs__op_mode__decide_op_mode_3_p_0_4, env_ptr);
      (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
}

void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0(
  MR_Word OptionTable_4,
  MR_Word * OpMode_5,
  MR_Word * OtherOpModes_6)
{
  struct libs__op_mode__decide_op_mode_3_p_0_env_0_s env;

  {
    MR_Word InvokedByMMCMakeOpt_8;
    MR_Word InvokedByMMCMake_9;
    MR_Word GenStandaloneOption_10;
    MR_Word OpModes0_13;
    MR_Word STATE_VARIABLE_OpModeSet_23_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_OpModeSet_26_26;
    MR_Word STATE_VARIABLE_OpModeSet_29_29;
    MR_Word STATE_VARIABLE_OpModeSet_33_33;
    MR_Box conv1_STATE_VARIABLE_OpModeSet_26_26;
    MR_Box conv2_GenStandaloneOption_10;
    MR_Word MaybeBaseName_11;

    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_4, ((MR_Box) ((MR_Integer) 665)), &InvokedByMMCMakeOpt_8);
    switch (InvokedByMMCMakeOpt_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InvokedByMMCMake_9 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        InvokedByMMCMake_9 = (MR_Integer) 1;
        break;
    }
    mercury__set__init_1_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), &STATE_VARIABLE_OpModeSet_23_23);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_24, 0) = ((MR_Box) (&libs__op_mode_scalar_common_4[0]));
      MR_hl_field(0, Var_24, 1) = ((MR_Box) (libs__op_mode__decide_op_mode_3_p_0_1));
      MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_24, 3) = ((MR_Box) (OptionTable_4));
    }
    Var_25 = libs__op_mode__bool_op_modes_1_f_0(InvokedByMMCMake_9);
    mercury__list__foldl_4_p_0((MR_Word) (&libs__op_mode_scalar_common_1[0]), (MR_Word) (&libs__op_mode_scalar_common_2[0]), Var_24, Var_25, ((MR_Box) (STATE_VARIABLE_OpModeSet_23_23)), &conv1_STATE_VARIABLE_OpModeSet_26_26);
    STATE_VARIABLE_OpModeSet_26_26 = ((MR_Word) (conv1_STATE_VARIABLE_OpModeSet_26_26));
    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) ((MR_Integer) 127)), &conv2_GenStandaloneOption_10);
    GenStandaloneOption_10 = ((MR_Word) (conv2_GenStandaloneOption_10));
    (env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) GenStandaloneOption_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GenStandaloneOption_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
    {
      MaybeBaseName_11 = ((MR_Word) ((MR_hl_field(3, GenStandaloneOption_10, (MR_Integer) 1))));
      if ((MaybeBaseName_11 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_OpModeSet_29_29 = STATE_VARIABLE_OpModeSet_26_26;
      else
      {
        MR_String BaseName_12 = ((MR_String) ((MR_hl_field(1, MaybeBaseName_11, (MR_Integer) 0))));
        MR_Word Var_28;

        {
          Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_28, 0) = ((MR_Box) (BaseName_12));
        }
        mercury__set__insert_3_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) (Var_28)), STATE_VARIABLE_OpModeSet_26_26, &STATE_VARIABLE_OpModeSet_29_29);
      }
    }
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.op_mode.decide_op_mode\'/3", (MR_String) "generate_standalone_interface is not maybe_string");
        return;
      }
    switch (InvokedByMMCMake_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__set__delete_3_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_OpModeSet_29_29, &STATE_VARIABLE_OpModeSet_33_33);
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_OpModeSet_33_33 = STATE_VARIABLE_OpModeSet_29_29;
        break;
    }
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), STATE_VARIABLE_OpModeSet_33_33, &OpModes0_13);
    if ((OpModes0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *OpMode_5 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[1])));
        MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_9));
      }
      *OtherOpModes_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(1, OpModes0_13, (MR_Integer) 1))));
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(1, OpModes0_13, (MR_Integer) 0))));

      if ((Var_58 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *OpMode_5 = Var_59;
        *OtherOpModes_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        (env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_OpModeSet_33_33);
        if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
        {
          *OpMode_5 = (MR_Word) ((MR_Unsigned) 0U);
          *OtherOpModes_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word HeadFilteredOpMode_20;
          MR_Word TailFilteredOpModes_21;
          MR_Word FilteredOpModes_19;
          MR_Word Var_39;
          MR_Word STATE_VARIABLE_OpModeSet_40_40;
          MR_Word Var_43;

          {
            Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_39, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[2])));
            MR_hl_field(3, Var_39, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_9));
          }
          mercury__set__delete_3_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) (Var_39)), STATE_VARIABLE_OpModeSet_33_33, &STATE_VARIABLE_OpModeSet_40_40);
          {
            Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_43, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[3])));
            MR_hl_field(3, Var_43, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_9));
          }
          mercury__set__delete_3_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) (Var_43)), STATE_VARIABLE_OpModeSet_40_40, &(env).libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_44_44);
          libs__op_mode__decide_op_mode_3_p_0_5(&env);
          if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
          {
            mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), (env).libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_44_44, &FilteredOpModes_19);
            (env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = (FilteredOpModes_19 != (MR_Word) ((MR_Unsigned) 0U));
            if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
            {
              HeadFilteredOpMode_20 = ((MR_Word) ((MR_hl_field(1, FilteredOpModes_19, (MR_Integer) 0))));
              TailFilteredOpModes_21 = ((MR_Word) ((MR_hl_field(1, FilteredOpModes_19, (MR_Integer) 1))));
            }
          }
          if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
          {
            *OpMode_5 = HeadFilteredOpMode_20;
            *OtherOpModes_6 = TailFilteredOpModes_21;
          }
          else
          {
            *OpMode_5 = ((MR_Word) ((MR_hl_field(1, OpModes0_13, (MR_Integer) 0))));
            *OtherOpModes_6 = ((MR_Word) ((MR_hl_field(1, OpModes0_13, (MR_Integer) 1))));
          }
        }
      }
    }
  }
}

static MR_Word MR_CALL 
libs__op_mode__bool_op_modes_1_f_0(
  MR_Word InvokedByMMCMake_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_7;
  MR_Word Var_11;
  MR_Word Var_15;
  MR_Word Var_20;
  MR_Word Var_25;
  MR_Word Var_30;
  MR_Word Var_35;
  MR_Word Var_40;
  MR_Word Var_45;
  MR_Word Var_50;
  MR_Word Var_55;
  MR_Word Var_60;
  MR_Word Var_65;
  MR_Word Var_70;
  MR_Word Var_75;
  MR_Word Var_80;
  MR_Word Var_85;
  MR_Word Var_90;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_98;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_104;
  MR_Word Var_107;
  MR_Word Var_108;
  MR_Word Var_110;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_115;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_121;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_127;
  MR_Word Var_130;
  MR_Word Var_131;
  MR_Word Var_133;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_138;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_Word Var_144;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_150;
  MR_Word Var_153;
  MR_Word Var_154;
  MR_Word Var_156;
  MR_Word Var_159;
  MR_Word Var_160;
  MR_Word Var_162;
  MR_Word Var_165;
  MR_Word Var_166;
  MR_Word Var_168;
  MR_Word Var_171;
  MR_Word Var_172;
  MR_Word Var_174;
  MR_Word Var_178;
  MR_Word Var_179;
  MR_Word Var_181;

  {
    Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_98, 0) = ((MR_Box) (MR_mkword(1, &libs__op_mode_scalar_common_3[4])));
    MR_hl_field(3, Var_98, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_96, 0) = ((MR_Box) ((MR_Integer) 124));
    MR_hl_field(0, Var_96, 1) = ((MR_Box) (Var_98));
  }
  {
    Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_104, 0) = ((MR_Box) (MR_mkword(1, &libs__op_mode_scalar_common_3[5])));
    MR_hl_field(3, Var_104, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_102, 0) = ((MR_Box) ((MR_Integer) 125));
    MR_hl_field(0, Var_102, 1) = ((MR_Box) (Var_104));
  }
  {
    Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_110, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_108 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_108, 0) = ((MR_Box) ((MR_Integer) 123));
    MR_hl_field(0, Var_108, 1) = ((MR_Box) (Var_110));
  }
  {
    Var_115 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_115, 0) = ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[4])));
    MR_hl_field(3, Var_115, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_113, 0) = ((MR_Box) ((MR_Integer) 117));
    MR_hl_field(0, Var_113, 1) = ((MR_Box) (Var_115));
  }
  {
    Var_121 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_121, 0) = ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[0])));
    MR_hl_field(3, Var_121, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_119 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_119, 0) = ((MR_Box) ((MR_Integer) 115));
    MR_hl_field(0, Var_119, 1) = ((MR_Box) (Var_121));
  }
  {
    Var_127 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_127, 0) = ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[5])));
    MR_hl_field(3, Var_127, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_125 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_125, 0) = ((MR_Box) ((MR_Integer) 116));
    MR_hl_field(0, Var_125, 1) = ((MR_Box) (Var_127));
  }
  {
    Var_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_133, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_133, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_131, 0) = ((MR_Box) ((MR_Integer) 128));
    MR_hl_field(0, Var_131, 1) = ((MR_Box) (Var_133));
  }
  {
    Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_138, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[19])));
    MR_hl_field(3, Var_138, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_136 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_136, 0) = ((MR_Box) ((MR_Integer) 118));
    MR_hl_field(0, Var_136, 1) = ((MR_Box) (Var_138));
  }
  {
    Var_144 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_144, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[20])));
    MR_hl_field(3, Var_144, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_142 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_142, 0) = ((MR_Box) ((MR_Integer) 119));
    MR_hl_field(0, Var_142, 1) = ((MR_Box) (Var_144));
  }
  {
    Var_150 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_150, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[21])));
    MR_hl_field(3, Var_150, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_148 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_148, 0) = ((MR_Box) ((MR_Integer) 120));
    MR_hl_field(0, Var_148, 1) = ((MR_Box) (Var_150));
  }
  {
    Var_156 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_156, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[22])));
    MR_hl_field(3, Var_156, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_154 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_154, 0) = ((MR_Box) ((MR_Integer) 121));
    MR_hl_field(0, Var_154, 1) = ((MR_Box) (Var_156));
  }
  {
    Var_162 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_162, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[2])));
    MR_hl_field(3, Var_162, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_160 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_160, 0) = ((MR_Box) ((MR_Integer) 129));
    MR_hl_field(0, Var_160, 1) = ((MR_Box) (Var_162));
  }
  {
    Var_168 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_168, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[3])));
    MR_hl_field(3, Var_168, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_166 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_166, 0) = ((MR_Box) ((MR_Integer) 130));
    MR_hl_field(0, Var_166, 1) = ((MR_Box) (Var_168));
  }
  {
    Var_174 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_174, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[23])));
    MR_hl_field(3, Var_174, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_172 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_172, 0) = ((MR_Box) ((MR_Integer) 131));
    MR_hl_field(0, Var_172, 1) = ((MR_Box) (Var_174));
  }
  {
    Var_181 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_181, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[24])));
    MR_hl_field(3, Var_181, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_3));
  }
  {
    Var_179 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_179, 0) = ((MR_Box) ((MR_Integer) 132));
    MR_hl_field(0, Var_179, 1) = ((MR_Box) (Var_181));
  }
  {
    Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_178, 0) = ((MR_Box) (Var_179));
    MR_hl_field(1, Var_178, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_171, 0) = ((MR_Box) (Var_172));
    MR_hl_field(1, Var_171, 1) = ((MR_Box) (Var_178));
  }
  {
    Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_165, 0) = ((MR_Box) (Var_166));
    MR_hl_field(1, Var_165, 1) = ((MR_Box) (Var_171));
  }
  {
    Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_159, 0) = ((MR_Box) (Var_160));
    MR_hl_field(1, Var_159, 1) = ((MR_Box) (Var_165));
  }
  {
    Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_153, 0) = ((MR_Box) (Var_154));
    MR_hl_field(1, Var_153, 1) = ((MR_Box) (Var_159));
  }
  {
    Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_147, 0) = ((MR_Box) (Var_148));
    MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_153));
  }
  {
    Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_141, 0) = ((MR_Box) (Var_142));
    MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_147));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (Var_136));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_141));
  }
  {
    Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_130, 0) = ((MR_Box) (Var_131));
    MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_135));
  }
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_125));
    MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_130));
  }
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
    MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_124));
  }
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_118));
  }
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_112));
  }
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_107));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_101));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[19]));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_95));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[18]));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_90));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[17]));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[16]));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_80));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[15]));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[14]));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[13]));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[12]));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[11]));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[10]));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[9]));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[8]));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[7]));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_35));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[6]));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[5]));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_25));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[4]));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_20));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[3]));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_7, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[2]));
    MR_hl_field(1, Var_7, 1) = ((MR_Box) (Var_11));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[1]));
    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) (Var_7));
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
libs__op_mode____Unify____maybe_make_ints_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__op_mode____Unify____maybe_make_ints_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__op_mode____Compare____maybe_make_ints_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__op_mode____Compare____maybe_make_ints_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__op_mode____Unify____op_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__op_mode____Compare____op_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_args_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__op_mode____Unify____op_mode_args_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_args_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__op_mode____Compare____op_mode_args_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_augment_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__op_mode____Unify____op_mode_augment_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_augment_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__op_mode____Compare____op_mode_augment_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_codegen_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__op_mode____Unify____op_mode_codegen_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_codegen_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__op_mode____Compare____op_mode_codegen_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_interface_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__op_mode____Unify____op_mode_interface_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_interface_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__op_mode____Compare____op_mode_interface_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_invoked_by_mmc_make_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__op_mode____Unify____op_mode_invoked_by_mmc_make_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_invoked_by_mmc_make_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__op_mode____Compare____op_mode_invoked_by_mmc_make_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_query_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__op_mode____Unify____op_mode_query_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_query_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__op_mode____Compare____op_mode_query_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__op_mode__init(void)
{
}

void mercury__libs__op_mode__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_maybe_make_ints_0);
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0);
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_args_0);
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0);
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_codegen_0);
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_interface_file_0);
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_invoked_by_mmc_make_0);
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
