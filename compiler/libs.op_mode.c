/*
** Automatically generated from `op_mode.m'
** by the Mercury compiler,
** version DEV
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



#line 103 "op_mode.m"
struct libs__op_mode__decide_op_mode_3_p_0_env_0_s {
#line 127 "op_mode.m"
  MR_bool libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded;
#line 127 "op_mode.m"
  MR_Word libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_61_61;
#line 187 "op_mode.m"
  MR_Word libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_40_40;
#line 192 "op_mode.m"
  jmp_buf libs__op_mode__decide_op_mode_3_p_0_env_0__commit_0;
#line 192 "op_mode.m"
  MR_Word libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_53;
#line 192 "op_mode.m"
  MR_Box libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_53;
#line 103 "op_mode.m"
};


#line 84 "libs.op_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

#line 87 "libs.op_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_libs__op_mode__type_ctor_info_op_mode_0;

#line 90 "libs.op_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__op_mode__set_ordlist__pti_set_ordlist_1__plain_libs__op_mode__type_ctor_info_op_mode_0;

#line 93 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_0;

#line 96 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_1;

#line 99 "libs.op_mode.c"
static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_2[1];

#line 102 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_2;

#line 105 "libs.op_mode.c"
static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_3[1];

#line 108 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_3;

#line 111 "libs.op_mode.c"
static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_4[1];

#line 114 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4;

#line 117 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_0[2];

#line 120 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_1[1];

#line 123 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_2[1];

#line 126 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_3[1];

#line 129 "libs.op_mode.c"
static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_0[4];

#line 132 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_0[5];

#line 135 "libs.op_mode.c"
static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_0[5];

#line 138 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0;

#line 141 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_1;

#line 144 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_2;

#line 147 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_3;

#line 150 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4;

#line 153 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_5;

#line 156 "libs.op_mode.c"
static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_6[1];

#line 159 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_6;

#line 162 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_0[6];

#line 165 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_1[1];

#line 168 "libs.op_mode.c"
static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_args_0[2];

#line 171 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_args_0[7];

#line 174 "libs.op_mode.c"
static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_args_0[7];

#line 177 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_0;

#line 180 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_1;

#line 183 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_2;

#line 186 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_3;

#line 189 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_4;

#line 192 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_5;

#line 195 "libs.op_mode.c"
static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_augment_0_6[1];

#line 198 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_6;

#line 201 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_0[6];

#line 204 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_1[1];

#line 207 "libs.op_mode.c"
static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_augment_0[2];

#line 210 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_augment_0[7];

#line 213 "libs.op_mode.c"
static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_augment_0[7];

#line 216 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_0;

#line 219 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_1;

#line 222 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_2;

#line 225 "libs.op_mode.c"
static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_codegen_0[3];

#line 228 "libs.op_mode.c"
static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_codegen_0[3];

#line 231 "libs.op_mode.c"
static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_codegen_0[3];

#line 234 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_0;

#line 237 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_1;

#line 240 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_2;

#line 243 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_3;

#line 246 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_4;

#line 249 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_5;

#line 252 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_6;

#line 255 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_7;

#line 258 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_8;

#line 261 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_9;

#line 264 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_10;

#line 267 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_11;

#line 270 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_12;

#line 273 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_13;

#line 276 "libs.op_mode.c"
static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_query_0[14];

#line 279 "libs.op_mode.c"
static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_query_0[14];

#line 282 "libs.op_mode.c"
static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_query_0[14];

#line 285 "libs.op_mode.c"
static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_0_0_10001(
#line 288 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_1,
#line 290 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2);

#line 293 "libs.op_mode.c"
static void MR_CALL 
libs__op_mode____Compare____op_mode_0_0_10001(
#line 296 "libs.op_mode.c"
  MR_Box * libs__op_mode__wrapper_arg_1,
#line 298 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2,
#line 300 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_3);

#line 303 "libs.op_mode.c"
static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_args_0_0_10001(
#line 306 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_1,
#line 308 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2);

#line 311 "libs.op_mode.c"
static void MR_CALL 
libs__op_mode____Compare____op_mode_args_0_0_10001(
#line 314 "libs.op_mode.c"
  MR_Box * libs__op_mode__wrapper_arg_1,
#line 316 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2,
#line 318 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_3);

#line 321 "libs.op_mode.c"
static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_augment_0_0_10001(
#line 324 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_1,
#line 326 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2);

#line 329 "libs.op_mode.c"
static void MR_CALL 
libs__op_mode____Compare____op_mode_augment_0_0_10001(
#line 332 "libs.op_mode.c"
  MR_Box * libs__op_mode__wrapper_arg_1,
#line 334 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2,
#line 336 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_3);

#line 339 "libs.op_mode.c"
static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_codegen_0_0_10001(
#line 342 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_1,
#line 344 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2);

#line 347 "libs.op_mode.c"
static void MR_CALL 
libs__op_mode____Compare____op_mode_codegen_0_0_10001(
#line 350 "libs.op_mode.c"
  MR_Box * libs__op_mode__wrapper_arg_1,
#line 352 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2,
#line 354 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_3);

#line 357 "libs.op_mode.c"
static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_query_0_0_10001(
#line 360 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_1,
#line 362 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2);

#line 365 "libs.op_mode.c"
static void MR_CALL 
libs__op_mode____Compare____op_mode_query_0_0_10001(
#line 368 "libs.op_mode.c"
  MR_Box * libs__op_mode__wrapper_arg_1,
#line 370 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2,
#line 372 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_3);

#line 266 "op_mode.m"
static MR_Word MR_CALL 
libs__op_mode__bool_op_modes_0_f_0(void);

#line 250 "op_mode.m"
static void MR_CALL 
libs__op_mode__gather_bool_op_mode_4_p_0(
#line 250 "op_mode.m"
  MR_Word libs__op_mode__OptionTable_5,
#line 250 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_2,
#line 250 "op_mode.m"
  MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_0_11,
#line 250 "op_mode.m"
  MR_Word * libs__op_mode__STATE_VARIABLE_OpModeSet_12);

#line 128 "op_mode.m"
static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_1(
#line 128 "op_mode.m"
  MR_Box libs__op_mode__closure_arg,
#line 128 "op_mode.m"
  MR_Box libs__op_mode__wrapper_arg_1,
#line 128 "op_mode.m"
  MR_Box libs__op_mode__wrapper_arg_2,
#line 128 "op_mode.m"
  MR_Box * libs__op_mode__wrapper_arg_3);

#line 192 "op_mode.m"
static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_2(
#line 192 "op_mode.m"
  void * libs__op_mode__env_ptr_arg);

#line 192 "op_mode.m"
static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_4(
#line 192 "op_mode.m"
  void * libs__op_mode__env_ptr_arg);

#line 192 "op_mode.m"
static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_3(
#line 192 "op_mode.m"
  void * libs__op_mode__env_ptr_arg);

#line 192 "op_mode.m"
static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_5(
#line 192 "op_mode.m"
  void * libs__op_mode__env_ptr_arg);


static /* final */ const MR_Box libs__op_mode_scalar_common_1[1][3];

static /* final */ const MR_Box libs__op_mode_scalar_common_2[61][2];

static /* final */ const MR_Box libs__op_mode_scalar_common_3[41][1];

static /* final */ const MR_Box libs__op_mode_scalar_common_4[1][7];


#line 358 "op_mode.m"
/* sealed */ struct libs__op_mode__vector_common_type_5_0_s {
#line 358 "op_mode.m"
  const MR_String libs__op_mode__vector_common_type_5_0__vct_5_f_0;
#line 358 "op_mode.m"
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

static /* final */ const MR_Box libs__op_mode_scalar_common_2[61][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 99)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[2])))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 98)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[5])))
  },
  /* row 4 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[2])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 97)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[7])))
  },
  /* row 6 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[4])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 96)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[9])))
  },
  /* row 8 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[7])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_Integer) 89)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[11])))
  },
  /* row 10 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[8])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_Integer) 88)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[13])))
  },
  /* row 12 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[11])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[10])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_Integer) 87)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[15])))
  },
  /* row 14 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[13])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[12])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_Integer) 86)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[17])))
  },
  /* row 16 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[14])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_Integer) 95)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[18])))
  },
  /* row 18 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_Integer) 84)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[19])))
  },
  /* row 20 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[18])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_Integer) 83)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[21])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[20])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_Integer) 85)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[23])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[22])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 91)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[22])))
  },
  /* row 26 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[25])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[24])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 92)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[23])))
  },
  /* row 28 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[27])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[26])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Integer) 113)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[24])))
  },
  /* row 30 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[28])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 104)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[25])))
  },
  /* row 32 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[31])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[30])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 101)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[26])))
  },
  /* row 34 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[33])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[32])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 114)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[27])))
  },
  /* row 36 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[35])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[34])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 110)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[28])))
  },
  /* row 38 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[37])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[36])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Integer) 103)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[29])))
  },
  /* row 40 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[39])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[38])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Integer) 102)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[30])))
  },
  /* row 42 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[40])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_Integer) 108)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[31])))
  },
  /* row 44 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[42])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Integer) 107)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[32])))
  },
  /* row 46 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[45])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[44])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Integer) 111)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[33])))
  },
  /* row 48 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[47])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[46])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Integer) 112)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[34])))
  },
  /* row 50 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[49])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[48])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Integer) 109)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[35])))
  },
  /* row 52 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[51])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[50])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_Integer) 106)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[36])))
  },
  /* row 54 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[53])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[52])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_Integer) 105)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &libs__op_mode_scalar_common_3[37])))
  },
  /* row 56 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[55])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[54])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_Integer) 90)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 58 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[57])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[56])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_Integer) 609)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 60 */
  {
    ((MR_Box) (&libs__op_mode_scalar_common_2[59])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[58])))
  },
};

static /* final */ const MR_Box libs__op_mode_scalar_common_3[41][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[10])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[16])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_Integer) 13))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_Integer) 12))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_Integer) 11))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Integer) 9))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_Integer) 6))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_Integer) 5))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 4))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[38])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_3[39])))
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



#line 970 "libs.op_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__tree234__pti_tree234_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

#line 979 "libs.op_mode.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__op_mode__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_libs__op_mode__type_ctor_info_op_mode_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &libs__options__libs__options__type_ctor_info_option_0,
    (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0
  }
};

#line 988 "libs.op_mode.c"
static const MR_FA_PseudoTypeInfo_Struct1 libs__op_mode__set_ordlist__pti_set_ordlist_1__plain_libs__op_mode__type_ctor_info_op_mode_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0
  }
};

#line 996 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_0 = {
  (MR_String) "opm_top_make",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1011 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_1 = {
  (MR_String) "opm_top_generate_source_file_mapping",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1026 "libs.op_mode.c"
static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1031 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_2 = {
  (MR_String) "opm_top_generate_standalone_interface",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  libs__op_mode__libs__op_mode__field_types_op_mode_0_2,
  NULL,
  NULL,
  NULL
};

#line 1046 "libs.op_mode.c"
static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_3[1] = {
  (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_query_0
};

#line 1051 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_3 = {
  (MR_String) "opm_top_query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  libs__op_mode__libs__op_mode__field_types_op_mode_0_3,
  NULL,
  NULL,
  NULL
};

#line 1066 "libs.op_mode.c"
static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_0_4[1] = {
  (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_args_0
};

#line 1071 "libs.op_mode.c"
static const MR_DuFunctorDesc libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4 = {
  (MR_String) "opm_top_args",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 4,
  libs__op_mode__libs__op_mode__field_types_op_mode_0_4,
  NULL,
  NULL,
  NULL
};

#line 1086 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_0[2] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_1
};

#line 1092 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_1[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_2
};

#line 1097 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_2[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_3
};

#line 1102 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_3[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4
};

#line 1107 "libs.op_mode.c"
static const MR_DuPtagLayout libs__op_mode__libs__op_mode__du_ptag_ordered_op_mode_0[4] = {
  {
    (MR_Integer) 2,
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
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_0_3
  }
};

#line 1131 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_0[5] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_4,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_0_3
};

#line 1140 "libs.op_mode.c"
static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 0
};

#line 1149 "libs.op_mode.c"
const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1166 "libs.op_mode.c"
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
  NULL
};

#line 1181 "libs.op_mode.c"
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
  NULL
};

#line 1196 "libs.op_mode.c"
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
  NULL
};

#line 1211 "libs.op_mode.c"
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
  NULL
};

#line 1226 "libs.op_mode.c"
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
  NULL
};

