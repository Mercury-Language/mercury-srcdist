/*
** Automatically generated from `op_mode.m'
** by the Mercury compiler,
** version rotd-2025-07-10
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
#include "int.mih"
#include "io.mih"
#include "libs.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"



struct libs__op_mode__decide_op_mode_3_p_0_env_0_s {
  MR_bool libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded;
  MR_Word libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_6_52;
  jmp_buf libs__op_mode__decide_op_mode_3_p_0_env_0__commit_0;
  MR_Word libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_58;
  MR_Box libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_58;
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

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_augment_0_5[1];

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_augment_0_5[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_5;

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_0[5];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_1[1];

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_augment_0[2];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_augment_0[6];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_augment_0[6];

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_0;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_1;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_2;

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_codegen_0[3];

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_codegen_0[3];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_codegen_0[3];

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_0;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_1;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_2;

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_3;

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_front_and_middle_0[4];

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_front_and_middle_0[4];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_front_and_middle_0[4];

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

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_0;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_1;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_2;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_3;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_4;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_5;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_6;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_7;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_8;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_9;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_10;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_11;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_12;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_13;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_14;

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_15;

static const MR_FA_TypeInfo_Struct1 libs__op_mode__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_query_0_16[1];

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_16;

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_query_0_0[16];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_query_0_1[1];

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_query_0[2];

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_query_0[17];

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_query_0[17];

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
libs__op_mode__bool_op_modes_2_f_0(
  MR_Word InvokedByMMCMake_4,
  MR_Word MaybeListOptOptsUpto_5);

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
libs__op_mode____Unify____op_mode_front_and_middle_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__op_mode____Compare____op_mode_front_and_middle_0_0_10001(
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

static /* final */ const MR_Box libs__op_mode_scalar_common_2[21][2];

static /* final */ const MR_Box libs__op_mode_scalar_common_3[29][1];

static /* final */ const MR_Box libs__op_mode_scalar_common_4[1][7];




static /* final */ const MR_Box libs__op_mode_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0))
  },
};

static /* final */ const MR_Box libs__op_mode_scalar_common_2[21][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Integer) 23)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 24)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Integer) 32)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[6])))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Integer) 33)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[7])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Integer) 34)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[8])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Integer) 35)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[9])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Integer) 27)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[10])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Integer) 39)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[11])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_Integer) 40)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[12])))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_Integer) 36)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[13])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Integer) 37)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[14])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_Integer) 38)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[15])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Integer) 41)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[16])))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Integer) 26)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[17])))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Integer) 30)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[18])))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Integer) 28)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[19])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Integer) 29)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[20])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_Integer) 31)),
    ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[21])))
  },
};

