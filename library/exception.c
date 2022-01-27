/*
** Automatically generated from `exception.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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


/* :- module exception. */
/* :- implementation. */

/*
INIT mercury__exception__init
REQUIRED_INIT mercury__exception__required_init
ENDINIT
*/

#include "exception.mih"
#include "exception.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "float.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"




#line 589 "exception.m"
struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_0_s {
#line 589 "exception.m"
  MR_Box * mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_95_48__wrapper_arg_1;
#line 589 "exception.m"
  MR_Cont mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_95_48__cont;
#line 589 "exception.m"
  void * mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_95_48__cont_env_ptr;
#line 589 "exception.m"
  MR_Word mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_95_48__conv1_HeadVar__3_46;
#line 589 "exception.m"
};

#line 586 "exception.m"
struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_0_s {
#line 586 "exception.m"
  MR_Box * mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_95_48__wrapper_arg_1;
#line 586 "exception.m"
  MR_Cont mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_95_48__cont;
#line 586 "exception.m"
  void * mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_95_48__cont_env_ptr;
#line 586 "exception.m"
  MR_Word mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_95_48__conv0_HeadVar__2_2;
#line 586 "exception.m"
};

#line 579 "exception.m"
struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_0_s {
#line 579 "exception.m"
  MR_Box * mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_95_48__wrapper_arg_1;
#line 579 "exception.m"
  MR_Cont mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_95_48__cont;
#line 579 "exception.m"
  void * mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_95_48__cont_env_ptr;
#line 579 "exception.m"
  MR_Word mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_95_48__conv1_HeadVar__3_30;
#line 579 "exception.m"
};

#line 576 "exception.m"
struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_0_s {
#line 576 "exception.m"
  MR_Box * mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_95_48__wrapper_arg_1;
#line 576 "exception.m"
  MR_Cont mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_95_48__cont;
#line 576 "exception.m"
  void * mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_95_48__cont_env_ptr;
#line 576 "exception.m"
  MR_Word mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_95_48__conv0_HeadVar__2_2;
#line 576 "exception.m"
};

#line 589 "exception.m"
struct mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0_s {
#line 589 "exception.m"
  MR_Word * mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0__HeadVar__3_46;
#line 589 "exception.m"
  MR_Cont mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0__cont;
#line 589 "exception.m"
  void * mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0__cont_env_ptr;
#line 590 "exception.m"
  MR_Box mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0__conv1_HeadVar__3_46;
#line 589 "exception.m"
};

#line 579 "exception.m"
struct mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0_s {
#line 579 "exception.m"
  MR_Word * mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0__HeadVar__3_30;
#line 579 "exception.m"
  MR_Cont mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0__cont;
#line 579 "exception.m"
  void * mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0__cont_env_ptr;
#line 580 "exception.m"
  MR_Box mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0__conv1_HeadVar__3_30;
#line 579 "exception.m"
};

#line 613 "exception.m"
struct mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0_s {
#line 613 "exception.m"
  MR_Word * mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0__HeadVar__3_15;
#line 613 "exception.m"
  MR_Cont mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0__cont;
#line 613 "exception.m"
  void * mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0__cont_env_ptr;
#line 866 "exception.m"
  MR_Box mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0__conv1_HeadVar__3_15;
#line 613 "exception.m"
};

#line 613 "exception.m"
struct mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0_s {
#line 613 "exception.m"
  MR_Word * mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0__HeadVar__3_15;
#line 613 "exception.m"
  MR_Cont mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0__cont;
#line 613 "exception.m"
  void * mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0__cont_env_ptr;
#line 866 "exception.m"
  MR_Box mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0__conv1_HeadVar__3_15;
#line 613 "exception.m"
};

#line 488 "exception.m"
struct mercury__exception__wrap_success_2_p_3_env_0_s {
#line 488 "exception.m"
  MR_Word * mercury__exception__wrap_success_2_p_3_env_0__HeadVar__2_2;
#line 488 "exception.m"
  MR_Cont mercury__exception__wrap_success_2_p_3_env_0__cont;
#line 488 "exception.m"
  void * mercury__exception__wrap_success_2_p_3_env_0__cont_env_ptr;
#line 492 "exception.m"
  MR_Box mercury__exception__wrap_success_2_p_3_env_0__R_4;
#line 488 "exception.m"
};

#line 487 "exception.m"
struct mercury__exception__wrap_success_2_p_2_env_0_s {
#line 487 "exception.m"
  MR_Word * mercury__exception__wrap_success_2_p_2_env_0__HeadVar__2_2;
#line 487 "exception.m"
  MR_Cont mercury__exception__wrap_success_2_p_2_env_0__cont;
#line 487 "exception.m"
  void * mercury__exception__wrap_success_2_p_2_env_0__cont_env_ptr;
#line 492 "exception.m"
  MR_Box mercury__exception__wrap_success_2_p_2_env_0__R_4;
#line 487 "exception.m"
};

#line 613 "exception.m"
struct mercury__exception__incremental_try_all_4_p_1_4_env_0_s {
#line 613 "exception.m"
  MR_Box * mercury__exception__incremental_try_all_4_p_1_4_env_0__wrapper_arg_1;
#line 613 "exception.m"
  MR_Cont mercury__exception__incremental_try_all_4_p_1_4_env_0__cont;
#line 613 "exception.m"
  void * mercury__exception__incremental_try_all_4_p_1_4_env_0__cont_env_ptr;
#line 613 "exception.m"
  MR_Word mercury__exception__incremental_try_all_4_p_1_4_env_0__conv1_HeadVar__3_15;
#line 613 "exception.m"
};

#line 610 "exception.m"
struct mercury__exception__incremental_try_all_4_p_1_2_env_0_s {
#line 610 "exception.m"
  MR_Box * mercury__exception__incremental_try_all_4_p_1_2_env_0__wrapper_arg_1;
#line 610 "exception.m"
  MR_Cont mercury__exception__incremental_try_all_4_p_1_2_env_0__cont;
#line 610 "exception.m"
  void * mercury__exception__incremental_try_all_4_p_1_2_env_0__cont_env_ptr;
#line 610 "exception.m"
  MR_Word mercury__exception__incremental_try_all_4_p_1_2_env_0__conv0_HeadVar__2_2;
#line 610 "exception.m"
};

#line 613 "exception.m"
struct mercury__exception__incremental_try_all_4_p_0_4_env_0_s {
#line 613 "exception.m"
  MR_Box * mercury__exception__incremental_try_all_4_p_0_4_env_0__wrapper_arg_1;
#line 613 "exception.m"
  MR_Cont mercury__exception__incremental_try_all_4_p_0_4_env_0__cont;
#line 613 "exception.m"
  void * mercury__exception__incremental_try_all_4_p_0_4_env_0__cont_env_ptr;
#line 613 "exception.m"
  MR_Word mercury__exception__incremental_try_all_4_p_0_4_env_0__conv1_HeadVar__3_15;
#line 613 "exception.m"
};

#line 610 "exception.m"
struct mercury__exception__incremental_try_all_4_p_0_2_env_0_s {
#line 610 "exception.m"
  MR_Box * mercury__exception__incremental_try_all_4_p_0_2_env_0__wrapper_arg_1;
#line 610 "exception.m"
  MR_Cont mercury__exception__incremental_try_all_4_p_0_2_env_0__cont;
#line 610 "exception.m"
  void * mercury__exception__incremental_try_all_4_p_0_2_env_0__cont_env_ptr;
#line 610 "exception.m"
  MR_Word mercury__exception__incremental_try_all_4_p_0_2_env_0__conv0_HeadVar__2_2;
#line 610 "exception.m"
};


#line 270 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__exception____vpti_pred_1__pseudo_1;

#line 273 "exception.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__exception__exception__pti_exception_result_1__pseudo_1;

#line 276 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__exception____vpti_pred_1__pseudo_exception__pti_exception_result_1__pseudo_1;

#line 279 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__exception____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 282 "exception.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__exception__store__pti_store_1__pseudo_2;

#line 285 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__exception____vpti_pred_3__pseudo_1__pseudo_store__pti_store_1__pseudo_2__pseudo_store__pti_store_1__pseudo_2;

#line 288 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__exception____vpti_tuple_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2;

#line 291 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__exception____vpti_pred_3__pseudo_1__plain_stm_builtin__type_ctor_info_stm_0__plain_stm_builtin__type_ctor_info_stm_0;

#line 294 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__exception____vpti_tuple_2__pseudo_1__plain_stm_builtin__type_ctor_info_stm_0;

#line 297 "exception.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__exception__list__pti_list_1__pseudo_1;

#line 300 "exception.c"
static const MR_PseudoTypeInfo mercury__exception__exception__field_types_exception_result_1_0[1];

#line 303 "exception.c"
static const MR_DuFunctorDesc mercury__exception__exception__du_functor_desc_exception_result_1_0;

#line 306 "exception.c"
static const MR_DuFunctorDesc mercury__exception__exception__du_functor_desc_exception_result_1_1;

#line 309 "exception.c"
static const MR_PseudoTypeInfo mercury__exception__exception__field_types_exception_result_1_2[1];

#line 312 "exception.c"
static const MR_DuFunctorDesc mercury__exception__exception__du_functor_desc_exception_result_1_2;

#line 315 "exception.c"
static const MR_DuFunctorDescPtr mercury__exception__exception__du_stag_ordered_exception_result_1_0[1];

#line 318 "exception.c"
static const MR_DuFunctorDescPtr mercury__exception__exception__du_stag_ordered_exception_result_1_1[1];

#line 321 "exception.c"
static const MR_DuFunctorDescPtr mercury__exception__exception__du_stag_ordered_exception_result_1_2[1];

#line 324 "exception.c"
static const MR_DuPtagLayout mercury__exception__exception__du_ptag_ordered_exception_result_1[3];

#line 327 "exception.c"
static const MR_DuFunctorDescPtr mercury__exception__exception__du_name_ordered_exception_result_1[3];

#line 330 "exception.c"
static const MR_Integer mercury__exception__exception__functor_number_map_exception_result_1[3];

#line 333 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_0;

#line 336 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_1;

#line 339 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_2;

#line 342 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_3;

#line 345 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_4;

#line 348 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_5;

#line 351 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_6;

#line 354 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_7;

#line 357 "exception.c"
static const MR_EnumFunctorDescPtr mercury__exception__exception__enum_value_ordered_exp_determinism_0[8];

#line 360 "exception.c"
static const MR_EnumFunctorDescPtr mercury__exception__exception__enum_name_ordered_exp_determinism_0[8];

#line 363 "exception.c"
static const MR_Integer mercury__exception__exception__functor_number_map_exp_determinism_0[8];

#line 366 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__exception____vpti_pred_2__plain_univ__type_ctor_info_univ_0__pseudo_1;

#line 369 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_near_stack_limits_0_0;

#line 372 "exception.c"
static const MR_EnumFunctorDescPtr mercury__exception__exception__enum_value_ordered_near_stack_limits_0[1];

#line 375 "exception.c"
static const MR_EnumFunctorDescPtr mercury__exception__exception__enum_name_ordered_near_stack_limits_0[1];

#line 378 "exception.c"
static const MR_Integer mercury__exception__exception__functor_number_map_near_stack_limits_0[1];

#line 381 "exception.c"
static const MR_Integer mercury__exception__exception__functor_number_map_software_error_0[1];

#line 384 "exception.c"
static const MR_NotagFunctorDesc mercury__exception__exception__notag_functor_desc_software_error_0;

#line 387 "exception.c"
static MR_bool MR_CALL 
mercury__exception____Unify____exception_result_1_0_10001(
#line 390 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 392 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2,
#line 394 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3);

#line 397 "exception.c"
static void MR_CALL 
mercury__exception____Compare____exception_result_1_0_10001(
#line 400 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 402 "exception.c"
  MR_Box * mercury__exception__wrapper_arg_2,
#line 404 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3,
#line 406 "exception.c"
  MR_Box mercury__exception__wrapper_arg_4);

#line 409 "exception.c"
static MR_bool MR_CALL 
mercury__exception____Unify____exp_determinism_0_0_10001(
#line 412 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 414 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2);

#line 417 "exception.c"
static void MR_CALL 
mercury__exception____Compare____exp_determinism_0_0_10001(
#line 420 "exception.c"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 422 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2,
#line 424 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3);

#line 427 "exception.c"
static MR_bool MR_CALL 
mercury__exception____Unify____handler_1_0_10001(
#line 430 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 432 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2,
#line 434 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3);

#line 437 "exception.c"
static void MR_CALL 
mercury__exception____Compare____handler_1_0_10001(
#line 440 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 442 "exception.c"
  MR_Box * mercury__exception__wrapper_arg_2,
#line 444 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3,
#line 446 "exception.c"
  MR_Box mercury__exception__wrapper_arg_4);

#line 449 "exception.c"
static MR_bool MR_CALL 
mercury__exception____Unify____near_stack_limits_0_0_10001(
#line 452 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 454 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2);

#line 457 "exception.c"
static void MR_CALL 
mercury__exception____Compare____near_stack_limits_0_0_10001(
#line 460 "exception.c"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 462 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2,
#line 464 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3);

#line 467 "exception.c"
static MR_bool MR_CALL 
mercury__exception____Unify____software_error_0_0_10001(
#line 470 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 472 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2);

#line 475 "exception.c"
static void MR_CALL 
mercury__exception____Compare____software_error_0_0_10001(
#line 478 "exception.c"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 480 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2,
#line 482 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3);

#line 524 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_52_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_0_2(
#line 524 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 524 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 524 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 521 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_52_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_0_1(
#line 521 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 521 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 277 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_52_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_0(
#line 277 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 277 "exception.m"
  MR_Word * mercury__exception__Result_3);

#line 677 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_104_111_50_48_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
#line 677 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 677 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 288 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_104_111_50_48_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 288 "exception.m"
  MR_Word mercury__exception__IO_Goal_2,
#line 288 "exception.m"
  MR_Word * mercury__exception__Result_3);

#line 335 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 335 "exception.m"
  MR_Word * mercury__exception__Det_2);

#line 524 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0_2(
#line 524 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 524 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 524 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 521 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0_1(
#line 521 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 521 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 277 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0(
#line 277 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_34,
#line 277 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 277 "exception.m"
  MR_Word * mercury__exception__Result_3);

#line 536 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0_2(
#line 536 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 536 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 536 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 533 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0_1(
#line 533 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 533 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 281 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0(
#line 281 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_34,
#line 281 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 281 "exception.m"
  MR_Word * mercury__exception__Result_3);

#line 69 "solutions.opt"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0_1(
#line 69 "solutions.opt"
  MR_Box mercury__exception__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__exception__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__exception__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__exception__wrapper_arg_3);

#line 59 "solutions.int"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0(
#line 59 "solutions.int"
  MR_Word mercury__exception__TypeInfo_for_T_6,
#line 59 "solutions.int"
  MR_Word mercury__exception__Pred_3_3,
#line 59 "solutions.int"
  MR_Word * mercury__exception__List_4_4);

#line 143 "list.int"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_6_p_in__list_0(
#line 143 "list.int"
  MR_Word mercury__exception__V_28_28,
#line 143 "list.int"
  MR_Word mercury__exception__HeadVar__2_2,
#line 143 "list.int"
  MR_Word mercury__exception__HeadVar__3_3,
#line 143 "list.int"
  MR_Word * mercury__exception__HeadVar__4_4,
#line 143 "list.int"
  MR_Word mercury__exception__HeadVar__5_5,
#line 143 "list.int"
  MR_Word * mercury__exception__HeadVar__6_6);

#line 69 "solutions.opt"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0_1(
#line 69 "solutions.opt"
  MR_Box mercury__exception__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__exception__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__exception__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__exception__wrapper_arg_3);

#line 60 "solutions.int"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0(
#line 60 "solutions.int"
  MR_Word mercury__exception__TypeInfo_for_T_6,
#line 60 "solutions.int"
  MR_Word mercury__exception__Pred_3_3,
#line 60 "solutions.int"
  MR_Word * mercury__exception__List_4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 1625 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_104_97_110_100_108_101_114_95_95_91_49_93_95_48_3_p_0(
#line 1625 "exception.m"
  MR_Word mercury__exception__Handler_4,
#line 1625 "exception.m"
  MR_Word mercury__exception__Exception_5,
#line 1625 "exception.m"
  MR_Box * mercury__exception__Result_6);

#line 1619 "exception.m"
static MR_bool MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_111_97_108_95_95_91_49_93_95_49_2_p_1(
#line 1619 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 1619 "exception.m"
  MR_Box * mercury__exception__Result_4);

#line 1618 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_111_97_108_95_95_91_49_93_95_48_2_p_0(
#line 1618 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 1618 "exception.m"
  MR_Box * mercury__exception__Result_4);

#line 536 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_99_99_95_109_117_108_116_105_95_95_91_50_93_95_48_5_p_0_3(
#line 536 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 536 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 536 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 533 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_99_99_95_109_117_108_116_105_95_95_91_50_93_95_48_5_p_0_2(
#line 533 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 533 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 784 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_99_99_95_109_117_108_116_105_95_95_91_50_93_95_48_5_p_0_1(
#line 784 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 784 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 524 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0_3(
#line 524 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 524 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 524 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 521 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0_2(
#line 521 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 521 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 771 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0_1(
#line 771 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 771 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 463 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_95_95_91_49_93_95_48_1_p_0(
#line 463 "exception.m"
  MR_Box mercury__exception__HeadVar__1_1);

#line 589 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3_3(
#line 589 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 589 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3_4(
#line 589 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 589 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 589 "exception.m"
  MR_Cont mercury__exception__cont,
#line 589 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 586 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3_1(
#line 586 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 586 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3_2(
#line 586 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 586 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 586 "exception.m"
  MR_Cont mercury__exception__cont,
#line 586 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 579 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2_3(
#line 579 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 579 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2_4(
#line 579 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 579 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 579 "exception.m"
  MR_Cont mercury__exception__cont,
#line 579 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 576 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2_1(
#line 576 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 576 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2_2(
#line 576 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 576 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 576 "exception.m"
  MR_Cont mercury__exception__cont,
#line 576 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 638 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_111_114_101_95_100_101_116_95_95_91_51_93_95_49_5_p_1_1(
#line 638 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 638 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 631 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_111_114_101_95_100_101_116_95_95_91_51_93_95_48_5_p_0_1(
#line 631 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 631 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 536 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_49_5_p_1_3(
#line 536 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 536 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 536 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 533 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_49_5_p_1_2(
#line 533 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 533 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 682 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_49_5_p_1_1(
#line 682 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 682 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 524 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0_3(
#line 524 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 524 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 524 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 521 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0_2(
#line 521 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 521 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 677 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0_1(
#line 677 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 677 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 541 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_51_3_p_3_2(
#line 541 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 541 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 541 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 538 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_51_3_p_3_1(
#line 538 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 538 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 536 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_50_3_p_2_2(
#line 536 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 536 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 536 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 533 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_50_3_p_2_1(
#line 533 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 533 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 530 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_49_3_p_1_2(
#line 530 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 530 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 530 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 527 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_49_3_p_1_1(
#line 527 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 527 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 524 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_48_3_p_0_2(
#line 524 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 524 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 524 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 521 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_48_3_p_0_1(
#line 521 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 521 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 784 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_stm_cc_multi__784__1_4_p_0(
#line 784 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_21,
#line 784 "exception.m"
  MR_Word mercury__exception__TransactionGoal_6,
#line 784 "exception.m"
  MR_Box mercury__exception__STATE_VARIABLE_STM_0_14,
#line 784 "exception.m"
  MR_Tuple * mercury__exception__HeadVar__4_16);

#line 771 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_stm_det__771__1_4_p_0(
#line 771 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_21,
#line 771 "exception.m"
  MR_Word mercury__exception__TransactionGoal_6,
#line 771 "exception.m"
  MR_Box mercury__exception__STATE_VARIABLE_STM_0_14,
#line 771 "exception.m"
  MR_Tuple * mercury__exception__HeadVar__4_16);

#line 590 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_1(
#line 590 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 590 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 590 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 590 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_2(
#line 590 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 589 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0(
#line 589 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_53,
#line 589 "exception.m"
  MR_Word mercury__exception__WrappedGoal_40,
#line 589 "exception.m"
  MR_Word * mercury__exception__HeadVar__3_46,
#line 589 "exception.m"
  MR_Cont mercury__exception__cont,
#line 589 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 580 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_1(
#line 580 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 580 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 580 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 580 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_2(
#line 580 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 579 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0(
#line 579 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_53,
#line 579 "exception.m"
  MR_Word mercury__exception__WrappedGoal_24,
#line 579 "exception.m"
  MR_Word * mercury__exception__HeadVar__3_30,
#line 579 "exception.m"
  MR_Cont mercury__exception__cont,
#line 579 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 638 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_store_det__638__1_5_p_0(
#line 638 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_36,
#line 638 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_S_37,
#line 638 "exception.m"
  MR_Word mercury__exception__StoreGoal_2,
#line 638 "exception.m"
  MR_Tuple * mercury__exception__HeadVar__5_31);

#line 631 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_store_det__631__1_5_p_0(
#line 631 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_36,
#line 631 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_S_37,
#line 631 "exception.m"
  MR_Word mercury__exception__StoreGoal_2,
#line 631 "exception.m"
  MR_Tuple * mercury__exception__HeadVar__5_16);

#line 614 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_1(
#line 614 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 614 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 614 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 866 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_2(
#line 866 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 613 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0(
#line 613 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_20,
#line 613 "exception.m"
  MR_Word mercury__exception__WrappedGoal_8,
#line 613 "exception.m"
  MR_Word * mercury__exception__HeadVar__3_15,
#line 613 "exception.m"
  MR_Cont mercury__exception__cont,
#line 613 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 614 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_1(
#line 614 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 614 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 614 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 866 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_2(
#line 866 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 613 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0(
#line 613 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_20,
#line 613 "exception.m"
  MR_Word mercury__exception__WrappedGoal_8,
#line 613 "exception.m"
  MR_Word * mercury__exception__HeadVar__3_15,
#line 613 "exception.m"
  MR_Cont mercury__exception__cont,
#line 613 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 2890 "exception.m"
static MR_bool MR_CALL 
mercury__exception__now_near_stack_limits_0_p_0(void);

#line 2861 "exception.m"
static void MR_CALL 
mercury__exception__set_get_message_hook_2_p_0(void);

#line 2836 "exception.m"
static void MR_CALL 
mercury__exception__report_uncaught_exception_2_4_p_0(
#line 2836 "exception.m"
  MR_Word mercury__exception__Exception_5);

#line 2827 "exception.m"
static void MR_CALL 
mercury__exception__report_uncaught_exception_3_p_0_1(
#line 2827 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 2827 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 2827 "exception.m"
  MR_Box mercury__exception__wrapper_arg_2,
#line 2827 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_3);

#line 2824 "exception.m"
static void MR_CALL 
mercury__exception__report_uncaught_exception_3_p_0(
#line 2824 "exception.m"
  MR_Word mercury__exception__Exception_4);

#line 1625 "exception.m"
static void MR_CALL 
mercury__exception__call_handler_3_p_0(
#line 1625 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_7,
#line 1625 "exception.m"
  MR_Word mercury__exception__Handler_4,
#line 1625 "exception.m"
  MR_Word mercury__exception__Exception_5,
#line 1625 "exception.m"
  MR_Box * mercury__exception__Result_6);

#line 1619 "exception.m"
static MR_bool MR_CALL 
mercury__exception__call_goal_2_p_1(
#line 1619 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 1619 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 1619 "exception.m"
  MR_Box * mercury__exception__Result_4);

#line 1618 "exception.m"
static void MR_CALL 
mercury__exception__call_goal_2_p_0(
#line 1618 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 1618 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 1618 "exception.m"
  MR_Box * mercury__exception__Result_4);

#line 872 "exception.m"
void MR_CALL 
mercury__exception__builtin_throw_1_p_0(
#line 872 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1);

#line 712 "exception.m"
static void MR_CALL 
mercury__exception__consume_io_state_1_p_0(void);

#line 701 "exception.m"
static void MR_CALL 
mercury__exception__make_io_state_1_p_0(void);

#line 689 "exception.m"
static void MR_CALL 
mercury__exception__very_unsafe_perform_io_2_p_1(
#line 689 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_7,
#line 689 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 689 "exception.m"
  MR_Box * mercury__exception__Result_4);

#line 688 "exception.m"
static void MR_CALL 
mercury__exception__very_unsafe_perform_io_2_p_0(
#line 688 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_7,
#line 688 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 688 "exception.m"
  MR_Box * mercury__exception__Result_4);

#line 596 "exception.m"
static void MR_CALL 
mercury__exception__process_one_exception_result_5_p_0(
#line 596 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_31,
#line 596 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 596 "exception.m"
  MR_Word mercury__exception__STATE_VARIABLE_MaybeException_0_2,
#line 596 "exception.m"
  MR_Word * mercury__exception__STATE_VARIABLE_MaybeException_3,
#line 596 "exception.m"
  MR_Word mercury__exception__STATE_VARIABLE_Solutions_0_4,
#line 596 "exception.m"
  MR_Word * mercury__exception__STATE_VARIABLE_Solutions_5);

#line 492 "exception.m"
static void MR_CALL 
mercury__exception__wrap_success_2_p_3_1(
#line 492 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 492 "exception.m"
static void MR_CALL 
mercury__exception__wrap_success_2_p_2_1(
#line 492 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 463 "exception.m"
static void MR_CALL 
mercury__exception__use_1_p_0(
#line 463 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_2,
#line 463 "exception.m"
  MR_Box mercury__exception__HeadVar__1_1);

#line 613 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_1_3(
#line 613 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 613 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_1_4(
#line 613 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 613 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 613 "exception.m"
  MR_Cont mercury__exception__cont,
#line 613 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 610 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_1_1(
#line 610 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 610 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_1_2(
#line 610 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 610 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 610 "exception.m"
  MR_Cont mercury__exception__cont,
#line 610 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 613 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_0_3(
#line 613 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 613 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_0_4(
#line 613 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 613 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 613 "exception.m"
  MR_Cont mercury__exception__cont,
#line 613 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 610 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_0_1(
#line 610 "exception.m"
  void * mercury__exception__env_ptr_arg);

#line 610 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_0_2(
#line 610 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 610 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 610 "exception.m"
  MR_Cont mercury__exception__cont,
#line 610 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 541 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_3_2(
#line 541 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 541 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 541 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 538 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_3_1(
#line 538 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 538 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 536 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_2_2(
#line 536 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 536 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 536 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 533 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_2_1(
#line 533 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 533 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 530 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_1_2(
#line 530 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 530 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 530 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 527 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_1_1(
#line 527 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 527 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);

#line 524 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_0_2(
#line 524 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 524 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 524 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2);

#line 521 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_0_1(
#line 521 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 521 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1);


static /* final */ const MR_Box mercury__exception_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__exception_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__exception_scalar_common_3[2][4];

static /* final */ const MR_Box mercury__exception_scalar_common_4[2][5];

static /* final */ const MR_Integer mercury__exception_scalar_common_5[1][2];

static /* final */ const MR_Box mercury__exception_scalar_common_6[4][6];

static /* final */ const MR_Box mercury__exception_scalar_common_7[1][1];

static /* final */ const MR_Box mercury__exception_scalar_common_8[3][7];

static /* final */ const MR_Integer mercury__exception_scalar_common_9[1][3];

static /* final */ const MR_Box mercury__exception_scalar_common_10[1][8];




static /* final */ const MR_Box mercury__exception_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__exception__exception__type_ctor_info_exception_result_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box mercury__exception_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__exception_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__exception_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__exception_scalar_common_6[1])),
    ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_52_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box mercury__exception_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__exception_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__exception_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__exception_scalar_common_5[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__exception_scalar_common_6[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__exception_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__exception____vpti_pred_1__pseudo_1)),
    ((MR_Box) (&mercury__exception__exception__pti_exception_result_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mercury__exception_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__exception__exception__pti_exception_result_1__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mercury__exception_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__exception____vpti_pred_1__pseudo_exception__pti_exception_result_1__pseudo_1)),
    ((MR_Box) (&mercury__exception__exception__pti_exception_result_1__pseudo_1))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&mercury__exception_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__exception____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box mercury__exception_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__exception_scalar_common_8[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mercury__exception_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__exception____vpti_pred_3__pseudo_1__plain_stm_builtin__type_ctor_info_stm_0__plain_stm_builtin__type_ctor_info_stm_0)),
    ((MR_Box) (&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0)),
    ((MR_Box) (&mercury__exception____vpti_tuple_2__pseudo_1__plain_stm_builtin__type_ctor_info_stm_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mercury__exception_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__exception__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__exception__list__pti_list_1__pseudo_1))
  },
};

static /* final */ const MR_Integer mercury__exception_scalar_common_9[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box mercury__exception_scalar_common_10[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__exception_scalar_common_9[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__exception____vpti_pred_3__pseudo_1__pseudo_store__pti_store_1__pseudo_2__pseudo_store__pti_store_1__pseudo_2)),
    ((MR_Box) (&mercury__exception__store__pti_store_1__pseudo_2)),
    ((MR_Box) (&mercury__exception____vpti_tuple_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2))
  },
};



#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"
#line 991 "exception.m"

#ifdef MR_HIGHLEVEL_CODE

/*
** We also need to provide definitions of these builtins
** as functions rather than as macros.  This is needed
** (a) in case we take their address, and (b) for the
** GCC back-end interface.
*/

#undef mercury__exception__builtin_catch_3_p_0
#undef mercury__exception__builtin_catch_3_p_1
#undef mercury__exception__builtin_catch_3_p_2
#undef mercury__exception__builtin_catch_3_p_3
#undef mercury__exception__builtin_catch_3_p_4
#undef mercury__exception__builtin_catch_3_p_5

/* det ==> model_det */
void MR_CALL
mercury__exception__builtin_catch_3_p_0(MR_Mercury_Type_Info type_info,
    MR_Pred pred, MR_Pred handler_pred, MR_Box *output)
{
    mercury__exception__builtin_catch_model_det(type_info,
        pred, handler_pred, output);
}

/* semidet ==> model_semi */
MR_bool MR_CALL
mercury__exception__builtin_catch_3_p_1(MR_Mercury_Type_Info type_info,
    MR_Pred pred, MR_Pred handler_pred, MR_Box *output)
{
    return mercury__exception__builtin_catch_model_semi(type_info,
        pred, handler_pred, output);
}

/* cc_multi ==> model_det */
void MR_CALL
mercury__exception__builtin_catch_3_p_2(MR_Mercury_Type_Info type_info,
    MR_Pred pred, MR_Pred handler_pred, MR_Box *output)
{
    mercury__exception__builtin_catch_model_det(type_info,
        pred, handler_pred, output);
}

/* cc_nondet ==> model_semi */
MR_bool MR_CALL
mercury__exception__builtin_catch_3_p_3(MR_Mercury_Type_Info type_info,
    MR_Pred pred, MR_Pred handler_pred, MR_Box *output)
{
    return mercury__exception__builtin_catch_model_semi(type_info,
        pred, handler_pred, output);
}

/* multi ==> model_non */
void MR_CALL
mercury__exception__builtin_catch_3_p_4(MR_Mercury_Type_Info type_info,
    MR_Pred pred, MR_Pred handler_pred, MR_Box *output,
    MR_CONT_PARAMS)
{
    mercury__exception__builtin_catch_model_non(type_info,
        pred, handler_pred, output, MR_CONT_ARGS);
}

/* multi ==> model_non */
void MR_CALL
mercury__exception__builtin_catch_3_p_5(MR_Mercury_Type_Info type_info,
    MR_Pred pred, MR_Pred handler_pred, MR_Box *output,
    MR_CONT_PARAMS)
{
    mercury__exception__builtin_catch_model_non(type_info,
        pred, handler_pred, output, MR_CONT_ARGS);
}

/*---------------------------------------------------------------------------*/

static void
ML_call_goal_det_handcoded(MR_Mercury_Type_Info type_info,
    MR_Pred closure, MR_Box *result)
{
    typedef void MR_CALL DetFuncType(void *, MR_Box *);
    DetFuncType *code = (DetFuncType *)
        MR_field(MR_mktag(0), closure, (MR_Integer) 1);
    (*code)((void *) closure, result);
}

static MR_bool
ML_call_goal_semi_handcoded(MR_Mercury_Type_Info type_info,
    MR_Pred closure, MR_Box *result)
{
    typedef MR_bool MR_CALL SemidetFuncType(void *, MR_Box *);
    SemidetFuncType *code = (SemidetFuncType *)
        MR_field(MR_mktag(0), closure, (MR_Integer) 1);
    return (*code)((void *) closure, result);
}

static void
ML_call_goal_non_handcoded(MR_Mercury_Type_Info type_info,
    MR_Pred closure, MR_Box *result, MR_CONT_PARAMS)
{
    typedef void MR_CALL NondetFuncType(void *, MR_Box *,
        MR_CONT_PARAM_TYPES);
    NondetFuncType *code = (NondetFuncType *)
        MR_field(MR_mktag(0), closure, (MR_Integer) 1);
    (*code)((void *) closure, result, MR_CONT_ARGS);
}

/*---------------------------------------------------------------------------*/

static void
ML_call_handler_det_handcoded(MR_Mercury_Type_Info type_info,
    MR_Pred closure, MR_Univ exception, MR_Box *result)
{
    typedef void MR_CALL HandlerFuncType(void *, MR_Box, MR_Box *);
    HandlerFuncType *code = (HandlerFuncType *)
        MR_field(MR_mktag(0), closure, (MR_Integer) 1);
    (*code)((void *) closure, (MR_Box) exception, result);
}

/*---------------------------------------------------------------------------*/

#include <stdlib.h>
#include <setjmp.h>

typedef struct ML_ExceptionHandler_struct {
    struct ML_ExceptionHandler_struct *prev;
    jmp_buf     handler;
    MR_Univ     exception;
} ML_ExceptionHandler;

  #ifndef MR_THREAD_SAFE
  ML_ExceptionHandler   *ML_exception_handler;
  #endif

  #ifdef MR_THREAD_SAFE

    #define ML_GET_EXCEPTION_HANDLER()              MR_GETSPECIFIC(MR_exception_handler_key)
    #define ML_SET_EXCEPTION_HANDLER(val)       pthread_setspecific(MR_exception_handler_key, (val))

  #else  /* !MR_THREAD_SAFE */

    #define ML_GET_EXCEPTION_HANDLER()      ML_exception_handler
    #define ML_SET_EXCEPTION_HANDLER(val)   ML_exception_handler = (val)

  #endif /* !MR_THREAD_SAFE */

void MR_CALL
mercury__exception__builtin_throw_1_p_0(MR_Univ exception)
{
    ML_ExceptionHandler *exception_handler = ML_GET_EXCEPTION_HANDLER();

    if (exception_handler == NULL) {
        ML_report_uncaught_exception((MR_Word) exception);
        exit(EXIT_FAILURE);
    } else {
  #ifdef MR_DEBUG_JMPBUFS
        fprintf(stderr, "throw longjmp %p\n", exception_handler->handler);
  #endif
        exception_handler->exception = exception;
        longjmp(exception_handler->handler, 1);
    }
}

  #ifdef MR_NATIVE_GC

/*
** The following code is needed to trace the local variables
** in the builtin_catch_* functions for accurate GC.
*/

struct mercury__exception__builtin_catch_locals {
    /* fixed fields, from struct MR_StackChain */
    struct MR_StackChain *prev;
    void (*trace)(void *this_frame);
    /* locals for this function */
    MR_Mercury_Type_Info type_info;
    MR_Pred handler_pred;
};

static void
mercury__exception__builtin_catch_gc_trace(void *frame)
{
    struct mercury__exception__builtin_catch_locals *agc_locals = frame;
    /*
    ** Construct a type_info for the type `pred(univ, T)',
    ** which is the type of the handler_pred.
    */
    MR_VAR_ARITY_TYPEINFO_STRUCT(s, 2) type_info_for_handler_pred;
    type_info_for_handler_pred.MR_ti_type_ctor_info =
        &mercury__builtin__builtin__type_ctor_info_pred_0;
    type_info_for_handler_pred.MR_ti_var_arity_arity = 2;
    type_info_for_handler_pred.MR_ti_var_arity_arg_typeinfos[0] =
        (MR_TypeInfo)
        &mercury__univ__univ__type_ctor_info_univ_0;
    type_info_for_handler_pred.MR_ti_var_arity_arg_typeinfos[1] =
        (MR_TypeInfo) agc_locals->type_info;
    /*
    ** Call gc_trace/1 to trace the two local variables in this frame.
    */
    mercury__private_builtin__gc_trace_1_p_0(
        (MR_Word)
        &mercury__type_desc__type_desc__type_ctor_info_type_desc_0,
        (MR_Word) &agc_locals->type_info);
    mercury__private_builtin__gc_trace_1_p_0(
        (MR_Word) &type_info_for_handler_pred,
        (MR_Word) &agc_locals->handler_pred);
}

 #define ML_DECLARE_AGC_HANDLER                                                 struct mercury__exception__builtin_catch_locals agc_locals;

 #define ML_INSTALL_AGC_HANDLER(TYPE_INFO, HANDLER_PRED)                        do {                                                                            agc_locals.prev = mercury__private_builtin__stack_chain;                    agc_locals.trace = mercury__exception__builtin_catch_gc_trace;              agc_locals.type_info = (TYPE_INFO);                                         agc_locals.handler_pred = (HANDLER_PRED);                                   mercury__private_builtin__stack_chain = &agc_locals;                    } while(0)

 #define ML_UNINSTALL_AGC_HANDLER()                                             do {                                                                            mercury__private_builtin__stack_chain = agc_locals.prev;                } while (0)

  #define ML_AGC_LOCAL(NAME) (agc_locals.NAME)

  #else /* !MR_NATIVE_GC */

  /* If accurate GC is not enabled, we define all of these as NOPs. */
  #define ML_DECLARE_AGC_HANDLER
  #define ML_INSTALL_AGC_HANDLER(type_info, handler_pred)
  #define ML_UNINSTALL_AGC_HANDLER()
  #define ML_AGC_LOCAL(name) (name)

  #endif /* !MR_NATIVE_GC */

void MR_CALL
mercury__exception__builtin_catch_model_det(MR_Mercury_Type_Info type_info,
    MR_Pred pred, MR_Pred handler_pred, MR_Box *output)
{
    ML_ExceptionHandler this_handler;
    ML_DECLARE_AGC_HANDLER

    this_handler.prev = ML_GET_EXCEPTION_HANDLER();
    ML_SET_EXCEPTION_HANDLER(&this_handler);

    ML_INSTALL_AGC_HANDLER(type_info, handler_pred);

  #ifdef MR_DEBUG_JMPBUFS
    fprintf(stderr, "detcatch setjmp %p\n", this_handler.handler);
  #endif

    if (setjmp(this_handler.handler) == 0) {
        ML_call_goal_det_handcoded(type_info, pred, output);
        ML_SET_EXCEPTION_HANDLER(this_handler.prev);
        ML_UNINSTALL_AGC_HANDLER();
    } else {
  #ifdef MR_DEBUG_JMPBUFS
        fprintf(stderr, "detcatch caught jmp %p\n", this_handler.handler);
  #endif

        ML_SET_EXCEPTION_HANDLER(this_handler.prev);
        ML_UNINSTALL_AGC_HANDLER();
        ML_call_handler_det_handcoded(
            ML_AGC_LOCAL(type_info), ML_AGC_LOCAL(handler_pred),
            this_handler.exception, output);
    }
}

MR_bool MR_CALL
mercury__exception__builtin_catch_model_semi(MR_Mercury_Type_Info type_info,
    MR_Pred pred, MR_Pred handler_pred, MR_Box *output)
{
    ML_ExceptionHandler this_handler;
    ML_DECLARE_AGC_HANDLER

    this_handler.prev = ML_GET_EXCEPTION_HANDLER();
    ML_SET_EXCEPTION_HANDLER(&this_handler);

    ML_INSTALL_AGC_HANDLER(type_info, handler_pred);

  #ifdef MR_DEBUG_JMPBUFS
    fprintf(stderr, "semicatch setjmp %p\n", this_handler.handler);
  #endif

    if (setjmp(this_handler.handler) == 0) {
        MR_bool result = ML_call_goal_semi_handcoded(type_info, pred,
            output);
        ML_SET_EXCEPTION_HANDLER(this_handler.prev);
        ML_UNINSTALL_AGC_HANDLER();
        return result;
    } else {
  #ifdef MR_DEBUG_JMPBUFS
        fprintf(stderr, "semicatch caught jmp %p\n", this_handler.handler);
  #endif

        ML_SET_EXCEPTION_HANDLER(this_handler.prev);
        ML_UNINSTALL_AGC_HANDLER();
        ML_call_handler_det_handcoded(
            ML_AGC_LOCAL(type_info), ML_AGC_LOCAL(handler_pred),
            this_handler.exception, output);
        return MR_TRUE;
    }
}

  #ifdef MR_USE_GCC_NESTED_FUNCTIONS

void MR_CALL
mercury__exception__builtin_catch_model_non(MR_Mercury_Type_Info type_info,
    MR_Pred pred, MR_Pred handler_pred, MR_Box *output,
    MR_NestedCont cont)
{
    ML_ExceptionHandler this_handler;
    ML_DECLARE_AGC_HANDLER

    auto void MR_CALL success_cont(void);
    void MR_CALL success_cont(void) {
        /*
        ** If we reach here, it means that
        ** the nondet goal has succeeded, so we
        ** need to restore the previous exception
        ** handler before calling its continuation
        */
        ML_SET_EXCEPTION_HANDLER(this_handler.prev);
        (*cont)();

        /*
        ** If we get here, it means that the continuation
        ** has failed, and so we are about to redo the
        ** nondet goal.  Thus we need to re-establish
        ** its exception handler.
        */
        ML_SET_EXCEPTION_HANDLER(&this_handler);
    }

    this_handler.prev = ML_GET_EXCEPTION_HANDLER();
    ML_SET_EXCEPTION_HANDLER(&this_handler);

    ML_INSTALL_AGC_HANDLER(type_info, handler_pred);

    #ifdef MR_DEBUG_JMPBUFS
    fprintf(stderr, "noncatch setjmp %p\n", this_handler.handler);
    #endif

    if (setjmp(this_handler.handler) == 0) {
        ML_call_goal_non_handcoded(type_info, pred, output,
            success_cont);
        ML_SET_EXCEPTION_HANDLER(this_handler.prev);
        ML_UNINSTALL_AGC_HANDLER();
    } else {
    #ifdef MR_DEBUG_JMPBUFS
        fprintf(stderr, "noncatch caught jmp %p\n", this_handler.handler);
    #endif

        ML_SET_EXCEPTION_HANDLER(this_handler.prev);
        ML_UNINSTALL_AGC_HANDLER();
        ML_call_handler_det_handcoded(
            ML_AGC_LOCAL(type_info), ML_AGC_LOCAL(handler_pred),
            this_handler.exception, output);
        (*cont)();
    }
}

  #else /* ! MR_USE_GCC_NESTED_FUNCTIONS */

struct ML_catch_env {
    ML_ExceptionHandler this_handler;
    MR_Cont             cont;
    void                *cont_env;
};

static void MR_CALL
ML_catch_success_cont(void *env_ptr) {
    struct ML_catch_env *env = (struct ML_catch_env *) env_ptr;

    /*
    ** If we reach here, it means that the nondet goal has succeeded, so we
    ** need to restore the previous exception handler before calling its
    ** continuation.
    */
    ML_SET_EXCEPTION_HANDLER(env->this_handler.prev);
    (*env->cont)(env->cont_env);

    /*
    ** If we get here, it means that the continuation has failed, and so we
    ** are about to redo the nondet goal. Thus we need to re-establish
    ** its exception handler.
    */
    ML_SET_EXCEPTION_HANDLER(&env->this_handler);
}

void MR_CALL
mercury__exception__builtin_catch_model_non(MR_Mercury_Type_Info type_info,
    MR_Pred pred, MR_Pred handler_pred, MR_Box *output,
    MR_Cont cont, void *cont_env)
{
    ML_DECLARE_AGC_HANDLER
    struct ML_catch_env locals;
    locals.cont = cont;
    locals.cont_env = cont_env;

    locals.this_handler.prev = ML_GET_EXCEPTION_HANDLER();
    ML_SET_EXCEPTION_HANDLER(&locals.this_handler);

    ML_INSTALL_AGC_HANDLER(type_info, handler_pred);

    #ifdef MR_DEBUG_JMPBUFS
    fprintf(stderr, "noncatch setjmp %p\n", locals.this_handler.handler);
    #endif

    if (setjmp(locals.this_handler.handler) == 0) {
        ML_call_goal_non_handcoded(type_info, pred, output,
            ML_catch_success_cont, &locals);

        /*
        ** If we reach here, it means that the nondet goal has failed, so we
        ** need to restore the previous exception handler.
        */
        ML_SET_EXCEPTION_HANDLER(locals.this_handler.prev);
        ML_UNINSTALL_AGC_HANDLER();
        return;
    } else {
        /*
        ** We caught an exception. Restore the previous exception handler,
        ** and then invoke the handler predicate for this handler.
        */

    #ifdef MR_DEBUG_JMPBUFS
        fprintf(stderr, "noncatch caught jmp %p\n",
            locals.this_handler.handler);
    #endif

        ML_SET_EXCEPTION_HANDLER(locals.this_handler.prev);
        ML_UNINSTALL_AGC_HANDLER();
        ML_call_handler_det_handcoded(
            ML_AGC_LOCAL(type_info), ML_AGC_LOCAL(handler_pred),
            locals.this_handler.exception, output);
        cont(cont_env);
    }
}

  #endif /* ! MR_USE_GCC_NESTED_FUNCTIONS */

#endif /* MR_HIGHLEVEL_CODE */

#line 1820 "exception.m"

/* forward decls, to suppress gcc -Wmissing-decl warnings */
void mercury_sys_init_exceptions_init(void);
void mercury_sys_init_exceptions_init_type_tables(void);
#ifdef  MR_DEEP_PROFILING
void mercury_sys_init_exceptions_write_out_proc_statics(FILE *deep_fp,
    FILE *procrep_fp);
#endif

#ifndef MR_HIGHLEVEL_CODE

/*
** MR_throw_walk_stack():
** Unwind the stack as far as possible, until we reach a frame
** with an exception handler.  As we go, invoke either or both
** of two actions.
**
** (1) If MR_debug_enabled is set, then invoke
**     `MR_trace(..., MR_PORT_EXCEPTION, ...)' for each stack frame,
**     to signal to the debugger that the procedure has exited via
**     an exception.  This allows to user to use the `retry' command
**     to restart a goal which exited via an exception.
**
**     Note that if MR_STACK_TRACE is not defined, then we may not be
**     able to traverse the stack all the way; in that case, we just
**     print a warning and then continue.  It might be better to just
**     `#ifdef' out all this code (and the code in builtin_throw which
**     calls it) if MR_STACK_TRACE is not defined.
**
** (2) In deep profiling grades, execute the actions appropriate for
**     execution leaving the procedure invocation via the exception port.
**     (Deep profiling grades always set MR_STACK_TRACE, so in such grades
**     we *will* be able to traverse the stack all the way.)
**
** The arguments base_sp and base_curfr always hold MR_sp and MR_curfr.
** They exist only because we cannot take the addresses of MR_sp and MR_curfr.
*/

  #ifdef MR_DEEP_PROFILING
    #define WARNING(msg)                                            \
    do {                                                            \
        MR_fatal_error("cannot update exception counts: %s\n",   \
            msg);                                                   \
    } while (0)
  #else
    #define WARNING(msg)                                            \
    do {                                                            \
        fflush(stdout);                                             \
        fprintf(stderr, "mdb: warning: %s\n"                     \
            "This may result in some exception events\n"         \
            "being omitted from the trace.\n", (msg));           \
    } while (0)
  #endif

static MR_Code *
ML_throw_walk_stack(MR_Code *success_pointer, MR_Word *base_sp,
    MR_Word *base_curfr)
{
    const MR_Internal               *label;
    const MR_LabelLayout            *return_label_layout;

    /*
    ** Find the layout info for the stack frame pointed to by MR_succip.
    */

    label = MR_lookup_internal_by_addr(success_pointer);
    if (label == NULL) {
        WARNING("internal label not found\n");
        return NULL;
    }
    return_label_layout = label->MR_internal_layout;

    while (return_label_layout != NULL) {
        const MR_ProcLayout         *entry_layout;
        MR_Code                     *MR_jumpaddr;
        MR_StackWalkStepResult      result;
        const char                  *problem;
        MR_Unsigned                 reused_frames;
  #ifdef MR_DEEP_PROFILING
        MR_CallSiteDynamic          *csd;
        const MR_ProcLayout         *pl;
        MR_ProcStatic               *ps;
        MR_ProcStatic               *proc_static;
        int                         top_csd_slot;
        int                         middle_csd_slot;
        MR_CallSiteDynamic          *top_csd;
        MR_CallSiteDynamic          *middle_csd;
    #ifndef MR_USE_ACTIVATION_COUNTS
        int                         old_outermost_slot;
        MR_ProcDynamic              *old_outermost;
    #endif
  #endif

        /*
        ** Check if we have reached a frame with an exception handler.
        */

        entry_layout = return_label_layout->MR_sll_entry;
        if (!MR_DETISM_DET_STACK(entry_layout->MR_sle_detism)
            && MR_redoip_slot(base_curfr) ==
                MR_ENTRY(MR_exception_handler_do_fail))
        {
            return NULL;
        }

  #ifdef MR_DEEP_PROFILING

        /*
        ** The following code is based on the logic of
        ** runtime/mercury_deep_leave_port_body.h, differing
        ** in getting its parameters directly from stack frames
        ** guided by RTTI data and in having the additional error
        ** handling required by this. Any changes here may need to be
        ** reflected there and vice versa.
        */

    #ifdef MR_EXEC_TRACE
        if (! MR_disable_deep_profiling_in_debugger) {
        /* The matching parenthesis is near the end of the loop */
    #endif

        MR_enter_instrumentation();

        proc_static = entry_layout->MR_sle_proc_static;
        top_csd_slot = proc_static->MR_ps_cur_csd_stack_slot;
        middle_csd_slot = proc_static->MR_ps_next_csd_stack_slot;

        if (top_csd_slot <= 0) {
            MR_fatal_error("builtin_throw: no top csd slot");
        }

        if (middle_csd_slot <= 0) {
            MR_fatal_error("builtin_throw: no middle csd slot");
        }

    #ifndef MR_USE_ACTIVATION_COUNTS
        old_outermost_slot = proc_static->MR_ps_old_outermost_stack_slot;

        if (old_outermost_slot <= 0) {
            MR_fatal_error("builtin_throw: no old_outer slot");
        }
    #endif

        if (MR_DETISM_DET_STACK(entry_layout->MR_sle_detism)) {
            top_csd = (MR_CallSiteDynamic *)
                MR_based_stackvar(base_sp, top_csd_slot);
            middle_csd = (MR_CallSiteDynamic *)
                MR_based_stackvar(base_sp, middle_csd_slot);
    #ifndef MR_USE_ACTIVATION_COUNTS
            old_outermost = (MR_ProcDynamic *)
                MR_based_stackvar(base_sp, old_outermost_slot);
    #endif
        } else {
            top_csd = (MR_CallSiteDynamic *)
                MR_based_framevar(base_curfr, top_csd_slot);
            middle_csd = (MR_CallSiteDynamic *)
                MR_based_framevar(base_curfr, middle_csd_slot);
    #ifndef MR_USE_ACTIVATION_COUNTS
            old_outermost = (MR_ProcDynamic *)
                MR_based_framevar(base_curfr, old_outermost_slot);
    #endif
        }

        csd = middle_csd;
        MR_deep_assert(csd, NULL, NULL, csd == MR_current_call_site_dynamic);

    #ifdef MR_DEEP_PROFILING_PORT_COUNTS
        csd->MR_csd_own.MR_own_excps++;
    #endif

        MR_deep_assert(csd, NULL, NULL, csd->MR_csd_callee_ptr != NULL);
        pl = csd->MR_csd_callee_ptr->MR_pd_proc_layout;
        MR_deep_assert(csd, pl, NULL, pl != NULL);
        ps = pl->MR_sle_proc_static;
        MR_deep_assert(csd, pl, ps, ps != NULL);

    #ifdef MR_USE_ACTIVATION_COUNTS
        /* decrement activation count */
        ps->MR_ps_activation_count--;
        MR_deep_assert(csd, pl, ps, ps->MR_ps_activation_count >= 0);
    #else
        /* set outermost activation pointer */
        ps->MR_ps_outermost_activation_ptr = old_outermost;
    #endif

        /* set current csd */
        MR_current_call_site_dynamic = top_csd;

        MR_leave_instrumentation();
    #ifdef MR_EXEC_TRACE
        /* The matching parenthesis is near the start of the loop */
        }
    #endif

  #endif

        if (MR_debug_enabled) {
            /* Invoke MR_trace() to trace the exception. */
            if (return_label_layout->MR_sll_port != MR_PORT_EXCEPTION) {
                MR_fatal_error("return layout port is not exception");
            }

            MR_jumpaddr = MR_trace(return_label_layout);
            if (MR_jumpaddr != NULL) {
                return MR_jumpaddr;
            }
        }

        /*
        ** Unwind the stacks back to the previous stack frame.
        ** Note that we don't care whether the frame has been reused.
        */
        result = MR_stack_walk_step(entry_layout, &return_label_layout,
            &base_sp, &base_curfr, &reused_frames, &problem);
        if (result != MR_STEP_OK) {
            WARNING(problem);
            return NULL;
        }
        MR_restore_transient_registers();
        MR_sp_word = (MR_Word) base_sp;
        MR_curfr_word = (MR_Word) base_curfr;
        MR_save_transient_registers();
    }
    return NULL;
}

/* swap the heap with the solutions heap */
#define swap_heaps()                                                \
{                                                                   \
    /* save the current heap */                                     \
    MR_Word         *swap_heaps_temp_hp;                            \
    MR_MemoryZone   *swap_heaps_temp_hp_zone;                       \
                                                                    \
    swap_heaps_temp_hp = MR_hp;                                     \
    swap_heaps_temp_hp_zone = MR_ENGINE(MR_eng_heap_zone);          \
                                                                    \
    /* set heap to solutions heap */                                \
    MR_hp_word = (MR_Word) MR_sol_hp;                               \
    MR_ENGINE(MR_eng_heap_zone) =                                   \
        MR_ENGINE(MR_eng_solutions_heap_zone);                      \
                                                                    \
    /* set the solutions heap to be the old heap */                 \
    MR_sol_hp = swap_heaps_temp_hp;                                 \
    MR_ENGINE(MR_eng_solutions_heap_zone) = swap_heaps_temp_hp_zone;\
}

MR_define_extern_entry(mercury__exception__builtin_catch_3_0); /* det */
MR_define_extern_entry(mercury__exception__builtin_catch_3_1); /* semidet */
MR_define_extern_entry(mercury__exception__builtin_catch_3_2); /* cc_multi */
MR_define_extern_entry(mercury__exception__builtin_catch_3_3); /* cc_nondet */
MR_define_extern_entry(mercury__exception__builtin_catch_3_4); /* multi */
MR_define_extern_entry(mercury__exception__builtin_catch_3_5); /* nondet */

MR_define_extern_entry(mercury__exception__builtin_throw_1_0);

/* the following is defined in runtime/mercury_ho_call.c */
MR_declare_entry(mercury__do_call_closure_compact);

/* the following is defined in runtime/mercury_trace_base.c */
MR_declare_entry(MR_do_trace_redo_fail);

#ifdef  MR_DEEP_PROFILING
MR_declare_label(mercury__exception__builtin_catch_3_0_i1);
MR_declare_label(mercury__exception__builtin_catch_3_1_i1);
MR_declare_label(mercury__exception__builtin_catch_3_2_i1);
MR_declare_label(mercury__exception__builtin_catch_3_3_i1);
MR_declare_label(mercury__exception__builtin_catch_3_4_i1);
MR_declare_label(mercury__exception__builtin_catch_3_5_i1);
#endif

MR_declare_label(mercury__exception__builtin_catch_3_0_i2);
MR_declare_label(mercury__exception__builtin_catch_3_1_i2);
MR_declare_label(mercury__exception__builtin_catch_3_2_i2);
MR_declare_label(mercury__exception__builtin_catch_3_3_i2);
MR_declare_label(mercury__exception__builtin_catch_3_4_i2);
MR_declare_label(mercury__exception__builtin_catch_3_5_i2);

#ifdef  MR_DEEP_PROFILING
MR_declare_label(mercury__exception__builtin_catch_3_0_i3);
MR_declare_label(mercury__exception__builtin_catch_3_1_i3);
MR_declare_label(mercury__exception__builtin_catch_3_2_i3);
MR_declare_label(mercury__exception__builtin_catch_3_3_i3);
MR_declare_label(mercury__exception__builtin_catch_3_4_i3);
MR_declare_label(mercury__exception__builtin_catch_3_5_i3);

MR_declare_label(mercury__exception__builtin_catch_3_4_i4);
MR_declare_label(mercury__exception__builtin_catch_3_5_i4);
MR_declare_label(mercury__exception__builtin_catch_3_4_i5);
MR_declare_label(mercury__exception__builtin_catch_3_5_i5);
#endif

#if defined(MR_USE_TRAIL) || defined(MR_DEEP_PROFILING)
  MR_declare_label(mercury__exception__builtin_catch_3_4_i6);
  MR_declare_label(mercury__exception__builtin_catch_3_5_i6);
#endif

#ifdef  MR_DEEP_PROFILING
MR_declare_label(mercury__exception__builtin_catch_3_4_i7);
MR_declare_label(mercury__exception__builtin_catch_3_5_i7);
#endif

#ifdef  MR_DEEP_PROFILING
MR_declare_label(mercury__exception__builtin_catch_3_0_i8);
MR_declare_label(mercury__exception__builtin_catch_3_1_i8);
MR_declare_label(mercury__exception__builtin_catch_3_2_i8);
MR_declare_label(mercury__exception__builtin_catch_3_3_i8);
MR_declare_label(mercury__exception__builtin_catch_3_4_i8);
MR_declare_label(mercury__exception__builtin_catch_3_5_i8);
#endif

MR_declare_label(mercury__exception__builtin_throw_1_0_i1);

#define MR_DUMMY_LINE   0

MR_call_sites_user_one_ho(exception, builtin_catch, 3, 0, MR_DUMMY_LINE);
MR_proc_static_user_one_site(exception, builtin_catch, 3, 0,
    "exception.m", MR_DUMMY_LINE, MR_TRUE);
MR_call_sites_user_one_ho(exception, builtin_catch, 3, 1, MR_DUMMY_LINE);
MR_proc_static_user_one_site(exception, builtin_catch, 3, 1,
    "exception.m", MR_DUMMY_LINE, MR_TRUE);
MR_call_sites_user_one_ho(exception, builtin_catch, 3, 2, MR_DUMMY_LINE);
MR_proc_static_user_one_site(exception, builtin_catch, 3, 2,
    "exception.m", MR_DUMMY_LINE, MR_TRUE);
MR_call_sites_user_one_ho(exception, builtin_catch, 3, 3, MR_DUMMY_LINE);
MR_proc_static_user_one_site(exception, builtin_catch, 3, 3,
    "exception.m", MR_DUMMY_LINE, MR_TRUE);
MR_call_sites_user_one_ho(exception, builtin_catch, 3, 4, MR_DUMMY_LINE);
MR_proc_static_user_one_site(exception, builtin_catch, 3, 4,
    "exception.m", MR_DUMMY_LINE, MR_TRUE);
MR_call_sites_user_one_ho(exception, builtin_catch, 3, 5, MR_DUMMY_LINE);
MR_proc_static_user_one_site(exception, builtin_catch, 3, 5,
    "exception.m", MR_DUMMY_LINE, MR_TRUE);

/*
** The various procedures of builtin_catch all allocate their stack frames
** on the nondet stack, so for the purposes of doing stack traces we say
** they have MR_DETISM_NON, even though they are not actually nondet.
**
** The fields of the MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT macro are
** the following:
**
** MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT(detism, slots, succip_locn,
**  pred_or_func, module, name, arity, mode)
**
** We must use MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT instead of the
** MR_STATIC_USER_PROC_STATIC_PROC_LAYOUT version, because with intermodule
** optimization, the caller of builtin_catch may be inlined in other modules
** (e.g. browser/declarative_debugger.m), and deep profiling may therefore
** need the address of the proc_layout structure for the call's
** call_site_static structure.
**
** Additionally, the compiler generated declaration for the proc_layout
** structure will be declared extern if the address is required in other
** modules.  GCC 4 and above consider a static definition and a non-static
** declaration to be an error.
*/
MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT(
    MR_DETISM_NON, MR_PROC_NO_SLOT_COUNT, -1,
    MR_PREDICATE, exception, builtin_catch, 3, 0);
MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT(
    MR_DETISM_NON, MR_PROC_NO_SLOT_COUNT, -1,
    MR_PREDICATE, exception, builtin_catch, 3, 1);
MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT(
    MR_DETISM_NON, MR_PROC_NO_SLOT_COUNT, -1,
    MR_PREDICATE, exception, builtin_catch, 3, 2);
MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT(
    MR_DETISM_NON, MR_PROC_NO_SLOT_COUNT, -1,
    MR_PREDICATE, exception, builtin_catch, 3, 3);
MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT(
    MR_DETISM_NON, MR_PROC_NO_SLOT_COUNT, -1,
    MR_PREDICATE, exception, builtin_catch, 3, 4);
MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT(
    MR_DETISM_NON, MR_PROC_NO_SLOT_COUNT, -1,
    MR_PREDICATE, exception, builtin_catch, 3, 5);

#ifdef  MR_DEEP_PROFILING
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 0, 1);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 1, 1);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 2, 1);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 3, 1);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 4, 1);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 5, 1);
#endif

MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 0, 2);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 1, 2);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 2, 2);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 3, 2);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 4, 2);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 5, 2);

#ifdef  MR_DEEP_PROFILING
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 0, 3);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 1, 3);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 2, 3);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 3, 3);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 4, 3);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 5, 3);
#endif

#ifdef  MR_DEEP_PROFILING
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 4, 4);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 5, 4);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 4, 5);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 5, 5);
#endif

#if defined(MR_USE_TRAIL) || defined(MR_DEEP_PROFILING)
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 4, 6);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 5, 6);
#endif

#ifdef  MR_DEEP_PROFILING
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 4, 7);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 5, 7);
#endif

#ifdef  MR_DEEP_PROFILING
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 0, 8);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 1, 8);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 2, 8);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 3, 8);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 4, 8);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_catch, 3, 5, 8);
#endif

MR_proc_static_user_no_site(exception, builtin_throw, 1, 0,
    "exception.m", MR_DUMMY_LINE, MR_TRUE);

/*
** See the above comments regarding builtin_catch for the reason we
** must use MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT instead of 
** MR_STATIC_USER_PROC_STATIC_PROC_LAYOUT here.
*/
MR_EXTERN_USER_PROC_STATIC_PROC_LAYOUT(
        MR_DETISM_DET, 1, MR_LONG_LVAL_STACKVAR_INT(1),
        MR_PREDICATE, exception, builtin_throw, 1, 0);
MR_MAKE_USER_INTERNAL_LAYOUT(exception, builtin_throw, 1, 0, 1);

MR_BEGIN_MODULE(hand_written_exception_module)
    MR_init_entry_sl(mercury__exception__builtin_catch_3_0);
    MR_init_entry_sl(mercury__exception__builtin_catch_3_1);
    MR_init_entry_sl(mercury__exception__builtin_catch_3_2);
    MR_init_entry_sl(mercury__exception__builtin_catch_3_3);
    MR_init_entry_sl(mercury__exception__builtin_catch_3_4);
    MR_init_entry_sl(mercury__exception__builtin_catch_3_5);

#ifdef  MR_DEEP_PROFILING
    MR_init_label(mercury__exception__builtin_catch_3_0_i1);
    MR_init_label(mercury__exception__builtin_catch_3_1_i1);
    MR_init_label(mercury__exception__builtin_catch_3_2_i1);
    MR_init_label(mercury__exception__builtin_catch_3_3_i1);
    MR_init_label(mercury__exception__builtin_catch_3_4_i1);
    MR_init_label(mercury__exception__builtin_catch_3_5_i1);
#endif

    MR_init_label_sl(mercury__exception__builtin_catch_3_0_i2);
    MR_init_label_sl(mercury__exception__builtin_catch_3_1_i2);
    MR_init_label_sl(mercury__exception__builtin_catch_3_2_i2);
    MR_init_label_sl(mercury__exception__builtin_catch_3_3_i2);
    MR_init_label_sl(mercury__exception__builtin_catch_3_4_i2);
    MR_init_label_sl(mercury__exception__builtin_catch_3_5_i2);

#ifdef  MR_DEEP_PROFILING
    MR_init_label_sl(mercury__exception__builtin_catch_3_0_i3);
    MR_init_label_sl(mercury__exception__builtin_catch_3_1_i3);
    MR_init_label_sl(mercury__exception__builtin_catch_3_2_i3);
    MR_init_label_sl(mercury__exception__builtin_catch_3_3_i3);
    MR_init_label_sl(mercury__exception__builtin_catch_3_4_i3);
    MR_init_label_sl(mercury__exception__builtin_catch_3_5_i3);
#endif

#ifdef  MR_DEEP_PROFILING
    MR_init_label_sl(mercury__exception__builtin_catch_3_4_i4);
    MR_init_label_sl(mercury__exception__builtin_catch_3_5_i4);
    MR_init_label_sl(mercury__exception__builtin_catch_3_4_i5);
    MR_init_label_sl(mercury__exception__builtin_catch_3_5_i5);
#endif

#if defined(MR_USE_TRAIL) || defined(MR_DEEP_PROFILING)
    MR_init_label_sl(mercury__exception__builtin_catch_3_4_i6);
    MR_init_label_sl(mercury__exception__builtin_catch_3_5_i6);
#endif

#ifdef  MR_DEEP_PROFILING
    MR_init_label_sl(mercury__exception__builtin_catch_3_4_i7);
    MR_init_label_sl(mercury__exception__builtin_catch_3_5_i7);
#endif

#ifdef  MR_DEEP_PROFILING
    MR_init_label(mercury__exception__builtin_catch_3_0_i8);
    MR_init_label(mercury__exception__builtin_catch_3_1_i8);
    MR_init_label(mercury__exception__builtin_catch_3_2_i8);
    MR_init_label(mercury__exception__builtin_catch_3_3_i8);
    MR_init_label(mercury__exception__builtin_catch_3_4_i8);
    MR_init_label(mercury__exception__builtin_catch_3_5_i8);
#endif

    MR_init_entry_sl(mercury__exception__builtin_throw_1_0);
    MR_init_label_sl(mercury__exception__builtin_throw_1_0_i1);
MR_BEGIN_CODE

/*
** builtin_catch(Goal, Handler, Result)
**  call Goal(R).
**  if succeeds, set Result = R.
**  if fails, fail.
**  if throws an exception, call Handler(Exception, Result).
**
** On entry, we have a type_info (which we don't use) in MR_r1,
** the Goal to execute in MR_r2 and the Handler in MR_r3.
** On exit, we should put Result in MR_r1.
**
** There are slight differences between the versions of the code
** for the different determinisms.
*/

#define save_r1                 do {                                                                        MR_framevar(1) = MR_r1;                                             } while (0)
#define save_r1r2               do {                                                                        MR_framevar(1) = MR_r1;                                                 MR_framevar(2) = MR_r2;                                             } while (0)
#define restore_r1              do {                                                                        MR_r1 = MR_framevar(1);                                             } while (0)
#define restore_r1r2            do {                                                                        MR_r1 = MR_framevar(1);                                                 MR_r2 = MR_framevar(2);                                             } while (0)

/* mercury__exception__builtin_catch_3_0: the det version */
#define proc_label              mercury__exception__builtin_catch_3_0
#define proc_layout             MR_proc_layout_user_name(exception,                                         builtin_catch, 3, 0)
#define excp_handler            MR_MODEL_DET_HANDLER
#define model                   "[model det]"
#define save_results()          save_r1
#define restore_results()       restore_r1
#define handle_ticket_on_exit() do {                                                                        MR_prune_ticket();                                                  } while (0)

#include "mercury_exception_catch_body.h"

#undef  proc_layout
#undef  proc_label

/* mercury__exception__builtin_catch_3_2: the cc_multi version */
/* identical to mercury__exception__builtin_catch_3_0 except for label names */
#define proc_label              mercury__exception__builtin_catch_3_2
#define proc_layout             MR_proc_layout_user_name(exception,                                     builtin_catch, 3, 2)

#include "mercury_exception_catch_body.h"

#undef  handle_ticket_on_exit
#undef  restore_results
#undef  save_results
#undef  model
#undef  excp_handler
#undef  proc_layout
#undef  proc_label

/* mercury__exception__builtin_catch_3_1: the semidet version */
#define proc_label              mercury__exception__builtin_catch_3_1
#define proc_layout             MR_proc_layout_user_name(exception,                                     builtin_catch, 3, 1)
#define excp_handler            MR_MODEL_SEMI_HANDLER
#define model                   "[model semi]"
#define save_results()          save_r1r2
#define restore_results()       restore_r1r2
#define handle_ticket_on_exit() do {                                                                        if (MR_r1) {                                                                MR_prune_ticket();                                                  } else {                                                                    MR_discard_ticket();                                                }                                                                   } while (0)

#include "mercury_exception_catch_body.h"

#undef  proc_layout
#undef  proc_label

/* mercury__exception__builtin_catch_3_3: the cc_nondet version */
/* identical to mercury__exception__builtin_catch_3_1 except for label names */
#define proc_label              mercury__exception__builtin_catch_3_3
#define proc_layout             MR_proc_layout_user_name(exception,                                     builtin_catch, 3, 3)

#include "mercury_exception_catch_body.h"

#undef  handle_ticket_on_exit
#undef  restore_results
#undef  save_results
#undef  model
#undef  excp_handler
#undef  proc_layout
#undef  proc_label

/* mercury__exception__builtin_catch_3_4: the multi version */
#define proc_label              mercury__exception__builtin_catch_3_4
#define proc_layout             MR_proc_layout_user_name(exception,                                     builtin_catch, 3, 4)
#define excp_handler            MR_MODEL_NON_HANDLER
#define model                   "[model non]"
#define save_results()          save_r1
#define restore_results()       restore_r1
#define version_model_non       MR_TRUE
#define handle_ticket_on_exit() ((void) 0)
#define handle_ticket_on_fail() do {                                                                MR_prune_ticket();                                          } while (0)

#include "mercury_exception_catch_body.h"

#undef  proc_layout
#undef  proc_label

/* mercury__exception__builtin_catch_3_5: the nondet version */
/* identical to mercury__exception__builtin_catch_3_4 except for label names */
#define proc_label              mercury__exception__builtin_catch_3_5
#define proc_layout             MR_proc_layout_user_name(exception,                                         builtin_catch, 3, 5)

#include "mercury_exception_catch_body.h"

#undef  handle_ticket_on_fail
#undef  handle_ticket_on_exit
#undef  version_model_non
#undef  restore_results
#undef  save_results
#undef  model
#undef  excp_handler
#undef  proc_layout
#undef  proc_label

/*
** builtin_throw(Exception):
**
** Throw the specified exception.
** That means unwinding the nondet stack until we find a handler,
** unwinding all the other Mercury stacks, and then
** calling longjmp() to unwind the C stack.
** The longjmp() will branch to builtin_catch which will then
** call Handler(Exception, Result).
**
** On entry, we have Exception in MR_r1.
*/

MR_define_entry(mercury__exception__builtin_throw_1_0);
{
    MR_Word                     exception;
    MR_Word                     handler;
    enum MR_HandlerCodeModel    catch_code_model;
    MR_bool                     trace_from_full;
    MR_Word                     *orig_curfr;
    MR_Unsigned                 exception_event_number;
    MR_bool                     walk_stack;

    exception = MR_r1;
    exception_event_number = MR_trace_event_number;

    /*
    ** Let the debugger and/or the deep profiler trace exception throwing.
    */

#ifdef  MR_DEEP_PROFILING
    walk_stack = MR_TRUE;
#else
    walk_stack = MR_debug_enabled;
#endif

    if (walk_stack) {
        MR_Code     *MR_jumpaddr;

        MR_trace_set_exception_value(exception);
        MR_save_transient_registers();
        MR_jumpaddr = ML_throw_walk_stack(MR_succip, MR_sp, MR_curfr);
        MR_restore_transient_registers();

        if (MR_jumpaddr != NULL) {
            MR_GOTO(MR_jumpaddr);
        }
    }

    /*
    ** Search the nondet stack for an exception handler,
    ** i.e. a frame whose redoip is `MR_exception_handler_do_fail'
    ** (one created by `builtin_catch').
    ** N.B.  We search down the `succfr' chain, not the `prevfr' chain;
    ** this ensures that we only find handlers installed by our callers,
    ** not handlers installed by procedures that we called but which
    ** are still on the nondet stack because they left choice points
    ** behind.
    */

    orig_curfr = MR_curfr;
    while (MR_redoip_slot(MR_curfr)
        != MR_ENTRY(MR_exception_handler_do_fail))
    {
        MR_curfr_word = MR_succfr_slot_word(MR_curfr);
        if (MR_curfr < MR_CONTEXT(MR_ctxt_nondetstack_zone)->MR_zone_min) {
            MR_Word save_succip_word;

            /*
            ** There was no exception handler.
            **
            ** We restore the original value of MR_curfr, print out some
            ** diagnostics, and then terminate execution.
            **
            ** We need to save the registers to the fake_reg array using
            ** MR_save_registers() before calling ML_report_uncaught_exception,
            ** since that is Mercury code and the C->Mercury interface expects
            ** the registers to be saved. We also need to save & restore
            ** the MR_succip across that call, since any call to Mercury code
            ** may clobber MR_succip (and also the Mercury registers MR_r1,
            ** MR_r2, MR_r3, etc., but for those we don't care, since we don't
            ** use them). Note that the MR_save_registers() alone is not
            ** sufficient since the Mercury code may clobber the copy of
            ** MR_succip in the fake_reg.
            */

            MR_curfr_word = (MR_Word) orig_curfr;
            fflush(stdout);
            save_succip_word = MR_succip_word;
            MR_save_registers();
            ML_report_uncaught_exception(exception);
            MR_succip_word = save_succip_word;
            MR_trace_report(stderr);
            if (exception_event_number > 0) {
                if (MR_standardize_event_details) {
                    fprintf(stderr,
                        "Last trace event before the unhandled exception"
                        " was event #E%ld.\n",
                        (long)
                            MR_standardize_event_num(exception_event_number));
                } else {
                    fprintf(stderr,
                        "Last trace event before the unhandled exception"
                        " was event #%ld.\n",
                        (long) exception_event_number);
                }
            }
            if (walk_stack) {
                /*
                ** The stack has already been unwound by ML_throw_walk_stack(),
                ** so we can't dump it. (In fact, if we tried to dump the
                ** now-empty stack, we'd get incorrect results, since
                ** ML_throw_walk_stack() does not restore MR_succip
                ** to the appropriate value.)
                */
            } else {
                MR_dump_stack(MR_succip, MR_sp, MR_curfr, MR_FALSE);
            }

            MR_perform_registered_exception_cleanups();
            exit(1);
        }
    }

    /*
    ** Save the handler we found.
    */
    catch_code_model = MR_EXCEPTION_STRUCT->MR_excp_code_model;
    handler = MR_EXCEPTION_STRUCT->MR_excp_handler;
    trace_from_full = (MR_bool) MR_EXCEPTION_STRUCT->MR_excp_full_trace;

    /*
    ** Reset the success ip (i.e. return address).
    ** This ensures that when we return from this procedure,
    ** we will return to the caller of `builtin_catch'.
    */
    MR_succip_word = MR_succip_slot_word(MR_curfr);

    /*
    ** Reset the det stack.
    */
    MR_sp_word = (MR_Word) MR_EXCEPTION_STRUCT->MR_excp_stack_ptr;

#ifdef MR_USE_TRAIL
    /*
    ** Reset the trail.
    */
    MR_reset_ticket(MR_EXCEPTION_STRUCT->MR_excp_trail_ptr,
        MR_exception);
    MR_discard_tickets_to(MR_EXCEPTION_STRUCT->MR_excp_ticket_counter);
#endif
#ifdef MR_RECLAIM_HP_ON_FAILURE
    /*
    ** Reset the heap.  But we need to be careful to preserve the
    ** thrown exception object.
    **
    ** The following algorithm uses the `solutions heap', and will work
    ** with non-conservative gc. We copy the exception object to the
    ** solutions_heap, reset the heap pointer, and then copy it back.
    **
    ** An improvement to this would be to copy the exception object to the
    ** solutions heap, but have deep_copy add an offset to the pointers
    ** (at least, those that would otherwise point to the solutions heap),
    ** so that, when finished, a block move of the solutions heap back to
    ** the real heap will leave all the pointers in the correct place.
    */
{
    MR_Word * saved_solns_heap_ptr;

    /* Switch to the solutions heap. */
    if (MR_ENGINE(MR_eng_heap_zone) == MR_EXCEPTION_STRUCT->MR_excp_heap_zone) {
        swap_heaps();
    }

    saved_solns_heap_ptr = MR_hp;

    /*
    ** MR_deep_copy() the exception to the solutions heap.
    ** Note that we need to save/restore the hp register, if it
    ** is transient, before/after calling MR_deep_copy().
    */
    assert(MR_EXCEPTION_STRUCT->MR_excp_heap_ptr <=
        MR_EXCEPTION_STRUCT->MR_excp_heap_zone->MR_zone_top);
    MR_save_transient_registers();
    exception = MR_deep_copy(exception,
        (MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0,
        MR_EXCEPTION_STRUCT->MR_excp_heap_ptr,
        MR_EXCEPTION_STRUCT->MR_excp_heap_zone->MR_zone_top);
    MR_restore_transient_registers();

    /* Switch back to the ordinary heap. */
    swap_heaps();

    /* Reset the heap. */
    assert(MR_EXCEPTION_STRUCT->MR_excp_heap_ptr <= MR_hp);
    MR_hp_word = (MR_Word) MR_EXCEPTION_STRUCT->MR_excp_heap_ptr;

    /* MR_deep_copy the exception back to the ordinary heap. */
    assert(MR_EXCEPTION_STRUCT->MR_excp_solns_heap_ptr <=
        MR_ENGINE(MR_eng_solutions_heap_zone)->MR_zone_top);
    MR_save_transient_registers();
    exception = MR_deep_copy(exception,
        (MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0,
        saved_solns_heap_ptr,
        MR_ENGINE(MR_eng_solutions_heap_zone)->MR_zone_top);
    MR_restore_transient_registers();

    /* Reset the solutions heap. */
    assert(MR_EXCEPTION_STRUCT->MR_excp_solns_heap_ptr <= saved_solns_heap_ptr);
    assert(saved_solns_heap_ptr <= MR_sol_hp);
    if (catch_code_model == MR_MODEL_NON_HANDLER) {
        /*
        ** If the code inside the try (catch) was nondet, then its caller
        ** (which may be solutions/2) may have put some more stuff on the
        ** solutions-heap after the goal succeeded; the goal may have only
        ** thrown after being re-entered on backtracking. Thus we can only
        ** reset the solutions heap to where it was before copying the
        ** exception object to it.
        */
        MR_sol_hp = saved_solns_heap_ptr;
    } else {
        /*
        ** If the code inside the try (catch) was det or semidet,
        ** we can safely reset the solutions heap to where
        ** it was when it try (catch) was entered.
        */
        MR_sol_hp = MR_EXCEPTION_STRUCT->MR_excp_solns_heap_ptr;
    }
}
#endif /* !defined(MR_CONSERVATIVE_GC) */

    /*
    ** Pop the final exception handler frame off the nondet stack,
    ** and reset the nondet stack top.  (This must be done last,
    ** since it invalidates all the framevars.)
    */
    MR_maxfr_word = MR_prevfr_slot_word(MR_curfr);
    MR_curfr_word = MR_succfr_slot_word(MR_curfr);

    /*
    ** Now longjmp to the catch, which will invoke the handler that we found.
    */

#ifdef  MR_DEBUG_JMPBUFS
    fprintf(stderr, "throw catch_code_model %d\n", catch_code_model);
#endif

    if (catch_code_model == MR_C_LONGJMP_HANDLER) {
#ifdef  MR_DEBUG_JMPBUFS
        fprintf(stderr, "throw longjmp %p\n",
            *(MR_ENGINE(MR_eng_jmp_buf)));
#endif

        MR_ENGINE(MR_eng_exception) = (MR_Word *) exception;
        MR_save_registers();
        longjmp(*(MR_ENGINE(MR_eng_jmp_buf)), 1);
    }

    /*
    ** Otherwise, the handler is a Mercury closure.
    ** Invoke the handler as `Handler(Exception, Result)'.
    */

#ifdef  MR_DEEP_PROFILING
    MR_fatal_error("builtin_throw cannot (yet) invoke"
        " Mercury handlers in deep profiling grades");
#endif

    MR_r1 = handler;    /* get the Handler closure */
    MR_r2 = 1;          /* One additional input argument */
    MR_r3 = exception;  /* This is our one input argument */

    /*
    ** Restore the value of MR_trace_from_full that we saved at the
    ** start of builtin_catch.
    */
    MR_trace_from_full = trace_from_full;

    /*
    ** If the catch was semidet, we need to set the success indicator
    ** MR_r1 to MR_TRUE and return the result in MR_r2; otherwise, we return
    ** the result in MR_r1, which is where mercury__do_call_closure_compact
    ** puts it, so we can do a tailcall.
    */
    if (catch_code_model != MR_MODEL_SEMI_HANDLER) {
        MR_tailcall(MR_ENTRY(mercury__do_call_closure_compact),
            MR_ENTRY(mercury__exception__builtin_throw_1_0));
    }
    MR_incr_sp_push_msg(1, "pred builtin_throw/1");
    MR_stackvar(1) = MR_succip_word;
    MR_call(MR_ENTRY(mercury__do_call_closure_compact),
        MR_LABEL(mercury__exception__builtin_throw_1_0_i1),
        MR_ENTRY(mercury__exception__builtin_throw_1_0));
}
MR_define_label(mercury__exception__builtin_throw_1_0_i1);
    MR_update_prof_current_proc(
        MR_LABEL(mercury__exception__builtin_throw_1_0));
    /* We've just returned from mercury__do_call_closure_compact. */
    MR_r2 = MR_r1;
    MR_r1 = MR_TRUE;
    MR_succip_word = MR_stackvar(1);
    MR_decr_sp_pop_msg(1);
    MR_proceed(); /* return to the caller of `builtin_catch' */

MR_END_MODULE

#endif /* ! MR_HIGHLEVEL_CODE */

/* Ensure that the initialization code for the above module gets run. */
/*
INIT mercury_sys_init_exceptions
*/

void
mercury_sys_init_exceptions_init(void)
{
#ifndef MR_HIGHLEVEL_CODE
    hand_written_exception_module();
#endif
}

void
mercury_sys_init_exceptions_init_type_tables(void)
{
    /* no types to register */
}

#ifdef  MR_DEEP_PROFILING
void
mercury_sys_init_exceptions_write_out_proc_statics(FILE *deep_fp,
    FILE *procrep_fp)
{
    MR_write_out_user_proc_static(deep_fp, procrep_fp,
        &MR_proc_layout_user_name(exception, builtin_catch, 3, 0));
    MR_write_out_user_proc_static(deep_fp, procrep_fp,
        &MR_proc_layout_user_name(exception, builtin_catch, 3, 1));
    MR_write_out_user_proc_static(deep_fp, procrep_fp,
        &MR_proc_layout_user_name(exception, builtin_catch, 3, 2));
    MR_write_out_user_proc_static(deep_fp, procrep_fp,
        &MR_proc_layout_user_name(exception, builtin_catch, 3, 3));
    MR_write_out_user_proc_static(deep_fp, procrep_fp,
        &MR_proc_layout_user_name(exception, builtin_catch, 3, 4));
    MR_write_out_user_proc_static(deep_fp, procrep_fp,
        &MR_proc_layout_user_name(exception, builtin_catch, 3, 5));
    MR_write_out_user_proc_static(deep_fp, procrep_fp,
        &MR_proc_layout_user_name(exception, builtin_throw, 1, 0));
}
#endif


#line 2859 "exception.m"
void 
mercury__exception__user_init_pred_0(void)
#line 2859 "exception.m"
{
#line 2859 "exception.m"
	mercury__exception__set_get_message_hook_2_p_0();
}

#line 2813 "exception.m"
void 
ML_report_uncaught_exception(
#line 2813 "exception.m"
  MR_Word mercury__exception__Exception_4)
#line 2813 "exception.m"
{
#line 2813 "exception.m"
	mercury__exception__report_uncaught_exception_3_p_0((MR_Word) mercury__exception__Exception_4);
}

#line 1659 "exception.m"
void 
ML_call_handler_det(
#line 1659 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_7,
#line 1659 "exception.m"
  MR_Word mercury__exception__Handler_4,
#line 1659 "exception.m"
  MR_Word mercury__exception__Exception_5,
#line 1659 "exception.m"
  MR_Word * mercury__exception__Result_6)
#line 1659 "exception.m"
{
#line 1659 "exception.m"
	mercury__exception__call_handler_3_p_0((MR_Word) mercury__exception__TypeInfo_for_T_7, (MR_Word) mercury__exception__Handler_4, (MR_Word) mercury__exception__Exception_5, (MR_Box *) mercury__exception__Result_6);
}

#line 1639 "exception.m"
MR_bool 
ML_call_goal_semidet(
#line 1639 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 1639 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 1639 "exception.m"
  MR_Word * mercury__exception__Result_4)
#line 1639 "exception.m"
{
#line 1639 "exception.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__exception__call_goal_2_p_1((MR_Word) mercury__exception__TypeInfo_for_T_5, (MR_Word) mercury__exception__Goal_3, (MR_Box *) mercury__exception__Result_4);
	return ret_value;
}

#line 1631 "exception.m"
void 
ML_call_goal_det(
#line 1631 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 1631 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 1631 "exception.m"
  MR_Word * mercury__exception__Result_4)
#line 1631 "exception.m"
{
#line 1631 "exception.m"
	mercury__exception__call_goal_2_p_0((MR_Word) mercury__exception__TypeInfo_for_T_5, (MR_Word) mercury__exception__Goal_3, (MR_Box *) mercury__exception__Result_4);
}


#line 3349 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__exception____vpti_pred_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3358 "exception.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__exception__exception__pti_exception_result_1__pseudo_1 = {
  &mercury__exception__exception__type_ctor_info_exception_result_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3366 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__exception____vpti_pred_1__pseudo_exception__pti_exception_result_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) &mercury__exception__exception__pti_exception_result_1__pseudo_1
  }
};

#line 3375 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__exception____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 3386 "exception.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__exception__store__pti_store_1__pseudo_2 = {
  &mercury__store__store__type_ctor_info_store_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 3394 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__exception____vpti_pred_3__pseudo_1__pseudo_store__pti_store_1__pseudo_2__pseudo_store__pti_store_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__exception__store__pti_store_1__pseudo_2,
    (MR_PseudoTypeInfo) &mercury__exception__store__pti_store_1__pseudo_2
  }
};

#line 3405 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__exception____vpti_tuple_2__pseudo_1__pseudo_store__pti_store_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__exception__store__pti_store_1__pseudo_2
  }
};

#line 3415 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct3 mercury__exception____vpti_pred_3__pseudo_1__plain_stm_builtin__type_ctor_info_stm_0__plain_stm_builtin__type_ctor_info_stm_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0,
    (MR_PseudoTypeInfo) &mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0
  }
};

#line 3426 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__exception____vpti_tuple_2__pseudo_1__plain_stm_builtin__type_ctor_info_stm_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0
  }
};

#line 3436 "exception.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__exception__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3444 "exception.c"
static const MR_PseudoTypeInfo mercury__exception__exception__field_types_exception_result_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 3449 "exception.c"
static const MR_DuFunctorDesc mercury__exception__exception__du_functor_desc_exception_result_1_0 = {
  (MR_String) "succeeded",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__exception__exception__field_types_exception_result_1_0,
  NULL,
  NULL,
  NULL
};

#line 3464 "exception.c"
static const MR_DuFunctorDesc mercury__exception__exception__du_functor_desc_exception_result_1_1 = {
  (MR_String) "failed",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 3479 "exception.c"
static const MR_PseudoTypeInfo mercury__exception__exception__field_types_exception_result_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 3484 "exception.c"
static const MR_DuFunctorDesc mercury__exception__exception__du_functor_desc_exception_result_1_2 = {
  (MR_String) "exception",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__exception__exception__field_types_exception_result_1_2,
  NULL,
  NULL,
  NULL
};

#line 3499 "exception.c"
static const MR_DuFunctorDescPtr mercury__exception__exception__du_stag_ordered_exception_result_1_0[1] = {
  &mercury__exception__exception__du_functor_desc_exception_result_1_1
};

#line 3504 "exception.c"
static const MR_DuFunctorDescPtr mercury__exception__exception__du_stag_ordered_exception_result_1_1[1] = {
  &mercury__exception__exception__du_functor_desc_exception_result_1_0
};

#line 3509 "exception.c"
static const MR_DuFunctorDescPtr mercury__exception__exception__du_stag_ordered_exception_result_1_2[1] = {
  &mercury__exception__exception__du_functor_desc_exception_result_1_2
};

#line 3514 "exception.c"
static const MR_DuPtagLayout mercury__exception__exception__du_ptag_ordered_exception_result_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__exception__exception__du_stag_ordered_exception_result_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__exception__exception__du_stag_ordered_exception_result_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__exception__exception__du_stag_ordered_exception_result_1_2
  }
};

#line 3533 "exception.c"
static const MR_DuFunctorDescPtr mercury__exception__exception__du_name_ordered_exception_result_1[3] = {
  &mercury__exception__exception__du_functor_desc_exception_result_1_2,
  &mercury__exception__exception__du_functor_desc_exception_result_1_1,
  &mercury__exception__exception__du_functor_desc_exception_result_1_0
};

#line 3540 "exception.c"
static const MR_Integer mercury__exception__exception__functor_number_map_exception_result_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3547 "exception.c"
const MR_TypeCtorInfo_Struct mercury__exception__exception__type_ctor_info_exception_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__exception____Unify____exception_result_1_0_10001)),
  ((MR_Box) (mercury__exception____Compare____exception_result_1_0_10001)),
  (MR_String) "exception",
  (MR_String) "exception_result",
  {
    mercury__exception__exception__du_name_ordered_exception_result_1
  },
  {
    mercury__exception__exception__du_ptag_ordered_exception_result_1
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__exception__exception__functor_number_map_exception_result_1
};

#line 3568 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_0 = {
  (MR_String) "exp_detism_det",
  (MR_Integer) 0
};

#line 3574 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_1 = {
  (MR_String) "exp_detism_semidet",
  (MR_Integer) 1
};

#line 3580 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_2 = {
  (MR_String) "exp_detism_cc_multi",
  (MR_Integer) 2
};

#line 3586 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_3 = {
  (MR_String) "exp_detism_cc_nondet",
  (MR_Integer) 3
};

#line 3592 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_4 = {
  (MR_String) "exp_detism_multi",
  (MR_Integer) 4
};

#line 3598 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_5 = {
  (MR_String) "exp_detism_nondet",
  (MR_Integer) 5
};

#line 3604 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_6 = {
  (MR_String) "exp_detism_erroneous",
  (MR_Integer) 6
};

#line 3610 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_exp_determinism_0_7 = {
  (MR_String) "exp_detism_failure",
  (MR_Integer) 7
};

#line 3616 "exception.c"
static const MR_EnumFunctorDescPtr mercury__exception__exception__enum_value_ordered_exp_determinism_0[8] = {
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_0,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_1,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_2,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_3,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_4,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_5,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_6,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_7
};

#line 3628 "exception.c"
static const MR_EnumFunctorDescPtr mercury__exception__exception__enum_name_ordered_exp_determinism_0[8] = {
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_2,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_3,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_0,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_6,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_7,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_4,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_5,
  &mercury__exception__exception__enum_functor_desc_exp_determinism_0_1
};

#line 3640 "exception.c"
static const MR_Integer mercury__exception__exception__functor_number_map_exp_determinism_0[8] = {
  (MR_Integer) 2,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 4
};

#line 3652 "exception.c"
const MR_TypeCtorInfo_Struct mercury__exception__exception__type_ctor_info_exp_determinism_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__exception____Unify____exp_determinism_0_0_10001)),
  ((MR_Box) (mercury__exception____Compare____exp_determinism_0_0_10001)),
  (MR_String) "exception",
  (MR_String) "exp_determinism",
  {
    mercury__exception__exception__enum_name_ordered_exp_determinism_0
  },
  {
    mercury__exception__exception__enum_value_ordered_exp_determinism_0
  },
  (MR_Integer) 8,
  (MR_Integer) 4,
  mercury__exception__exception__functor_number_map_exp_determinism_0
};

#line 3673 "exception.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__exception____vpti_pred_2__plain_univ__type_ctor_info_univ_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 3683 "exception.c"
const MR_TypeCtorInfo_Struct mercury__exception__exception__type_ctor_info_handler_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__exception____Unify____handler_1_0_10001)),
  ((MR_Box) (mercury__exception____Compare____handler_1_0_10001)),
  (MR_String) "exception",
  (MR_String) "handler",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__exception____vpti_pred_2__plain_univ__type_ctor_info_univ_0__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3704 "exception.c"
static const MR_EnumFunctorDesc mercury__exception__exception__enum_functor_desc_near_stack_limits_0_0 = {
  (MR_String) "near_stack_limits",
  (MR_Integer) 0
};

#line 3710 "exception.c"
static const MR_EnumFunctorDescPtr mercury__exception__exception__enum_value_ordered_near_stack_limits_0[1] = {
  &mercury__exception__exception__enum_functor_desc_near_stack_limits_0_0
};

#line 3715 "exception.c"
static const MR_EnumFunctorDescPtr mercury__exception__exception__enum_name_ordered_near_stack_limits_0[1] = {
  &mercury__exception__exception__enum_functor_desc_near_stack_limits_0_0
};

#line 3720 "exception.c"
static const MR_Integer mercury__exception__exception__functor_number_map_near_stack_limits_0[1] = {
  (MR_Integer) 0
};

#line 3725 "exception.c"
const MR_TypeCtorInfo_Struct mercury__exception__exception__type_ctor_info_near_stack_limits_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__exception____Unify____near_stack_limits_0_0_10001)),
  ((MR_Box) (mercury__exception____Compare____near_stack_limits_0_0_10001)),
  (MR_String) "exception",
  (MR_String) "near_stack_limits",
  {
    mercury__exception__exception__enum_name_ordered_near_stack_limits_0
  },
  {
    mercury__exception__exception__enum_value_ordered_near_stack_limits_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__exception__exception__functor_number_map_near_stack_limits_0
};

#line 3746 "exception.c"
static const MR_Integer mercury__exception__exception__functor_number_map_software_error_0[1] = {
  (MR_Integer) 0
};

#line 3751 "exception.c"
static const MR_NotagFunctorDesc mercury__exception__exception__notag_functor_desc_software_error_0 = {
  (MR_String) "software_error",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 3758 "exception.c"
const MR_TypeCtorInfo_Struct mercury__exception__exception__type_ctor_info_software_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__exception____Unify____software_error_0_0_10001)),
  ((MR_Box) (mercury__exception____Compare____software_error_0_0_10001)),
  (MR_String) "exception",
  (MR_String) "software_error",
  {
    &mercury__exception__exception__notag_functor_desc_software_error_0
  },
  {
    &mercury__exception__exception__notag_functor_desc_software_error_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__exception__exception__functor_number_map_software_error_0
};

#line 3779 "exception.c"
static MR_bool MR_CALL 
mercury__exception____Unify____exception_result_1_0_10001(
#line 3782 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 3784 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2,
#line 3786 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3)
#line 3788 "exception.c"
{
#line 3790 "exception.c"
  {
#line 3792 "exception.c"
    MR_bool mercury__exception__succeeded;

#line 3795 "exception.c"
    {
#line 3797 "exception.c"
      mercury__exception__succeeded = mercury__exception____Unify____exception_result_1_0(((MR_Word) mercury__exception__wrapper_arg_1), ((MR_Word) mercury__exception__wrapper_arg_2), ((MR_Word) mercury__exception__wrapper_arg_3));
    }
#line 3800 "exception.c"
    return mercury__exception__succeeded;
#line 3802 "exception.c"
  }
#line 3804 "exception.c"
}

#line 3807 "exception.c"
static void MR_CALL 
mercury__exception____Compare____exception_result_1_0_10001(
#line 3810 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 3812 "exception.c"
  MR_Box * mercury__exception__wrapper_arg_2,
#line 3814 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3,
#line 3816 "exception.c"
  MR_Box mercury__exception__wrapper_arg_4)
#line 3818 "exception.c"
{
#line 3820 "exception.c"
  {
#line 3822 "exception.c"
    MR_Word mercury__exception__conv0_HeadVar__1_1;

#line 3825 "exception.c"
    {
#line 3827 "exception.c"
      mercury__exception____Compare____exception_result_1_0(((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv0_HeadVar__1_1, ((MR_Word) mercury__exception__wrapper_arg_3), ((MR_Word) mercury__exception__wrapper_arg_4));
    }
#line 3830 "exception.c"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv0_HeadVar__1_1));
#line 3832 "exception.c"
  }
#line 3834 "exception.c"
}

#line 3837 "exception.c"
static MR_bool MR_CALL 
mercury__exception____Unify____exp_determinism_0_0_10001(
#line 3840 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 3842 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2)
#line 3844 "exception.c"
{
#line 3846 "exception.c"
  {
#line 3848 "exception.c"
    MR_bool mercury__exception__succeeded;

#line 3851 "exception.c"
    {
#line 3853 "exception.c"
      mercury__exception__succeeded = mercury__exception____Unify____exp_determinism_0_0(((MR_Word) mercury__exception__wrapper_arg_1), ((MR_Word) mercury__exception__wrapper_arg_2));
    }
#line 3856 "exception.c"
    return mercury__exception__succeeded;
#line 3858 "exception.c"
  }
#line 3860 "exception.c"
}

#line 3863 "exception.c"
static void MR_CALL 
mercury__exception____Compare____exp_determinism_0_0_10001(
#line 3866 "exception.c"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 3868 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2,
#line 3870 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3)
#line 3872 "exception.c"
{
#line 3874 "exception.c"
  {
#line 3876 "exception.c"
    MR_Word mercury__exception__conv0_HeadVar__1_1;

#line 3879 "exception.c"
    {
#line 3881 "exception.c"
      mercury__exception____Compare____exp_determinism_0_0(&mercury__exception__conv0_HeadVar__1_1, ((MR_Word) mercury__exception__wrapper_arg_2), ((MR_Word) mercury__exception__wrapper_arg_3));
    }
#line 3884 "exception.c"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_HeadVar__1_1));
#line 3886 "exception.c"
  }
#line 3888 "exception.c"
}

#line 3891 "exception.c"
static MR_bool MR_CALL 
mercury__exception____Unify____handler_1_0_10001(
#line 3894 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 3896 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2,
#line 3898 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3)
#line 3900 "exception.c"
{
#line 3902 "exception.c"
  {
#line 3904 "exception.c"
    MR_bool mercury__exception__succeeded;

#line 3907 "exception.c"
    {
#line 3909 "exception.c"
      mercury__exception__succeeded = mercury__exception____Unify____handler_1_0(((MR_Word) mercury__exception__wrapper_arg_1), ((MR_Word) mercury__exception__wrapper_arg_2), ((MR_Word) mercury__exception__wrapper_arg_3));
    }
#line 3912 "exception.c"
    return mercury__exception__succeeded;
#line 3914 "exception.c"
  }
#line 3916 "exception.c"
}

#line 3919 "exception.c"
static void MR_CALL 
mercury__exception____Compare____handler_1_0_10001(
#line 3922 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 3924 "exception.c"
  MR_Box * mercury__exception__wrapper_arg_2,
#line 3926 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3,
#line 3928 "exception.c"
  MR_Box mercury__exception__wrapper_arg_4)
#line 3930 "exception.c"
{
#line 3932 "exception.c"
  {
#line 3934 "exception.c"
    MR_Word mercury__exception__conv0_HeadVar__1_1;

#line 3937 "exception.c"
    {
#line 3939 "exception.c"
      mercury__exception____Compare____handler_1_0(((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv0_HeadVar__1_1, ((MR_Word) mercury__exception__wrapper_arg_3), ((MR_Word) mercury__exception__wrapper_arg_4));
    }
#line 3942 "exception.c"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv0_HeadVar__1_1));
#line 3944 "exception.c"
  }
#line 3946 "exception.c"
}

#line 3949 "exception.c"
static MR_bool MR_CALL 
mercury__exception____Unify____near_stack_limits_0_0_10001(
#line 3952 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 3954 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2)
#line 3956 "exception.c"
{
#line 3958 "exception.c"
  {
#line 3960 "exception.c"
    MR_bool mercury__exception__succeeded;

#line 3963 "exception.c"
    {
#line 3965 "exception.c"
      mercury__exception__succeeded = mercury__exception____Unify____near_stack_limits_0_0();
    }
#line 3968 "exception.c"
    return mercury__exception__succeeded;
#line 3970 "exception.c"
  }
#line 3972 "exception.c"
}

#line 3975 "exception.c"
static void MR_CALL 
mercury__exception____Compare____near_stack_limits_0_0_10001(
#line 3978 "exception.c"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 3980 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2,
#line 3982 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3)
#line 3984 "exception.c"
{
#line 3986 "exception.c"
  {
#line 3988 "exception.c"
    MR_Word mercury__exception__conv0_HeadVar__1_1;

#line 3991 "exception.c"
    {
#line 3993 "exception.c"
      mercury__exception____Compare____near_stack_limits_0_0(&mercury__exception__conv0_HeadVar__1_1);
    }
#line 3996 "exception.c"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_HeadVar__1_1));
#line 3998 "exception.c"
  }
#line 4000 "exception.c"
}

#line 4003 "exception.c"
static MR_bool MR_CALL 
mercury__exception____Unify____software_error_0_0_10001(
#line 4006 "exception.c"
  MR_Box mercury__exception__wrapper_arg_1,
#line 4008 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2)
#line 4010 "exception.c"
{
#line 4012 "exception.c"
  {
#line 4014 "exception.c"
    MR_bool mercury__exception__succeeded;

#line 4017 "exception.c"
    {
#line 4019 "exception.c"
      mercury__exception__succeeded = mercury__exception____Unify____software_error_0_0(((MR_Word) mercury__exception__wrapper_arg_1), ((MR_Word) mercury__exception__wrapper_arg_2));
    }
#line 4022 "exception.c"
    return mercury__exception__succeeded;
#line 4024 "exception.c"
  }
#line 4026 "exception.c"
}

#line 4029 "exception.c"
static void MR_CALL 
mercury__exception____Compare____software_error_0_0_10001(
#line 4032 "exception.c"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 4034 "exception.c"
  MR_Box mercury__exception__wrapper_arg_2,
#line 4036 "exception.c"
  MR_Box mercury__exception__wrapper_arg_3)
#line 4038 "exception.c"
{
#line 4040 "exception.c"
  {
#line 4042 "exception.c"
    MR_Word mercury__exception__conv0_HeadVar__1_1;

#line 4045 "exception.c"
    {
#line 4047 "exception.c"
      mercury__exception____Compare____software_error_0_0(&mercury__exception__conv0_HeadVar__1_1, ((MR_Word) mercury__exception__wrapper_arg_2), ((MR_Word) mercury__exception__wrapper_arg_3));
    }
#line 4050 "exception.c"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_HeadVar__1_1));
#line 4052 "exception.c"
  }
#line 4054 "exception.c"
}

#line 524 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_52_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_0_2(
#line 524 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 524 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 524 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 524 "exception.m"
{
#line 524 "exception.m"
  {
#line 524 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 524 "exception.m"
    MR_Word mercury__exception__conv1_HeadVar__2_2;

#line 524 "exception.m"
    {
#line 524 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv1_HeadVar__2_2);
    }
#line 524 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv1_HeadVar__2_2));
#line 524 "exception.m"
  }
#line 524 "exception.m"
}

#line 521 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_52_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_0_1(
#line 521 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 521 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 521 "exception.m"
{
#line 521 "exception.m"
  {
#line 521 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 521 "exception.m"
    MR_Word mercury__exception__conv0_Result_4;

#line 521 "exception.m"
    {
#line 521 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv0_Result_4);
    }
#line 521 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_Result_4));
#line 521 "exception.m"
  }
#line 521 "exception.m"
}

#line 277 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_52_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_0(
#line 277 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 277 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 277 "exception.m"
{
#line 520 "exception.m"
  {
#line 520 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeInfo_for_T_34 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_37_37;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeInfo_38_38;
#line 520 "exception.m"
    MR_Word mercury__exception__WrappedGoal_6;
#line 520 "exception.m"
    MR_Word mercury__exception__Result0_8;
#line 520 "exception.m"
    MR_Word mercury__exception__V_10_10;
#line 856 "exception.m"
    MR_Box mercury__exception__conv2_Result0_8;
#line 103 "builtin.opt"
    MR_Word mercury__exception__TypeInfo_38_75;
#line 103 "builtin.opt"
    MR_Box mercury__exception__conv3_Y;

#line 521 "exception.m"
    {
#line 521 "exception.m"
      mercury__exception__WrappedGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_52_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_0_1));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 4) = ((MR_Box) (mercury__exception__Goal_2));
#line 521 "exception.m"
    }
#line 524 "exception.m"
    mercury__exception__V_10_10 = (MR_Word) &mercury__exception_scalar_common_3[1];
#line 4165 "exception.c"
    mercury__exception__TypeCtorInfo_37_37 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 4167 "exception.c"
    mercury__exception__TypeInfo_38_38 = (MR_Word) &mercury__exception_scalar_common_1[1];
#line 856 "exception.m"
    {
#line 856 "exception.m"
      mercury__exception__builtin_catch_3_p_0(mercury__exception__TypeInfo_38_38, mercury__exception__WrappedGoal_6, mercury__exception__V_10_10, &mercury__exception__conv2_Result0_8);
    }
#line 856 "exception.m"
    mercury__exception__Result0_8 = ((MR_Word) mercury__exception__conv2_Result0_8);
#line 103 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_52_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__exception__Result0_8)) ;
		{
#line 103 "builtin.opt"

    Y = X;

#line 4189 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv3_Y  = (MR_Box) Y;
#line 103 "builtin.opt"
    *mercury__exception__Result_3 = ((MR_Word) mercury__exception__conv3_Y);
#line 103 "builtin.opt"
}
#line 520 "exception.m"
  }
#line 277 "exception.m"
}

#line 677 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_104_111_50_48_95_95_91_49_44_32_50_93_95_48_5_p_0_1(
#line 677 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 677 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 677 "exception.m"
{
#line 677 "exception.m"
  {
#line 677 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;

#line 677 "exception.m"
    {
#line 677 "exception.m"
      mercury__exception__very_unsafe_perform_io_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), mercury__exception__wrapper_arg_1);
#line 677 "exception.m"
      return;
    }
#line 677 "exception.m"
  }
#line 677 "exception.m"
}

#line 288 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_104_111_50_48_95_95_91_49_44_32_50_93_95_48_5_p_0(
#line 288 "exception.m"
  MR_Word mercury__exception__IO_Goal_2,
#line 288 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 288 "exception.m"
{
#line 676 "exception.m"
  {
#line 676 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 676 "exception.m"
    MR_Word mercury__exception__TypeInfo_for_T_26 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 676 "exception.m"
    MR_Word mercury__exception__Goal_9;

#line 677 "exception.m"
    {
#line 677 "exception.m"
      mercury__exception__Goal_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 677 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[3]));
#line 677 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_104_111_50_48_95_95_91_49_44_32_50_93_95_48_5_p_0_1));
#line 677 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 677 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_26));
#line 677 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 4) = ((MR_Box) (mercury__exception__IO_Goal_2));
#line 677 "exception.m"
    }
#line 680 "exception.m"
    {
#line 680 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_52_95_95_104_111_50_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_3_p_0(mercury__exception__Goal_9, mercury__exception__Result_3);
#line 680 "exception.m"
      return;
    }
#line 676 "exception.m"
  }
#line 288 "exception.m"
}

#line 335 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 335 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 335 "exception.m"
{
#line 390 "exception.m"
  {
#line 390 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 389 "exception.m"
    {
#line 100 "builtin.opt"
      MR_Word mercury__exception__TypeCtorInfo_15_20;
#line 100 "builtin.opt"
      MR_Box mercury__exception__conv0_Y;

#line 100 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) ((MR_Integer) 0)) ;
		{
#line 100 "builtin.opt"

    Y = X;

#line 4307 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv0_Y  = (MR_Box) Y;
#line 100 "builtin.opt"
      *mercury__exception__Det_2 = ((MR_Word) mercury__exception__conv0_Y);
#line 100 "builtin.opt"
}
#line 389 "exception.m"
    }
#line 390 "exception.m"
  }
#line 335 "exception.m"
}

#line 524 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0_2(
#line 524 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 524 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 524 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 524 "exception.m"
{
#line 524 "exception.m"
  {
#line 524 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 524 "exception.m"
    MR_Word mercury__exception__conv1_HeadVar__2_2;

#line 524 "exception.m"
    {
#line 524 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv1_HeadVar__2_2);
    }
#line 524 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv1_HeadVar__2_2));
#line 524 "exception.m"
  }
#line 524 "exception.m"
}

#line 521 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0_1(
#line 521 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 521 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 521 "exception.m"
{
#line 521 "exception.m"
  {
#line 521 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 521 "exception.m"
    MR_Word mercury__exception__conv0_Result_4;

#line 521 "exception.m"
    {
#line 521 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv0_Result_4);
    }
#line 521 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_Result_4));
#line 521 "exception.m"
  }
#line 521 "exception.m"
}

#line 277 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0(
#line 277 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_34,
#line 277 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 277 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 277 "exception.m"
{
#line 520 "exception.m"
  {
#line 520 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_37_37;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeInfo_38_38;
#line 520 "exception.m"
    MR_Word mercury__exception__WrappedGoal_6;
#line 520 "exception.m"
    MR_Word mercury__exception__Result0_8;
#line 520 "exception.m"
    MR_Word mercury__exception__V_10_10;
#line 856 "exception.m"
    MR_Box mercury__exception__conv2_Result0_8;
#line 103 "builtin.opt"
    MR_Word mercury__exception__TypeInfo_38_79;
#line 103 "builtin.opt"
    MR_Box mercury__exception__conv3_Y;

#line 521 "exception.m"
    {
#line 521 "exception.m"
      mercury__exception__WrappedGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0_1));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 4) = ((MR_Box) (mercury__exception__Goal_2));
#line 521 "exception.m"
    }
#line 524 "exception.m"
    {
#line 524 "exception.m"
      mercury__exception__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_10_10, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_10_10, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0_2));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_10_10, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 524 "exception.m"
    }
#line 4443 "exception.c"
    mercury__exception__TypeCtorInfo_37_37 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 4445 "exception.c"
    {
#line 4447 "exception.c"
      mercury__exception__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4449 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_38_38, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_37_37));
#line 4451 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_38_38, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 4453 "exception.c"
    }
#line 856 "exception.m"
    {
#line 856 "exception.m"
      mercury__exception__builtin_catch_3_p_0(mercury__exception__TypeInfo_38_38, (MR_Word) mercury__exception__WrappedGoal_6, (MR_Word) mercury__exception__V_10_10, &mercury__exception__conv2_Result0_8);
    }
#line 856 "exception.m"
    mercury__exception__Result0_8 = ((MR_Word) mercury__exception__conv2_Result0_8);
#line 103 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__exception__Result0_8)) ;
		{
#line 103 "builtin.opt"

    Y = X;

#line 4475 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv3_Y  = (MR_Box) Y;
#line 103 "builtin.opt"
    *mercury__exception__Result_3 = ((MR_Word) mercury__exception__conv3_Y);
#line 103 "builtin.opt"
}
#line 520 "exception.m"
  }
#line 277 "exception.m"
}

#line 536 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0_2(
#line 536 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 536 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 536 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 536 "exception.m"
{
#line 536 "exception.m"
  {
#line 536 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 536 "exception.m"
    MR_Word mercury__exception__conv1_HeadVar__2_2;

#line 536 "exception.m"
    {
#line 536 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv1_HeadVar__2_2);
    }
#line 536 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv1_HeadVar__2_2));
#line 536 "exception.m"
  }
#line 536 "exception.m"
}

#line 533 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0_1(
#line 533 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 533 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 533 "exception.m"
{
#line 533 "exception.m"
  {
#line 533 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 533 "exception.m"
    MR_Word mercury__exception__conv0_Result_4;

#line 533 "exception.m"
    {
#line 533 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_2(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv0_Result_4);
    }
#line 533 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_Result_4));
#line 533 "exception.m"
  }
#line 533 "exception.m"
}

#line 281 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0(
#line 281 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_34,
#line 281 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 281 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 281 "exception.m"
{
#line 520 "exception.m"
  {
#line 520 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_45_45;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeInfo_46_46;
#line 520 "exception.m"
    MR_Word mercury__exception__WrappedGoal_22;
#line 520 "exception.m"
    MR_Word mercury__exception__V_25_25;
#line 860 "exception.m"
    MR_Box mercury__exception__conv2_Result_3;

#line 533 "exception.m"
    {
#line 533 "exception.m"
      mercury__exception__WrappedGoal_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_22, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_22, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0_1));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_22, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_22, 4) = ((MR_Box) (mercury__exception__Goal_2));
#line 533 "exception.m"
    }
#line 536 "exception.m"
    {
#line 536 "exception.m"
      mercury__exception__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_25_25, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_25_25, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0_2));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_25_25, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 536 "exception.m"
    }
#line 4603 "exception.c"
    mercury__exception__TypeCtorInfo_45_45 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 4605 "exception.c"
    {
#line 4607 "exception.c"
      mercury__exception__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4609 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_46_46, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_45_45));
#line 4611 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_46_46, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 4613 "exception.c"
    }
#line 860 "exception.m"
    {
#line 860 "exception.m"
      mercury__exception__builtin_catch_3_p_2(mercury__exception__TypeInfo_46_46, (MR_Word) mercury__exception__WrappedGoal_22, (MR_Word) mercury__exception__V_25_25, &mercury__exception__conv2_Result_3);
    }
#line 860 "exception.m"
    *mercury__exception__Result_3 = ((MR_Word) mercury__exception__conv2_Result_3);
#line 520 "exception.m"
  }
#line 281 "exception.m"
}

#line 69 "solutions.opt"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0_1(
#line 69 "solutions.opt"
  MR_Box mercury__exception__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__exception__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__exception__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__exception__wrapper_arg_3)
#line 69 "solutions.opt"
{
#line 69 "solutions.opt"
  {
#line 69 "solutions.opt"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 69 "solutions.opt"
    MR_Word mercury__exception__conv0_HeadVar__3_3;

#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), mercury__exception__wrapper_arg_1, ((MR_Word) mercury__exception__wrapper_arg_2), &mercury__exception__conv0_HeadVar__3_3);
    }
#line 69 "solutions.opt"
    *mercury__exception__wrapper_arg_3 = ((MR_Box) (mercury__exception__conv0_HeadVar__3_3));
#line 69 "solutions.opt"
  }
#line 69 "solutions.opt"
}

#line 59 "solutions.int"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0(
#line 59 "solutions.int"
  MR_Word mercury__exception__TypeInfo_for_T_6,
#line 59 "solutions.int"
  MR_Word mercury__exception__Pred_3_3,
#line 59 "solutions.int"
  MR_Word * mercury__exception__List_4_4)
#line 59 "solutions.int"
{
#line 41 "solutions.opt"
  {
#line 41 "solutions.opt"
    MR_bool mercury__exception__succeeded;
#line 41 "solutions.opt"
    MR_Word mercury__exception__TypeCtorInfo_12_23;
#line 41 "solutions.opt"
    MR_Word mercury__exception__TypeInfo_13_24;
#line 41 "solutions.opt"
    MR_Word mercury__exception__UnsortedList_5_5;
#line 41 "solutions.opt"
    MR_Word mercury__exception__V_5_17;
#line 41 "solutions.opt"
    MR_Word mercury__exception__V_6_19;
#line 71 "solutions.opt"
    MR_Box mercury__exception__conv1_UnsortedList_5_5;
#line 103 "builtin.opt"
    MR_Word mercury__exception__TypeInfo_8_26;
#line 103 "builtin.opt"
    MR_Box mercury__exception__conv2_Y;

#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__exception__V_5_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__exception__V_5_17, 0) = ((MR_Box) (&mercury__exception_scalar_common_8[2]));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__exception__V_5_17, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0_1));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__exception__V_5_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__exception__V_5_17, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 69 "solutions.opt"
    }
#line 70 "solutions.opt"
    mercury__exception__V_6_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4707 "exception.c"
    mercury__exception__TypeCtorInfo_12_23 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4709 "exception.c"
    {
#line 4711 "exception.c"
      mercury__exception__TypeInfo_13_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4713 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_13_24, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_12_23));
#line 4715 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_13_24, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 4717 "exception.c"
    }
#line 71 "solutions.opt"
    {
#line 71 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_0(mercury__exception__TypeInfo_for_T_6, mercury__exception__TypeInfo_13_24, (MR_Word) mercury__exception__Pred_3_3, (MR_Word) mercury__exception__V_5_17, ((MR_Box) (mercury__exception__V_6_19)), &mercury__exception__conv1_UnsortedList_5_5);
    }
#line 71 "solutions.opt"
    mercury__exception__UnsortedList_5_5 = ((MR_Word) mercury__exception__conv1_UnsortedList_5_5);
#line 103 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__exception__UnsortedList_5_5)) ;
		{
#line 103 "builtin.opt"

    Y = X;

#line 4739 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv2_Y  = (MR_Box) Y;
#line 103 "builtin.opt"
    *mercury__exception__List_4_4 = ((MR_Word) mercury__exception__conv2_Y);
#line 103 "builtin.opt"
}
#line 41 "solutions.opt"
  }
#line 59 "solutions.int"
}

#line 143 "list.int"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_6_p_in__list_0(
#line 143 "list.int"
  MR_Word mercury__exception__V_28_28,
#line 143 "list.int"
  MR_Word mercury__exception__HeadVar__2_2,
#line 143 "list.int"
  MR_Word mercury__exception__HeadVar__3_3,
#line 143 "list.int"
  MR_Word * mercury__exception__HeadVar__4_4,
#line 143 "list.int"
  MR_Word mercury__exception__HeadVar__5_5,
#line 143 "list.int"
  MR_Word * mercury__exception__HeadVar__6_6)
#line 143 "list.int"
{
#line 364 "list.opt"
  while (MR_TRUE)
#line 364 "list.opt"
    {
#line 364 "list.opt"
      /* tailcall optimized into a loop */
#line 364 "list.opt"
      {
#line 364 "list.opt"
        MR_bool mercury__exception__succeeded;

#line 364 "list.opt"
        if ((mercury__exception__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "list.opt"
          {
#line 364 "list.opt"
            *mercury__exception__HeadVar__6_6 = mercury__exception__HeadVar__5_5;
#line 364 "list.opt"
            *mercury__exception__HeadVar__4_4 = mercury__exception__HeadVar__3_3;
#line 364 "list.opt"
          }
#line 364 "list.opt"
        else
#line 367 "list.opt"
          {
#line 367 "list.opt"
            MR_Word mercury__exception__H_15_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__exception__HeadVar__2_2, (MR_Integer) 0)));
#line 367 "list.opt"
            MR_Word mercury__exception__T_16_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__exception__HeadVar__2_2, (MR_Integer) 1)));
#line 367 "list.opt"
            MR_Word mercury__exception__STATE_VARIABLE_A_23_23_19;
#line 367 "list.opt"
            MR_Word mercury__exception__STATE_VARIABLE_B_24_24_20;

#line 368 "list.opt"
            {
#line 368 "list.opt"
              mercury__exception__process_one_exception_result_5_p_0(mercury__exception__V_28_28, mercury__exception__H_15_13, mercury__exception__HeadVar__3_3, &mercury__exception__STATE_VARIABLE_A_23_23_19, mercury__exception__HeadVar__5_5, &mercury__exception__STATE_VARIABLE_B_24_24_20);
            }
#line 369 "list.opt"
            /* direct tailcall eliminated */
#line 369 "list.opt"
            {
#line 369 "list.opt"
              MR_Word mercury__exception__HeadVar__2__tmp_copy_2 = mercury__exception__T_16_14;
#line 369 "list.opt"
              MR_Word mercury__exception__HeadVar__3__tmp_copy_3 = mercury__exception__STATE_VARIABLE_A_23_23_19;
#line 369 "list.opt"
              MR_Word mercury__exception__HeadVar__5__tmp_copy_5 = mercury__exception__STATE_VARIABLE_B_24_24_20;

#line 369 "list.opt"
              mercury__exception__HeadVar__5_5 = mercury__exception__HeadVar__5__tmp_copy_5;
#line 369 "list.opt"
              mercury__exception__HeadVar__3_3 = mercury__exception__HeadVar__3__tmp_copy_3;
#line 369 "list.opt"
              mercury__exception__HeadVar__2_2 = mercury__exception__HeadVar__2__tmp_copy_2;
#line 369 "list.opt"
            }
#line 369 "list.opt"
            continue;
#line 367 "list.opt"
          }
#line 364 "list.opt"
      }
#line 364 "list.opt"
      break;
#line 364 "list.opt"
    }
#line 143 "list.int"
}

#line 69 "solutions.opt"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0_1(
#line 69 "solutions.opt"
  MR_Box mercury__exception__closure_arg,
#line 69 "solutions.opt"
  MR_Box mercury__exception__wrapper_arg_1,
#line 69 "solutions.opt"
  MR_Box mercury__exception__wrapper_arg_2,
#line 69 "solutions.opt"
  MR_Box * mercury__exception__wrapper_arg_3)
#line 69 "solutions.opt"
{
#line 69 "solutions.opt"
  {
#line 69 "solutions.opt"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 69 "solutions.opt"
    MR_Word mercury__exception__conv0_HeadVar__3_3;

#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), mercury__exception__wrapper_arg_1, ((MR_Word) mercury__exception__wrapper_arg_2), &mercury__exception__conv0_HeadVar__3_3);
    }
#line 69 "solutions.opt"
    *mercury__exception__wrapper_arg_3 = ((MR_Box) (mercury__exception__conv0_HeadVar__3_3));
#line 69 "solutions.opt"
  }
#line 69 "solutions.opt"
}

#line 60 "solutions.int"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0(
#line 60 "solutions.int"
  MR_Word mercury__exception__TypeInfo_for_T_6,
#line 60 "solutions.int"
  MR_Word mercury__exception__Pred_3_3,
#line 60 "solutions.int"
  MR_Word * mercury__exception__List_4_4)
#line 60 "solutions.int"
{
#line 41 "solutions.opt"
  {
#line 41 "solutions.opt"
    MR_bool mercury__exception__succeeded;
#line 41 "solutions.opt"
    MR_Word mercury__exception__TypeCtorInfo_12_23;
#line 41 "solutions.opt"
    MR_Word mercury__exception__TypeInfo_13_24;
#line 41 "solutions.opt"
    MR_Word mercury__exception__UnsortedList_5_5;
#line 41 "solutions.opt"
    MR_Word mercury__exception__V_5_17;
#line 41 "solutions.opt"
    MR_Word mercury__exception__V_6_19;
#line 71 "solutions.opt"
    MR_Box mercury__exception__conv1_UnsortedList_5_5;
#line 103 "builtin.opt"
    MR_Word mercury__exception__TypeInfo_8_26;
#line 103 "builtin.opt"
    MR_Box mercury__exception__conv2_Y;

#line 69 "solutions.opt"
    {
#line 69 "solutions.opt"
      mercury__exception__V_5_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__exception__V_5_17, 0) = ((MR_Box) (&mercury__exception_scalar_common_8[2]));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__exception__V_5_17, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0_1));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__exception__V_5_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 69 "solutions.opt"
      MR_hl_field(MR_mktag(0), mercury__exception__V_5_17, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 69 "solutions.opt"
    }
#line 70 "solutions.opt"
    mercury__exception__V_6_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4921 "exception.c"
    mercury__exception__TypeCtorInfo_12_23 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4923 "exception.c"
    {
#line 4925 "exception.c"
      mercury__exception__TypeInfo_13_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4927 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_13_24, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_12_23));
#line 4929 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_13_24, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 4931 "exception.c"
    }
#line 71 "solutions.opt"
    {
#line 71 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_7(mercury__exception__TypeInfo_for_T_6, mercury__exception__TypeInfo_13_24, (MR_Word) mercury__exception__Pred_3_3, (MR_Word) mercury__exception__V_5_17, ((MR_Box) (mercury__exception__V_6_19)), &mercury__exception__conv1_UnsortedList_5_5);
    }
#line 71 "solutions.opt"
    mercury__exception__UnsortedList_5_5 = ((MR_Word) mercury__exception__conv1_UnsortedList_5_5);
#line 103 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__exception__UnsortedList_5_5)) ;
		{
#line 103 "builtin.opt"

    Y = X;

#line 4953 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv2_Y  = (MR_Box) Y;
#line 103 "builtin.opt"
    *mercury__exception__List_4_4 = ((MR_Word) mercury__exception__conv2_Y);
#line 103 "builtin.opt"
}
#line 41 "solutions.opt"
  }
#line 60 "solutions.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__exception__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 204 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_101_120_99_101_112_116_105_111_110_95_95_110_101_97_114_95_115_116_97_99_107_95_108_105_109_105_116_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 204 "exception.m"
  MR_Word * mercury__exception__HeadVar__1_1)
#line 204 "exception.m"
{
#line 204 "exception.m"
  {
#line 204 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 204 "exception.m"
    *mercury__exception__HeadVar__1_1 = (MR_Integer) 0;
#line 204 "exception.m"
  }
#line 204 "exception.m"
}

#line 204 "exception.m"
MR_bool MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_101_120_99_101_112_116_105_111_110_95_95_110_101_97_114_95_115_116_97_99_107_95_108_105_109_105_116_115_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 204 "exception.m"
{
#line 204 "exception.m"
  {
#line 204 "exception.m"
    return MR_TRUE;
#line 204 "exception.m"
  }
#line 204 "exception.m"
}

#line 1625 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_104_97_110_100_108_101_114_95_95_91_49_93_95_48_3_p_0(
#line 1625 "exception.m"
  MR_Word mercury__exception__Handler_4,
#line 1625 "exception.m"
  MR_Word mercury__exception__Exception_5,
#line 1625 "exception.m"
  MR_Box * mercury__exception__Result_6)
#line 1625 "exception.m"
{
#line 1629 "exception.m"
  {
#line 1629 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 1629 "exception.m"
    void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Handler_4, (MR_Integer) 1)));

#line 1629 "exception.m"
    {
#line 1629 "exception.m"
      mercury__exception__func_0(((MR_Box) mercury__exception__Handler_4), ((MR_Box) (mercury__exception__Exception_5)), mercury__exception__Result_6);
#line 1629 "exception.m"
      return;
    }
#line 1629 "exception.m"
  }
#line 1625 "exception.m"
}

#line 1619 "exception.m"
static MR_bool MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_111_97_108_95_95_91_49_93_95_49_2_p_1(
#line 1619 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 1619 "exception.m"
  MR_Box * mercury__exception__Result_4)
#line 1619 "exception.m"
{
#line 1622 "exception.m"
  {
#line 1622 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 1622 "exception.m"
    MR_bool MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));

#line 1622 "exception.m"
    {
#line 1622 "exception.m"
      return mercury__exception__succeeded = mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), mercury__exception__Result_4);
    }
#line 1622 "exception.m"
    return mercury__exception__succeeded;
#line 1622 "exception.m"
  }
#line 1619 "exception.m"
}

#line 1618 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_111_97_108_95_95_91_49_93_95_48_2_p_0(
#line 1618 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 1618 "exception.m"
  MR_Box * mercury__exception__Result_4)
#line 1618 "exception.m"
{
#line 1622 "exception.m"
  {
#line 1622 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 1622 "exception.m"
    void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));

#line 1622 "exception.m"
    {
#line 1622 "exception.m"
      mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), mercury__exception__Result_4);
#line 1622 "exception.m"
      return;
    }
#line 1622 "exception.m"
  }
#line 1618 "exception.m"
}

#line 536 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_99_99_95_109_117_108_116_105_95_95_91_50_93_95_48_5_p_0_3(
#line 536 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 536 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 536 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 536 "exception.m"
{
#line 536 "exception.m"
  {
#line 536 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 536 "exception.m"
    MR_Word mercury__exception__conv2_HeadVar__2_2;

#line 536 "exception.m"
    {
#line 536 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv2_HeadVar__2_2);
    }
#line 536 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv2_HeadVar__2_2));
#line 536 "exception.m"
  }
#line 536 "exception.m"
}

#line 533 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_99_99_95_109_117_108_116_105_95_95_91_50_93_95_48_5_p_0_2(
#line 533 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 533 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 533 "exception.m"
{
#line 533 "exception.m"
  {
#line 533 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 533 "exception.m"
    MR_Word mercury__exception__conv1_Result_4;

#line 533 "exception.m"
    {
#line 533 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_2(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv1_Result_4);
    }
#line 533 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv1_Result_4));
#line 533 "exception.m"
  }
#line 533 "exception.m"
}

#line 784 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_99_99_95_109_117_108_116_105_95_95_91_50_93_95_48_5_p_0_1(
#line 784 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 784 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 784 "exception.m"
{
#line 784 "exception.m"
  {
#line 784 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 784 "exception.m"
    MR_Tuple mercury__exception__conv0_HeadVar__4_16;

#line 784 "exception.m"
    {
#line 784 "exception.m"
      mercury__exception__IntroducedFrom__pred__try_stm_cc_multi__784__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 5))), &mercury__exception__conv0_HeadVar__4_16);
    }
#line 784 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_HeadVar__4_16));
#line 784 "exception.m"
  }
#line 784 "exception.m"
}

#line 780 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_99_99_95_109_117_108_116_105_95_95_91_50_93_95_48_5_p_0(
#line 780 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_21,
#line 780 "exception.m"
  MR_Word mercury__exception__TransactionGoal_6,
#line 780 "exception.m"
  MR_Word * mercury__exception__Result_7,
#line 780 "exception.m"
  MR_Box mercury__exception__STATE_VARIABLE_STM_0_14,
#line 780 "exception.m"
  MR_Box * mercury__exception__STATE_VARIABLE_STM_15)
#line 780 "exception.m"
{
#line 783 "exception.m"
  {
#line 783 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 783 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_22_22;
#line 783 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_23_23;
#line 783 "exception.m"
    MR_Word mercury__exception__TypeInfo_25_25;
#line 783 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_45_66;
#line 783 "exception.m"
    MR_Word mercury__exception__TypeInfo_46_67;
#line 783 "exception.m"
    MR_Word mercury__exception__Goal_9;
#line 783 "exception.m"
    MR_Word mercury__exception__Result0_13;
#line 783 "exception.m"
    MR_Word mercury__exception__WrappedGoal_44;
#line 783 "exception.m"
    MR_Word mercury__exception__V_47_47;
#line 860 "exception.m"
    MR_Box mercury__exception__conv3_Result0_13;

#line 784 "exception.m"
    {
#line 784 "exception.m"
      mercury__exception__Goal_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 784 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 0) = ((MR_Box) (&mercury__exception_scalar_common_8[1]));
#line 784 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_99_99_95_109_117_108_116_105_95_95_91_50_93_95_48_5_p_0_1));
#line 784 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 784 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_21));
#line 784 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 4) = ((MR_Box) (mercury__exception__TransactionGoal_6));
#line 784 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 5) = ((MR_Box) (mercury__exception__STATE_VARIABLE_STM_0_14));
#line 784 "exception.m"
    }
#line 5247 "exception.c"
    mercury__exception__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 5249 "exception.c"
    mercury__exception__TypeCtorInfo_22_22 = (MR_Word) &mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0;
#line 5251 "exception.c"
    {
#line 5253 "exception.c"
      mercury__exception__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 5255 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_25_25, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_23_23));
#line 5257 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_25_25, 1) = ((MR_Box) ((MR_Integer) 2));
#line 5259 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_25_25, 2) = ((MR_Box) (mercury__exception__TypeInfo_for_T_21));
#line 5261 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_25_25, 3) = ((MR_Box) (mercury__exception__TypeCtorInfo_22_22));
#line 5263 "exception.c"
    }
#line 533 "exception.m"
    {
#line 533 "exception.m"
      mercury__exception__WrappedGoal_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_44, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_44, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_99_99_95_109_117_108_116_105_95_95_91_50_93_95_48_5_p_0_2));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_44, 3) = ((MR_Box) (mercury__exception__TypeInfo_25_25));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_44, 4) = ((MR_Box) (mercury__exception__Goal_9));
#line 533 "exception.m"
    }
#line 536 "exception.m"
    {
#line 536 "exception.m"
      mercury__exception__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_47_47, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_47_47, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_99_99_95_109_117_108_116_105_95_95_91_50_93_95_48_5_p_0_3));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_47_47, 3) = ((MR_Box) (mercury__exception__TypeInfo_25_25));
#line 536 "exception.m"
    }
#line 5295 "exception.c"
    mercury__exception__TypeCtorInfo_45_66 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 5297 "exception.c"
    {
#line 5299 "exception.c"
      mercury__exception__TypeInfo_46_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5301 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_46_67, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_45_66));
#line 5303 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_46_67, 1) = ((MR_Box) (mercury__exception__TypeInfo_25_25));
#line 5305 "exception.c"
    }
#line 860 "exception.m"
    {
#line 860 "exception.m"
      mercury__exception__builtin_catch_3_p_2(mercury__exception__TypeInfo_46_67, (MR_Word) mercury__exception__WrappedGoal_44, (MR_Word) mercury__exception__V_47_47, &mercury__exception__conv3_Result0_13);
    }
#line 860 "exception.m"
    mercury__exception__Result0_13 = ((MR_Word) mercury__exception__conv3_Result0_13);
#line 789 "exception.m"
    {
#line 789 "exception.m"
      mercury__exception__handle_stm_result_4_p_0(mercury__exception__TypeInfo_for_T_21, mercury__exception__Result0_13, mercury__exception__Result_7, mercury__exception__STATE_VARIABLE_STM_0_14, mercury__exception__STATE_VARIABLE_STM_15);
#line 789 "exception.m"
      return;
    }
#line 783 "exception.m"
  }
#line 780 "exception.m"
}

#line 524 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0_3(
#line 524 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 524 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 524 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 524 "exception.m"
{
#line 524 "exception.m"
  {
#line 524 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 524 "exception.m"
    MR_Word mercury__exception__conv2_HeadVar__2_2;

#line 524 "exception.m"
    {
#line 524 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv2_HeadVar__2_2);
    }
#line 524 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv2_HeadVar__2_2));
#line 524 "exception.m"
  }
#line 524 "exception.m"
}

#line 521 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0_2(
#line 521 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 521 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 521 "exception.m"
{
#line 521 "exception.m"
  {
#line 521 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 521 "exception.m"
    MR_Word mercury__exception__conv1_Result_4;

#line 521 "exception.m"
    {
#line 521 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv1_Result_4);
    }
#line 521 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv1_Result_4));
#line 521 "exception.m"
  }
#line 521 "exception.m"
}

#line 771 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0_1(
#line 771 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 771 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 771 "exception.m"
{
#line 771 "exception.m"
  {
#line 771 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 771 "exception.m"
    MR_Tuple mercury__exception__conv0_HeadVar__4_16;

#line 771 "exception.m"
    {
#line 771 "exception.m"
      mercury__exception__IntroducedFrom__pred__try_stm_det__771__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 5))), &mercury__exception__conv0_HeadVar__4_16);
    }
#line 771 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_HeadVar__4_16));
#line 771 "exception.m"
  }
#line 771 "exception.m"
}

#line 767 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0(
#line 767 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_21,
#line 767 "exception.m"
  MR_Word mercury__exception__TransactionGoal_6,
#line 767 "exception.m"
  MR_Word * mercury__exception__Result_7,
#line 767 "exception.m"
  MR_Box mercury__exception__STATE_VARIABLE_STM_0_14,
#line 767 "exception.m"
  MR_Box * mercury__exception__STATE_VARIABLE_STM_15)
#line 767 "exception.m"
{
#line 770 "exception.m"
  {
#line 770 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 770 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_22_22;
#line 770 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_23_23;
#line 770 "exception.m"
    MR_Word mercury__exception__TypeInfo_25_25;
#line 770 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_37_58;
#line 770 "exception.m"
    MR_Word mercury__exception__TypeInfo_38_59;
#line 770 "exception.m"
    MR_Word mercury__exception__Goal_9;
#line 770 "exception.m"
    MR_Word mercury__exception__Result0_13;
#line 770 "exception.m"
    MR_Word mercury__exception__WrappedGoal_28;
#line 770 "exception.m"
    MR_Word mercury__exception__Result0_30;
#line 770 "exception.m"
    MR_Word mercury__exception__V_32_32;
#line 856 "exception.m"
    MR_Box mercury__exception__conv3_Result0_30;
#line 103 "builtin.opt"
    MR_Word mercury__exception__TypeInfo_38_92;
#line 103 "builtin.opt"
    MR_Box mercury__exception__conv4_Y;

#line 771 "exception.m"
    {
#line 771 "exception.m"
      mercury__exception__Goal_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 771 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 0) = ((MR_Box) (&mercury__exception_scalar_common_8[1]));
#line 771 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0_1));
#line 771 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 771 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_21));
#line 771 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 4) = ((MR_Box) (mercury__exception__TransactionGoal_6));
#line 771 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 5) = ((MR_Box) (mercury__exception__STATE_VARIABLE_STM_0_14));
#line 771 "exception.m"
    }
#line 5476 "exception.c"
    mercury__exception__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 5478 "exception.c"
    mercury__exception__TypeCtorInfo_22_22 = (MR_Word) &mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0;
#line 5480 "exception.c"
    {
#line 5482 "exception.c"
      mercury__exception__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 5484 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_25_25, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_23_23));
#line 5486 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_25_25, 1) = ((MR_Box) ((MR_Integer) 2));
#line 5488 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_25_25, 2) = ((MR_Box) (mercury__exception__TypeInfo_for_T_21));
#line 5490 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_25_25, 3) = ((MR_Box) (mercury__exception__TypeCtorInfo_22_22));
#line 5492 "exception.c"
    }
#line 521 "exception.m"
    {
#line 521 "exception.m"
      mercury__exception__WrappedGoal_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_28, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_28, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0_2));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_28, 3) = ((MR_Box) (mercury__exception__TypeInfo_25_25));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_28, 4) = ((MR_Box) (mercury__exception__Goal_9));
#line 521 "exception.m"
    }
#line 524 "exception.m"
    {
#line 524 "exception.m"
      mercury__exception__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_32_32, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_32_32, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0_3));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_32_32, 3) = ((MR_Box) (mercury__exception__TypeInfo_25_25));
#line 524 "exception.m"
    }
#line 5524 "exception.c"
    mercury__exception__TypeCtorInfo_37_58 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 5526 "exception.c"
    {
#line 5528 "exception.c"
      mercury__exception__TypeInfo_38_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5530 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_38_59, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_37_58));
#line 5532 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_38_59, 1) = ((MR_Box) (mercury__exception__TypeInfo_25_25));
#line 5534 "exception.c"
    }
#line 856 "exception.m"
    {
#line 856 "exception.m"
      mercury__exception__builtin_catch_3_p_0(mercury__exception__TypeInfo_38_59, (MR_Word) mercury__exception__WrappedGoal_28, (MR_Word) mercury__exception__V_32_32, &mercury__exception__conv3_Result0_30);
    }
#line 856 "exception.m"
    mercury__exception__Result0_30 = ((MR_Word) mercury__exception__conv3_Result0_30);
#line 103 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__exception__Result0_30)) ;
		{
#line 103 "builtin.opt"

    Y = X;

#line 5556 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv4_Y  = (MR_Box) Y;
#line 103 "builtin.opt"
    mercury__exception__Result0_13 = ((MR_Word) mercury__exception__conv4_Y);
#line 103 "builtin.opt"
}
#line 776 "exception.m"
    {
#line 776 "exception.m"
      mercury__exception__handle_stm_result_4_p_0(mercury__exception__TypeInfo_for_T_21, mercury__exception__Result0_13, mercury__exception__Result_7, mercury__exception__STATE_VARIABLE_STM_0_14, mercury__exception__STATE_VARIABLE_STM_15);
#line 776 "exception.m"
      return;
    }
#line 770 "exception.m"
  }
#line 767 "exception.m"
}

#line 463 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_95_95_91_49_93_95_48_1_p_0(
#line 463 "exception.m"
  MR_Box mercury__exception__HeadVar__1_1)
#line 463 "exception.m"
{
#line 465 "exception.m"
  {
#line 465 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 465 "exception.m"
    MR_Word mercury__exception__TypeInfo_for_T_3;

#line 468 "exception.m"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_95_95_91_49_93_95_48_1_p_0


		{
#line 468 "exception.m"
;
#line 5599 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 468 "exception.m"
}
#line 465 "exception.m"
  }
#line 463 "exception.m"
}

#line 337 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_49_2_p_1(
#line 337 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 337 "exception.m"
{
#line 395 "exception.m"
  {
#line 395 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 394 "exception.m"
    {
#line 100 "builtin.opt"
      MR_Word mercury__exception__TypeCtorInfo_17_19;
#line 100 "builtin.opt"
      MR_Box mercury__exception__conv0_Y;

#line 100 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_49_2_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) ((MR_Integer) 2)) ;
		{
#line 100 "builtin.opt"

    Y = X;

#line 5642 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv0_Y  = (MR_Box) Y;
#line 100 "builtin.opt"
      *mercury__exception__Det_2 = ((MR_Word) mercury__exception__conv0_Y);
#line 100 "builtin.opt"
}
#line 394 "exception.m"
    }
#line 395 "exception.m"
  }
#line 337 "exception.m"
}

#line 335 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(
#line 335 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 335 "exception.m"
{
#line 390 "exception.m"
  {
#line 390 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 389 "exception.m"
    {
#line 100 "builtin.opt"
      MR_Word mercury__exception__TypeCtorInfo_15_19;
#line 100 "builtin.opt"
      MR_Box mercury__exception__conv0_Y;

#line 100 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) ((MR_Integer) 0)) ;
		{
#line 100 "builtin.opt"

    Y = X;

#line 5690 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv0_Y  = (MR_Box) Y;
#line 100 "builtin.opt"
      *mercury__exception__Det_2 = ((MR_Word) mercury__exception__conv0_Y);
#line 100 "builtin.opt"
}
#line 389 "exception.m"
    }
#line 390 "exception.m"
  }
#line 335 "exception.m"
}

#line 331 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_53_2_p_5(
#line 331 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 331 "exception.m"
{
#line 371 "exception.m"
  {
#line 371 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 370 "exception.m"
    {
#line 100 "builtin.opt"
      MR_Word mercury__exception__TypeCtorInfo_40_46;
#line 100 "builtin.opt"
      MR_Box mercury__exception__conv0_Y;

#line 100 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_53_2_p_5

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) ((MR_Integer) 3)) ;
		{
#line 100 "builtin.opt"

    Y = X;

#line 5738 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv0_Y  = (MR_Box) Y;
#line 100 "builtin.opt"
      *mercury__exception__Det_2 = ((MR_Word) mercury__exception__conv0_Y);
#line 100 "builtin.opt"
}
#line 370 "exception.m"
    }
#line 371 "exception.m"
  }
#line 331 "exception.m"
}

#line 329 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_52_2_p_4(
#line 329 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 329 "exception.m"
{
#line 366 "exception.m"
  {
#line 366 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 365 "exception.m"
    {
#line 100 "builtin.opt"
      MR_Word mercury__exception__TypeCtorInfo_38_46;
#line 100 "builtin.opt"
      MR_Box mercury__exception__conv0_Y;

#line 100 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_52_2_p_4

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) ((MR_Integer) 2)) ;
		{
#line 100 "builtin.opt"

    Y = X;

#line 5786 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv0_Y  = (MR_Box) Y;
#line 100 "builtin.opt"
      *mercury__exception__Det_2 = ((MR_Word) mercury__exception__conv0_Y);
#line 100 "builtin.opt"
}
#line 365 "exception.m"
    }
#line 366 "exception.m"
  }
#line 329 "exception.m"
}

#line 327 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_51_2_p_3(
#line 327 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 327 "exception.m"
{
#line 381 "exception.m"
  {
#line 381 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 380 "exception.m"
    {
#line 100 "builtin.opt"
      MR_Word mercury__exception__TypeCtorInfo_44_46;
#line 100 "builtin.opt"
      MR_Box mercury__exception__conv0_Y;

#line 100 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_51_2_p_3

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) ((MR_Integer) 5)) ;
		{
#line 100 "builtin.opt"

    Y = X;

#line 5834 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv0_Y  = (MR_Box) Y;
#line 100 "builtin.opt"
      *mercury__exception__Det_2 = ((MR_Word) mercury__exception__conv0_Y);
#line 100 "builtin.opt"
}
#line 380 "exception.m"
    }
#line 381 "exception.m"
  }
#line 327 "exception.m"
}

#line 325 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_50_2_p_2(
#line 325 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 325 "exception.m"
{
#line 376 "exception.m"
  {
#line 376 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 375 "exception.m"
    {
#line 100 "builtin.opt"
      MR_Word mercury__exception__TypeCtorInfo_42_46;
#line 100 "builtin.opt"
      MR_Box mercury__exception__conv0_Y;

#line 100 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_50_2_p_2

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) ((MR_Integer) 4)) ;
		{
#line 100 "builtin.opt"

    Y = X;

#line 5882 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv0_Y  = (MR_Box) Y;
#line 100 "builtin.opt"
      *mercury__exception__Det_2 = ((MR_Word) mercury__exception__conv0_Y);
#line 100 "builtin.opt"
}
#line 375 "exception.m"
    }
#line 376 "exception.m"
  }
#line 325 "exception.m"
}

#line 323 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_49_2_p_1(
#line 323 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 323 "exception.m"
{
#line 361 "exception.m"
  {
#line 361 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 360 "exception.m"
    {
#line 100 "builtin.opt"
      MR_Word mercury__exception__TypeCtorInfo_36_46;
#line 100 "builtin.opt"
      MR_Box mercury__exception__conv0_Y;

#line 100 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_49_2_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) ((MR_Integer) 1)) ;
		{
#line 100 "builtin.opt"

    Y = X;

#line 5930 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv0_Y  = (MR_Box) Y;
#line 100 "builtin.opt"
      *mercury__exception__Det_2 = ((MR_Word) mercury__exception__conv0_Y);
#line 100 "builtin.opt"
}
#line 360 "exception.m"
    }
#line 361 "exception.m"
  }
#line 323 "exception.m"
}

#line 321 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_48_2_p_0(
#line 321 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 321 "exception.m"
{
#line 356 "exception.m"
  {
#line 356 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 355 "exception.m"
    {
#line 100 "builtin.opt"
      MR_Word mercury__exception__TypeCtorInfo_34_46;
#line 100 "builtin.opt"
      MR_Box mercury__exception__conv0_Y;

#line 100 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_48_2_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) ((MR_Integer) 0)) ;
		{
#line 100 "builtin.opt"

    Y = X;

#line 5978 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv0_Y  = (MR_Box) Y;
#line 100 "builtin.opt"
      *mercury__exception__Det_2 = ((MR_Word) mercury__exception__conv0_Y);
#line 100 "builtin.opt"
}
#line 355 "exception.m"
    }
#line 356 "exception.m"
  }
#line 321 "exception.m"
}

#line 589 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3_3(
#line 589 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 589 "exception.m"
{
#line 589 "exception.m"
  {
#line 589 "exception.m"
    struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_0_s * mercury__exception__env_ptr = (struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_0_s *) mercury__exception__env_ptr_arg;

#line 589 "exception.m"
    *((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_95_48__wrapper_arg_1) = ((MR_Box) ((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_95_48__conv1_HeadVar__3_46));
#line 589 "exception.m"
    {
#line 589 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_95_48__cont)((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_95_48__cont_env_ptr);
#line 589 "exception.m"
      return;
    }
#line 589 "exception.m"
  }
#line 589 "exception.m"
}

#line 589 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3_4(
#line 589 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 589 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 589 "exception.m"
  MR_Cont mercury__exception__cont,
#line 589 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 589 "exception.m"
{
#line 589 "exception.m"
  {
#line 589 "exception.m"
    struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_0_s mercury__exception__env;

#line 589 "exception.m"
    (mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_95_48__wrapper_arg_1 = mercury__exception__wrapper_arg_1;
#line 589 "exception.m"
    (mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_95_48__cont = mercury__exception__cont;
#line 589 "exception.m"
    (mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_95_48__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 589 "exception.m"
    {
#line 589 "exception.m"
      MR_Box mercury__exception__closure = mercury__exception__closure_arg;

#line 589 "exception.m"
      {
#line 589 "exception.m"
        mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &(mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_52_95_101_110_118_95_48__conv1_HeadVar__3_46, mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3_3, &mercury__exception__env);
      }
#line 589 "exception.m"
    }
#line 589 "exception.m"
  }
#line 589 "exception.m"
}

#line 586 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3_1(
#line 586 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 586 "exception.m"
{
#line 586 "exception.m"
  {
#line 586 "exception.m"
    struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_0_s * mercury__exception__env_ptr = (struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_0_s *) mercury__exception__env_ptr_arg;

#line 586 "exception.m"
    *((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_95_48__wrapper_arg_1) = ((MR_Box) ((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_95_48__conv0_HeadVar__2_2));
#line 586 "exception.m"
    {
#line 586 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_95_48__cont)((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_95_48__cont_env_ptr);
#line 586 "exception.m"
      return;
    }
#line 586 "exception.m"
  }
#line 586 "exception.m"
}

#line 586 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3_2(
#line 586 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 586 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 586 "exception.m"
  MR_Cont mercury__exception__cont,
#line 586 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 586 "exception.m"
{
#line 586 "exception.m"
  {
#line 586 "exception.m"
    struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_0_s mercury__exception__env;

#line 586 "exception.m"
    (mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_95_48__wrapper_arg_1 = mercury__exception__wrapper_arg_1;
#line 586 "exception.m"
    (mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_95_48__cont = mercury__exception__cont;
#line 586 "exception.m"
    (mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_95_48__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 586 "exception.m"
    {
#line 586 "exception.m"
      MR_Box mercury__exception__closure = mercury__exception__closure_arg;

#line 586 "exception.m"
      {
#line 586 "exception.m"
        mercury__exception__wrap_success_2_p_3(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &(mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_95_52_95_112_95_51_95_50_95_101_110_118_95_48__conv0_HeadVar__2_2, mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3_1, &mercury__exception__env);
      }
#line 586 "exception.m"
    }
#line 586 "exception.m"
  }
#line 586 "exception.m"
}

#line 307 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3(
#line 307 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_53,
#line 307 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 307 "exception.m"
  MR_Word * mercury__exception__MaybeException_3,
#line 307 "exception.m"
  MR_Word * mercury__exception__Solutions_4)
#line 307 "exception.m"
{
#line 549 "exception.m"
  {
#line 549 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 549 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_72_72;
#line 549 "exception.m"
    MR_Word mercury__exception__TypeInfo_73_73;
#line 549 "exception.m"
    MR_Word mercury__exception__WrappedGoal_40;
#line 549 "exception.m"
    MR_Word mercury__exception__TryOneSoln_42;
#line 549 "exception.m"
    MR_Word mercury__exception__ResultList_44;
#line 549 "exception.m"
    MR_Word mercury__exception__V_49_49;
#line 549 "exception.m"
    MR_Word mercury__exception__V_50_50;

#line 586 "exception.m"
    {
#line 586 "exception.m"
      mercury__exception__WrappedGoal_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 586 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_40, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 586 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_40, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3_2));
#line 586 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 586 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_40, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_53));
#line 586 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_40, 4) = ((MR_Box) (mercury__exception__Goal_2));
#line 586 "exception.m"
    }
#line 589 "exception.m"
    {
#line 589 "exception.m"
      mercury__exception__TryOneSoln_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 589 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_42, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[2]));
#line 589 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_42, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3_4));
#line 589 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 589 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_42, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_53));
#line 589 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_42, 4) = ((MR_Box) (mercury__exception__WrappedGoal_40));
#line 589 "exception.m"
    }
#line 6192 "exception.c"
    mercury__exception__TypeCtorInfo_72_72 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 6194 "exception.c"
    {
#line 6196 "exception.c"
      mercury__exception__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6198 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_73_73, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_72_72));
#line 6200 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_73_73, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_53));
#line 6202 "exception.c"
    }
#line 592 "exception.m"
    {
#line 592 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0(mercury__exception__TypeInfo_73_73, mercury__exception__TryOneSoln_42, &mercury__exception__ResultList_44);
    }
#line 593 "exception.m"
    mercury__exception__V_49_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 593 "exception.m"
    mercury__exception__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 593 "exception.m"
    {
#line 593 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_6_p_in__list_0(mercury__exception__TypeInfo_for_T_53, mercury__exception__ResultList_44, mercury__exception__V_49_49, mercury__exception__MaybeException_3, mercury__exception__V_50_50, mercury__exception__Solutions_4);
#line 593 "exception.m"
      return;
    }
#line 549 "exception.m"
  }
#line 307 "exception.m"
}

#line 579 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2_3(
#line 579 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 579 "exception.m"
{
#line 579 "exception.m"
  {
#line 579 "exception.m"
    struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_0_s * mercury__exception__env_ptr = (struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_0_s *) mercury__exception__env_ptr_arg;

#line 579 "exception.m"
    *((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_95_48__wrapper_arg_1) = ((MR_Box) ((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_95_48__conv1_HeadVar__3_30));
#line 579 "exception.m"
    {
#line 579 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_95_48__cont)((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_95_48__cont_env_ptr);
#line 579 "exception.m"
      return;
    }
#line 579 "exception.m"
  }
#line 579 "exception.m"
}

#line 579 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2_4(
#line 579 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 579 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 579 "exception.m"
  MR_Cont mercury__exception__cont,
#line 579 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 579 "exception.m"
{
#line 579 "exception.m"
  {
#line 579 "exception.m"
    struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_0_s mercury__exception__env;

#line 579 "exception.m"
    (mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_95_48__wrapper_arg_1 = mercury__exception__wrapper_arg_1;
#line 579 "exception.m"
    (mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_95_48__cont = mercury__exception__cont;
#line 579 "exception.m"
    (mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_95_48__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 579 "exception.m"
    {
#line 579 "exception.m"
      MR_Box mercury__exception__closure = mercury__exception__closure_arg;

#line 579 "exception.m"
      {
#line 579 "exception.m"
        mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &(mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_52_95_101_110_118_95_48__conv1_HeadVar__3_30, mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2_3, &mercury__exception__env);
      }
#line 579 "exception.m"
    }
#line 579 "exception.m"
  }
#line 579 "exception.m"
}

#line 576 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2_1(
#line 576 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 576 "exception.m"
{
#line 576 "exception.m"
  {
#line 576 "exception.m"
    struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_0_s * mercury__exception__env_ptr = (struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_0_s *) mercury__exception__env_ptr_arg;

#line 576 "exception.m"
    *((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_95_48__wrapper_arg_1) = ((MR_Box) ((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_95_48__conv0_HeadVar__2_2));
#line 576 "exception.m"
    {
#line 576 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_95_48__cont)((mercury__exception__env_ptr)->mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_95_48__cont_env_ptr);
#line 576 "exception.m"
      return;
    }
#line 576 "exception.m"
  }
#line 576 "exception.m"
}

#line 576 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2_2(
#line 576 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 576 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 576 "exception.m"
  MR_Cont mercury__exception__cont,
#line 576 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 576 "exception.m"
{
#line 576 "exception.m"
  {
#line 576 "exception.m"
    struct mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_0_s mercury__exception__env;

#line 576 "exception.m"
    (mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_95_48__wrapper_arg_1 = mercury__exception__wrapper_arg_1;
#line 576 "exception.m"
    (mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_95_48__cont = mercury__exception__cont;
#line 576 "exception.m"
    (mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_95_48__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 576 "exception.m"
    {
#line 576 "exception.m"
      MR_Box mercury__exception__closure = mercury__exception__closure_arg;

#line 576 "exception.m"
      {
#line 576 "exception.m"
        mercury__exception__wrap_success_2_p_2(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &(mercury__exception__env).mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_95_52_95_112_95_50_95_50_95_101_110_118_95_48__conv0_HeadVar__2_2, mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2_1, &mercury__exception__env);
      }
#line 576 "exception.m"
    }
#line 576 "exception.m"
  }
#line 576 "exception.m"
}

#line 305 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2(
#line 305 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_53,
#line 305 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 305 "exception.m"
  MR_Word * mercury__exception__MaybeException_3,
#line 305 "exception.m"
  MR_Word * mercury__exception__Solutions_4)
#line 305 "exception.m"
{
#line 549 "exception.m"
  {
#line 549 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 549 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_58_58;
#line 549 "exception.m"
    MR_Word mercury__exception__TypeInfo_59_59;
#line 549 "exception.m"
    MR_Word mercury__exception__WrappedGoal_24;
#line 549 "exception.m"
    MR_Word mercury__exception__TryOneSoln_26;
#line 549 "exception.m"
    MR_Word mercury__exception__ResultList_28;
#line 549 "exception.m"
    MR_Word mercury__exception__V_33_33;
#line 549 "exception.m"
    MR_Word mercury__exception__V_34_34;

#line 576 "exception.m"
    {
#line 576 "exception.m"
      mercury__exception__WrappedGoal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 576 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_24, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 576 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_24, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2_2));
#line 576 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 576 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_24, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_53));
#line 576 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_24, 4) = ((MR_Box) (mercury__exception__Goal_2));
#line 576 "exception.m"
    }
#line 579 "exception.m"
    {
#line 579 "exception.m"
      mercury__exception__TryOneSoln_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 579 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_26, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[2]));
#line 579 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_26, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2_4));
#line 579 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 579 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_26, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_53));
#line 579 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_26, 4) = ((MR_Box) (mercury__exception__WrappedGoal_24));
#line 579 "exception.m"
    }
#line 6423 "exception.c"
    mercury__exception__TypeCtorInfo_58_58 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 6425 "exception.c"
    {
#line 6427 "exception.c"
      mercury__exception__TypeInfo_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6429 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_59_59, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_58_58));
#line 6431 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_59_59, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_53));
#line 6433 "exception.c"
    }
#line 582 "exception.m"
    {
#line 582 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_110_115_111_114_116_101_100_95_115_111_108_117_116_105_111_110_115_95_95_104_111_49_48_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_93_95_48_2_p_in__solutions_0(mercury__exception__TypeInfo_59_59, mercury__exception__TryOneSoln_26, &mercury__exception__ResultList_28);
    }
#line 583 "exception.m"
    mercury__exception__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 583 "exception.m"
    mercury__exception__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 583 "exception.m"
    {
#line 583 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_6_p_in__list_0(mercury__exception__TypeInfo_for_T_53, mercury__exception__ResultList_28, mercury__exception__V_33_33, mercury__exception__MaybeException_3, mercury__exception__V_34_34, mercury__exception__Solutions_4);
#line 583 "exception.m"
      return;
    }
#line 549 "exception.m"
  }
#line 305 "exception.m"
}

#line 303 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_49_4_p_1(
#line 303 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_53,
#line 303 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 303 "exception.m"
  MR_Word * mercury__exception__MaybeException_3,
#line 303 "exception.m"
  MR_Word * mercury__exception__Solutions_4)
#line 303 "exception.m"
{
#line 549 "exception.m"
  {
#line 549 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 549 "exception.m"
    MR_Word mercury__exception__Result_16;

#line 561 "exception.m"
    {
#line 561 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_49_3_p_1(mercury__exception__TypeInfo_for_T_53, mercury__exception__Goal_2, &mercury__exception__Result_16);
    }
#line 566 "exception.m"
    if ((mercury__exception__Result_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 563 "exception.m"
      {
#line 564 "exception.m"
        *mercury__exception__Solutions_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 565 "exception.m"
        *mercury__exception__MaybeException_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 563 "exception.m"
      }
#line 566 "exception.m"
    else
#line 566 "exception.m"
      if (((MR_tag((MR_Word) mercury__exception__Result_16)) == (MR_mktag((MR_Integer) 2))))
#line 571 "exception.m"
        {
#line 571 "exception.m"
          MR_Word mercury__exception__Exception_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__exception__Result_16, (MR_Integer) 0)));

#line 572 "exception.m"
          *mercury__exception__Solutions_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 573 "exception.m"
          {
#line 573 "exception.m"
            MR_Word base;
#line 573 "exception.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 573 "exception.m"
            *mercury__exception__MaybeException_3 = base;
#line 573 "exception.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__exception__Exception_18));
#line 573 "exception.m"
          }
#line 571 "exception.m"
        }
#line 566 "exception.m"
      else
#line 567 "exception.m"
        {
#line 567 "exception.m"
          MR_Box mercury__exception__Solution_17 = (MR_hl_field(MR_mktag(1), mercury__exception__Result_16, (MR_Integer) 0));
#line 567 "exception.m"
          MR_Word mercury__exception__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 568 "exception.m"
          {
#line 568 "exception.m"
            MR_Word base;
#line 568 "exception.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "exception.m"
            *mercury__exception__Solutions_4 = base;
#line 568 "exception.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__exception__Solution_17;
#line 568 "exception.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__exception__V_20_20));
#line 568 "exception.m"
          }
#line 569 "exception.m"
          *mercury__exception__MaybeException_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 567 "exception.m"
        }
#line 549 "exception.m"
  }
#line 303 "exception.m"
}

#line 301 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_48_4_p_0(
#line 301 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_53,
#line 301 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 301 "exception.m"
  MR_Word * mercury__exception__MaybeException_3,
#line 301 "exception.m"
  MR_Word * mercury__exception__Solutions_4)
#line 301 "exception.m"
{
#line 549 "exception.m"
  {
#line 549 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 549 "exception.m"
    MR_Word mercury__exception__Result_8;

#line 550 "exception.m"
    {
#line 550 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_48_3_p_0(mercury__exception__TypeInfo_for_T_53, mercury__exception__Goal_2, &mercury__exception__Result_8);
    }
#line 555 "exception.m"
    if (((MR_tag((MR_Word) mercury__exception__Result_8)) == (MR_mktag((MR_Integer) 2))))
#line 556 "exception.m"
      {
#line 556 "exception.m"
        MR_Word mercury__exception__Exception_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__exception__Result_8, (MR_Integer) 0)));

#line 557 "exception.m"
        *mercury__exception__Solutions_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 558 "exception.m"
        {
#line 558 "exception.m"
          MR_Word base;
#line 558 "exception.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 558 "exception.m"
          *mercury__exception__MaybeException_3 = base;
#line 558 "exception.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__exception__Exception_10));
#line 558 "exception.m"
        }
#line 556 "exception.m"
      }
#line 555 "exception.m"
    else
#line 552 "exception.m"
      {
#line 552 "exception.m"
        MR_Box mercury__exception__Solution_9 = (MR_hl_field(MR_mktag(1), mercury__exception__Result_8, (MR_Integer) 0));
#line 552 "exception.m"
        MR_Word mercury__exception__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 553 "exception.m"
        {
#line 553 "exception.m"
          MR_Word base;
#line 553 "exception.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "exception.m"
          *mercury__exception__Solutions_4 = base;
#line 553 "exception.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__exception__Solution_9;
#line 553 "exception.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__exception__V_12_12));
#line 553 "exception.m"
        }
#line 554 "exception.m"
        *mercury__exception__MaybeException_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "exception.m"
      }
#line 549 "exception.m"
  }
#line 301 "exception.m"
}

#line 638 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_111_114_101_95_100_101_116_95_95_91_51_93_95_49_5_p_1_1(
#line 638 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 638 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 638 "exception.m"
{
#line 638 "exception.m"
  {
#line 638 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 638 "exception.m"
    MR_Tuple mercury__exception__conv0_HeadVar__5_31;

#line 638 "exception.m"
    {
#line 638 "exception.m"
      mercury__exception__IntroducedFrom__pred__try_store_det__638__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 5))), &mercury__exception__conv0_HeadVar__5_31);
    }
#line 638 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_HeadVar__5_31));
#line 638 "exception.m"
  }
#line 638 "exception.m"
}

#line 297 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_111_114_101_95_100_101_116_95_95_91_51_93_95_49_5_p_1(
#line 297 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_36,
#line 297 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_S_37,
#line 297 "exception.m"
  MR_Word mercury__exception__StoreGoal_2,
#line 297 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 297 "exception.m"
{
#line 630 "exception.m"
  {
#line 630 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 630 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_43_43;
#line 630 "exception.m"
    MR_Word mercury__exception__TypeInfo_44_44;
#line 630 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_45_45;
#line 630 "exception.m"
    MR_Word mercury__exception__TypeInfo_47_47;
#line 630 "exception.m"
    MR_Word mercury__exception__Goal_24;
#line 630 "exception.m"
    MR_Word mercury__exception__Result0_28;

#line 638 "exception.m"
    {
#line 638 "exception.m"
      mercury__exception__Goal_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 638 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_24, 0) = ((MR_Box) (&mercury__exception_scalar_common_10[0]));
#line 638 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_24, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_111_114_101_95_100_101_116_95_95_91_51_93_95_49_5_p_1_1));
#line 638 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 638 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_24, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_36));
#line 638 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_24, 4) = ((MR_Box) (mercury__exception__TypeInfo_for_S_37));
#line 638 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_24, 5) = ((MR_Box) (mercury__exception__StoreGoal_2));
#line 638 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_24, 6) = NULL;
#line 638 "exception.m"
    }
#line 6706 "exception.c"
    mercury__exception__TypeCtorInfo_45_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 6708 "exception.c"
    mercury__exception__TypeCtorInfo_43_43 = (MR_Word) &mercury__store__store__type_ctor_info_store_1;
#line 6710 "exception.c"
    {
#line 6712 "exception.c"
      mercury__exception__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6714 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_44_44, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_43_43));
#line 6716 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_44_44, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_S_37));
#line 6718 "exception.c"
    }
#line 6720 "exception.c"
    {
#line 6722 "exception.c"
      mercury__exception__TypeInfo_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 6724 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_47_47, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_45_45));
#line 6726 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_47_47, 1) = ((MR_Box) ((MR_Integer) 2));
#line 6728 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_47_47, 2) = ((MR_Box) (mercury__exception__TypeInfo_for_T_36));
#line 6730 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_47_47, 3) = ((MR_Box) (mercury__exception__TypeInfo_44_44));
#line 6732 "exception.c"
    }
#line 642 "exception.m"
    {
#line 642 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0(mercury__exception__TypeInfo_47_47, mercury__exception__Goal_24, &mercury__exception__Result0_28);
    }
#line 643 "exception.m"
    {
#line 643 "exception.m"
      mercury__exception__handle_store_result_4_p_0(mercury__exception__TypeInfo_for_T_36, mercury__exception__TypeInfo_for_S_37, mercury__exception__Result0_28, mercury__exception__Result_3);
#line 643 "exception.m"
      return;
    }
#line 630 "exception.m"
  }
#line 297 "exception.m"
}

#line 631 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_111_114_101_95_100_101_116_95_95_91_51_93_95_48_5_p_0_1(
#line 631 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 631 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 631 "exception.m"
{
#line 631 "exception.m"
  {
#line 631 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 631 "exception.m"
    MR_Tuple mercury__exception__conv0_HeadVar__5_16;

#line 631 "exception.m"
    {
#line 631 "exception.m"
      mercury__exception__IntroducedFrom__pred__try_store_det__631__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 5))), &mercury__exception__conv0_HeadVar__5_16);
    }
#line 631 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_HeadVar__5_16));
#line 631 "exception.m"
  }
#line 631 "exception.m"
}

#line 295 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_111_114_101_95_100_101_116_95_95_91_51_93_95_48_5_p_0(
#line 295 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_36,
#line 295 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_S_37,
#line 295 "exception.m"
  MR_Word mercury__exception__StoreGoal_2,
#line 295 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 295 "exception.m"
{
#line 630 "exception.m"
  {
#line 630 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 630 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_38_38;
#line 630 "exception.m"
    MR_Word mercury__exception__TypeInfo_39_39;
#line 630 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_40_40;
#line 630 "exception.m"
    MR_Word mercury__exception__TypeInfo_42_42;
#line 630 "exception.m"
    MR_Word mercury__exception__Goal_9;
#line 630 "exception.m"
    MR_Word mercury__exception__Result0_13;

#line 631 "exception.m"
    {
#line 631 "exception.m"
      mercury__exception__Goal_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 631 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 0) = ((MR_Box) (&mercury__exception_scalar_common_10[0]));
#line 631 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_111_114_101_95_100_101_116_95_95_91_51_93_95_48_5_p_0_1));
#line 631 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 631 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_36));
#line 631 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 4) = ((MR_Box) (mercury__exception__TypeInfo_for_S_37));
#line 631 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 5) = ((MR_Box) (mercury__exception__StoreGoal_2));
#line 631 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 6) = NULL;
#line 631 "exception.m"
    }
#line 6829 "exception.c"
    mercury__exception__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 6831 "exception.c"
    mercury__exception__TypeCtorInfo_38_38 = (MR_Word) &mercury__store__store__type_ctor_info_store_1;
#line 6833 "exception.c"
    {
#line 6835 "exception.c"
      mercury__exception__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6837 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_39_39, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_38_38));
#line 6839 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_39_39, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_S_37));
#line 6841 "exception.c"
    }
#line 6843 "exception.c"
    {
#line 6845 "exception.c"
      mercury__exception__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 6847 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_42_42, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_40_40));
#line 6849 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_42_42, 1) = ((MR_Box) ((MR_Integer) 2));
#line 6851 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_42_42, 2) = ((MR_Box) (mercury__exception__TypeInfo_for_T_36));
#line 6853 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_42_42, 3) = ((MR_Box) (mercury__exception__TypeInfo_39_39));
#line 6855 "exception.c"
    }
#line 635 "exception.m"
    {
#line 635 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_44_32_49_48_93_95_48_3_p_0(mercury__exception__TypeInfo_42_42, mercury__exception__Goal_9, &mercury__exception__Result0_13);
    }
#line 636 "exception.m"
    {
#line 636 "exception.m"
      mercury__exception__handle_store_result_4_p_0(mercury__exception__TypeInfo_for_T_36, mercury__exception__TypeInfo_for_S_37, mercury__exception__Result0_13, mercury__exception__Result_3);
#line 636 "exception.m"
      return;
    }
#line 630 "exception.m"
  }
#line 295 "exception.m"
}

#line 536 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_49_5_p_1_3(
#line 536 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 536 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 536 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 536 "exception.m"
{
#line 536 "exception.m"
  {
#line 536 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 536 "exception.m"
    MR_Word mercury__exception__conv1_HeadVar__2_2;

#line 536 "exception.m"
    {
#line 536 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv1_HeadVar__2_2);
    }
#line 536 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv1_HeadVar__2_2));
#line 536 "exception.m"
  }
#line 536 "exception.m"
}

#line 533 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_49_5_p_1_2(
#line 533 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 533 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 533 "exception.m"
{
#line 533 "exception.m"
  {
#line 533 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 533 "exception.m"
    MR_Word mercury__exception__conv0_Result_4;

#line 533 "exception.m"
    {
#line 533 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_2(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv0_Result_4);
    }
#line 533 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_Result_4));
#line 533 "exception.m"
  }
#line 533 "exception.m"
}

#line 682 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_49_5_p_1_1(
#line 682 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 682 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 682 "exception.m"
{
#line 682 "exception.m"
  {
#line 682 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;

#line 682 "exception.m"
    {
#line 682 "exception.m"
      mercury__exception__very_unsafe_perform_io_2_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), mercury__exception__wrapper_arg_1);
#line 682 "exception.m"
      return;
    }
#line 682 "exception.m"
  }
#line 682 "exception.m"
}

#line 290 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_49_5_p_1(
#line 290 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_26,
#line 290 "exception.m"
  MR_Word mercury__exception__IO_Goal_2,
#line 290 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 290 "exception.m"
{
#line 676 "exception.m"
  {
#line 676 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 676 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_45_67;
#line 676 "exception.m"
    MR_Word mercury__exception__TypeInfo_46_68;
#line 676 "exception.m"
    MR_Word mercury__exception__Goal_19;
#line 676 "exception.m"
    MR_Word mercury__exception__WrappedGoal_45;
#line 676 "exception.m"
    MR_Word mercury__exception__V_48_48;
#line 860 "exception.m"
    MR_Box mercury__exception__conv2_Result_3;

#line 682 "exception.m"
    {
#line 682 "exception.m"
      mercury__exception__Goal_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 682 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_19, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[3]));
#line 682 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_19, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_49_5_p_1_1));
#line 682 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 682 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_19, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_26));
#line 682 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_19, 4) = ((MR_Box) (mercury__exception__IO_Goal_2));
#line 682 "exception.m"
    }
#line 533 "exception.m"
    {
#line 533 "exception.m"
      mercury__exception__WrappedGoal_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_45, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_45, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_49_5_p_1_2));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_45, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_45, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_26));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_45, 4) = ((MR_Box) (mercury__exception__Goal_19));
#line 533 "exception.m"
    }
#line 536 "exception.m"
    {
#line 536 "exception.m"
      mercury__exception__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_48_48, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_48_48, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_49_5_p_1_3));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_48_48, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_26));
#line 536 "exception.m"
    }
#line 7032 "exception.c"
    mercury__exception__TypeCtorInfo_45_67 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 7034 "exception.c"
    {
#line 7036 "exception.c"
      mercury__exception__TypeInfo_46_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7038 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_46_68, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_45_67));
#line 7040 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_46_68, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_26));
#line 7042 "exception.c"
    }
#line 860 "exception.m"
    {
#line 860 "exception.m"
      mercury__exception__builtin_catch_3_p_2(mercury__exception__TypeInfo_46_68, (MR_Word) mercury__exception__WrappedGoal_45, (MR_Word) mercury__exception__V_48_48, &mercury__exception__conv2_Result_3);
    }
#line 860 "exception.m"
    *mercury__exception__Result_3 = ((MR_Word) mercury__exception__conv2_Result_3);
#line 676 "exception.m"
  }
#line 290 "exception.m"
}

#line 524 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0_3(
#line 524 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 524 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 524 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 524 "exception.m"
{
#line 524 "exception.m"
  {
#line 524 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 524 "exception.m"
    MR_Word mercury__exception__conv1_HeadVar__2_2;

#line 524 "exception.m"
    {
#line 524 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv1_HeadVar__2_2);
    }
#line 524 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv1_HeadVar__2_2));
#line 524 "exception.m"
  }
#line 524 "exception.m"
}

#line 521 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0_2(
#line 521 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 521 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 521 "exception.m"
{
#line 521 "exception.m"
  {
#line 521 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 521 "exception.m"
    MR_Word mercury__exception__conv0_Result_4;

#line 521 "exception.m"
    {
#line 521 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv0_Result_4);
    }
#line 521 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_Result_4));
#line 521 "exception.m"
  }
#line 521 "exception.m"
}

#line 677 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0_1(
#line 677 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 677 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 677 "exception.m"
{
#line 677 "exception.m"
  {
#line 677 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;

#line 677 "exception.m"
    {
#line 677 "exception.m"
      mercury__exception__very_unsafe_perform_io_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), mercury__exception__wrapper_arg_1);
#line 677 "exception.m"
      return;
    }
#line 677 "exception.m"
  }
#line 677 "exception.m"
}

#line 288 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0(
#line 288 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_26,
#line 288 "exception.m"
  MR_Word mercury__exception__IO_Goal_2,
#line 288 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 288 "exception.m"
{
#line 676 "exception.m"
  {
#line 676 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 676 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_37_59;
#line 676 "exception.m"
    MR_Word mercury__exception__TypeInfo_38_60;
#line 676 "exception.m"
    MR_Word mercury__exception__Goal_9;
#line 676 "exception.m"
    MR_Word mercury__exception__WrappedGoal_29;
#line 676 "exception.m"
    MR_Word mercury__exception__Result0_31;
#line 676 "exception.m"
    MR_Word mercury__exception__V_33_33;
#line 856 "exception.m"
    MR_Box mercury__exception__conv2_Result0_31;
#line 103 "builtin.opt"
    MR_Word mercury__exception__TypeInfo_38_91;
#line 103 "builtin.opt"
    MR_Box mercury__exception__conv3_Y;

#line 677 "exception.m"
    {
#line 677 "exception.m"
      mercury__exception__Goal_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 677 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[3]));
#line 677 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0_1));
#line 677 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 677 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_26));
#line 677 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__Goal_9, 4) = ((MR_Box) (mercury__exception__IO_Goal_2));
#line 677 "exception.m"
    }
#line 521 "exception.m"
    {
#line 521 "exception.m"
      mercury__exception__WrappedGoal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_29, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_29, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0_2));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_29, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_26));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_29, 4) = ((MR_Box) (mercury__exception__Goal_9));
#line 521 "exception.m"
    }
#line 524 "exception.m"
    {
#line 524 "exception.m"
      mercury__exception__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_33_33, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_33_33, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0_3));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_33_33, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_26));
#line 524 "exception.m"
    }
#line 7220 "exception.c"
    mercury__exception__TypeCtorInfo_37_59 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 7222 "exception.c"
    {
#line 7224 "exception.c"
      mercury__exception__TypeInfo_38_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7226 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_38_60, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_37_59));
#line 7228 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_38_60, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_26));
#line 7230 "exception.c"
    }
#line 856 "exception.m"
    {
#line 856 "exception.m"
      mercury__exception__builtin_catch_3_p_0(mercury__exception__TypeInfo_38_60, (MR_Word) mercury__exception__WrappedGoal_29, (MR_Word) mercury__exception__V_33_33, &mercury__exception__conv2_Result0_31);
    }
#line 856 "exception.m"
    mercury__exception__Result0_31 = ((MR_Word) mercury__exception__conv2_Result0_31);
#line 103 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__exception__Result0_31)) ;
		{
#line 103 "builtin.opt"

    Y = X;

#line 7252 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv3_Y  = (MR_Box) Y;
#line 103 "builtin.opt"
    *mercury__exception__Result_3 = ((MR_Word) mercury__exception__conv3_Y);
#line 103 "builtin.opt"
}
#line 676 "exception.m"
  }
#line 288 "exception.m"
}

#line 541 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_51_3_p_3_2(
#line 541 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 541 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 541 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 541 "exception.m"
{
#line 541 "exception.m"
  {
#line 541 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 541 "exception.m"
    MR_Word mercury__exception__conv1_HeadVar__2_2;

#line 541 "exception.m"
    {
#line 541 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv1_HeadVar__2_2);
    }
#line 541 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv1_HeadVar__2_2));
#line 541 "exception.m"
  }
#line 541 "exception.m"
}

#line 538 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_51_3_p_3_1(
#line 538 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 538 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 538 "exception.m"
{
#line 538 "exception.m"
  {
#line 538 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 538 "exception.m"
    MR_Word mercury__exception__conv0_Result_4;

#line 538 "exception.m"
    {
#line 538 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_3(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv0_Result_4);
    }
#line 538 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_Result_4));
#line 538 "exception.m"
  }
#line 538 "exception.m"
}

#line 283 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_51_3_p_3(
#line 283 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_34,
#line 283 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 283 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 283 "exception.m"
{
#line 520 "exception.m"
  {
#line 520 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_49_49;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeInfo_50_50;
#line 520 "exception.m"
    MR_Word mercury__exception__WrappedGoal_29;
#line 520 "exception.m"
    MR_Word mercury__exception__V_32_32;
#line 860 "exception.m"
    MR_Box mercury__exception__conv2_Result_3;

#line 538 "exception.m"
    {
#line 538 "exception.m"
      mercury__exception__WrappedGoal_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 538 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_29, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 538 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_29, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_51_3_p_3_1));
#line 538 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 538 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_29, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 538 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_29, 4) = ((MR_Box) (mercury__exception__Goal_2));
#line 538 "exception.m"
    }
#line 541 "exception.m"
    {
#line 541 "exception.m"
      mercury__exception__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 541 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_32_32, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 541 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_32_32, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_51_3_p_3_2));
#line 541 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 541 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_32_32, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 541 "exception.m"
    }
#line 7380 "exception.c"
    mercury__exception__TypeCtorInfo_49_49 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 7382 "exception.c"
    {
#line 7384 "exception.c"
      mercury__exception__TypeInfo_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7386 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_50_50, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_49_49));
#line 7388 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_50_50, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 7390 "exception.c"
    }
#line 860 "exception.m"
    {
#line 860 "exception.m"
      mercury__exception__builtin_catch_3_p_2(mercury__exception__TypeInfo_50_50, (MR_Word) mercury__exception__WrappedGoal_29, (MR_Word) mercury__exception__V_32_32, &mercury__exception__conv2_Result_3);
    }
#line 860 "exception.m"
    *mercury__exception__Result_3 = ((MR_Word) mercury__exception__conv2_Result_3);
#line 520 "exception.m"
  }
#line 283 "exception.m"
}

#line 536 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_50_3_p_2_2(
#line 536 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 536 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 536 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 536 "exception.m"
{
#line 536 "exception.m"
  {
#line 536 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 536 "exception.m"
    MR_Word mercury__exception__conv1_HeadVar__2_2;

#line 536 "exception.m"
    {
#line 536 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv1_HeadVar__2_2);
    }
#line 536 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv1_HeadVar__2_2));
#line 536 "exception.m"
  }
#line 536 "exception.m"
}

#line 533 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_50_3_p_2_1(
#line 533 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 533 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 533 "exception.m"
{
#line 533 "exception.m"
  {
#line 533 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 533 "exception.m"
    MR_Word mercury__exception__conv0_Result_4;

#line 533 "exception.m"
    {
#line 533 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_2(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv0_Result_4);
    }
#line 533 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_Result_4));
#line 533 "exception.m"
  }
#line 533 "exception.m"
}

#line 281 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_50_3_p_2(
#line 281 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_34,
#line 281 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 281 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 281 "exception.m"
{
#line 520 "exception.m"
  {
#line 520 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_45_45;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeInfo_46_46;
#line 520 "exception.m"
    MR_Word mercury__exception__WrappedGoal_22;
#line 520 "exception.m"
    MR_Word mercury__exception__V_25_25;
#line 860 "exception.m"
    MR_Box mercury__exception__conv2_Result_3;

#line 533 "exception.m"
    {
#line 533 "exception.m"
      mercury__exception__WrappedGoal_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_22, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_22, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_50_3_p_2_1));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_22, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_22, 4) = ((MR_Box) (mercury__exception__Goal_2));
#line 533 "exception.m"
    }
#line 536 "exception.m"
    {
#line 536 "exception.m"
      mercury__exception__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_25_25, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_25_25, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_50_3_p_2_2));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_25_25, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 536 "exception.m"
    }
#line 7518 "exception.c"
    mercury__exception__TypeCtorInfo_45_45 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 7520 "exception.c"
    {
#line 7522 "exception.c"
      mercury__exception__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7524 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_46_46, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_45_45));
#line 7526 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_46_46, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 7528 "exception.c"
    }
#line 860 "exception.m"
    {
#line 860 "exception.m"
      mercury__exception__builtin_catch_3_p_2(mercury__exception__TypeInfo_46_46, (MR_Word) mercury__exception__WrappedGoal_22, (MR_Word) mercury__exception__V_25_25, &mercury__exception__conv2_Result_3);
    }
#line 860 "exception.m"
    *mercury__exception__Result_3 = ((MR_Word) mercury__exception__conv2_Result_3);
#line 520 "exception.m"
  }
#line 281 "exception.m"
}

#line 530 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_49_3_p_1_2(
#line 530 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 530 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 530 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 530 "exception.m"
{
#line 530 "exception.m"
  {
#line 530 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 530 "exception.m"
    MR_Word mercury__exception__conv1_HeadVar__2_2;

#line 530 "exception.m"
    {
#line 530 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv1_HeadVar__2_2);
    }
#line 530 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv1_HeadVar__2_2));
#line 530 "exception.m"
  }
#line 530 "exception.m"
}

#line 527 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_49_3_p_1_1(
#line 527 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 527 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 527 "exception.m"
{
#line 527 "exception.m"
  {
#line 527 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 527 "exception.m"
    MR_Word mercury__exception__conv0_Result_4;

#line 527 "exception.m"
    {
#line 527 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv0_Result_4);
    }
#line 527 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_Result_4));
#line 527 "exception.m"
  }
#line 527 "exception.m"
}

#line 279 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_49_3_p_1(
#line 279 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_34,
#line 279 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 279 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 279 "exception.m"
{
#line 520 "exception.m"
  {
#line 520 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_41_41;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeInfo_42_42;
#line 520 "exception.m"
    MR_Word mercury__exception__WrappedGoal_14;
#line 520 "exception.m"
    MR_Word mercury__exception__Result0_16;
#line 520 "exception.m"
    MR_Word mercury__exception__V_18_18;
#line 856 "exception.m"
    MR_Box mercury__exception__conv2_Result0_16;
#line 103 "builtin.opt"
    MR_Word mercury__exception__TypeInfo_42_69;
#line 103 "builtin.opt"
    MR_Box mercury__exception__conv3_Y;

#line 527 "exception.m"
    {
#line 527 "exception.m"
      mercury__exception__WrappedGoal_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 527 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_14, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 527 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_14, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_49_3_p_1_1));
#line 527 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 527 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_14, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 527 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_14, 4) = ((MR_Box) (mercury__exception__Goal_2));
#line 527 "exception.m"
    }
#line 530 "exception.m"
    {
#line 530 "exception.m"
      mercury__exception__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 530 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_18_18, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 530 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_18_18, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_49_3_p_1_2));
#line 530 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 530 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_18_18, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 530 "exception.m"
    }
#line 7662 "exception.c"
    mercury__exception__TypeCtorInfo_41_41 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 7664 "exception.c"
    {
#line 7666 "exception.c"
      mercury__exception__TypeInfo_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7668 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_42_42, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_41_41));
#line 7670 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_42_42, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 7672 "exception.c"
    }
#line 856 "exception.m"
    {
#line 856 "exception.m"
      mercury__exception__builtin_catch_3_p_0(mercury__exception__TypeInfo_42_42, (MR_Word) mercury__exception__WrappedGoal_14, (MR_Word) mercury__exception__V_18_18, &mercury__exception__conv2_Result0_16);
    }
#line 856 "exception.m"
    mercury__exception__Result0_16 = ((MR_Word) mercury__exception__conv2_Result0_16);
#line 103 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_49_3_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__exception__Result0_16)) ;
		{
#line 103 "builtin.opt"

    Y = X;

#line 7694 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv3_Y  = (MR_Box) Y;
#line 103 "builtin.opt"
    *mercury__exception__Result_3 = ((MR_Word) mercury__exception__conv3_Y);
#line 103 "builtin.opt"
}
#line 520 "exception.m"
  }
#line 279 "exception.m"
}

#line 524 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_48_3_p_0_2(
#line 524 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 524 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 524 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 524 "exception.m"
{
#line 524 "exception.m"
  {
#line 524 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 524 "exception.m"
    MR_Word mercury__exception__conv1_HeadVar__2_2;

#line 524 "exception.m"
    {
#line 524 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv1_HeadVar__2_2);
    }
#line 524 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv1_HeadVar__2_2));
#line 524 "exception.m"
  }
#line 524 "exception.m"
}

#line 521 "exception.m"
static void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_48_3_p_0_1(
#line 521 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 521 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 521 "exception.m"
{
#line 521 "exception.m"
  {
#line 521 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 521 "exception.m"
    MR_Word mercury__exception__conv0_Result_4;

#line 521 "exception.m"
    {
#line 521 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv0_Result_4);
    }
#line 521 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_Result_4));
#line 521 "exception.m"
  }
#line 521 "exception.m"
}

#line 277 "exception.m"
void MR_CALL 
mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_48_3_p_0(
#line 277 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_34,
#line 277 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 277 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 277 "exception.m"
{
#line 520 "exception.m"
  {
#line 520 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_37_37;
#line 520 "exception.m"
    MR_Word mercury__exception__TypeInfo_38_38;
#line 520 "exception.m"
    MR_Word mercury__exception__WrappedGoal_6;
#line 520 "exception.m"
    MR_Word mercury__exception__Result0_8;
#line 520 "exception.m"
    MR_Word mercury__exception__V_10_10;
#line 856 "exception.m"
    MR_Box mercury__exception__conv2_Result0_8;
#line 103 "builtin.opt"
    MR_Word mercury__exception__TypeInfo_38_69;
#line 103 "builtin.opt"
    MR_Box mercury__exception__conv3_Y;

#line 521 "exception.m"
    {
#line 521 "exception.m"
      mercury__exception__WrappedGoal_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_48_3_p_0_1));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_6, 4) = ((MR_Box) (mercury__exception__Goal_2));
#line 521 "exception.m"
    }
#line 524 "exception.m"
    {
#line 524 "exception.m"
      mercury__exception__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_10_10, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_10_10, 1) = ((MR_Box) (mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_48_3_p_0_2));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_10_10, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 524 "exception.m"
    }
#line 7828 "exception.c"
    mercury__exception__TypeCtorInfo_37_37 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 7830 "exception.c"
    {
#line 7832 "exception.c"
      mercury__exception__TypeInfo_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7834 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_38_38, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_37_37));
#line 7836 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_38_38, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_34));
#line 7838 "exception.c"
    }
#line 856 "exception.m"
    {
#line 856 "exception.m"
      mercury__exception__builtin_catch_3_p_0(mercury__exception__TypeInfo_38_38, (MR_Word) mercury__exception__WrappedGoal_6, (MR_Word) mercury__exception__V_10_10, &mercury__exception__conv2_Result0_8);
    }
#line 856 "exception.m"
    mercury__exception__Result0_8 = ((MR_Word) mercury__exception__conv2_Result0_8);
#line 103 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_48_3_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__exception__Result0_8)) ;
		{
#line 103 "builtin.opt"

    Y = X;

#line 7860 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv3_Y  = (MR_Box) Y;
#line 103 "builtin.opt"
    *mercury__exception__Result_3 = ((MR_Word) mercury__exception__conv3_Y);
#line 103 "builtin.opt"
}
#line 520 "exception.m"
  }
#line 277 "exception.m"
}

#line 784 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_stm_cc_multi__784__1_4_p_0(
#line 784 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_21,
#line 784 "exception.m"
  MR_Word mercury__exception__TransactionGoal_6,
#line 784 "exception.m"
  MR_Box mercury__exception__STATE_VARIABLE_STM_0_14,
#line 784 "exception.m"
  MR_Tuple * mercury__exception__HeadVar__4_16)
#line 784 "exception.m"
{
#line 784 "exception.m"
  {
#line 784 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 784 "exception.m"
    MR_Box mercury__exception__S0_12 = mercury__exception__STATE_VARIABLE_STM_0_14;
#line 784 "exception.m"
    MR_Box mercury__exception__R_19;
#line 784 "exception.m"
    MR_Box mercury__exception__S_20;
#line 786 "exception.m"
    void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__TransactionGoal_6, (MR_Integer) 1)));
#line 786 "exception.m"
    MR_Box mercury__exception__conv1_S_20;

#line 786 "exception.m"
    {
#line 786 "exception.m"
      mercury__exception__func_0(((MR_Box) mercury__exception__TransactionGoal_6), &mercury__exception__R_19, ((MR_Box) (mercury__exception__S0_12)), &mercury__exception__conv1_S_20);
    }
#line 786 "exception.m"
    mercury__exception__S_20 = ((MR_Box) mercury__exception__conv1_S_20);
#line 784 "exception.m"
    {
#line 784 "exception.m"
      MR_Tuple base;
#line 784 "exception.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 784 "exception.m"
      *mercury__exception__HeadVar__4_16 = base;
#line 784 "exception.m"
      MR_hl_field(MR_mktag(0), base, 0) = mercury__exception__R_19;
#line 784 "exception.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__exception__S_20));
#line 784 "exception.m"
    }
#line 784 "exception.m"
  }
#line 784 "exception.m"
}

#line 771 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_stm_det__771__1_4_p_0(
#line 771 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_21,
#line 771 "exception.m"
  MR_Word mercury__exception__TransactionGoal_6,
#line 771 "exception.m"
  MR_Box mercury__exception__STATE_VARIABLE_STM_0_14,
#line 771 "exception.m"
  MR_Tuple * mercury__exception__HeadVar__4_16)
#line 771 "exception.m"
{
#line 771 "exception.m"
  {
#line 771 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 771 "exception.m"
    MR_Box mercury__exception__S0_12 = mercury__exception__STATE_VARIABLE_STM_0_14;
#line 771 "exception.m"
    MR_Box mercury__exception__R_19;
#line 771 "exception.m"
    MR_Box mercury__exception__S_20;
#line 773 "exception.m"
    void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__TransactionGoal_6, (MR_Integer) 1)));
#line 773 "exception.m"
    MR_Box mercury__exception__conv1_S_20;

#line 773 "exception.m"
    {
#line 773 "exception.m"
      mercury__exception__func_0(((MR_Box) mercury__exception__TransactionGoal_6), &mercury__exception__R_19, ((MR_Box) (mercury__exception__S0_12)), &mercury__exception__conv1_S_20);
    }
#line 773 "exception.m"
    mercury__exception__S_20 = ((MR_Box) mercury__exception__conv1_S_20);
#line 771 "exception.m"
    {
#line 771 "exception.m"
      MR_Tuple base;
#line 771 "exception.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 771 "exception.m"
      *mercury__exception__HeadVar__4_16 = base;
#line 771 "exception.m"
      MR_hl_field(MR_mktag(0), base, 0) = mercury__exception__R_19;
#line 771 "exception.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__exception__S_20));
#line 771 "exception.m"
    }
#line 771 "exception.m"
  }
#line 771 "exception.m"
}

#line 590 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_1(
#line 590 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 590 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 590 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 590 "exception.m"
{
#line 590 "exception.m"
  {
#line 590 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 590 "exception.m"
    MR_Word mercury__exception__conv0_HeadVar__2_2;

#line 590 "exception.m"
    {
#line 590 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv0_HeadVar__2_2);
    }
#line 590 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv0_HeadVar__2_2));
#line 590 "exception.m"
  }
#line 590 "exception.m"
}

#line 590 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_2(
#line 590 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 590 "exception.m"
{
#line 590 "exception.m"
  {
#line 590 "exception.m"
    struct mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0_s * mercury__exception__env_ptr = (struct mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0_s *) mercury__exception__env_ptr_arg;

#line 590 "exception.m"
    *((mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0__HeadVar__3_46) = ((MR_Word) (mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0__conv1_HeadVar__3_46);
#line 590 "exception.m"
    {
#line 590 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0__cont)((mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0__cont_env_ptr);
#line 590 "exception.m"
      return;
    }
#line 590 "exception.m"
  }
#line 590 "exception.m"
}

#line 589 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0(
#line 589 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_53,
#line 589 "exception.m"
  MR_Word mercury__exception__WrappedGoal_40,
#line 589 "exception.m"
  MR_Word * mercury__exception__HeadVar__3_46,
#line 589 "exception.m"
  MR_Cont mercury__exception__cont,
#line 589 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 589 "exception.m"
{
#line 589 "exception.m"
  {
#line 589 "exception.m"
    struct mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0_s mercury__exception__env;

#line 589 "exception.m"
    (mercury__exception__env).mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0__HeadVar__3_46 = mercury__exception__HeadVar__3_46;
#line 589 "exception.m"
    (mercury__exception__env).mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0__cont = mercury__exception__cont;
#line 589 "exception.m"
    (mercury__exception__env).mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 589 "exception.m"
    {
#line 589 "exception.m"
      MR_bool mercury__exception__succeeded;
#line 589 "exception.m"
      MR_Word mercury__exception__TypeCtorInfo_70_70 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 589 "exception.m"
      MR_Word mercury__exception__TypeInfo_71_71;
#line 589 "exception.m"
      MR_Word mercury__exception__V_47_47;

#line 590 "exception.m"
      {
#line 590 "exception.m"
        mercury__exception__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 590 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_47_47, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 590 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_47_47, 1) = ((MR_Box) (mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_1));
#line 590 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 590 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_47_47, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_53));
#line 590 "exception.m"
      }
#line 8089 "exception.c"
      {
#line 8091 "exception.c"
        mercury__exception__TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8093 "exception.c"
        MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_71_71, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_70_70));
#line 8095 "exception.c"
        MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_71_71, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_53));
#line 8097 "exception.c"
      }
#line 590 "exception.m"
      {
#line 590 "exception.m"
        mercury__exception__catch_impl_3_p_5(mercury__exception__TypeInfo_71_71, (MR_Word) mercury__exception__WrappedGoal_40, (MR_Word) mercury__exception__V_47_47, &(mercury__exception__env).mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_env_0__conv1_HeadVar__3_46, mercury__exception__IntroducedFrom__pred__try_all_det__589__1_3_p_0_2, &mercury__exception__env);
      }
#line 589 "exception.m"
    }
#line 589 "exception.m"
  }
#line 589 "exception.m"
}

#line 580 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_1(
#line 580 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 580 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 580 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 580 "exception.m"
{
#line 580 "exception.m"
  {
#line 580 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 580 "exception.m"
    MR_Word mercury__exception__conv0_HeadVar__2_2;

#line 580 "exception.m"
    {
#line 580 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv0_HeadVar__2_2);
    }
#line 580 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv0_HeadVar__2_2));
#line 580 "exception.m"
  }
#line 580 "exception.m"
}

#line 580 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_2(
#line 580 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 580 "exception.m"
{
#line 580 "exception.m"
  {
#line 580 "exception.m"
    struct mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0_s * mercury__exception__env_ptr = (struct mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0_s *) mercury__exception__env_ptr_arg;

#line 580 "exception.m"
    *((mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0__HeadVar__3_30) = ((MR_Word) (mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0__conv1_HeadVar__3_30);
#line 580 "exception.m"
    {
#line 580 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0__cont)((mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0__cont_env_ptr);
#line 580 "exception.m"
      return;
    }
#line 580 "exception.m"
  }
#line 580 "exception.m"
}

#line 579 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0(
#line 579 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_53,
#line 579 "exception.m"
  MR_Word mercury__exception__WrappedGoal_24,
#line 579 "exception.m"
  MR_Word * mercury__exception__HeadVar__3_30,
#line 579 "exception.m"
  MR_Cont mercury__exception__cont,
#line 579 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 579 "exception.m"
{
#line 579 "exception.m"
  {
#line 579 "exception.m"
    struct mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0_s mercury__exception__env;

#line 579 "exception.m"
    (mercury__exception__env).mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0__HeadVar__3_30 = mercury__exception__HeadVar__3_30;
#line 579 "exception.m"
    (mercury__exception__env).mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0__cont = mercury__exception__cont;
#line 579 "exception.m"
    (mercury__exception__env).mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 579 "exception.m"
    {
#line 579 "exception.m"
      MR_bool mercury__exception__succeeded;
#line 579 "exception.m"
      MR_Word mercury__exception__TypeCtorInfo_56_56;
#line 579 "exception.m"
      MR_Word mercury__exception__TypeInfo_57_57;
#line 579 "exception.m"
      MR_Word mercury__exception__V_31_31;

#line 580 "exception.m"
      {
#line 580 "exception.m"
        mercury__exception__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 580 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_31_31, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 580 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_31_31, 1) = ((MR_Box) (mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_1));
#line 580 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 580 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_31_31, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_53));
#line 580 "exception.m"
      }
#line 8218 "exception.c"
      mercury__exception__TypeCtorInfo_56_56 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 8220 "exception.c"
      {
#line 8222 "exception.c"
        mercury__exception__TypeInfo_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8224 "exception.c"
        MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_57_57, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_56_56));
#line 8226 "exception.c"
        MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_57_57, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_53));
#line 8228 "exception.c"
      }
#line 580 "exception.m"
      {
#line 580 "exception.m"
        mercury__exception__catch_impl_3_p_4(mercury__exception__TypeInfo_57_57, (MR_Word) mercury__exception__WrappedGoal_24, (MR_Word) mercury__exception__V_31_31, &(mercury__exception__env).mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_env_0__conv1_HeadVar__3_30, mercury__exception__IntroducedFrom__pred__try_all_det__579__1_3_p_0_2, &mercury__exception__env);
      }
#line 579 "exception.m"
    }
#line 579 "exception.m"
  }
#line 579 "exception.m"
}

#line 638 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_store_det__638__1_5_p_0(
#line 638 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_36,
#line 638 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_S_37,
#line 638 "exception.m"
  MR_Word mercury__exception__StoreGoal_2,
#line 638 "exception.m"
  MR_Tuple * mercury__exception__HeadVar__5_31)
#line 638 "exception.m"
{
#line 638 "exception.m"
  {
#line 638 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 638 "exception.m"
    MR_Box mercury__exception__R_34;
#line 640 "exception.m"
    void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 640 "exception.m"
    MR_Box mercury__exception__conv1_S_35;

#line 639 "exception.m"
    mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
#line 640 "exception.m"
    mercury__exception__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__StoreGoal_2, (MR_Integer) 1)));
#line 640 "exception.m"
    {
#line 640 "exception.m"
      mercury__exception__func_0(((MR_Box) mercury__exception__StoreGoal_2), &mercury__exception__R_34, ((MR_Box) ((MR_Integer) 0)), &mercury__exception__conv1_S_35);
    }
#line 638 "exception.m"
    {
#line 638 "exception.m"
      MR_Tuple base;
#line 638 "exception.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 638 "exception.m"
      *mercury__exception__HeadVar__5_31 = base;
#line 638 "exception.m"
      MR_hl_field(MR_mktag(0), base, 0) = mercury__exception__R_34;
#line 638 "exception.m"
      MR_hl_field(MR_mktag(0), base, 1) = NULL;
#line 638 "exception.m"
    }
#line 638 "exception.m"
  }
#line 638 "exception.m"
}

#line 631 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__try_store_det__631__1_5_p_0(
#line 631 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_36,
#line 631 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_S_37,
#line 631 "exception.m"
  MR_Word mercury__exception__StoreGoal_2,
#line 631 "exception.m"
  MR_Tuple * mercury__exception__HeadVar__5_16)
#line 631 "exception.m"
{
#line 631 "exception.m"
  {
#line 631 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 631 "exception.m"
    MR_Box mercury__exception__R_19;
#line 633 "exception.m"
    void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 633 "exception.m"
    MR_Box mercury__exception__conv1_S_20;

#line 632 "exception.m"
    mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
#line 633 "exception.m"
    mercury__exception__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__StoreGoal_2, (MR_Integer) 1)));
#line 633 "exception.m"
    {
#line 633 "exception.m"
      mercury__exception__func_0(((MR_Box) mercury__exception__StoreGoal_2), &mercury__exception__R_19, ((MR_Box) ((MR_Integer) 0)), &mercury__exception__conv1_S_20);
    }
#line 631 "exception.m"
    {
#line 631 "exception.m"
      MR_Tuple base;
#line 631 "exception.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 631 "exception.m"
      *mercury__exception__HeadVar__5_16 = base;
#line 631 "exception.m"
      MR_hl_field(MR_mktag(0), base, 0) = mercury__exception__R_19;
#line 631 "exception.m"
      MR_hl_field(MR_mktag(0), base, 1) = NULL;
#line 631 "exception.m"
    }
#line 631 "exception.m"
  }
#line 631 "exception.m"
}

#line 614 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_1(
#line 614 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 614 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 614 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 614 "exception.m"
{
#line 614 "exception.m"
  {
#line 614 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 614 "exception.m"
    MR_Word mercury__exception__conv0_HeadVar__2_2;

#line 614 "exception.m"
    {
#line 614 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv0_HeadVar__2_2);
    }
#line 614 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv0_HeadVar__2_2));
#line 614 "exception.m"
  }
#line 614 "exception.m"
}

#line 866 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_2(
#line 866 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 866 "exception.m"
{
#line 866 "exception.m"
  {
#line 866 "exception.m"
    struct mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0_s * mercury__exception__env_ptr = (struct mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0_s *) mercury__exception__env_ptr_arg;

#line 866 "exception.m"
    *((mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0__HeadVar__3_15) = ((MR_Word) (mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0__conv1_HeadVar__3_15);
#line 866 "exception.m"
    {
#line 866 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0__cont)((mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0__cont_env_ptr);
#line 866 "exception.m"
      return;
    }
#line 866 "exception.m"
  }
#line 866 "exception.m"
}

#line 613 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0(
#line 613 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_20,
#line 613 "exception.m"
  MR_Word mercury__exception__WrappedGoal_8,
#line 613 "exception.m"
  MR_Word * mercury__exception__HeadVar__3_15,
#line 613 "exception.m"
  MR_Cont mercury__exception__cont,
#line 613 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 613 "exception.m"
{
#line 613 "exception.m"
  {
#line 613 "exception.m"
    struct mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0_s mercury__exception__env;

#line 613 "exception.m"
    (mercury__exception__env).mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0__HeadVar__3_15 = mercury__exception__HeadVar__3_15;
#line 613 "exception.m"
    (mercury__exception__env).mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0__cont = mercury__exception__cont;
#line 613 "exception.m"
    (mercury__exception__env).mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 613 "exception.m"
    {
#line 613 "exception.m"
      MR_bool mercury__exception__succeeded;
#line 613 "exception.m"
      MR_Word mercury__exception__TypeCtorInfo_24_24 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 613 "exception.m"
      MR_Word mercury__exception__TypeInfo_25_25;
#line 613 "exception.m"
      MR_Word mercury__exception__V_16_16;

#line 614 "exception.m"
      {
#line 614 "exception.m"
        mercury__exception__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 614 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_16_16, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 614 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_16_16, 1) = ((MR_Box) (mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_1));
#line 614 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 614 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_16_16, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_20));
#line 614 "exception.m"
      }
#line 8453 "exception.c"
      {
#line 8455 "exception.c"
        mercury__exception__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8457 "exception.c"
        MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_25_25, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_24_24));
#line 8459 "exception.c"
        MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_25_25, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_20));
#line 8461 "exception.c"
      }
#line 866 "exception.m"
      {
#line 866 "exception.m"
        mercury__exception__builtin_catch_3_p_5(mercury__exception__TypeInfo_25_25, (MR_Word) mercury__exception__WrappedGoal_8, (MR_Word) mercury__exception__V_16_16, &(mercury__exception__env).mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_env_0__conv1_HeadVar__3_15, mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0_2, &mercury__exception__env);
      }
#line 613 "exception.m"
    }
#line 613 "exception.m"
  }
#line 613 "exception.m"
}

#line 614 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_1(
#line 614 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 614 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 614 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 614 "exception.m"
{
#line 614 "exception.m"
  {
#line 614 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 614 "exception.m"
    MR_Word mercury__exception__conv0_HeadVar__2_2;

#line 614 "exception.m"
    {
#line 614 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv0_HeadVar__2_2);
    }
#line 614 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv0_HeadVar__2_2));
#line 614 "exception.m"
  }
#line 614 "exception.m"
}

#line 866 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_2(
#line 866 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 866 "exception.m"
{
#line 866 "exception.m"
  {
#line 866 "exception.m"
    struct mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0_s * mercury__exception__env_ptr = (struct mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0_s *) mercury__exception__env_ptr_arg;

#line 866 "exception.m"
    *((mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0__HeadVar__3_15) = ((MR_Word) (mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0__conv1_HeadVar__3_15);
#line 866 "exception.m"
    {
#line 866 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0__cont)((mercury__exception__env_ptr)->mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0__cont_env_ptr);
#line 866 "exception.m"
      return;
    }
#line 866 "exception.m"
  }
#line 866 "exception.m"
}

#line 613 "exception.m"
static void MR_CALL 
mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0(
#line 613 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_20,
#line 613 "exception.m"
  MR_Word mercury__exception__WrappedGoal_8,
#line 613 "exception.m"
  MR_Word * mercury__exception__HeadVar__3_15,
#line 613 "exception.m"
  MR_Cont mercury__exception__cont,
#line 613 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 613 "exception.m"
{
#line 613 "exception.m"
  {
#line 613 "exception.m"
    struct mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0_s mercury__exception__env;

#line 613 "exception.m"
    (mercury__exception__env).mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0__HeadVar__3_15 = mercury__exception__HeadVar__3_15;
#line 613 "exception.m"
    (mercury__exception__env).mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0__cont = mercury__exception__cont;
#line 613 "exception.m"
    (mercury__exception__env).mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 613 "exception.m"
    {
#line 613 "exception.m"
      MR_bool mercury__exception__succeeded;
#line 613 "exception.m"
      MR_Word mercury__exception__TypeCtorInfo_24_24 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 613 "exception.m"
      MR_Word mercury__exception__TypeInfo_25_25;
#line 613 "exception.m"
      MR_Word mercury__exception__V_16_16;

#line 614 "exception.m"
      {
#line 614 "exception.m"
        mercury__exception__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 614 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_16_16, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 614 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_16_16, 1) = ((MR_Box) (mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_1));
#line 614 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 614 "exception.m"
        MR_hl_field(MR_mktag(0), mercury__exception__V_16_16, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_20));
#line 614 "exception.m"
      }
#line 8582 "exception.c"
      {
#line 8584 "exception.c"
        mercury__exception__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8586 "exception.c"
        MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_25_25, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_24_24));
#line 8588 "exception.c"
        MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_25_25, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_20));
#line 8590 "exception.c"
      }
#line 866 "exception.m"
      {
#line 866 "exception.m"
        mercury__exception__builtin_catch_3_p_5(mercury__exception__TypeInfo_25_25, (MR_Word) mercury__exception__WrappedGoal_8, (MR_Word) mercury__exception__V_16_16, &(mercury__exception__env).mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_env_0__conv1_HeadVar__3_15, mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0_2, &mercury__exception__env);
      }
#line 613 "exception.m"
    }
#line 613 "exception.m"
  }
#line 613 "exception.m"
}

#line 37 "exception.m"
void MR_CALL 
mercury__exception____Compare____software_error_0_0(
#line 37 "exception.m"
  MR_Word * mercury__exception__HeadVar__1_1,
#line 37 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2,
#line 37 "exception.m"
  MR_Word mercury__exception__HeadVar__3_3)
#line 37 "exception.m"
{
#line 37 "exception.m"
  {
#line 37 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 37 "exception.m"
    MR_Integer mercury__exception__CastX_6 = (MR_Integer) mercury__exception__HeadVar__2_2;
#line 37 "exception.m"
    MR_Integer mercury__exception__CastY_7 = (MR_Integer) mercury__exception__HeadVar__3_3;

#line 37 "exception.m"
    mercury__exception__succeeded = (mercury__exception__CastX_6 == mercury__exception__CastY_7);
#line 37 "exception.m"
    if (mercury__exception__succeeded)
#line 8628 "exception.c"
      *mercury__exception__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "exception.m"
    else
#line 37 "exception.m"
      {
#line 37 "exception.m"
        MR_String mercury__exception__V_4_4 = (MR_String) mercury__exception__HeadVar__2_2;
#line 37 "exception.m"
        MR_String mercury__exception__V_5_5 = (MR_String) mercury__exception__HeadVar__3_3;
#line 37 "exception.m"
        MR_Integer mercury__exception__Res_7_12;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__exception____Compare____software_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__exception__V_4_4 ;
	S2 =  mercury__exception__V_5_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 8656 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__Res_7_12  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__exception__succeeded = (mercury__exception__Res_7_12 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__exception__succeeded)
#line 104 "private_builtin.opt"
          *mercury__exception__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__exception__succeeded = (mercury__exception__Res_7_12 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__exception__succeeded)
#line 109 "private_builtin.opt"
              *mercury__exception__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              *mercury__exception__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 37 "exception.m"
      }
#line 37 "exception.m"
  }
#line 37 "exception.m"
}

#line 37 "exception.m"
MR_bool MR_CALL 
mercury__exception____Unify____software_error_0_0(
#line 37 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 37 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2)
#line 37 "exception.m"
{
#line 37 "exception.m"
  {
#line 37 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 37 "exception.m"
    MR_Integer mercury__exception__CastX_5 = (MR_Integer) mercury__exception__HeadVar__1_1;
#line 37 "exception.m"
    MR_Integer mercury__exception__CastY_6 = (MR_Integer) mercury__exception__HeadVar__2_2;

#line 37 "exception.m"
    mercury__exception__succeeded = (mercury__exception__CastX_5 == mercury__exception__CastY_6);
#line 37 "exception.m"
    if (mercury__exception__succeeded)
#line 37 "exception.m"
      mercury__exception__succeeded = MR_TRUE;
#line 37 "exception.m"
    else
#line 37 "exception.m"
      {
#line 37 "exception.m"
        MR_String mercury__exception__V_3_3 = (MR_String) mercury__exception__HeadVar__1_1;
#line 37 "exception.m"
        MR_String mercury__exception__V_4_4 = (MR_String) mercury__exception__HeadVar__2_2;

#line 8725 "exception.c"
        mercury__exception__succeeded = (strcmp(mercury__exception__V_3_3, mercury__exception__V_4_4) == 0);
#line 37 "exception.m"
      }
#line 37 "exception.m"
    return mercury__exception__succeeded;
#line 37 "exception.m"
  }
#line 37 "exception.m"
}

#line 204 "exception.m"
void MR_CALL 
mercury__exception____Compare____near_stack_limits_0_0(
#line 204 "exception.m"
  MR_Word * mercury__exception__HeadVar__1_1)
#line 204 "exception.m"
{
#line 204 "exception.m"
  {
#line 204 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 204 "exception.m"
    {
#line 204 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_101_120_99_101_112_116_105_111_110_95_95_110_101_97_114_95_115_116_97_99_107_95_108_105_109_105_116_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mercury__exception__HeadVar__1_1);
#line 204 "exception.m"
      return;
    }
#line 204 "exception.m"
  }
#line 204 "exception.m"
}

#line 204 "exception.m"
MR_bool MR_CALL 
mercury__exception____Unify____near_stack_limits_0_0(void)
#line 204 "exception.m"
{
#line 204 "exception.m"
  {
#line 204 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 204 "exception.m"
    {
#line 204 "exception.m"
      return mercury__exception__succeeded = mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_101_120_99_101_112_116_105_111_110_95_95_110_101_97_114_95_115_116_97_99_107_95_108_105_109_105_116_115_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 204 "exception.m"
    return mercury__exception__succeeded;
#line 204 "exception.m"
  }
#line 204 "exception.m"
}

#line 823 "exception.m"
void MR_CALL 
mercury__exception____Compare____handler_1_0(
#line 823 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_6,
#line 823 "exception.m"
  MR_Word * mercury__exception__HeadVar__1_1,
#line 823 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2,
#line 823 "exception.m"
  MR_Word mercury__exception__HeadVar__3_3)
#line 823 "exception.m"
{
#line 823 "exception.m"
  {
#line 823 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 823 "exception.m"
    MR_Word mercury__exception__Cast_HeadVar1_4 = mercury__exception__HeadVar__2_2;
#line 823 "exception.m"
    MR_Word mercury__exception__Cast_HeadVar2_5 = mercury__exception__HeadVar__3_3;

#line 823 "exception.m"
    {
#line 823 "exception.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__exception__HeadVar__1_1, (MR_Word) mercury__exception__Cast_HeadVar1_4, (MR_Word) mercury__exception__Cast_HeadVar2_5);
#line 823 "exception.m"
      return;
    }
#line 823 "exception.m"
  }
#line 823 "exception.m"
}

#line 823 "exception.m"
MR_bool MR_CALL 
mercury__exception____Unify____handler_1_0(
#line 823 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 823 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 823 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2)
#line 823 "exception.m"
{
#line 823 "exception.m"
  {
#line 823 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 823 "exception.m"
    MR_Word mercury__exception__Cast_HeadVar1_3 = mercury__exception__HeadVar__1_1;
#line 823 "exception.m"
    MR_Word mercury__exception__Cast_HeadVar2_4 = mercury__exception__HeadVar__2_2;

#line 823 "exception.m"
    {
#line 823 "exception.m"
      return mercury__exception__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__exception__Cast_HeadVar1_3, (MR_Word) mercury__exception__Cast_HeadVar2_4);
    }
#line 823 "exception.m"
    return mercury__exception__succeeded;
#line 823 "exception.m"
  }
#line 823 "exception.m"
}

#line 310 "exception.m"
void MR_CALL 
mercury__exception____Compare____exp_determinism_0_0(
#line 310 "exception.m"
  MR_Word * mercury__exception__HeadVar__1_1,
#line 310 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2,
#line 310 "exception.m"
  MR_Word mercury__exception__HeadVar__3_3)
#line 310 "exception.m"
{
#line 310 "exception.m"
  {
#line 310 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 310 "exception.m"
    MR_Integer mercury__exception__Cast_HeadVar1_4 = (MR_Integer) mercury__exception__HeadVar__2_2;
#line 310 "exception.m"
    MR_Integer mercury__exception__Cast_HeadVar2_5 = (MR_Integer) mercury__exception__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__exception__succeeded = (mercury__exception__Cast_HeadVar1_4 < mercury__exception__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__exception__succeeded)
#line 68 "private_builtin.opt"
      *mercury__exception__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__exception__succeeded = (mercury__exception__Cast_HeadVar1_4 == mercury__exception__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__exception__succeeded)
#line 73 "private_builtin.opt"
          *mercury__exception__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__exception__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 310 "exception.m"
  }
#line 310 "exception.m"
}

#line 310 "exception.m"
MR_bool MR_CALL 
mercury__exception____Unify____exp_determinism_0_0(
#line 310 "exception.m"
  MR_Word mercury__exception__HeadVar__2_1,
#line 310 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2)
#line 310 "exception.m"
{
#line 8904 "exception.c"
  {
#line 8906 "exception.c"
    MR_bool mercury__exception__succeeded = (mercury__exception__HeadVar__2_1 == mercury__exception__HeadVar__2_2);

#line 8909 "exception.c"
    return mercury__exception__succeeded;
#line 8911 "exception.c"
  }
#line 310 "exception.m"
}

#line 48 "exception.m"
void MR_CALL 
mercury__exception____Compare____exception_result_1_0(
#line 48 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_18,
#line 48 "exception.m"
  MR_Word * mercury__exception__HeadVar__1_1,
#line 48 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2,
#line 48 "exception.m"
  MR_Word mercury__exception__HeadVar__3_3)
#line 48 "exception.m"
{
#line 48 "exception.m"
  {
#line 48 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 48 "exception.m"
    MR_Integer mercury__exception__CastX_16 = (MR_Integer) mercury__exception__HeadVar__2_2;
#line 48 "exception.m"
    MR_Integer mercury__exception__CastY_17 = (MR_Integer) mercury__exception__HeadVar__3_3;

#line 48 "exception.m"
    mercury__exception__succeeded = (mercury__exception__CastX_16 == mercury__exception__CastY_17);
#line 48 "exception.m"
    if (mercury__exception__succeeded)
#line 8942 "exception.c"
      *mercury__exception__HeadVar__1_1 = (MR_Integer) 0;
#line 48 "exception.m"
    else
#line 48 "exception.m"
      if ((mercury__exception__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 48 "exception.m"
        if ((mercury__exception__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 48 "exception.m"
          *mercury__exception__HeadVar__1_1 = (MR_Integer) 0;
#line 48 "exception.m"
        else
#line 48 "exception.m"
          if (((MR_tag((MR_Word) mercury__exception__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8956 "exception.c"
            *mercury__exception__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "exception.m"
          else
#line 8960 "exception.c"
            *mercury__exception__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "exception.m"
      else
#line 48 "exception.m"
        if (((MR_tag((MR_Word) mercury__exception__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 48 "exception.m"
          {
#line 48 "exception.m"
            MR_Word mercury__exception__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__exception__HeadVar__2_2, (MR_Integer) 0)));

#line 48 "exception.m"
            if ((mercury__exception__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8973 "exception.c"
              *mercury__exception__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "exception.m"
            else
#line 48 "exception.m"
              if (((MR_tag((MR_Word) mercury__exception__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 48 "exception.m"
                {
#line 48 "exception.m"
                  MR_Word mercury__exception__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__exception__HeadVar__3_3, (MR_Integer) 0)));

#line 48 "exception.m"
                  {
#line 48 "exception.m"
                    mercury__univ____Compare____univ_0_0(mercury__exception__HeadVar__1_1, mercury__exception__V_20_20, mercury__exception__V_15_15);
#line 48 "exception.m"
                    return;
                  }
#line 48 "exception.m"
                }
#line 48 "exception.m"
              else
#line 8995 "exception.c"
                *mercury__exception__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "exception.m"
          }
#line 48 "exception.m"
        else
#line 48 "exception.m"
          {
#line 48 "exception.m"
            MR_Box mercury__exception__V_21_21 = (MR_hl_field(MR_mktag(1), mercury__exception__HeadVar__2_2, (MR_Integer) 0));

#line 48 "exception.m"
            if ((mercury__exception__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9008 "exception.c"
              *mercury__exception__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "exception.m"
            else
#line 48 "exception.m"
              if (((MR_tag((MR_Word) mercury__exception__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 9014 "exception.c"
                *mercury__exception__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "exception.m"
              else
#line 48 "exception.m"
                {
#line 48 "exception.m"
                  MR_Box mercury__exception__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__exception__HeadVar__3_3, (MR_Integer) 0));

#line 48 "exception.m"
                  {
#line 48 "exception.m"
                    mercury__builtin__compare_3_p_0(mercury__exception__TypeInfo_for_T_18, mercury__exception__HeadVar__1_1, mercury__exception__V_21_21, mercury__exception__V_5_5);
#line 48 "exception.m"
                    return;
                  }
#line 48 "exception.m"
                }
#line 48 "exception.m"
          }
#line 48 "exception.m"
  }
#line 48 "exception.m"
}

#line 48 "exception.m"
MR_bool MR_CALL 
mercury__exception____Unify____exception_result_1_0(
#line 48 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_11,
#line 48 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 48 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2)
#line 48 "exception.m"
{
#line 48 "exception.m"
  {
#line 48 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 48 "exception.m"
    MR_Integer mercury__exception__CastX_9 = (MR_Integer) mercury__exception__HeadVar__1_1;
#line 48 "exception.m"
    MR_Integer mercury__exception__CastY_10 = (MR_Integer) mercury__exception__HeadVar__2_2;

#line 48 "exception.m"
    mercury__exception__succeeded = (mercury__exception__CastX_9 == mercury__exception__CastY_10);
#line 48 "exception.m"
    if (mercury__exception__succeeded)
#line 48 "exception.m"
      mercury__exception__succeeded = MR_TRUE;
#line 48 "exception.m"
    else
#line 48 "exception.m"
      if ((mercury__exception__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 48 "exception.m"
        {
#line 48 "exception.m"
          MR_Integer mercury__exception__CastX_5 = (MR_Integer) mercury__exception__HeadVar__1_1;
#line 48 "exception.m"
          MR_Integer mercury__exception__CastY_6 = (MR_Integer) mercury__exception__HeadVar__2_2;

#line 48 "exception.m"
          mercury__exception__succeeded = (mercury__exception__CastY_6 == mercury__exception__CastX_5);
#line 48 "exception.m"
        }
#line 48 "exception.m"
      else
#line 48 "exception.m"
        if (((MR_tag((MR_Word) mercury__exception__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 48 "exception.m"
          {
#line 48 "exception.m"
            MR_Word mercury__exception__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__exception__HeadVar__1_1, (MR_Integer) 0)));
#line 48 "exception.m"
            MR_Word mercury__exception__V_8_8;

#line 48 "exception.m"
            mercury__exception__succeeded = ((MR_tag((MR_Word) mercury__exception__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 48 "exception.m"
            if (mercury__exception__succeeded)
#line 48 "exception.m"
              {
#line 48 "exception.m"
                mercury__exception__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__exception__HeadVar__2_2, (MR_Integer) 0)));
#line 9099 "exception.c"
                {
#line 9101 "exception.c"
                  return mercury__exception__succeeded = mercury__univ____Unify____univ_0_0(mercury__exception__V_7_7, mercury__exception__V_8_8);
                }
#line 48 "exception.m"
              }
#line 48 "exception.m"
          }
#line 48 "exception.m"
        else
#line 48 "exception.m"
          {
#line 48 "exception.m"
            MR_Box mercury__exception__V_3_3 = (MR_hl_field(MR_mktag(1), mercury__exception__HeadVar__1_1, (MR_Integer) 0));
#line 48 "exception.m"
            MR_Box mercury__exception__V_4_4;

#line 48 "exception.m"
            mercury__exception__succeeded = ((MR_tag((MR_Word) mercury__exception__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 48 "exception.m"
            if (mercury__exception__succeeded)
#line 48 "exception.m"
              {
#line 48 "exception.m"
                mercury__exception__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__exception__HeadVar__2_2, (MR_Integer) 0));
#line 9125 "exception.c"
                {
#line 9127 "exception.c"
                  return mercury__exception__succeeded = mercury__builtin__unify_2_p_0(mercury__exception__TypeInfo_for_T_11, mercury__exception__V_3_3, mercury__exception__V_4_4);
                }
#line 48 "exception.m"
              }
#line 48 "exception.m"
          }
#line 48 "exception.m"
    return mercury__exception__succeeded;
#line 48 "exception.m"
  }
#line 48 "exception.m"
}

#line 2890 "exception.m"
static MR_bool MR_CALL 
mercury__exception__now_near_stack_limits_0_p_0(void)
#line 2890 "exception.m"
{
#line 2893 "exception.m"
  {
#line 2893 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 2896 "exception.m"
{
#define MR_PROC_LABEL mercury__exception__now_near_stack_limits_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 2896 "exception.m"

#ifdef  MR_HIGHLEVEL_CODE
    /*
    ** In high level code grades, I don't know of any portable way
    ** to check whether we are near the limits of the C stack.
    */
    SUCCESS_INDICATOR = MR_FALSE;
#else
    int slack = 1024;

    if (((MR_maxfr + slack) <
        MR_CONTEXT(MR_ctxt_nondetstack_zone)->MR_zone_top)
    && ((MR_sp + slack) <
        MR_CONTEXT(MR_ctxt_detstack_zone)->MR_zone_top))
    {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        SUCCESS_INDICATOR = MR_TRUE;
    }
#endif

#line 9180 "exception.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2896 "exception.m"
	}
mercury__exception__succeeded  = SUCCESS_INDICATOR;
}
#line 2893 "exception.m"
    return mercury__exception__succeeded;
#line 2893 "exception.m"
  }
#line 2890 "exception.m"
}

#line 2861 "exception.m"
static void MR_CALL 
mercury__exception__set_get_message_hook_2_p_0(void)
#line 2861 "exception.m"
{
#line 2863 "exception.m"
  {
#line 2863 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 2863 "exception.m"
  }
#line 2861 "exception.m"
}

#line 2836 "exception.m"
static void MR_CALL 
mercury__exception__report_uncaught_exception_2_4_p_0(
#line 2836 "exception.m"
  MR_Word mercury__exception__Exception_5)
#line 2836 "exception.m"
{
#line 2839 "exception.m"
  {
#line 2839 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 2839 "exception.m"
    MR_Word mercury__exception__StdErr_7;
#line 2839 "exception.m"
    MR_String mercury__exception__V_14_14;
#line 2839 "exception.m"
    MR_Box mercury__exception__Stream_5_24;
#line 2839 "exception.m"
    MR_Box mercury__exception__Stream_5_68;
#line 2839 "exception.m"
    MR_Box mercury__exception__Stream_5_76;
#line 2839 "exception.m"
    MR_Box mercury__exception__Stream_4_79;
#line 2855 "exception.m"
    MR_String mercury__exception__MessagePrime_27;
#line 2853 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_9_31;
#line 2853 "exception.m"
    MR_Word mercury__exception__V_28_28;
#line 6 "univ.opt"
    MR_Box mercury__exception__conv0_V_28_28;

#line 2839 "exception.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 598 "io.opt"
{
#define MR_PROC_LABEL mercury__exception__report_uncaught_exception_2_4_p_0


		{
#line 598 "io.opt"

    MercuryFilePtr out = mercury_current_text_output();
    if (MR_FLUSH(*out) < 0) {
        mercury_output_error(out);
    }

#line 9258 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 598 "io.opt"
}
#line 1317 "io.opt"
{
#define MR_PROC_LABEL mercury__exception__report_uncaught_exception_2_4_p_0

	MercuryFilePtr Stream;

		{
#line 1317 "io.opt"

    Stream = &mercury_stderr;

#line 9275 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__Stream_5_24  = (MR_Box) Stream;
#line 1317 "io.opt"
}
#line 654 "io.opt"
    mercury__exception__StdErr_7 = (MR_Word) mercury__exception__Stream_5_24;
#line 1250 "io.opt"
{
#define MR_PROC_LABEL mercury__exception__report_uncaught_exception_2_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;

	Stream = (MercuryFilePtr) mercury__exception__Stream_5_24 ;
	Message =  (MR_String) "Uncaught Mercury exception:\n" ;
		{
#line 1250 "io.opt"

    mercury_print_string(Stream, Message);

#line 9298 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 1250 "io.opt"
}
#line 9304 "exception.c"
    mercury__exception__TypeCtorInfo_9_31 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 6 "univ.opt"
    {
#line 6 "univ.opt"
      mercury__exception__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__exception__TypeCtorInfo_9_31, &mercury__exception__conv0_V_28_28, mercury__exception__Exception_5);
    }
#line 6 "univ.opt"
    if (mercury__exception__succeeded)
#line 6 "univ.opt"
      {
#line 6 "univ.opt"
        mercury__exception__V_28_28 = ((MR_Word) mercury__exception__conv0_V_28_28);
#line 6 "univ.opt"
        mercury__exception__succeeded = MR_TRUE;
#line 6 "univ.opt"
      }
#line 2853 "exception.m"
    if (mercury__exception__succeeded)
#line 2853 "exception.m"
      {
#line 2853 "exception.m"
        mercury__exception__MessagePrime_27 = (MR_String) mercury__exception__V_28_28;
#line 2853 "exception.m"
        mercury__exception__succeeded = MR_TRUE;
#line 2853 "exception.m"
      }
#line 2855 "exception.m"
    if (mercury__exception__succeeded)
#line 2854 "exception.m"
      {
#line 247 "string.opt"
        {
#line 247 "string.opt"
          mercury__string__append_3_p_2((MR_String) "Software Error: ", mercury__exception__MessagePrime_27, &mercury__exception__V_14_14);
        }
#line 2854 "exception.m"
      }
#line 2855 "exception.m"
    else
#line 2856 "exception.m"
      {
#line 2856 "exception.m"
        MR_Word mercury__exception__TypeInfo_10_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__Exception_5, (MR_Integer) 0)));
#line 2856 "exception.m"
        MR_Word mercury__exception__TypeCtorInfo_13_53;
#line 2856 "exception.m"
        MR_Word mercury__exception__TypeClassInfo_for_op_table_62;
#line 2856 "exception.m"
        MR_Box mercury__exception__V_30_30 = (MR_hl_field(MR_mktag(0), mercury__exception__Exception_5, (MR_Integer) 1));
#line 2856 "exception.m"
        MR_Word mercury__exception__V_10_50;
#line 2856 "exception.m"
        MR_Word mercury__exception__RevStrings_9_51;
#line 2856 "exception.m"
        MR_Word mercury__exception__V_11_52;
#line 2856 "exception.m"
        MR_Integer mercury__exception__Priority_10_59;
#line 2856 "exception.m"
        MR_Integer mercury__exception__V_13_60;
#line 9364 "exception.c"
        MR_Box MR_CALL (* mercury__exception__func_1)(MR_Box, MR_Box);
#line 9366 "exception.c"
        MR_Box mercury__exception__conv2_V_13_60;

#line 32 "ops.opt"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 268 "string.opt"
        mercury__exception__V_10_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9373 "exception.c"
        mercury__exception__TypeClassInfo_for_op_table_62 = (MR_Word) &mercury__exception_scalar_common_1[0];
#line 9375 "exception.c"
        mercury__exception__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__exception__TypeClassInfo_for_op_table_62, (MR_Integer) 0)), (MR_Integer) 12)));
#line 9377 "exception.c"
        {
#line 9379 "exception.c"
          mercury__exception__conv2_V_13_60 = mercury__exception__func_1(((MR_Box) mercury__exception__TypeClassInfo_for_op_table_62), ((MR_Box) ((MR_Integer) 0)));
        }
#line 9382 "exception.c"
        mercury__exception__V_13_60 = ((MR_Integer) mercury__exception__conv2_V_13_60);
#line 1178 "string.opt"
        mercury__exception__Priority_10_59 = (mercury__exception__V_13_60 + (MR_Integer) 1);
#line 1181 "string.opt"
        {
#line 1181 "string.opt"
          mercury__string__value_to_revstrings_prio_6_p_1(mercury__exception__TypeInfo_10_32, (MR_Integer) 1, mercury__exception__Priority_10_59, mercury__exception__V_30_30, mercury__exception__V_10_50, &mercury__exception__RevStrings_9_51);
        }
#line 9391 "exception.c"
        mercury__exception__TypeCtorInfo_13_53 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
        {
#line 118 "list.opt"
          mercury__list__reverse_2_p_0(mercury__exception__TypeCtorInfo_13_53, mercury__exception__RevStrings_9_51, &mercury__exception__V_11_52);
        }
#line 270 "string.opt"
        {
#line 270 "string.opt"
          mercury__exception__V_14_14 = mercury__string__append_list_1_f_0(mercury__exception__V_11_52);
        }
#line 2856 "exception.m"
      }
#line 524 "io.opt"
    mercury__exception__Stream_5_68 = (MR_Box) mercury__exception__StdErr_7;
#line 1250 "io.opt"
{
#define MR_PROC_LABEL mercury__exception__report_uncaught_exception_2_4_p_0

	MercuryFilePtr Stream;
	MR_String Message;

	Stream = (MercuryFilePtr) mercury__exception__Stream_5_68 ;
	Message =  mercury__exception__V_14_14 ;
		{
#line 1250 "io.opt"

    mercury_print_string(Stream, Message);

#line 9421 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 1250 "io.opt"
}
#line 551 "io.opt"
    mercury__exception__Stream_5_76 = (MR_Box) mercury__exception__StdErr_7;
#line 1253 "io.opt"
{
#define MR_PROC_LABEL mercury__exception__report_uncaught_exception_2_4_p_0

	MercuryFilePtr Stream;
	MR_Char Character;

	Stream = (MercuryFilePtr) mercury__exception__Stream_5_76 ;
	Character =  (MR_Char) 10 ;
		{
#line 1253 "io.opt"

    if (Character <= 0x7f) {
        if (MR_PUTCH(*Stream, Character) < 0) {
            mercury_output_error(Stream);
        }
        if (Character == '\n') {
            MR_line_number(*Stream)++;
        }
    } else {
        char    buf[5];
        size_t  len;
        int     i;
        len = MR_utf8_encode(buf, Character);
        for (i = 0; i < len; i++) {
            if (MR_PUTCH(*Stream, buf[i]) < 0) {
                mercury_output_error(Stream);
                break;
            }
        }
    }

#line 9461 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 1253 "io.opt"
}
#line 604 "io.opt"
    mercury__exception__Stream_4_79 = (MR_Box) mercury__exception__StdErr_7;
#line 1292 "io.opt"
{
#define MR_PROC_LABEL mercury__exception__report_uncaught_exception_2_4_p_0

	MercuryFilePtr Stream;

	Stream = (MercuryFilePtr) mercury__exception__Stream_4_79 ;
		{
#line 1292 "io.opt"

    if (MR_FLUSH(*Stream) < 0) {
        mercury_output_error(Stream);
    }

#line 9483 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 1292 "io.opt"
}
#line 2839 "exception.m"
  }
#line 2836 "exception.m"
}

#line 2827 "exception.m"
static void MR_CALL 
mercury__exception__report_uncaught_exception_3_p_0_1(
#line 2827 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 2827 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 2827 "exception.m"
  MR_Box mercury__exception__wrapper_arg_2,
#line 2827 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_3)
#line 2827 "exception.m"
{
#line 2827 "exception.m"
  {
#line 2827 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;

#line 2827 "exception.m"
    {
#line 2827 "exception.m"
      mercury__exception__report_uncaught_exception_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))));
#line 2827 "exception.m"
      return;
    }
#line 2827 "exception.m"
  }
#line 2827 "exception.m"
}

#line 2824 "exception.m"
static void MR_CALL 
mercury__exception__report_uncaught_exception_3_p_0(
#line 2824 "exception.m"
  MR_Word mercury__exception__Exception_4)
#line 2824 "exception.m"
{
#line 2826 "exception.m"
  {
#line 2826 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 2826 "exception.m"
    MR_Word mercury__exception__V_11_11;
#line 669 "exception.m"
    MR_Word mercury__exception__Detism_22;
#line 670 "exception.m"
    MR_Word mercury__exception__Result_6;

#line 2827 "exception.m"
    {
#line 2827 "exception.m"
      mercury__exception__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2827 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_11_11, 0) = ((MR_Box) (&mercury__exception_scalar_common_8[0]));
#line 2827 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_11_11, 1) = ((MR_Box) (mercury__exception__report_uncaught_exception_3_p_0_1));
#line 2827 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2827 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_11_11, 3) = ((MR_Box) (mercury__exception__Exception_4));
#line 2827 "exception.m"
    }
#line 669 "exception.m"
    {
#line 669 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_104_111_49_57_95_95_91_49_44_32_50_93_95_48_2_p_0(&mercury__exception__Detism_22);
    }
#line 670 "exception.m"
    {
#line 670 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_104_111_50_48_95_95_91_49_44_32_50_93_95_48_5_p_0(mercury__exception__V_11_11, &mercury__exception__Result_6);
    }
#line 2826 "exception.m"
  }
#line 2824 "exception.m"
}

#line 1625 "exception.m"
static void MR_CALL 
mercury__exception__call_handler_3_p_0(
#line 1625 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_7,
#line 1625 "exception.m"
  MR_Word mercury__exception__Handler_4,
#line 1625 "exception.m"
  MR_Word mercury__exception__Exception_5,
#line 1625 "exception.m"
  MR_Box * mercury__exception__Result_6)
#line 1625 "exception.m"
{
#line 1629 "exception.m"
  {
#line 1629 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 1629 "exception.m"
    {
#line 1629 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_104_97_110_100_108_101_114_95_95_91_49_93_95_48_3_p_0(mercury__exception__Handler_4, mercury__exception__Exception_5, mercury__exception__Result_6);
#line 1629 "exception.m"
      return;
    }
#line 1629 "exception.m"
  }
#line 1625 "exception.m"
}

#line 1619 "exception.m"
static MR_bool MR_CALL 
mercury__exception__call_goal_2_p_1(
#line 1619 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 1619 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 1619 "exception.m"
  MR_Box * mercury__exception__Result_4)
#line 1619 "exception.m"
{
#line 1622 "exception.m"
  {
#line 1622 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 1622 "exception.m"
    {
#line 1622 "exception.m"
      return mercury__exception__succeeded = mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_111_97_108_95_95_91_49_93_95_49_2_p_1(mercury__exception__Goal_3, mercury__exception__Result_4);
    }
#line 1622 "exception.m"
    return mercury__exception__succeeded;
#line 1622 "exception.m"
  }
#line 1619 "exception.m"
}

#line 1618 "exception.m"
static void MR_CALL 
mercury__exception__call_goal_2_p_0(
#line 1618 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 1618 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 1618 "exception.m"
  MR_Box * mercury__exception__Result_4)
#line 1618 "exception.m"
{
#line 1622 "exception.m"
  {
#line 1622 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 1622 "exception.m"
    {
#line 1622 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_97_108_108_95_103_111_97_108_95_95_91_49_93_95_48_2_p_0(mercury__exception__Goal_3, mercury__exception__Result_4);
#line 1622 "exception.m"
      return;
    }
#line 1622 "exception.m"
  }
#line 1618 "exception.m"
}

#line 881 "exception.m"
void MR_CALL 
mercury__exception__builtin_catch_3_p_5(
#line 881 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_4,
#line 881 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 881 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2,
#line 881 "exception.m"
  MR_Box * mercury__exception__HeadVar__3_3,
#line 881 "exception.m"
  MR_Cont mercury__exception__cont,
#line 881 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 880 "exception.m"
void MR_CALL 
mercury__exception__builtin_catch_3_p_4(
#line 880 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_4,
#line 880 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 880 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2,
#line 880 "exception.m"
  MR_Box * mercury__exception__HeadVar__3_3,
#line 880 "exception.m"
  MR_Cont mercury__exception__cont,
#line 880 "exception.m"
  void * mercury__exception__cont_env_ptr);

#line 879 "exception.m"
MR_bool MR_CALL 
mercury__exception__builtin_catch_3_p_3(
#line 879 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_4,
#line 879 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 879 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2,
#line 879 "exception.m"
  MR_Box * mercury__exception__HeadVar__3_3);

#line 878 "exception.m"
void MR_CALL 
mercury__exception__builtin_catch_3_p_2(
#line 878 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_4,
#line 878 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 878 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2,
#line 878 "exception.m"
  MR_Box * mercury__exception__HeadVar__3_3);

#line 877 "exception.m"
MR_bool MR_CALL 
mercury__exception__builtin_catch_3_p_1(
#line 877 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_4,
#line 877 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 877 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2,
#line 877 "exception.m"
  MR_Box * mercury__exception__HeadVar__3_3);

#line 876 "exception.m"
void MR_CALL 
mercury__exception__builtin_catch_3_p_0(
#line 876 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_4,
#line 876 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 876 "exception.m"
  MR_Word mercury__exception__HeadVar__2_2,
#line 876 "exception.m"
  MR_Box * mercury__exception__HeadVar__3_3);

#line 872 "exception.m"
void MR_CALL 
mercury__exception__builtin_throw_1_p_0(
#line 872 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1);

#line 840 "exception.m"
void MR_CALL 
mercury__exception__catch_impl_3_p_5(
#line 840 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_22,
#line 840 "exception.m"
  MR_Word mercury__exception__Pred_1,
#line 840 "exception.m"
  MR_Word mercury__exception__Handler_2,
#line 840 "exception.m"
  MR_Box * mercury__exception__T_3,
#line 840 "exception.m"
  MR_Cont mercury__exception__cont,
#line 840 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 840 "exception.m"
{
#line 866 "exception.m"
  {
#line 866 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 866 "exception.m"
    {
#line 866 "exception.m"
      mercury__exception__builtin_catch_3_p_5(mercury__exception__TypeInfo_for_T_22, mercury__exception__Pred_1, mercury__exception__Handler_2, mercury__exception__T_3, mercury__exception__cont, mercury__exception__cont_env_ptr);
#line 866 "exception.m"
      return;
    }
#line 866 "exception.m"
  }
#line 840 "exception.m"
}

#line 839 "exception.m"
void MR_CALL 
mercury__exception__catch_impl_3_p_4(
#line 839 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_22,
#line 839 "exception.m"
  MR_Word mercury__exception__Pred_1,
#line 839 "exception.m"
  MR_Word mercury__exception__Handler_2,
#line 839 "exception.m"
  MR_Box * mercury__exception__T_3,
#line 839 "exception.m"
  MR_Cont mercury__exception__cont,
#line 839 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 839 "exception.m"
{
#line 864 "exception.m"
  {
#line 864 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 864 "exception.m"
    {
#line 864 "exception.m"
      mercury__exception__builtin_catch_3_p_4(mercury__exception__TypeInfo_for_T_22, mercury__exception__Pred_1, mercury__exception__Handler_2, mercury__exception__T_3, mercury__exception__cont, mercury__exception__cont_env_ptr);
#line 864 "exception.m"
      return;
    }
#line 864 "exception.m"
  }
#line 839 "exception.m"
}

#line 838 "exception.m"
MR_bool MR_CALL 
mercury__exception__catch_impl_3_p_3(
#line 838 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_22,
#line 838 "exception.m"
  MR_Word mercury__exception__Pred_1,
#line 838 "exception.m"
  MR_Word mercury__exception__Handler_2,
#line 838 "exception.m"
  MR_Box * mercury__exception__T_3)
#line 838 "exception.m"
{
#line 862 "exception.m"
  {
#line 862 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 862 "exception.m"
    {
#line 862 "exception.m"
      return mercury__exception__succeeded = mercury__exception__builtin_catch_3_p_3(mercury__exception__TypeInfo_for_T_22, mercury__exception__Pred_1, mercury__exception__Handler_2, mercury__exception__T_3);
    }
#line 862 "exception.m"
    return mercury__exception__succeeded;
#line 862 "exception.m"
  }
#line 838 "exception.m"
}

#line 837 "exception.m"
void MR_CALL 
mercury__exception__catch_impl_3_p_2(
#line 837 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_22,
#line 837 "exception.m"
  MR_Word mercury__exception__Pred_1,
#line 837 "exception.m"
  MR_Word mercury__exception__Handler_2,
#line 837 "exception.m"
  MR_Box * mercury__exception__T_3)
#line 837 "exception.m"
{
#line 860 "exception.m"
  {
#line 860 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 860 "exception.m"
    {
#line 860 "exception.m"
      mercury__exception__builtin_catch_3_p_2(mercury__exception__TypeInfo_for_T_22, mercury__exception__Pred_1, mercury__exception__Handler_2, mercury__exception__T_3);
#line 860 "exception.m"
      return;
    }
#line 860 "exception.m"
  }
#line 837 "exception.m"
}

#line 836 "exception.m"
MR_bool MR_CALL 
mercury__exception__catch_impl_3_p_1(
#line 836 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_22,
#line 836 "exception.m"
  MR_Word mercury__exception__Pred_1,
#line 836 "exception.m"
  MR_Word mercury__exception__Handler_2,
#line 836 "exception.m"
  MR_Box * mercury__exception__T_3)
#line 836 "exception.m"
{
#line 858 "exception.m"
  {
#line 858 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 858 "exception.m"
    {
#line 858 "exception.m"
      return mercury__exception__succeeded = mercury__exception__builtin_catch_3_p_1(mercury__exception__TypeInfo_for_T_22, mercury__exception__Pred_1, mercury__exception__Handler_2, mercury__exception__T_3);
    }
#line 858 "exception.m"
    return mercury__exception__succeeded;
#line 858 "exception.m"
  }
#line 836 "exception.m"
}

#line 835 "exception.m"
void MR_CALL 
mercury__exception__catch_impl_3_p_0(
#line 835 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_22,
#line 835 "exception.m"
  MR_Word mercury__exception__Pred_1,
#line 835 "exception.m"
  MR_Word mercury__exception__Handler_2,
#line 835 "exception.m"
  MR_Box * mercury__exception__T_3)
#line 835 "exception.m"
{
#line 856 "exception.m"
  {
#line 856 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 856 "exception.m"
    {
#line 856 "exception.m"
      mercury__exception__builtin_catch_3_p_0(mercury__exception__TypeInfo_for_T_22, mercury__exception__Pred_1, mercury__exception__Handler_2, mercury__exception__T_3);
#line 856 "exception.m"
      return;
    }
#line 856 "exception.m"
  }
#line 835 "exception.m"
}

#line 791 "exception.m"
void MR_CALL 
mercury__exception__handle_stm_result_4_p_0(
#line 791 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_17,
#line 791 "exception.m"
  MR_Word mercury__exception__Result0_5,
#line 791 "exception.m"
  MR_Word * mercury__exception__Result_6,
#line 791 "exception.m"
  MR_Box mercury__exception__STATE_VARIABLE_STM_0_12,
#line 791 "exception.m"
  MR_Box * mercury__exception__STATE_VARIABLE_STM_13)
#line 791 "exception.m"
{
#line 799 "exception.m"
  {
#line 799 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 799 "exception.m"
    if (((MR_tag((MR_Word) mercury__exception__Result0_5)) == (MR_mktag((MR_Integer) 2))))
#line 800 "exception.m"
      {
#line 800 "exception.m"
        MR_Word mercury__exception__TypeCtorInfo_18_18 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 800 "exception.m"
        MR_Word mercury__exception__E0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__exception__Result0_5, (MR_Integer) 0)));
#line 800 "exception.m"
        MR_Word mercury__exception__E_11;
#line 56 "builtin.opt"
        MR_Box mercury__exception__conv0_Copy;

#line 56 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__handle_stm_result_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  mercury__exception__TypeCtorInfo_18_18 ;
	Value = (MR_Word) ((MR_Box) (mercury__exception__E0_10)) ;
		{
#line 56 "builtin.opt"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();

#line 9981 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv0_Copy  = (MR_Box) Copy;
#line 56 "builtin.opt"
        mercury__exception__E_11 = ((MR_Word) mercury__exception__conv0_Copy);
#line 56 "builtin.opt"
}
#line 802 "exception.m"
        {
#line 802 "exception.m"
          MR_Word base;
#line 802 "exception.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 802 "exception.m"
          *mercury__exception__Result_6 = base;
#line 802 "exception.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__exception__E_11));
#line 802 "exception.m"
        }
#line 803 "exception.m"
        *mercury__exception__STATE_VARIABLE_STM_13 = mercury__exception__STATE_VARIABLE_STM_0_12;
#line 800 "exception.m"
      }
#line 799 "exception.m"
    else
#line 796 "exception.m"
      {
#line 796 "exception.m"
        MR_Box mercury__exception__Res_8;
#line 796 "exception.m"
        MR_Box mercury__exception__NewSTM_9;
#line 796 "exception.m"
        MR_Tuple mercury__exception__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__exception__Result0_5, (MR_Integer) 0)));

#line 796 "exception.m"
        mercury__exception__Res_8 = (MR_hl_field(MR_mktag(0), mercury__exception__V_15_15, (MR_Integer) 0));
#line 796 "exception.m"
        mercury__exception__NewSTM_9 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__exception__V_15_15, (MR_Integer) 1)));
#line 797 "exception.m"
        {
#line 797 "exception.m"
          MR_Word base;
#line 797 "exception.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "exception.m"
          *mercury__exception__Result_6 = base;
#line 797 "exception.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__exception__Res_8;
#line 797 "exception.m"
        }
#line 798 "exception.m"
        *mercury__exception__STATE_VARIABLE_STM_13 = mercury__exception__NewSTM_9;
#line 796 "exception.m"
      }
#line 799 "exception.m"
  }
#line 791 "exception.m"
}

#line 780 "exception.m"
void MR_CALL 
mercury__exception__try_stm_cc_multi_5_p_0(
#line 780 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_21,
#line 780 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 780 "exception.m"
  MR_Word mercury__exception__TransactionGoal_6,
#line 780 "exception.m"
  MR_Word * mercury__exception__Result_7,
#line 780 "exception.m"
  MR_Box mercury__exception__STATE_VARIABLE_STM_0_14,
#line 780 "exception.m"
  MR_Box * mercury__exception__STATE_VARIABLE_STM_15)
#line 780 "exception.m"
{
#line 783 "exception.m"
  {
#line 783 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 783 "exception.m"
    {
#line 783 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_99_99_95_109_117_108_116_105_95_95_91_50_93_95_48_5_p_0(mercury__exception__TypeInfo_for_T_21, mercury__exception__TransactionGoal_6, mercury__exception__Result_7, mercury__exception__STATE_VARIABLE_STM_0_14, mercury__exception__STATE_VARIABLE_STM_15);
#line 783 "exception.m"
      return;
    }
#line 783 "exception.m"
  }
#line 780 "exception.m"
}

#line 767 "exception.m"
void MR_CALL 
mercury__exception__try_stm_det_5_p_0(
#line 767 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_21,
#line 767 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 767 "exception.m"
  MR_Word mercury__exception__TransactionGoal_6,
#line 767 "exception.m"
  MR_Word * mercury__exception__Result_7,
#line 767 "exception.m"
  MR_Box mercury__exception__STATE_VARIABLE_STM_0_14,
#line 767 "exception.m"
  MR_Box * mercury__exception__STATE_VARIABLE_STM_15)
#line 767 "exception.m"
{
#line 770 "exception.m"
  {
#line 770 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 770 "exception.m"
    {
#line 770 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0(mercury__exception__TypeInfo_for_T_21, mercury__exception__TransactionGoal_6, mercury__exception__Result_7, mercury__exception__STATE_VARIABLE_STM_0_14, mercury__exception__STATE_VARIABLE_STM_15);
#line 770 "exception.m"
      return;
    }
#line 770 "exception.m"
  }
#line 767 "exception.m"
}

#line 726 "exception.m"
void MR_CALL 
mercury__exception__wrap_exception_2_p_0(
#line 726 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_4,
#line 726 "exception.m"
  MR_Word mercury__exception__Exception_3,
#line 726 "exception.m"
  MR_Word * mercury__exception__HeadVar__2_2)
#line 726 "exception.m"
{
#line 728 "exception.m"
  {
#line 728 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 728 "exception.m"
    {
#line 728 "exception.m"
      MR_Word base;
#line 728 "exception.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 728 "exception.m"
      *mercury__exception__HeadVar__2_2 = base;
#line 728 "exception.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__exception__Exception_3));
#line 728 "exception.m"
    }
#line 728 "exception.m"
  }
#line 726 "exception.m"
}

#line 712 "exception.m"
static void MR_CALL 
mercury__exception__consume_io_state_1_p_0(void)
#line 712 "exception.m"
{
#line 713 "exception.m"
  {
#line 713 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 715 "exception.m"
{
#define MR_PROC_LABEL mercury__exception__consume_io_state_1_p_0


		{
#line 715 "exception.m"

#line 10161 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 715 "exception.m"
}
#line 713 "exception.m"
  }
#line 712 "exception.m"
}

#line 701 "exception.m"
static void MR_CALL 
mercury__exception__make_io_state_1_p_0(void)
#line 701 "exception.m"
{
#line 702 "exception.m"
  {
#line 702 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 704 "exception.m"
{
#define MR_PROC_LABEL mercury__exception__make_io_state_1_p_0


		{
#line 704 "exception.m"

#line 10190 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 704 "exception.m"
}
#line 702 "exception.m"
  }
#line 701 "exception.m"
}

#line 689 "exception.m"
static void MR_CALL 
mercury__exception__very_unsafe_perform_io_2_p_1(
#line 689 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_7,
#line 689 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 689 "exception.m"
  MR_Box * mercury__exception__Result_4)
#line 689 "exception.m"
{
#line 696 "exception.m"
  {
#line 696 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 698 "exception.m"
    void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 698 "exception.m"
    MR_Box mercury__exception__conv1_IO_6;

#line 704 "exception.m"
{
#define MR_PROC_LABEL mercury__exception__very_unsafe_perform_io_2_p_1


		{
#line 704 "exception.m"

#line 10229 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 704 "exception.m"
}
#line 698 "exception.m"
    mercury__exception__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));
#line 698 "exception.m"
    {
#line 698 "exception.m"
      mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), mercury__exception__Result_4, ((MR_Box) ((MR_Integer) 0)), &mercury__exception__conv1_IO_6);
    }
#line 715 "exception.m"
{
#define MR_PROC_LABEL mercury__exception__very_unsafe_perform_io_2_p_1


		{
#line 715 "exception.m"

#line 10250 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 715 "exception.m"
}
#line 696 "exception.m"
  }
#line 689 "exception.m"
}

#line 688 "exception.m"
static void MR_CALL 
mercury__exception__very_unsafe_perform_io_2_p_0(
#line 688 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_7,
#line 688 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 688 "exception.m"
  MR_Box * mercury__exception__Result_4)
#line 688 "exception.m"
{
#line 696 "exception.m"
  {
#line 696 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 698 "exception.m"
    void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 698 "exception.m"
    MR_Box mercury__exception__conv1_IO_6;

#line 704 "exception.m"
{
#define MR_PROC_LABEL mercury__exception__very_unsafe_perform_io_2_p_0


		{
#line 704 "exception.m"

#line 10289 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 704 "exception.m"
}
#line 698 "exception.m"
    mercury__exception__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));
#line 698 "exception.m"
    {
#line 698 "exception.m"
      mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), mercury__exception__Result_4, ((MR_Box) ((MR_Integer) 0)), &mercury__exception__conv1_IO_6);
    }
#line 715 "exception.m"
{
#define MR_PROC_LABEL mercury__exception__very_unsafe_perform_io_2_p_0


		{
#line 715 "exception.m"

#line 10310 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 715 "exception.m"
}
#line 696 "exception.m"
  }
#line 688 "exception.m"
}

#line 645 "exception.m"
void MR_CALL 
mercury__exception__handle_store_result_4_p_0(
#line 645 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_17,
#line 645 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_S_18,
#line 645 "exception.m"
  MR_Word mercury__exception__Result0_5,
#line 645 "exception.m"
  MR_Word * mercury__exception__Result_6)
#line 645 "exception.m"
{
#line 656 "exception.m"
  {
#line 656 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 656 "exception.m"
    if (((MR_tag((MR_Word) mercury__exception__Result0_5)) == (MR_mktag((MR_Integer) 2))))
#line 657 "exception.m"
      {
#line 657 "exception.m"
        MR_Word mercury__exception__TypeCtorInfo_19_19 = (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0;
#line 657 "exception.m"
        MR_Word mercury__exception__E0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__exception__Result0_5, (MR_Integer) 0)));
#line 657 "exception.m"
        MR_Word mercury__exception__E_11;
#line 56 "builtin.opt"
        MR_Box mercury__exception__conv0_Copy;

#line 56 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__handle_store_result_4_p_0

	MR_Word TypeInfo_for_T;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T =  mercury__exception__TypeCtorInfo_19_19 ;
	Value = (MR_Word) ((MR_Box) (mercury__exception__E0_10)) ;
		{
#line 56 "builtin.opt"

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();

#line 10369 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv0_Copy  = (MR_Box) Copy;
#line 56 "builtin.opt"
        mercury__exception__E_11 = ((MR_Word) mercury__exception__conv0_Copy);
#line 56 "builtin.opt"
}
#line 662 "exception.m"
        {
#line 662 "exception.m"
          MR_Word base;
#line 662 "exception.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 662 "exception.m"
          *mercury__exception__Result_6 = base;
#line 662 "exception.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__exception__E_11));
#line 662 "exception.m"
        }
#line 665 "exception.m"
        mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
#line 657 "exception.m"
      }
#line 656 "exception.m"
    else
#line 651 "exception.m"
      {
#line 651 "exception.m"
        MR_Box mercury__exception__Res_8;
#line 651 "exception.m"
        MR_Tuple mercury__exception__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__exception__Result0_5, (MR_Integer) 0)));

#line 651 "exception.m"
        mercury__exception__Res_8 = (MR_hl_field(MR_mktag(0), mercury__exception__V_15_15, (MR_Integer) 0));
#line 652 "exception.m"
        {
#line 652 "exception.m"
          MR_Word base;
#line 652 "exception.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 652 "exception.m"
          *mercury__exception__Result_6 = base;
#line 652 "exception.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__exception__Res_8;
#line 652 "exception.m"
        }
#line 655 "exception.m"
        mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
#line 651 "exception.m"
      }
#line 656 "exception.m"
  }
#line 645 "exception.m"
}

#line 596 "exception.m"
static void MR_CALL 
mercury__exception__process_one_exception_result_5_p_0(
#line 596 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_31,
#line 596 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 596 "exception.m"
  MR_Word mercury__exception__STATE_VARIABLE_MaybeException_0_2,
#line 596 "exception.m"
  MR_Word * mercury__exception__STATE_VARIABLE_MaybeException_3,
#line 596 "exception.m"
  MR_Word mercury__exception__STATE_VARIABLE_Solutions_0_4,
#line 596 "exception.m"
  MR_Word * mercury__exception__STATE_VARIABLE_Solutions_5)
#line 596 "exception.m"
{
#line 599 "exception.m"
  {
#line 599 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 599 "exception.m"
    if ((mercury__exception__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 606 "exception.m"
      {
#line 606 "exception.m"
        MR_Word mercury__exception__TypeCtorInfo_32_32 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 606 "exception.m"
        MR_Word mercury__exception__V_29_29 = (MR_Word) ((MR_Box) ((MR_String) "process_one_exception_result: unexpected failure"));

#line 607 "exception.m"
        {
#line 607 "exception.m"
          mercury__exception__throw_1_p_0(mercury__exception__TypeCtorInfo_32_32, ((MR_Box) (mercury__exception__V_29_29)));
#line 607 "exception.m"
          return;
        }
#line 606 "exception.m"
      }
#line 599 "exception.m"
    else
#line 599 "exception.m"
      if (((MR_tag((MR_Word) mercury__exception__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 599 "exception.m"
        {
#line 599 "exception.m"
          MR_Word mercury__exception__E_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__exception__HeadVar__1_1, (MR_Integer) 0)));

#line 603 "exception.m"
          {
#line 603 "exception.m"
            MR_Word base;
#line 603 "exception.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 603 "exception.m"
            *mercury__exception__STATE_VARIABLE_MaybeException_3 = base;
#line 603 "exception.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__exception__E_6));
#line 603 "exception.m"
          }
#line 599 "exception.m"
          *mercury__exception__STATE_VARIABLE_Solutions_5 = mercury__exception__STATE_VARIABLE_Solutions_0_4;
#line 599 "exception.m"
        }
#line 599 "exception.m"
      else
#line 604 "exception.m"
        {
#line 604 "exception.m"
          MR_Box mercury__exception__S_15 = (MR_hl_field(MR_mktag(1), mercury__exception__HeadVar__1_1, (MR_Integer) 0));

#line 605 "exception.m"
          {
#line 605 "exception.m"
            MR_Word base;
#line 605 "exception.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "exception.m"
            *mercury__exception__STATE_VARIABLE_Solutions_5 = base;
#line 605 "exception.m"
            MR_hl_field(MR_mktag(1), base, 0) = mercury__exception__S_15;
#line 605 "exception.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__exception__STATE_VARIABLE_Solutions_0_4));
#line 605 "exception.m"
          }
#line 604 "exception.m"
          *mercury__exception__STATE_VARIABLE_MaybeException_3 = mercury__exception__STATE_VARIABLE_MaybeException_0_2;
#line 604 "exception.m"
        }
#line 599 "exception.m"
  }
#line 596 "exception.m"
}

#line 500 "exception.m"
void MR_CALL 
mercury__exception__wrap_success_or_failure_2_p_3(
#line 500 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_6,
#line 500 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 500 "exception.m"
  MR_Word * mercury__exception__Result_4)
#line 500 "exception.m"
{
#line 503 "exception.m"
  {
#line 503 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 503 "exception.m"
    MR_Box mercury__exception__R_5;
#line 503 "exception.m"
    MR_bool MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));

#line 503 "exception.m"
    {
#line 503 "exception.m"
      mercury__exception__succeeded = mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), &mercury__exception__R_5);
    }
#line 503 "exception.m"
    if (mercury__exception__succeeded)
#line 503 "exception.m"
      {
#line 503 "exception.m"
        MR_Word base;
#line 503 "exception.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "exception.m"
        *mercury__exception__Result_4 = base;
#line 503 "exception.m"
        MR_hl_field(MR_mktag(1), base, 0) = mercury__exception__R_5;
#line 503 "exception.m"
      }
#line 503 "exception.m"
    else
#line 503 "exception.m"
      *mercury__exception__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 503 "exception.m"
  }
#line 500 "exception.m"
}

#line 499 "exception.m"
void MR_CALL 
mercury__exception__wrap_success_or_failure_2_p_2(
#line 499 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_6,
#line 499 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 499 "exception.m"
  MR_Word * mercury__exception__Result_4)
#line 499 "exception.m"
{
#line 503 "exception.m"
  {
#line 503 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 503 "exception.m"
    MR_Box mercury__exception__R_5;
#line 503 "exception.m"
    void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));

#line 503 "exception.m"
    {
#line 503 "exception.m"
      mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), &mercury__exception__R_5);
    }
#line 503 "exception.m"
    {
#line 503 "exception.m"
      MR_Word base;
#line 503 "exception.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "exception.m"
      *mercury__exception__Result_4 = base;
#line 503 "exception.m"
      MR_hl_field(MR_mktag(1), base, 0) = mercury__exception__R_5;
#line 503 "exception.m"
    }
#line 503 "exception.m"
  }
#line 499 "exception.m"
}

#line 496 "exception.m"
void MR_CALL 
mercury__exception__wrap_success_or_failure_2_p_1(
#line 496 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_6,
#line 496 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 496 "exception.m"
  MR_Word * mercury__exception__Result_4)
#line 496 "exception.m"
{
#line 503 "exception.m"
  {
#line 503 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 503 "exception.m"
    MR_Box mercury__exception__R_5;
#line 503 "exception.m"
    MR_bool MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));

#line 503 "exception.m"
    {
#line 503 "exception.m"
      mercury__exception__succeeded = mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), &mercury__exception__R_5);
    }
#line 503 "exception.m"
    if (mercury__exception__succeeded)
#line 503 "exception.m"
      {
#line 503 "exception.m"
        MR_Word base;
#line 503 "exception.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "exception.m"
        *mercury__exception__Result_4 = base;
#line 503 "exception.m"
        MR_hl_field(MR_mktag(1), base, 0) = mercury__exception__R_5;
#line 503 "exception.m"
      }
#line 503 "exception.m"
    else
#line 503 "exception.m"
      *mercury__exception__Result_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 503 "exception.m"
  }
#line 496 "exception.m"
}

#line 495 "exception.m"
void MR_CALL 
mercury__exception__wrap_success_or_failure_2_p_0(
#line 495 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_6,
#line 495 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 495 "exception.m"
  MR_Word * mercury__exception__Result_4)
#line 495 "exception.m"
{
#line 503 "exception.m"
  {
#line 503 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 503 "exception.m"
    MR_Box mercury__exception__R_5;
#line 503 "exception.m"
    void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));

#line 503 "exception.m"
    {
#line 503 "exception.m"
      mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), &mercury__exception__R_5);
    }
#line 503 "exception.m"
    {
#line 503 "exception.m"
      MR_Word base;
#line 503 "exception.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 503 "exception.m"
      *mercury__exception__Result_4 = base;
#line 503 "exception.m"
      MR_hl_field(MR_mktag(1), base, 0) = mercury__exception__R_5;
#line 503 "exception.m"
    }
#line 503 "exception.m"
  }
#line 495 "exception.m"
}

#line 490 "exception.m"
MR_bool MR_CALL 
mercury__exception__wrap_success_2_p_5(
#line 490 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 490 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 490 "exception.m"
  MR_Word * mercury__exception__HeadVar__2_2)
#line 490 "exception.m"
{
#line 492 "exception.m"
  {
#line 492 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 492 "exception.m"
    MR_Box mercury__exception__R_4;
#line 492 "exception.m"
    MR_bool MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));

#line 492 "exception.m"
    {
#line 492 "exception.m"
      mercury__exception__succeeded = mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), &mercury__exception__R_4);
    }
#line 492 "exception.m"
    if (mercury__exception__succeeded)
#line 492 "exception.m"
      {
#line 492 "exception.m"
        {
#line 492 "exception.m"
          MR_Word base;
#line 492 "exception.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "exception.m"
          *mercury__exception__HeadVar__2_2 = base;
#line 492 "exception.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__exception__R_4;
#line 492 "exception.m"
        }
#line 492 "exception.m"
        mercury__exception__succeeded = MR_TRUE;
#line 492 "exception.m"
      }
#line 492 "exception.m"
    return mercury__exception__succeeded;
#line 492 "exception.m"
  }
#line 490 "exception.m"
}

#line 489 "exception.m"
void MR_CALL 
mercury__exception__wrap_success_2_p_4(
#line 489 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 489 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 489 "exception.m"
  MR_Word * mercury__exception__HeadVar__2_2)
#line 489 "exception.m"
{
#line 492 "exception.m"
  {
#line 492 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 492 "exception.m"
    MR_Box mercury__exception__R_4;
#line 492 "exception.m"
    void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));

#line 492 "exception.m"
    {
#line 492 "exception.m"
      mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), &mercury__exception__R_4);
    }
#line 492 "exception.m"
    {
#line 492 "exception.m"
      MR_Word base;
#line 492 "exception.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "exception.m"
      *mercury__exception__HeadVar__2_2 = base;
#line 492 "exception.m"
      MR_hl_field(MR_mktag(1), base, 0) = mercury__exception__R_4;
#line 492 "exception.m"
    }
#line 492 "exception.m"
  }
#line 489 "exception.m"
}

#line 492 "exception.m"
static void MR_CALL 
mercury__exception__wrap_success_2_p_3_1(
#line 492 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 492 "exception.m"
{
#line 492 "exception.m"
  {
#line 492 "exception.m"
    struct mercury__exception__wrap_success_2_p_3_env_0_s * mercury__exception__env_ptr = (struct mercury__exception__wrap_success_2_p_3_env_0_s *) mercury__exception__env_ptr_arg;

#line 492 "exception.m"
    {
#line 492 "exception.m"
      MR_Word base;
#line 492 "exception.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "exception.m"
      *((mercury__exception__env_ptr)->mercury__exception__wrap_success_2_p_3_env_0__HeadVar__2_2) = base;
#line 492 "exception.m"
      MR_hl_field(MR_mktag(1), base, 0) = (mercury__exception__env_ptr)->mercury__exception__wrap_success_2_p_3_env_0__R_4;
#line 492 "exception.m"
    }
#line 492 "exception.m"
    {
#line 492 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__wrap_success_2_p_3_env_0__cont)((mercury__exception__env_ptr)->mercury__exception__wrap_success_2_p_3_env_0__cont_env_ptr);
#line 492 "exception.m"
      return;
    }
#line 492 "exception.m"
  }
#line 492 "exception.m"
}

#line 488 "exception.m"
void MR_CALL 
mercury__exception__wrap_success_2_p_3(
#line 488 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 488 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 488 "exception.m"
  MR_Word * mercury__exception__HeadVar__2_2,
#line 488 "exception.m"
  MR_Cont mercury__exception__cont,
#line 488 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 488 "exception.m"
{
#line 488 "exception.m"
  {
#line 488 "exception.m"
    struct mercury__exception__wrap_success_2_p_3_env_0_s mercury__exception__env;

#line 488 "exception.m"
    (mercury__exception__env).mercury__exception__wrap_success_2_p_3_env_0__HeadVar__2_2 = mercury__exception__HeadVar__2_2;
#line 488 "exception.m"
    (mercury__exception__env).mercury__exception__wrap_success_2_p_3_env_0__cont = mercury__exception__cont;
#line 488 "exception.m"
    (mercury__exception__env).mercury__exception__wrap_success_2_p_3_env_0__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 492 "exception.m"
    {
#line 492 "exception.m"
      MR_bool mercury__exception__succeeded;
#line 492 "exception.m"
      void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));

#line 492 "exception.m"
      {
#line 492 "exception.m"
        mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), &(mercury__exception__env).mercury__exception__wrap_success_2_p_3_env_0__R_4, mercury__exception__wrap_success_2_p_3_1, &mercury__exception__env);
      }
#line 492 "exception.m"
    }
#line 488 "exception.m"
  }
#line 488 "exception.m"
}

#line 492 "exception.m"
static void MR_CALL 
mercury__exception__wrap_success_2_p_2_1(
#line 492 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 492 "exception.m"
{
#line 492 "exception.m"
  {
#line 492 "exception.m"
    struct mercury__exception__wrap_success_2_p_2_env_0_s * mercury__exception__env_ptr = (struct mercury__exception__wrap_success_2_p_2_env_0_s *) mercury__exception__env_ptr_arg;

#line 492 "exception.m"
    {
#line 492 "exception.m"
      MR_Word base;
#line 492 "exception.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "exception.m"
      *((mercury__exception__env_ptr)->mercury__exception__wrap_success_2_p_2_env_0__HeadVar__2_2) = base;
#line 492 "exception.m"
      MR_hl_field(MR_mktag(1), base, 0) = (mercury__exception__env_ptr)->mercury__exception__wrap_success_2_p_2_env_0__R_4;
#line 492 "exception.m"
    }
#line 492 "exception.m"
    {
#line 492 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__wrap_success_2_p_2_env_0__cont)((mercury__exception__env_ptr)->mercury__exception__wrap_success_2_p_2_env_0__cont_env_ptr);
#line 492 "exception.m"
      return;
    }
#line 492 "exception.m"
  }
#line 492 "exception.m"
}

#line 487 "exception.m"
void MR_CALL 
mercury__exception__wrap_success_2_p_2(
#line 487 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 487 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 487 "exception.m"
  MR_Word * mercury__exception__HeadVar__2_2,
#line 487 "exception.m"
  MR_Cont mercury__exception__cont,
#line 487 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 487 "exception.m"
{
#line 487 "exception.m"
  {
#line 487 "exception.m"
    struct mercury__exception__wrap_success_2_p_2_env_0_s mercury__exception__env;

#line 487 "exception.m"
    (mercury__exception__env).mercury__exception__wrap_success_2_p_2_env_0__HeadVar__2_2 = mercury__exception__HeadVar__2_2;
#line 487 "exception.m"
    (mercury__exception__env).mercury__exception__wrap_success_2_p_2_env_0__cont = mercury__exception__cont;
#line 487 "exception.m"
    (mercury__exception__env).mercury__exception__wrap_success_2_p_2_env_0__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 492 "exception.m"
    {
#line 492 "exception.m"
      MR_bool mercury__exception__succeeded;
#line 492 "exception.m"
      void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));

#line 492 "exception.m"
      {
#line 492 "exception.m"
        mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), &(mercury__exception__env).mercury__exception__wrap_success_2_p_2_env_0__R_4, mercury__exception__wrap_success_2_p_2_1, &mercury__exception__env);
      }
#line 492 "exception.m"
    }
#line 487 "exception.m"
  }
#line 487 "exception.m"
}

#line 486 "exception.m"
MR_bool MR_CALL 
mercury__exception__wrap_success_2_p_1(
#line 486 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 486 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 486 "exception.m"
  MR_Word * mercury__exception__HeadVar__2_2)
#line 486 "exception.m"
{
#line 492 "exception.m"
  {
#line 492 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 492 "exception.m"
    MR_Box mercury__exception__R_4;
#line 492 "exception.m"
    MR_bool MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));

#line 492 "exception.m"
    {
#line 492 "exception.m"
      mercury__exception__succeeded = mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), &mercury__exception__R_4);
    }
#line 492 "exception.m"
    if (mercury__exception__succeeded)
#line 492 "exception.m"
      {
#line 492 "exception.m"
        {
#line 492 "exception.m"
          MR_Word base;
#line 492 "exception.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "exception.m"
          *mercury__exception__HeadVar__2_2 = base;
#line 492 "exception.m"
          MR_hl_field(MR_mktag(1), base, 0) = mercury__exception__R_4;
#line 492 "exception.m"
        }
#line 492 "exception.m"
        mercury__exception__succeeded = MR_TRUE;
#line 492 "exception.m"
      }
#line 492 "exception.m"
    return mercury__exception__succeeded;
#line 492 "exception.m"
  }
#line 486 "exception.m"
}

#line 485 "exception.m"
void MR_CALL 
mercury__exception__wrap_success_2_p_0(
#line 485 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 485 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 485 "exception.m"
  MR_Word * mercury__exception__HeadVar__2_2)
#line 485 "exception.m"
{
#line 492 "exception.m"
  {
#line 492 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 492 "exception.m"
    MR_Box mercury__exception__R_4;
#line 492 "exception.m"
    void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Goal_3, (MR_Integer) 1)));

#line 492 "exception.m"
    {
#line 492 "exception.m"
      mercury__exception__func_0(((MR_Box) mercury__exception__Goal_3), &mercury__exception__R_4);
    }
#line 492 "exception.m"
    {
#line 492 "exception.m"
      MR_Word base;
#line 492 "exception.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "exception.m"
      *mercury__exception__HeadVar__2_2 = base;
#line 492 "exception.m"
      MR_hl_field(MR_mktag(1), base, 0) = mercury__exception__R_4;
#line 492 "exception.m"
    }
#line 492 "exception.m"
  }
#line 485 "exception.m"
}

#line 463 "exception.m"
static void MR_CALL 
mercury__exception__use_1_p_0(
#line 463 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_2,
#line 463 "exception.m"
  MR_Box mercury__exception__HeadVar__1_1)
#line 463 "exception.m"
{
#line 465 "exception.m"
  {
#line 465 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 465 "exception.m"
    {
#line 465 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_115_101_95_95_91_49_93_95_48_1_p_0(mercury__exception__HeadVar__1_1);
#line 465 "exception.m"
      return;
    }
#line 465 "exception.m"
  }
#line 463 "exception.m"
}

#line 438 "exception.m"
void MR_CALL 
mercury__exception__finally_2_6_p_1(
#line 438 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_22,
#line 438 "exception.m"
  MR_Word mercury__exception__P_7,
#line 438 "exception.m"
  MR_Word mercury__exception__Cleanup_8,
#line 438 "exception.m"
  MR_Box * mercury__exception__PRes_9,
#line 438 "exception.m"
  MR_Word * mercury__exception__CleanupRes_10)
#line 438 "exception.m"
{
#line 443 "exception.m"
  {
#line 443 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 443 "exception.m"
    MR_Word mercury__exception__ExcpResult_12;
#line 669 "exception.m"
    MR_Word mercury__exception__Detism_30;

#line 669 "exception.m"
    {
#line 669 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_49_2_p_1(&mercury__exception__Detism_30);
    }
#line 670 "exception.m"
    {
#line 670 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_49_5_p_1(mercury__exception__TypeInfo_for_T_22, mercury__exception__P_7, &mercury__exception__ExcpResult_12);
    }
#line 448 "exception.m"
    if (((MR_tag((MR_Word) mercury__exception__ExcpResult_12)) == (MR_mktag((MR_Integer) 2))))
#line 449 "exception.m"
      {
#line 450 "exception.m"
        MR_Word mercury__exception__V_14_14;
#line 450 "exception.m"
        void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Cleanup_8, (MR_Integer) 1)));
#line 450 "exception.m"
        MR_Box mercury__exception__conv2_V_14_14;
#line 450 "exception.m"
        MR_Box mercury__exception__conv1_STATE_VARIABLE_IO_16;
#line 465 "exception.m"
        MR_Word mercury__exception__TypeCtorInfo_23_33;

#line 450 "exception.m"
        {
#line 450 "exception.m"
          mercury__exception__func_0(((MR_Box) mercury__exception__Cleanup_8), &mercury__exception__conv2_V_14_14, ((MR_Box) ((MR_Integer) 0)), &mercury__exception__conv1_STATE_VARIABLE_IO_16);
        }
#line 450 "exception.m"
        mercury__exception__V_14_14 = ((MR_Word) mercury__exception__conv2_V_14_14);
#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__finally_2_6_p_1

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 11144 "exception.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__exception__succeeded  = SUCCESS_INDICATOR;
}
#line 454 "exception.m"
        if (mercury__exception__succeeded)
#line 454 "exception.m"
          {
#line 468 "exception.m"
{
#define MR_PROC_LABEL mercury__exception__finally_2_6_p_1


		{
#line 468 "exception.m"
;
#line 11165 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 468 "exception.m"
}
#line 465 "exception.m"
            mercury__exception__succeeded = MR_TRUE;
#line 454 "exception.m"
          }
#line 458 "exception.m"
        if (mercury__exception__succeeded)
#line 457 "exception.m"
          {
#line 457 "exception.m"
            mercury__exception__rethrow_1_p_0(mercury__exception__TypeInfo_for_T_22, mercury__exception__ExcpResult_12);
#line 457 "exception.m"
            return;
          }
#line 458 "exception.m"
        else
#line 459 "exception.m"
          {
#line 459 "exception.m"
            MR_Word mercury__exception__TypeCtorInfo_24_24 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 459 "exception.m"
            MR_Word mercury__exception__V_19_19 = (MR_Word) ((MR_Box) ((MR_String) "exception.finally_2"));

#line 459 "exception.m"
            {
#line 459 "exception.m"
              mercury__exception__throw_1_p_0(mercury__exception__TypeCtorInfo_24_24, ((MR_Box) (mercury__exception__V_19_19)));
#line 459 "exception.m"
              return;
            }
#line 459 "exception.m"
          }
#line 449 "exception.m"
      }
#line 448 "exception.m"
    else
#line 446 "exception.m"
      {
#line 447 "exception.m"
        void MR_CALL (* mercury__exception__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 447 "exception.m"
        MR_Box mercury__exception__conv5_CleanupRes_10;
#line 447 "exception.m"
        MR_Box mercury__exception__conv4_STATE_VARIABLE_IO_16;

#line 446 "exception.m"
        *mercury__exception__PRes_9 = (MR_hl_field(MR_mktag(1), mercury__exception__ExcpResult_12, (MR_Integer) 0));
#line 447 "exception.m"
        mercury__exception__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Cleanup_8, (MR_Integer) 1)));
#line 447 "exception.m"
        {
#line 447 "exception.m"
          mercury__exception__func_3(((MR_Box) mercury__exception__Cleanup_8), &mercury__exception__conv5_CleanupRes_10, ((MR_Box) ((MR_Integer) 0)), &mercury__exception__conv4_STATE_VARIABLE_IO_16);
        }
#line 447 "exception.m"
        *mercury__exception__CleanupRes_10 = ((MR_Word) mercury__exception__conv5_CleanupRes_10);
#line 446 "exception.m"
      }
#line 443 "exception.m"
  }
#line 438 "exception.m"
}

#line 436 "exception.m"
void MR_CALL 
mercury__exception__finally_2_6_p_0(
#line 436 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_22,
#line 436 "exception.m"
  MR_Word mercury__exception__P_7,
#line 436 "exception.m"
  MR_Word mercury__exception__Cleanup_8,
#line 436 "exception.m"
  MR_Box * mercury__exception__PRes_9,
#line 436 "exception.m"
  MR_Word * mercury__exception__CleanupRes_10)
#line 436 "exception.m"
{
#line 443 "exception.m"
  {
#line 443 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 443 "exception.m"
    MR_Word mercury__exception__ExcpResult_12;
#line 669 "exception.m"
    MR_Word mercury__exception__Detism_30;

#line 669 "exception.m"
    {
#line 669 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(&mercury__exception__Detism_30);
    }
#line 670 "exception.m"
    {
#line 670 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0(mercury__exception__TypeInfo_for_T_22, mercury__exception__P_7, &mercury__exception__ExcpResult_12);
    }
#line 448 "exception.m"
    if (((MR_tag((MR_Word) mercury__exception__ExcpResult_12)) == (MR_mktag((MR_Integer) 2))))
#line 449 "exception.m"
      {
#line 450 "exception.m"
        MR_Word mercury__exception__V_14_14;
#line 450 "exception.m"
        void MR_CALL (* mercury__exception__func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Cleanup_8, (MR_Integer) 1)));
#line 450 "exception.m"
        MR_Box mercury__exception__conv2_V_14_14;
#line 450 "exception.m"
        MR_Box mercury__exception__conv1_STATE_VARIABLE_IO_16;
#line 465 "exception.m"
        MR_Word mercury__exception__TypeCtorInfo_23_33;

#line 450 "exception.m"
        {
#line 450 "exception.m"
          mercury__exception__func_0(((MR_Box) mercury__exception__Cleanup_8), &mercury__exception__conv2_V_14_14, ((MR_Box) ((MR_Integer) 0)), &mercury__exception__conv1_STATE_VARIABLE_IO_16);
        }
#line 450 "exception.m"
        mercury__exception__V_14_14 = ((MR_Word) mercury__exception__conv2_V_14_14);
#line 89 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__finally_2_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 89 "builtin.opt"

    SUCCESS_INDICATOR = MR_TRUE;

#line 11300 "exception.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 89 "builtin.opt"
	}
mercury__exception__succeeded  = SUCCESS_INDICATOR;
}
#line 454 "exception.m"
        if (mercury__exception__succeeded)
#line 454 "exception.m"
          {
#line 468 "exception.m"
{
#define MR_PROC_LABEL mercury__exception__finally_2_6_p_0


		{
#line 468 "exception.m"
;
#line 11321 "exception.c"

		;}
#undef MR_PROC_LABEL
#line 468 "exception.m"
}
#line 465 "exception.m"
            mercury__exception__succeeded = MR_TRUE;
#line 454 "exception.m"
          }
#line 458 "exception.m"
        if (mercury__exception__succeeded)
#line 457 "exception.m"
          {
#line 457 "exception.m"
            mercury__exception__rethrow_1_p_0(mercury__exception__TypeInfo_for_T_22, mercury__exception__ExcpResult_12);
#line 457 "exception.m"
            return;
          }
#line 458 "exception.m"
        else
#line 459 "exception.m"
          {
#line 459 "exception.m"
            MR_Word mercury__exception__TypeCtorInfo_24_24 = (MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0;
#line 459 "exception.m"
            MR_Word mercury__exception__V_19_19 = (MR_Word) ((MR_Box) ((MR_String) "exception.finally_2"));

#line 459 "exception.m"
            {
#line 459 "exception.m"
              mercury__exception__throw_1_p_0(mercury__exception__TypeCtorInfo_24_24, ((MR_Box) (mercury__exception__V_19_19)));
#line 459 "exception.m"
              return;
            }
#line 459 "exception.m"
          }
#line 449 "exception.m"
      }
#line 448 "exception.m"
    else
#line 446 "exception.m"
      {
#line 447 "exception.m"
        void MR_CALL (* mercury__exception__func_3)(MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 447 "exception.m"
        MR_Box mercury__exception__conv5_CleanupRes_10;
#line 447 "exception.m"
        MR_Box mercury__exception__conv4_STATE_VARIABLE_IO_16;

#line 446 "exception.m"
        *mercury__exception__PRes_9 = (MR_hl_field(MR_mktag(1), mercury__exception__ExcpResult_12, (MR_Integer) 0));
#line 447 "exception.m"
        mercury__exception__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__exception__Cleanup_8, (MR_Integer) 1)));
#line 447 "exception.m"
        {
#line 447 "exception.m"
          mercury__exception__func_3(((MR_Box) mercury__exception__Cleanup_8), &mercury__exception__conv5_CleanupRes_10, ((MR_Box) ((MR_Integer) 0)), &mercury__exception__conv4_STATE_VARIABLE_IO_16);
        }
#line 447 "exception.m"
        *mercury__exception__CleanupRes_10 = ((MR_Word) mercury__exception__conv5_CleanupRes_10);
#line 446 "exception.m"
      }
#line 443 "exception.m"
  }
#line 436 "exception.m"
}

#line 337 "exception.m"
void MR_CALL 
mercury__exception__get_determinism_2_2_p_1(
#line 337 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_13,
#line 337 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_S_14,
#line 337 "exception.m"
  MR_Word mercury__exception___Pred_1,
#line 337 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 337 "exception.m"
{
#line 395 "exception.m"
  {
#line 395 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 395 "exception.m"
    {
#line 395 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_49_2_p_1(mercury__exception__Det_2);
#line 395 "exception.m"
      return;
    }
#line 395 "exception.m"
  }
#line 337 "exception.m"
}

#line 335 "exception.m"
void MR_CALL 
mercury__exception__get_determinism_2_2_p_0(
#line 335 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_13,
#line 335 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_S_14,
#line 335 "exception.m"
  MR_Word mercury__exception___Pred_1,
#line 335 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 335 "exception.m"
{
#line 390 "exception.m"
  {
#line 390 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 390 "exception.m"
    {
#line 390 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(mercury__exception__Det_2);
#line 390 "exception.m"
      return;
    }
#line 390 "exception.m"
  }
#line 335 "exception.m"
}

#line 331 "exception.m"
void MR_CALL 
mercury__exception__get_determinism_2_p_5(
#line 331 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_33,
#line 331 "exception.m"
  MR_Word mercury__exception___Pred_1,
#line 331 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 331 "exception.m"
{
#line 371 "exception.m"
  {
#line 371 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 371 "exception.m"
    {
#line 371 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_53_2_p_5(mercury__exception__Det_2);
#line 371 "exception.m"
      return;
    }
#line 371 "exception.m"
  }
#line 331 "exception.m"
}

#line 329 "exception.m"
void MR_CALL 
mercury__exception__get_determinism_2_p_4(
#line 329 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_33,
#line 329 "exception.m"
  MR_Word mercury__exception___Pred_1,
#line 329 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 329 "exception.m"
{
#line 366 "exception.m"
  {
#line 366 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 366 "exception.m"
    {
#line 366 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_52_2_p_4(mercury__exception__Det_2);
#line 366 "exception.m"
      return;
    }
#line 366 "exception.m"
  }
#line 329 "exception.m"
}

#line 327 "exception.m"
void MR_CALL 
mercury__exception__get_determinism_2_p_3(
#line 327 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_33,
#line 327 "exception.m"
  MR_Word mercury__exception___Pred_1,
#line 327 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 327 "exception.m"
{
#line 381 "exception.m"
  {
#line 381 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 381 "exception.m"
    {
#line 381 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_51_2_p_3(mercury__exception__Det_2);
#line 381 "exception.m"
      return;
    }
#line 381 "exception.m"
  }
#line 327 "exception.m"
}

#line 325 "exception.m"
void MR_CALL 
mercury__exception__get_determinism_2_p_2(
#line 325 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_33,
#line 325 "exception.m"
  MR_Word mercury__exception___Pred_1,
#line 325 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 325 "exception.m"
{
#line 376 "exception.m"
  {
#line 376 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 376 "exception.m"
    {
#line 376 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_50_2_p_2(mercury__exception__Det_2);
#line 376 "exception.m"
      return;
    }
#line 376 "exception.m"
  }
#line 325 "exception.m"
}

#line 323 "exception.m"
void MR_CALL 
mercury__exception__get_determinism_2_p_1(
#line 323 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_33,
#line 323 "exception.m"
  MR_Word mercury__exception___Pred_1,
#line 323 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 323 "exception.m"
{
#line 361 "exception.m"
  {
#line 361 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 361 "exception.m"
    {
#line 361 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_49_2_p_1(mercury__exception__Det_2);
#line 361 "exception.m"
      return;
    }
#line 361 "exception.m"
  }
#line 323 "exception.m"
}

#line 321 "exception.m"
void MR_CALL 
mercury__exception__get_determinism_2_p_0(
#line 321 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_33,
#line 321 "exception.m"
  MR_Word mercury__exception___Pred_1,
#line 321 "exception.m"
  MR_Word * mercury__exception__Det_2)
#line 321 "exception.m"
{
#line 356 "exception.m"
  {
#line 356 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 356 "exception.m"
    {
#line 356 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_48_2_p_0(mercury__exception__Det_2);
#line 356 "exception.m"
      return;
    }
#line 356 "exception.m"
  }
#line 321 "exception.m"
}

#line 307 "exception.m"
void MR_CALL 
mercury__exception__try_all_det_4_p_3(
#line 307 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_53,
#line 307 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 307 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 307 "exception.m"
  MR_Word * mercury__exception__MaybeException_3,
#line 307 "exception.m"
  MR_Word * mercury__exception__Solutions_4)
#line 307 "exception.m"
{
#line 549 "exception.m"
  {
#line 549 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 549 "exception.m"
    {
#line 549 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3(mercury__exception__TypeInfo_for_T_53, mercury__exception__Goal_2, mercury__exception__MaybeException_3, mercury__exception__Solutions_4);
#line 549 "exception.m"
      return;
    }
#line 549 "exception.m"
  }
#line 307 "exception.m"
}

#line 305 "exception.m"
void MR_CALL 
mercury__exception__try_all_det_4_p_2(
#line 305 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_53,
#line 305 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 305 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 305 "exception.m"
  MR_Word * mercury__exception__MaybeException_3,
#line 305 "exception.m"
  MR_Word * mercury__exception__Solutions_4)
#line 305 "exception.m"
{
#line 549 "exception.m"
  {
#line 549 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 549 "exception.m"
    {
#line 549 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2(mercury__exception__TypeInfo_for_T_53, mercury__exception__Goal_2, mercury__exception__MaybeException_3, mercury__exception__Solutions_4);
#line 549 "exception.m"
      return;
    }
#line 549 "exception.m"
  }
#line 305 "exception.m"
}

#line 303 "exception.m"
void MR_CALL 
mercury__exception__try_all_det_4_p_1(
#line 303 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_53,
#line 303 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 303 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 303 "exception.m"
  MR_Word * mercury__exception__MaybeException_3,
#line 303 "exception.m"
  MR_Word * mercury__exception__Solutions_4)
#line 303 "exception.m"
{
#line 549 "exception.m"
  {
#line 549 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 549 "exception.m"
    {
#line 549 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_49_4_p_1(mercury__exception__TypeInfo_for_T_53, mercury__exception__Goal_2, mercury__exception__MaybeException_3, mercury__exception__Solutions_4);
#line 549 "exception.m"
      return;
    }
#line 549 "exception.m"
  }
#line 303 "exception.m"
}

#line 301 "exception.m"
void MR_CALL 
mercury__exception__try_all_det_4_p_0(
#line 301 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_53,
#line 301 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 301 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 301 "exception.m"
  MR_Word * mercury__exception__MaybeException_3,
#line 301 "exception.m"
  MR_Word * mercury__exception__Solutions_4)
#line 301 "exception.m"
{
#line 549 "exception.m"
  {
#line 549 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 549 "exception.m"
    {
#line 549 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_48_4_p_0(mercury__exception__TypeInfo_for_T_53, mercury__exception__Goal_2, mercury__exception__MaybeException_3, mercury__exception__Solutions_4);
#line 549 "exception.m"
      return;
    }
#line 549 "exception.m"
  }
#line 301 "exception.m"
}

#line 297 "exception.m"
void MR_CALL 
mercury__exception__try_store_det_5_p_1(
#line 297 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_36,
#line 297 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_S_37,
#line 297 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 297 "exception.m"
  MR_Word mercury__exception__StoreGoal_2,
#line 297 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 297 "exception.m"
{
#line 630 "exception.m"
  {
#line 630 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 630 "exception.m"
    {
#line 630 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_111_114_101_95_100_101_116_95_95_91_51_93_95_49_5_p_1(mercury__exception__TypeInfo_for_T_36, mercury__exception__TypeInfo_for_S_37, mercury__exception__StoreGoal_2, mercury__exception__Result_3);
#line 630 "exception.m"
      return;
    }
#line 630 "exception.m"
  }
#line 297 "exception.m"
}

#line 295 "exception.m"
void MR_CALL 
mercury__exception__try_store_det_5_p_0(
#line 295 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_36,
#line 295 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_S_37,
#line 295 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 295 "exception.m"
  MR_Word mercury__exception__StoreGoal_2,
#line 295 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 295 "exception.m"
{
#line 630 "exception.m"
  {
#line 630 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 630 "exception.m"
    {
#line 630 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_111_114_101_95_100_101_116_95_95_91_51_93_95_48_5_p_0(mercury__exception__TypeInfo_for_T_36, mercury__exception__TypeInfo_for_S_37, mercury__exception__StoreGoal_2, mercury__exception__Result_3);
#line 630 "exception.m"
      return;
    }
#line 630 "exception.m"
  }
#line 295 "exception.m"
}

#line 290 "exception.m"
void MR_CALL 
mercury__exception__try_io_det_5_p_1(
#line 290 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_26,
#line 290 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 290 "exception.m"
  MR_Word mercury__exception__IO_Goal_2,
#line 290 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 290 "exception.m"
{
#line 676 "exception.m"
  {
#line 676 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 676 "exception.m"
    {
#line 676 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_49_5_p_1(mercury__exception__TypeInfo_for_T_26, mercury__exception__IO_Goal_2, mercury__exception__Result_3);
#line 676 "exception.m"
      return;
    }
#line 676 "exception.m"
  }
#line 290 "exception.m"
}

#line 288 "exception.m"
void MR_CALL 
mercury__exception__try_io_det_5_p_0(
#line 288 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_26,
#line 288 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 288 "exception.m"
  MR_Word mercury__exception__IO_Goal_2,
#line 288 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 288 "exception.m"
{
#line 676 "exception.m"
  {
#line 676 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 676 "exception.m"
    {
#line 676 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0(mercury__exception__TypeInfo_for_T_26, mercury__exception__IO_Goal_2, mercury__exception__Result_3);
#line 676 "exception.m"
      return;
    }
#line 676 "exception.m"
  }
#line 288 "exception.m"
}

#line 283 "exception.m"
void MR_CALL 
mercury__exception__try_det_3_p_3(
#line 283 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_34,
#line 283 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 283 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 283 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 283 "exception.m"
{
#line 520 "exception.m"
  {
#line 520 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 520 "exception.m"
    {
#line 520 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_51_3_p_3(mercury__exception__TypeInfo_for_T_34, mercury__exception__Goal_2, mercury__exception__Result_3);
#line 520 "exception.m"
      return;
    }
#line 520 "exception.m"
  }
#line 283 "exception.m"
}

#line 281 "exception.m"
void MR_CALL 
mercury__exception__try_det_3_p_2(
#line 281 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_34,
#line 281 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 281 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 281 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 281 "exception.m"
{
#line 520 "exception.m"
  {
#line 520 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 520 "exception.m"
    {
#line 520 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_50_3_p_2(mercury__exception__TypeInfo_for_T_34, mercury__exception__Goal_2, mercury__exception__Result_3);
#line 520 "exception.m"
      return;
    }
#line 520 "exception.m"
  }
#line 281 "exception.m"
}

#line 279 "exception.m"
void MR_CALL 
mercury__exception__try_det_3_p_1(
#line 279 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_34,
#line 279 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 279 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 279 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 279 "exception.m"
{
#line 520 "exception.m"
  {
#line 520 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 520 "exception.m"
    {
#line 520 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_49_3_p_1(mercury__exception__TypeInfo_for_T_34, mercury__exception__Goal_2, mercury__exception__Result_3);
#line 520 "exception.m"
      return;
    }
#line 520 "exception.m"
  }
#line 279 "exception.m"
}

#line 277 "exception.m"
void MR_CALL 
mercury__exception__try_det_3_p_0(
#line 277 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_34,
#line 277 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1,
#line 277 "exception.m"
  MR_Word mercury__exception__Goal_2,
#line 277 "exception.m"
  MR_Word * mercury__exception__Result_3)
#line 277 "exception.m"
{
#line 520 "exception.m"
  {
#line 520 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 520 "exception.m"
    {
#line 520 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_100_101_116_95_95_91_50_93_95_48_3_p_0(mercury__exception__TypeInfo_for_T_34, mercury__exception__Goal_2, mercury__exception__Result_3);
#line 520 "exception.m"
      return;
    }
#line 520 "exception.m"
  }
#line 277 "exception.m"
}

#line 264 "exception.m"
MR_Box MR_CALL 
mercury__exception__exc_univ_value_1_f_0(
#line 264 "exception.m"
  MR_Word * mercury__exception__TypeInfo_for_T_4,
#line 264 "exception.m"
  MR_Word mercury__exception__Univ_3)
#line 264 "exception.m"
{
#line 12 "univ.opt"
  {
#line 12 "univ.opt"
    MR_bool mercury__exception__succeeded;
#line 12 "univ.opt"
    MR_Box mercury__exception__HeadVar__2_2;

#line 12 "univ.opt"
    *mercury__exception__TypeInfo_for_T_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__Univ_3, (MR_Integer) 0)));
#line 12 "univ.opt"
    mercury__exception__HeadVar__2_2 = (MR_hl_field(MR_mktag(0), mercury__exception__Univ_3, (MR_Integer) 1));
#line 12 "univ.opt"
    return mercury__exception__HeadVar__2_2;
#line 12 "univ.opt"
  }
#line 264 "exception.m"
}

#line 262 "exception.m"
void MR_CALL 
mercury__exception__exc_univ_to_type_2_p_2(
#line 262 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 262 "exception.m"
  MR_Word * mercury__exception__Univ_3,
#line 262 "exception.m"
  MR_Box mercury__exception__Object_4)
#line 262 "exception.m"
{
#line 6 "univ.opt"
  {
#line 6 "univ.opt"
    MR_bool mercury__exception__succeeded;

#line 6 "univ.opt"
    {
#line 6 "univ.opt"
      mercury__univ__type_to_univ_2_p_0(mercury__exception__TypeInfo_for_T_5, mercury__exception__Object_4, mercury__exception__Univ_3);
#line 6 "univ.opt"
      return;
    }
#line 6 "univ.opt"
  }
#line 262 "exception.m"
}

#line 261 "exception.m"
void MR_CALL 
mercury__exception__exc_univ_to_type_2_p_1(
#line 261 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 261 "exception.m"
  MR_Word * mercury__exception__Univ_3,
#line 261 "exception.m"
  MR_Box mercury__exception__Object_4)
#line 261 "exception.m"
{
#line 6 "univ.opt"
  {
#line 6 "univ.opt"
    MR_bool mercury__exception__succeeded;

#line 6 "univ.opt"
    {
#line 6 "univ.opt"
      mercury__univ__type_to_univ_2_p_1(mercury__exception__TypeInfo_for_T_5, mercury__exception__Object_4, mercury__exception__Univ_3);
#line 6 "univ.opt"
      return;
    }
#line 6 "univ.opt"
  }
#line 261 "exception.m"
}

#line 260 "exception.m"
MR_bool MR_CALL 
mercury__exception__exc_univ_to_type_2_p_0(
#line 260 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 260 "exception.m"
  MR_Word mercury__exception__Univ_3,
#line 260 "exception.m"
  MR_Box * mercury__exception__Object_4)
#line 260 "exception.m"
{
#line 6 "univ.opt"
  {
#line 6 "univ.opt"
    MR_bool mercury__exception__succeeded;

#line 6 "univ.opt"
    {
#line 6 "univ.opt"
      return mercury__exception__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__exception__TypeInfo_for_T_5, mercury__exception__Object_4, mercury__exception__Univ_3);
    }
#line 6 "univ.opt"
    return mercury__exception__succeeded;
#line 6 "univ.opt"
  }
#line 260 "exception.m"
}

#line 254 "exception.m"
void MR_CALL 
mercury__exception__unreachable_0_p_0(void)
#line 254 "exception.m"
{
#line 811 "exception.m"
  {
#line 811 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 811 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_2_2 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 812 "exception.m"
    {
#line 812 "exception.m"
      mercury__exception__throw_1_p_0(mercury__exception__TypeCtorInfo_2_2, ((MR_Box) ((MR_String) "unreachable code reached")));
#line 812 "exception.m"
      return;
    }
#line 811 "exception.m"
  }
#line 254 "exception.m"
}

#line 248 "exception.m"
void MR_CALL 
mercury__exception__magic_exception_result_1_p_0(
#line 248 "exception.m"
  MR_Word * mercury__exception__HeadVar__1_1)
#line 248 "exception.m"
{
#line 808 "exception.m"
  {
#line 808 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 808 "exception.m"
    *mercury__exception__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__exception_scalar_common_7[0]);
#line 808 "exception.m"
  }
#line 248 "exception.m"
}

#line 240 "exception.m"
void MR_CALL 
mercury__exception__unsafe_try_stm_4_p_1(
#line 240 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_A_15,
#line 240 "exception.m"
  MR_Word mercury__exception__TransactionGoal_1,
#line 240 "exception.m"
  MR_Word * mercury__exception__Result_2,
#line 240 "exception.m"
  MR_Box mercury__exception__STM0_3,
#line 240 "exception.m"
  MR_Box * mercury__exception__STM_4)
#line 240 "exception.m"
{
#line 761 "exception.m"
  {
#line 761 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 762 "exception.m"
    MR_Word mercury__exception__Detism_14;

#line 762 "exception.m"
    {
#line 762 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_49_2_p_1(&mercury__exception__Detism_14);
    }
#line 763 "exception.m"
    {
#line 763 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_99_99_95_109_117_108_116_105_95_95_91_50_93_95_48_5_p_0(mercury__exception__TypeInfo_for_A_15, mercury__exception__TransactionGoal_1, mercury__exception__Result_2, mercury__exception__STM0_3, mercury__exception__STM_4);
#line 763 "exception.m"
      return;
    }
#line 761 "exception.m"
  }
#line 240 "exception.m"
}

#line 238 "exception.m"
void MR_CALL 
mercury__exception__unsafe_try_stm_4_p_0(
#line 238 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_A_15,
#line 238 "exception.m"
  MR_Word mercury__exception__TransactionGoal_1,
#line 238 "exception.m"
  MR_Word * mercury__exception__Result_2,
#line 238 "exception.m"
  MR_Box mercury__exception__STM0_3,
#line 238 "exception.m"
  MR_Box * mercury__exception__STM_4)
#line 238 "exception.m"
{
#line 756 "exception.m"
  {
#line 756 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 757 "exception.m"
    MR_Word mercury__exception__Detism_9;

#line 757 "exception.m"
    {
#line 757 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(&mercury__exception__Detism_9);
    }
#line 758 "exception.m"
    {
#line 758 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0(mercury__exception__TypeInfo_for_A_15, mercury__exception__TransactionGoal_1, mercury__exception__Result_2, mercury__exception__STM0_3, mercury__exception__STM_4);
#line 758 "exception.m"
      return;
    }
#line 756 "exception.m"
  }
#line 238 "exception.m"
}

#line 226 "exception.m"
void MR_CALL 
mercury__exception__try_stm_4_p_1(
#line 226 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_A_16,
#line 226 "exception.m"
  MR_Word mercury__exception__Goal_5,
#line 226 "exception.m"
  MR_Word * mercury__exception__Result_6,
#line 226 "exception.m"
  MR_Box mercury__exception__STATE_VARIABLE_STM_0_11,
#line 226 "exception.m"
  MR_Box * mercury__exception__STATE_VARIABLE_STM_12)
#line 226 "exception.m"
{
#line 732 "exception.m"
  {
#line 732 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 732 "exception.m"
    MR_Word mercury__exception__Result0_8;
#line 762 "exception.m"
    MR_Word mercury__exception__Detism_28;

#line 762 "exception.m"
    {
#line 762 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_49_2_p_1(&mercury__exception__Detism_28);
    }
#line 763 "exception.m"
    {
#line 763 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_99_99_95_109_117_108_116_105_95_95_91_50_93_95_48_5_p_0(mercury__exception__TypeInfo_for_A_16, mercury__exception__Goal_5, &mercury__exception__Result0_8, mercury__exception__STATE_VARIABLE_STM_0_11, mercury__exception__STATE_VARIABLE_STM_12);
    }
#line 737 "exception.m"
    if (((MR_tag((MR_Word) mercury__exception__Result0_8)) == (MR_mktag((MR_Integer) 2))))
#line 738 "exception.m"
      {
#line 738 "exception.m"
        MR_Word mercury__exception__Exception_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__exception__Result0_8, (MR_Integer) 0)));

#line 743 "exception.m"
        {
#line 743 "exception.m"
          MR_Word mercury__exception__TypeCtorInfo_17_17 = (MR_Word) &mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0;
#line 743 "exception.m"
          MR_Word mercury__exception__V_15_15;
#line 8 "univ.opt"
          MR_Box mercury__exception__conv0_V_15_15;

#line 8 "univ.opt"
          {
#line 8 "univ.opt"
            mercury__exception__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__exception__TypeCtorInfo_17_17, &mercury__exception__conv0_V_15_15, mercury__exception__Exception_10);
          }
#line 8 "univ.opt"
          if (mercury__exception__succeeded)
#line 8 "univ.opt"
            {
#line 8 "univ.opt"
              mercury__exception__V_15_15 = ((MR_Word) mercury__exception__conv0_V_15_15);
#line 8 "univ.opt"
              mercury__exception__succeeded = MR_TRUE;
#line 8 "univ.opt"
            }
#line 743 "exception.m"
          if (mercury__exception__succeeded)
#line 743 "exception.m"
            mercury__exception__succeeded = (mercury__exception__V_15_15 == (MR_Integer) 0);
#line 743 "exception.m"
        }
#line 744 "exception.m"
        if (!(mercury__exception__succeeded))
#line 744 "exception.m"
          {
#line 744 "exception.m"
            MR_Word mercury__exception__TypeCtorInfo_18_18 = (MR_Word) &mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0;
#line 744 "exception.m"
            MR_Word mercury__exception__V_14_14;
#line 8 "univ.opt"
            MR_Box mercury__exception__conv1_V_14_14;

#line 8 "univ.opt"
            {
#line 8 "univ.opt"
              mercury__exception__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__exception__TypeCtorInfo_18_18, &mercury__exception__conv1_V_14_14, mercury__exception__Exception_10);
            }
#line 8 "univ.opt"
            if (mercury__exception__succeeded)
#line 8 "univ.opt"
              {
#line 8 "univ.opt"
                mercury__exception__V_14_14 = ((MR_Word) mercury__exception__conv1_V_14_14);
#line 8 "univ.opt"
                mercury__exception__succeeded = MR_TRUE;
#line 8 "univ.opt"
              }
#line 744 "exception.m"
            if (mercury__exception__succeeded)
#line 744 "exception.m"
              mercury__exception__succeeded = (mercury__exception__V_14_14 == (MR_Integer) 1);
#line 744 "exception.m"
          }
#line 748 "exception.m"
        if (mercury__exception__succeeded)
#line 747 "exception.m"
          {
#line 747 "exception.m"
            mercury__exception__rethrow_1_p_0(mercury__exception__TypeInfo_for_A_16, mercury__exception__Result0_8);
#line 747 "exception.m"
            return;
          }
#line 748 "exception.m"
        else
#line 749 "exception.m"
          *mercury__exception__Result_6 = mercury__exception__Result0_8;
#line 738 "exception.m"
      }
#line 737 "exception.m"
    else
#line 736 "exception.m"
      *mercury__exception__Result_6 = mercury__exception__Result0_8;
#line 732 "exception.m"
  }
#line 226 "exception.m"
}

#line 224 "exception.m"
void MR_CALL 
mercury__exception__try_stm_4_p_0(
#line 224 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_A_16,
#line 224 "exception.m"
  MR_Word mercury__exception__Goal_5,
#line 224 "exception.m"
  MR_Word * mercury__exception__Result_6,
#line 224 "exception.m"
  MR_Box mercury__exception__STATE_VARIABLE_STM_0_11,
#line 224 "exception.m"
  MR_Box * mercury__exception__STATE_VARIABLE_STM_12)
#line 224 "exception.m"
{
#line 732 "exception.m"
  {
#line 732 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 732 "exception.m"
    MR_Word mercury__exception__Result0_8;
#line 757 "exception.m"
    MR_Word mercury__exception__Detism_23;

#line 757 "exception.m"
    {
#line 757 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(&mercury__exception__Detism_23);
    }
#line 758 "exception.m"
    {
#line 758 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_109_95_100_101_116_95_95_91_50_93_95_48_5_p_0(mercury__exception__TypeInfo_for_A_16, mercury__exception__Goal_5, &mercury__exception__Result0_8, mercury__exception__STATE_VARIABLE_STM_0_11, mercury__exception__STATE_VARIABLE_STM_12);
    }
#line 737 "exception.m"
    if (((MR_tag((MR_Word) mercury__exception__Result0_8)) == (MR_mktag((MR_Integer) 2))))
#line 738 "exception.m"
      {
#line 738 "exception.m"
        MR_Word mercury__exception__Exception_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__exception__Result0_8, (MR_Integer) 0)));

#line 743 "exception.m"
        {
#line 743 "exception.m"
          MR_Word mercury__exception__TypeCtorInfo_17_17 = (MR_Word) &mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0;
#line 743 "exception.m"
          MR_Word mercury__exception__V_15_15;
#line 8 "univ.opt"
          MR_Box mercury__exception__conv0_V_15_15;

#line 8 "univ.opt"
          {
#line 8 "univ.opt"
            mercury__exception__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__exception__TypeCtorInfo_17_17, &mercury__exception__conv0_V_15_15, mercury__exception__Exception_10);
          }
#line 8 "univ.opt"
          if (mercury__exception__succeeded)
#line 8 "univ.opt"
            {
#line 8 "univ.opt"
              mercury__exception__V_15_15 = ((MR_Word) mercury__exception__conv0_V_15_15);
#line 8 "univ.opt"
              mercury__exception__succeeded = MR_TRUE;
#line 8 "univ.opt"
            }
#line 743 "exception.m"
          if (mercury__exception__succeeded)
#line 743 "exception.m"
            mercury__exception__succeeded = (mercury__exception__V_15_15 == (MR_Integer) 0);
#line 743 "exception.m"
        }
#line 744 "exception.m"
        if (!(mercury__exception__succeeded))
#line 744 "exception.m"
          {
#line 744 "exception.m"
            MR_Word mercury__exception__TypeCtorInfo_18_18 = (MR_Word) &mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0;
#line 744 "exception.m"
            MR_Word mercury__exception__V_14_14;
#line 8 "univ.opt"
            MR_Box mercury__exception__conv1_V_14_14;

#line 8 "univ.opt"
            {
#line 8 "univ.opt"
              mercury__exception__succeeded = mercury__univ__type_to_univ_2_p_2(mercury__exception__TypeCtorInfo_18_18, &mercury__exception__conv1_V_14_14, mercury__exception__Exception_10);
            }
#line 8 "univ.opt"
            if (mercury__exception__succeeded)
#line 8 "univ.opt"
              {
#line 8 "univ.opt"
                mercury__exception__V_14_14 = ((MR_Word) mercury__exception__conv1_V_14_14);
#line 8 "univ.opt"
                mercury__exception__succeeded = MR_TRUE;
#line 8 "univ.opt"
              }
#line 744 "exception.m"
            if (mercury__exception__succeeded)
#line 744 "exception.m"
              mercury__exception__succeeded = (mercury__exception__V_14_14 == (MR_Integer) 1);
#line 744 "exception.m"
          }
#line 748 "exception.m"
        if (mercury__exception__succeeded)
#line 747 "exception.m"
          {
#line 747 "exception.m"
            mercury__exception__rethrow_1_p_0(mercury__exception__TypeInfo_for_A_16, mercury__exception__Result0_8);
#line 747 "exception.m"
            return;
          }
#line 748 "exception.m"
        else
#line 749 "exception.m"
          *mercury__exception__Result_6 = mercury__exception__Result0_8;
#line 738 "exception.m"
      }
#line 737 "exception.m"
    else
#line 736 "exception.m"
      *mercury__exception__Result_6 = mercury__exception__Result0_8;
#line 732 "exception.m"
  }
#line 224 "exception.m"
}

#line 207 "exception.m"
void MR_CALL 
mercury__exception__throw_if_near_stack_limits_0_p_0(void)
#line 207 "exception.m"
{
#line 2886 "exception.m"
  {
#line 2886 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 2884 "exception.m"
    {
#line 2884 "exception.m"
      mercury__exception__succeeded = mercury__exception__now_near_stack_limits_0_p_0();
    }
#line 2886 "exception.m"
    if (mercury__exception__succeeded)
#line 2885 "exception.m"
      {
#line 2885 "exception.m"
        MR_Word mercury__exception__TypeCtorInfo_2_2;

#line 2885 "exception.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 12499 "exception.c"
        mercury__exception__TypeCtorInfo_2_2 = (MR_Word) &mercury__exception__exception__type_ctor_info_near_stack_limits_0;
#line 2885 "exception.m"
        {
#line 2885 "exception.m"
          mercury__exception__throw_1_p_0(mercury__exception__TypeCtorInfo_2_2, ((MR_Box) ((MR_Integer) 0)));
#line 2885 "exception.m"
          return;
        }
#line 2885 "exception.m"
      }
#line 2886 "exception.m"
    else
#line 2887 "exception.m"
      {
#line 2887 "exception.m"
      }
#line 2886 "exception.m"
  }
#line 207 "exception.m"
}

#line 190 "exception.m"
void MR_CALL 
mercury__exception__finally_6_p_1(
#line 190 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_23,
#line 190 "exception.m"
  MR_Word mercury__exception__P_1,
#line 190 "exception.m"
  MR_Box * mercury__exception__PRes_2,
#line 190 "exception.m"
  MR_Word mercury__exception__Cleanup_3,
#line 190 "exception.m"
  MR_Word * mercury__exception__CleanupRes_4)
#line 190 "exception.m"
{
#line 432 "exception.m"
  {
#line 432 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 432 "exception.m"
    {
#line 432 "exception.m"
      mercury__exception__finally_2_6_p_1(mercury__exception__TypeInfo_for_T_23, mercury__exception__P_1, mercury__exception__Cleanup_3, mercury__exception__PRes_2, mercury__exception__CleanupRes_4);
#line 432 "exception.m"
      return;
    }
#line 432 "exception.m"
  }
#line 190 "exception.m"
}

#line 188 "exception.m"
void MR_CALL 
mercury__exception__finally_6_p_0(
#line 188 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_23,
#line 188 "exception.m"
  MR_Word mercury__exception__P_1,
#line 188 "exception.m"
  MR_Box * mercury__exception__PRes_2,
#line 188 "exception.m"
  MR_Word mercury__exception__Cleanup_3,
#line 188 "exception.m"
  MR_Word * mercury__exception__CleanupRes_4)
#line 188 "exception.m"
{
#line 426 "exception.m"
  {
#line 426 "exception.m"
    MR_bool mercury__exception__succeeded;

#line 427 "exception.m"
    {
#line 427 "exception.m"
      mercury__exception__finally_2_6_p_0(mercury__exception__TypeInfo_for_T_23, mercury__exception__P_1, mercury__exception__Cleanup_3, mercury__exception__PRes_2, mercury__exception__CleanupRes_4);
#line 427 "exception.m"
      return;
    }
#line 426 "exception.m"
  }
#line 188 "exception.m"
}

#line 175 "exception.m"
MR_Box MR_CALL 
mercury__exception__rethrow_1_f_0(
#line 175 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 175 "exception.m"
  MR_Word mercury__exception__TypeInfo_6_6,
#line 175 "exception.m"
  MR_Word mercury__exception__ExceptionResult_3)
#line 175 "exception.m"
{
#line 420 "exception.m"
  {
#line 420 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 420 "exception.m"
    MR_Box mercury__exception__HeadVar__2_4;

#line 420 "exception.m"
    {
#line 420 "exception.m"
      mercury__exception__rethrow_1_p_0(mercury__exception__TypeInfo_for_T_5, mercury__exception__ExceptionResult_3);
    }
#line 420 "exception.m"
    return mercury__exception__HeadVar__2_4;
#line 420 "exception.m"
  }
#line 175 "exception.m"
}

#line 172 "exception.m"
void MR_CALL 
mercury__exception__rethrow_1_p_0(
#line 172 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_3,
#line 172 "exception.m"
  MR_Word mercury__exception__HeadVar__1_1)
#line 172 "exception.m"
{
#line 416 "exception.m"
  {
#line 416 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 416 "exception.m"
    MR_Word mercury__exception__Univ_2 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__exception__HeadVar__1_1, (MR_Integer) 0)));

#line 853 "exception.m"
    {
#line 853 "exception.m"
      mercury__exception__builtin_throw_1_p_0(mercury__exception__Univ_2);
#line 853 "exception.m"
      return;
    }
#line 416 "exception.m"
  }
#line 172 "exception.m"
}

#line 613 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_1_3(
#line 613 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 613 "exception.m"
{
#line 613 "exception.m"
  {
#line 613 "exception.m"
    struct mercury__exception__incremental_try_all_4_p_1_4_env_0_s * mercury__exception__env_ptr = (struct mercury__exception__incremental_try_all_4_p_1_4_env_0_s *) mercury__exception__env_ptr_arg;

#line 613 "exception.m"
    *((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_1_4_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_1_4_env_0__conv1_HeadVar__3_15));
#line 613 "exception.m"
    {
#line 613 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_1_4_env_0__cont)((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_1_4_env_0__cont_env_ptr);
#line 613 "exception.m"
      return;
    }
#line 613 "exception.m"
  }
#line 613 "exception.m"
}

#line 613 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_1_4(
#line 613 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 613 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 613 "exception.m"
  MR_Cont mercury__exception__cont,
#line 613 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 613 "exception.m"
{
#line 613 "exception.m"
  {
#line 613 "exception.m"
    struct mercury__exception__incremental_try_all_4_p_1_4_env_0_s mercury__exception__env;

#line 613 "exception.m"
    (mercury__exception__env).mercury__exception__incremental_try_all_4_p_1_4_env_0__wrapper_arg_1 = mercury__exception__wrapper_arg_1;
#line 613 "exception.m"
    (mercury__exception__env).mercury__exception__incremental_try_all_4_p_1_4_env_0__cont = mercury__exception__cont;
#line 613 "exception.m"
    (mercury__exception__env).mercury__exception__incremental_try_all_4_p_1_4_env_0__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 613 "exception.m"
    {
#line 613 "exception.m"
      MR_Box mercury__exception__closure = mercury__exception__closure_arg;

#line 613 "exception.m"
      {
#line 613 "exception.m"
        mercury__exception__IntroducedFrom__pred__incremental_try_all__613__2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &(mercury__exception__env).mercury__exception__incremental_try_all_4_p_1_4_env_0__conv1_HeadVar__3_15, mercury__exception__incremental_try_all_4_p_1_3, &mercury__exception__env);
      }
#line 613 "exception.m"
    }
#line 613 "exception.m"
  }
#line 613 "exception.m"
}

#line 610 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_1_1(
#line 610 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 610 "exception.m"
{
#line 610 "exception.m"
  {
#line 610 "exception.m"
    struct mercury__exception__incremental_try_all_4_p_1_2_env_0_s * mercury__exception__env_ptr = (struct mercury__exception__incremental_try_all_4_p_1_2_env_0_s *) mercury__exception__env_ptr_arg;

#line 610 "exception.m"
    *((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_1_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_1_2_env_0__conv0_HeadVar__2_2));
#line 610 "exception.m"
    {
#line 610 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_1_2_env_0__cont)((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_1_2_env_0__cont_env_ptr);
#line 610 "exception.m"
      return;
    }
#line 610 "exception.m"
  }
#line 610 "exception.m"
}

#line 610 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_1_2(
#line 610 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 610 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 610 "exception.m"
  MR_Cont mercury__exception__cont,
#line 610 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 610 "exception.m"
{
#line 610 "exception.m"
  {
#line 610 "exception.m"
    struct mercury__exception__incremental_try_all_4_p_1_2_env_0_s mercury__exception__env;

#line 610 "exception.m"
    (mercury__exception__env).mercury__exception__incremental_try_all_4_p_1_2_env_0__wrapper_arg_1 = mercury__exception__wrapper_arg_1;
#line 610 "exception.m"
    (mercury__exception__env).mercury__exception__incremental_try_all_4_p_1_2_env_0__cont = mercury__exception__cont;
#line 610 "exception.m"
    (mercury__exception__env).mercury__exception__incremental_try_all_4_p_1_2_env_0__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 610 "exception.m"
    {
#line 610 "exception.m"
      MR_Box mercury__exception__closure = mercury__exception__closure_arg;

#line 610 "exception.m"
      {
#line 610 "exception.m"
        mercury__exception__wrap_success_2_p_3(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &(mercury__exception__env).mercury__exception__incremental_try_all_4_p_1_2_env_0__conv0_HeadVar__2_2, mercury__exception__incremental_try_all_4_p_1_1, &mercury__exception__env);
      }
#line 610 "exception.m"
    }
#line 610 "exception.m"
  }
#line 610 "exception.m"
}

#line 164 "exception.m"
void MR_CALL 
mercury__exception__incremental_try_all_4_p_1(
#line 164 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_20,
#line 164 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_A_21,
#line 164 "exception.m"
  MR_Word mercury__exception__Goal_5,
#line 164 "exception.m"
  MR_Word mercury__exception__AccPred_6,
#line 164 "exception.m"
  MR_Box mercury__exception__STATE_VARIABLE_Acc_0_12,
#line 164 "exception.m"
  MR_Box * mercury__exception__STATE_VARIABLE_Acc_13)
#line 164 "exception.m"
{
#line 609 "exception.m"
  {
#line 609 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 609 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_26_26;
#line 609 "exception.m"
    MR_Word mercury__exception__TypeInfo_27_27;
#line 609 "exception.m"
    MR_Word mercury__exception__WrappedGoal_8;
#line 609 "exception.m"
    MR_Word mercury__exception__TryOneSoln_10;
#line 609 "exception.m"
    MR_Box mercury__exception__STATE_VARIABLE_Acc_10_10_32;
#line 103 "builtin.opt"
    MR_Word mercury__exception__TypeInfo_for_A_34;

#line 610 "exception.m"
    {
#line 610 "exception.m"
      mercury__exception__WrappedGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 610 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_8, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 610 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_8, 1) = ((MR_Box) (mercury__exception__incremental_try_all_4_p_1_2));
#line 610 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 610 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_8, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_20));
#line 610 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_8, 4) = ((MR_Box) (mercury__exception__Goal_5));
#line 610 "exception.m"
    }
#line 613 "exception.m"
    {
#line 613 "exception.m"
      mercury__exception__TryOneSoln_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 613 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_10, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[2]));
#line 613 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_10, 1) = ((MR_Box) (mercury__exception__incremental_try_all_4_p_1_4));
#line 613 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 613 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_10, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_20));
#line 613 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_10, 4) = ((MR_Box) (mercury__exception__WrappedGoal_8));
#line 613 "exception.m"
    }
#line 12843 "exception.c"
    mercury__exception__TypeCtorInfo_26_26 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 12845 "exception.c"
    {
#line 12847 "exception.c"
      mercury__exception__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12849 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_27_27, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_26_26));
#line 12851 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_27_27, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_20));
#line 12853 "exception.c"
    }
#line 62 "solutions.opt"
    {
#line 62 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_7(mercury__exception__TypeInfo_27_27, mercury__exception__TypeInfo_for_A_21, (MR_Word) mercury__exception__TryOneSoln_10, (MR_Word) mercury__exception__AccPred_6, mercury__exception__STATE_VARIABLE_Acc_0_12, &mercury__exception__STATE_VARIABLE_Acc_10_10_32);
    }
#line 103 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__incremental_try_all_4_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__exception__STATE_VARIABLE_Acc_10_10_32 ;
		{
#line 103 "builtin.opt"

    Y = X;

#line 12873 "exception.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__exception__STATE_VARIABLE_Acc_13  = (MR_Box) Y;
#line 103 "builtin.opt"
}
#line 609 "exception.m"
  }
#line 164 "exception.m"
}

#line 613 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_0_3(
#line 613 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 613 "exception.m"
{
#line 613 "exception.m"
  {
#line 613 "exception.m"
    struct mercury__exception__incremental_try_all_4_p_0_4_env_0_s * mercury__exception__env_ptr = (struct mercury__exception__incremental_try_all_4_p_0_4_env_0_s *) mercury__exception__env_ptr_arg;

#line 613 "exception.m"
    *((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_0_4_env_0__conv1_HeadVar__3_15));
#line 613 "exception.m"
    {
#line 613 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_0_4_env_0__cont)((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_0_4_env_0__cont_env_ptr);
#line 613 "exception.m"
      return;
    }
#line 613 "exception.m"
  }
#line 613 "exception.m"
}

#line 613 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_0_4(
#line 613 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 613 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 613 "exception.m"
  MR_Cont mercury__exception__cont,
#line 613 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 613 "exception.m"
{
#line 613 "exception.m"
  {
#line 613 "exception.m"
    struct mercury__exception__incremental_try_all_4_p_0_4_env_0_s mercury__exception__env;

#line 613 "exception.m"
    (mercury__exception__env).mercury__exception__incremental_try_all_4_p_0_4_env_0__wrapper_arg_1 = mercury__exception__wrapper_arg_1;
#line 613 "exception.m"
    (mercury__exception__env).mercury__exception__incremental_try_all_4_p_0_4_env_0__cont = mercury__exception__cont;
#line 613 "exception.m"
    (mercury__exception__env).mercury__exception__incremental_try_all_4_p_0_4_env_0__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 613 "exception.m"
    {
#line 613 "exception.m"
      MR_Box mercury__exception__closure = mercury__exception__closure_arg;

#line 613 "exception.m"
      {
#line 613 "exception.m"
        mercury__exception__IntroducedFrom__pred__incremental_try_all__613__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &(mercury__exception__env).mercury__exception__incremental_try_all_4_p_0_4_env_0__conv1_HeadVar__3_15, mercury__exception__incremental_try_all_4_p_0_3, &mercury__exception__env);
      }
#line 613 "exception.m"
    }
#line 613 "exception.m"
  }
#line 613 "exception.m"
}

#line 610 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_0_1(
#line 610 "exception.m"
  void * mercury__exception__env_ptr_arg)
#line 610 "exception.m"
{
#line 610 "exception.m"
  {
#line 610 "exception.m"
    struct mercury__exception__incremental_try_all_4_p_0_2_env_0_s * mercury__exception__env_ptr = (struct mercury__exception__incremental_try_all_4_p_0_2_env_0_s *) mercury__exception__env_ptr_arg;

#line 610 "exception.m"
    *((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_0_2_env_0__conv0_HeadVar__2_2));
#line 610 "exception.m"
    {
#line 610 "exception.m"
      ((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_0_2_env_0__cont)((mercury__exception__env_ptr)->mercury__exception__incremental_try_all_4_p_0_2_env_0__cont_env_ptr);
#line 610 "exception.m"
      return;
    }
#line 610 "exception.m"
  }
#line 610 "exception.m"
}

#line 610 "exception.m"
static void MR_CALL 
mercury__exception__incremental_try_all_4_p_0_2(
#line 610 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 610 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1,
#line 610 "exception.m"
  MR_Cont mercury__exception__cont,
#line 610 "exception.m"
  void * mercury__exception__cont_env_ptr)
#line 610 "exception.m"
{
#line 610 "exception.m"
  {
#line 610 "exception.m"
    struct mercury__exception__incremental_try_all_4_p_0_2_env_0_s mercury__exception__env;

#line 610 "exception.m"
    (mercury__exception__env).mercury__exception__incremental_try_all_4_p_0_2_env_0__wrapper_arg_1 = mercury__exception__wrapper_arg_1;
#line 610 "exception.m"
    (mercury__exception__env).mercury__exception__incremental_try_all_4_p_0_2_env_0__cont = mercury__exception__cont;
#line 610 "exception.m"
    (mercury__exception__env).mercury__exception__incremental_try_all_4_p_0_2_env_0__cont_env_ptr = mercury__exception__cont_env_ptr;
#line 610 "exception.m"
    {
#line 610 "exception.m"
      MR_Box mercury__exception__closure = mercury__exception__closure_arg;

#line 610 "exception.m"
      {
#line 610 "exception.m"
        mercury__exception__wrap_success_2_p_3(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &(mercury__exception__env).mercury__exception__incremental_try_all_4_p_0_2_env_0__conv0_HeadVar__2_2, mercury__exception__incremental_try_all_4_p_0_1, &mercury__exception__env);
      }
#line 610 "exception.m"
    }
#line 610 "exception.m"
  }
#line 610 "exception.m"
}

#line 162 "exception.m"
void MR_CALL 
mercury__exception__incremental_try_all_4_p_0(
#line 162 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_20,
#line 162 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_A_21,
#line 162 "exception.m"
  MR_Word mercury__exception__Goal_5,
#line 162 "exception.m"
  MR_Word mercury__exception__AccPred_6,
#line 162 "exception.m"
  MR_Box mercury__exception__STATE_VARIABLE_Acc_0_12,
#line 162 "exception.m"
  MR_Box * mercury__exception__STATE_VARIABLE_Acc_13)
#line 162 "exception.m"
{
#line 609 "exception.m"
  {
#line 609 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 609 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_26_26;
#line 609 "exception.m"
    MR_Word mercury__exception__TypeInfo_27_27;
#line 609 "exception.m"
    MR_Word mercury__exception__WrappedGoal_8;
#line 609 "exception.m"
    MR_Word mercury__exception__TryOneSoln_10;
#line 609 "exception.m"
    MR_Box mercury__exception__STATE_VARIABLE_Acc_10_10_32;
#line 100 "builtin.opt"
    MR_Word mercury__exception__TypeInfo_for_A_34;

#line 610 "exception.m"
    {
#line 610 "exception.m"
      mercury__exception__WrappedGoal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 610 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_8, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 610 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_8, 1) = ((MR_Box) (mercury__exception__incremental_try_all_4_p_0_2));
#line 610 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 610 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_8, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_20));
#line 610 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_8, 4) = ((MR_Box) (mercury__exception__Goal_5));
#line 610 "exception.m"
    }
#line 613 "exception.m"
    {
#line 613 "exception.m"
      mercury__exception__TryOneSoln_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 613 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_10, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[2]));
#line 613 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_10, 1) = ((MR_Box) (mercury__exception__incremental_try_all_4_p_0_4));
#line 613 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 613 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_10, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_20));
#line 613 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__TryOneSoln_10, 4) = ((MR_Box) (mercury__exception__WrappedGoal_8));
#line 613 "exception.m"
    }
#line 13085 "exception.c"
    mercury__exception__TypeCtorInfo_26_26 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 13087 "exception.c"
    {
#line 13089 "exception.c"
      mercury__exception__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13091 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_27_27, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_26_26));
#line 13093 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_27_27, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_20));
#line 13095 "exception.c"
    }
#line 62 "solutions.opt"
    {
#line 62 "solutions.opt"
      mercury__solutions__builtin_aggregate_4_p_5(mercury__exception__TypeInfo_27_27, mercury__exception__TypeInfo_for_A_21, (MR_Word) mercury__exception__TryOneSoln_10, (MR_Word) mercury__exception__AccPred_6, mercury__exception__STATE_VARIABLE_Acc_0_12, &mercury__exception__STATE_VARIABLE_Acc_10_10_32);
    }
#line 100 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__incremental_try_all_4_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) mercury__exception__STATE_VARIABLE_Acc_10_10_32 ;
		{
#line 100 "builtin.opt"

    Y = X;

#line 13115 "exception.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__exception__STATE_VARIABLE_Acc_13  = (MR_Box) Y;
#line 100 "builtin.opt"
}
#line 609 "exception.m"
  }
#line 162 "exception.m"
}

#line 136 "exception.m"
void MR_CALL 
mercury__exception__try_all_3_p_3(
#line 136 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_8,
#line 136 "exception.m"
  MR_Word mercury__exception__Goal_4,
#line 136 "exception.m"
  MR_Word * mercury__exception__MaybeException_5,
#line 136 "exception.m"
  MR_Word * mercury__exception__Solutions_6)
#line 136 "exception.m"
{
#line 545 "exception.m"
  {
#line 545 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 546 "exception.m"
    MR_Word mercury__exception__Detism_7;

#line 546 "exception.m"
    {
#line 546 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_51_2_p_3(&mercury__exception__Detism_7);
    }
#line 547 "exception.m"
    {
#line 547 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_51_4_p_3(mercury__exception__TypeInfo_for_T_8, mercury__exception__Goal_4, mercury__exception__MaybeException_5, mercury__exception__Solutions_6);
#line 547 "exception.m"
      return;
    }
#line 545 "exception.m"
  }
#line 136 "exception.m"
}

#line 135 "exception.m"
void MR_CALL 
mercury__exception__try_all_3_p_2(
#line 135 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_8,
#line 135 "exception.m"
  MR_Word mercury__exception__Goal_4,
#line 135 "exception.m"
  MR_Word * mercury__exception__MaybeException_5,
#line 135 "exception.m"
  MR_Word * mercury__exception__Solutions_6)
#line 135 "exception.m"
{
#line 545 "exception.m"
  {
#line 545 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 546 "exception.m"
    MR_Word mercury__exception__Detism_7;

#line 546 "exception.m"
    {
#line 546 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_50_2_p_2(&mercury__exception__Detism_7);
    }
#line 547 "exception.m"
    {
#line 547 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_50_4_p_2(mercury__exception__TypeInfo_for_T_8, mercury__exception__Goal_4, mercury__exception__MaybeException_5, mercury__exception__Solutions_6);
#line 547 "exception.m"
      return;
    }
#line 545 "exception.m"
  }
#line 135 "exception.m"
}

#line 133 "exception.m"
void MR_CALL 
mercury__exception__try_all_3_p_1(
#line 133 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_8,
#line 133 "exception.m"
  MR_Word mercury__exception__Goal_4,
#line 133 "exception.m"
  MR_Word * mercury__exception__MaybeException_5,
#line 133 "exception.m"
  MR_Word * mercury__exception__Solutions_6)
#line 133 "exception.m"
{
#line 545 "exception.m"
  {
#line 545 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 546 "exception.m"
    MR_Word mercury__exception__Detism_7;

#line 546 "exception.m"
    {
#line 546 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_49_2_p_1(&mercury__exception__Detism_7);
    }
#line 547 "exception.m"
    {
#line 547 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_49_4_p_1(mercury__exception__TypeInfo_for_T_8, mercury__exception__Goal_4, mercury__exception__MaybeException_5, mercury__exception__Solutions_6);
#line 547 "exception.m"
      return;
    }
#line 545 "exception.m"
  }
#line 133 "exception.m"
}

#line 131 "exception.m"
void MR_CALL 
mercury__exception__try_all_3_p_0(
#line 131 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_8,
#line 131 "exception.m"
  MR_Word mercury__exception__Goal_4,
#line 131 "exception.m"
  MR_Word * mercury__exception__MaybeException_5,
#line 131 "exception.m"
  MR_Word * mercury__exception__Solutions_6)
#line 131 "exception.m"
{
#line 545 "exception.m"
  {
#line 545 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 546 "exception.m"
    MR_Word mercury__exception__Detism_7;

#line 546 "exception.m"
    {
#line 546 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_48_2_p_0(&mercury__exception__Detism_7);
    }
#line 547 "exception.m"
    {
#line 547 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_97_108_108_95_100_101_116_95_95_91_50_93_95_48_4_p_0(mercury__exception__TypeInfo_for_T_8, mercury__exception__Goal_4, mercury__exception__MaybeException_5, mercury__exception__Solutions_6);
#line 547 "exception.m"
      return;
    }
#line 545 "exception.m"
  }
#line 131 "exception.m"
}

#line 109 "exception.m"
void MR_CALL 
mercury__exception__try_store_4_p_1(
#line 109 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_12,
#line 109 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_S_13,
#line 109 "exception.m"
  MR_Word mercury__exception__StoreGoal_5,
#line 109 "exception.m"
  MR_Word * mercury__exception__Result_6)
#line 109 "exception.m"
{
#line 620 "exception.m"
  {
#line 620 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 621 "exception.m"
    MR_Word mercury__exception__Detism_8;

#line 621 "exception.m"
    {
#line 621 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_49_2_p_1(&mercury__exception__Detism_8);
    }
#line 622 "exception.m"
    {
#line 622 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_111_114_101_95_100_101_116_95_95_91_51_93_95_49_5_p_1(mercury__exception__TypeInfo_for_T_12, mercury__exception__TypeInfo_for_S_13, mercury__exception__StoreGoal_5, mercury__exception__Result_6);
#line 622 "exception.m"
      return;
    }
#line 620 "exception.m"
  }
#line 109 "exception.m"
}

#line 107 "exception.m"
void MR_CALL 
mercury__exception__try_store_4_p_0(
#line 107 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_12,
#line 107 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_S_13,
#line 107 "exception.m"
  MR_Word mercury__exception__StoreGoal_5,
#line 107 "exception.m"
  MR_Word * mercury__exception__Result_6)
#line 107 "exception.m"
{
#line 620 "exception.m"
  {
#line 620 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 621 "exception.m"
    MR_Word mercury__exception__Detism_8;

#line 621 "exception.m"
    {
#line 621 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(&mercury__exception__Detism_8);
    }
#line 622 "exception.m"
    {
#line 622 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_115_116_111_114_101_95_100_101_116_95_95_91_51_93_95_48_5_p_0(mercury__exception__TypeInfo_for_T_12, mercury__exception__TypeInfo_for_S_13, mercury__exception__StoreGoal_5, mercury__exception__Result_6);
#line 622 "exception.m"
      return;
    }
#line 620 "exception.m"
  }
#line 107 "exception.m"
}

#line 98 "exception.m"
void MR_CALL 
mercury__exception__try_io_4_p_1(
#line 98 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_12,
#line 98 "exception.m"
  MR_Word mercury__exception__IO_Goal_5,
#line 98 "exception.m"
  MR_Word * mercury__exception__Result_6)
#line 98 "exception.m"
{
#line 668 "exception.m"
  {
#line 668 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 669 "exception.m"
    MR_Word mercury__exception__Detism_8;

#line 669 "exception.m"
    {
#line 669 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_49_2_p_1(&mercury__exception__Detism_8);
    }
#line 670 "exception.m"
    {
#line 670 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_49_5_p_1(mercury__exception__TypeInfo_for_T_12, mercury__exception__IO_Goal_5, mercury__exception__Result_6);
#line 670 "exception.m"
      return;
    }
#line 668 "exception.m"
  }
#line 98 "exception.m"
}

#line 96 "exception.m"
void MR_CALL 
mercury__exception__try_io_4_p_0(
#line 96 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_12,
#line 96 "exception.m"
  MR_Word mercury__exception__IO_Goal_5,
#line 96 "exception.m"
  MR_Word * mercury__exception__Result_6)
#line 96 "exception.m"
{
#line 668 "exception.m"
  {
#line 668 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 669 "exception.m"
    MR_Word mercury__exception__Detism_8;

#line 669 "exception.m"
    {
#line 669 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_50_95_95_91_49_44_32_50_44_32_51_93_95_48_2_p_0(&mercury__exception__Detism_8);
    }
#line 670 "exception.m"
    {
#line 670 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_121_95_105_111_95_100_101_116_95_95_91_50_93_95_48_5_p_0(mercury__exception__TypeInfo_for_T_12, mercury__exception__IO_Goal_5, mercury__exception__Result_6);
#line 670 "exception.m"
      return;
    }
#line 668 "exception.m"
  }
#line 96 "exception.m"
}

#line 541 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_3_2(
#line 541 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 541 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 541 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 541 "exception.m"
{
#line 541 "exception.m"
  {
#line 541 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 541 "exception.m"
    MR_Word mercury__exception__conv1_HeadVar__2_2;

#line 541 "exception.m"
    {
#line 541 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv1_HeadVar__2_2);
    }
#line 541 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv1_HeadVar__2_2));
#line 541 "exception.m"
  }
#line 541 "exception.m"
}

#line 538 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_3_1(
#line 538 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 538 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 538 "exception.m"
{
#line 538 "exception.m"
  {
#line 538 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 538 "exception.m"
    MR_Word mercury__exception__conv0_Result_4;

#line 538 "exception.m"
    {
#line 538 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_3(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv0_Result_4);
    }
#line 538 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_Result_4));
#line 538 "exception.m"
  }
#line 538 "exception.m"
}

#line 77 "exception.m"
void MR_CALL 
mercury__exception__try_2_p_3(
#line 77 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_6,
#line 77 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 77 "exception.m"
  MR_Word * mercury__exception__Result_4)
#line 77 "exception.m"
{
#line 516 "exception.m"
  {
#line 516 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 516 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_49_51;
#line 516 "exception.m"
    MR_Word mercury__exception__TypeInfo_50_52;
#line 516 "exception.m"
    MR_Word mercury__exception__WrappedGoal_32;
#line 516 "exception.m"
    MR_Word mercury__exception__V_35_35;
#line 517 "exception.m"
    MR_Word mercury__exception__Detism_5;
#line 860 "exception.m"
    MR_Box mercury__exception__conv2_Result_4;

#line 517 "exception.m"
    {
#line 517 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_53_2_p_5(&mercury__exception__Detism_5);
    }
#line 538 "exception.m"
    {
#line 538 "exception.m"
      mercury__exception__WrappedGoal_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 538 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_32, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 538 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_32, 1) = ((MR_Box) (mercury__exception__try_2_p_3_1));
#line 538 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 538 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_32, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 538 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_32, 4) = ((MR_Box) (mercury__exception__Goal_3));
#line 538 "exception.m"
    }
#line 541 "exception.m"
    {
#line 541 "exception.m"
      mercury__exception__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 541 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_35_35, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 541 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_35_35, 1) = ((MR_Box) (mercury__exception__try_2_p_3_2));
#line 541 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 541 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_35_35, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 541 "exception.m"
    }
#line 13540 "exception.c"
    mercury__exception__TypeCtorInfo_49_51 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 13542 "exception.c"
    {
#line 13544 "exception.c"
      mercury__exception__TypeInfo_50_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13546 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_50_52, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_49_51));
#line 13548 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_50_52, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 13550 "exception.c"
    }
#line 860 "exception.m"
    {
#line 860 "exception.m"
      mercury__exception__builtin_catch_3_p_2(mercury__exception__TypeInfo_50_52, (MR_Word) mercury__exception__WrappedGoal_32, (MR_Word) mercury__exception__V_35_35, &mercury__exception__conv2_Result_4);
    }
#line 860 "exception.m"
    *mercury__exception__Result_4 = ((MR_Word) mercury__exception__conv2_Result_4);
#line 516 "exception.m"
  }
#line 77 "exception.m"
}

#line 536 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_2_2(
#line 536 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 536 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 536 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 536 "exception.m"
{
#line 536 "exception.m"
  {
#line 536 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 536 "exception.m"
    MR_Word mercury__exception__conv1_HeadVar__2_2;

#line 536 "exception.m"
    {
#line 536 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv1_HeadVar__2_2);
    }
#line 536 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv1_HeadVar__2_2));
#line 536 "exception.m"
  }
#line 536 "exception.m"
}

#line 533 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_2_1(
#line 533 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 533 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 533 "exception.m"
{
#line 533 "exception.m"
  {
#line 533 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 533 "exception.m"
    MR_Word mercury__exception__conv0_Result_4;

#line 533 "exception.m"
    {
#line 533 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_2(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv0_Result_4);
    }
#line 533 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_Result_4));
#line 533 "exception.m"
  }
#line 533 "exception.m"
}

#line 76 "exception.m"
void MR_CALL 
mercury__exception__try_2_p_2(
#line 76 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_6,
#line 76 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 76 "exception.m"
  MR_Word * mercury__exception__Result_4)
#line 76 "exception.m"
{
#line 516 "exception.m"
  {
#line 516 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 516 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_45_47;
#line 516 "exception.m"
    MR_Word mercury__exception__TypeInfo_46_48;
#line 516 "exception.m"
    MR_Word mercury__exception__WrappedGoal_25;
#line 516 "exception.m"
    MR_Word mercury__exception__V_28_28;
#line 517 "exception.m"
    MR_Word mercury__exception__Detism_5;
#line 860 "exception.m"
    MR_Box mercury__exception__conv2_Result_4;

#line 517 "exception.m"
    {
#line 517 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_52_2_p_4(&mercury__exception__Detism_5);
    }
#line 533 "exception.m"
    {
#line 533 "exception.m"
      mercury__exception__WrappedGoal_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_25, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_25, 1) = ((MR_Box) (mercury__exception__try_2_p_2_1));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_25, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 533 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_25, 4) = ((MR_Box) (mercury__exception__Goal_3));
#line 533 "exception.m"
    }
#line 536 "exception.m"
    {
#line 536 "exception.m"
      mercury__exception__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_28_28, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_28_28, 1) = ((MR_Box) (mercury__exception__try_2_p_2_2));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_28_28, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 536 "exception.m"
    }
#line 13685 "exception.c"
    mercury__exception__TypeCtorInfo_45_47 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 13687 "exception.c"
    {
#line 13689 "exception.c"
      mercury__exception__TypeInfo_46_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13691 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_46_48, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_45_47));
#line 13693 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_46_48, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 13695 "exception.c"
    }
#line 860 "exception.m"
    {
#line 860 "exception.m"
      mercury__exception__builtin_catch_3_p_2(mercury__exception__TypeInfo_46_48, (MR_Word) mercury__exception__WrappedGoal_25, (MR_Word) mercury__exception__V_28_28, &mercury__exception__conv2_Result_4);
    }
#line 860 "exception.m"
    *mercury__exception__Result_4 = ((MR_Word) mercury__exception__conv2_Result_4);
#line 516 "exception.m"
  }
#line 76 "exception.m"
}

#line 530 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_1_2(
#line 530 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 530 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 530 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 530 "exception.m"
{
#line 530 "exception.m"
  {
#line 530 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 530 "exception.m"
    MR_Word mercury__exception__conv1_HeadVar__2_2;

#line 530 "exception.m"
    {
#line 530 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv1_HeadVar__2_2);
    }
#line 530 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv1_HeadVar__2_2));
#line 530 "exception.m"
  }
#line 530 "exception.m"
}

#line 527 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_1_1(
#line 527 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 527 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 527 "exception.m"
{
#line 527 "exception.m"
  {
#line 527 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 527 "exception.m"
    MR_Word mercury__exception__conv0_Result_4;

#line 527 "exception.m"
    {
#line 527 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_1(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv0_Result_4);
    }
#line 527 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_Result_4));
#line 527 "exception.m"
  }
#line 527 "exception.m"
}

#line 75 "exception.m"
void MR_CALL 
mercury__exception__try_2_p_1(
#line 75 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_6,
#line 75 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 75 "exception.m"
  MR_Word * mercury__exception__Result_4)
#line 75 "exception.m"
{
#line 516 "exception.m"
  {
#line 516 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 516 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_41_43;
#line 516 "exception.m"
    MR_Word mercury__exception__TypeInfo_42_44;
#line 516 "exception.m"
    MR_Word mercury__exception__WrappedGoal_17;
#line 516 "exception.m"
    MR_Word mercury__exception__Result0_19;
#line 516 "exception.m"
    MR_Word mercury__exception__V_21_21;
#line 517 "exception.m"
    MR_Word mercury__exception__Detism_5;
#line 856 "exception.m"
    MR_Box mercury__exception__conv2_Result0_19;
#line 103 "builtin.opt"
    MR_Word mercury__exception__TypeInfo_42_71;
#line 103 "builtin.opt"
    MR_Box mercury__exception__conv3_Y;

#line 517 "exception.m"
    {
#line 517 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_49_2_p_1(&mercury__exception__Detism_5);
    }
#line 527 "exception.m"
    {
#line 527 "exception.m"
      mercury__exception__WrappedGoal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 527 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_17, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 527 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_17, 1) = ((MR_Box) (mercury__exception__try_2_p_1_1));
#line 527 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 527 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_17, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 527 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_17, 4) = ((MR_Box) (mercury__exception__Goal_3));
#line 527 "exception.m"
    }
#line 530 "exception.m"
    {
#line 530 "exception.m"
      mercury__exception__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 530 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_21_21, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 530 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_21_21, 1) = ((MR_Box) (mercury__exception__try_2_p_1_2));
#line 530 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 530 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_21_21, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 530 "exception.m"
    }
#line 13836 "exception.c"
    mercury__exception__TypeCtorInfo_41_43 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 13838 "exception.c"
    {
#line 13840 "exception.c"
      mercury__exception__TypeInfo_42_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13842 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_42_44, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_41_43));
#line 13844 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_42_44, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 13846 "exception.c"
    }
#line 856 "exception.m"
    {
#line 856 "exception.m"
      mercury__exception__builtin_catch_3_p_0(mercury__exception__TypeInfo_42_44, (MR_Word) mercury__exception__WrappedGoal_17, (MR_Word) mercury__exception__V_21_21, &mercury__exception__conv2_Result0_19);
    }
#line 856 "exception.m"
    mercury__exception__Result0_19 = ((MR_Word) mercury__exception__conv2_Result0_19);
#line 103 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__try_2_p_1

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__exception__Result0_19)) ;
		{
#line 103 "builtin.opt"

    Y = X;

#line 13868 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv3_Y  = (MR_Box) Y;
#line 103 "builtin.opt"
    *mercury__exception__Result_4 = ((MR_Word) mercury__exception__conv3_Y);
#line 103 "builtin.opt"
}
#line 516 "exception.m"
  }
#line 75 "exception.m"
}

#line 524 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_0_2(
#line 524 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 524 "exception.m"
  MR_Box mercury__exception__wrapper_arg_1,
#line 524 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_2)
#line 524 "exception.m"
{
#line 524 "exception.m"
  {
#line 524 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 524 "exception.m"
    MR_Word mercury__exception__conv1_HeadVar__2_2;

#line 524 "exception.m"
    {
#line 524 "exception.m"
      mercury__exception__wrap_exception_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) mercury__exception__wrapper_arg_1), &mercury__exception__conv1_HeadVar__2_2);
    }
#line 524 "exception.m"
    *mercury__exception__wrapper_arg_2 = ((MR_Box) (mercury__exception__conv1_HeadVar__2_2));
#line 524 "exception.m"
  }
#line 524 "exception.m"
}

#line 521 "exception.m"
static void MR_CALL 
mercury__exception__try_2_p_0_1(
#line 521 "exception.m"
  MR_Box mercury__exception__closure_arg,
#line 521 "exception.m"
  MR_Box * mercury__exception__wrapper_arg_1)
#line 521 "exception.m"
{
#line 521 "exception.m"
  {
#line 521 "exception.m"
    MR_Box mercury__exception__closure = mercury__exception__closure_arg;
#line 521 "exception.m"
    MR_Word mercury__exception__conv0_Result_4;

#line 521 "exception.m"
    {
#line 521 "exception.m"
      mercury__exception__wrap_success_or_failure_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__exception__closure, (MR_Integer) 4))), &mercury__exception__conv0_Result_4);
    }
#line 521 "exception.m"
    *mercury__exception__wrapper_arg_1 = ((MR_Box) (mercury__exception__conv0_Result_4));
#line 521 "exception.m"
  }
#line 521 "exception.m"
}

#line 74 "exception.m"
void MR_CALL 
mercury__exception__try_2_p_0(
#line 74 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_6,
#line 74 "exception.m"
  MR_Word mercury__exception__Goal_3,
#line 74 "exception.m"
  MR_Word * mercury__exception__Result_4)
#line 74 "exception.m"
{
#line 516 "exception.m"
  {
#line 516 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 516 "exception.m"
    MR_Word mercury__exception__TypeCtorInfo_37_39;
#line 516 "exception.m"
    MR_Word mercury__exception__TypeInfo_38_40;
#line 516 "exception.m"
    MR_Word mercury__exception__WrappedGoal_9;
#line 516 "exception.m"
    MR_Word mercury__exception__Result0_11;
#line 516 "exception.m"
    MR_Word mercury__exception__V_13_13;
#line 517 "exception.m"
    MR_Word mercury__exception__Detism_5;
#line 856 "exception.m"
    MR_Box mercury__exception__conv2_Result0_11;
#line 103 "builtin.opt"
    MR_Word mercury__exception__TypeInfo_38_71;
#line 103 "builtin.opt"
    MR_Box mercury__exception__conv3_Y;

#line 517 "exception.m"
    {
#line 517 "exception.m"
      mercury__exception__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_100_101_116_101_114_109_105_110_105_115_109_95_95_91_49_44_32_50_93_95_48_2_p_0(&mercury__exception__Detism_5);
    }
#line 521 "exception.m"
    {
#line 521 "exception.m"
      mercury__exception__WrappedGoal_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_9, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[0]));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_9, 1) = ((MR_Box) (mercury__exception__try_2_p_0_1));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_9, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 521 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__WrappedGoal_9, 4) = ((MR_Box) (mercury__exception__Goal_3));
#line 521 "exception.m"
    }
#line 524 "exception.m"
    {
#line 524 "exception.m"
      mercury__exception__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_13_13, 0) = ((MR_Box) (&mercury__exception_scalar_common_6[1]));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_13_13, 1) = ((MR_Box) (mercury__exception__try_2_p_0_2));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 524 "exception.m"
      MR_hl_field(MR_mktag(0), mercury__exception__V_13_13, 3) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 524 "exception.m"
    }
#line 14009 "exception.c"
    mercury__exception__TypeCtorInfo_37_39 = (MR_Word) &mercury__exception__exception__type_ctor_info_exception_result_1;
#line 14011 "exception.c"
    {
#line 14013 "exception.c"
      mercury__exception__TypeInfo_38_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14015 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_38_40, 0) = ((MR_Box) (mercury__exception__TypeCtorInfo_37_39));
#line 14017 "exception.c"
      MR_hl_field(MR_mktag(0), mercury__exception__TypeInfo_38_40, 1) = ((MR_Box) (mercury__exception__TypeInfo_for_T_6));
#line 14019 "exception.c"
    }
#line 856 "exception.m"
    {
#line 856 "exception.m"
      mercury__exception__builtin_catch_3_p_0(mercury__exception__TypeInfo_38_40, (MR_Word) mercury__exception__WrappedGoal_9, (MR_Word) mercury__exception__V_13_13, &mercury__exception__conv2_Result0_11);
    }
#line 856 "exception.m"
    mercury__exception__Result0_11 = ((MR_Word) mercury__exception__conv2_Result0_11);
#line 103 "builtin.opt"
{
#define MR_PROC_LABEL mercury__exception__try_2_p_0

	MR_Word X;
	MR_Word Y;

	X = (MR_Word) ((MR_Box) (mercury__exception__Result0_11)) ;
		{
#line 103 "builtin.opt"

    Y = X;

#line 14041 "exception.c"

		;}
#undef MR_PROC_LABEL
	 mercury__exception__conv3_Y  = (MR_Box) Y;
#line 103 "builtin.opt"
    *mercury__exception__Result_4 = ((MR_Word) mercury__exception__conv3_Y);
#line 103 "builtin.opt"
}
#line 516 "exception.m"
  }
#line 74 "exception.m"
}

#line 44 "exception.m"
void MR_CALL 
mercury__exception__throw_1_p_0(
#line 44 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_4,
#line 44 "exception.m"
  MR_Box mercury__exception__Exception_2)
#line 44 "exception.m"
{
#line 409 "exception.m"
  {
#line 409 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 409 "exception.m"
    MR_Word mercury__exception__Univ_3;

#line 410 "exception.m"
    {
#line 410 "exception.m"
      mercury__univ__type_to_univ_2_p_1(mercury__exception__TypeInfo_for_T_4, mercury__exception__Exception_2, &mercury__exception__Univ_3);
    }
#line 853 "exception.m"
    {
#line 853 "exception.m"
      mercury__exception__builtin_throw_1_p_0(mercury__exception__Univ_3);
#line 853 "exception.m"
      return;
    }
#line 409 "exception.m"
  }
#line 44 "exception.m"
}

#line 43 "exception.m"
MR_Box MR_CALL 
mercury__exception__throw_1_f_0(
#line 43 "exception.m"
  MR_Word mercury__exception__TypeInfo_for_T_5,
#line 43 "exception.m"
  MR_Word mercury__exception__TypeInfo_6_6,
#line 43 "exception.m"
  MR_Box mercury__exception__Exception_3)
#line 43 "exception.m"
{
#line 414 "exception.m"
  {
#line 414 "exception.m"
    MR_bool mercury__exception__succeeded;
#line 414 "exception.m"
    MR_Box mercury__exception__HeadVar__2_4;

#line 414 "exception.m"
    {
#line 414 "exception.m"
      mercury__exception__throw_1_p_0(mercury__exception__TypeInfo_for_T_5, mercury__exception__Exception_3);
    }
#line 414 "exception.m"
    return mercury__exception__HeadVar__2_4;
#line 414 "exception.m"
  }
#line 43 "exception.m"
}

void mercury__exception__init(void)
{
}

void mercury__exception__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__exception__exception__type_ctor_info_exception_result_1);
	MR_register_type_ctor_info(&mercury__exception__exception__type_ctor_info_exp_determinism_0);
	MR_register_type_ctor_info(&mercury__exception__exception__type_ctor_info_handler_1);
	MR_register_type_ctor_info(&mercury__exception__exception__type_ctor_info_near_stack_limits_0);
	MR_register_type_ctor_info(&mercury__exception__exception__type_ctor_info_software_error_0);
}

void mercury__exception__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__exception__required_init(void)
{
	mercury__exception__user_init_pred_0();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module exception. */