#line 1241 "libs.op_mode.c"
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
  NULL
};

#line 1256 "libs.op_mode.c"
static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_args_0_6[1] = {
  (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0
};

#line 1261 "libs.op_mode.c"
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
  NULL
};

#line 1276 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_0[6] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_3,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_5
};

#line 1286 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_args_0_1[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_6
};

#line 1291 "libs.op_mode.c"
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

#line 1305 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_args_0[7] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_6,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_5,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_4,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_args_0_3
};

#line 1316 "libs.op_mode.c"
static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_args_0[7] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1327 "libs.op_mode.c"
const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_args_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1344 "libs.op_mode.c"
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
  NULL
};

#line 1359 "libs.op_mode.c"
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
  NULL
};

#line 1374 "libs.op_mode.c"
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
  NULL
};

#line 1389 "libs.op_mode.c"
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
  NULL
};

#line 1404 "libs.op_mode.c"
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
  NULL
};

#line 1419 "libs.op_mode.c"
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
  NULL
};

#line 1434 "libs.op_mode.c"
static const MR_PseudoTypeInfo libs__op_mode__libs__op_mode__field_types_op_mode_augment_0_6[1] = {
  (MR_PseudoTypeInfo) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_codegen_0
};

#line 1439 "libs.op_mode.c"
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
  NULL
};

#line 1454 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_0[6] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_3,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_4,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_5
};

#line 1464 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_stag_ordered_op_mode_augment_0_1[1] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_6
};

#line 1469 "libs.op_mode.c"
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

#line 1483 "libs.op_mode.c"
static const MR_DuFunctorDescPtr libs__op_mode__libs__op_mode__du_name_ordered_op_mode_augment_0[7] = {
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_5,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_6,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_2,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_0,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_1,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_3,
  &libs__op_mode__libs__op_mode__du_functor_desc_op_mode_augment_0_4
};

#line 1494 "libs.op_mode.c"
static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_augment_0[7] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1505 "libs.op_mode.c"
const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_augment_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1522 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_0 = {
  (MR_String) "opmcg_target_code_only",
  (MR_Integer) 0
};

#line 1528 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_1 = {
  (MR_String) "opmcg_target_and_object_code_only",
  (MR_Integer) 1
};

#line 1534 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_2 = {
  (MR_String) "opmcg_target_object_and_executable",
  (MR_Integer) 2
};

#line 1540 "libs.op_mode.c"
static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_value_ordered_op_mode_codegen_0[3] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_2
};

#line 1547 "libs.op_mode.c"
static const MR_EnumFunctorDescPtr libs__op_mode__libs__op_mode__enum_name_ordered_op_mode_codegen_0[3] = {
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_1,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_0,
  &libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_codegen_0_2
};

#line 1554 "libs.op_mode.c"
static const MR_Integer libs__op_mode__libs__op_mode__functor_number_map_op_mode_codegen_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1561 "libs.op_mode.c"
const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_codegen_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1578 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_0 = {
  (MR_String) "opmq_output_cc",
  (MR_Integer) 0
};

#line 1584 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_1 = {
  (MR_String) "opmq_output_c_compiler_type",
  (MR_Integer) 1
};

#line 1590 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_2 = {
  (MR_String) "opmq_output_cflags",
  (MR_Integer) 2
};

#line 1596 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_3 = {
  (MR_String) "opmq_output_c_include_directory_flags",
  (MR_Integer) 3
};

#line 1602 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_4 = {
  (MR_String) "opmq_output_grade_defines",
  (MR_Integer) 4
};

#line 1608 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_5 = {
  (MR_String) "opmq_output_csharp_compiler",
  (MR_Integer) 5
};

#line 1614 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_6 = {
  (MR_String) "opmq_output_csharp_compiler_type",
  (MR_Integer) 6
};

#line 1620 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_7 = {
  (MR_String) "opmq_output_link_command",
  (MR_Integer) 7
};

#line 1626 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_8 = {
  (MR_String) "opmq_output_shared_lib_link_command",
  (MR_Integer) 8
};

#line 1632 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_9 = {
  (MR_String) "opmq_output_library_link_flags",
  (MR_Integer) 9
};

#line 1638 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_10 = {
  (MR_String) "opmq_output_class_dir",
  (MR_Integer) 10
};

#line 1644 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_11 = {
  (MR_String) "opmq_output_grade_string",
  (MR_Integer) 11
};

#line 1650 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_12 = {
  (MR_String) "opmq_output_libgrades",
  (MR_Integer) 12
};

#line 1656 "libs.op_mode.c"
static const MR_EnumFunctorDesc libs__op_mode__libs__op_mode__enum_functor_desc_op_mode_query_0_13 = {
  (MR_String) "opmq_output_target_arch",
  (MR_Integer) 13
};

#line 1662 "libs.op_mode.c"
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

#line 1680 "libs.op_mode.c"
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

#line 1698 "libs.op_mode.c"
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