static /* final */ const MR_Box libs__op_mode_scalar_common_3[29][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   2 */
  { ((MR_Box) (MR_mkword(1, &libs__op_mode_scalar_common_3[1]))) },
  /* row   3 */
  { ((MR_Box) ((MR_Unsigned) 16U)) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   5 */
  { ((MR_Box) (MR_mkword(1, &libs__op_mode_scalar_common_3[4]))) },
  /* row   6 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   7 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row   8 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row   9 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row  10 */
  { ((MR_Box) ((MR_Unsigned) 16U)) },
  /* row  11 */
  { ((MR_Box) ((MR_Unsigned) 20U)) },
  /* row  12 */
  { ((MR_Box) ((MR_Unsigned) 24U)) },
  /* row  13 */
  { ((MR_Box) ((MR_Unsigned) 32U)) },
  /* row  14 */
  { ((MR_Box) ((MR_Unsigned) 36U)) },
  /* row  15 */
  { ((MR_Box) ((MR_Unsigned) 40U)) },
  /* row  16 */
  { ((MR_Box) ((MR_Unsigned) 28U)) },
  /* row  17 */
  { ((MR_Box) ((MR_Unsigned) 44U)) },
  /* row  18 */
  { ((MR_Box) ((MR_Unsigned) 48U)) },
  /* row  19 */
  { ((MR_Box) ((MR_Unsigned) 52U)) },
  /* row  20 */
  { ((MR_Box) ((MR_Unsigned) 56U)) },
  /* row  21 */
  { ((MR_Box) ((MR_Unsigned) 60U)) },
  /* row  22 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row  23 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row  24 */
  { ((MR_Box) ((MR_Unsigned) 4U)) },
  /* row  25 */
  { ((MR_Box) ((MR_Unsigned) 8U)) },
  /* row  26 */
  { ((MR_Box) ((MR_Unsigned) 12U)) },
  /* row  27 */
  { ((MR_Box) (MR_mkword(1, &libs__op_mode_scalar_common_3[0]))) },
  /* row  28 */
  { ((MR_Box) (MR_mkword(1, &libs__op_mode_scalar_common_3[22]))) },
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
  NULL,
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

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_augment_0_5[1] = { (MR_PseudoTypeInfo) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_front_and_middle_0) };

static const MR_DuArgLocn libs__op_mode__libs__op_mode__field_locns_op_mode_augment_0_5[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_5 = {
  (MR_String) "opmau_front_and_middle",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(5),
  libs__op_mode__libs__op_mode__field_types_op_mode_augment_0_5,
  NULL,
  libs__op_mode__libs__op_mode__field_locns_op_mode_augment_0_5,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_0[5] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_3,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_4
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_1[1] = { &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_5 };

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_augment_0[2] = {
  {
    UINT32_C(5),
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

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_augment_0[6] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_5,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_3,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_4
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_augment_0[6] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 0
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
  (MR_Integer) 6,
  UINT16_C(12),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_augment_0,

};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_0 = {
  (MR_String) "opfam_target_code_only",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_1 = {
  (MR_String) "opfam_target_and_object_code_only",
  INT32_C(2)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_2 = {
  (MR_String) "opfam_target_object_and_executable",
  INT32_C(3)
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
  UINT16_C(4),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_codegen_0,

};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_0 = {
  (MR_String) "opfam_errorcheck_only",
  INT32_C(0)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_1 = {
  (MR_String) "opfam_target_code_only",
  INT32_C(1)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_2 = {
  (MR_String) "opfam_target_and_object_code_only",
  INT32_C(2)
};

static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_3 = {
  (MR_String) "opfam_target_object_and_executable",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_front_and_middle_0[4] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_2,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_3
};

static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_front_and_middle_0[4] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_2,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_front_and_middle_0_3
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_front_and_middle_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_front_and_middle_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__op_mode____Unify____op_mode_front_and_middle_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_front_and_middle_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_front_and_middle",
  { libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_front_and_middle_0 },
  { libs__op_mode__libs__op_mode__enum_ordinal_ordered_op_mode_front_and_middle_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_front_and_middle_0,

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

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_0 = {
  (MR_String) "opmq_output_cc",
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

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_1 = {
  (MR_String) "opmq_output_c_compiler_type",
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

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_2 = {
  (MR_String) "opmq_output_cflags",
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

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_3 = {
  (MR_String) "opmq_output_c_include_directory_flags",
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

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_4 = {
  (MR_String) "opmq_output_grade_defines",
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

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_5 = {
  (MR_String) "opmq_output_csharp_compiler",
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

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_6 = {
  (MR_String) "opmq_output_csharp_compiler_type",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 6,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_7 = {
  (MR_String) "opmq_output_java_class_dir",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 7,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_8 = {
  (MR_String) "opmq_output_link_command",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 8,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_9 = {
  (MR_String) "opmq_output_shared_lib_link_command",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 9,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_10 = {
  (MR_String) "opmq_output_library_link_flags",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 10,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_11 = {
  (MR_String) "opmq_output_grade_string",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 11,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_12 = {
  (MR_String) "opmq_output_library_install_grades",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 12,
  INT32_C(12),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_13 = {
  (MR_String) "opmq_output_stdlib_grades",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 13,
  INT32_C(13),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_14 = {
  (MR_String) "opmq_output_stdlib_modules",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 14,
  INT32_C(14),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_15 = {
  (MR_String) "opmq_output_target_arch",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 15,
  INT32_C(15),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 libs__op_mode__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_query_0_16[1] = { (MR_PseudoTypeInfo) (&libs__op_mode__maybe__ti_maybe_1builtin__type_ctor_info_int_0) };

static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_16 = {
  (MR_String) "opmq_output_optimization_options",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(16),
  libs__op_mode__libs__op_mode__field_types_op_mode_query_0_16,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_query_0_0[16] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_3,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_4,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_5,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_6,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_7,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_8,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_9,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_10,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_11,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_12,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_13,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_14,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_15
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_query_0_1[1] = { &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_16 };

static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_query_0[2] = {
  {
    UINT32_C(16),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_query_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_query_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_query_0[17] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_3,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_5,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_6,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_4,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_11,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_7,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_12,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_10,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_8,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_16,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_9,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_13,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_14,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_query_0_15
};

static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_query_0[17] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 11,
  (MR_Integer) 13,
  (MR_Integer) 10,
  (MR_Integer) 7,
  (MR_Integer) 9,
  (MR_Integer) 14,
  (MR_Integer) 15,
  (MR_Integer) 16,
  (MR_Integer) 12
};

const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_query_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__op_mode____Unify____op_mode_query_0_0_10001)),
  ((MR_Box) (libs__op_mode____Compare____op_mode_query_0_0_10001)),
  (MR_String) "libs.op_mode",
  (MR_String) "op_mode_query",
  { libs__op_mode__libs__op_mode__du_name_ordered_op_mode_query_0 },
  { libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_query_0 },
  (MR_Integer) 17,
  UINT16_C(12),
  libs__op_mode__libs__op_mode__functor_number_map_op_mode_query_0,

};

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
libs__op_mode____Compare____op_mode_front_and_middle_0_0(
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
libs__op_mode____Unify____op_mode_front_and_middle_0_0(
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
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);
  MR_Integer Var_7 = (MR_Integer) (Cast_HeadVar1_4);
  MR_Integer Var_8 = (MR_Integer) (Cast_HeadVar2_5);

  succeeded = (Var_7 < Var_8);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Var_7 > Var_8);
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
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
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
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

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
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              libs__op_mode____Compare____op_mode_query_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
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
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 0))));
              MR_Word ArgX2_11 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
              MR_Word ArgY2_12 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, 1))) & (MR_Integer) 1);
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
libs__op_mode____Compare____op_mode_query_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer IndexX_4;
    MR_Integer IndexY_5;

    libs__op_mode____Index____op_mode_query_0_0(HeadVar__2_2, &IndexX_4);
    libs__op_mode____Index____op_mode_query_0_0(HeadVar__3_3, &IndexY_5);
    succeeded = (IndexX_4 < IndexY_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (IndexX_4 > IndexY_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word CompareResult_6;

        switch (MR_tag((MR_Word) HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              CompareResult_6 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_11_11;
              MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_8;

              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
              if (succeeded)
              {
                ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
                TypeInfo_11_11 = (MR_Word) (&libs__op_mode_scalar_common_2[1]);
                mercury__builtin__compare_3_p_0(TypeInfo_11_11, &CompareResult_6, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        if (succeeded)
          *HeadVar__1_1 = CompareResult_6;
        else
          {
            mercury__private_builtin__compare_error_0_p_0();
            return;
          }
      }
    }
  }
}

void MR_CALL 
libs__op_mode____Index____op_mode_query_0_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 3;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 8:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 9:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 10:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 11:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 12:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 13:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 14:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
        case (MR_Integer) 15:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 16;
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
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
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
              MR_Word ArgX1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 3);
              MR_Word ArgY1_7 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, 0))) & (MR_Integer) 3);
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
              MR_Word ArgX1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
              MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, 0))));

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
              MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
              MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 3);
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
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_12 == CastX_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            succeeded = libs__op_mode____Unify____op_mode_query_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, 1))) & (MR_Integer) 1);
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
            ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, 1))) & (MR_Integer) 1);
            succeeded = libs__op_mode____Unify____op_mode_args_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
              succeeded = (ArgX2_9 == ArgY2_10);
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_query_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
          MR_Word TypeInfo_9_9;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            TypeInfo_9_9 = (MR_Word) (&libs__op_mode_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_10 == CastX_9);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, 0))) & (MR_Integer) 3);
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, 0))) & (MR_Integer) 3);
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, 0))));
            succeeded = libs__op_mode____Unify____op_mode_augment_0_0(ArgX1_7, ArgY1_8);
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
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
          MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 3);
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
            succeeded = (ArgX1_3 == ArgY1_4);
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
  MR_Word Option_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word OpMode_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
  MR_Word OptionValue_9;
  MR_Box conv0_OptionValue_9;
  MR_Word BoolValue_10;

  mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_5, ((MR_Box) (Option_6)), &conv0_OptionValue_9);
  OptionValue_9 = ((MR_Word) (conv0_OptionValue_9));
  succeeded = ((MR_tag((MR_Word) OptionValue_9)) == (MR_Integer) 1);
  if (succeeded)
  {
    BoolValue_10 = ((MR_Unsigned) ((MR_hl_field(1, OptionValue_9, 0))) & (MR_Integer) 1);
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

            mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, ((MR_Box) ((MR_Integer) 24)), &conv0_RebuildOption_7);
            RebuildOption_7 = ((MR_Word) (conv0_RebuildOption_7));
            succeeded = ((MR_tag((MR_Word) RebuildOption_7)) == (MR_Integer) 1);
            if (succeeded)
            {
              Rebuild_8 = ((MR_Unsigned) ((MR_hl_field(1, RebuildOption_7, 0))) & (MR_Integer) 1);
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
        MR_Word MOPQ_10 = ((MR_Word) ((MR_hl_field(2, MOP_5, 0))));

        switch (MR_tag((MR_Word) MOPQ_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(MOPQ_10)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Str_6 = (MR_String) "--output-cc";
                break;
              case (MR_Integer) 1:
                Str_6 = (MR_String) "--output-c-compiler-type";
                break;
              case (MR_Integer) 2:
                Str_6 = (MR_String) "--output-cflags";
                break;
              case (MR_Integer) 3:
                Str_6 = (MR_String) "--output-c-include-directory-flags";
                break;
              case (MR_Integer) 4:
                Str_6 = (MR_String) "--output-grade-defines";
                break;
              case (MR_Integer) 5:
                Str_6 = (MR_String) "--output-csharp-compiler";
                break;
              case (MR_Integer) 6:
                Str_6 = (MR_String) "--output-csharp-compiler-type";
                break;
              case (MR_Integer) 7:
                Str_6 = (MR_String) "--output-class-dir";
                break;
              case (MR_Integer) 8:
                Str_6 = (MR_String) "--output-link-command";
                break;
              case (MR_Integer) 9:
                Str_6 = (MR_String) "--output-shared-lib-link-command";
                break;
              case (MR_Integer) 10:
                Str_6 = (MR_String) "--output-library-link-flags";
                break;
              case (MR_Integer) 11:
                Str_6 = (MR_String) "--output-grade-string";
                break;
              case (MR_Integer) 12:
                Str_6 = (MR_String) "--output-libgrades";
                break;
              case (MR_Integer) 13:
                Str_6 = (MR_String) "--output-stdlib-grades";
                break;
              case (MR_Integer) 14:
                Str_6 = (MR_String) "--output-stdlib-modules";
                break;
              case (MR_Integer) 15:
                Str_6 = (MR_String) "--output-target-arch";
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word MaybeUpto_11 = ((MR_Word) ((MR_hl_field(1, MOPQ_10, 0))));

              if ((MaybeUpto_11 == (MR_Word) ((MR_Unsigned) 0U)))
                Str_6 = (MR_String) "--output-optimization-options";
              else
              {
                MR_Integer UpTo_12 = ((MR_Integer) ((MR_hl_field(1, MaybeUpto_11, 0))));
                MR_String Var_23;

                Var_23 = mercury__string__int_to_string_1_f_0(UpTo_12);
                Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "--output-optimization-options-upto=", Var_23);
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word MOPA_13 = ((MR_Word) ((MR_hl_field(3, MOP_5, 0))));

        switch (MR_tag((MR_Word) MOPA_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(MOPA_13)) {
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
              MR_Word MaybeMakeInts_15 = ((MR_Unsigned) ((MR_hl_field(1, MOPA_13, 0))) & (MR_Integer) 1);

              switch (MaybeMakeInts_15) {
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
              MR_Word InterfaceFile_16 = ((MR_Unsigned) ((MR_hl_field(2, MOPA_13, 0))) & (MR_Integer) 3);

              switch (InterfaceFile_16) {
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
              MR_Word MOPAU_17 = ((MR_Word) ((MR_hl_field(3, MOPA_13, 0))));

              switch (MR_tag((MR_Word) MOPAU_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(MOPAU_17)) {
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
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MOFAM_18 = ((MR_Unsigned) ((MR_hl_field(1, MOPAU_17, 0))) & (MR_Integer) 3);

                    switch (MOFAM_18) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        Str_6 = (MR_String) "--errorcheck-only";
                        break;
                      case (MR_Integer) 2:
                        Str_6 = (MR_String) "--compile-only";
                        break;
                      case (MR_Integer) 1:
                        Str_6 = (MR_String) "--target-code-only";
                        break;
                      case (MR_Integer) 3:
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

  libs__op_mode__gather_bool_op_mode_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_OpModeSet_12);
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

  (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_58 = ((MR_Word) ((env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_58));
  libs__op_mode__decide_op_mode_3_p_0_3(env_ptr);
}

static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_3(
  void * env_ptr_arg)
{
  struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) (env_ptr_arg);

  switch (MR_tag((MR_Word) (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_58)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
      break;
    case (MR_Integer) 3:
      {
        MR_Word OpModeArgs_72 = ((MR_Word) ((MR_hl_field(3, (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_58, 0))));
        MR_Word Var_73;

        switch (MR_tag((MR_Word) OpModeArgs_72)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            {
              MR_Word OpModeAugment_76 = ((MR_Word) ((MR_hl_field(3, OpModeArgs_72, 0))));

              if ((((((((OpModeAugment_76 == (MR_Word) ((MR_Unsigned) 8U))) || ((OpModeAugment_76 == (MR_Word) ((MR_Unsigned) 0U))))) || ((OpModeAugment_76 == (MR_Word) ((MR_Unsigned) 4U))))) || ((OpModeAugment_76 == (MR_Word) ((MR_Unsigned) 12U)))))
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
      mercury__set__member_2_p_1((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), &(env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_58, (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_6_52, libs__op_mode__decide_op_mode_3_p_0_4, env_ptr);
      (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
}

void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0(
  MR_Word OptionTable0_4,
  MR_Word * OpMode_5,
  MR_Word * OtherOpModes_6)
{
  struct libs__op_mode__decide_op_mode_3_p_0_env_0_s env;

  {
    MR_Word InvokedByMMCMakeOpt_8;
    MR_Word InvokedByMMCMake_9;
    MR_Integer ListOptOptsUpto_10;
    MR_Word MaybeListOptOptsUpto_11;
    MR_Word OptionTable_12;
    MR_Word GenStandaloneOption_13;
    MR_Word OpModes0_16;
    MR_Word STATE_VARIABLE_OpModeSet_1_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_OpModeSet_2_34;
    MR_Word STATE_VARIABLE_OpModeSet_3_37;
    MR_Word STATE_VARIABLE_OpModeSet_4_41;
    MR_Box conv1_STATE_VARIABLE_OpModeSet_2_34;
    MR_Box conv2_GenStandaloneOption_13;
    MR_Word MaybeBaseName_14;

    mercury__getopt__lookup_bool_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_4, ((MR_Box) ((MR_Integer) 25)), &InvokedByMMCMakeOpt_8);
    switch (InvokedByMMCMakeOpt_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InvokedByMMCMake_9 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        InvokedByMMCMake_9 = (MR_Integer) 1;
        break;
    }
    mercury__getopt__lookup_int_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable0_4, ((MR_Box) ((MR_Integer) 43)), &ListOptOptsUpto_10);
    (env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = (ListOptOptsUpto_10 < (MR_Integer) 0);
    if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
    {
      MaybeListOptOptsUpto_11 = (MR_Word) ((MR_Unsigned) 0U);
      OptionTable_12 = OptionTable0_4;
    }
    else
    {
      {
        MaybeListOptOptsUpto_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeListOptOptsUpto_11, 0) = ((MR_Box) (ListOptOptsUpto_10));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), ((MR_Box) ((MR_Integer) 42)), ((MR_Box) (MR_mkword(1, &libs__op_mode_scalar_common_3[0]))), OptionTable0_4, &OptionTable_12);
    }
    mercury__set__init_1_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), &STATE_VARIABLE_OpModeSet_1_31);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (&libs__op_mode_scalar_common_4[0]));
      MR_hl_field(0, Var_32, 1) = ((MR_Box) (libs__op_mode__decide_op_mode_3_p_0_1));
      MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_32, 3) = ((MR_Box) (OptionTable_12));
    }
    Var_33 = libs__op_mode__bool_op_modes_2_f_0(InvokedByMMCMake_9, MaybeListOptOptsUpto_11);
    mercury__list__foldl_4_p_0((MR_Word) (&libs__op_mode_scalar_common_1[0]), (MR_Word) (&libs__op_mode_scalar_common_2[0]), Var_32, Var_33, ((MR_Box) (STATE_VARIABLE_OpModeSet_1_31)), &conv1_STATE_VARIABLE_OpModeSet_2_34);
    STATE_VARIABLE_OpModeSet_2_34 = ((MR_Word) (conv1_STATE_VARIABLE_OpModeSet_2_34));
    mercury__map__lookup_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_12, ((MR_Box) ((MR_Integer) 19)), &conv2_GenStandaloneOption_13);
    GenStandaloneOption_13 = ((MR_Word) (conv2_GenStandaloneOption_13));
    (env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) GenStandaloneOption_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GenStandaloneOption_13, 0)))) == (MR_Integer) 2)));
    if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
    {
      MaybeBaseName_14 = ((MR_Word) ((MR_hl_field(3, GenStandaloneOption_13, 1))));
      if ((MaybeBaseName_14 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_OpModeSet_3_37 = STATE_VARIABLE_OpModeSet_2_34;
      else
      {
        MR_String BaseName_15 = ((MR_String) ((MR_hl_field(1, MaybeBaseName_14, 0))));
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (BaseName_15));
        }
        mercury__set__insert_3_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) (Var_36)), STATE_VARIABLE_OpModeSet_2_34, &STATE_VARIABLE_OpModeSet_3_37);
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
        mercury__set__delete_3_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_OpModeSet_3_37, &STATE_VARIABLE_OpModeSet_4_41);
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_OpModeSet_4_41 = STATE_VARIABLE_OpModeSet_3_37;
        break;
    }
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), STATE_VARIABLE_OpModeSet_4_41, &OpModes0_16);
    if ((OpModes0_16 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *OpMode_5 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[2])));
        MR_hl_field(3, base, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_9));
      }
      *OtherOpModes_6 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Var_68 = ((MR_Word) ((MR_hl_field(1, OpModes0_16, 1))));
      MR_Word Var_69 = ((MR_Word) ((MR_hl_field(1, OpModes0_16, 0))));

      if ((Var_68 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *OpMode_5 = Var_69;
        *OtherOpModes_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        (env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = mercury__set__member_2_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) ((MR_Unsigned) 0U)), STATE_VARIABLE_OpModeSet_4_41);
        if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
        {
          *OpMode_5 = (MR_Word) ((MR_Unsigned) 0U);
          *OtherOpModes_6 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word HeadFilteredOpMode_23;
          MR_Word TailFilteredOpModes_24;
          MR_Word FilteredOpModes_22;
          MR_Word Var_47;
          MR_Word STATE_VARIABLE_OpModeSet_5_48;
          MR_Word Var_51;

          {
            Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_47, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[3])));
            MR_hl_field(3, Var_47, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_9));
          }
          mercury__set__delete_3_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) (Var_47)), STATE_VARIABLE_OpModeSet_4_41, &STATE_VARIABLE_OpModeSet_5_48);
          {
            Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_51, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[5])));
            MR_hl_field(3, Var_51, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_9));
          }
          mercury__set__delete_3_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), ((MR_Box) (Var_51)), STATE_VARIABLE_OpModeSet_5_48, &(env).libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_6_52);
          libs__op_mode__decide_op_mode_3_p_0_5(&env);
          if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
          {
            mercury__set__to_sorted_list_2_p_0((MR_Word) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0), (env).libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_6_52, &FilteredOpModes_22);
            (env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = (FilteredOpModes_22 != (MR_Word) ((MR_Unsigned) 0U));
            if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
            {
              HeadFilteredOpMode_23 = ((MR_Word) ((MR_hl_field(1, FilteredOpModes_22, 0))));
              TailFilteredOpModes_24 = ((MR_Word) ((MR_hl_field(1, FilteredOpModes_22, 1))));
            }
          }
          if ((env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
          {
            *OpMode_5 = HeadFilteredOpMode_23;
            *OtherOpModes_6 = TailFilteredOpModes_24;
          }
          else
          {
            *OpMode_5 = ((MR_Word) ((MR_hl_field(1, OpModes0_16, 0))));
            *OtherOpModes_6 = ((MR_Word) ((MR_hl_field(1, OpModes0_16, 1))));
          }
        }
      }
    }
  }
}

