/*
** Automatically generated from `string.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


/* :- module string. */
/* :- implementation. */

/*
INIT mercury__string__init
ENDINIT
*/

#include "string.mih"
#include "string.mh"


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
#include "exception.mih"
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
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"



#line 4662 "string.m"
struct mercury__string__foldr_between_2_6_p_4_env_0_s {
#line 4662 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18;
#line 4662 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__Closure_7;
#line 4662 "string.m"
  MR_String mercury__string__foldr_between_2_6_p_4_env_0__String_8;
#line 4662 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__Start_9;
#line 4662 "string.m"
  MR_Box * mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
#line 4662 "string.m"
  MR_Cont mercury__string__foldr_between_2_6_p_4_env_0__cont;
#line 4662 "string.m"
  void * mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr;
#line 4673 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__J_12;
#line 4671 "string.m"
  MR_Box mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
#line 4662 "string.m"
};

#line 4660 "string.m"
struct mercury__string__foldr_between_2_6_p_3_env_0_s {
#line 4660 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18;
#line 4660 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__Closure_7;
#line 4660 "string.m"
  MR_String mercury__string__foldr_between_2_6_p_3_env_0__String_8;
#line 4660 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__Start_9;
#line 4660 "string.m"
  MR_Box * mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
#line 4660 "string.m"
  MR_Cont mercury__string__foldr_between_2_6_p_3_env_0__cont;
#line 4660 "string.m"
  void * mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr;
#line 4673 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__J_12;
#line 4671 "string.m"
  MR_Box mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
#line 4660 "string.m"
};

#line 4607 "string.m"
struct mercury__string__foldl2_between_2_8_p_5_env_0_s {
#line 4607 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25;
#line 4607 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26;
#line 4607 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9;
#line 4607 "string.m"
  MR_String mercury__string__foldl2_between_2_8_p_5_env_0__String_10;
#line 4607 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__End_12;
#line 4607 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18;
#line 4607 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20;
#line 4607 "string.m"
  MR_Cont mercury__string__foldl2_between_2_8_p_5_env_0__cont;
#line 4607 "string.m"
  void * mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr;
#line 4618 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__J_15;
#line 4616 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21;
#line 4616 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22;
#line 4607 "string.m"
};

#line 4605 "string.m"
struct mercury__string__foldl2_between_2_8_p_4_env_0_s {
#line 4605 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25;
#line 4605 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26;
#line 4605 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9;
#line 4605 "string.m"
  MR_String mercury__string__foldl2_between_2_8_p_4_env_0__String_10;
#line 4605 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__End_12;
#line 4605 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18;
#line 4605 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20;
#line 4605 "string.m"
  MR_Cont mercury__string__foldl2_between_2_8_p_4_env_0__cont;
#line 4605 "string.m"
  void * mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr;
#line 4618 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__J_15;
#line 4616 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21;
#line 4616 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22;
#line 4605 "string.m"
};

#line 4580 "string.m"
struct mercury__string__foldl_between_2_6_p_4_env_0_s {
#line 4580 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18;
#line 4580 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__Closure_7;
#line 4580 "string.m"
  MR_String mercury__string__foldl_between_2_6_p_4_env_0__String_8;
#line 4580 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__End_10;
#line 4580 "string.m"
  MR_Box * mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
#line 4580 "string.m"
  MR_Cont mercury__string__foldl_between_2_6_p_4_env_0__cont;
#line 4580 "string.m"
  void * mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr;
#line 4591 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__J_12;
#line 4589 "string.m"
  MR_Box mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
#line 4580 "string.m"
};

#line 4578 "string.m"
struct mercury__string__foldl_between_2_6_p_3_env_0_s {
#line 4578 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18;
#line 4578 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__Closure_7;
#line 4578 "string.m"
  MR_String mercury__string__foldl_between_2_6_p_3_env_0__String_8;
#line 4578 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__End_10;
#line 4578 "string.m"
  MR_Box * mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
#line 4578 "string.m"
  MR_Cont mercury__string__foldl_between_2_6_p_3_env_0__cont;
#line 4578 "string.m"
  void * mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr;
#line 4591 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__J_12;
#line 4589 "string.m"
  MR_Box mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
#line 4578 "string.m"
};

#line 3240 "string.m"
struct mercury__string__mercury_append_3_p_3_env_0_s {
#line 3240 "string.m"
  MR_String * mercury__string__mercury_append_3_p_3_env_0__X_4;
#line 3240 "string.m"
  MR_String * mercury__string__mercury_append_3_p_3_env_0__Y_5;
#line 3240 "string.m"
  MR_Cont mercury__string__mercury_append_3_p_3_env_0__cont;
#line 3240 "string.m"
  void * mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr;
#line 3242 "string.m"
  MR_bool mercury__string__mercury_append_3_p_3_env_0__succeeded;
#line 3242 "string.m"
  MR_Word mercury__string__mercury_append_3_p_3_env_0__XList_7;
#line 3242 "string.m"
  MR_Word mercury__string__mercury_append_3_p_3_env_0__YList_8;
#line 3240 "string.m"
};


#line 260 "string.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__list__ti_list_1builtin__type_ctor_info_string_0;

#line 263 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_0[1];

#line 266 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_0;

#line 269 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_1[1];

#line 272 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_1;

#line 275 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_0[1];

#line 278 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_1[1];

#line 281 "string.c"
static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_justified_column_0[2];

#line 284 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_justified_column_0[2];

#line 287 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justified_column_0[2];

#line 290 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_0;

#line 293 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_1;

#line 296 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_value_ordered_justify_sense_0[2];

#line 299 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_name_ordered_justify_sense_0[2];

#line 302 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justify_sense_0[2];

#line 305 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_line_0[1];

#line 308 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_line_0;

#line 311 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1];

#line 314 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_0;

#line 317 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1];

#line 320 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_1;

#line 323 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1];

#line 326 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_2;

#line 329 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1];

#line 332 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_3;

#line 335 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_0[1];

#line 338 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_1[1];

#line 341 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_2[1];

#line 344 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[1];

#line 347 "string.c"
static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_poly_type_0[4];

#line 350 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[4];

#line 353 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[4];

#line 356 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_text_file_0[1];

#line 359 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_text_file_0;

#line 362 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
#line 365 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 367 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 370 "string.c"
static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
#line 373 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 375 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 377 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 380 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
#line 383 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 385 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 388 "string.c"
static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
#line 391 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 393 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 395 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 398 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
#line 401 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 403 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 406 "string.c"
static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
#line 409 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 411 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 413 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 416 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
#line 419 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 421 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 424 "string.c"
static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
#line 427 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 429 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 431 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 434 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
#line 437 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 439 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 442 "string.c"
static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
#line 445 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 447 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 449 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 435 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0(
#line 435 "list.int"
  MR_String mercury__string__V_36_36,
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__3_3);

#line 4574 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 4574 "string.m"
  MR_String mercury__string__V_21_21,
#line 4574 "string.m"
  MR_String mercury__string__String_8,
#line 4574 "string.m"
  MR_Integer mercury__string__I_9,
#line 4574 "string.m"
  MR_Integer mercury__string__End_10,
#line 4574 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4574 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15);

#line 4574 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4574 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4574 "string.m"
  MR_String mercury__string__String_8,
#line 4574 "string.m"
  MR_Integer mercury__string__I_9,
#line 4574 "string.m"
  MR_Integer mercury__string__End_10,
#line 4574 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4574 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4654 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4654 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4654 "string.m"
  MR_String mercury__string__String_8,
#line 4654 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4654 "string.m"
  MR_Integer mercury__string__I_10,
#line 4654 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4654 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4576 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0(
#line 4576 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4576 "string.m"
  MR_String mercury__string__String_8,
#line 4576 "string.m"
  MR_Integer mercury__string__I_9,
#line 4576 "string.m"
  MR_Integer mercury__string__End_10,
#line 4576 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4576 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 4576 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0(
#line 4576 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4576 "string.m"
  MR_String mercury__string__String_8,
#line 4576 "string.m"
  MR_Integer mercury__string__I_9,
#line 4576 "string.m"
  MR_Integer mercury__string__End_10,
#line 4576 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4576 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 133 "list.int"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_String mercury__string__V_20_20,
#line 133 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__string__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__string__HeadVar__4_4);

#line 4654 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4654 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4654 "string.m"
  MR_String mercury__string__String_8,
#line 4654 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4654 "string.m"
  MR_Integer mercury__string__I_10,
#line 4654 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4654 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4574 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4574 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4574 "string.m"
  MR_String mercury__string__String_8,
#line 4574 "string.m"
  MR_Integer mercury__string__I_9,
#line 4574 "string.m"
  MR_Integer mercury__string__End_10,
#line 4574 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4574 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4118 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0(
#line 4118 "string.m"
  MR_Char mercury__string__V_21_21,
#line 4118 "string.m"
  MR_String mercury__string__Str_8,
#line 4118 "string.m"
  MR_Integer mercury__string__I_9,
#line 4118 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4118 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4118 "string.m"
  MR_Word * mercury__string__Acc_12);

#line 911 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(
#line 911 "string.m"
  MR_Integer mercury__string__V_20_20,
#line 911 "string.m"
  MR_String mercury__string__String_8,
#line 911 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 911 "string.m"
  MR_Integer mercury__string__End0_10,
#line 911 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 911 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 4099 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(
#line 4099 "string.m"
  MR_Word mercury__string__V_11_11,
#line 4099 "string.m"
  MR_String mercury__string__String_6,
#line 4099 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4099 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_String mercury__string__V_12_12,
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Char mercury__string__V_12_12,
#line 324 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Char mercury__string__V_12_12,
#line 324 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 4099 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho10__ho47_4_p_0(
#line 4099 "string.m"
  MR_String mercury__string__String_6,
#line 4099 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4099 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 4079 "string.m"
static void MR_CALL 
mercury__string__words_loop__ho36_4_p_0(
#line 4079 "string.m"
  MR_String mercury__string__String_6,
#line 4079 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4079 "string.m"
  MR_Word * mercury__string__Words_8);

#line 4099 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho35_4_p_0(
#line 4099 "string.m"
  MR_String mercury__string__String_6,
#line 4099 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4099 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 2916 "string.m"
static void MR_CALL 
mercury__string__suffix_length_loop__ho33_4_p_0(
#line 2916 "string.m"
  MR_String mercury__string__S_6,
#line 2916 "string.m"
  MR_Integer mercury__string__I_7,
#line 2916 "string.m"
  MR_Integer * mercury__string__Index_8);

#line 2899 "string.m"
static void MR_CALL 
mercury__string__prefix_length_loop__ho32_4_p_0(
#line 2899 "string.m"
  MR_String mercury__string__S_6,
#line 2899 "string.m"
  MR_Integer mercury__string__I_7,
#line 2899 "string.m"
  MR_Integer * mercury__string__Index_8);

#line 2827 "string.m"
static MR_bool MR_CALL 
mercury__string__all_match_loop__ho30_3_p_0(
#line 2827 "string.m"
  MR_String mercury__string__String_5,
#line 2827 "string.m"
  MR_Integer mercury__string__Cur_6);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho16_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 435 "list.int"
static MR_Word MR_CALL 
mercury__string__map_corresponding__ho15_3_f_in__list_0(
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__3_3);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho13_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 133 "list.int"
static void MR_CALL 
mercury__string__foldl__ho8_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__string__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__string__HeadVar__4_4);

#line 4519 "string.m"
static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__4519__1_2_f_0(
#line 4519 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4519 "string.m"
  MR_String mercury__string__HeadVar__2_60);

#line 4389 "string.m"
static MR_Word MR_CALL 
mercury__string__IntroducedFrom__func__replace_all__4389__1_3_f_0(
#line 4389 "string.m"
  MR_String mercury__string__Subst_7,
#line 4389 "string.m"
  MR_Char mercury__string__HeadVar__2_16,
#line 4389 "string.m"
  MR_Word mercury__string__HeadVar__3_17);

#line 4671 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
#line 4671 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4671 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
#line 4671 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4616 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
#line 4616 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4616 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
#line 4616 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4589 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
#line 4589 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4589 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
#line 4589 "string.m"
  void * mercury__string__env_ptr_arg);

#line 3242 "string.m"
static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
#line 3242 "string.m"
  void * mercury__string__env_ptr_arg);


static /* final */ const MR_Box mercury__string_scalar_common_1[5][2];

static /* final */ const MR_Box mercury__string_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__string_scalar_common_5[1][1];




static /* final */ const MR_Box mercury__string_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__string_scalar_common_5[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 45)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "\""))
  },
};



#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"

#line 4924 "string.m"
MR_bool 
ML_string_to_float(
#line 4924 "string.m"
  MR_String mercury__string__FloatString_1,
#line 4924 "string.m"
  MR_Float * mercury__string__FloatVal_2)
#line 4924 "string.m"
{
#line 4924 "string.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__string__to_float_2_p_0((MR_String) mercury__string__FloatString_1, (MR_Float *) mercury__string__FloatVal_2);
	return ret_value;
}


#line 1217 "string.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1225 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1230 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_0 = {
  (MR_String) "left",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__string__field_types_justified_column_0_0,
  NULL,
  NULL,
  NULL
};

#line 1245 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1250 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_1 = {
  (MR_String) "right",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__string__field_types_justified_column_0_1,
  NULL,
  NULL,
  NULL
};

#line 1265 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_0[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0
};

#line 1270 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_1[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

#line 1275 "string.c"
static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_justified_column_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_justified_column_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_justified_column_0_1
  }
};

#line 1289 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_justified_column_0[2] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0,
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

#line 1295 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justified_column_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1301 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_justified_column_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string____Unify____justified_column_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____justified_column_0_0_10001)),
  (MR_String) "string",
  (MR_String) "justified_column",
  {
    mercury__string__string__du_name_ordered_justified_column_0
  },
  {
    mercury__string__string__du_ptag_ordered_justified_column_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_justified_column_0
};

#line 1322 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_0 = {
  (MR_String) "just_left",
  (MR_Integer) 0
};

#line 1328 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_1 = {
  (MR_String) "just_right",
  (MR_Integer) 1
};

#line 1334 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_value_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

#line 1340 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_name_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

#line 1346 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justify_sense_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1352 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_justify_sense_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string____Unify____justify_sense_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____justify_sense_0_0_10001)),
  (MR_String) "string",
  (MR_String) "justify_sense",
  {
    mercury__string__string__enum_name_ordered_justify_sense_0
  },
  {
    mercury__string__string__enum_value_ordered_justify_sense_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_justify_sense_0
};

#line 1373 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_line_0[1] = {
  (MR_Integer) 0
};

#line 1378 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_line_0 = {
  (MR_String) "line",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1385 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_line_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__string____Unify____line_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____line_0_0_10001)),
  (MR_String) "string",
  (MR_String) "line",
  {
    &mercury__string__string__notag_functor_desc_line_0
  },
  {
    &mercury__string__string__notag_functor_desc_line_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_line_0
};

#line 1406 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1411 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_0 = {
  (MR_String) "f",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__string__field_types_poly_type_0_0,
  NULL,
  NULL,
  NULL
};

#line 1426 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1431 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_1 = {
  (MR_String) "i",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__string__field_types_poly_type_0_1,
  NULL,
  NULL,
  NULL
};

#line 1446 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1451 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_2 = {
  (MR_String) "s",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__string__string__field_types_poly_type_0_2,
  NULL,
  NULL,
  NULL
};

#line 1466 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 1471 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_3 = {
  (MR_String) "c",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__string__string__field_types_poly_type_0_3,
  NULL,
  NULL,
  NULL
};

#line 1486 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_0[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_0
};

#line 1491 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_1[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_1
};

#line 1496 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_2[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

#line 1501 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3
};

#line 1506 "string.c"
static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_poly_type_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_3
  }
};

#line 1530 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[4] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3,
  &mercury__string__string__du_functor_desc_poly_type_0_0,
  &mercury__string__string__du_functor_desc_poly_type_0_1,
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

#line 1538 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1546 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_poly_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string____Unify____poly_type_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____poly_type_0_0_10001)),
  (MR_String) "string",
  (MR_String) "poly_type",
  {
    mercury__string__string__du_name_ordered_poly_type_0
  },
  {
    mercury__string__string__du_ptag_ordered_poly_type_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_poly_type_0
};

#line 1567 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_text_file_0[1] = {
  (MR_Integer) 0
};

#line 1572 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_text_file_0 = {
  (MR_String) "text_file",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1579 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_text_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__string____Unify____text_file_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____text_file_0_0_10001)),
  (MR_String) "string",
  (MR_String) "text_file",
  {
    &mercury__string__string__notag_functor_desc_text_file_0
  },
  {
    &mercury__string__string__notag_functor_desc_text_file_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_text_file_0
};

#line 1600 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
#line 1603 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1605 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1607 "string.c"
{
#line 1609 "string.c"
  {
#line 1611 "string.c"
    MR_bool mercury__string__succeeded;

#line 1614 "string.c"
    {
#line 1616 "string.c"
      mercury__string__succeeded = mercury__string____Unify____justified_column_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1619 "string.c"
    return mercury__string__succeeded;
#line 1621 "string.c"
  }
#line 1623 "string.c"
}

#line 1626 "string.c"
static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
#line 1629 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1631 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1633 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1635 "string.c"
{
#line 1637 "string.c"
  {
#line 1639 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1642 "string.c"
    {
#line 1644 "string.c"
      mercury__string____Compare____justified_column_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1647 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1649 "string.c"
  }
#line 1651 "string.c"
}

#line 1654 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
#line 1657 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1659 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1661 "string.c"
{
#line 1663 "string.c"
  {
#line 1665 "string.c"
    MR_bool mercury__string__succeeded;

#line 1668 "string.c"
    {
#line 1670 "string.c"
      mercury__string__succeeded = mercury__string____Unify____justify_sense_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1673 "string.c"
    return mercury__string__succeeded;
#line 1675 "string.c"
  }
#line 1677 "string.c"
}

#line 1680 "string.c"
static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
#line 1683 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1685 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1687 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1689 "string.c"
{
#line 1691 "string.c"
  {
#line 1693 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1696 "string.c"
    {
#line 1698 "string.c"
      mercury__string____Compare____justify_sense_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1701 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1703 "string.c"
  }
#line 1705 "string.c"
}

#line 1708 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
#line 1711 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1713 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1715 "string.c"
{
#line 1717 "string.c"
  {
#line 1719 "string.c"
    MR_bool mercury__string__succeeded;

#line 1722 "string.c"
    {
#line 1724 "string.c"
      mercury__string__succeeded = mercury__string____Unify____line_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1727 "string.c"
    return mercury__string__succeeded;
#line 1729 "string.c"
  }
#line 1731 "string.c"
}

#line 1734 "string.c"
static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
#line 1737 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1739 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1741 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1743 "string.c"
{
#line 1745 "string.c"
  {
#line 1747 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1750 "string.c"
    {
#line 1752 "string.c"
      mercury__string____Compare____line_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1755 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1757 "string.c"
  }
#line 1759 "string.c"
}

#line 1762 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
#line 1765 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1767 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1769 "string.c"
{
#line 1771 "string.c"
  {
#line 1773 "string.c"
    MR_bool mercury__string__succeeded;

#line 1776 "string.c"
    {
#line 1778 "string.c"
      mercury__string__succeeded = mercury__string____Unify____poly_type_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1781 "string.c"
    return mercury__string__succeeded;
#line 1783 "string.c"
  }
#line 1785 "string.c"
}

#line 1788 "string.c"
static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
#line 1791 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1793 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1795 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1797 "string.c"
{
#line 1799 "string.c"
  {
#line 1801 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1804 "string.c"
    {
#line 1806 "string.c"
      mercury__string____Compare____poly_type_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1809 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1811 "string.c"
  }
#line 1813 "string.c"
}

#line 1816 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
#line 1819 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1821 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1823 "string.c"
{
#line 1825 "string.c"
  {
#line 1827 "string.c"
    MR_bool mercury__string__succeeded;

#line 1830 "string.c"
    {
#line 1832 "string.c"
      mercury__string__succeeded = mercury__string____Unify____text_file_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1835 "string.c"
    return mercury__string__succeeded;
#line 1837 "string.c"
  }
#line 1839 "string.c"
}

#line 1842 "string.c"
static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
#line 1845 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1847 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1849 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1851 "string.c"
{
#line 1853 "string.c"
  {
#line 1855 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1858 "string.c"
    {
#line 1860 "string.c"
      mercury__string____Compare____text_file_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1863 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1865 "string.c"
  }
#line 1867 "string.c"
}

#line 435 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0(
#line 435 "list.int"
  MR_String mercury__string__V_36_36,
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__3_3)
#line 435 "list.int"
{
#line 202 "list.opt"
  {
#line 202 "list.opt"
    MR_bool mercury__string__succeeded;
#line 202 "list.opt"
    MR_Word mercury__string__HeadVar__4_4;

#line 202 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "list.opt"
      if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "list.opt"
        mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "list.opt"
      else
#line 203 "list.opt"
        {
#line 10 "require.opt"
          {
#line 10 "require.opt"
            mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          }
#line 203 "list.opt"
        }
#line 202 "list.opt"
    else
#line 202 "list.opt"
      {
#line 202 "list.opt"
        MR_Word mercury__string__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 202 "list.opt"
        MR_String mercury__string__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 202 "list.opt"
        if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "list.opt"
          {
#line 10 "require.opt"
            {
#line 10 "require.opt"
              mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
            }
#line 208 "list.opt"
          }
#line 202 "list.opt"
        else
#line 213 "list.opt"
          {
#line 213 "list.opt"
            MR_String mercury__string__HB_21_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 213 "list.opt"
            MR_Word mercury__string__TBs_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 1)));
#line 213 "list.opt"
            MR_String mercury__string__V_23_25;
#line 213 "list.opt"
            MR_Word mercury__string__V_24_26;
#line 213 "list.opt"
            MR_String mercury__string__V_48_48;

#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_36_36 ;
	S2 =  mercury__string__V_35_35 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 1960 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_48_48  = S3;
#line 3147 "string.m"
}
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__HB_21_23 ;
	S2 =  mercury__string__V_48_48 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 1987 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_23_25  = S3;
#line 3147 "string.m"
}
#line 215 "list.opt"
            {
#line 215 "list.opt"
              mercury__string__V_24_26 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0(mercury__string__V_36_36, mercury__string__V_34_34, mercury__string__TBs_22_24);
            }
#line 213 "list.opt"
            {
#line 213 "list.opt"
              mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 0) = ((MR_Box) (mercury__string__V_23_25));
#line 213 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 1) = ((MR_Box) (mercury__string__V_24_26));
#line 213 "list.opt"
            }
#line 213 "list.opt"
          }
#line 202 "list.opt"
      }
#line 202 "list.opt"
    return mercury__string__HeadVar__4_4;
#line 202 "list.opt"
  }
#line 435 "list.int"
}

#line 4574 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 4574 "string.m"
  MR_String mercury__string__V_21_21,
#line 4574 "string.m"
  MR_String mercury__string__String_8,
#line 4574 "string.m"
  MR_Integer mercury__string__I_9,
#line 4574 "string.m"
  MR_Integer mercury__string__End_10,
#line 4574 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4574 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15)
#line 4574 "string.m"
{
#line 4591 "string.m"
  while (MR_TRUE)
#line 4591 "string.m"
    {
#line 4591 "string.m"
      /* tailcall optimized into a loop */
#line 4591 "string.m"
      {
#line 4591 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4591 "string.m"
        MR_Integer mercury__string__J_12;
#line 4591 "string.m"
        MR_Char mercury__string__Char_13;

#line 4585 "string.m"
        if (mercury__string__succeeded)
#line 4585 "string.m"
          {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2081 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4585 "string.m"
            if (mercury__string__succeeded)
#line 4587 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4585 "string.m"
          }
#line 4591 "string.m"
        if (mercury__string__succeeded)
#line 4589 "string.m"
          {
#line 4589 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4546 "string.m"
            {
#line 4546 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__IntroducedFrom__func__replace_all__4389__1_3_f_0(mercury__string__V_21_21, mercury__string__Char_13, mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4590 "string.m"
            /* direct tailcall eliminated */
#line 4590 "string.m"
            {
#line 4590 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4590 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4590 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4590 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4590 "string.m"
            }
#line 4590 "string.m"
            continue;
#line 4589 "string.m"
          }
#line 4591 "string.m"
        else
#line 4590 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4591 "string.m"
      }
#line 4591 "string.m"
      break;
#line 4591 "string.m"
    }
#line 4574 "string.m"
}

#line 4574 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4574 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4574 "string.m"
  MR_String mercury__string__String_8,
#line 4574 "string.m"
  MR_Integer mercury__string__I_9,
#line 4574 "string.m"
  MR_Integer mercury__string__End_10,
#line 4574 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4574 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4574 "string.m"
{
#line 4591 "string.m"
  while (MR_TRUE)
#line 4591 "string.m"
    {
#line 4591 "string.m"
      /* tailcall optimized into a loop */
#line 4591 "string.m"
      {
#line 4591 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4591 "string.m"
        MR_Integer mercury__string__J_12;
#line 4591 "string.m"
        MR_Char mercury__string__Char_13;

#line 4585 "string.m"
        if (mercury__string__succeeded)
#line 4585 "string.m"
          {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2203 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4585 "string.m"
            if (mercury__string__succeeded)
#line 4587 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4585 "string.m"
          }
#line 4591 "string.m"
        if (mercury__string__succeeded)
#line 4589 "string.m"
          {
#line 4589 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4546 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4546 "string.m"
            {
#line 4546 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4590 "string.m"
            /* direct tailcall eliminated */
#line 4590 "string.m"
            {
#line 4590 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4590 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4590 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4590 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4590 "string.m"
            }
#line 4590 "string.m"
            continue;
#line 4589 "string.m"
          }
#line 4591 "string.m"
        else
#line 4590 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4591 "string.m"
      }
#line 4591 "string.m"
      break;
#line 4591 "string.m"
    }
#line 4574 "string.m"
}

#line 4654 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4654 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4654 "string.m"
  MR_String mercury__string__String_8,
#line 4654 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4654 "string.m"
  MR_Integer mercury__string__I_10,
#line 4654 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4654 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4654 "string.m"
{
#line 4673 "string.m"
  while (MR_TRUE)
#line 4673 "string.m"
    {
#line 4673 "string.m"
      /* tailcall optimized into a loop */
#line 4673 "string.m"
      {
#line 4673 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4673 "string.m"
        MR_Integer mercury__string__J_12;
#line 4673 "string.m"
        MR_Char mercury__string__Char_13;

#line 4667 "string.m"
        if (mercury__string__succeeded)
#line 4667 "string.m"
          {
#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 2330 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4667 "string.m"
            if (mercury__string__succeeded)
#line 4669 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4667 "string.m"
          }
#line 4673 "string.m"
        if (mercury__string__succeeded)
#line 4671 "string.m"
          {
#line 4671 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4638 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4638 "string.m"
            {
#line 4638 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4672 "string.m"
            /* direct tailcall eliminated */
#line 4672 "string.m"
            {
#line 4672 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4672 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4672 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4672 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4672 "string.m"
            }
#line 4672 "string.m"
            continue;
#line 4671 "string.m"
          }
#line 4673 "string.m"
        else
#line 4672 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4673 "string.m"
      }
#line 4673 "string.m"
      break;
#line 4673 "string.m"
    }
#line 4654 "string.m"
}

#line 4576 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0(
#line 4576 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4576 "string.m"
  MR_String mercury__string__String_8,
#line 4576 "string.m"
  MR_Integer mercury__string__I_9,
#line 4576 "string.m"
  MR_Integer mercury__string__End_10,
#line 4576 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4576 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 4576 "string.m"
{
#line 4591 "string.m"
  while (MR_TRUE)
#line 4591 "string.m"
    {
#line 4591 "string.m"
      /* tailcall optimized into a loop */
#line 4591 "string.m"
      {
#line 4591 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4591 "string.m"
        MR_Integer mercury__string__J_12;
#line 4591 "string.m"
        MR_Char mercury__string__Char_13;

#line 4585 "string.m"
        if (mercury__string__succeeded)
#line 4585 "string.m"
          {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2454 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4585 "string.m"
            if (mercury__string__succeeded)
#line 4587 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4585 "string.m"
          }
#line 4591 "string.m"
        if (mercury__string__succeeded)
#line 4589 "string.m"
          {
#line 4589 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4589 "string.m"
            MR_Integer mercury__string__M_24;
#line 4589 "string.m"
            MR_Integer mercury__string__V_25_25;

#line 4910 "string.m"
            {
#line 4910 "string.m"
              mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__V_19_19, mercury__string__Char_13, &mercury__string__M_24);
            }
#line 4589 "string.m"
            if (mercury__string__succeeded)
#line 4589 "string.m"
              {
#line 4911 "string.m"
                mercury__string__V_25_25 = (mercury__string__V_19_19 * mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4911 "string.m"
                mercury__string__STATE_VARIABLE_Acc_16_16 = (mercury__string__V_25_25 + mercury__string__M_24);
#line 4912 "string.m"
                mercury__string__succeeded = (mercury__string__STATE_VARIABLE_Acc_0_14 <= mercury__string__STATE_VARIABLE_Acc_16_16);
#line 4912 "string.m"
                if (!(mercury__string__succeeded))
#line 4912 "string.m"
                  {
#line 4912 "string.m"
                    mercury__string__succeeded = (mercury__string__V_19_19 == (MR_Integer) 10);
#line 4912 "string.m"
                    mercury__string__succeeded = !(mercury__string__succeeded);
#line 4912 "string.m"
                  }
#line 4589 "string.m"
                if (mercury__string__succeeded)
#line 4590 "string.m"
                  {
#line 4590 "string.m"
                    /* direct tailcall eliminated */
#line 4590 "string.m"
                    {
#line 4590 "string.m"
                      MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4590 "string.m"
                      MR_Integer mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4590 "string.m"
                      mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4590 "string.m"
                      mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4590 "string.m"
                    }
#line 4590 "string.m"
                    continue;
#line 4590 "string.m"
                  }
#line 4589 "string.m"
              }
#line 4589 "string.m"
          }
#line 4591 "string.m"
        else
#line 4590 "string.m"
          {
#line 4590 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4590 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4590 "string.m"
          }
#line 4591 "string.m"
        return mercury__string__succeeded;
#line 4591 "string.m"
      }
#line 4591 "string.m"
      break;
#line 4591 "string.m"
    }
#line 4576 "string.m"
}

#line 4576 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0(
#line 4576 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4576 "string.m"
  MR_String mercury__string__String_8,
#line 4576 "string.m"
  MR_Integer mercury__string__I_9,
#line 4576 "string.m"
  MR_Integer mercury__string__End_10,
#line 4576 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4576 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 4576 "string.m"
{
#line 4591 "string.m"
  while (MR_TRUE)
#line 4591 "string.m"
    {
#line 4591 "string.m"
      /* tailcall optimized into a loop */
#line 4591 "string.m"
      {
#line 4591 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4591 "string.m"
        MR_Integer mercury__string__J_12;
#line 4591 "string.m"
        MR_Char mercury__string__Char_13;

#line 4585 "string.m"
        if (mercury__string__succeeded)
#line 4585 "string.m"
          {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2616 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4585 "string.m"
            if (mercury__string__succeeded)
#line 4587 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4585 "string.m"
          }
#line 4591 "string.m"
        if (mercury__string__succeeded)
#line 4589 "string.m"
          {
#line 4589 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4589 "string.m"
            MR_Integer mercury__string__M_24;
#line 4589 "string.m"
            MR_Integer mercury__string__V_25_25;

#line 4918 "string.m"
            {
#line 4918 "string.m"
              mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__V_19_19, mercury__string__Char_13, &mercury__string__M_24);
            }
#line 4589 "string.m"
            if (mercury__string__succeeded)
#line 4589 "string.m"
              {
#line 4919 "string.m"
                mercury__string__V_25_25 = (mercury__string__V_19_19 * mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4919 "string.m"
                mercury__string__STATE_VARIABLE_Acc_16_16 = (mercury__string__V_25_25 - mercury__string__M_24);
#line 4920 "string.m"
                mercury__string__succeeded = (mercury__string__STATE_VARIABLE_Acc_16_16 <= mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4920 "string.m"
                if (!(mercury__string__succeeded))
#line 4920 "string.m"
                  {
#line 4920 "string.m"
                    mercury__string__succeeded = (mercury__string__V_19_19 == (MR_Integer) 10);
#line 4920 "string.m"
                    mercury__string__succeeded = !(mercury__string__succeeded);
#line 4920 "string.m"
                  }
#line 4589 "string.m"
                if (mercury__string__succeeded)
#line 4590 "string.m"
                  {
#line 4590 "string.m"
                    /* direct tailcall eliminated */
#line 4590 "string.m"
                    {
#line 4590 "string.m"
                      MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4590 "string.m"
                      MR_Integer mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4590 "string.m"
                      mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4590 "string.m"
                      mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4590 "string.m"
                    }
#line 4590 "string.m"
                    continue;
#line 4590 "string.m"
                  }
#line 4589 "string.m"
              }
#line 4589 "string.m"
          }
#line 4591 "string.m"
        else
#line 4590 "string.m"
          {
#line 4590 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4590 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4590 "string.m"
          }
#line 4591 "string.m"
        return mercury__string__succeeded;
#line 4591 "string.m"
      }
#line 4591 "string.m"
      break;
#line 4591 "string.m"
    }
#line 4576 "string.m"
}

#line 133 "list.int"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_String mercury__string__V_20_20,
#line 133 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__string__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__string__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__string__succeeded;

#line 380 "list.opt"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__string__HeadVar__4_4 = mercury__string__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__string__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__string__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__string__STATE_VARIABLE_A_15_15_13;

#line 4710 "string.m"
            {
#line 4710 "string.m"
              mercury__string__STATE_VARIABLE_A_15_15_13 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0(mercury__string__V_20_20, mercury__string__H_10_9, mercury__string__HeadVar__3_3);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__string__HeadVar__2__tmp_copy_2 = mercury__string__T_11_10;
#line 384 "list.opt"
              MR_Word mercury__string__HeadVar__3__tmp_copy_3 = mercury__string__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__string__HeadVar__3_3 = mercury__string__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__string__HeadVar__2_2 = mercury__string__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 4654 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4654 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4654 "string.m"
  MR_String mercury__string__String_8,
#line 4654 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4654 "string.m"
  MR_Integer mercury__string__I_10,
#line 4654 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4654 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4654 "string.m"
{
#line 4673 "string.m"
  while (MR_TRUE)
#line 4673 "string.m"
    {
#line 4673 "string.m"
      /* tailcall optimized into a loop */
#line 4673 "string.m"
      {
#line 4673 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4673 "string.m"
        MR_Integer mercury__string__J_12;
#line 4673 "string.m"
        MR_Char mercury__string__Char_13;

#line 4667 "string.m"
        if (mercury__string__succeeded)
#line 4667 "string.m"
          {
#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 2853 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4667 "string.m"
            if (mercury__string__succeeded)
#line 4669 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4667 "string.m"
          }
#line 4673 "string.m"
        if (mercury__string__succeeded)
#line 4671 "string.m"
          {
#line 4671 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4645 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4645 "string.m"
            {
#line 4645 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4672 "string.m"
            /* direct tailcall eliminated */
#line 4672 "string.m"
            {
#line 4672 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4672 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4672 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4672 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4672 "string.m"
            }
#line 4672 "string.m"
            continue;
#line 4671 "string.m"
          }
#line 4673 "string.m"
        else
#line 4672 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4673 "string.m"
      }
#line 4673 "string.m"
      break;
#line 4673 "string.m"
    }
#line 4654 "string.m"
}

#line 4574 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4574 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4574 "string.m"
  MR_String mercury__string__String_8,
#line 4574 "string.m"
  MR_Integer mercury__string__I_9,
#line 4574 "string.m"
  MR_Integer mercury__string__End_10,
#line 4574 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4574 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4574 "string.m"
{
#line 4591 "string.m"
  while (MR_TRUE)
#line 4591 "string.m"
    {
#line 4591 "string.m"
      /* tailcall optimized into a loop */
#line 4591 "string.m"
      {
#line 4591 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4591 "string.m"
        MR_Integer mercury__string__J_12;
#line 4591 "string.m"
        MR_Char mercury__string__Char_13;

#line 4585 "string.m"
        if (mercury__string__succeeded)
#line 4585 "string.m"
          {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2977 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4585 "string.m"
            if (mercury__string__succeeded)
#line 4587 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4585 "string.m"
          }
#line 4591 "string.m"
        if (mercury__string__succeeded)
#line 4589 "string.m"
          {
#line 4589 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4563 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4563 "string.m"
            {
#line 4563 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4590 "string.m"
            /* direct tailcall eliminated */
#line 4590 "string.m"
            {
#line 4590 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4590 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4590 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4590 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4590 "string.m"
            }
#line 4590 "string.m"
            continue;
#line 4589 "string.m"
          }
#line 4591 "string.m"
        else
#line 4590 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4591 "string.m"
      }
#line 4591 "string.m"
      break;
#line 4591 "string.m"
    }
#line 4574 "string.m"
}

#line 4118 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0(
#line 4118 "string.m"
  MR_Char mercury__string__V_21_21,
#line 4118 "string.m"
  MR_String mercury__string__Str_8,
#line 4118 "string.m"
  MR_Integer mercury__string__I_9,
#line 4118 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4118 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4118 "string.m"
  MR_Word * mercury__string__Acc_12)
#line 4118 "string.m"
{
#line 4138 "string.m"
  while (MR_TRUE)
#line 4138 "string.m"
    {
#line 4138 "string.m"
      /* tailcall optimized into a loop */
#line 4138 "string.m"
      {
#line 4138 "string.m"
        MR_bool mercury__string__succeeded;
#line 4138 "string.m"
        MR_Integer mercury__string__J_13;
#line 4138 "string.m"
        MR_Char mercury__string__C_14;

#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 3100 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_13  = PrevIndex;
	 mercury__string__C_14  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4138 "string.m"
        if (mercury__string__succeeded)
#line 4134 "string.m"
          {
#line 4147 "string.m"
            mercury__string__succeeded = (mercury__string__V_21_21 == mercury__string__C_14);
#line 4134 "string.m"
            if (mercury__string__succeeded)
#line 4131 "string.m"
              {
#line 4131 "string.m"
                MR_String mercury__string__Seg_16;
#line 4131 "string.m"
                MR_Word mercury__string__V_18_18;

#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  mercury__string__I_9 ;
	End =  mercury__string__SegEnd_10 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3148 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_16  = SubString;
#line 4037 "string.m"
}
#line 4133 "string.m"
                {
#line 4133 "string.m"
                  mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4133 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Seg_16));
#line 4133 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4133 "string.m"
                }
#line 4133 "string.m"
                /* direct tailcall eliminated */
#line 4133 "string.m"
                {
#line 4133 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;
#line 4133 "string.m"
                  MR_Integer mercury__string__SegEnd__tmp_copy_10 = mercury__string__J_13;
#line 4133 "string.m"
                  MR_Word mercury__string__Acc0__tmp_copy_11 = mercury__string__V_18_18;

#line 4133 "string.m"
                  mercury__string__Acc0_11 = mercury__string__Acc0__tmp_copy_11;
#line 4133 "string.m"
                  mercury__string__SegEnd_10 = mercury__string__SegEnd__tmp_copy_10;
#line 4133 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4133 "string.m"
                }
#line 4133 "string.m"
                continue;
#line 4131 "string.m"
              }
#line 4134 "string.m"
            else
#line 4136 "string.m"
              {
#line 4136 "string.m"
                /* direct tailcall eliminated */
#line 4136 "string.m"
                {
#line 4136 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;

#line 4136 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4136 "string.m"
                }
#line 4136 "string.m"
                continue;
#line 4136 "string.m"
              }
#line 4134 "string.m"
          }
#line 4138 "string.m"
        else
#line 4140 "string.m"
          {
#line 4140 "string.m"
            MR_String mercury__string__Seg_20;

#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  (MR_Integer) 0 ;
	End =  mercury__string__SegEnd_10 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3238 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_20  = SubString;
#line 4037 "string.m"
}
#line 4141 "string.m"
            {
#line 4141 "string.m"
              MR_Word base;
#line 4141 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4141 "string.m"
              *mercury__string__Acc_12 = base;
#line 4141 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Seg_20));
#line 4141 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4141 "string.m"
            }
#line 4140 "string.m"
          }
#line 4138 "string.m"
      }
#line 4138 "string.m"
      break;
#line 4138 "string.m"
    }
#line 4118 "string.m"
}

#line 911 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(
#line 911 "string.m"
  MR_Integer mercury__string__V_20_20,
#line 911 "string.m"
  MR_String mercury__string__String_8,
#line 911 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 911 "string.m"
  MR_Integer mercury__string__End0_10,
#line 911 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 911 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 911 "string.m"
{
#line 4557 "string.m"
  {
#line 4557 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4557 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4557 "string.m"
    MR_Integer mercury__string__End_13;
#line 4557 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 3319 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4560 "string.m"
    {
#line 4560 "string.m"
      return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0(mercury__string__V_20_20, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4557 "string.m"
    return mercury__string__succeeded;
#line 4557 "string.m"
  }
#line 911 "string.m"
}

#line 4099 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(
#line 4099 "string.m"
  MR_Word mercury__string__V_11_11,
#line 4099 "string.m"
  MR_String mercury__string__String_6,
#line 4099 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4099 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4099 "string.m"
{
#line 4108 "string.m"
  while (MR_TRUE)
#line 4108 "string.m"
    {
#line 4108 "string.m"
      /* tailcall optimized into a loop */
#line 4108 "string.m"
      {
#line 4108 "string.m"
        MR_bool mercury__string__succeeded;
#line 4108 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4104 "string.m"
        MR_Char mercury__string__Char_10;
#line 38 "std_util.opt"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Cur_7 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3403 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4104 "string.m"
        if (mercury__string__succeeded)
#line 4104 "string.m"
          {
#line 38 "std_util.opt"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_11_11, (MR_Integer) 1)));
#line 38 "std_util.opt"
            {
#line 38 "std_util.opt"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__V_11_11), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 37 "std_util.opt"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4104 "string.m"
          }
#line 4108 "string.m"
        if (mercury__string__succeeded)
#line 4107 "string.m"
          {
#line 4107 "string.m"
            /* direct tailcall eliminated */
#line 4107 "string.m"
            {
#line 4107 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4107 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4107 "string.m"
            }
#line 4107 "string.m"
            continue;
#line 4107 "string.m"
          }
#line 4108 "string.m"
        else
#line 4109 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4108 "string.m"
      }
#line 4108 "string.m"
      break;
#line 4108 "string.m"
    }
#line 4099 "string.m"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_String mercury__string__V_12_12,
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__string__succeeded;
#line 170 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_String mercury__string__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_String mercury__string__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__string__V_9_9;

#line 172 "list.opt"
        {
#line 172 "list.opt"
          mercury__string__V_8_8 = mercury__string__IntroducedFrom__func__word_wrap_loop__4519__1_2_f_0(mercury__string__V_12_12, mercury__string__H_6_6);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(mercury__string__V_12_12, mercury__string__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Char mercury__string__V_12_12,
#line 324 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__string__succeeded;
#line 170 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_String mercury__string__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_String mercury__string__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__string__V_9_9;
#line 171 "list.opt"
        MR_Integer mercury__string__Length_25;

#line 4342 "string.m"
        {
#line 4342 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__H_6_6, &mercury__string__Length_25);
        }
#line 4343 "string.m"
        mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_13_13);
#line 4347 "string.m"
        if (mercury__string__succeeded)
#line 4344 "string.m"
          {
#line 4344 "string.m"
            MR_Integer mercury__string__Count_26 = (mercury__string__V_13_13 - mercury__string__Length_25);
#line 4344 "string.m"
            MR_String mercury__string__PadString_27;

#line 4345 "string.m"
            {
#line 4345 "string.m"
              mercury__string__duplicate_char_3_p_0(mercury__string__V_12_12, mercury__string__Count_26, &mercury__string__PadString_27);
            }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__H_6_6 ;
	S2 =  mercury__string__PadString_27 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 3601 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3147 "string.m"
}
#line 4344 "string.m"
          }
#line 4347 "string.m"
        else
#line 4348 "string.m"
          mercury__string__V_8_8 = mercury__string__H_6_6;
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(mercury__string__V_12_12, mercury__string__V_13_13, mercury__string__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Char mercury__string__V_12_12,
#line 324 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__string__succeeded;
#line 170 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_String mercury__string__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_String mercury__string__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__string__V_9_9;
#line 171 "list.opt"
        MR_Integer mercury__string__Length_25;

#line 4329 "string.m"
        {
#line 4329 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__H_6_6, &mercury__string__Length_25);
        }
#line 4330 "string.m"
        mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_13_13);
#line 4334 "string.m"
        if (mercury__string__succeeded)
#line 4331 "string.m"
          {
#line 4331 "string.m"
            MR_Integer mercury__string__Count_26 = (mercury__string__V_13_13 - mercury__string__Length_25);
#line 4331 "string.m"
            MR_String mercury__string__PadString_27;

#line 4332 "string.m"
            {
#line 4332 "string.m"
              mercury__string__duplicate_char_3_p_0(mercury__string__V_12_12, mercury__string__Count_26, &mercury__string__PadString_27);
            }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_27 ;
	S2 =  mercury__string__H_6_6 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 3716 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3147 "string.m"
}
#line 4331 "string.m"
          }
#line 4334 "string.m"
        else
#line 4335 "string.m"
          mercury__string__V_8_8 = mercury__string__H_6_6;
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(mercury__string__V_12_12, mercury__string__V_13_13, mercury__string__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__string__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 4099 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho10__ho47_4_p_0(
#line 4099 "string.m"
  MR_String mercury__string__String_6,
#line 4099 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4099 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4099 "string.m"
{
#line 4108 "string.m"
  while (MR_TRUE)
#line 4108 "string.m"
    {
#line 4108 "string.m"
      /* tailcall optimized into a loop */
#line 4108 "string.m"
      {
#line 4108 "string.m"
        MR_bool mercury__string__succeeded;
#line 4108 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4104 "string.m"
        MR_Char mercury__string__Char_10;

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__next_boundary__ho10__ho47_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Cur_7 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3821 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4104 "string.m"
        if (mercury__string__succeeded)
#line 4104 "string.m"
          {
#line 38 "std_util.opt"
            {
#line 38 "std_util.opt"
              mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
            }
#line 37 "std_util.opt"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4104 "string.m"
          }
#line 4108 "string.m"
        if (mercury__string__succeeded)
#line 4107 "string.m"
          {
#line 4107 "string.m"
            /* direct tailcall eliminated */
#line 4107 "string.m"
            {
#line 4107 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4107 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4107 "string.m"
            }
#line 4107 "string.m"
            continue;
#line 4107 "string.m"
          }
#line 4108 "string.m"
        else
#line 4109 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4108 "string.m"
      }
#line 4108 "string.m"
      break;
#line 4108 "string.m"
    }
#line 4099 "string.m"
}

#line 4079 "string.m"
static void MR_CALL 
mercury__string__words_loop__ho36_4_p_0(
#line 4079 "string.m"
  MR_String mercury__string__String_6,
#line 4079 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4079 "string.m"
  MR_Word * mercury__string__Words_8)
#line 4079 "string.m"
{
#line 4082 "string.m"
  {
#line 4082 "string.m"
    MR_bool mercury__string__succeeded;
#line 4082 "string.m"
    MR_Integer mercury__string__WordEnd_9;

#line 4083 "string.m"
    {
#line 4083 "string.m"
      mercury__string__next_boundary__ho10__ho47_4_p_0(mercury__string__String_6, mercury__string__WordStart_7, &mercury__string__WordEnd_9);
    }
#line 4084 "string.m"
    mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__WordStart_7);
#line 4086 "string.m"
    if (mercury__string__succeeded)
#line 4085 "string.m"
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4086 "string.m"
    else
#line 4087 "string.m"
      {
#line 4087 "string.m"
        MR_String mercury__string__Word_10;
#line 4087 "string.m"
        MR_Integer mercury__string__NextWordStart_11;

#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__words_loop__ho36_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__String_6 ;
	Start =  mercury__string__WordStart_7 ;
	End =  mercury__string__WordEnd_9 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3937 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Word_10  = SubString;
#line 4037 "string.m"
}
#line 4088 "string.m"
        {
#line 4088 "string.m"
          mercury__string__next_boundary__ho35_4_p_0(mercury__string__String_6, mercury__string__WordEnd_9, &mercury__string__NextWordStart_11);
        }
#line 4089 "string.m"
        mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__NextWordStart_11);
#line 4091 "string.m"
        if (mercury__string__succeeded)
#line 4090 "string.m"
          {
#line 4090 "string.m"
            MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4090 "string.m"
            {
#line 4090 "string.m"
              MR_Word base;
#line 4090 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4090 "string.m"
              *mercury__string__Words_8 = base;
#line 4090 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4090 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__V_14_14));
#line 4090 "string.m"
            }
#line 4090 "string.m"
          }
#line 4091 "string.m"
        else
#line 4092 "string.m"
          {
#line 4092 "string.m"
            MR_Word mercury__string__Words0_12;

#line 4092 "string.m"
            {
#line 4092 "string.m"
              mercury__string__words_loop__ho36_4_p_0(mercury__string__String_6, mercury__string__NextWordStart_11, &mercury__string__Words0_12);
            }
#line 4093 "string.m"
            {
#line 4093 "string.m"
              MR_Word base;
#line 4093 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4093 "string.m"
              *mercury__string__Words_8 = base;
#line 4093 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4093 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Words0_12));
#line 4093 "string.m"
            }
#line 4092 "string.m"
          }
#line 4087 "string.m"
      }
#line 4082 "string.m"
  }
#line 4079 "string.m"
}

#line 4099 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho35_4_p_0(
#line 4099 "string.m"
  MR_String mercury__string__String_6,
#line 4099 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4099 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4099 "string.m"
{
#line 4108 "string.m"
  while (MR_TRUE)
#line 4108 "string.m"
    {
#line 4108 "string.m"
      /* tailcall optimized into a loop */
#line 4108 "string.m"
      {
#line 4108 "string.m"
        MR_bool mercury__string__succeeded;
#line 4108 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4104 "string.m"
        MR_Char mercury__string__Char_10;

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__next_boundary__ho35_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Cur_7 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4060 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4104 "string.m"
        if (mercury__string__succeeded)
#line 4105 "string.m"
          {
#line 4105 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 4108 "string.m"
        if (mercury__string__succeeded)
#line 4107 "string.m"
          {
#line 4107 "string.m"
            /* direct tailcall eliminated */
#line 4107 "string.m"
            {
#line 4107 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4107 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4107 "string.m"
            }
#line 4107 "string.m"
            continue;
#line 4107 "string.m"
          }
#line 4108 "string.m"
        else
#line 4109 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4108 "string.m"
      }
#line 4108 "string.m"
      break;
#line 4108 "string.m"
    }
#line 4099 "string.m"
}

#line 2916 "string.m"
static void MR_CALL 
mercury__string__suffix_length_loop__ho33_4_p_0(
#line 2916 "string.m"
  MR_String mercury__string__S_6,
#line 2916 "string.m"
  MR_Integer mercury__string__I_7,
#line 2916 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2916 "string.m"
{
#line 2925 "string.m"
  while (MR_TRUE)
#line 2925 "string.m"
    {
#line 2925 "string.m"
      /* tailcall optimized into a loop */
#line 2925 "string.m"
      {
#line 2925 "string.m"
        MR_bool mercury__string__succeeded;
#line 2925 "string.m"
        MR_Integer mercury__string__J_9;
#line 2921 "string.m"
        MR_Char mercury__string__Char_10;

#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_length_loop__ho33_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_6 ;
	Index =  mercury__string__I_7 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 4164 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2921 "string.m"
        if (mercury__string__succeeded)
#line 2922 "string.m"
          {
#line 2922 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 2925 "string.m"
        if (mercury__string__succeeded)
#line 2924 "string.m"
          {
#line 2924 "string.m"
            /* direct tailcall eliminated */
#line 2924 "string.m"
            {
#line 2924 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2924 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2924 "string.m"
            }
#line 2924 "string.m"
            continue;
#line 2924 "string.m"
          }
#line 2925 "string.m"
        else
#line 2926 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2925 "string.m"
      }
#line 2925 "string.m"
      break;
#line 2925 "string.m"
    }
#line 2916 "string.m"
}

#line 2899 "string.m"
static void MR_CALL 
mercury__string__prefix_length_loop__ho32_4_p_0(
#line 2899 "string.m"
  MR_String mercury__string__S_6,
#line 2899 "string.m"
  MR_Integer mercury__string__I_7,
#line 2899 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2899 "string.m"
{
#line 2908 "string.m"
  while (MR_TRUE)
#line 2908 "string.m"
    {
#line 2908 "string.m"
      /* tailcall optimized into a loop */
#line 2908 "string.m"
      {
#line 2908 "string.m"
        MR_bool mercury__string__succeeded;
#line 2908 "string.m"
        MR_Integer mercury__string__J_9;
#line 2904 "string.m"
        MR_Char mercury__string__Char_10;

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_length_loop__ho32_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_6 ;
	Index =  mercury__string__I_7 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4265 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2904 "string.m"
        if (mercury__string__succeeded)
#line 2905 "string.m"
          {
#line 2905 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 2908 "string.m"
        if (mercury__string__succeeded)
#line 2907 "string.m"
          {
#line 2907 "string.m"
            /* direct tailcall eliminated */
#line 2907 "string.m"
            {
#line 2907 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2907 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2907 "string.m"
            }
#line 2907 "string.m"
            continue;
#line 2907 "string.m"
          }
#line 2908 "string.m"
        else
#line 2909 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2908 "string.m"
      }
#line 2908 "string.m"
      break;
#line 2908 "string.m"
    }
#line 2899 "string.m"
}

#line 2827 "string.m"
static MR_bool MR_CALL 
mercury__string__all_match_loop__ho30_3_p_0(
#line 2827 "string.m"
  MR_String mercury__string__String_5,
#line 2827 "string.m"
  MR_Integer mercury__string__Cur_6)
#line 2827 "string.m"
{
#line 2834 "string.m"
  while (MR_TRUE)
#line 2834 "string.m"
    {
#line 2834 "string.m"
      /* tailcall optimized into a loop */
#line 2834 "string.m"
      {
#line 2834 "string.m"
        MR_bool mercury__string__succeeded;
#line 2834 "string.m"
        MR_Integer mercury__string__Next_7;
#line 2834 "string.m"
        MR_Char mercury__string__Char_8;

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__all_match_loop__ho30_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Cur_6 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4364 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2834 "string.m"
        if (mercury__string__succeeded)
#line 2832 "string.m"
          {
#line 2832 "string.m"
            {
#line 2832 "string.m"
              mercury__string__succeeded = mercury__char__is_alnum_1_p_0(mercury__string__Char_8);
            }
#line 2832 "string.m"
            if (mercury__string__succeeded)
#line 2833 "string.m"
              {
#line 2833 "string.m"
                /* direct tailcall eliminated */
#line 2833 "string.m"
                {
#line 2833 "string.m"
                  MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 2833 "string.m"
                  mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 2833 "string.m"
                }
#line 2833 "string.m"
                continue;
#line 2833 "string.m"
              }
#line 2832 "string.m"
          }
#line 2834 "string.m"
        else
#line 2835 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 2834 "string.m"
        return mercury__string__succeeded;
#line 2834 "string.m"
      }
#line 2834 "string.m"
      break;
#line 2834 "string.m"
    }
#line 2827 "string.m"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho16_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__string__succeeded;
#line 170 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__string__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Integer mercury__string__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__string__V_9_9;

#line 172 "list.opt"
        {
#line 172 "list.opt"
          mercury__string__V_8_8 = mercury__string__find_max_length_1_f_0(mercury__string__H_6_6);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__string__V_9_9 = mercury__string__map__ho16_2_f_in__list_0(mercury__string__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 435 "list.int"
static MR_Word MR_CALL 
mercury__string__map_corresponding__ho15_3_f_in__list_0(
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__3_3)
#line 435 "list.int"
{
#line 202 "list.opt"
  {
#line 202 "list.opt"
    MR_bool mercury__string__succeeded;
#line 202 "list.opt"
    MR_Word mercury__string__HeadVar__4_4;

#line 202 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "list.opt"
      if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "list.opt"
        mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "list.opt"
      else
#line 203 "list.opt"
        {
#line 10 "require.opt"
          {
#line 10 "require.opt"
            mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          }
#line 203 "list.opt"
        }
#line 202 "list.opt"
    else
#line 202 "list.opt"
      {
#line 202 "list.opt"
        MR_Word mercury__string__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 202 "list.opt"
        MR_Integer mercury__string__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 202 "list.opt"
        if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "list.opt"
          {
#line 10 "require.opt"
            {
#line 10 "require.opt"
              mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
            }
#line 208 "list.opt"
          }
#line 202 "list.opt"
        else
#line 213 "list.opt"
          {
#line 213 "list.opt"
            MR_Word mercury__string__HB_21_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 213 "list.opt"
            MR_Word mercury__string__TBs_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 1)));
#line 213 "list.opt"
            MR_Word mercury__string__V_23_25;
#line 213 "list.opt"
            MR_Word mercury__string__V_24_26;

#line 214 "list.opt"
            {
#line 214 "list.opt"
              mercury__string__V_23_25 = mercury__string__pad_column_2_f_0(mercury__string__V_35_35, mercury__string__HB_21_23);
            }
#line 215 "list.opt"
            {
#line 215 "list.opt"
              mercury__string__V_24_26 = mercury__string__map_corresponding__ho15_3_f_in__list_0(mercury__string__V_34_34, mercury__string__TBs_22_24);
            }
#line 213 "list.opt"
            {
#line 213 "list.opt"
              mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 0) = ((MR_Box) (mercury__string__V_23_25));
#line 213 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 1) = ((MR_Box) (mercury__string__V_24_26));
#line 213 "list.opt"
            }
#line 213 "list.opt"
          }
#line 202 "list.opt"
      }
#line 202 "list.opt"
    return mercury__string__HeadVar__4_4;
#line 202 "list.opt"
  }
#line 435 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__string__succeeded;
#line 170 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__string__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__string__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__string__V_9_9;

#line 172 "list.opt"
        {
#line 172 "list.opt"
          mercury__string__V_8_8 = mercury__string__find_max_length_with_limit_1_f_0(mercury__string__H_6_6);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__string__V_9_9 = mercury__string__map__ho14_2_f_in__list_0(mercury__string__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho13_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__string__succeeded;
#line 170 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__string__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__string__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__string__V_9_9;
#line 171 "list.opt"
        MR_Word mercury__string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__H_6_6, (MR_Integer) 0)));
#line 4729 "string.m"
        MR_Word mercury__string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__H_6_6, (MR_Integer) 1)));

#line 4729 "string.m"
        if (((MR_tag((MR_Word) mercury__string__V_19_19)) == (MR_mktag((MR_Integer) 0))))
#line 4729 "string.m"
          mercury__string__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_19_19, (MR_Integer) 0)));
#line 4729 "string.m"
        else
#line 4730 "string.m"
          mercury__string__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_19_19, (MR_Integer) 0)));
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__string__V_9_9 = mercury__string__map__ho13_2_f_in__list_0(mercury__string__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 133 "list.int"
static void MR_CALL 
mercury__string__foldl__ho8_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__string__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__string__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__string__succeeded;

#line 380 "list.opt"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__string__HeadVar__4_4 = mercury__string__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_String mercury__string__H_10_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__string__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Integer mercury__string__STATE_VARIABLE_A_15_15_13;
#line 382 "list.opt"
            MR_Integer mercury__string__Length_19;

#line 2458 "string.m"
            {
#line 2458 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__H_10_9, &mercury__string__Length_19);
            }
#line 4864 "string.m"
            mercury__string__succeeded = (mercury__string__Length_19 > mercury__string__HeadVar__3_3);
#line 4866 "string.m"
            if (mercury__string__succeeded)
#line 4865 "string.m"
              mercury__string__STATE_VARIABLE_A_15_15_13 = mercury__string__Length_19;
#line 4866 "string.m"
            else
#line 4867 "string.m"
              mercury__string__STATE_VARIABLE_A_15_15_13 = mercury__string__HeadVar__3_3;
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__string__HeadVar__2__tmp_copy_2 = mercury__string__T_11_10;
#line 384 "list.opt"
              MR_Integer mercury__string__HeadVar__3__tmp_copy_3 = mercury__string__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__string__HeadVar__3_3 = mercury__string__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__string__HeadVar__2_2 = mercury__string__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 4519 "string.m"
static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__4519__1_2_f_0(
#line 4519 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4519 "string.m"
  MR_String mercury__string__HeadVar__2_60)
#line 4519 "string.m"
{
#line 4519 "string.m"
  {
#line 4519 "string.m"
    MR_bool mercury__string__succeeded;
#line 4519 "string.m"
    MR_String mercury__string__HeadVar__3_61;
#line 4519 "string.m"
    MR_String mercury__string__V_62_62;

#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__word_wrap_loop__4519__1_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__WordSep_2 ;
	S2 =  (MR_String) "\n" ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 4824 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_62_62  = S3;
#line 3147 "string.m"
}
#line 4519 "string.m"
    {
#line 4519 "string.m"
      return mercury__string__HeadVar__3_61 = mercury__string__f_43_43_2_f_0(mercury__string__HeadVar__2_60, mercury__string__V_62_62);
    }
#line 4519 "string.m"
    return mercury__string__HeadVar__3_61;
#line 4519 "string.m"
  }
#line 4519 "string.m"
}

#line 4389 "string.m"
static MR_Word MR_CALL 
mercury__string__IntroducedFrom__func__replace_all__4389__1_3_f_0(
#line 4389 "string.m"
  MR_String mercury__string__Subst_7,
#line 4389 "string.m"
  MR_Char mercury__string__HeadVar__2_16,
#line 4389 "string.m"
  MR_Word mercury__string__HeadVar__3_17)
#line 4389 "string.m"
{
#line 4389 "string.m"
  {
#line 4389 "string.m"
    MR_bool mercury__string__succeeded;
#line 4389 "string.m"
    MR_Word mercury__string__HeadVar__4_18;
#line 4389 "string.m"
    MR_String mercury__string__V_19_19;
#line 4389 "string.m"
    MR_String mercury__string__V_20_20;
#line 4389 "string.m"
    MR_Word mercury__string__V_35_35;
#line 4389 "string.m"
    MR_Word mercury__string__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1440 "string.m"
    MR_String mercury__string__Str0_45;

#line 5047 "string.m"
    {
#line 5047 "string.m"
      mercury__string__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5047 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_35_35, 0) = ((MR_Box) (MR_Word) (mercury__string__HeadVar__2_16));
#line 5047 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_35_35, 1) = ((MR_Box) (mercury__string__V_36_36));
#line 5047 "string.m"
    }
#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_35_35, &mercury__string__Str0_45);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      mercury__string__V_20_20 = mercury__string__Str0_45;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1441 "string.m"
      }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__replace_all__4389__1_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_20_20 ;
	S2 =  mercury__string__Subst_7 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 4921 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_19_19  = S3;
#line 3147 "string.m"
}
#line 4389 "string.m"
    {
#line 4389 "string.m"
      mercury__string__HeadVar__4_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4389 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_18, 0) = ((MR_Box) (mercury__string__V_19_19));
#line 4389 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_18, 1) = ((MR_Box) (mercury__string__HeadVar__3_17));
#line 4389 "string.m"
    }
#line 4389 "string.m"
    return mercury__string__HeadVar__4_18;
#line 4389 "string.m"
  }
#line 4389 "string.m"
}

#line 107 "string.m"
void MR_CALL 
mercury__string____Compare____text_file_0_0(
#line 107 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 107 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 107 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 107 "string.m"
{
#line 107 "string.m"
  {
#line 107 "string.m"
    MR_bool mercury__string__succeeded;
#line 107 "string.m"
    MR_Integer mercury__string__CastX_6 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 107 "string.m"
    MR_Integer mercury__string__CastY_7 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 107 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_6 == mercury__string__CastY_7);
#line 107 "string.m"
    if (mercury__string__succeeded)
#line 4969 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 107 "string.m"
    else
#line 107 "string.m"
      {
#line 107 "string.m"
        MR_String mercury__string__V_4_4 = (MR_String) mercury__string__HeadVar__2_2;
#line 107 "string.m"
        MR_String mercury__string__V_5_5 = (MR_String) mercury__string__HeadVar__3_3;
#line 107 "string.m"
        MR_Integer mercury__string__Res_7_12;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____text_file_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_4_4 ;
	S2 =  mercury__string__V_5_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 4997 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Res_7_12  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__string__succeeded = (mercury__string__Res_7_12 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__string__succeeded)
#line 104 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__string__succeeded = (mercury__string__Res_7_12 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__string__succeeded)
#line 109 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 107 "string.m"
      }
#line 107 "string.m"
  }
#line 107 "string.m"
}

#line 107 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0(
#line 107 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 107 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 107 "string.m"
{
#line 107 "string.m"
  {
#line 107 "string.m"
    MR_bool mercury__string__succeeded;
#line 107 "string.m"
    MR_Integer mercury__string__CastX_5 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 107 "string.m"
    MR_Integer mercury__string__CastY_6 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 107 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_5 == mercury__string__CastY_6);
#line 107 "string.m"
    if (mercury__string__succeeded)
#line 107 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 107 "string.m"
    else
#line 107 "string.m"
      {
#line 107 "string.m"
        MR_String mercury__string__V_3_3 = (MR_String) mercury__string__HeadVar__1_1;
#line 107 "string.m"
        MR_String mercury__string__V_4_4 = (MR_String) mercury__string__HeadVar__2_2;

#line 5066 "string.c"
        mercury__string__succeeded = (strcmp(mercury__string__V_3_3, mercury__string__V_4_4) == 0);
#line 107 "string.m"
      }
#line 107 "string.m"
    return mercury__string__succeeded;
#line 107 "string.m"
  }
#line 107 "string.m"
}

#line 1234 "string.m"
void MR_CALL 
mercury__string____Compare____poly_type_0_0(
#line 1234 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 1234 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1234 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 1234 "string.m"
{
#line 1234 "string.m"
  {
#line 1234 "string.m"
    MR_bool mercury__string__succeeded;
#line 1234 "string.m"
    MR_Integer mercury__string__CastX_36 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 1234 "string.m"
    MR_Integer mercury__string__CastY_37 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 1234 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_36 == mercury__string__CastY_37);
#line 1234 "string.m"
    if (mercury__string__succeeded)
#line 5101 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 1234 "string.m"
    else
#line 1234 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 1234 "string.m"
        {
#line 1234 "string.m"
          MR_Char mercury__string__V_42_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1234 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1234 "string.m"
            {
#line 1234 "string.m"
              MR_Char mercury__string__V_35_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 1234 "string.m"
              MR_Integer mercury__string__XI_7_49;
#line 1234 "string.m"
              MR_Integer mercury__string__YI_8_50;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__V_42_42 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 5136 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XI_7_49  = Int;
#line 66 "char.opt"
}
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__V_35_35 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 5156 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YI_8_50  = Int;
#line 66 "char.opt"
}
#line 84 "private_builtin.opt"
              mercury__string__succeeded = (mercury__string__XI_7_49 < mercury__string__YI_8_50);
#line 87 "private_builtin.opt"
              if (mercury__string__succeeded)
#line 86 "private_builtin.opt"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 87 "private_builtin.opt"
              else
#line 92 "private_builtin.opt"
                {
#line 89 "private_builtin.opt"
                  mercury__string__succeeded = (mercury__string__XI_7_49 == mercury__string__YI_8_50);
#line 92 "private_builtin.opt"
                  if (mercury__string__succeeded)
#line 91 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "private_builtin.opt"
                  else
#line 93 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 92 "private_builtin.opt"
                }
#line 1234 "string.m"
            }
#line 1234 "string.m"
          else
#line 1234 "string.m"
            if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5191 "string.c"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1234 "string.m"
            else
#line 1234 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5197 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1234 "string.m"
              else
#line 5201 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1234 "string.m"
        }
#line 1234 "string.m"
      else
#line 1234 "string.m"
        if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1234 "string.m"
          {
#line 1234 "string.m"
            MR_Float mercury__string__V_43_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1234 "string.m"
            if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5216 "string.c"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1234 "string.m"
            else
#line 1234 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1234 "string.m"
                {
#line 1234 "string.m"
                  MR_Float mercury__string__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 118 "private_builtin.opt"
                  mercury__string__succeeded = (mercury__string__V_43_43 < mercury__string__V_5_5);
#line 121 "private_builtin.opt"
                  if (mercury__string__succeeded)
#line 120 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                  else
#line 126 "private_builtin.opt"
                    {
#line 123 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__V_43_43 > mercury__string__V_5_5);
#line 126 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 125 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                      else
#line 127 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                    }
#line 1234 "string.m"
                }
#line 1234 "string.m"
              else
#line 1234 "string.m"
                if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5255 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1234 "string.m"
                else
#line 5259 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1234 "string.m"
          }
#line 1234 "string.m"
        else
#line 1234 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1234 "string.m"
            {
#line 1234 "string.m"
              MR_Integer mercury__string__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1234 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5274 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1234 "string.m"
              else
#line 1234 "string.m"
                if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5280 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1234 "string.m"
                else
#line 1234 "string.m"
                  if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1234 "string.m"
                    {
#line 1234 "string.m"
                      MR_Integer mercury__string__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__V_44_44 < mercury__string__V_15_15);
#line 69 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 68 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__string__succeeded = (mercury__string__V_44_44 == mercury__string__V_15_15);
#line 74 "private_builtin.opt"
                          if (mercury__string__succeeded)
#line 73 "private_builtin.opt"
                            *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                          else
#line 75 "private_builtin.opt"
                            *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                        }
#line 1234 "string.m"
                    }
#line 1234 "string.m"
                  else
#line 5317 "string.c"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1234 "string.m"
            }
#line 1234 "string.m"
          else
#line 1234 "string.m"
            {
#line 1234 "string.m"
              MR_String mercury__string__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1234 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5330 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1234 "string.m"
              else
#line 1234 "string.m"
                if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5336 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1234 "string.m"
                else
#line 1234 "string.m"
                  if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5342 "string.c"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1234 "string.m"
                  else
#line 1234 "string.m"
                    {
#line 1234 "string.m"
                      MR_String mercury__string__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 1234 "string.m"
                      MR_Integer mercury__string__Res_7_60;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_45_45 ;
	S2 =  mercury__string__V_25_25 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5368 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Res_7_60  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__Res_7_60 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 104 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                      else
#line 110 "private_builtin.opt"
                        {
#line 107 "private_builtin.opt"
                          mercury__string__succeeded = (mercury__string__Res_7_60 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                          if (mercury__string__succeeded)
#line 109 "private_builtin.opt"
                            *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                          else
#line 111 "private_builtin.opt"
                            *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                        }
#line 1234 "string.m"
                    }
#line 1234 "string.m"
            }
#line 1234 "string.m"
  }
#line 1234 "string.m"
}

#line 1234 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0(
#line 1234 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1234 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 1234 "string.m"
{
#line 1234 "string.m"
  {
#line 1234 "string.m"
    MR_bool mercury__string__succeeded;
#line 1234 "string.m"
    MR_Integer mercury__string__CastX_11 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 1234 "string.m"
    MR_Integer mercury__string__CastY_12 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 1234 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_11 == mercury__string__CastY_12);
#line 1234 "string.m"
    if (mercury__string__succeeded)
#line 1234 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 1234 "string.m"
    else
#line 1234 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 1234 "string.m"
        {
#line 1234 "string.m"
          MR_Char mercury__string__V_9_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1234 "string.m"
          MR_Char mercury__string__V_10_10;

#line 1234 "string.m"
          mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1234 "string.m"
          if (mercury__string__succeeded)
#line 1234 "string.m"
            {
#line 1234 "string.m"
              mercury__string__V_10_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5449 "string.c"
              mercury__string__succeeded = (mercury__string__V_9_9 == mercury__string__V_10_10);
#line 1234 "string.m"
            }
#line 1234 "string.m"
        }
#line 1234 "string.m"
      else
#line 1234 "string.m"
        if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1234 "string.m"
          {
#line 1234 "string.m"
            MR_Float mercury__string__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1234 "string.m"
            MR_Float mercury__string__V_4_4;

#line 1234 "string.m"
            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1234 "string.m"
            if (mercury__string__succeeded)
#line 1234 "string.m"
              {
#line 1234 "string.m"
                mercury__string__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5474 "string.c"
                mercury__string__succeeded = (mercury__string__V_3_3 == mercury__string__V_4_4);
#line 1234 "string.m"
              }
#line 1234 "string.m"
          }
#line 1234 "string.m"
        else
#line 1234 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1234 "string.m"
            {
#line 1234 "string.m"
              MR_Integer mercury__string__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1234 "string.m"
              MR_Integer mercury__string__V_6_6;

#line 1234 "string.m"
              mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1234 "string.m"
              if (mercury__string__succeeded)
#line 1234 "string.m"
                {
#line 1234 "string.m"
                  mercury__string__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5499 "string.c"
                  mercury__string__succeeded = (mercury__string__V_5_5 == mercury__string__V_6_6);
#line 1234 "string.m"
                }
#line 1234 "string.m"
            }
#line 1234 "string.m"
          else
#line 1234 "string.m"
            {
#line 1234 "string.m"
              MR_String mercury__string__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1234 "string.m"
              MR_String mercury__string__V_8_8;

#line 1234 "string.m"
              mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1234 "string.m"
              if (mercury__string__succeeded)
#line 1234 "string.m"
                {
#line 1234 "string.m"
                  mercury__string__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5522 "string.c"
                  mercury__string__succeeded = (strcmp(mercury__string__V_7_7, mercury__string__V_8_8) == 0);
#line 1234 "string.m"
                }
#line 1234 "string.m"
            }
#line 1234 "string.m"
    return mercury__string__succeeded;
#line 1234 "string.m"
  }
#line 1234 "string.m"
}

#line 101 "string.m"
void MR_CALL 
mercury__string____Compare____line_0_0(
#line 101 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 101 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 101 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 101 "string.m"
{
#line 101 "string.m"
  {
#line 101 "string.m"
    MR_bool mercury__string__succeeded;
#line 101 "string.m"
    MR_Integer mercury__string__CastX_6 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 101 "string.m"
    MR_Integer mercury__string__CastY_7 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 101 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_6 == mercury__string__CastY_7);
#line 101 "string.m"
    if (mercury__string__succeeded)
#line 5559 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 101 "string.m"
    else
#line 101 "string.m"
      {
#line 101 "string.m"
        MR_String mercury__string__V_4_4 = (MR_String) mercury__string__HeadVar__2_2;
#line 101 "string.m"
        MR_String mercury__string__V_5_5 = (MR_String) mercury__string__HeadVar__3_3;
#line 101 "string.m"
        MR_Integer mercury__string__Res_7_12;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____line_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_4_4 ;
	S2 =  mercury__string__V_5_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5587 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Res_7_12  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__string__succeeded = (mercury__string__Res_7_12 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__string__succeeded)
#line 104 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__string__succeeded = (mercury__string__Res_7_12 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__string__succeeded)
#line 109 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 101 "string.m"
      }
#line 101 "string.m"
  }
#line 101 "string.m"
}

#line 101 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____line_0_0(
#line 101 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 101 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 101 "string.m"
{
#line 101 "string.m"
  {
#line 101 "string.m"
    MR_bool mercury__string__succeeded;
#line 101 "string.m"
    MR_Integer mercury__string__CastX_5 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 101 "string.m"
    MR_Integer mercury__string__CastY_6 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 101 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_5 == mercury__string__CastY_6);
#line 101 "string.m"
    if (mercury__string__succeeded)
#line 101 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 101 "string.m"
    else
#line 101 "string.m"
      {
#line 101 "string.m"
        MR_String mercury__string__V_3_3 = (MR_String) mercury__string__HeadVar__1_1;
#line 101 "string.m"
        MR_String mercury__string__V_4_4 = (MR_String) mercury__string__HeadVar__2_2;

#line 5656 "string.c"
        mercury__string__succeeded = (strcmp(mercury__string__V_3_3, mercury__string__V_4_4) == 0);
#line 101 "string.m"
      }
#line 101 "string.m"
    return mercury__string__succeeded;
#line 101 "string.m"
  }
#line 101 "string.m"
}

#line 4817 "string.m"
void MR_CALL 
mercury__string____Compare____justify_sense_0_0(
#line 4817 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 4817 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 4817 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 4817 "string.m"
{
#line 4817 "string.m"
  {
#line 4817 "string.m"
    MR_bool mercury__string__succeeded;
#line 4817 "string.m"
    MR_Integer mercury__string__Cast_HeadVar1_4 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 4817 "string.m"
    MR_Integer mercury__string__Cast_HeadVar2_5 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__succeeded = (mercury__string__Cast_HeadVar1_4 < mercury__string__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__succeeded = (mercury__string__Cast_HeadVar1_4 == mercury__string__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 4817 "string.m"
  }
#line 4817 "string.m"
}

#line 4817 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0(
#line 4817 "string.m"
  MR_Word mercury__string__HeadVar__2_1,
#line 4817 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 4817 "string.m"
{
#line 5723 "string.c"
  {
#line 5725 "string.c"
    MR_bool mercury__string__succeeded = (mercury__string__HeadVar__2_1 == mercury__string__HeadVar__2_2);

#line 5728 "string.c"
    return mercury__string__succeeded;
#line 5730 "string.c"
  }
#line 4817 "string.m"
}

#line 1028 "string.m"
void MR_CALL 
mercury__string____Compare____justified_column_0_0(
#line 1028 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 1028 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1028 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 1028 "string.m"
{
#line 1028 "string.m"
  {
#line 1028 "string.m"
    MR_bool mercury__string__succeeded;
#line 1028 "string.m"
    MR_Integer mercury__string__CastX_12 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 1028 "string.m"
    MR_Integer mercury__string__CastY_13 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 1028 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_12 == mercury__string__CastY_13);
#line 1028 "string.m"
    if (mercury__string__succeeded)
#line 5759 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 1028 "string.m"
    else
#line 1028 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1028 "string.m"
        {
#line 1028 "string.m"
          MR_Word mercury__string__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1028 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1028 "string.m"
            {
#line 1028 "string.m"
              MR_Word mercury__string__TypeInfo_15_15 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 1028 "string.m"
              MR_Word mercury__string__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 1028 "string.m"
              {
#line 1028 "string.m"
                mercury__builtin__compare_3_p_0(mercury__string__TypeInfo_15_15, mercury__string__HeadVar__1_1, ((MR_Box) (mercury__string__V_16_16)), ((MR_Box) (mercury__string__V_5_5)));
#line 1028 "string.m"
                return;
              }
#line 1028 "string.m"
            }
#line 1028 "string.m"
          else
#line 5790 "string.c"
            *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1028 "string.m"
        }
#line 1028 "string.m"
      else
#line 1028 "string.m"
        {
#line 1028 "string.m"
          MR_Word mercury__string__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1028 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5803 "string.c"
            *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1028 "string.m"
          else
#line 1028 "string.m"
            {
#line 1028 "string.m"
              MR_Word mercury__string__TypeInfo_14_14 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 1028 "string.m"
              MR_Word mercury__string__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 1028 "string.m"
              {
#line 1028 "string.m"
                mercury__builtin__compare_3_p_0(mercury__string__TypeInfo_14_14, mercury__string__HeadVar__1_1, ((MR_Box) (mercury__string__V_17_17)), ((MR_Box) (mercury__string__V_11_11)));
#line 1028 "string.m"
                return;
              }
#line 1028 "string.m"
            }
#line 1028 "string.m"
        }
#line 1028 "string.m"
  }
#line 1028 "string.m"
}

#line 1028 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0(
#line 1028 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1028 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 1028 "string.m"
{
#line 1028 "string.m"
  {
#line 1028 "string.m"
    MR_bool mercury__string__succeeded;
#line 1028 "string.m"
    MR_Integer mercury__string__CastX_7 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 1028 "string.m"
    MR_Integer mercury__string__CastY_8 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 1028 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_7 == mercury__string__CastY_8);
#line 1028 "string.m"
    if (mercury__string__succeeded)
#line 1028 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 1028 "string.m"
    else
#line 1028 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1028 "string.m"
        {
#line 1028 "string.m"
          MR_Word mercury__string__TypeInfo_9_9;
#line 1028 "string.m"
          MR_Word mercury__string__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1028 "string.m"
          MR_Word mercury__string__V_4_4;

#line 1028 "string.m"
          mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1028 "string.m"
          if (mercury__string__succeeded)
#line 1028 "string.m"
            {
#line 1028 "string.m"
              mercury__string__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5875 "string.c"
              mercury__string__TypeInfo_9_9 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 5877 "string.c"
              {
#line 5879 "string.c"
                return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_9_9, ((MR_Box) (mercury__string__V_3_3)), ((MR_Box) (mercury__string__V_4_4)));
              }
#line 1028 "string.m"
            }
#line 1028 "string.m"
        }
#line 1028 "string.m"
      else
#line 1028 "string.m"
        {
#line 1028 "string.m"
          MR_Word mercury__string__TypeInfo_10_10;
#line 1028 "string.m"
          MR_Word mercury__string__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1028 "string.m"
          MR_Word mercury__string__V_6_6;

#line 1028 "string.m"
          mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1028 "string.m"
          if (mercury__string__succeeded)
#line 1028 "string.m"
            {
#line 1028 "string.m"
              mercury__string__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5905 "string.c"
              mercury__string__TypeInfo_10_10 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 5907 "string.c"
              {
#line 5909 "string.c"
                return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_10_10, ((MR_Box) (mercury__string__V_5_5)), ((MR_Box) (mercury__string__V_6_6)));
              }
#line 1028 "string.m"
            }
#line 1028 "string.m"
        }
#line 1028 "string.m"
    return mercury__string__succeeded;
#line 1028 "string.m"
  }
#line 1028 "string.m"
}

#line 5263 "string.m"
MR_Integer MR_CALL 
mercury__string__max_precision_0_f_0(void)
#line 5263 "string.m"
{
#line 5265 "string.m"
  {
#line 5265 "string.m"
    MR_bool mercury__string__succeeded;

#line 5265 "string.m"
    return (MR_Integer) 17;
#line 5265 "string.m"
  }
#line 5263 "string.m"
}

#line 5257 "string.m"
MR_Integer MR_CALL 
mercury__string__min_precision_0_f_0(void)
#line 5257 "string.m"
{
#line 5259 "string.m"
  {
#line 5259 "string.m"
    MR_bool mercury__string__succeeded;

#line 5259 "string.m"
    return (MR_Integer) 15;
#line 5259 "string.m"
  }
#line 5257 "string.m"
}

#line 5239 "string.m"
MR_String MR_CALL 
mercury__string__float_to_string_loop_2_f_0(
#line 5239 "string.m"
  MR_Integer mercury__string__Prec_4,
#line 5239 "string.m"
  MR_Float mercury__string__Float_5)
#line 5239 "string.m"
{
#line 5241 "string.m"
  while (MR_TRUE)
#line 5241 "string.m"
    {
#line 5241 "string.m"
      /* tailcall optimized into a loop */
#line 5241 "string.m"
      {
#line 5241 "string.m"
        MR_bool mercury__string__succeeded;
#line 5241 "string.m"
        MR_String mercury__string__String_6;
#line 5241 "string.m"
        MR_String mercury__string__Tmp_7;
#line 5241 "string.m"
        MR_String mercury__string__V_8_8;
#line 5241 "string.m"
        MR_Word mercury__string__V_9_9;
#line 5241 "string.m"
        MR_String mercury__string__V_11_11;
#line 5241 "string.m"
        MR_String mercury__string__V_12_12;
#line 5241 "string.m"
        MR_Word mercury__string__V_14_14;
#line 5241 "string.m"
        MR_Word mercury__string__V_15_15;

#line 5057 "string.m"
        {
#line 5057 "string.m"
          mercury__string__int_to_base_string_3_p_0(mercury__string__Prec_4, (MR_Integer) 10, &mercury__string__V_12_12);
        }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_12_12 ;
	S2 =  (MR_String) "g" ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6018 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = S3;
#line 3147 "string.m"
}
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "%#." ;
	S2 =  mercury__string__V_11_11 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6045 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3147 "string.m"
}
#line 5242 "string.m"
        {
#line 5242 "string.m"
          mercury__string__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 5242 "string.m"
          MR_hl_field(MR_mktag(0), mercury__string__V_14_14, 0) = MR_box_float(mercury__string__Float_5);
#line 5242 "string.m"
        }
#line 5242 "string.m"
        mercury__string__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5242 "string.m"
        {
#line 5242 "string.m"
          mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5242 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_9_9, 0) = ((MR_Box) (mercury__string__V_14_14));
#line 5242 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_9_9, 1) = ((MR_Box) (mercury__string__V_15_15));
#line 5242 "string.m"
        }
#line 5327 "string.m"
        {
#line 5327 "string.m"
          mercury__string__format__format_impl_3_p_0(mercury__string__V_8_8, mercury__string__V_9_9, &mercury__string__Tmp_7);
        }
#line 5243 "string.m"
        mercury__string__succeeded = (mercury__string__Prec_4 == (MR_Integer) 17);
#line 5245 "string.m"
        if (mercury__string__succeeded)
#line 5244 "string.m"
          mercury__string__String_6 = mercury__string__Tmp_7;
#line 5245 "string.m"
        else
#line 5248 "string.m"
          {
#line 5246 "string.m"
            MR_Float mercury__string__V_19_19;

#line 4933 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__Tmp_7 ;
		{
#line 4933 "string.m"
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}
#line 6112 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__V_19_19  = FloatVal;
#line 4933 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5246 "string.m"
            if (mercury__string__succeeded)
#line 5246 "string.m"
              mercury__string__succeeded = (mercury__string__Float_5 == mercury__string__V_19_19);
#line 5248 "string.m"
            if (mercury__string__succeeded)
#line 5247 "string.m"
              mercury__string__String_6 = mercury__string__Tmp_7;
#line 5248 "string.m"
            else
#line 5249 "string.m"
              {
#line 5249 "string.m"
                MR_Integer mercury__string__V_16_16 = (mercury__string__Prec_4 + (MR_Integer) 1);

#line 5249 "string.m"
                /* direct tailcall eliminated */
#line 5249 "string.m"
                {
#line 5249 "string.m"
                  MR_Integer mercury__string__Prec__tmp_copy_4 = mercury__string__V_16_16;

#line 5249 "string.m"
                  mercury__string__Prec_4 = mercury__string__Prec__tmp_copy_4;
#line 5249 "string.m"
                }
#line 5249 "string.m"
                continue;
#line 5249 "string.m"
              }
#line 5248 "string.m"
          }
#line 5241 "string.m"
        return mercury__string__String_6;
#line 5241 "string.m"
      }
#line 5241 "string.m"
      break;
#line 5241 "string.m"
    }
#line 5239 "string.m"
}

#line 5143 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_group_2_6_p_0(
#line 5143 "string.m"
  MR_Integer mercury__string__NegN_7,
#line 5143 "string.m"
  MR_Integer mercury__string__Base_8,
#line 5143 "string.m"
  MR_Integer mercury__string__Curr_9,
#line 5143 "string.m"
  MR_Integer mercury__string__GroupLength_10,
#line 5143 "string.m"
  MR_String mercury__string__Sep_11,
#line 5143 "string.m"
  MR_String * mercury__string__Str_12)
#line 5143 "string.m"
{
#line 5154 "string.m"
  {
#line 5154 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Curr_9 == mercury__string__GroupLength_10);
#line 5148 "string.m"
    MR_Integer mercury__string__V_19_19;

#line 5148 "string.m"
    if (mercury__string__succeeded)
#line 5148 "string.m"
      {
#line 5149 "string.m"
        mercury__string__V_19_19 = (MR_Integer) 0;
#line 5149 "string.m"
        mercury__string__succeeded = (mercury__string__GroupLength_10 > mercury__string__V_19_19);
#line 5148 "string.m"
      }
#line 5154 "string.m"
    if (mercury__string__succeeded)
#line 5152 "string.m"
      {
#line 5152 "string.m"
        MR_String mercury__string__Str1_13;

#line 5151 "string.m"
        {
#line 5151 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN_7, mercury__string__Base_8, (MR_Integer) 0, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_13);
        }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_13 ;
	S2 =  mercury__string__Sep_11 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6231 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
#line 3147 "string.m"
}
#line 5152 "string.m"
      }
#line 5154 "string.m"
    else
#line 5159 "string.m"
      {
#line 5155 "string.m"
        MR_Integer mercury__string__V_21_21 = ((MR_Integer) 0 - mercury__string__Base_8);

#line 5155 "string.m"
        mercury__string__succeeded = (mercury__string__NegN_7 > mercury__string__V_21_21);
#line 5159 "string.m"
        if (mercury__string__succeeded)
#line 5156 "string.m"
          {
#line 5156 "string.m"
            MR_Integer mercury__string__N_14 = ((MR_Integer) 0 - mercury__string__NegN_7);
#line 5156 "string.m"
            MR_Char mercury__string__DigitChar_15;
#line 5156 "string.m"
            MR_Word mercury__string__V_45_45;
#line 5156 "string.m"
            MR_Word mercury__string__V_46_46;
#line 1440 "string.m"
            MR_String mercury__string__Str0_55;

#line 5157 "string.m"
            {
#line 5157 "string.m"
              mercury__string__DigitChar_15 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N_14);
            }
#line 5047 "string.m"
            mercury__string__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5047 "string.m"
            {
#line 5047 "string.m"
              mercury__string__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5047 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_15));
#line 5047 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 1) = ((MR_Box) (mercury__string__V_46_46));
#line 5047 "string.m"
            }
#line 1438 "string.m"
            {
#line 1438 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_45_45, &mercury__string__Str0_55);
            }
#line 1440 "string.m"
            if (mercury__string__succeeded)
#line 1439 "string.m"
              *mercury__string__Str_12 = mercury__string__Str0_55;
#line 1440 "string.m"
            else
#line 1441 "string.m"
              {
#line 1441 "string.m"
                {
#line 1441 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1441 "string.m"
                  return;
                }
#line 1441 "string.m"
              }
#line 5156 "string.m"
          }
#line 5159 "string.m"
        else
#line 5160 "string.m"
          {
#line 5160 "string.m"
            MR_Integer mercury__string__NegN1_16;
#line 5160 "string.m"
            MR_Integer mercury__string__N10_17;
#line 5160 "string.m"
            MR_String mercury__string__DigitString_18;
#line 5160 "string.m"
            MR_Integer mercury__string__V_22_22;
#line 5160 "string.m"
            MR_Integer mercury__string__V_23_23;
#line 5160 "string.m"
            MR_String mercury__string__Str1_25;
#line 5160 "string.m"
            MR_Char mercury__string__DigitChar_26;
#line 5160 "string.m"
            MR_Word mercury__string__V_65_65;
#line 5160 "string.m"
            MR_Word mercury__string__V_66_66;
#line 1440 "string.m"
            MR_String mercury__string__Str0_75;

#line 292 "int.opt"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 292 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6345 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 292 "int.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 98 "int.opt"
            if (mercury__string__succeeded)
#line 99 "int.opt"
              mercury__string__succeeded = (mercury__string__Base_8 == (MR_Integer) 0);
#line 104 "int.opt"
            if (mercury__string__succeeded)
#line 101 "int.opt"
              {
#line 101 "int.opt"
                MR_Word mercury__string__TypeCtorInfo_9_62 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 101 "int.opt"
                MR_Word mercury__string__V_7_60 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 103 "int.opt"
                {
#line 103 "int.opt"
                  mercury__exception__throw_1_p_0(mercury__string__TypeCtorInfo_9_62, ((MR_Box) (mercury__string__V_7_60)));
#line 103 "int.opt"
                  return;
                }
#line 101 "int.opt"
              }
#line 104 "int.opt"
            else
#line 105 "int.opt"
              mercury__string__NegN1_16 = (mercury__string__NegN_7 / mercury__string__Base_8);
#line 5161 "string.m"
            mercury__string__V_22_22 = (mercury__string__NegN1_16 * mercury__string__Base_8);
#line 5161 "string.m"
            mercury__string__N10_17 = (mercury__string__V_22_22 - mercury__string__NegN_7);
#line 5162 "string.m"
            {
#line 5162 "string.m"
              mercury__string__DigitChar_26 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N10_17);
            }
#line 5047 "string.m"
            mercury__string__V_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5047 "string.m"
            {
#line 5047 "string.m"
              mercury__string__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5047 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_65_65, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_26));
#line 5047 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_65_65, 1) = ((MR_Box) (mercury__string__V_66_66));
#line 5047 "string.m"
            }
#line 1438 "string.m"
            {
#line 1438 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_65_65, &mercury__string__Str0_75);
            }
#line 1440 "string.m"
            if (mercury__string__succeeded)
#line 1439 "string.m"
              mercury__string__DigitString_18 = mercury__string__Str0_75;
#line 1440 "string.m"
            else
#line 1441 "string.m"
              {
#line 1441 "string.m"
                {
#line 1441 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1441 "string.m"
                  return;
                }
#line 1441 "string.m"
              }
#line 5164 "string.m"
            mercury__string__V_23_23 = (mercury__string__Curr_9 + (MR_Integer) 1);
#line 5164 "string.m"
            {
#line 5164 "string.m"
              mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN1_16, mercury__string__Base_8, mercury__string__V_23_23, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_25);
            }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_25 ;
	S2 =  mercury__string__DigitString_18 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6450 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
#line 3147 "string.m"
}
#line 5160 "string.m"
          }
#line 5159 "string.m"
      }
#line 5154 "string.m"
  }
#line 5143 "string.m"
}

#line 5119 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_group_1_5_p_0(
#line 5119 "string.m"
  MR_Integer mercury__string__N_6,
#line 5119 "string.m"
  MR_Integer mercury__string__Base_7,
#line 5119 "string.m"
  MR_Integer mercury__string__GroupLength_8,
#line 5119 "string.m"
  MR_String mercury__string__Sep_9,
#line 5119 "string.m"
  MR_String * mercury__string__Str_10)
#line 5119 "string.m"
{
#line 5129 "string.m"
  {
#line 5129 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__N_6 < (MR_Integer) 0);

#line 5129 "string.m"
    if (mercury__string__succeeded)
#line 5127 "string.m"
      {
#line 5127 "string.m"
        MR_String mercury__string__Str1_11;

#line 5127 "string.m"
        {
#line 5127 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N_6, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str1_11);
        }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_1_5_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "-" ;
	S2 =  mercury__string__Str1_11 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6518 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_10  = S3;
#line 3147 "string.m"
}
#line 5127 "string.m"
      }
#line 5129 "string.m"
    else
#line 5130 "string.m"
      {
#line 5130 "string.m"
        MR_Integer mercury__string__N1_12 = ((MR_Integer) 0 - mercury__string__N_6);

#line 5131 "string.m"
        {
#line 5131 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N1_12, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, mercury__string__Str_10);
#line 5131 "string.m"
          return;
        }
#line 5130 "string.m"
      }
#line 5129 "string.m"
  }
#line 5119 "string.m"
}

#line 5089 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_2_4_p_0(
#line 5089 "string.m"
  MR_Integer mercury__string__NegN_5,
#line 5089 "string.m"
  MR_Integer mercury__string__Base_6,
#line 5089 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevChars_0_12,
#line 5089 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevChars_13)
#line 5089 "string.m"
{
#line 5100 "string.m"
  {
#line 5100 "string.m"
    MR_bool mercury__string__succeeded;
#line 5096 "string.m"
    MR_Integer mercury__string__V_14_14 = ((MR_Integer) 0 - mercury__string__Base_6);

#line 5096 "string.m"
    mercury__string__succeeded = (mercury__string__NegN_5 > mercury__string__V_14_14);
#line 5100 "string.m"
    if (mercury__string__succeeded)
#line 5097 "string.m"
      {
#line 5097 "string.m"
        MR_Integer mercury__string__N_8 = ((MR_Integer) 0 - mercury__string__NegN_5);
#line 5097 "string.m"
        MR_Char mercury__string__DigitChar_9;

#line 5098 "string.m"
        {
#line 5098 "string.m"
          mercury__string__DigitChar_9 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N_8);
        }
#line 5099 "string.m"
        {
#line 5099 "string.m"
          MR_Word base;
#line 5099 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5099 "string.m"
          *mercury__string__STATE_VARIABLE_RevChars_13 = base;
#line 5099 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_9));
#line 5099 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_0_12));
#line 5099 "string.m"
        }
#line 5097 "string.m"
      }
#line 5100 "string.m"
    else
#line 5101 "string.m"
      {
#line 5101 "string.m"
        MR_Integer mercury__string__NegN1_10;
#line 5101 "string.m"
        MR_Integer mercury__string__N10_11;
#line 5101 "string.m"
        MR_Integer mercury__string__V_16_16;
#line 5101 "string.m"
        MR_Word mercury__string__STATE_VARIABLE_RevChars_17_17;
#line 5101 "string.m"
        MR_Char mercury__string__DigitChar_19;

#line 292 "int.opt"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_2_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 292 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6630 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 292 "int.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 98 "int.opt"
        if (mercury__string__succeeded)
#line 99 "int.opt"
          mercury__string__succeeded = (mercury__string__Base_6 == (MR_Integer) 0);
#line 104 "int.opt"
        if (mercury__string__succeeded)
#line 101 "int.opt"
          {
#line 101 "int.opt"
            MR_Word mercury__string__TypeCtorInfo_9_25 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 101 "int.opt"
            MR_Word mercury__string__V_7_23 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 103 "int.opt"
            {
#line 103 "int.opt"
              mercury__exception__throw_1_p_0(mercury__string__TypeCtorInfo_9_25, ((MR_Box) (mercury__string__V_7_23)));
#line 103 "int.opt"
              return;
            }
#line 101 "int.opt"
          }
#line 104 "int.opt"
        else
#line 105 "int.opt"
          mercury__string__NegN1_10 = (mercury__string__NegN_5 / mercury__string__Base_6);
#line 5102 "string.m"
        mercury__string__V_16_16 = (mercury__string__NegN1_10 * mercury__string__Base_6);
#line 5102 "string.m"
        mercury__string__N10_11 = (mercury__string__V_16_16 - mercury__string__NegN_5);
#line 5103 "string.m"
        {
#line 5103 "string.m"
          mercury__string__DigitChar_19 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N10_11);
        }
#line 5104 "string.m"
        {
#line 5104 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN1_10, mercury__string__Base_6, mercury__string__STATE_VARIABLE_RevChars_0_12, &mercury__string__STATE_VARIABLE_RevChars_17_17);
        }
#line 5105 "string.m"
        {
#line 5105 "string.m"
          MR_Word base;
#line 5105 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5105 "string.m"
          *mercury__string__STATE_VARIABLE_RevChars_13 = base;
#line 5105 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_19));
#line 5105 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_17_17));
#line 5105 "string.m"
        }
#line 5101 "string.m"
      }
#line 5100 "string.m"
  }
#line 5089 "string.m"
}

#line 5075 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_1_3_p_0(
#line 5075 "string.m"
  MR_Integer mercury__string__N_4,
#line 5075 "string.m"
  MR_Integer mercury__string__Base_5,
#line 5075 "string.m"
  MR_String * mercury__string__Str_6)
#line 5075 "string.m"
{
#line 5077 "string.m"
  {
#line 5077 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__N_4 < (MR_Integer) 0);
#line 5077 "string.m"
    MR_Word mercury__string__RevChars_7;
#line 1578 "string.m"
    MR_String mercury__string__Str0_17;

#line 5083 "string.m"
    if (mercury__string__succeeded)
#line 5082 "string.m"
      {
#line 5082 "string.m"
        MR_Word mercury__string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[4]);
#line 5082 "string.m"
        MR_Word mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 5082 "string.m"
        {
#line 5082 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__V_10_10, &mercury__string__RevChars_7);
        }
#line 5082 "string.m"
      }
#line 5083 "string.m"
    else
#line 5084 "string.m"
      {
#line 5084 "string.m"
        MR_Integer mercury__string__NegN_8 = ((MR_Integer) 0 - mercury__string__N_4);
#line 5084 "string.m"
        MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 5085 "string.m"
        {
#line 5085 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN_8, mercury__string__Base_5, mercury__string__V_14_14, &mercury__string__RevChars_7);
        }
#line 5084 "string.m"
      }
#line 1576 "string.m"
    {
#line 1576 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__RevChars_7, &mercury__string__Str0_17);
    }
#line 1578 "string.m"
    if (mercury__string__succeeded)
#line 1577 "string.m"
      *mercury__string__Str_6 = mercury__string__Str0_17;
#line 1578 "string.m"
    else
#line 1579 "string.m"
      {
#line 1579 "string.m"
        {
#line 1579 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
#line 1579 "string.m"
          return;
        }
#line 1579 "string.m"
      }
#line 5077 "string.m"
  }
#line 5075 "string.m"
}

#line 4914 "string.m"
MR_bool MR_CALL 
mercury__string__accumulate_negative_int_4_p_0(
#line 4914 "string.m"
  MR_Integer mercury__string__Base_5,
#line 4914 "string.m"
  MR_Char mercury__string__Char_6,
#line 4914 "string.m"
  MR_Integer mercury__string__N0_7,
#line 4914 "string.m"
  MR_Integer * mercury__string__N_8)
#line 4914 "string.m"
{
#line 4917 "string.m"
  {
#line 4917 "string.m"
    MR_bool mercury__string__succeeded;
#line 4917 "string.m"
    MR_Integer mercury__string__M_9;
#line 4917 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 4918 "string.m"
    {
#line 4918 "string.m"
      mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    }
#line 4917 "string.m"
    if (mercury__string__succeeded)
#line 4917 "string.m"
      {
#line 4919 "string.m"
        mercury__string__V_10_10 = (mercury__string__Base_5 * mercury__string__N0_7);
#line 4919 "string.m"
        *mercury__string__N_8 = (mercury__string__V_10_10 - mercury__string__M_9);
#line 4920 "string.m"
        mercury__string__succeeded = (*mercury__string__N_8 <= mercury__string__N0_7);
#line 4920 "string.m"
        if (!(mercury__string__succeeded))
#line 4920 "string.m"
          {
#line 4920 "string.m"
            mercury__string__succeeded = (mercury__string__Base_5 == (MR_Integer) 10);
#line 4920 "string.m"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4920 "string.m"
          }
#line 4917 "string.m"
      }
#line 4917 "string.m"
    return mercury__string__succeeded;
#line 4917 "string.m"
  }
#line 4914 "string.m"
}

#line 4907 "string.m"
MR_bool MR_CALL 
mercury__string__accumulate_int_4_p_0(
#line 4907 "string.m"
  MR_Integer mercury__string__Base_5,
#line 4907 "string.m"
  MR_Char mercury__string__Char_6,
#line 4907 "string.m"
  MR_Integer mercury__string__N0_7,
#line 4907 "string.m"
  MR_Integer * mercury__string__N_8)
#line 4907 "string.m"
{
#line 4909 "string.m"
  {
#line 4909 "string.m"
    MR_bool mercury__string__succeeded;
#line 4909 "string.m"
    MR_Integer mercury__string__M_9;
#line 4909 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 4910 "string.m"
    {
#line 4910 "string.m"
      mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    }
#line 4909 "string.m"
    if (mercury__string__succeeded)
#line 4909 "string.m"
      {
#line 4911 "string.m"
        mercury__string__V_10_10 = (mercury__string__Base_5 * mercury__string__N0_7);
#line 4911 "string.m"
        *mercury__string__N_8 = (mercury__string__V_10_10 + mercury__string__M_9);
#line 4912 "string.m"
        mercury__string__succeeded = (mercury__string__N0_7 <= *mercury__string__N_8);
#line 4912 "string.m"
        if (!(mercury__string__succeeded))
#line 4912 "string.m"
          {
#line 4912 "string.m"
            mercury__string__succeeded = (mercury__string__Base_5 == (MR_Integer) 10);
#line 4912 "string.m"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4912 "string.m"
          }
#line 4909 "string.m"
      }
#line 4909 "string.m"
    return mercury__string__succeeded;
#line 4909 "string.m"
  }
#line 4907 "string.m"
}

#line 4860 "string.m"
void MR_CALL 
mercury__string__max_str_length_3_p_0(
#line 4860 "string.m"
  MR_String mercury__string__Str_4,
#line 4860 "string.m"
  MR_Integer mercury__string__PrevMaxLen_5,
#line 4860 "string.m"
  MR_Integer * mercury__string__MaxLen_6)
#line 4860 "string.m"
{
#line 4862 "string.m"
  {
#line 4862 "string.m"
    MR_bool mercury__string__succeeded;
#line 4862 "string.m"
    MR_Integer mercury__string__Length_7;

#line 2458 "string.m"
    {
#line 2458 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_4, &mercury__string__Length_7);
    }
#line 4864 "string.m"
    mercury__string__succeeded = (mercury__string__Length_7 > mercury__string__PrevMaxLen_5);
#line 4866 "string.m"
    if (mercury__string__succeeded)
#line 4865 "string.m"
      *mercury__string__MaxLen_6 = mercury__string__Length_7;
#line 4866 "string.m"
    else
#line 4867 "string.m"
      *mercury__string__MaxLen_6 = mercury__string__PrevMaxLen_5;
#line 4862 "string.m"
  }
#line 4860 "string.m"
}

#line 4856 "string.m"
MR_String MR_CALL 
mercury__string__lpad_3_f_0(
#line 4856 "string.m"
  MR_Char mercury__string__Chr_5,
#line 4856 "string.m"
  MR_Integer mercury__string__N_6,
#line 4856 "string.m"
  MR_String mercury__string__Str_7)
#line 4856 "string.m"
{
#line 4328 "string.m"
  {
#line 4328 "string.m"
    MR_bool mercury__string__succeeded;
#line 4328 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4328 "string.m"
    MR_Integer mercury__string__Length_16;

#line 4329 "string.m"
    {
#line 4329 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    }
#line 4330 "string.m"
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
#line 4334 "string.m"
    if (mercury__string__succeeded)
#line 4331 "string.m"
      {
#line 4331 "string.m"
        MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
#line 4331 "string.m"
        MR_String mercury__string__PadString_18;

#line 4332 "string.m"
        {
#line 4332 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
        }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__lpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_18 ;
	S2 =  mercury__string__Str_7 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6990 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3147 "string.m"
}
#line 4331 "string.m"
      }
#line 4334 "string.m"
    else
#line 4335 "string.m"
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
#line 4328 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4328 "string.m"
  }
#line 4856 "string.m"
}

#line 4852 "string.m"
MR_String MR_CALL 
mercury__string__rpad_3_f_0(
#line 4852 "string.m"
  MR_Char mercury__string__Chr_5,
#line 4852 "string.m"
  MR_Integer mercury__string__N_6,
#line 4852 "string.m"
  MR_String mercury__string__Str_7)
#line 4852 "string.m"
{
#line 4341 "string.m"
  {
#line 4341 "string.m"
    MR_bool mercury__string__succeeded;
#line 4341 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4341 "string.m"
    MR_Integer mercury__string__Length_16;

#line 4342 "string.m"
    {
#line 4342 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    }
#line 4343 "string.m"
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
#line 4347 "string.m"
    if (mercury__string__succeeded)
#line 4344 "string.m"
      {
#line 4344 "string.m"
        MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
#line 4344 "string.m"
        MR_String mercury__string__PadString_18;

#line 4345 "string.m"
        {
#line 4345 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
        }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__rpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str_7 ;
	S2 =  mercury__string__PadString_18 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7071 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3147 "string.m"
}
#line 4344 "string.m"
      }
#line 4347 "string.m"
    else
#line 4348 "string.m"
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
#line 4341 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4341 "string.m"
  }
#line 4852 "string.m"
}

#line 4845 "string.m"
MR_Word MR_CALL 
mercury__string__pad_column_2_f_0(
#line 4845 "string.m"
  MR_Integer mercury__string__Width_1,
#line 4845 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 4845 "string.m"
{
#line 4847 "string.m"
  {
#line 4847 "string.m"
    MR_bool mercury__string__succeeded;
#line 4847 "string.m"
    MR_Word mercury__string__HeadVar__3_3;

#line 4847 "string.m"
    if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 4847 "string.m"
      {
#line 4847 "string.m"
        MR_Word mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 4848 "string.m"
        {
#line 4848 "string.m"
          return mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_5);
        }
#line 4847 "string.m"
      }
#line 4847 "string.m"
    else
#line 4849 "string.m"
      {
#line 4849 "string.m"
        MR_Word mercury__string__Strings_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 4850 "string.m"
        {
#line 4850 "string.m"
          return mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_9);
        }
#line 4849 "string.m"
      }
#line 4847 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4847 "string.m"
  }
#line 4845 "string.m"
}

#line 4821 "string.m"
MR_Word MR_CALL 
mercury__string__find_max_length_with_limit_1_f_0(
#line 4821 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4821 "string.m"
{
#line 4824 "string.m"
  {
#line 4824 "string.m"
    MR_bool mercury__string__succeeded;
#line 4824 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4824 "string.m"
    MR_Word mercury__string__JustColumn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4824 "string.m"
    MR_Word mercury__string__MaybeLimit_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4824 "string.m"
    MR_Word mercury__string__Sense_5;
#line 4824 "string.m"
    MR_Integer mercury__string__MaxLength_6;
#line 4824 "string.m"
    MR_Word mercury__string__Strings_7;
#line 4824 "string.m"
    MR_Integer mercury__string__MaxLength0_8;

#line 4828 "string.m"
    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
#line 4826 "string.m"
      {
#line 4826 "string.m"
        mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4827 "string.m"
        mercury__string__Sense_5 = (MR_Integer) 0;
#line 4826 "string.m"
      }
#line 4828 "string.m"
    else
#line 4829 "string.m"
      {
#line 4829 "string.m"
        mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4830 "string.m"
        mercury__string__Sense_5 = (MR_Integer) 1;
#line 4829 "string.m"
      }
#line 4832 "string.m"
    {
#line 4832 "string.m"
      mercury__string__foldl__ho8_4_p_in__list_0(mercury__string__Strings_7, (MR_Integer) 0, &mercury__string__MaxLength0_8);
    }
#line 4840 "string.m"
    if ((mercury__string__MaybeLimit_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4842 "string.m"
      mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
#line 4840 "string.m"
    else
#line 4834 "string.m"
      {
#line 4834 "string.m"
        MR_Integer mercury__string__Limit_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__MaybeLimit_4, (MR_Integer) 0)));

#line 4835 "string.m"
        mercury__string__succeeded = (mercury__string__MaxLength0_8 > mercury__string__Limit_9);
#line 4837 "string.m"
        if (mercury__string__succeeded)
#line 4836 "string.m"
          mercury__string__MaxLength_6 = mercury__string__Limit_9;
#line 4837 "string.m"
        else
#line 4838 "string.m"
          mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
#line 4834 "string.m"
      }
#line 4824 "string.m"
    {
#line 4824 "string.m"
      mercury__string__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4824 "string.m"
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__Sense_5));
#line 4824 "string.m"
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 1) = ((MR_Box) (mercury__string__MaxLength_6));
#line 4824 "string.m"
    }
#line 4824 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4824 "string.m"
  }
#line 4821 "string.m"
}

#line 4809 "string.m"
MR_Integer MR_CALL 
mercury__string__find_max_length_1_f_0(
#line 4809 "string.m"
  MR_Word mercury__string__JustColumn_3)
#line 4809 "string.m"
{
#line 4811 "string.m"
  {
#line 4811 "string.m"
    MR_bool mercury__string__succeeded;
#line 4811 "string.m"
    MR_Integer mercury__string__MaxLength_4;
#line 4811 "string.m"
    MR_Word mercury__string__Strings_5;

#line 4813 "string.m"
    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
#line 4812 "string.m"
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4813 "string.m"
    else
#line 4813 "string.m"
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4815 "string.m"
    {
#line 4815 "string.m"
      mercury__string__foldl__ho8_4_p_in__list_0(mercury__string__Strings_5, (MR_Integer) 0, &mercury__string__MaxLength_4);
    }
#line 4811 "string.m"
    return mercury__string__MaxLength_4;
#line 4811 "string.m"
  }
#line 4809 "string.m"
}

#line 4805 "string.m"
MR_String MR_CALL 
mercury__string__join_rev_columns_3_f_0(
#line 4805 "string.m"
  MR_String mercury__string__Separator_5,
#line 4805 "string.m"
  MR_String mercury__string__Col1_6,
#line 4805 "string.m"
  MR_String mercury__string__Col2_7)
#line 4805 "string.m"
{
#line 4807 "string.m"
  {
#line 4807 "string.m"
    MR_bool mercury__string__succeeded;
#line 4807 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4807 "string.m"
    MR_String mercury__string__V_8_8;

#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Separator_5 ;
	S2 =  mercury__string__Col1_6 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7309 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3147 "string.m"
}
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Col2_7 ;
	S2 =  mercury__string__V_8_8 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7336 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3147 "string.m"
}
#line 4807 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4807 "string.m"
  }
#line 4805 "string.m"
}

#line 4766 "string.m"
void MR_CALL 
mercury__string__pad_row_6_p_0(
#line 4766 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4766 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 4766 "string.m"
  MR_String mercury__string__Separator_3,
#line 4766 "string.m"
  MR_Integer mercury__string__SepLen_4,
#line 4766 "string.m"
  MR_Integer mercury__string__CurColumn_5,
#line 4766 "string.m"
  MR_String * mercury__string__HeadVar__6_6)
#line 4766 "string.m"
{
#line 4769 "string.m"
  {
#line 4769 "string.m"
    MR_bool mercury__string__succeeded;

#line 4769 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4769 "string.m"
      if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4769 "string.m"
        *mercury__string__HeadVar__6_6 = (MR_String) "";
#line 4769 "string.m"
      else
#line 4800 "string.m"
        {
#line 4801 "string.m"
          {
#line 4801 "string.m"
            mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
#line 4801 "string.m"
            return;
          }
#line 4800 "string.m"
        }
#line 4769 "string.m"
    else
#line 4769 "string.m"
      {
#line 4769 "string.m"
        MR_Word mercury__string__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4769 "string.m"
        MR_Word mercury__string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));

#line 4769 "string.m"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4802 "string.m"
          {
#line 4803 "string.m"
            {
#line 4803 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
#line 4803 "string.m"
              return;
            }
#line 4802 "string.m"
          }
#line 4769 "string.m"
        else
#line 4771 "string.m"
          {
#line 4771 "string.m"
            MR_Word mercury__string__Justify_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_55_55, (MR_Integer) 0)));
#line 4771 "string.m"
            MR_Integer mercury__string__MaxWidth_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__V_55_55, (MR_Integer) 1)));
#line 4771 "string.m"
            MR_String mercury__string__ColumnStr0_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 4771 "string.m"
            MR_Word mercury__string__ColumnStrs0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 4771 "string.m"
            MR_Integer mercury__string__NextColumn_19;
#line 4771 "string.m"
            MR_String mercury__string__LineRest_20;
#line 4771 "string.m"
            MR_Integer mercury__string__V_27_27 = (mercury__string__CurColumn_5 + mercury__string__MaxWidth_11);
#line 4775 "string.m"
            MR_Integer mercury__string__V_28_28;

#line 4772 "string.m"
            mercury__string__NextColumn_19 = (mercury__string__V_27_27 + mercury__string__SepLen_4);
#line 4773 "string.m"
            {
#line 4773 "string.m"
              mercury__string__pad_row_6_p_0(mercury__string__V_54_54, mercury__string__ColumnStrs0_14, mercury__string__Separator_3, mercury__string__SepLen_4, mercury__string__NextColumn_19, &mercury__string__LineRest_20);
            }
#line 2458 "string.m"
            {
#line 2458 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__V_28_28);
            }
#line 4775 "string.m"
            mercury__string__succeeded = (mercury__string__V_28_28 <= mercury__string__MaxWidth_11);
#line 4790 "string.m"
            if (mercury__string__succeeded)
#line 4782 "string.m"
              {
#line 4782 "string.m"
                MR_String mercury__string__ColumnStr_21;

#line 4779 "string.m"
                if ((mercury__string__Justify_10 == (MR_Integer) 0))
#line 4777 "string.m"
                  {
#line 4777 "string.m"
                    MR_Integer mercury__string__Length_66;

#line 4342 "string.m"
                    {
#line 4342 "string.m"
                      mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__Length_66);
                    }
#line 4343 "string.m"
                    mercury__string__succeeded = (mercury__string__Length_66 < mercury__string__MaxWidth_11);
#line 4347 "string.m"
                    if (mercury__string__succeeded)
#line 4344 "string.m"
                      {
#line 4344 "string.m"
                        MR_Integer mercury__string__Count_67 = (mercury__string__MaxWidth_11 - mercury__string__Length_66);
#line 4344 "string.m"
                        MR_String mercury__string__PadString_68;

#line 4345 "string.m"
                        {
#line 4345 "string.m"
                          mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__Count_67, &mercury__string__PadString_68);
                        }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_row_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__ColumnStr0_13 ;
	S2 =  mercury__string__PadString_68 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7503 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ColumnStr_21  = S3;
#line 3147 "string.m"
}
#line 4344 "string.m"
                      }
#line 4347 "string.m"
                    else
#line 4348 "string.m"
                      mercury__string__ColumnStr_21 = mercury__string__ColumnStr0_13;
#line 4777 "string.m"
                  }
#line 4779 "string.m"
                else
#line 4780 "string.m"
                  {
#line 4781 "string.m"
                    {
#line 4781 "string.m"
                      mercury__string__ColumnStr_21 = mercury__string__pad_left_3_f_0(mercury__string__ColumnStr0_13, (MR_Char) 32, mercury__string__MaxWidth_11);
                    }
#line 4780 "string.m"
                  }
#line 4786 "string.m"
                if ((mercury__string__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4784 "string.m"
                  *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr_21;
#line 4786 "string.m"
                else
#line 4787 "string.m"
                  {
#line 4787 "string.m"
                    MR_String mercury__string__V_31_31;

#line 4788 "string.m"
                    {
#line 4788 "string.m"
                      mercury__string__V_31_31 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__LineRest_20);
                    }
#line 4788 "string.m"
                    {
#line 4788 "string.m"
                      *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr_21, mercury__string__V_31_31);
                    }
#line 4787 "string.m"
                  }
#line 4782 "string.m"
              }
#line 4790 "string.m"
            else
#line 4794 "string.m"
              if ((mercury__string__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4792 "string.m"
                *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr0_13;
#line 4794 "string.m"
              else
#line 4795 "string.m"
                {
#line 4795 "string.m"
                  MR_String mercury__string__V_32_32;
#line 4795 "string.m"
                  MR_String mercury__string__V_33_33;
#line 4795 "string.m"
                  MR_String mercury__string__V_35_35;
#line 4795 "string.m"
                  MR_String mercury__string__V_36_36;

#line 1825 "string.m"
                  {
#line 1825 "string.m"
                    mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__NextColumn_19, &mercury__string__V_36_36);
                  }
#line 4797 "string.m"
                  {
#line 4797 "string.m"
                    mercury__string__V_35_35 = mercury__string__f_43_43_2_f_0(mercury__string__V_36_36, mercury__string__LineRest_20);
                  }
#line 4796 "string.m"
                  {
#line 4796 "string.m"
                    mercury__string__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mercury__string__V_35_35);
                  }
#line 4796 "string.m"
                  {
#line 4796 "string.m"
                    mercury__string__V_32_32 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__V_33_33);
                  }
#line 4796 "string.m"
                  {
#line 4796 "string.m"
                    *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr0_13, mercury__string__V_32_32);
                  }
#line 4795 "string.m"
                }
#line 4771 "string.m"
          }
#line 4769 "string.m"
      }
#line 4769 "string.m"
  }
#line 4766 "string.m"
}

#line 4752 "string.m"
void MR_CALL 
mercury__string__get_next_line_3_p_0(
#line 4752 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4752 "string.m"
  MR_Word * mercury__string__HeadVar__2_2,
#line 4752 "string.m"
  MR_Word * mercury__string__HeadVar__3_3)
#line 4752 "string.m"
{
#line 4755 "string.m"
  {
#line 4755 "string.m"
    MR_bool mercury__string__succeeded;

#line 4755 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4755 "string.m"
      {
#line 4755 "string.m"
        *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4755 "string.m"
        *mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4755 "string.m"
      }
#line 4755 "string.m"
    else
#line 4757 "string.m"
      {
#line 4757 "string.m"
        MR_Word mercury__string__Column_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4757 "string.m"
        MR_Word mercury__string__Columns_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4757 "string.m"
        MR_String mercury__string__ColumnTop_6;
#line 4757 "string.m"
        MR_Word mercury__string__ColumnTops_7;
#line 4757 "string.m"
        MR_Word mercury__string__ColumnRest_8;
#line 4757 "string.m"
        MR_Word mercury__string__ColumnRests_9;

#line 4761 "string.m"
        if ((mercury__string__Column_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4759 "string.m"
          {
#line 4760 "string.m"
            {
#line 4760 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.get_next_line\'/3", (MR_String) "list length mismatch");
#line 4760 "string.m"
              return;
            }
#line 4759 "string.m"
          }
#line 4761 "string.m"
        else
#line 4762 "string.m"
          {
#line 4762 "string.m"
            mercury__string__ColumnTop_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 0)));
#line 4762 "string.m"
            mercury__string__ColumnRest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 1)));
#line 4762 "string.m"
          }
#line 4764 "string.m"
        {
#line 4764 "string.m"
          mercury__string__get_next_line_3_p_0(mercury__string__Columns_5, &mercury__string__ColumnTops_7, &mercury__string__ColumnRests_9);
        }
#line 4756 "string.m"
        {
#line 4756 "string.m"
          MR_Word base;
#line 4756 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4756 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4756 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnTop_6));
#line 4756 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnTops_7));
#line 4756 "string.m"
        }
#line 4757 "string.m"
        {
#line 4757 "string.m"
          MR_Word base;
#line 4757 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4757 "string.m"
          *mercury__string__HeadVar__3_3 = base;
#line 4757 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnRest_8));
#line 4757 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnRests_9));
#line 4757 "string.m"
        }
#line 4757 "string.m"
      }
#line 4755 "string.m"
  }
#line 4752 "string.m"
}

#line 4745 "string.m"
MR_bool MR_CALL 
mercury__string__all_empty_1_p_0(
#line 4745 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4745 "string.m"
{
#line 4747 "string.m"
  while (MR_TRUE)
#line 4747 "string.m"
    {
#line 4747 "string.m"
      /* tailcall optimized into a loop */
#line 4747 "string.m"
      {
#line 4747 "string.m"
        MR_bool mercury__string__succeeded;

#line 4747 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4747 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4747 "string.m"
        else
#line 4748 "string.m"
          {
#line 4748 "string.m"
            MR_Word mercury__string__List_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4748 "string.m"
            MR_Word mercury__string__Lists_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

#line 4749 "string.m"
            mercury__string__succeeded = (mercury__string__List_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 4748 "string.m"
            if (mercury__string__succeeded)
#line 4750 "string.m"
              {
#line 4750 "string.m"
                /* direct tailcall eliminated */
#line 4750 "string.m"
                {
#line 4750 "string.m"
                  MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__Lists_3;

#line 4750 "string.m"
                  mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 4750 "string.m"
                }
#line 4750 "string.m"
                continue;
#line 4750 "string.m"
              }
#line 4748 "string.m"
          }
#line 4747 "string.m"
        return mercury__string__succeeded;
#line 4747 "string.m"
      }
#line 4747 "string.m"
      break;
#line 4747 "string.m"
    }
#line 4745 "string.m"
}

#line 4732 "string.m"
void MR_CALL 
mercury__string__generate_rows_6_p_0(
#line 4732 "string.m"
  MR_Word mercury__string__MaxWidthsSenses_7,
#line 4732 "string.m"
  MR_String mercury__string__Separator_8,
#line 4732 "string.m"
  MR_Integer mercury__string__SepLen_9,
#line 4732 "string.m"
  MR_Word mercury__string__Columns0_10,
#line 4732 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevRows_0_15,
#line 4732 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevRows_16)
#line 4732 "string.m"
{
#line 4738 "string.m"
  while (MR_TRUE)
#line 4738 "string.m"
    {
#line 4738 "string.m"
      /* tailcall optimized into a loop */
#line 4738 "string.m"
      {
#line 4738 "string.m"
        MR_bool mercury__string__succeeded;

#line 4736 "string.m"
        {
#line 4736 "string.m"
          mercury__string__succeeded = mercury__string__all_empty_1_p_0(mercury__string__Columns0_10);
        }
#line 4738 "string.m"
        if (mercury__string__succeeded)
#line 4736 "string.m"
          *mercury__string__STATE_VARIABLE_RevRows_16 = mercury__string__STATE_VARIABLE_RevRows_0_15;
#line 4738 "string.m"
        else
#line 4739 "string.m"
          {
#line 4739 "string.m"
            MR_Word mercury__string__Line_12;
#line 4739 "string.m"
            MR_Word mercury__string__Columns_13;
#line 4739 "string.m"
            MR_String mercury__string__Row_14;
#line 4739 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_RevRows_18_18;

#line 4739 "string.m"
            {
#line 4739 "string.m"
              mercury__string__get_next_line_3_p_0(mercury__string__Columns0_10, &mercury__string__Line_12, &mercury__string__Columns_13);
            }
#line 4740 "string.m"
            {
#line 4740 "string.m"
              mercury__string__pad_row_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Line_12, mercury__string__Separator_8, mercury__string__SepLen_9, (MR_Integer) 0, &mercury__string__Row_14);
            }
#line 4741 "string.m"
            {
#line 4741 "string.m"
              mercury__string__STATE_VARIABLE_RevRows_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4741 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 0) = ((MR_Box) (mercury__string__Row_14));
#line 4741 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevRows_0_15));
#line 4741 "string.m"
            }
#line 4742 "string.m"
            /* direct tailcall eliminated */
#line 4742 "string.m"
            {
#line 4742 "string.m"
              MR_Word mercury__string__Columns0__tmp_copy_10 = mercury__string__Columns_13;
#line 4742 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_RevRows_0__tmp_copy_15 = mercury__string__STATE_VARIABLE_RevRows_18_18;

#line 4742 "string.m"
              mercury__string__STATE_VARIABLE_RevRows_0_15 = mercury__string__STATE_VARIABLE_RevRows_0__tmp_copy_15;
#line 4742 "string.m"
              mercury__string__Columns0_10 = mercury__string__Columns0__tmp_copy_10;
#line 4742 "string.m"
            }
#line 4742 "string.m"
            continue;
#line 4739 "string.m"
          }
#line 4738 "string.m"
      }
#line 4738 "string.m"
      break;
#line 4738 "string.m"
    }
#line 4732 "string.m"
}

#line 4726 "string.m"
MR_Word MR_CALL 
mercury__string__project_column_strings_1_f_0(
#line 4726 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4726 "string.m"
{
#line 4729 "string.m"
  {
#line 4729 "string.m"
    MR_bool mercury__string__succeeded;
#line 4729 "string.m"
    MR_Word mercury__string__Strings_2;
#line 4729 "string.m"
    MR_Word mercury__string__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4729 "string.m"
    MR_Word mercury__string__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

#line 4729 "string.m"
    if (((MR_tag((MR_Word) mercury__string__V_10_10)) == (MR_mktag((MR_Integer) 0))))
#line 4729 "string.m"
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_10_10, (MR_Integer) 0)));
#line 4729 "string.m"
    else
#line 4730 "string.m"
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_10_10, (MR_Integer) 0)));
#line 4729 "string.m"
    return mercury__string__Strings_2;
#line 4729 "string.m"
  }
#line 4726 "string.m"
}

#line 4671 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
#line 4671 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4671 "string.m"
{
#line 4671 "string.m"
  {
#line 4671 "string.m"
    struct mercury__string__foldr_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4672 "string.m"
    {
#line 4672 "string.m"
      mercury__string__foldr_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
#line 4672 "string.m"
      return;
    }
#line 4671 "string.m"
  }
#line 4671 "string.m"
}

#line 4662 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_4(
#line 4662 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4662 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4662 "string.m"
  MR_String mercury__string__String_8,
#line 4662 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4662 "string.m"
  MR_Integer mercury__string__I_10,
#line 4662 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4662 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4662 "string.m"
  MR_Cont mercury__string__cont,
#line 4662 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4662 "string.m"
{
#line 4662 "string.m"
  {
#line 4662 "string.m"
    struct mercury__string__foldr_between_2_6_p_4_env_0_s mercury__string__env;

#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9 = mercury__string__Start_9;
#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont = mercury__string__cont;
#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4673 "string.m"
    {
#line 4673 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
#line 4673 "string.m"
      MR_Char mercury__string__Char_13;

#line 4667 "string.m"
      if (mercury__string__succeeded)
#line 4667 "string.m"
        {
#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_4

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__String_8 ;
	Index =  mercury__string__I_10 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 8016 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4667 "string.m"
          if (mercury__string__succeeded)
#line 4669 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
#line 4667 "string.m"
        }
#line 4673 "string.m"
      if (mercury__string__succeeded)
#line 4671 "string.m"
        {
#line 4671 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

#line 4671 "string.m"
          {
#line 4671 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_4_1, &mercury__string__env);
          }
#line 4671 "string.m"
        }
#line 4673 "string.m"
      else
#line 4672 "string.m"
        {
#line 4672 "string.m"
          *((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4672 "string.m"
          {
#line 4672 "string.m"
            ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
#line 4672 "string.m"
            return;
          }
#line 4672 "string.m"
        }
#line 4673 "string.m"
    }
#line 4662 "string.m"
  }
#line 4662 "string.m"
}

#line 4671 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
#line 4671 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4671 "string.m"
{
#line 4671 "string.m"
  {
#line 4671 "string.m"
    struct mercury__string__foldr_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 4672 "string.m"
    {
#line 4672 "string.m"
      mercury__string__foldr_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
#line 4672 "string.m"
      return;
    }
#line 4671 "string.m"
  }
#line 4671 "string.m"
}

#line 4660 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_3(
#line 4660 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4660 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4660 "string.m"
  MR_String mercury__string__String_8,
#line 4660 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4660 "string.m"
  MR_Integer mercury__string__I_10,
#line 4660 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4660 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4660 "string.m"
  MR_Cont mercury__string__cont,
#line 4660 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4660 "string.m"
{
#line 4660 "string.m"
  {
#line 4660 "string.m"
    struct mercury__string__foldr_between_2_6_p_3_env_0_s mercury__string__env;

#line 4660 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
#line 4660 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
#line 4660 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
#line 4660 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9 = mercury__string__Start_9;
#line 4660 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4660 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont = mercury__string__cont;
#line 4660 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4673 "string.m"
    {
#line 4673 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
#line 4673 "string.m"
      MR_Char mercury__string__Char_13;

#line 4667 "string.m"
      if (mercury__string__succeeded)
#line 4667 "string.m"
        {
#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_3

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__String_8 ;
	Index =  mercury__string__I_10 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 8174 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4667 "string.m"
          if (mercury__string__succeeded)
#line 4669 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
#line 4667 "string.m"
        }
#line 4673 "string.m"
      if (mercury__string__succeeded)
#line 4671 "string.m"
        {
#line 4671 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

#line 4671 "string.m"
          {
#line 4671 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_3_1, &mercury__string__env);
          }
#line 4671 "string.m"
        }
#line 4673 "string.m"
      else
#line 4672 "string.m"
        {
#line 4672 "string.m"
          *((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4672 "string.m"
          {
#line 4672 "string.m"
            ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
#line 4672 "string.m"
            return;
          }
#line 4672 "string.m"
        }
#line 4673 "string.m"
    }
#line 4660 "string.m"
  }
#line 4660 "string.m"
}

#line 4658 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_between_2_6_p_2(
#line 4658 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4658 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4658 "string.m"
  MR_String mercury__string__String_8,
#line 4658 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4658 "string.m"
  MR_Integer mercury__string__I_10,
#line 4658 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4658 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4658 "string.m"
{
#line 4673 "string.m"
  while (MR_TRUE)
#line 4673 "string.m"
    {
#line 4673 "string.m"
      /* tailcall optimized into a loop */
#line 4673 "string.m"
      {
#line 4673 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4673 "string.m"
        MR_Integer mercury__string__J_12;
#line 4673 "string.m"
        MR_Char mercury__string__Char_13;

#line 4667 "string.m"
        if (mercury__string__succeeded)
#line 4667 "string.m"
          {
#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_2

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 8293 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4667 "string.m"
            if (mercury__string__succeeded)
#line 4669 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4667 "string.m"
          }
#line 4673 "string.m"
        if (mercury__string__succeeded)
#line 4671 "string.m"
          {
#line 4671 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4671 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4671 "string.m"
            {
#line 4671 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4671 "string.m"
            if (mercury__string__succeeded)
#line 4672 "string.m"
              {
#line 4672 "string.m"
                /* direct tailcall eliminated */
#line 4672 "string.m"
                {
#line 4672 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4672 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4672 "string.m"
                  mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4672 "string.m"
                  mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4672 "string.m"
                }
#line 4672 "string.m"
                continue;
#line 4672 "string.m"
              }
#line 4671 "string.m"
          }
#line 4673 "string.m"
        else
#line 4672 "string.m"
          {
#line 4672 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4672 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4672 "string.m"
          }
#line 4673 "string.m"
        return mercury__string__succeeded;
#line 4673 "string.m"
      }
#line 4673 "string.m"
      break;
#line 4673 "string.m"
    }
#line 4658 "string.m"
}

#line 4656 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_1(
#line 4656 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4656 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4656 "string.m"
  MR_String mercury__string__String_8,
#line 4656 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4656 "string.m"
  MR_Integer mercury__string__I_10,
#line 4656 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4656 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4656 "string.m"
{
#line 4673 "string.m"
  while (MR_TRUE)
#line 4673 "string.m"
    {
#line 4673 "string.m"
      /* tailcall optimized into a loop */
#line 4673 "string.m"
      {
#line 4673 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4673 "string.m"
        MR_Integer mercury__string__J_12;
#line 4673 "string.m"
        MR_Char mercury__string__Char_13;

#line 4667 "string.m"
        if (mercury__string__succeeded)
#line 4667 "string.m"
          {
#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_1

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 8436 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4667 "string.m"
            if (mercury__string__succeeded)
#line 4669 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4667 "string.m"
          }
#line 4673 "string.m"
        if (mercury__string__succeeded)
#line 4671 "string.m"
          {
#line 4671 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4671 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4671 "string.m"
            {
#line 4671 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4672 "string.m"
            /* direct tailcall eliminated */
#line 4672 "string.m"
            {
#line 4672 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4672 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4672 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4672 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4672 "string.m"
            }
#line 4672 "string.m"
            continue;
#line 4671 "string.m"
          }
#line 4673 "string.m"
        else
#line 4672 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4673 "string.m"
      }
#line 4673 "string.m"
      break;
#line 4673 "string.m"
    }
#line 4656 "string.m"
}

#line 4654 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_0(
#line 4654 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4654 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4654 "string.m"
  MR_String mercury__string__String_8,
#line 4654 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4654 "string.m"
  MR_Integer mercury__string__I_10,
#line 4654 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4654 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4654 "string.m"
{
#line 4673 "string.m"
  while (MR_TRUE)
#line 4673 "string.m"
    {
#line 4673 "string.m"
      /* tailcall optimized into a loop */
#line 4673 "string.m"
      {
#line 4673 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4673 "string.m"
        MR_Integer mercury__string__J_12;
#line 4673 "string.m"
        MR_Char mercury__string__Char_13;

#line 4667 "string.m"
        if (mercury__string__succeeded)
#line 4667 "string.m"
          {
#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 8565 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4667 "string.m"
            if (mercury__string__succeeded)
#line 4669 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4667 "string.m"
          }
#line 4673 "string.m"
        if (mercury__string__succeeded)
#line 4671 "string.m"
          {
#line 4671 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4671 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4671 "string.m"
            {
#line 4671 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4672 "string.m"
            /* direct tailcall eliminated */
#line 4672 "string.m"
            {
#line 4672 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4672 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4672 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4672 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4672 "string.m"
            }
#line 4672 "string.m"
            continue;
#line 4671 "string.m"
          }
#line 4673 "string.m"
        else
#line 4672 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4673 "string.m"
      }
#line 4673 "string.m"
      break;
#line 4673 "string.m"
    }
#line 4654 "string.m"
}

#line 4616 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
#line 4616 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4616 "string.m"
{
#line 4616 "string.m"
  {
#line 4616 "string.m"
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_5_env_0_s *) mercury__string__env_ptr_arg;

#line 4617 "string.m"
    {
#line 4617 "string.m"
      mercury__string__foldl2_between_2_8_p_5((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
#line 4617 "string.m"
      return;
    }
#line 4616 "string.m"
  }
#line 4616 "string.m"
}

#line 4607 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_5(
#line 4607 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4607 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4607 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4607 "string.m"
  MR_String mercury__string__String_10,
#line 4607 "string.m"
  MR_Integer mercury__string__I_11,
#line 4607 "string.m"
  MR_Integer mercury__string__End_12,
#line 4607 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4607 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4607 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4607 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 4607 "string.m"
  MR_Cont mercury__string__cont,
#line 4607 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4607 "string.m"
{
#line 4607 "string.m"
  {
#line 4607 "string.m"
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s mercury__string__env;

#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9 = mercury__string__Closure_9;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__String_10 = mercury__string__String_10;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12 = mercury__string__End_12;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont = mercury__string__cont;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4618 "string.m"
    {
#line 4618 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
#line 4618 "string.m"
      MR_Char mercury__string__Char_16;

#line 4612 "string.m"
      if (mercury__string__succeeded)
#line 4612 "string.m"
        {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_5

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__String_10 ;
	Index =  mercury__string__I_11 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8740 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4612 "string.m"
          if (mercury__string__succeeded)
#line 4614 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
#line 4612 "string.m"
        }
#line 4618 "string.m"
      if (mercury__string__succeeded)
#line 4616 "string.m"
        {
#line 4616 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (MR_Integer) 1)));

#line 4616 "string.m"
          {
#line 4616 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_5_1, &mercury__string__env);
          }
#line 4616 "string.m"
        }
#line 4618 "string.m"
      else
#line 4619 "string.m"
        {
#line 4619 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4619 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4619 "string.m"
          {
#line 4619 "string.m"
            ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
#line 4619 "string.m"
            return;
          }
#line 4619 "string.m"
        }
#line 4618 "string.m"
    }
#line 4607 "string.m"
  }
#line 4607 "string.m"
}

#line 4616 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
#line 4616 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4616 "string.m"
{
#line 4616 "string.m"
  {
#line 4616 "string.m"
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4617 "string.m"
    {
#line 4617 "string.m"
      mercury__string__foldl2_between_2_8_p_4((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
#line 4617 "string.m"
      return;
    }
#line 4616 "string.m"
  }
#line 4616 "string.m"
}

#line 4605 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_4(
#line 4605 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4605 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4605 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4605 "string.m"
  MR_String mercury__string__String_10,
#line 4605 "string.m"
  MR_Integer mercury__string__I_11,
#line 4605 "string.m"
  MR_Integer mercury__string__End_12,
#line 4605 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4605 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4605 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4605 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 4605 "string.m"
  MR_Cont mercury__string__cont,
#line 4605 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4605 "string.m"
{
#line 4605 "string.m"
  {
#line 4605 "string.m"
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s mercury__string__env;

#line 4605 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
#line 4605 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
#line 4605 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9 = mercury__string__Closure_9;
#line 4605 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__String_10 = mercury__string__String_10;
#line 4605 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12 = mercury__string__End_12;
#line 4605 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
#line 4605 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
#line 4605 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont = mercury__string__cont;
#line 4605 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4618 "string.m"
    {
#line 4618 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
#line 4618 "string.m"
      MR_Char mercury__string__Char_16;

#line 4612 "string.m"
      if (mercury__string__succeeded)
#line 4612 "string.m"
        {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_4

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__String_10 ;
	Index =  mercury__string__I_11 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8907 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4612 "string.m"
          if (mercury__string__succeeded)
#line 4614 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
#line 4612 "string.m"
        }
#line 4618 "string.m"
      if (mercury__string__succeeded)
#line 4616 "string.m"
        {
#line 4616 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (MR_Integer) 1)));

#line 4616 "string.m"
          {
#line 4616 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_4_1, &mercury__string__env);
          }
#line 4616 "string.m"
        }
#line 4618 "string.m"
      else
#line 4619 "string.m"
        {
#line 4619 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4619 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4619 "string.m"
          {
#line 4619 "string.m"
            ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
#line 4619 "string.m"
            return;
          }
#line 4619 "string.m"
        }
#line 4618 "string.m"
    }
#line 4605 "string.m"
  }
#line 4605 "string.m"
}

#line 4603 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_between_2_8_p_3(
#line 4603 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4603 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4603 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4603 "string.m"
  MR_String mercury__string__String_10,
#line 4603 "string.m"
  MR_Integer mercury__string__I_11,
#line 4603 "string.m"
  MR_Integer mercury__string__End_12,
#line 4603 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4603 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4603 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4603 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4603 "string.m"
{
#line 4618 "string.m"
  while (MR_TRUE)
#line 4618 "string.m"
    {
#line 4618 "string.m"
      /* tailcall optimized into a loop */
#line 4618 "string.m"
      {
#line 4618 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4618 "string.m"
        MR_Integer mercury__string__J_15;
#line 4618 "string.m"
        MR_Char mercury__string__Char_16;

#line 4612 "string.m"
        if (mercury__string__succeeded)
#line 4612 "string.m"
          {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_3

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_10 ;
	Index =  mercury__string__I_11 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9031 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4612 "string.m"
            if (mercury__string__succeeded)
#line 4614 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4612 "string.m"
          }
#line 4618 "string.m"
        if (mercury__string__succeeded)
#line 4616 "string.m"
          {
#line 4616 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4616 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4616 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4616 "string.m"
            {
#line 4616 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4616 "string.m"
            if (mercury__string__succeeded)
#line 4617 "string.m"
              {
#line 4617 "string.m"
                /* direct tailcall eliminated */
#line 4617 "string.m"
                {
#line 4617 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4617 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4617 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4617 "string.m"
                  mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4617 "string.m"
                  mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4617 "string.m"
                  mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4617 "string.m"
                }
#line 4617 "string.m"
                continue;
#line 4617 "string.m"
              }
#line 4616 "string.m"
          }
#line 4618 "string.m"
        else
#line 4619 "string.m"
          {
#line 4619 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4619 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4619 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4619 "string.m"
          }
#line 4618 "string.m"
        return mercury__string__succeeded;
#line 4618 "string.m"
      }
#line 4618 "string.m"
      break;
#line 4618 "string.m"
    }
#line 4603 "string.m"
}

#line 4601 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_2(
#line 4601 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4601 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4601 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4601 "string.m"
  MR_String mercury__string__String_10,
#line 4601 "string.m"
  MR_Integer mercury__string__I_11,
#line 4601 "string.m"
  MR_Integer mercury__string__End_12,
#line 4601 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4601 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4601 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4601 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4601 "string.m"
{
#line 4618 "string.m"
  while (MR_TRUE)
#line 4618 "string.m"
    {
#line 4618 "string.m"
      /* tailcall optimized into a loop */
#line 4618 "string.m"
      {
#line 4618 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4618 "string.m"
        MR_Integer mercury__string__J_15;
#line 4618 "string.m"
        MR_Char mercury__string__Char_16;

#line 4612 "string.m"
        if (mercury__string__succeeded)
#line 4612 "string.m"
          {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_2

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_10 ;
	Index =  mercury__string__I_11 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9185 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4612 "string.m"
            if (mercury__string__succeeded)
#line 4614 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4612 "string.m"
          }
#line 4618 "string.m"
        if (mercury__string__succeeded)
#line 4616 "string.m"
          {
#line 4616 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4616 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4616 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4616 "string.m"
            {
#line 4616 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4617 "string.m"
            /* direct tailcall eliminated */
#line 4617 "string.m"
            {
#line 4617 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4617 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4617 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4617 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4617 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4617 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4617 "string.m"
            }
#line 4617 "string.m"
            continue;
#line 4616 "string.m"
          }
#line 4618 "string.m"
        else
#line 4619 "string.m"
          {
#line 4619 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4619 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4619 "string.m"
          }
#line 4618 "string.m"
      }
#line 4618 "string.m"
      break;
#line 4618 "string.m"
    }
#line 4601 "string.m"
}

#line 4599 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_1(
#line 4599 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4599 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4599 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4599 "string.m"
  MR_String mercury__string__String_10,
#line 4599 "string.m"
  MR_Integer mercury__string__I_11,
#line 4599 "string.m"
  MR_Integer mercury__string__End_12,
#line 4599 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4599 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4599 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4599 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4599 "string.m"
{
#line 4618 "string.m"
  while (MR_TRUE)
#line 4618 "string.m"
    {
#line 4618 "string.m"
      /* tailcall optimized into a loop */
#line 4618 "string.m"
      {
#line 4618 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4618 "string.m"
        MR_Integer mercury__string__J_15;
#line 4618 "string.m"
        MR_Char mercury__string__Char_16;

#line 4612 "string.m"
        if (mercury__string__succeeded)
#line 4612 "string.m"
          {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_1

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_10 ;
	Index =  mercury__string__I_11 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9329 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4612 "string.m"
            if (mercury__string__succeeded)
#line 4614 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4612 "string.m"
          }
#line 4618 "string.m"
        if (mercury__string__succeeded)
#line 4616 "string.m"
          {
#line 4616 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4616 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4616 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4616 "string.m"
            {
#line 4616 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4617 "string.m"
            /* direct tailcall eliminated */
#line 4617 "string.m"
            {
#line 4617 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4617 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4617 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4617 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4617 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4617 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4617 "string.m"
            }
#line 4617 "string.m"
            continue;
#line 4616 "string.m"
          }
#line 4618 "string.m"
        else
#line 4619 "string.m"
          {
#line 4619 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4619 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4619 "string.m"
          }
#line 4618 "string.m"
      }
#line 4618 "string.m"
      break;
#line 4618 "string.m"
    }
#line 4599 "string.m"
}

#line 4597 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_0(
#line 4597 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4597 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4597 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4597 "string.m"
  MR_String mercury__string__String_10,
#line 4597 "string.m"
  MR_Integer mercury__string__I_11,
#line 4597 "string.m"
  MR_Integer mercury__string__End_12,
#line 4597 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4597 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4597 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4597 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4597 "string.m"
{
#line 4618 "string.m"
  while (MR_TRUE)
#line 4618 "string.m"
    {
#line 4618 "string.m"
      /* tailcall optimized into a loop */
#line 4618 "string.m"
      {
#line 4618 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4618 "string.m"
        MR_Integer mercury__string__J_15;
#line 4618 "string.m"
        MR_Char mercury__string__Char_16;

#line 4612 "string.m"
        if (mercury__string__succeeded)
#line 4612 "string.m"
          {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_10 ;
	Index =  mercury__string__I_11 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9473 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4612 "string.m"
            if (mercury__string__succeeded)
#line 4614 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4612 "string.m"
          }
#line 4618 "string.m"
        if (mercury__string__succeeded)
#line 4616 "string.m"
          {
#line 4616 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4616 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4616 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4616 "string.m"
            {
#line 4616 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4617 "string.m"
            /* direct tailcall eliminated */
#line 4617 "string.m"
            {
#line 4617 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4617 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4617 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4617 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4617 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4617 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4617 "string.m"
            }
#line 4617 "string.m"
            continue;
#line 4616 "string.m"
          }
#line 4618 "string.m"
        else
#line 4619 "string.m"
          {
#line 4619 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4619 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4619 "string.m"
          }
#line 4618 "string.m"
      }
#line 4618 "string.m"
      break;
#line 4618 "string.m"
    }
#line 4597 "string.m"
}

#line 4589 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
#line 4589 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4589 "string.m"
{
#line 4589 "string.m"
  {
#line 4589 "string.m"
    struct mercury__string__foldl_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4590 "string.m"
    {
#line 4590 "string.m"
      mercury__string__foldl_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
#line 4590 "string.m"
      return;
    }
#line 4589 "string.m"
  }
#line 4589 "string.m"
}

#line 4580 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_4(
#line 4580 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4580 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4580 "string.m"
  MR_String mercury__string__String_8,
#line 4580 "string.m"
  MR_Integer mercury__string__I_9,
#line 4580 "string.m"
  MR_Integer mercury__string__End_10,
#line 4580 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4580 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4580 "string.m"
  MR_Cont mercury__string__cont,
#line 4580 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4580 "string.m"
{
#line 4580 "string.m"
  {
#line 4580 "string.m"
    struct mercury__string__foldl_between_2_6_p_4_env_0_s mercury__string__env;

#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10 = mercury__string__End_10;
#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont = mercury__string__cont;
#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4591 "string.m"
    {
#line 4591 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
#line 4591 "string.m"
      MR_Char mercury__string__Char_13;

#line 4585 "string.m"
      if (mercury__string__succeeded)
#line 4585 "string.m"
        {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_4

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9650 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4585 "string.m"
          if (mercury__string__succeeded)
#line 4587 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
#line 4585 "string.m"
        }
#line 4591 "string.m"
      if (mercury__string__succeeded)
#line 4589 "string.m"
        {
#line 4589 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

#line 4589 "string.m"
          {
#line 4589 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_4_1, &mercury__string__env);
          }
#line 4589 "string.m"
        }
#line 4591 "string.m"
      else
#line 4590 "string.m"
        {
#line 4590 "string.m"
          *((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4590 "string.m"
          {
#line 4590 "string.m"
            ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
#line 4590 "string.m"
            return;
          }
#line 4590 "string.m"
        }
#line 4591 "string.m"
    }
#line 4580 "string.m"
  }
#line 4580 "string.m"
}

#line 4589 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
#line 4589 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4589 "string.m"
{
#line 4589 "string.m"
  {
#line 4589 "string.m"
    struct mercury__string__foldl_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 4590 "string.m"
    {
#line 4590 "string.m"
      mercury__string__foldl_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
#line 4590 "string.m"
      return;
    }
#line 4589 "string.m"
  }
#line 4589 "string.m"
}

#line 4578 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_3(
#line 4578 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4578 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4578 "string.m"
  MR_String mercury__string__String_8,
#line 4578 "string.m"
  MR_Integer mercury__string__I_9,
#line 4578 "string.m"
  MR_Integer mercury__string__End_10,
#line 4578 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4578 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4578 "string.m"
  MR_Cont mercury__string__cont,
#line 4578 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4578 "string.m"
{
#line 4578 "string.m"
  {
#line 4578 "string.m"
    struct mercury__string__foldl_between_2_6_p_3_env_0_s mercury__string__env;

#line 4578 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
#line 4578 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
#line 4578 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
#line 4578 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10 = mercury__string__End_10;
#line 4578 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4578 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont = mercury__string__cont;
#line 4578 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4591 "string.m"
    {
#line 4591 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
#line 4591 "string.m"
      MR_Char mercury__string__Char_13;

#line 4585 "string.m"
      if (mercury__string__succeeded)
#line 4585 "string.m"
        {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_3

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9805 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4585 "string.m"
          if (mercury__string__succeeded)
#line 4587 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
#line 4585 "string.m"
        }
#line 4591 "string.m"
      if (mercury__string__succeeded)
#line 4589 "string.m"
        {
#line 4589 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

#line 4589 "string.m"
          {
#line 4589 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_3_1, &mercury__string__env);
          }
#line 4589 "string.m"
        }
#line 4591 "string.m"
      else
#line 4590 "string.m"
        {
#line 4590 "string.m"
          *((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4590 "string.m"
          {
#line 4590 "string.m"
            ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
#line 4590 "string.m"
            return;
          }
#line 4590 "string.m"
        }
#line 4591 "string.m"
    }
#line 4578 "string.m"
  }
#line 4578 "string.m"
}

#line 4576 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_between_2_6_p_2(
#line 4576 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4576 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4576 "string.m"
  MR_String mercury__string__String_8,
#line 4576 "string.m"
  MR_Integer mercury__string__I_9,
#line 4576 "string.m"
  MR_Integer mercury__string__End_10,
#line 4576 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4576 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4576 "string.m"
{
#line 4591 "string.m"
  while (MR_TRUE)
#line 4591 "string.m"
    {
#line 4591 "string.m"
      /* tailcall optimized into a loop */
#line 4591 "string.m"
      {
#line 4591 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4591 "string.m"
        MR_Integer mercury__string__J_12;
#line 4591 "string.m"
        MR_Char mercury__string__Char_13;

#line 4585 "string.m"
        if (mercury__string__succeeded)
#line 4585 "string.m"
          {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_2

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9921 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4585 "string.m"
            if (mercury__string__succeeded)
#line 4587 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4585 "string.m"
          }
#line 4591 "string.m"
        if (mercury__string__succeeded)
#line 4589 "string.m"
          {
#line 4589 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4589 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4589 "string.m"
            {
#line 4589 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4589 "string.m"
            if (mercury__string__succeeded)
#line 4590 "string.m"
              {
#line 4590 "string.m"
                /* direct tailcall eliminated */
#line 4590 "string.m"
                {
#line 4590 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4590 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4590 "string.m"
                  mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4590 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4590 "string.m"
                }
#line 4590 "string.m"
                continue;
#line 4590 "string.m"
              }
#line 4589 "string.m"
          }
#line 4591 "string.m"
        else
#line 4590 "string.m"
          {
#line 4590 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4590 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4590 "string.m"
          }
#line 4591 "string.m"
        return mercury__string__succeeded;
#line 4591 "string.m"
      }
#line 4591 "string.m"
      break;
#line 4591 "string.m"
    }
#line 4576 "string.m"
}

#line 4574 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_1(
#line 4574 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4574 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4574 "string.m"
  MR_String mercury__string__String_8,
#line 4574 "string.m"
  MR_Integer mercury__string__I_9,
#line 4574 "string.m"
  MR_Integer mercury__string__End_10,
#line 4574 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4574 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4574 "string.m"
{
#line 4591 "string.m"
  while (MR_TRUE)
#line 4591 "string.m"
    {
#line 4591 "string.m"
      /* tailcall optimized into a loop */
#line 4591 "string.m"
      {
#line 4591 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4591 "string.m"
        MR_Integer mercury__string__J_12;
#line 4591 "string.m"
        MR_Char mercury__string__Char_13;

#line 4585 "string.m"
        if (mercury__string__succeeded)
#line 4585 "string.m"
          {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_1

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 10061 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4585 "string.m"
            if (mercury__string__succeeded)
#line 4587 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4585 "string.m"
          }
#line 4591 "string.m"
        if (mercury__string__succeeded)
#line 4589 "string.m"
          {
#line 4589 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4589 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4589 "string.m"
            {
#line 4589 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4590 "string.m"
            /* direct tailcall eliminated */
#line 4590 "string.m"
            {
#line 4590 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4590 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4590 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4590 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4590 "string.m"
            }
#line 4590 "string.m"
            continue;
#line 4589 "string.m"
          }
#line 4591 "string.m"
        else
#line 4590 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4591 "string.m"
      }
#line 4591 "string.m"
      break;
#line 4591 "string.m"
    }
#line 4574 "string.m"
}

#line 4572 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_0(
#line 4572 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4572 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4572 "string.m"
  MR_String mercury__string__String_8,
#line 4572 "string.m"
  MR_Integer mercury__string__I_9,
#line 4572 "string.m"
  MR_Integer mercury__string__End_10,
#line 4572 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4572 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4572 "string.m"
{
#line 4591 "string.m"
  while (MR_TRUE)
#line 4591 "string.m"
    {
#line 4591 "string.m"
      /* tailcall optimized into a loop */
#line 4591 "string.m"
      {
#line 4591 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4591 "string.m"
        MR_Integer mercury__string__J_12;
#line 4591 "string.m"
        MR_Char mercury__string__Char_13;

#line 4585 "string.m"
        if (mercury__string__succeeded)
#line 4585 "string.m"
          {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 10187 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4585 "string.m"
            if (mercury__string__succeeded)
#line 4587 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4585 "string.m"
          }
#line 4591 "string.m"
        if (mercury__string__succeeded)
#line 4589 "string.m"
          {
#line 4589 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4589 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4589 "string.m"
            {
#line 4589 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4590 "string.m"
            /* direct tailcall eliminated */
#line 4590 "string.m"
            {
#line 4590 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4590 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4590 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4590 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4590 "string.m"
            }
#line 4590 "string.m"
            continue;
#line 4589 "string.m"
          }
#line 4591 "string.m"
        else
#line 4590 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4591 "string.m"
      }
#line 4591 "string.m"
      break;
#line 4591 "string.m"
    }
#line 4572 "string.m"
}

#line 4530 "string.m"
MR_Word MR_CALL 
mercury__string__break_up_string_reverse_3_f_0(
#line 4530 "string.m"
  MR_String mercury__string__Str_5,
#line 4530 "string.m"
  MR_Integer mercury__string__N_6,
#line 4530 "string.m"
  MR_Word mercury__string__Prev_7)
#line 4530 "string.m"
{
#line 4535 "string.m"
  while (MR_TRUE)
#line 4535 "string.m"
    {
#line 4535 "string.m"
      /* tailcall optimized into a loop */
#line 4535 "string.m"
      {
#line 4535 "string.m"
        MR_bool mercury__string__succeeded;
#line 4535 "string.m"
        MR_Word mercury__string__Strs_8;
#line 4533 "string.m"
        MR_Integer mercury__string__V_11_11;

#line 2458 "string.m"
        {
#line 2458 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__Str_5, &mercury__string__V_11_11);
        }
#line 4533 "string.m"
        mercury__string__succeeded = (mercury__string__V_11_11 <= mercury__string__N_6);
#line 4535 "string.m"
        if (mercury__string__succeeded)
#line 4534 "string.m"
          {
#line 4534 "string.m"
            mercury__string__Strs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4534 "string.m"
            MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 0) = ((MR_Box) (mercury__string__Str_5));
#line 4534 "string.m"
            MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 1) = ((MR_Box) (mercury__string__Prev_7));
#line 4534 "string.m"
          }
#line 4535 "string.m"
        else
#line 4536 "string.m"
          {
#line 4536 "string.m"
            MR_String mercury__string__Left_9;
#line 4536 "string.m"
            MR_String mercury__string__Right_10;
#line 4536 "string.m"
            MR_Word mercury__string__V_12_12;

#line 4536 "string.m"
            {
#line 4536 "string.m"
              mercury__string__split_by_codepoint_4_p_0(mercury__string__Str_5, mercury__string__N_6, &mercury__string__Left_9, &mercury__string__Right_10);
            }
#line 4537 "string.m"
            {
#line 4537 "string.m"
              mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4537 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_12_12, 0) = ((MR_Box) (mercury__string__Left_9));
#line 4537 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_12_12, 1) = ((MR_Box) (mercury__string__Prev_7));
#line 4537 "string.m"
            }
#line 4537 "string.m"
            /* direct tailcall eliminated */
#line 4537 "string.m"
            {
#line 4537 "string.m"
              MR_String mercury__string__Str__tmp_copy_5 = mercury__string__Right_10;
#line 4537 "string.m"
              MR_Word mercury__string__Prev__tmp_copy_7 = mercury__string__V_12_12;

#line 4537 "string.m"
              mercury__string__Prev_7 = mercury__string__Prev__tmp_copy_7;
#line 4537 "string.m"
              mercury__string__Str_5 = mercury__string__Str__tmp_copy_5;
#line 4537 "string.m"
            }
#line 4537 "string.m"
            continue;
#line 4536 "string.m"
          }
#line 4535 "string.m"
        return mercury__string__Strs_8;
#line 4535 "string.m"
      }
#line 4535 "string.m"
      break;
#line 4535 "string.m"
    }
#line 4530 "string.m"
}

#line 4453 "string.m"
void MR_CALL 
mercury__string__word_wrap_loop_7_p_0(
#line 4453 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4453 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4453 "string.m"
  MR_Integer mercury__string__SepLen_3,
#line 4453 "string.m"
  MR_Integer mercury__string__CurCol_4,
#line 4453 "string.m"
  MR_Integer mercury__string__MaxCol_5,
#line 4453 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6,
#line 4453 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7)
#line 4453 "string.m"
{
#line 4456 "string.m"
  while (MR_TRUE)
#line 4456 "string.m"
    {
#line 4456 "string.m"
      /* tailcall optimized into a loop */
#line 4456 "string.m"
      {
#line 4456 "string.m"
        MR_bool mercury__string__succeeded;

#line 4456 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4456 "string.m"
          *mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6;
#line 4456 "string.m"
        else
#line 4458 "string.m"
          {
#line 4458 "string.m"
            MR_String mercury__string__Word_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4458 "string.m"
            MR_Word mercury__string__Words_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4458 "string.m"
            MR_Integer mercury__string__WordLen_22;
#line 4458 "string.m"
            MR_Word mercury__string__NewWords_23;
#line 4458 "string.m"
            MR_Integer mercury__string__NewCol_24;
#line 4458 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

#line 2458 "string.m"
            {
#line 2458 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__Word_15, &mercury__string__WordLen_22);
            }
#line 4463 "string.m"
            mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4463 "string.m"
            if (mercury__string__succeeded)
#line 4464 "string.m"
              mercury__string__succeeded = (mercury__string__WordLen_22 < mercury__string__MaxCol_5);
#line 4469 "string.m"
            if (mercury__string__succeeded)
#line 4466 "string.m"
              {
#line 4466 "string.m"
                mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4467 "string.m"
                mercury__string__NewCol_24 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
#line 4468 "string.m"
                {
#line 4468 "string.m"
                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4468 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4468 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4468 "string.m"
                }
#line 4466 "string.m"
              }
#line 4469 "string.m"
            else
#line 4484 "string.m"
              {
#line 4471 "string.m"
                mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4471 "string.m"
                if (mercury__string__succeeded)
#line 4472 "string.m"
                  mercury__string__succeeded = (mercury__string__WordLen_22 == mercury__string__MaxCol_5);
#line 4484 "string.m"
                if (mercury__string__succeeded)
#line 4474 "string.m"
                  {
#line 4474 "string.m"
                    mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4475 "string.m"
                    mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4480 "string.m"
                    if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4479 "string.m"
                      {
#line 4479 "string.m"
                        mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4479 "string.m"
                        MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4479 "string.m"
                        MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4479 "string.m"
                      }
#line 4480 "string.m"
                    else
#line 4481 "string.m"
                      {
#line 4481 "string.m"
                        MR_Word mercury__string__V_39_39;

#line 4482 "string.m"
                        {
#line 4482 "string.m"
                          mercury__string__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4482 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_39_39, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4482 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_39_39, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4482 "string.m"
                        }
#line 4482 "string.m"
                        {
#line 4482 "string.m"
                          mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4482 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4482 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_39_39));
#line 4482 "string.m"
                        }
#line 4481 "string.m"
                      }
#line 4474 "string.m"
                  }
#line 4484 "string.m"
                else
#line 4492 "string.m"
                  {
#line 4487 "string.m"
                    MR_Integer mercury__string__V_41_41 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

#line 4487 "string.m"
                    mercury__string__succeeded = (mercury__string__V_41_41 < mercury__string__MaxCol_5);
#line 4492 "string.m"
                    if (mercury__string__succeeded)
#line 4489 "string.m"
                      {
#line 4489 "string.m"
                        MR_Integer mercury__string__V_42_42;
#line 4489 "string.m"
                        MR_Word mercury__string__V_45_45;

#line 4489 "string.m"
                        mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4490 "string.m"
                        mercury__string__V_42_42 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
#line 4490 "string.m"
                        mercury__string__NewCol_24 = (mercury__string__V_42_42 + (MR_Integer) 1);
#line 4491 "string.m"
                        {
#line 4491 "string.m"
                          mercury__string__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4491 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 0) = ((MR_Box) ((MR_String) " "));
#line 4491 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4491 "string.m"
                        }
#line 4491 "string.m"
                        {
#line 4491 "string.m"
                          mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4491 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4491 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_45_45));
#line 4491 "string.m"
                        }
#line 4489 "string.m"
                      }
#line 4492 "string.m"
                    else
#line 4506 "string.m"
                      {
#line 4494 "string.m"
                        MR_Integer mercury__string__V_70_70 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

#line 4494 "string.m"
                        mercury__string__succeeded = (mercury__string__MaxCol_5 == mercury__string__V_70_70);
#line 4506 "string.m"
                        if (mercury__string__succeeded)
#line 4496 "string.m"
                          {
#line 4496 "string.m"
                            mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4497 "string.m"
                            mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4502 "string.m"
                            if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4500 "string.m"
                              {
#line 4500 "string.m"
                                MR_Word mercury__string__V_53_53;

#line 4501 "string.m"
                                {
#line 4501 "string.m"
                                  mercury__string__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4501 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_53_53, 0) = ((MR_Box) ((MR_String) " "));
#line 4501 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_53_53, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4501 "string.m"
                                }
#line 4501 "string.m"
                                {
#line 4501 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4501 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4501 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_53_53));
#line 4501 "string.m"
                                }
#line 4500 "string.m"
                              }
#line 4502 "string.m"
                            else
#line 4503 "string.m"
                              {
#line 4503 "string.m"
                                MR_Word mercury__string__V_49_49;
#line 4503 "string.m"
                                MR_Word mercury__string__V_50_50;

#line 4504 "string.m"
                                {
#line 4504 "string.m"
                                  mercury__string__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4504 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_50_50, 0) = ((MR_Box) ((MR_String) " "));
#line 4504 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_50_50, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4504 "string.m"
                                }
#line 4504 "string.m"
                                {
#line 4504 "string.m"
                                  mercury__string__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4504 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_49_49, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4504 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_49_49, 1) = ((MR_Box) (mercury__string__V_50_50));
#line 4504 "string.m"
                                }
#line 4504 "string.m"
                                {
#line 4504 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4504 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4504 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_49_49));
#line 4504 "string.m"
                                }
#line 4503 "string.m"
                              }
#line 4496 "string.m"
                          }
#line 4506 "string.m"
                        else
#line 4521 "string.m"
                          {
#line 4508 "string.m"
                            mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4521 "string.m"
                            if (mercury__string__succeeded)
#line 4510 "string.m"
                              {
#line 4510 "string.m"
                                MR_Word mercury__string__TypeCtorInfo_69_69;
#line 4510 "string.m"
                                MR_Word mercury__string__RevPieces_29;
#line 4510 "string.m"
                                MR_String mercury__string__LastPiece_30;
#line 4510 "string.m"
                                MR_Word mercury__string__Rest_31;
#line 4510 "string.m"
                                MR_Word mercury__string__RestWithSep_32;
#line 4510 "string.m"
                                MR_Integer mercury__string__V_55_55 = (mercury__string__MaxCol_5 - mercury__string__SepLen_3);
#line 4510 "string.m"
                                MR_Word mercury__string__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4510 "string.m"
                                {
#line 4510 "string.m"
                                  mercury__string__RevPieces_29 = mercury__string__break_up_string_reverse_3_f_0(mercury__string__Word_15, mercury__string__V_55_55, mercury__string__V_56_56);
                                }
#line 4513 "string.m"
                                if ((mercury__string__RevPieces_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4514 "string.m"
                                  {
#line 4515 "string.m"
                                    {
#line 4515 "string.m"
                                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.word_wrap_loop\'/7", (MR_String) "no pieces");
#line 4515 "string.m"
                                      return;
                                    }
#line 4514 "string.m"
                                  }
#line 4513 "string.m"
                                else
#line 4512 "string.m"
                                  {
#line 4512 "string.m"
                                    mercury__string__LastPiece_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 0)));
#line 4512 "string.m"
                                    mercury__string__Rest_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 1)));
#line 4512 "string.m"
                                  }
#line 4517 "string.m"
                                {
#line 4517 "string.m"
                                  mercury__string__NewWords_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4517 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 0) = ((MR_Box) (mercury__string__LastPiece_30));
#line 4517 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 1) = ((MR_Box) (mercury__string__Words_16));
#line 4517 "string.m"
                                }
#line 4518 "string.m"
                                mercury__string__NewCol_24 = (MR_Integer) 1;
#line 10694 "string.c"
                                mercury__string__TypeCtorInfo_69_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4519 "string.m"
                                {
#line 4519 "string.m"
                                  mercury__string__RestWithSep_32 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(mercury__string__WordSep_2, mercury__string__Rest_31);
                                }
#line 46 "list.opt"
                                {
#line 46 "list.opt"
                                  mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_69_69, mercury__string__RestWithSep_32, mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6, &mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36);
                                }
#line 4510 "string.m"
                              }
#line 4521 "string.m"
                            else
#line 4522 "string.m"
                              {
#line 4522 "string.m"
                                mercury__string__NewWords_23 = mercury__string__HeadVar__1_1;
#line 4523 "string.m"
                                mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4524 "string.m"
                                {
#line 4524 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4524 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4524 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4524 "string.m"
                                }
#line 4522 "string.m"
                              }
#line 4521 "string.m"
                          }
#line 4506 "string.m"
                      }
#line 4492 "string.m"
                  }
#line 4484 "string.m"
              }
#line 4527 "string.m"
            /* direct tailcall eliminated */
#line 4527 "string.m"
            {
#line 4527 "string.m"
              MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__NewWords_23;
#line 4527 "string.m"
              MR_Integer mercury__string__CurCol__tmp_copy_4 = mercury__string__NewCol_24;
#line 4527 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0__tmp_copy_6 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

#line 4527 "string.m"
              mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0__tmp_copy_6;
#line 4527 "string.m"
              mercury__string__CurCol_4 = mercury__string__CurCol__tmp_copy_4;
#line 4527 "string.m"
              mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 4527 "string.m"
            }
#line 4527 "string.m"
            continue;
#line 4458 "string.m"
          }
#line 4456 "string.m"
      }
#line 4456 "string.m"
      break;
#line 4456 "string.m"
    }
#line 4453 "string.m"
}

#line 4399 "string.m"
void MR_CALL 
mercury__string__replace_all_loop_7_p_0(
#line 4399 "string.m"
  MR_String mercury__string__Str_8,
#line 4399 "string.m"
  MR_String mercury__string__Pat_9,
#line 4399 "string.m"
  MR_String mercury__string__Subst_10,
#line 4399 "string.m"
  MR_Integer mercury__string__PatLength_11,
#line 4399 "string.m"
  MR_Integer mercury__string__BeginAt_12,
#line 4399 "string.m"
  MR_Word mercury__string__RevChunks0_13,
#line 4399 "string.m"
  MR_Word * mercury__string__RevChunks_14)
#line 4399 "string.m"
{
#line 4409 "string.m"
  while (MR_TRUE)
#line 4409 "string.m"
    {
#line 4409 "string.m"
      /* tailcall optimized into a loop */
#line 4409 "string.m"
      {
#line 4409 "string.m"
        MR_bool mercury__string__succeeded;
#line 4409 "string.m"
        MR_Integer mercury__string__Index_15;

#line 2939 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  mercury__string__Str_8 ;
	Pattern =  mercury__string__Pat_9 ;
	BeginAt =  mercury__string__BeginAt_12 ;
		{
#line 2939 "string.m"
{
    char *match;
    if ((MR_Unsigned) BeginAt > strlen(WholeString)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        match = strstr(WholeString + BeginAt, Pattern);
        if (match) {
            Index = match - WholeString;
            SUCCESS_INDICATOR = MR_TRUE;
        } else {
            SUCCESS_INDICATOR = MR_FALSE;
        }
    }
}
#line 10829 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_15  = Index;
#line 2939 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4409 "string.m"
        if (mercury__string__succeeded)
#line 4405 "string.m"
          {
#line 4405 "string.m"
            MR_String mercury__string__Initial_16;
#line 4405 "string.m"
            MR_Integer mercury__string__Start_17;
#line 4405 "string.m"
            MR_Word mercury__string__V_19_19;
#line 4405 "string.m"
            MR_Word mercury__string__V_20_20;

#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  mercury__string__BeginAt_12 ;
	End =  mercury__string__Index_15 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 10874 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_16  = SubString;
#line 4037 "string.m"
}
#line 4406 "string.m"
            mercury__string__Start_17 = (mercury__string__Index_15 + mercury__string__PatLength_11);
#line 4408 "string.m"
            {
#line 4408 "string.m"
              mercury__string__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4408 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_20_20, 0) = ((MR_Box) (mercury__string__Initial_16));
#line 4408 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_20_20, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
#line 4408 "string.m"
            }
#line 4408 "string.m"
            {
#line 4408 "string.m"
              mercury__string__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4408 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_19_19, 0) = ((MR_Box) (mercury__string__Subst_10));
#line 4408 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_19_19, 1) = ((MR_Box) (mercury__string__V_20_20));
#line 4408 "string.m"
            }
#line 4407 "string.m"
            /* direct tailcall eliminated */
#line 4407 "string.m"
            {
#line 4407 "string.m"
              MR_Integer mercury__string__BeginAt__tmp_copy_12 = mercury__string__Start_17;
#line 4407 "string.m"
              MR_Word mercury__string__RevChunks0__tmp_copy_13 = mercury__string__V_19_19;

#line 4407 "string.m"
              mercury__string__RevChunks0_13 = mercury__string__RevChunks0__tmp_copy_13;
#line 4407 "string.m"
              mercury__string__BeginAt_12 = mercury__string__BeginAt__tmp_copy_12;
#line 4407 "string.m"
            }
#line 4407 "string.m"
            continue;
#line 4405 "string.m"
          }
#line 4409 "string.m"
        else
#line 4410 "string.m"
          {
#line 4410 "string.m"
            MR_String mercury__string__EndString_18;
#line 4410 "string.m"
            MR_Integer mercury__string__V_21_21;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 10944 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_21_21  = Length;
#line 2398 "string.m"
}
#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  mercury__string__BeginAt_12 ;
	End =  mercury__string__V_21_21 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 10973 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndString_18  = SubString;
#line 4037 "string.m"
}
#line 4411 "string.m"
            {
#line 4411 "string.m"
              MR_Word base;
#line 4411 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4411 "string.m"
              *mercury__string__RevChunks_14 = base;
#line 4411 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__EndString_18));
#line 4411 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
#line 4411 "string.m"
            }
#line 4410 "string.m"
          }
#line 4409 "string.m"
      }
#line 4409 "string.m"
      break;
#line 4409 "string.m"
    }
#line 4399 "string.m"
}

#line 4316 "string.m"
void MR_CALL 
mercury__string__char_list_to_lower_2_p_0(
#line 4316 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4316 "string.m"
  MR_Word * mercury__string__HeadVar__2_2)
#line 4316 "string.m"
{
#line 4318 "string.m"
  {
#line 4318 "string.m"
    MR_bool mercury__string__succeeded;

#line 4318 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4318 "string.m"
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4318 "string.m"
    else
#line 4319 "string.m"
      {
#line 4319 "string.m"
        MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4319 "string.m"
        MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4319 "string.m"
        MR_Char mercury__string__Y_5;
#line 4319 "string.m"
        MR_Word mercury__string__Ys_6;
#line 98 "char.opt"
        MR_Char mercury__string__LowerChar_5_9;

#line 95 "char.opt"
        {
#line 95 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_1(&mercury__string__LowerChar_5_9, mercury__string__X_3);
        }
#line 98 "char.opt"
        if (mercury__string__succeeded)
#line 97 "char.opt"
          mercury__string__Y_5 = mercury__string__LowerChar_5_9;
#line 98 "char.opt"
        else
#line 99 "char.opt"
          mercury__string__Y_5 = mercury__string__X_3;
#line 4321 "string.m"
        {
#line 4321 "string.m"
          mercury__string__char_list_to_lower_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
        }
#line 4319 "string.m"
        {
#line 4319 "string.m"
          MR_Word base;
#line 4319 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4319 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4319 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
#line 4319 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
#line 4319 "string.m"
        }
#line 4319 "string.m"
      }
#line 4318 "string.m"
  }
#line 4316 "string.m"
}

#line 4301 "string.m"
void MR_CALL 
mercury__string__char_list_to_upper_2_p_0(
#line 4301 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4301 "string.m"
  MR_Word * mercury__string__HeadVar__2_2)
#line 4301 "string.m"
{
#line 4303 "string.m"
  {
#line 4303 "string.m"
    MR_bool mercury__string__succeeded;

#line 4303 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4303 "string.m"
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4303 "string.m"
    else
#line 4304 "string.m"
      {
#line 4304 "string.m"
        MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4304 "string.m"
        MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4304 "string.m"
        MR_Char mercury__string__Y_5;
#line 4304 "string.m"
        MR_Word mercury__string__Ys_6;
#line 88 "char.opt"
        MR_Char mercury__string__UpperChar_5_9;

#line 85 "char.opt"
        {
#line 85 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_0(mercury__string__X_3, &mercury__string__UpperChar_5_9);
        }
#line 88 "char.opt"
        if (mercury__string__succeeded)
#line 87 "char.opt"
          mercury__string__Y_5 = mercury__string__UpperChar_5_9;
#line 88 "char.opt"
        else
#line 89 "char.opt"
          mercury__string__Y_5 = mercury__string__X_3;
#line 4306 "string.m"
        {
#line 4306 "string.m"
          mercury__string__char_list_to_upper_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
        }
#line 4304 "string.m"
        {
#line 4304 "string.m"
          MR_Word base;
#line 4304 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4304 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4304 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
#line 4304 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
#line 4304 "string.m"
        }
#line 4304 "string.m"
      }
#line 4303 "string.m"
  }
#line 4301 "string.m"
}

#line 4224 "string.m"
void MR_CALL 
mercury__string__suffix_2_ioii_4_p_0(
#line 4224 "string.m"
  MR_String mercury__string__String_5,
#line 4224 "string.m"
  MR_String * mercury__string__Suffix_6,
#line 4224 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4224 "string.m"
  MR_Integer mercury__string__Len_8,
#line 4224 "string.m"
  MR_Cont mercury__string__cont,
#line 4224 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4224 "string.m"
{
#line 4228 "string.m"
  while (MR_TRUE)
#line 4228 "string.m"
    {
#line 4228 "string.m"
      /* tailcall optimized into a loop */
#line 4228 "string.m"
      {
#line 4228 "string.m"
        MR_bool mercury__string__succeeded;

#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_ioii_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__String_5 ;
	Start =  mercury__string__Cur_7 ;
	End =  mercury__string__Len_8 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11199 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Suffix_6  = SubString;
#line 4037 "string.m"
}
#line 4033 "string.m"
        {
#line 4033 "string.m"
          mercury__string__cont(mercury__string__cont_env_ptr);
        }
#line 4230 "string.m"
        {
#line 4230 "string.m"
          MR_Integer mercury__string__Prev_9;
#line 2027 "string.m"
          MR_Char mercury__string__V_10_10;

#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_ioii_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Cur_7 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 11246 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Prev_9  = PrevIndex;
	 mercury__string__V_10_10  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4230 "string.m"
          if (mercury__string__succeeded)
#line 4231 "string.m"
            {
#line 4231 "string.m"
              /* direct tailcall eliminated */
#line 4231 "string.m"
              {
#line 4231 "string.m"
                MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Prev_9;

#line 4231 "string.m"
                mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4231 "string.m"
              }
#line 4231 "string.m"
              continue;
#line 4231 "string.m"
            }
#line 4230 "string.m"
        }
#line 4228 "string.m"
      }
#line 4228 "string.m"
      break;
#line 4228 "string.m"
    }
#line 4224 "string.m"
}

#line 4212 "string.m"
MR_bool MR_CALL 
mercury__string__suffix_2_iiii_5_p_0(
#line 4212 "string.m"
  MR_String mercury__string__String_6,
#line 4212 "string.m"
  MR_String mercury__string__Suffix_7,
#line 4212 "string.m"
  MR_Integer mercury__string__I_8,
#line 4212 "string.m"
  MR_Integer mercury__string__Offset_9,
#line 4212 "string.m"
  MR_Integer mercury__string__Len_10)
#line 4212 "string.m"
{
#line 4220 "string.m"
  while (MR_TRUE)
#line 4220 "string.m"
    {
#line 4220 "string.m"
      /* tailcall optimized into a loop */
#line 4220 "string.m"
      {
#line 4220 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_8 < mercury__string__Len_10);

#line 4220 "string.m"
        if (mercury__string__succeeded)
#line 4217 "string.m"
          {
#line 4217 "string.m"
            MR_Integer mercury__string__C_11;
#line 4217 "string.m"
            MR_Integer mercury__string__V_12_12 = (mercury__string__I_8 + mercury__string__Offset_9);
#line 4217 "string.m"
            MR_Integer mercury__string__V_13_13;
#line 4217 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 4217 "string.m"
            MR_Integer mercury__string__V_15_15;

#line 2158 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__V_12_12 ;
		{
#line 2158 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11344 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_11  = Code;
#line 2158 "string.m"
}
#line 2158 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Suffix_7 ;
	Index =  mercury__string__I_8 ;
		{
#line 2158 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11367 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_15_15  = Code;
#line 2158 "string.m"
}
#line 4218 "string.m"
            mercury__string__succeeded = (mercury__string__C_11 == mercury__string__V_15_15);
#line 4217 "string.m"
            if (mercury__string__succeeded)
#line 4217 "string.m"
              {
#line 4219 "string.m"
                mercury__string__V_14_14 = (MR_Integer) 1;
#line 4219 "string.m"
                mercury__string__V_13_13 = (mercury__string__I_8 + mercury__string__V_14_14);
#line 4219 "string.m"
                /* direct tailcall eliminated */
#line 4219 "string.m"
                {
#line 4219 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_8 = mercury__string__V_13_13;

#line 4219 "string.m"
                  mercury__string__I_8 = mercury__string__I__tmp_copy_8;
#line 4219 "string.m"
                }
#line 4219 "string.m"
                continue;
#line 4217 "string.m"
              }
#line 4217 "string.m"
          }
#line 4220 "string.m"
        else
#line 4221 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4220 "string.m"
        return mercury__string__succeeded;
#line 4220 "string.m"
      }
#line 4220 "string.m"
      break;
#line 4220 "string.m"
    }
#line 4212 "string.m"
}

#line 4191 "string.m"
void MR_CALL 
mercury__string__prefix_2_ioi_3_p_0(
#line 4191 "string.m"
  MR_String mercury__string__String_4,
#line 4191 "string.m"
  MR_String * mercury__string__Prefix_5,
#line 4191 "string.m"
  MR_Integer mercury__string__Cur_6,
#line 4191 "string.m"
  MR_Cont mercury__string__cont,
#line 4191 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4191 "string.m"
{
#line 4195 "string.m"
  while (MR_TRUE)
#line 4195 "string.m"
    {
#line 4195 "string.m"
      /* tailcall optimized into a loop */
#line 4195 "string.m"
      {
#line 4195 "string.m"
        MR_bool mercury__string__succeeded;

#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_ioi_3_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__String_4 ;
	Start =  (MR_Integer) 0 ;
	End =  mercury__string__Cur_6 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11464 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Prefix_5  = SubString;
#line 4037 "string.m"
}
#line 4195 "string.m"
        {
#line 4195 "string.m"
          mercury__string__cont(mercury__string__cont_env_ptr);
        }
#line 4197 "string.m"
        {
#line 4197 "string.m"
          MR_Integer mercury__string__Next_7;
#line 1938 "string.m"
          MR_Char mercury__string__V_8_8;

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_ioi_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Cur_6 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 11508 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__V_8_8  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4197 "string.m"
          if (mercury__string__succeeded)
#line 4198 "string.m"
            {
#line 4198 "string.m"
              /* direct tailcall eliminated */
#line 4198 "string.m"
              {
#line 4198 "string.m"
                MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 4198 "string.m"
                mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 4198 "string.m"
              }
#line 4198 "string.m"
              continue;
#line 4198 "string.m"
            }
#line 4197 "string.m"
        }
#line 4195 "string.m"
      }
#line 4195 "string.m"
      break;
#line 4195 "string.m"
    }
#line 4191 "string.m"
}

#line 4180 "string.m"
MR_bool MR_CALL 
mercury__string__prefix_2_iii_3_p_0(
#line 4180 "string.m"
  MR_String mercury__string__String_4,
#line 4180 "string.m"
  MR_String mercury__string__Prefix_5,
#line 4180 "string.m"
  MR_Integer mercury__string__I_6)
#line 4180 "string.m"
{
#line 4187 "string.m"
  while (MR_TRUE)
#line 4187 "string.m"
    {
#line 4187 "string.m"
      /* tailcall optimized into a loop */
#line 4187 "string.m"
      {
#line 4187 "string.m"
        MR_bool mercury__string__succeeded = ((MR_Integer) 0 <= mercury__string__I_6);

#line 4187 "string.m"
        if (mercury__string__succeeded)
#line 4184 "string.m"
          {
#line 4184 "string.m"
            MR_Integer mercury__string__C_7;
#line 4184 "string.m"
            MR_Integer mercury__string__V_9_9;
#line 4184 "string.m"
            MR_Integer mercury__string__V_10_10;
#line 4184 "string.m"
            MR_Integer mercury__string__V_11_11;

#line 2158 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__I_6 ;
		{
#line 2158 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11600 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_7  = Code;
#line 2158 "string.m"
}
#line 2158 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Prefix_5 ;
	Index =  mercury__string__I_6 ;
		{
#line 2158 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11623 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Code;
#line 2158 "string.m"
}
#line 4185 "string.m"
            mercury__string__succeeded = (mercury__string__C_7 == mercury__string__V_11_11);
#line 4184 "string.m"
            if (mercury__string__succeeded)
#line 4184 "string.m"
              {
#line 4186 "string.m"
                mercury__string__V_10_10 = (MR_Integer) 1;
#line 4186 "string.m"
                mercury__string__V_9_9 = (mercury__string__I_6 - mercury__string__V_10_10);
#line 4186 "string.m"
                /* direct tailcall eliminated */
#line 4186 "string.m"
                {
#line 4186 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__V_9_9;

#line 4186 "string.m"
                  mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 4186 "string.m"
                }
#line 4186 "string.m"
                continue;
#line 4184 "string.m"
              }
#line 4184 "string.m"
          }
#line 4187 "string.m"
        else
#line 4188 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4187 "string.m"
        return mercury__string__succeeded;
#line 4187 "string.m"
      }
#line 4187 "string.m"
      break;
#line 4187 "string.m"
    }
#line 4180 "string.m"
}

#line 4152 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_string_loop_4_f_0(
#line 4152 "string.m"
  MR_Integer mercury__string__StartAt_6,
#line 4152 "string.m"
  MR_Integer mercury__string__NeedleLen_7,
#line 4152 "string.m"
  MR_String mercury__string__Needle_8,
#line 4152 "string.m"
  MR_String mercury__string__Total_9)
#line 4152 "string.m"
{
#line 4160 "string.m"
  {
#line 4160 "string.m"
    MR_bool mercury__string__succeeded;
#line 4160 "string.m"
    MR_Word mercury__string__Out_10;
#line 4160 "string.m"
    MR_Integer mercury__string__NeedlePos_11;

#line 2939 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_string_loop_4_f_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  mercury__string__Total_9 ;
	Pattern =  mercury__string__Needle_8 ;
	BeginAt =  mercury__string__StartAt_6 ;
		{
#line 2939 "string.m"
{
    char *match;
    if ((MR_Unsigned) BeginAt > strlen(WholeString)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        match = strstr(WholeString + BeginAt, Pattern);
        if (match) {
            Index = match - WholeString;
            SUCCESS_INDICATOR = MR_TRUE;
        } else {
            SUCCESS_INDICATOR = MR_FALSE;
        }
    }
}
#line 11723 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__NeedlePos_11  = Index;
#line 2939 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4160 "string.m"
    if (mercury__string__succeeded)
#line 4156 "string.m"
      {
#line 4156 "string.m"
        MR_String mercury__string__BeforeNeedle_12;
#line 4156 "string.m"
        MR_Word mercury__string__Tail_13;
#line 4156 "string.m"
        MR_Integer mercury__string__V_16_16;

#line 3881 "string.m"
        {
#line 3881 "string.m"
          mercury__string__between_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, mercury__string__NeedlePos_11, &mercury__string__BeforeNeedle_12);
        }
#line 4157 "string.m"
        mercury__string__V_16_16 = (mercury__string__NeedlePos_11 + mercury__string__NeedleLen_7);
#line 4157 "string.m"
        {
#line 4157 "string.m"
          mercury__string__Tail_13 = mercury__string__split_at_string_loop_4_f_0(mercury__string__V_16_16, mercury__string__NeedleLen_7, mercury__string__Needle_8, mercury__string__Total_9);
        }
#line 4159 "string.m"
        {
#line 4159 "string.m"
          mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4159 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__BeforeNeedle_12));
#line 4159 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__Tail_13));
#line 4159 "string.m"
        }
#line 4156 "string.m"
      }
#line 4160 "string.m"
    else
#line 4161 "string.m"
      {
#line 4161 "string.m"
        MR_String mercury__string__Last_15;
#line 4161 "string.m"
        MR_Word mercury__string__V_17_17;
#line 4161 "string.m"
        MR_String mercury__string___Skip_14;

#line 4161 "string.m"
        {
#line 4161 "string.m"
          mercury__string__split_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, &mercury__string___Skip_14, &mercury__string__Last_15);
        }
#line 4162 "string.m"
        mercury__string__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4162 "string.m"
        {
#line 4162 "string.m"
          mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4162 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__Last_15));
#line 4162 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__V_17_17));
#line 4162 "string.m"
        }
#line 4161 "string.m"
      }
#line 4160 "string.m"
    return mercury__string__Out_10;
#line 4160 "string.m"
  }
#line 4152 "string.m"
}

#line 4118 "string.m"
void MR_CALL 
mercury__string__split_at_separator_loop_6_p_0(
#line 4118 "string.m"
  MR_Word mercury__string__DelimP_7,
#line 4118 "string.m"
  MR_String mercury__string__Str_8,
#line 4118 "string.m"
  MR_Integer mercury__string__I_9,
#line 4118 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4118 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4118 "string.m"
  MR_Word * mercury__string__Acc_12)
#line 4118 "string.m"
{
#line 4138 "string.m"
  while (MR_TRUE)
#line 4138 "string.m"
    {
#line 4138 "string.m"
      /* tailcall optimized into a loop */
#line 4138 "string.m"
      {
#line 4138 "string.m"
        MR_bool mercury__string__succeeded;
#line 4138 "string.m"
        MR_Integer mercury__string__J_13;
#line 4138 "string.m"
        MR_Char mercury__string__C_14;

#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 11865 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_13  = PrevIndex;
	 mercury__string__C_14  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4138 "string.m"
        if (mercury__string__succeeded)
#line 4134 "string.m"
          {
#line 4129 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__DelimP_7, (MR_Integer) 1)));

#line 4129 "string.m"
            {
#line 4129 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__DelimP_7), ((MR_Box) (MR_Word) (mercury__string__C_14)));
            }
#line 4134 "string.m"
            if (mercury__string__succeeded)
#line 4131 "string.m"
              {
#line 4131 "string.m"
                MR_String mercury__string__Seg_16;
#line 4131 "string.m"
                MR_Word mercury__string__V_18_18;

#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  mercury__string__I_9 ;
	End =  mercury__string__SegEnd_10 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11919 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_16  = SubString;
#line 4037 "string.m"
}
#line 4133 "string.m"
                {
#line 4133 "string.m"
                  mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4133 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Seg_16));
#line 4133 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4133 "string.m"
                }
#line 4133 "string.m"
                /* direct tailcall eliminated */
#line 4133 "string.m"
                {
#line 4133 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;
#line 4133 "string.m"
                  MR_Integer mercury__string__SegEnd__tmp_copy_10 = mercury__string__J_13;
#line 4133 "string.m"
                  MR_Word mercury__string__Acc0__tmp_copy_11 = mercury__string__V_18_18;

#line 4133 "string.m"
                  mercury__string__Acc0_11 = mercury__string__Acc0__tmp_copy_11;
#line 4133 "string.m"
                  mercury__string__SegEnd_10 = mercury__string__SegEnd__tmp_copy_10;
#line 4133 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4133 "string.m"
                }
#line 4133 "string.m"
                continue;
#line 4131 "string.m"
              }
#line 4134 "string.m"
            else
#line 4136 "string.m"
              {
#line 4136 "string.m"
                /* direct tailcall eliminated */
#line 4136 "string.m"
                {
#line 4136 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;

#line 4136 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4136 "string.m"
                }
#line 4136 "string.m"
                continue;
#line 4136 "string.m"
              }
#line 4134 "string.m"
          }
#line 4138 "string.m"
        else
#line 4140 "string.m"
          {
#line 4140 "string.m"
            MR_String mercury__string__Seg_20;

#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  (MR_Integer) 0 ;
	End =  mercury__string__SegEnd_10 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 12009 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_20  = SubString;
#line 4037 "string.m"
}
#line 4141 "string.m"
            {
#line 4141 "string.m"
              MR_Word base;
#line 4141 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4141 "string.m"
              *mercury__string__Acc_12 = base;
#line 4141 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Seg_20));
#line 4141 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4141 "string.m"
            }
#line 4140 "string.m"
          }
#line 4138 "string.m"
      }
#line 4138 "string.m"
      break;
#line 4138 "string.m"
    }
#line 4118 "string.m"
}

#line 4099 "string.m"
void MR_CALL 
mercury__string__next_boundary_4_p_0(
#line 4099 "string.m"
  MR_Word mercury__string__P_5,
#line 4099 "string.m"
  MR_String mercury__string__String_6,
#line 4099 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4099 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4099 "string.m"
{
#line 4108 "string.m"
  while (MR_TRUE)
#line 4108 "string.m"
    {
#line 4108 "string.m"
      /* tailcall optimized into a loop */
#line 4108 "string.m"
      {
#line 4108 "string.m"
        MR_bool mercury__string__succeeded;
#line 4108 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4104 "string.m"
        MR_Char mercury__string__Char_10;
#line 4105 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__next_boundary_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Cur_7 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 12096 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4104 "string.m"
        if (mercury__string__succeeded)
#line 4104 "string.m"
          {
#line 4105 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 4105 "string.m"
            {
#line 4105 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 4104 "string.m"
          }
#line 4108 "string.m"
        if (mercury__string__succeeded)
#line 4107 "string.m"
          {
#line 4107 "string.m"
            /* direct tailcall eliminated */
#line 4107 "string.m"
            {
#line 4107 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4107 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4107 "string.m"
            }
#line 4107 "string.m"
            continue;
#line 4107 "string.m"
          }
#line 4108 "string.m"
        else
#line 4109 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4108 "string.m"
      }
#line 4108 "string.m"
      break;
#line 4108 "string.m"
    }
#line 4099 "string.m"
}

#line 4079 "string.m"
void MR_CALL 
mercury__string__words_loop_4_p_0(
#line 4079 "string.m"
  MR_Word mercury__string__SepP_5,
#line 4079 "string.m"
  MR_String mercury__string__String_6,
#line 4079 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4079 "string.m"
  MR_Word * mercury__string__Words_8)
#line 4079 "string.m"
{
#line 4082 "string.m"
  {
#line 4082 "string.m"
    MR_bool mercury__string__succeeded;
#line 4082 "string.m"
    MR_Integer mercury__string__WordEnd_9;

#line 4083 "string.m"
    {
#line 4083 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__WordStart_7, &mercury__string__WordEnd_9);
    }
#line 4084 "string.m"
    mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__WordStart_7);
#line 4086 "string.m"
    if (mercury__string__succeeded)
#line 4085 "string.m"
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4086 "string.m"
    else
#line 4087 "string.m"
      {
#line 4087 "string.m"
        MR_String mercury__string__Word_10;
#line 4087 "string.m"
        MR_Integer mercury__string__NextWordStart_11;

#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__words_loop_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__String_6 ;
	Start =  mercury__string__WordStart_7 ;
	End =  mercury__string__WordEnd_9 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 12214 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Word_10  = SubString;
#line 4037 "string.m"
}
#line 4088 "string.m"
        {
#line 4088 "string.m"
          mercury__string__next_boundary_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__WordEnd_9, &mercury__string__NextWordStart_11);
        }
#line 4089 "string.m"
        mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__NextWordStart_11);
#line 4091 "string.m"
        if (mercury__string__succeeded)
#line 4090 "string.m"
          {
#line 4090 "string.m"
            MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4090 "string.m"
            {
#line 4090 "string.m"
              MR_Word base;
#line 4090 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4090 "string.m"
              *mercury__string__Words_8 = base;
#line 4090 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4090 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__V_14_14));
#line 4090 "string.m"
            }
#line 4090 "string.m"
          }
#line 4091 "string.m"
        else
#line 4092 "string.m"
          {
#line 4092 "string.m"
            MR_Word mercury__string__Words0_12;

#line 4092 "string.m"
            {
#line 4092 "string.m"
              mercury__string__words_loop_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__NextWordStart_11, &mercury__string__Words0_12);
            }
#line 4093 "string.m"
            {
#line 4093 "string.m"
              MR_Word base;
#line 4093 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4093 "string.m"
              *mercury__string__Words_8 = base;
#line 4093 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4093 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Words0_12));
#line 4093 "string.m"
            }
#line 4092 "string.m"
          }
#line 4087 "string.m"
      }
#line 4082 "string.m"
  }
#line 4079 "string.m"
}

#line 3995 "string.m"
void MR_CALL 
mercury__string__convert_endpoints_4_p_0(
#line 3995 "string.m"
  MR_Integer mercury__string__Start_5,
#line 3995 "string.m"
  MR_Integer mercury__string__Count_6,
#line 3995 "string.m"
  MR_Integer * mercury__string__ClampStart_7,
#line 3995 "string.m"
  MR_Integer * mercury__string__ClampEnd_8)
#line 3995 "string.m"
{
#line 3997 "string.m"
  {
#line 3997 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_5);

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      *mercury__string__ClampStart_7 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      *mercury__string__ClampStart_7 = mercury__string__Start_5;
#line 3999 "string.m"
    mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
#line 4001 "string.m"
    if (mercury__string__succeeded)
#line 4000 "string.m"
      *mercury__string__ClampEnd_8 = *mercury__string__ClampStart_7;
#line 4001 "string.m"
    else
#line 4005 "string.m"
      {
#line 4003 "string.m"
        MR_Integer mercury__string__V_11_11;
#line 4003 "string.m"
        MR_Integer mercury__string__V_12_12;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__string__convert_endpoints_4_p_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 12348 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_12_12  = Max;
#line 141 "int.opt"
}
#line 4003 "string.m"
        mercury__string__V_11_11 = (mercury__string__V_12_12 - mercury__string__Count_6);
#line 4003 "string.m"
        mercury__string__succeeded = (*mercury__string__ClampStart_7 > mercury__string__V_11_11);
#line 4005 "string.m"
        if (mercury__string__succeeded)
#line 141 "int.opt"
          {
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__string__convert_endpoints_4_p_0

	MR_Integer Max;

		{
#line 141 "int.opt"

    if (sizeof(MR_Integer) == sizeof(int)) {
        Max = INT_MAX;
    } else if (sizeof(MR_Integer) == sizeof(long)) {
        Max = (MR_Integer) LONG_MAX;
    #if defined(LLONG_MAX)
    } else if (sizeof(MR_Integer) == sizeof(long long)) {
        Max = (MR_Integer) LLONG_MAX;
    #endif
    } else {
        MR_fatal_error("Unable to figure out max integer size");
    }

#line 12384 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__ClampEnd_8  = Max;
#line 141 "int.opt"
}
#line 141 "int.opt"
          }
#line 4005 "string.m"
        else
#line 4006 "string.m"
          *mercury__string__ClampEnd_8 = (*mercury__string__ClampStart_7 + mercury__string__Count_6);
#line 4005 "string.m"
      }
#line 3997 "string.m"
  }
#line 3995 "string.m"
}

#line 3972 "string.m"
MR_Word MR_CALL 
mercury__string__between_loop_3_f_0(
#line 3972 "string.m"
  MR_Integer mercury__string__I_5,
#line 3972 "string.m"
  MR_Integer mercury__string__End_6,
#line 3972 "string.m"
  MR_String mercury__string__Str_7)
#line 3972 "string.m"
{
#line 3982 "string.m"
  {
#line 3982 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__I_5 < mercury__string__End_6);
#line 3982 "string.m"
    MR_Word mercury__string__Chars_8;
#line 3982 "string.m"
    MR_Integer mercury__string__J_9;
#line 3982 "string.m"
    MR_Char mercury__string__C_10;

#line 3976 "string.m"
    if (mercury__string__succeeded)
#line 3976 "string.m"
      {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__between_loop_3_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_7 ;
	Index =  mercury__string__I_5 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 12455 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__C_10  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3976 "string.m"
        if (mercury__string__succeeded)
#line 3978 "string.m"
          mercury__string__succeeded = (mercury__string__J_9 <= mercury__string__End_6);
#line 3976 "string.m"
      }
#line 3982 "string.m"
    if (mercury__string__succeeded)
#line 3980 "string.m"
      {
#line 3980 "string.m"
        MR_Word mercury__string__Cs_11;

#line 3980 "string.m"
        {
#line 3980 "string.m"
          mercury__string__Cs_11 = mercury__string__between_loop_3_f_0(mercury__string__J_9, mercury__string__End_6, mercury__string__Str_7);
        }
#line 3981 "string.m"
        {
#line 3981 "string.m"
          mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3981 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 0) = ((MR_Box) (MR_Word) (mercury__string__C_10));
#line 3981 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 1) = ((MR_Box) (mercury__string__Cs_11));
#line 3981 "string.m"
        }
#line 3980 "string.m"
      }
#line 3982 "string.m"
    else
#line 3983 "string.m"
      mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3982 "string.m"
    return mercury__string__Chars_8;
#line 3982 "string.m"
  }
#line 3972 "string.m"
}

#line 3423 "string.m"
MR_String MR_CALL 
mercury__string__join_list_loop_2_f_0(
#line 3423 "string.m"
  MR_String mercury__string__Sep_1,
#line 3423 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 3423 "string.m"
{
#line 3425 "string.m"
  {
#line 3425 "string.m"
    MR_bool mercury__string__succeeded;
#line 3425 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 3425 "string.m"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3425 "string.m"
      mercury__string__HeadVar__3_3 = (MR_String) "";
#line 3425 "string.m"
    else
#line 3426 "string.m"
      {
#line 3426 "string.m"
        MR_String mercury__string__H_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 3426 "string.m"
        MR_Word mercury__string__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 3426 "string.m"
        MR_String mercury__string__V_8_8;
#line 3426 "string.m"
        MR_String mercury__string__V_9_9;

#line 3426 "string.m"
        {
#line 3426 "string.m"
          mercury__string__V_9_9 = mercury__string__join_list_loop_2_f_0(mercury__string__Sep_1, mercury__string__T_7);
        }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__H_6 ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 12565 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3147 "string.m"
}
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Sep_1 ;
	S2 =  mercury__string__V_8_8 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 12592 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
#line 3147 "string.m"
}
#line 3426 "string.m"
      }
#line 3425 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3425 "string.m"
  }
#line 3423 "string.m"
}

#line 3242 "string.m"
static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
#line 3242 "string.m"
  void * mercury__string__env_ptr_arg)
#line 3242 "string.m"
{
#line 3242 "string.m"
  {
#line 3242 "string.m"
    struct mercury__string__mercury_append_3_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__mercury_append_3_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 3242 "string.m"
    {
#line 1440 "string.m"
      MR_String mercury__string__Str0_27;
#line 1440 "string.m"
      MR_String mercury__string__Str0_37;

#line 1438 "string.m"
      {
#line 1438 "string.m"
        (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__XList_7, &mercury__string__Str0_27);
      }
#line 1440 "string.m"
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
#line 1439 "string.m"
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__X_4) = mercury__string__Str0_27;
#line 1440 "string.m"
      else
#line 1441 "string.m"
        {
#line 1441 "string.m"
          {
#line 1441 "string.m"
            mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1441 "string.m"
            return;
          }
#line 1441 "string.m"
        }
#line 1438 "string.m"
      {
#line 1438 "string.m"
        (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__YList_8, &mercury__string__Str0_37);
      }
#line 1440 "string.m"
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
#line 1439 "string.m"
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__Y_5) = mercury__string__Str0_37;
#line 1440 "string.m"
      else
#line 1441 "string.m"
        {
#line 1441 "string.m"
          {
#line 1441 "string.m"
            mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1441 "string.m"
            return;
          }
#line 1441 "string.m"
        }
#line 1440 "string.m"
      {
#line 1440 "string.m"
        ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont)((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr);
#line 1440 "string.m"
        return;
      }
#line 3242 "string.m"
    }
#line 3242 "string.m"
  }
#line 3242 "string.m"
}

#line 3240 "string.m"
void MR_CALL 
mercury__string__mercury_append_3_p_3(
#line 3240 "string.m"
  MR_String * mercury__string__X_4,
#line 3240 "string.m"
  MR_String * mercury__string__Y_5,
#line 3240 "string.m"
  MR_String mercury__string__Z_6,
#line 3240 "string.m"
  MR_Cont mercury__string__cont,
#line 3240 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3240 "string.m"
{
#line 3240 "string.m"
  {
#line 3240 "string.m"
    struct mercury__string__mercury_append_3_p_3_env_0_s mercury__string__env;

#line 3240 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__X_4 = mercury__string__X_4;
#line 3240 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__Y_5 = mercury__string__Y_5;
#line 3240 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont = mercury__string__cont;
#line 3240 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 3242 "string.m"
    {
#line 3242 "string.m"
      MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3242 "string.m"
      MR_Word mercury__string__ZList_9;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_3

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 12744 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1362 "string.m"
}
#line 12751 "string.c"
      mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3246 "string.m"
      {
#line 3246 "string.m"
        mercury__list__append_3_p_4(mercury__string__TypeCtorInfo_10_10, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__XList_7, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__YList_8, mercury__string__ZList_9, mercury__string__mercury_append_3_p_3_1, &mercury__string__env);
      }
#line 3242 "string.m"
    }
#line 3240 "string.m"
  }
#line 3240 "string.m"
}

#line 3239 "string.m"
void MR_CALL 
mercury__string__mercury_append_3_p_2(
#line 3239 "string.m"
  MR_String mercury__string__X_4,
#line 3239 "string.m"
  MR_String mercury__string__Y_5,
#line 3239 "string.m"
  MR_String * mercury__string__Z_6)
#line 3239 "string.m"
{
#line 3242 "string.m"
  {
#line 3242 "string.m"
    MR_bool mercury__string__succeeded;
#line 3242 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3242 "string.m"
    MR_Word mercury__string__XList_7;
#line 3242 "string.m"
    MR_Word mercury__string__YList_8;
#line 3242 "string.m"
    MR_Word mercury__string__ZList_9;
#line 1440 "string.m"
    MR_String mercury__string__Str0_35;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 12815 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1362 "string.m"
}
#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 12846 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
#line 1362 "string.m"
}
#line 12853 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3246 "string.m"
    {
#line 3246 "string.m"
      mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, &mercury__string__ZList_9);
    }
#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ZList_9, &mercury__string__Str0_35);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      *mercury__string__Z_6 = mercury__string__Str0_35;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1441 "string.m"
          return;
        }
#line 1441 "string.m"
      }
#line 3242 "string.m"
  }
#line 3239 "string.m"
}

#line 3238 "string.m"
MR_bool MR_CALL 
mercury__string__mercury_append_3_p_1(
#line 3238 "string.m"
  MR_String mercury__string__X_4,
#line 3238 "string.m"
  MR_String * mercury__string__Y_5,
#line 3238 "string.m"
  MR_String mercury__string__Z_6)
#line 3238 "string.m"
{
#line 3242 "string.m"
  {
#line 3242 "string.m"
    MR_bool mercury__string__succeeded;
#line 3242 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3242 "string.m"
    MR_Word mercury__string__XList_7;
#line 3242 "string.m"
    MR_Word mercury__string__YList_8;
#line 3242 "string.m"
    MR_Word mercury__string__ZList_9;
#line 1440 "string.m"
    MR_String mercury__string__Str0_35;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 12937 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1362 "string.m"
}
#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 12968 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1362 "string.m"
}
#line 12975 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3246 "string.m"
    {
#line 3246 "string.m"
      mercury__string__succeeded = mercury__list__append_3_p_3(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, &mercury__string__YList_8, mercury__string__ZList_9);
    }
#line 3242 "string.m"
    if (mercury__string__succeeded)
#line 3242 "string.m"
      {
#line 1438 "string.m"
        {
#line 1438 "string.m"
          mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__YList_8, &mercury__string__Str0_35);
        }
#line 1440 "string.m"
        if (mercury__string__succeeded)
#line 1439 "string.m"
          *mercury__string__Y_5 = mercury__string__Str0_35;
#line 1440 "string.m"
        else
#line 1441 "string.m"
          {
#line 1441 "string.m"
            {
#line 1441 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
            }
#line 1441 "string.m"
          }
#line 1440 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 3242 "string.m"
      }
#line 3242 "string.m"
    return mercury__string__succeeded;
#line 3242 "string.m"
  }
#line 3238 "string.m"
}

#line 3237 "string.m"
MR_bool MR_CALL 
mercury__string__mercury_append_3_p_0(
#line 3237 "string.m"
  MR_String mercury__string__X_4,
#line 3237 "string.m"
  MR_String mercury__string__Y_5,
#line 3237 "string.m"
  MR_String mercury__string__Z_6)
#line 3237 "string.m"
{
#line 3242 "string.m"
  {
#line 3242 "string.m"
    MR_bool mercury__string__succeeded;
#line 3242 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3242 "string.m"
    MR_Word mercury__string__XList_7;
#line 3242 "string.m"
    MR_Word mercury__string__YList_8;
#line 3242 "string.m"
    MR_Word mercury__string__ZList_9;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 13065 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1362 "string.m"
}
#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 13096 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
#line 1362 "string.m"
}
#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 13127 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1362 "string.m"
}
#line 13134 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3246 "string.m"
    {
#line 3246 "string.m"
      return mercury__string__succeeded = mercury__list__append_3_p_2(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, mercury__string__ZList_9);
    }
#line 3242 "string.m"
    return mercury__string__succeeded;
#line 3242 "string.m"
  }
#line 3237 "string.m"
}

#line 3198 "string.m"
void MR_CALL 
mercury__string__append_ooi_3_5_p_0(
#line 3198 "string.m"
  MR_Integer mercury__string__S1Len_1,
#line 3198 "string.m"
  MR_Integer mercury__string__S3Len_2,
#line 3198 "string.m"
  MR_String * mercury__string__S1_3,
#line 3198 "string.m"
  MR_String * mercury__string__S2_4,
#line 3198 "string.m"
  MR_String mercury__string__S3_5)
#line 3198 "string.m"
{
#line 3201 "string.m"
  {
#line 3201 "string.m"
    MR_bool mercury__string__succeeded;

#line 3205 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ooi_3_5_p_0

	MR_Integer S1Len;
	MR_Integer S3Len;
	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1Len =  mercury__string__S1Len_1 ;
	S3Len =  mercury__string__S3Len_2 ;
	S3 =  mercury__string__S3_5 ;
		{
#line 3205 "string.m"
{
    MR_allocate_aligned_string_msg(S1, S1Len, MR_ALLOC_ID);
    MR_memcpy(S1, S3, S1Len);
    S1[S1Len] = '\0';
    MR_allocate_aligned_string_msg(S2, S3Len - S1Len, MR_ALLOC_ID);
    strcpy(S2, S3 + S1Len);
}
#line 13190 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S1_3  = S1;
	 *mercury__string__S2_4  = S2;
#line 3205 "string.m"
}
#line 3201 "string.m"
  }
#line 3198 "string.m"
}

#line 3183 "string.m"
void MR_CALL 
mercury__string__append_ooi_2_5_p_0(
#line 3183 "string.m"
  MR_Integer mercury__string__NextS1Len_6,
#line 3183 "string.m"
  MR_Integer mercury__string__S3Len_7,
#line 3183 "string.m"
  MR_String * mercury__string__S1_8,
#line 3183 "string.m"
  MR_String * mercury__string__S2_9,
#line 3183 "string.m"
  MR_String mercury__string__S3_10,
#line 3183 "string.m"
  MR_Cont mercury__string__cont,
#line 3183 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3183 "string.m"
{
#line 3189 "string.m"
  while (MR_TRUE)
#line 3189 "string.m"
    {
#line 3189 "string.m"
      /* tailcall optimized into a loop */
#line 3189 "string.m"
      {
#line 3189 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__NextS1Len_6 == mercury__string__S3Len_7);

#line 3189 "string.m"
        if (mercury__string__succeeded)
#line 3188 "string.m"
          {
#line 3188 "string.m"
            {
#line 3188 "string.m"
              mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
            }
#line 3188 "string.m"
            {
#line 3188 "string.m"
              mercury__string__cont(mercury__string__cont_env_ptr);
#line 3188 "string.m"
              return;
            }
#line 3188 "string.m"
          }
#line 3189 "string.m"
        else
#line 3192 "string.m"
          {
#line 3191 "string.m"
            {
#line 3191 "string.m"
              mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
            }
#line 3191 "string.m"
            {
#line 3191 "string.m"
              mercury__string__cont(mercury__string__cont_env_ptr);
            }
#line 3193 "string.m"
            {
#line 3193 "string.m"
              MR_Integer mercury__string__AdvS1Len_11;
#line 1938 "string.m"
              MR_Char mercury__string__V_12_12;

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ooi_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S3_10 ;
	Index =  mercury__string__NextS1Len_6 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13297 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__AdvS1Len_11  = NextIndex;
	 mercury__string__V_12_12  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3193 "string.m"
              if (mercury__string__succeeded)
#line 3194 "string.m"
                {
#line 3194 "string.m"
                  /* direct tailcall eliminated */
#line 3194 "string.m"
                  {
#line 3194 "string.m"
                    MR_Integer mercury__string__NextS1Len__tmp_copy_6 = mercury__string__AdvS1Len_11;

#line 3194 "string.m"
                    mercury__string__NextS1Len_6 = mercury__string__NextS1Len__tmp_copy_6;
#line 3194 "string.m"
                  }
#line 3194 "string.m"
                  continue;
#line 3194 "string.m"
                }
#line 3193 "string.m"
            }
#line 3192 "string.m"
          }
#line 3189 "string.m"
      }
#line 3189 "string.m"
      break;
#line 3189 "string.m"
    }
#line 3183 "string.m"
}

#line 3177 "string.m"
void MR_CALL 
mercury__string__append_ooi_3_p_0(
#line 3177 "string.m"
  MR_String * mercury__string__S1_4,
#line 3177 "string.m"
  MR_String * mercury__string__S2_5,
#line 3177 "string.m"
  MR_String mercury__string__S3_6,
#line 3177 "string.m"
  MR_Cont mercury__string__cont,
#line 3177 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3177 "string.m"
{
#line 3179 "string.m"
  {
#line 3179 "string.m"
    MR_bool mercury__string__succeeded;
#line 3179 "string.m"
    MR_Integer mercury__string__S3Len_7;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ooi_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 13375 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_7  = Length;
#line 2398 "string.m"
}
#line 3181 "string.m"
    {
#line 3181 "string.m"
      mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_7, mercury__string__S1_4, mercury__string__S2_5, mercury__string__S3_6, mercury__string__cont, mercury__string__cont_env_ptr);
#line 3181 "string.m"
      return;
    }
#line 3179 "string.m"
  }
#line 3177 "string.m"
}

#line 3141 "string.m"
void MR_CALL 
mercury__string__append_iio_3_p_0(
#line 3141 "string.m"
  MR_String mercury__string__S1_1,
#line 3141 "string.m"
  MR_String mercury__string__S2_2,
#line 3141 "string.m"
  MR_String * mercury__string__S3_3)
#line 3141 "string.m"
{
#line 3143 "string.m"
  {
#line 3143 "string.m"
    MR_bool mercury__string__succeeded;

#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_iio_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 13430 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
#line 3147 "string.m"
}
#line 3143 "string.m"
  }
#line 3141 "string.m"
}

#line 3089 "string.m"
MR_bool MR_CALL 
mercury__string__append_ioi_3_p_0(
#line 3089 "string.m"
  MR_String mercury__string__S1_1,
#line 3089 "string.m"
  MR_String * mercury__string__S2_2,
#line 3089 "string.m"
  MR_String mercury__string__S3_3)
#line 3089 "string.m"
{
#line 3091 "string.m"
  {
#line 3091 "string.m"
    MR_bool mercury__string__succeeded;

#line 3095 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ioi_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3095 "string.m"
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}
#line 13488 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
#line 3095 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3091 "string.m"
    return mercury__string__succeeded;
#line 3091 "string.m"
  }
#line 3089 "string.m"
}

#line 3046 "string.m"
MR_bool MR_CALL 
mercury__string__append_iii_3_p_0(
#line 3046 "string.m"
  MR_String mercury__string__S1_1,
#line 3046 "string.m"
  MR_String mercury__string__S2_2,
#line 3046 "string.m"
  MR_String mercury__string__S3_3)
#line 3046 "string.m"
{
#line 3048 "string.m"
  {
#line 3048 "string.m"
    MR_bool mercury__string__succeeded;

#line 3052 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_iii_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3052 "string.m"
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}
#line 13542 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3052 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3048 "string.m"
    return mercury__string__succeeded;
#line 3048 "string.m"
  }
#line 3046 "string.m"
}

#line 3006 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_start_loop_6_p_0(
#line 3006 "string.m"
  MR_String mercury__string__String_7,
#line 3006 "string.m"
  MR_String mercury__string__SubString_8,
#line 3006 "string.m"
  MR_Integer mercury__string__I_9,
#line 3006 "string.m"
  MR_Integer mercury__string__Len_10,
#line 3006 "string.m"
  MR_Integer mercury__string__SubLen_11,
#line 3006 "string.m"
  MR_Integer * mercury__string__Index_12)
#line 3006 "string.m"
{
#line 3009 "string.m"
  while (MR_TRUE)
#line 3009 "string.m"
    {
#line 3009 "string.m"
      /* tailcall optimized into a loop */
#line 3009 "string.m"
      {
#line 3009 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__Len_10);
#line 3017 "string.m"
        MR_Integer mercury__string__V_13_13;
#line 3017 "string.m"
        MR_String mercury__string__V_17_17;

#line 3009 "string.m"
        if (mercury__string__succeeded)
#line 3009 "string.m"
          {
#line 3017 "string.m"
            mercury__string__V_13_13 = (mercury__string__I_9 + mercury__string__SubLen_11);
#line 3881 "string.m"
            {
#line 3881 "string.m"
              mercury__string__between_4_p_0(mercury__string__String_7, mercury__string__I_9, mercury__string__V_13_13, &mercury__string__V_17_17);
            }
#line 3017 "string.m"
            mercury__string__succeeded = (strcmp(mercury__string__SubString_8, mercury__string__V_17_17) == 0);
#line 3020 "string.m"
            if (mercury__string__succeeded)
#line 3019 "string.m"
              {
#line 3019 "string.m"
                *mercury__string__Index_12 = mercury__string__I_9;
#line 3019 "string.m"
                mercury__string__succeeded = MR_TRUE;
#line 3019 "string.m"
              }
#line 3020 "string.m"
            else
#line 3021 "string.m"
              {
#line 3021 "string.m"
                MR_Integer mercury__string__V_14_14 = (mercury__string__I_9 + (MR_Integer) 1);

#line 3021 "string.m"
                /* direct tailcall eliminated */
#line 3021 "string.m"
                {
#line 3021 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__V_14_14;

#line 3021 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 3021 "string.m"
                }
#line 3021 "string.m"
                continue;
#line 3021 "string.m"
              }
#line 3009 "string.m"
          }
#line 3009 "string.m"
        return mercury__string__succeeded;
#line 3009 "string.m"
      }
#line 3009 "string.m"
      break;
#line 3009 "string.m"
    }
#line 3006 "string.m"
}

#line 2916 "string.m"
void MR_CALL 
mercury__string__suffix_length_loop_4_p_0(
#line 2916 "string.m"
  MR_Word mercury__string__P_5,
#line 2916 "string.m"
  MR_String mercury__string__S_6,
#line 2916 "string.m"
  MR_Integer mercury__string__I_7,
#line 2916 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2916 "string.m"
{
#line 2925 "string.m"
  while (MR_TRUE)
#line 2925 "string.m"
    {
#line 2925 "string.m"
      /* tailcall optimized into a loop */
#line 2925 "string.m"
      {
#line 2925 "string.m"
        MR_bool mercury__string__succeeded;
#line 2925 "string.m"
        MR_Integer mercury__string__J_9;
#line 2921 "string.m"
        MR_Char mercury__string__Char_10;
#line 2922 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_length_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_6 ;
	Index =  mercury__string__I_7 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 13706 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2921 "string.m"
        if (mercury__string__succeeded)
#line 2921 "string.m"
          {
#line 2922 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 2922 "string.m"
            {
#line 2922 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 2921 "string.m"
          }
#line 2925 "string.m"
        if (mercury__string__succeeded)
#line 2924 "string.m"
          {
#line 2924 "string.m"
            /* direct tailcall eliminated */
#line 2924 "string.m"
            {
#line 2924 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2924 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2924 "string.m"
            }
#line 2924 "string.m"
            continue;
#line 2924 "string.m"
          }
#line 2925 "string.m"
        else
#line 2926 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2925 "string.m"
      }
#line 2925 "string.m"
      break;
#line 2925 "string.m"
    }
#line 2916 "string.m"
}

#line 2899 "string.m"
void MR_CALL 
mercury__string__prefix_length_loop_4_p_0(
#line 2899 "string.m"
  MR_Word mercury__string__P_5,
#line 2899 "string.m"
  MR_String mercury__string__S_6,
#line 2899 "string.m"
  MR_Integer mercury__string__I_7,
#line 2899 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2899 "string.m"
{
#line 2908 "string.m"
  while (MR_TRUE)
#line 2908 "string.m"
    {
#line 2908 "string.m"
      /* tailcall optimized into a loop */
#line 2908 "string.m"
      {
#line 2908 "string.m"
        MR_bool mercury__string__succeeded;
#line 2908 "string.m"
        MR_Integer mercury__string__J_9;
#line 2904 "string.m"
        MR_Char mercury__string__Char_10;
#line 2905 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_length_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_6 ;
	Index =  mercury__string__I_7 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13817 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2904 "string.m"
        if (mercury__string__succeeded)
#line 2904 "string.m"
          {
#line 2905 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 2905 "string.m"
            {
#line 2905 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 2904 "string.m"
          }
#line 2908 "string.m"
        if (mercury__string__succeeded)
#line 2907 "string.m"
          {
#line 2907 "string.m"
            /* direct tailcall eliminated */
#line 2907 "string.m"
            {
#line 2907 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2907 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2907 "string.m"
            }
#line 2907 "string.m"
            continue;
#line 2907 "string.m"
          }
#line 2908 "string.m"
        else
#line 2909 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2908 "string.m"
      }
#line 2908 "string.m"
      break;
#line 2908 "string.m"
    }
#line 2899 "string.m"
}

#line 2881 "string.m"
MR_bool MR_CALL 
mercury__string__contains_char_3_p_0(
#line 2881 "string.m"
  MR_String mercury__string__Str_4,
#line 2881 "string.m"
  MR_Char mercury__string__Char_5,
#line 2881 "string.m"
  MR_Integer mercury__string__I_6)
#line 2881 "string.m"
{
#line 2890 "string.m"
  while (MR_TRUE)
#line 2890 "string.m"
    {
#line 2890 "string.m"
      /* tailcall optimized into a loop */
#line 2890 "string.m"
      {
#line 2890 "string.m"
        MR_bool mercury__string__succeeded;
#line 2890 "string.m"
        MR_Integer mercury__string__J_7;
#line 2890 "string.m"
        MR_Char mercury__string__IndexChar_8;

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__contains_char_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__I_6 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13924 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_7  = NextIndex;
	 mercury__string__IndexChar_8  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2890 "string.m"
        if (mercury__string__succeeded)
#line 2890 "string.m"
          {
#line 2885 "string.m"
            mercury__string__succeeded = (mercury__string__IndexChar_8 == mercury__string__Char_5);
#line 2887 "string.m"
            if (mercury__string__succeeded)
#line 2886 "string.m"
              mercury__string__succeeded = MR_TRUE;
#line 2887 "string.m"
            else
#line 2888 "string.m"
              {
#line 2888 "string.m"
                /* direct tailcall eliminated */
#line 2888 "string.m"
                {
#line 2888 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__J_7;

#line 2888 "string.m"
                  mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 2888 "string.m"
                }
#line 2888 "string.m"
                continue;
#line 2888 "string.m"
              }
#line 2890 "string.m"
          }
#line 2890 "string.m"
        return mercury__string__succeeded;
#line 2890 "string.m"
      }
#line 2890 "string.m"
      break;
#line 2890 "string.m"
    }
#line 2881 "string.m"
}

#line 2827 "string.m"
MR_bool MR_CALL 
mercury__string__all_match_loop_3_p_0(
#line 2827 "string.m"
  MR_Word mercury__string__P_4,
#line 2827 "string.m"
  MR_String mercury__string__String_5,
#line 2827 "string.m"
  MR_Integer mercury__string__Cur_6)
#line 2827 "string.m"
{
#line 2834 "string.m"
  while (MR_TRUE)
#line 2834 "string.m"
    {
#line 2834 "string.m"
      /* tailcall optimized into a loop */
#line 2834 "string.m"
      {
#line 2834 "string.m"
        MR_bool mercury__string__succeeded;
#line 2834 "string.m"
        MR_Integer mercury__string__Next_7;
#line 2834 "string.m"
        MR_Char mercury__string__Char_8;

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__all_match_loop_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Cur_6 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14028 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2834 "string.m"
        if (mercury__string__succeeded)
#line 2832 "string.m"
          {
#line 2832 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_4, (MR_Integer) 1)));

#line 2832 "string.m"
            {
#line 2832 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_4), ((MR_Box) (MR_Word) (mercury__string__Char_8)));
            }
#line 2832 "string.m"
            if (mercury__string__succeeded)
#line 2833 "string.m"
              {
#line 2833 "string.m"
                /* direct tailcall eliminated */
#line 2833 "string.m"
                {
#line 2833 "string.m"
                  MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 2833 "string.m"
                  mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 2833 "string.m"
                }
#line 2833 "string.m"
                continue;
#line 2833 "string.m"
              }
#line 2832 "string.m"
          }
#line 2834 "string.m"
        else
#line 2835 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 2834 "string.m"
        return mercury__string__succeeded;
#line 2834 "string.m"
      }
#line 2834 "string.m"
      break;
#line 2834 "string.m"
    }
#line 2827 "string.m"
}

#line 2662 "string.m"
void MR_CALL 
mercury__string__hash3_loop_5_p_0(
#line 2662 "string.m"
  MR_String mercury__string__String_6,
#line 2662 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2662 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2662 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2662 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2662 "string.m"
{
#line 2671 "string.m"
  while (MR_TRUE)
#line 2671 "string.m"
    {
#line 2671 "string.m"
      /* tailcall optimized into a loop */
#line 2671 "string.m"
      {
#line 2671 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2671 "string.m"
        if (mercury__string__succeeded)
#line 2667 "string.m"
          {
#line 2667 "string.m"
            MR_Integer mercury__string__C_10;
#line 2667 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2667 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
#line 2667 "string.m"
            MR_Integer mercury__string__V_16_16;

#line 2158 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash3_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2158 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14142 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2158 "string.m"
}
#line 2668 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 49);
#line 2669 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2670 "string.m"
            mercury__string__V_16_16 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2670 "string.m"
            /* direct tailcall eliminated */
#line 2670 "string.m"
            {
#line 2670 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_16_16;
#line 2670 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

#line 2670 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2670 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2670 "string.m"
            }
#line 2670 "string.m"
            continue;
#line 2667 "string.m"
          }
#line 2671 "string.m"
        else
#line 2670 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2671 "string.m"
      }
#line 2671 "string.m"
      break;
#line 2671 "string.m"
    }
#line 2662 "string.m"
}

#line 2644 "string.m"
void MR_CALL 
mercury__string__hash2_loop_5_p_0(
#line 2644 "string.m"
  MR_String mercury__string__String_6,
#line 2644 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2644 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2644 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2644 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2644 "string.m"
{
#line 2653 "string.m"
  while (MR_TRUE)
#line 2653 "string.m"
    {
#line 2653 "string.m"
      /* tailcall optimized into a loop */
#line 2653 "string.m"
      {
#line 2653 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2653 "string.m"
        if (mercury__string__succeeded)
#line 2649 "string.m"
          {
#line 2649 "string.m"
            MR_Integer mercury__string__C_10;
#line 2649 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2649 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
#line 2649 "string.m"
            MR_Integer mercury__string__V_16_16;

#line 2158 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash2_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2158 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14242 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2158 "string.m"
}
#line 2650 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 37);
#line 2651 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2652 "string.m"
            mercury__string__V_16_16 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2652 "string.m"
            /* direct tailcall eliminated */
#line 2652 "string.m"
            {
#line 2652 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_16_16;
#line 2652 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

#line 2652 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2652 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2652 "string.m"
            }
#line 2652 "string.m"
            continue;
#line 2649 "string.m"
          }
#line 2653 "string.m"
        else
#line 2652 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2653 "string.m"
      }
#line 2653 "string.m"
      break;
#line 2653 "string.m"
    }
#line 2644 "string.m"
}

#line 2626 "string.m"
void MR_CALL 
mercury__string__hash_loop_5_p_0(
#line 2626 "string.m"
  MR_String mercury__string__String_6,
#line 2626 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2626 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2626 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2626 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2626 "string.m"
{
#line 2635 "string.m"
  while (MR_TRUE)
#line 2635 "string.m"
    {
#line 2635 "string.m"
      /* tailcall optimized into a loop */
#line 2635 "string.m"
      {
#line 2635 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2635 "string.m"
        if (mercury__string__succeeded)
#line 2631 "string.m"
          {
#line 2631 "string.m"
            MR_Integer mercury__string__C_10;
#line 2631 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2631 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 2631 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
#line 2631 "string.m"
            MR_Integer mercury__string__V_17_17;

#line 2158 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2158 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14344 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2158 "string.m"
}
#line 2632 "string.m"
            mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 << (MR_Integer) 5);
#line 2632 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 ^ mercury__string__V_14_14);
#line 2633 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__STATE_VARIABLE_HashVal_13_13 ^ mercury__string__C_10);
#line 2634 "string.m"
            mercury__string__V_17_17 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2634 "string.m"
            /* direct tailcall eliminated */
#line 2634 "string.m"
            {
#line 2634 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_17_17;
#line 2634 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

#line 2634 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2634 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2634 "string.m"
            }
#line 2634 "string.m"
            continue;
#line 2631 "string.m"
          }
#line 2635 "string.m"
        else
#line 2634 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2635 "string.m"
      }
#line 2635 "string.m"
      break;
#line 2635 "string.m"
    }
#line 2626 "string.m"
}

#line 2596 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_loop_5_p_0(
#line 2596 "string.m"
  MR_String mercury__string__String_6,
#line 2596 "string.m"
  MR_Integer mercury__string__Offset_7,
#line 2596 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2596 "string.m"
  MR_Integer mercury__string__N_9,
#line 2596 "string.m"
  MR_Integer * mercury__string__Index_10)
#line 2596 "string.m"
{
#line 2599 "string.m"
  while (MR_TRUE)
#line 2599 "string.m"
    {
#line 2599 "string.m"
      /* tailcall optimized into a loop */
#line 2599 "string.m"
      {
#line 2599 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Offset_7 < mercury__string__Length_8);

#line 2599 "string.m"
        if (mercury__string__succeeded)
#line 2599 "string.m"
          {
#line 2601 "string.m"
            mercury__string__succeeded = (mercury__string__N_9 == (MR_Integer) 0);
#line 2603 "string.m"
            if (mercury__string__succeeded)
#line 2602 "string.m"
              {
#line 2602 "string.m"
                *mercury__string__Index_10 = mercury__string__Offset_7;
#line 2602 "string.m"
                mercury__string__succeeded = MR_TRUE;
#line 2602 "string.m"
              }
#line 2603 "string.m"
            else
#line 2604 "string.m"
              {
#line 2604 "string.m"
                MR_Integer mercury__string__NextOffset_11;
#line 2604 "string.m"
                MR_Integer mercury__string__V_13_13;
#line 2604 "string.m"
                MR_Integer mercury__string__V_14_14;
#line 1938 "string.m"
                MR_Char mercury__string__V_12_12;

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__codepoint_offset_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Offset_7 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14471 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__NextOffset_11  = NextIndex;
	 mercury__string__V_12_12  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2604 "string.m"
                if (mercury__string__succeeded)
#line 2604 "string.m"
                  {
#line 2605 "string.m"
                    mercury__string__V_14_14 = (MR_Integer) 1;
#line 2605 "string.m"
                    mercury__string__V_13_13 = (mercury__string__N_9 - mercury__string__V_14_14);
#line 2605 "string.m"
                    /* direct tailcall eliminated */
#line 2605 "string.m"
                    {
#line 2605 "string.m"
                      MR_Integer mercury__string__Offset__tmp_copy_7 = mercury__string__NextOffset_11;
#line 2605 "string.m"
                      MR_Integer mercury__string__N__tmp_copy_9 = mercury__string__V_13_13;

#line 2605 "string.m"
                      mercury__string__N_9 = mercury__string__N__tmp_copy_9;
#line 2605 "string.m"
                      mercury__string__Offset_7 = mercury__string__Offset__tmp_copy_7;
#line 2605 "string.m"
                    }
#line 2605 "string.m"
                    continue;
#line 2604 "string.m"
                  }
#line 2604 "string.m"
              }
#line 2599 "string.m"
          }
#line 2599 "string.m"
        return mercury__string__succeeded;
#line 2599 "string.m"
      }
#line 2599 "string.m"
      break;
#line 2599 "string.m"
    }
#line 2596 "string.m"
}

#line 2526 "string.m"
void MR_CALL 
mercury__string__count_utf8_code_units_2_3_p_0(
#line 2526 "string.m"
  MR_Char mercury__string__Char_4,
#line 2526 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Length_0_8,
#line 2526 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Length_9)
#line 2526 "string.m"
{
#line 2528 "string.m"
  {
#line 2528 "string.m"
    MR_bool mercury__string__succeeded;
#line 2528 "string.m"
    MR_Integer mercury__string__CharInt_6;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_2_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__Char_4 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 14555 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__CharInt_6  = Int;
#line 66 "char.opt"
}
#line 2530 "string.m"
    mercury__string__succeeded = (mercury__string__CharInt_6 <= (MR_Integer) 127);
#line 2532 "string.m"
    if (mercury__string__succeeded)
#line 2531 "string.m"
      {
#line 2531 "string.m"
        *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + (MR_Integer) 1);
#line 2531 "string.m"
      }
#line 2532 "string.m"
    else
#line 2534 "string.m"
      {
#line 2534 "string.m"
        MR_Word mercury__string__UTF8_7;

#line 2532 "string.m"
        {
#line 2532 "string.m"
          mercury__string__succeeded = mercury__char__to_utf8_2_p_0(mercury__string__Char_4, &mercury__string__UTF8_7);
        }
#line 2534 "string.m"
        if (mercury__string__succeeded)
#line 2533 "string.m"
          {
#line 2533 "string.m"
            MR_Word mercury__string__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2533 "string.m"
            MR_Integer mercury__string__V_14_14;

#line 78 "list.opt"
            {
#line 78 "list.opt"
              mercury__list__length_2_3_p_0(mercury__string__TypeCtorInfo_17_17, mercury__string__UTF8_7, (MR_Integer) 0, &mercury__string__V_14_14);
            }
#line 2533 "string.m"
            *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + mercury__string__V_14_14);
#line 2533 "string.m"
          }
#line 2534 "string.m"
        else
#line 2535 "string.m"
          {
#line 2535 "string.m"
            {
#line 2535 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.count_utf8_code_units_2\'/3", (MR_String) "char.to_utf8 failed");
#line 2535 "string.m"
              return;
            }
#line 2535 "string.m"
          }
#line 2534 "string.m"
      }
#line 2528 "string.m"
  }
#line 2526 "string.m"
}

#line 2499 "string.m"
void MR_CALL 
mercury__string__count_codepoints_loop_4_p_0(
#line 2499 "string.m"
  MR_String mercury__string__String_5,
#line 2499 "string.m"
  MR_Integer mercury__string__I_6,
#line 2499 "string.m"
  MR_Integer mercury__string__Count0_7,
#line 2499 "string.m"
  MR_Integer * mercury__string__Count_8)
#line 2499 "string.m"
{
#line 2504 "string.m"
  while (MR_TRUE)
#line 2504 "string.m"
    {
#line 2504 "string.m"
      /* tailcall optimized into a loop */
#line 2504 "string.m"
      {
#line 2504 "string.m"
        MR_bool mercury__string__succeeded;
#line 2504 "string.m"
        MR_Integer mercury__string__J_9;
#line 1938 "string.m"
        MR_Char mercury__string__V_10_10;

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_codepoints_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__I_6 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14675 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__V_10_10  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2504 "string.m"
        if (mercury__string__succeeded)
#line 2503 "string.m"
          {
#line 2503 "string.m"
            MR_Integer mercury__string__V_11_11 = (mercury__string__Count0_7 + (MR_Integer) 1);

#line 2503 "string.m"
            /* direct tailcall eliminated */
#line 2503 "string.m"
            {
#line 2503 "string.m"
              MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__J_9;
#line 2503 "string.m"
              MR_Integer mercury__string__Count0__tmp_copy_7 = mercury__string__V_11_11;

#line 2503 "string.m"
              mercury__string__Count0_7 = mercury__string__Count0__tmp_copy_7;
#line 2503 "string.m"
              mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 2503 "string.m"
            }
#line 2503 "string.m"
            continue;
#line 2503 "string.m"
          }
#line 2504 "string.m"
        else
#line 2505 "string.m"
          *mercury__string__Count_8 = mercury__string__Count0_7;
#line 2504 "string.m"
      }
#line 2504 "string.m"
      break;
#line 2504 "string.m"
    }
#line 2499 "string.m"
}

#line 2318 "string.m"
void MR_CALL 
mercury__string__unsafe_set_char_non_null_4_p_0(
#line 2318 "string.m"
  MR_Char mercury__string__Ch_1,
#line 2318 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2318 "string.m"
  MR_String mercury__string__Str0_3,
#line 2318 "string.m"
  MR_String * mercury__string__Str_4)
#line 2318 "string.m"
{
#line 2323 "string.m"
  {
#line 2323 "string.m"
    MR_bool mercury__string__succeeded;

#line 2327 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_non_null_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;

	Ch =  mercury__string__Ch_1 ;
	Index =  mercury__string__Index_2 ;
	Str0 =  mercury__string__Str0_3 ;
		{
#line 2327 "string.m"

    size_t len = strlen(Str0);
    if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        /* Fast path. */
        MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
        strcpy(Str, Str0);
        Str[Index] = Ch;
    } else {
        int oldc = MR_utf8_get(Str0, Index);
        size_t oldwidth = MR_utf8_width(oldc);
        size_t newwidth = MR_utf8_width(Ch);
        size_t newlen;
        size_t tailofs;

        newlen = len - oldwidth + newwidth;
        MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
        MR_memcpy(Str, Str0, Index);
        MR_utf8_encode(Str + Index, Ch);
        strcpy(Str + Index + newwidth, Str0 + Index + oldwidth);
    }

#line 14778 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = Str;
#line 2327 "string.m"
}
#line 2323 "string.m"
  }
#line 2318 "string.m"
}

#line 2194 "string.m"
MR_bool MR_CALL 
mercury__string__set_char_non_null_4_p_0(
#line 2194 "string.m"
  MR_Char mercury__string__Ch_1,
#line 2194 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2194 "string.m"
  MR_String mercury__string__Str0_3,
#line 2194 "string.m"
  MR_String * mercury__string__Str_4)
#line 2194 "string.m"
{
#line 2199 "string.m"
  {
#line 2199 "string.m"
    MR_bool mercury__string__succeeded;

#line 2203 "string.m"
{
#define MR_PROC_LABEL mercury__string__set_char_non_null_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Ch =  mercury__string__Ch_1 ;
	Index =  mercury__string__Index_2 ;
	Str0 =  mercury__string__Str0_3 ;
		{
#line 2203 "string.m"

    size_t len = strlen(Str0);
    if ((MR_Unsigned) Index >= len) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = MR_TRUE;
        MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
        strcpy(Str, Str0);
        Str[Index] = Ch;
    } else {
        int oldc = MR_utf8_get(Str0, Index);
        if (oldc < 0) {
            SUCCESS_INDICATOR = MR_FALSE;
        } else {
            size_t oldwidth = MR_utf8_width(oldc);
            size_t newwidth = MR_utf8_width(Ch);
            size_t newlen;

            newlen = len - oldwidth + newwidth;
            MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
            MR_memcpy(Str, Str0, Index);
            MR_utf8_encode(Str + Index, Ch);
            strcpy(Str + Index + newwidth, Str0 + Index + oldwidth);
            SUCCESS_INDICATOR = MR_TRUE;
        }
    }

#line 14851 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_4  = Str;
#line 2203 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2199 "string.m"
    return mercury__string__succeeded;
#line 2199 "string.m"
  }
#line 2194 "string.m"
}

#line 2126 "string.m"
MR_bool MR_CALL 
mercury__string__index_check_2_p_0(
#line 2126 "string.m"
  MR_Integer mercury__string__Index_1,
#line 2126 "string.m"
  MR_Integer mercury__string__Length_2)
#line 2126 "string.m"
{
#line 2128 "string.m"
  {
#line 2128 "string.m"
    MR_bool mercury__string__succeeded;

#line 2132 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_check_2_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_1 ;
	Length =  mercury__string__Length_2 ;
		{
#line 2132 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 14904 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2132 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2128 "string.m"
    return mercury__string__succeeded;
#line 2128 "string.m"
  }
#line 2126 "string.m"
}

#line 1872 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_index_2_3_p_0(
#line 1872 "string.m"
  MR_String mercury__string__Str_1,
#line 1872 "string.m"
  MR_Integer mercury__string__Index_2,
#line 1872 "string.m"
  MR_Char * mercury__string__Ch_3)
#line 1872 "string.m"
{
#line 1874 "string.m"
  {
#line 1874 "string.m"
    MR_bool mercury__string__succeeded;

#line 1878 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 1878 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 14957 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Ch_3  = Ch;
#line 1878 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1874 "string.m"
    return mercury__string__succeeded;
#line 1874 "string.m"
  }
#line 1872 "string.m"
}

#line 1685 "string.m"
void MR_CALL 
mercury__string__to_code_unit_list_loop_4_p_0(
#line 1685 "string.m"
  MR_String mercury__string__String_5,
#line 1685 "string.m"
  MR_Integer mercury__string__Index_6,
#line 1685 "string.m"
  MR_Integer mercury__string__End_7,
#line 1685 "string.m"
  MR_Word * mercury__string__List_8)
#line 1685 "string.m"
{
#line 1691 "string.m"
  {
#line 1691 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Index_6 >= mercury__string__End_7);

#line 1691 "string.m"
    if (mercury__string__succeeded)
#line 1690 "string.m"
      *mercury__string__List_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1691 "string.m"
    else
#line 1692 "string.m"
      {
#line 1692 "string.m"
        MR_Integer mercury__string__Code_9;
#line 1692 "string.m"
        MR_Word mercury__string__Tail_10;
#line 1692 "string.m"
        MR_Integer mercury__string__V_11_11;

#line 2158 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Index_6 ;
		{
#line 2158 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 15023 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Code_9  = Code;
#line 2158 "string.m"
}
#line 1693 "string.m"
        mercury__string__V_11_11 = (mercury__string__Index_6 + (MR_Integer) 1);
#line 1693 "string.m"
        {
#line 1693 "string.m"
          mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_5, mercury__string__V_11_11, mercury__string__End_7, &mercury__string__Tail_10);
        }
#line 1694 "string.m"
        {
#line 1694 "string.m"
          MR_Word base;
#line 1694 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "string.m"
          *mercury__string__List_8 = base;
#line 1694 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Code_9));
#line 1694 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Tail_10));
#line 1694 "string.m"
        }
#line 1692 "string.m"
      }
#line 1691 "string.m"
  }
#line 1685 "string.m"
}

#line 1356 "string.m"
void MR_CALL 
mercury__string__to_char_list_forward_2_p_0(
#line 1356 "string.m"
  MR_String mercury__string__Str_1,
#line 1356 "string.m"
  MR_Word * mercury__string__CharList_2)
#line 1356 "string.m"
{
#line 1358 "string.m"
  {
#line 1358 "string.m"
    MR_bool mercury__string__succeeded;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_forward_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 15096 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
#line 1362 "string.m"
}
#line 1358 "string.m"
  }
#line 1356 "string.m"
}

#line 1291 "string.m"
void MR_CALL 
mercury__string__format_3_p_0(
#line 1291 "string.m"
  MR_String mercury__string__FormatString_4,
#line 1291 "string.m"
  MR_Word mercury__string__PolyList_5,
#line 1291 "string.m"
  MR_String * mercury__string__String_6)
#line 1291 "string.m"
{
#line 5327 "string.m"
  {
#line 5327 "string.m"
    MR_bool mercury__string__succeeded;

#line 5327 "string.m"
    {
#line 5327 "string.m"
      mercury__string__format__format_impl_3_p_0(mercury__string__FormatString_4, mercury__string__PolyList_5, mercury__string__String_6);
#line 5327 "string.m"
      return;
    }
#line 5327 "string.m"
  }
#line 1291 "string.m"
}

#line 1290 "string.m"
MR_String MR_CALL 
mercury__string__format_2_f_0(
#line 1290 "string.m"
  MR_String mercury__string__S1_4,
#line 1290 "string.m"
  MR_Word mercury__string__PT_5)
#line 1290 "string.m"
{
#line 5327 "string.m"
  {
#line 5327 "string.m"
    MR_bool mercury__string__succeeded;
#line 5327 "string.m"
    MR_String mercury__string__S2_6;

#line 5327 "string.m"
    {
#line 5327 "string.m"
      mercury__string__format__format_impl_3_p_0(mercury__string__S1_4, mercury__string__PT_5, &mercury__string__S2_6);
    }
#line 5327 "string.m"
    return mercury__string__S2_6;
#line 5327 "string.m"
  }
#line 1290 "string.m"
}

#line 1221 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_3(
#line 1221 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1221 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1221 "string.m"
  MR_Box mercury__string__X_7,
#line 1221 "string.m"
  MR_String * mercury__string__String_8)
#line 1221 "string.m"
{
#line 21 "string.to_string.opt"
  {
#line 21 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_17;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 21 "string.to_string.opt"
    MR_Word mercury__string__RevStrings_9_15;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_11_16;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__Priority_10_23;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__V_13_24;
#line 15195 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15197 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15200 "string.c"
    {
#line 15202 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15205 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15214 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__RevStrings_9_15, &mercury__string__V_11_16);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 21 "string.to_string.opt"
  }
#line 1221 "string.m"
}

#line 1220 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_2(
#line 1220 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1220 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1220 "string.m"
  MR_Box mercury__string__X_7,
#line 1220 "string.m"
  MR_String * mercury__string__String_8)
#line 1220 "string.m"
{
#line 21 "string.to_string.opt"
  {
#line 21 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_17;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 21 "string.to_string.opt"
    MR_Word mercury__string__RevStrings_9_15;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_11_16;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__Priority_10_23;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__V_13_24;
#line 15262 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15264 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15267 "string.c"
    {
#line 15269 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15272 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15281 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__RevStrings_9_15, &mercury__string__V_11_16);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 21 "string.to_string.opt"
  }
#line 1220 "string.m"
}

#line 1219 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_1(
#line 1219 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1219 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1219 "string.m"
  MR_Box mercury__string__X_7,
#line 1219 "string.m"
  MR_String * mercury__string__String_8)
#line 1219 "string.m"
{
#line 21 "string.to_string.opt"
  {
#line 21 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_17;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 21 "string.to_string.opt"
    MR_Word mercury__string__RevStrings_9_15;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_11_16;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__Priority_10_23;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__V_13_24;
#line 15329 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15331 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15334 "string.c"
    {
#line 15336 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15339 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15348 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__RevStrings_9_15, &mercury__string__V_11_16);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 21 "string.to_string.opt"
  }
#line 1219 "string.m"
}

#line 1218 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_0(
#line 1218 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1218 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1218 "string.m"
  MR_Box mercury__string__X_7,
#line 1218 "string.m"
  MR_String * mercury__string__String_8)
#line 1218 "string.m"
{
#line 21 "string.to_string.opt"
  {
#line 21 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_17;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 21 "string.to_string.opt"
    MR_Word mercury__string__RevStrings_9_15;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_11_16;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__Priority_10_23;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__V_13_24;
#line 15396 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15398 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15401 "string.c"
    {
#line 15403 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15406 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15415 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__RevStrings_9_15, &mercury__string__V_11_16);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 21 "string.to_string.opt"
  }
#line 1218 "string.m"
}

#line 1202 "string.m"
MR_String MR_CALL 
mercury__string__string_ops_2_f_0(
#line 1202 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_6,
#line 1202 "string.m"
  MR_Box mercury__string__X_5)
#line 1202 "string.m"
{
#line 18 "string.to_string.opt"
  {
#line 18 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 18 "string.to_string.opt"
    MR_String mercury__string__HeadVar__3_3;
#line 18 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_18;
#line 18 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_27 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 18 "string.to_string.opt"
    MR_Word mercury__string__V_10_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 18 "string.to_string.opt"
    MR_Word mercury__string__RevStrings_9_16;
#line 18 "string.to_string.opt"
    MR_Word mercury__string__V_11_17;
#line 18 "string.to_string.opt"
    MR_Integer mercury__string__Priority_10_24;
#line 18 "string.to_string.opt"
    MR_Integer mercury__string__V_13_25;
#line 15461 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_27, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15463 "string.c"
    MR_Box mercury__string__conv1_V_13_25;

#line 15466 "string.c"
    {
#line 15468 "string.c"
      mercury__string__conv1_V_13_25 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_27), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15471 "string.c"
    mercury__string__V_13_25 = ((MR_Integer) mercury__string__conv1_V_13_25);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_24 = (mercury__string__V_13_25 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_6, (MR_Integer) 1, mercury__string__Priority_10_24, mercury__string__X_5, mercury__string__V_10_15, &mercury__string__RevStrings_9_16);
    }
#line 15480 "string.c"
    mercury__string__TypeCtorInfo_13_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_18, mercury__string__RevStrings_9_16, &mercury__string__V_11_17);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      return mercury__string__HeadVar__3_3 = mercury__string__append_list_1_f_0(mercury__string__V_11_17);
    }
#line 18 "string.to_string.opt"
    return mercury__string__HeadVar__3_3;
#line 18 "string.to_string.opt"
  }
#line 1202 "string.m"
}

#line 1198 "string.m"
MR_String MR_CALL 
mercury__string__string_1_f_0(
#line 1198 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_4,
#line 1198 "string.m"
  MR_Box mercury__string__X_3)
#line 1198 "string.m"
{
#line 14 "string.to_string.opt"
  {
#line 14 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 14 "string.to_string.opt"
    MR_String mercury__string__HeadVar__2_2;
#line 14 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_16;
#line 14 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_25;
#line 14 "string.to_string.opt"
    MR_Word mercury__string__V_10_13;
#line 14 "string.to_string.opt"
    MR_Word mercury__string__RevStrings_9_14;
#line 14 "string.to_string.opt"
    MR_Word mercury__string__V_11_15;
#line 14 "string.to_string.opt"
    MR_Integer mercury__string__Priority_10_22;
#line 14 "string.to_string.opt"
    MR_Integer mercury__string__V_13_23;
#line 15528 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);
#line 15530 "string.c"
    MR_Box mercury__string__conv1_V_13_23;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 22 "string.to_string.opt"
    mercury__string__V_10_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 15537 "string.c"
    mercury__string__TypeClassInfo_for_op_table_25 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 15539 "string.c"
    mercury__string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15541 "string.c"
    {
#line 15543 "string.c"
      mercury__string__conv1_V_13_23 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_25), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15546 "string.c"
    mercury__string__V_13_23 = ((MR_Integer) mercury__string__conv1_V_13_23);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_22 = (mercury__string__V_13_23 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_4, (MR_Integer) 1, mercury__string__Priority_10_22, mercury__string__X_3, mercury__string__V_10_13, &mercury__string__RevStrings_9_14);
    }
#line 15555 "string.c"
    mercury__string__TypeCtorInfo_13_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_16, mercury__string__RevStrings_9_14, &mercury__string__V_11_15);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      return mercury__string__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__string__V_11_15);
    }
#line 14 "string.to_string.opt"
    return mercury__string__HeadVar__2_2;
#line 14 "string.to_string.opt"
  }
#line 1198 "string.m"
}

#line 1188 "string.m"
MR_String MR_CALL 
mercury__string__from_c_pointer_1_f_0(
#line 1188 "string.m"
  MR_Word mercury__string__P_3)
#line 1188 "string.m"
{
#line 5300 "string.m"
  {
#line 5300 "string.m"
    MR_bool mercury__string__succeeded;
#line 5300 "string.m"
    MR_String mercury__string__S_4;
#line 5300 "string.m"
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
#line 5300 "string.m"
    MR_String mercury__string__V_9_9;
#line 5300 "string.m"
    MR_String mercury__string__V_10_10;

#line 5065 "string.m"
    {
#line 5065 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__V_10_10);
    }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_10_10 ;
	S2 =  (MR_String) ")" ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15619 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = S3;
#line 3147 "string.m"
}
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15646 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
#line 3147 "string.m"
}
#line 5300 "string.m"
    return mercury__string__S_4;
#line 5300 "string.m"
  }
#line 1188 "string.m"
}

#line 1184 "string.m"
void MR_CALL 
mercury__string__c_pointer_to_string_2_p_0(
#line 1184 "string.m"
  MR_Word mercury__string__C_Pointer_3,
#line 1184 "string.m"
  MR_String * mercury__string__Str_4)
#line 1184 "string.m"
{
#line 5300 "string.m"
  {
#line 5300 "string.m"
    MR_bool mercury__string__succeeded;
#line 5300 "string.m"
    MR_Integer mercury__string__Int_5 = (MR_Integer) mercury__string__C_Pointer_3;
#line 5300 "string.m"
    MR_String mercury__string__V_7_7;
#line 5300 "string.m"
    MR_String mercury__string__V_8_8;

#line 5065 "string.m"
    {
#line 5065 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_5, (MR_Integer) 16, &mercury__string__V_8_8);
    }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_8_8 ;
	S2 =  (MR_String) ")" ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15705 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = S3;
#line 3147 "string.m"
}
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_7_7 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15732 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = S3;
#line 3147 "string.m"
}
#line 5300 "string.m"
  }
#line 1184 "string.m"
}

#line 1183 "string.m"
MR_String MR_CALL 
mercury__string__c_pointer_to_string_1_f_0(
#line 1183 "string.m"
  MR_Word mercury__string__P_3)
#line 1183 "string.m"
{
#line 5300 "string.m"
  {
#line 5300 "string.m"
    MR_bool mercury__string__succeeded;
#line 5300 "string.m"
    MR_String mercury__string__S_4;
#line 5300 "string.m"
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
#line 5300 "string.m"
    MR_String mercury__string__V_9_9;
#line 5300 "string.m"
    MR_String mercury__string__V_10_10;

#line 5065 "string.m"
    {
#line 5065 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__V_10_10);
    }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_10_10 ;
	S2 =  (MR_String) ")" ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15789 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = S3;
#line 3147 "string.m"
}
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15816 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
#line 3147 "string.m"
}
#line 5300 "string.m"
    return mercury__string__S_4;
#line 5300 "string.m"
  }
#line 1183 "string.m"
}

#line 1178 "string.m"
MR_String MR_CALL 
mercury__string__from_float_1_f_0(
#line 1178 "string.m"
  MR_Float mercury__string__Float_3)
#line 1178 "string.m"
{
#line 5172 "string.m"
  {
#line 5172 "string.m"
    MR_bool mercury__string__succeeded;
#line 5172 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5176 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_float_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
#line 5176 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 15861 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Str;
#line 5176 "string.m"
}
#line 5172 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5172 "string.m"
  }
#line 1178 "string.m"
}

#line 1174 "string.m"
void MR_CALL 
mercury__string__float_to_string_2_p_0(
#line 1174 "string.m"
  MR_Float mercury__string__Flt_1,
#line 1174 "string.m"
  MR_String * mercury__string__Str_2)
#line 1174 "string.m"
{
#line 5172 "string.m"
  {
#line 5172 "string.m"
    MR_bool mercury__string__succeeded;

#line 5176 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Flt_1 ;
		{
#line 5176 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 15906 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_2  = Str;
#line 5176 "string.m"
}
#line 5172 "string.m"
  }
#line 1174 "string.m"
}

#line 1173 "string.m"
MR_String MR_CALL 
mercury__string__float_to_string_1_f_0(
#line 1173 "string.m"
  MR_Float mercury__string__Float_3)
#line 1173 "string.m"
{
#line 5172 "string.m"
  {
#line 5172 "string.m"
    MR_bool mercury__string__succeeded;
#line 5172 "string.m"
    MR_String mercury__string__S2_4;

#line 5176 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
#line 5176 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 15949 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_4  = Str;
#line 5176 "string.m"
}
#line 5172 "string.m"
    return mercury__string__S2_4;
#line 5172 "string.m"
  }
#line 1173 "string.m"
}

#line 1163 "string.m"
MR_String MR_CALL 
mercury__string__int_to_base_string_group_4_f_0(
#line 1163 "string.m"
  MR_Integer mercury__string__N_6,
#line 1163 "string.m"
  MR_Integer mercury__string__Base_7,
#line 1163 "string.m"
  MR_Integer mercury__string__GroupLength_8,
#line 1163 "string.m"
  MR_String mercury__string__Sep_9)
#line 1163 "string.m"
{
#line 5111 "string.m"
  {
#line 5111 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_7);
#line 5111 "string.m"
    MR_String mercury__string__Str_10;
#line 5112 "string.m"
    MR_Integer mercury__string__V_12_12;

#line 5112 "string.m"
    if (mercury__string__succeeded)
#line 5112 "string.m"
      {
#line 5112 "string.m"
        mercury__string__V_12_12 = (MR_Integer) 36;
#line 5112 "string.m"
        mercury__string__succeeded = (mercury__string__Base_7 <= mercury__string__V_12_12);
#line 5112 "string.m"
      }
#line 5114 "string.m"
    if (mercury__string__succeeded)
#line 5113 "string.m"
      {
#line 5113 "string.m"
      }
#line 5114 "string.m"
    else
#line 5115 "string.m"
      {
#line 5115 "string.m"
        {
#line 5115 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.int_to_base_string_group: invalid base");
        }
#line 5115 "string.m"
      }
#line 5117 "string.m"
    {
#line 5117 "string.m"
      mercury__string__int_to_base_string_group_1_5_p_0(mercury__string__N_6, mercury__string__Base_7, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str_10);
    }
#line 5111 "string.m"
    return mercury__string__Str_10;
#line 5111 "string.m"
  }
#line 1163 "string.m"
}

#line 1150 "string.m"
MR_String MR_CALL 
mercury__string__int_to_string_thousands_1_f_0(
#line 1150 "string.m"
  MR_Integer mercury__string__N_3)
#line 1150 "string.m"
{
#line 5108 "string.m"
  {
#line 5108 "string.m"
    MR_bool mercury__string__succeeded;
#line 5108 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5109 "string.m"
    {
#line 5109 "string.m"
      return mercury__string__HeadVar__2_2 = mercury__string__int_to_base_string_group_4_f_0(mercury__string__N_3, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
#line 5108 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5108 "string.m"
  }
#line 1150 "string.m"
}

#line 1146 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_3_p_0(
#line 1146 "string.m"
  MR_Integer mercury__string__N_4,
#line 1146 "string.m"
  MR_Integer mercury__string__Base_5,
#line 1146 "string.m"
  MR_String * mercury__string__Str_6)
#line 1146 "string.m"
{
#line 5067 "string.m"
  {
#line 5067 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_5);
#line 5068 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 5068 "string.m"
    if (mercury__string__succeeded)
#line 5068 "string.m"
      {
#line 5068 "string.m"
        mercury__string__V_8_8 = (MR_Integer) 36;
#line 5068 "string.m"
        mercury__string__succeeded = (mercury__string__Base_5 <= mercury__string__V_8_8);
#line 5068 "string.m"
      }
#line 5070 "string.m"
    if (mercury__string__succeeded)
#line 5069 "string.m"
      {
#line 5069 "string.m"
      }
#line 5070 "string.m"
    else
#line 5071 "string.m"
      {
#line 5071 "string.m"
        {
#line 5071 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.int_to_base_string: invalid base");
#line 5071 "string.m"
          return;
        }
#line 5071 "string.m"
      }
#line 5073 "string.m"
    {
#line 5073 "string.m"
      mercury__string__int_to_base_string_1_3_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__Str_6);
#line 5073 "string.m"
      return;
    }
#line 5067 "string.m"
  }
#line 1146 "string.m"
}

#line 1145 "string.m"
MR_String MR_CALL 
mercury__string__int_to_base_string_2_f_0(
#line 1145 "string.m"
  MR_Integer mercury__string__N1_4,
#line 1145 "string.m"
  MR_Integer mercury__string__N2_5)
#line 1145 "string.m"
{
#line 5065 "string.m"
  {
#line 5065 "string.m"
    MR_bool mercury__string__succeeded;
#line 5065 "string.m"
    MR_String mercury__string__S2_6;

#line 5065 "string.m"
    {
#line 5065 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N1_4, mercury__string__N2_5, &mercury__string__S2_6);
    }
#line 5065 "string.m"
    return mercury__string__S2_6;
#line 5065 "string.m"
  }
#line 1145 "string.m"
}

#line 1136 "string.m"
MR_String MR_CALL 
mercury__string__from_int_1_f_0(
#line 1136 "string.m"
  MR_Integer mercury__string__N_3)
#line 1136 "string.m"
{
#line 5056 "string.m"
  {
#line 5056 "string.m"
    MR_bool mercury__string__succeeded;
#line 5056 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5057 "string.m"
    {
#line 5057 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__HeadVar__2_2);
    }
#line 5056 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5056 "string.m"
  }
#line 1136 "string.m"
}

#line 1132 "string.m"
void MR_CALL 
mercury__string__int_to_string_2_p_0(
#line 1132 "string.m"
  MR_Integer mercury__string__N_3,
#line 1132 "string.m"
  MR_String * mercury__string__Str_4)
#line 1132 "string.m"
{
#line 5056 "string.m"
  {
#line 5056 "string.m"
    MR_bool mercury__string__succeeded;

#line 5057 "string.m"
    {
#line 5057 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, mercury__string__Str_4);
#line 5057 "string.m"
      return;
    }
#line 5056 "string.m"
  }
#line 1132 "string.m"
}

#line 1131 "string.m"
MR_String MR_CALL 
mercury__string__int_to_string_1_f_0(
#line 1131 "string.m"
  MR_Integer mercury__string__N_3)
#line 1131 "string.m"
{
#line 5056 "string.m"
  {
#line 5056 "string.m"
    MR_bool mercury__string__succeeded;
#line 5056 "string.m"
    MR_String mercury__string__S1_4;

#line 5057 "string.m"
    {
#line 5057 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__S1_4);
    }
#line 5056 "string.m"
    return mercury__string__S1_4;
#line 5056 "string.m"
  }
#line 1131 "string.m"
}

#line 1127 "string.m"
MR_String MR_CALL 
mercury__string__from_char_1_f_0(
#line 1127 "string.m"
  MR_Char mercury__string__Char_3)
#line 1127 "string.m"
{
#line 5046 "string.m"
  {
#line 5046 "string.m"
    MR_bool mercury__string__succeeded;
#line 5046 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 5046 "string.m"
    MR_Word mercury__string__V_8_8;
#line 5046 "string.m"
    MR_Word mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1440 "string.m"
    MR_String mercury__string__Str0_18;

#line 5047 "string.m"
    {
#line 5047 "string.m"
      mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5047 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_3));
#line 5047 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 5047 "string.m"
    }
#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_8_8, &mercury__string__Str0_18);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      mercury__string__HeadVar__2_2 = mercury__string__Str0_18;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1441 "string.m"
      }
#line 5046 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5046 "string.m"
  }
#line 1127 "string.m"
}

#line 1123 "string.m"
MR_bool MR_CALL 
mercury__string__char_to_string_2_p_1(
#line 1123 "string.m"
  MR_Char * mercury__string__Char_3,
#line 1123 "string.m"
  MR_String mercury__string__String_4)
#line 1123 "string.m"
{
#line 5046 "string.m"
  {
#line 5046 "string.m"
    MR_bool mercury__string__succeeded;
#line 5046 "string.m"
    MR_Word mercury__string__TypeInfo_8_8;
#line 5046 "string.m"
    MR_Word mercury__string__V_5_5;
#line 5046 "string.m"
    MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5046 "string.m"
    MR_Word mercury__string__V_7_7;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__char_to_string_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__String_4 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 16318 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_5_5  = CharList;
#line 1362 "string.m"
}
#line 5047 "string.m"
    mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 5047 "string.m"
    if (mercury__string__succeeded)
#line 5047 "string.m"
      {
#line 5047 "string.m"
        *mercury__string__Char_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_5_5, (MR_Integer) 0)));
#line 5047 "string.m"
        mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_5_5, (MR_Integer) 1)));
#line 16335 "string.c"
        mercury__string__TypeInfo_8_8 = (MR_Word) &mercury__string_scalar_common_1[2];
#line 5047 "string.m"
        {
#line 5047 "string.m"
          return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_8_8, ((MR_Box) (mercury__string__V_6_6)), ((MR_Box) (mercury__string__V_7_7)));
        }
#line 5047 "string.m"
      }
#line 5046 "string.m"
    return mercury__string__succeeded;
#line 5046 "string.m"
  }
#line 1123 "string.m"
}

#line 1122 "string.m"
void MR_CALL 
mercury__string__char_to_string_2_p_0(
#line 1122 "string.m"
  MR_Char mercury__string__Char_3,
#line 1122 "string.m"
  MR_String * mercury__string__String_4)
#line 1122 "string.m"
{
#line 5046 "string.m"
  {
#line 5046 "string.m"
    MR_bool mercury__string__succeeded;
#line 5046 "string.m"
    MR_Word mercury__string__V_5_5;
#line 5046 "string.m"
    MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1440 "string.m"
    MR_String mercury__string__Str0_15;

#line 5047 "string.m"
    {
#line 5047 "string.m"
      mercury__string__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5047 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_5_5, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_3));
#line 5047 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_5_5, 1) = ((MR_Box) (mercury__string__V_6_6));
#line 5047 "string.m"
    }
#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_5_5, &mercury__string__Str0_15);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      *mercury__string__String_4 = mercury__string__Str0_15;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1441 "string.m"
          return;
        }
#line 1441 "string.m"
      }
#line 5046 "string.m"
  }
#line 1122 "string.m"
}

#line 1120 "string.m"
MR_String MR_CALL 
mercury__string__char_to_string_1_f_0(
#line 1120 "string.m"
  MR_Char mercury__string__C_3)
#line 1120 "string.m"
{
#line 5046 "string.m"
  {
#line 5046 "string.m"
    MR_bool mercury__string__succeeded;
#line 5046 "string.m"
    MR_String mercury__string__S1_4;
#line 5046 "string.m"
    MR_Word mercury__string__V_7_7;
#line 5046 "string.m"
    MR_Word mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1440 "string.m"
    MR_String mercury__string__Str0_17;

#line 5047 "string.m"
    {
#line 5047 "string.m"
      mercury__string__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5047 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 0) = ((MR_Box) (MR_Word) (mercury__string__C_3));
#line 5047 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 1) = ((MR_Box) (mercury__string__V_8_8));
#line 5047 "string.m"
    }
#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_7_7, &mercury__string__Str0_17);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      mercury__string__S1_4 = mercury__string__Str0_17;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1441 "string.m"
      }
#line 5046 "string.m"
    return mercury__string__S1_4;
#line 5046 "string.m"
  }
#line 1120 "string.m"
}

#line 1109 "string.m"
MR_Float MR_CALL 
mercury__string__det_to_float_1_f_0(
#line 1109 "string.m"
  MR_String mercury__string__FloatString_3)
#line 1109 "string.m"
{
#line 5037 "string.m"
  {
#line 5037 "string.m"
    MR_bool mercury__string__succeeded;
#line 5037 "string.m"
    MR_Float mercury__string__Float_4;
#line 5037 "string.m"
    MR_Float mercury__string__FloatPrime_5;

#line 4933 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_to_float_1_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_3 ;
		{
#line 4933 "string.m"
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}
#line 16503 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__FloatPrime_5  = FloatVal;
#line 4933 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5037 "string.m"
    if (mercury__string__succeeded)
#line 5036 "string.m"
      mercury__string__Float_4 = mercury__string__FloatPrime_5;
#line 5037 "string.m"
    else
#line 5038 "string.m"
      {
#line 5038 "string.m"
        {
#line 5038 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_to_float/1: conversion failed.");
        }
#line 5038 "string.m"
      }
#line 5037 "string.m"
    return mercury__string__Float_4;
#line 5037 "string.m"
  }
#line 1109 "string.m"
}

#line 1104 "string.m"
MR_bool MR_CALL 
mercury__string__to_float_2_p_0(
#line 1104 "string.m"
  MR_String mercury__string__FloatString_1,
#line 1104 "string.m"
  MR_Float * mercury__string__FloatVal_2)
#line 1104 "string.m"
{
#line 4929 "string.m"
  {
#line 4929 "string.m"
    MR_bool mercury__string__succeeded;

#line 4933 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_float_2_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_1 ;
		{
#line 4933 "string.m"
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}
#line 16571 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__FloatVal_2  = FloatVal;
#line 4933 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4929 "string.m"
    return mercury__string__succeeded;
#line 4929 "string.m"
  }
#line 1104 "string.m"
}

#line 1099 "string.m"
MR_Integer MR_CALL 
mercury__string__det_base_string_to_int_2_f_0(
#line 1099 "string.m"
  MR_Integer mercury__string__Base_4,
#line 1099 "string.m"
  MR_String mercury__string__S_5)
#line 1099 "string.m"
{
#line 4903 "string.m"
  {
#line 4903 "string.m"
    MR_bool mercury__string__succeeded;
#line 4903 "string.m"
    MR_Integer mercury__string__N_6;
#line 4903 "string.m"
    MR_Integer mercury__string__N0_7;

#line 4901 "string.m"
    {
#line 4901 "string.m"
      mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__string__Base_4, mercury__string__S_5, &mercury__string__N0_7);
    }
#line 4903 "string.m"
    if (mercury__string__succeeded)
#line 4902 "string.m"
      mercury__string__N_6 = mercury__string__N0_7;
#line 4903 "string.m"
    else
#line 4904 "string.m"
      {
#line 4904 "string.m"
        {
#line 4904 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_base_string_to_int: conversion failed");
        }
#line 4904 "string.m"
      }
#line 4903 "string.m"
    return mercury__string__N_6;
#line 4903 "string.m"
  }
#line 1099 "string.m"
}

#line 1092 "string.m"
MR_bool MR_CALL 
mercury__string__base_string_to_int_3_p_0(
#line 1092 "string.m"
  MR_Integer mercury__string__Base_4,
#line 1092 "string.m"
  MR_String mercury__string__String_5,
#line 1092 "string.m"
  MR_Integer * mercury__string__Int_6)
#line 1092 "string.m"
{
#line 4887 "string.m"
  {
#line 4887 "string.m"
    MR_bool mercury__string__succeeded;
#line 4887 "string.m"
    MR_Char mercury__string__Char_7;
#line 4887 "string.m"
    MR_Integer mercury__string__End_8;
#line 4887 "string.m"
    MR_Integer mercury__string__Len_36;
#line 1868 "string.m"
    MR_Char mercury__string__CharPrime_48;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 16670 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_36  = Length;
#line 2398 "string.m"
}
#line 2132 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__string__Len_36 ;
		{
#line 2132 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 16699 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2132 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4887 "string.m"
    if (mercury__string__succeeded)
#line 4887 "string.m"
      {
#line 1878 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  (MR_Integer) 0 ;
		{
#line 1878 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 16733 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_48  = Ch;
#line 1878 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1868 "string.m"
        if (mercury__string__succeeded)
#line 1867 "string.m"
          mercury__string__Char_7 = mercury__string__CharPrime_48;
#line 1868 "string.m"
        else
#line 1869 "string.m"
          {
#line 1869 "string.m"
            {
#line 1869 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 1869 "string.m"
          }
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 16771 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_8  = Length;
#line 2398 "string.m"
}
#line 4890 "string.m"
        mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 45);
#line 4893 "string.m"
        if (mercury__string__succeeded)
#line 4891 "string.m"
          {
#line 4891 "string.m"
            MR_Integer mercury__string__V_12_12;
#line 4891 "string.m"
            MR_Integer mercury__string__V_13_13;
#line 4891 "string.m"
            MR_Integer mercury__string__Start_63;
#line 4891 "string.m"
            MR_Integer mercury__string__End_64;
#line 4891 "string.m"
            MR_Integer mercury__string__V_66_66;
#line 4558 "string.m"
            MR_Integer mercury__string__V_65_65;

#line 4891 "string.m"
            mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
#line 4891 "string.m"
            if (mercury__string__succeeded)
#line 4891 "string.m"
              {
#line 4892 "string.m"
                mercury__string__V_12_12 = (MR_Integer) 1;
#line 4892 "string.m"
                mercury__string__V_13_13 = (MR_Integer) 0;
#line 4558 "string.m"
                mercury__string__V_65_65 = (MR_Integer) 0;
#line 79 "int.opt"
                mercury__string__Start_63 = mercury__string__V_12_12;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 16824 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_66_66  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
                mercury__string__succeeded = (mercury__string__End_8 < mercury__string__V_66_66);
#line 88 "int.opt"
                if (mercury__string__succeeded)
#line 87 "int.opt"
                  mercury__string__End_64 = mercury__string__End_8;
#line 88 "int.opt"
                else
#line 89 "int.opt"
                  mercury__string__End_64 = mercury__string__V_66_66;
#line 4560 "string.m"
                {
#line 4560 "string.m"
                  return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, mercury__string__Start_63, mercury__string__End_64, mercury__string__V_13_13, mercury__string__Int_6);
                }
#line 4891 "string.m"
              }
#line 4891 "string.m"
          }
#line 4893 "string.m"
        else
#line 4896 "string.m"
          {
#line 4893 "string.m"
            mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 43);
#line 4896 "string.m"
            if (mercury__string__succeeded)
#line 4894 "string.m"
              {
#line 4894 "string.m"
                MR_Integer mercury__string__V_16_16;
#line 4894 "string.m"
                MR_Integer mercury__string__V_17_17;

#line 4894 "string.m"
                mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
#line 4894 "string.m"
                if (mercury__string__succeeded)
#line 4894 "string.m"
                  {
#line 4895 "string.m"
                    mercury__string__V_16_16 = (MR_Integer) 1;
#line 4895 "string.m"
                    mercury__string__V_17_17 = (MR_Integer) 0;
#line 4895 "string.m"
                    {
#line 4895 "string.m"
                      return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, mercury__string__V_16_16, mercury__string__End_8, mercury__string__V_17_17, mercury__string__Int_6);
                    }
#line 4894 "string.m"
                  }
#line 4894 "string.m"
              }
#line 4896 "string.m"
            else
#line 4897 "string.m"
              {
#line 4897 "string.m"
                {
#line 4897 "string.m"
                  return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, (MR_Integer) 0, mercury__string__End_8, (MR_Integer) 0, mercury__string__Int_6);
                }
#line 4897 "string.m"
              }
#line 4896 "string.m"
          }
#line 4887 "string.m"
      }
#line 4887 "string.m"
    return mercury__string__succeeded;
#line 4887 "string.m"
  }
#line 1092 "string.m"
}

#line 1083 "string.m"
MR_Integer MR_CALL 
mercury__string__det_to_int_1_f_0(
#line 1083 "string.m"
  MR_String mercury__string__S_3)
#line 1083 "string.m"
{
#line 4885 "string.m"
  {
#line 4885 "string.m"
    MR_bool mercury__string__succeeded;
#line 4885 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;
#line 4903 "string.m"
    MR_Integer mercury__string__N0_8;

#line 4901 "string.m"
    {
#line 4901 "string.m"
      mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__S_3, &mercury__string__N0_8);
    }
#line 4903 "string.m"
    if (mercury__string__succeeded)
#line 4902 "string.m"
      mercury__string__HeadVar__2_2 = mercury__string__N0_8;
#line 4903 "string.m"
    else
#line 4904 "string.m"
      {
#line 4904 "string.m"
        {
#line 4904 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_base_string_to_int: conversion failed");
        }
#line 4904 "string.m"
      }
#line 4885 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4885 "string.m"
  }
#line 1083 "string.m"
}

#line 1077 "string.m"
MR_bool MR_CALL 
mercury__string__to_int_2_p_0(
#line 1077 "string.m"
  MR_String mercury__string__String_3,
#line 1077 "string.m"
  MR_Integer * mercury__string__Int_4)
#line 1077 "string.m"
{
#line 4882 "string.m"
  {
#line 4882 "string.m"
    MR_bool mercury__string__succeeded;

#line 4883 "string.m"
    {
#line 4883 "string.m"
      return mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__String_3, mercury__string__Int_4);
    }
#line 4882 "string.m"
    return mercury__string__succeeded;
#line 4882 "string.m"
  }
#line 1077 "string.m"
}

#line 1065 "string.m"
MR_Word MR_CALL 
mercury__string__string_to_doc_1_f_0(
#line 1065 "string.m"
  MR_String mercury__string__S_3)
#line 1065 "string.m"
{
#line 4875 "string.m"
  {
#line 4875 "string.m"
    MR_bool mercury__string__succeeded;
#line 4875 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4875 "string.m"
    MR_Word mercury__string__V_4_4;
#line 4875 "string.m"
    MR_Word mercury__string__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_5[0]);
#line 4875 "string.m"
    MR_Word mercury__string__V_7_7;
#line 4875 "string.m"
    MR_Word mercury__string__V_8_8;
#line 4875 "string.m"
    MR_Word mercury__string__V_9_9;
#line 4875 "string.m"
    MR_Word mercury__string__V_12_12;

#line 4875 "string.m"
    {
#line 4875 "string.m"
      mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 4875 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 0) = ((MR_Box) (mercury__string__S_3));
#line 4875 "string.m"
    }
#line 4875 "string.m"
    mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4875 "string.m"
    mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[3]);
#line 4875 "string.m"
    {
#line 4875 "string.m"
      mercury__string__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4875 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 4875 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 4875 "string.m"
    }
#line 4875 "string.m"
    {
#line 4875 "string.m"
      mercury__string__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4875 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_4_4, 0) = ((MR_Box) (mercury__string__V_5_5));
#line 4875 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_4_4, 1) = ((MR_Box) (mercury__string__V_7_7));
#line 4875 "string.m"
    }
#line 4875 "string.m"
    {
#line 4875 "string.m"
      mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 4875 "string.m"
      MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__V_4_4));
#line 4875 "string.m"
    }
#line 4875 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4875 "string.m"
  }
#line 1065 "string.m"
}

#line 1055 "string.m"
MR_String MR_CALL 
mercury__string__format_table_max_2_f_0(
#line 1055 "string.m"
  MR_Word mercury__string__ColumnsLimits_4,
#line 1055 "string.m"
  MR_String mercury__string__Separator_5)
#line 1055 "string.m"
{
#line 4718 "string.m"
  {
#line 4718 "string.m"
    MR_bool mercury__string__succeeded;
#line 4718 "string.m"
    MR_String mercury__string__Table_6;
#line 4718 "string.m"
    MR_Word mercury__string__TypeCtorInfo_23_23;
#line 4718 "string.m"
    MR_Word mercury__string__MaxWidthsSenses_7;
#line 4718 "string.m"
    MR_Word mercury__string__Columns_8;
#line 4718 "string.m"
    MR_Integer mercury__string__SepLen_9;
#line 4718 "string.m"
    MR_Word mercury__string__RevRows_10;
#line 4718 "string.m"
    MR_Word mercury__string__Rows_11;
#line 4718 "string.m"
    MR_Word mercury__string__V_14_14;

#line 4719 "string.m"
    {
#line 4719 "string.m"
      mercury__string__MaxWidthsSenses_7 = mercury__string__map__ho14_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    }
#line 4720 "string.m"
    {
#line 4720 "string.m"
      mercury__string__Columns_8 = mercury__string__map__ho13_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    }
#line 2458 "string.m"
    {
#line 2458 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Separator_5, &mercury__string__SepLen_9);
    }
#line 4722 "string.m"
    mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4722 "string.m"
    {
#line 4722 "string.m"
      mercury__string__generate_rows_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Separator_5, mercury__string__SepLen_9, mercury__string__Columns_8, mercury__string__V_14_14, &mercury__string__RevRows_10);
    }
#line 17100 "string.c"
    mercury__string__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4723 "string.m"
    {
#line 4723 "string.m"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_23_23, mercury__string__RevRows_10, &mercury__string__Rows_11);
    }
#line 4724 "string.m"
    {
#line 4724 "string.m"
      return mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    }
#line 4718 "string.m"
    return mercury__string__Table_6;
#line 4718 "string.m"
  }
#line 1055 "string.m"
}

#line 1050 "string.m"
MR_String MR_CALL 
mercury__string__format_table_2_f_0(
#line 1050 "string.m"
  MR_Word mercury__string__Columns_4,
#line 1050 "string.m"
  MR_String mercury__string__Separator_5)
#line 1050 "string.m"
{
#line 4701 "string.m"
  {
#line 4701 "string.m"
    MR_bool mercury__string__succeeded;
#line 4701 "string.m"
    MR_String mercury__string__Table_6;
#line 4701 "string.m"
    MR_Word mercury__string__MaxWidths_7;
#line 4701 "string.m"
    MR_Word mercury__string__PaddedColumns_8;
#line 4701 "string.m"
    MR_Word mercury__string__Rows_11;

#line 4702 "string.m"
    {
#line 4702 "string.m"
      mercury__string__MaxWidths_7 = mercury__string__map__ho16_2_f_in__list_0(mercury__string__Columns_4);
    }
#line 4707 "string.m"
    {
#line 4707 "string.m"
      mercury__string__PaddedColumns_8 = mercury__string__map_corresponding__ho15_3_f_in__list_0(mercury__string__MaxWidths_7, mercury__string__Columns_4);
    }
#line 4712 "string.m"
    if ((mercury__string__PaddedColumns_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4714 "string.m"
      mercury__string__Rows_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4712 "string.m"
    else
#line 4709 "string.m"
      {
#line 4709 "string.m"
        MR_Word mercury__string__PaddedHead_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 0)));
#line 4709 "string.m"
        MR_Word mercury__string__PaddedTail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 1)));

#line 395 "list.opt"
        {
#line 395 "list.opt"
          mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(mercury__string__Separator_5, mercury__string__PaddedTail_10, mercury__string__PaddedHead_9, &mercury__string__Rows_11);
        }
#line 4709 "string.m"
      }
#line 4716 "string.m"
    {
#line 4716 "string.m"
      return mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    }
#line 4701 "string.m"
    return mercury__string__Table_6;
#line 4701 "string.m"
  }
#line 1050 "string.m"
}

#line 1020 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_4(
#line 1020 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1020 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1020 "string.m"
  MR_String mercury__string__String_8,
#line 1020 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1020 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1020 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1020 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1020 "string.m"
  MR_Cont mercury__string__cont,
#line 1020 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1020 "string.m"
{
#line 4681 "string.m"
  {
#line 4681 "string.m"
    MR_bool mercury__string__succeeded;
#line 4681 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4681 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4682 "string.m"
    {
#line 4682 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4683 "string.m"
    {
#line 4683 "string.m"
      mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4683 "string.m"
      return;
    }
#line 4681 "string.m"
  }
#line 1020 "string.m"
}

#line 1018 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_3(
#line 1018 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1018 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1018 "string.m"
  MR_String mercury__string__String_8,
#line 1018 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1018 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1018 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1018 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1018 "string.m"
  MR_Cont mercury__string__cont,
#line 1018 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1018 "string.m"
{
#line 4681 "string.m"
  {
#line 4681 "string.m"
    MR_bool mercury__string__succeeded;
#line 4681 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4681 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4682 "string.m"
    {
#line 4682 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4683 "string.m"
    {
#line 4683 "string.m"
      mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4683 "string.m"
      return;
    }
#line 4681 "string.m"
  }
#line 1018 "string.m"
}

#line 1016 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_substring_6_p_2(
#line 1016 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1016 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1016 "string.m"
  MR_String mercury__string__String_8,
#line 1016 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1016 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1016 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1016 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1016 "string.m"
{
#line 4681 "string.m"
  {
#line 4681 "string.m"
    MR_bool mercury__string__succeeded;
#line 4681 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4681 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4682 "string.m"
    {
#line 4682 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4683 "string.m"
    {
#line 4683 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4681 "string.m"
    return mercury__string__succeeded;
#line 4681 "string.m"
  }
#line 1016 "string.m"
}

#line 1014 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_1(
#line 1014 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1014 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1014 "string.m"
  MR_String mercury__string__String_8,
#line 1014 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1014 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1014 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1014 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1014 "string.m"
{
#line 4681 "string.m"
  {
#line 4681 "string.m"
    MR_bool mercury__string__succeeded;
#line 4681 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4681 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4682 "string.m"
    {
#line 4682 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4683 "string.m"
    {
#line 4683 "string.m"
      mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4683 "string.m"
      return;
    }
#line 4681 "string.m"
  }
#line 1014 "string.m"
}

#line 1012 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_0(
#line 1012 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1012 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1012 "string.m"
  MR_String mercury__string__String_8,
#line 1012 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1012 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1012 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1012 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1012 "string.m"
{
#line 4681 "string.m"
  {
#line 4681 "string.m"
    MR_bool mercury__string__succeeded;
#line 4681 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4681 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4682 "string.m"
    {
#line 4682 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4683 "string.m"
    {
#line 4683 "string.m"
      mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4683 "string.m"
      return;
    }
#line 4681 "string.m"
  }
#line 1012 "string.m"
}

#line 1010 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_substring_5_f_0(
#line 1010 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_15,
#line 1010 "string.m"
  MR_Word mercury__string__F_7,
#line 1010 "string.m"
  MR_String mercury__string__String_8,
#line 1010 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1010 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1010 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 1010 "string.m"
{
#line 4677 "string.m"
  {
#line 4677 "string.m"
    MR_bool mercury__string__succeeded;
#line 4677 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4677 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4677 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4678 "string.m"
    {
#line 4678 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4679 "string.m"
    {
#line 4679 "string.m"
      return mercury__string__Acc_12 = mercury__string__foldr_between_5_f_0(mercury__string__TypeInfo_for_T_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    }
#line 4677 "string.m"
    return mercury__string__Acc_12;
#line 4677 "string.m"
  }
#line 1010 "string.m"
}

#line 1002 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_4(
#line 1002 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1002 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1002 "string.m"
  MR_String mercury__string__String_8,
#line 1002 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1002 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1002 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1002 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1002 "string.m"
  MR_Cont mercury__string__cont,
#line 1002 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1002 "string.m"
{
#line 4648 "string.m"
  {
#line 4648 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4648 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4648 "string.m"
    MR_Integer mercury__string__End_13;
#line 4648 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 17516 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4651 "string.m"
    {
#line 4651 "string.m"
      mercury__string__foldr_between_2_6_p_4(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4651 "string.m"
      return;
    }
#line 4648 "string.m"
  }
#line 1002 "string.m"
}

#line 1000 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_3(
#line 1000 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1000 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1000 "string.m"
  MR_String mercury__string__String_8,
#line 1000 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1000 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1000 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1000 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1000 "string.m"
  MR_Cont mercury__string__cont,
#line 1000 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1000 "string.m"
{
#line 4648 "string.m"
  {
#line 4648 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4648 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4648 "string.m"
    MR_Integer mercury__string__End_13;
#line 4648 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 17600 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4651 "string.m"
    {
#line 4651 "string.m"
      mercury__string__foldr_between_2_6_p_3(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4651 "string.m"
      return;
    }
#line 4648 "string.m"
  }
#line 1000 "string.m"
}

#line 998 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_between_6_p_2(
#line 998 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 998 "string.m"
  MR_Word mercury__string__Closure_7,
#line 998 "string.m"
  MR_String mercury__string__String_8,
#line 998 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 998 "string.m"
  MR_Integer mercury__string__End0_10,
#line 998 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 998 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 998 "string.m"
{
#line 4648 "string.m"
  {
#line 4648 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4648 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4648 "string.m"
    MR_Integer mercury__string__End_13;
#line 4648 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 17680 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4651 "string.m"
    {
#line 4651 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_2_6_p_2(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4648 "string.m"
    return mercury__string__succeeded;
#line 4648 "string.m"
  }
#line 998 "string.m"
}

#line 996 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_1(
#line 996 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 996 "string.m"
  MR_Word mercury__string__Closure_7,
#line 996 "string.m"
  MR_String mercury__string__String_8,
#line 996 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 996 "string.m"
  MR_Integer mercury__string__End0_10,
#line 996 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 996 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 996 "string.m"
{
#line 4648 "string.m"
  {
#line 4648 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4648 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4648 "string.m"
    MR_Integer mercury__string__End_13;
#line 4648 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 17760 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4651 "string.m"
    {
#line 4651 "string.m"
      mercury__string__foldr_between_2_6_p_1(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4651 "string.m"
      return;
    }
#line 4648 "string.m"
  }
#line 996 "string.m"
}

#line 994 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_0(
#line 994 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 994 "string.m"
  MR_Word mercury__string__Closure_7,
#line 994 "string.m"
  MR_String mercury__string__String_8,
#line 994 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 994 "string.m"
  MR_Integer mercury__string__End0_10,
#line 994 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 994 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 994 "string.m"
{
#line 4648 "string.m"
  {
#line 4648 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4648 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4648 "string.m"
    MR_Integer mercury__string__End_13;
#line 4648 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 17840 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4651 "string.m"
    {
#line 4651 "string.m"
      mercury__string__foldr_between_2_6_p_0(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4651 "string.m"
      return;
    }
#line 4648 "string.m"
  }
#line 994 "string.m"
}

#line 992 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_between_5_f_0(
#line 992 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_23,
#line 992 "string.m"
  MR_Word mercury__string__F_7,
#line 992 "string.m"
  MR_String mercury__string__String_8,
#line 992 "string.m"
  MR_Integer mercury__string__Start_9,
#line 992 "string.m"
  MR_Integer mercury__string__Count_10,
#line 992 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 992 "string.m"
{
#line 4644 "string.m"
  {
#line 4644 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
#line 4644 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4644 "string.m"
    MR_Integer mercury__string__Start_31;
#line 4644 "string.m"
    MR_Integer mercury__string__End_32;
#line 4644 "string.m"
    MR_Integer mercury__string__V_34_34;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_31 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_31 = mercury__string__Start_9;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 17920 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_34_34  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__Count_10 < mercury__string__V_34_34);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_32 = mercury__string__Count_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_32 = mercury__string__V_34_34;
#line 4651 "string.m"
    {
#line 4651 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__String_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__Acc0_11, &mercury__string__Acc_12);
    }
#line 4644 "string.m"
    return mercury__string__Acc_12;
#line 4644 "string.m"
  }
#line 992 "string.m"
}

#line 984 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_4(
#line 984 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 984 "string.m"
  MR_Word mercury__string__Closure_5,
#line 984 "string.m"
  MR_String mercury__string__String_6,
#line 984 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 984 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9,
#line 984 "string.m"
  MR_Cont mercury__string__cont,
#line 984 "string.m"
  void * mercury__string__cont_env_ptr)
#line 984 "string.m"
{
#line 4641 "string.m"
  {
#line 4641 "string.m"
    MR_bool mercury__string__succeeded;
#line 4641 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 17988 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2398 "string.m"
}
#line 4642 "string.m"
    {
#line 4642 "string.m"
      mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4642 "string.m"
      return;
    }
#line 4641 "string.m"
  }
#line 984 "string.m"
}

#line 983 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_3(
#line 983 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 983 "string.m"
  MR_Word mercury__string__Closure_5,
#line 983 "string.m"
  MR_String mercury__string__String_6,
#line 983 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 983 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9,
#line 983 "string.m"
  MR_Cont mercury__string__cont,
#line 983 "string.m"
  void * mercury__string__cont_env_ptr)
#line 983 "string.m"
{
#line 4641 "string.m"
  {
#line 4641 "string.m"
    MR_bool mercury__string__succeeded;
#line 4641 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 18046 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2398 "string.m"
}
#line 4642 "string.m"
    {
#line 4642 "string.m"
      mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4642 "string.m"
      return;
    }
#line 4641 "string.m"
  }
#line 983 "string.m"
}

#line 982 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_4_p_2(
#line 982 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 982 "string.m"
  MR_Word mercury__string__Closure_5,
#line 982 "string.m"
  MR_String mercury__string__String_6,
#line 982 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 982 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 982 "string.m"
{
#line 4641 "string.m"
  {
#line 4641 "string.m"
    MR_bool mercury__string__succeeded;
#line 4641 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 18100 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2398 "string.m"
}
#line 4642 "string.m"
    {
#line 4642 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
    }
#line 4641 "string.m"
    return mercury__string__succeeded;
#line 4641 "string.m"
  }
#line 982 "string.m"
}

#line 981 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_1(
#line 981 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 981 "string.m"
  MR_Word mercury__string__Closure_5,
#line 981 "string.m"
  MR_String mercury__string__String_6,
#line 981 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 981 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 981 "string.m"
{
#line 4641 "string.m"
  {
#line 4641 "string.m"
    MR_bool mercury__string__succeeded;
#line 4641 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 18154 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2398 "string.m"
}
#line 4642 "string.m"
    {
#line 4642 "string.m"
      mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
#line 4642 "string.m"
      return;
    }
#line 4641 "string.m"
  }
#line 981 "string.m"
}

#line 980 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_0(
#line 980 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 980 "string.m"
  MR_Word mercury__string__Closure_5,
#line 980 "string.m"
  MR_String mercury__string__String_6,
#line 980 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 980 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 980 "string.m"
{
#line 4641 "string.m"
  {
#line 4641 "string.m"
    MR_bool mercury__string__succeeded;
#line 4641 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 18208 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2398 "string.m"
}
#line 4642 "string.m"
    {
#line 4642 "string.m"
      mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
#line 4642 "string.m"
      return;
    }
#line 4641 "string.m"
  }
#line 980 "string.m"
}

#line 978 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_3_f_0(
#line 978 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 978 "string.m"
  MR_Word mercury__string__F_5,
#line 978 "string.m"
  MR_String mercury__string__String_6,
#line 978 "string.m"
  MR_Box mercury__string__Acc0_7)
#line 978 "string.m"
{
#line 4637 "string.m"
  {
#line 4637 "string.m"
    MR_bool mercury__string__succeeded;
#line 4637 "string.m"
    MR_Box mercury__string__Acc_8;
#line 4637 "string.m"
    MR_Integer mercury__string__V_26_26;
#line 4637 "string.m"
    MR_Integer mercury__string__End_41;
#line 4637 "string.m"
    MR_Integer mercury__string__V_43_43;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 18266 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_26_26  = Length;
#line 2398 "string.m"
}
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 18286 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_43_43  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__V_26_26 < mercury__string__V_43_43);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_41 = mercury__string__V_26_26;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_41 = mercury__string__V_43_43;
#line 4651 "string.m"
    {
#line 4651 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__End_41, mercury__string__Acc0_7, &mercury__string__Acc_8);
    }
#line 4637 "string.m"
    return mercury__string__Acc_8;
#line 4637 "string.m"
  }
#line 978 "string.m"
}

#line 972 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_5(
#line 972 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 972 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 972 "string.m"
  MR_Word mercury__string__Closure_9,
#line 972 "string.m"
  MR_String mercury__string__String_10,
#line 972 "string.m"
  MR_Integer mercury__string__Start_11,
#line 972 "string.m"
  MR_Integer mercury__string__Count_12,
#line 972 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 972 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 972 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 972 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 972 "string.m"
  MR_Cont mercury__string__cont,
#line 972 "string.m"
  void * mercury__string__cont_env_ptr)
#line 972 "string.m"
{
#line 4630 "string.m"
  {
#line 4630 "string.m"
    MR_bool mercury__string__succeeded;
#line 4630 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4630 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4631 "string.m"
    {
#line 4631 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4632 "string.m"
      return;
    }
#line 4630 "string.m"
  }
#line 972 "string.m"
}

#line 970 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_4(
#line 970 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 970 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 970 "string.m"
  MR_Word mercury__string__Closure_9,
#line 970 "string.m"
  MR_String mercury__string__String_10,
#line 970 "string.m"
  MR_Integer mercury__string__Start_11,
#line 970 "string.m"
  MR_Integer mercury__string__Count_12,
#line 970 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 970 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 970 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 970 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 970 "string.m"
  MR_Cont mercury__string__cont,
#line 970 "string.m"
  void * mercury__string__cont_env_ptr)
#line 970 "string.m"
{
#line 4630 "string.m"
  {
#line 4630 "string.m"
    MR_bool mercury__string__succeeded;
#line 4630 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4630 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4631 "string.m"
    {
#line 4631 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4632 "string.m"
      return;
    }
#line 4630 "string.m"
  }
#line 970 "string.m"
}

#line 968 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_substring_8_p_3(
#line 968 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 968 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 968 "string.m"
  MR_Word mercury__string__Closure_9,
#line 968 "string.m"
  MR_String mercury__string__String_10,
#line 968 "string.m"
  MR_Integer mercury__string__Start_11,
#line 968 "string.m"
  MR_Integer mercury__string__Count_12,
#line 968 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 968 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 968 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 968 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 968 "string.m"
{
#line 4630 "string.m"
  {
#line 4630 "string.m"
    MR_bool mercury__string__succeeded;
#line 4630 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4630 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4631 "string.m"
    {
#line 4631 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4632 "string.m"
    {
#line 4632 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    }
#line 4630 "string.m"
    return mercury__string__succeeded;
#line 4630 "string.m"
  }
#line 968 "string.m"
}

#line 966 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_2(
#line 966 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 966 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 966 "string.m"
  MR_Word mercury__string__Closure_9,
#line 966 "string.m"
  MR_String mercury__string__String_10,
#line 966 "string.m"
  MR_Integer mercury__string__Start_11,
#line 966 "string.m"
  MR_Integer mercury__string__Count_12,
#line 966 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 966 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 966 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 966 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 966 "string.m"
{
#line 4630 "string.m"
  {
#line 4630 "string.m"
    MR_bool mercury__string__succeeded;
#line 4630 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4630 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4631 "string.m"
    {
#line 4631 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4632 "string.m"
      return;
    }
#line 4630 "string.m"
  }
#line 966 "string.m"
}

#line 964 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_1(
#line 964 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 964 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 964 "string.m"
  MR_Word mercury__string__Closure_9,
#line 964 "string.m"
  MR_String mercury__string__String_10,
#line 964 "string.m"
  MR_Integer mercury__string__Start_11,
#line 964 "string.m"
  MR_Integer mercury__string__Count_12,
#line 964 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 964 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 964 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 964 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 964 "string.m"
{
#line 4630 "string.m"
  {
#line 4630 "string.m"
    MR_bool mercury__string__succeeded;
#line 4630 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4630 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4631 "string.m"
    {
#line 4631 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4632 "string.m"
      return;
    }
#line 4630 "string.m"
  }
#line 964 "string.m"
}

#line 962 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_0(
#line 962 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 962 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 962 "string.m"
  MR_Word mercury__string__Closure_9,
#line 962 "string.m"
  MR_String mercury__string__String_10,
#line 962 "string.m"
  MR_Integer mercury__string__Start_11,
#line 962 "string.m"
  MR_Integer mercury__string__Count_12,
#line 962 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 962 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 962 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 962 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 962 "string.m"
{
#line 4630 "string.m"
  {
#line 4630 "string.m"
    MR_bool mercury__string__succeeded;
#line 4630 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4630 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4631 "string.m"
    {
#line 4631 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4632 "string.m"
      return;
    }
#line 4630 "string.m"
  }
#line 962 "string.m"
}

#line 953 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_4(
#line 953 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 953 "string.m"
  MR_Word mercury__string__Closure_7,
#line 953 "string.m"
  MR_String mercury__string__String_8,
#line 953 "string.m"
  MR_Integer mercury__string__Start_9,
#line 953 "string.m"
  MR_Integer mercury__string__Count_10,
#line 953 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 953 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 953 "string.m"
  MR_Cont mercury__string__cont,
#line 953 "string.m"
  void * mercury__string__cont_env_ptr)
#line 953 "string.m"
{
#line 4626 "string.m"
  {
#line 4626 "string.m"
    MR_bool mercury__string__succeeded;
#line 4626 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4626 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4627 "string.m"
    {
#line 4627 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4628 "string.m"
    {
#line 4628 "string.m"
      mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4628 "string.m"
      return;
    }
#line 4626 "string.m"
  }
#line 953 "string.m"
}

#line 951 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_3(
#line 951 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 951 "string.m"
  MR_Word mercury__string__Closure_7,
#line 951 "string.m"
  MR_String mercury__string__String_8,
#line 951 "string.m"
  MR_Integer mercury__string__Start_9,
#line 951 "string.m"
  MR_Integer mercury__string__Count_10,
#line 951 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 951 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 951 "string.m"
  MR_Cont mercury__string__cont,
#line 951 "string.m"
  void * mercury__string__cont_env_ptr)
#line 951 "string.m"
{
#line 4626 "string.m"
  {
#line 4626 "string.m"
    MR_bool mercury__string__succeeded;
#line 4626 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4626 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4627 "string.m"
    {
#line 4627 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4628 "string.m"
    {
#line 4628 "string.m"
      mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4628 "string.m"
      return;
    }
#line 4626 "string.m"
  }
#line 951 "string.m"
}

#line 949 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_substring_6_p_2(
#line 949 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 949 "string.m"
  MR_Word mercury__string__Closure_7,
#line 949 "string.m"
  MR_String mercury__string__String_8,
#line 949 "string.m"
  MR_Integer mercury__string__Start_9,
#line 949 "string.m"
  MR_Integer mercury__string__Count_10,
#line 949 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 949 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 949 "string.m"
{
#line 4626 "string.m"
  {
#line 4626 "string.m"
    MR_bool mercury__string__succeeded;
#line 4626 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4626 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4627 "string.m"
    {
#line 4627 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4628 "string.m"
    {
#line 4628 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4626 "string.m"
    return mercury__string__succeeded;
#line 4626 "string.m"
  }
#line 949 "string.m"
}

#line 947 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_1(
#line 947 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 947 "string.m"
  MR_Word mercury__string__Closure_7,
#line 947 "string.m"
  MR_String mercury__string__String_8,
#line 947 "string.m"
  MR_Integer mercury__string__Start_9,
#line 947 "string.m"
  MR_Integer mercury__string__Count_10,
#line 947 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 947 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 947 "string.m"
{
#line 4626 "string.m"
  {
#line 4626 "string.m"
    MR_bool mercury__string__succeeded;
#line 4626 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4626 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4627 "string.m"
    {
#line 4627 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4628 "string.m"
    {
#line 4628 "string.m"
      mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4628 "string.m"
      return;
    }
#line 4626 "string.m"
  }
#line 947 "string.m"
}

#line 945 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_0(
#line 945 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 945 "string.m"
  MR_Word mercury__string__Closure_7,
#line 945 "string.m"
  MR_String mercury__string__String_8,
#line 945 "string.m"
  MR_Integer mercury__string__Start_9,
#line 945 "string.m"
  MR_Integer mercury__string__Count_10,
#line 945 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 945 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 945 "string.m"
{
#line 4626 "string.m"
  {
#line 4626 "string.m"
    MR_bool mercury__string__succeeded;
#line 4626 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4626 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4627 "string.m"
    {
#line 4627 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4628 "string.m"
    {
#line 4628 "string.m"
      mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4628 "string.m"
      return;
    }
#line 4626 "string.m"
  }
#line 945 "string.m"
}

#line 943 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_substring_5_f_0(
#line 943 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_15,
#line 943 "string.m"
  MR_Word mercury__string__F_7,
#line 943 "string.m"
  MR_String mercury__string__String_8,
#line 943 "string.m"
  MR_Integer mercury__string__Start_9,
#line 943 "string.m"
  MR_Integer mercury__string__Count_10,
#line 943 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 943 "string.m"
{
#line 4622 "string.m"
  {
#line 4622 "string.m"
    MR_bool mercury__string__succeeded;
#line 4622 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4622 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4622 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4623 "string.m"
    {
#line 4623 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4624 "string.m"
    {
#line 4624 "string.m"
      return mercury__string__Acc_12 = mercury__string__foldl_between_5_f_0(mercury__string__TypeInfo_for_A_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    }
#line 4622 "string.m"
    return mercury__string__Acc_12;
#line 4622 "string.m"
  }
#line 943 "string.m"
}

#line 935 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_5(
#line 935 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 935 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 935 "string.m"
  MR_Word mercury__string__Closure_9,
#line 935 "string.m"
  MR_String mercury__string__String_10,
#line 935 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 935 "string.m"
  MR_Integer mercury__string__End0_12,
#line 935 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 935 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 935 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 935 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 935 "string.m"
  MR_Cont mercury__string__cont,
#line 935 "string.m"
  void * mercury__string__cont_env_ptr)
#line 935 "string.m"
{
#line 4566 "string.m"
  {
#line 4566 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4566 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4566 "string.m"
    MR_Integer mercury__string__End_16;
#line 4566 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 18968 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4569 "string.m"
    {
#line 4569 "string.m"
      mercury__string__foldl2_between_2_8_p_5(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4569 "string.m"
      return;
    }
#line 4566 "string.m"
  }
#line 935 "string.m"
}

#line 933 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_4(
#line 933 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 933 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 933 "string.m"
  MR_Word mercury__string__Closure_9,
#line 933 "string.m"
  MR_String mercury__string__String_10,
#line 933 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 933 "string.m"
  MR_Integer mercury__string__End0_12,
#line 933 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 933 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 933 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 933 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 933 "string.m"
  MR_Cont mercury__string__cont,
#line 933 "string.m"
  void * mercury__string__cont_env_ptr)
#line 933 "string.m"
{
#line 4566 "string.m"
  {
#line 4566 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4566 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4566 "string.m"
    MR_Integer mercury__string__End_16;
#line 4566 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 19058 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4569 "string.m"
    {
#line 4569 "string.m"
      mercury__string__foldl2_between_2_8_p_4(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4569 "string.m"
      return;
    }
#line 4566 "string.m"
  }
#line 933 "string.m"
}

#line 931 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_between_8_p_3(
#line 931 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 931 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 931 "string.m"
  MR_Word mercury__string__Closure_9,
#line 931 "string.m"
  MR_String mercury__string__String_10,
#line 931 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 931 "string.m"
  MR_Integer mercury__string__End0_12,
#line 931 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 931 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 931 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 931 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 931 "string.m"
{
#line 4566 "string.m"
  {
#line 4566 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4566 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4566 "string.m"
    MR_Integer mercury__string__End_16;
#line 4566 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 19144 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4569 "string.m"
    {
#line 4569 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_2_8_p_3(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    }
#line 4566 "string.m"
    return mercury__string__succeeded;
#line 4566 "string.m"
  }
#line 931 "string.m"
}

#line 929 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_2(
#line 929 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 929 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 929 "string.m"
  MR_Word mercury__string__Closure_9,
#line 929 "string.m"
  MR_String mercury__string__String_10,
#line 929 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 929 "string.m"
  MR_Integer mercury__string__End0_12,
#line 929 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 929 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 929 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 929 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 929 "string.m"
{
#line 4566 "string.m"
  {
#line 4566 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4566 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4566 "string.m"
    MR_Integer mercury__string__End_16;
#line 4566 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 19230 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4569 "string.m"
    {
#line 4569 "string.m"
      mercury__string__foldl2_between_2_8_p_2(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4569 "string.m"
      return;
    }
#line 4566 "string.m"
  }
#line 929 "string.m"
}

#line 927 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_1(
#line 927 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 927 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 927 "string.m"
  MR_Word mercury__string__Closure_9,
#line 927 "string.m"
  MR_String mercury__string__String_10,
#line 927 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 927 "string.m"
  MR_Integer mercury__string__End0_12,
#line 927 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 927 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 927 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 927 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 927 "string.m"
{
#line 4566 "string.m"
  {
#line 4566 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4566 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4566 "string.m"
    MR_Integer mercury__string__End_16;
#line 4566 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 19316 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4569 "string.m"
    {
#line 4569 "string.m"
      mercury__string__foldl2_between_2_8_p_1(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4569 "string.m"
      return;
    }
#line 4566 "string.m"
  }
#line 927 "string.m"
}

#line 925 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_0(
#line 925 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 925 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 925 "string.m"
  MR_Word mercury__string__Closure_9,
#line 925 "string.m"
  MR_String mercury__string__String_10,
#line 925 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 925 "string.m"
  MR_Integer mercury__string__End0_12,
#line 925 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 925 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 925 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 925 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 925 "string.m"
{
#line 4566 "string.m"
  {
#line 4566 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4566 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4566 "string.m"
    MR_Integer mercury__string__End_16;
#line 4566 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 19402 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4569 "string.m"
    {
#line 4569 "string.m"
      mercury__string__foldl2_between_2_8_p_0(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4569 "string.m"
      return;
    }
#line 4566 "string.m"
  }
#line 925 "string.m"
}

#line 915 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_4(
#line 915 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 915 "string.m"
  MR_Word mercury__string__Closure_7,
#line 915 "string.m"
  MR_String mercury__string__String_8,
#line 915 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 915 "string.m"
  MR_Integer mercury__string__End0_10,
#line 915 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 915 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 915 "string.m"
  MR_Cont mercury__string__cont,
#line 915 "string.m"
  void * mercury__string__cont_env_ptr)
#line 915 "string.m"
{
#line 4557 "string.m"
  {
#line 4557 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4557 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4557 "string.m"
    MR_Integer mercury__string__End_13;
#line 4557 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 19486 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4560 "string.m"
    {
#line 4560 "string.m"
      mercury__string__foldl_between_2_6_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4560 "string.m"
      return;
    }
#line 4557 "string.m"
  }
#line 915 "string.m"
}

#line 913 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_3(
#line 913 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 913 "string.m"
  MR_Word mercury__string__Closure_7,
#line 913 "string.m"
  MR_String mercury__string__String_8,
#line 913 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 913 "string.m"
  MR_Integer mercury__string__End0_10,
#line 913 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 913 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 913 "string.m"
  MR_Cont mercury__string__cont,
#line 913 "string.m"
  void * mercury__string__cont_env_ptr)
#line 913 "string.m"
{
#line 4557 "string.m"
  {
#line 4557 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4557 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4557 "string.m"
    MR_Integer mercury__string__End_13;
#line 4557 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 19570 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4560 "string.m"
    {
#line 4560 "string.m"
      mercury__string__foldl_between_2_6_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4560 "string.m"
      return;
    }
#line 4557 "string.m"
  }
#line 913 "string.m"
}

#line 911 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_between_6_p_2(
#line 911 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 911 "string.m"
  MR_Word mercury__string__Closure_7,
#line 911 "string.m"
  MR_String mercury__string__String_8,
#line 911 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 911 "string.m"
  MR_Integer mercury__string__End0_10,
#line 911 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 911 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 911 "string.m"
{
#line 4557 "string.m"
  {
#line 4557 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4557 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4557 "string.m"
    MR_Integer mercury__string__End_13;
#line 4557 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 19650 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4560 "string.m"
    {
#line 4560 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_2_6_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4557 "string.m"
    return mercury__string__succeeded;
#line 4557 "string.m"
  }
#line 911 "string.m"
}

#line 909 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_1(
#line 909 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 909 "string.m"
  MR_Word mercury__string__Closure_7,
#line 909 "string.m"
  MR_String mercury__string__String_8,
#line 909 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 909 "string.m"
  MR_Integer mercury__string__End0_10,
#line 909 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 909 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 909 "string.m"
{
#line 4557 "string.m"
  {
#line 4557 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4557 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4557 "string.m"
    MR_Integer mercury__string__End_13;
#line 4557 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 19730 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4560 "string.m"
    {
#line 4560 "string.m"
      mercury__string__foldl_between_2_6_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4560 "string.m"
      return;
    }
#line 4557 "string.m"
  }
#line 909 "string.m"
}

#line 907 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_0(
#line 907 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 907 "string.m"
  MR_Word mercury__string__Closure_7,
#line 907 "string.m"
  MR_String mercury__string__String_8,
#line 907 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 907 "string.m"
  MR_Integer mercury__string__End0_10,
#line 907 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 907 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 907 "string.m"
{
#line 4557 "string.m"
  {
#line 4557 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4557 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4557 "string.m"
    MR_Integer mercury__string__End_13;
#line 4557 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 19810 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4560 "string.m"
    {
#line 4560 "string.m"
      mercury__string__foldl_between_2_6_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4560 "string.m"
      return;
    }
#line 4557 "string.m"
  }
#line 907 "string.m"
}

#line 905 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_between_5_f_0(
#line 905 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 905 "string.m"
  MR_Word mercury__string__F_7,
#line 905 "string.m"
  MR_String mercury__string__S_8,
#line 905 "string.m"
  MR_Integer mercury__string__Start_9,
#line 905 "string.m"
  MR_Integer mercury__string__End_10,
#line 905 "string.m"
  MR_Box mercury__string__A_11)
#line 905 "string.m"
{
#line 4562 "string.m"
  {
#line 4562 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
#line 4562 "string.m"
    MR_Box mercury__string__B_12;
#line 4562 "string.m"
    MR_Integer mercury__string__Start_31;
#line 4562 "string.m"
    MR_Integer mercury__string__End_32;
#line 4562 "string.m"
    MR_Integer mercury__string__V_34_34;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_31 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_31 = mercury__string__Start_9;
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 19890 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_34_34  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End_10 < mercury__string__V_34_34);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_32 = mercury__string__End_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_32 = mercury__string__V_34_34;
#line 4560 "string.m"
    {
#line 4560 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__S_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__A_11, &mercury__string__B_12);
    }
#line 4562 "string.m"
    return mercury__string__B_12;
#line 4562 "string.m"
  }
#line 905 "string.m"
}

#line 896 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_5(
#line 896 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 896 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 896 "string.m"
  MR_Word mercury__string__Closure_7,
#line 896 "string.m"
  MR_String mercury__string__String_8,
#line 896 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 896 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 896 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 896 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15,
#line 896 "string.m"
  MR_Cont mercury__string__cont,
#line 896 "string.m"
  void * mercury__string__cont_env_ptr)
#line 896 "string.m"
{
#line 4553 "string.m"
  {
#line 4553 "string.m"
    MR_bool mercury__string__succeeded;
#line 4553 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 19964 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2398 "string.m"
}
#line 4555 "string.m"
    {
#line 4555 "string.m"
      mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4555 "string.m"
      return;
    }
#line 4553 "string.m"
  }
#line 896 "string.m"
}

#line 894 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_4(
#line 894 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 894 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 894 "string.m"
  MR_Word mercury__string__Closure_7,
#line 894 "string.m"
  MR_String mercury__string__String_8,
#line 894 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 894 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 894 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 894 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15,
#line 894 "string.m"
  MR_Cont mercury__string__cont,
#line 894 "string.m"
  void * mercury__string__cont_env_ptr)
#line 894 "string.m"
{
#line 4553 "string.m"
  {
#line 4553 "string.m"
    MR_bool mercury__string__succeeded;
#line 4553 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20028 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2398 "string.m"
}
#line 4555 "string.m"
    {
#line 4555 "string.m"
      mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4555 "string.m"
      return;
    }
#line 4553 "string.m"
  }
#line 894 "string.m"
}

#line 892 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_6_p_3(
#line 892 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 892 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 892 "string.m"
  MR_Word mercury__string__Closure_7,
#line 892 "string.m"
  MR_String mercury__string__String_8,
#line 892 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 892 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 892 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 892 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 892 "string.m"
{
#line 4553 "string.m"
  {
#line 4553 "string.m"
    MR_bool mercury__string__succeeded;
#line 4553 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20088 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2398 "string.m"
}
#line 4555 "string.m"
    {
#line 4555 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
    }
#line 4553 "string.m"
    return mercury__string__succeeded;
#line 4553 "string.m"
  }
#line 892 "string.m"
}

#line 890 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_2(
#line 890 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 890 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 890 "string.m"
  MR_Word mercury__string__Closure_7,
#line 890 "string.m"
  MR_String mercury__string__String_8,
#line 890 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 890 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 890 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 890 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 890 "string.m"
{
#line 4553 "string.m"
  {
#line 4553 "string.m"
    MR_bool mercury__string__succeeded;
#line 4553 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20148 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2398 "string.m"
}
#line 4555 "string.m"
    {
#line 4555 "string.m"
      mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4555 "string.m"
      return;
    }
#line 4553 "string.m"
  }
#line 890 "string.m"
}

#line 888 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_1(
#line 888 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 888 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 888 "string.m"
  MR_Word mercury__string__Closure_7,
#line 888 "string.m"
  MR_String mercury__string__String_8,
#line 888 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 888 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 888 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 888 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 888 "string.m"
{
#line 4553 "string.m"
  {
#line 4553 "string.m"
    MR_bool mercury__string__succeeded;
#line 4553 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20208 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2398 "string.m"
}
#line 4555 "string.m"
    {
#line 4555 "string.m"
      mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4555 "string.m"
      return;
    }
#line 4553 "string.m"
  }
#line 888 "string.m"
}

#line 886 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_0(
#line 886 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 886 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 886 "string.m"
  MR_Word mercury__string__Closure_7,
#line 886 "string.m"
  MR_String mercury__string__String_8,
#line 886 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 886 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 886 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 886 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 886 "string.m"
{
#line 4553 "string.m"
  {
#line 4553 "string.m"
    MR_bool mercury__string__succeeded;
#line 4553 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20268 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2398 "string.m"
}
#line 4555 "string.m"
    {
#line 4555 "string.m"
      mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4555 "string.m"
      return;
    }
#line 4553 "string.m"
  }
#line 886 "string.m"
}

#line 880 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_4(
#line 880 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 880 "string.m"
  MR_Word mercury__string__Closure_5,
#line 880 "string.m"
  MR_String mercury__string__String_6,
#line 880 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 880 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10,
#line 880 "string.m"
  MR_Cont mercury__string__cont,
#line 880 "string.m"
  void * mercury__string__cont_env_ptr)
#line 880 "string.m"
{
#line 4549 "string.m"
  {
#line 4549 "string.m"
    MR_bool mercury__string__succeeded;
#line 4549 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20326 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2398 "string.m"
}
#line 4551 "string.m"
    {
#line 4551 "string.m"
      mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4551 "string.m"
      return;
    }
#line 4549 "string.m"
  }
#line 880 "string.m"
}

#line 879 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_3(
#line 879 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 879 "string.m"
  MR_Word mercury__string__Closure_5,
#line 879 "string.m"
  MR_String mercury__string__String_6,
#line 879 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 879 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10,
#line 879 "string.m"
  MR_Cont mercury__string__cont,
#line 879 "string.m"
  void * mercury__string__cont_env_ptr)
#line 879 "string.m"
{
#line 4549 "string.m"
  {
#line 4549 "string.m"
    MR_bool mercury__string__succeeded;
#line 4549 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20384 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2398 "string.m"
}
#line 4551 "string.m"
    {
#line 4551 "string.m"
      mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4551 "string.m"
      return;
    }
#line 4549 "string.m"
  }
#line 879 "string.m"
}

#line 878 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_4_p_2(
#line 878 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 878 "string.m"
  MR_Word mercury__string__Closure_5,
#line 878 "string.m"
  MR_String mercury__string__String_6,
#line 878 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 878 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 878 "string.m"
{
#line 4549 "string.m"
  {
#line 4549 "string.m"
    MR_bool mercury__string__succeeded;
#line 4549 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20438 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2398 "string.m"
}
#line 4551 "string.m"
    {
#line 4551 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
    }
#line 4549 "string.m"
    return mercury__string__succeeded;
#line 4549 "string.m"
  }
#line 878 "string.m"
}

#line 877 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_1(
#line 877 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 877 "string.m"
  MR_Word mercury__string__Closure_5,
#line 877 "string.m"
  MR_String mercury__string__String_6,
#line 877 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 877 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 877 "string.m"
{
#line 4549 "string.m"
  {
#line 4549 "string.m"
    MR_bool mercury__string__succeeded;
#line 4549 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20492 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2398 "string.m"
}
#line 4551 "string.m"
    {
#line 4551 "string.m"
      mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
#line 4551 "string.m"
      return;
    }
#line 4549 "string.m"
  }
#line 877 "string.m"
}

#line 876 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_0(
#line 876 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 876 "string.m"
  MR_Word mercury__string__Closure_5,
#line 876 "string.m"
  MR_String mercury__string__String_6,
#line 876 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 876 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 876 "string.m"
{
#line 4549 "string.m"
  {
#line 4549 "string.m"
    MR_bool mercury__string__succeeded;
#line 4549 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20546 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2398 "string.m"
}
#line 4551 "string.m"
    {
#line 4551 "string.m"
      mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
#line 4551 "string.m"
      return;
    }
#line 4549 "string.m"
  }
#line 876 "string.m"
}

#line 874 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_3_f_0(
#line 874 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 874 "string.m"
  MR_Word mercury__string__F_5,
#line 874 "string.m"
  MR_String mercury__string__S_6,
#line 874 "string.m"
  MR_Box mercury__string__A_7)
#line 874 "string.m"
{
#line 4545 "string.m"
  {
#line 4545 "string.m"
    MR_bool mercury__string__succeeded;
#line 4545 "string.m"
    MR_Box mercury__string__B_8;
#line 4545 "string.m"
    MR_Integer mercury__string__Length_25;
#line 4545 "string.m"
    MR_Integer mercury__string__End_39;
#line 4545 "string.m"
    MR_Integer mercury__string__V_41_41;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20604 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_25  = Length;
#line 2398 "string.m"
}
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20624 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_41_41  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_41_41);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_39 = mercury__string__Length_25;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_39 = mercury__string__V_41_41;
#line 4560 "string.m"
    {
#line 4560 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__S_6, (MR_Integer) 0, mercury__string__End_39, mercury__string__A_7, &mercury__string__B_8);
    }
#line 4545 "string.m"
    return mercury__string__B_8;
#line 4545 "string.m"
  }
#line 874 "string.m"
}

#line 857 "string.m"
MR_String MR_CALL 
mercury__string__word_wrap_separator_3_f_0(
#line 857 "string.m"
  MR_String mercury__string__Str_5,
#line 857 "string.m"
  MR_Integer mercury__string__N_6,
#line 857 "string.m"
  MR_String mercury__string__WordSep0_7)
#line 857 "string.m"
{
#line 4418 "string.m"
  {
#line 4418 "string.m"
    MR_bool mercury__string__succeeded;
#line 4418 "string.m"
    MR_String mercury__string__Wrapped_8;
#line 4418 "string.m"
    MR_Word mercury__string__TypeCtorInfo_20_20;
#line 4418 "string.m"
    MR_Word mercury__string__Words_9;
#line 4418 "string.m"
    MR_Integer mercury__string__SepLen0_10;
#line 4418 "string.m"
    MR_String mercury__string__WordSep_11;
#line 4418 "string.m"
    MR_Integer mercury__string__SepLen_12;
#line 4418 "string.m"
    MR_Word mercury__string__RevWordsSpacesNls0_15;
#line 4418 "string.m"
    MR_Word mercury__string__RevWordsSpacesNls_16;
#line 4418 "string.m"
    MR_Word mercury__string__WordsSpacesNls_17;
#line 4418 "string.m"
    MR_Integer mercury__string__WordStart_25;

#line 4074 "string.m"
    {
#line 4074 "string.m"
      mercury__string__next_boundary__ho35_4_p_0(mercury__string__Str_5, (MR_Integer) 0, &mercury__string__WordStart_25);
    }
#line 4075 "string.m"
    {
#line 4075 "string.m"
      mercury__string__words_loop__ho36_4_p_0(mercury__string__Str_5, mercury__string__WordStart_25, &mercury__string__Words_9);
    }
#line 2458 "string.m"
    {
#line 2458 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__WordSep0_7, &mercury__string__SepLen0_10);
    }
#line 4421 "string.m"
    mercury__string__succeeded = (mercury__string__SepLen0_10 < mercury__string__N_6);
#line 4424 "string.m"
    if (mercury__string__succeeded)
#line 4422 "string.m"
      {
#line 4422 "string.m"
        mercury__string__WordSep_11 = mercury__string__WordSep0_7;
#line 4423 "string.m"
        mercury__string__SepLen_12 = mercury__string__SepLen0_10;
#line 4422 "string.m"
      }
#line 4424 "string.m"
    else
#line 4425 "string.m"
      {
#line 4425 "string.m"
        mercury__string__WordSep_11 = (MR_String) "";
#line 4426 "string.m"
        mercury__string__SepLen_12 = (MR_Integer) 0;
#line 4425 "string.m"
      }
#line 4430 "string.m"
    mercury__string__RevWordsSpacesNls0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4431 "string.m"
    {
#line 4431 "string.m"
      mercury__string__word_wrap_loop_7_p_0(mercury__string__Words_9, mercury__string__WordSep_11, mercury__string__SepLen_12, (MR_Integer) 1, mercury__string__N_6, mercury__string__RevWordsSpacesNls0_15, &mercury__string__RevWordsSpacesNls_16);
    }
#line 20733 "string.c"
    mercury__string__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4433 "string.m"
    {
#line 4433 "string.m"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_20_20, mercury__string__RevWordsSpacesNls_16, &mercury__string__WordsSpacesNls_17);
    }
#line 4434 "string.m"
    {
#line 4434 "string.m"
      return mercury__string__Wrapped_8 = mercury__string__append_list_1_f_0(mercury__string__WordsSpacesNls_17);
    }
#line 4418 "string.m"
    return mercury__string__Wrapped_8;
#line 4418 "string.m"
  }
#line 857 "string.m"
}

#line 848 "string.m"
MR_String MR_CALL 
mercury__string__word_wrap_2_f_0(
#line 848 "string.m"
  MR_String mercury__string__Str_4,
#line 848 "string.m"
  MR_Integer mercury__string__N_5)
#line 848 "string.m"
{
#line 4416 "string.m"
  {
#line 4416 "string.m"
    MR_bool mercury__string__succeeded;
#line 4416 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 4416 "string.m"
    {
#line 4416 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__word_wrap_separator_3_f_0(mercury__string__Str_4, mercury__string__N_5, (MR_String) "");
    }
#line 4416 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4416 "string.m"
  }
#line 848 "string.m"
}

#line 837 "string.m"
void MR_CALL 
mercury__string__replace_all_4_p_0(
#line 837 "string.m"
  MR_String mercury__string__Str_5,
#line 837 "string.m"
  MR_String mercury__string__Pat_6,
#line 837 "string.m"
  MR_String mercury__string__Subst_7,
#line 837 "string.m"
  MR_String * mercury__string__Result_8)
#line 837 "string.m"
{
#line 4392 "string.m"
  {
#line 4392 "string.m"
    MR_bool mercury__string__succeeded = (strcmp(mercury__string__Pat_6, (MR_String) "") == 0);

#line 4392 "string.m"
    if (mercury__string__succeeded)
#line 4389 "string.m"
      {
#line 4389 "string.m"
        MR_Word mercury__string__TypeCtorInfo_29_29;
#line 4389 "string.m"
        MR_Word mercury__string__Foldl_12;
#line 4389 "string.m"
        MR_Word mercury__string__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4389 "string.m"
        MR_Word mercury__string__V_22_22;
#line 4389 "string.m"
        MR_Word mercury__string__V_23_23;
#line 4389 "string.m"
        MR_Integer mercury__string__Length_51;
#line 4389 "string.m"
        MR_Integer mercury__string__End_67;
#line 4389 "string.m"
        MR_Integer mercury__string__V_69_69;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20832 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_51  = Length;
#line 2398 "string.m"
}
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20852 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_69_69  = Length;
#line 2398 "string.m"
}
#line 85 "int.opt"
        mercury__string__succeeded = (mercury__string__Length_51 < mercury__string__V_69_69);
#line 88 "int.opt"
        if (mercury__string__succeeded)
#line 87 "int.opt"
          mercury__string__End_67 = mercury__string__Length_51;
#line 88 "int.opt"
        else
#line 89 "int.opt"
          mercury__string__End_67 = mercury__string__V_69_69;
#line 4560 "string.m"
        {
#line 4560 "string.m"
          mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0(mercury__string__Subst_7, mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_67, mercury__string__V_21_21, &mercury__string__Foldl_12);
        }
#line 20874 "string.c"
        mercury__string__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
        {
#line 118 "list.opt"
          mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_29_29, mercury__string__Foldl_12, &mercury__string__V_23_23);
        }
#line 4391 "string.m"
        {
#line 4391 "string.m"
          mercury__string__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4391 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_22_22, 0) = ((MR_Box) (mercury__string__Subst_7));
#line 4391 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_22_22, 1) = ((MR_Box) (mercury__string__V_23_23));
#line 4391 "string.m"
        }
#line 4391 "string.m"
        {
#line 4391 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__V_22_22);
        }
#line 4389 "string.m"
      }
#line 4392 "string.m"
    else
#line 4393 "string.m"
      {
#line 4393 "string.m"
        MR_Word mercury__string__TypeCtorInfo_30_30;
#line 4393 "string.m"
        MR_Integer mercury__string__PatLength_13;
#line 4393 "string.m"
        MR_Word mercury__string__ReversedChunks_14;
#line 4393 "string.m"
        MR_Word mercury__string__Chunks_15;
#line 4393 "string.m"
        MR_Word mercury__string__V_25_25;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 20926 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PatLength_13  = Length;
#line 2398 "string.m"
}
#line 4394 "string.m"
        mercury__string__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4394 "string.m"
        {
#line 4394 "string.m"
          mercury__string__replace_all_loop_7_p_0(mercury__string__Str_5, mercury__string__Pat_6, mercury__string__Subst_7, mercury__string__PatLength_13, (MR_Integer) 0, mercury__string__V_25_25, &mercury__string__ReversedChunks_14);
        }
#line 20940 "string.c"
        mercury__string__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4395 "string.m"
        {
#line 4395 "string.m"
          mercury__string__Chunks_15 = mercury__list__reverse_1_f_0(mercury__string__TypeCtorInfo_30_30, mercury__string__ReversedChunks_14);
        }
#line 4396 "string.m"
        {
#line 4396 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__Chunks_15);
        }
#line 4393 "string.m"
      }
#line 4392 "string.m"
  }
#line 837 "string.m"
}

#line 836 "string.m"
MR_String MR_CALL 
mercury__string__replace_all_3_f_0(
#line 836 "string.m"
  MR_String mercury__string__S1_5,
#line 836 "string.m"
  MR_String mercury__string__S2_6,
#line 836 "string.m"
  MR_String mercury__string__S3_7)
#line 836 "string.m"
{
#line 4385 "string.m"
  {
#line 4385 "string.m"
    MR_bool mercury__string__succeeded;
#line 4385 "string.m"
    MR_String mercury__string__S4_8;

#line 4385 "string.m"
    {
#line 4385 "string.m"
      mercury__string__replace_all_4_p_0(mercury__string__S1_5, mercury__string__S2_6, mercury__string__S3_7, &mercury__string__S4_8);
    }
#line 4385 "string.m"
    return mercury__string__S4_8;
#line 4385 "string.m"
  }
#line 836 "string.m"
}

#line 829 "string.m"
MR_bool MR_CALL 
mercury__string__replace_4_p_0(
#line 829 "string.m"
  MR_String mercury__string__Str_5,
#line 829 "string.m"
  MR_String mercury__string__Pat_6,
#line 829 "string.m"
  MR_String mercury__string__Subst_7,
#line 829 "string.m"
  MR_String * mercury__string__Result_8)
#line 829 "string.m"
{
#line 4373 "string.m"
  {
#line 4373 "string.m"
    MR_bool mercury__string__succeeded;
#line 4373 "string.m"
    MR_Integer mercury__string__Index_9;
#line 4373 "string.m"
    MR_String mercury__string__Initial_10;
#line 4373 "string.m"
    MR_Integer mercury__string__BeginAt_11;
#line 4373 "string.m"
    MR_Integer mercury__string__EndAt_12;
#line 4373 "string.m"
    MR_String mercury__string__Final_13;
#line 4373 "string.m"
    MR_Integer mercury__string__V_14_14;
#line 4373 "string.m"
    MR_Integer mercury__string__V_15_15;
#line 4373 "string.m"
    MR_Word mercury__string__V_16_16;
#line 4373 "string.m"
    MR_Word mercury__string__V_17_17;
#line 4373 "string.m"
    MR_Word mercury__string__V_18_18;
#line 4373 "string.m"
    MR_Word mercury__string__V_19_19;

#line 2939 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  mercury__string__Str_5 ;
	Pattern =  mercury__string__Pat_6 ;
	BeginAt =  (MR_Integer) 0 ;
		{
#line 2939 "string.m"
{
    char *match;
    if ((MR_Unsigned) BeginAt > strlen(WholeString)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        match = strstr(WholeString + BeginAt, Pattern);
        if (match) {
            Index = match - WholeString;
            SUCCESS_INDICATOR = MR_TRUE;
        } else {
            SUCCESS_INDICATOR = MR_FALSE;
        }
    }
}
#line 21058 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_9  = Index;
#line 2939 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4373 "string.m"
    if (mercury__string__succeeded)
#line 4373 "string.m"
      {
#line 4376 "string.m"
        mercury__string__V_14_14 = (MR_Integer) 0;
#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_5 ;
	Start =  mercury__string__V_14_14 ;
	End =  mercury__string__Index_9 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 21096 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_10  = SubString;
#line 4037 "string.m"
}
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21116 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_15_15  = Length;
#line 2398 "string.m"
}
#line 4378 "string.m"
        mercury__string__BeginAt_11 = (mercury__string__Index_9 + mercury__string__V_15_15);
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21138 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndAt_12  = Length;
#line 2398 "string.m"
}
#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_5 ;
	Start =  mercury__string__BeginAt_11 ;
	End =  mercury__string__EndAt_12 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 21167 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Final_13  = SubString;
#line 4037 "string.m"
}
#line 4382 "string.m"
        mercury__string__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4382 "string.m"
        {
#line 4382 "string.m"
          mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4382 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Final_13));
#line 4382 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__V_19_19));
#line 4382 "string.m"
        }
#line 4382 "string.m"
        {
#line 4382 "string.m"
          mercury__string__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4382 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_17_17, 0) = ((MR_Box) (mercury__string__Subst_7));
#line 4382 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_17_17, 1) = ((MR_Box) (mercury__string__V_18_18));
#line 4382 "string.m"
        }
#line 4382 "string.m"
        {
#line 4382 "string.m"
          mercury__string__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4382 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_16_16, 0) = ((MR_Box) (mercury__string__Initial_10));
#line 4382 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_16_16, 1) = ((MR_Box) (mercury__string__V_17_17));
#line 4382 "string.m"
        }
#line 4382 "string.m"
        {
#line 4382 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__V_16_16);
        }
#line 4382 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 4373 "string.m"
      }
#line 4373 "string.m"
    return mercury__string__succeeded;
#line 4373 "string.m"
  }
#line 829 "string.m"
}

#line 820 "string.m"
MR_String MR_CALL 
mercury__string__rstrip_pred_2_f_0(
#line 820 "string.m"
  MR_Word mercury__string__P_4,
#line 820 "string.m"
  MR_String mercury__string__S_5)
#line 820 "string.m"
{
#line 4367 "string.m"
  {
#line 4367 "string.m"
    MR_bool mercury__string__succeeded;
#line 4367 "string.m"
    MR_String mercury__string__HeadVar__3_3;
#line 4367 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4367 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4367 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4367 "string.m"
    MR_Integer mercury__string__End_16;
#line 4367 "string.m"
    MR_Integer mercury__string__Index_17;
#line 3854 "string.m"
    MR_String mercury__string___RightString_29;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21263 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2398 "string.m"
}
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21283 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_16  = Length;
#line 2398 "string.m"
}
#line 2914 "string.m"
    {
#line 2914 "string.m"
      mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_16, &mercury__string__Index_17);
    }
#line 2912 "string.m"
    mercury__string__V_8_8 = (mercury__string__End_16 - mercury__string__Index_17);
#line 4367 "string.m"
    mercury__string__V_6_6 = (mercury__string__V_7_7 - mercury__string__V_8_8);
#line 3854 "string.m"
    {
#line 3854 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__V_6_6, &mercury__string__HeadVar__3_3, &mercury__string___RightString_29);
    }
#line 4367 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4367 "string.m"
  }
#line 820 "string.m"
}

#line 812 "string.m"
MR_String MR_CALL 
mercury__string__lstrip_pred_2_f_0(
#line 812 "string.m"
  MR_Word mercury__string__P_4,
#line 812 "string.m"
  MR_String mercury__string__S_5)
#line 812 "string.m"
{
#line 4369 "string.m"
  {
#line 4369 "string.m"
    MR_bool mercury__string__succeeded;
#line 4369 "string.m"
    MR_String mercury__string__HeadVar__3_3;
#line 4369 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4369 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4369 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4369 "string.m"
    MR_Integer mercury__string__Length_24;
#line 4369 "string.m"
    MR_Integer mercury__string__LeftCount_25;
#line 3868 "string.m"
    MR_String mercury__string___LeftString_26;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21352 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2398 "string.m"
}
#line 2897 "string.m"
    {
#line 2897 "string.m"
      mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__V_8_8);
    }
#line 4369 "string.m"
    mercury__string__V_6_6 = (mercury__string__V_7_7 - mercury__string__V_8_8);
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21379 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_24  = Length;
#line 2398 "string.m"
}
#line 3867 "string.m"
    mercury__string__LeftCount_25 = (mercury__string__Length_24 - mercury__string__V_6_6);
#line 3868 "string.m"
    {
#line 3868 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__LeftCount_25, &mercury__string___LeftString_26, &mercury__string__HeadVar__3_3);
    }
#line 4369 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4369 "string.m"
  }
#line 812 "string.m"
}

#line 805 "string.m"
MR_String MR_CALL 
mercury__string__strip_1_f_0(
#line 805 "string.m"
  MR_String mercury__string__S0_3)
#line 805 "string.m"
{
#line 4358 "string.m"
  {
#line 4358 "string.m"
    MR_bool mercury__string__succeeded;
#line 4358 "string.m"
    MR_String mercury__string__S_4;
#line 4358 "string.m"
    MR_Integer mercury__string__L_5;
#line 4358 "string.m"
    MR_Integer mercury__string__R_6;
#line 4358 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4358 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4358 "string.m"
    MR_Integer mercury__string__End_21;
#line 4358 "string.m"
    MR_Integer mercury__string__Index_22;

#line 2897 "string.m"
    {
#line 2897 "string.m"
      mercury__string__prefix_length_loop__ho32_4_p_0(mercury__string__S0_3, (MR_Integer) 0, &mercury__string__L_5);
    }
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21444 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_21  = Length;
#line 2398 "string.m"
}
#line 2914 "string.m"
    {
#line 2914 "string.m"
      mercury__string__suffix_length_loop__ho33_4_p_0(mercury__string__S0_3, mercury__string__End_21, &mercury__string__Index_22);
    }
#line 2912 "string.m"
    mercury__string__R_6 = (mercury__string__End_21 - mercury__string__Index_22);
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21471 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2398 "string.m"
}
#line 4361 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__R_6);
#line 3881 "string.m"
    {
#line 3881 "string.m"
      mercury__string__between_4_p_0(mercury__string__S0_3, mercury__string__L_5, mercury__string__V_9_9, &mercury__string__S_4);
    }
#line 4358 "string.m"
    return mercury__string__S_4;
#line 4358 "string.m"
  }
#line 805 "string.m"
}

#line 798 "string.m"
MR_String MR_CALL 
mercury__string__rstrip_1_f_0(
#line 798 "string.m"
  MR_String mercury__string__S_3)
#line 798 "string.m"
{
#line 4363 "string.m"
  {
#line 4363 "string.m"
    MR_bool mercury__string__succeeded;
#line 4363 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 4363 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4363 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4363 "string.m"
    MR_Integer mercury__string__V_11_11;
#line 4363 "string.m"
    MR_Integer mercury__string__End_20;
#line 4363 "string.m"
    MR_Integer mercury__string__Index_21;
#line 3854 "string.m"
    MR_String mercury__string___RightString_33;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21531 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2398 "string.m"
}
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21551 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_20  = Length;
#line 2398 "string.m"
}
#line 2914 "string.m"
    {
#line 2914 "string.m"
      mercury__string__suffix_length_loop__ho33_4_p_0(mercury__string__S_3, mercury__string__End_20, &mercury__string__Index_21);
    }
#line 2912 "string.m"
    mercury__string__V_11_11 = (mercury__string__End_20 - mercury__string__Index_21);
#line 4367 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 3854 "string.m"
    {
#line 3854 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__V_9_9, &mercury__string__HeadVar__2_2, &mercury__string___RightString_33);
    }
#line 4363 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4363 "string.m"
  }
#line 798 "string.m"
}

#line 791 "string.m"
MR_String MR_CALL 
mercury__string__lstrip_1_f_0(
#line 791 "string.m"
  MR_String mercury__string__S_3)
#line 791 "string.m"
{
#line 4365 "string.m"
  {
#line 4365 "string.m"
    MR_bool mercury__string__succeeded;
#line 4365 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 4365 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4365 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4365 "string.m"
    MR_Integer mercury__string__V_11_11;
#line 4365 "string.m"
    MR_Integer mercury__string__Length_28;
#line 4365 "string.m"
    MR_Integer mercury__string__LeftCount_29;
#line 3868 "string.m"
    MR_String mercury__string___LeftString_30;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21618 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2398 "string.m"
}
#line 2897 "string.m"
    {
#line 2897 "string.m"
      mercury__string__prefix_length_loop__ho32_4_p_0(mercury__string__S_3, (MR_Integer) 0, &mercury__string__V_11_11);
    }
#line 4369 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21645 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_28  = Length;
#line 2398 "string.m"
}
#line 3867 "string.m"
    mercury__string__LeftCount_29 = (mercury__string__Length_28 - mercury__string__V_9_9);
#line 3868 "string.m"
    {
#line 3868 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__LeftCount_29, &mercury__string___LeftString_30, &mercury__string__HeadVar__2_2);
    }
#line 4365 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4365 "string.m"
  }
#line 791 "string.m"
}

#line 784 "string.m"
MR_String MR_CALL 
mercury__string__chomp_1_f_0(
#line 784 "string.m"
  MR_String mercury__string__S_3)
#line 784 "string.m"
{
#line 4354 "string.m"
  {
#line 4354 "string.m"
    MR_bool mercury__string__succeeded;
#line 4354 "string.m"
    MR_String mercury__string__Chomp_4;
#line 4354 "string.m"
    MR_Integer mercury__string__Offset_5;
#line 4352 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4352 "string.m"
    MR_Char mercury__string__V_8_8;
#line 4352 "string.m"
    MR_Integer mercury__string__Len_18;
#line 4352 "string.m"
    MR_Integer mercury__string__V_19_19;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21703 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_6_6  = Length;
#line 2398 "string.m"
}
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 21723 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_18  = Length;
#line 2398 "string.m"
}
#line 2021 "string.m"
    mercury__string__V_19_19 = (mercury__string__V_6_6 - (MR_Integer) 1);
#line 2132 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__V_19_19 ;
	Length =  mercury__string__Len_18 ;
		{
#line 2132 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 21754 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2132 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4352 "string.m"
    if (mercury__string__succeeded)
#line 4352 "string.m"
      {
#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_3 ;
	Index =  mercury__string__V_6_6 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 21795 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Offset_5  = PrevIndex;
	 mercury__string__V_8_8  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4352 "string.m"
        if (mercury__string__succeeded)
#line 4352 "string.m"
          mercury__string__succeeded = ((MR_Char) 10 == mercury__string__V_8_8);
#line 4352 "string.m"
      }
#line 4354 "string.m"
    if (mercury__string__succeeded)
#line 3854 "string.m"
      {
#line 3854 "string.m"
        MR_String mercury__string___RightString_35;

#line 3854 "string.m"
        {
#line 3854 "string.m"
          mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__Offset_5, &mercury__string__Chomp_4, &mercury__string___RightString_35);
        }
#line 3854 "string.m"
      }
#line 4354 "string.m"
    else
#line 4355 "string.m"
      mercury__string__Chomp_4 = mercury__string__S_3;
#line 4354 "string.m"
    return mercury__string__Chomp_4;
#line 4354 "string.m"
  }
#line 784 "string.m"
}

#line 778 "string.m"
void MR_CALL 
mercury__string__pad_right_4_p_0(
#line 778 "string.m"
  MR_String mercury__string__String0_5,
#line 778 "string.m"
  MR_Char mercury__string__PadChar_6,
#line 778 "string.m"
  MR_Integer mercury__string__Width_7,
#line 778 "string.m"
  MR_String * mercury__string__String_8)
#line 778 "string.m"
{
#line 4341 "string.m"
  {
#line 4341 "string.m"
    MR_bool mercury__string__succeeded;
#line 4341 "string.m"
    MR_Integer mercury__string__Length_9;

#line 4342 "string.m"
    {
#line 4342 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    }
#line 4343 "string.m"
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
#line 4347 "string.m"
    if (mercury__string__succeeded)
#line 4344 "string.m"
      {
#line 4344 "string.m"
        MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
#line 4344 "string.m"
        MR_String mercury__string__PadString_11;

#line 4345 "string.m"
        {
#line 4345 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
        }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_right_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__String0_5 ;
	S2 =  mercury__string__PadString_11 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 21898 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
#line 3147 "string.m"
}
#line 4344 "string.m"
      }
#line 4347 "string.m"
    else
#line 4348 "string.m"
      *mercury__string__String_8 = mercury__string__String0_5;
#line 4341 "string.m"
  }
#line 778 "string.m"
}

#line 777 "string.m"
MR_String MR_CALL 
mercury__string__pad_right_3_f_0(
#line 777 "string.m"
  MR_String mercury__string__S1_5,
#line 777 "string.m"
  MR_Char mercury__string__C_6,
#line 777 "string.m"
  MR_Integer mercury__string__N_7)
#line 777 "string.m"
{
#line 4341 "string.m"
  {
#line 4341 "string.m"
    MR_bool mercury__string__succeeded;
#line 4341 "string.m"
    MR_String mercury__string__S2_8;
#line 4341 "string.m"
    MR_Integer mercury__string__Length_13;

#line 4342 "string.m"
    {
#line 4342 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    }
#line 4343 "string.m"
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
#line 4347 "string.m"
    if (mercury__string__succeeded)
#line 4344 "string.m"
      {
#line 4344 "string.m"
        MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
#line 4344 "string.m"
        MR_String mercury__string__PadString_15;

#line 4345 "string.m"
        {
#line 4345 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
        }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_right_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_5 ;
	S2 =  mercury__string__PadString_15 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 21977 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
#line 3147 "string.m"
}
#line 4344 "string.m"
      }
#line 4347 "string.m"
    else
#line 4348 "string.m"
      mercury__string__S2_8 = mercury__string__S1_5;
#line 4341 "string.m"
    return mercury__string__S2_8;
#line 4341 "string.m"
  }
#line 777 "string.m"
}

#line 769 "string.m"
void MR_CALL 
mercury__string__pad_left_4_p_0(
#line 769 "string.m"
  MR_String mercury__string__String0_5,
#line 769 "string.m"
  MR_Char mercury__string__PadChar_6,
#line 769 "string.m"
  MR_Integer mercury__string__Width_7,
#line 769 "string.m"
  MR_String * mercury__string__String_8)
#line 769 "string.m"
{
#line 4328 "string.m"
  {
#line 4328 "string.m"
    MR_bool mercury__string__succeeded;
#line 4328 "string.m"
    MR_Integer mercury__string__Length_9;

#line 4329 "string.m"
    {
#line 4329 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    }
#line 4330 "string.m"
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
#line 4334 "string.m"
    if (mercury__string__succeeded)
#line 4331 "string.m"
      {
#line 4331 "string.m"
        MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
#line 4331 "string.m"
        MR_String mercury__string__PadString_11;

#line 4332 "string.m"
        {
#line 4332 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
        }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_left_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_11 ;
	S2 =  mercury__string__String0_5 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 22058 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
#line 3147 "string.m"
}
#line 4331 "string.m"
      }
#line 4334 "string.m"
    else
#line 4335 "string.m"
      *mercury__string__String_8 = mercury__string__String0_5;
#line 4328 "string.m"
  }
#line 769 "string.m"
}

#line 768 "string.m"
MR_String MR_CALL 
mercury__string__pad_left_3_f_0(
#line 768 "string.m"
  MR_String mercury__string__S1_5,
#line 768 "string.m"
  MR_Char mercury__string__C_6,
#line 768 "string.m"
  MR_Integer mercury__string__N_7)
#line 768 "string.m"
{
#line 4328 "string.m"
  {
#line 4328 "string.m"
    MR_bool mercury__string__succeeded;
#line 4328 "string.m"
    MR_String mercury__string__S2_8;
#line 4328 "string.m"
    MR_Integer mercury__string__Length_13;

#line 4329 "string.m"
    {
#line 4329 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    }
#line 4330 "string.m"
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
#line 4334 "string.m"
    if (mercury__string__succeeded)
#line 4331 "string.m"
      {
#line 4331 "string.m"
        MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
#line 4331 "string.m"
        MR_String mercury__string__PadString_15;

#line 4332 "string.m"
        {
#line 4332 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
        }
#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_left_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_15 ;
	S2 =  mercury__string__S1_5 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 22137 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
#line 3147 "string.m"
}
#line 4331 "string.m"
      }
#line 4334 "string.m"
    else
#line 4335 "string.m"
      mercury__string__S2_8 = mercury__string__S1_5;
#line 4328 "string.m"
    return mercury__string__S2_8;
#line 4328 "string.m"
  }
#line 768 "string.m"
}

#line 760 "string.m"
MR_bool MR_CALL 
mercury__string__to_lower_2_p_1(
#line 760 "string.m"
  MR_String mercury__string__StrIn_3,
#line 760 "string.m"
  MR_String mercury__string__StrOut_4)
#line 760 "string.m"
{
#line 4311 "string.m"
  {
#line 4311 "string.m"
    MR_bool mercury__string__succeeded;
#line 4311 "string.m"
    MR_Word mercury__string__List_5;
#line 4311 "string.m"
    MR_Word mercury__string__ListLow_6;
#line 4311 "string.m"
    MR_String mercury__string__V_7_7;
#line 1440 "string.m"
    MR_String mercury__string__Str0_20;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 22203 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1362 "string.m"
}
#line 4313 "string.m"
    {
#line 4313 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_5, &mercury__string__ListLow_6);
    }
#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_6, &mercury__string__Str0_20);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      mercury__string__V_7_7 = mercury__string__Str0_20;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1441 "string.m"
      }
#line 4314 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__StrOut_4, mercury__string__V_7_7) == 0);
#line 4311 "string.m"
    return mercury__string__succeeded;
#line 4311 "string.m"
  }
#line 760 "string.m"
}

#line 759 "string.m"
void MR_CALL 
mercury__string__to_lower_2_p_0(
#line 759 "string.m"
  MR_String mercury__string__StrIn_3,
#line 759 "string.m"
  MR_String * mercury__string__StrOut_4)
#line 759 "string.m"
{
#line 4311 "string.m"
  {
#line 4311 "string.m"
    MR_bool mercury__string__succeeded;
#line 4311 "string.m"
    MR_Word mercury__string__List_5;
#line 4311 "string.m"
    MR_Word mercury__string__ListLow_6;
#line 1440 "string.m"
    MR_String mercury__string__Str0_19;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 22288 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1362 "string.m"
}
#line 4313 "string.m"
    {
#line 4313 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_5, &mercury__string__ListLow_6);
    }
#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_6, &mercury__string__Str0_19);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      *mercury__string__StrOut_4 = mercury__string__Str0_19;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1441 "string.m"
          return;
        }
#line 1441 "string.m"
      }
#line 4311 "string.m"
  }
#line 759 "string.m"
}

#line 757 "string.m"
MR_String MR_CALL 
mercury__string__to_lower_1_f_0(
#line 757 "string.m"
  MR_String mercury__string__S1_3)
#line 757 "string.m"
{
#line 4311 "string.m"
  {
#line 4311 "string.m"
    MR_bool mercury__string__succeeded;
#line 4311 "string.m"
    MR_String mercury__string__S2_4;
#line 4311 "string.m"
    MR_Word mercury__string__List_7;
#line 4311 "string.m"
    MR_Word mercury__string__ListLow_8;
#line 1440 "string.m"
    MR_String mercury__string__Str0_21;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S1_3 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 22371 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_7  = CharList;
#line 1362 "string.m"
}
#line 4313 "string.m"
    {
#line 4313 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_7, &mercury__string__ListLow_8);
    }
#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_8, &mercury__string__Str0_21);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      mercury__string__S2_4 = mercury__string__Str0_21;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1441 "string.m"
      }
#line 4311 "string.m"
    return mercury__string__S2_4;
#line 4311 "string.m"
  }
#line 757 "string.m"
}

#line 752 "string.m"
MR_bool MR_CALL 
mercury__string__to_upper_2_p_1(
#line 752 "string.m"
  MR_String mercury__string__StrIn_3,
#line 752 "string.m"
  MR_String mercury__string__StrOut_4)
#line 752 "string.m"
{
#line 4296 "string.m"
  {
#line 4296 "string.m"
    MR_bool mercury__string__succeeded;
#line 4296 "string.m"
    MR_Word mercury__string__List_5;
#line 4296 "string.m"
    MR_Word mercury__string__ListUpp_6;
#line 4296 "string.m"
    MR_String mercury__string__V_7_7;
#line 1440 "string.m"
    MR_String mercury__string__Str0_20;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 22456 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1362 "string.m"
}
#line 4298 "string.m"
    {
#line 4298 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_5, &mercury__string__ListUpp_6);
    }
#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_6, &mercury__string__Str0_20);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      mercury__string__V_7_7 = mercury__string__Str0_20;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1441 "string.m"
      }
#line 4299 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__StrOut_4, mercury__string__V_7_7) == 0);
#line 4296 "string.m"
    return mercury__string__succeeded;
#line 4296 "string.m"
  }
#line 752 "string.m"
}

#line 751 "string.m"
void MR_CALL 
mercury__string__to_upper_2_p_0(
#line 751 "string.m"
  MR_String mercury__string__StrIn_3,
#line 751 "string.m"
  MR_String * mercury__string__StrOut_4)
#line 751 "string.m"
{
#line 4296 "string.m"
  {
#line 4296 "string.m"
    MR_bool mercury__string__succeeded;
#line 4296 "string.m"
    MR_Word mercury__string__List_5;
#line 4296 "string.m"
    MR_Word mercury__string__ListUpp_6;
#line 1440 "string.m"
    MR_String mercury__string__Str0_19;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 22541 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1362 "string.m"
}
#line 4298 "string.m"
    {
#line 4298 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_5, &mercury__string__ListUpp_6);
    }
#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_6, &mercury__string__Str0_19);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      *mercury__string__StrOut_4 = mercury__string__Str0_19;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1441 "string.m"
          return;
        }
#line 1441 "string.m"
      }
#line 4296 "string.m"
  }
#line 751 "string.m"
}

#line 749 "string.m"
MR_String MR_CALL 
mercury__string__to_upper_1_f_0(
#line 749 "string.m"
  MR_String mercury__string__S1_3)
#line 749 "string.m"
{
#line 4296 "string.m"
  {
#line 4296 "string.m"
    MR_bool mercury__string__succeeded;
#line 4296 "string.m"
    MR_String mercury__string__S2_4;
#line 4296 "string.m"
    MR_Word mercury__string__List_7;
#line 4296 "string.m"
    MR_Word mercury__string__ListUpp_8;
#line 1440 "string.m"
    MR_String mercury__string__Str0_21;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S1_3 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 22624 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_7  = CharList;
#line 1362 "string.m"
}
#line 4298 "string.m"
    {
#line 4298 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_7, &mercury__string__ListUpp_8);
    }
#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_8, &mercury__string__Str0_21);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      mercury__string__S2_4 = mercury__string__Str0_21;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1441 "string.m"
      }
#line 4296 "string.m"
    return mercury__string__S2_4;
#line 4296 "string.m"
  }
#line 749 "string.m"
}

#line 744 "string.m"
void MR_CALL 
mercury__string__uncapitalize_first_2_p_0(
#line 744 "string.m"
  MR_String mercury__string__S0_3,
#line 744 "string.m"
  MR_String * mercury__string__S_4)
#line 744 "string.m"
{
#line 4289 "string.m"
  {
#line 4289 "string.m"
    MR_bool mercury__string__succeeded;
#line 4289 "string.m"
    MR_Char mercury__string__C_5;
#line 4289 "string.m"
    MR_String mercury__string__S1_6;

#line 3625 "string.m"
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
#line 3625 "string.m"
{
    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    if (First < 1) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str += pos;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_ALLOC_ID);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}
#line 22708 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
#line 3625 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4289 "string.m"
    if (mercury__string__succeeded)
#line 4287 "string.m"
      {
#line 4287 "string.m"
        MR_Char mercury__string__LowerC_7;
#line 98 "char.opt"
        MR_Char mercury__string__LowerChar_5_10;

#line 95 "char.opt"
        {
#line 95 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_1(&mercury__string__LowerChar_5_10, mercury__string__C_5);
        }
#line 98 "char.opt"
        if (mercury__string__succeeded)
#line 97 "char.opt"
          mercury__string__LowerC_7 = mercury__string__LowerChar_5_10;
#line 98 "char.opt"
        else
#line 99 "char.opt"
          mercury__string__LowerC_7 = mercury__string__C_5;
#line 3697 "string.m"
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__LowerC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
#line 3697 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 22760 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
#line 3697 "string.m"
}
#line 4287 "string.m"
      }
#line 4289 "string.m"
    else
#line 4290 "string.m"
      *mercury__string__S_4 = mercury__string__S0_3;
#line 4289 "string.m"
  }
#line 744 "string.m"
}

#line 743 "string.m"
MR_String MR_CALL 
mercury__string__uncapitalize_first_1_f_0(
#line 743 "string.m"
  MR_String mercury__string__S1_3)
#line 743 "string.m"
{
#line 4283 "string.m"
  {
#line 4283 "string.m"
    MR_bool mercury__string__succeeded;
#line 4283 "string.m"
    MR_String mercury__string__S2_4;

#line 4283 "string.m"
    {
#line 4283 "string.m"
      mercury__string__uncapitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    }
#line 4283 "string.m"
    return mercury__string__S2_4;
#line 4283 "string.m"
  }
#line 743 "string.m"
}

#line 738 "string.m"
void MR_CALL 
mercury__string__capitalize_first_2_p_0(
#line 738 "string.m"
  MR_String mercury__string__S0_3,
#line 738 "string.m"
  MR_String * mercury__string__S_4)
#line 738 "string.m"
{
#line 4278 "string.m"
  {
#line 4278 "string.m"
    MR_bool mercury__string__succeeded;
#line 4278 "string.m"
    MR_Char mercury__string__C_5;
#line 4278 "string.m"
    MR_String mercury__string__S1_6;

#line 3625 "string.m"
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
#line 3625 "string.m"
{
    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    if (First < 1) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str += pos;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_ALLOC_ID);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}
#line 22849 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
#line 3625 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4278 "string.m"
    if (mercury__string__succeeded)
#line 4276 "string.m"
      {
#line 4276 "string.m"
        MR_Char mercury__string__UpperC_7;
#line 88 "char.opt"
        MR_Char mercury__string__UpperChar_5_10;

#line 85 "char.opt"
        {
#line 85 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_0(mercury__string__C_5, &mercury__string__UpperChar_5_10);
        }
#line 88 "char.opt"
        if (mercury__string__succeeded)
#line 87 "char.opt"
          mercury__string__UpperC_7 = mercury__string__UpperChar_5_10;
#line 88 "char.opt"
        else
#line 89 "char.opt"
          mercury__string__UpperC_7 = mercury__string__C_5;
#line 3697 "string.m"
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__UpperC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
#line 3697 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 22901 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
#line 3697 "string.m"
}
#line 4276 "string.m"
      }
#line 4278 "string.m"
    else
#line 4279 "string.m"
      *mercury__string__S_4 = mercury__string__S0_3;
#line 4278 "string.m"
  }
#line 738 "string.m"
}

#line 737 "string.m"
MR_String MR_CALL 
mercury__string__capitalize_first_1_f_0(
#line 737 "string.m"
  MR_String mercury__string__S1_3)
#line 737 "string.m"
{
#line 4272 "string.m"
  {
#line 4272 "string.m"
    MR_bool mercury__string__succeeded;
#line 4272 "string.m"
    MR_String mercury__string__S2_4;

#line 4272 "string.m"
    {
#line 4272 "string.m"
      mercury__string__capitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    }
#line 4272 "string.m"
    return mercury__string__S2_4;
#line 4272 "string.m"
  }
#line 737 "string.m"
}

#line 727 "string.m"
MR_String MR_CALL 
mercury__string__remove_suffix_if_present_2_f_0(
#line 727 "string.m"
  MR_String mercury__string__Suffix_4,
#line 727 "string.m"
  MR_String mercury__string__String_5)
#line 727 "string.m"
{
#line 4257 "string.m"
  {
#line 4257 "string.m"
    MR_bool mercury__string__succeeded;
#line 4257 "string.m"
    MR_String mercury__string__Out_6;
#line 4257 "string.m"
    MR_Integer mercury__string__LeftCount_7;
#line 4257 "string.m"
    MR_String mercury__string__LeftString_8;
#line 4257 "string.m"
    MR_String mercury__string__RightString_9;
#line 4257 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4257 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 22984 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2398 "string.m"
}
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_4 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 23004 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2398 "string.m"
}
#line 4258 "string.m"
    mercury__string__LeftCount_7 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 4259 "string.m"
    {
#line 4259 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_5, mercury__string__LeftCount_7, &mercury__string__LeftString_8, &mercury__string__RightString_9);
    }
#line 4260 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__RightString_9, mercury__string__Suffix_4) == 0);
#line 4262 "string.m"
    if (mercury__string__succeeded)
#line 4261 "string.m"
      mercury__string__Out_6 = mercury__string__LeftString_8;
#line 4262 "string.m"
    else
#line 4263 "string.m"
      mercury__string__Out_6 = mercury__string__String_5;
#line 4257 "string.m"
    return mercury__string__Out_6;
#line 4257 "string.m"
  }
#line 727 "string.m"
}

#line 722 "string.m"
MR_String MR_CALL 
mercury__string__det_remove_suffix_2_f_0(
#line 722 "string.m"
  MR_String mercury__string__String_4,
#line 722 "string.m"
  MR_String mercury__string__Suffix_5)
#line 722 "string.m"
{
#line 4253 "string.m"
  {
#line 4253 "string.m"
    MR_bool mercury__string__succeeded;
#line 4253 "string.m"
    MR_String mercury__string__StringWithoutSuffix_6;
#line 4253 "string.m"
    MR_String mercury__string__StringWithoutSuffixPrime_7;

#line 4251 "string.m"
    {
#line 4251 "string.m"
      mercury__string__succeeded = mercury__string__remove_suffix_3_p_0(mercury__string__String_4, mercury__string__Suffix_5, &mercury__string__StringWithoutSuffixPrime_7);
    }
#line 4253 "string.m"
    if (mercury__string__succeeded)
#line 4252 "string.m"
      mercury__string__StringWithoutSuffix_6 = mercury__string__StringWithoutSuffixPrime_7;
#line 4253 "string.m"
    else
#line 4254 "string.m"
      {
#line 4254 "string.m"
        {
#line 4254 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_remove_suffix: string does not have given suffix");
        }
#line 4254 "string.m"
      }
#line 4253 "string.m"
    return mercury__string__StringWithoutSuffix_6;
#line 4253 "string.m"
  }
#line 722 "string.m"
}

#line 717 "string.m"
MR_bool MR_CALL 
mercury__string__remove_suffix_3_p_0(
#line 717 "string.m"
  MR_String mercury__string__String_4,
#line 717 "string.m"
  MR_String mercury__string__Suffix_5,
#line 717 "string.m"
  MR_String * mercury__string__StringWithoutSuffix_6)
#line 717 "string.m"
{
#line 4246 "string.m"
  {
#line 4246 "string.m"
    MR_bool mercury__string__succeeded;
#line 4246 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4246 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4246 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4246 "string.m"
    MR_Integer mercury__string__Len_12;
#line 4246 "string.m"
    MR_Integer mercury__string__PreLen_13;
#line 4246 "string.m"
    MR_Integer mercury__string__V_14_14;
#line 4246 "string.m"
    MR_Integer mercury__string__V_15_15;
#line 3854 "string.m"
    MR_String mercury__string___RightString_43;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 23125 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2398 "string.m"
}
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 23145 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_13  = Length;
#line 2398 "string.m"
}
#line 4206 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_13 <= mercury__string__Len_12);
#line 4246 "string.m"
    if (mercury__string__succeeded)
#line 4246 "string.m"
      {
#line 4207 "string.m"
        mercury__string__V_14_14 = (MR_Integer) 0;
#line 4207 "string.m"
        mercury__string__V_15_15 = (mercury__string__Len_12 - mercury__string__PreLen_13);
#line 4207 "string.m"
        {
#line 4207 "string.m"
          mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_4, mercury__string__Suffix_5, mercury__string__V_14_14, mercury__string__V_15_15, mercury__string__PreLen_13);
        }
#line 4246 "string.m"
        if (mercury__string__succeeded)
#line 4246 "string.m"
          {
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 23184 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = Length;
#line 2398 "string.m"
}
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 23204 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = Length;
#line 2398 "string.m"
}
#line 4248 "string.m"
            mercury__string__V_7_7 = (mercury__string__V_8_8 - mercury__string__V_9_9);
#line 3854 "string.m"
            {
#line 3854 "string.m"
              mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__V_7_7, mercury__string__StringWithoutSuffix_6, &mercury__string___RightString_43);
            }
#line 3854 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4246 "string.m"
          }
#line 4246 "string.m"
      }
#line 4246 "string.m"
    return mercury__string__succeeded;
#line 4246 "string.m"
  }
#line 717 "string.m"
}

#line 710 "string.m"
MR_String MR_CALL 
mercury__string__remove_prefix_if_present_2_f_0(
#line 710 "string.m"
  MR_String mercury__string__Prefix_4,
#line 710 "string.m"
  MR_String mercury__string__String_5)
#line 710 "string.m"
{
#line 4242 "string.m"
  {
#line 4242 "string.m"
    MR_bool mercury__string__succeeded;
#line 4242 "string.m"
    MR_String mercury__string__Out_6;
#line 4242 "string.m"
    MR_String mercury__string__Suffix_7;

#line 3095 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_prefix_if_present_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
#line 3095 "string.m"
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}
#line 23279 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Suffix_7  = S2;
#line 3095 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4242 "string.m"
    if (mercury__string__succeeded)
#line 4241 "string.m"
      mercury__string__Out_6 = mercury__string__Suffix_7;
#line 4242 "string.m"
    else
#line 4243 "string.m"
      mercury__string__Out_6 = mercury__string__String_5;
#line 4242 "string.m"
    return mercury__string__Out_6;
#line 4242 "string.m"
  }
#line 710 "string.m"
}

#line 705 "string.m"
MR_bool MR_CALL 
mercury__string__remove_prefix_3_p_0(
#line 705 "string.m"
  MR_String mercury__string__Prefix_4,
#line 705 "string.m"
  MR_String mercury__string__String_5,
#line 705 "string.m"
  MR_String * mercury__string__Suffix_6)
#line 705 "string.m"
{
#line 3091 "string.m"
  {
#line 3091 "string.m"
    MR_bool mercury__string__succeeded;

#line 3095 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_prefix_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
#line 3095 "string.m"
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}
#line 23350 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Suffix_6  = S2;
#line 3095 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3091 "string.m"
    return mercury__string__succeeded;
#line 3091 "string.m"
  }
#line 705 "string.m"
}

#line 698 "string.m"
void MR_CALL 
mercury__string__suffix_2_p_1(
#line 698 "string.m"
  MR_String mercury__string__String_1,
#line 698 "string.m"
  MR_String * mercury__string__Suffix_2,
#line 698 "string.m"
  MR_Cont mercury__string__cont,
#line 698 "string.m"
  void * mercury__string__cont_env_ptr)
#line 698 "string.m"
{
#line 4208 "string.m"
  {
#line 4208 "string.m"
    MR_bool mercury__string__succeeded;
#line 4208 "string.m"
    MR_Integer mercury__string__Len_11;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 23400 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_11  = Length;
#line 2398 "string.m"
}
#line 4210 "string.m"
    {
#line 4210 "string.m"
      mercury__string__suffix_2_ioii_4_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__Len_11, mercury__string__Len_11, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4210 "string.m"
      return;
    }
#line 4208 "string.m"
  }
#line 698 "string.m"
}

#line 697 "string.m"
MR_bool MR_CALL 
mercury__string__suffix_2_p_0(
#line 697 "string.m"
  MR_String mercury__string__String_1,
#line 697 "string.m"
  MR_String mercury__string__Suffix_2)
#line 697 "string.m"
{
#line 4203 "string.m"
  {
#line 4203 "string.m"
    MR_bool mercury__string__succeeded;
#line 4203 "string.m"
    MR_Integer mercury__string__Len_5;
#line 4203 "string.m"
    MR_Integer mercury__string__PreLen_6;
#line 4203 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4203 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 23454 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
#line 2398 "string.m"
}
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_2 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 23474 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
#line 2398 "string.m"
}
#line 4206 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
#line 4203 "string.m"
    if (mercury__string__succeeded)
#line 4203 "string.m"
      {
#line 4207 "string.m"
        mercury__string__V_7_7 = (MR_Integer) 0;
#line 4207 "string.m"
        mercury__string__V_8_8 = (mercury__string__Len_5 - mercury__string__PreLen_6);
#line 4207 "string.m"
        {
#line 4207 "string.m"
          return mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__V_7_7, mercury__string__V_8_8, mercury__string__PreLen_6);
        }
#line 4203 "string.m"
      }
#line 4203 "string.m"
    return mercury__string__succeeded;
#line 4203 "string.m"
  }
#line 697 "string.m"
}

#line 691 "string.m"
void MR_CALL 
mercury__string__prefix_2_p_1(
#line 691 "string.m"
  MR_String mercury__string__String_1,
#line 691 "string.m"
  MR_String * mercury__string__Prefix_2,
#line 691 "string.m"
  MR_Cont mercury__string__cont,
#line 691 "string.m"
  void * mercury__string__cont_env_ptr)
#line 691 "string.m"
{
#line 4177 "string.m"
  {
#line 4177 "string.m"
    MR_bool mercury__string__succeeded;

#line 4178 "string.m"
    {
#line 4178 "string.m"
      mercury__string__prefix_2_ioi_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, (MR_Integer) 0, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4178 "string.m"
      return;
    }
#line 4177 "string.m"
  }
#line 691 "string.m"
}

#line 690 "string.m"
MR_bool MR_CALL 
mercury__string__prefix_2_p_0(
#line 690 "string.m"
  MR_String mercury__string__String_1,
#line 690 "string.m"
  MR_String mercury__string__Prefix_2)
#line 690 "string.m"
{
#line 4172 "string.m"
  {
#line 4172 "string.m"
    MR_bool mercury__string__succeeded;
#line 4172 "string.m"
    MR_Integer mercury__string__Len_5;
#line 4172 "string.m"
    MR_Integer mercury__string__PreLen_6;
#line 4172 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4172 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 23570 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
#line 2398 "string.m"
}
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Prefix_2 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 23590 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
#line 2398 "string.m"
}
#line 4175 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
#line 4172 "string.m"
    if (mercury__string__succeeded)
#line 4172 "string.m"
      {
#line 4176 "string.m"
        mercury__string__V_8_8 = (MR_Integer) 1;
#line 4176 "string.m"
        mercury__string__V_7_7 = (mercury__string__PreLen_6 - mercury__string__V_8_8);
#line 4176 "string.m"
        {
#line 4176 "string.m"
          return mercury__string__succeeded = mercury__string__prefix_2_iii_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, mercury__string__V_7_7);
        }
#line 4172 "string.m"
      }
#line 4172 "string.m"
    return mercury__string__succeeded;
#line 4172 "string.m"
  }
#line 690 "string.m"
}

#line 679 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_string_2_f_0(
#line 679 "string.m"
  MR_String mercury__string__Needle_4,
#line 679 "string.m"
  MR_String mercury__string__Total_5)
#line 679 "string.m"
{
#line 4149 "string.m"
  {
#line 4149 "string.m"
    MR_bool mercury__string__succeeded;
#line 4149 "string.m"
    MR_Word mercury__string__HeadVar__3_3;
#line 4149 "string.m"
    MR_Integer mercury__string__V_7_7;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Needle_4 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 23652 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2398 "string.m"
}
#line 4150 "string.m"
    {
#line 4150 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__split_at_string_loop_4_f_0((MR_Integer) 0, mercury__string__V_7_7, mercury__string__Needle_4, mercury__string__Total_5);
    }
#line 4149 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4149 "string.m"
  }
#line 679 "string.m"
}

#line 669 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_char_2_f_0(
#line 669 "string.m"
  MR_Char mercury__string__C_4,
#line 669 "string.m"
  MR_String mercury__string__String_5)
#line 669 "string.m"
{
#line 4146 "string.m"
  {
#line 4146 "string.m"
    MR_bool mercury__string__succeeded;
#line 4146 "string.m"
    MR_Word mercury__string__HeadVar__3_3;
#line 4146 "string.m"
    MR_Integer mercury__string__Len_12;
#line 4146 "string.m"
    MR_Word mercury__string__V_14_14;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_char_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 23704 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2398 "string.m"
}
#line 4116 "string.m"
    mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4116 "string.m"
    {
#line 4116 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0(mercury__string__C_4, mercury__string__String_5, mercury__string__Len_12, mercury__string__Len_12, mercury__string__V_14_14, &mercury__string__HeadVar__3_3);
    }
#line 4146 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4146 "string.m"
  }
#line 669 "string.m"
}

#line 664 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_separator_2_f_0(
#line 664 "string.m"
  MR_Word mercury__string__DelimP_4,
#line 664 "string.m"
  MR_String mercury__string__String_5)
#line 664 "string.m"
{
#line 4114 "string.m"
  {
#line 4114 "string.m"
    MR_bool mercury__string__succeeded;
#line 4114 "string.m"
    MR_Word mercury__string__Substrings_6;
#line 4114 "string.m"
    MR_Integer mercury__string__Len_7;
#line 4114 "string.m"
    MR_Word mercury__string__V_9_9;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_separator_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 23758 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
#line 2398 "string.m"
}
#line 4116 "string.m"
    mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4116 "string.m"
    {
#line 4116 "string.m"
      mercury__string__split_at_separator_loop_6_p_0(mercury__string__DelimP_4, mercury__string__String_5, mercury__string__Len_7, mercury__string__Len_7, mercury__string__V_9_9, &mercury__string__Substrings_6);
    }
#line 4114 "string.m"
    return mercury__string__Substrings_6;
#line 4114 "string.m"
  }
#line 664 "string.m"
}

#line 652 "string.m"
MR_Word MR_CALL 
mercury__string__words_1_f_0(
#line 652 "string.m"
  MR_String mercury__string__String_3)
#line 652 "string.m"
{
#line 4077 "string.m"
  {
#line 4077 "string.m"
    MR_bool mercury__string__succeeded;
#line 4077 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4077 "string.m"
    MR_Integer mercury__string__WordStart_10;

#line 4074 "string.m"
    {
#line 4074 "string.m"
      mercury__string__next_boundary__ho35_4_p_0(mercury__string__String_3, (MR_Integer) 0, &mercury__string__WordStart_10);
    }
#line 4075 "string.m"
    {
#line 4075 "string.m"
      mercury__string__words_loop__ho36_4_p_0(mercury__string__String_3, mercury__string__WordStart_10, &mercury__string__HeadVar__2_2);
    }
#line 4077 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4077 "string.m"
  }
#line 652 "string.m"
}

#line 647 "string.m"
MR_Word MR_CALL 
mercury__string__words_separator_2_f_0(
#line 647 "string.m"
  MR_Word mercury__string__SepP_4,
#line 647 "string.m"
  MR_String mercury__string__String_5)
#line 647 "string.m"
{
#line 4073 "string.m"
  {
#line 4073 "string.m"
    MR_bool mercury__string__succeeded;
#line 4073 "string.m"
    MR_Word mercury__string__Words_6;
#line 4073 "string.m"
    MR_Integer mercury__string__WordStart_7;

#line 4074 "string.m"
    {
#line 4074 "string.m"
      mercury__string__next_boundary_4_p_0(mercury__string__SepP_4, mercury__string__String_5, (MR_Integer) 0, &mercury__string__WordStart_7);
    }
#line 4075 "string.m"
    {
#line 4075 "string.m"
      mercury__string__words_loop_4_p_0(mercury__string__SepP_4, mercury__string__String_5, mercury__string__WordStart_7, &mercury__string__Words_6);
    }
#line 4073 "string.m"
    return mercury__string__Words_6;
#line 4073 "string.m"
  }
#line 647 "string.m"
}

#line 634 "string.m"
void MR_CALL 
mercury__string__unsafe_substring_4_p_0(
#line 634 "string.m"
  MR_String mercury__string__Str_5,
#line 634 "string.m"
  MR_Integer mercury__string__Start_6,
#line 634 "string.m"
  MR_Integer mercury__string__Count_7,
#line 634 "string.m"
  MR_String * mercury__string__SubString_8)
#line 634 "string.m"
{
#line 4068 "string.m"
  {
#line 4068 "string.m"
    MR_bool mercury__string__succeeded;
#line 4068 "string.m"
    MR_Integer mercury__string__V_9_9 = (mercury__string__Start_6 + mercury__string__Count_7);

#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_substring_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_5 ;
	Start =  mercury__string__Start_6 ;
	End =  mercury__string__V_9_9 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 23889 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_8  = SubString;
#line 4037 "string.m"
}
#line 4068 "string.m"
  }
#line 634 "string.m"
}

#line 633 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_substring_3_f_0(
#line 633 "string.m"
  MR_String mercury__string__Str_5,
#line 633 "string.m"
  MR_Integer mercury__string__Start_6,
#line 633 "string.m"
  MR_Integer mercury__string__Count_7)
#line 633 "string.m"
{
#line 4065 "string.m"
  {
#line 4065 "string.m"
    MR_bool mercury__string__succeeded;
#line 4065 "string.m"
    MR_String mercury__string__SubString_8;
#line 4065 "string.m"
    MR_Integer mercury__string__V_9_9 = (mercury__string__Start_6 + mercury__string__Count_7);

#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_substring_3_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_5 ;
	Start =  mercury__string__Start_6 ;
	End =  mercury__string__V_9_9 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 23943 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
#line 4037 "string.m"
}
#line 4065 "string.m"
    return mercury__string__SubString_8;
#line 4065 "string.m"
  }
#line 633 "string.m"
}

#line 626 "string.m"
void MR_CALL 
mercury__string__unsafe_between_4_p_0(
#line 626 "string.m"
  MR_String mercury__string__Str_1,
#line 626 "string.m"
  MR_Integer mercury__string__Start_2,
#line 626 "string.m"
  MR_Integer mercury__string__End_3,
#line 626 "string.m"
  MR_String * mercury__string__SubString_4)
#line 626 "string.m"
{
#line 4033 "string.m"
  {
#line 4033 "string.m"
    MR_bool mercury__string__succeeded;

#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_between_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_1 ;
	Start =  mercury__string__Start_2 ;
	End =  mercury__string__End_3 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 23997 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
#line 4037 "string.m"
}
#line 4033 "string.m"
  }
#line 626 "string.m"
}

#line 625 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_between_3_f_0(
#line 625 "string.m"
  MR_String mercury__string__Str_5,
#line 625 "string.m"
  MR_Integer mercury__string__Start_6,
#line 625 "string.m"
  MR_Integer mercury__string__End_7)
#line 625 "string.m"
{
#line 4033 "string.m"
  {
#line 4033 "string.m"
    MR_bool mercury__string__succeeded;
#line 4033 "string.m"
    MR_String mercury__string__SubString_8;

#line 4037 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_between_3_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_5 ;
	Start =  mercury__string__Start_6 ;
	End =  mercury__string__End_7 ;
		{
#line 4037 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 24049 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
#line 4037 "string.m"
}
#line 4033 "string.m"
    return mercury__string__SubString_8;
#line 4033 "string.m"
  }
#line 625 "string.m"
}

#line 612 "string.m"
void MR_CALL 
mercury__string__between_codepoints_4_p_0(
#line 612 "string.m"
  MR_String mercury__string__Str_5,
#line 612 "string.m"
  MR_Integer mercury__string__Start_6,
#line 612 "string.m"
  MR_Integer mercury__string__End_7,
#line 612 "string.m"
  MR_String * mercury__string__SubString_8)
#line 612 "string.m"
{
#line 4015 "string.m"
  {
#line 4015 "string.m"
    MR_bool mercury__string__succeeded;
#line 4015 "string.m"
    MR_Integer mercury__string__StartOffset_10;
#line 4015 "string.m"
    MR_Integer mercury__string__EndOffset_12;
#line 4018 "string.m"
    MR_Integer mercury__string__StartOffset0_9;
#line 4023 "string.m"
    MR_Integer mercury__string__EndOffset0_11;

#line 2589 "string.m"
    {
#line 2589 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Start_6, &mercury__string__StartOffset0_9);
    }
#line 4018 "string.m"
    if (mercury__string__succeeded)
#line 4017 "string.m"
      mercury__string__StartOffset_10 = mercury__string__StartOffset0_9;
#line 4018 "string.m"
    else
#line 4019 "string.m"
      mercury__string__StartOffset_10 = (MR_Integer) 0;
#line 2589 "string.m"
    {
#line 2589 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_7, &mercury__string__EndOffset0_11);
    }
#line 4023 "string.m"
    if (mercury__string__succeeded)
#line 4022 "string.m"
      mercury__string__EndOffset_12 = mercury__string__EndOffset0_11;
#line 4023 "string.m"
    else
#line 2394 "string.m"
      {
#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__between_codepoints_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 24128 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndOffset_12  = Length;
#line 2398 "string.m"
}
#line 2394 "string.m"
      }
#line 4026 "string.m"
    {
#line 4026 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__StartOffset_10, mercury__string__EndOffset_12, mercury__string__SubString_8);
#line 4026 "string.m"
      return;
    }
#line 4015 "string.m"
  }
#line 612 "string.m"
}

#line 610 "string.m"
MR_String MR_CALL 
mercury__string__between_codepoints_3_f_0(
#line 610 "string.m"
  MR_String mercury__string__Str_5,
#line 610 "string.m"
  MR_Integer mercury__string__Start_6,
#line 610 "string.m"
  MR_Integer mercury__string__End_7)
#line 610 "string.m"
{
#line 4013 "string.m"
  {
#line 4013 "string.m"
    MR_bool mercury__string__succeeded;
#line 4013 "string.m"
    MR_String mercury__string__SubString_8;

#line 4013 "string.m"
    {
#line 4013 "string.m"
      mercury__string__between_codepoints_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    }
#line 4013 "string.m"
    return mercury__string__SubString_8;
#line 4013 "string.m"
  }
#line 610 "string.m"
}

#line 599 "string.m"
void MR_CALL 
mercury__string__substring_4_p_0(
#line 599 "string.m"
  MR_String mercury__string__Str_5,
#line 599 "string.m"
  MR_Integer mercury__string__Start_6,
#line 599 "string.m"
  MR_Integer mercury__string__Count_7,
#line 599 "string.m"
  MR_String * mercury__string__SubString_8)
#line 599 "string.m"
{
#line 3991 "string.m"
  {
#line 3991 "string.m"
    MR_bool mercury__string__succeeded;
#line 3991 "string.m"
    MR_Integer mercury__string__ClampStart_9;
#line 3991 "string.m"
    MR_Integer mercury__string__ClampEnd_10;

#line 3992 "string.m"
    {
#line 3992 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_9, &mercury__string__ClampEnd_10);
    }
#line 3993 "string.m"
    {
#line 3993 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_9, mercury__string__ClampEnd_10, mercury__string__SubString_8);
#line 3993 "string.m"
      return;
    }
#line 3991 "string.m"
  }
#line 599 "string.m"
}

#line 598 "string.m"
MR_String MR_CALL 
mercury__string__substring_3_f_0(
#line 598 "string.m"
  MR_String mercury__string__Str_5,
#line 598 "string.m"
  MR_Integer mercury__string__Start_6,
#line 598 "string.m"
  MR_Integer mercury__string__Count_7)
#line 598 "string.m"
{
#line 3991 "string.m"
  {
#line 3991 "string.m"
    MR_bool mercury__string__succeeded;
#line 3991 "string.m"
    MR_String mercury__string__SubString_8;
#line 3991 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 3991 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 3992 "string.m"
    {
#line 3992 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 3993 "string.m"
    {
#line 3993 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, &mercury__string__SubString_8);
    }
#line 3991 "string.m"
    return mercury__string__SubString_8;
#line 3991 "string.m"
  }
#line 598 "string.m"
}

#line 591 "string.m"
void MR_CALL 
mercury__string__between_4_p_0(
#line 591 "string.m"
  MR_String mercury__string__Str_1,
#line 591 "string.m"
  MR_Integer mercury__string__Start_2,
#line 591 "string.m"
  MR_Integer mercury__string__End_3,
#line 591 "string.m"
  MR_String * mercury__string__SubString_4)
#line 591 "string.m"
{
#line 3883 "string.m"
  {
#line 3883 "string.m"
    MR_bool mercury__string__succeeded;

#line 3887 "string.m"
{
#define MR_PROC_LABEL mercury__string__between_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_1 ;
	Start =  mercury__string__Start_2 ;
	End =  mercury__string__End_3 ;
		{
#line 3887 "string.m"
{
    MR_Integer  len;
    MR_Integer  Count;

    if (Start < 0) Start = 0;
    if (End <= Start) {
        MR_make_aligned_string(SubString, "");
    } else {
        len = strlen(Str);
        if (Start > len) {
            Start = len;
        }
        if (End > len) {
            End = len;
        }
        Count = End - Start;
        MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
        MR_memcpy(SubString, Str + Start, Count);
        SubString[Count] = '\0';
    }
}
#line 24310 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
#line 3887 "string.m"
}
#line 3883 "string.m"
  }
#line 591 "string.m"
}

#line 590 "string.m"
MR_String MR_CALL 
mercury__string__between_3_f_0(
#line 590 "string.m"
  MR_String mercury__string__Str_5,
#line 590 "string.m"
  MR_Integer mercury__string__Start_6,
#line 590 "string.m"
  MR_Integer mercury__string__End_7)
#line 590 "string.m"
{
#line 3881 "string.m"
  {
#line 3881 "string.m"
    MR_bool mercury__string__succeeded;
#line 3881 "string.m"
    MR_String mercury__string__SubString_8;

#line 3881 "string.m"
    {
#line 3881 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    }
#line 3881 "string.m"
    return mercury__string__SubString_8;
#line 3881 "string.m"
  }
#line 590 "string.m"
}

#line 579 "string.m"
void MR_CALL 
mercury__string__right_by_codepoint_3_p_0(
#line 579 "string.m"
  MR_String mercury__string__String_4,
#line 579 "string.m"
  MR_Integer mercury__string__RightCount_5,
#line 579 "string.m"
  MR_String * mercury__string__RightString_6)
#line 579 "string.m"
{
#line 3873 "string.m"
  {
#line 3873 "string.m"
    MR_bool mercury__string__succeeded;
#line 3873 "string.m"
    MR_Integer mercury__string__TotalCount_7;
#line 3873 "string.m"
    MR_Integer mercury__string__LeftCount_8;
#line 3876 "string.m"
    MR_String mercury__string___LeftString_9;

#line 3874 "string.m"
    {
#line 3874 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_7);
    }
#line 3875 "string.m"
    mercury__string__LeftCount_8 = (mercury__string__TotalCount_7 - mercury__string__RightCount_5);
#line 3876 "string.m"
    {
#line 3876 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
    }
#line 3873 "string.m"
  }
#line 579 "string.m"
}

#line 578 "string.m"
MR_String MR_CALL 
mercury__string__right_by_codepoint_2_f_0(
#line 578 "string.m"
  MR_String mercury__string__String_4,
#line 578 "string.m"
  MR_Integer mercury__string__RightCount_5)
#line 578 "string.m"
{
#line 3873 "string.m"
  {
#line 3873 "string.m"
    MR_bool mercury__string__succeeded;
#line 3873 "string.m"
    MR_String mercury__string__RightString_6;
#line 3873 "string.m"
    MR_Integer mercury__string__TotalCount_10;
#line 3873 "string.m"
    MR_Integer mercury__string__LeftCount_11;
#line 3876 "string.m"
    MR_String mercury__string___LeftString_12;

#line 3874 "string.m"
    {
#line 3874 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_10);
    }
#line 3875 "string.m"
    mercury__string__LeftCount_11 = (mercury__string__TotalCount_10 - mercury__string__RightCount_5);
#line 3876 "string.m"
    {
#line 3876 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__RightString_6);
    }
#line 3873 "string.m"
    return mercury__string__RightString_6;
#line 3873 "string.m"
  }
#line 578 "string.m"
}

#line 569 "string.m"
void MR_CALL 
mercury__string__right_3_p_0(
#line 569 "string.m"
  MR_String mercury__string__String_4,
#line 569 "string.m"
  MR_Integer mercury__string__RightCount_5,
#line 569 "string.m"
  MR_String * mercury__string__RightString_6)
#line 569 "string.m"
{
#line 3865 "string.m"
  {
#line 3865 "string.m"
    MR_bool mercury__string__succeeded;
#line 3865 "string.m"
    MR_Integer mercury__string__Length_7;
#line 3865 "string.m"
    MR_Integer mercury__string__LeftCount_8;
#line 3868 "string.m"
    MR_String mercury__string___LeftString_9;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__right_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 24467 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
#line 2398 "string.m"
}
#line 3867 "string.m"
    mercury__string__LeftCount_8 = (mercury__string__Length_7 - mercury__string__RightCount_5);
#line 3868 "string.m"
    {
#line 3868 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
    }
#line 3865 "string.m"
  }
#line 569 "string.m"
}

#line 568 "string.m"
MR_String MR_CALL 
mercury__string__right_2_f_0(
#line 568 "string.m"
  MR_String mercury__string__S1_4,
#line 568 "string.m"
  MR_Integer mercury__string__N_5)
#line 568 "string.m"
{
#line 3865 "string.m"
  {
#line 3865 "string.m"
    MR_bool mercury__string__succeeded;
#line 3865 "string.m"
    MR_String mercury__string__S2_6;
#line 3865 "string.m"
    MR_Integer mercury__string__Length_10;
#line 3865 "string.m"
    MR_Integer mercury__string__LeftCount_11;
#line 3868 "string.m"
    MR_String mercury__string___LeftString_12;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__right_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S1_4 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 24521 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_10  = Length;
#line 2398 "string.m"
}
#line 3867 "string.m"
    mercury__string__LeftCount_11 = (mercury__string__Length_10 - mercury__string__N_5);
#line 3868 "string.m"
    {
#line 3868 "string.m"
      mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__S2_6);
    }
#line 3865 "string.m"
    return mercury__string__S2_6;
#line 3865 "string.m"
  }
#line 568 "string.m"
}

#line 560 "string.m"
void MR_CALL 
mercury__string__left_by_codepoint_3_p_0(
#line 560 "string.m"
  MR_String mercury__string__String_4,
#line 560 "string.m"
  MR_Integer mercury__string__Count_5,
#line 560 "string.m"
  MR_String * mercury__string__LeftString_6)
#line 560 "string.m"
{
#line 3860 "string.m"
  {
#line 3860 "string.m"
    MR_bool mercury__string__succeeded;
#line 3860 "string.m"
    MR_String mercury__string___RightString_7;

#line 3860 "string.m"
    {
#line 3860 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
    }
#line 3860 "string.m"
  }
#line 560 "string.m"
}

#line 559 "string.m"
MR_String MR_CALL 
mercury__string__left_by_codepoint_2_f_0(
#line 559 "string.m"
  MR_String mercury__string__String_4,
#line 559 "string.m"
  MR_Integer mercury__string__Count_5)
#line 559 "string.m"
{
#line 3860 "string.m"
  {
#line 3860 "string.m"
    MR_bool mercury__string__succeeded;
#line 3860 "string.m"
    MR_String mercury__string__LeftString_6;
#line 3860 "string.m"
    MR_String mercury__string___RightString_10;

#line 3860 "string.m"
    {
#line 3860 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, &mercury__string__LeftString_6, &mercury__string___RightString_10);
    }
#line 3860 "string.m"
    return mercury__string__LeftString_6;
#line 3860 "string.m"
  }
#line 559 "string.m"
}

#line 550 "string.m"
void MR_CALL 
mercury__string__left_3_p_0(
#line 550 "string.m"
  MR_String mercury__string__String_4,
#line 550 "string.m"
  MR_Integer mercury__string__Count_5,
#line 550 "string.m"
  MR_String * mercury__string__LeftString_6)
#line 550 "string.m"
{
#line 3854 "string.m"
  {
#line 3854 "string.m"
    MR_bool mercury__string__succeeded;
#line 3854 "string.m"
    MR_String mercury__string___RightString_7;

#line 3854 "string.m"
    {
#line 3854 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
    }
#line 3854 "string.m"
  }
#line 550 "string.m"
}

#line 549 "string.m"
MR_String MR_CALL 
mercury__string__left_2_f_0(
#line 549 "string.m"
  MR_String mercury__string__S1_4,
#line 549 "string.m"
  MR_Integer mercury__string__N_5)
#line 549 "string.m"
{
#line 3854 "string.m"
  {
#line 3854 "string.m"
    MR_bool mercury__string__succeeded;
#line 3854 "string.m"
    MR_String mercury__string__S2_6;
#line 3854 "string.m"
    MR_String mercury__string___RightString_10;

#line 3854 "string.m"
    {
#line 3854 "string.m"
      mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__N_5, &mercury__string__S2_6, &mercury__string___RightString_10);
    }
#line 3854 "string.m"
    return mercury__string__S2_6;
#line 3854 "string.m"
  }
#line 549 "string.m"
}

#line 540 "string.m"
void MR_CALL 
mercury__string__split_by_codepoint_4_p_0(
#line 540 "string.m"
  MR_String mercury__string__Str_5,
#line 540 "string.m"
  MR_Integer mercury__string__Count_6,
#line 540 "string.m"
  MR_String * mercury__string__Left_7,
#line 540 "string.m"
  MR_String * mercury__string__Right_8)
#line 540 "string.m"
{
#line 3840 "string.m"
  {
#line 3840 "string.m"
    MR_bool mercury__string__succeeded;
#line 3840 "string.m"
    MR_Integer mercury__string__Offset_9;

#line 2589 "string.m"
    {
#line 2589 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Count_6, &mercury__string__Offset_9);
    }
#line 3840 "string.m"
    if (mercury__string__succeeded)
#line 3839 "string.m"
      {
#line 3839 "string.m"
        mercury__string__split_4_p_0(mercury__string__Str_5, mercury__string__Offset_9, mercury__string__Left_7, mercury__string__Right_8);
#line 3839 "string.m"
        return;
      }
#line 3840 "string.m"
    else
#line 3843 "string.m"
      {
#line 3840 "string.m"
        mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
#line 3843 "string.m"
        if (mercury__string__succeeded)
#line 3841 "string.m"
          {
#line 3841 "string.m"
            *mercury__string__Left_7 = (MR_String) "";
#line 3842 "string.m"
            *mercury__string__Right_8 = mercury__string__Str_5;
#line 3841 "string.m"
          }
#line 3843 "string.m"
        else
#line 3844 "string.m"
          {
#line 3844 "string.m"
            *mercury__string__Left_7 = mercury__string__Str_5;
#line 3845 "string.m"
            *mercury__string__Right_8 = (MR_String) "";
#line 3844 "string.m"
          }
#line 3843 "string.m"
      }
#line 3840 "string.m"
  }
#line 540 "string.m"
}

#line 531 "string.m"
void MR_CALL 
mercury__string__split_4_p_0(
#line 531 "string.m"
  MR_String mercury__string__Str_1,
#line 531 "string.m"
  MR_Integer mercury__string__Count_2,
#line 531 "string.m"
  MR_String * mercury__string__Left_3,
#line 531 "string.m"
  MR_String * mercury__string__Right_4)
#line 531 "string.m"
{
#line 3736 "string.m"
  {
#line 3736 "string.m"
    MR_bool mercury__string__succeeded;

#line 3740 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_4_p_0

	MR_String Str;
	MR_Integer Count;
	MR_String Left;
	MR_String Right;

	Str =  mercury__string__Str_1 ;
	Count =  mercury__string__Count_2 ;
		{
#line 3740 "string.m"
{
    MR_Integer  len;

    if (Count <= 0) {
        MR_make_aligned_string(Left, "");
        Right = Str;
    } else {
        len = strlen(Str);

        if (Count > len) {
            Count = len;
        }

        MR_allocate_aligned_string_msg(Left, Count, MR_ALLOC_ID);
        MR_memcpy(Left, Str, Count);
        Left[Count] = '\0';
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Right, len - Count, MR_ALLOC_ID);
        strcpy(Right, Str + Count);
    }
}
#line 24779 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Left_3  = Left;
	 *mercury__string__Right_4  = Right;
#line 3740 "string.m"
}
#line 3736 "string.m"
  }
#line 531 "string.m"
}

#line 523 "string.m"
void MR_CALL 
mercury__string__first_char_3_p_4(
#line 523 "string.m"
  MR_String * mercury__string__Str_1,
#line 523 "string.m"
  MR_Char mercury__string__First_2,
#line 523 "string.m"
  MR_String mercury__string__Rest_3)
#line 523 "string.m"
{
#line 3693 "string.m"
  {
#line 3693 "string.m"
    MR_bool mercury__string__succeeded;

#line 3697 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_4

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__First_2 ;
	Rest =  mercury__string__Rest_3 ;
		{
#line 3697 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 24827 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_1  = Str;
#line 3697 "string.m"
}
#line 3693 "string.m"
  }
#line 523 "string.m"
}

#line 522 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_3(
#line 522 "string.m"
  MR_String mercury__string__Str_1,
#line 522 "string.m"
  MR_Char * mercury__string__First_2,
#line 522 "string.m"
  MR_String * mercury__string__Rest_3)
#line 522 "string.m"
{
#line 3621 "string.m"
  {
#line 3621 "string.m"
    MR_bool mercury__string__succeeded;

#line 3625 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_3

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
		{
#line 3625 "string.m"
{
    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    if (First < 1) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str += pos;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_ALLOC_ID);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}
#line 24882 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
	 *mercury__string__Rest_3  = Rest;
#line 3625 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3621 "string.m"
    return mercury__string__succeeded;
#line 3621 "string.m"
  }
#line 522 "string.m"
}

#line 521 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_2(
#line 521 "string.m"
  MR_String mercury__string__Str_1,
#line 521 "string.m"
  MR_Char mercury__string__First_2,
#line 521 "string.m"
  MR_String * mercury__string__Rest_3)
#line 521 "string.m"
{
#line 3553 "string.m"
  {
#line 3553 "string.m"
    MR_bool mercury__string__succeeded;

#line 3557 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_2

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	First =  mercury__string__First_2 ;
		{
#line 3557 "string.m"
{
    MR_Integer pos = 0;
    int c = MR_utf8_get_next(Str, &pos);
    if (c != First || First == '\0') {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str += pos;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_ALLOC_ID);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}
#line 24944 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Rest_3  = Rest;
#line 3557 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3553 "string.m"
    return mercury__string__succeeded;
#line 3553 "string.m"
  }
#line 521 "string.m"
}

#line 520 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_1(
#line 520 "string.m"
  MR_String mercury__string__Str_1,
#line 520 "string.m"
  MR_Char * mercury__string__First_2,
#line 520 "string.m"
  MR_String mercury__string__Rest_3)
#line 520 "string.m"
{
#line 3490 "string.m"
  {
#line 3490 "string.m"
    MR_bool mercury__string__succeeded;

#line 3494 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_1

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Rest =  mercury__string__Rest_3 ;
		{
#line 3494 "string.m"

    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (First > 0 && strcmp(Str + pos, Rest) == 0);

#line 24995 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
#line 3494 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3490 "string.m"
    return mercury__string__succeeded;
#line 3490 "string.m"
  }
#line 520 "string.m"
}

#line 519 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_0(
#line 519 "string.m"
  MR_String mercury__string__Str_1,
#line 519 "string.m"
  MR_Char mercury__string__First_2,
#line 519 "string.m"
  MR_String mercury__string__Rest_3)
#line 519 "string.m"
{
#line 3433 "string.m"
  {
#line 3433 "string.m"
    MR_bool mercury__string__succeeded;

#line 3437 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	First =  mercury__string__First_2 ;
	Rest =  mercury__string__Rest_3 ;
		{
#line 3437 "string.m"

    MR_Integer pos = 0;
    int c = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (
        c == First &&
        First != '\0' &&
        strcmp(Str + pos, Rest) == 0
    );

#line 25051 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3437 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3433 "string.m"
    return mercury__string__succeeded;
#line 3433 "string.m"
  }
#line 519 "string.m"
}

#line 501 "string.m"
MR_String MR_CALL 
mercury__string__join_list_2_f_0(
#line 501 "string.m"
  MR_String mercury__string__Sep_1,
#line 501 "string.m"
  MR_Word mercury__string__Strs_2)
#line 501 "string.m"
{
#line 3334 "string.m"
  {
#line 3334 "string.m"
    MR_bool mercury__string__succeeded;
#line 3334 "string.m"
    MR_String mercury__string__Str_3;

#line 3338 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_2_f_0

	MR_String Sep;
	MR_Word Strs;
	MR_String Str;

	Sep =  mercury__string__Sep_1 ;
	Strs =  mercury__string__Strs_2 ;
		{
#line 3338 "string.m"
{
    MR_Word list;
    size_t  len;
    size_t  sep_len;
    MR_bool add_sep;

    list = Strs;
    len = 0;
    sep_len = strlen(Sep);

    /* Determine the total length of all strings */
    len = 0;
    add_sep = MR_FALSE;
    while (!MR_list_is_empty(list)) {
        if (add_sep) {
            len += sep_len;
        }

        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
        add_sep = MR_TRUE;
    }

    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);

    /* Copy the strings into the new memory */
    len = 0;
    list = Strs;
    add_sep = MR_FALSE;
    while (!MR_list_is_empty(list)) {
        if (add_sep) {
            strcpy((MR_String) Str + len, Sep);
            len += sep_len;
        }

        strcpy((MR_String) Str + len, (MR_String) MR_list_head(list));
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
        add_sep = MR_TRUE;
    }

    Str[len] = '\0';
}
#line 25138 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_3  = Str;
#line 3338 "string.m"
}
#line 3334 "string.m"
    return mercury__string__Str_3;
#line 3334 "string.m"
  }
#line 501 "string.m"
}

#line 493 "string.m"
void MR_CALL 
mercury__string__append_list_2_p_0(
#line 493 "string.m"
  MR_Word mercury__string__Lists_3,
#line 493 "string.m"
  MR_String * mercury__string__HeadVar__2_2)
#line 493 "string.m"
{
#line 3326 "string.m"
  {
#line 3326 "string.m"
    MR_bool mercury__string__succeeded;

#line 3326 "string.m"
    {
#line 3326 "string.m"
      *mercury__string__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__string__Lists_3);
    }
#line 3326 "string.m"
  }
#line 493 "string.m"
}

#line 492 "string.m"
MR_String MR_CALL 
mercury__string__append_list_1_f_0(
#line 492 "string.m"
  MR_Word mercury__string__Strs_1)
#line 492 "string.m"
{
#line 3254 "string.m"
  {
#line 3254 "string.m"
    MR_bool mercury__string__succeeded;
#line 3254 "string.m"
    MR_String mercury__string__Str_2;

#line 3258 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_list_1_f_0

	MR_Word Strs;
	MR_String Str;

	Strs =  mercury__string__Strs_1 ;
		{
#line 3258 "string.m"
{
    MR_Word list = Strs;
    size_t  len;

    /* Determine the total length of all strings */
    len = 0;
    while (!MR_list_is_empty(list)) {
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    /* Allocate enough word aligned memory for the string */
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);

    /* Copy the strings into the new memory */
    len = 0;
    list = Strs;
    while (!MR_list_is_empty(list)) {
        strcpy((MR_String) Str + len, (MR_String) MR_list_head(list));
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    Str[len] = '\0';
}
#line 25225 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_2  = Str;
#line 3258 "string.m"
}
#line 3254 "string.m"
    return mercury__string__Str_2;
#line 3254 "string.m"
  }
#line 492 "string.m"
}

#line 488 "string.m"
MR_String MR_CALL 
mercury__string__f_43_43_2_f_0(
#line 488 "string.m"
  MR_String mercury__string__S1_4,
#line 488 "string.m"
  MR_String mercury__string__S2_5)
#line 488 "string.m"
{
#line 3143 "string.m"
  {
#line 3143 "string.m"
    MR_bool mercury__string__succeeded;
#line 3143 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_43_43_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 25275 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
#line 3147 "string.m"
}
#line 3143 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3143 "string.m"
  }
#line 488 "string.m"
}

#line 476 "string.m"
void MR_CALL 
mercury__string__append_3_p_3(
#line 476 "string.m"
  MR_String * mercury__string__S1_1,
#line 476 "string.m"
  MR_String * mercury__string__S2_2,
#line 476 "string.m"
  MR_String mercury__string__S3_3,
#line 476 "string.m"
  MR_Cont mercury__string__cont,
#line 476 "string.m"
  void * mercury__string__cont_env_ptr)
#line 476 "string.m"
{
#line 3179 "string.m"
  {
#line 3179 "string.m"
    MR_bool mercury__string__succeeded;
#line 3179 "string.m"
    MR_Integer mercury__string__S3Len_19;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 25324 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_19  = Length;
#line 2398 "string.m"
}
#line 3181 "string.m"
    {
#line 3181 "string.m"
      mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_19, mercury__string__S1_1, mercury__string__S2_2, mercury__string__S3_3, mercury__string__cont, mercury__string__cont_env_ptr);
#line 3181 "string.m"
      return;
    }
#line 3179 "string.m"
  }
#line 476 "string.m"
}

#line 475 "string.m"
void MR_CALL 
mercury__string__append_3_p_2(
#line 475 "string.m"
  MR_String mercury__string__S1_1,
#line 475 "string.m"
  MR_String mercury__string__S2_2,
#line 475 "string.m"
  MR_String * mercury__string__S3_3)
#line 475 "string.m"
{
#line 3143 "string.m"
  {
#line 3143 "string.m"
    MR_bool mercury__string__succeeded;

#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_2

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 25379 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
#line 3147 "string.m"
}
#line 3143 "string.m"
  }
#line 475 "string.m"
}

#line 474 "string.m"
MR_bool MR_CALL 
mercury__string__append_3_p_1(
#line 474 "string.m"
  MR_String mercury__string__S1_1,
#line 474 "string.m"
  MR_String * mercury__string__S2_2,
#line 474 "string.m"
  MR_String mercury__string__S3_3)
#line 474 "string.m"
{
#line 3091 "string.m"
  {
#line 3091 "string.m"
    MR_bool mercury__string__succeeded;

#line 3095 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_1

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3095 "string.m"
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}
#line 25437 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
#line 3095 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3091 "string.m"
    return mercury__string__succeeded;
#line 3091 "string.m"
  }
#line 474 "string.m"
}

#line 473 "string.m"
MR_bool MR_CALL 
mercury__string__append_3_p_0(
#line 473 "string.m"
  MR_String mercury__string__S1_1,
#line 473 "string.m"
  MR_String mercury__string__S2_2,
#line 473 "string.m"
  MR_String mercury__string__S3_3)
#line 473 "string.m"
{
#line 3048 "string.m"
  {
#line 3048 "string.m"
    MR_bool mercury__string__succeeded;

#line 3052 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3052 "string.m"
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}
#line 25491 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3052 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3048 "string.m"
    return mercury__string__succeeded;
#line 3048 "string.m"
  }
#line 473 "string.m"
}

#line 470 "string.m"
MR_String MR_CALL 
mercury__string__append_2_f_0(
#line 470 "string.m"
  MR_String mercury__string__S1_4,
#line 470 "string.m"
  MR_String mercury__string__S2_5)
#line 470 "string.m"
{
#line 3143 "string.m"
  {
#line 3143 "string.m"
    MR_bool mercury__string__succeeded;
#line 3143 "string.m"
    MR_String mercury__string__S3_6;

#line 3147 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
#line 3147 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 25543 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3_6  = S3;
#line 3147 "string.m"
}
#line 3143 "string.m"
    return mercury__string__S3_6;
#line 3143 "string.m"
  }
#line 470 "string.m"
}

#line 460 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_start_4_p_0(
#line 460 "string.m"
  MR_String mercury__string__WholeString_1,
#line 460 "string.m"
  MR_String mercury__string__Pattern_2,
#line 460 "string.m"
  MR_Integer mercury__string__BeginAt_3,
#line 460 "string.m"
  MR_Integer * mercury__string__Index_4)
#line 460 "string.m"
{
#line 2934 "string.m"
  {
#line 2934 "string.m"
    MR_bool mercury__string__succeeded;

#line 2939 "string.m"
{
#define MR_PROC_LABEL mercury__string__sub_string_search_start_4_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  mercury__string__WholeString_1 ;
	Pattern =  mercury__string__Pattern_2 ;
	BeginAt =  mercury__string__BeginAt_3 ;
		{
#line 2939 "string.m"
{
    char *match;
    if ((MR_Unsigned) BeginAt > strlen(WholeString)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        match = strstr(WholeString + BeginAt, Pattern);
        if (match) {
            Index = match - WholeString;
            SUCCESS_INDICATOR = MR_TRUE;
        } else {
            SUCCESS_INDICATOR = MR_FALSE;
        }
    }
}
#line 25604 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
#line 2939 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2934 "string.m"
    return mercury__string__succeeded;
#line 2934 "string.m"
  }
#line 460 "string.m"
}

#line 452 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_3_p_0(
#line 452 "string.m"
  MR_String mercury__string__WholeString_4,
#line 452 "string.m"
  MR_String mercury__string__Pattern_5,
#line 452 "string.m"
  MR_Integer * mercury__string__Index_6)
#line 452 "string.m"
{
#line 2931 "string.m"
  {
#line 2931 "string.m"
    MR_bool mercury__string__succeeded;

#line 2939 "string.m"
{
#define MR_PROC_LABEL mercury__string__sub_string_search_3_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  mercury__string__WholeString_4 ;
	Pattern =  mercury__string__Pattern_5 ;
	BeginAt =  (MR_Integer) 0 ;
		{
#line 2939 "string.m"
{
    char *match;
    if ((MR_Unsigned) BeginAt > strlen(WholeString)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        match = strstr(WholeString + BeginAt, Pattern);
        if (match) {
            Index = match - WholeString;
            SUCCESS_INDICATOR = MR_TRUE;
        } else {
            SUCCESS_INDICATOR = MR_FALSE;
        }
    }
}
#line 25666 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_6  = Index;
#line 2939 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2931 "string.m"
    return mercury__string__succeeded;
#line 2931 "string.m"
  }
#line 452 "string.m"
}

#line 443 "string.m"
MR_Integer MR_CALL 
mercury__string__suffix_length_2_f_0(
#line 443 "string.m"
  MR_Word mercury__string__P_4,
#line 443 "string.m"
  MR_String mercury__string__S_5)
#line 443 "string.m"
{
#line 2912 "string.m"
  {
#line 2912 "string.m"
    MR_bool mercury__string__succeeded;
#line 2912 "string.m"
    MR_Integer mercury__string__HeadVar__3_3;
#line 2912 "string.m"
    MR_Integer mercury__string__End_6;
#line 2912 "string.m"
    MR_Integer mercury__string__Index_7;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_length_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 25716 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_6  = Length;
#line 2398 "string.m"
}
#line 2914 "string.m"
    {
#line 2914 "string.m"
      mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_6, &mercury__string__Index_7);
    }
#line 2912 "string.m"
    mercury__string__HeadVar__3_3 = (mercury__string__End_6 - mercury__string__Index_7);
#line 2912 "string.m"
    return mercury__string__HeadVar__3_3;
#line 2912 "string.m"
  }
#line 443 "string.m"
}

#line 435 "string.m"
MR_Integer MR_CALL 
mercury__string__prefix_length_2_f_0(
#line 435 "string.m"
  MR_Word mercury__string__P_4,
#line 435 "string.m"
  MR_String mercury__string__S_5)
#line 435 "string.m"
{
#line 2896 "string.m"
  {
#line 2896 "string.m"
    MR_bool mercury__string__succeeded;
#line 2896 "string.m"
    MR_Integer mercury__string__Index_6;

#line 2897 "string.m"
    {
#line 2897 "string.m"
      mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__Index_6);
    }
#line 2896 "string.m"
    return mercury__string__Index_6;
#line 2896 "string.m"
  }
#line 435 "string.m"
}

#line 428 "string.m"
MR_bool MR_CALL 
mercury__string__contains_char_2_p_0(
#line 428 "string.m"
  MR_String mercury__string__Str_1,
#line 428 "string.m"
  MR_Char mercury__string__Ch_2)
#line 428 "string.m"
{
#line 2843 "string.m"
  {
#line 2843 "string.m"
    MR_bool mercury__string__succeeded;

#line 2847 "string.m"
{
#define MR_PROC_LABEL mercury__string__contains_char_2_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Ch =  mercury__string__Ch_2 ;
		{
#line 2847 "string.m"

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }

#line 25803 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2847 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2843 "string.m"
    return mercury__string__succeeded;
#line 2843 "string.m"
  }
#line 428 "string.m"
}

#line 422 "string.m"
MR_bool MR_CALL 
mercury__string__all_match_2_p_0(
#line 422 "string.m"
  MR_Word mercury__string__P_3,
#line 422 "string.m"
  MR_String mercury__string__String_4)
#line 422 "string.m"
{
#line 2824 "string.m"
  {
#line 2824 "string.m"
    MR_bool mercury__string__succeeded;

#line 2825 "string.m"
    {
#line 2825 "string.m"
      return mercury__string__succeeded = mercury__string__all_match_loop_3_p_0(mercury__string__P_3, mercury__string__String_4, (MR_Integer) 0);
    }
#line 2824 "string.m"
    return mercury__string__succeeded;
#line 2824 "string.m"
  }
#line 422 "string.m"
}

#line 415 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_digits_1_p_0(
#line 415 "string.m"
  MR_String mercury__string__S_1)
#line 415 "string.m"
{
#line 2798 "string.m"
  {
#line 2798 "string.m"
    MR_bool mercury__string__succeeded;

#line 2802 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_digits_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2802 "string.m"

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }

#line 25883 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2802 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2798 "string.m"
    return mercury__string__succeeded;
#line 2798 "string.m"
  }
#line 415 "string.m"
}

#line 411 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alnum_or_underscore_1_p_0(
#line 411 "string.m"
  MR_String mercury__string__S_1)
#line 411 "string.m"
{
#line 2757 "string.m"
  {
#line 2757 "string.m"
    MR_bool mercury__string__succeeded;

#line 2761 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alnum_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2761 "string.m"

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }

#line 25953 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2761 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2757 "string.m"
    return mercury__string__succeeded;
#line 2757 "string.m"
  }
#line 411 "string.m"
}

#line 406 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alpha_or_underscore_1_p_0(
#line 406 "string.m"
  MR_String mercury__string__S_1)
#line 406 "string.m"
{
#line 2720 "string.m"
  {
#line 2720 "string.m"
    MR_bool mercury__string__succeeded;

#line 2724 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alpha_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2724 "string.m"

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }

#line 26020 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2724 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2720 "string.m"
    return mercury__string__succeeded;
#line 2720 "string.m"
  }
#line 406 "string.m"
}

#line 401 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alnum_1_p_0(
#line 401 "string.m"
  MR_String mercury__string__S_2)
#line 401 "string.m"
{
#line 2717 "string.m"
  {
#line 2717 "string.m"
    MR_bool mercury__string__succeeded;

#line 2825 "string.m"
    {
#line 2825 "string.m"
      return mercury__string__succeeded = mercury__string__all_match_loop__ho30_3_p_0(mercury__string__S_2, (MR_Integer) 0);
    }
#line 2717 "string.m"
    return mercury__string__succeeded;
#line 2717 "string.m"
  }
#line 401 "string.m"
}

#line 396 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alpha_1_p_0(
#line 396 "string.m"
  MR_String mercury__string__S_1)
#line 396 "string.m"
{
#line 2682 "string.m"
  {
#line 2682 "string.m"
    MR_bool mercury__string__succeeded;

#line 2686 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alpha_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2686 "string.m"

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }

#line 26109 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2686 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2682 "string.m"
    return mercury__string__succeeded;
#line 2682 "string.m"
  }
#line 396 "string.m"
}

#line 387 "string.m"
MR_Integer MR_CALL 
mercury__string__hash3_1_f_0(
#line 387 "string.m"
  MR_String mercury__string__String_3)
#line 387 "string.m"
{
#line 2657 "string.m"
  {
#line 2657 "string.m"
    MR_bool mercury__string__succeeded;
#line 2657 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2657 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2657 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash3_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 26156 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2398 "string.m"
}
#line 2659 "string.m"
    {
#line 2659 "string.m"
      mercury__string__hash3_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2660 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2657 "string.m"
    return mercury__string__HashVal_4;
#line 2657 "string.m"
  }
#line 387 "string.m"
}

#line 386 "string.m"
MR_Integer MR_CALL 
mercury__string__hash2_1_f_0(
#line 386 "string.m"
  MR_String mercury__string__String_3)
#line 386 "string.m"
{
#line 2639 "string.m"
  {
#line 2639 "string.m"
    MR_bool mercury__string__succeeded;
#line 2639 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2639 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2639 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash2_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 26208 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2398 "string.m"
}
#line 2641 "string.m"
    {
#line 2641 "string.m"
      mercury__string__hash2_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2642 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2639 "string.m"
    return mercury__string__HashVal_4;
#line 2639 "string.m"
  }
#line 386 "string.m"
}

#line 382 "string.m"
void MR_CALL 
mercury__string__hash_2_p_0(
#line 382 "string.m"
  MR_String mercury__string__String_3,
#line 382 "string.m"
  MR_Integer * mercury__string__HashVal_4)
#line 382 "string.m"
{
#line 2621 "string.m"
  {
#line 2621 "string.m"
    MR_bool mercury__string__succeeded;
#line 2621 "string.m"
    MR_Integer mercury__string__Length_7;
#line 2621 "string.m"
    MR_Integer mercury__string__HashVal1_8;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 26260 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
#line 2398 "string.m"
}
#line 2623 "string.m"
    {
#line 2623 "string.m"
      mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_7, (MR_Integer) 0, &mercury__string__HashVal1_8);
    }
#line 2624 "string.m"
    *mercury__string__HashVal_4 = (mercury__string__HashVal1_8 ^ mercury__string__Length_7);
#line 2621 "string.m"
  }
#line 382 "string.m"
}

#line 381 "string.m"
MR_Integer MR_CALL 
mercury__string__hash_1_f_0(
#line 381 "string.m"
  MR_String mercury__string__String_3)
#line 381 "string.m"
{
#line 2621 "string.m"
  {
#line 2621 "string.m"
    MR_bool mercury__string__succeeded;
#line 2621 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2621 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2621 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 26310 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2398 "string.m"
}
#line 2623 "string.m"
    {
#line 2623 "string.m"
      mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2624 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2621 "string.m"
    return mercury__string__HashVal_4;
#line 2621 "string.m"
  }
#line 381 "string.m"
}

#line 372 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_3_p_0(
#line 372 "string.m"
  MR_String mercury__string__String_4,
#line 372 "string.m"
  MR_Integer mercury__string__N_5,
#line 372 "string.m"
  MR_Integer * mercury__string__Index_6)
#line 372 "string.m"
{
#line 2586 "string.m"
  {
#line 2586 "string.m"
    MR_bool mercury__string__succeeded;

#line 2589 "string.m"
    {
#line 2589 "string.m"
      return mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__String_4, (MR_Integer) 0, mercury__string__N_5, mercury__string__Index_6);
    }
#line 2586 "string.m"
    return mercury__string__succeeded;
#line 2586 "string.m"
  }
#line 372 "string.m"
}

#line 366 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_4_p_0(
#line 366 "string.m"
  MR_String mercury__string__String_1,
#line 366 "string.m"
  MR_Integer mercury__string__StartOffset_2,
#line 366 "string.m"
  MR_Integer mercury__string__N_3,
#line 366 "string.m"
  MR_Integer * mercury__string__Index_4)
#line 366 "string.m"
{
#line 2540 "string.m"
  {
#line 2540 "string.m"
    MR_bool mercury__string__succeeded;

#line 2543 "string.m"
{
#define MR_PROC_LABEL mercury__string__codepoint_offset_4_p_0

	MR_String String;
	MR_Integer StartOffset;
	MR_Integer N;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	String =  mercury__string__String_1 ;
	StartOffset =  mercury__string__StartOffset_2 ;
	N =  mercury__string__N_3 ;
		{
#line 2543 "string.m"

    size_t          len;
    unsigned char   b;

    SUCCESS_INDICATOR = MR_FALSE;
    len = strlen(String);
    for (Index = StartOffset; Index < len; Index++) {
        b = String[Index];
        if (MR_utf8_is_single_byte(b) || MR_utf8_is_lead_byte(b)) {
            if (N-- == 0) {
                SUCCESS_INDICATOR = MR_TRUE;
                break;
            }
        }
    }

#line 26408 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
#line 2543 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2540 "string.m"
    return mercury__string__succeeded;
#line 2540 "string.m"
  }
#line 366 "string.m"
}

#line 358 "string.m"
MR_Integer MR_CALL 
mercury__string__count_utf8_code_units_1_f_0(
#line 358 "string.m"
  MR_String mercury__string__Str_1)
#line 358 "string.m"
{
#line 2510 "string.m"
  {
#line 2510 "string.m"
    MR_bool mercury__string__succeeded;
#line 2510 "string.m"
    MR_Integer mercury__string__Length_2;

#line 2513 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2513 "string.m"

    Length = strlen(Str);

#line 26452 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_2  = Length;
#line 2513 "string.m"
}
#line 2510 "string.m"
    return mercury__string__Length_2;
#line 2510 "string.m"
  }
#line 358 "string.m"
}

#line 353 "string.m"
void MR_CALL 
mercury__string__count_codepoints_2_p_0(
#line 353 "string.m"
  MR_String mercury__string__String_1,
#line 353 "string.m"
  MR_Integer * mercury__string__Count_2)
#line 353 "string.m"
{
#line 2460 "string.m"
  {
#line 2460 "string.m"
    MR_bool mercury__string__succeeded;

#line 2463 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_codepoints_2_p_0

	MR_String String;
	MR_Integer Count;

	String =  mercury__string__String_1 ;
		{
#line 2463 "string.m"

    unsigned char   b;
    int             i;

    Count = 0;
    for (i = 0; ; i++) {
        b = String[i];
        if (b == '\0') {
            break;
        }
        if (MR_utf8_is_single_byte(b) || MR_utf8_is_lead_byte(b)) {
            Count++;
        }
    }

#line 26505 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Count_2  = Count;
#line 2463 "string.m"
}
#line 2460 "string.m"
  }
#line 353 "string.m"
}

#line 352 "string.m"
MR_Integer MR_CALL 
mercury__string__count_codepoints_1_f_0(
#line 352 "string.m"
  MR_String mercury__string__String_3)
#line 352 "string.m"
{
#line 2458 "string.m"
  {
#line 2458 "string.m"
    MR_bool mercury__string__succeeded;
#line 2458 "string.m"
    MR_Integer mercury__string__Count_4;

#line 2458 "string.m"
    {
#line 2458 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_3, &mercury__string__Count_4);
    }
#line 2458 "string.m"
    return mercury__string__Count_4;
#line 2458 "string.m"
  }
#line 352 "string.m"
}

#line 344 "string.m"
void MR_CALL 
mercury__string__count_code_units_2_p_0(
#line 344 "string.m"
  MR_String mercury__string__Str_3,
#line 344 "string.m"
  MR_Integer * mercury__string__Length_4)
#line 344 "string.m"
{
#line 2394 "string.m"
  {
#line 2394 "string.m"
    MR_bool mercury__string__succeeded;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_code_units_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 26570 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_4  = Length;
#line 2398 "string.m"
}
#line 2394 "string.m"
  }
#line 344 "string.m"
}

#line 343 "string.m"
MR_Integer MR_CALL 
mercury__string__count_code_units_1_f_0(
#line 343 "string.m"
  MR_String mercury__string__Str_3)
#line 343 "string.m"
{
#line 2394 "string.m"
  {
#line 2394 "string.m"
    MR_bool mercury__string__succeeded;
#line 2394 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 26609 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Length;
#line 2398 "string.m"
}
#line 2394 "string.m"
    return mercury__string__HeadVar__2_2;
#line 2394 "string.m"
  }
#line 343 "string.m"
}

#line 339 "string.m"
void MR_CALL 
mercury__string__length_2_p_1(
#line 339 "string.m"
  MR_String mercury__string__Str_1,
#line 339 "string.m"
  MR_Integer * mercury__string__Length_2)
#line 339 "string.m"
{
#line 2420 "string.m"
  {
#line 2420 "string.m"
    MR_bool mercury__string__succeeded;

#line 2424 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2424 "string.m"

    Length = strlen(Str);

#line 26650 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
#line 2424 "string.m"
}
#line 2420 "string.m"
  }
#line 339 "string.m"
}

#line 338 "string.m"
void MR_CALL 
mercury__string__length_2_p_0(
#line 338 "string.m"
  MR_String mercury__string__Str_1,
#line 338 "string.m"
  MR_Integer * mercury__string__Length_2)
#line 338 "string.m"
{
#line 2394 "string.m"
  {
#line 2394 "string.m"
    MR_bool mercury__string__succeeded;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 26689 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
#line 2398 "string.m"
}
#line 2394 "string.m"
  }
#line 338 "string.m"
}

#line 336 "string.m"
MR_Integer MR_CALL 
mercury__string__length_1_f_0(
#line 336 "string.m"
  MR_String mercury__string__S_3)
#line 336 "string.m"
{
#line 2394 "string.m"
  {
#line 2394 "string.m"
    MR_bool mercury__string__succeeded;
#line 2394 "string.m"
    MR_Integer mercury__string__L_4;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 26728 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__L_4  = Length;
#line 2398 "string.m"
}
#line 2394 "string.m"
    return mercury__string__L_4;
#line 2394 "string.m"
  }
#line 336 "string.m"
}

#line 320 "string.m"
void MR_CALL 
mercury__string__unsafe_set_char_4_p_0(
#line 320 "string.m"
  MR_Char mercury__string__Char_5,
#line 320 "string.m"
  MR_Integer mercury__string__Index_6,
#line 320 "string.m"
  MR_String mercury__string__STATE_VARIABLE_Str_0_8,
#line 320 "string.m"
  MR_String * mercury__string__STATE_VARIABLE_Str_9)
#line 320 "string.m"
{
#line 2313 "string.m"
  {
#line 2313 "string.m"
    MR_bool mercury__string__succeeded;

#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 63 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 26775 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2313 "string.m"
    if (mercury__string__succeeded)
#line 2312 "string.m"
      {
#line 2312 "string.m"
        {
#line 2312 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_set_char: null character");
#line 2312 "string.m"
          return;
        }
#line 2312 "string.m"
      }
#line 2313 "string.m"
    else
#line 2323 "string.m"
      {
#line 2327 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;

	Ch =  mercury__string__Char_5 ;
	Index =  mercury__string__Index_6 ;
	Str0 =  mercury__string__STATE_VARIABLE_Str_0_8 ;
		{
#line 2327 "string.m"

    size_t len = strlen(Str0);
    if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        /* Fast path. */
        MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
        strcpy(Str, Str0);
        Str[Index] = Ch;
    } else {
        int oldc = MR_utf8_get(Str0, Index);
        size_t oldwidth = MR_utf8_width(oldc);
        size_t newwidth = MR_utf8_width(Ch);
        size_t newlen;
        size_t tailofs;

        newlen = len - oldwidth + newwidth;
        MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
        MR_memcpy(Str, Str0, Index);
        MR_utf8_encode(Str + Index, Ch);
        strcpy(Str + Index + newwidth, Str0 + Index + oldwidth);
    }

#line 26836 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
#line 2327 "string.m"
}
#line 2323 "string.m"
      }
#line 2313 "string.m"
  }
#line 320 "string.m"
}

#line 315 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_set_char_3_f_0(
#line 315 "string.m"
  MR_Char mercury__string__C_5,
#line 315 "string.m"
  MR_Integer mercury__string__N_6,
#line 315 "string.m"
  MR_String mercury__string__S0_7)
#line 315 "string.m"
{
#line 2313 "string.m"
  {
#line 2313 "string.m"
    MR_bool mercury__string__succeeded;
#line 2313 "string.m"
    MR_String mercury__string__S_8;

#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_3_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__C_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 63 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 26883 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2313 "string.m"
    if (mercury__string__succeeded)
#line 2312 "string.m"
      {
#line 2312 "string.m"
        {
#line 2312 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_set_char: null character");
        }
#line 2312 "string.m"
      }
#line 2313 "string.m"
    else
#line 2323 "string.m"
      {
#line 2327 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_3_f_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;

	Ch =  mercury__string__C_5 ;
	Index =  mercury__string__N_6 ;
	Str0 =  mercury__string__S0_7 ;
		{
#line 2327 "string.m"

    size_t len = strlen(Str0);
    if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        /* Fast path. */
        MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
        strcpy(Str, Str0);
        Str[Index] = Ch;
    } else {
        int oldc = MR_utf8_get(Str0, Index);
        size_t oldwidth = MR_utf8_width(oldc);
        size_t newwidth = MR_utf8_width(Ch);
        size_t newlen;
        size_t tailofs;

        newlen = len - oldwidth + newwidth;
        MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
        MR_memcpy(Str, Str0, Index);
        MR_utf8_encode(Str + Index, Ch);
        strcpy(Str + Index + newwidth, Str0 + Index + oldwidth);
    }

#line 26942 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_8  = Str;
#line 2327 "string.m"
}
#line 2323 "string.m"
      }
#line 2313 "string.m"
    return mercury__string__S_8;
#line 2313 "string.m"
  }
#line 315 "string.m"
}

#line 300 "string.m"
void MR_CALL 
mercury__string__det_set_char_4_p_0(
#line 300 "string.m"
  MR_Char mercury__string__Char_5,
#line 300 "string.m"
  MR_Integer mercury__string__Int_6,
#line 300 "string.m"
  MR_String mercury__string__String0_7,
#line 300 "string.m"
  MR_String * mercury__string__String_8)
#line 300 "string.m"
{
#line 2301 "string.m"
  {
#line 2301 "string.m"
    MR_bool mercury__string__succeeded;
#line 2301 "string.m"
    MR_String mercury__string__String1_9;

#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__string__det_set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 63 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 26993 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2189 "string.m"
    if (mercury__string__succeeded)
#line 2188 "string.m"
      {
#line 2188 "string.m"
        {
#line 2188 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.set_char: null character");
#line 2188 "string.m"
          return;
        }
#line 2188 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2188 "string.m"
      }
#line 2189 "string.m"
    else
#line 2199 "string.m"
      {
#line 2203 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_set_char_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Ch =  mercury__string__Char_5 ;
	Index =  mercury__string__Int_6 ;
	Str0 =  mercury__string__String0_7 ;
		{
#line 2203 "string.m"

    size_t len = strlen(Str0);
    if ((MR_Unsigned) Index >= len) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = MR_TRUE;
        MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
        strcpy(Str, Str0);
        Str[Index] = Ch;
    } else {
        int oldc = MR_utf8_get(Str0, Index);
        if (oldc < 0) {
            SUCCESS_INDICATOR = MR_FALSE;
        } else {
            size_t oldwidth = MR_utf8_width(oldc);
            size_t newwidth = MR_utf8_width(Ch);
            size_t newlen;

            newlen = len - oldwidth + newwidth;
            MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
            MR_memcpy(Str, Str0, Index);
            MR_utf8_encode(Str + Index, Ch);
            strcpy(Str + Index + newwidth, Str0 + Index + oldwidth);
            SUCCESS_INDICATOR = MR_TRUE;
        }
    }

#line 27064 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__String1_9  = Str;
#line 2203 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2199 "string.m"
      }
#line 2301 "string.m"
    if (mercury__string__succeeded)
#line 2300 "string.m"
      *mercury__string__String_8 = mercury__string__String1_9;
#line 2301 "string.m"
    else
#line 2302 "string.m"
      {
#line 2302 "string.m"
        {
#line 2302 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_set_char: index out of range");
#line 2302 "string.m"
          return;
        }
#line 2302 "string.m"
      }
#line 2301 "string.m"
  }
#line 300 "string.m"
}

#line 298 "string.m"
MR_String MR_CALL 
mercury__string__det_set_char_3_f_0(
#line 298 "string.m"
  MR_Char mercury__string__C_5,
#line 298 "string.m"
  MR_Integer mercury__string__N_6,
#line 298 "string.m"
  MR_String mercury__string__S0_7)
#line 298 "string.m"
{
#line 2296 "string.m"
  {
#line 2296 "string.m"
    MR_bool mercury__string__succeeded;
#line 2296 "string.m"
    MR_String mercury__string__S_8;

#line 2296 "string.m"
    {
#line 2296 "string.m"
      mercury__string__det_set_char_4_p_0(mercury__string__C_5, mercury__string__N_6, mercury__string__S0_7, &mercury__string__S_8);
    }
#line 2296 "string.m"
    return mercury__string__S_8;
#line 2296 "string.m"
  }
#line 298 "string.m"
}

#line 286 "string.m"
MR_bool MR_CALL 
mercury__string__set_char_4_p_0(
#line 286 "string.m"
  MR_Char mercury__string__Char_5,
#line 286 "string.m"
  MR_Integer mercury__string__Index_6,
#line 286 "string.m"
  MR_String mercury__string__STATE_VARIABLE_Str_0_8,
#line 286 "string.m"
  MR_String * mercury__string__STATE_VARIABLE_Str_9)
#line 286 "string.m"
{
#line 2189 "string.m"
  {
#line 2189 "string.m"
    MR_bool mercury__string__succeeded;

#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__string__set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 63 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 27161 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2189 "string.m"
    if (mercury__string__succeeded)
#line 2188 "string.m"
      {
#line 2188 "string.m"
        {
#line 2188 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.set_char: null character");
        }
#line 2188 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2188 "string.m"
      }
#line 2189 "string.m"
    else
#line 2199 "string.m"
      {
#line 2203 "string.m"
{
#define MR_PROC_LABEL mercury__string__set_char_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Ch =  mercury__string__Char_5 ;
	Index =  mercury__string__Index_6 ;
	Str0 =  mercury__string__STATE_VARIABLE_Str_0_8 ;
		{
#line 2203 "string.m"

    size_t len = strlen(Str0);
    if ((MR_Unsigned) Index >= len) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = MR_TRUE;
        MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
        strcpy(Str, Str0);
        Str[Index] = Ch;
    } else {
        int oldc = MR_utf8_get(Str0, Index);
        if (oldc < 0) {
            SUCCESS_INDICATOR = MR_FALSE;
        } else {
            size_t oldwidth = MR_utf8_width(oldc);
            size_t newwidth = MR_utf8_width(Ch);
            size_t newlen;

            newlen = len - oldwidth + newwidth;
            MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
            MR_memcpy(Str, Str0, Index);
            MR_utf8_encode(Str + Index, Ch);
            strcpy(Str + Index + newwidth, Str0 + Index + oldwidth);
            SUCCESS_INDICATOR = MR_TRUE;
        }
    }

#line 27230 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
#line 2203 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2199 "string.m"
      }
#line 2189 "string.m"
    return mercury__string__succeeded;
#line 2189 "string.m"
  }
#line 286 "string.m"
}

#line 271 "string.m"
void MR_CALL 
mercury__string__unsafe_index_code_unit_3_p_0(
#line 271 "string.m"
  MR_String mercury__string__Str_1,
#line 271 "string.m"
  MR_Integer mercury__string__Index_2,
#line 271 "string.m"
  MR_Integer * mercury__string__Code_3)
#line 271 "string.m"
{
#line 2155 "string.m"
  {
#line 2155 "string.m"
    MR_bool mercury__string__succeeded;

#line 2158 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_code_unit_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 2158 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 27281 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Code_3  = Code;
#line 2158 "string.m"
}
#line 2155 "string.m"
  }
#line 271 "string.m"
}

#line 263 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_prev_index_4_p_0(
#line 263 "string.m"
  MR_String mercury__string__Str_1,
#line 263 "string.m"
  MR_Integer mercury__string__Index_2,
#line 263 "string.m"
  MR_Integer * mercury__string__PrevIndex_3,
#line 263 "string.m"
  MR_Char * mercury__string__Ch_4)
#line 263 "string.m"
{
#line 2027 "string.m"
  {
#line 2027 "string.m"
    MR_bool mercury__string__succeeded;

#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_prev_index_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 27339 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__PrevIndex_3  = PrevIndex;
	 *mercury__string__Ch_4  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2027 "string.m"
    return mercury__string__succeeded;
#line 2027 "string.m"
  }
#line 263 "string.m"
}

#line 253 "string.m"
MR_bool MR_CALL 
mercury__string__prev_index_4_p_0(
#line 253 "string.m"
  MR_String mercury__string__Str_5,
#line 253 "string.m"
  MR_Integer mercury__string__Index_6,
#line 253 "string.m"
  MR_Integer * mercury__string__CharIndex_7,
#line 253 "string.m"
  MR_Char * mercury__string__Char_8)
#line 253 "string.m"
{
#line 2019 "string.m"
  {
#line 2019 "string.m"
    MR_bool mercury__string__succeeded;
#line 2019 "string.m"
    MR_Integer mercury__string__Len_9;
#line 2019 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 27392 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
#line 2398 "string.m"
}
#line 2021 "string.m"
    mercury__string__V_10_10 = (mercury__string__Index_6 - (MR_Integer) 1);
#line 2132 "string.m"
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__V_10_10 ;
	Length =  mercury__string__Len_9 ;
		{
#line 2132 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 27423 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2132 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2019 "string.m"
    if (mercury__string__succeeded)
#line 2019 "string.m"
      {
#line 2031 "string.m"
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_5 ;
	Index =  mercury__string__Index_6 ;
		{
#line 2031 "string.m"

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 27464 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__CharIndex_7  = PrevIndex;
	 *mercury__string__Char_8  = Ch;
#line 2031 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2019 "string.m"
      }
#line 2019 "string.m"
    return mercury__string__succeeded;
#line 2019 "string.m"
  }
#line 253 "string.m"
}

#line 245 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_index_next_4_p_0(
#line 245 "string.m"
  MR_String mercury__string__Str_1,
#line 245 "string.m"
  MR_Integer mercury__string__Index_2,
#line 245 "string.m"
  MR_Integer * mercury__string__NextIndex_3,
#line 245 "string.m"
  MR_Char * mercury__string__Ch_4)
#line 245 "string.m"
{
#line 1938 "string.m"
  {
#line 1938 "string.m"
    MR_bool mercury__string__succeeded;

#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_next_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 27527 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__NextIndex_3  = NextIndex;
	 *mercury__string__Ch_4  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1938 "string.m"
    return mercury__string__succeeded;
#line 1938 "string.m"
  }
#line 245 "string.m"
}

#line 235 "string.m"
MR_bool MR_CALL 
mercury__string__index_next_4_p_0(
#line 235 "string.m"
  MR_String mercury__string__Str_5,
#line 235 "string.m"
  MR_Integer mercury__string__Index_6,
#line 235 "string.m"
  MR_Integer * mercury__string__NextIndex_7,
#line 235 "string.m"
  MR_Char * mercury__string__Char_8)
#line 235 "string.m"
{
#line 1930 "string.m"
  {
#line 1930 "string.m"
    MR_bool mercury__string__succeeded;
#line 1930 "string.m"
    MR_Integer mercury__string__Len_9;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 27578 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
#line 2398 "string.m"
}
#line 2132 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_6 ;
	Length =  mercury__string__Len_9 ;
		{
#line 2132 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 27607 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2132 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1930 "string.m"
    if (mercury__string__succeeded)
#line 1930 "string.m"
      {
#line 1942 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_5 ;
	Index =  mercury__string__Index_6 ;
		{
#line 1942 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 27645 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__NextIndex_7  = NextIndex;
	 *mercury__string__Char_8  = Ch;
#line 1942 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1930 "string.m"
      }
#line 1930 "string.m"
    return mercury__string__succeeded;
#line 1930 "string.m"
  }
#line 235 "string.m"
}

#line 227 "string.m"
MR_Char MR_CALL 
mercury__string__unsafe_elem_2_f_0(
#line 227 "string.m"
  MR_Integer mercury__string__Index_5,
#line 227 "string.m"
  MR_String mercury__string__String_4)
#line 227 "string.m"
{
#line 1868 "string.m"
  {
#line 1868 "string.m"
    MR_bool mercury__string__succeeded;
#line 1868 "string.m"
    MR_Char mercury__string__HeadVar__3_3;
#line 1868 "string.m"
    MR_Char mercury__string__CharPrime_12;

#line 1878 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_elem_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 1878 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 27704 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_12  = Ch;
#line 1878 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1868 "string.m"
    if (mercury__string__succeeded)
#line 1867 "string.m"
      mercury__string__HeadVar__3_3 = mercury__string__CharPrime_12;
#line 1868 "string.m"
    else
#line 1869 "string.m"
      {
#line 1869 "string.m"
        {
#line 1869 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
        }
#line 1869 "string.m"
      }
#line 1868 "string.m"
    return mercury__string__HeadVar__3_3;
#line 1868 "string.m"
  }
#line 227 "string.m"
}

#line 222 "string.m"
MR_Char MR_CALL 
mercury__string__elem_2_f_0(
#line 222 "string.m"
  MR_Integer mercury__string__Index_5,
#line 222 "string.m"
  MR_String mercury__string__String_4)
#line 222 "string.m"
{
#line 1925 "string.m"
  {
#line 1925 "string.m"
    MR_bool mercury__string__succeeded;
#line 1925 "string.m"
    MR_Char mercury__string__HeadVar__3_3;

#line 1925 "string.m"
    {
#line 1925 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__det_index_2_f_0(mercury__string__String_4, mercury__string__Index_5);
    }
#line 1925 "string.m"
    return mercury__string__HeadVar__3_3;
#line 1925 "string.m"
  }
#line 222 "string.m"
}

#line 217 "string.m"
void MR_CALL 
mercury__string__unsafe_index_3_p_0(
#line 217 "string.m"
  MR_String mercury__string__Str_4,
#line 217 "string.m"
  MR_Integer mercury__string__Index_5,
#line 217 "string.m"
  MR_Char * mercury__string__Char_6)
#line 217 "string.m"
{
#line 1868 "string.m"
  {
#line 1868 "string.m"
    MR_bool mercury__string__succeeded;
#line 1868 "string.m"
    MR_Char mercury__string__CharPrime_7;

#line 1878 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 1878 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 27803 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_7  = Ch;
#line 1878 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1868 "string.m"
    if (mercury__string__succeeded)
#line 1867 "string.m"
      *mercury__string__Char_6 = mercury__string__CharPrime_7;
#line 1868 "string.m"
    else
#line 1869 "string.m"
      {
#line 1869 "string.m"
        {
#line 1869 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
#line 1869 "string.m"
          return;
        }
#line 1869 "string.m"
      }
#line 1868 "string.m"
  }
#line 217 "string.m"
}

#line 216 "string.m"
MR_Char MR_CALL 
mercury__string__unsafe_index_2_f_0(
#line 216 "string.m"
  MR_String mercury__string__S_4,
#line 216 "string.m"
  MR_Integer mercury__string__N_5)
#line 216 "string.m"
{
#line 1868 "string.m"
  {
#line 1868 "string.m"
    MR_bool mercury__string__succeeded;
#line 1868 "string.m"
    MR_Char mercury__string__C_6;
#line 1868 "string.m"
    MR_Char mercury__string__CharPrime_10;

#line 1878 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{
#line 1878 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 27874 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_10  = Ch;
#line 1878 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1868 "string.m"
    if (mercury__string__succeeded)
#line 1867 "string.m"
      mercury__string__C_6 = mercury__string__CharPrime_10;
#line 1868 "string.m"
    else
#line 1869 "string.m"
      {
#line 1869 "string.m"
        {
#line 1869 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
        }
#line 1869 "string.m"
      }
#line 1868 "string.m"
    return mercury__string__C_6;
#line 1868 "string.m"
  }
#line 216 "string.m"
}

#line 205 "string.m"
void MR_CALL 
mercury__string__det_index_3_p_0(
#line 205 "string.m"
  MR_String mercury__string__String_4,
#line 205 "string.m"
  MR_Integer mercury__string__Int_5,
#line 205 "string.m"
  MR_Char * mercury__string__Char_6)
#line 205 "string.m"
{
#line 1858 "string.m"
  {
#line 1858 "string.m"
    MR_bool mercury__string__succeeded;
#line 1858 "string.m"
    MR_Char mercury__string__Char0_7;
#line 1844 "string.m"
    MR_Integer mercury__string__Len_12;
#line 1868 "string.m"
    MR_Char mercury__string__CharPrime_24;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 27941 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2398 "string.m"
}
#line 2132 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Int_5 ;
	Length =  mercury__string__Len_12 ;
		{
#line 2132 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 27970 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2132 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1844 "string.m"
    if (mercury__string__succeeded)
#line 1844 "string.m"
      {
#line 1878 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Int_5 ;
		{
#line 1878 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28004 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_24  = Ch;
#line 1878 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1868 "string.m"
        if (mercury__string__succeeded)
#line 1867 "string.m"
          mercury__string__Char0_7 = mercury__string__CharPrime_24;
#line 1868 "string.m"
        else
#line 1869 "string.m"
          {
#line 1869 "string.m"
            {
#line 1869 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
#line 1869 "string.m"
              return;
            }
#line 1869 "string.m"
          }
#line 1868 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 1844 "string.m"
      }
#line 1858 "string.m"
    if (mercury__string__succeeded)
#line 1857 "string.m"
      *mercury__string__Char_6 = mercury__string__Char0_7;
#line 1858 "string.m"
    else
#line 1859 "string.m"
      {
#line 1859 "string.m"
        {
#line 1859 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
#line 1859 "string.m"
          return;
        }
#line 1859 "string.m"
      }
#line 1858 "string.m"
  }
#line 205 "string.m"
}

#line 204 "string.m"
MR_Char MR_CALL 
mercury__string__det_index_2_f_0(
#line 204 "string.m"
  MR_String mercury__string__S_4,
#line 204 "string.m"
  MR_Integer mercury__string__N_5)
#line 204 "string.m"
{
#line 1858 "string.m"
  {
#line 1858 "string.m"
    MR_bool mercury__string__succeeded;
#line 1858 "string.m"
    MR_Char mercury__string__C_6;
#line 1858 "string.m"
    MR_Char mercury__string__Char0_10;
#line 1844 "string.m"
    MR_Integer mercury__string__Len_15;
#line 1868 "string.m"
    MR_Char mercury__string__CharPrime_27;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_4 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 28092 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_15  = Length;
#line 2398 "string.m"
}
#line 2132 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__N_5 ;
	Length =  mercury__string__Len_15 ;
		{
#line 2132 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 28121 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2132 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1844 "string.m"
    if (mercury__string__succeeded)
#line 1844 "string.m"
      {
#line 1878 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{
#line 1878 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28155 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_27  = Ch;
#line 1878 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1868 "string.m"
        if (mercury__string__succeeded)
#line 1867 "string.m"
          mercury__string__Char0_10 = mercury__string__CharPrime_27;
#line 1868 "string.m"
        else
#line 1869 "string.m"
          {
#line 1869 "string.m"
            {
#line 1869 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 1869 "string.m"
          }
#line 1868 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 1844 "string.m"
      }
#line 1858 "string.m"
    if (mercury__string__succeeded)
#line 1857 "string.m"
      mercury__string__C_6 = mercury__string__Char0_10;
#line 1858 "string.m"
    else
#line 1859 "string.m"
      {
#line 1859 "string.m"
        {
#line 1859 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
        }
#line 1859 "string.m"
      }
#line 1858 "string.m"
    return mercury__string__C_6;
#line 1858 "string.m"
  }
#line 204 "string.m"
}

#line 194 "string.m"
MR_bool MR_CALL 
mercury__string__index_3_p_0(
#line 194 "string.m"
  MR_String mercury__string__Str_4,
#line 194 "string.m"
  MR_Integer mercury__string__Index_5,
#line 194 "string.m"
  MR_Char * mercury__string__Char_6)
#line 194 "string.m"
{
#line 1844 "string.m"
  {
#line 1844 "string.m"
    MR_bool mercury__string__succeeded;
#line 1844 "string.m"
    MR_Integer mercury__string__Len_7;
#line 1868 "string.m"
    MR_Char mercury__string__CharPrime_19;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_4 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 28239 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
#line 2398 "string.m"
}
#line 2132 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_5 ;
	Length =  mercury__string__Len_7 ;
		{
#line 2132 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 28268 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2132 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1844 "string.m"
    if (mercury__string__succeeded)
#line 1844 "string.m"
      {
#line 1878 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 1878 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28302 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_19  = Ch;
#line 1878 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1868 "string.m"
        if (mercury__string__succeeded)
#line 1867 "string.m"
          *mercury__string__Char_6 = mercury__string__CharPrime_19;
#line 1868 "string.m"
        else
#line 1869 "string.m"
          {
#line 1869 "string.m"
            {
#line 1869 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 1869 "string.m"
          }
#line 1868 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 1844 "string.m"
      }
#line 1844 "string.m"
    return mercury__string__succeeded;
#line 1844 "string.m"
  }
#line 194 "string.m"
}

#line 179 "string.m"
void MR_CALL 
mercury__string__duplicate_char_3_p_0(
#line 179 "string.m"
  MR_Char mercury__string__Char_4,
#line 179 "string.m"
  MR_Integer mercury__string__Count_5,
#line 179 "string.m"
  MR_String * mercury__string__String_6)
#line 179 "string.m"
{
#line 1827 "string.m"
  {
#line 1827 "string.m"
    MR_bool mercury__string__succeeded;
#line 1827 "string.m"
    MR_Word mercury__string__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1827 "string.m"
    MR_Word mercury__string__V_7_7;
#line 1827 "string.m"
    MR_Word mercury__string__V_6_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1440 "string.m"
    MR_String mercury__string__Str0_23;

#line 145 "list.opt"
    {
#line 145 "list.opt"
      mercury__string__V_7_7 = mercury__list__duplicate_2_3_f_0(mercury__string__TypeCtorInfo_8_8, mercury__string__Count_5, ((MR_Box) (MR_Word) (mercury__string__Char_4)), mercury__string__V_6_15);
    }
#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_7_7, &mercury__string__Str0_23);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      *mercury__string__String_6 = mercury__string__Str0_23;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1441 "string.m"
          return;
        }
#line 1441 "string.m"
      }
#line 1827 "string.m"
  }
#line 179 "string.m"
}

#line 178 "string.m"
MR_String MR_CALL 
mercury__string__duplicate_char_2_f_0(
#line 178 "string.m"
  MR_Char mercury__string__C_4,
#line 178 "string.m"
  MR_Integer mercury__string__N_5)
#line 178 "string.m"
{
#line 1825 "string.m"
  {
#line 1825 "string.m"
    MR_bool mercury__string__succeeded;
#line 1825 "string.m"
    MR_String mercury__string__S_6;

#line 1825 "string.m"
    {
#line 1825 "string.m"
      mercury__string__duplicate_char_3_p_0(mercury__string__C_4, mercury__string__N_5, &mercury__string__S_6);
    }
#line 1825 "string.m"
    return mercury__string__S_6;
#line 1825 "string.m"
  }
#line 178 "string.m"
}

#line 171 "string.m"
MR_bool MR_CALL 
mercury__string__from_code_unit_list_2_p_0(
#line 171 "string.m"
  MR_Word mercury__string__CodeList_1,
#line 171 "string.m"
  MR_String * mercury__string__Str_2)
#line 171 "string.m"
{
#line 1699 "string.m"
  {
#line 1699 "string.m"
    MR_bool mercury__string__succeeded;

#line 1703 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_code_unit_list_2_p_0

	MR_Word CodeList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CodeList =  mercury__string__CodeList_1 ;
		{
#line 1703 "string.m"

    MR_Word list_ptr;
    size_t  size;

    size = 0;
    list_ptr = CodeList;
    while (! MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    MR_allocate_aligned_string_msg(Str, size, MR_ALLOC_ID);

    SUCCESS_INDICATOR = MR_TRUE;
    size = 0;
    list_ptr = CodeList;
    while (! MR_list_is_empty(list_ptr)) {
        int c;
        c = MR_list_head(list_ptr);
        /*
        ** It is an error to put a null character in a string
        ** (see the comments at the top of this file).
        */
        if (c == '\0' || c > 0xff) {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[size] = c;
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    Str[size] = '\0';

    SUCCESS_INDICATOR = SUCCESS_INDICATOR && MR_utf8_verify(Str);

#line 28483 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1703 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1699 "string.m"
    return mercury__string__succeeded;
#line 1699 "string.m"
  }
#line 171 "string.m"
}

#line 165 "string.m"
void MR_CALL 
mercury__string__to_code_unit_list_2_p_0(
#line 165 "string.m"
  MR_String mercury__string__String_3,
#line 165 "string.m"
  MR_Word * mercury__string__List_4)
#line 165 "string.m"
{
#line 1682 "string.m"
  {
#line 1682 "string.m"
    MR_bool mercury__string__succeeded;
#line 1682 "string.m"
    MR_Integer mercury__string__V_6_6;

#line 2398 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2398 "string.m"

    Length = strlen(Str);

#line 28529 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_6_6  = Length;
#line 2398 "string.m"
}
#line 1683 "string.m"
    {
#line 1683 "string.m"
      mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__V_6_6, mercury__string__List_4);
#line 1683 "string.m"
      return;
    }
#line 1682 "string.m"
  }
#line 165 "string.m"
}

#line 161 "string.m"
MR_bool MR_CALL 
mercury__string__semidet_from_rev_char_list_2_p_0(
#line 161 "string.m"
  MR_Word mercury__string__Chars_1,
#line 161 "string.m"
  MR_String * mercury__string__Str_2)
#line 161 "string.m"
{
#line 1582 "string.m"
  {
#line 1582 "string.m"
    MR_bool mercury__string__succeeded;

#line 1586 "string.m"
{
#define MR_PROC_LABEL mercury__string__semidet_from_rev_char_list_2_p_0

	MR_Word Chars;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Chars =  mercury__string__Chars_1 ;
		{
#line 1586 "string.m"
{
    MR_Word list_ptr;
    MR_Word size;
    MR_Char c;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        c = (MR_Char) MR_list_head(list_ptr);
        if (MR_is_ascii(c)) {
            size++;
        } else {
            size += MR_utf8_width(c);
        }
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_ALLOC_ID);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        if (MR_is_ascii(c)) {
            size--;
            Str[size] = c;
        } else {
            size -= MR_utf8_width(c);
            MR_utf8_encode(Str + size, c);
        }
        list_ptr = MR_list_tail(list_ptr);
    }
}
#line 28626 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1586 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1582 "string.m"
    return mercury__string__succeeded;
#line 1582 "string.m"
  }
#line 161 "string.m"
}

#line 153 "string.m"
void MR_CALL 
mercury__string__from_rev_char_list_2_p_0(
#line 153 "string.m"
  MR_Word mercury__string__Chars_3,
#line 153 "string.m"
  MR_String * mercury__string__Str_4)
#line 153 "string.m"
{
#line 1578 "string.m"
  {
#line 1578 "string.m"
    MR_bool mercury__string__succeeded;
#line 1578 "string.m"
    MR_String mercury__string__Str0_5;

#line 1576 "string.m"
    {
#line 1576 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Chars_3, &mercury__string__Str0_5);
    }
#line 1578 "string.m"
    if (mercury__string__succeeded)
#line 1577 "string.m"
      *mercury__string__Str_4 = mercury__string__Str0_5;
#line 1578 "string.m"
    else
#line 1579 "string.m"
      {
#line 1579 "string.m"
        {
#line 1579 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
#line 1579 "string.m"
          return;
        }
#line 1579 "string.m"
      }
#line 1578 "string.m"
  }
#line 153 "string.m"
}

#line 152 "string.m"
MR_String MR_CALL 
mercury__string__from_rev_char_list_1_f_0(
#line 152 "string.m"
  MR_Word mercury__string__Cs_3)
#line 152 "string.m"
{
#line 1578 "string.m"
  {
#line 1578 "string.m"
    MR_bool mercury__string__succeeded;
#line 1578 "string.m"
    MR_String mercury__string__S_4;
#line 1578 "string.m"
    MR_String mercury__string__Str0_7;

#line 1576 "string.m"
    {
#line 1576 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_7);
    }
#line 1578 "string.m"
    if (mercury__string__succeeded)
#line 1577 "string.m"
      mercury__string__S_4 = mercury__string__Str0_7;
#line 1578 "string.m"
    else
#line 1579 "string.m"
      {
#line 1579 "string.m"
        {
#line 1579 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
        }
#line 1579 "string.m"
      }
#line 1578 "string.m"
    return mercury__string__S_4;
#line 1578 "string.m"
  }
#line 152 "string.m"
}

#line 143 "string.m"
MR_bool MR_CALL 
mercury__string__semidet_from_char_list_2_p_0(
#line 143 "string.m"
  MR_Word mercury__string__CharList_1,
#line 143 "string.m"
  MR_String * mercury__string__Str_2)
#line 143 "string.m"
{
#line 1444 "string.m"
  {
#line 1444 "string.m"
    MR_bool mercury__string__succeeded;

#line 1448 "string.m"
{
#define MR_PROC_LABEL mercury__string__semidet_from_char_list_2_p_0

	MR_Word CharList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CharList =  mercury__string__CharList_1 ;
		{
#line 1448 "string.m"
{
    /* mode (uo, in) is det */
    MR_Word char_list_ptr;
    size_t size;
    MR_Char c;

    /*
    ** Loop to calculate list length + sizeof(MR_Word) in `size'
    ** using list in `char_list_ptr'.
    */
    size = 0;
    char_list_ptr = CharList;
    while (! MR_list_is_empty(char_list_ptr)) {
        c = (MR_Char) MR_list_head(char_list_ptr);
        if (MR_is_ascii(c)) {
            size++;
        } else {
            size += MR_utf8_width(c);
        }
        char_list_ptr = MR_list_tail(char_list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_ALLOC_ID);

    /*
    ** Loop to copy the characters from the char_list to the string.
    */
    SUCCESS_INDICATOR = MR_TRUE;
    size = 0;
    char_list_ptr = CharList;
    while (! MR_list_is_empty(char_list_ptr)) {
        c = (MR_Char) MR_list_head(char_list_ptr);
        /*
        ** It is an error to put a null character in a string
        ** (see the comments at the top of this file).
        */
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        if (MR_is_ascii(c)) {
            Str[size] = c;
            size++;
        } else {
            size += MR_utf8_encode(Str + size, c);
        }
        char_list_ptr = MR_list_tail(char_list_ptr);
    }

    Str[size] = '\0';
}
#line 28808 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1448 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1444 "string.m"
    return mercury__string__succeeded;
#line 1444 "string.m"
  }
#line 143 "string.m"
}

#line 135 "string.m"
void MR_CALL 
mercury__string__from_char_list_2_p_1(
#line 135 "string.m"
  MR_Word * mercury__string__Chars_1,
#line 135 "string.m"
  MR_String mercury__string__Str_2)
#line 135 "string.m"
{
#line 1358 "string.m"
  {
#line 1358 "string.m"
    MR_bool mercury__string__succeeded;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_char_list_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_2 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 28863 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Chars_1  = CharList;
#line 1362 "string.m"
}
#line 1358 "string.m"
  }
#line 135 "string.m"
}

#line 134 "string.m"
void MR_CALL 
mercury__string__from_char_list_2_p_0(
#line 134 "string.m"
  MR_Word mercury__string__Chars_1,
#line 134 "string.m"
  MR_String * mercury__string__Str_2)
#line 134 "string.m"
{
#line 1440 "string.m"
  {
#line 1440 "string.m"
    MR_bool mercury__string__succeeded;
#line 1440 "string.m"
    MR_String mercury__string__Str0_7;

#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Chars_1, &mercury__string__Str0_7);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      *mercury__string__Str_2 = mercury__string__Str0_7;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1441 "string.m"
          return;
        }
#line 1441 "string.m"
      }
#line 1440 "string.m"
  }
#line 134 "string.m"
}

#line 132 "string.m"
MR_String MR_CALL 
mercury__string__from_char_list_1_f_0(
#line 132 "string.m"
  MR_Word mercury__string__Cs_3)
#line 132 "string.m"
{
#line 1440 "string.m"
  {
#line 1440 "string.m"
    MR_bool mercury__string__succeeded;
#line 1440 "string.m"
    MR_String mercury__string__S_4;
#line 1440 "string.m"
    MR_String mercury__string__Str0_9;

#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_9);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      mercury__string__S_4 = mercury__string__Str0_9;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1441 "string.m"
      }
#line 1440 "string.m"
    return mercury__string__S_4;
#line 1440 "string.m"
  }
#line 132 "string.m"
}

#line 124 "string.m"
void MR_CALL 
mercury__string__to_char_list_2_p_1(
#line 124 "string.m"
  MR_String * mercury__string__Str_1,
#line 124 "string.m"
  MR_Word mercury__string__CharList_2)
#line 124 "string.m"
{
#line 1440 "string.m"
  {
#line 1440 "string.m"
    MR_bool mercury__string__succeeded;
#line 1440 "string.m"
    MR_String mercury__string__Str0_11;

#line 1438 "string.m"
    {
#line 1438 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__CharList_2, &mercury__string__Str0_11);
    }
#line 1440 "string.m"
    if (mercury__string__succeeded)
#line 1439 "string.m"
      *mercury__string__Str_1 = mercury__string__Str0_11;
#line 1440 "string.m"
    else
#line 1441 "string.m"
      {
#line 1441 "string.m"
        {
#line 1441 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1441 "string.m"
          return;
        }
#line 1441 "string.m"
      }
#line 1440 "string.m"
  }
#line 124 "string.m"
}

#line 123 "string.m"
void MR_CALL 
mercury__string__to_char_list_2_p_0(
#line 123 "string.m"
  MR_String mercury__string__Str_1,
#line 123 "string.m"
  MR_Word * mercury__string__CharList_2)
#line 123 "string.m"
{
#line 1358 "string.m"
  {
#line 1358 "string.m"
    MR_bool mercury__string__succeeded;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 29042 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
#line 1362 "string.m"
}
#line 1358 "string.m"
  }
#line 123 "string.m"
}

#line 121 "string.m"
MR_Word MR_CALL 
mercury__string__to_char_list_1_f_0(
#line 121 "string.m"
  MR_String mercury__string__S_3)
#line 121 "string.m"
{
#line 1358 "string.m"
  {
#line 1358 "string.m"
    MR_bool mercury__string__succeeded;
#line 1358 "string.m"
    MR_Word mercury__string__Cs_4;

#line 1362 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S_3 ;
		{
#line 1362 "string.m"
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}
#line 29092 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Cs_4  = CharList;
#line 1362 "string.m"
}
#line 1358 "string.m"
    return mercury__string__Cs_4;
#line 1358 "string.m"
  }
#line 121 "string.m"
}

void mercury__string__init(void)
{
}

void mercury__string__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_justified_column_0);
	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_justify_sense_0);
	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_line_0);
	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_poly_type_0);
	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_text_file_0);
}

void mercury__string__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module string. */