#line 1716 "libs.op_mode.c"
const MR_TypeCtorInfo_Struct libs__op_mode__libs__op_mode__type_ctor_info_op_mode_query_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1733 "libs.op_mode.c"
static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_0_0_10001(
#line 1736 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_1,
#line 1738 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2)
#line 1740 "libs.op_mode.c"
{
#line 1742 "libs.op_mode.c"
  {
#line 1744 "libs.op_mode.c"
    MR_bool libs__op_mode__succeeded;

#line 1747 "libs.op_mode.c"
    {
#line 1749 "libs.op_mode.c"
      libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_0_0(((MR_Word) libs__op_mode__wrapper_arg_1), ((MR_Word) libs__op_mode__wrapper_arg_2));
    }
#line 1752 "libs.op_mode.c"
    return libs__op_mode__succeeded;
#line 1754 "libs.op_mode.c"
  }
#line 1756 "libs.op_mode.c"
}

#line 1759 "libs.op_mode.c"
static void MR_CALL 
libs__op_mode____Compare____op_mode_0_0_10001(
#line 1762 "libs.op_mode.c"
  MR_Box * libs__op_mode__wrapper_arg_1,
#line 1764 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2,
#line 1766 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_3)
#line 1768 "libs.op_mode.c"
{
#line 1770 "libs.op_mode.c"
  {
#line 1772 "libs.op_mode.c"
    MR_Word libs__op_mode__conv0_HeadVar__1_1;

#line 1775 "libs.op_mode.c"
    {
#line 1777 "libs.op_mode.c"
      libs__op_mode____Compare____op_mode_0_0(&libs__op_mode__conv0_HeadVar__1_1, ((MR_Word) libs__op_mode__wrapper_arg_2), ((MR_Word) libs__op_mode__wrapper_arg_3));
    }
#line 1780 "libs.op_mode.c"
    *libs__op_mode__wrapper_arg_1 = ((MR_Box) (libs__op_mode__conv0_HeadVar__1_1));
#line 1782 "libs.op_mode.c"
  }
#line 1784 "libs.op_mode.c"
}

#line 1787 "libs.op_mode.c"
static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_args_0_0_10001(
#line 1790 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_1,
#line 1792 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2)
#line 1794 "libs.op_mode.c"
{
#line 1796 "libs.op_mode.c"
  {
#line 1798 "libs.op_mode.c"
    MR_bool libs__op_mode__succeeded;

#line 1801 "libs.op_mode.c"
    {
#line 1803 "libs.op_mode.c"
      libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_args_0_0(((MR_Word) libs__op_mode__wrapper_arg_1), ((MR_Word) libs__op_mode__wrapper_arg_2));
    }
#line 1806 "libs.op_mode.c"
    return libs__op_mode__succeeded;
#line 1808 "libs.op_mode.c"
  }
#line 1810 "libs.op_mode.c"
}

#line 1813 "libs.op_mode.c"
static void MR_CALL 
libs__op_mode____Compare____op_mode_args_0_0_10001(
#line 1816 "libs.op_mode.c"
  MR_Box * libs__op_mode__wrapper_arg_1,
#line 1818 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2,
#line 1820 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_3)
#line 1822 "libs.op_mode.c"
{
#line 1824 "libs.op_mode.c"
  {
#line 1826 "libs.op_mode.c"
    MR_Word libs__op_mode__conv0_HeadVar__1_1;

#line 1829 "libs.op_mode.c"
    {
#line 1831 "libs.op_mode.c"
      libs__op_mode____Compare____op_mode_args_0_0(&libs__op_mode__conv0_HeadVar__1_1, ((MR_Word) libs__op_mode__wrapper_arg_2), ((MR_Word) libs__op_mode__wrapper_arg_3));
    }
#line 1834 "libs.op_mode.c"
    *libs__op_mode__wrapper_arg_1 = ((MR_Box) (libs__op_mode__conv0_HeadVar__1_1));
#line 1836 "libs.op_mode.c"
  }
#line 1838 "libs.op_mode.c"
}

#line 1841 "libs.op_mode.c"
static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_augment_0_0_10001(
#line 1844 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_1,
#line 1846 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2)
#line 1848 "libs.op_mode.c"
{
#line 1850 "libs.op_mode.c"
  {
#line 1852 "libs.op_mode.c"
    MR_bool libs__op_mode__succeeded;

#line 1855 "libs.op_mode.c"
    {
#line 1857 "libs.op_mode.c"
      libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_augment_0_0(((MR_Word) libs__op_mode__wrapper_arg_1), ((MR_Word) libs__op_mode__wrapper_arg_2));
    }
#line 1860 "libs.op_mode.c"
    return libs__op_mode__succeeded;
#line 1862 "libs.op_mode.c"
  }
#line 1864 "libs.op_mode.c"
}

#line 1867 "libs.op_mode.c"
static void MR_CALL 
libs__op_mode____Compare____op_mode_augment_0_0_10001(
#line 1870 "libs.op_mode.c"
  MR_Box * libs__op_mode__wrapper_arg_1,
#line 1872 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2,
#line 1874 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_3)
#line 1876 "libs.op_mode.c"
{
#line 1878 "libs.op_mode.c"
  {
#line 1880 "libs.op_mode.c"
    MR_Word libs__op_mode__conv0_HeadVar__1_1;

#line 1883 "libs.op_mode.c"
    {
#line 1885 "libs.op_mode.c"
      libs__op_mode____Compare____op_mode_augment_0_0(&libs__op_mode__conv0_HeadVar__1_1, ((MR_Word) libs__op_mode__wrapper_arg_2), ((MR_Word) libs__op_mode__wrapper_arg_3));
    }
#line 1888 "libs.op_mode.c"
    *libs__op_mode__wrapper_arg_1 = ((MR_Box) (libs__op_mode__conv0_HeadVar__1_1));
#line 1890 "libs.op_mode.c"
  }
#line 1892 "libs.op_mode.c"
}

#line 1895 "libs.op_mode.c"
static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_codegen_0_0_10001(
#line 1898 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_1,
#line 1900 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2)
#line 1902 "libs.op_mode.c"
{
#line 1904 "libs.op_mode.c"
  {
#line 1906 "libs.op_mode.c"
    MR_bool libs__op_mode__succeeded;

#line 1909 "libs.op_mode.c"
    {
#line 1911 "libs.op_mode.c"
      libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_codegen_0_0(((MR_Word) libs__op_mode__wrapper_arg_1), ((MR_Word) libs__op_mode__wrapper_arg_2));
    }
#line 1914 "libs.op_mode.c"
    return libs__op_mode__succeeded;
#line 1916 "libs.op_mode.c"
  }
#line 1918 "libs.op_mode.c"
}

#line 1921 "libs.op_mode.c"
static void MR_CALL 
libs__op_mode____Compare____op_mode_codegen_0_0_10001(
#line 1924 "libs.op_mode.c"
  MR_Box * libs__op_mode__wrapper_arg_1,
#line 1926 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2,
#line 1928 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_3)
#line 1930 "libs.op_mode.c"
{
#line 1932 "libs.op_mode.c"
  {
#line 1934 "libs.op_mode.c"
    MR_Word libs__op_mode__conv0_HeadVar__1_1;

#line 1937 "libs.op_mode.c"
    {
#line 1939 "libs.op_mode.c"
      libs__op_mode____Compare____op_mode_codegen_0_0(&libs__op_mode__conv0_HeadVar__1_1, ((MR_Word) libs__op_mode__wrapper_arg_2), ((MR_Word) libs__op_mode__wrapper_arg_3));
    }
#line 1942 "libs.op_mode.c"
    *libs__op_mode__wrapper_arg_1 = ((MR_Box) (libs__op_mode__conv0_HeadVar__1_1));
#line 1944 "libs.op_mode.c"
  }
#line 1946 "libs.op_mode.c"
}

#line 1949 "libs.op_mode.c"
static MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_query_0_0_10001(
#line 1952 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_1,
#line 1954 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2)
#line 1956 "libs.op_mode.c"
{
#line 1958 "libs.op_mode.c"
  {
#line 1960 "libs.op_mode.c"
    MR_bool libs__op_mode__succeeded;

#line 1963 "libs.op_mode.c"
    {
#line 1965 "libs.op_mode.c"
      libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_query_0_0(((MR_Word) libs__op_mode__wrapper_arg_1), ((MR_Word) libs__op_mode__wrapper_arg_2));
    }
#line 1968 "libs.op_mode.c"
    return libs__op_mode__succeeded;
#line 1970 "libs.op_mode.c"
  }
#line 1972 "libs.op_mode.c"
}

#line 1975 "libs.op_mode.c"
static void MR_CALL 
libs__op_mode____Compare____op_mode_query_0_0_10001(
#line 1978 "libs.op_mode.c"
  MR_Box * libs__op_mode__wrapper_arg_1,
#line 1980 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_2,
#line 1982 "libs.op_mode.c"
  MR_Box libs__op_mode__wrapper_arg_3)
#line 1984 "libs.op_mode.c"
{
#line 1986 "libs.op_mode.c"
  {
#line 1988 "libs.op_mode.c"
    MR_Word libs__op_mode__conv0_HeadVar__1_1;

#line 1991 "libs.op_mode.c"
    {
#line 1993 "libs.op_mode.c"
      libs__op_mode____Compare____op_mode_query_0_0(&libs__op_mode__conv0_HeadVar__1_1, ((MR_Word) libs__op_mode__wrapper_arg_2), ((MR_Word) libs__op_mode__wrapper_arg_3));
    }
#line 1996 "libs.op_mode.c"
    *libs__op_mode__wrapper_arg_1 = ((MR_Box) (libs__op_mode__conv0_HeadVar__1_1));
#line 1998 "libs.op_mode.c"
  }
#line 2000 "libs.op_mode.c"
}

#line 42 "op_mode.m"
void MR_CALL 
libs__op_mode____Compare____op_mode_query_0_0(
#line 42 "op_mode.m"
  MR_Word * libs__op_mode__HeadVar__1_1,
#line 42 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_2,
#line 42 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__3_3)
#line 42 "op_mode.m"
{
#line 42 "op_mode.m"
  {
#line 42 "op_mode.m"
    MR_bool libs__op_mode__succeeded;
#line 42 "op_mode.m"
    MR_Integer libs__op_mode__Cast_HeadVar1_4 = (MR_Integer) libs__op_mode__HeadVar__2_2;
#line 42 "op_mode.m"
    MR_Integer libs__op_mode__Cast_HeadVar2_5 = (MR_Integer) libs__op_mode__HeadVar__3_3;

#line 42 "op_mode.m"
    {
#line 42 "op_mode.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__op_mode__HeadVar__1_1, libs__op_mode__Cast_HeadVar1_4, libs__op_mode__Cast_HeadVar2_5);
    }
#line 42 "op_mode.m"
  }
#line 42 "op_mode.m"
}

#line 42 "op_mode.m"
MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_query_0_0(
#line 42 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_1,
#line 42 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_2)
#line 42 "op_mode.m"
{
#line 2042 "libs.op_mode.c"
  {
#line 2044 "libs.op_mode.c"
    MR_bool libs__op_mode__succeeded = (libs__op_mode__HeadVar__2_1 == libs__op_mode__HeadVar__2_2);

#line 2047 "libs.op_mode.c"
    return libs__op_mode__succeeded;
#line 2049 "libs.op_mode.c"
  }
#line 42 "op_mode.m"
}

#line 94 "op_mode.m"
void MR_CALL 
libs__op_mode____Compare____op_mode_codegen_0_0(
#line 94 "op_mode.m"
  MR_Word * libs__op_mode__HeadVar__1_1,
#line 94 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_2,
#line 94 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__3_3)
#line 94 "op_mode.m"
{
#line 94 "op_mode.m"
  {
#line 94 "op_mode.m"
    MR_bool libs__op_mode__succeeded;
#line 94 "op_mode.m"
    MR_Integer libs__op_mode__Cast_HeadVar1_4 = (MR_Integer) libs__op_mode__HeadVar__2_2;
#line 94 "op_mode.m"
    MR_Integer libs__op_mode__Cast_HeadVar2_5 = (MR_Integer) libs__op_mode__HeadVar__3_3;

#line 94 "op_mode.m"
    {
#line 94 "op_mode.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__op_mode__HeadVar__1_1, libs__op_mode__Cast_HeadVar1_4, libs__op_mode__Cast_HeadVar2_5);
    }
#line 94 "op_mode.m"
  }
#line 94 "op_mode.m"
}

#line 94 "op_mode.m"
MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_codegen_0_0(
#line 94 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_1,
#line 94 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_2)
#line 94 "op_mode.m"
{
#line 2093 "libs.op_mode.c"
  {
#line 2095 "libs.op_mode.c"
    MR_bool libs__op_mode__succeeded = (libs__op_mode__HeadVar__2_1 == libs__op_mode__HeadVar__2_2);

#line 2098 "libs.op_mode.c"
    return libs__op_mode__succeeded;
#line 2100 "libs.op_mode.c"
  }
#line 94 "op_mode.m"
}

#line 81 "op_mode.m"
void MR_CALL 
libs__op_mode____Compare____op_mode_augment_0_0(
#line 81 "op_mode.m"
  MR_Word * libs__op_mode__HeadVar__1_1,
#line 81 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_2,
#line 81 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__3_3)
#line 81 "op_mode.m"
{
#line 81 "op_mode.m"
  {
#line 81 "op_mode.m"
    MR_bool libs__op_mode__succeeded;
#line 81 "op_mode.m"
    MR_Integer libs__op_mode__CastX_18 = (MR_Integer) libs__op_mode__HeadVar__2_2;
#line 81 "op_mode.m"
    MR_Integer libs__op_mode__CastY_19 = (MR_Integer) libs__op_mode__HeadVar__3_3;

#line 81 "op_mode.m"
    libs__op_mode__succeeded = (libs__op_mode__CastX_18 == libs__op_mode__CastY_19);
#line 81 "op_mode.m"
    if (libs__op_mode__succeeded)
#line 2129 "libs.op_mode.c"
      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "op_mode.m"
    else
#line 81 "op_mode.m"
#line 81 "op_mode.m"
      switch (MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) {
#line 81 "op_mode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
        case (MR_Integer) 0:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
          switch (MR_unmkbody(libs__op_mode__HeadVar__2_2)) {
#line 81 "op_mode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
            case (MR_Integer) 0:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
                case (MR_Integer) 0:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
                    case (MR_Integer) 0:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 1:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 2:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 3:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 4:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 5:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                  }
#line 81 "op_mode.m"
                  break;
#line 81 "op_mode.m"
                case (MR_Integer) 1:
#line 2201 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                  break;
#line 81 "op_mode.m"
              }
#line 81 "op_mode.m"
              break;
#line 81 "op_mode.m"
            case (MR_Integer) 1:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
                case (MR_Integer) 0:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
                    case (MR_Integer) 0:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 1:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 2:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 3:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 4:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 5:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                  }
#line 81 "op_mode.m"
                  break;
#line 81 "op_mode.m"
                case (MR_Integer) 1:
#line 2265 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                  break;
#line 81 "op_mode.m"
              }
#line 81 "op_mode.m"
              break;
#line 81 "op_mode.m"
            case (MR_Integer) 2:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
                case (MR_Integer) 0:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
                    case (MR_Integer) 0:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 1:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 2:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 3:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 4:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 5:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                  }
#line 81 "op_mode.m"
                  break;
#line 81 "op_mode.m"
                case (MR_Integer) 1:
#line 2329 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                  break;
#line 81 "op_mode.m"
              }
#line 81 "op_mode.m"
              break;
#line 81 "op_mode.m"
            case (MR_Integer) 3:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
                case (MR_Integer) 0:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
                    case (MR_Integer) 0:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 1:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 2:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 3:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 4:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 5:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                  }
#line 81 "op_mode.m"
                  break;
#line 81 "op_mode.m"
                case (MR_Integer) 1:
#line 2393 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                  break;
#line 81 "op_mode.m"
              }
#line 81 "op_mode.m"
              break;
#line 81 "op_mode.m"
            case (MR_Integer) 4:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
                case (MR_Integer) 0:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
                    case (MR_Integer) 0:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 1:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 2:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 3:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 4:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 5:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                  }
#line 81 "op_mode.m"
                  break;
#line 81 "op_mode.m"
                case (MR_Integer) 1:
#line 2457 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                  break;
#line 81 "op_mode.m"
              }
#line 81 "op_mode.m"
              break;
#line 81 "op_mode.m"
            case (MR_Integer) 5:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
                case (MR_Integer) 0:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
                    case (MR_Integer) 0:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 1:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 2:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 3:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 4:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                    case (MR_Integer) 5:
#line 81 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 81 "op_mode.m"
                      break;
#line 81 "op_mode.m"
                  }
#line 81 "op_mode.m"
                  break;
#line 81 "op_mode.m"
                case (MR_Integer) 1:
#line 2521 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 81 "op_mode.m"
                  break;
#line 81 "op_mode.m"
              }
#line 81 "op_mode.m"
              break;
#line 81 "op_mode.m"
          }
#line 81 "op_mode.m"
          break;
#line 81 "op_mode.m"
        case (MR_Integer) 1:
#line 81 "op_mode.m"
          {
#line 81 "op_mode.m"
            MR_Word libs__op_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));

#line 81 "op_mode.m"
#line 81 "op_mode.m"
            switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
              case (MR_Integer) 0:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
                switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 81 "op_mode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
                  case (MR_Integer) 0:
#line 2554 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                    break;
#line 81 "op_mode.m"
                  case (MR_Integer) 1:
#line 2560 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                    break;
#line 81 "op_mode.m"
                  case (MR_Integer) 2:
#line 2566 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                    break;
#line 81 "op_mode.m"
                  case (MR_Integer) 3:
#line 2572 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                    break;
#line 81 "op_mode.m"
                  case (MR_Integer) 4:
#line 2578 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                    break;
#line 81 "op_mode.m"
                  case (MR_Integer) 5:
#line 2584 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 81 "op_mode.m"
                    break;
#line 81 "op_mode.m"
                }
#line 81 "op_mode.m"
                break;
#line 81 "op_mode.m"
              case (MR_Integer) 1:
#line 81 "op_mode.m"
                {
#line 81 "op_mode.m"
                  MR_Word libs__op_mode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 81 "op_mode.m"
                  MR_Integer libs__op_mode__V_22_22 = (MR_Integer) libs__op_mode__V_21_21;
#line 81 "op_mode.m"
                  MR_Integer libs__op_mode__V_23_23 = (MR_Integer) libs__op_mode__V_17_17;

#line 81 "op_mode.m"
                  {
#line 81 "op_mode.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(libs__op_mode__HeadVar__1_1, libs__op_mode__V_22_22, libs__op_mode__V_23_23);
                  }
#line 81 "op_mode.m"
                }
#line 81 "op_mode.m"
                break;
#line 81 "op_mode.m"
            }
#line 81 "op_mode.m"
          }
#line 81 "op_mode.m"
          break;
#line 81 "op_mode.m"
      }
#line 81 "op_mode.m"
  }
#line 81 "op_mode.m"
}