static MR_Word MR_CALL 
libs__op_mode__bool_op_modes_2_f_0(
  MR_Word InvokedByMMCMake_4,
  MR_Word MaybeListOptOptsUpto_5)
{
  MR_Word HeadVar__3_3;
  MR_Word Var_9;
  MR_Word Var_13;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Word Var_27;
  MR_Word Var_32;
  MR_Word Var_37;
  MR_Word Var_42;
  MR_Word Var_47;
  MR_Word Var_52;
  MR_Word Var_57;
  MR_Word Var_62;
  MR_Word Var_67;
  MR_Word Var_72;
  MR_Word Var_77;
  MR_Word Var_82;
  MR_Word Var_87;
  MR_Word Var_92;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_105;
  MR_Word Var_108;
  MR_Word Var_109;
  MR_Word Var_111;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_117;
  MR_Word Var_119;
  MR_Word Var_120;
  MR_Word Var_122;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_128;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_134;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_140;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_145;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word Var_151;
  MR_Word Var_154;
  MR_Word Var_155;
  MR_Word Var_157;
  MR_Word Var_160;
  MR_Word Var_161;
  MR_Word Var_163;
  MR_Word Var_166;
  MR_Word Var_167;
  MR_Word Var_169;
  MR_Word Var_172;
  MR_Word Var_173;
  MR_Word Var_175;
  MR_Word Var_179;
  MR_Word Var_180;
  MR_Word Var_182;
  MR_Word Var_186;
  MR_Word Var_187;
  MR_Word Var_189;

  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (MaybeListOptOptsUpto_5));
  }
  {
    Var_100 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_100, 0) = ((MR_Box) (Var_101));
  }
  {
    Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_98, 0) = ((MR_Box) ((MR_Integer) 42));
    MR_hl_field(0, Var_98, 1) = ((MR_Box) (Var_100));
  }
  {
    Var_105 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_105, 0) = ((MR_Box) (MR_mkword(1, &libs__op_mode_scalar_common_3[4])));
    MR_hl_field(3, Var_105, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_103 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_103, 0) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(0, Var_103, 1) = ((MR_Box) (Var_105));
  }
  {
    Var_111 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_111, 0) = ((MR_Box) (MR_mkword(1, &libs__op_mode_scalar_common_3[0])));
    MR_hl_field(3, Var_111, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_109 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_109, 0) = ((MR_Box) ((MR_Integer) 8));
    MR_hl_field(0, Var_109, 1) = ((MR_Box) (Var_111));
  }
  {
    Var_117 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_117, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_117, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_115 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_115, 0) = ((MR_Box) ((MR_Integer) 9));
    MR_hl_field(0, Var_115, 1) = ((MR_Box) (Var_117));
  }
  {
    Var_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_122, 0) = ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[4])));
    MR_hl_field(3, Var_122, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_120 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_120, 0) = ((MR_Box) ((MR_Integer) 11));
    MR_hl_field(0, Var_120, 1) = ((MR_Box) (Var_122));
  }
  {
    Var_128 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_128, 0) = ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[22])));
    MR_hl_field(3, Var_128, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_126, 0) = ((MR_Box) ((MR_Integer) 10));
    MR_hl_field(0, Var_126, 1) = ((MR_Box) (Var_128));
  }
  {
    Var_134 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_134, 0) = ((MR_Box) (MR_mkword(2, &libs__op_mode_scalar_common_3[0])));
    MR_hl_field(3, Var_134, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_132 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_132, 0) = ((MR_Box) ((MR_Integer) 12));
    MR_hl_field(0, Var_132, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_140 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_140, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, Var_140, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_138, 0) = ((MR_Box) ((MR_Integer) 20));
    MR_hl_field(0, Var_138, 1) = ((MR_Box) (Var_140));
  }
  {
    Var_145 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_145, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[23])));
    MR_hl_field(3, Var_145, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_143 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_143, 0) = ((MR_Box) ((MR_Integer) 13));
    MR_hl_field(0, Var_143, 1) = ((MR_Box) (Var_145));
  }
  {
    Var_151 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_151, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[24])));
    MR_hl_field(3, Var_151, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_149, 0) = ((MR_Box) ((MR_Integer) 14));
    MR_hl_field(0, Var_149, 1) = ((MR_Box) (Var_151));
  }
  {
    Var_157 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_157, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[25])));
    MR_hl_field(3, Var_157, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_155, 0) = ((MR_Box) ((MR_Integer) 22));
    MR_hl_field(0, Var_155, 1) = ((MR_Box) (Var_157));
  }
  {
    Var_163 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_163, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[26])));
    MR_hl_field(3, Var_163, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_161 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_161, 0) = ((MR_Box) ((MR_Integer) 21));
    MR_hl_field(0, Var_161, 1) = ((MR_Box) (Var_163));
  }
  {
    Var_169 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_169, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[3])));
    MR_hl_field(3, Var_169, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_167 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_167, 0) = ((MR_Box) ((MR_Integer) 15));
    MR_hl_field(0, Var_167, 1) = ((MR_Box) (Var_169));
  }
  {
    Var_175 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_175, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[5])));
    MR_hl_field(3, Var_175, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_173 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_173, 0) = ((MR_Box) ((MR_Integer) 16));
    MR_hl_field(0, Var_173, 1) = ((MR_Box) (Var_175));
  }
  {
    Var_182 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_182, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[27])));
    MR_hl_field(3, Var_182, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_180 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_180, 0) = ((MR_Box) ((MR_Integer) 17));
    MR_hl_field(0, Var_180, 1) = ((MR_Box) (Var_182));
  }
  {
    Var_189 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_189, 0) = ((MR_Box) (MR_mkword(3, &libs__op_mode_scalar_common_3[28])));
    MR_hl_field(3, Var_189, 1) = (MR_Box) ((MR_Unsigned) (InvokedByMMCMake_4));
  }
  {
    Var_187 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_187, 0) = ((MR_Box) ((MR_Integer) 18));
    MR_hl_field(0, Var_187, 1) = ((MR_Box) (Var_189));
  }
  {
    Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_186, 0) = ((MR_Box) (Var_187));
    MR_hl_field(1, Var_186, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_179, 0) = ((MR_Box) (Var_180));
    MR_hl_field(1, Var_179, 1) = ((MR_Box) (Var_186));
  }
  {
    Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_172, 0) = ((MR_Box) (Var_173));
    MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_179));
  }
  {
    Var_166 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_166, 0) = ((MR_Box) (Var_167));
    MR_hl_field(1, Var_166, 1) = ((MR_Box) (Var_172));
  }
  {
    Var_160 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_160, 0) = ((MR_Box) (Var_161));
    MR_hl_field(1, Var_160, 1) = ((MR_Box) (Var_166));
  }
  {
    Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
    MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_160));
  }
  {
    Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_148, 0) = ((MR_Box) (Var_149));
    MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_154));
  }
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (Var_143));
    MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_148));
  }
  {
    Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_137, 0) = ((MR_Box) (Var_138));
    MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_142));
  }
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (Var_132));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_137));
  }
  {
    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_125, 0) = ((MR_Box) (Var_126));
    MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_131));
  }
  {
    Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
    MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_125));
  }
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (Var_115));
    MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_119));
  }
  {
    Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_108, 0) = ((MR_Box) (Var_109));
    MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_114));
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (Var_103));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_108));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_102));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[20]));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_97));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[19]));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_92));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[18]));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_87));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[17]));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_82));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[16]));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_77));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[15]));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[14]));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[13]));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[12]));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[11]));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[10]));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[9]));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[8]));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_37));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[7]));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[6]));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_27));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[5]));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[4]));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_17));
  }
  {
    Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_9, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[3]));
    MR_hl_field(1, Var_9, 1) = ((MR_Box) (Var_13));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (&libs__op_mode_scalar_common_2[2]));
    MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_9));
  }
  return HeadVar__3_3;
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
libs__op_mode____Unify____op_mode_front_and_middle_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__op_mode____Unify____op_mode_front_and_middle_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__op_mode____Compare____op_mode_front_and_middle_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__op_mode____Compare____op_mode_front_and_middle_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
  MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_front_and_middle_0);
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