#line 81 "op_mode.m"
MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_augment_0_0(
#line 81 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__1_1,
#line 81 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_2)
#line 81 "op_mode.m"
{
#line 81 "op_mode.m"
  {
#line 81 "op_mode.m"
    MR_bool libs__op_mode__succeeded;
#line 81 "op_mode.m"
    MR_Integer libs__op_mode__CastX_17 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 81 "op_mode.m"
    MR_Integer libs__op_mode__CastY_18 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 81 "op_mode.m"
    libs__op_mode__succeeded = (libs__op_mode__CastX_17 == libs__op_mode__CastY_18);
#line 81 "op_mode.m"
    if (libs__op_mode__succeeded)
#line 81 "op_mode.m"
      libs__op_mode__succeeded = MR_TRUE;
#line 81 "op_mode.m"
    else
#line 81 "op_mode.m"
#line 81 "op_mode.m"
      switch (MR_tag((MR_Word) libs__op_mode__HeadVar__1_1)) {
#line 81 "op_mode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
        case (MR_Integer) 0:
#line 81 "op_mode.m"
#line 81 "op_mode.m"
          switch (MR_unmkbody(libs__op_mode__HeadVar__1_1)) {
#line 81 "op_mode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 81 "op_mode.m"
            case (MR_Integer) 0:
#line 81 "op_mode.m"
              {
#line 81 "op_mode.m"
                MR_Integer libs__op_mode__CastX_3 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 81 "op_mode.m"
                MR_Integer libs__op_mode__CastY_4 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 81 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_4 == libs__op_mode__CastX_3);
#line 81 "op_mode.m"
              }
#line 81 "op_mode.m"
              break;
#line 81 "op_mode.m"
            case (MR_Integer) 1:
#line 81 "op_mode.m"
              {
#line 81 "op_mode.m"
                MR_Integer libs__op_mode__CastX_5 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 81 "op_mode.m"
                MR_Integer libs__op_mode__CastY_6 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 81 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_6 == libs__op_mode__CastX_5);
#line 81 "op_mode.m"
              }
#line 81 "op_mode.m"
              break;
#line 81 "op_mode.m"
            case (MR_Integer) 2:
#line 81 "op_mode.m"
              {
#line 81 "op_mode.m"
                MR_Integer libs__op_mode__CastX_7 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 81 "op_mode.m"
                MR_Integer libs__op_mode__CastY_8 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 81 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_8 == libs__op_mode__CastX_7);
#line 81 "op_mode.m"
              }
#line 81 "op_mode.m"
              break;
#line 81 "op_mode.m"
            case (MR_Integer) 3:
#line 81 "op_mode.m"
              {
#line 81 "op_mode.m"
                MR_Integer libs__op_mode__CastX_9 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 81 "op_mode.m"
                MR_Integer libs__op_mode__CastY_10 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 81 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_10 == libs__op_mode__CastX_9);
#line 81 "op_mode.m"
              }
#line 81 "op_mode.m"
              break;
#line 81 "op_mode.m"
            case (MR_Integer) 4:
#line 81 "op_mode.m"
              {
#line 81 "op_mode.m"
                MR_Integer libs__op_mode__CastX_11 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 81 "op_mode.m"
                MR_Integer libs__op_mode__CastY_12 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 81 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_12 == libs__op_mode__CastX_11);
#line 81 "op_mode.m"
              }
#line 81 "op_mode.m"
              break;
#line 81 "op_mode.m"
            case (MR_Integer) 5:
#line 81 "op_mode.m"
              {
#line 81 "op_mode.m"
                MR_Integer libs__op_mode__CastX_13 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 81 "op_mode.m"
                MR_Integer libs__op_mode__CastY_14 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 81 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_14 == libs__op_mode__CastX_13);
#line 81 "op_mode.m"
              }
#line 81 "op_mode.m"
              break;
#line 81 "op_mode.m"
          }
#line 81 "op_mode.m"
          break;
#line 81 "op_mode.m"
        case (MR_Integer) 1:
#line 81 "op_mode.m"
          {
#line 81 "op_mode.m"
            MR_Word libs__op_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 81 "op_mode.m"
            MR_Word libs__op_mode__V_16_16;

#line 81 "op_mode.m"
            libs__op_mode__succeeded = ((MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 81 "op_mode.m"
            if (libs__op_mode__succeeded)
#line 81 "op_mode.m"
              {
#line 81 "op_mode.m"
                libs__op_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 2774 "libs.op_mode.c"
                libs__op_mode__succeeded = (libs__op_mode__V_15_15 == libs__op_mode__V_16_16);
#line 81 "op_mode.m"
              }
#line 81 "op_mode.m"
          }
#line 81 "op_mode.m"
          break;
#line 81 "op_mode.m"
      }
#line 81 "op_mode.m"
    return libs__op_mode__succeeded;
#line 81 "op_mode.m"
  }
#line 81 "op_mode.m"
}

#line 67 "op_mode.m"
void MR_CALL 
libs__op_mode____Compare____op_mode_args_0_0(
#line 67 "op_mode.m"
  MR_Word * libs__op_mode__HeadVar__1_1,
#line 67 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_2,
#line 67 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__3_3)
#line 67 "op_mode.m"
{
#line 67 "op_mode.m"
  {
#line 67 "op_mode.m"
    MR_bool libs__op_mode__succeeded;
#line 67 "op_mode.m"
    MR_Integer libs__op_mode__CastX_18 = (MR_Integer) libs__op_mode__HeadVar__2_2;
#line 67 "op_mode.m"
    MR_Integer libs__op_mode__CastY_19 = (MR_Integer) libs__op_mode__HeadVar__3_3;

#line 67 "op_mode.m"
    libs__op_mode__succeeded = (libs__op_mode__CastX_18 == libs__op_mode__CastY_19);
#line 67 "op_mode.m"
    if (libs__op_mode__succeeded)
#line 2815 "libs.op_mode.c"
      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "op_mode.m"
    else
#line 67 "op_mode.m"
#line 67 "op_mode.m"
      switch (MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) {
#line 67 "op_mode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
        case (MR_Integer) 0:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
          switch (MR_unmkbody(libs__op_mode__HeadVar__2_2)) {
#line 67 "op_mode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
            case (MR_Integer) 0:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
                case (MR_Integer) 0:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
                    case (MR_Integer) 0:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 1:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 2:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 3:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 4:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 5:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                  }
#line 67 "op_mode.m"
                  break;
#line 67 "op_mode.m"
                case (MR_Integer) 1:
#line 2887 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                  break;
#line 67 "op_mode.m"
              }
#line 67 "op_mode.m"
              break;
#line 67 "op_mode.m"
            case (MR_Integer) 1:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
                case (MR_Integer) 0:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
                    case (MR_Integer) 0:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 1:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 2:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 3:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 4:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 5:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                  }
#line 67 "op_mode.m"
                  break;
#line 67 "op_mode.m"
                case (MR_Integer) 1:
#line 2951 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                  break;
#line 67 "op_mode.m"
              }
#line 67 "op_mode.m"
              break;
#line 67 "op_mode.m"
            case (MR_Integer) 2:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
                case (MR_Integer) 0:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
                    case (MR_Integer) 0:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 1:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 2:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 3:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 4:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 5:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                  }
#line 67 "op_mode.m"
                  break;
#line 67 "op_mode.m"
                case (MR_Integer) 1:
#line 3015 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                  break;
#line 67 "op_mode.m"
              }
#line 67 "op_mode.m"
              break;
#line 67 "op_mode.m"
            case (MR_Integer) 3:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
                case (MR_Integer) 0:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
                    case (MR_Integer) 0:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 1:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 2:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 3:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 4:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 5:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                  }
#line 67 "op_mode.m"
                  break;
#line 67 "op_mode.m"
                case (MR_Integer) 1:
#line 3079 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                  break;
#line 67 "op_mode.m"
              }
#line 67 "op_mode.m"
              break;
#line 67 "op_mode.m"
            case (MR_Integer) 4:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
                case (MR_Integer) 0:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
                    case (MR_Integer) 0:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 1:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 2:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 3:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 4:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 5:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                  }
#line 67 "op_mode.m"
                  break;
#line 67 "op_mode.m"
                case (MR_Integer) 1:
#line 3143 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                  break;
#line 67 "op_mode.m"
              }
#line 67 "op_mode.m"
              break;
#line 67 "op_mode.m"
            case (MR_Integer) 5:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
                case (MR_Integer) 0:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
                    case (MR_Integer) 0:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 1:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 2:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 3:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 4:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                    case (MR_Integer) 5:
#line 67 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "op_mode.m"
                      break;
#line 67 "op_mode.m"
                  }
#line 67 "op_mode.m"
                  break;
#line 67 "op_mode.m"
                case (MR_Integer) 1:
#line 3207 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "op_mode.m"
                  break;
#line 67 "op_mode.m"
              }
#line 67 "op_mode.m"
              break;
#line 67 "op_mode.m"
          }
#line 67 "op_mode.m"
          break;
#line 67 "op_mode.m"
        case (MR_Integer) 1:
#line 67 "op_mode.m"
          {
#line 67 "op_mode.m"
            MR_Word libs__op_mode__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));

#line 67 "op_mode.m"
#line 67 "op_mode.m"
            switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
              case (MR_Integer) 0:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
                switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 67 "op_mode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
                  case (MR_Integer) 0:
#line 3240 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                    break;
#line 67 "op_mode.m"
                  case (MR_Integer) 1:
#line 3246 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                    break;
#line 67 "op_mode.m"
                  case (MR_Integer) 2:
#line 3252 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                    break;
#line 67 "op_mode.m"
                  case (MR_Integer) 3:
#line 3258 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                    break;
#line 67 "op_mode.m"
                  case (MR_Integer) 4:
#line 3264 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                    break;
#line 67 "op_mode.m"
                  case (MR_Integer) 5:
#line 3270 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "op_mode.m"
                    break;
#line 67 "op_mode.m"
                }
#line 67 "op_mode.m"
                break;
#line 67 "op_mode.m"
              case (MR_Integer) 1:
#line 67 "op_mode.m"
                {
#line 67 "op_mode.m"
                  MR_Word libs__op_mode__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)));

#line 67 "op_mode.m"
                  {
#line 67 "op_mode.m"
                    libs__op_mode____Compare____op_mode_augment_0_0(libs__op_mode__HeadVar__1_1, libs__op_mode__V_21_21, libs__op_mode__V_17_17);
                  }
#line 67 "op_mode.m"
                }
#line 67 "op_mode.m"
                break;
#line 67 "op_mode.m"
            }
#line 67 "op_mode.m"
          }
#line 67 "op_mode.m"
          break;
#line 67 "op_mode.m"
      }
#line 67 "op_mode.m"
  }
#line 67 "op_mode.m"
}

#line 67 "op_mode.m"
MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_args_0_0(
#line 67 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__1_1,
#line 67 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_2)
#line 67 "op_mode.m"
{
#line 67 "op_mode.m"
  {
#line 67 "op_mode.m"
    MR_bool libs__op_mode__succeeded;
#line 67 "op_mode.m"
    MR_Integer libs__op_mode__CastX_17 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 67 "op_mode.m"
    MR_Integer libs__op_mode__CastY_18 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 67 "op_mode.m"
    libs__op_mode__succeeded = (libs__op_mode__CastX_17 == libs__op_mode__CastY_18);
#line 67 "op_mode.m"
    if (libs__op_mode__succeeded)
#line 67 "op_mode.m"
      libs__op_mode__succeeded = MR_TRUE;
#line 67 "op_mode.m"
    else
#line 67 "op_mode.m"
#line 67 "op_mode.m"
      switch (MR_tag((MR_Word) libs__op_mode__HeadVar__1_1)) {
#line 67 "op_mode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
        case (MR_Integer) 0:
#line 67 "op_mode.m"
#line 67 "op_mode.m"
          switch (MR_unmkbody(libs__op_mode__HeadVar__1_1)) {
#line 67 "op_mode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 67 "op_mode.m"
            case (MR_Integer) 0:
#line 67 "op_mode.m"
              {
#line 67 "op_mode.m"
                MR_Integer libs__op_mode__CastX_3 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 67 "op_mode.m"
                MR_Integer libs__op_mode__CastY_4 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 67 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_4 == libs__op_mode__CastX_3);
#line 67 "op_mode.m"
              }
#line 67 "op_mode.m"
              break;
#line 67 "op_mode.m"
            case (MR_Integer) 1:
#line 67 "op_mode.m"
              {
#line 67 "op_mode.m"
                MR_Integer libs__op_mode__CastX_5 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 67 "op_mode.m"
                MR_Integer libs__op_mode__CastY_6 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 67 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_6 == libs__op_mode__CastX_5);
#line 67 "op_mode.m"
              }
#line 67 "op_mode.m"
              break;
#line 67 "op_mode.m"
            case (MR_Integer) 2:
#line 67 "op_mode.m"
              {
#line 67 "op_mode.m"
                MR_Integer libs__op_mode__CastX_7 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 67 "op_mode.m"
                MR_Integer libs__op_mode__CastY_8 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 67 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_8 == libs__op_mode__CastX_7);
#line 67 "op_mode.m"
              }
#line 67 "op_mode.m"
              break;
#line 67 "op_mode.m"
            case (MR_Integer) 3:
#line 67 "op_mode.m"
              {
#line 67 "op_mode.m"
                MR_Integer libs__op_mode__CastX_9 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 67 "op_mode.m"
                MR_Integer libs__op_mode__CastY_10 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 67 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_10 == libs__op_mode__CastX_9);
#line 67 "op_mode.m"
              }
#line 67 "op_mode.m"
              break;
#line 67 "op_mode.m"
            case (MR_Integer) 4:
#line 67 "op_mode.m"
              {
#line 67 "op_mode.m"
                MR_Integer libs__op_mode__CastX_11 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 67 "op_mode.m"
                MR_Integer libs__op_mode__CastY_12 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 67 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_12 == libs__op_mode__CastX_11);
#line 67 "op_mode.m"
              }
#line 67 "op_mode.m"
              break;
#line 67 "op_mode.m"
            case (MR_Integer) 5:
#line 67 "op_mode.m"
              {
#line 67 "op_mode.m"
                MR_Integer libs__op_mode__CastX_13 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 67 "op_mode.m"
                MR_Integer libs__op_mode__CastY_14 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 67 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_14 == libs__op_mode__CastX_13);
#line 67 "op_mode.m"
              }
#line 67 "op_mode.m"
              break;
#line 67 "op_mode.m"
          }
#line 67 "op_mode.m"
          break;
#line 67 "op_mode.m"
        case (MR_Integer) 1:
#line 67 "op_mode.m"
          {
#line 67 "op_mode.m"
            MR_Word libs__op_mode__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 67 "op_mode.m"
            MR_Word libs__op_mode__V_16_16;

#line 67 "op_mode.m"
            libs__op_mode__succeeded = ((MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 67 "op_mode.m"
            if (libs__op_mode__succeeded)
#line 67 "op_mode.m"
              {
#line 67 "op_mode.m"
                libs__op_mode__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 3456 "libs.op_mode.c"
                {
#line 3458 "libs.op_mode.c"
                  libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_augment_0_0(libs__op_mode__V_15_15, libs__op_mode__V_16_16);
                }
#line 67 "op_mode.m"
              }
#line 67 "op_mode.m"
          }
#line 67 "op_mode.m"
          break;
#line 67 "op_mode.m"
      }
#line 67 "op_mode.m"
    return libs__op_mode__succeeded;
#line 67 "op_mode.m"
  }
#line 67 "op_mode.m"
}

#line 32 "op_mode.m"
void MR_CALL 
libs__op_mode____Compare____op_mode_0_0(
#line 32 "op_mode.m"
  MR_Word * libs__op_mode__HeadVar__1_1,
#line 32 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_2,
#line 32 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__3_3)
#line 32 "op_mode.m"
{
#line 32 "op_mode.m"
  {
#line 32 "op_mode.m"
    MR_bool libs__op_mode__succeeded;
#line 32 "op_mode.m"
    MR_Integer libs__op_mode__CastX_34 = (MR_Integer) libs__op_mode__HeadVar__2_2;
#line 32 "op_mode.m"
    MR_Integer libs__op_mode__CastY_35 = (MR_Integer) libs__op_mode__HeadVar__3_3;

#line 32 "op_mode.m"
    libs__op_mode__succeeded = (libs__op_mode__CastX_34 == libs__op_mode__CastY_35);
#line 32 "op_mode.m"
    if (libs__op_mode__succeeded)
#line 3500 "libs.op_mode.c"
      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "op_mode.m"
    else
#line 32 "op_mode.m"
#line 32 "op_mode.m"
      switch (MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) {
#line 32 "op_mode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
        case (MR_Integer) 0:
#line 32 "op_mode.m"
#line 32 "op_mode.m"
          switch (MR_unmkbody(libs__op_mode__HeadVar__2_2)) {
#line 32 "op_mode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
            case (MR_Integer) 0:
#line 32 "op_mode.m"
#line 32 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 32 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
                case (MR_Integer) 0:
#line 32 "op_mode.m"
#line 32 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 32 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
                    case (MR_Integer) 0:
#line 32 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "op_mode.m"
                      break;
#line 32 "op_mode.m"
                    case (MR_Integer) 1:
#line 32 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "op_mode.m"
                      break;
#line 32 "op_mode.m"
                  }
#line 32 "op_mode.m"
                  break;
#line 32 "op_mode.m"
                case (MR_Integer) 1:
#line 3548 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "op_mode.m"
                  break;
#line 32 "op_mode.m"
                case (MR_Integer) 2:
#line 3554 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "op_mode.m"
                  break;
#line 32 "op_mode.m"
                case (MR_Integer) 3:
#line 3560 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "op_mode.m"
                  break;
#line 32 "op_mode.m"
              }
#line 32 "op_mode.m"
              break;
#line 32 "op_mode.m"
            case (MR_Integer) 1:
#line 32 "op_mode.m"
#line 32 "op_mode.m"
              switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 32 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
                case (MR_Integer) 0:
#line 32 "op_mode.m"
#line 32 "op_mode.m"
                  switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 32 "op_mode.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
                    case (MR_Integer) 0:
#line 32 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "op_mode.m"
                      break;
#line 32 "op_mode.m"
                    case (MR_Integer) 1:
#line 32 "op_mode.m"
                      *libs__op_mode__HeadVar__1_1 = (MR_Integer) 0;
#line 32 "op_mode.m"
                      break;
#line 32 "op_mode.m"
                  }
#line 32 "op_mode.m"
                  break;
#line 32 "op_mode.m"
                case (MR_Integer) 1:
#line 3600 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "op_mode.m"
                  break;
#line 32 "op_mode.m"
                case (MR_Integer) 2:
#line 3606 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "op_mode.m"
                  break;
#line 32 "op_mode.m"
                case (MR_Integer) 3:
#line 3612 "libs.op_mode.c"
                  *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "op_mode.m"
                  break;
#line 32 "op_mode.m"
              }
#line 32 "op_mode.m"
              break;
#line 32 "op_mode.m"
          }
#line 32 "op_mode.m"
          break;
#line 32 "op_mode.m"
        case (MR_Integer) 1:
#line 32 "op_mode.m"
          {
#line 32 "op_mode.m"
            MR_String libs__op_mode__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "op_mode.m"
#line 32 "op_mode.m"
            switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 32 "op_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
              case (MR_Integer) 0:
#line 32 "op_mode.m"
#line 32 "op_mode.m"
                switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 32 "op_mode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
                  case (MR_Integer) 0:
#line 3645 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "op_mode.m"
                    break;
#line 32 "op_mode.m"
                  case (MR_Integer) 1:
#line 3651 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "op_mode.m"
                    break;
#line 32 "op_mode.m"
                }
#line 32 "op_mode.m"
                break;
#line 32 "op_mode.m"
              case (MR_Integer) 1:
#line 32 "op_mode.m"
                {
#line 32 "op_mode.m"
                  MR_String libs__op_mode__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)));

#line 32 "op_mode.m"
                  {
#line 32 "op_mode.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(libs__op_mode__HeadVar__1_1, libs__op_mode__V_40_40, libs__op_mode__V_13_13);
                  }
#line 32 "op_mode.m"
                }
#line 32 "op_mode.m"
                break;
#line 32 "op_mode.m"
              case (MR_Integer) 2:
#line 3677 "libs.op_mode.c"
                *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "op_mode.m"
                break;
#line 32 "op_mode.m"
              case (MR_Integer) 3:
#line 3683 "libs.op_mode.c"
                *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "op_mode.m"
                break;
#line 32 "op_mode.m"
            }
#line 32 "op_mode.m"
          }
#line 32 "op_mode.m"
          break;
#line 32 "op_mode.m"
        case (MR_Integer) 2:
#line 32 "op_mode.m"
          {
#line 32 "op_mode.m"
            MR_Word libs__op_mode__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "op_mode.m"
#line 32 "op_mode.m"
            switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 32 "op_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
              case (MR_Integer) 0:
#line 32 "op_mode.m"
#line 32 "op_mode.m"
                switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 32 "op_mode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
                  case (MR_Integer) 0:
#line 3714 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "op_mode.m"
                    break;
#line 32 "op_mode.m"
                  case (MR_Integer) 1:
#line 3720 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "op_mode.m"
                    break;
#line 32 "op_mode.m"
                }
#line 32 "op_mode.m"
                break;
#line 32 "op_mode.m"
              case (MR_Integer) 1:
#line 3730 "libs.op_mode.c"
                *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "op_mode.m"
                break;
#line 32 "op_mode.m"
              case (MR_Integer) 2:
#line 32 "op_mode.m"
                {
#line 32 "op_mode.m"
                  MR_Word libs__op_mode__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)));
#line 32 "op_mode.m"
                  MR_Integer libs__op_mode__V_42_42 = (MR_Integer) libs__op_mode__V_41_41;
#line 32 "op_mode.m"
                  MR_Integer libs__op_mode__V_43_43 = (MR_Integer) libs__op_mode__V_23_23;

#line 32 "op_mode.m"
                  {
#line 32 "op_mode.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(libs__op_mode__HeadVar__1_1, libs__op_mode__V_42_42, libs__op_mode__V_43_43);
                  }
#line 32 "op_mode.m"
                }
#line 32 "op_mode.m"
                break;
#line 32 "op_mode.m"
              case (MR_Integer) 3:
#line 3756 "libs.op_mode.c"
                *libs__op_mode__HeadVar__1_1 = (MR_Integer) 1;
#line 32 "op_mode.m"
                break;
#line 32 "op_mode.m"
            }
#line 32 "op_mode.m"
          }
#line 32 "op_mode.m"
          break;
#line 32 "op_mode.m"
        case (MR_Integer) 3:
#line 32 "op_mode.m"
          {
#line 32 "op_mode.m"
            MR_Word libs__op_mode__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));

#line 32 "op_mode.m"
#line 32 "op_mode.m"
            switch (MR_tag((MR_Word) libs__op_mode__HeadVar__3_3)) {
#line 32 "op_mode.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
              case (MR_Integer) 0:
#line 32 "op_mode.m"
#line 32 "op_mode.m"
                switch (MR_unmkbody(libs__op_mode__HeadVar__3_3)) {
#line 32 "op_mode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
                  case (MR_Integer) 0:
#line 3787 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "op_mode.m"
                    break;
#line 32 "op_mode.m"
                  case (MR_Integer) 1:
#line 3793 "libs.op_mode.c"
                    *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "op_mode.m"
                    break;
#line 32 "op_mode.m"
                }
#line 32 "op_mode.m"
                break;
#line 32 "op_mode.m"
              case (MR_Integer) 1:
#line 3803 "libs.op_mode.c"
                *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "op_mode.m"
                break;
#line 32 "op_mode.m"
              case (MR_Integer) 2:
#line 3809 "libs.op_mode.c"
                *libs__op_mode__HeadVar__1_1 = (MR_Integer) 2;
#line 32 "op_mode.m"
                break;
#line 32 "op_mode.m"
              case (MR_Integer) 3:
#line 32 "op_mode.m"
                {
#line 32 "op_mode.m"
                  MR_Word libs__op_mode__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__3_3, (MR_Integer) 0)));

#line 32 "op_mode.m"
                  {
#line 32 "op_mode.m"
                    libs__op_mode____Compare____op_mode_args_0_0(libs__op_mode__HeadVar__1_1, libs__op_mode__V_39_39, libs__op_mode__V_33_33);
                  }
#line 32 "op_mode.m"
                }
#line 32 "op_mode.m"
                break;
#line 32 "op_mode.m"
            }
#line 32 "op_mode.m"
          }
#line 32 "op_mode.m"
          break;
#line 32 "op_mode.m"
      }
#line 32 "op_mode.m"
  }
#line 32 "op_mode.m"
}

#line 32 "op_mode.m"
MR_bool MR_CALL 
libs__op_mode____Unify____op_mode_0_0(
#line 32 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__1_1,
#line 32 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_2)
#line 32 "op_mode.m"
{
#line 32 "op_mode.m"
  {
#line 32 "op_mode.m"
    MR_bool libs__op_mode__succeeded;
#line 32 "op_mode.m"
    MR_Integer libs__op_mode__CastX_13 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 32 "op_mode.m"
    MR_Integer libs__op_mode__CastY_14 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 32 "op_mode.m"
    libs__op_mode__succeeded = (libs__op_mode__CastX_13 == libs__op_mode__CastY_14);
#line 32 "op_mode.m"
    if (libs__op_mode__succeeded)
#line 32 "op_mode.m"
      libs__op_mode__succeeded = MR_TRUE;
#line 32 "op_mode.m"
    else
#line 32 "op_mode.m"
#line 32 "op_mode.m"
      switch (MR_tag((MR_Word) libs__op_mode__HeadVar__1_1)) {
#line 32 "op_mode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
        case (MR_Integer) 0:
#line 32 "op_mode.m"
#line 32 "op_mode.m"
          switch (MR_unmkbody(libs__op_mode__HeadVar__1_1)) {
#line 32 "op_mode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 32 "op_mode.m"
            case (MR_Integer) 0:
#line 32 "op_mode.m"
              {
#line 32 "op_mode.m"
                MR_Integer libs__op_mode__CastX_3 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 32 "op_mode.m"
                MR_Integer libs__op_mode__CastY_4 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 32 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_4 == libs__op_mode__CastX_3);
#line 32 "op_mode.m"
              }
#line 32 "op_mode.m"
              break;
#line 32 "op_mode.m"
            case (MR_Integer) 1:
#line 32 "op_mode.m"
              {
#line 32 "op_mode.m"
                MR_Integer libs__op_mode__CastX_5 = (MR_Integer) libs__op_mode__HeadVar__1_1;
#line 32 "op_mode.m"
                MR_Integer libs__op_mode__CastY_6 = (MR_Integer) libs__op_mode__HeadVar__2_2;

#line 32 "op_mode.m"
                libs__op_mode__succeeded = (libs__op_mode__CastY_6 == libs__op_mode__CastX_5);
#line 32 "op_mode.m"
              }
#line 32 "op_mode.m"
              break;
#line 32 "op_mode.m"
          }
#line 32 "op_mode.m"
          break;
#line 32 "op_mode.m"
        case (MR_Integer) 1:
#line 32 "op_mode.m"
          {
#line 32 "op_mode.m"
            MR_String libs__op_mode__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "op_mode.m"
            MR_String libs__op_mode__V_8_8;

#line 32 "op_mode.m"
            libs__op_mode__succeeded = ((MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 32 "op_mode.m"
            if (libs__op_mode__succeeded)
#line 32 "op_mode.m"
              {
#line 32 "op_mode.m"
                libs__op_mode__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 3931 "libs.op_mode.c"
                libs__op_mode__succeeded = (strcmp(libs__op_mode__V_7_7, libs__op_mode__V_8_8) == 0);
#line 32 "op_mode.m"
              }
#line 32 "op_mode.m"
          }
#line 32 "op_mode.m"
          break;
#line 32 "op_mode.m"
        case (MR_Integer) 2:
#line 32 "op_mode.m"
          {
#line 32 "op_mode.m"
            MR_Word libs__op_mode__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__op_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "op_mode.m"
            MR_Word libs__op_mode__V_10_10;

#line 32 "op_mode.m"
            libs__op_mode__succeeded = ((MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 32 "op_mode.m"
            if (libs__op_mode__succeeded)
#line 32 "op_mode.m"
              {
#line 32 "op_mode.m"
                libs__op_mode__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 3956 "libs.op_mode.c"
                libs__op_mode__succeeded = (libs__op_mode__V_9_9 == libs__op_mode__V_10_10);
#line 32 "op_mode.m"
              }
#line 32 "op_mode.m"
          }
#line 32 "op_mode.m"
          break;
#line 32 "op_mode.m"
        case (MR_Integer) 3:
#line 32 "op_mode.m"
          {
#line 32 "op_mode.m"
            MR_Word libs__op_mode__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__1_1, (MR_Integer) 0)));
#line 32 "op_mode.m"
            MR_Word libs__op_mode__V_12_12;

#line 32 "op_mode.m"
            libs__op_mode__succeeded = ((MR_tag((MR_Word) libs__op_mode__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 32 "op_mode.m"
            if (libs__op_mode__succeeded)
#line 32 "op_mode.m"
              {
#line 32 "op_mode.m"
                libs__op_mode__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 3981 "libs.op_mode.c"
                {
#line 3983 "libs.op_mode.c"
                  libs__op_mode__succeeded = libs__op_mode____Unify____op_mode_args_0_0(libs__op_mode__V_11_11, libs__op_mode__V_12_12);
                }
#line 32 "op_mode.m"
              }
#line 32 "op_mode.m"
          }
#line 32 "op_mode.m"
          break;
#line 32 "op_mode.m"
      }
#line 32 "op_mode.m"
    return libs__op_mode__succeeded;
#line 32 "op_mode.m"
  }
#line 32 "op_mode.m"
}

#line 266 "op_mode.m"
static MR_Word MR_CALL 
libs__op_mode__bool_op_modes_0_f_0(void)
#line 266 "op_mode.m"
{
#line 268 "op_mode.m"
  {
#line 268 "op_mode.m"
    MR_bool libs__op_mode__succeeded;

#line 268 "op_mode.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &libs__op_mode_scalar_common_2[60]);
#line 268 "op_mode.m"
  }
#line 266 "op_mode.m"
}

#line 250 "op_mode.m"
static void MR_CALL 
libs__op_mode__gather_bool_op_mode_4_p_0(
#line 250 "op_mode.m"
  MR_Word libs__op_mode__OptionTable_5,
#line 250 "op_mode.m"
  MR_Word libs__op_mode__HeadVar__2_2,
#line 250 "op_mode.m"
  MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_0_11,
#line 250 "op_mode.m"
  MR_Word * libs__op_mode__STATE_VARIABLE_OpModeSet_12)
#line 250 "op_mode.m"
{
#line 253 "op_mode.m"
  {
#line 253 "op_mode.m"
    MR_bool libs__op_mode__succeeded;
#line 253 "op_mode.m"
    MR_Word libs__op_mode__Option_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__op_mode__HeadVar__2_2, (MR_Integer) 0)));
#line 253 "op_mode.m"
    MR_Word libs__op_mode__OpMode_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__op_mode__HeadVar__2_2, (MR_Integer) 1)));
#line 253 "op_mode.m"
    MR_Word libs__op_mode__OptionValue_9;
#line 254 "op_mode.m"
    MR_Box libs__op_mode__conv0_OptionValue_9;
#line 262 "op_mode.m"
    MR_Word libs__op_mode__BoolValue_10;

#line 254 "op_mode.m"
    {
#line 254 "op_mode.m"
      mercury__map__lookup_3_p_0((MR_Word) &libs__options__libs__options__type_ctor_info_option_0, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__op_mode__OptionTable_5, ((MR_Box) (libs__op_mode__Option_6)), &libs__op_mode__conv0_OptionValue_9);
    }
#line 254 "op_mode.m"
    libs__op_mode__OptionValue_9 = ((MR_Word) libs__op_mode__conv0_OptionValue_9);
#line 255 "op_mode.m"
    libs__op_mode__succeeded = ((MR_tag((MR_Word) libs__op_mode__OptionValue_9)) == (MR_mktag((MR_Integer) 1)));
#line 255 "op_mode.m"
    if (libs__op_mode__succeeded)
#line 255 "op_mode.m"
      {
#line 255 "op_mode.m"
        libs__op_mode__BoolValue_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__OptionValue_9, (MR_Integer) 0)));
#line 259 "op_mode.m"
#line 259 "op_mode.m"
        switch (libs__op_mode__BoolValue_10) {
#line 259 "op_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 259 "op_mode.m"
          case (MR_Integer) 0:
#line 260 "op_mode.m"
            *libs__op_mode__STATE_VARIABLE_OpModeSet_12 = libs__op_mode__STATE_VARIABLE_OpModeSet_0_11;
#line 259 "op_mode.m"
            break;
#line 259 "op_mode.m"
          case (MR_Integer) 1:
#line 257 "op_mode.m"
            {
#line 258 "op_mode.m"
              {
#line 258 "op_mode.m"
                mercury__set__insert_3_p_0((MR_Word) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0, ((MR_Box) (libs__op_mode__OpMode_7)), libs__op_mode__STATE_VARIABLE_OpModeSet_0_11, libs__op_mode__STATE_VARIABLE_OpModeSet_12);
              }
#line 257 "op_mode.m"
            }
#line 259 "op_mode.m"
            break;
#line 259 "op_mode.m"
        }
#line 255 "op_mode.m"
      }
#line 255 "op_mode.m"
    else
#line 263 "op_mode.m"
      {
#line 263 "op_mode.m"
        {
#line 263 "op_mode.m"
          mercury__require__unexpected_3_p_0((MR_String) "libs.op_mode", (MR_String) "predicate \140libs.op_mode.gather_bool_op_mode\'/4", (MR_String) "not a boolean");
#line 263 "op_mode.m"
          return;
        }
#line 263 "op_mode.m"
      }
#line 253 "op_mode.m"
  }
#line 250 "op_mode.m"
}

#line 106 "op_mode.m"
MR_String MR_CALL 
libs__op_mode__op_mode_to_option_string_1_f_0(
#line 106 "op_mode.m"
  MR_Word libs__op_mode__MOP_3)
#line 106 "op_mode.m"
{
#line 345 "op_mode.m"
  {
#line 345 "op_mode.m"
    MR_bool libs__op_mode__succeeded;
#line 345 "op_mode.m"
    MR_String libs__op_mode__Str_4;

#line 345 "op_mode.m"
#line 345 "op_mode.m"
    switch (MR_tag((MR_Word) libs__op_mode__MOP_3)) {
#line 345 "op_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 345 "op_mode.m"
      case (MR_Integer) 0:
#line 345 "op_mode.m"
#line 345 "op_mode.m"
        switch (MR_unmkbody(libs__op_mode__MOP_3)) {
#line 345 "op_mode.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 345 "op_mode.m"
          case (MR_Integer) 0:
#line 346 "op_mode.m"
            libs__op_mode__Str_4 = (MR_String) "--make";
#line 345 "op_mode.m"
            break;
#line 345 "op_mode.m"
          case (MR_Integer) 1:
#line 349 "op_mode.m"
            libs__op_mode__Str_4 = (MR_String) "--generate-source-file-mapping";
#line 345 "op_mode.m"
            break;
#line 345 "op_mode.m"
        }
#line 345 "op_mode.m"
        break;
#line 345 "op_mode.m"
      case (MR_Integer) 1:
#line 352 "op_mode.m"
        libs__op_mode__Str_4 = (MR_String) "--generate-standalone-interface";
#line 345 "op_mode.m"
        break;
#line 345 "op_mode.m"
      case (MR_Integer) 2:
#line 354 "op_mode.m"
        {
#line 354 "op_mode.m"
          MR_Word libs__op_mode__MOPQ_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__op_mode__MOP_3, (MR_Integer) 0)));

#line 358 "op_mode.m"
          libs__op_mode__Str_4 = ((&libs__op_mode_vector_common_5[0 + libs__op_mode__MOPQ_6]))->libs__op_mode__vector_common_type_5_0__vct_5_f_0;
#line 354 "op_mode.m"
        }
#line 345 "op_mode.m"
        break;
#line 345 "op_mode.m"
      case (MR_Integer) 3:
#line 399 "op_mode.m"
        {
#line 399 "op_mode.m"
          MR_Word libs__op_mode__MOPA_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__MOP_3, (MR_Integer) 0)));

#line 403 "op_mode.m"
#line 403 "op_mode.m"
          switch (MR_tag((MR_Word) libs__op_mode__MOPA_7)) {
#line 403 "op_mode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 403 "op_mode.m"
            case (MR_Integer) 0:
#line 403 "op_mode.m"
#line 403 "op_mode.m"
              switch (MR_unmkbody(libs__op_mode__MOPA_7)) {
#line 403 "op_mode.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 403 "op_mode.m"
                case (MR_Integer) 0:
#line 402 "op_mode.m"
                  libs__op_mode__Str_4 = (MR_String) "--generate-dependencies";
#line 403 "op_mode.m"
                  break;
#line 403 "op_mode.m"
                case (MR_Integer) 1:
#line 405 "op_mode.m"
                  libs__op_mode__Str_4 = (MR_String) "--generate-dependency_file";
#line 403 "op_mode.m"
                  break;
#line 403 "op_mode.m"
                case (MR_Integer) 2:
#line 408 "op_mode.m"
                  libs__op_mode__Str_4 = (MR_String) "--make-private-interface";
#line 403 "op_mode.m"
                  break;
#line 403 "op_mode.m"
                case (MR_Integer) 3:
#line 411 "op_mode.m"
                  libs__op_mode__Str_4 = (MR_String) "--make-short-interface";
#line 403 "op_mode.m"
                  break;
#line 403 "op_mode.m"
                case (MR_Integer) 4:
#line 414 "op_mode.m"
                  libs__op_mode__Str_4 = (MR_String) "--make-interface";
#line 403 "op_mode.m"
                  break;
#line 403 "op_mode.m"
                case (MR_Integer) 5:
#line 417 "op_mode.m"
                  libs__op_mode__Str_4 = (MR_String) "--convert-to-mercury";
#line 403 "op_mode.m"
                  break;
#line 403 "op_mode.m"
              }
#line 403 "op_mode.m"
              break;
#line 403 "op_mode.m"
            case (MR_Integer) 1:
#line 419 "op_mode.m"
              {
#line 419 "op_mode.m"
                MR_Word libs__op_mode__MOPAU_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__MOPA_7, (MR_Integer) 0)));

#line 423 "op_mode.m"
#line 423 "op_mode.m"
                switch (MR_tag((MR_Word) libs__op_mode__MOPAU_8)) {
#line 423 "op_mode.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 423 "op_mode.m"
                  case (MR_Integer) 0:
#line 423 "op_mode.m"
#line 423 "op_mode.m"
                    switch (MR_unmkbody(libs__op_mode__MOPAU_8)) {
#line 423 "op_mode.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 423 "op_mode.m"
                      case (MR_Integer) 0:
#line 422 "op_mode.m"
                        libs__op_mode__Str_4 = (MR_String) "--make-opt-int";
#line 423 "op_mode.m"
                        break;
#line 423 "op_mode.m"
                      case (MR_Integer) 1:
#line 425 "op_mode.m"
                        libs__op_mode__Str_4 = (MR_String) "--make-trans-opt";
#line 423 "op_mode.m"
                        break;
#line 423 "op_mode.m"
                      case (MR_Integer) 2:
#line 428 "op_mode.m"
                        libs__op_mode__Str_4 = (MR_String) "--make-analysis-registry";
#line 423 "op_mode.m"
                        break;
#line 423 "op_mode.m"
                      case (MR_Integer) 3:
#line 431 "op_mode.m"
                        libs__op_mode__Str_4 = (MR_String) "--make-xml-doc";
#line 423 "op_mode.m"
                        break;
#line 423 "op_mode.m"
                      case (MR_Integer) 4:
#line 434 "op_mode.m"
                        libs__op_mode__Str_4 = (MR_String) "--typecheck-only";
#line 423 "op_mode.m"
                        break;
#line 423 "op_mode.m"
                      case (MR_Integer) 5:
#line 437 "op_mode.m"
                        libs__op_mode__Str_4 = (MR_String) "--errorcheck-only";
#line 423 "op_mode.m"
                        break;
#line 423 "op_mode.m"
                    }
#line 423 "op_mode.m"
                    break;
#line 423 "op_mode.m"
                  case (MR_Integer) 1:
#line 439 "op_mode.m"
                    {
#line 439 "op_mode.m"
                      MR_Word libs__op_mode__MOPCG_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__MOPAU_8, (MR_Integer) 0)));

#line 443 "op_mode.m"
#line 443 "op_mode.m"
                      switch (libs__op_mode__MOPCG_9) {
#line 443 "op_mode.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 443 "op_mode.m"
                        case (MR_Integer) 1:
#line 445 "op_mode.m"
                          libs__op_mode__Str_4 = (MR_String) "--compile-only";
#line 443 "op_mode.m"
                          break;
#line 443 "op_mode.m"
                        case (MR_Integer) 0:
#line 442 "op_mode.m"
                          libs__op_mode__Str_4 = (MR_String) "--target-code-only";
#line 443 "op_mode.m"
                          break;
#line 443 "op_mode.m"
                        case (MR_Integer) 2:
#line 447 "op_mode.m"
                          {
#line 451 "op_mode.m"
                            {
#line 451 "op_mode.m"
                              mercury__require__unexpected_3_p_0((MR_String) "libs.op_mode", (MR_String) "function \140libs.op_mode.op_mode_to_option_string\'/1", (MR_String) "opmcg_target_object_and_executable");
                            }
#line 447 "op_mode.m"
                          }
#line 443 "op_mode.m"
                          break;
#line 443 "op_mode.m"
                      }
#line 439 "op_mode.m"
                    }
#line 423 "op_mode.m"
                    break;
#line 423 "op_mode.m"
                }
#line 419 "op_mode.m"
              }
#line 403 "op_mode.m"
              break;
#line 403 "op_mode.m"
          }
#line 399 "op_mode.m"
        }
#line 345 "op_mode.m"
        break;
#line 345 "op_mode.m"
    }
#line 345 "op_mode.m"
    return libs__op_mode__Str_4;
#line 345 "op_mode.m"
  }
#line 106 "op_mode.m"
}

#line 128 "op_mode.m"
static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_1(
#line 128 "op_mode.m"
  MR_Box libs__op_mode__closure_arg,
#line 128 "op_mode.m"
  MR_Box libs__op_mode__wrapper_arg_1,
#line 128 "op_mode.m"
  MR_Box libs__op_mode__wrapper_arg_2,
#line 128 "op_mode.m"
  MR_Box * libs__op_mode__wrapper_arg_3)
#line 128 "op_mode.m"
{
#line 128 "op_mode.m"
  {
#line 128 "op_mode.m"
    MR_Box libs__op_mode__closure = libs__op_mode__closure_arg;
#line 128 "op_mode.m"
    MR_Word libs__op_mode__conv0_STATE_VARIABLE_OpModeSet_12;

#line 128 "op_mode.m"
    {
#line 128 "op_mode.m"
      libs__op_mode__gather_bool_op_mode_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__op_mode__closure, (MR_Integer) 3))), ((MR_Word) libs__op_mode__wrapper_arg_1), ((MR_Word) libs__op_mode__wrapper_arg_2), &libs__op_mode__conv0_STATE_VARIABLE_OpModeSet_12);
    }
#line 128 "op_mode.m"
    *libs__op_mode__wrapper_arg_3 = ((MR_Box) (libs__op_mode__conv0_STATE_VARIABLE_OpModeSet_12));
#line 128 "op_mode.m"
  }
#line 128 "op_mode.m"
}

#line 192 "op_mode.m"
static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_2(
#line 192 "op_mode.m"
  void * libs__op_mode__env_ptr_arg)
#line 192 "op_mode.m"
{
#line 192 "op_mode.m"
  {
#line 192 "op_mode.m"
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * libs__op_mode__env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) libs__op_mode__env_ptr_arg;

#line 192 "op_mode.m"
    MR_builtin_longjmp((libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__commit_0, 1);
#line 192 "op_mode.m"
  }
#line 192 "op_mode.m"
}

#line 192 "op_mode.m"
static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_4(
#line 192 "op_mode.m"
  void * libs__op_mode__env_ptr_arg)
#line 192 "op_mode.m"
{
#line 192 "op_mode.m"
  {
#line 192 "op_mode.m"
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * libs__op_mode__env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) libs__op_mode__env_ptr_arg;

#line 192 "op_mode.m"
    (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_53 = ((MR_Word) (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_53);
#line 192 "op_mode.m"
    {
#line 192 "op_mode.m"
      libs__op_mode__decide_op_mode_3_p_0_3(libs__op_mode__env_ptr);
    }
#line 192 "op_mode.m"
  }
#line 192 "op_mode.m"
}

#line 192 "op_mode.m"
static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_3(
#line 192 "op_mode.m"
  void * libs__op_mode__env_ptr_arg)
#line 192 "op_mode.m"
{
#line 192 "op_mode.m"
  {
#line 192 "op_mode.m"
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * libs__op_mode__env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) libs__op_mode__env_ptr_arg;

#line 218 "op_mode.m"
#line 218 "op_mode.m"
    switch (MR_tag((MR_Word) (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_53)) {
#line 218 "op_mode.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 218 "op_mode.m"
      case (MR_Integer) 0:
#line 219 "op_mode.m"
        (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
#line 218 "op_mode.m"
        break;
#line 218 "op_mode.m"
      case (MR_Integer) 1:
#line 218 "op_mode.m"
      case (MR_Integer) 2:
#line 219 "op_mode.m"
        (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
#line 218 "op_mode.m"
        break;
#line 218 "op_mode.m"
      case (MR_Integer) 3:
#line 221 "op_mode.m"
        {
#line 221 "op_mode.m"
          MR_Word libs__op_mode__OpModeArgs_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TogetherOpMode_53, (MR_Integer) 0)));

#line 231 "op_mode.m"
#line 231 "op_mode.m"
          switch (MR_tag((MR_Word) libs__op_mode__OpModeArgs_75)) {
#line 231 "op_mode.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 231 "op_mode.m"
            case (MR_Integer) 0:
#line 230 "op_mode.m"
              (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
#line 231 "op_mode.m"
              break;
#line 231 "op_mode.m"
            case (MR_Integer) 1:
#line 232 "op_mode.m"
              {
#line 232 "op_mode.m"
                MR_Word libs__op_mode__OpModeAugment_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__OpModeArgs_75, (MR_Integer) 0)));

#line 240 "op_mode.m"
                if ((((((((libs__op_mode__OpModeAugment_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || ((libs__op_mode__OpModeAugment_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))) || ((libs__op_mode__OpModeAugment_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || ((libs__op_mode__OpModeAugment_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))))
#line 239 "op_mode.m"
                  (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
#line 240 "op_mode.m"
                else
#line 240 "op_mode.m"
                  (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_FALSE;
#line 232 "op_mode.m"
              }
#line 231 "op_mode.m"
              break;
#line 231 "op_mode.m"
          }
#line 221 "op_mode.m"
        }
#line 218 "op_mode.m"
        break;
#line 218 "op_mode.m"
    }
#line 218 "op_mode.m"
    if ((libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
#line 218 "op_mode.m"
      {
#line 218 "op_mode.m"
        libs__op_mode__decide_op_mode_3_p_0_2(libs__op_mode__env_ptr);
      }
#line 192 "op_mode.m"
  }
#line 192 "op_mode.m"
}

#line 192 "op_mode.m"
static void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0_5(
#line 192 "op_mode.m"
  void * libs__op_mode__env_ptr_arg)
#line 192 "op_mode.m"
{
#line 192 "op_mode.m"
  {
#line 192 "op_mode.m"
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s * libs__op_mode__env_ptr = (struct libs__op_mode__decide_op_mode_3_p_0_env_0_s *) libs__op_mode__env_ptr_arg;

#line 192 "op_mode.m"
    if (MR_builtin_setjmp((libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__commit_0) == 0)
#line 192 "op_mode.m"
      {
#line 192 "op_mode.m"
        {
#line 192 "op_mode.m"
          mercury__set__member_2_p_1((libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_61_61, &(libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__conv3_TogetherOpMode_53, (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_40_40, libs__op_mode__decide_op_mode_3_p_0_4, libs__op_mode__env_ptr);
        }
#line 192 "op_mode.m"
        (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_FALSE;
#line 192 "op_mode.m"
      }
#line 192 "op_mode.m"
    else
#line 192 "op_mode.m"
      (libs__op_mode__env_ptr)->libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = MR_TRUE;
#line 192 "op_mode.m"
  }
#line 192 "op_mode.m"
}

#line 103 "op_mode.m"
void MR_CALL 
libs__op_mode__decide_op_mode_3_p_0(
#line 103 "op_mode.m"
  MR_Word libs__op_mode__OptionTable_4,
#line 103 "op_mode.m"
  MR_Word * libs__op_mode__OpMode_5,
#line 103 "op_mode.m"
  MR_Word * libs__op_mode__OtherOpModes_6)
#line 103 "op_mode.m"
{
#line 103 "op_mode.m"
  {
#line 103 "op_mode.m"
    struct libs__op_mode__decide_op_mode_3_p_0_env_0_s libs__op_mode__env;

#line 127 "op_mode.m"
    {
#line 127 "op_mode.m"
      MR_Word libs__op_mode__TypeCtorInfo_67_67;
#line 127 "op_mode.m"
      MR_Word libs__op_mode__GenStandaloneOption_8;
#line 127 "op_mode.m"
      MR_Word libs__op_mode__InvokedByMMCMake_11;
#line 127 "op_mode.m"
      MR_Word libs__op_mode__OpModes0_12;
#line 127 "op_mode.m"
      MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_20_20;
#line 127 "op_mode.m"
      MR_Word libs__op_mode__V_21_21;
#line 127 "op_mode.m"
      MR_Word libs__op_mode__V_22_22;
#line 127 "op_mode.m"
      MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_23_23;
#line 127 "op_mode.m"
      MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_26_26;
#line 127 "op_mode.m"
      MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_32_32;
#line 128 "op_mode.m"
      MR_Box libs__op_mode__conv1_STATE_VARIABLE_OpModeSet_23_23;
#line 130 "op_mode.m"
      MR_Box libs__op_mode__conv2_GenStandaloneOption_8;
#line 140 "op_mode.m"
      MR_Word libs__op_mode__MaybeBaseName_9;

#line 4592 "libs.op_mode.c"
      (libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_61_61 = (MR_Word) &libs__op_mode__libs__op_mode__type_ctor_info_op_mode_0;
#line 127 "op_mode.m"
      {
#line 127 "op_mode.m"
        mercury__set__init_1_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_61_61, &libs__op_mode__STATE_VARIABLE_OpModeSet_20_20);
      }
#line 128 "op_mode.m"
      {
#line 128 "op_mode.m"
        libs__op_mode__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 128 "op_mode.m"
        MR_hl_field(MR_mktag(0), libs__op_mode__V_21_21, 0) = ((MR_Box) (&libs__op_mode_scalar_common_4[0]));
#line 128 "op_mode.m"
        MR_hl_field(MR_mktag(0), libs__op_mode__V_21_21, 1) = ((MR_Box) (libs__op_mode__decide_op_mode_3_p_0_1));
#line 128 "op_mode.m"
        MR_hl_field(MR_mktag(0), libs__op_mode__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 128 "op_mode.m"
        MR_hl_field(MR_mktag(0), libs__op_mode__V_21_21, 3) = ((MR_Box) (libs__op_mode__OptionTable_4));
#line 128 "op_mode.m"
      }
#line 128 "op_mode.m"
      {
#line 128 "op_mode.m"
        libs__op_mode__V_22_22 = libs__op_mode__bool_op_modes_0_f_0();
      }
#line 128 "op_mode.m"
      {
#line 128 "op_mode.m"
        mercury__list__foldl_4_p_0((MR_Word) &libs__op_mode_scalar_common_1[0], (MR_Word) &libs__op_mode_scalar_common_2[0], libs__op_mode__V_21_21, libs__op_mode__V_22_22, ((MR_Box) (libs__op_mode__STATE_VARIABLE_OpModeSet_20_20)), &libs__op_mode__conv1_STATE_VARIABLE_OpModeSet_23_23);
      }
#line 128 "op_mode.m"
      libs__op_mode__STATE_VARIABLE_OpModeSet_23_23 = ((MR_Word) libs__op_mode__conv1_STATE_VARIABLE_OpModeSet_23_23);
#line 4625 "libs.op_mode.c"
      libs__op_mode__TypeCtorInfo_67_67 = (MR_Word) &libs__options__libs__options__type_ctor_info_option_0;
#line 130 "op_mode.m"
      {
#line 130 "op_mode.m"
        mercury__map__lookup_3_p_0(libs__op_mode__TypeCtorInfo_67_67, (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0, libs__op_mode__OptionTable_4, ((MR_Box) ((MR_Integer) 94)), &libs__op_mode__conv2_GenStandaloneOption_8);
      }
#line 130 "op_mode.m"
      libs__op_mode__GenStandaloneOption_8 = ((MR_Word) libs__op_mode__conv2_GenStandaloneOption_8);
#line 132 "op_mode.m"
      (libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = ((((MR_tag((MR_Word) libs__op_mode__GenStandaloneOption_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__GenStandaloneOption_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 132 "op_mode.m"
      if ((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
#line 132 "op_mode.m"
        {
#line 132 "op_mode.m"
          libs__op_mode__MaybeBaseName_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), libs__op_mode__GenStandaloneOption_8, (MR_Integer) 1)));
#line 135 "op_mode.m"
          if ((libs__op_mode__MaybeBaseName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 134 "op_mode.m"
            libs__op_mode__STATE_VARIABLE_OpModeSet_26_26 = libs__op_mode__STATE_VARIABLE_OpModeSet_23_23;
#line 135 "op_mode.m"
          else
#line 136 "op_mode.m"
            {
#line 136 "op_mode.m"
              MR_String libs__op_mode__BaseName_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__op_mode__MaybeBaseName_9, (MR_Integer) 0)));
#line 136 "op_mode.m"
              MR_Word libs__op_mode__V_25_25;

#line 137 "op_mode.m"
              {
#line 137 "op_mode.m"
                libs__op_mode__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 137 "op_mode.m"
                MR_hl_field(MR_mktag(1), libs__op_mode__V_25_25, 0) = ((MR_Box) (libs__op_mode__BaseName_10));
#line 137 "op_mode.m"
              }
#line 137 "op_mode.m"
              {
#line 137 "op_mode.m"
                mercury__set__insert_3_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_61_61, ((MR_Box) (libs__op_mode__V_25_25)), libs__op_mode__STATE_VARIABLE_OpModeSet_23_23, &libs__op_mode__STATE_VARIABLE_OpModeSet_26_26);
              }
#line 136 "op_mode.m"
            }
#line 132 "op_mode.m"
        }
#line 132 "op_mode.m"
      else
#line 141 "op_mode.m"
        {
#line 141 "op_mode.m"
          {
#line 141 "op_mode.m"
            mercury__require__unexpected_3_p_0((MR_String) "libs.op_mode", (MR_String) "predicate \140libs.op_mode.decide_op_mode\'/3", (MR_String) "generate_standalone_interface is not maybe_string");
#line 141 "op_mode.m"
            return;
          }
#line 141 "op_mode.m"
        }
#line 147 "op_mode.m"
      {
#line 147 "op_mode.m"
        mercury__getopt_io__lookup_bool_option_3_p_0(libs__op_mode__TypeCtorInfo_67_67, libs__op_mode__OptionTable_4, ((MR_Box) ((MR_Integer) 614)), &libs__op_mode__InvokedByMMCMake_11);
      }
#line 152 "op_mode.m"
#line 152 "op_mode.m"
      switch (libs__op_mode__InvokedByMMCMake_11) {
#line 152 "op_mode.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 152 "op_mode.m"
        case (MR_Integer) 0:
#line 153 "op_mode.m"
          libs__op_mode__STATE_VARIABLE_OpModeSet_32_32 = libs__op_mode__STATE_VARIABLE_OpModeSet_26_26;
#line 152 "op_mode.m"
          break;
#line 152 "op_mode.m"
        case (MR_Integer) 1:
#line 150 "op_mode.m"
          {
#line 151 "op_mode.m"
            {
#line 151 "op_mode.m"
              mercury__set__delete_3_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_61_61, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), libs__op_mode__STATE_VARIABLE_OpModeSet_26_26, &libs__op_mode__STATE_VARIABLE_OpModeSet_32_32);
            }
#line 150 "op_mode.m"
          }
#line 152 "op_mode.m"
          break;
#line 152 "op_mode.m"
      }
#line 155 "op_mode.m"
      {
#line 155 "op_mode.m"
        mercury__set__to_sorted_list_2_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_61_61, libs__op_mode__STATE_VARIABLE_OpModeSet_32_32, &libs__op_mode__OpModes0_12);
      }
#line 161 "op_mode.m"
      if ((libs__op_mode__OpModes0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 157 "op_mode.m"
        {
#line 158 "op_mode.m"
          *libs__op_mode__OpMode_5 = (MR_Word) MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[40]);
#line 160 "op_mode.m"
          *libs__op_mode__OtherOpModes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 157 "op_mode.m"
        }
#line 161 "op_mode.m"
      else
#line 161 "op_mode.m"
        {
#line 161 "op_mode.m"
          MR_Word libs__op_mode__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__OpModes0_12, (MR_Integer) 1)));
#line 161 "op_mode.m"
          MR_Word libs__op_mode__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__OpModes0_12, (MR_Integer) 0)));

#line 161 "op_mode.m"
          if ((libs__op_mode__V_69_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 162 "op_mode.m"
            {
#line 162 "op_mode.m"
              *libs__op_mode__OpMode_5 = libs__op_mode__V_70_70;
#line 163 "op_mode.m"
              *libs__op_mode__OtherOpModes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 162 "op_mode.m"
            }
#line 161 "op_mode.m"
          else
#line 180 "op_mode.m"
            {
#line 176 "op_mode.m"
              {
#line 176 "op_mode.m"
                (libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = mercury__set__member_2_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_61_61, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), libs__op_mode__STATE_VARIABLE_OpModeSet_32_32);
              }
#line 180 "op_mode.m"
              if ((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
#line 178 "op_mode.m"
                {
#line 178 "op_mode.m"
                  *libs__op_mode__OpMode_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 179 "op_mode.m"
                  *libs__op_mode__OtherOpModes_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 178 "op_mode.m"
                }
#line 180 "op_mode.m"
              else
#line 202 "op_mode.m"
                {
#line 202 "op_mode.m"
                  MR_Word libs__op_mode__HeadFilteredOpMode_18;
#line 202 "op_mode.m"
                  MR_Word libs__op_mode__TailFilteredOpModes_19;
#line 187 "op_mode.m"
                  MR_Word libs__op_mode__FilteredOpModes_17;
#line 187 "op_mode.m"
                  MR_Word libs__op_mode__STATE_VARIABLE_OpModeSet_36_36;

#line 185 "op_mode.m"
                  {
#line 185 "op_mode.m"
                    mercury__set__delete_3_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_61_61, ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[9]))), libs__op_mode__STATE_VARIABLE_OpModeSet_32_32, &libs__op_mode__STATE_VARIABLE_OpModeSet_36_36);
                  }
#line 188 "op_mode.m"
                  {
#line 188 "op_mode.m"
                    mercury__set__delete_3_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_61_61, ((MR_Box) (MR_mkword(MR_mktag(3), &libs__op_mode_scalar_common_3[7]))), libs__op_mode__STATE_VARIABLE_OpModeSet_36_36, &(libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_40_40);
                  }
#line 192 "op_mode.m"
                  {
#line 192 "op_mode.m"
                    libs__op_mode__decide_op_mode_3_p_0_5(&libs__op_mode__env);
                  }
#line 187 "op_mode.m"
                  if ((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
#line 187 "op_mode.m"
                    {
#line 195 "op_mode.m"
                      {
#line 195 "op_mode.m"
                        mercury__set__to_sorted_list_2_p_0((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__TypeCtorInfo_61_61, (libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__STATE_VARIABLE_OpModeSet_40_40, &libs__op_mode__FilteredOpModes_17);
                      }
#line 196 "op_mode.m"
                      (libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) libs__op_mode__FilteredOpModes_17)) == (MR_mktag((MR_Integer) 1)));
#line 196 "op_mode.m"
                      if ((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
#line 196 "op_mode.m"
                        {
#line 196 "op_mode.m"
                          libs__op_mode__HeadFilteredOpMode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__FilteredOpModes_17, (MR_Integer) 0)));
#line 196 "op_mode.m"
                          libs__op_mode__TailFilteredOpModes_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__FilteredOpModes_17, (MR_Integer) 1)));
#line 196 "op_mode.m"
                        }
#line 187 "op_mode.m"
                    }
#line 202 "op_mode.m"
                  if ((libs__op_mode__env).libs__op_mode__decide_op_mode_3_p_0_env_0__succeeded)
#line 198 "op_mode.m"
                    {
#line 198 "op_mode.m"
                      *libs__op_mode__OpMode_5 = libs__op_mode__HeadFilteredOpMode_18;
#line 201 "op_mode.m"
                      *libs__op_mode__OtherOpModes_6 = libs__op_mode__TailFilteredOpModes_19;
#line 198 "op_mode.m"
                    }
#line 202 "op_mode.m"
                  else
#line 205 "op_mode.m"
                    {
#line 205 "op_mode.m"
                      *libs__op_mode__OpMode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__OpModes0_12, (MR_Integer) 0)));
#line 205 "op_mode.m"
                      *libs__op_mode__OtherOpModes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__op_mode__OpModes0_12, (MR_Integer) 1)));
#line 205 "op_mode.m"
                    }
#line 202 "op_mode.m"
                }
#line 180 "op_mode.m"
            }
#line 161 "op_mode.m"
        }
#line 127 "op_mode.m"
    }
#line 103 "op_mode.m"
  }
#line 103 "op_mode.m"
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
	MR_register_type_ctor_info(&libs__op_mode__libs__op_mode__type_ctor_info_op_mode_query_0);
}

void mercury__libs__op_mode__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.op_mode. */
