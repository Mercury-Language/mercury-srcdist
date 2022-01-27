/*
** Automatically generated from `string.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
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
#include "term_conversion.mih"
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



#line 4734 "string.m"
struct mercury__string__foldr_between_2_6_p_4_env_0_s {
#line 4734 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18;
#line 4734 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__Closure_7;
#line 4734 "string.m"
  MR_String mercury__string__foldr_between_2_6_p_4_env_0__String_8;
#line 4734 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__Start_9;
#line 4734 "string.m"
  MR_Box * mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
#line 4734 "string.m"
  MR_Cont mercury__string__foldr_between_2_6_p_4_env_0__cont;
#line 4734 "string.m"
  void * mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr;
#line 4745 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__J_12;
#line 4743 "string.m"
  MR_Box mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
#line 4734 "string.m"
};

#line 4732 "string.m"
struct mercury__string__foldr_between_2_6_p_3_env_0_s {
#line 4732 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18;
#line 4732 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__Closure_7;
#line 4732 "string.m"
  MR_String mercury__string__foldr_between_2_6_p_3_env_0__String_8;
#line 4732 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__Start_9;
#line 4732 "string.m"
  MR_Box * mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
#line 4732 "string.m"
  MR_Cont mercury__string__foldr_between_2_6_p_3_env_0__cont;
#line 4732 "string.m"
  void * mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr;
#line 4745 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__J_12;
#line 4743 "string.m"
  MR_Box mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
#line 4732 "string.m"
};

#line 4679 "string.m"
struct mercury__string__foldl2_between_2_8_p_5_env_0_s {
#line 4679 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25;
#line 4679 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26;
#line 4679 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9;
#line 4679 "string.m"
  MR_String mercury__string__foldl2_between_2_8_p_5_env_0__String_10;
#line 4679 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__End_12;
#line 4679 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18;
#line 4679 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20;
#line 4679 "string.m"
  MR_Cont mercury__string__foldl2_between_2_8_p_5_env_0__cont;
#line 4679 "string.m"
  void * mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr;
#line 4690 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__J_15;
#line 4688 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21;
#line 4688 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22;
#line 4679 "string.m"
};

#line 4677 "string.m"
struct mercury__string__foldl2_between_2_8_p_4_env_0_s {
#line 4677 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25;
#line 4677 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26;
#line 4677 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9;
#line 4677 "string.m"
  MR_String mercury__string__foldl2_between_2_8_p_4_env_0__String_10;
#line 4677 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__End_12;
#line 4677 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18;
#line 4677 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20;
#line 4677 "string.m"
  MR_Cont mercury__string__foldl2_between_2_8_p_4_env_0__cont;
#line 4677 "string.m"
  void * mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr;
#line 4690 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__J_15;
#line 4688 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21;
#line 4688 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22;
#line 4677 "string.m"
};

#line 4652 "string.m"
struct mercury__string__foldl_between_2_6_p_4_env_0_s {
#line 4652 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18;
#line 4652 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__Closure_7;
#line 4652 "string.m"
  MR_String mercury__string__foldl_between_2_6_p_4_env_0__String_8;
#line 4652 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__End_10;
#line 4652 "string.m"
  MR_Box * mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
#line 4652 "string.m"
  MR_Cont mercury__string__foldl_between_2_6_p_4_env_0__cont;
#line 4652 "string.m"
  void * mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr;
#line 4663 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__J_12;
#line 4661 "string.m"
  MR_Box mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
#line 4652 "string.m"
};

#line 4650 "string.m"
struct mercury__string__foldl_between_2_6_p_3_env_0_s {
#line 4650 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18;
#line 4650 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__Closure_7;
#line 4650 "string.m"
  MR_String mercury__string__foldl_between_2_6_p_3_env_0__String_8;
#line 4650 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__End_10;
#line 4650 "string.m"
  MR_Box * mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
#line 4650 "string.m"
  MR_Cont mercury__string__foldl_between_2_6_p_3_env_0__cont;
#line 4650 "string.m"
  void * mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr;
#line 4663 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__J_12;
#line 4661 "string.m"
  MR_Box mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
#line 4650 "string.m"
};

#line 3312 "string.m"
struct mercury__string__mercury_append_3_p_3_env_0_s {
#line 3312 "string.m"
  MR_String * mercury__string__mercury_append_3_p_3_env_0__X_4;
#line 3312 "string.m"
  MR_String * mercury__string__mercury_append_3_p_3_env_0__Y_5;
#line 3312 "string.m"
  MR_Cont mercury__string__mercury_append_3_p_3_env_0__cont;
#line 3312 "string.m"
  void * mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr;
#line 3314 "string.m"
  MR_bool mercury__string__mercury_append_3_p_3_env_0__succeeded;
#line 3314 "string.m"
  MR_Word mercury__string__mercury_append_3_p_3_env_0__XList_7;
#line 3314 "string.m"
  MR_Word mercury__string__mercury_append_3_p_3_env_0__YList_8;
#line 3312 "string.m"
};


#line 263 "string.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__list__ti_list_1builtin__type_ctor_info_string_0;

#line 266 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_0[1];

#line 269 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_0;

#line 272 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_1[1];

#line 275 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_1;

#line 278 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_0[1];

#line 281 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_1[1];

#line 284 "string.c"
static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_justified_column_0[2];

#line 287 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_justified_column_0[2];

#line 290 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justified_column_0[2];

#line 293 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_0;

#line 296 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_1;

#line 299 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_value_ordered_justify_sense_0[2];

#line 302 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_name_ordered_justify_sense_0[2];

#line 305 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justify_sense_0[2];

#line 308 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_line_0[1];

#line 311 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_line_0;

#line 314 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1];

#line 317 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_0;

#line 320 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1];

#line 323 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_1;

#line 326 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1];

#line 329 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_2;

#line 332 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1];

#line 335 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_3;

#line 338 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_0[1];

#line 341 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_1[1];

#line 344 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_2[1];

#line 347 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[1];

#line 350 "string.c"
static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_poly_type_0[4];

#line 353 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[4];

#line 356 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[4];

#line 359 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_text_file_0[1];

#line 362 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_text_file_0;

#line 365 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
#line 368 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 370 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 373 "string.c"
static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
#line 376 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 378 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 380 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 383 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
#line 386 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 388 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 391 "string.c"
static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
#line 394 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 396 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 398 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 401 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
#line 404 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 406 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 409 "string.c"
static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
#line 412 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 414 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 416 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 419 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
#line 422 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 424 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 427 "string.c"
static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
#line 430 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 432 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 434 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 437 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
#line 440 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 442 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 445 "string.c"
static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
#line 448 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 450 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 452 "string.c"
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

#line 4646 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 4646 "string.m"
  MR_String mercury__string__V_21_21,
#line 4646 "string.m"
  MR_String mercury__string__String_8,
#line 4646 "string.m"
  MR_Integer mercury__string__I_9,
#line 4646 "string.m"
  MR_Integer mercury__string__End_10,
#line 4646 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4646 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15);

#line 4646 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4646 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4646 "string.m"
  MR_String mercury__string__String_8,
#line 4646 "string.m"
  MR_Integer mercury__string__I_9,
#line 4646 "string.m"
  MR_Integer mercury__string__End_10,
#line 4646 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4646 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4726 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4726 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4726 "string.m"
  MR_String mercury__string__String_8,
#line 4726 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4726 "string.m"
  MR_Integer mercury__string__I_10,
#line 4726 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4726 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4648 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0(
#line 4648 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4648 "string.m"
  MR_String mercury__string__String_8,
#line 4648 "string.m"
  MR_Integer mercury__string__I_9,
#line 4648 "string.m"
  MR_Integer mercury__string__End_10,
#line 4648 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4648 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 4648 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0(
#line 4648 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4648 "string.m"
  MR_String mercury__string__String_8,
#line 4648 "string.m"
  MR_Integer mercury__string__I_9,
#line 4648 "string.m"
  MR_Integer mercury__string__End_10,
#line 4648 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4648 "string.m"
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

#line 4726 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4726 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4726 "string.m"
  MR_String mercury__string__String_8,
#line 4726 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4726 "string.m"
  MR_Integer mercury__string__I_10,
#line 4726 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4726 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4646 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4646 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4646 "string.m"
  MR_String mercury__string__String_8,
#line 4646 "string.m"
  MR_Integer mercury__string__I_9,
#line 4646 "string.m"
  MR_Integer mercury__string__End_10,
#line 4646 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4646 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4190 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0(
#line 4190 "string.m"
  MR_Char mercury__string__V_21_21,
#line 4190 "string.m"
  MR_String mercury__string__Str_8,
#line 4190 "string.m"
  MR_Integer mercury__string__I_9,
#line 4190 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4190 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4190 "string.m"
  MR_Word * mercury__string__Acc_12);

#line 920 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(
#line 920 "string.m"
  MR_Integer mercury__string__V_20_20,
#line 920 "string.m"
  MR_String mercury__string__String_8,
#line 920 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 920 "string.m"
  MR_Integer mercury__string__End0_10,
#line 920 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 920 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 4171 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(
#line 4171 "string.m"
  MR_Word mercury__string__V_11_11,
#line 4171 "string.m"
  MR_String mercury__string__String_6,
#line 4171 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4171 "string.m"
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

#line 4171 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho10__ho47_4_p_0(
#line 4171 "string.m"
  MR_String mercury__string__String_6,
#line 4171 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4171 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 4151 "string.m"
static void MR_CALL 
mercury__string__words_loop__ho36_4_p_0(
#line 4151 "string.m"
  MR_String mercury__string__String_6,
#line 4151 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4151 "string.m"
  MR_Word * mercury__string__Words_8);

#line 4171 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho35_4_p_0(
#line 4171 "string.m"
  MR_String mercury__string__String_6,
#line 4171 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4171 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 2988 "string.m"
static void MR_CALL 
mercury__string__suffix_length_loop__ho33_4_p_0(
#line 2988 "string.m"
  MR_String mercury__string__S_6,
#line 2988 "string.m"
  MR_Integer mercury__string__I_7,
#line 2988 "string.m"
  MR_Integer * mercury__string__Index_8);

#line 2971 "string.m"
static void MR_CALL 
mercury__string__prefix_length_loop__ho32_4_p_0(
#line 2971 "string.m"
  MR_String mercury__string__S_6,
#line 2971 "string.m"
  MR_Integer mercury__string__I_7,
#line 2971 "string.m"
  MR_Integer * mercury__string__Index_8);

#line 2899 "string.m"
static MR_bool MR_CALL 
mercury__string__all_match_loop__ho30_3_p_0(
#line 2899 "string.m"
  MR_String mercury__string__String_5,
#line 2899 "string.m"
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

#line 4591 "string.m"
static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__4591__1_2_f_0(
#line 4591 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4591 "string.m"
  MR_String mercury__string__HeadVar__2_60);

#line 4461 "string.m"
static MR_Word MR_CALL 
mercury__string__IntroducedFrom__func__replace_all__4461__1_3_f_0(
#line 4461 "string.m"
  MR_String mercury__string__Subst_7,
#line 4461 "string.m"
  MR_Char mercury__string__HeadVar__2_16,
#line 4461 "string.m"
  MR_Word mercury__string__HeadVar__3_17);

#line 4743 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
#line 4743 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4743 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
#line 4743 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4688 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
#line 4688 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4688 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
#line 4688 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4661 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
#line 4661 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4661 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
#line 4661 "string.m"
  void * mercury__string__env_ptr_arg);

#line 3314 "string.m"
static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
#line 3314 "string.m"
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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

#line 5000 "string.m"
MR_bool 
ML_string_to_float(
#line 5000 "string.m"
  MR_String mercury__string__FloatString_1,
#line 5000 "string.m"
  MR_Float * mercury__string__FloatVal_2)
#line 5000 "string.m"
{
#line 5000 "string.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__string__to_float_2_p_0((MR_String) mercury__string__FloatString_1, (MR_Float *) mercury__string__FloatVal_2);
	return ret_value;
}


#line 1220 "string.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1228 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1233 "string.c"
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

#line 1248 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1253 "string.c"
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

#line 1268 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_0[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0
};

#line 1273 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_1[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

#line 1278 "string.c"
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

#line 1292 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_justified_column_0[2] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0,
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

#line 1298 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justified_column_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1304 "string.c"
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

#line 1325 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_0 = {
  (MR_String) "just_left",
  (MR_Integer) 0
};

#line 1331 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_1 = {
  (MR_String) "just_right",
  (MR_Integer) 1
};

#line 1337 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_value_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

#line 1343 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_name_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

#line 1349 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justify_sense_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1355 "string.c"
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

#line 1376 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_line_0[1] = {
  (MR_Integer) 0
};

#line 1381 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_line_0 = {
  (MR_String) "line",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1388 "string.c"
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

#line 1409 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1414 "string.c"
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

#line 1429 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1434 "string.c"
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

#line 1449 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1454 "string.c"
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

#line 1469 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 1474 "string.c"
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

#line 1489 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_0[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_0
};

#line 1494 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_1[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_1
};

#line 1499 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_2[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

#line 1504 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3
};

#line 1509 "string.c"
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

#line 1533 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[4] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3,
  &mercury__string__string__du_functor_desc_poly_type_0_0,
  &mercury__string__string__du_functor_desc_poly_type_0_1,
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

#line 1541 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1549 "string.c"
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

#line 1570 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_text_file_0[1] = {
  (MR_Integer) 0
};

#line 1575 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_text_file_0 = {
  (MR_String) "text_file",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1582 "string.c"
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

#line 1603 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
#line 1606 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1608 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1610 "string.c"
{
#line 1612 "string.c"
  {
#line 1614 "string.c"
    MR_bool mercury__string__succeeded;

#line 1617 "string.c"
    {
#line 1619 "string.c"
      mercury__string__succeeded = mercury__string____Unify____justified_column_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1622 "string.c"
    return mercury__string__succeeded;
#line 1624 "string.c"
  }
#line 1626 "string.c"
}

#line 1629 "string.c"
static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
#line 1632 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1634 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1636 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1638 "string.c"
{
#line 1640 "string.c"
  {
#line 1642 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1645 "string.c"
    {
#line 1647 "string.c"
      mercury__string____Compare____justified_column_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1650 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1652 "string.c"
  }
#line 1654 "string.c"
}

#line 1657 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
#line 1660 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1662 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1664 "string.c"
{
#line 1666 "string.c"
  {
#line 1668 "string.c"
    MR_bool mercury__string__succeeded;

#line 1671 "string.c"
    {
#line 1673 "string.c"
      mercury__string__succeeded = mercury__string____Unify____justify_sense_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1676 "string.c"
    return mercury__string__succeeded;
#line 1678 "string.c"
  }
#line 1680 "string.c"
}

#line 1683 "string.c"
static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
#line 1686 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1688 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1690 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1692 "string.c"
{
#line 1694 "string.c"
  {
#line 1696 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1699 "string.c"
    {
#line 1701 "string.c"
      mercury__string____Compare____justify_sense_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1704 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1706 "string.c"
  }
#line 1708 "string.c"
}

#line 1711 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
#line 1714 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1716 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1718 "string.c"
{
#line 1720 "string.c"
  {
#line 1722 "string.c"
    MR_bool mercury__string__succeeded;

#line 1725 "string.c"
    {
#line 1727 "string.c"
      mercury__string__succeeded = mercury__string____Unify____line_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1730 "string.c"
    return mercury__string__succeeded;
#line 1732 "string.c"
  }
#line 1734 "string.c"
}

#line 1737 "string.c"
static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
#line 1740 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1742 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1744 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1746 "string.c"
{
#line 1748 "string.c"
  {
#line 1750 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1753 "string.c"
    {
#line 1755 "string.c"
      mercury__string____Compare____line_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1758 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1760 "string.c"
  }
#line 1762 "string.c"
}

#line 1765 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
#line 1768 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1770 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1772 "string.c"
{
#line 1774 "string.c"
  {
#line 1776 "string.c"
    MR_bool mercury__string__succeeded;

#line 1779 "string.c"
    {
#line 1781 "string.c"
      mercury__string__succeeded = mercury__string____Unify____poly_type_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1784 "string.c"
    return mercury__string__succeeded;
#line 1786 "string.c"
  }
#line 1788 "string.c"
}

#line 1791 "string.c"
static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
#line 1794 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1796 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1798 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1800 "string.c"
{
#line 1802 "string.c"
  {
#line 1804 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1807 "string.c"
    {
#line 1809 "string.c"
      mercury__string____Compare____poly_type_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1812 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1814 "string.c"
  }
#line 1816 "string.c"
}

#line 1819 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
#line 1822 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1824 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1826 "string.c"
{
#line 1828 "string.c"
  {
#line 1830 "string.c"
    MR_bool mercury__string__succeeded;

#line 1833 "string.c"
    {
#line 1835 "string.c"
      mercury__string__succeeded = mercury__string____Unify____text_file_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1838 "string.c"
    return mercury__string__succeeded;
#line 1840 "string.c"
  }
#line 1842 "string.c"
}

#line 1845 "string.c"
static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
#line 1848 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1850 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1852 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1854 "string.c"
{
#line 1856 "string.c"
  {
#line 1858 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1861 "string.c"
    {
#line 1863 "string.c"
      mercury__string____Compare____text_file_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1866 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1868 "string.c"
  }
#line 1870 "string.c"
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

#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_36_36 ;
	S2 =  mercury__string__V_35_35 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 1963 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_48_48  = S3;
#line 3219 "string.m"
}
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__HB_21_23 ;
	S2 =  mercury__string__V_48_48 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 1990 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_23_25  = S3;
#line 3219 "string.m"
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

#line 4646 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 4646 "string.m"
  MR_String mercury__string__V_21_21,
#line 4646 "string.m"
  MR_String mercury__string__String_8,
#line 4646 "string.m"
  MR_Integer mercury__string__I_9,
#line 4646 "string.m"
  MR_Integer mercury__string__End_10,
#line 4646 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4646 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15)
#line 4646 "string.m"
{
#line 4663 "string.m"
  while (MR_TRUE)
#line 4663 "string.m"
    {
#line 4663 "string.m"
      /* tailcall optimized into a loop */
#line 4663 "string.m"
      {
#line 4663 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4663 "string.m"
        MR_Integer mercury__string__J_12;
#line 4663 "string.m"
        MR_Char mercury__string__Char_13;

#line 4657 "string.m"
        if (mercury__string__succeeded)
#line 4657 "string.m"
          {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2084 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4657 "string.m"
            if (mercury__string__succeeded)
#line 4659 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4657 "string.m"
          }
#line 4663 "string.m"
        if (mercury__string__succeeded)
#line 4661 "string.m"
          {
#line 4661 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4618 "string.m"
            {
#line 4618 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__IntroducedFrom__func__replace_all__4461__1_3_f_0(mercury__string__V_21_21, mercury__string__Char_13, mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4662 "string.m"
            /* direct tailcall eliminated */
#line 4662 "string.m"
            {
#line 4662 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4662 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4662 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4662 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4662 "string.m"
            }
#line 4662 "string.m"
            continue;
#line 4661 "string.m"
          }
#line 4663 "string.m"
        else
#line 4663 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4663 "string.m"
      }
#line 4663 "string.m"
      break;
#line 4663 "string.m"
    }
#line 4646 "string.m"
}

#line 4646 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4646 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4646 "string.m"
  MR_String mercury__string__String_8,
#line 4646 "string.m"
  MR_Integer mercury__string__I_9,
#line 4646 "string.m"
  MR_Integer mercury__string__End_10,
#line 4646 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4646 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4646 "string.m"
{
#line 4663 "string.m"
  while (MR_TRUE)
#line 4663 "string.m"
    {
#line 4663 "string.m"
      /* tailcall optimized into a loop */
#line 4663 "string.m"
      {
#line 4663 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4663 "string.m"
        MR_Integer mercury__string__J_12;
#line 4663 "string.m"
        MR_Char mercury__string__Char_13;

#line 4657 "string.m"
        if (mercury__string__succeeded)
#line 4657 "string.m"
          {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2206 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4657 "string.m"
            if (mercury__string__succeeded)
#line 4659 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4657 "string.m"
          }
#line 4663 "string.m"
        if (mercury__string__succeeded)
#line 4661 "string.m"
          {
#line 4661 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4618 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4618 "string.m"
            {
#line 4618 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4662 "string.m"
            /* direct tailcall eliminated */
#line 4662 "string.m"
            {
#line 4662 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4662 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4662 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4662 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4662 "string.m"
            }
#line 4662 "string.m"
            continue;
#line 4661 "string.m"
          }
#line 4663 "string.m"
        else
#line 4663 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4663 "string.m"
      }
#line 4663 "string.m"
      break;
#line 4663 "string.m"
    }
#line 4646 "string.m"
}

#line 4726 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4726 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4726 "string.m"
  MR_String mercury__string__String_8,
#line 4726 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4726 "string.m"
  MR_Integer mercury__string__I_10,
#line 4726 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4726 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4726 "string.m"
{
#line 4745 "string.m"
  while (MR_TRUE)
#line 4745 "string.m"
    {
#line 4745 "string.m"
      /* tailcall optimized into a loop */
#line 4745 "string.m"
      {
#line 4745 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4745 "string.m"
        MR_Integer mercury__string__J_12;
#line 4745 "string.m"
        MR_Char mercury__string__Char_13;

#line 4739 "string.m"
        if (mercury__string__succeeded)
#line 4739 "string.m"
          {
#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 2333 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4739 "string.m"
            if (mercury__string__succeeded)
#line 4741 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4739 "string.m"
          }
#line 4745 "string.m"
        if (mercury__string__succeeded)
#line 4743 "string.m"
          {
#line 4743 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4710 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4710 "string.m"
            {
#line 4710 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4744 "string.m"
            /* direct tailcall eliminated */
#line 4744 "string.m"
            {
#line 4744 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4744 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4744 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4744 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4744 "string.m"
            }
#line 4744 "string.m"
            continue;
#line 4743 "string.m"
          }
#line 4745 "string.m"
        else
#line 4745 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4745 "string.m"
      }
#line 4745 "string.m"
      break;
#line 4745 "string.m"
    }
#line 4726 "string.m"
}

#line 4648 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0(
#line 4648 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4648 "string.m"
  MR_String mercury__string__String_8,
#line 4648 "string.m"
  MR_Integer mercury__string__I_9,
#line 4648 "string.m"
  MR_Integer mercury__string__End_10,
#line 4648 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4648 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 4648 "string.m"
{
#line 4663 "string.m"
  while (MR_TRUE)
#line 4663 "string.m"
    {
#line 4663 "string.m"
      /* tailcall optimized into a loop */
#line 4663 "string.m"
      {
#line 4663 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4663 "string.m"
        MR_Integer mercury__string__J_12;
#line 4663 "string.m"
        MR_Char mercury__string__Char_13;

#line 4657 "string.m"
        if (mercury__string__succeeded)
#line 4657 "string.m"
          {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2457 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4657 "string.m"
            if (mercury__string__succeeded)
#line 4659 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4657 "string.m"
          }
#line 4663 "string.m"
        if (mercury__string__succeeded)
#line 4661 "string.m"
          {
#line 4661 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4661 "string.m"
            MR_Integer mercury__string__M_24;
#line 4661 "string.m"
            MR_Integer mercury__string__V_25_25;

#line 4982 "string.m"
            {
#line 4982 "string.m"
              mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__V_19_19, mercury__string__Char_13, &mercury__string__M_24);
            }
#line 4661 "string.m"
            if (mercury__string__succeeded)
#line 4661 "string.m"
              {
#line 4983 "string.m"
                mercury__string__V_25_25 = (mercury__string__V_19_19 * mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4983 "string.m"
                mercury__string__STATE_VARIABLE_Acc_16_16 = (mercury__string__V_25_25 + mercury__string__M_24);
#line 4986 "string.m"
                mercury__string__succeeded = (mercury__string__STATE_VARIABLE_Acc_0_14 <= mercury__string__STATE_VARIABLE_Acc_16_16);
#line 4661 "string.m"
                if (mercury__string__succeeded)
#line 4662 "string.m"
                  {
#line 4662 "string.m"
                    /* direct tailcall eliminated */
#line 4662 "string.m"
                    {
#line 4662 "string.m"
                      MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4662 "string.m"
                      MR_Integer mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4662 "string.m"
                      mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4662 "string.m"
                      mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4662 "string.m"
                    }
#line 4662 "string.m"
                    continue;
#line 4662 "string.m"
                  }
#line 4661 "string.m"
              }
#line 4661 "string.m"
          }
#line 4663 "string.m"
        else
#line 4663 "string.m"
          {
#line 4663 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4663 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4663 "string.m"
          }
#line 4663 "string.m"
        return mercury__string__succeeded;
#line 4663 "string.m"
      }
#line 4663 "string.m"
      break;
#line 4663 "string.m"
    }
#line 4648 "string.m"
}

#line 4648 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0(
#line 4648 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4648 "string.m"
  MR_String mercury__string__String_8,
#line 4648 "string.m"
  MR_Integer mercury__string__I_9,
#line 4648 "string.m"
  MR_Integer mercury__string__End_10,
#line 4648 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4648 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 4648 "string.m"
{
#line 4663 "string.m"
  while (MR_TRUE)
#line 4663 "string.m"
    {
#line 4663 "string.m"
      /* tailcall optimized into a loop */
#line 4663 "string.m"
      {
#line 4663 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4663 "string.m"
        MR_Integer mercury__string__J_12;
#line 4663 "string.m"
        MR_Char mercury__string__Char_13;

#line 4657 "string.m"
        if (mercury__string__succeeded)
#line 4657 "string.m"
          {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2609 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4657 "string.m"
            if (mercury__string__succeeded)
#line 4659 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4657 "string.m"
          }
#line 4663 "string.m"
        if (mercury__string__succeeded)
#line 4661 "string.m"
          {
#line 4661 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4661 "string.m"
            MR_Integer mercury__string__M_24;
#line 4661 "string.m"
            MR_Integer mercury__string__V_25_25;

#line 4992 "string.m"
            {
#line 4992 "string.m"
              mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__V_19_19, mercury__string__Char_13, &mercury__string__M_24);
            }
#line 4661 "string.m"
            if (mercury__string__succeeded)
#line 4661 "string.m"
              {
#line 4993 "string.m"
                mercury__string__V_25_25 = (mercury__string__V_19_19 * mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4993 "string.m"
                mercury__string__STATE_VARIABLE_Acc_16_16 = (mercury__string__V_25_25 - mercury__string__M_24);
#line 4996 "string.m"
                mercury__string__succeeded = (mercury__string__STATE_VARIABLE_Acc_16_16 <= mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4661 "string.m"
                if (mercury__string__succeeded)
#line 4662 "string.m"
                  {
#line 4662 "string.m"
                    /* direct tailcall eliminated */
#line 4662 "string.m"
                    {
#line 4662 "string.m"
                      MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4662 "string.m"
                      MR_Integer mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4662 "string.m"
                      mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4662 "string.m"
                      mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4662 "string.m"
                    }
#line 4662 "string.m"
                    continue;
#line 4662 "string.m"
                  }
#line 4661 "string.m"
              }
#line 4661 "string.m"
          }
#line 4663 "string.m"
        else
#line 4663 "string.m"
          {
#line 4663 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4663 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4663 "string.m"
          }
#line 4663 "string.m"
        return mercury__string__succeeded;
#line 4663 "string.m"
      }
#line 4663 "string.m"
      break;
#line 4663 "string.m"
    }
#line 4648 "string.m"
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

#line 4782 "string.m"
            {
#line 4782 "string.m"
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

#line 4726 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4726 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4726 "string.m"
  MR_String mercury__string__String_8,
#line 4726 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4726 "string.m"
  MR_Integer mercury__string__I_10,
#line 4726 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4726 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4726 "string.m"
{
#line 4745 "string.m"
  while (MR_TRUE)
#line 4745 "string.m"
    {
#line 4745 "string.m"
      /* tailcall optimized into a loop */
#line 4745 "string.m"
      {
#line 4745 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4745 "string.m"
        MR_Integer mercury__string__J_12;
#line 4745 "string.m"
        MR_Char mercury__string__Char_13;

#line 4739 "string.m"
        if (mercury__string__succeeded)
#line 4739 "string.m"
          {
#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 2836 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4739 "string.m"
            if (mercury__string__succeeded)
#line 4741 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4739 "string.m"
          }
#line 4745 "string.m"
        if (mercury__string__succeeded)
#line 4743 "string.m"
          {
#line 4743 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4717 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4717 "string.m"
            {
#line 4717 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4744 "string.m"
            /* direct tailcall eliminated */
#line 4744 "string.m"
            {
#line 4744 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4744 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4744 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4744 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4744 "string.m"
            }
#line 4744 "string.m"
            continue;
#line 4743 "string.m"
          }
#line 4745 "string.m"
        else
#line 4745 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4745 "string.m"
      }
#line 4745 "string.m"
      break;
#line 4745 "string.m"
    }
#line 4726 "string.m"
}

#line 4646 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4646 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4646 "string.m"
  MR_String mercury__string__String_8,
#line 4646 "string.m"
  MR_Integer mercury__string__I_9,
#line 4646 "string.m"
  MR_Integer mercury__string__End_10,
#line 4646 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4646 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4646 "string.m"
{
#line 4663 "string.m"
  while (MR_TRUE)
#line 4663 "string.m"
    {
#line 4663 "string.m"
      /* tailcall optimized into a loop */
#line 4663 "string.m"
      {
#line 4663 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4663 "string.m"
        MR_Integer mercury__string__J_12;
#line 4663 "string.m"
        MR_Char mercury__string__Char_13;

#line 4657 "string.m"
        if (mercury__string__succeeded)
#line 4657 "string.m"
          {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2960 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4657 "string.m"
            if (mercury__string__succeeded)
#line 4659 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4657 "string.m"
          }
#line 4663 "string.m"
        if (mercury__string__succeeded)
#line 4661 "string.m"
          {
#line 4661 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4635 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4635 "string.m"
            {
#line 4635 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4662 "string.m"
            /* direct tailcall eliminated */
#line 4662 "string.m"
            {
#line 4662 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4662 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4662 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4662 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4662 "string.m"
            }
#line 4662 "string.m"
            continue;
#line 4661 "string.m"
          }
#line 4663 "string.m"
        else
#line 4663 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4663 "string.m"
      }
#line 4663 "string.m"
      break;
#line 4663 "string.m"
    }
#line 4646 "string.m"
}

#line 4190 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0(
#line 4190 "string.m"
  MR_Char mercury__string__V_21_21,
#line 4190 "string.m"
  MR_String mercury__string__Str_8,
#line 4190 "string.m"
  MR_Integer mercury__string__I_9,
#line 4190 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4190 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4190 "string.m"
  MR_Word * mercury__string__Acc_12)
#line 4190 "string.m"
{
#line 4210 "string.m"
  while (MR_TRUE)
#line 4210 "string.m"
    {
#line 4210 "string.m"
      /* tailcall optimized into a loop */
#line 4210 "string.m"
      {
#line 4210 "string.m"
        MR_bool mercury__string__succeeded;
#line 4210 "string.m"
        MR_Integer mercury__string__J_13;
#line 4210 "string.m"
        MR_Char mercury__string__C_14;

#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 3083 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_13  = PrevIndex;
	 mercury__string__C_14  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4210 "string.m"
        if (mercury__string__succeeded)
#line 4206 "string.m"
          {
#line 4219 "string.m"
            mercury__string__succeeded = (mercury__string__V_21_21 == mercury__string__C_14);
#line 4206 "string.m"
            if (mercury__string__succeeded)
#line 4203 "string.m"
              {
#line 4203 "string.m"
                MR_String mercury__string__Seg_16;
#line 4203 "string.m"
                MR_Word mercury__string__V_18_18;

#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3131 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_16  = SubString;
#line 4109 "string.m"
}
#line 4205 "string.m"
                {
#line 4205 "string.m"
                  mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4205 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Seg_16));
#line 4205 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4205 "string.m"
                }
#line 4205 "string.m"
                /* direct tailcall eliminated */
#line 4205 "string.m"
                {
#line 4205 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;
#line 4205 "string.m"
                  MR_Integer mercury__string__SegEnd__tmp_copy_10 = mercury__string__J_13;
#line 4205 "string.m"
                  MR_Word mercury__string__Acc0__tmp_copy_11 = mercury__string__V_18_18;

#line 4205 "string.m"
                  mercury__string__Acc0_11 = mercury__string__Acc0__tmp_copy_11;
#line 4205 "string.m"
                  mercury__string__SegEnd_10 = mercury__string__SegEnd__tmp_copy_10;
#line 4205 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4205 "string.m"
                }
#line 4205 "string.m"
                continue;
#line 4203 "string.m"
              }
#line 4206 "string.m"
            else
#line 4208 "string.m"
              {
#line 4208 "string.m"
                /* direct tailcall eliminated */
#line 4208 "string.m"
                {
#line 4208 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;

#line 4208 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4208 "string.m"
                }
#line 4208 "string.m"
                continue;
#line 4208 "string.m"
              }
#line 4206 "string.m"
          }
#line 4210 "string.m"
        else
#line 4212 "string.m"
          {
#line 4212 "string.m"
            MR_String mercury__string__Seg_20;

#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3221 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_20  = SubString;
#line 4109 "string.m"
}
#line 4213 "string.m"
            {
#line 4213 "string.m"
              MR_Word base;
#line 4213 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4213 "string.m"
              *mercury__string__Acc_12 = base;
#line 4213 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Seg_20));
#line 4213 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4213 "string.m"
            }
#line 4212 "string.m"
          }
#line 4210 "string.m"
      }
#line 4210 "string.m"
      break;
#line 4210 "string.m"
    }
#line 4190 "string.m"
}

#line 920 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(
#line 920 "string.m"
  MR_Integer mercury__string__V_20_20,
#line 920 "string.m"
  MR_String mercury__string__String_8,
#line 920 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 920 "string.m"
  MR_Integer mercury__string__End0_10,
#line 920 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 920 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 920 "string.m"
{
#line 4629 "string.m"
  {
#line 4629 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4629 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4629 "string.m"
    MR_Integer mercury__string__End_13;
#line 4629 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 3302 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2409 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0(mercury__string__V_20_20, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4629 "string.m"
    return mercury__string__succeeded;
#line 4629 "string.m"
  }
#line 920 "string.m"
}

#line 4171 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(
#line 4171 "string.m"
  MR_Word mercury__string__V_11_11,
#line 4171 "string.m"
  MR_String mercury__string__String_6,
#line 4171 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4171 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4171 "string.m"
{
#line 4180 "string.m"
  while (MR_TRUE)
#line 4180 "string.m"
    {
#line 4180 "string.m"
      /* tailcall optimized into a loop */
#line 4180 "string.m"
      {
#line 4180 "string.m"
        MR_bool mercury__string__succeeded;
#line 4180 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4176 "string.m"
        MR_Char mercury__string__Char_10;
#line 38 "std_util.opt"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3386 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4176 "string.m"
        if (mercury__string__succeeded)
#line 4176 "string.m"
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
#line 4176 "string.m"
          }
#line 4180 "string.m"
        if (mercury__string__succeeded)
#line 4179 "string.m"
          {
#line 4179 "string.m"
            /* direct tailcall eliminated */
#line 4179 "string.m"
            {
#line 4179 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4179 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4179 "string.m"
            }
#line 4179 "string.m"
            continue;
#line 4179 "string.m"
          }
#line 4180 "string.m"
        else
#line 4181 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4180 "string.m"
      }
#line 4180 "string.m"
      break;
#line 4180 "string.m"
    }
#line 4171 "string.m"
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
          mercury__string__V_8_8 = mercury__string__IntroducedFrom__func__word_wrap_loop__4591__1_2_f_0(mercury__string__V_12_12, mercury__string__H_6_6);
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

#line 4414 "string.m"
        {
#line 4414 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__H_6_6, &mercury__string__Length_25);
        }
#line 4415 "string.m"
        mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_13_13);
#line 4419 "string.m"
        if (mercury__string__succeeded)
#line 4416 "string.m"
          {
#line 4416 "string.m"
            MR_Integer mercury__string__Count_26 = (mercury__string__V_13_13 - mercury__string__Length_25);
#line 4416 "string.m"
            MR_String mercury__string__PadString_27;

#line 4417 "string.m"
            {
#line 4417 "string.m"
              mercury__string__duplicate_char_3_p_0(mercury__string__V_12_12, mercury__string__Count_26, &mercury__string__PadString_27);
            }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__H_6_6 ;
	S2 =  mercury__string__PadString_27 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 3584 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3219 "string.m"
}
#line 4416 "string.m"
          }
#line 4419 "string.m"
        else
#line 4420 "string.m"
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

#line 4401 "string.m"
        {
#line 4401 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__H_6_6, &mercury__string__Length_25);
        }
#line 4402 "string.m"
        mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_13_13);
#line 4406 "string.m"
        if (mercury__string__succeeded)
#line 4403 "string.m"
          {
#line 4403 "string.m"
            MR_Integer mercury__string__Count_26 = (mercury__string__V_13_13 - mercury__string__Length_25);
#line 4403 "string.m"
            MR_String mercury__string__PadString_27;

#line 4404 "string.m"
            {
#line 4404 "string.m"
              mercury__string__duplicate_char_3_p_0(mercury__string__V_12_12, mercury__string__Count_26, &mercury__string__PadString_27);
            }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_27 ;
	S2 =  mercury__string__H_6_6 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 3699 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3219 "string.m"
}
#line 4403 "string.m"
          }
#line 4406 "string.m"
        else
#line 4407 "string.m"
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

#line 4171 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho10__ho47_4_p_0(
#line 4171 "string.m"
  MR_String mercury__string__String_6,
#line 4171 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4171 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4171 "string.m"
{
#line 4180 "string.m"
  while (MR_TRUE)
#line 4180 "string.m"
    {
#line 4180 "string.m"
      /* tailcall optimized into a loop */
#line 4180 "string.m"
      {
#line 4180 "string.m"
        MR_bool mercury__string__succeeded;
#line 4180 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4176 "string.m"
        MR_Char mercury__string__Char_10;

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3804 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4176 "string.m"
        if (mercury__string__succeeded)
#line 4176 "string.m"
          {
#line 38 "std_util.opt"
            {
#line 38 "std_util.opt"
              mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
            }
#line 37 "std_util.opt"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4176 "string.m"
          }
#line 4180 "string.m"
        if (mercury__string__succeeded)
#line 4179 "string.m"
          {
#line 4179 "string.m"
            /* direct tailcall eliminated */
#line 4179 "string.m"
            {
#line 4179 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4179 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4179 "string.m"
            }
#line 4179 "string.m"
            continue;
#line 4179 "string.m"
          }
#line 4180 "string.m"
        else
#line 4181 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4180 "string.m"
      }
#line 4180 "string.m"
      break;
#line 4180 "string.m"
    }
#line 4171 "string.m"
}

#line 4151 "string.m"
static void MR_CALL 
mercury__string__words_loop__ho36_4_p_0(
#line 4151 "string.m"
  MR_String mercury__string__String_6,
#line 4151 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4151 "string.m"
  MR_Word * mercury__string__Words_8)
#line 4151 "string.m"
{
#line 4154 "string.m"
  {
#line 4154 "string.m"
    MR_bool mercury__string__succeeded;
#line 4154 "string.m"
    MR_Integer mercury__string__WordEnd_9;

#line 4155 "string.m"
    {
#line 4155 "string.m"
      mercury__string__next_boundary__ho10__ho47_4_p_0(mercury__string__String_6, mercury__string__WordStart_7, &mercury__string__WordEnd_9);
    }
#line 4156 "string.m"
    mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__WordStart_7);
#line 4158 "string.m"
    if (mercury__string__succeeded)
#line 4157 "string.m"
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4158 "string.m"
    else
#line 4159 "string.m"
      {
#line 4159 "string.m"
        MR_String mercury__string__Word_10;
#line 4159 "string.m"
        MR_Integer mercury__string__NextWordStart_11;

#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3920 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Word_10  = SubString;
#line 4109 "string.m"
}
#line 4160 "string.m"
        {
#line 4160 "string.m"
          mercury__string__next_boundary__ho35_4_p_0(mercury__string__String_6, mercury__string__WordEnd_9, &mercury__string__NextWordStart_11);
        }
#line 4161 "string.m"
        mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__NextWordStart_11);
#line 4163 "string.m"
        if (mercury__string__succeeded)
#line 4162 "string.m"
          {
#line 4162 "string.m"
            MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4162 "string.m"
            {
#line 4162 "string.m"
              MR_Word base;
#line 4162 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4162 "string.m"
              *mercury__string__Words_8 = base;
#line 4162 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4162 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__V_14_14));
#line 4162 "string.m"
            }
#line 4162 "string.m"
          }
#line 4163 "string.m"
        else
#line 4164 "string.m"
          {
#line 4164 "string.m"
            MR_Word mercury__string__Words0_12;

#line 4164 "string.m"
            {
#line 4164 "string.m"
              mercury__string__words_loop__ho36_4_p_0(mercury__string__String_6, mercury__string__NextWordStart_11, &mercury__string__Words0_12);
            }
#line 4165 "string.m"
            {
#line 4165 "string.m"
              MR_Word base;
#line 4165 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4165 "string.m"
              *mercury__string__Words_8 = base;
#line 4165 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4165 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Words0_12));
#line 4165 "string.m"
            }
#line 4164 "string.m"
          }
#line 4159 "string.m"
      }
#line 4154 "string.m"
  }
#line 4151 "string.m"
}

#line 4171 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho35_4_p_0(
#line 4171 "string.m"
  MR_String mercury__string__String_6,
#line 4171 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4171 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4171 "string.m"
{
#line 4180 "string.m"
  while (MR_TRUE)
#line 4180 "string.m"
    {
#line 4180 "string.m"
      /* tailcall optimized into a loop */
#line 4180 "string.m"
      {
#line 4180 "string.m"
        MR_bool mercury__string__succeeded;
#line 4180 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4176 "string.m"
        MR_Char mercury__string__Char_10;

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4043 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4176 "string.m"
        if (mercury__string__succeeded)
#line 4177 "string.m"
          {
#line 4177 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 4180 "string.m"
        if (mercury__string__succeeded)
#line 4179 "string.m"
          {
#line 4179 "string.m"
            /* direct tailcall eliminated */
#line 4179 "string.m"
            {
#line 4179 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4179 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4179 "string.m"
            }
#line 4179 "string.m"
            continue;
#line 4179 "string.m"
          }
#line 4180 "string.m"
        else
#line 4181 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4180 "string.m"
      }
#line 4180 "string.m"
      break;
#line 4180 "string.m"
    }
#line 4171 "string.m"
}

#line 2988 "string.m"
static void MR_CALL 
mercury__string__suffix_length_loop__ho33_4_p_0(
#line 2988 "string.m"
  MR_String mercury__string__S_6,
#line 2988 "string.m"
  MR_Integer mercury__string__I_7,
#line 2988 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2988 "string.m"
{
#line 2997 "string.m"
  while (MR_TRUE)
#line 2997 "string.m"
    {
#line 2997 "string.m"
      /* tailcall optimized into a loop */
#line 2997 "string.m"
      {
#line 2997 "string.m"
        MR_bool mercury__string__succeeded;
#line 2997 "string.m"
        MR_Integer mercury__string__J_9;
#line 2993 "string.m"
        MR_Char mercury__string__Char_10;

#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 4147 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2993 "string.m"
        if (mercury__string__succeeded)
#line 2994 "string.m"
          {
#line 2994 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 2997 "string.m"
        if (mercury__string__succeeded)
#line 2996 "string.m"
          {
#line 2996 "string.m"
            /* direct tailcall eliminated */
#line 2996 "string.m"
            {
#line 2996 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2996 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2996 "string.m"
            }
#line 2996 "string.m"
            continue;
#line 2996 "string.m"
          }
#line 2997 "string.m"
        else
#line 2998 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2997 "string.m"
      }
#line 2997 "string.m"
      break;
#line 2997 "string.m"
    }
#line 2988 "string.m"
}

#line 2971 "string.m"
static void MR_CALL 
mercury__string__prefix_length_loop__ho32_4_p_0(
#line 2971 "string.m"
  MR_String mercury__string__S_6,
#line 2971 "string.m"
  MR_Integer mercury__string__I_7,
#line 2971 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2971 "string.m"
{
#line 2980 "string.m"
  while (MR_TRUE)
#line 2980 "string.m"
    {
#line 2980 "string.m"
      /* tailcall optimized into a loop */
#line 2980 "string.m"
      {
#line 2980 "string.m"
        MR_bool mercury__string__succeeded;
#line 2980 "string.m"
        MR_Integer mercury__string__J_9;
#line 2976 "string.m"
        MR_Char mercury__string__Char_10;

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4248 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2976 "string.m"
        if (mercury__string__succeeded)
#line 2977 "string.m"
          {
#line 2977 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 2980 "string.m"
        if (mercury__string__succeeded)
#line 2979 "string.m"
          {
#line 2979 "string.m"
            /* direct tailcall eliminated */
#line 2979 "string.m"
            {
#line 2979 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2979 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2979 "string.m"
            }
#line 2979 "string.m"
            continue;
#line 2979 "string.m"
          }
#line 2980 "string.m"
        else
#line 2981 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2980 "string.m"
      }
#line 2980 "string.m"
      break;
#line 2980 "string.m"
    }
#line 2971 "string.m"
}

#line 2899 "string.m"
static MR_bool MR_CALL 
mercury__string__all_match_loop__ho30_3_p_0(
#line 2899 "string.m"
  MR_String mercury__string__String_5,
#line 2899 "string.m"
  MR_Integer mercury__string__Cur_6)
#line 2899 "string.m"
{
#line 2906 "string.m"
  while (MR_TRUE)
#line 2906 "string.m"
    {
#line 2906 "string.m"
      /* tailcall optimized into a loop */
#line 2906 "string.m"
      {
#line 2906 "string.m"
        MR_bool mercury__string__succeeded;
#line 2906 "string.m"
        MR_Integer mercury__string__Next_7;
#line 2906 "string.m"
        MR_Char mercury__string__Char_8;

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4347 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2906 "string.m"
        if (mercury__string__succeeded)
#line 2904 "string.m"
          {
#line 2904 "string.m"
            {
#line 2904 "string.m"
              mercury__string__succeeded = mercury__char__is_alnum_1_p_0(mercury__string__Char_8);
            }
#line 2904 "string.m"
            if (mercury__string__succeeded)
#line 2905 "string.m"
              {
#line 2905 "string.m"
                /* direct tailcall eliminated */
#line 2905 "string.m"
                {
#line 2905 "string.m"
                  MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 2905 "string.m"
                  mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 2905 "string.m"
                }
#line 2905 "string.m"
                continue;
#line 2905 "string.m"
              }
#line 2904 "string.m"
          }
#line 2906 "string.m"
        else
#line 2907 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 2906 "string.m"
        return mercury__string__succeeded;
#line 2906 "string.m"
      }
#line 2906 "string.m"
      break;
#line 2906 "string.m"
    }
#line 2899 "string.m"
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
#line 4801 "string.m"
        MR_Word mercury__string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__H_6_6, (MR_Integer) 1)));

#line 4801 "string.m"
        if (((MR_tag((MR_Word) mercury__string__V_19_19)) == (MR_mktag((MR_Integer) 0))))
#line 4801 "string.m"
          mercury__string__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_19_19, (MR_Integer) 0)));
#line 4801 "string.m"
        else
#line 4802 "string.m"
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

#line 2469 "string.m"
            {
#line 2469 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__H_10_9, &mercury__string__Length_19);
            }
#line 4936 "string.m"
            mercury__string__succeeded = (mercury__string__Length_19 > mercury__string__HeadVar__3_3);
#line 4938 "string.m"
            if (mercury__string__succeeded)
#line 4937 "string.m"
              mercury__string__STATE_VARIABLE_A_15_15_13 = mercury__string__Length_19;
#line 4938 "string.m"
            else
#line 4939 "string.m"
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

#line 4591 "string.m"
static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__4591__1_2_f_0(
#line 4591 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4591 "string.m"
  MR_String mercury__string__HeadVar__2_60)
#line 4591 "string.m"
{
#line 4591 "string.m"
  {
#line 4591 "string.m"
    MR_bool mercury__string__succeeded;
#line 4591 "string.m"
    MR_String mercury__string__HeadVar__3_61;
#line 4591 "string.m"
    MR_String mercury__string__V_62_62;

#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__word_wrap_loop__4591__1_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__WordSep_2 ;
	S2 =  (MR_String) "\n" ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 4807 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_62_62  = S3;
#line 3219 "string.m"
}
#line 4591 "string.m"
    {
#line 4591 "string.m"
      return mercury__string__HeadVar__3_61 = mercury__string__f_43_43_2_f_0(mercury__string__HeadVar__2_60, mercury__string__V_62_62);
    }
#line 4591 "string.m"
    return mercury__string__HeadVar__3_61;
#line 4591 "string.m"
  }
#line 4591 "string.m"
}

#line 4461 "string.m"
static MR_Word MR_CALL 
mercury__string__IntroducedFrom__func__replace_all__4461__1_3_f_0(
#line 4461 "string.m"
  MR_String mercury__string__Subst_7,
#line 4461 "string.m"
  MR_Char mercury__string__HeadVar__2_16,
#line 4461 "string.m"
  MR_Word mercury__string__HeadVar__3_17)
#line 4461 "string.m"
{
#line 4461 "string.m"
  {
#line 4461 "string.m"
    MR_bool mercury__string__succeeded;
#line 4461 "string.m"
    MR_Word mercury__string__HeadVar__4_18;
#line 4461 "string.m"
    MR_String mercury__string__V_19_19;
#line 4461 "string.m"
    MR_String mercury__string__V_20_20;
#line 4461 "string.m"
    MR_Word mercury__string__V_35_35;
#line 4461 "string.m"
    MR_Word mercury__string__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1451 "string.m"
    MR_String mercury__string__Str0_45;

#line 5127 "string.m"
    {
#line 5127 "string.m"
      mercury__string__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_35_35, 0) = ((MR_Box) (MR_Word) (mercury__string__HeadVar__2_16));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_35_35, 1) = ((MR_Box) (mercury__string__V_36_36));
#line 5127 "string.m"
    }
#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_35_35, &mercury__string__Str0_45);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      mercury__string__V_20_20 = mercury__string__Str0_45;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1452 "string.m"
      }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__replace_all__4461__1_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_20_20 ;
	S2 =  mercury__string__Subst_7 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 4904 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_19_19  = S3;
#line 3219 "string.m"
}
#line 4461 "string.m"
    {
#line 4461 "string.m"
      mercury__string__HeadVar__4_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4461 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_18, 0) = ((MR_Box) (mercury__string__V_19_19));
#line 4461 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_18, 1) = ((MR_Box) (mercury__string__HeadVar__3_17));
#line 4461 "string.m"
    }
#line 4461 "string.m"
    return mercury__string__HeadVar__4_18;
#line 4461 "string.m"
  }
#line 4461 "string.m"
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
#line 4952 "string.c"
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

#line 4980 "string.c"

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

#line 5049 "string.c"
        mercury__string__succeeded = (strcmp(mercury__string__V_3_3, mercury__string__V_4_4) == 0);
#line 107 "string.m"
      }
#line 107 "string.m"
    return mercury__string__succeeded;
#line 107 "string.m"
  }
#line 107 "string.m"
}

#line 1245 "string.m"
void MR_CALL 
mercury__string____Compare____poly_type_0_0(
#line 1245 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 1245 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1245 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 1245 "string.m"
{
#line 1245 "string.m"
  {
#line 1245 "string.m"
    MR_bool mercury__string__succeeded;
#line 1245 "string.m"
    MR_Integer mercury__string__CastX_36 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 1245 "string.m"
    MR_Integer mercury__string__CastY_37 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 1245 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_36 == mercury__string__CastY_37);
#line 1245 "string.m"
    if (mercury__string__succeeded)
#line 5084 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 1245 "string.m"
    else
#line 1245 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 1245 "string.m"
        {
#line 1245 "string.m"
          MR_Char mercury__string__V_42_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1245 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1245 "string.m"
            {
#line 1245 "string.m"
              MR_Char mercury__string__V_35_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 1245 "string.m"
              MR_Integer mercury__string__XI_7_49;
#line 1245 "string.m"
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

#line 5119 "string.c"

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

#line 5139 "string.c"

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
#line 1245 "string.m"
            }
#line 1245 "string.m"
          else
#line 1245 "string.m"
            if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5174 "string.c"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1245 "string.m"
            else
#line 1245 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5180 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1245 "string.m"
              else
#line 5184 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1245 "string.m"
        }
#line 1245 "string.m"
      else
#line 1245 "string.m"
        if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1245 "string.m"
          {
#line 1245 "string.m"
            MR_Float mercury__string__V_43_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1245 "string.m"
            if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5199 "string.c"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1245 "string.m"
            else
#line 1245 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1245 "string.m"
                {
#line 1245 "string.m"
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
#line 1245 "string.m"
                }
#line 1245 "string.m"
              else
#line 1245 "string.m"
                if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5238 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1245 "string.m"
                else
#line 5242 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1245 "string.m"
          }
#line 1245 "string.m"
        else
#line 1245 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1245 "string.m"
            {
#line 1245 "string.m"
              MR_Integer mercury__string__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1245 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5257 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1245 "string.m"
              else
#line 1245 "string.m"
                if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5263 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1245 "string.m"
                else
#line 1245 "string.m"
                  if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1245 "string.m"
                    {
#line 1245 "string.m"
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
#line 1245 "string.m"
                    }
#line 1245 "string.m"
                  else
#line 5300 "string.c"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1245 "string.m"
            }
#line 1245 "string.m"
          else
#line 1245 "string.m"
            {
#line 1245 "string.m"
              MR_String mercury__string__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1245 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5313 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1245 "string.m"
              else
#line 1245 "string.m"
                if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5319 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1245 "string.m"
                else
#line 1245 "string.m"
                  if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5325 "string.c"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1245 "string.m"
                  else
#line 1245 "string.m"
                    {
#line 1245 "string.m"
                      MR_String mercury__string__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 1245 "string.m"
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

#line 5351 "string.c"

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
#line 1245 "string.m"
                    }
#line 1245 "string.m"
            }
#line 1245 "string.m"
  }
#line 1245 "string.m"
}

#line 1245 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0(
#line 1245 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1245 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 1245 "string.m"
{
#line 1245 "string.m"
  {
#line 1245 "string.m"
    MR_bool mercury__string__succeeded;
#line 1245 "string.m"
    MR_Integer mercury__string__CastX_11 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 1245 "string.m"
    MR_Integer mercury__string__CastY_12 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 1245 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_11 == mercury__string__CastY_12);
#line 1245 "string.m"
    if (mercury__string__succeeded)
#line 1245 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 1245 "string.m"
    else
#line 1245 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 1245 "string.m"
        {
#line 1245 "string.m"
          MR_Char mercury__string__V_9_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1245 "string.m"
          MR_Char mercury__string__V_10_10;

#line 1245 "string.m"
          mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1245 "string.m"
          if (mercury__string__succeeded)
#line 1245 "string.m"
            {
#line 1245 "string.m"
              mercury__string__V_10_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5432 "string.c"
              mercury__string__succeeded = (mercury__string__V_9_9 == mercury__string__V_10_10);
#line 1245 "string.m"
            }
#line 1245 "string.m"
        }
#line 1245 "string.m"
      else
#line 1245 "string.m"
        if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1245 "string.m"
          {
#line 1245 "string.m"
            MR_Float mercury__string__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1245 "string.m"
            MR_Float mercury__string__V_4_4;

#line 1245 "string.m"
            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1245 "string.m"
            if (mercury__string__succeeded)
#line 1245 "string.m"
              {
#line 1245 "string.m"
                mercury__string__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5457 "string.c"
                mercury__string__succeeded = (mercury__string__V_3_3 == mercury__string__V_4_4);
#line 1245 "string.m"
              }
#line 1245 "string.m"
          }
#line 1245 "string.m"
        else
#line 1245 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1245 "string.m"
            {
#line 1245 "string.m"
              MR_Integer mercury__string__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1245 "string.m"
              MR_Integer mercury__string__V_6_6;

#line 1245 "string.m"
              mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1245 "string.m"
              if (mercury__string__succeeded)
#line 1245 "string.m"
                {
#line 1245 "string.m"
                  mercury__string__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5482 "string.c"
                  mercury__string__succeeded = (mercury__string__V_5_5 == mercury__string__V_6_6);
#line 1245 "string.m"
                }
#line 1245 "string.m"
            }
#line 1245 "string.m"
          else
#line 1245 "string.m"
            {
#line 1245 "string.m"
              MR_String mercury__string__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1245 "string.m"
              MR_String mercury__string__V_8_8;

#line 1245 "string.m"
              mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1245 "string.m"
              if (mercury__string__succeeded)
#line 1245 "string.m"
                {
#line 1245 "string.m"
                  mercury__string__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5505 "string.c"
                  mercury__string__succeeded = (strcmp(mercury__string__V_7_7, mercury__string__V_8_8) == 0);
#line 1245 "string.m"
                }
#line 1245 "string.m"
            }
#line 1245 "string.m"
    return mercury__string__succeeded;
#line 1245 "string.m"
  }
#line 1245 "string.m"
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
#line 5542 "string.c"
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

#line 5570 "string.c"

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

#line 5639 "string.c"
        mercury__string__succeeded = (strcmp(mercury__string__V_3_3, mercury__string__V_4_4) == 0);
#line 101 "string.m"
      }
#line 101 "string.m"
    return mercury__string__succeeded;
#line 101 "string.m"
  }
#line 101 "string.m"
}

#line 4889 "string.m"
void MR_CALL 
mercury__string____Compare____justify_sense_0_0(
#line 4889 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 4889 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 4889 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 4889 "string.m"
{
#line 4889 "string.m"
  {
#line 4889 "string.m"
    MR_bool mercury__string__succeeded;
#line 4889 "string.m"
    MR_Integer mercury__string__Cast_HeadVar1_4 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 4889 "string.m"
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
#line 4889 "string.m"
  }
#line 4889 "string.m"
}

#line 4889 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0(
#line 4889 "string.m"
  MR_Word mercury__string__HeadVar__2_1,
#line 4889 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 4889 "string.m"
{
#line 5706 "string.c"
  {
#line 5708 "string.c"
    MR_bool mercury__string__succeeded = (mercury__string__HeadVar__2_1 == mercury__string__HeadVar__2_2);

#line 5711 "string.c"
    return mercury__string__succeeded;
#line 5713 "string.c"
  }
#line 4889 "string.m"
}

#line 1037 "string.m"
void MR_CALL 
mercury__string____Compare____justified_column_0_0(
#line 1037 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 1037 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1037 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 1037 "string.m"
{
#line 1037 "string.m"
  {
#line 1037 "string.m"
    MR_bool mercury__string__succeeded;
#line 1037 "string.m"
    MR_Integer mercury__string__CastX_12 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 1037 "string.m"
    MR_Integer mercury__string__CastY_13 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 1037 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_12 == mercury__string__CastY_13);
#line 1037 "string.m"
    if (mercury__string__succeeded)
#line 5742 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 1037 "string.m"
    else
#line 1037 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1037 "string.m"
        {
#line 1037 "string.m"
          MR_Word mercury__string__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1037 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1037 "string.m"
            {
#line 1037 "string.m"
              MR_Word mercury__string__TypeInfo_15_15 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 1037 "string.m"
              MR_Word mercury__string__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 1037 "string.m"
              {
#line 1037 "string.m"
                mercury__builtin__compare_3_p_0(mercury__string__TypeInfo_15_15, mercury__string__HeadVar__1_1, ((MR_Box) (mercury__string__V_16_16)), ((MR_Box) (mercury__string__V_5_5)));
#line 1037 "string.m"
                return;
              }
#line 1037 "string.m"
            }
#line 1037 "string.m"
          else
#line 5773 "string.c"
            *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1037 "string.m"
        }
#line 1037 "string.m"
      else
#line 1037 "string.m"
        {
#line 1037 "string.m"
          MR_Word mercury__string__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1037 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5786 "string.c"
            *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1037 "string.m"
          else
#line 1037 "string.m"
            {
#line 1037 "string.m"
              MR_Word mercury__string__TypeInfo_14_14 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 1037 "string.m"
              MR_Word mercury__string__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 1037 "string.m"
              {
#line 1037 "string.m"
                mercury__builtin__compare_3_p_0(mercury__string__TypeInfo_14_14, mercury__string__HeadVar__1_1, ((MR_Box) (mercury__string__V_17_17)), ((MR_Box) (mercury__string__V_11_11)));
#line 1037 "string.m"
                return;
              }
#line 1037 "string.m"
            }
#line 1037 "string.m"
        }
#line 1037 "string.m"
  }
#line 1037 "string.m"
}

#line 1037 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0(
#line 1037 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1037 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 1037 "string.m"
{
#line 1037 "string.m"
  {
#line 1037 "string.m"
    MR_bool mercury__string__succeeded;
#line 1037 "string.m"
    MR_Integer mercury__string__CastX_7 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 1037 "string.m"
    MR_Integer mercury__string__CastY_8 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 1037 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_7 == mercury__string__CastY_8);
#line 1037 "string.m"
    if (mercury__string__succeeded)
#line 1037 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 1037 "string.m"
    else
#line 1037 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1037 "string.m"
        {
#line 1037 "string.m"
          MR_Word mercury__string__TypeInfo_9_9;
#line 1037 "string.m"
          MR_Word mercury__string__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1037 "string.m"
          MR_Word mercury__string__V_4_4;

#line 1037 "string.m"
          mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1037 "string.m"
          if (mercury__string__succeeded)
#line 1037 "string.m"
            {
#line 1037 "string.m"
              mercury__string__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5858 "string.c"
              mercury__string__TypeInfo_9_9 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 5860 "string.c"
              {
#line 5862 "string.c"
                return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_9_9, ((MR_Box) (mercury__string__V_3_3)), ((MR_Box) (mercury__string__V_4_4)));
              }
#line 1037 "string.m"
            }
#line 1037 "string.m"
        }
#line 1037 "string.m"
      else
#line 1037 "string.m"
        {
#line 1037 "string.m"
          MR_Word mercury__string__TypeInfo_10_10;
#line 1037 "string.m"
          MR_Word mercury__string__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1037 "string.m"
          MR_Word mercury__string__V_6_6;

#line 1037 "string.m"
          mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1037 "string.m"
          if (mercury__string__succeeded)
#line 1037 "string.m"
            {
#line 1037 "string.m"
              mercury__string__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5888 "string.c"
              mercury__string__TypeInfo_10_10 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 5890 "string.c"
              {
#line 5892 "string.c"
                return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_10_10, ((MR_Box) (mercury__string__V_5_5)), ((MR_Box) (mercury__string__V_6_6)));
              }
#line 1037 "string.m"
            }
#line 1037 "string.m"
        }
#line 1037 "string.m"
    return mercury__string__succeeded;
#line 1037 "string.m"
  }
#line 1037 "string.m"
}

#line 5343 "string.m"
MR_Integer MR_CALL 
mercury__string__max_precision_0_f_0(void)
#line 5343 "string.m"
{
#line 5345 "string.m"
  {
#line 5345 "string.m"
    MR_bool mercury__string__succeeded;

#line 5345 "string.m"
    return (MR_Integer) 17;
#line 5345 "string.m"
  }
#line 5343 "string.m"
}

#line 5337 "string.m"
MR_Integer MR_CALL 
mercury__string__min_precision_0_f_0(void)
#line 5337 "string.m"
{
#line 5339 "string.m"
  {
#line 5339 "string.m"
    MR_bool mercury__string__succeeded;

#line 5339 "string.m"
    return (MR_Integer) 15;
#line 5339 "string.m"
  }
#line 5337 "string.m"
}

#line 5319 "string.m"
MR_String MR_CALL 
mercury__string__float_to_string_loop_2_f_0(
#line 5319 "string.m"
  MR_Integer mercury__string__Prec_4,
#line 5319 "string.m"
  MR_Float mercury__string__Float_5)
#line 5319 "string.m"
{
#line 5321 "string.m"
  while (MR_TRUE)
#line 5321 "string.m"
    {
#line 5321 "string.m"
      /* tailcall optimized into a loop */
#line 5321 "string.m"
      {
#line 5321 "string.m"
        MR_bool mercury__string__succeeded;
#line 5321 "string.m"
        MR_String mercury__string__String_6;
#line 5321 "string.m"
        MR_String mercury__string__Tmp_7;
#line 5321 "string.m"
        MR_String mercury__string__V_8_8;
#line 5321 "string.m"
        MR_Word mercury__string__V_9_9;
#line 5321 "string.m"
        MR_String mercury__string__V_11_11;
#line 5321 "string.m"
        MR_String mercury__string__V_12_12;
#line 5321 "string.m"
        MR_Word mercury__string__V_14_14;
#line 5321 "string.m"
        MR_Word mercury__string__V_15_15;

#line 5137 "string.m"
        {
#line 5137 "string.m"
          mercury__string__int_to_base_string_3_p_0(mercury__string__Prec_4, (MR_Integer) 10, &mercury__string__V_12_12);
        }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_12_12 ;
	S2 =  (MR_String) "g" ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6001 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = S3;
#line 3219 "string.m"
}
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "%#." ;
	S2 =  mercury__string__V_11_11 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6028 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3219 "string.m"
}
#line 5322 "string.m"
        {
#line 5322 "string.m"
          mercury__string__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 5322 "string.m"
          MR_hl_field(MR_mktag(0), mercury__string__V_14_14, 0) = MR_box_float(mercury__string__Float_5);
#line 5322 "string.m"
        }
#line 5322 "string.m"
        mercury__string__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5322 "string.m"
        {
#line 5322 "string.m"
          mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5322 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_9_9, 0) = ((MR_Box) (mercury__string__V_14_14));
#line 5322 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_9_9, 1) = ((MR_Box) (mercury__string__V_15_15));
#line 5322 "string.m"
        }
#line 5407 "string.m"
        {
#line 5407 "string.m"
          mercury__string__format__format_impl_3_p_0(mercury__string__V_8_8, mercury__string__V_9_9, &mercury__string__Tmp_7);
        }
#line 5323 "string.m"
        mercury__string__succeeded = (mercury__string__Prec_4 == (MR_Integer) 17);
#line 5325 "string.m"
        if (mercury__string__succeeded)
#line 5324 "string.m"
          mercury__string__String_6 = mercury__string__Tmp_7;
#line 5325 "string.m"
        else
#line 5328 "string.m"
          {
#line 5326 "string.m"
            MR_Float mercury__string__V_19_19;

#line 5009 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__Tmp_7 ;
		{
#line 5009 "string.m"
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
#line 6095 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__V_19_19  = FloatVal;
#line 5009 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5326 "string.m"
            if (mercury__string__succeeded)
#line 5326 "string.m"
              mercury__string__succeeded = (mercury__string__Float_5 == mercury__string__V_19_19);
#line 5328 "string.m"
            if (mercury__string__succeeded)
#line 5327 "string.m"
              mercury__string__String_6 = mercury__string__Tmp_7;
#line 5328 "string.m"
            else
#line 5329 "string.m"
              {
#line 5329 "string.m"
                MR_Integer mercury__string__V_16_16 = (mercury__string__Prec_4 + (MR_Integer) 1);

#line 5329 "string.m"
                /* direct tailcall eliminated */
#line 5329 "string.m"
                {
#line 5329 "string.m"
                  MR_Integer mercury__string__Prec__tmp_copy_4 = mercury__string__V_16_16;

#line 5329 "string.m"
                  mercury__string__Prec_4 = mercury__string__Prec__tmp_copy_4;
#line 5329 "string.m"
                }
#line 5329 "string.m"
                continue;
#line 5329 "string.m"
              }
#line 5328 "string.m"
          }
#line 5321 "string.m"
        return mercury__string__String_6;
#line 5321 "string.m"
      }
#line 5321 "string.m"
      break;
#line 5321 "string.m"
    }
#line 5319 "string.m"
}

#line 5223 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_group_2_6_p_0(
#line 5223 "string.m"
  MR_Integer mercury__string__NegN_7,
#line 5223 "string.m"
  MR_Integer mercury__string__Base_8,
#line 5223 "string.m"
  MR_Integer mercury__string__Curr_9,
#line 5223 "string.m"
  MR_Integer mercury__string__GroupLength_10,
#line 5223 "string.m"
  MR_String mercury__string__Sep_11,
#line 5223 "string.m"
  MR_String * mercury__string__Str_12)
#line 5223 "string.m"
{
#line 5234 "string.m"
  {
#line 5234 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Curr_9 == mercury__string__GroupLength_10);
#line 5228 "string.m"
    MR_Integer mercury__string__V_19_19;

#line 5228 "string.m"
    if (mercury__string__succeeded)
#line 5228 "string.m"
      {
#line 5229 "string.m"
        mercury__string__V_19_19 = (MR_Integer) 0;
#line 5229 "string.m"
        mercury__string__succeeded = (mercury__string__GroupLength_10 > mercury__string__V_19_19);
#line 5228 "string.m"
      }
#line 5234 "string.m"
    if (mercury__string__succeeded)
#line 5232 "string.m"
      {
#line 5232 "string.m"
        MR_String mercury__string__Str1_13;

#line 5231 "string.m"
        {
#line 5231 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN_7, mercury__string__Base_8, (MR_Integer) 0, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_13);
        }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_13 ;
	S2 =  mercury__string__Sep_11 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6214 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
#line 3219 "string.m"
}
#line 5232 "string.m"
      }
#line 5234 "string.m"
    else
#line 5239 "string.m"
      {
#line 5235 "string.m"
        MR_Integer mercury__string__V_21_21 = ((MR_Integer) 0 - mercury__string__Base_8);

#line 5235 "string.m"
        mercury__string__succeeded = (mercury__string__NegN_7 > mercury__string__V_21_21);
#line 5239 "string.m"
        if (mercury__string__succeeded)
#line 5236 "string.m"
          {
#line 5236 "string.m"
            MR_Integer mercury__string__N_14 = ((MR_Integer) 0 - mercury__string__NegN_7);
#line 5236 "string.m"
            MR_Char mercury__string__DigitChar_15;
#line 5236 "string.m"
            MR_Word mercury__string__V_45_45;
#line 5236 "string.m"
            MR_Word mercury__string__V_46_46;
#line 1451 "string.m"
            MR_String mercury__string__Str0_55;

#line 5237 "string.m"
            {
#line 5237 "string.m"
              mercury__string__DigitChar_15 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N_14);
            }
#line 5127 "string.m"
            mercury__string__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5127 "string.m"
            {
#line 5127 "string.m"
              mercury__string__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5127 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_15));
#line 5127 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 1) = ((MR_Box) (mercury__string__V_46_46));
#line 5127 "string.m"
            }
#line 1449 "string.m"
            {
#line 1449 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_45_45, &mercury__string__Str0_55);
            }
#line 1451 "string.m"
            if (mercury__string__succeeded)
#line 1450 "string.m"
              *mercury__string__Str_12 = mercury__string__Str0_55;
#line 1451 "string.m"
            else
#line 1452 "string.m"
              {
#line 1452 "string.m"
                {
#line 1452 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1452 "string.m"
                  return;
                }
#line 1452 "string.m"
              }
#line 5236 "string.m"
          }
#line 5239 "string.m"
        else
#line 5240 "string.m"
          {
#line 5240 "string.m"
            MR_Integer mercury__string__NegN1_16;
#line 5240 "string.m"
            MR_Integer mercury__string__N10_17;
#line 5240 "string.m"
            MR_String mercury__string__DigitString_18;
#line 5240 "string.m"
            MR_Integer mercury__string__V_22_22;
#line 5240 "string.m"
            MR_Integer mercury__string__V_23_23;
#line 5240 "string.m"
            MR_String mercury__string__Str1_25;
#line 5240 "string.m"
            MR_Char mercury__string__DigitChar_26;
#line 5240 "string.m"
            MR_Word mercury__string__V_65_65;
#line 5240 "string.m"
            MR_Word mercury__string__V_66_66;
#line 1451 "string.m"
            MR_String mercury__string__Str0_75;

#line 303 "int.opt"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 303 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6328 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 303 "int.opt"
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
#line 5241 "string.m"
            mercury__string__V_22_22 = (mercury__string__NegN1_16 * mercury__string__Base_8);
#line 5241 "string.m"
            mercury__string__N10_17 = (mercury__string__V_22_22 - mercury__string__NegN_7);
#line 5242 "string.m"
            {
#line 5242 "string.m"
              mercury__string__DigitChar_26 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N10_17);
            }
#line 5127 "string.m"
            mercury__string__V_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5127 "string.m"
            {
#line 5127 "string.m"
              mercury__string__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5127 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_65_65, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_26));
#line 5127 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_65_65, 1) = ((MR_Box) (mercury__string__V_66_66));
#line 5127 "string.m"
            }
#line 1449 "string.m"
            {
#line 1449 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_65_65, &mercury__string__Str0_75);
            }
#line 1451 "string.m"
            if (mercury__string__succeeded)
#line 1450 "string.m"
              mercury__string__DigitString_18 = mercury__string__Str0_75;
#line 1451 "string.m"
            else
#line 1452 "string.m"
              {
#line 1452 "string.m"
                {
#line 1452 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1452 "string.m"
                  return;
                }
#line 1452 "string.m"
              }
#line 5244 "string.m"
            mercury__string__V_23_23 = (mercury__string__Curr_9 + (MR_Integer) 1);
#line 5244 "string.m"
            {
#line 5244 "string.m"
              mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN1_16, mercury__string__Base_8, mercury__string__V_23_23, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_25);
            }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_25 ;
	S2 =  mercury__string__DigitString_18 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6433 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
#line 3219 "string.m"
}
#line 5240 "string.m"
          }
#line 5239 "string.m"
      }
#line 5234 "string.m"
  }
#line 5223 "string.m"
}

#line 5199 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_group_1_5_p_0(
#line 5199 "string.m"
  MR_Integer mercury__string__N_6,
#line 5199 "string.m"
  MR_Integer mercury__string__Base_7,
#line 5199 "string.m"
  MR_Integer mercury__string__GroupLength_8,
#line 5199 "string.m"
  MR_String mercury__string__Sep_9,
#line 5199 "string.m"
  MR_String * mercury__string__Str_10)
#line 5199 "string.m"
{
#line 5209 "string.m"
  {
#line 5209 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__N_6 < (MR_Integer) 0);

#line 5209 "string.m"
    if (mercury__string__succeeded)
#line 5207 "string.m"
      {
#line 5207 "string.m"
        MR_String mercury__string__Str1_11;

#line 5207 "string.m"
        {
#line 5207 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N_6, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str1_11);
        }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_1_5_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "-" ;
	S2 =  mercury__string__Str1_11 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6501 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_10  = S3;
#line 3219 "string.m"
}
#line 5207 "string.m"
      }
#line 5209 "string.m"
    else
#line 5210 "string.m"
      {
#line 5210 "string.m"
        MR_Integer mercury__string__N1_12 = ((MR_Integer) 0 - mercury__string__N_6);

#line 5211 "string.m"
        {
#line 5211 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N1_12, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, mercury__string__Str_10);
#line 5211 "string.m"
          return;
        }
#line 5210 "string.m"
      }
#line 5209 "string.m"
  }
#line 5199 "string.m"
}

#line 5169 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_2_4_p_0(
#line 5169 "string.m"
  MR_Integer mercury__string__NegN_5,
#line 5169 "string.m"
  MR_Integer mercury__string__Base_6,
#line 5169 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevChars_0_12,
#line 5169 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevChars_13)
#line 5169 "string.m"
{
#line 5180 "string.m"
  {
#line 5180 "string.m"
    MR_bool mercury__string__succeeded;
#line 5176 "string.m"
    MR_Integer mercury__string__V_14_14 = ((MR_Integer) 0 - mercury__string__Base_6);

#line 5176 "string.m"
    mercury__string__succeeded = (mercury__string__NegN_5 > mercury__string__V_14_14);
#line 5180 "string.m"
    if (mercury__string__succeeded)
#line 5177 "string.m"
      {
#line 5177 "string.m"
        MR_Integer mercury__string__N_8 = ((MR_Integer) 0 - mercury__string__NegN_5);
#line 5177 "string.m"
        MR_Char mercury__string__DigitChar_9;

#line 5178 "string.m"
        {
#line 5178 "string.m"
          mercury__string__DigitChar_9 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N_8);
        }
#line 5179 "string.m"
        {
#line 5179 "string.m"
          MR_Word base;
#line 5179 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5179 "string.m"
          *mercury__string__STATE_VARIABLE_RevChars_13 = base;
#line 5179 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_9));
#line 5179 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_0_12));
#line 5179 "string.m"
        }
#line 5177 "string.m"
      }
#line 5180 "string.m"
    else
#line 5181 "string.m"
      {
#line 5181 "string.m"
        MR_Integer mercury__string__NegN1_10;
#line 5181 "string.m"
        MR_Integer mercury__string__N10_11;
#line 5181 "string.m"
        MR_Integer mercury__string__V_16_16;
#line 5181 "string.m"
        MR_Word mercury__string__STATE_VARIABLE_RevChars_17_17;
#line 5181 "string.m"
        MR_Char mercury__string__DigitChar_19;

#line 303 "int.opt"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_2_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 303 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6613 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 303 "int.opt"
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
#line 5182 "string.m"
        mercury__string__V_16_16 = (mercury__string__NegN1_10 * mercury__string__Base_6);
#line 5182 "string.m"
        mercury__string__N10_11 = (mercury__string__V_16_16 - mercury__string__NegN_5);
#line 5183 "string.m"
        {
#line 5183 "string.m"
          mercury__string__DigitChar_19 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N10_11);
        }
#line 5184 "string.m"
        {
#line 5184 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN1_10, mercury__string__Base_6, mercury__string__STATE_VARIABLE_RevChars_0_12, &mercury__string__STATE_VARIABLE_RevChars_17_17);
        }
#line 5185 "string.m"
        {
#line 5185 "string.m"
          MR_Word base;
#line 5185 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5185 "string.m"
          *mercury__string__STATE_VARIABLE_RevChars_13 = base;
#line 5185 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_19));
#line 5185 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_17_17));
#line 5185 "string.m"
        }
#line 5181 "string.m"
      }
#line 5180 "string.m"
  }
#line 5169 "string.m"
}

#line 5155 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_1_3_p_0(
#line 5155 "string.m"
  MR_Integer mercury__string__N_4,
#line 5155 "string.m"
  MR_Integer mercury__string__Base_5,
#line 5155 "string.m"
  MR_String * mercury__string__Str_6)
#line 5155 "string.m"
{
#line 5157 "string.m"
  {
#line 5157 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__N_4 < (MR_Integer) 0);
#line 5157 "string.m"
    MR_Word mercury__string__RevChars_7;
#line 1589 "string.m"
    MR_String mercury__string__Str0_17;

#line 5163 "string.m"
    if (mercury__string__succeeded)
#line 5162 "string.m"
      {
#line 5162 "string.m"
        MR_Word mercury__string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[4]);
#line 5162 "string.m"
        MR_Word mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 5162 "string.m"
        {
#line 5162 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__V_10_10, &mercury__string__RevChars_7);
        }
#line 5162 "string.m"
      }
#line 5163 "string.m"
    else
#line 5164 "string.m"
      {
#line 5164 "string.m"
        MR_Integer mercury__string__NegN_8 = ((MR_Integer) 0 - mercury__string__N_4);
#line 5164 "string.m"
        MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 5165 "string.m"
        {
#line 5165 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN_8, mercury__string__Base_5, mercury__string__V_14_14, &mercury__string__RevChars_7);
        }
#line 5164 "string.m"
      }
#line 1587 "string.m"
    {
#line 1587 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__RevChars_7, &mercury__string__Str0_17);
    }
#line 1589 "string.m"
    if (mercury__string__succeeded)
#line 1588 "string.m"
      *mercury__string__Str_6 = mercury__string__Str0_17;
#line 1589 "string.m"
    else
#line 1590 "string.m"
      {
#line 1590 "string.m"
        {
#line 1590 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
#line 1590 "string.m"
          return;
        }
#line 1590 "string.m"
      }
#line 5157 "string.m"
  }
#line 5155 "string.m"
}

#line 4988 "string.m"
MR_bool MR_CALL 
mercury__string__accumulate_negative_int_4_p_0(
#line 4988 "string.m"
  MR_Integer mercury__string__Base_5,
#line 4988 "string.m"
  MR_Char mercury__string__Char_6,
#line 4988 "string.m"
  MR_Integer mercury__string__N0_7,
#line 4988 "string.m"
  MR_Integer * mercury__string__N_8)
#line 4988 "string.m"
{
#line 4991 "string.m"
  {
#line 4991 "string.m"
    MR_bool mercury__string__succeeded;
#line 4991 "string.m"
    MR_Integer mercury__string__M_9;
#line 4991 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 4992 "string.m"
    {
#line 4992 "string.m"
      mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    }
#line 4991 "string.m"
    if (mercury__string__succeeded)
#line 4991 "string.m"
      {
#line 4993 "string.m"
        mercury__string__V_10_10 = (mercury__string__Base_5 * mercury__string__N0_7);
#line 4993 "string.m"
        *mercury__string__N_8 = (mercury__string__V_10_10 - mercury__string__M_9);
#line 4996 "string.m"
        mercury__string__succeeded = (*mercury__string__N_8 <= mercury__string__N0_7);
#line 4991 "string.m"
      }
#line 4991 "string.m"
    return mercury__string__succeeded;
#line 4991 "string.m"
  }
#line 4988 "string.m"
}

#line 4979 "string.m"
MR_bool MR_CALL 
mercury__string__accumulate_int_4_p_0(
#line 4979 "string.m"
  MR_Integer mercury__string__Base_5,
#line 4979 "string.m"
  MR_Char mercury__string__Char_6,
#line 4979 "string.m"
  MR_Integer mercury__string__N0_7,
#line 4979 "string.m"
  MR_Integer * mercury__string__N_8)
#line 4979 "string.m"
{
#line 4981 "string.m"
  {
#line 4981 "string.m"
    MR_bool mercury__string__succeeded;
#line 4981 "string.m"
    MR_Integer mercury__string__M_9;
#line 4981 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 4982 "string.m"
    {
#line 4982 "string.m"
      mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    }
#line 4981 "string.m"
    if (mercury__string__succeeded)
#line 4981 "string.m"
      {
#line 4983 "string.m"
        mercury__string__V_10_10 = (mercury__string__Base_5 * mercury__string__N0_7);
#line 4983 "string.m"
        *mercury__string__N_8 = (mercury__string__V_10_10 + mercury__string__M_9);
#line 4986 "string.m"
        mercury__string__succeeded = (mercury__string__N0_7 <= *mercury__string__N_8);
#line 4981 "string.m"
      }
#line 4981 "string.m"
    return mercury__string__succeeded;
#line 4981 "string.m"
  }
#line 4979 "string.m"
}

#line 4932 "string.m"
void MR_CALL 
mercury__string__max_str_length_3_p_0(
#line 4932 "string.m"
  MR_String mercury__string__Str_4,
#line 4932 "string.m"
  MR_Integer mercury__string__PrevMaxLen_5,
#line 4932 "string.m"
  MR_Integer * mercury__string__MaxLen_6)
#line 4932 "string.m"
{
#line 4934 "string.m"
  {
#line 4934 "string.m"
    MR_bool mercury__string__succeeded;
#line 4934 "string.m"
    MR_Integer mercury__string__Length_7;

#line 2469 "string.m"
    {
#line 2469 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_4, &mercury__string__Length_7);
    }
#line 4936 "string.m"
    mercury__string__succeeded = (mercury__string__Length_7 > mercury__string__PrevMaxLen_5);
#line 4938 "string.m"
    if (mercury__string__succeeded)
#line 4937 "string.m"
      *mercury__string__MaxLen_6 = mercury__string__Length_7;
#line 4938 "string.m"
    else
#line 4939 "string.m"
      *mercury__string__MaxLen_6 = mercury__string__PrevMaxLen_5;
#line 4934 "string.m"
  }
#line 4932 "string.m"
}

#line 4928 "string.m"
MR_String MR_CALL 
mercury__string__lpad_3_f_0(
#line 4928 "string.m"
  MR_Char mercury__string__Chr_5,
#line 4928 "string.m"
  MR_Integer mercury__string__N_6,
#line 4928 "string.m"
  MR_String mercury__string__Str_7)
#line 4928 "string.m"
{
#line 4400 "string.m"
  {
#line 4400 "string.m"
    MR_bool mercury__string__succeeded;
#line 4400 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4400 "string.m"
    MR_Integer mercury__string__Length_16;

#line 4401 "string.m"
    {
#line 4401 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    }
#line 4402 "string.m"
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
#line 4406 "string.m"
    if (mercury__string__succeeded)
#line 4403 "string.m"
      {
#line 4403 "string.m"
        MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
#line 4403 "string.m"
        MR_String mercury__string__PadString_18;

#line 4404 "string.m"
        {
#line 4404 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
        }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__lpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_18 ;
	S2 =  mercury__string__Str_7 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6953 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3219 "string.m"
}
#line 4403 "string.m"
      }
#line 4406 "string.m"
    else
#line 4407 "string.m"
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
#line 4400 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4400 "string.m"
  }
#line 4928 "string.m"
}

#line 4924 "string.m"
MR_String MR_CALL 
mercury__string__rpad_3_f_0(
#line 4924 "string.m"
  MR_Char mercury__string__Chr_5,
#line 4924 "string.m"
  MR_Integer mercury__string__N_6,
#line 4924 "string.m"
  MR_String mercury__string__Str_7)
#line 4924 "string.m"
{
#line 4413 "string.m"
  {
#line 4413 "string.m"
    MR_bool mercury__string__succeeded;
#line 4413 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4413 "string.m"
    MR_Integer mercury__string__Length_16;

#line 4414 "string.m"
    {
#line 4414 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    }
#line 4415 "string.m"
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
#line 4419 "string.m"
    if (mercury__string__succeeded)
#line 4416 "string.m"
      {
#line 4416 "string.m"
        MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
#line 4416 "string.m"
        MR_String mercury__string__PadString_18;

#line 4417 "string.m"
        {
#line 4417 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
        }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__rpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str_7 ;
	S2 =  mercury__string__PadString_18 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7034 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3219 "string.m"
}
#line 4416 "string.m"
      }
#line 4419 "string.m"
    else
#line 4420 "string.m"
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
#line 4413 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4413 "string.m"
  }
#line 4924 "string.m"
}

#line 4917 "string.m"
MR_Word MR_CALL 
mercury__string__pad_column_2_f_0(
#line 4917 "string.m"
  MR_Integer mercury__string__Width_1,
#line 4917 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 4917 "string.m"
{
#line 4919 "string.m"
  {
#line 4919 "string.m"
    MR_bool mercury__string__succeeded;
#line 4919 "string.m"
    MR_Word mercury__string__HeadVar__3_3;

#line 4919 "string.m"
    if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 4919 "string.m"
      {
#line 4919 "string.m"
        MR_Word mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 4920 "string.m"
        {
#line 4920 "string.m"
          return mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_5);
        }
#line 4919 "string.m"
      }
#line 4919 "string.m"
    else
#line 4921 "string.m"
      {
#line 4921 "string.m"
        MR_Word mercury__string__Strings_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 4922 "string.m"
        {
#line 4922 "string.m"
          return mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_9);
        }
#line 4921 "string.m"
      }
#line 4919 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4919 "string.m"
  }
#line 4917 "string.m"
}

#line 4893 "string.m"
MR_Word MR_CALL 
mercury__string__find_max_length_with_limit_1_f_0(
#line 4893 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4893 "string.m"
{
#line 4896 "string.m"
  {
#line 4896 "string.m"
    MR_bool mercury__string__succeeded;
#line 4896 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4896 "string.m"
    MR_Word mercury__string__JustColumn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4896 "string.m"
    MR_Word mercury__string__MaybeLimit_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4896 "string.m"
    MR_Word mercury__string__Sense_5;
#line 4896 "string.m"
    MR_Integer mercury__string__MaxLength_6;
#line 4896 "string.m"
    MR_Word mercury__string__Strings_7;
#line 4896 "string.m"
    MR_Integer mercury__string__MaxLength0_8;

#line 4900 "string.m"
    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
#line 4898 "string.m"
      {
#line 4898 "string.m"
        mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4899 "string.m"
        mercury__string__Sense_5 = (MR_Integer) 0;
#line 4898 "string.m"
      }
#line 4900 "string.m"
    else
#line 4901 "string.m"
      {
#line 4901 "string.m"
        mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4902 "string.m"
        mercury__string__Sense_5 = (MR_Integer) 1;
#line 4901 "string.m"
      }
#line 4904 "string.m"
    {
#line 4904 "string.m"
      mercury__string__foldl__ho8_4_p_in__list_0(mercury__string__Strings_7, (MR_Integer) 0, &mercury__string__MaxLength0_8);
    }
#line 4912 "string.m"
    if ((mercury__string__MaybeLimit_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4914 "string.m"
      mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
#line 4912 "string.m"
    else
#line 4906 "string.m"
      {
#line 4906 "string.m"
        MR_Integer mercury__string__Limit_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__MaybeLimit_4, (MR_Integer) 0)));

#line 4907 "string.m"
        mercury__string__succeeded = (mercury__string__MaxLength0_8 > mercury__string__Limit_9);
#line 4909 "string.m"
        if (mercury__string__succeeded)
#line 4908 "string.m"
          mercury__string__MaxLength_6 = mercury__string__Limit_9;
#line 4909 "string.m"
        else
#line 4910 "string.m"
          mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
#line 4906 "string.m"
      }
#line 4896 "string.m"
    {
#line 4896 "string.m"
      mercury__string__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4896 "string.m"
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__Sense_5));
#line 4896 "string.m"
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 1) = ((MR_Box) (mercury__string__MaxLength_6));
#line 4896 "string.m"
    }
#line 4896 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4896 "string.m"
  }
#line 4893 "string.m"
}

#line 4881 "string.m"
MR_Integer MR_CALL 
mercury__string__find_max_length_1_f_0(
#line 4881 "string.m"
  MR_Word mercury__string__JustColumn_3)
#line 4881 "string.m"
{
#line 4883 "string.m"
  {
#line 4883 "string.m"
    MR_bool mercury__string__succeeded;
#line 4883 "string.m"
    MR_Integer mercury__string__MaxLength_4;
#line 4883 "string.m"
    MR_Word mercury__string__Strings_5;

#line 4885 "string.m"
    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
#line 4884 "string.m"
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4885 "string.m"
    else
#line 4885 "string.m"
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4887 "string.m"
    {
#line 4887 "string.m"
      mercury__string__foldl__ho8_4_p_in__list_0(mercury__string__Strings_5, (MR_Integer) 0, &mercury__string__MaxLength_4);
    }
#line 4883 "string.m"
    return mercury__string__MaxLength_4;
#line 4883 "string.m"
  }
#line 4881 "string.m"
}

#line 4877 "string.m"
MR_String MR_CALL 
mercury__string__join_rev_columns_3_f_0(
#line 4877 "string.m"
  MR_String mercury__string__Separator_5,
#line 4877 "string.m"
  MR_String mercury__string__Col1_6,
#line 4877 "string.m"
  MR_String mercury__string__Col2_7)
#line 4877 "string.m"
{
#line 4879 "string.m"
  {
#line 4879 "string.m"
    MR_bool mercury__string__succeeded;
#line 4879 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4879 "string.m"
    MR_String mercury__string__V_8_8;

#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Separator_5 ;
	S2 =  mercury__string__Col1_6 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7272 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3219 "string.m"
}
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Col2_7 ;
	S2 =  mercury__string__V_8_8 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7299 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3219 "string.m"
}
#line 4879 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4879 "string.m"
  }
#line 4877 "string.m"
}

#line 4838 "string.m"
void MR_CALL 
mercury__string__pad_row_6_p_0(
#line 4838 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4838 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 4838 "string.m"
  MR_String mercury__string__Separator_3,
#line 4838 "string.m"
  MR_Integer mercury__string__SepLen_4,
#line 4838 "string.m"
  MR_Integer mercury__string__CurColumn_5,
#line 4838 "string.m"
  MR_String * mercury__string__HeadVar__6_6)
#line 4838 "string.m"
{
#line 4841 "string.m"
  {
#line 4841 "string.m"
    MR_bool mercury__string__succeeded;

#line 4841 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4841 "string.m"
      if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4841 "string.m"
        *mercury__string__HeadVar__6_6 = (MR_String) "";
#line 4841 "string.m"
      else
#line 4872 "string.m"
        {
#line 4873 "string.m"
          {
#line 4873 "string.m"
            mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
#line 4873 "string.m"
            return;
          }
#line 4872 "string.m"
        }
#line 4841 "string.m"
    else
#line 4841 "string.m"
      {
#line 4841 "string.m"
        MR_Word mercury__string__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4841 "string.m"
        MR_Word mercury__string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));

#line 4841 "string.m"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4874 "string.m"
          {
#line 4875 "string.m"
            {
#line 4875 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
#line 4875 "string.m"
              return;
            }
#line 4874 "string.m"
          }
#line 4841 "string.m"
        else
#line 4843 "string.m"
          {
#line 4843 "string.m"
            MR_Word mercury__string__Justify_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_55_55, (MR_Integer) 0)));
#line 4843 "string.m"
            MR_Integer mercury__string__MaxWidth_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__V_55_55, (MR_Integer) 1)));
#line 4843 "string.m"
            MR_String mercury__string__ColumnStr0_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 4843 "string.m"
            MR_Word mercury__string__ColumnStrs0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 4843 "string.m"
            MR_Integer mercury__string__NextColumn_19;
#line 4843 "string.m"
            MR_String mercury__string__LineRest_20;
#line 4843 "string.m"
            MR_Integer mercury__string__V_27_27 = (mercury__string__CurColumn_5 + mercury__string__MaxWidth_11);
#line 4847 "string.m"
            MR_Integer mercury__string__V_28_28;

#line 4844 "string.m"
            mercury__string__NextColumn_19 = (mercury__string__V_27_27 + mercury__string__SepLen_4);
#line 4845 "string.m"
            {
#line 4845 "string.m"
              mercury__string__pad_row_6_p_0(mercury__string__V_54_54, mercury__string__ColumnStrs0_14, mercury__string__Separator_3, mercury__string__SepLen_4, mercury__string__NextColumn_19, &mercury__string__LineRest_20);
            }
#line 2469 "string.m"
            {
#line 2469 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__V_28_28);
            }
#line 4847 "string.m"
            mercury__string__succeeded = (mercury__string__V_28_28 <= mercury__string__MaxWidth_11);
#line 4862 "string.m"
            if (mercury__string__succeeded)
#line 4854 "string.m"
              {
#line 4854 "string.m"
                MR_String mercury__string__ColumnStr_21;

#line 4851 "string.m"
                if ((mercury__string__Justify_10 == (MR_Integer) 0))
#line 4849 "string.m"
                  {
#line 4849 "string.m"
                    MR_Integer mercury__string__Length_66;

#line 4414 "string.m"
                    {
#line 4414 "string.m"
                      mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__Length_66);
                    }
#line 4415 "string.m"
                    mercury__string__succeeded = (mercury__string__Length_66 < mercury__string__MaxWidth_11);
#line 4419 "string.m"
                    if (mercury__string__succeeded)
#line 4416 "string.m"
                      {
#line 4416 "string.m"
                        MR_Integer mercury__string__Count_67 = (mercury__string__MaxWidth_11 - mercury__string__Length_66);
#line 4416 "string.m"
                        MR_String mercury__string__PadString_68;

#line 4417 "string.m"
                        {
#line 4417 "string.m"
                          mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__Count_67, &mercury__string__PadString_68);
                        }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_row_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__ColumnStr0_13 ;
	S2 =  mercury__string__PadString_68 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7466 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ColumnStr_21  = S3;
#line 3219 "string.m"
}
#line 4416 "string.m"
                      }
#line 4419 "string.m"
                    else
#line 4420 "string.m"
                      mercury__string__ColumnStr_21 = mercury__string__ColumnStr0_13;
#line 4849 "string.m"
                  }
#line 4851 "string.m"
                else
#line 4852 "string.m"
                  {
#line 4853 "string.m"
                    {
#line 4853 "string.m"
                      mercury__string__ColumnStr_21 = mercury__string__pad_left_3_f_0(mercury__string__ColumnStr0_13, (MR_Char) 32, mercury__string__MaxWidth_11);
                    }
#line 4852 "string.m"
                  }
#line 4858 "string.m"
                if ((mercury__string__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4856 "string.m"
                  *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr_21;
#line 4858 "string.m"
                else
#line 4859 "string.m"
                  {
#line 4859 "string.m"
                    MR_String mercury__string__V_31_31;

#line 4860 "string.m"
                    {
#line 4860 "string.m"
                      mercury__string__V_31_31 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__LineRest_20);
                    }
#line 4860 "string.m"
                    {
#line 4860 "string.m"
                      *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr_21, mercury__string__V_31_31);
                    }
#line 4859 "string.m"
                  }
#line 4854 "string.m"
              }
#line 4862 "string.m"
            else
#line 4866 "string.m"
              if ((mercury__string__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4864 "string.m"
                *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr0_13;
#line 4866 "string.m"
              else
#line 4867 "string.m"
                {
#line 4867 "string.m"
                  MR_String mercury__string__V_32_32;
#line 4867 "string.m"
                  MR_String mercury__string__V_33_33;
#line 4867 "string.m"
                  MR_String mercury__string__V_35_35;
#line 4867 "string.m"
                  MR_String mercury__string__V_36_36;

#line 1836 "string.m"
                  {
#line 1836 "string.m"
                    mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__NextColumn_19, &mercury__string__V_36_36);
                  }
#line 4869 "string.m"
                  {
#line 4869 "string.m"
                    mercury__string__V_35_35 = mercury__string__f_43_43_2_f_0(mercury__string__V_36_36, mercury__string__LineRest_20);
                  }
#line 4868 "string.m"
                  {
#line 4868 "string.m"
                    mercury__string__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mercury__string__V_35_35);
                  }
#line 4868 "string.m"
                  {
#line 4868 "string.m"
                    mercury__string__V_32_32 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__V_33_33);
                  }
#line 4868 "string.m"
                  {
#line 4868 "string.m"
                    *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr0_13, mercury__string__V_32_32);
                  }
#line 4867 "string.m"
                }
#line 4843 "string.m"
          }
#line 4841 "string.m"
      }
#line 4841 "string.m"
  }
#line 4838 "string.m"
}

#line 4824 "string.m"
void MR_CALL 
mercury__string__get_next_line_3_p_0(
#line 4824 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4824 "string.m"
  MR_Word * mercury__string__HeadVar__2_2,
#line 4824 "string.m"
  MR_Word * mercury__string__HeadVar__3_3)
#line 4824 "string.m"
{
#line 4827 "string.m"
  {
#line 4827 "string.m"
    MR_bool mercury__string__succeeded;

#line 4827 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4827 "string.m"
      {
#line 4827 "string.m"
        *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4827 "string.m"
        *mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4827 "string.m"
      }
#line 4827 "string.m"
    else
#line 4829 "string.m"
      {
#line 4829 "string.m"
        MR_Word mercury__string__Column_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4829 "string.m"
        MR_Word mercury__string__Columns_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4829 "string.m"
        MR_String mercury__string__ColumnTop_6;
#line 4829 "string.m"
        MR_Word mercury__string__ColumnTops_7;
#line 4829 "string.m"
        MR_Word mercury__string__ColumnRest_8;
#line 4829 "string.m"
        MR_Word mercury__string__ColumnRests_9;

#line 4833 "string.m"
        if ((mercury__string__Column_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4831 "string.m"
          {
#line 4832 "string.m"
            {
#line 4832 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.get_next_line\'/3", (MR_String) "list length mismatch");
#line 4832 "string.m"
              return;
            }
#line 4831 "string.m"
          }
#line 4833 "string.m"
        else
#line 4834 "string.m"
          {
#line 4834 "string.m"
            mercury__string__ColumnTop_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 0)));
#line 4834 "string.m"
            mercury__string__ColumnRest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 1)));
#line 4834 "string.m"
          }
#line 4836 "string.m"
        {
#line 4836 "string.m"
          mercury__string__get_next_line_3_p_0(mercury__string__Columns_5, &mercury__string__ColumnTops_7, &mercury__string__ColumnRests_9);
        }
#line 4828 "string.m"
        {
#line 4828 "string.m"
          MR_Word base;
#line 4828 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4828 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4828 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnTop_6));
#line 4828 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnTops_7));
#line 4828 "string.m"
        }
#line 4829 "string.m"
        {
#line 4829 "string.m"
          MR_Word base;
#line 4829 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4829 "string.m"
          *mercury__string__HeadVar__3_3 = base;
#line 4829 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnRest_8));
#line 4829 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnRests_9));
#line 4829 "string.m"
        }
#line 4829 "string.m"
      }
#line 4827 "string.m"
  }
#line 4824 "string.m"
}

#line 4817 "string.m"
MR_bool MR_CALL 
mercury__string__all_empty_1_p_0(
#line 4817 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4817 "string.m"
{
#line 4819 "string.m"
  while (MR_TRUE)
#line 4819 "string.m"
    {
#line 4819 "string.m"
      /* tailcall optimized into a loop */
#line 4819 "string.m"
      {
#line 4819 "string.m"
        MR_bool mercury__string__succeeded;

#line 4819 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4819 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4819 "string.m"
        else
#line 4820 "string.m"
          {
#line 4820 "string.m"
            MR_Word mercury__string__List_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4820 "string.m"
            MR_Word mercury__string__Lists_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

#line 4821 "string.m"
            mercury__string__succeeded = (mercury__string__List_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 4820 "string.m"
            if (mercury__string__succeeded)
#line 4822 "string.m"
              {
#line 4822 "string.m"
                /* direct tailcall eliminated */
#line 4822 "string.m"
                {
#line 4822 "string.m"
                  MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__Lists_3;

#line 4822 "string.m"
                  mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 4822 "string.m"
                }
#line 4822 "string.m"
                continue;
#line 4822 "string.m"
              }
#line 4820 "string.m"
          }
#line 4819 "string.m"
        return mercury__string__succeeded;
#line 4819 "string.m"
      }
#line 4819 "string.m"
      break;
#line 4819 "string.m"
    }
#line 4817 "string.m"
}

#line 4804 "string.m"
void MR_CALL 
mercury__string__generate_rows_6_p_0(
#line 4804 "string.m"
  MR_Word mercury__string__MaxWidthsSenses_7,
#line 4804 "string.m"
  MR_String mercury__string__Separator_8,
#line 4804 "string.m"
  MR_Integer mercury__string__SepLen_9,
#line 4804 "string.m"
  MR_Word mercury__string__Columns0_10,
#line 4804 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevRows_0_15,
#line 4804 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevRows_16)
#line 4804 "string.m"
{
#line 4810 "string.m"
  while (MR_TRUE)
#line 4810 "string.m"
    {
#line 4810 "string.m"
      /* tailcall optimized into a loop */
#line 4810 "string.m"
      {
#line 4810 "string.m"
        MR_bool mercury__string__succeeded;

#line 4808 "string.m"
        {
#line 4808 "string.m"
          mercury__string__succeeded = mercury__string__all_empty_1_p_0(mercury__string__Columns0_10);
        }
#line 4810 "string.m"
        if (mercury__string__succeeded)
#line 4810 "string.m"
          *mercury__string__STATE_VARIABLE_RevRows_16 = mercury__string__STATE_VARIABLE_RevRows_0_15;
#line 4810 "string.m"
        else
#line 4811 "string.m"
          {
#line 4811 "string.m"
            MR_Word mercury__string__Line_12;
#line 4811 "string.m"
            MR_Word mercury__string__Columns_13;
#line 4811 "string.m"
            MR_String mercury__string__Row_14;
#line 4811 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_RevRows_18_18;

#line 4811 "string.m"
            {
#line 4811 "string.m"
              mercury__string__get_next_line_3_p_0(mercury__string__Columns0_10, &mercury__string__Line_12, &mercury__string__Columns_13);
            }
#line 4812 "string.m"
            {
#line 4812 "string.m"
              mercury__string__pad_row_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Line_12, mercury__string__Separator_8, mercury__string__SepLen_9, (MR_Integer) 0, &mercury__string__Row_14);
            }
#line 4813 "string.m"
            {
#line 4813 "string.m"
              mercury__string__STATE_VARIABLE_RevRows_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4813 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 0) = ((MR_Box) (mercury__string__Row_14));
#line 4813 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevRows_0_15));
#line 4813 "string.m"
            }
#line 4814 "string.m"
            /* direct tailcall eliminated */
#line 4814 "string.m"
            {
#line 4814 "string.m"
              MR_Word mercury__string__Columns0__tmp_copy_10 = mercury__string__Columns_13;
#line 4814 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_RevRows_0__tmp_copy_15 = mercury__string__STATE_VARIABLE_RevRows_18_18;

#line 4814 "string.m"
              mercury__string__STATE_VARIABLE_RevRows_0_15 = mercury__string__STATE_VARIABLE_RevRows_0__tmp_copy_15;
#line 4814 "string.m"
              mercury__string__Columns0_10 = mercury__string__Columns0__tmp_copy_10;
#line 4814 "string.m"
            }
#line 4814 "string.m"
            continue;
#line 4811 "string.m"
          }
#line 4810 "string.m"
      }
#line 4810 "string.m"
      break;
#line 4810 "string.m"
    }
#line 4804 "string.m"
}

#line 4798 "string.m"
MR_Word MR_CALL 
mercury__string__project_column_strings_1_f_0(
#line 4798 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4798 "string.m"
{
#line 4801 "string.m"
  {
#line 4801 "string.m"
    MR_bool mercury__string__succeeded;
#line 4801 "string.m"
    MR_Word mercury__string__Strings_2;
#line 4801 "string.m"
    MR_Word mercury__string__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4801 "string.m"
    MR_Word mercury__string__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

#line 4801 "string.m"
    if (((MR_tag((MR_Word) mercury__string__V_10_10)) == (MR_mktag((MR_Integer) 0))))
#line 4801 "string.m"
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_10_10, (MR_Integer) 0)));
#line 4801 "string.m"
    else
#line 4802 "string.m"
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_10_10, (MR_Integer) 0)));
#line 4801 "string.m"
    return mercury__string__Strings_2;
#line 4801 "string.m"
  }
#line 4798 "string.m"
}

#line 4743 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
#line 4743 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4743 "string.m"
{
#line 4743 "string.m"
  {
#line 4743 "string.m"
    struct mercury__string__foldr_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4744 "string.m"
    {
#line 4744 "string.m"
      mercury__string__foldr_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
#line 4744 "string.m"
      return;
    }
#line 4743 "string.m"
  }
#line 4743 "string.m"
}

#line 4734 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_4(
#line 4734 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4734 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4734 "string.m"
  MR_String mercury__string__String_8,
#line 4734 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4734 "string.m"
  MR_Integer mercury__string__I_10,
#line 4734 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4734 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4734 "string.m"
  MR_Cont mercury__string__cont,
#line 4734 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4734 "string.m"
{
#line 4734 "string.m"
  {
#line 4734 "string.m"
    struct mercury__string__foldr_between_2_6_p_4_env_0_s mercury__string__env;

#line 4734 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
#line 4734 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
#line 4734 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
#line 4734 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9 = mercury__string__Start_9;
#line 4734 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4734 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont = mercury__string__cont;
#line 4734 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4745 "string.m"
    {
#line 4745 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
#line 4745 "string.m"
      MR_Char mercury__string__Char_13;

#line 4739 "string.m"
      if (mercury__string__succeeded)
#line 4739 "string.m"
        {
#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 7979 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4739 "string.m"
          if (mercury__string__succeeded)
#line 4741 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
#line 4739 "string.m"
        }
#line 4745 "string.m"
      if (mercury__string__succeeded)
#line 4743 "string.m"
        {
#line 4743 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

#line 4743 "string.m"
          {
#line 4743 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_4_1, &mercury__string__env);
          }
#line 4743 "string.m"
        }
#line 4745 "string.m"
      else
#line 4745 "string.m"
        {
#line 4745 "string.m"
          *((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4745 "string.m"
          {
#line 4745 "string.m"
            ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
#line 4745 "string.m"
            return;
          }
#line 4745 "string.m"
        }
#line 4745 "string.m"
    }
#line 4734 "string.m"
  }
#line 4734 "string.m"
}

#line 4743 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
#line 4743 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4743 "string.m"
{
#line 4743 "string.m"
  {
#line 4743 "string.m"
    struct mercury__string__foldr_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 4744 "string.m"
    {
#line 4744 "string.m"
      mercury__string__foldr_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
#line 4744 "string.m"
      return;
    }
#line 4743 "string.m"
  }
#line 4743 "string.m"
}

#line 4732 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_3(
#line 4732 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4732 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4732 "string.m"
  MR_String mercury__string__String_8,
#line 4732 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4732 "string.m"
  MR_Integer mercury__string__I_10,
#line 4732 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4732 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4732 "string.m"
  MR_Cont mercury__string__cont,
#line 4732 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4732 "string.m"
{
#line 4732 "string.m"
  {
#line 4732 "string.m"
    struct mercury__string__foldr_between_2_6_p_3_env_0_s mercury__string__env;

#line 4732 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
#line 4732 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
#line 4732 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
#line 4732 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9 = mercury__string__Start_9;
#line 4732 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4732 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont = mercury__string__cont;
#line 4732 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4745 "string.m"
    {
#line 4745 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
#line 4745 "string.m"
      MR_Char mercury__string__Char_13;

#line 4739 "string.m"
      if (mercury__string__succeeded)
#line 4739 "string.m"
        {
#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 8137 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4739 "string.m"
          if (mercury__string__succeeded)
#line 4741 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
#line 4739 "string.m"
        }
#line 4745 "string.m"
      if (mercury__string__succeeded)
#line 4743 "string.m"
        {
#line 4743 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

#line 4743 "string.m"
          {
#line 4743 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_3_1, &mercury__string__env);
          }
#line 4743 "string.m"
        }
#line 4745 "string.m"
      else
#line 4745 "string.m"
        {
#line 4745 "string.m"
          *((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4745 "string.m"
          {
#line 4745 "string.m"
            ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
#line 4745 "string.m"
            return;
          }
#line 4745 "string.m"
        }
#line 4745 "string.m"
    }
#line 4732 "string.m"
  }
#line 4732 "string.m"
}

#line 4730 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_between_2_6_p_2(
#line 4730 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4730 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4730 "string.m"
  MR_String mercury__string__String_8,
#line 4730 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4730 "string.m"
  MR_Integer mercury__string__I_10,
#line 4730 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4730 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4730 "string.m"
{
#line 4745 "string.m"
  while (MR_TRUE)
#line 4745 "string.m"
    {
#line 4745 "string.m"
      /* tailcall optimized into a loop */
#line 4745 "string.m"
      {
#line 4745 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4745 "string.m"
        MR_Integer mercury__string__J_12;
#line 4745 "string.m"
        MR_Char mercury__string__Char_13;

#line 4739 "string.m"
        if (mercury__string__succeeded)
#line 4739 "string.m"
          {
#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 8256 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4739 "string.m"
            if (mercury__string__succeeded)
#line 4741 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4739 "string.m"
          }
#line 4745 "string.m"
        if (mercury__string__succeeded)
#line 4743 "string.m"
          {
#line 4743 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4743 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4743 "string.m"
            {
#line 4743 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4743 "string.m"
            if (mercury__string__succeeded)
#line 4744 "string.m"
              {
#line 4744 "string.m"
                /* direct tailcall eliminated */
#line 4744 "string.m"
                {
#line 4744 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4744 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4744 "string.m"
                  mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4744 "string.m"
                  mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4744 "string.m"
                }
#line 4744 "string.m"
                continue;
#line 4744 "string.m"
              }
#line 4743 "string.m"
          }
#line 4745 "string.m"
        else
#line 4745 "string.m"
          {
#line 4745 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4745 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4745 "string.m"
          }
#line 4745 "string.m"
        return mercury__string__succeeded;
#line 4745 "string.m"
      }
#line 4745 "string.m"
      break;
#line 4745 "string.m"
    }
#line 4730 "string.m"
}

#line 4728 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_1(
#line 4728 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4728 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4728 "string.m"
  MR_String mercury__string__String_8,
#line 4728 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4728 "string.m"
  MR_Integer mercury__string__I_10,
#line 4728 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4728 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4728 "string.m"
{
#line 4745 "string.m"
  while (MR_TRUE)
#line 4745 "string.m"
    {
#line 4745 "string.m"
      /* tailcall optimized into a loop */
#line 4745 "string.m"
      {
#line 4745 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4745 "string.m"
        MR_Integer mercury__string__J_12;
#line 4745 "string.m"
        MR_Char mercury__string__Char_13;

#line 4739 "string.m"
        if (mercury__string__succeeded)
#line 4739 "string.m"
          {
#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 8399 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4739 "string.m"
            if (mercury__string__succeeded)
#line 4741 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4739 "string.m"
          }
#line 4745 "string.m"
        if (mercury__string__succeeded)
#line 4743 "string.m"
          {
#line 4743 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4743 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4743 "string.m"
            {
#line 4743 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4744 "string.m"
            /* direct tailcall eliminated */
#line 4744 "string.m"
            {
#line 4744 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4744 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4744 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4744 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4744 "string.m"
            }
#line 4744 "string.m"
            continue;
#line 4743 "string.m"
          }
#line 4745 "string.m"
        else
#line 4745 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4745 "string.m"
      }
#line 4745 "string.m"
      break;
#line 4745 "string.m"
    }
#line 4728 "string.m"
}

#line 4726 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_0(
#line 4726 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4726 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4726 "string.m"
  MR_String mercury__string__String_8,
#line 4726 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4726 "string.m"
  MR_Integer mercury__string__I_10,
#line 4726 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4726 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4726 "string.m"
{
#line 4745 "string.m"
  while (MR_TRUE)
#line 4745 "string.m"
    {
#line 4745 "string.m"
      /* tailcall optimized into a loop */
#line 4745 "string.m"
      {
#line 4745 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4745 "string.m"
        MR_Integer mercury__string__J_12;
#line 4745 "string.m"
        MR_Char mercury__string__Char_13;

#line 4739 "string.m"
        if (mercury__string__succeeded)
#line 4739 "string.m"
          {
#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 8528 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4739 "string.m"
            if (mercury__string__succeeded)
#line 4741 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4739 "string.m"
          }
#line 4745 "string.m"
        if (mercury__string__succeeded)
#line 4743 "string.m"
          {
#line 4743 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4743 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4743 "string.m"
            {
#line 4743 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4744 "string.m"
            /* direct tailcall eliminated */
#line 4744 "string.m"
            {
#line 4744 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4744 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4744 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4744 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4744 "string.m"
            }
#line 4744 "string.m"
            continue;
#line 4743 "string.m"
          }
#line 4745 "string.m"
        else
#line 4745 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4745 "string.m"
      }
#line 4745 "string.m"
      break;
#line 4745 "string.m"
    }
#line 4726 "string.m"
}

#line 4688 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
#line 4688 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4688 "string.m"
{
#line 4688 "string.m"
  {
#line 4688 "string.m"
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_5_env_0_s *) mercury__string__env_ptr_arg;

#line 4689 "string.m"
    {
#line 4689 "string.m"
      mercury__string__foldl2_between_2_8_p_5((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
#line 4689 "string.m"
      return;
    }
#line 4688 "string.m"
  }
#line 4688 "string.m"
}

#line 4679 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_5(
#line 4679 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4679 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4679 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4679 "string.m"
  MR_String mercury__string__String_10,
#line 4679 "string.m"
  MR_Integer mercury__string__I_11,
#line 4679 "string.m"
  MR_Integer mercury__string__End_12,
#line 4679 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4679 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4679 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4679 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 4679 "string.m"
  MR_Cont mercury__string__cont,
#line 4679 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4679 "string.m"
{
#line 4679 "string.m"
  {
#line 4679 "string.m"
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s mercury__string__env;

#line 4679 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
#line 4679 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
#line 4679 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9 = mercury__string__Closure_9;
#line 4679 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__String_10 = mercury__string__String_10;
#line 4679 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12 = mercury__string__End_12;
#line 4679 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
#line 4679 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
#line 4679 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont = mercury__string__cont;
#line 4679 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4690 "string.m"
    {
#line 4690 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
#line 4690 "string.m"
      MR_Char mercury__string__Char_16;

#line 4684 "string.m"
      if (mercury__string__succeeded)
#line 4684 "string.m"
        {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8703 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4684 "string.m"
          if (mercury__string__succeeded)
#line 4686 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
#line 4684 "string.m"
        }
#line 4690 "string.m"
      if (mercury__string__succeeded)
#line 4688 "string.m"
        {
#line 4688 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (MR_Integer) 1)));

#line 4688 "string.m"
          {
#line 4688 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_5_1, &mercury__string__env);
          }
#line 4688 "string.m"
        }
#line 4690 "string.m"
      else
#line 4691 "string.m"
        {
#line 4691 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4691 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4691 "string.m"
          {
#line 4691 "string.m"
            ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
#line 4691 "string.m"
            return;
          }
#line 4691 "string.m"
        }
#line 4690 "string.m"
    }
#line 4679 "string.m"
  }
#line 4679 "string.m"
}

#line 4688 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
#line 4688 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4688 "string.m"
{
#line 4688 "string.m"
  {
#line 4688 "string.m"
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4689 "string.m"
    {
#line 4689 "string.m"
      mercury__string__foldl2_between_2_8_p_4((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
#line 4689 "string.m"
      return;
    }
#line 4688 "string.m"
  }
#line 4688 "string.m"
}

#line 4677 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_4(
#line 4677 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4677 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4677 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4677 "string.m"
  MR_String mercury__string__String_10,
#line 4677 "string.m"
  MR_Integer mercury__string__I_11,
#line 4677 "string.m"
  MR_Integer mercury__string__End_12,
#line 4677 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4677 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4677 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4677 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 4677 "string.m"
  MR_Cont mercury__string__cont,
#line 4677 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4677 "string.m"
{
#line 4677 "string.m"
  {
#line 4677 "string.m"
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s mercury__string__env;

#line 4677 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
#line 4677 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
#line 4677 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9 = mercury__string__Closure_9;
#line 4677 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__String_10 = mercury__string__String_10;
#line 4677 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12 = mercury__string__End_12;
#line 4677 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
#line 4677 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
#line 4677 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont = mercury__string__cont;
#line 4677 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4690 "string.m"
    {
#line 4690 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
#line 4690 "string.m"
      MR_Char mercury__string__Char_16;

#line 4684 "string.m"
      if (mercury__string__succeeded)
#line 4684 "string.m"
        {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8870 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4684 "string.m"
          if (mercury__string__succeeded)
#line 4686 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
#line 4684 "string.m"
        }
#line 4690 "string.m"
      if (mercury__string__succeeded)
#line 4688 "string.m"
        {
#line 4688 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (MR_Integer) 1)));

#line 4688 "string.m"
          {
#line 4688 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_4_1, &mercury__string__env);
          }
#line 4688 "string.m"
        }
#line 4690 "string.m"
      else
#line 4691 "string.m"
        {
#line 4691 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4691 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4691 "string.m"
          {
#line 4691 "string.m"
            ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
#line 4691 "string.m"
            return;
          }
#line 4691 "string.m"
        }
#line 4690 "string.m"
    }
#line 4677 "string.m"
  }
#line 4677 "string.m"
}

#line 4675 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_between_2_8_p_3(
#line 4675 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4675 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4675 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4675 "string.m"
  MR_String mercury__string__String_10,
#line 4675 "string.m"
  MR_Integer mercury__string__I_11,
#line 4675 "string.m"
  MR_Integer mercury__string__End_12,
#line 4675 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4675 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4675 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4675 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4675 "string.m"
{
#line 4690 "string.m"
  while (MR_TRUE)
#line 4690 "string.m"
    {
#line 4690 "string.m"
      /* tailcall optimized into a loop */
#line 4690 "string.m"
      {
#line 4690 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4690 "string.m"
        MR_Integer mercury__string__J_15;
#line 4690 "string.m"
        MR_Char mercury__string__Char_16;

#line 4684 "string.m"
        if (mercury__string__succeeded)
#line 4684 "string.m"
          {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8994 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4684 "string.m"
            if (mercury__string__succeeded)
#line 4686 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4684 "string.m"
          }
#line 4690 "string.m"
        if (mercury__string__succeeded)
#line 4688 "string.m"
          {
#line 4688 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4688 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4688 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4688 "string.m"
            {
#line 4688 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4688 "string.m"
            if (mercury__string__succeeded)
#line 4689 "string.m"
              {
#line 4689 "string.m"
                /* direct tailcall eliminated */
#line 4689 "string.m"
                {
#line 4689 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4689 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4689 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4689 "string.m"
                  mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4689 "string.m"
                  mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4689 "string.m"
                  mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4689 "string.m"
                }
#line 4689 "string.m"
                continue;
#line 4689 "string.m"
              }
#line 4688 "string.m"
          }
#line 4690 "string.m"
        else
#line 4691 "string.m"
          {
#line 4691 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4691 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4691 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4691 "string.m"
          }
#line 4690 "string.m"
        return mercury__string__succeeded;
#line 4690 "string.m"
      }
#line 4690 "string.m"
      break;
#line 4690 "string.m"
    }
#line 4675 "string.m"
}

#line 4673 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_2(
#line 4673 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4673 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4673 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4673 "string.m"
  MR_String mercury__string__String_10,
#line 4673 "string.m"
  MR_Integer mercury__string__I_11,
#line 4673 "string.m"
  MR_Integer mercury__string__End_12,
#line 4673 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4673 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4673 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4673 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4673 "string.m"
{
#line 4690 "string.m"
  while (MR_TRUE)
#line 4690 "string.m"
    {
#line 4690 "string.m"
      /* tailcall optimized into a loop */
#line 4690 "string.m"
      {
#line 4690 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4690 "string.m"
        MR_Integer mercury__string__J_15;
#line 4690 "string.m"
        MR_Char mercury__string__Char_16;

#line 4684 "string.m"
        if (mercury__string__succeeded)
#line 4684 "string.m"
          {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9148 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4684 "string.m"
            if (mercury__string__succeeded)
#line 4686 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4684 "string.m"
          }
#line 4690 "string.m"
        if (mercury__string__succeeded)
#line 4688 "string.m"
          {
#line 4688 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4688 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4688 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4688 "string.m"
            {
#line 4688 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4689 "string.m"
            /* direct tailcall eliminated */
#line 4689 "string.m"
            {
#line 4689 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4689 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4689 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4689 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4689 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4689 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4689 "string.m"
            }
#line 4689 "string.m"
            continue;
#line 4688 "string.m"
          }
#line 4690 "string.m"
        else
#line 4691 "string.m"
          {
#line 4691 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4691 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4691 "string.m"
          }
#line 4690 "string.m"
      }
#line 4690 "string.m"
      break;
#line 4690 "string.m"
    }
#line 4673 "string.m"
}

#line 4671 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_1(
#line 4671 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4671 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4671 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4671 "string.m"
  MR_String mercury__string__String_10,
#line 4671 "string.m"
  MR_Integer mercury__string__I_11,
#line 4671 "string.m"
  MR_Integer mercury__string__End_12,
#line 4671 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4671 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4671 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4671 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4671 "string.m"
{
#line 4690 "string.m"
  while (MR_TRUE)
#line 4690 "string.m"
    {
#line 4690 "string.m"
      /* tailcall optimized into a loop */
#line 4690 "string.m"
      {
#line 4690 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4690 "string.m"
        MR_Integer mercury__string__J_15;
#line 4690 "string.m"
        MR_Char mercury__string__Char_16;

#line 4684 "string.m"
        if (mercury__string__succeeded)
#line 4684 "string.m"
          {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9292 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4684 "string.m"
            if (mercury__string__succeeded)
#line 4686 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4684 "string.m"
          }
#line 4690 "string.m"
        if (mercury__string__succeeded)
#line 4688 "string.m"
          {
#line 4688 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4688 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4688 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4688 "string.m"
            {
#line 4688 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4689 "string.m"
            /* direct tailcall eliminated */
#line 4689 "string.m"
            {
#line 4689 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4689 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4689 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4689 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4689 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4689 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4689 "string.m"
            }
#line 4689 "string.m"
            continue;
#line 4688 "string.m"
          }
#line 4690 "string.m"
        else
#line 4691 "string.m"
          {
#line 4691 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4691 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4691 "string.m"
          }
#line 4690 "string.m"
      }
#line 4690 "string.m"
      break;
#line 4690 "string.m"
    }
#line 4671 "string.m"
}

#line 4669 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_0(
#line 4669 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4669 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4669 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4669 "string.m"
  MR_String mercury__string__String_10,
#line 4669 "string.m"
  MR_Integer mercury__string__I_11,
#line 4669 "string.m"
  MR_Integer mercury__string__End_12,
#line 4669 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4669 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4669 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4669 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4669 "string.m"
{
#line 4690 "string.m"
  while (MR_TRUE)
#line 4690 "string.m"
    {
#line 4690 "string.m"
      /* tailcall optimized into a loop */
#line 4690 "string.m"
      {
#line 4690 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4690 "string.m"
        MR_Integer mercury__string__J_15;
#line 4690 "string.m"
        MR_Char mercury__string__Char_16;

#line 4684 "string.m"
        if (mercury__string__succeeded)
#line 4684 "string.m"
          {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9436 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4684 "string.m"
            if (mercury__string__succeeded)
#line 4686 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4684 "string.m"
          }
#line 4690 "string.m"
        if (mercury__string__succeeded)
#line 4688 "string.m"
          {
#line 4688 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4688 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4688 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4688 "string.m"
            {
#line 4688 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4689 "string.m"
            /* direct tailcall eliminated */
#line 4689 "string.m"
            {
#line 4689 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4689 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4689 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4689 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4689 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4689 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4689 "string.m"
            }
#line 4689 "string.m"
            continue;
#line 4688 "string.m"
          }
#line 4690 "string.m"
        else
#line 4691 "string.m"
          {
#line 4691 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4691 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4691 "string.m"
          }
#line 4690 "string.m"
      }
#line 4690 "string.m"
      break;
#line 4690 "string.m"
    }
#line 4669 "string.m"
}

#line 4661 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
#line 4661 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4661 "string.m"
{
#line 4661 "string.m"
  {
#line 4661 "string.m"
    struct mercury__string__foldl_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4662 "string.m"
    {
#line 4662 "string.m"
      mercury__string__foldl_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
#line 4662 "string.m"
      return;
    }
#line 4661 "string.m"
  }
#line 4661 "string.m"
}

#line 4652 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_4(
#line 4652 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4652 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4652 "string.m"
  MR_String mercury__string__String_8,
#line 4652 "string.m"
  MR_Integer mercury__string__I_9,
#line 4652 "string.m"
  MR_Integer mercury__string__End_10,
#line 4652 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4652 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4652 "string.m"
  MR_Cont mercury__string__cont,
#line 4652 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4652 "string.m"
{
#line 4652 "string.m"
  {
#line 4652 "string.m"
    struct mercury__string__foldl_between_2_6_p_4_env_0_s mercury__string__env;

#line 4652 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
#line 4652 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
#line 4652 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
#line 4652 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10 = mercury__string__End_10;
#line 4652 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4652 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont = mercury__string__cont;
#line 4652 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4663 "string.m"
    {
#line 4663 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
#line 4663 "string.m"
      MR_Char mercury__string__Char_13;

#line 4657 "string.m"
      if (mercury__string__succeeded)
#line 4657 "string.m"
        {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9613 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4657 "string.m"
          if (mercury__string__succeeded)
#line 4659 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
#line 4657 "string.m"
        }
#line 4663 "string.m"
      if (mercury__string__succeeded)
#line 4661 "string.m"
        {
#line 4661 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

#line 4661 "string.m"
          {
#line 4661 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_4_1, &mercury__string__env);
          }
#line 4661 "string.m"
        }
#line 4663 "string.m"
      else
#line 4663 "string.m"
        {
#line 4663 "string.m"
          *((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4663 "string.m"
          {
#line 4663 "string.m"
            ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
#line 4663 "string.m"
            return;
          }
#line 4663 "string.m"
        }
#line 4663 "string.m"
    }
#line 4652 "string.m"
  }
#line 4652 "string.m"
}

#line 4661 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
#line 4661 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4661 "string.m"
{
#line 4661 "string.m"
  {
#line 4661 "string.m"
    struct mercury__string__foldl_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 4662 "string.m"
    {
#line 4662 "string.m"
      mercury__string__foldl_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
#line 4662 "string.m"
      return;
    }
#line 4661 "string.m"
  }
#line 4661 "string.m"
}

#line 4650 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_3(
#line 4650 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4650 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4650 "string.m"
  MR_String mercury__string__String_8,
#line 4650 "string.m"
  MR_Integer mercury__string__I_9,
#line 4650 "string.m"
  MR_Integer mercury__string__End_10,
#line 4650 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4650 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4650 "string.m"
  MR_Cont mercury__string__cont,
#line 4650 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4650 "string.m"
{
#line 4650 "string.m"
  {
#line 4650 "string.m"
    struct mercury__string__foldl_between_2_6_p_3_env_0_s mercury__string__env;

#line 4650 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
#line 4650 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
#line 4650 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
#line 4650 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10 = mercury__string__End_10;
#line 4650 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4650 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont = mercury__string__cont;
#line 4650 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4663 "string.m"
    {
#line 4663 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
#line 4663 "string.m"
      MR_Char mercury__string__Char_13;

#line 4657 "string.m"
      if (mercury__string__succeeded)
#line 4657 "string.m"
        {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9768 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4657 "string.m"
          if (mercury__string__succeeded)
#line 4659 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
#line 4657 "string.m"
        }
#line 4663 "string.m"
      if (mercury__string__succeeded)
#line 4661 "string.m"
        {
#line 4661 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

#line 4661 "string.m"
          {
#line 4661 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_3_1, &mercury__string__env);
          }
#line 4661 "string.m"
        }
#line 4663 "string.m"
      else
#line 4663 "string.m"
        {
#line 4663 "string.m"
          *((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4663 "string.m"
          {
#line 4663 "string.m"
            ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
#line 4663 "string.m"
            return;
          }
#line 4663 "string.m"
        }
#line 4663 "string.m"
    }
#line 4650 "string.m"
  }
#line 4650 "string.m"
}

#line 4648 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_between_2_6_p_2(
#line 4648 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4648 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4648 "string.m"
  MR_String mercury__string__String_8,
#line 4648 "string.m"
  MR_Integer mercury__string__I_9,
#line 4648 "string.m"
  MR_Integer mercury__string__End_10,
#line 4648 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4648 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4648 "string.m"
{
#line 4663 "string.m"
  while (MR_TRUE)
#line 4663 "string.m"
    {
#line 4663 "string.m"
      /* tailcall optimized into a loop */
#line 4663 "string.m"
      {
#line 4663 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4663 "string.m"
        MR_Integer mercury__string__J_12;
#line 4663 "string.m"
        MR_Char mercury__string__Char_13;

#line 4657 "string.m"
        if (mercury__string__succeeded)
#line 4657 "string.m"
          {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9884 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4657 "string.m"
            if (mercury__string__succeeded)
#line 4659 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4657 "string.m"
          }
#line 4663 "string.m"
        if (mercury__string__succeeded)
#line 4661 "string.m"
          {
#line 4661 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4661 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4661 "string.m"
            {
#line 4661 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4661 "string.m"
            if (mercury__string__succeeded)
#line 4662 "string.m"
              {
#line 4662 "string.m"
                /* direct tailcall eliminated */
#line 4662 "string.m"
                {
#line 4662 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4662 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4662 "string.m"
                  mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4662 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4662 "string.m"
                }
#line 4662 "string.m"
                continue;
#line 4662 "string.m"
              }
#line 4661 "string.m"
          }
#line 4663 "string.m"
        else
#line 4663 "string.m"
          {
#line 4663 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4663 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4663 "string.m"
          }
#line 4663 "string.m"
        return mercury__string__succeeded;
#line 4663 "string.m"
      }
#line 4663 "string.m"
      break;
#line 4663 "string.m"
    }
#line 4648 "string.m"
}

#line 4646 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_1(
#line 4646 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4646 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4646 "string.m"
  MR_String mercury__string__String_8,
#line 4646 "string.m"
  MR_Integer mercury__string__I_9,
#line 4646 "string.m"
  MR_Integer mercury__string__End_10,
#line 4646 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4646 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4646 "string.m"
{
#line 4663 "string.m"
  while (MR_TRUE)
#line 4663 "string.m"
    {
#line 4663 "string.m"
      /* tailcall optimized into a loop */
#line 4663 "string.m"
      {
#line 4663 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4663 "string.m"
        MR_Integer mercury__string__J_12;
#line 4663 "string.m"
        MR_Char mercury__string__Char_13;

#line 4657 "string.m"
        if (mercury__string__succeeded)
#line 4657 "string.m"
          {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 10024 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4657 "string.m"
            if (mercury__string__succeeded)
#line 4659 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4657 "string.m"
          }
#line 4663 "string.m"
        if (mercury__string__succeeded)
#line 4661 "string.m"
          {
#line 4661 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4661 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4661 "string.m"
            {
#line 4661 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4662 "string.m"
            /* direct tailcall eliminated */
#line 4662 "string.m"
            {
#line 4662 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4662 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4662 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4662 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4662 "string.m"
            }
#line 4662 "string.m"
            continue;
#line 4661 "string.m"
          }
#line 4663 "string.m"
        else
#line 4663 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4663 "string.m"
      }
#line 4663 "string.m"
      break;
#line 4663 "string.m"
    }
#line 4646 "string.m"
}

#line 4644 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_0(
#line 4644 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4644 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4644 "string.m"
  MR_String mercury__string__String_8,
#line 4644 "string.m"
  MR_Integer mercury__string__I_9,
#line 4644 "string.m"
  MR_Integer mercury__string__End_10,
#line 4644 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4644 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4644 "string.m"
{
#line 4663 "string.m"
  while (MR_TRUE)
#line 4663 "string.m"
    {
#line 4663 "string.m"
      /* tailcall optimized into a loop */
#line 4663 "string.m"
      {
#line 4663 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4663 "string.m"
        MR_Integer mercury__string__J_12;
#line 4663 "string.m"
        MR_Char mercury__string__Char_13;

#line 4657 "string.m"
        if (mercury__string__succeeded)
#line 4657 "string.m"
          {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 10150 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4657 "string.m"
            if (mercury__string__succeeded)
#line 4659 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4657 "string.m"
          }
#line 4663 "string.m"
        if (mercury__string__succeeded)
#line 4661 "string.m"
          {
#line 4661 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4661 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4661 "string.m"
            {
#line 4661 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4662 "string.m"
            /* direct tailcall eliminated */
#line 4662 "string.m"
            {
#line 4662 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4662 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4662 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4662 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4662 "string.m"
            }
#line 4662 "string.m"
            continue;
#line 4661 "string.m"
          }
#line 4663 "string.m"
        else
#line 4663 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4663 "string.m"
      }
#line 4663 "string.m"
      break;
#line 4663 "string.m"
    }
#line 4644 "string.m"
}

#line 4602 "string.m"
MR_Word MR_CALL 
mercury__string__break_up_string_reverse_3_f_0(
#line 4602 "string.m"
  MR_String mercury__string__Str_5,
#line 4602 "string.m"
  MR_Integer mercury__string__N_6,
#line 4602 "string.m"
  MR_Word mercury__string__Prev_7)
#line 4602 "string.m"
{
#line 4607 "string.m"
  while (MR_TRUE)
#line 4607 "string.m"
    {
#line 4607 "string.m"
      /* tailcall optimized into a loop */
#line 4607 "string.m"
      {
#line 4607 "string.m"
        MR_bool mercury__string__succeeded;
#line 4607 "string.m"
        MR_Word mercury__string__Strs_8;
#line 4605 "string.m"
        MR_Integer mercury__string__V_11_11;

#line 2469 "string.m"
        {
#line 2469 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__Str_5, &mercury__string__V_11_11);
        }
#line 4605 "string.m"
        mercury__string__succeeded = (mercury__string__V_11_11 <= mercury__string__N_6);
#line 4607 "string.m"
        if (mercury__string__succeeded)
#line 4606 "string.m"
          {
#line 4606 "string.m"
            mercury__string__Strs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4606 "string.m"
            MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 0) = ((MR_Box) (mercury__string__Str_5));
#line 4606 "string.m"
            MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 1) = ((MR_Box) (mercury__string__Prev_7));
#line 4606 "string.m"
          }
#line 4607 "string.m"
        else
#line 4608 "string.m"
          {
#line 4608 "string.m"
            MR_String mercury__string__Left_9;
#line 4608 "string.m"
            MR_String mercury__string__Right_10;
#line 4608 "string.m"
            MR_Word mercury__string__V_12_12;

#line 4608 "string.m"
            {
#line 4608 "string.m"
              mercury__string__split_by_codepoint_4_p_0(mercury__string__Str_5, mercury__string__N_6, &mercury__string__Left_9, &mercury__string__Right_10);
            }
#line 4609 "string.m"
            {
#line 4609 "string.m"
              mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4609 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_12_12, 0) = ((MR_Box) (mercury__string__Left_9));
#line 4609 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_12_12, 1) = ((MR_Box) (mercury__string__Prev_7));
#line 4609 "string.m"
            }
#line 4609 "string.m"
            /* direct tailcall eliminated */
#line 4609 "string.m"
            {
#line 4609 "string.m"
              MR_String mercury__string__Str__tmp_copy_5 = mercury__string__Right_10;
#line 4609 "string.m"
              MR_Word mercury__string__Prev__tmp_copy_7 = mercury__string__V_12_12;

#line 4609 "string.m"
              mercury__string__Prev_7 = mercury__string__Prev__tmp_copy_7;
#line 4609 "string.m"
              mercury__string__Str_5 = mercury__string__Str__tmp_copy_5;
#line 4609 "string.m"
            }
#line 4609 "string.m"
            continue;
#line 4608 "string.m"
          }
#line 4607 "string.m"
        return mercury__string__Strs_8;
#line 4607 "string.m"
      }
#line 4607 "string.m"
      break;
#line 4607 "string.m"
    }
#line 4602 "string.m"
}

#line 4525 "string.m"
void MR_CALL 
mercury__string__word_wrap_loop_7_p_0(
#line 4525 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4525 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4525 "string.m"
  MR_Integer mercury__string__SepLen_3,
#line 4525 "string.m"
  MR_Integer mercury__string__CurCol_4,
#line 4525 "string.m"
  MR_Integer mercury__string__MaxCol_5,
#line 4525 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6,
#line 4525 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7)
#line 4525 "string.m"
{
#line 4528 "string.m"
  while (MR_TRUE)
#line 4528 "string.m"
    {
#line 4528 "string.m"
      /* tailcall optimized into a loop */
#line 4528 "string.m"
      {
#line 4528 "string.m"
        MR_bool mercury__string__succeeded;

#line 4528 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4528 "string.m"
          *mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6;
#line 4528 "string.m"
        else
#line 4530 "string.m"
          {
#line 4530 "string.m"
            MR_String mercury__string__Word_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4530 "string.m"
            MR_Word mercury__string__Words_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4530 "string.m"
            MR_Integer mercury__string__WordLen_22;
#line 4530 "string.m"
            MR_Word mercury__string__NewWords_23;
#line 4530 "string.m"
            MR_Integer mercury__string__NewCol_24;
#line 4530 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

#line 2469 "string.m"
            {
#line 2469 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__Word_15, &mercury__string__WordLen_22);
            }
#line 4535 "string.m"
            mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4535 "string.m"
            if (mercury__string__succeeded)
#line 4536 "string.m"
              mercury__string__succeeded = (mercury__string__WordLen_22 < mercury__string__MaxCol_5);
#line 4541 "string.m"
            if (mercury__string__succeeded)
#line 4538 "string.m"
              {
#line 4538 "string.m"
                mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4539 "string.m"
                mercury__string__NewCol_24 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
#line 4540 "string.m"
                {
#line 4540 "string.m"
                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4540 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4540 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4540 "string.m"
                }
#line 4538 "string.m"
              }
#line 4541 "string.m"
            else
#line 4556 "string.m"
              {
#line 4543 "string.m"
                mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4543 "string.m"
                if (mercury__string__succeeded)
#line 4544 "string.m"
                  mercury__string__succeeded = (mercury__string__WordLen_22 == mercury__string__MaxCol_5);
#line 4556 "string.m"
                if (mercury__string__succeeded)
#line 4546 "string.m"
                  {
#line 4546 "string.m"
                    mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4547 "string.m"
                    mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4552 "string.m"
                    if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4551 "string.m"
                      {
#line 4551 "string.m"
                        mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4551 "string.m"
                        MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4551 "string.m"
                        MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4551 "string.m"
                      }
#line 4552 "string.m"
                    else
#line 4553 "string.m"
                      {
#line 4553 "string.m"
                        MR_Word mercury__string__V_39_39;

#line 4554 "string.m"
                        {
#line 4554 "string.m"
                          mercury__string__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4554 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_39_39, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4554 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_39_39, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4554 "string.m"
                        }
#line 4554 "string.m"
                        {
#line 4554 "string.m"
                          mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4554 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4554 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_39_39));
#line 4554 "string.m"
                        }
#line 4553 "string.m"
                      }
#line 4546 "string.m"
                  }
#line 4556 "string.m"
                else
#line 4564 "string.m"
                  {
#line 4559 "string.m"
                    MR_Integer mercury__string__V_41_41 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

#line 4559 "string.m"
                    mercury__string__succeeded = (mercury__string__V_41_41 < mercury__string__MaxCol_5);
#line 4564 "string.m"
                    if (mercury__string__succeeded)
#line 4561 "string.m"
                      {
#line 4561 "string.m"
                        MR_Integer mercury__string__V_42_42;
#line 4561 "string.m"
                        MR_Word mercury__string__V_45_45;

#line 4561 "string.m"
                        mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4562 "string.m"
                        mercury__string__V_42_42 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
#line 4562 "string.m"
                        mercury__string__NewCol_24 = (mercury__string__V_42_42 + (MR_Integer) 1);
#line 4563 "string.m"
                        {
#line 4563 "string.m"
                          mercury__string__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4563 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 0) = ((MR_Box) ((MR_String) " "));
#line 4563 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4563 "string.m"
                        }
#line 4563 "string.m"
                        {
#line 4563 "string.m"
                          mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4563 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4563 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_45_45));
#line 4563 "string.m"
                        }
#line 4561 "string.m"
                      }
#line 4564 "string.m"
                    else
#line 4578 "string.m"
                      {
#line 4566 "string.m"
                        MR_Integer mercury__string__V_70_70 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

#line 4566 "string.m"
                        mercury__string__succeeded = (mercury__string__MaxCol_5 == mercury__string__V_70_70);
#line 4578 "string.m"
                        if (mercury__string__succeeded)
#line 4568 "string.m"
                          {
#line 4568 "string.m"
                            mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4569 "string.m"
                            mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4574 "string.m"
                            if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4572 "string.m"
                              {
#line 4572 "string.m"
                                MR_Word mercury__string__V_53_53;

#line 4573 "string.m"
                                {
#line 4573 "string.m"
                                  mercury__string__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4573 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_53_53, 0) = ((MR_Box) ((MR_String) " "));
#line 4573 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_53_53, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4573 "string.m"
                                }
#line 4573 "string.m"
                                {
#line 4573 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4573 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4573 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_53_53));
#line 4573 "string.m"
                                }
#line 4572 "string.m"
                              }
#line 4574 "string.m"
                            else
#line 4575 "string.m"
                              {
#line 4575 "string.m"
                                MR_Word mercury__string__V_49_49;
#line 4575 "string.m"
                                MR_Word mercury__string__V_50_50;

#line 4576 "string.m"
                                {
#line 4576 "string.m"
                                  mercury__string__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4576 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_50_50, 0) = ((MR_Box) ((MR_String) " "));
#line 4576 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_50_50, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4576 "string.m"
                                }
#line 4576 "string.m"
                                {
#line 4576 "string.m"
                                  mercury__string__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4576 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_49_49, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4576 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_49_49, 1) = ((MR_Box) (mercury__string__V_50_50));
#line 4576 "string.m"
                                }
#line 4576 "string.m"
                                {
#line 4576 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4576 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4576 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_49_49));
#line 4576 "string.m"
                                }
#line 4575 "string.m"
                              }
#line 4568 "string.m"
                          }
#line 4578 "string.m"
                        else
#line 4593 "string.m"
                          {
#line 4580 "string.m"
                            mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4593 "string.m"
                            if (mercury__string__succeeded)
#line 4582 "string.m"
                              {
#line 4582 "string.m"
                                MR_Word mercury__string__TypeCtorInfo_69_69;
#line 4582 "string.m"
                                MR_Word mercury__string__RevPieces_29;
#line 4582 "string.m"
                                MR_String mercury__string__LastPiece_30;
#line 4582 "string.m"
                                MR_Word mercury__string__Rest_31;
#line 4582 "string.m"
                                MR_Word mercury__string__RestWithSep_32;
#line 4582 "string.m"
                                MR_Integer mercury__string__V_55_55 = (mercury__string__MaxCol_5 - mercury__string__SepLen_3);
#line 4582 "string.m"
                                MR_Word mercury__string__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4582 "string.m"
                                {
#line 4582 "string.m"
                                  mercury__string__RevPieces_29 = mercury__string__break_up_string_reverse_3_f_0(mercury__string__Word_15, mercury__string__V_55_55, mercury__string__V_56_56);
                                }
#line 4585 "string.m"
                                if ((mercury__string__RevPieces_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4586 "string.m"
                                  {
#line 4587 "string.m"
                                    {
#line 4587 "string.m"
                                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.word_wrap_loop\'/7", (MR_String) "no pieces");
#line 4587 "string.m"
                                      return;
                                    }
#line 4586 "string.m"
                                  }
#line 4585 "string.m"
                                else
#line 4584 "string.m"
                                  {
#line 4584 "string.m"
                                    mercury__string__LastPiece_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 0)));
#line 4584 "string.m"
                                    mercury__string__Rest_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 1)));
#line 4584 "string.m"
                                  }
#line 4589 "string.m"
                                {
#line 4589 "string.m"
                                  mercury__string__NewWords_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4589 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 0) = ((MR_Box) (mercury__string__LastPiece_30));
#line 4589 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 1) = ((MR_Box) (mercury__string__Words_16));
#line 4589 "string.m"
                                }
#line 4590 "string.m"
                                mercury__string__NewCol_24 = (MR_Integer) 1;
#line 10657 "string.c"
                                mercury__string__TypeCtorInfo_69_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4591 "string.m"
                                {
#line 4591 "string.m"
                                  mercury__string__RestWithSep_32 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(mercury__string__WordSep_2, mercury__string__Rest_31);
                                }
#line 46 "list.opt"
                                {
#line 46 "list.opt"
                                  mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_69_69, mercury__string__RestWithSep_32, mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6, &mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36);
                                }
#line 4582 "string.m"
                              }
#line 4593 "string.m"
                            else
#line 4594 "string.m"
                              {
#line 4594 "string.m"
                                mercury__string__NewWords_23 = mercury__string__HeadVar__1_1;
#line 4595 "string.m"
                                mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4596 "string.m"
                                {
#line 4596 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4596 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4596 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4596 "string.m"
                                }
#line 4594 "string.m"
                              }
#line 4593 "string.m"
                          }
#line 4578 "string.m"
                      }
#line 4564 "string.m"
                  }
#line 4556 "string.m"
              }
#line 4599 "string.m"
            /* direct tailcall eliminated */
#line 4599 "string.m"
            {
#line 4599 "string.m"
              MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__NewWords_23;
#line 4599 "string.m"
              MR_Integer mercury__string__CurCol__tmp_copy_4 = mercury__string__NewCol_24;
#line 4599 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0__tmp_copy_6 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

#line 4599 "string.m"
              mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0__tmp_copy_6;
#line 4599 "string.m"
              mercury__string__CurCol_4 = mercury__string__CurCol__tmp_copy_4;
#line 4599 "string.m"
              mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 4599 "string.m"
            }
#line 4599 "string.m"
            continue;
#line 4530 "string.m"
          }
#line 4528 "string.m"
      }
#line 4528 "string.m"
      break;
#line 4528 "string.m"
    }
#line 4525 "string.m"
}

#line 4471 "string.m"
void MR_CALL 
mercury__string__replace_all_loop_7_p_0(
#line 4471 "string.m"
  MR_String mercury__string__Str_8,
#line 4471 "string.m"
  MR_String mercury__string__Pat_9,
#line 4471 "string.m"
  MR_String mercury__string__Subst_10,
#line 4471 "string.m"
  MR_Integer mercury__string__PatLength_11,
#line 4471 "string.m"
  MR_Integer mercury__string__BeginAt_12,
#line 4471 "string.m"
  MR_Word mercury__string__RevChunks0_13,
#line 4471 "string.m"
  MR_Word * mercury__string__RevChunks_14)
#line 4471 "string.m"
{
#line 4481 "string.m"
  while (MR_TRUE)
#line 4481 "string.m"
    {
#line 4481 "string.m"
      /* tailcall optimized into a loop */
#line 4481 "string.m"
      {
#line 4481 "string.m"
        MR_bool mercury__string__succeeded;
#line 4481 "string.m"
        MR_Integer mercury__string__Index_15;

#line 3011 "string.m"
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
#line 3011 "string.m"
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
#line 10792 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_15  = Index;
#line 3011 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4481 "string.m"
        if (mercury__string__succeeded)
#line 4477 "string.m"
          {
#line 4477 "string.m"
            MR_String mercury__string__Initial_16;
#line 4477 "string.m"
            MR_Integer mercury__string__Start_17;
#line 4477 "string.m"
            MR_Word mercury__string__V_19_19;
#line 4477 "string.m"
            MR_Word mercury__string__V_20_20;

#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 10837 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_16  = SubString;
#line 4109 "string.m"
}
#line 4478 "string.m"
            mercury__string__Start_17 = (mercury__string__Index_15 + mercury__string__PatLength_11);
#line 4480 "string.m"
            {
#line 4480 "string.m"
              mercury__string__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4480 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_20_20, 0) = ((MR_Box) (mercury__string__Initial_16));
#line 4480 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_20_20, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
#line 4480 "string.m"
            }
#line 4480 "string.m"
            {
#line 4480 "string.m"
              mercury__string__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4480 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_19_19, 0) = ((MR_Box) (mercury__string__Subst_10));
#line 4480 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_19_19, 1) = ((MR_Box) (mercury__string__V_20_20));
#line 4480 "string.m"
            }
#line 4479 "string.m"
            /* direct tailcall eliminated */
#line 4479 "string.m"
            {
#line 4479 "string.m"
              MR_Integer mercury__string__BeginAt__tmp_copy_12 = mercury__string__Start_17;
#line 4479 "string.m"
              MR_Word mercury__string__RevChunks0__tmp_copy_13 = mercury__string__V_19_19;

#line 4479 "string.m"
              mercury__string__RevChunks0_13 = mercury__string__RevChunks0__tmp_copy_13;
#line 4479 "string.m"
              mercury__string__BeginAt_12 = mercury__string__BeginAt__tmp_copy_12;
#line 4479 "string.m"
            }
#line 4479 "string.m"
            continue;
#line 4477 "string.m"
          }
#line 4481 "string.m"
        else
#line 4482 "string.m"
          {
#line 4482 "string.m"
            MR_String mercury__string__EndString_18;
#line 4482 "string.m"
            MR_Integer mercury__string__V_21_21;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 10907 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_21_21  = Length;
#line 2409 "string.m"
}
#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 10936 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndString_18  = SubString;
#line 4109 "string.m"
}
#line 4483 "string.m"
            {
#line 4483 "string.m"
              MR_Word base;
#line 4483 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4483 "string.m"
              *mercury__string__RevChunks_14 = base;
#line 4483 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__EndString_18));
#line 4483 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
#line 4483 "string.m"
            }
#line 4482 "string.m"
          }
#line 4481 "string.m"
      }
#line 4481 "string.m"
      break;
#line 4481 "string.m"
    }
#line 4471 "string.m"
}

#line 4388 "string.m"
void MR_CALL 
mercury__string__char_list_to_lower_2_p_0(
#line 4388 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4388 "string.m"
  MR_Word * mercury__string__HeadVar__2_2)
#line 4388 "string.m"
{
#line 4390 "string.m"
  {
#line 4390 "string.m"
    MR_bool mercury__string__succeeded;

#line 4390 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4390 "string.m"
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4390 "string.m"
    else
#line 4391 "string.m"
      {
#line 4391 "string.m"
        MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4391 "string.m"
        MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4391 "string.m"
        MR_Char mercury__string__Y_5;
#line 4391 "string.m"
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
#line 4393 "string.m"
        {
#line 4393 "string.m"
          mercury__string__char_list_to_lower_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
        }
#line 4391 "string.m"
        {
#line 4391 "string.m"
          MR_Word base;
#line 4391 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4391 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4391 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
#line 4391 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
#line 4391 "string.m"
        }
#line 4391 "string.m"
      }
#line 4390 "string.m"
  }
#line 4388 "string.m"
}

#line 4373 "string.m"
void MR_CALL 
mercury__string__char_list_to_upper_2_p_0(
#line 4373 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4373 "string.m"
  MR_Word * mercury__string__HeadVar__2_2)
#line 4373 "string.m"
{
#line 4375 "string.m"
  {
#line 4375 "string.m"
    MR_bool mercury__string__succeeded;

#line 4375 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4375 "string.m"
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4375 "string.m"
    else
#line 4376 "string.m"
      {
#line 4376 "string.m"
        MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4376 "string.m"
        MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4376 "string.m"
        MR_Char mercury__string__Y_5;
#line 4376 "string.m"
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
#line 4378 "string.m"
        {
#line 4378 "string.m"
          mercury__string__char_list_to_upper_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
        }
#line 4376 "string.m"
        {
#line 4376 "string.m"
          MR_Word base;
#line 4376 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4376 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4376 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
#line 4376 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
#line 4376 "string.m"
        }
#line 4376 "string.m"
      }
#line 4375 "string.m"
  }
#line 4373 "string.m"
}

#line 4296 "string.m"
void MR_CALL 
mercury__string__suffix_2_ioii_4_p_0(
#line 4296 "string.m"
  MR_String mercury__string__String_5,
#line 4296 "string.m"
  MR_String * mercury__string__Suffix_6,
#line 4296 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4296 "string.m"
  MR_Integer mercury__string__Len_8,
#line 4296 "string.m"
  MR_Cont mercury__string__cont,
#line 4296 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4296 "string.m"
{
#line 4300 "string.m"
  while (MR_TRUE)
#line 4300 "string.m"
    {
#line 4300 "string.m"
      /* tailcall optimized into a loop */
#line 4300 "string.m"
      {
#line 4300 "string.m"
        MR_bool mercury__string__succeeded;

#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11162 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Suffix_6  = SubString;
#line 4109 "string.m"
}
#line 4105 "string.m"
        {
#line 4105 "string.m"
          mercury__string__cont(mercury__string__cont_env_ptr);
        }
#line 4302 "string.m"
        {
#line 4302 "string.m"
          MR_Integer mercury__string__Prev_9;
#line 2038 "string.m"
          MR_Char mercury__string__V_10_10;

#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 11209 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Prev_9  = PrevIndex;
	 mercury__string__V_10_10  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4302 "string.m"
          if (mercury__string__succeeded)
#line 4303 "string.m"
            {
#line 4303 "string.m"
              /* direct tailcall eliminated */
#line 4303 "string.m"
              {
#line 4303 "string.m"
                MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Prev_9;

#line 4303 "string.m"
                mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4303 "string.m"
              }
#line 4303 "string.m"
              continue;
#line 4303 "string.m"
            }
#line 4302 "string.m"
        }
#line 4300 "string.m"
      }
#line 4300 "string.m"
      break;
#line 4300 "string.m"
    }
#line 4296 "string.m"
}

#line 4284 "string.m"
MR_bool MR_CALL 
mercury__string__suffix_2_iiii_5_p_0(
#line 4284 "string.m"
  MR_String mercury__string__String_6,
#line 4284 "string.m"
  MR_String mercury__string__Suffix_7,
#line 4284 "string.m"
  MR_Integer mercury__string__I_8,
#line 4284 "string.m"
  MR_Integer mercury__string__Offset_9,
#line 4284 "string.m"
  MR_Integer mercury__string__Len_10)
#line 4284 "string.m"
{
#line 4292 "string.m"
  while (MR_TRUE)
#line 4292 "string.m"
    {
#line 4292 "string.m"
      /* tailcall optimized into a loop */
#line 4292 "string.m"
      {
#line 4292 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_8 < mercury__string__Len_10);

#line 4292 "string.m"
        if (mercury__string__succeeded)
#line 4289 "string.m"
          {
#line 4289 "string.m"
            MR_Integer mercury__string__C_11;
#line 4289 "string.m"
            MR_Integer mercury__string__V_12_12 = (mercury__string__I_8 + mercury__string__Offset_9);
#line 4289 "string.m"
            MR_Integer mercury__string__V_13_13;
#line 4289 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 4289 "string.m"
            MR_Integer mercury__string__V_15_15;

#line 2169 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__V_12_12 ;
		{
#line 2169 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11307 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_11  = Code;
#line 2169 "string.m"
}
#line 2169 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Suffix_7 ;
	Index =  mercury__string__I_8 ;
		{
#line 2169 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11330 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_15_15  = Code;
#line 2169 "string.m"
}
#line 4290 "string.m"
            mercury__string__succeeded = (mercury__string__C_11 == mercury__string__V_15_15);
#line 4289 "string.m"
            if (mercury__string__succeeded)
#line 4289 "string.m"
              {
#line 4291 "string.m"
                mercury__string__V_14_14 = (MR_Integer) 1;
#line 4291 "string.m"
                mercury__string__V_13_13 = (mercury__string__I_8 + mercury__string__V_14_14);
#line 4291 "string.m"
                /* direct tailcall eliminated */
#line 4291 "string.m"
                {
#line 4291 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_8 = mercury__string__V_13_13;

#line 4291 "string.m"
                  mercury__string__I_8 = mercury__string__I__tmp_copy_8;
#line 4291 "string.m"
                }
#line 4291 "string.m"
                continue;
#line 4289 "string.m"
              }
#line 4289 "string.m"
          }
#line 4292 "string.m"
        else
#line 4293 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4292 "string.m"
        return mercury__string__succeeded;
#line 4292 "string.m"
      }
#line 4292 "string.m"
      break;
#line 4292 "string.m"
    }
#line 4284 "string.m"
}

#line 4263 "string.m"
void MR_CALL 
mercury__string__prefix_2_ioi_3_p_0(
#line 4263 "string.m"
  MR_String mercury__string__String_4,
#line 4263 "string.m"
  MR_String * mercury__string__Prefix_5,
#line 4263 "string.m"
  MR_Integer mercury__string__Cur_6,
#line 4263 "string.m"
  MR_Cont mercury__string__cont,
#line 4263 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4263 "string.m"
{
#line 4267 "string.m"
  while (MR_TRUE)
#line 4267 "string.m"
    {
#line 4267 "string.m"
      /* tailcall optimized into a loop */
#line 4267 "string.m"
      {
#line 4267 "string.m"
        MR_bool mercury__string__succeeded;

#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11427 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Prefix_5  = SubString;
#line 4109 "string.m"
}
#line 4267 "string.m"
        {
#line 4267 "string.m"
          mercury__string__cont(mercury__string__cont_env_ptr);
        }
#line 4269 "string.m"
        {
#line 4269 "string.m"
          MR_Integer mercury__string__Next_7;
#line 1949 "string.m"
          MR_Char mercury__string__V_8_8;

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 11471 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__V_8_8  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4269 "string.m"
          if (mercury__string__succeeded)
#line 4270 "string.m"
            {
#line 4270 "string.m"
              /* direct tailcall eliminated */
#line 4270 "string.m"
              {
#line 4270 "string.m"
                MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 4270 "string.m"
                mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 4270 "string.m"
              }
#line 4270 "string.m"
              continue;
#line 4270 "string.m"
            }
#line 4269 "string.m"
        }
#line 4267 "string.m"
      }
#line 4267 "string.m"
      break;
#line 4267 "string.m"
    }
#line 4263 "string.m"
}

#line 4252 "string.m"
MR_bool MR_CALL 
mercury__string__prefix_2_iii_3_p_0(
#line 4252 "string.m"
  MR_String mercury__string__String_4,
#line 4252 "string.m"
  MR_String mercury__string__Prefix_5,
#line 4252 "string.m"
  MR_Integer mercury__string__I_6)
#line 4252 "string.m"
{
#line 4259 "string.m"
  while (MR_TRUE)
#line 4259 "string.m"
    {
#line 4259 "string.m"
      /* tailcall optimized into a loop */
#line 4259 "string.m"
      {
#line 4259 "string.m"
        MR_bool mercury__string__succeeded = ((MR_Integer) 0 <= mercury__string__I_6);

#line 4259 "string.m"
        if (mercury__string__succeeded)
#line 4256 "string.m"
          {
#line 4256 "string.m"
            MR_Integer mercury__string__C_7;
#line 4256 "string.m"
            MR_Integer mercury__string__V_9_9;
#line 4256 "string.m"
            MR_Integer mercury__string__V_10_10;
#line 4256 "string.m"
            MR_Integer mercury__string__V_11_11;

#line 2169 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__I_6 ;
		{
#line 2169 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11563 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_7  = Code;
#line 2169 "string.m"
}
#line 2169 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Prefix_5 ;
	Index =  mercury__string__I_6 ;
		{
#line 2169 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11586 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Code;
#line 2169 "string.m"
}
#line 4257 "string.m"
            mercury__string__succeeded = (mercury__string__C_7 == mercury__string__V_11_11);
#line 4256 "string.m"
            if (mercury__string__succeeded)
#line 4256 "string.m"
              {
#line 4258 "string.m"
                mercury__string__V_10_10 = (MR_Integer) 1;
#line 4258 "string.m"
                mercury__string__V_9_9 = (mercury__string__I_6 - mercury__string__V_10_10);
#line 4258 "string.m"
                /* direct tailcall eliminated */
#line 4258 "string.m"
                {
#line 4258 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__V_9_9;

#line 4258 "string.m"
                  mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 4258 "string.m"
                }
#line 4258 "string.m"
                continue;
#line 4256 "string.m"
              }
#line 4256 "string.m"
          }
#line 4259 "string.m"
        else
#line 4260 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4259 "string.m"
        return mercury__string__succeeded;
#line 4259 "string.m"
      }
#line 4259 "string.m"
      break;
#line 4259 "string.m"
    }
#line 4252 "string.m"
}

#line 4224 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_string_loop_4_f_0(
#line 4224 "string.m"
  MR_Integer mercury__string__StartAt_6,
#line 4224 "string.m"
  MR_Integer mercury__string__NeedleLen_7,
#line 4224 "string.m"
  MR_String mercury__string__Needle_8,
#line 4224 "string.m"
  MR_String mercury__string__Total_9)
#line 4224 "string.m"
{
#line 4232 "string.m"
  {
#line 4232 "string.m"
    MR_bool mercury__string__succeeded;
#line 4232 "string.m"
    MR_Word mercury__string__Out_10;
#line 4232 "string.m"
    MR_Integer mercury__string__NeedlePos_11;

#line 3011 "string.m"
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
#line 3011 "string.m"
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
#line 11686 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__NeedlePos_11  = Index;
#line 3011 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4232 "string.m"
    if (mercury__string__succeeded)
#line 4228 "string.m"
      {
#line 4228 "string.m"
        MR_String mercury__string__BeforeNeedle_12;
#line 4228 "string.m"
        MR_Word mercury__string__Tail_13;
#line 4228 "string.m"
        MR_Integer mercury__string__V_16_16;

#line 3953 "string.m"
        {
#line 3953 "string.m"
          mercury__string__between_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, mercury__string__NeedlePos_11, &mercury__string__BeforeNeedle_12);
        }
#line 4229 "string.m"
        mercury__string__V_16_16 = (mercury__string__NeedlePos_11 + mercury__string__NeedleLen_7);
#line 4229 "string.m"
        {
#line 4229 "string.m"
          mercury__string__Tail_13 = mercury__string__split_at_string_loop_4_f_0(mercury__string__V_16_16, mercury__string__NeedleLen_7, mercury__string__Needle_8, mercury__string__Total_9);
        }
#line 4231 "string.m"
        {
#line 4231 "string.m"
          mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4231 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__BeforeNeedle_12));
#line 4231 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__Tail_13));
#line 4231 "string.m"
        }
#line 4228 "string.m"
      }
#line 4232 "string.m"
    else
#line 4233 "string.m"
      {
#line 4233 "string.m"
        MR_String mercury__string__Last_15;
#line 4233 "string.m"
        MR_Word mercury__string__V_17_17;
#line 4233 "string.m"
        MR_String mercury__string___Skip_14;

#line 4233 "string.m"
        {
#line 4233 "string.m"
          mercury__string__split_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, &mercury__string___Skip_14, &mercury__string__Last_15);
        }
#line 4234 "string.m"
        mercury__string__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4234 "string.m"
        {
#line 4234 "string.m"
          mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4234 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__Last_15));
#line 4234 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__V_17_17));
#line 4234 "string.m"
        }
#line 4233 "string.m"
      }
#line 4232 "string.m"
    return mercury__string__Out_10;
#line 4232 "string.m"
  }
#line 4224 "string.m"
}

#line 4190 "string.m"
void MR_CALL 
mercury__string__split_at_separator_loop_6_p_0(
#line 4190 "string.m"
  MR_Word mercury__string__DelimP_7,
#line 4190 "string.m"
  MR_String mercury__string__Str_8,
#line 4190 "string.m"
  MR_Integer mercury__string__I_9,
#line 4190 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4190 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4190 "string.m"
  MR_Word * mercury__string__Acc_12)
#line 4190 "string.m"
{
#line 4210 "string.m"
  while (MR_TRUE)
#line 4210 "string.m"
    {
#line 4210 "string.m"
      /* tailcall optimized into a loop */
#line 4210 "string.m"
      {
#line 4210 "string.m"
        MR_bool mercury__string__succeeded;
#line 4210 "string.m"
        MR_Integer mercury__string__J_13;
#line 4210 "string.m"
        MR_Char mercury__string__C_14;

#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 11828 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_13  = PrevIndex;
	 mercury__string__C_14  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4210 "string.m"
        if (mercury__string__succeeded)
#line 4206 "string.m"
          {
#line 4201 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__DelimP_7, (MR_Integer) 1)));

#line 4201 "string.m"
            {
#line 4201 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__DelimP_7), ((MR_Box) (MR_Word) (mercury__string__C_14)));
            }
#line 4206 "string.m"
            if (mercury__string__succeeded)
#line 4203 "string.m"
              {
#line 4203 "string.m"
                MR_String mercury__string__Seg_16;
#line 4203 "string.m"
                MR_Word mercury__string__V_18_18;

#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11882 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_16  = SubString;
#line 4109 "string.m"
}
#line 4205 "string.m"
                {
#line 4205 "string.m"
                  mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4205 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Seg_16));
#line 4205 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4205 "string.m"
                }
#line 4205 "string.m"
                /* direct tailcall eliminated */
#line 4205 "string.m"
                {
#line 4205 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;
#line 4205 "string.m"
                  MR_Integer mercury__string__SegEnd__tmp_copy_10 = mercury__string__J_13;
#line 4205 "string.m"
                  MR_Word mercury__string__Acc0__tmp_copy_11 = mercury__string__V_18_18;

#line 4205 "string.m"
                  mercury__string__Acc0_11 = mercury__string__Acc0__tmp_copy_11;
#line 4205 "string.m"
                  mercury__string__SegEnd_10 = mercury__string__SegEnd__tmp_copy_10;
#line 4205 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4205 "string.m"
                }
#line 4205 "string.m"
                continue;
#line 4203 "string.m"
              }
#line 4206 "string.m"
            else
#line 4208 "string.m"
              {
#line 4208 "string.m"
                /* direct tailcall eliminated */
#line 4208 "string.m"
                {
#line 4208 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;

#line 4208 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4208 "string.m"
                }
#line 4208 "string.m"
                continue;
#line 4208 "string.m"
              }
#line 4206 "string.m"
          }
#line 4210 "string.m"
        else
#line 4212 "string.m"
          {
#line 4212 "string.m"
            MR_String mercury__string__Seg_20;

#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11972 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_20  = SubString;
#line 4109 "string.m"
}
#line 4213 "string.m"
            {
#line 4213 "string.m"
              MR_Word base;
#line 4213 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4213 "string.m"
              *mercury__string__Acc_12 = base;
#line 4213 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Seg_20));
#line 4213 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4213 "string.m"
            }
#line 4212 "string.m"
          }
#line 4210 "string.m"
      }
#line 4210 "string.m"
      break;
#line 4210 "string.m"
    }
#line 4190 "string.m"
}

#line 4171 "string.m"
void MR_CALL 
mercury__string__next_boundary_4_p_0(
#line 4171 "string.m"
  MR_Word mercury__string__P_5,
#line 4171 "string.m"
  MR_String mercury__string__String_6,
#line 4171 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4171 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4171 "string.m"
{
#line 4180 "string.m"
  while (MR_TRUE)
#line 4180 "string.m"
    {
#line 4180 "string.m"
      /* tailcall optimized into a loop */
#line 4180 "string.m"
      {
#line 4180 "string.m"
        MR_bool mercury__string__succeeded;
#line 4180 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4176 "string.m"
        MR_Char mercury__string__Char_10;
#line 4177 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 12059 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4176 "string.m"
        if (mercury__string__succeeded)
#line 4176 "string.m"
          {
#line 4177 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 4177 "string.m"
            {
#line 4177 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 4176 "string.m"
          }
#line 4180 "string.m"
        if (mercury__string__succeeded)
#line 4179 "string.m"
          {
#line 4179 "string.m"
            /* direct tailcall eliminated */
#line 4179 "string.m"
            {
#line 4179 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4179 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4179 "string.m"
            }
#line 4179 "string.m"
            continue;
#line 4179 "string.m"
          }
#line 4180 "string.m"
        else
#line 4181 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4180 "string.m"
      }
#line 4180 "string.m"
      break;
#line 4180 "string.m"
    }
#line 4171 "string.m"
}

#line 4151 "string.m"
void MR_CALL 
mercury__string__words_loop_4_p_0(
#line 4151 "string.m"
  MR_Word mercury__string__SepP_5,
#line 4151 "string.m"
  MR_String mercury__string__String_6,
#line 4151 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4151 "string.m"
  MR_Word * mercury__string__Words_8)
#line 4151 "string.m"
{
#line 4154 "string.m"
  {
#line 4154 "string.m"
    MR_bool mercury__string__succeeded;
#line 4154 "string.m"
    MR_Integer mercury__string__WordEnd_9;

#line 4155 "string.m"
    {
#line 4155 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__WordStart_7, &mercury__string__WordEnd_9);
    }
#line 4156 "string.m"
    mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__WordStart_7);
#line 4158 "string.m"
    if (mercury__string__succeeded)
#line 4157 "string.m"
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4158 "string.m"
    else
#line 4159 "string.m"
      {
#line 4159 "string.m"
        MR_String mercury__string__Word_10;
#line 4159 "string.m"
        MR_Integer mercury__string__NextWordStart_11;

#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 12177 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Word_10  = SubString;
#line 4109 "string.m"
}
#line 4160 "string.m"
        {
#line 4160 "string.m"
          mercury__string__next_boundary_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__WordEnd_9, &mercury__string__NextWordStart_11);
        }
#line 4161 "string.m"
        mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__NextWordStart_11);
#line 4163 "string.m"
        if (mercury__string__succeeded)
#line 4162 "string.m"
          {
#line 4162 "string.m"
            MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4162 "string.m"
            {
#line 4162 "string.m"
              MR_Word base;
#line 4162 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4162 "string.m"
              *mercury__string__Words_8 = base;
#line 4162 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4162 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__V_14_14));
#line 4162 "string.m"
            }
#line 4162 "string.m"
          }
#line 4163 "string.m"
        else
#line 4164 "string.m"
          {
#line 4164 "string.m"
            MR_Word mercury__string__Words0_12;

#line 4164 "string.m"
            {
#line 4164 "string.m"
              mercury__string__words_loop_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__NextWordStart_11, &mercury__string__Words0_12);
            }
#line 4165 "string.m"
            {
#line 4165 "string.m"
              MR_Word base;
#line 4165 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4165 "string.m"
              *mercury__string__Words_8 = base;
#line 4165 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4165 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Words0_12));
#line 4165 "string.m"
            }
#line 4164 "string.m"
          }
#line 4159 "string.m"
      }
#line 4154 "string.m"
  }
#line 4151 "string.m"
}

#line 4067 "string.m"
void MR_CALL 
mercury__string__convert_endpoints_4_p_0(
#line 4067 "string.m"
  MR_Integer mercury__string__Start_5,
#line 4067 "string.m"
  MR_Integer mercury__string__Count_6,
#line 4067 "string.m"
  MR_Integer * mercury__string__ClampStart_7,
#line 4067 "string.m"
  MR_Integer * mercury__string__ClampEnd_8)
#line 4067 "string.m"
{
#line 4069 "string.m"
  {
#line 4069 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_5);

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      *mercury__string__ClampStart_7 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      *mercury__string__ClampStart_7 = mercury__string__Start_5;
#line 4071 "string.m"
    mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
#line 4073 "string.m"
    if (mercury__string__succeeded)
#line 4072 "string.m"
      *mercury__string__ClampEnd_8 = *mercury__string__ClampStart_7;
#line 4073 "string.m"
    else
#line 4077 "string.m"
      {
#line 4075 "string.m"
        MR_Integer mercury__string__V_11_11;
#line 4075 "string.m"
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

#line 12311 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_12_12  = Max;
#line 141 "int.opt"
}
#line 4075 "string.m"
        mercury__string__V_11_11 = (mercury__string__V_12_12 - mercury__string__Count_6);
#line 4075 "string.m"
        mercury__string__succeeded = (*mercury__string__ClampStart_7 > mercury__string__V_11_11);
#line 4077 "string.m"
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

#line 12347 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__ClampEnd_8  = Max;
#line 141 "int.opt"
}
#line 141 "int.opt"
          }
#line 4077 "string.m"
        else
#line 4078 "string.m"
          *mercury__string__ClampEnd_8 = (*mercury__string__ClampStart_7 + mercury__string__Count_6);
#line 4077 "string.m"
      }
#line 4069 "string.m"
  }
#line 4067 "string.m"
}

#line 4044 "string.m"
MR_Word MR_CALL 
mercury__string__between_loop_3_f_0(
#line 4044 "string.m"
  MR_Integer mercury__string__I_5,
#line 4044 "string.m"
  MR_Integer mercury__string__End_6,
#line 4044 "string.m"
  MR_String mercury__string__Str_7)
#line 4044 "string.m"
{
#line 4054 "string.m"
  {
#line 4054 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__I_5 < mercury__string__End_6);
#line 4054 "string.m"
    MR_Word mercury__string__Chars_8;
#line 4054 "string.m"
    MR_Integer mercury__string__J_9;
#line 4054 "string.m"
    MR_Char mercury__string__C_10;

#line 4048 "string.m"
    if (mercury__string__succeeded)
#line 4048 "string.m"
      {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 12418 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__C_10  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4048 "string.m"
        if (mercury__string__succeeded)
#line 4050 "string.m"
          mercury__string__succeeded = (mercury__string__J_9 <= mercury__string__End_6);
#line 4048 "string.m"
      }
#line 4054 "string.m"
    if (mercury__string__succeeded)
#line 4052 "string.m"
      {
#line 4052 "string.m"
        MR_Word mercury__string__Cs_11;

#line 4052 "string.m"
        {
#line 4052 "string.m"
          mercury__string__Cs_11 = mercury__string__between_loop_3_f_0(mercury__string__J_9, mercury__string__End_6, mercury__string__Str_7);
        }
#line 4053 "string.m"
        {
#line 4053 "string.m"
          mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4053 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 0) = ((MR_Box) (MR_Word) (mercury__string__C_10));
#line 4053 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 1) = ((MR_Box) (mercury__string__Cs_11));
#line 4053 "string.m"
        }
#line 4052 "string.m"
      }
#line 4054 "string.m"
    else
#line 4055 "string.m"
      mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4054 "string.m"
    return mercury__string__Chars_8;
#line 4054 "string.m"
  }
#line 4044 "string.m"
}

#line 3495 "string.m"
MR_String MR_CALL 
mercury__string__join_list_loop_2_f_0(
#line 3495 "string.m"
  MR_String mercury__string__Sep_1,
#line 3495 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 3495 "string.m"
{
#line 3497 "string.m"
  {
#line 3497 "string.m"
    MR_bool mercury__string__succeeded;
#line 3497 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 3497 "string.m"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3497 "string.m"
      mercury__string__HeadVar__3_3 = (MR_String) "";
#line 3497 "string.m"
    else
#line 3498 "string.m"
      {
#line 3498 "string.m"
        MR_String mercury__string__H_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 3498 "string.m"
        MR_Word mercury__string__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 3498 "string.m"
        MR_String mercury__string__V_8_8;
#line 3498 "string.m"
        MR_String mercury__string__V_9_9;

#line 3498 "string.m"
        {
#line 3498 "string.m"
          mercury__string__V_9_9 = mercury__string__join_list_loop_2_f_0(mercury__string__Sep_1, mercury__string__T_7);
        }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__H_6 ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 12528 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3219 "string.m"
}
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Sep_1 ;
	S2 =  mercury__string__V_8_8 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 12555 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
#line 3219 "string.m"
}
#line 3498 "string.m"
      }
#line 3497 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3497 "string.m"
  }
#line 3495 "string.m"
}

#line 3314 "string.m"
static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
#line 3314 "string.m"
  void * mercury__string__env_ptr_arg)
#line 3314 "string.m"
{
#line 3314 "string.m"
  {
#line 3314 "string.m"
    struct mercury__string__mercury_append_3_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__mercury_append_3_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 3314 "string.m"
    {
#line 1451 "string.m"
      MR_String mercury__string__Str0_27;
#line 1451 "string.m"
      MR_String mercury__string__Str0_37;

#line 1449 "string.m"
      {
#line 1449 "string.m"
        (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__XList_7, &mercury__string__Str0_27);
      }
#line 1451 "string.m"
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
#line 1450 "string.m"
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__X_4) = mercury__string__Str0_27;
#line 1451 "string.m"
      else
#line 1452 "string.m"
        {
#line 1452 "string.m"
          {
#line 1452 "string.m"
            mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1452 "string.m"
            return;
          }
#line 1452 "string.m"
        }
#line 1449 "string.m"
      {
#line 1449 "string.m"
        (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__YList_8, &mercury__string__Str0_37);
      }
#line 1451 "string.m"
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
#line 1450 "string.m"
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__Y_5) = mercury__string__Str0_37;
#line 1451 "string.m"
      else
#line 1452 "string.m"
        {
#line 1452 "string.m"
          {
#line 1452 "string.m"
            mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1452 "string.m"
            return;
          }
#line 1452 "string.m"
        }
#line 1451 "string.m"
      {
#line 1451 "string.m"
        ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont)((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr);
#line 1451 "string.m"
        return;
      }
#line 3314 "string.m"
    }
#line 3314 "string.m"
  }
#line 3314 "string.m"
}

#line 3312 "string.m"
void MR_CALL 
mercury__string__mercury_append_3_p_3(
#line 3312 "string.m"
  MR_String * mercury__string__X_4,
#line 3312 "string.m"
  MR_String * mercury__string__Y_5,
#line 3312 "string.m"
  MR_String mercury__string__Z_6,
#line 3312 "string.m"
  MR_Cont mercury__string__cont,
#line 3312 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3312 "string.m"
{
#line 3312 "string.m"
  {
#line 3312 "string.m"
    struct mercury__string__mercury_append_3_p_3_env_0_s mercury__string__env;

#line 3312 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__X_4 = mercury__string__X_4;
#line 3312 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__Y_5 = mercury__string__Y_5;
#line 3312 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont = mercury__string__cont;
#line 3312 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 3314 "string.m"
    {
#line 3314 "string.m"
      MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3314 "string.m"
      MR_Word mercury__string__ZList_9;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_3

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1373 "string.m"
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
#line 12707 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1373 "string.m"
}
#line 12714 "string.c"
      mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3318 "string.m"
      {
#line 3318 "string.m"
        mercury__list__append_3_p_4(mercury__string__TypeCtorInfo_10_10, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__XList_7, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__YList_8, mercury__string__ZList_9, mercury__string__mercury_append_3_p_3_1, &mercury__string__env);
      }
#line 3314 "string.m"
    }
#line 3312 "string.m"
  }
#line 3312 "string.m"
}

#line 3311 "string.m"
void MR_CALL 
mercury__string__mercury_append_3_p_2(
#line 3311 "string.m"
  MR_String mercury__string__X_4,
#line 3311 "string.m"
  MR_String mercury__string__Y_5,
#line 3311 "string.m"
  MR_String * mercury__string__Z_6)
#line 3311 "string.m"
{
#line 3314 "string.m"
  {
#line 3314 "string.m"
    MR_bool mercury__string__succeeded;
#line 3314 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3314 "string.m"
    MR_Word mercury__string__XList_7;
#line 3314 "string.m"
    MR_Word mercury__string__YList_8;
#line 3314 "string.m"
    MR_Word mercury__string__ZList_9;
#line 1451 "string.m"
    MR_String mercury__string__Str0_35;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1373 "string.m"
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
#line 12778 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1373 "string.m"
}
#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
#line 1373 "string.m"
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
#line 12809 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
#line 1373 "string.m"
}
#line 12816 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3318 "string.m"
    {
#line 3318 "string.m"
      mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, &mercury__string__ZList_9);
    }
#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ZList_9, &mercury__string__Str0_35);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      *mercury__string__Z_6 = mercury__string__Str0_35;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1452 "string.m"
          return;
        }
#line 1452 "string.m"
      }
#line 3314 "string.m"
  }
#line 3311 "string.m"
}

#line 3310 "string.m"
MR_bool MR_CALL 
mercury__string__mercury_append_3_p_1(
#line 3310 "string.m"
  MR_String mercury__string__X_4,
#line 3310 "string.m"
  MR_String * mercury__string__Y_5,
#line 3310 "string.m"
  MR_String mercury__string__Z_6)
#line 3310 "string.m"
{
#line 3314 "string.m"
  {
#line 3314 "string.m"
    MR_bool mercury__string__succeeded;
#line 3314 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3314 "string.m"
    MR_Word mercury__string__XList_7;
#line 3314 "string.m"
    MR_Word mercury__string__YList_8;
#line 3314 "string.m"
    MR_Word mercury__string__ZList_9;
#line 1451 "string.m"
    MR_String mercury__string__Str0_35;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1373 "string.m"
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
#line 12900 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1373 "string.m"
}
#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1373 "string.m"
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
#line 12931 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1373 "string.m"
}
#line 12938 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3318 "string.m"
    {
#line 3318 "string.m"
      mercury__string__succeeded = mercury__list__append_3_p_3(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, &mercury__string__YList_8, mercury__string__ZList_9);
    }
#line 3314 "string.m"
    if (mercury__string__succeeded)
#line 3314 "string.m"
      {
#line 1449 "string.m"
        {
#line 1449 "string.m"
          mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__YList_8, &mercury__string__Str0_35);
        }
#line 1451 "string.m"
        if (mercury__string__succeeded)
#line 1450 "string.m"
          *mercury__string__Y_5 = mercury__string__Str0_35;
#line 1451 "string.m"
        else
#line 1452 "string.m"
          {
#line 1452 "string.m"
            {
#line 1452 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
            }
#line 1452 "string.m"
          }
#line 1451 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 3314 "string.m"
      }
#line 3314 "string.m"
    return mercury__string__succeeded;
#line 3314 "string.m"
  }
#line 3310 "string.m"
}

#line 3309 "string.m"
MR_bool MR_CALL 
mercury__string__mercury_append_3_p_0(
#line 3309 "string.m"
  MR_String mercury__string__X_4,
#line 3309 "string.m"
  MR_String mercury__string__Y_5,
#line 3309 "string.m"
  MR_String mercury__string__Z_6)
#line 3309 "string.m"
{
#line 3314 "string.m"
  {
#line 3314 "string.m"
    MR_bool mercury__string__succeeded;
#line 3314 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3314 "string.m"
    MR_Word mercury__string__XList_7;
#line 3314 "string.m"
    MR_Word mercury__string__YList_8;
#line 3314 "string.m"
    MR_Word mercury__string__ZList_9;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1373 "string.m"
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
#line 13028 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1373 "string.m"
}
#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
#line 1373 "string.m"
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
#line 13059 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
#line 1373 "string.m"
}
#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1373 "string.m"
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
#line 13090 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1373 "string.m"
}
#line 13097 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3318 "string.m"
    {
#line 3318 "string.m"
      return mercury__string__succeeded = mercury__list__append_3_p_2(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, mercury__string__ZList_9);
    }
#line 3314 "string.m"
    return mercury__string__succeeded;
#line 3314 "string.m"
  }
#line 3309 "string.m"
}

#line 3270 "string.m"
void MR_CALL 
mercury__string__append_ooi_3_5_p_0(
#line 3270 "string.m"
  MR_Integer mercury__string__S1Len_1,
#line 3270 "string.m"
  MR_Integer mercury__string__S3Len_2,
#line 3270 "string.m"
  MR_String * mercury__string__S1_3,
#line 3270 "string.m"
  MR_String * mercury__string__S2_4,
#line 3270 "string.m"
  MR_String mercury__string__S3_5)
#line 3270 "string.m"
{
#line 3273 "string.m"
  {
#line 3273 "string.m"
    MR_bool mercury__string__succeeded;

#line 3277 "string.m"
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
#line 3277 "string.m"
{
    MR_allocate_aligned_string_msg(S1, S1Len, MR_ALLOC_ID);
    MR_memcpy(S1, S3, S1Len);
    S1[S1Len] = '\0';
    MR_allocate_aligned_string_msg(S2, S3Len - S1Len, MR_ALLOC_ID);
    strcpy(S2, S3 + S1Len);
}
#line 13153 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S1_3  = S1;
	 *mercury__string__S2_4  = S2;
#line 3277 "string.m"
}
#line 3273 "string.m"
  }
#line 3270 "string.m"
}

#line 3255 "string.m"
void MR_CALL 
mercury__string__append_ooi_2_5_p_0(
#line 3255 "string.m"
  MR_Integer mercury__string__NextS1Len_6,
#line 3255 "string.m"
  MR_Integer mercury__string__S3Len_7,
#line 3255 "string.m"
  MR_String * mercury__string__S1_8,
#line 3255 "string.m"
  MR_String * mercury__string__S2_9,
#line 3255 "string.m"
  MR_String mercury__string__S3_10,
#line 3255 "string.m"
  MR_Cont mercury__string__cont,
#line 3255 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3255 "string.m"
{
#line 3261 "string.m"
  while (MR_TRUE)
#line 3261 "string.m"
    {
#line 3261 "string.m"
      /* tailcall optimized into a loop */
#line 3261 "string.m"
      {
#line 3261 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__NextS1Len_6 == mercury__string__S3Len_7);

#line 3261 "string.m"
        if (mercury__string__succeeded)
#line 3260 "string.m"
          {
#line 3260 "string.m"
            {
#line 3260 "string.m"
              mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
            }
#line 3260 "string.m"
            {
#line 3260 "string.m"
              mercury__string__cont(mercury__string__cont_env_ptr);
#line 3260 "string.m"
              return;
            }
#line 3260 "string.m"
          }
#line 3261 "string.m"
        else
#line 3264 "string.m"
          {
#line 3263 "string.m"
            {
#line 3263 "string.m"
              mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
            }
#line 3263 "string.m"
            {
#line 3263 "string.m"
              mercury__string__cont(mercury__string__cont_env_ptr);
            }
#line 3265 "string.m"
            {
#line 3265 "string.m"
              MR_Integer mercury__string__AdvS1Len_11;
#line 1949 "string.m"
              MR_Char mercury__string__V_12_12;

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13260 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__AdvS1Len_11  = NextIndex;
	 mercury__string__V_12_12  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3265 "string.m"
              if (mercury__string__succeeded)
#line 3266 "string.m"
                {
#line 3266 "string.m"
                  /* direct tailcall eliminated */
#line 3266 "string.m"
                  {
#line 3266 "string.m"
                    MR_Integer mercury__string__NextS1Len__tmp_copy_6 = mercury__string__AdvS1Len_11;

#line 3266 "string.m"
                    mercury__string__NextS1Len_6 = mercury__string__NextS1Len__tmp_copy_6;
#line 3266 "string.m"
                  }
#line 3266 "string.m"
                  continue;
#line 3266 "string.m"
                }
#line 3265 "string.m"
            }
#line 3264 "string.m"
          }
#line 3261 "string.m"
      }
#line 3261 "string.m"
      break;
#line 3261 "string.m"
    }
#line 3255 "string.m"
}

#line 3249 "string.m"
void MR_CALL 
mercury__string__append_ooi_3_p_0(
#line 3249 "string.m"
  MR_String * mercury__string__S1_4,
#line 3249 "string.m"
  MR_String * mercury__string__S2_5,
#line 3249 "string.m"
  MR_String mercury__string__S3_6,
#line 3249 "string.m"
  MR_Cont mercury__string__cont,
#line 3249 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3249 "string.m"
{
#line 3251 "string.m"
  {
#line 3251 "string.m"
    MR_bool mercury__string__succeeded;
#line 3251 "string.m"
    MR_Integer mercury__string__S3Len_7;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ooi_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 13338 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_7  = Length;
#line 2409 "string.m"
}
#line 3253 "string.m"
    {
#line 3253 "string.m"
      mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_7, mercury__string__S1_4, mercury__string__S2_5, mercury__string__S3_6, mercury__string__cont, mercury__string__cont_env_ptr);
#line 3253 "string.m"
      return;
    }
#line 3251 "string.m"
  }
#line 3249 "string.m"
}

#line 3213 "string.m"
void MR_CALL 
mercury__string__append_iio_3_p_0(
#line 3213 "string.m"
  MR_String mercury__string__S1_1,
#line 3213 "string.m"
  MR_String mercury__string__S2_2,
#line 3213 "string.m"
  MR_String * mercury__string__S3_3)
#line 3213 "string.m"
{
#line 3215 "string.m"
  {
#line 3215 "string.m"
    MR_bool mercury__string__succeeded;

#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_iio_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 13393 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
#line 3219 "string.m"
}
#line 3215 "string.m"
  }
#line 3213 "string.m"
}

#line 3161 "string.m"
MR_bool MR_CALL 
mercury__string__append_ioi_3_p_0(
#line 3161 "string.m"
  MR_String mercury__string__S1_1,
#line 3161 "string.m"
  MR_String * mercury__string__S2_2,
#line 3161 "string.m"
  MR_String mercury__string__S3_3)
#line 3161 "string.m"
{
#line 3163 "string.m"
  {
#line 3163 "string.m"
    MR_bool mercury__string__succeeded;

#line 3167 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ioi_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3167 "string.m"
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
#line 13451 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
#line 3167 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3163 "string.m"
    return mercury__string__succeeded;
#line 3163 "string.m"
  }
#line 3161 "string.m"
}

#line 3118 "string.m"
MR_bool MR_CALL 
mercury__string__append_iii_3_p_0(
#line 3118 "string.m"
  MR_String mercury__string__S1_1,
#line 3118 "string.m"
  MR_String mercury__string__S2_2,
#line 3118 "string.m"
  MR_String mercury__string__S3_3)
#line 3118 "string.m"
{
#line 3120 "string.m"
  {
#line 3120 "string.m"
    MR_bool mercury__string__succeeded;

#line 3124 "string.m"
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
#line 3124 "string.m"
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}
#line 13505 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3120 "string.m"
    return mercury__string__succeeded;
#line 3120 "string.m"
  }
#line 3118 "string.m"
}

#line 3078 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_start_loop_6_p_0(
#line 3078 "string.m"
  MR_String mercury__string__String_7,
#line 3078 "string.m"
  MR_String mercury__string__SubString_8,
#line 3078 "string.m"
  MR_Integer mercury__string__I_9,
#line 3078 "string.m"
  MR_Integer mercury__string__Len_10,
#line 3078 "string.m"
  MR_Integer mercury__string__SubLen_11,
#line 3078 "string.m"
  MR_Integer * mercury__string__Index_12)
#line 3078 "string.m"
{
#line 3081 "string.m"
  while (MR_TRUE)
#line 3081 "string.m"
    {
#line 3081 "string.m"
      /* tailcall optimized into a loop */
#line 3081 "string.m"
      {
#line 3081 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__Len_10);
#line 3089 "string.m"
        MR_Integer mercury__string__V_13_13;
#line 3089 "string.m"
        MR_String mercury__string__V_17_17;

#line 3081 "string.m"
        if (mercury__string__succeeded)
#line 3081 "string.m"
          {
#line 3089 "string.m"
            mercury__string__V_13_13 = (mercury__string__I_9 + mercury__string__SubLen_11);
#line 3953 "string.m"
            {
#line 3953 "string.m"
              mercury__string__between_4_p_0(mercury__string__String_7, mercury__string__I_9, mercury__string__V_13_13, &mercury__string__V_17_17);
            }
#line 3089 "string.m"
            mercury__string__succeeded = (strcmp(mercury__string__SubString_8, mercury__string__V_17_17) == 0);
#line 3092 "string.m"
            if (mercury__string__succeeded)
#line 3091 "string.m"
              {
#line 3091 "string.m"
                *mercury__string__Index_12 = mercury__string__I_9;
#line 3091 "string.m"
                mercury__string__succeeded = MR_TRUE;
#line 3091 "string.m"
              }
#line 3092 "string.m"
            else
#line 3093 "string.m"
              {
#line 3093 "string.m"
                MR_Integer mercury__string__V_14_14 = (mercury__string__I_9 + (MR_Integer) 1);

#line 3093 "string.m"
                /* direct tailcall eliminated */
#line 3093 "string.m"
                {
#line 3093 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__V_14_14;

#line 3093 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 3093 "string.m"
                }
#line 3093 "string.m"
                continue;
#line 3093 "string.m"
              }
#line 3081 "string.m"
          }
#line 3081 "string.m"
        return mercury__string__succeeded;
#line 3081 "string.m"
      }
#line 3081 "string.m"
      break;
#line 3081 "string.m"
    }
#line 3078 "string.m"
}

#line 2988 "string.m"
void MR_CALL 
mercury__string__suffix_length_loop_4_p_0(
#line 2988 "string.m"
  MR_Word mercury__string__P_5,
#line 2988 "string.m"
  MR_String mercury__string__S_6,
#line 2988 "string.m"
  MR_Integer mercury__string__I_7,
#line 2988 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2988 "string.m"
{
#line 2997 "string.m"
  while (MR_TRUE)
#line 2997 "string.m"
    {
#line 2997 "string.m"
      /* tailcall optimized into a loop */
#line 2997 "string.m"
      {
#line 2997 "string.m"
        MR_bool mercury__string__succeeded;
#line 2997 "string.m"
        MR_Integer mercury__string__J_9;
#line 2993 "string.m"
        MR_Char mercury__string__Char_10;
#line 2994 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 13669 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2993 "string.m"
        if (mercury__string__succeeded)
#line 2993 "string.m"
          {
#line 2994 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 2994 "string.m"
            {
#line 2994 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 2993 "string.m"
          }
#line 2997 "string.m"
        if (mercury__string__succeeded)
#line 2996 "string.m"
          {
#line 2996 "string.m"
            /* direct tailcall eliminated */
#line 2996 "string.m"
            {
#line 2996 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2996 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2996 "string.m"
            }
#line 2996 "string.m"
            continue;
#line 2996 "string.m"
          }
#line 2997 "string.m"
        else
#line 2998 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2997 "string.m"
      }
#line 2997 "string.m"
      break;
#line 2997 "string.m"
    }
#line 2988 "string.m"
}

#line 2971 "string.m"
void MR_CALL 
mercury__string__prefix_length_loop_4_p_0(
#line 2971 "string.m"
  MR_Word mercury__string__P_5,
#line 2971 "string.m"
  MR_String mercury__string__S_6,
#line 2971 "string.m"
  MR_Integer mercury__string__I_7,
#line 2971 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2971 "string.m"
{
#line 2980 "string.m"
  while (MR_TRUE)
#line 2980 "string.m"
    {
#line 2980 "string.m"
      /* tailcall optimized into a loop */
#line 2980 "string.m"
      {
#line 2980 "string.m"
        MR_bool mercury__string__succeeded;
#line 2980 "string.m"
        MR_Integer mercury__string__J_9;
#line 2976 "string.m"
        MR_Char mercury__string__Char_10;
#line 2977 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13780 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2976 "string.m"
        if (mercury__string__succeeded)
#line 2976 "string.m"
          {
#line 2977 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 2977 "string.m"
            {
#line 2977 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 2976 "string.m"
          }
#line 2980 "string.m"
        if (mercury__string__succeeded)
#line 2979 "string.m"
          {
#line 2979 "string.m"
            /* direct tailcall eliminated */
#line 2979 "string.m"
            {
#line 2979 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2979 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2979 "string.m"
            }
#line 2979 "string.m"
            continue;
#line 2979 "string.m"
          }
#line 2980 "string.m"
        else
#line 2981 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2980 "string.m"
      }
#line 2980 "string.m"
      break;
#line 2980 "string.m"
    }
#line 2971 "string.m"
}

#line 2953 "string.m"
MR_bool MR_CALL 
mercury__string__contains_char_3_p_0(
#line 2953 "string.m"
  MR_String mercury__string__Str_4,
#line 2953 "string.m"
  MR_Char mercury__string__Char_5,
#line 2953 "string.m"
  MR_Integer mercury__string__I_6)
#line 2953 "string.m"
{
#line 2962 "string.m"
  while (MR_TRUE)
#line 2962 "string.m"
    {
#line 2962 "string.m"
      /* tailcall optimized into a loop */
#line 2962 "string.m"
      {
#line 2962 "string.m"
        MR_bool mercury__string__succeeded;
#line 2962 "string.m"
        MR_Integer mercury__string__J_7;
#line 2962 "string.m"
        MR_Char mercury__string__IndexChar_8;

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13887 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_7  = NextIndex;
	 mercury__string__IndexChar_8  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2962 "string.m"
        if (mercury__string__succeeded)
#line 2962 "string.m"
          {
#line 2957 "string.m"
            mercury__string__succeeded = (mercury__string__IndexChar_8 == mercury__string__Char_5);
#line 2959 "string.m"
            if (mercury__string__succeeded)
#line 2958 "string.m"
              mercury__string__succeeded = MR_TRUE;
#line 2959 "string.m"
            else
#line 2960 "string.m"
              {
#line 2960 "string.m"
                /* direct tailcall eliminated */
#line 2960 "string.m"
                {
#line 2960 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__J_7;

#line 2960 "string.m"
                  mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 2960 "string.m"
                }
#line 2960 "string.m"
                continue;
#line 2960 "string.m"
              }
#line 2962 "string.m"
          }
#line 2962 "string.m"
        return mercury__string__succeeded;
#line 2962 "string.m"
      }
#line 2962 "string.m"
      break;
#line 2962 "string.m"
    }
#line 2953 "string.m"
}

#line 2899 "string.m"
MR_bool MR_CALL 
mercury__string__all_match_loop_3_p_0(
#line 2899 "string.m"
  MR_Word mercury__string__P_4,
#line 2899 "string.m"
  MR_String mercury__string__String_5,
#line 2899 "string.m"
  MR_Integer mercury__string__Cur_6)
#line 2899 "string.m"
{
#line 2906 "string.m"
  while (MR_TRUE)
#line 2906 "string.m"
    {
#line 2906 "string.m"
      /* tailcall optimized into a loop */
#line 2906 "string.m"
      {
#line 2906 "string.m"
        MR_bool mercury__string__succeeded;
#line 2906 "string.m"
        MR_Integer mercury__string__Next_7;
#line 2906 "string.m"
        MR_Char mercury__string__Char_8;

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13991 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2906 "string.m"
        if (mercury__string__succeeded)
#line 2904 "string.m"
          {
#line 2904 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_4, (MR_Integer) 1)));

#line 2904 "string.m"
            {
#line 2904 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_4), ((MR_Box) (MR_Word) (mercury__string__Char_8)));
            }
#line 2904 "string.m"
            if (mercury__string__succeeded)
#line 2905 "string.m"
              {
#line 2905 "string.m"
                /* direct tailcall eliminated */
#line 2905 "string.m"
                {
#line 2905 "string.m"
                  MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 2905 "string.m"
                  mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 2905 "string.m"
                }
#line 2905 "string.m"
                continue;
#line 2905 "string.m"
              }
#line 2904 "string.m"
          }
#line 2906 "string.m"
        else
#line 2907 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 2906 "string.m"
        return mercury__string__succeeded;
#line 2906 "string.m"
      }
#line 2906 "string.m"
      break;
#line 2906 "string.m"
    }
#line 2899 "string.m"
}

#line 2732 "string.m"
void MR_CALL 
mercury__string__hash6_loop_5_p_0(
#line 2732 "string.m"
  MR_String mercury__string__String_6,
#line 2732 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2732 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2732 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2732 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2732 "string.m"
{
#line 2741 "string.m"
  while (MR_TRUE)
#line 2741 "string.m"
    {
#line 2741 "string.m"
      /* tailcall optimized into a loop */
#line 2741 "string.m"
      {
#line 2741 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2741 "string.m"
        if (mercury__string__succeeded)
#line 2737 "string.m"
          {
#line 2737 "string.m"
            MR_Integer mercury__string__C_10;
#line 2737 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2737 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 2737 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
#line 2737 "string.m"
            MR_Integer mercury__string__V_17_17;
#line 2737 "string.m"
            MR_Integer mercury__string__V_18_18;

#line 2169 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash6_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2169 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14109 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2169 "string.m"
}
#line 2738 "string.m"
            mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 49);
#line 2688 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__V_14_14 & (MR_Integer) 1073741823);
#line 2739 "string.m"
            mercury__string__V_17_17 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2688 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__V_17_17 & (MR_Integer) 1073741823);
#line 2740 "string.m"
            mercury__string__V_18_18 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2740 "string.m"
            /* direct tailcall eliminated */
#line 2740 "string.m"
            {
#line 2740 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_18_18;
#line 2740 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

#line 2740 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2740 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2740 "string.m"
            }
#line 2740 "string.m"
            continue;
#line 2737 "string.m"
          }
#line 2741 "string.m"
        else
#line 2741 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2741 "string.m"
      }
#line 2741 "string.m"
      break;
#line 2741 "string.m"
    }
#line 2732 "string.m"
}

#line 2714 "string.m"
void MR_CALL 
mercury__string__hash5_loop_5_p_0(
#line 2714 "string.m"
  MR_String mercury__string__String_6,
#line 2714 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2714 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2714 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2714 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2714 "string.m"
{
#line 2723 "string.m"
  while (MR_TRUE)
#line 2723 "string.m"
    {
#line 2723 "string.m"
      /* tailcall optimized into a loop */
#line 2723 "string.m"
      {
#line 2723 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2723 "string.m"
        if (mercury__string__succeeded)
#line 2719 "string.m"
          {
#line 2719 "string.m"
            MR_Integer mercury__string__C_10;
#line 2719 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2719 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 2719 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
#line 2719 "string.m"
            MR_Integer mercury__string__V_17_17;
#line 2719 "string.m"
            MR_Integer mercury__string__V_18_18;

#line 2169 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash5_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2169 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14217 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2169 "string.m"
}
#line 2720 "string.m"
            mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 37);
#line 2688 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__V_14_14 & (MR_Integer) 1073741823);
#line 2721 "string.m"
            mercury__string__V_17_17 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2688 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__V_17_17 & (MR_Integer) 1073741823);
#line 2722 "string.m"
            mercury__string__V_18_18 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2722 "string.m"
            /* direct tailcall eliminated */
#line 2722 "string.m"
            {
#line 2722 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_18_18;
#line 2722 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

#line 2722 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2722 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2722 "string.m"
            }
#line 2722 "string.m"
            continue;
#line 2719 "string.m"
          }
#line 2723 "string.m"
        else
#line 2723 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2723 "string.m"
      }
#line 2723 "string.m"
      break;
#line 2723 "string.m"
    }
#line 2714 "string.m"
}

#line 2695 "string.m"
void MR_CALL 
mercury__string__hash4_loop_5_p_0(
#line 2695 "string.m"
  MR_String mercury__string__String_6,
#line 2695 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2695 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2695 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2695 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2695 "string.m"
{
#line 2705 "string.m"
  {
#line 2705 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2705 "string.m"
    if (mercury__string__succeeded)
#line 2700 "string.m"
      {
#line 2700 "string.m"
        MR_Integer mercury__string__C_10;
#line 2700 "string.m"
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2700 "string.m"
        MR_Integer mercury__string__V_14_14;
#line 2700 "string.m"
        MR_Integer mercury__string__V_15_15;
#line 2700 "string.m"
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_17_17;
#line 2700 "string.m"
        MR_Integer mercury__string__V_18_18;

#line 2169 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash4_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2169 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14319 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2169 "string.m"
}
#line 2702 "string.m"
        mercury__string__V_15_15 = (mercury__string__STATE_VARIABLE_HashVal_0_11 << (MR_Integer) 5);
#line 2701 "string.m"
        mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 ^ mercury__string__V_15_15);
#line 2688 "string.m"
        mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__V_14_14 & (MR_Integer) 1073741823);
#line 2703 "string.m"
        mercury__string__STATE_VARIABLE_HashVal_17_17 = (mercury__string__STATE_VARIABLE_HashVal_13_13 ^ mercury__string__C_10);
#line 2704 "string.m"
        mercury__string__V_18_18 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2704 "string.m"
        {
#line 2704 "string.m"
          mercury__string__hash_loop_5_p_0(mercury__string__String_6, mercury__string__V_18_18, mercury__string__Length_8, mercury__string__STATE_VARIABLE_HashVal_17_17, mercury__string__STATE_VARIABLE_HashVal_12);
#line 2704 "string.m"
          return;
        }
#line 2700 "string.m"
      }
#line 2705 "string.m"
    else
#line 2705 "string.m"
      *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2705 "string.m"
  }
#line 2695 "string.m"
}

#line 2686 "string.m"
MR_Integer MR_CALL 
mercury__string__keep_30_bits_1_f_0(
#line 2686 "string.m"
  MR_Integer mercury__string__N_3)
#line 2686 "string.m"
{
#line 2688 "string.m"
  {
#line 2688 "string.m"
    MR_bool mercury__string__succeeded;
#line 2688 "string.m"
    MR_Integer mercury__string__HeadVar__2_2 = (mercury__string__N_3 & (MR_Integer) 1073741823);

#line 2688 "string.m"
    return mercury__string__HeadVar__2_2;
#line 2688 "string.m"
  }
#line 2686 "string.m"
}

#line 2673 "string.m"
void MR_CALL 
mercury__string__hash3_loop_5_p_0(
#line 2673 "string.m"
  MR_String mercury__string__String_6,
#line 2673 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2673 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2673 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2673 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2673 "string.m"
{
#line 2682 "string.m"
  while (MR_TRUE)
#line 2682 "string.m"
    {
#line 2682 "string.m"
      /* tailcall optimized into a loop */
#line 2682 "string.m"
      {
#line 2682 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2682 "string.m"
        if (mercury__string__succeeded)
#line 2678 "string.m"
          {
#line 2678 "string.m"
            MR_Integer mercury__string__C_10;
#line 2678 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2678 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
#line 2678 "string.m"
            MR_Integer mercury__string__V_16_16;

#line 2169 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash3_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2169 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14430 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2169 "string.m"
}
#line 2679 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 49);
#line 2680 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2681 "string.m"
            mercury__string__V_16_16 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2681 "string.m"
            /* direct tailcall eliminated */
#line 2681 "string.m"
            {
#line 2681 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_16_16;
#line 2681 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

#line 2681 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2681 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2681 "string.m"
            }
#line 2681 "string.m"
            continue;
#line 2678 "string.m"
          }
#line 2682 "string.m"
        else
#line 2682 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2682 "string.m"
      }
#line 2682 "string.m"
      break;
#line 2682 "string.m"
    }
#line 2673 "string.m"
}

#line 2655 "string.m"
void MR_CALL 
mercury__string__hash2_loop_5_p_0(
#line 2655 "string.m"
  MR_String mercury__string__String_6,
#line 2655 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2655 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2655 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2655 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2655 "string.m"
{
#line 2664 "string.m"
  while (MR_TRUE)
#line 2664 "string.m"
    {
#line 2664 "string.m"
      /* tailcall optimized into a loop */
#line 2664 "string.m"
      {
#line 2664 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2664 "string.m"
        if (mercury__string__succeeded)
#line 2660 "string.m"
          {
#line 2660 "string.m"
            MR_Integer mercury__string__C_10;
#line 2660 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2660 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
#line 2660 "string.m"
            MR_Integer mercury__string__V_16_16;

#line 2169 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash2_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2169 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14530 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2169 "string.m"
}
#line 2661 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 37);
#line 2662 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2663 "string.m"
            mercury__string__V_16_16 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2663 "string.m"
            /* direct tailcall eliminated */
#line 2663 "string.m"
            {
#line 2663 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_16_16;
#line 2663 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

#line 2663 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2663 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2663 "string.m"
            }
#line 2663 "string.m"
            continue;
#line 2660 "string.m"
          }
#line 2664 "string.m"
        else
#line 2664 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2664 "string.m"
      }
#line 2664 "string.m"
      break;
#line 2664 "string.m"
    }
#line 2655 "string.m"
}

#line 2637 "string.m"
void MR_CALL 
mercury__string__hash_loop_5_p_0(
#line 2637 "string.m"
  MR_String mercury__string__String_6,
#line 2637 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2637 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2637 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2637 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2637 "string.m"
{
#line 2646 "string.m"
  while (MR_TRUE)
#line 2646 "string.m"
    {
#line 2646 "string.m"
      /* tailcall optimized into a loop */
#line 2646 "string.m"
      {
#line 2646 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2646 "string.m"
        if (mercury__string__succeeded)
#line 2642 "string.m"
          {
#line 2642 "string.m"
            MR_Integer mercury__string__C_10;
#line 2642 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2642 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 2642 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
#line 2642 "string.m"
            MR_Integer mercury__string__V_17_17;

#line 2169 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2169 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14632 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2169 "string.m"
}
#line 2643 "string.m"
            mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 << (MR_Integer) 5);
#line 2643 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 ^ mercury__string__V_14_14);
#line 2644 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__STATE_VARIABLE_HashVal_13_13 ^ mercury__string__C_10);
#line 2645 "string.m"
            mercury__string__V_17_17 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2645 "string.m"
            /* direct tailcall eliminated */
#line 2645 "string.m"
            {
#line 2645 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_17_17;
#line 2645 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

#line 2645 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2645 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2645 "string.m"
            }
#line 2645 "string.m"
            continue;
#line 2642 "string.m"
          }
#line 2646 "string.m"
        else
#line 2646 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2646 "string.m"
      }
#line 2646 "string.m"
      break;
#line 2646 "string.m"
    }
#line 2637 "string.m"
}

#line 2607 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_loop_5_p_0(
#line 2607 "string.m"
  MR_String mercury__string__String_6,
#line 2607 "string.m"
  MR_Integer mercury__string__Offset_7,
#line 2607 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2607 "string.m"
  MR_Integer mercury__string__N_9,
#line 2607 "string.m"
  MR_Integer * mercury__string__Index_10)
#line 2607 "string.m"
{
#line 2610 "string.m"
  while (MR_TRUE)
#line 2610 "string.m"
    {
#line 2610 "string.m"
      /* tailcall optimized into a loop */
#line 2610 "string.m"
      {
#line 2610 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Offset_7 < mercury__string__Length_8);

#line 2610 "string.m"
        if (mercury__string__succeeded)
#line 2610 "string.m"
          {
#line 2612 "string.m"
            mercury__string__succeeded = (mercury__string__N_9 == (MR_Integer) 0);
#line 2614 "string.m"
            if (mercury__string__succeeded)
#line 2613 "string.m"
              {
#line 2613 "string.m"
                *mercury__string__Index_10 = mercury__string__Offset_7;
#line 2613 "string.m"
                mercury__string__succeeded = MR_TRUE;
#line 2613 "string.m"
              }
#line 2614 "string.m"
            else
#line 2615 "string.m"
              {
#line 2615 "string.m"
                MR_Integer mercury__string__NextOffset_11;
#line 2615 "string.m"
                MR_Integer mercury__string__V_13_13;
#line 2615 "string.m"
                MR_Integer mercury__string__V_14_14;
#line 1949 "string.m"
                MR_Char mercury__string__V_12_12;

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14759 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__NextOffset_11  = NextIndex;
	 mercury__string__V_12_12  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2615 "string.m"
                if (mercury__string__succeeded)
#line 2615 "string.m"
                  {
#line 2616 "string.m"
                    mercury__string__V_14_14 = (MR_Integer) 1;
#line 2616 "string.m"
                    mercury__string__V_13_13 = (mercury__string__N_9 - mercury__string__V_14_14);
#line 2616 "string.m"
                    /* direct tailcall eliminated */
#line 2616 "string.m"
                    {
#line 2616 "string.m"
                      MR_Integer mercury__string__Offset__tmp_copy_7 = mercury__string__NextOffset_11;
#line 2616 "string.m"
                      MR_Integer mercury__string__N__tmp_copy_9 = mercury__string__V_13_13;

#line 2616 "string.m"
                      mercury__string__N_9 = mercury__string__N__tmp_copy_9;
#line 2616 "string.m"
                      mercury__string__Offset_7 = mercury__string__Offset__tmp_copy_7;
#line 2616 "string.m"
                    }
#line 2616 "string.m"
                    continue;
#line 2615 "string.m"
                  }
#line 2615 "string.m"
              }
#line 2610 "string.m"
          }
#line 2610 "string.m"
        return mercury__string__succeeded;
#line 2610 "string.m"
      }
#line 2610 "string.m"
      break;
#line 2610 "string.m"
    }
#line 2607 "string.m"
}

#line 2537 "string.m"
void MR_CALL 
mercury__string__count_utf8_code_units_2_3_p_0(
#line 2537 "string.m"
  MR_Char mercury__string__Char_4,
#line 2537 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Length_0_8,
#line 2537 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Length_9)
#line 2537 "string.m"
{
#line 2539 "string.m"
  {
#line 2539 "string.m"
    MR_bool mercury__string__succeeded;
#line 2539 "string.m"
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

#line 14843 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__CharInt_6  = Int;
#line 66 "char.opt"
}
#line 2541 "string.m"
    mercury__string__succeeded = (mercury__string__CharInt_6 <= (MR_Integer) 127);
#line 2543 "string.m"
    if (mercury__string__succeeded)
#line 2542 "string.m"
      {
#line 2542 "string.m"
        *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + (MR_Integer) 1);
#line 2542 "string.m"
      }
#line 2543 "string.m"
    else
#line 2545 "string.m"
      {
#line 2545 "string.m"
        MR_Word mercury__string__UTF8_7;

#line 2543 "string.m"
        {
#line 2543 "string.m"
          mercury__string__succeeded = mercury__char__to_utf8_2_p_0(mercury__string__Char_4, &mercury__string__UTF8_7);
        }
#line 2545 "string.m"
        if (mercury__string__succeeded)
#line 2544 "string.m"
          {
#line 2544 "string.m"
            MR_Word mercury__string__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2544 "string.m"
            MR_Integer mercury__string__V_14_14;

#line 78 "list.opt"
            {
#line 78 "list.opt"
              mercury__list__length_2_3_p_0(mercury__string__TypeCtorInfo_17_17, mercury__string__UTF8_7, (MR_Integer) 0, &mercury__string__V_14_14);
            }
#line 2544 "string.m"
            *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + mercury__string__V_14_14);
#line 2544 "string.m"
          }
#line 2545 "string.m"
        else
#line 2546 "string.m"
          {
#line 2546 "string.m"
            {
#line 2546 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.count_utf8_code_units_2\'/3", (MR_String) "char.to_utf8 failed");
#line 2546 "string.m"
              return;
            }
#line 2546 "string.m"
          }
#line 2545 "string.m"
      }
#line 2539 "string.m"
  }
#line 2537 "string.m"
}

#line 2510 "string.m"
void MR_CALL 
mercury__string__count_codepoints_loop_4_p_0(
#line 2510 "string.m"
  MR_String mercury__string__String_5,
#line 2510 "string.m"
  MR_Integer mercury__string__I_6,
#line 2510 "string.m"
  MR_Integer mercury__string__Count0_7,
#line 2510 "string.m"
  MR_Integer * mercury__string__Count_8)
#line 2510 "string.m"
{
#line 2515 "string.m"
  while (MR_TRUE)
#line 2515 "string.m"
    {
#line 2515 "string.m"
      /* tailcall optimized into a loop */
#line 2515 "string.m"
      {
#line 2515 "string.m"
        MR_bool mercury__string__succeeded;
#line 2515 "string.m"
        MR_Integer mercury__string__J_9;
#line 1949 "string.m"
        MR_Char mercury__string__V_10_10;

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14963 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__V_10_10  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2515 "string.m"
        if (mercury__string__succeeded)
#line 2514 "string.m"
          {
#line 2514 "string.m"
            MR_Integer mercury__string__V_11_11 = (mercury__string__Count0_7 + (MR_Integer) 1);

#line 2514 "string.m"
            /* direct tailcall eliminated */
#line 2514 "string.m"
            {
#line 2514 "string.m"
              MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__J_9;
#line 2514 "string.m"
              MR_Integer mercury__string__Count0__tmp_copy_7 = mercury__string__V_11_11;

#line 2514 "string.m"
              mercury__string__Count0_7 = mercury__string__Count0__tmp_copy_7;
#line 2514 "string.m"
              mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 2514 "string.m"
            }
#line 2514 "string.m"
            continue;
#line 2514 "string.m"
          }
#line 2515 "string.m"
        else
#line 2516 "string.m"
          *mercury__string__Count_8 = mercury__string__Count0_7;
#line 2515 "string.m"
      }
#line 2515 "string.m"
      break;
#line 2515 "string.m"
    }
#line 2510 "string.m"
}

#line 2329 "string.m"
void MR_CALL 
mercury__string__unsafe_set_char_non_null_4_p_0(
#line 2329 "string.m"
  MR_Char mercury__string__Ch_1,
#line 2329 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2329 "string.m"
  MR_String mercury__string__Str0_3,
#line 2329 "string.m"
  MR_String * mercury__string__Str_4)
#line 2329 "string.m"
{
#line 2334 "string.m"
  {
#line 2334 "string.m"
    MR_bool mercury__string__succeeded;

#line 2338 "string.m"
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
#line 2338 "string.m"

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

#line 15066 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = Str;
#line 2338 "string.m"
}
#line 2334 "string.m"
  }
#line 2329 "string.m"
}

#line 2205 "string.m"
MR_bool MR_CALL 
mercury__string__set_char_non_null_4_p_0(
#line 2205 "string.m"
  MR_Char mercury__string__Ch_1,
#line 2205 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2205 "string.m"
  MR_String mercury__string__Str0_3,
#line 2205 "string.m"
  MR_String * mercury__string__Str_4)
#line 2205 "string.m"
{
#line 2210 "string.m"
  {
#line 2210 "string.m"
    MR_bool mercury__string__succeeded;

#line 2214 "string.m"
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
#line 2214 "string.m"

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

#line 15139 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_4  = Str;
#line 2214 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2210 "string.m"
    return mercury__string__succeeded;
#line 2210 "string.m"
  }
#line 2205 "string.m"
}

#line 2137 "string.m"
MR_bool MR_CALL 
mercury__string__index_check_2_p_0(
#line 2137 "string.m"
  MR_Integer mercury__string__Index_1,
#line 2137 "string.m"
  MR_Integer mercury__string__Length_2)
#line 2137 "string.m"
{
#line 2139 "string.m"
  {
#line 2139 "string.m"
    MR_bool mercury__string__succeeded;

#line 2143 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_check_2_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_1 ;
	Length =  mercury__string__Length_2 ;
		{
#line 2143 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 15192 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2143 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2139 "string.m"
    return mercury__string__succeeded;
#line 2139 "string.m"
  }
#line 2137 "string.m"
}

#line 1883 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_index_2_3_p_0(
#line 1883 "string.m"
  MR_String mercury__string__Str_1,
#line 1883 "string.m"
  MR_Integer mercury__string__Index_2,
#line 1883 "string.m"
  MR_Char * mercury__string__Ch_3)
#line 1883 "string.m"
{
#line 1885 "string.m"
  {
#line 1885 "string.m"
    MR_bool mercury__string__succeeded;

#line 1889 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 1889 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 15245 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Ch_3  = Ch;
#line 1889 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1885 "string.m"
    return mercury__string__succeeded;
#line 1885 "string.m"
  }
#line 1883 "string.m"
}

#line 1696 "string.m"
void MR_CALL 
mercury__string__to_code_unit_list_loop_4_p_0(
#line 1696 "string.m"
  MR_String mercury__string__String_5,
#line 1696 "string.m"
  MR_Integer mercury__string__Index_6,
#line 1696 "string.m"
  MR_Integer mercury__string__End_7,
#line 1696 "string.m"
  MR_Word * mercury__string__List_8)
#line 1696 "string.m"
{
#line 1702 "string.m"
  {
#line 1702 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Index_6 >= mercury__string__End_7);

#line 1702 "string.m"
    if (mercury__string__succeeded)
#line 1701 "string.m"
      *mercury__string__List_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1702 "string.m"
    else
#line 1703 "string.m"
      {
#line 1703 "string.m"
        MR_Integer mercury__string__Code_9;
#line 1703 "string.m"
        MR_Word mercury__string__Tail_10;
#line 1703 "string.m"
        MR_Integer mercury__string__V_11_11;

#line 2169 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Index_6 ;
		{
#line 2169 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 15311 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Code_9  = Code;
#line 2169 "string.m"
}
#line 1704 "string.m"
        mercury__string__V_11_11 = (mercury__string__Index_6 + (MR_Integer) 1);
#line 1704 "string.m"
        {
#line 1704 "string.m"
          mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_5, mercury__string__V_11_11, mercury__string__End_7, &mercury__string__Tail_10);
        }
#line 1705 "string.m"
        {
#line 1705 "string.m"
          MR_Word base;
#line 1705 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1705 "string.m"
          *mercury__string__List_8 = base;
#line 1705 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Code_9));
#line 1705 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Tail_10));
#line 1705 "string.m"
        }
#line 1703 "string.m"
      }
#line 1702 "string.m"
  }
#line 1696 "string.m"
}

#line 1367 "string.m"
void MR_CALL 
mercury__string__to_char_list_forward_2_p_0(
#line 1367 "string.m"
  MR_String mercury__string__Str_1,
#line 1367 "string.m"
  MR_Word * mercury__string__CharList_2)
#line 1367 "string.m"
{
#line 1369 "string.m"
  {
#line 1369 "string.m"
    MR_bool mercury__string__succeeded;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_forward_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
#line 1373 "string.m"
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
#line 15384 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
#line 1373 "string.m"
}
#line 1369 "string.m"
  }
#line 1367 "string.m"
}

#line 1302 "string.m"
void MR_CALL 
mercury__string__format_3_p_0(
#line 1302 "string.m"
  MR_String mercury__string__FormatString_4,
#line 1302 "string.m"
  MR_Word mercury__string__PolyList_5,
#line 1302 "string.m"
  MR_String * mercury__string__String_6)
#line 1302 "string.m"
{
#line 5407 "string.m"
  {
#line 5407 "string.m"
    MR_bool mercury__string__succeeded;

#line 5407 "string.m"
    {
#line 5407 "string.m"
      mercury__string__format__format_impl_3_p_0(mercury__string__FormatString_4, mercury__string__PolyList_5, mercury__string__String_6);
#line 5407 "string.m"
      return;
    }
#line 5407 "string.m"
  }
#line 1302 "string.m"
}

#line 1301 "string.m"
MR_String MR_CALL 
mercury__string__format_2_f_0(
#line 1301 "string.m"
  MR_String mercury__string__S1_4,
#line 1301 "string.m"
  MR_Word mercury__string__PT_5)
#line 1301 "string.m"
{
#line 5407 "string.m"
  {
#line 5407 "string.m"
    MR_bool mercury__string__succeeded;
#line 5407 "string.m"
    MR_String mercury__string__S2_6;

#line 5407 "string.m"
    {
#line 5407 "string.m"
      mercury__string__format__format_impl_3_p_0(mercury__string__S1_4, mercury__string__PT_5, &mercury__string__S2_6);
    }
#line 5407 "string.m"
    return mercury__string__S2_6;
#line 5407 "string.m"
  }
#line 1301 "string.m"
}

#line 1232 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_3(
#line 1232 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1232 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1232 "string.m"
  MR_Box mercury__string__X_7,
#line 1232 "string.m"
  MR_String * mercury__string__String_8)
#line 1232 "string.m"
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
#line 15483 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15485 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15488 "string.c"
    {
#line 15490 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15493 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15502 "string.c"
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
#line 1232 "string.m"
}

#line 1231 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_2(
#line 1231 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1231 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1231 "string.m"
  MR_Box mercury__string__X_7,
#line 1231 "string.m"
  MR_String * mercury__string__String_8)
#line 1231 "string.m"
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
#line 15550 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15552 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15555 "string.c"
    {
#line 15557 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15560 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15569 "string.c"
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
#line 1231 "string.m"
}

#line 1230 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_1(
#line 1230 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1230 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1230 "string.m"
  MR_Box mercury__string__X_7,
#line 1230 "string.m"
  MR_String * mercury__string__String_8)
#line 1230 "string.m"
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
#line 15617 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15619 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15622 "string.c"
    {
#line 15624 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15627 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15636 "string.c"
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
#line 1230 "string.m"
}

#line 1229 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_0(
#line 1229 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1229 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1229 "string.m"
  MR_Box mercury__string__X_7,
#line 1229 "string.m"
  MR_String * mercury__string__String_8)
#line 1229 "string.m"
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
#line 15684 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15686 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15689 "string.c"
    {
#line 15691 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15694 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15703 "string.c"
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
#line 1229 "string.m"
}

#line 1213 "string.m"
MR_String MR_CALL 
mercury__string__string_ops_2_f_0(
#line 1213 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_6,
#line 1213 "string.m"
  MR_Box mercury__string__X_5)
#line 1213 "string.m"
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
#line 15749 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_27, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15751 "string.c"
    MR_Box mercury__string__conv1_V_13_25;

#line 15754 "string.c"
    {
#line 15756 "string.c"
      mercury__string__conv1_V_13_25 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_27), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15759 "string.c"
    mercury__string__V_13_25 = ((MR_Integer) mercury__string__conv1_V_13_25);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_24 = (mercury__string__V_13_25 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_6, (MR_Integer) 1, mercury__string__Priority_10_24, mercury__string__X_5, mercury__string__V_10_15, &mercury__string__RevStrings_9_16);
    }
#line 15768 "string.c"
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
#line 1213 "string.m"
}

#line 1209 "string.m"
MR_String MR_CALL 
mercury__string__string_1_f_0(
#line 1209 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_4,
#line 1209 "string.m"
  MR_Box mercury__string__X_3)
#line 1209 "string.m"
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
#line 15816 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);
#line 15818 "string.c"
    MR_Box mercury__string__conv1_V_13_23;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 22 "string.to_string.opt"
    mercury__string__V_10_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 15825 "string.c"
    mercury__string__TypeClassInfo_for_op_table_25 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 15827 "string.c"
    mercury__string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15829 "string.c"
    {
#line 15831 "string.c"
      mercury__string__conv1_V_13_23 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_25), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15834 "string.c"
    mercury__string__V_13_23 = ((MR_Integer) mercury__string__conv1_V_13_23);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_22 = (mercury__string__V_13_23 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_4, (MR_Integer) 1, mercury__string__Priority_10_22, mercury__string__X_3, mercury__string__V_10_13, &mercury__string__RevStrings_9_14);
    }
#line 15843 "string.c"
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
#line 1209 "string.m"
}

#line 1199 "string.m"
MR_String MR_CALL 
mercury__string__from_c_pointer_1_f_0(
#line 1199 "string.m"
  MR_Word mercury__string__P_3)
#line 1199 "string.m"
{
#line 5380 "string.m"
  {
#line 5380 "string.m"
    MR_bool mercury__string__succeeded;
#line 5380 "string.m"
    MR_String mercury__string__S_4;
#line 5380 "string.m"
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
#line 5380 "string.m"
    MR_String mercury__string__V_9_9;
#line 5380 "string.m"
    MR_String mercury__string__V_10_10;

#line 5145 "string.m"
    {
#line 5145 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__V_10_10);
    }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_10_10 ;
	S2 =  (MR_String) ")" ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15907 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = S3;
#line 3219 "string.m"
}
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15934 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
#line 3219 "string.m"
}
#line 5380 "string.m"
    return mercury__string__S_4;
#line 5380 "string.m"
  }
#line 1199 "string.m"
}

#line 1195 "string.m"
void MR_CALL 
mercury__string__c_pointer_to_string_2_p_0(
#line 1195 "string.m"
  MR_Word mercury__string__C_Pointer_3,
#line 1195 "string.m"
  MR_String * mercury__string__Str_4)
#line 1195 "string.m"
{
#line 5380 "string.m"
  {
#line 5380 "string.m"
    MR_bool mercury__string__succeeded;
#line 5380 "string.m"
    MR_Integer mercury__string__Int_5 = (MR_Integer) mercury__string__C_Pointer_3;
#line 5380 "string.m"
    MR_String mercury__string__V_7_7;
#line 5380 "string.m"
    MR_String mercury__string__V_8_8;

#line 5145 "string.m"
    {
#line 5145 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_5, (MR_Integer) 16, &mercury__string__V_8_8);
    }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_8_8 ;
	S2 =  (MR_String) ")" ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15993 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = S3;
#line 3219 "string.m"
}
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_7_7 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 16020 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = S3;
#line 3219 "string.m"
}
#line 5380 "string.m"
  }
#line 1195 "string.m"
}

#line 1194 "string.m"
MR_String MR_CALL 
mercury__string__c_pointer_to_string_1_f_0(
#line 1194 "string.m"
  MR_Word mercury__string__P_3)
#line 1194 "string.m"
{
#line 5380 "string.m"
  {
#line 5380 "string.m"
    MR_bool mercury__string__succeeded;
#line 5380 "string.m"
    MR_String mercury__string__S_4;
#line 5380 "string.m"
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
#line 5380 "string.m"
    MR_String mercury__string__V_9_9;
#line 5380 "string.m"
    MR_String mercury__string__V_10_10;

#line 5145 "string.m"
    {
#line 5145 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__V_10_10);
    }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_10_10 ;
	S2 =  (MR_String) ")" ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 16077 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = S3;
#line 3219 "string.m"
}
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 16104 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
#line 3219 "string.m"
}
#line 5380 "string.m"
    return mercury__string__S_4;
#line 5380 "string.m"
  }
#line 1194 "string.m"
}

#line 1189 "string.m"
MR_String MR_CALL 
mercury__string__from_float_1_f_0(
#line 1189 "string.m"
  MR_Float mercury__string__Float_3)
#line 1189 "string.m"
{
#line 5252 "string.m"
  {
#line 5252 "string.m"
    MR_bool mercury__string__succeeded;
#line 5252 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5256 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_float_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
#line 5256 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 16149 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Str;
#line 5256 "string.m"
}
#line 5252 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5252 "string.m"
  }
#line 1189 "string.m"
}

#line 1185 "string.m"
void MR_CALL 
mercury__string__float_to_string_2_p_0(
#line 1185 "string.m"
  MR_Float mercury__string__Flt_1,
#line 1185 "string.m"
  MR_String * mercury__string__Str_2)
#line 1185 "string.m"
{
#line 5252 "string.m"
  {
#line 5252 "string.m"
    MR_bool mercury__string__succeeded;

#line 5256 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Flt_1 ;
		{
#line 5256 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 16194 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_2  = Str;
#line 5256 "string.m"
}
#line 5252 "string.m"
  }
#line 1185 "string.m"
}

#line 1184 "string.m"
MR_String MR_CALL 
mercury__string__float_to_string_1_f_0(
#line 1184 "string.m"
  MR_Float mercury__string__Float_3)
#line 1184 "string.m"
{
#line 5252 "string.m"
  {
#line 5252 "string.m"
    MR_bool mercury__string__succeeded;
#line 5252 "string.m"
    MR_String mercury__string__S2_4;

#line 5256 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
#line 5256 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 16237 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_4  = Str;
#line 5256 "string.m"
}
#line 5252 "string.m"
    return mercury__string__S2_4;
#line 5252 "string.m"
  }
#line 1184 "string.m"
}

#line 1174 "string.m"
MR_String MR_CALL 
mercury__string__int_to_base_string_group_4_f_0(
#line 1174 "string.m"
  MR_Integer mercury__string__N_6,
#line 1174 "string.m"
  MR_Integer mercury__string__Base_7,
#line 1174 "string.m"
  MR_Integer mercury__string__GroupLength_8,
#line 1174 "string.m"
  MR_String mercury__string__Sep_9)
#line 1174 "string.m"
{
#line 5191 "string.m"
  {
#line 5191 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_7);
#line 5191 "string.m"
    MR_String mercury__string__Str_10;
#line 5192 "string.m"
    MR_Integer mercury__string__V_12_12;

#line 5192 "string.m"
    if (mercury__string__succeeded)
#line 5192 "string.m"
      {
#line 5192 "string.m"
        mercury__string__V_12_12 = (MR_Integer) 36;
#line 5192 "string.m"
        mercury__string__succeeded = (mercury__string__Base_7 <= mercury__string__V_12_12);
#line 5192 "string.m"
      }
#line 5194 "string.m"
    if (mercury__string__succeeded)
#line 5193 "string.m"
      {
#line 5193 "string.m"
      }
#line 5194 "string.m"
    else
#line 5195 "string.m"
      {
#line 5195 "string.m"
        {
#line 5195 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.int_to_base_string_group: invalid base");
        }
#line 5195 "string.m"
      }
#line 5197 "string.m"
    {
#line 5197 "string.m"
      mercury__string__int_to_base_string_group_1_5_p_0(mercury__string__N_6, mercury__string__Base_7, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str_10);
    }
#line 5191 "string.m"
    return mercury__string__Str_10;
#line 5191 "string.m"
  }
#line 1174 "string.m"
}

#line 1161 "string.m"
MR_String MR_CALL 
mercury__string__int_to_string_thousands_1_f_0(
#line 1161 "string.m"
  MR_Integer mercury__string__N_3)
#line 1161 "string.m"
{
#line 5188 "string.m"
  {
#line 5188 "string.m"
    MR_bool mercury__string__succeeded;
#line 5188 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5189 "string.m"
    {
#line 5189 "string.m"
      return mercury__string__HeadVar__2_2 = mercury__string__int_to_base_string_group_4_f_0(mercury__string__N_3, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
#line 5188 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5188 "string.m"
  }
#line 1161 "string.m"
}

#line 1157 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_3_p_0(
#line 1157 "string.m"
  MR_Integer mercury__string__N_4,
#line 1157 "string.m"
  MR_Integer mercury__string__Base_5,
#line 1157 "string.m"
  MR_String * mercury__string__Str_6)
#line 1157 "string.m"
{
#line 5147 "string.m"
  {
#line 5147 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_5);
#line 5148 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 5148 "string.m"
    if (mercury__string__succeeded)
#line 5148 "string.m"
      {
#line 5148 "string.m"
        mercury__string__V_8_8 = (MR_Integer) 36;
#line 5148 "string.m"
        mercury__string__succeeded = (mercury__string__Base_5 <= mercury__string__V_8_8);
#line 5148 "string.m"
      }
#line 5150 "string.m"
    if (mercury__string__succeeded)
#line 5149 "string.m"
      {
#line 5149 "string.m"
      }
#line 5150 "string.m"
    else
#line 5151 "string.m"
      {
#line 5151 "string.m"
        {
#line 5151 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.int_to_base_string: invalid base");
#line 5151 "string.m"
          return;
        }
#line 5151 "string.m"
      }
#line 5153 "string.m"
    {
#line 5153 "string.m"
      mercury__string__int_to_base_string_1_3_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__Str_6);
#line 5153 "string.m"
      return;
    }
#line 5147 "string.m"
  }
#line 1157 "string.m"
}

#line 1156 "string.m"
MR_String MR_CALL 
mercury__string__int_to_base_string_2_f_0(
#line 1156 "string.m"
  MR_Integer mercury__string__N1_4,
#line 1156 "string.m"
  MR_Integer mercury__string__N2_5)
#line 1156 "string.m"
{
#line 5145 "string.m"
  {
#line 5145 "string.m"
    MR_bool mercury__string__succeeded;
#line 5145 "string.m"
    MR_String mercury__string__S2_6;

#line 5145 "string.m"
    {
#line 5145 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N1_4, mercury__string__N2_5, &mercury__string__S2_6);
    }
#line 5145 "string.m"
    return mercury__string__S2_6;
#line 5145 "string.m"
  }
#line 1156 "string.m"
}

#line 1147 "string.m"
MR_String MR_CALL 
mercury__string__from_int_1_f_0(
#line 1147 "string.m"
  MR_Integer mercury__string__N_3)
#line 1147 "string.m"
{
#line 5136 "string.m"
  {
#line 5136 "string.m"
    MR_bool mercury__string__succeeded;
#line 5136 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5137 "string.m"
    {
#line 5137 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__HeadVar__2_2);
    }
#line 5136 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5136 "string.m"
  }
#line 1147 "string.m"
}

#line 1143 "string.m"
void MR_CALL 
mercury__string__int_to_string_2_p_0(
#line 1143 "string.m"
  MR_Integer mercury__string__N_3,
#line 1143 "string.m"
  MR_String * mercury__string__Str_4)
#line 1143 "string.m"
{
#line 5136 "string.m"
  {
#line 5136 "string.m"
    MR_bool mercury__string__succeeded;

#line 5137 "string.m"
    {
#line 5137 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, mercury__string__Str_4);
#line 5137 "string.m"
      return;
    }
#line 5136 "string.m"
  }
#line 1143 "string.m"
}

#line 1142 "string.m"
MR_String MR_CALL 
mercury__string__int_to_string_1_f_0(
#line 1142 "string.m"
  MR_Integer mercury__string__N_3)
#line 1142 "string.m"
{
#line 5136 "string.m"
  {
#line 5136 "string.m"
    MR_bool mercury__string__succeeded;
#line 5136 "string.m"
    MR_String mercury__string__S1_4;

#line 5137 "string.m"
    {
#line 5137 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__S1_4);
    }
#line 5136 "string.m"
    return mercury__string__S1_4;
#line 5136 "string.m"
  }
#line 1142 "string.m"
}

#line 1138 "string.m"
MR_String MR_CALL 
mercury__string__from_char_1_f_0(
#line 1138 "string.m"
  MR_Char mercury__string__Char_3)
#line 1138 "string.m"
{
#line 5126 "string.m"
  {
#line 5126 "string.m"
    MR_bool mercury__string__succeeded;
#line 5126 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 5126 "string.m"
    MR_Word mercury__string__V_8_8;
#line 5126 "string.m"
    MR_Word mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1451 "string.m"
    MR_String mercury__string__Str0_18;

#line 5127 "string.m"
    {
#line 5127 "string.m"
      mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_3));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 5127 "string.m"
    }
#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_8_8, &mercury__string__Str0_18);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      mercury__string__HeadVar__2_2 = mercury__string__Str0_18;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1452 "string.m"
      }
#line 5126 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5126 "string.m"
  }
#line 1138 "string.m"
}

#line 1134 "string.m"
MR_bool MR_CALL 
mercury__string__char_to_string_2_p_1(
#line 1134 "string.m"
  MR_Char * mercury__string__Char_3,
#line 1134 "string.m"
  MR_String mercury__string__String_4)
#line 1134 "string.m"
{
#line 5126 "string.m"
  {
#line 5126 "string.m"
    MR_bool mercury__string__succeeded;
#line 5126 "string.m"
    MR_Word mercury__string__TypeInfo_8_8;
#line 5126 "string.m"
    MR_Word mercury__string__V_5_5;
#line 5126 "string.m"
    MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5126 "string.m"
    MR_Word mercury__string__V_7_7;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__char_to_string_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__String_4 ;
		{
#line 1373 "string.m"
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
#line 16606 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_5_5  = CharList;
#line 1373 "string.m"
}
#line 5127 "string.m"
    mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 5127 "string.m"
    if (mercury__string__succeeded)
#line 5127 "string.m"
      {
#line 5127 "string.m"
        *mercury__string__Char_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_5_5, (MR_Integer) 0)));
#line 5127 "string.m"
        mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_5_5, (MR_Integer) 1)));
#line 16623 "string.c"
        mercury__string__TypeInfo_8_8 = (MR_Word) &mercury__string_scalar_common_1[2];
#line 5127 "string.m"
        {
#line 5127 "string.m"
          return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_8_8, ((MR_Box) (mercury__string__V_6_6)), ((MR_Box) (mercury__string__V_7_7)));
        }
#line 5127 "string.m"
      }
#line 5126 "string.m"
    return mercury__string__succeeded;
#line 5126 "string.m"
  }
#line 1134 "string.m"
}

#line 1133 "string.m"
void MR_CALL 
mercury__string__char_to_string_2_p_0(
#line 1133 "string.m"
  MR_Char mercury__string__Char_3,
#line 1133 "string.m"
  MR_String * mercury__string__String_4)
#line 1133 "string.m"
{
#line 5126 "string.m"
  {
#line 5126 "string.m"
    MR_bool mercury__string__succeeded;
#line 5126 "string.m"
    MR_Word mercury__string__V_5_5;
#line 5126 "string.m"
    MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1451 "string.m"
    MR_String mercury__string__Str0_15;

#line 5127 "string.m"
    {
#line 5127 "string.m"
      mercury__string__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_5_5, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_3));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_5_5, 1) = ((MR_Box) (mercury__string__V_6_6));
#line 5127 "string.m"
    }
#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_5_5, &mercury__string__Str0_15);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      *mercury__string__String_4 = mercury__string__Str0_15;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1452 "string.m"
          return;
        }
#line 1452 "string.m"
      }
#line 5126 "string.m"
  }
#line 1133 "string.m"
}

#line 1131 "string.m"
MR_String MR_CALL 
mercury__string__char_to_string_1_f_0(
#line 1131 "string.m"
  MR_Char mercury__string__C_3)
#line 1131 "string.m"
{
#line 5126 "string.m"
  {
#line 5126 "string.m"
    MR_bool mercury__string__succeeded;
#line 5126 "string.m"
    MR_String mercury__string__S1_4;
#line 5126 "string.m"
    MR_Word mercury__string__V_7_7;
#line 5126 "string.m"
    MR_Word mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1451 "string.m"
    MR_String mercury__string__Str0_17;

#line 5127 "string.m"
    {
#line 5127 "string.m"
      mercury__string__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 0) = ((MR_Box) (MR_Word) (mercury__string__C_3));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 1) = ((MR_Box) (mercury__string__V_8_8));
#line 5127 "string.m"
    }
#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_7_7, &mercury__string__Str0_17);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      mercury__string__S1_4 = mercury__string__Str0_17;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1452 "string.m"
      }
#line 5126 "string.m"
    return mercury__string__S1_4;
#line 5126 "string.m"
  }
#line 1131 "string.m"
}

#line 1120 "string.m"
MR_Float MR_CALL 
mercury__string__det_to_float_1_f_0(
#line 1120 "string.m"
  MR_String mercury__string__FloatString_3)
#line 1120 "string.m"
{
#line 5117 "string.m"
  {
#line 5117 "string.m"
    MR_bool mercury__string__succeeded;
#line 5117 "string.m"
    MR_Float mercury__string__Float_4;
#line 5117 "string.m"
    MR_Float mercury__string__FloatPrime_5;

#line 5009 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_to_float_1_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_3 ;
		{
#line 5009 "string.m"
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
#line 16791 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__FloatPrime_5  = FloatVal;
#line 5009 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5117 "string.m"
    if (mercury__string__succeeded)
#line 5116 "string.m"
      mercury__string__Float_4 = mercury__string__FloatPrime_5;
#line 5117 "string.m"
    else
#line 5118 "string.m"
      {
#line 5118 "string.m"
        {
#line 5118 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_to_float/1: conversion failed.");
        }
#line 5118 "string.m"
      }
#line 5117 "string.m"
    return mercury__string__Float_4;
#line 5117 "string.m"
  }
#line 1120 "string.m"
}

#line 1114 "string.m"
MR_bool MR_CALL 
mercury__string__to_float_2_p_0(
#line 1114 "string.m"
  MR_String mercury__string__FloatString_1,
#line 1114 "string.m"
  MR_Float * mercury__string__FloatVal_2)
#line 1114 "string.m"
{
#line 5005 "string.m"
  {
#line 5005 "string.m"
    MR_bool mercury__string__succeeded;

#line 5009 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_float_2_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_1 ;
		{
#line 5009 "string.m"
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
#line 16859 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__FloatVal_2  = FloatVal;
#line 5009 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5005 "string.m"
    return mercury__string__succeeded;
#line 5005 "string.m"
  }
#line 1114 "string.m"
}

#line 1108 "string.m"
MR_Integer MR_CALL 
mercury__string__det_base_string_to_int_2_f_0(
#line 1108 "string.m"
  MR_Integer mercury__string__Base_4,
#line 1108 "string.m"
  MR_String mercury__string__S_5)
#line 1108 "string.m"
{
#line 4975 "string.m"
  {
#line 4975 "string.m"
    MR_bool mercury__string__succeeded;
#line 4975 "string.m"
    MR_Integer mercury__string__N_6;
#line 4975 "string.m"
    MR_Integer mercury__string__N0_7;

#line 4973 "string.m"
    {
#line 4973 "string.m"
      mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__string__Base_4, mercury__string__S_5, &mercury__string__N0_7);
    }
#line 4975 "string.m"
    if (mercury__string__succeeded)
#line 4974 "string.m"
      mercury__string__N_6 = mercury__string__N0_7;
#line 4975 "string.m"
    else
#line 4976 "string.m"
      {
#line 4976 "string.m"
        {
#line 4976 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_base_string_to_int: conversion failed");
        }
#line 4976 "string.m"
      }
#line 4975 "string.m"
    return mercury__string__N_6;
#line 4975 "string.m"
  }
#line 1108 "string.m"
}

#line 1101 "string.m"
MR_bool MR_CALL 
mercury__string__base_string_to_int_3_p_0(
#line 1101 "string.m"
  MR_Integer mercury__string__Base_4,
#line 1101 "string.m"
  MR_String mercury__string__String_5,
#line 1101 "string.m"
  MR_Integer * mercury__string__Int_6)
#line 1101 "string.m"
{
#line 4959 "string.m"
  {
#line 4959 "string.m"
    MR_bool mercury__string__succeeded;
#line 4959 "string.m"
    MR_Char mercury__string__Char_7;
#line 4959 "string.m"
    MR_Integer mercury__string__End_8;
#line 4959 "string.m"
    MR_Integer mercury__string__Len_36;
#line 1879 "string.m"
    MR_Char mercury__string__CharPrime_48;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 16958 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_36  = Length;
#line 2409 "string.m"
}
#line 2143 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__string__Len_36 ;
		{
#line 2143 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 16987 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2143 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4959 "string.m"
    if (mercury__string__succeeded)
#line 4959 "string.m"
      {
#line 1889 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  (MR_Integer) 0 ;
		{
#line 1889 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 17021 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_48  = Ch;
#line 1889 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1879 "string.m"
        if (mercury__string__succeeded)
#line 1878 "string.m"
          mercury__string__Char_7 = mercury__string__CharPrime_48;
#line 1879 "string.m"
        else
#line 1880 "string.m"
          {
#line 1880 "string.m"
            {
#line 1880 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 1880 "string.m"
          }
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 17059 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_8  = Length;
#line 2409 "string.m"
}
#line 4962 "string.m"
        mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 45);
#line 4965 "string.m"
        if (mercury__string__succeeded)
#line 4963 "string.m"
          {
#line 4963 "string.m"
            MR_Integer mercury__string__V_12_12;
#line 4963 "string.m"
            MR_Integer mercury__string__V_13_13;
#line 4963 "string.m"
            MR_Integer mercury__string__Start_63;
#line 4963 "string.m"
            MR_Integer mercury__string__End_64;
#line 4963 "string.m"
            MR_Integer mercury__string__V_66_66;
#line 4630 "string.m"
            MR_Integer mercury__string__V_65_65;

#line 4963 "string.m"
            mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
#line 4963 "string.m"
            if (mercury__string__succeeded)
#line 4963 "string.m"
              {
#line 4964 "string.m"
                mercury__string__V_12_12 = (MR_Integer) 1;
#line 4964 "string.m"
                mercury__string__V_13_13 = (MR_Integer) 0;
#line 4630 "string.m"
                mercury__string__V_65_65 = (MR_Integer) 0;
#line 79 "int.opt"
                mercury__string__Start_63 = mercury__string__V_12_12;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 17112 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_66_66  = Length;
#line 2409 "string.m"
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
#line 4632 "string.m"
                {
#line 4632 "string.m"
                  return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, mercury__string__Start_63, mercury__string__End_64, mercury__string__V_13_13, mercury__string__Int_6);
                }
#line 4963 "string.m"
              }
#line 4963 "string.m"
          }
#line 4965 "string.m"
        else
#line 4968 "string.m"
          {
#line 4965 "string.m"
            mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 43);
#line 4968 "string.m"
            if (mercury__string__succeeded)
#line 4966 "string.m"
              {
#line 4966 "string.m"
                MR_Integer mercury__string__V_16_16;
#line 4966 "string.m"
                MR_Integer mercury__string__V_17_17;

#line 4966 "string.m"
                mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
#line 4966 "string.m"
                if (mercury__string__succeeded)
#line 4966 "string.m"
                  {
#line 4967 "string.m"
                    mercury__string__V_16_16 = (MR_Integer) 1;
#line 4967 "string.m"
                    mercury__string__V_17_17 = (MR_Integer) 0;
#line 4967 "string.m"
                    {
#line 4967 "string.m"
                      return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, mercury__string__V_16_16, mercury__string__End_8, mercury__string__V_17_17, mercury__string__Int_6);
                    }
#line 4966 "string.m"
                  }
#line 4966 "string.m"
              }
#line 4968 "string.m"
            else
#line 4969 "string.m"
              {
#line 4969 "string.m"
                {
#line 4969 "string.m"
                  return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, (MR_Integer) 0, mercury__string__End_8, (MR_Integer) 0, mercury__string__Int_6);
                }
#line 4969 "string.m"
              }
#line 4968 "string.m"
          }
#line 4959 "string.m"
      }
#line 4959 "string.m"
    return mercury__string__succeeded;
#line 4959 "string.m"
  }
#line 1101 "string.m"
}

#line 1092 "string.m"
MR_Integer MR_CALL 
mercury__string__det_to_int_1_f_0(
#line 1092 "string.m"
  MR_String mercury__string__S_3)
#line 1092 "string.m"
{
#line 4957 "string.m"
  {
#line 4957 "string.m"
    MR_bool mercury__string__succeeded;
#line 4957 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;
#line 4975 "string.m"
    MR_Integer mercury__string__N0_8;

#line 4973 "string.m"
    {
#line 4973 "string.m"
      mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__S_3, &mercury__string__N0_8);
    }
#line 4975 "string.m"
    if (mercury__string__succeeded)
#line 4974 "string.m"
      mercury__string__HeadVar__2_2 = mercury__string__N0_8;
#line 4975 "string.m"
    else
#line 4976 "string.m"
      {
#line 4976 "string.m"
        {
#line 4976 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_base_string_to_int: conversion failed");
        }
#line 4976 "string.m"
      }
#line 4957 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4957 "string.m"
  }
#line 1092 "string.m"
}

#line 1086 "string.m"
MR_bool MR_CALL 
mercury__string__to_int_2_p_0(
#line 1086 "string.m"
  MR_String mercury__string__String_3,
#line 1086 "string.m"
  MR_Integer * mercury__string__Int_4)
#line 1086 "string.m"
{
#line 4954 "string.m"
  {
#line 4954 "string.m"
    MR_bool mercury__string__succeeded;

#line 4955 "string.m"
    {
#line 4955 "string.m"
      return mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__String_3, mercury__string__Int_4);
    }
#line 4954 "string.m"
    return mercury__string__succeeded;
#line 4954 "string.m"
  }
#line 1086 "string.m"
}

#line 1074 "string.m"
MR_Word MR_CALL 
mercury__string__string_to_doc_1_f_0(
#line 1074 "string.m"
  MR_String mercury__string__S_3)
#line 1074 "string.m"
{
#line 4947 "string.m"
  {
#line 4947 "string.m"
    MR_bool mercury__string__succeeded;
#line 4947 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4947 "string.m"
    MR_Word mercury__string__V_4_4;
#line 4947 "string.m"
    MR_Word mercury__string__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_5[0]);
#line 4947 "string.m"
    MR_Word mercury__string__V_7_7;
#line 4947 "string.m"
    MR_Word mercury__string__V_8_8;
#line 4947 "string.m"
    MR_Word mercury__string__V_9_9;
#line 4947 "string.m"
    MR_Word mercury__string__V_12_12;

#line 4947 "string.m"
    {
#line 4947 "string.m"
      mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 4947 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 0) = ((MR_Box) (mercury__string__S_3));
#line 4947 "string.m"
    }
#line 4947 "string.m"
    mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4947 "string.m"
    mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[3]);
#line 4947 "string.m"
    {
#line 4947 "string.m"
      mercury__string__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4947 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 4947 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 4947 "string.m"
    }
#line 4947 "string.m"
    {
#line 4947 "string.m"
      mercury__string__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4947 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_4_4, 0) = ((MR_Box) (mercury__string__V_5_5));
#line 4947 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_4_4, 1) = ((MR_Box) (mercury__string__V_7_7));
#line 4947 "string.m"
    }
#line 4947 "string.m"
    {
#line 4947 "string.m"
      mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 4947 "string.m"
      MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__V_4_4));
#line 4947 "string.m"
    }
#line 4947 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4947 "string.m"
  }
#line 1074 "string.m"
}

#line 1064 "string.m"
MR_String MR_CALL 
mercury__string__format_table_max_2_f_0(
#line 1064 "string.m"
  MR_Word mercury__string__ColumnsLimits_4,
#line 1064 "string.m"
  MR_String mercury__string__Separator_5)
#line 1064 "string.m"
{
#line 4790 "string.m"
  {
#line 4790 "string.m"
    MR_bool mercury__string__succeeded;
#line 4790 "string.m"
    MR_String mercury__string__Table_6;
#line 4790 "string.m"
    MR_Word mercury__string__TypeCtorInfo_23_23;
#line 4790 "string.m"
    MR_Word mercury__string__MaxWidthsSenses_7;
#line 4790 "string.m"
    MR_Word mercury__string__Columns_8;
#line 4790 "string.m"
    MR_Integer mercury__string__SepLen_9;
#line 4790 "string.m"
    MR_Word mercury__string__RevRows_10;
#line 4790 "string.m"
    MR_Word mercury__string__Rows_11;
#line 4790 "string.m"
    MR_Word mercury__string__V_14_14;

#line 4791 "string.m"
    {
#line 4791 "string.m"
      mercury__string__MaxWidthsSenses_7 = mercury__string__map__ho14_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    }
#line 4792 "string.m"
    {
#line 4792 "string.m"
      mercury__string__Columns_8 = mercury__string__map__ho13_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    }
#line 2469 "string.m"
    {
#line 2469 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Separator_5, &mercury__string__SepLen_9);
    }
#line 4794 "string.m"
    mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4794 "string.m"
    {
#line 4794 "string.m"
      mercury__string__generate_rows_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Separator_5, mercury__string__SepLen_9, mercury__string__Columns_8, mercury__string__V_14_14, &mercury__string__RevRows_10);
    }
#line 17388 "string.c"
    mercury__string__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4795 "string.m"
    {
#line 4795 "string.m"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_23_23, mercury__string__RevRows_10, &mercury__string__Rows_11);
    }
#line 4796 "string.m"
    {
#line 4796 "string.m"
      return mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    }
#line 4790 "string.m"
    return mercury__string__Table_6;
#line 4790 "string.m"
  }
#line 1064 "string.m"
}

#line 1059 "string.m"
MR_String MR_CALL 
mercury__string__format_table_2_f_0(
#line 1059 "string.m"
  MR_Word mercury__string__Columns_4,
#line 1059 "string.m"
  MR_String mercury__string__Separator_5)
#line 1059 "string.m"
{
#line 4773 "string.m"
  {
#line 4773 "string.m"
    MR_bool mercury__string__succeeded;
#line 4773 "string.m"
    MR_String mercury__string__Table_6;
#line 4773 "string.m"
    MR_Word mercury__string__MaxWidths_7;
#line 4773 "string.m"
    MR_Word mercury__string__PaddedColumns_8;
#line 4773 "string.m"
    MR_Word mercury__string__Rows_11;

#line 4774 "string.m"
    {
#line 4774 "string.m"
      mercury__string__MaxWidths_7 = mercury__string__map__ho16_2_f_in__list_0(mercury__string__Columns_4);
    }
#line 4779 "string.m"
    {
#line 4779 "string.m"
      mercury__string__PaddedColumns_8 = mercury__string__map_corresponding__ho15_3_f_in__list_0(mercury__string__MaxWidths_7, mercury__string__Columns_4);
    }
#line 4784 "string.m"
    if ((mercury__string__PaddedColumns_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4786 "string.m"
      mercury__string__Rows_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4784 "string.m"
    else
#line 4781 "string.m"
      {
#line 4781 "string.m"
        MR_Word mercury__string__PaddedHead_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 0)));
#line 4781 "string.m"
        MR_Word mercury__string__PaddedTail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 1)));

#line 395 "list.opt"
        {
#line 395 "list.opt"
          mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(mercury__string__Separator_5, mercury__string__PaddedTail_10, mercury__string__PaddedHead_9, &mercury__string__Rows_11);
        }
#line 4781 "string.m"
      }
#line 4788 "string.m"
    {
#line 4788 "string.m"
      return mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    }
#line 4773 "string.m"
    return mercury__string__Table_6;
#line 4773 "string.m"
  }
#line 1059 "string.m"
}

#line 1029 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_4(
#line 1029 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1029 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1029 "string.m"
  MR_String mercury__string__String_8,
#line 1029 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1029 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1029 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1029 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1029 "string.m"
  MR_Cont mercury__string__cont,
#line 1029 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1029 "string.m"
{
#line 4753 "string.m"
  {
#line 4753 "string.m"
    MR_bool mercury__string__succeeded;
#line 4753 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4753 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4754 "string.m"
    {
#line 4754 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4755 "string.m"
    {
#line 4755 "string.m"
      mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4755 "string.m"
      return;
    }
#line 4753 "string.m"
  }
#line 1029 "string.m"
}

#line 1027 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_3(
#line 1027 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1027 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1027 "string.m"
  MR_String mercury__string__String_8,
#line 1027 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1027 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1027 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1027 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1027 "string.m"
  MR_Cont mercury__string__cont,
#line 1027 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1027 "string.m"
{
#line 4753 "string.m"
  {
#line 4753 "string.m"
    MR_bool mercury__string__succeeded;
#line 4753 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4753 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4754 "string.m"
    {
#line 4754 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4755 "string.m"
    {
#line 4755 "string.m"
      mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4755 "string.m"
      return;
    }
#line 4753 "string.m"
  }
#line 1027 "string.m"
}

#line 1025 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_substring_6_p_2(
#line 1025 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1025 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1025 "string.m"
  MR_String mercury__string__String_8,
#line 1025 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1025 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1025 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1025 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1025 "string.m"
{
#line 4753 "string.m"
  {
#line 4753 "string.m"
    MR_bool mercury__string__succeeded;
#line 4753 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4753 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4754 "string.m"
    {
#line 4754 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4755 "string.m"
    {
#line 4755 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4753 "string.m"
    return mercury__string__succeeded;
#line 4753 "string.m"
  }
#line 1025 "string.m"
}

#line 1023 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_1(
#line 1023 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1023 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1023 "string.m"
  MR_String mercury__string__String_8,
#line 1023 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1023 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1023 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1023 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1023 "string.m"
{
#line 4753 "string.m"
  {
#line 4753 "string.m"
    MR_bool mercury__string__succeeded;
#line 4753 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4753 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4754 "string.m"
    {
#line 4754 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4755 "string.m"
    {
#line 4755 "string.m"
      mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4755 "string.m"
      return;
    }
#line 4753 "string.m"
  }
#line 1023 "string.m"
}

#line 1021 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_0(
#line 1021 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1021 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1021 "string.m"
  MR_String mercury__string__String_8,
#line 1021 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1021 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1021 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1021 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1021 "string.m"
{
#line 4753 "string.m"
  {
#line 4753 "string.m"
    MR_bool mercury__string__succeeded;
#line 4753 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4753 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4754 "string.m"
    {
#line 4754 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4755 "string.m"
    {
#line 4755 "string.m"
      mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4755 "string.m"
      return;
    }
#line 4753 "string.m"
  }
#line 1021 "string.m"
}

#line 1019 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_substring_5_f_0(
#line 1019 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_15,
#line 1019 "string.m"
  MR_Word mercury__string__F_7,
#line 1019 "string.m"
  MR_String mercury__string__String_8,
#line 1019 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1019 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1019 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 1019 "string.m"
{
#line 4749 "string.m"
  {
#line 4749 "string.m"
    MR_bool mercury__string__succeeded;
#line 4749 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4749 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4749 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4750 "string.m"
    {
#line 4750 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4751 "string.m"
    {
#line 4751 "string.m"
      return mercury__string__Acc_12 = mercury__string__foldr_between_5_f_0(mercury__string__TypeInfo_for_T_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    }
#line 4749 "string.m"
    return mercury__string__Acc_12;
#line 4749 "string.m"
  }
#line 1019 "string.m"
}

#line 1011 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_4(
#line 1011 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1011 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1011 "string.m"
  MR_String mercury__string__String_8,
#line 1011 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1011 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1011 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1011 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1011 "string.m"
  MR_Cont mercury__string__cont,
#line 1011 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1011 "string.m"
{
#line 4720 "string.m"
  {
#line 4720 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4720 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4720 "string.m"
    MR_Integer mercury__string__End_13;
#line 4720 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 17804 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2409 "string.m"
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
#line 4723 "string.m"
    {
#line 4723 "string.m"
      mercury__string__foldr_between_2_6_p_4(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4723 "string.m"
      return;
    }
#line 4720 "string.m"
  }
#line 1011 "string.m"
}

#line 1009 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_3(
#line 1009 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1009 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1009 "string.m"
  MR_String mercury__string__String_8,
#line 1009 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1009 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1009 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1009 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1009 "string.m"
  MR_Cont mercury__string__cont,
#line 1009 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1009 "string.m"
{
#line 4720 "string.m"
  {
#line 4720 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4720 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4720 "string.m"
    MR_Integer mercury__string__End_13;
#line 4720 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 17888 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2409 "string.m"
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
#line 4723 "string.m"
    {
#line 4723 "string.m"
      mercury__string__foldr_between_2_6_p_3(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4723 "string.m"
      return;
    }
#line 4720 "string.m"
  }
#line 1009 "string.m"
}

#line 1007 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_between_6_p_2(
#line 1007 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1007 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1007 "string.m"
  MR_String mercury__string__String_8,
#line 1007 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1007 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1007 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1007 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1007 "string.m"
{
#line 4720 "string.m"
  {
#line 4720 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4720 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4720 "string.m"
    MR_Integer mercury__string__End_13;
#line 4720 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 17968 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2409 "string.m"
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
#line 4723 "string.m"
    {
#line 4723 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_2_6_p_2(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4720 "string.m"
    return mercury__string__succeeded;
#line 4720 "string.m"
  }
#line 1007 "string.m"
}

#line 1005 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_1(
#line 1005 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1005 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1005 "string.m"
  MR_String mercury__string__String_8,
#line 1005 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1005 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1005 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1005 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1005 "string.m"
{
#line 4720 "string.m"
  {
#line 4720 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4720 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4720 "string.m"
    MR_Integer mercury__string__End_13;
#line 4720 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 18048 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2409 "string.m"
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
#line 4723 "string.m"
    {
#line 4723 "string.m"
      mercury__string__foldr_between_2_6_p_1(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4723 "string.m"
      return;
    }
#line 4720 "string.m"
  }
#line 1005 "string.m"
}

#line 1003 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_0(
#line 1003 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1003 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1003 "string.m"
  MR_String mercury__string__String_8,
#line 1003 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1003 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1003 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1003 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1003 "string.m"
{
#line 4720 "string.m"
  {
#line 4720 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4720 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4720 "string.m"
    MR_Integer mercury__string__End_13;
#line 4720 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 18128 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2409 "string.m"
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
#line 4723 "string.m"
    {
#line 4723 "string.m"
      mercury__string__foldr_between_2_6_p_0(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4723 "string.m"
      return;
    }
#line 4720 "string.m"
  }
#line 1003 "string.m"
}

#line 1001 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_between_5_f_0(
#line 1001 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_23,
#line 1001 "string.m"
  MR_Word mercury__string__F_7,
#line 1001 "string.m"
  MR_String mercury__string__String_8,
#line 1001 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1001 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1001 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 1001 "string.m"
{
#line 4716 "string.m"
  {
#line 4716 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
#line 4716 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4716 "string.m"
    MR_Integer mercury__string__Start_31;
#line 4716 "string.m"
    MR_Integer mercury__string__End_32;
#line 4716 "string.m"
    MR_Integer mercury__string__V_34_34;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_31 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_31 = mercury__string__Start_9;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 18208 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_34_34  = Length;
#line 2409 "string.m"
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
#line 4723 "string.m"
    {
#line 4723 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__String_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__Acc0_11, &mercury__string__Acc_12);
    }
#line 4716 "string.m"
    return mercury__string__Acc_12;
#line 4716 "string.m"
  }
#line 1001 "string.m"
}

#line 993 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_4(
#line 993 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 993 "string.m"
  MR_Word mercury__string__Closure_5,
#line 993 "string.m"
  MR_String mercury__string__String_6,
#line 993 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 993 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9,
#line 993 "string.m"
  MR_Cont mercury__string__cont,
#line 993 "string.m"
  void * mercury__string__cont_env_ptr)
#line 993 "string.m"
{
#line 4713 "string.m"
  {
#line 4713 "string.m"
    MR_bool mercury__string__succeeded;
#line 4713 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 18276 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2409 "string.m"
}
#line 4714 "string.m"
    {
#line 4714 "string.m"
      mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4714 "string.m"
      return;
    }
#line 4713 "string.m"
  }
#line 993 "string.m"
}

#line 992 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_3(
#line 992 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 992 "string.m"
  MR_Word mercury__string__Closure_5,
#line 992 "string.m"
  MR_String mercury__string__String_6,
#line 992 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 992 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9,
#line 992 "string.m"
  MR_Cont mercury__string__cont,
#line 992 "string.m"
  void * mercury__string__cont_env_ptr)
#line 992 "string.m"
{
#line 4713 "string.m"
  {
#line 4713 "string.m"
    MR_bool mercury__string__succeeded;
#line 4713 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 18334 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2409 "string.m"
}
#line 4714 "string.m"
    {
#line 4714 "string.m"
      mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4714 "string.m"
      return;
    }
#line 4713 "string.m"
  }
#line 992 "string.m"
}

#line 991 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_4_p_2(
#line 991 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 991 "string.m"
  MR_Word mercury__string__Closure_5,
#line 991 "string.m"
  MR_String mercury__string__String_6,
#line 991 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 991 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 991 "string.m"
{
#line 4713 "string.m"
  {
#line 4713 "string.m"
    MR_bool mercury__string__succeeded;
#line 4713 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 18388 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2409 "string.m"
}
#line 4714 "string.m"
    {
#line 4714 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
    }
#line 4713 "string.m"
    return mercury__string__succeeded;
#line 4713 "string.m"
  }
#line 991 "string.m"
}

#line 990 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_1(
#line 990 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 990 "string.m"
  MR_Word mercury__string__Closure_5,
#line 990 "string.m"
  MR_String mercury__string__String_6,
#line 990 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 990 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 990 "string.m"
{
#line 4713 "string.m"
  {
#line 4713 "string.m"
    MR_bool mercury__string__succeeded;
#line 4713 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 18442 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2409 "string.m"
}
#line 4714 "string.m"
    {
#line 4714 "string.m"
      mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
#line 4714 "string.m"
      return;
    }
#line 4713 "string.m"
  }
#line 990 "string.m"
}

#line 989 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_0(
#line 989 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 989 "string.m"
  MR_Word mercury__string__Closure_5,
#line 989 "string.m"
  MR_String mercury__string__String_6,
#line 989 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 989 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 989 "string.m"
{
#line 4713 "string.m"
  {
#line 4713 "string.m"
    MR_bool mercury__string__succeeded;
#line 4713 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 18496 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2409 "string.m"
}
#line 4714 "string.m"
    {
#line 4714 "string.m"
      mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
#line 4714 "string.m"
      return;
    }
#line 4713 "string.m"
  }
#line 989 "string.m"
}

#line 987 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_3_f_0(
#line 987 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 987 "string.m"
  MR_Word mercury__string__F_5,
#line 987 "string.m"
  MR_String mercury__string__String_6,
#line 987 "string.m"
  MR_Box mercury__string__Acc0_7)
#line 987 "string.m"
{
#line 4709 "string.m"
  {
#line 4709 "string.m"
    MR_bool mercury__string__succeeded;
#line 4709 "string.m"
    MR_Box mercury__string__Acc_8;
#line 4709 "string.m"
    MR_Integer mercury__string__V_26_26;
#line 4709 "string.m"
    MR_Integer mercury__string__End_41;
#line 4709 "string.m"
    MR_Integer mercury__string__V_43_43;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 18554 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_26_26  = Length;
#line 2409 "string.m"
}
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 18574 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_43_43  = Length;
#line 2409 "string.m"
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
#line 4723 "string.m"
    {
#line 4723 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__End_41, mercury__string__Acc0_7, &mercury__string__Acc_8);
    }
#line 4709 "string.m"
    return mercury__string__Acc_8;
#line 4709 "string.m"
  }
#line 987 "string.m"
}

#line 981 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_5(
#line 981 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 981 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 981 "string.m"
  MR_Word mercury__string__Closure_9,
#line 981 "string.m"
  MR_String mercury__string__String_10,
#line 981 "string.m"
  MR_Integer mercury__string__Start_11,
#line 981 "string.m"
  MR_Integer mercury__string__Count_12,
#line 981 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 981 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 981 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 981 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 981 "string.m"
  MR_Cont mercury__string__cont,
#line 981 "string.m"
  void * mercury__string__cont_env_ptr)
#line 981 "string.m"
{
#line 4702 "string.m"
  {
#line 4702 "string.m"
    MR_bool mercury__string__succeeded;
#line 4702 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4702 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4703 "string.m"
    {
#line 4703 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4704 "string.m"
    {
#line 4704 "string.m"
      mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4704 "string.m"
      return;
    }
#line 4702 "string.m"
  }
#line 981 "string.m"
}

#line 979 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_4(
#line 979 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 979 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 979 "string.m"
  MR_Word mercury__string__Closure_9,
#line 979 "string.m"
  MR_String mercury__string__String_10,
#line 979 "string.m"
  MR_Integer mercury__string__Start_11,
#line 979 "string.m"
  MR_Integer mercury__string__Count_12,
#line 979 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 979 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 979 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 979 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 979 "string.m"
  MR_Cont mercury__string__cont,
#line 979 "string.m"
  void * mercury__string__cont_env_ptr)
#line 979 "string.m"
{
#line 4702 "string.m"
  {
#line 4702 "string.m"
    MR_bool mercury__string__succeeded;
#line 4702 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4702 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4703 "string.m"
    {
#line 4703 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4704 "string.m"
    {
#line 4704 "string.m"
      mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4704 "string.m"
      return;
    }
#line 4702 "string.m"
  }
#line 979 "string.m"
}

#line 977 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_substring_8_p_3(
#line 977 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 977 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 977 "string.m"
  MR_Word mercury__string__Closure_9,
#line 977 "string.m"
  MR_String mercury__string__String_10,
#line 977 "string.m"
  MR_Integer mercury__string__Start_11,
#line 977 "string.m"
  MR_Integer mercury__string__Count_12,
#line 977 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 977 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 977 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 977 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 977 "string.m"
{
#line 4702 "string.m"
  {
#line 4702 "string.m"
    MR_bool mercury__string__succeeded;
#line 4702 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4702 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4703 "string.m"
    {
#line 4703 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4704 "string.m"
    {
#line 4704 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    }
#line 4702 "string.m"
    return mercury__string__succeeded;
#line 4702 "string.m"
  }
#line 977 "string.m"
}

#line 975 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_2(
#line 975 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 975 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 975 "string.m"
  MR_Word mercury__string__Closure_9,
#line 975 "string.m"
  MR_String mercury__string__String_10,
#line 975 "string.m"
  MR_Integer mercury__string__Start_11,
#line 975 "string.m"
  MR_Integer mercury__string__Count_12,
#line 975 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 975 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 975 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 975 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 975 "string.m"
{
#line 4702 "string.m"
  {
#line 4702 "string.m"
    MR_bool mercury__string__succeeded;
#line 4702 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4702 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4703 "string.m"
    {
#line 4703 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4704 "string.m"
    {
#line 4704 "string.m"
      mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4704 "string.m"
      return;
    }
#line 4702 "string.m"
  }
#line 975 "string.m"
}

#line 973 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_1(
#line 973 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 973 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 973 "string.m"
  MR_Word mercury__string__Closure_9,
#line 973 "string.m"
  MR_String mercury__string__String_10,
#line 973 "string.m"
  MR_Integer mercury__string__Start_11,
#line 973 "string.m"
  MR_Integer mercury__string__Count_12,
#line 973 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 973 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 973 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 973 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 973 "string.m"
{
#line 4702 "string.m"
  {
#line 4702 "string.m"
    MR_bool mercury__string__succeeded;
#line 4702 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4702 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4703 "string.m"
    {
#line 4703 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4704 "string.m"
    {
#line 4704 "string.m"
      mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4704 "string.m"
      return;
    }
#line 4702 "string.m"
  }
#line 973 "string.m"
}

#line 971 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_0(
#line 971 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 971 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 971 "string.m"
  MR_Word mercury__string__Closure_9,
#line 971 "string.m"
  MR_String mercury__string__String_10,
#line 971 "string.m"
  MR_Integer mercury__string__Start_11,
#line 971 "string.m"
  MR_Integer mercury__string__Count_12,
#line 971 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 971 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 971 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 971 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 971 "string.m"
{
#line 4702 "string.m"
  {
#line 4702 "string.m"
    MR_bool mercury__string__succeeded;
#line 4702 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4702 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4703 "string.m"
    {
#line 4703 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4704 "string.m"
    {
#line 4704 "string.m"
      mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4704 "string.m"
      return;
    }
#line 4702 "string.m"
  }
#line 971 "string.m"
}

#line 962 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_4(
#line 962 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 962 "string.m"
  MR_Word mercury__string__Closure_7,
#line 962 "string.m"
  MR_String mercury__string__String_8,
#line 962 "string.m"
  MR_Integer mercury__string__Start_9,
#line 962 "string.m"
  MR_Integer mercury__string__Count_10,
#line 962 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 962 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 962 "string.m"
  MR_Cont mercury__string__cont,
#line 962 "string.m"
  void * mercury__string__cont_env_ptr)
#line 962 "string.m"
{
#line 4698 "string.m"
  {
#line 4698 "string.m"
    MR_bool mercury__string__succeeded;
#line 4698 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4698 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4699 "string.m"
    {
#line 4699 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4700 "string.m"
    {
#line 4700 "string.m"
      mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4700 "string.m"
      return;
    }
#line 4698 "string.m"
  }
#line 962 "string.m"
}

#line 960 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_3(
#line 960 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 960 "string.m"
  MR_Word mercury__string__Closure_7,
#line 960 "string.m"
  MR_String mercury__string__String_8,
#line 960 "string.m"
  MR_Integer mercury__string__Start_9,
#line 960 "string.m"
  MR_Integer mercury__string__Count_10,
#line 960 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 960 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 960 "string.m"
  MR_Cont mercury__string__cont,
#line 960 "string.m"
  void * mercury__string__cont_env_ptr)
#line 960 "string.m"
{
#line 4698 "string.m"
  {
#line 4698 "string.m"
    MR_bool mercury__string__succeeded;
#line 4698 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4698 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4699 "string.m"
    {
#line 4699 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4700 "string.m"
    {
#line 4700 "string.m"
      mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4700 "string.m"
      return;
    }
#line 4698 "string.m"
  }
#line 960 "string.m"
}

#line 958 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_substring_6_p_2(
#line 958 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 958 "string.m"
  MR_Word mercury__string__Closure_7,
#line 958 "string.m"
  MR_String mercury__string__String_8,
#line 958 "string.m"
  MR_Integer mercury__string__Start_9,
#line 958 "string.m"
  MR_Integer mercury__string__Count_10,
#line 958 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 958 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 958 "string.m"
{
#line 4698 "string.m"
  {
#line 4698 "string.m"
    MR_bool mercury__string__succeeded;
#line 4698 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4698 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4699 "string.m"
    {
#line 4699 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4700 "string.m"
    {
#line 4700 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4698 "string.m"
    return mercury__string__succeeded;
#line 4698 "string.m"
  }
#line 958 "string.m"
}

#line 956 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_1(
#line 956 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 956 "string.m"
  MR_Word mercury__string__Closure_7,
#line 956 "string.m"
  MR_String mercury__string__String_8,
#line 956 "string.m"
  MR_Integer mercury__string__Start_9,
#line 956 "string.m"
  MR_Integer mercury__string__Count_10,
#line 956 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 956 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 956 "string.m"
{
#line 4698 "string.m"
  {
#line 4698 "string.m"
    MR_bool mercury__string__succeeded;
#line 4698 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4698 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4699 "string.m"
    {
#line 4699 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4700 "string.m"
    {
#line 4700 "string.m"
      mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4700 "string.m"
      return;
    }
#line 4698 "string.m"
  }
#line 956 "string.m"
}

#line 954 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_0(
#line 954 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 954 "string.m"
  MR_Word mercury__string__Closure_7,
#line 954 "string.m"
  MR_String mercury__string__String_8,
#line 954 "string.m"
  MR_Integer mercury__string__Start_9,
#line 954 "string.m"
  MR_Integer mercury__string__Count_10,
#line 954 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 954 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 954 "string.m"
{
#line 4698 "string.m"
  {
#line 4698 "string.m"
    MR_bool mercury__string__succeeded;
#line 4698 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4698 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4699 "string.m"
    {
#line 4699 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4700 "string.m"
    {
#line 4700 "string.m"
      mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4700 "string.m"
      return;
    }
#line 4698 "string.m"
  }
#line 954 "string.m"
}

#line 952 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_substring_5_f_0(
#line 952 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_15,
#line 952 "string.m"
  MR_Word mercury__string__F_7,
#line 952 "string.m"
  MR_String mercury__string__String_8,
#line 952 "string.m"
  MR_Integer mercury__string__Start_9,
#line 952 "string.m"
  MR_Integer mercury__string__Count_10,
#line 952 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 952 "string.m"
{
#line 4694 "string.m"
  {
#line 4694 "string.m"
    MR_bool mercury__string__succeeded;
#line 4694 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4694 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4694 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4695 "string.m"
    {
#line 4695 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4696 "string.m"
    {
#line 4696 "string.m"
      return mercury__string__Acc_12 = mercury__string__foldl_between_5_f_0(mercury__string__TypeInfo_for_A_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    }
#line 4694 "string.m"
    return mercury__string__Acc_12;
#line 4694 "string.m"
  }
#line 952 "string.m"
}

#line 944 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_5(
#line 944 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 944 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 944 "string.m"
  MR_Word mercury__string__Closure_9,
#line 944 "string.m"
  MR_String mercury__string__String_10,
#line 944 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 944 "string.m"
  MR_Integer mercury__string__End0_12,
#line 944 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 944 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 944 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 944 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 944 "string.m"
  MR_Cont mercury__string__cont,
#line 944 "string.m"
  void * mercury__string__cont_env_ptr)
#line 944 "string.m"
{
#line 4638 "string.m"
  {
#line 4638 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4638 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4638 "string.m"
    MR_Integer mercury__string__End_16;
#line 4638 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 19256 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2409 "string.m"
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
#line 4641 "string.m"
    {
#line 4641 "string.m"
      mercury__string__foldl2_between_2_8_p_5(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4641 "string.m"
      return;
    }
#line 4638 "string.m"
  }
#line 944 "string.m"
}

#line 942 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_4(
#line 942 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 942 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 942 "string.m"
  MR_Word mercury__string__Closure_9,
#line 942 "string.m"
  MR_String mercury__string__String_10,
#line 942 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 942 "string.m"
  MR_Integer mercury__string__End0_12,
#line 942 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 942 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 942 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 942 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 942 "string.m"
  MR_Cont mercury__string__cont,
#line 942 "string.m"
  void * mercury__string__cont_env_ptr)
#line 942 "string.m"
{
#line 4638 "string.m"
  {
#line 4638 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4638 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4638 "string.m"
    MR_Integer mercury__string__End_16;
#line 4638 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 19346 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2409 "string.m"
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
#line 4641 "string.m"
    {
#line 4641 "string.m"
      mercury__string__foldl2_between_2_8_p_4(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4641 "string.m"
      return;
    }
#line 4638 "string.m"
  }
#line 942 "string.m"
}

#line 940 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_between_8_p_3(
#line 940 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 940 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 940 "string.m"
  MR_Word mercury__string__Closure_9,
#line 940 "string.m"
  MR_String mercury__string__String_10,
#line 940 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 940 "string.m"
  MR_Integer mercury__string__End0_12,
#line 940 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 940 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 940 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 940 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 940 "string.m"
{
#line 4638 "string.m"
  {
#line 4638 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4638 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4638 "string.m"
    MR_Integer mercury__string__End_16;
#line 4638 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 19432 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2409 "string.m"
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
#line 4641 "string.m"
    {
#line 4641 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_2_8_p_3(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    }
#line 4638 "string.m"
    return mercury__string__succeeded;
#line 4638 "string.m"
  }
#line 940 "string.m"
}

#line 938 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_2(
#line 938 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 938 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 938 "string.m"
  MR_Word mercury__string__Closure_9,
#line 938 "string.m"
  MR_String mercury__string__String_10,
#line 938 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 938 "string.m"
  MR_Integer mercury__string__End0_12,
#line 938 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 938 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 938 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 938 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 938 "string.m"
{
#line 4638 "string.m"
  {
#line 4638 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4638 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4638 "string.m"
    MR_Integer mercury__string__End_16;
#line 4638 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 19518 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2409 "string.m"
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
#line 4641 "string.m"
    {
#line 4641 "string.m"
      mercury__string__foldl2_between_2_8_p_2(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4641 "string.m"
      return;
    }
#line 4638 "string.m"
  }
#line 938 "string.m"
}

#line 936 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_1(
#line 936 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 936 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 936 "string.m"
  MR_Word mercury__string__Closure_9,
#line 936 "string.m"
  MR_String mercury__string__String_10,
#line 936 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 936 "string.m"
  MR_Integer mercury__string__End0_12,
#line 936 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 936 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 936 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 936 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 936 "string.m"
{
#line 4638 "string.m"
  {
#line 4638 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4638 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4638 "string.m"
    MR_Integer mercury__string__End_16;
#line 4638 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 19604 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2409 "string.m"
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
#line 4641 "string.m"
    {
#line 4641 "string.m"
      mercury__string__foldl2_between_2_8_p_1(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4641 "string.m"
      return;
    }
#line 4638 "string.m"
  }
#line 936 "string.m"
}

#line 934 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_0(
#line 934 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 934 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 934 "string.m"
  MR_Word mercury__string__Closure_9,
#line 934 "string.m"
  MR_String mercury__string__String_10,
#line 934 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 934 "string.m"
  MR_Integer mercury__string__End0_12,
#line 934 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 934 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 934 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 934 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 934 "string.m"
{
#line 4638 "string.m"
  {
#line 4638 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4638 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4638 "string.m"
    MR_Integer mercury__string__End_16;
#line 4638 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 19690 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2409 "string.m"
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
#line 4641 "string.m"
    {
#line 4641 "string.m"
      mercury__string__foldl2_between_2_8_p_0(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4641 "string.m"
      return;
    }
#line 4638 "string.m"
  }
#line 934 "string.m"
}

#line 924 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_4(
#line 924 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 924 "string.m"
  MR_Word mercury__string__Closure_7,
#line 924 "string.m"
  MR_String mercury__string__String_8,
#line 924 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 924 "string.m"
  MR_Integer mercury__string__End0_10,
#line 924 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 924 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 924 "string.m"
  MR_Cont mercury__string__cont,
#line 924 "string.m"
  void * mercury__string__cont_env_ptr)
#line 924 "string.m"
{
#line 4629 "string.m"
  {
#line 4629 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4629 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4629 "string.m"
    MR_Integer mercury__string__End_13;
#line 4629 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 19774 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2409 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__foldl_between_2_6_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4632 "string.m"
      return;
    }
#line 4629 "string.m"
  }
#line 924 "string.m"
}

#line 922 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_3(
#line 922 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 922 "string.m"
  MR_Word mercury__string__Closure_7,
#line 922 "string.m"
  MR_String mercury__string__String_8,
#line 922 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 922 "string.m"
  MR_Integer mercury__string__End0_10,
#line 922 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 922 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 922 "string.m"
  MR_Cont mercury__string__cont,
#line 922 "string.m"
  void * mercury__string__cont_env_ptr)
#line 922 "string.m"
{
#line 4629 "string.m"
  {
#line 4629 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4629 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4629 "string.m"
    MR_Integer mercury__string__End_13;
#line 4629 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 19858 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2409 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__foldl_between_2_6_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4632 "string.m"
      return;
    }
#line 4629 "string.m"
  }
#line 922 "string.m"
}

#line 920 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_between_6_p_2(
#line 920 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 920 "string.m"
  MR_Word mercury__string__Closure_7,
#line 920 "string.m"
  MR_String mercury__string__String_8,
#line 920 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 920 "string.m"
  MR_Integer mercury__string__End0_10,
#line 920 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 920 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 920 "string.m"
{
#line 4629 "string.m"
  {
#line 4629 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4629 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4629 "string.m"
    MR_Integer mercury__string__End_13;
#line 4629 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 19938 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2409 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_2_6_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4629 "string.m"
    return mercury__string__succeeded;
#line 4629 "string.m"
  }
#line 920 "string.m"
}

#line 918 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_1(
#line 918 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 918 "string.m"
  MR_Word mercury__string__Closure_7,
#line 918 "string.m"
  MR_String mercury__string__String_8,
#line 918 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 918 "string.m"
  MR_Integer mercury__string__End0_10,
#line 918 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 918 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 918 "string.m"
{
#line 4629 "string.m"
  {
#line 4629 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4629 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4629 "string.m"
    MR_Integer mercury__string__End_13;
#line 4629 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20018 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2409 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__foldl_between_2_6_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4632 "string.m"
      return;
    }
#line 4629 "string.m"
  }
#line 918 "string.m"
}

#line 916 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_0(
#line 916 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 916 "string.m"
  MR_Word mercury__string__Closure_7,
#line 916 "string.m"
  MR_String mercury__string__String_8,
#line 916 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 916 "string.m"
  MR_Integer mercury__string__End0_10,
#line 916 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 916 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 916 "string.m"
{
#line 4629 "string.m"
  {
#line 4629 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4629 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4629 "string.m"
    MR_Integer mercury__string__End_13;
#line 4629 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20098 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2409 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__foldl_between_2_6_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4632 "string.m"
      return;
    }
#line 4629 "string.m"
  }
#line 916 "string.m"
}

#line 914 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_between_5_f_0(
#line 914 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 914 "string.m"
  MR_Word mercury__string__F_7,
#line 914 "string.m"
  MR_String mercury__string__S_8,
#line 914 "string.m"
  MR_Integer mercury__string__Start_9,
#line 914 "string.m"
  MR_Integer mercury__string__End_10,
#line 914 "string.m"
  MR_Box mercury__string__A_11)
#line 914 "string.m"
{
#line 4634 "string.m"
  {
#line 4634 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
#line 4634 "string.m"
    MR_Box mercury__string__B_12;
#line 4634 "string.m"
    MR_Integer mercury__string__Start_31;
#line 4634 "string.m"
    MR_Integer mercury__string__End_32;
#line 4634 "string.m"
    MR_Integer mercury__string__V_34_34;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_31 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_31 = mercury__string__Start_9;
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20178 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_34_34  = Length;
#line 2409 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__S_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__A_11, &mercury__string__B_12);
    }
#line 4634 "string.m"
    return mercury__string__B_12;
#line 4634 "string.m"
  }
#line 914 "string.m"
}

#line 905 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_5(
#line 905 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 905 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 905 "string.m"
  MR_Word mercury__string__Closure_7,
#line 905 "string.m"
  MR_String mercury__string__String_8,
#line 905 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 905 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 905 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 905 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15,
#line 905 "string.m"
  MR_Cont mercury__string__cont,
#line 905 "string.m"
  void * mercury__string__cont_env_ptr)
#line 905 "string.m"
{
#line 4625 "string.m"
  {
#line 4625 "string.m"
    MR_bool mercury__string__succeeded;
#line 4625 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20252 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2409 "string.m"
}
#line 4627 "string.m"
    {
#line 4627 "string.m"
      mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4627 "string.m"
      return;
    }
#line 4625 "string.m"
  }
#line 905 "string.m"
}

#line 903 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_4(
#line 903 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 903 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 903 "string.m"
  MR_Word mercury__string__Closure_7,
#line 903 "string.m"
  MR_String mercury__string__String_8,
#line 903 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 903 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 903 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 903 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15,
#line 903 "string.m"
  MR_Cont mercury__string__cont,
#line 903 "string.m"
  void * mercury__string__cont_env_ptr)
#line 903 "string.m"
{
#line 4625 "string.m"
  {
#line 4625 "string.m"
    MR_bool mercury__string__succeeded;
#line 4625 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20316 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2409 "string.m"
}
#line 4627 "string.m"
    {
#line 4627 "string.m"
      mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4627 "string.m"
      return;
    }
#line 4625 "string.m"
  }
#line 903 "string.m"
}

#line 901 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_6_p_3(
#line 901 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 901 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 901 "string.m"
  MR_Word mercury__string__Closure_7,
#line 901 "string.m"
  MR_String mercury__string__String_8,
#line 901 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 901 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 901 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 901 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 901 "string.m"
{
#line 4625 "string.m"
  {
#line 4625 "string.m"
    MR_bool mercury__string__succeeded;
#line 4625 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20376 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2409 "string.m"
}
#line 4627 "string.m"
    {
#line 4627 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
    }
#line 4625 "string.m"
    return mercury__string__succeeded;
#line 4625 "string.m"
  }
#line 901 "string.m"
}

#line 899 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_2(
#line 899 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 899 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 899 "string.m"
  MR_Word mercury__string__Closure_7,
#line 899 "string.m"
  MR_String mercury__string__String_8,
#line 899 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 899 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 899 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 899 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 899 "string.m"
{
#line 4625 "string.m"
  {
#line 4625 "string.m"
    MR_bool mercury__string__succeeded;
#line 4625 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20436 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2409 "string.m"
}
#line 4627 "string.m"
    {
#line 4627 "string.m"
      mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4627 "string.m"
      return;
    }
#line 4625 "string.m"
  }
#line 899 "string.m"
}

#line 897 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_1(
#line 897 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 897 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 897 "string.m"
  MR_Word mercury__string__Closure_7,
#line 897 "string.m"
  MR_String mercury__string__String_8,
#line 897 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 897 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 897 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 897 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 897 "string.m"
{
#line 4625 "string.m"
  {
#line 4625 "string.m"
    MR_bool mercury__string__succeeded;
#line 4625 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20496 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2409 "string.m"
}
#line 4627 "string.m"
    {
#line 4627 "string.m"
      mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4627 "string.m"
      return;
    }
#line 4625 "string.m"
  }
#line 897 "string.m"
}

#line 895 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_0(
#line 895 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 895 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 895 "string.m"
  MR_Word mercury__string__Closure_7,
#line 895 "string.m"
  MR_String mercury__string__String_8,
#line 895 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 895 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 895 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 895 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 895 "string.m"
{
#line 4625 "string.m"
  {
#line 4625 "string.m"
    MR_bool mercury__string__succeeded;
#line 4625 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20556 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2409 "string.m"
}
#line 4627 "string.m"
    {
#line 4627 "string.m"
      mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4627 "string.m"
      return;
    }
#line 4625 "string.m"
  }
#line 895 "string.m"
}

#line 889 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_4(
#line 889 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 889 "string.m"
  MR_Word mercury__string__Closure_5,
#line 889 "string.m"
  MR_String mercury__string__String_6,
#line 889 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 889 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10,
#line 889 "string.m"
  MR_Cont mercury__string__cont,
#line 889 "string.m"
  void * mercury__string__cont_env_ptr)
#line 889 "string.m"
{
#line 4621 "string.m"
  {
#line 4621 "string.m"
    MR_bool mercury__string__succeeded;
#line 4621 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20614 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2409 "string.m"
}
#line 4623 "string.m"
    {
#line 4623 "string.m"
      mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4623 "string.m"
      return;
    }
#line 4621 "string.m"
  }
#line 889 "string.m"
}

#line 888 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_3(
#line 888 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 888 "string.m"
  MR_Word mercury__string__Closure_5,
#line 888 "string.m"
  MR_String mercury__string__String_6,
#line 888 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 888 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10,
#line 888 "string.m"
  MR_Cont mercury__string__cont,
#line 888 "string.m"
  void * mercury__string__cont_env_ptr)
#line 888 "string.m"
{
#line 4621 "string.m"
  {
#line 4621 "string.m"
    MR_bool mercury__string__succeeded;
#line 4621 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20672 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2409 "string.m"
}
#line 4623 "string.m"
    {
#line 4623 "string.m"
      mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4623 "string.m"
      return;
    }
#line 4621 "string.m"
  }
#line 888 "string.m"
}

#line 887 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_4_p_2(
#line 887 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 887 "string.m"
  MR_Word mercury__string__Closure_5,
#line 887 "string.m"
  MR_String mercury__string__String_6,
#line 887 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 887 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 887 "string.m"
{
#line 4621 "string.m"
  {
#line 4621 "string.m"
    MR_bool mercury__string__succeeded;
#line 4621 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20726 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2409 "string.m"
}
#line 4623 "string.m"
    {
#line 4623 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
    }
#line 4621 "string.m"
    return mercury__string__succeeded;
#line 4621 "string.m"
  }
#line 887 "string.m"
}

#line 886 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_1(
#line 886 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 886 "string.m"
  MR_Word mercury__string__Closure_5,
#line 886 "string.m"
  MR_String mercury__string__String_6,
#line 886 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 886 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 886 "string.m"
{
#line 4621 "string.m"
  {
#line 4621 "string.m"
    MR_bool mercury__string__succeeded;
#line 4621 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20780 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2409 "string.m"
}
#line 4623 "string.m"
    {
#line 4623 "string.m"
      mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
#line 4623 "string.m"
      return;
    }
#line 4621 "string.m"
  }
#line 886 "string.m"
}

#line 885 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_0(
#line 885 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 885 "string.m"
  MR_Word mercury__string__Closure_5,
#line 885 "string.m"
  MR_String mercury__string__String_6,
#line 885 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 885 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 885 "string.m"
{
#line 4621 "string.m"
  {
#line 4621 "string.m"
    MR_bool mercury__string__succeeded;
#line 4621 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20834 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2409 "string.m"
}
#line 4623 "string.m"
    {
#line 4623 "string.m"
      mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
#line 4623 "string.m"
      return;
    }
#line 4621 "string.m"
  }
#line 885 "string.m"
}

#line 883 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_3_f_0(
#line 883 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 883 "string.m"
  MR_Word mercury__string__F_5,
#line 883 "string.m"
  MR_String mercury__string__S_6,
#line 883 "string.m"
  MR_Box mercury__string__A_7)
#line 883 "string.m"
{
#line 4617 "string.m"
  {
#line 4617 "string.m"
    MR_bool mercury__string__succeeded;
#line 4617 "string.m"
    MR_Box mercury__string__B_8;
#line 4617 "string.m"
    MR_Integer mercury__string__Length_25;
#line 4617 "string.m"
    MR_Integer mercury__string__End_39;
#line 4617 "string.m"
    MR_Integer mercury__string__V_41_41;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20892 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_25  = Length;
#line 2409 "string.m"
}
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 20912 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_41_41  = Length;
#line 2409 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__S_6, (MR_Integer) 0, mercury__string__End_39, mercury__string__A_7, &mercury__string__B_8);
    }
#line 4617 "string.m"
    return mercury__string__B_8;
#line 4617 "string.m"
  }
#line 883 "string.m"
}

#line 866 "string.m"
MR_String MR_CALL 
mercury__string__word_wrap_separator_3_f_0(
#line 866 "string.m"
  MR_String mercury__string__Str_5,
#line 866 "string.m"
  MR_Integer mercury__string__N_6,
#line 866 "string.m"
  MR_String mercury__string__WordSep0_7)
#line 866 "string.m"
{
#line 4490 "string.m"
  {
#line 4490 "string.m"
    MR_bool mercury__string__succeeded;
#line 4490 "string.m"
    MR_String mercury__string__Wrapped_8;
#line 4490 "string.m"
    MR_Word mercury__string__TypeCtorInfo_20_20;
#line 4490 "string.m"
    MR_Word mercury__string__Words_9;
#line 4490 "string.m"
    MR_Integer mercury__string__SepLen0_10;
#line 4490 "string.m"
    MR_String mercury__string__WordSep_11;
#line 4490 "string.m"
    MR_Integer mercury__string__SepLen_12;
#line 4490 "string.m"
    MR_Word mercury__string__RevWordsSpacesNls0_15;
#line 4490 "string.m"
    MR_Word mercury__string__RevWordsSpacesNls_16;
#line 4490 "string.m"
    MR_Word mercury__string__WordsSpacesNls_17;
#line 4490 "string.m"
    MR_Integer mercury__string__WordStart_25;

#line 4146 "string.m"
    {
#line 4146 "string.m"
      mercury__string__next_boundary__ho35_4_p_0(mercury__string__Str_5, (MR_Integer) 0, &mercury__string__WordStart_25);
    }
#line 4147 "string.m"
    {
#line 4147 "string.m"
      mercury__string__words_loop__ho36_4_p_0(mercury__string__Str_5, mercury__string__WordStart_25, &mercury__string__Words_9);
    }
#line 2469 "string.m"
    {
#line 2469 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__WordSep0_7, &mercury__string__SepLen0_10);
    }
#line 4493 "string.m"
    mercury__string__succeeded = (mercury__string__SepLen0_10 < mercury__string__N_6);
#line 4496 "string.m"
    if (mercury__string__succeeded)
#line 4494 "string.m"
      {
#line 4494 "string.m"
        mercury__string__WordSep_11 = mercury__string__WordSep0_7;
#line 4495 "string.m"
        mercury__string__SepLen_12 = mercury__string__SepLen0_10;
#line 4494 "string.m"
      }
#line 4496 "string.m"
    else
#line 4497 "string.m"
      {
#line 4497 "string.m"
        mercury__string__WordSep_11 = (MR_String) "";
#line 4498 "string.m"
        mercury__string__SepLen_12 = (MR_Integer) 0;
#line 4497 "string.m"
      }
#line 4502 "string.m"
    mercury__string__RevWordsSpacesNls0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4503 "string.m"
    {
#line 4503 "string.m"
      mercury__string__word_wrap_loop_7_p_0(mercury__string__Words_9, mercury__string__WordSep_11, mercury__string__SepLen_12, (MR_Integer) 1, mercury__string__N_6, mercury__string__RevWordsSpacesNls0_15, &mercury__string__RevWordsSpacesNls_16);
    }
#line 21021 "string.c"
    mercury__string__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4505 "string.m"
    {
#line 4505 "string.m"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_20_20, mercury__string__RevWordsSpacesNls_16, &mercury__string__WordsSpacesNls_17);
    }
#line 4506 "string.m"
    {
#line 4506 "string.m"
      return mercury__string__Wrapped_8 = mercury__string__append_list_1_f_0(mercury__string__WordsSpacesNls_17);
    }
#line 4490 "string.m"
    return mercury__string__Wrapped_8;
#line 4490 "string.m"
  }
#line 866 "string.m"
}

#line 857 "string.m"
MR_String MR_CALL 
mercury__string__word_wrap_2_f_0(
#line 857 "string.m"
  MR_String mercury__string__Str_4,
#line 857 "string.m"
  MR_Integer mercury__string__N_5)
#line 857 "string.m"
{
#line 4488 "string.m"
  {
#line 4488 "string.m"
    MR_bool mercury__string__succeeded;
#line 4488 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 4488 "string.m"
    {
#line 4488 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__word_wrap_separator_3_f_0(mercury__string__Str_4, mercury__string__N_5, (MR_String) "");
    }
#line 4488 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4488 "string.m"
  }
#line 857 "string.m"
}

#line 846 "string.m"
void MR_CALL 
mercury__string__replace_all_4_p_0(
#line 846 "string.m"
  MR_String mercury__string__Str_5,
#line 846 "string.m"
  MR_String mercury__string__Pat_6,
#line 846 "string.m"
  MR_String mercury__string__Subst_7,
#line 846 "string.m"
  MR_String * mercury__string__Result_8)
#line 846 "string.m"
{
#line 4464 "string.m"
  {
#line 4464 "string.m"
    MR_bool mercury__string__succeeded = (strcmp(mercury__string__Pat_6, (MR_String) "") == 0);

#line 4464 "string.m"
    if (mercury__string__succeeded)
#line 4461 "string.m"
      {
#line 4461 "string.m"
        MR_Word mercury__string__TypeCtorInfo_29_29;
#line 4461 "string.m"
        MR_Word mercury__string__Foldl_12;
#line 4461 "string.m"
        MR_Word mercury__string__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4461 "string.m"
        MR_Word mercury__string__V_22_22;
#line 4461 "string.m"
        MR_Word mercury__string__V_23_23;
#line 4461 "string.m"
        MR_Integer mercury__string__Length_51;
#line 4461 "string.m"
        MR_Integer mercury__string__End_67;
#line 4461 "string.m"
        MR_Integer mercury__string__V_69_69;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21120 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_51  = Length;
#line 2409 "string.m"
}
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21140 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_69_69  = Length;
#line 2409 "string.m"
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
#line 4632 "string.m"
        {
#line 4632 "string.m"
          mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0(mercury__string__Subst_7, mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_67, mercury__string__V_21_21, &mercury__string__Foldl_12);
        }
#line 21162 "string.c"
        mercury__string__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
        {
#line 118 "list.opt"
          mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_29_29, mercury__string__Foldl_12, &mercury__string__V_23_23);
        }
#line 4463 "string.m"
        {
#line 4463 "string.m"
          mercury__string__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4463 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_22_22, 0) = ((MR_Box) (mercury__string__Subst_7));
#line 4463 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_22_22, 1) = ((MR_Box) (mercury__string__V_23_23));
#line 4463 "string.m"
        }
#line 4463 "string.m"
        {
#line 4463 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__V_22_22);
        }
#line 4461 "string.m"
      }
#line 4464 "string.m"
    else
#line 4465 "string.m"
      {
#line 4465 "string.m"
        MR_Word mercury__string__TypeCtorInfo_30_30;
#line 4465 "string.m"
        MR_Integer mercury__string__PatLength_13;
#line 4465 "string.m"
        MR_Word mercury__string__ReversedChunks_14;
#line 4465 "string.m"
        MR_Word mercury__string__Chunks_15;
#line 4465 "string.m"
        MR_Word mercury__string__V_25_25;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21214 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PatLength_13  = Length;
#line 2409 "string.m"
}
#line 4466 "string.m"
        mercury__string__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4466 "string.m"
        {
#line 4466 "string.m"
          mercury__string__replace_all_loop_7_p_0(mercury__string__Str_5, mercury__string__Pat_6, mercury__string__Subst_7, mercury__string__PatLength_13, (MR_Integer) 0, mercury__string__V_25_25, &mercury__string__ReversedChunks_14);
        }
#line 21228 "string.c"
        mercury__string__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4467 "string.m"
        {
#line 4467 "string.m"
          mercury__string__Chunks_15 = mercury__list__reverse_1_f_0(mercury__string__TypeCtorInfo_30_30, mercury__string__ReversedChunks_14);
        }
#line 4468 "string.m"
        {
#line 4468 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__Chunks_15);
        }
#line 4465 "string.m"
      }
#line 4464 "string.m"
  }
#line 846 "string.m"
}

#line 845 "string.m"
MR_String MR_CALL 
mercury__string__replace_all_3_f_0(
#line 845 "string.m"
  MR_String mercury__string__S1_5,
#line 845 "string.m"
  MR_String mercury__string__S2_6,
#line 845 "string.m"
  MR_String mercury__string__S3_7)
#line 845 "string.m"
{
#line 4457 "string.m"
  {
#line 4457 "string.m"
    MR_bool mercury__string__succeeded;
#line 4457 "string.m"
    MR_String mercury__string__S4_8;

#line 4457 "string.m"
    {
#line 4457 "string.m"
      mercury__string__replace_all_4_p_0(mercury__string__S1_5, mercury__string__S2_6, mercury__string__S3_7, &mercury__string__S4_8);
    }
#line 4457 "string.m"
    return mercury__string__S4_8;
#line 4457 "string.m"
  }
#line 845 "string.m"
}

#line 838 "string.m"
MR_bool MR_CALL 
mercury__string__replace_4_p_0(
#line 838 "string.m"
  MR_String mercury__string__Str_5,
#line 838 "string.m"
  MR_String mercury__string__Pat_6,
#line 838 "string.m"
  MR_String mercury__string__Subst_7,
#line 838 "string.m"
  MR_String * mercury__string__Result_8)
#line 838 "string.m"
{
#line 4445 "string.m"
  {
#line 4445 "string.m"
    MR_bool mercury__string__succeeded;
#line 4445 "string.m"
    MR_Integer mercury__string__Index_9;
#line 4445 "string.m"
    MR_String mercury__string__Initial_10;
#line 4445 "string.m"
    MR_Integer mercury__string__BeginAt_11;
#line 4445 "string.m"
    MR_Integer mercury__string__EndAt_12;
#line 4445 "string.m"
    MR_String mercury__string__Final_13;
#line 4445 "string.m"
    MR_Integer mercury__string__V_14_14;
#line 4445 "string.m"
    MR_Integer mercury__string__V_15_15;
#line 4445 "string.m"
    MR_Word mercury__string__V_16_16;
#line 4445 "string.m"
    MR_Word mercury__string__V_17_17;
#line 4445 "string.m"
    MR_Word mercury__string__V_18_18;
#line 4445 "string.m"
    MR_Word mercury__string__V_19_19;

#line 3011 "string.m"
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
#line 3011 "string.m"
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
#line 21346 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_9  = Index;
#line 3011 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4445 "string.m"
    if (mercury__string__succeeded)
#line 4445 "string.m"
      {
#line 4448 "string.m"
        mercury__string__V_14_14 = (MR_Integer) 0;
#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 21384 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_10  = SubString;
#line 4109 "string.m"
}
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21404 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_15_15  = Length;
#line 2409 "string.m"
}
#line 4450 "string.m"
        mercury__string__BeginAt_11 = (mercury__string__Index_9 + mercury__string__V_15_15);
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21426 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndAt_12  = Length;
#line 2409 "string.m"
}
#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 21455 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Final_13  = SubString;
#line 4109 "string.m"
}
#line 4454 "string.m"
        mercury__string__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4454 "string.m"
        {
#line 4454 "string.m"
          mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4454 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Final_13));
#line 4454 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__V_19_19));
#line 4454 "string.m"
        }
#line 4454 "string.m"
        {
#line 4454 "string.m"
          mercury__string__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4454 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_17_17, 0) = ((MR_Box) (mercury__string__Subst_7));
#line 4454 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_17_17, 1) = ((MR_Box) (mercury__string__V_18_18));
#line 4454 "string.m"
        }
#line 4454 "string.m"
        {
#line 4454 "string.m"
          mercury__string__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4454 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_16_16, 0) = ((MR_Box) (mercury__string__Initial_10));
#line 4454 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_16_16, 1) = ((MR_Box) (mercury__string__V_17_17));
#line 4454 "string.m"
        }
#line 4454 "string.m"
        {
#line 4454 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__V_16_16);
        }
#line 4454 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 4445 "string.m"
      }
#line 4445 "string.m"
    return mercury__string__succeeded;
#line 4445 "string.m"
  }
#line 838 "string.m"
}

#line 829 "string.m"
MR_String MR_CALL 
mercury__string__rstrip_pred_2_f_0(
#line 829 "string.m"
  MR_Word mercury__string__P_4,
#line 829 "string.m"
  MR_String mercury__string__S_5)
#line 829 "string.m"
{
#line 4439 "string.m"
  {
#line 4439 "string.m"
    MR_bool mercury__string__succeeded;
#line 4439 "string.m"
    MR_String mercury__string__HeadVar__3_3;
#line 4439 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4439 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4439 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4439 "string.m"
    MR_Integer mercury__string__End_16;
#line 4439 "string.m"
    MR_Integer mercury__string__Index_17;
#line 3926 "string.m"
    MR_String mercury__string___RightString_29;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21551 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2409 "string.m"
}
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21571 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_16  = Length;
#line 2409 "string.m"
}
#line 2986 "string.m"
    {
#line 2986 "string.m"
      mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_16, &mercury__string__Index_17);
    }
#line 2984 "string.m"
    mercury__string__V_8_8 = (mercury__string__End_16 - mercury__string__Index_17);
#line 4439 "string.m"
    mercury__string__V_6_6 = (mercury__string__V_7_7 - mercury__string__V_8_8);
#line 3926 "string.m"
    {
#line 3926 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__V_6_6, &mercury__string__HeadVar__3_3, &mercury__string___RightString_29);
    }
#line 4439 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4439 "string.m"
  }
#line 829 "string.m"
}

#line 821 "string.m"
MR_String MR_CALL 
mercury__string__lstrip_pred_2_f_0(
#line 821 "string.m"
  MR_Word mercury__string__P_4,
#line 821 "string.m"
  MR_String mercury__string__S_5)
#line 821 "string.m"
{
#line 4441 "string.m"
  {
#line 4441 "string.m"
    MR_bool mercury__string__succeeded;
#line 4441 "string.m"
    MR_String mercury__string__HeadVar__3_3;
#line 4441 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4441 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4441 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4441 "string.m"
    MR_Integer mercury__string__Length_24;
#line 4441 "string.m"
    MR_Integer mercury__string__LeftCount_25;
#line 3940 "string.m"
    MR_String mercury__string___LeftString_26;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21640 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2409 "string.m"
}
#line 2969 "string.m"
    {
#line 2969 "string.m"
      mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__V_8_8);
    }
#line 4441 "string.m"
    mercury__string__V_6_6 = (mercury__string__V_7_7 - mercury__string__V_8_8);
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21667 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_24  = Length;
#line 2409 "string.m"
}
#line 3939 "string.m"
    mercury__string__LeftCount_25 = (mercury__string__Length_24 - mercury__string__V_6_6);
#line 3940 "string.m"
    {
#line 3940 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__LeftCount_25, &mercury__string___LeftString_26, &mercury__string__HeadVar__3_3);
    }
#line 4441 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4441 "string.m"
  }
#line 821 "string.m"
}

#line 814 "string.m"
MR_String MR_CALL 
mercury__string__strip_1_f_0(
#line 814 "string.m"
  MR_String mercury__string__S0_3)
#line 814 "string.m"
{
#line 4430 "string.m"
  {
#line 4430 "string.m"
    MR_bool mercury__string__succeeded;
#line 4430 "string.m"
    MR_String mercury__string__S_4;
#line 4430 "string.m"
    MR_Integer mercury__string__L_5;
#line 4430 "string.m"
    MR_Integer mercury__string__R_6;
#line 4430 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4430 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4430 "string.m"
    MR_Integer mercury__string__End_21;
#line 4430 "string.m"
    MR_Integer mercury__string__Index_22;

#line 2969 "string.m"
    {
#line 2969 "string.m"
      mercury__string__prefix_length_loop__ho32_4_p_0(mercury__string__S0_3, (MR_Integer) 0, &mercury__string__L_5);
    }
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21732 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_21  = Length;
#line 2409 "string.m"
}
#line 2986 "string.m"
    {
#line 2986 "string.m"
      mercury__string__suffix_length_loop__ho33_4_p_0(mercury__string__S0_3, mercury__string__End_21, &mercury__string__Index_22);
    }
#line 2984 "string.m"
    mercury__string__R_6 = (mercury__string__End_21 - mercury__string__Index_22);
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21759 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2409 "string.m"
}
#line 4433 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__R_6);
#line 3953 "string.m"
    {
#line 3953 "string.m"
      mercury__string__between_4_p_0(mercury__string__S0_3, mercury__string__L_5, mercury__string__V_9_9, &mercury__string__S_4);
    }
#line 4430 "string.m"
    return mercury__string__S_4;
#line 4430 "string.m"
  }
#line 814 "string.m"
}

#line 807 "string.m"
MR_String MR_CALL 
mercury__string__rstrip_1_f_0(
#line 807 "string.m"
  MR_String mercury__string__S_3)
#line 807 "string.m"
{
#line 4435 "string.m"
  {
#line 4435 "string.m"
    MR_bool mercury__string__succeeded;
#line 4435 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 4435 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4435 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4435 "string.m"
    MR_Integer mercury__string__V_11_11;
#line 4435 "string.m"
    MR_Integer mercury__string__End_20;
#line 4435 "string.m"
    MR_Integer mercury__string__Index_21;
#line 3926 "string.m"
    MR_String mercury__string___RightString_33;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21819 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2409 "string.m"
}
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21839 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_20  = Length;
#line 2409 "string.m"
}
#line 2986 "string.m"
    {
#line 2986 "string.m"
      mercury__string__suffix_length_loop__ho33_4_p_0(mercury__string__S_3, mercury__string__End_20, &mercury__string__Index_21);
    }
#line 2984 "string.m"
    mercury__string__V_11_11 = (mercury__string__End_20 - mercury__string__Index_21);
#line 4439 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 3926 "string.m"
    {
#line 3926 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__V_9_9, &mercury__string__HeadVar__2_2, &mercury__string___RightString_33);
    }
#line 4435 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4435 "string.m"
  }
#line 807 "string.m"
}

#line 800 "string.m"
MR_String MR_CALL 
mercury__string__lstrip_1_f_0(
#line 800 "string.m"
  MR_String mercury__string__S_3)
#line 800 "string.m"
{
#line 4437 "string.m"
  {
#line 4437 "string.m"
    MR_bool mercury__string__succeeded;
#line 4437 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 4437 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4437 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4437 "string.m"
    MR_Integer mercury__string__V_11_11;
#line 4437 "string.m"
    MR_Integer mercury__string__Length_28;
#line 4437 "string.m"
    MR_Integer mercury__string__LeftCount_29;
#line 3940 "string.m"
    MR_String mercury__string___LeftString_30;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21906 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2409 "string.m"
}
#line 2969 "string.m"
    {
#line 2969 "string.m"
      mercury__string__prefix_length_loop__ho32_4_p_0(mercury__string__S_3, (MR_Integer) 0, &mercury__string__V_11_11);
    }
#line 4441 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21933 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_28  = Length;
#line 2409 "string.m"
}
#line 3939 "string.m"
    mercury__string__LeftCount_29 = (mercury__string__Length_28 - mercury__string__V_9_9);
#line 3940 "string.m"
    {
#line 3940 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__LeftCount_29, &mercury__string___LeftString_30, &mercury__string__HeadVar__2_2);
    }
#line 4437 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4437 "string.m"
  }
#line 800 "string.m"
}

#line 793 "string.m"
MR_String MR_CALL 
mercury__string__chomp_1_f_0(
#line 793 "string.m"
  MR_String mercury__string__S_3)
#line 793 "string.m"
{
#line 4426 "string.m"
  {
#line 4426 "string.m"
    MR_bool mercury__string__succeeded;
#line 4426 "string.m"
    MR_String mercury__string__Chomp_4;
#line 4426 "string.m"
    MR_Integer mercury__string__Offset_5;
#line 4424 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4424 "string.m"
    MR_Char mercury__string__V_8_8;
#line 4424 "string.m"
    MR_Integer mercury__string__Len_18;
#line 4424 "string.m"
    MR_Integer mercury__string__V_19_19;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 21991 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_6_6  = Length;
#line 2409 "string.m"
}
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 22011 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_18  = Length;
#line 2409 "string.m"
}
#line 2032 "string.m"
    mercury__string__V_19_19 = (mercury__string__V_6_6 - (MR_Integer) 1);
#line 2143 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__V_19_19 ;
	Length =  mercury__string__Len_18 ;
		{
#line 2143 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 22042 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2143 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4424 "string.m"
    if (mercury__string__succeeded)
#line 4424 "string.m"
      {
#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 22083 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Offset_5  = PrevIndex;
	 mercury__string__V_8_8  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4424 "string.m"
        if (mercury__string__succeeded)
#line 4424 "string.m"
          mercury__string__succeeded = ((MR_Char) 10 == mercury__string__V_8_8);
#line 4424 "string.m"
      }
#line 4426 "string.m"
    if (mercury__string__succeeded)
#line 3926 "string.m"
      {
#line 3926 "string.m"
        MR_String mercury__string___RightString_35;

#line 3926 "string.m"
        {
#line 3926 "string.m"
          mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__Offset_5, &mercury__string__Chomp_4, &mercury__string___RightString_35);
        }
#line 3926 "string.m"
      }
#line 4426 "string.m"
    else
#line 4427 "string.m"
      mercury__string__Chomp_4 = mercury__string__S_3;
#line 4426 "string.m"
    return mercury__string__Chomp_4;
#line 4426 "string.m"
  }
#line 793 "string.m"
}

#line 787 "string.m"
void MR_CALL 
mercury__string__pad_right_4_p_0(
#line 787 "string.m"
  MR_String mercury__string__String0_5,
#line 787 "string.m"
  MR_Char mercury__string__PadChar_6,
#line 787 "string.m"
  MR_Integer mercury__string__Width_7,
#line 787 "string.m"
  MR_String * mercury__string__String_8)
#line 787 "string.m"
{
#line 4413 "string.m"
  {
#line 4413 "string.m"
    MR_bool mercury__string__succeeded;
#line 4413 "string.m"
    MR_Integer mercury__string__Length_9;

#line 4414 "string.m"
    {
#line 4414 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    }
#line 4415 "string.m"
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
#line 4419 "string.m"
    if (mercury__string__succeeded)
#line 4416 "string.m"
      {
#line 4416 "string.m"
        MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
#line 4416 "string.m"
        MR_String mercury__string__PadString_11;

#line 4417 "string.m"
        {
#line 4417 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
        }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_right_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__String0_5 ;
	S2 =  mercury__string__PadString_11 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 22186 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
#line 3219 "string.m"
}
#line 4416 "string.m"
      }
#line 4419 "string.m"
    else
#line 4420 "string.m"
      *mercury__string__String_8 = mercury__string__String0_5;
#line 4413 "string.m"
  }
#line 787 "string.m"
}

#line 786 "string.m"
MR_String MR_CALL 
mercury__string__pad_right_3_f_0(
#line 786 "string.m"
  MR_String mercury__string__S1_5,
#line 786 "string.m"
  MR_Char mercury__string__C_6,
#line 786 "string.m"
  MR_Integer mercury__string__N_7)
#line 786 "string.m"
{
#line 4413 "string.m"
  {
#line 4413 "string.m"
    MR_bool mercury__string__succeeded;
#line 4413 "string.m"
    MR_String mercury__string__S2_8;
#line 4413 "string.m"
    MR_Integer mercury__string__Length_13;

#line 4414 "string.m"
    {
#line 4414 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    }
#line 4415 "string.m"
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
#line 4419 "string.m"
    if (mercury__string__succeeded)
#line 4416 "string.m"
      {
#line 4416 "string.m"
        MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
#line 4416 "string.m"
        MR_String mercury__string__PadString_15;

#line 4417 "string.m"
        {
#line 4417 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
        }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_right_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_5 ;
	S2 =  mercury__string__PadString_15 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 22265 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
#line 3219 "string.m"
}
#line 4416 "string.m"
      }
#line 4419 "string.m"
    else
#line 4420 "string.m"
      mercury__string__S2_8 = mercury__string__S1_5;
#line 4413 "string.m"
    return mercury__string__S2_8;
#line 4413 "string.m"
  }
#line 786 "string.m"
}

#line 778 "string.m"
void MR_CALL 
mercury__string__pad_left_4_p_0(
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
#line 4400 "string.m"
  {
#line 4400 "string.m"
    MR_bool mercury__string__succeeded;
#line 4400 "string.m"
    MR_Integer mercury__string__Length_9;

#line 4401 "string.m"
    {
#line 4401 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    }
#line 4402 "string.m"
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
#line 4406 "string.m"
    if (mercury__string__succeeded)
#line 4403 "string.m"
      {
#line 4403 "string.m"
        MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
#line 4403 "string.m"
        MR_String mercury__string__PadString_11;

#line 4404 "string.m"
        {
#line 4404 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
        }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_left_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_11 ;
	S2 =  mercury__string__String0_5 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 22346 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
#line 3219 "string.m"
}
#line 4403 "string.m"
      }
#line 4406 "string.m"
    else
#line 4407 "string.m"
      *mercury__string__String_8 = mercury__string__String0_5;
#line 4400 "string.m"
  }
#line 778 "string.m"
}

#line 777 "string.m"
MR_String MR_CALL 
mercury__string__pad_left_3_f_0(
#line 777 "string.m"
  MR_String mercury__string__S1_5,
#line 777 "string.m"
  MR_Char mercury__string__C_6,
#line 777 "string.m"
  MR_Integer mercury__string__N_7)
#line 777 "string.m"
{
#line 4400 "string.m"
  {
#line 4400 "string.m"
    MR_bool mercury__string__succeeded;
#line 4400 "string.m"
    MR_String mercury__string__S2_8;
#line 4400 "string.m"
    MR_Integer mercury__string__Length_13;

#line 4401 "string.m"
    {
#line 4401 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    }
#line 4402 "string.m"
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
#line 4406 "string.m"
    if (mercury__string__succeeded)
#line 4403 "string.m"
      {
#line 4403 "string.m"
        MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
#line 4403 "string.m"
        MR_String mercury__string__PadString_15;

#line 4404 "string.m"
        {
#line 4404 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
        }
#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_left_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_15 ;
	S2 =  mercury__string__S1_5 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 22425 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
#line 3219 "string.m"
}
#line 4403 "string.m"
      }
#line 4406 "string.m"
    else
#line 4407 "string.m"
      mercury__string__S2_8 = mercury__string__S1_5;
#line 4400 "string.m"
    return mercury__string__S2_8;
#line 4400 "string.m"
  }
#line 777 "string.m"
}

#line 769 "string.m"
MR_bool MR_CALL 
mercury__string__to_lower_2_p_1(
#line 769 "string.m"
  MR_String mercury__string__StrIn_3,
#line 769 "string.m"
  MR_String mercury__string__StrOut_4)
#line 769 "string.m"
{
#line 4383 "string.m"
  {
#line 4383 "string.m"
    MR_bool mercury__string__succeeded;
#line 4383 "string.m"
    MR_Word mercury__string__List_5;
#line 4383 "string.m"
    MR_Word mercury__string__ListLow_6;
#line 4383 "string.m"
    MR_String mercury__string__V_7_7;
#line 1451 "string.m"
    MR_String mercury__string__Str0_20;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1373 "string.m"
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
#line 22491 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1373 "string.m"
}
#line 4385 "string.m"
    {
#line 4385 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_5, &mercury__string__ListLow_6);
    }
#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_6, &mercury__string__Str0_20);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      mercury__string__V_7_7 = mercury__string__Str0_20;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1452 "string.m"
      }
#line 4386 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__StrOut_4, mercury__string__V_7_7) == 0);
#line 4383 "string.m"
    return mercury__string__succeeded;
#line 4383 "string.m"
  }
#line 769 "string.m"
}

#line 768 "string.m"
void MR_CALL 
mercury__string__to_lower_2_p_0(
#line 768 "string.m"
  MR_String mercury__string__StrIn_3,
#line 768 "string.m"
  MR_String * mercury__string__StrOut_4)
#line 768 "string.m"
{
#line 4383 "string.m"
  {
#line 4383 "string.m"
    MR_bool mercury__string__succeeded;
#line 4383 "string.m"
    MR_Word mercury__string__List_5;
#line 4383 "string.m"
    MR_Word mercury__string__ListLow_6;
#line 1451 "string.m"
    MR_String mercury__string__Str0_19;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1373 "string.m"
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
#line 22576 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1373 "string.m"
}
#line 4385 "string.m"
    {
#line 4385 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_5, &mercury__string__ListLow_6);
    }
#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_6, &mercury__string__Str0_19);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      *mercury__string__StrOut_4 = mercury__string__Str0_19;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1452 "string.m"
          return;
        }
#line 1452 "string.m"
      }
#line 4383 "string.m"
  }
#line 768 "string.m"
}

#line 766 "string.m"
MR_String MR_CALL 
mercury__string__to_lower_1_f_0(
#line 766 "string.m"
  MR_String mercury__string__S1_3)
#line 766 "string.m"
{
#line 4383 "string.m"
  {
#line 4383 "string.m"
    MR_bool mercury__string__succeeded;
#line 4383 "string.m"
    MR_String mercury__string__S2_4;
#line 4383 "string.m"
    MR_Word mercury__string__List_7;
#line 4383 "string.m"
    MR_Word mercury__string__ListLow_8;
#line 1451 "string.m"
    MR_String mercury__string__Str0_21;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S1_3 ;
		{
#line 1373 "string.m"
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
#line 22659 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_7  = CharList;
#line 1373 "string.m"
}
#line 4385 "string.m"
    {
#line 4385 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_7, &mercury__string__ListLow_8);
    }
#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_8, &mercury__string__Str0_21);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      mercury__string__S2_4 = mercury__string__Str0_21;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1452 "string.m"
      }
#line 4383 "string.m"
    return mercury__string__S2_4;
#line 4383 "string.m"
  }
#line 766 "string.m"
}

#line 761 "string.m"
MR_bool MR_CALL 
mercury__string__to_upper_2_p_1(
#line 761 "string.m"
  MR_String mercury__string__StrIn_3,
#line 761 "string.m"
  MR_String mercury__string__StrOut_4)
#line 761 "string.m"
{
#line 4368 "string.m"
  {
#line 4368 "string.m"
    MR_bool mercury__string__succeeded;
#line 4368 "string.m"
    MR_Word mercury__string__List_5;
#line 4368 "string.m"
    MR_Word mercury__string__ListUpp_6;
#line 4368 "string.m"
    MR_String mercury__string__V_7_7;
#line 1451 "string.m"
    MR_String mercury__string__Str0_20;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1373 "string.m"
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
#line 22744 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1373 "string.m"
}
#line 4370 "string.m"
    {
#line 4370 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_5, &mercury__string__ListUpp_6);
    }
#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_6, &mercury__string__Str0_20);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      mercury__string__V_7_7 = mercury__string__Str0_20;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1452 "string.m"
      }
#line 4371 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__StrOut_4, mercury__string__V_7_7) == 0);
#line 4368 "string.m"
    return mercury__string__succeeded;
#line 4368 "string.m"
  }
#line 761 "string.m"
}

#line 760 "string.m"
void MR_CALL 
mercury__string__to_upper_2_p_0(
#line 760 "string.m"
  MR_String mercury__string__StrIn_3,
#line 760 "string.m"
  MR_String * mercury__string__StrOut_4)
#line 760 "string.m"
{
#line 4368 "string.m"
  {
#line 4368 "string.m"
    MR_bool mercury__string__succeeded;
#line 4368 "string.m"
    MR_Word mercury__string__List_5;
#line 4368 "string.m"
    MR_Word mercury__string__ListUpp_6;
#line 1451 "string.m"
    MR_String mercury__string__Str0_19;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1373 "string.m"
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
#line 22829 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1373 "string.m"
}
#line 4370 "string.m"
    {
#line 4370 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_5, &mercury__string__ListUpp_6);
    }
#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_6, &mercury__string__Str0_19);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      *mercury__string__StrOut_4 = mercury__string__Str0_19;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1452 "string.m"
          return;
        }
#line 1452 "string.m"
      }
#line 4368 "string.m"
  }
#line 760 "string.m"
}

#line 758 "string.m"
MR_String MR_CALL 
mercury__string__to_upper_1_f_0(
#line 758 "string.m"
  MR_String mercury__string__S1_3)
#line 758 "string.m"
{
#line 4368 "string.m"
  {
#line 4368 "string.m"
    MR_bool mercury__string__succeeded;
#line 4368 "string.m"
    MR_String mercury__string__S2_4;
#line 4368 "string.m"
    MR_Word mercury__string__List_7;
#line 4368 "string.m"
    MR_Word mercury__string__ListUpp_8;
#line 1451 "string.m"
    MR_String mercury__string__Str0_21;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S1_3 ;
		{
#line 1373 "string.m"
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
#line 22912 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_7  = CharList;
#line 1373 "string.m"
}
#line 4370 "string.m"
    {
#line 4370 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_7, &mercury__string__ListUpp_8);
    }
#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_8, &mercury__string__Str0_21);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      mercury__string__S2_4 = mercury__string__Str0_21;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1452 "string.m"
      }
#line 4368 "string.m"
    return mercury__string__S2_4;
#line 4368 "string.m"
  }
#line 758 "string.m"
}

#line 753 "string.m"
void MR_CALL 
mercury__string__uncapitalize_first_2_p_0(
#line 753 "string.m"
  MR_String mercury__string__S0_3,
#line 753 "string.m"
  MR_String * mercury__string__S_4)
#line 753 "string.m"
{
#line 4361 "string.m"
  {
#line 4361 "string.m"
    MR_bool mercury__string__succeeded;
#line 4361 "string.m"
    MR_Char mercury__string__C_5;
#line 4361 "string.m"
    MR_String mercury__string__S1_6;

#line 3697 "string.m"
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
#line 3697 "string.m"
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
#line 22996 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
#line 3697 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4361 "string.m"
    if (mercury__string__succeeded)
#line 4359 "string.m"
      {
#line 4359 "string.m"
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
#line 3769 "string.m"
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__LowerC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
#line 3769 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 23048 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
#line 3769 "string.m"
}
#line 4359 "string.m"
      }
#line 4361 "string.m"
    else
#line 4362 "string.m"
      *mercury__string__S_4 = mercury__string__S0_3;
#line 4361 "string.m"
  }
#line 753 "string.m"
}

#line 752 "string.m"
MR_String MR_CALL 
mercury__string__uncapitalize_first_1_f_0(
#line 752 "string.m"
  MR_String mercury__string__S1_3)
#line 752 "string.m"
{
#line 4355 "string.m"
  {
#line 4355 "string.m"
    MR_bool mercury__string__succeeded;
#line 4355 "string.m"
    MR_String mercury__string__S2_4;

#line 4355 "string.m"
    {
#line 4355 "string.m"
      mercury__string__uncapitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    }
#line 4355 "string.m"
    return mercury__string__S2_4;
#line 4355 "string.m"
  }
#line 752 "string.m"
}

#line 747 "string.m"
void MR_CALL 
mercury__string__capitalize_first_2_p_0(
#line 747 "string.m"
  MR_String mercury__string__S0_3,
#line 747 "string.m"
  MR_String * mercury__string__S_4)
#line 747 "string.m"
{
#line 4350 "string.m"
  {
#line 4350 "string.m"
    MR_bool mercury__string__succeeded;
#line 4350 "string.m"
    MR_Char mercury__string__C_5;
#line 4350 "string.m"
    MR_String mercury__string__S1_6;

#line 3697 "string.m"
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
#line 3697 "string.m"
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
#line 23137 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
#line 3697 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4350 "string.m"
    if (mercury__string__succeeded)
#line 4348 "string.m"
      {
#line 4348 "string.m"
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
#line 3769 "string.m"
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__UpperC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
#line 3769 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 23189 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
#line 3769 "string.m"
}
#line 4348 "string.m"
      }
#line 4350 "string.m"
    else
#line 4351 "string.m"
      *mercury__string__S_4 = mercury__string__S0_3;
#line 4350 "string.m"
  }
#line 747 "string.m"
}

#line 746 "string.m"
MR_String MR_CALL 
mercury__string__capitalize_first_1_f_0(
#line 746 "string.m"
  MR_String mercury__string__S1_3)
#line 746 "string.m"
{
#line 4344 "string.m"
  {
#line 4344 "string.m"
    MR_bool mercury__string__succeeded;
#line 4344 "string.m"
    MR_String mercury__string__S2_4;

#line 4344 "string.m"
    {
#line 4344 "string.m"
      mercury__string__capitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    }
#line 4344 "string.m"
    return mercury__string__S2_4;
#line 4344 "string.m"
  }
#line 746 "string.m"
}

#line 736 "string.m"
MR_String MR_CALL 
mercury__string__remove_suffix_if_present_2_f_0(
#line 736 "string.m"
  MR_String mercury__string__Suffix_4,
#line 736 "string.m"
  MR_String mercury__string__String_5)
#line 736 "string.m"
{
#line 4329 "string.m"
  {
#line 4329 "string.m"
    MR_bool mercury__string__succeeded;
#line 4329 "string.m"
    MR_String mercury__string__Out_6;
#line 4329 "string.m"
    MR_Integer mercury__string__LeftCount_7;
#line 4329 "string.m"
    MR_String mercury__string__LeftString_8;
#line 4329 "string.m"
    MR_String mercury__string__RightString_9;
#line 4329 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4329 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 23272 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2409 "string.m"
}
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_4 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 23292 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2409 "string.m"
}
#line 4330 "string.m"
    mercury__string__LeftCount_7 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 4331 "string.m"
    {
#line 4331 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_5, mercury__string__LeftCount_7, &mercury__string__LeftString_8, &mercury__string__RightString_9);
    }
#line 4332 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__RightString_9, mercury__string__Suffix_4) == 0);
#line 4334 "string.m"
    if (mercury__string__succeeded)
#line 4333 "string.m"
      mercury__string__Out_6 = mercury__string__LeftString_8;
#line 4334 "string.m"
    else
#line 4335 "string.m"
      mercury__string__Out_6 = mercury__string__String_5;
#line 4329 "string.m"
    return mercury__string__Out_6;
#line 4329 "string.m"
  }
#line 736 "string.m"
}

#line 731 "string.m"
MR_String MR_CALL 
mercury__string__det_remove_suffix_2_f_0(
#line 731 "string.m"
  MR_String mercury__string__String_4,
#line 731 "string.m"
  MR_String mercury__string__Suffix_5)
#line 731 "string.m"
{
#line 4325 "string.m"
  {
#line 4325 "string.m"
    MR_bool mercury__string__succeeded;
#line 4325 "string.m"
    MR_String mercury__string__StringWithoutSuffix_6;
#line 4325 "string.m"
    MR_String mercury__string__StringWithoutSuffixPrime_7;

#line 4323 "string.m"
    {
#line 4323 "string.m"
      mercury__string__succeeded = mercury__string__remove_suffix_3_p_0(mercury__string__String_4, mercury__string__Suffix_5, &mercury__string__StringWithoutSuffixPrime_7);
    }
#line 4325 "string.m"
    if (mercury__string__succeeded)
#line 4324 "string.m"
      mercury__string__StringWithoutSuffix_6 = mercury__string__StringWithoutSuffixPrime_7;
#line 4325 "string.m"
    else
#line 4326 "string.m"
      {
#line 4326 "string.m"
        {
#line 4326 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_remove_suffix: string does not have given suffix");
        }
#line 4326 "string.m"
      }
#line 4325 "string.m"
    return mercury__string__StringWithoutSuffix_6;
#line 4325 "string.m"
  }
#line 731 "string.m"
}

#line 726 "string.m"
MR_bool MR_CALL 
mercury__string__remove_suffix_3_p_0(
#line 726 "string.m"
  MR_String mercury__string__String_4,
#line 726 "string.m"
  MR_String mercury__string__Suffix_5,
#line 726 "string.m"
  MR_String * mercury__string__StringWithoutSuffix_6)
#line 726 "string.m"
{
#line 4318 "string.m"
  {
#line 4318 "string.m"
    MR_bool mercury__string__succeeded;
#line 4318 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4318 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4318 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4318 "string.m"
    MR_Integer mercury__string__Len_12;
#line 4318 "string.m"
    MR_Integer mercury__string__PreLen_13;
#line 4318 "string.m"
    MR_Integer mercury__string__V_14_14;
#line 4318 "string.m"
    MR_Integer mercury__string__V_15_15;
#line 3926 "string.m"
    MR_String mercury__string___RightString_43;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 23413 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2409 "string.m"
}
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 23433 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_13  = Length;
#line 2409 "string.m"
}
#line 4278 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_13 <= mercury__string__Len_12);
#line 4318 "string.m"
    if (mercury__string__succeeded)
#line 4318 "string.m"
      {
#line 4279 "string.m"
        mercury__string__V_14_14 = (MR_Integer) 0;
#line 4279 "string.m"
        mercury__string__V_15_15 = (mercury__string__Len_12 - mercury__string__PreLen_13);
#line 4279 "string.m"
        {
#line 4279 "string.m"
          mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_4, mercury__string__Suffix_5, mercury__string__V_14_14, mercury__string__V_15_15, mercury__string__PreLen_13);
        }
#line 4318 "string.m"
        if (mercury__string__succeeded)
#line 4318 "string.m"
          {
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 23472 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = Length;
#line 2409 "string.m"
}
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 23492 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = Length;
#line 2409 "string.m"
}
#line 4320 "string.m"
            mercury__string__V_7_7 = (mercury__string__V_8_8 - mercury__string__V_9_9);
#line 3926 "string.m"
            {
#line 3926 "string.m"
              mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__V_7_7, mercury__string__StringWithoutSuffix_6, &mercury__string___RightString_43);
            }
#line 3926 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4318 "string.m"
          }
#line 4318 "string.m"
      }
#line 4318 "string.m"
    return mercury__string__succeeded;
#line 4318 "string.m"
  }
#line 726 "string.m"
}

#line 719 "string.m"
MR_String MR_CALL 
mercury__string__remove_prefix_if_present_2_f_0(
#line 719 "string.m"
  MR_String mercury__string__Prefix_4,
#line 719 "string.m"
  MR_String mercury__string__String_5)
#line 719 "string.m"
{
#line 4314 "string.m"
  {
#line 4314 "string.m"
    MR_bool mercury__string__succeeded;
#line 4314 "string.m"
    MR_String mercury__string__Out_6;
#line 4314 "string.m"
    MR_String mercury__string__Suffix_7;

#line 3167 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_prefix_if_present_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
#line 3167 "string.m"
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
#line 23567 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Suffix_7  = S2;
#line 3167 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4314 "string.m"
    if (mercury__string__succeeded)
#line 4313 "string.m"
      mercury__string__Out_6 = mercury__string__Suffix_7;
#line 4314 "string.m"
    else
#line 4315 "string.m"
      mercury__string__Out_6 = mercury__string__String_5;
#line 4314 "string.m"
    return mercury__string__Out_6;
#line 4314 "string.m"
  }
#line 719 "string.m"
}

#line 714 "string.m"
MR_bool MR_CALL 
mercury__string__remove_prefix_3_p_0(
#line 714 "string.m"
  MR_String mercury__string__Prefix_4,
#line 714 "string.m"
  MR_String mercury__string__String_5,
#line 714 "string.m"
  MR_String * mercury__string__Suffix_6)
#line 714 "string.m"
{
#line 3163 "string.m"
  {
#line 3163 "string.m"
    MR_bool mercury__string__succeeded;

#line 3167 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_prefix_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
#line 3167 "string.m"
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
#line 23638 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Suffix_6  = S2;
#line 3167 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3163 "string.m"
    return mercury__string__succeeded;
#line 3163 "string.m"
  }
#line 714 "string.m"
}

#line 707 "string.m"
void MR_CALL 
mercury__string__suffix_2_p_1(
#line 707 "string.m"
  MR_String mercury__string__String_1,
#line 707 "string.m"
  MR_String * mercury__string__Suffix_2,
#line 707 "string.m"
  MR_Cont mercury__string__cont,
#line 707 "string.m"
  void * mercury__string__cont_env_ptr)
#line 707 "string.m"
{
#line 4280 "string.m"
  {
#line 4280 "string.m"
    MR_bool mercury__string__succeeded;
#line 4280 "string.m"
    MR_Integer mercury__string__Len_11;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 23688 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_11  = Length;
#line 2409 "string.m"
}
#line 4282 "string.m"
    {
#line 4282 "string.m"
      mercury__string__suffix_2_ioii_4_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__Len_11, mercury__string__Len_11, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4282 "string.m"
      return;
    }
#line 4280 "string.m"
  }
#line 707 "string.m"
}

#line 706 "string.m"
MR_bool MR_CALL 
mercury__string__suffix_2_p_0(
#line 706 "string.m"
  MR_String mercury__string__String_1,
#line 706 "string.m"
  MR_String mercury__string__Suffix_2)
#line 706 "string.m"
{
#line 4275 "string.m"
  {
#line 4275 "string.m"
    MR_bool mercury__string__succeeded;
#line 4275 "string.m"
    MR_Integer mercury__string__Len_5;
#line 4275 "string.m"
    MR_Integer mercury__string__PreLen_6;
#line 4275 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4275 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 23742 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
#line 2409 "string.m"
}
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_2 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 23762 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
#line 2409 "string.m"
}
#line 4278 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
#line 4275 "string.m"
    if (mercury__string__succeeded)
#line 4275 "string.m"
      {
#line 4279 "string.m"
        mercury__string__V_7_7 = (MR_Integer) 0;
#line 4279 "string.m"
        mercury__string__V_8_8 = (mercury__string__Len_5 - mercury__string__PreLen_6);
#line 4279 "string.m"
        {
#line 4279 "string.m"
          return mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__V_7_7, mercury__string__V_8_8, mercury__string__PreLen_6);
        }
#line 4275 "string.m"
      }
#line 4275 "string.m"
    return mercury__string__succeeded;
#line 4275 "string.m"
  }
#line 706 "string.m"
}

#line 700 "string.m"
void MR_CALL 
mercury__string__prefix_2_p_1(
#line 700 "string.m"
  MR_String mercury__string__String_1,
#line 700 "string.m"
  MR_String * mercury__string__Prefix_2,
#line 700 "string.m"
  MR_Cont mercury__string__cont,
#line 700 "string.m"
  void * mercury__string__cont_env_ptr)
#line 700 "string.m"
{
#line 4249 "string.m"
  {
#line 4249 "string.m"
    MR_bool mercury__string__succeeded;

#line 4250 "string.m"
    {
#line 4250 "string.m"
      mercury__string__prefix_2_ioi_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, (MR_Integer) 0, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4250 "string.m"
      return;
    }
#line 4249 "string.m"
  }
#line 700 "string.m"
}

#line 699 "string.m"
MR_bool MR_CALL 
mercury__string__prefix_2_p_0(
#line 699 "string.m"
  MR_String mercury__string__String_1,
#line 699 "string.m"
  MR_String mercury__string__Prefix_2)
#line 699 "string.m"
{
#line 4244 "string.m"
  {
#line 4244 "string.m"
    MR_bool mercury__string__succeeded;
#line 4244 "string.m"
    MR_Integer mercury__string__Len_5;
#line 4244 "string.m"
    MR_Integer mercury__string__PreLen_6;
#line 4244 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4244 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 23858 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
#line 2409 "string.m"
}
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Prefix_2 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 23878 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
#line 2409 "string.m"
}
#line 4247 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
#line 4244 "string.m"
    if (mercury__string__succeeded)
#line 4244 "string.m"
      {
#line 4248 "string.m"
        mercury__string__V_8_8 = (MR_Integer) 1;
#line 4248 "string.m"
        mercury__string__V_7_7 = (mercury__string__PreLen_6 - mercury__string__V_8_8);
#line 4248 "string.m"
        {
#line 4248 "string.m"
          return mercury__string__succeeded = mercury__string__prefix_2_iii_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, mercury__string__V_7_7);
        }
#line 4244 "string.m"
      }
#line 4244 "string.m"
    return mercury__string__succeeded;
#line 4244 "string.m"
  }
#line 699 "string.m"
}

#line 688 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_string_2_f_0(
#line 688 "string.m"
  MR_String mercury__string__Needle_4,
#line 688 "string.m"
  MR_String mercury__string__Total_5)
#line 688 "string.m"
{
#line 4221 "string.m"
  {
#line 4221 "string.m"
    MR_bool mercury__string__succeeded;
#line 4221 "string.m"
    MR_Word mercury__string__HeadVar__3_3;
#line 4221 "string.m"
    MR_Integer mercury__string__V_7_7;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Needle_4 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 23940 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2409 "string.m"
}
#line 4222 "string.m"
    {
#line 4222 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__split_at_string_loop_4_f_0((MR_Integer) 0, mercury__string__V_7_7, mercury__string__Needle_4, mercury__string__Total_5);
    }
#line 4221 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4221 "string.m"
  }
#line 688 "string.m"
}

#line 678 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_char_2_f_0(
#line 678 "string.m"
  MR_Char mercury__string__C_4,
#line 678 "string.m"
  MR_String mercury__string__String_5)
#line 678 "string.m"
{
#line 4218 "string.m"
  {
#line 4218 "string.m"
    MR_bool mercury__string__succeeded;
#line 4218 "string.m"
    MR_Word mercury__string__HeadVar__3_3;
#line 4218 "string.m"
    MR_Integer mercury__string__Len_12;
#line 4218 "string.m"
    MR_Word mercury__string__V_14_14;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_char_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 23992 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2409 "string.m"
}
#line 4188 "string.m"
    mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4188 "string.m"
    {
#line 4188 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0(mercury__string__C_4, mercury__string__String_5, mercury__string__Len_12, mercury__string__Len_12, mercury__string__V_14_14, &mercury__string__HeadVar__3_3);
    }
#line 4218 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4218 "string.m"
  }
#line 678 "string.m"
}

#line 673 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_separator_2_f_0(
#line 673 "string.m"
  MR_Word mercury__string__DelimP_4,
#line 673 "string.m"
  MR_String mercury__string__String_5)
#line 673 "string.m"
{
#line 4186 "string.m"
  {
#line 4186 "string.m"
    MR_bool mercury__string__succeeded;
#line 4186 "string.m"
    MR_Word mercury__string__Substrings_6;
#line 4186 "string.m"
    MR_Integer mercury__string__Len_7;
#line 4186 "string.m"
    MR_Word mercury__string__V_9_9;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_separator_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 24046 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
#line 2409 "string.m"
}
#line 4188 "string.m"
    mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4188 "string.m"
    {
#line 4188 "string.m"
      mercury__string__split_at_separator_loop_6_p_0(mercury__string__DelimP_4, mercury__string__String_5, mercury__string__Len_7, mercury__string__Len_7, mercury__string__V_9_9, &mercury__string__Substrings_6);
    }
#line 4186 "string.m"
    return mercury__string__Substrings_6;
#line 4186 "string.m"
  }
#line 673 "string.m"
}

#line 661 "string.m"
MR_Word MR_CALL 
mercury__string__words_1_f_0(
#line 661 "string.m"
  MR_String mercury__string__String_3)
#line 661 "string.m"
{
#line 4149 "string.m"
  {
#line 4149 "string.m"
    MR_bool mercury__string__succeeded;
#line 4149 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4149 "string.m"
    MR_Integer mercury__string__WordStart_10;

#line 4146 "string.m"
    {
#line 4146 "string.m"
      mercury__string__next_boundary__ho35_4_p_0(mercury__string__String_3, (MR_Integer) 0, &mercury__string__WordStart_10);
    }
#line 4147 "string.m"
    {
#line 4147 "string.m"
      mercury__string__words_loop__ho36_4_p_0(mercury__string__String_3, mercury__string__WordStart_10, &mercury__string__HeadVar__2_2);
    }
#line 4149 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4149 "string.m"
  }
#line 661 "string.m"
}

#line 656 "string.m"
MR_Word MR_CALL 
mercury__string__words_separator_2_f_0(
#line 656 "string.m"
  MR_Word mercury__string__SepP_4,
#line 656 "string.m"
  MR_String mercury__string__String_5)
#line 656 "string.m"
{
#line 4145 "string.m"
  {
#line 4145 "string.m"
    MR_bool mercury__string__succeeded;
#line 4145 "string.m"
    MR_Word mercury__string__Words_6;
#line 4145 "string.m"
    MR_Integer mercury__string__WordStart_7;

#line 4146 "string.m"
    {
#line 4146 "string.m"
      mercury__string__next_boundary_4_p_0(mercury__string__SepP_4, mercury__string__String_5, (MR_Integer) 0, &mercury__string__WordStart_7);
    }
#line 4147 "string.m"
    {
#line 4147 "string.m"
      mercury__string__words_loop_4_p_0(mercury__string__SepP_4, mercury__string__String_5, mercury__string__WordStart_7, &mercury__string__Words_6);
    }
#line 4145 "string.m"
    return mercury__string__Words_6;
#line 4145 "string.m"
  }
#line 656 "string.m"
}

#line 643 "string.m"
void MR_CALL 
mercury__string__unsafe_substring_4_p_0(
#line 643 "string.m"
  MR_String mercury__string__Str_5,
#line 643 "string.m"
  MR_Integer mercury__string__Start_6,
#line 643 "string.m"
  MR_Integer mercury__string__Count_7,
#line 643 "string.m"
  MR_String * mercury__string__SubString_8)
#line 643 "string.m"
{
#line 4140 "string.m"
  {
#line 4140 "string.m"
    MR_bool mercury__string__succeeded;
#line 4140 "string.m"
    MR_Integer mercury__string__V_9_9 = (mercury__string__Start_6 + mercury__string__Count_7);

#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 24177 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_8  = SubString;
#line 4109 "string.m"
}
#line 4140 "string.m"
  }
#line 643 "string.m"
}

#line 642 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_substring_3_f_0(
#line 642 "string.m"
  MR_String mercury__string__Str_5,
#line 642 "string.m"
  MR_Integer mercury__string__Start_6,
#line 642 "string.m"
  MR_Integer mercury__string__Count_7)
#line 642 "string.m"
{
#line 4137 "string.m"
  {
#line 4137 "string.m"
    MR_bool mercury__string__succeeded;
#line 4137 "string.m"
    MR_String mercury__string__SubString_8;
#line 4137 "string.m"
    MR_Integer mercury__string__V_9_9 = (mercury__string__Start_6 + mercury__string__Count_7);

#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 24231 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
#line 4109 "string.m"
}
#line 4137 "string.m"
    return mercury__string__SubString_8;
#line 4137 "string.m"
  }
#line 642 "string.m"
}

#line 635 "string.m"
void MR_CALL 
mercury__string__unsafe_between_4_p_0(
#line 635 "string.m"
  MR_String mercury__string__Str_1,
#line 635 "string.m"
  MR_Integer mercury__string__Start_2,
#line 635 "string.m"
  MR_Integer mercury__string__End_3,
#line 635 "string.m"
  MR_String * mercury__string__SubString_4)
#line 635 "string.m"
{
#line 4105 "string.m"
  {
#line 4105 "string.m"
    MR_bool mercury__string__succeeded;

#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 24285 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
#line 4109 "string.m"
}
#line 4105 "string.m"
  }
#line 635 "string.m"
}

#line 634 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_between_3_f_0(
#line 634 "string.m"
  MR_String mercury__string__Str_5,
#line 634 "string.m"
  MR_Integer mercury__string__Start_6,
#line 634 "string.m"
  MR_Integer mercury__string__End_7)
#line 634 "string.m"
{
#line 4105 "string.m"
  {
#line 4105 "string.m"
    MR_bool mercury__string__succeeded;
#line 4105 "string.m"
    MR_String mercury__string__SubString_8;

#line 4109 "string.m"
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
#line 4109 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 24337 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
#line 4109 "string.m"
}
#line 4105 "string.m"
    return mercury__string__SubString_8;
#line 4105 "string.m"
  }
#line 634 "string.m"
}

#line 621 "string.m"
void MR_CALL 
mercury__string__between_codepoints_4_p_0(
#line 621 "string.m"
  MR_String mercury__string__Str_5,
#line 621 "string.m"
  MR_Integer mercury__string__Start_6,
#line 621 "string.m"
  MR_Integer mercury__string__End_7,
#line 621 "string.m"
  MR_String * mercury__string__SubString_8)
#line 621 "string.m"
{
#line 4087 "string.m"
  {
#line 4087 "string.m"
    MR_bool mercury__string__succeeded;
#line 4087 "string.m"
    MR_Integer mercury__string__StartOffset_10;
#line 4087 "string.m"
    MR_Integer mercury__string__EndOffset_12;
#line 4090 "string.m"
    MR_Integer mercury__string__StartOffset0_9;
#line 4095 "string.m"
    MR_Integer mercury__string__EndOffset0_11;

#line 2600 "string.m"
    {
#line 2600 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Start_6, &mercury__string__StartOffset0_9);
    }
#line 4090 "string.m"
    if (mercury__string__succeeded)
#line 4089 "string.m"
      mercury__string__StartOffset_10 = mercury__string__StartOffset0_9;
#line 4090 "string.m"
    else
#line 4091 "string.m"
      mercury__string__StartOffset_10 = (MR_Integer) 0;
#line 2600 "string.m"
    {
#line 2600 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_7, &mercury__string__EndOffset0_11);
    }
#line 4095 "string.m"
    if (mercury__string__succeeded)
#line 4094 "string.m"
      mercury__string__EndOffset_12 = mercury__string__EndOffset0_11;
#line 4095 "string.m"
    else
#line 2405 "string.m"
      {
#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__between_codepoints_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 24416 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndOffset_12  = Length;
#line 2409 "string.m"
}
#line 2405 "string.m"
      }
#line 4098 "string.m"
    {
#line 4098 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__StartOffset_10, mercury__string__EndOffset_12, mercury__string__SubString_8);
#line 4098 "string.m"
      return;
    }
#line 4087 "string.m"
  }
#line 621 "string.m"
}

#line 619 "string.m"
MR_String MR_CALL 
mercury__string__between_codepoints_3_f_0(
#line 619 "string.m"
  MR_String mercury__string__Str_5,
#line 619 "string.m"
  MR_Integer mercury__string__Start_6,
#line 619 "string.m"
  MR_Integer mercury__string__End_7)
#line 619 "string.m"
{
#line 4085 "string.m"
  {
#line 4085 "string.m"
    MR_bool mercury__string__succeeded;
#line 4085 "string.m"
    MR_String mercury__string__SubString_8;

#line 4085 "string.m"
    {
#line 4085 "string.m"
      mercury__string__between_codepoints_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    }
#line 4085 "string.m"
    return mercury__string__SubString_8;
#line 4085 "string.m"
  }
#line 619 "string.m"
}

#line 608 "string.m"
void MR_CALL 
mercury__string__substring_4_p_0(
#line 608 "string.m"
  MR_String mercury__string__Str_5,
#line 608 "string.m"
  MR_Integer mercury__string__Start_6,
#line 608 "string.m"
  MR_Integer mercury__string__Count_7,
#line 608 "string.m"
  MR_String * mercury__string__SubString_8)
#line 608 "string.m"
{
#line 4063 "string.m"
  {
#line 4063 "string.m"
    MR_bool mercury__string__succeeded;
#line 4063 "string.m"
    MR_Integer mercury__string__ClampStart_9;
#line 4063 "string.m"
    MR_Integer mercury__string__ClampEnd_10;

#line 4064 "string.m"
    {
#line 4064 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_9, &mercury__string__ClampEnd_10);
    }
#line 4065 "string.m"
    {
#line 4065 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_9, mercury__string__ClampEnd_10, mercury__string__SubString_8);
#line 4065 "string.m"
      return;
    }
#line 4063 "string.m"
  }
#line 608 "string.m"
}

#line 607 "string.m"
MR_String MR_CALL 
mercury__string__substring_3_f_0(
#line 607 "string.m"
  MR_String mercury__string__Str_5,
#line 607 "string.m"
  MR_Integer mercury__string__Start_6,
#line 607 "string.m"
  MR_Integer mercury__string__Count_7)
#line 607 "string.m"
{
#line 4063 "string.m"
  {
#line 4063 "string.m"
    MR_bool mercury__string__succeeded;
#line 4063 "string.m"
    MR_String mercury__string__SubString_8;
#line 4063 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4063 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4064 "string.m"
    {
#line 4064 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4065 "string.m"
    {
#line 4065 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, &mercury__string__SubString_8);
    }
#line 4063 "string.m"
    return mercury__string__SubString_8;
#line 4063 "string.m"
  }
#line 607 "string.m"
}

#line 600 "string.m"
void MR_CALL 
mercury__string__between_4_p_0(
#line 600 "string.m"
  MR_String mercury__string__Str_1,
#line 600 "string.m"
  MR_Integer mercury__string__Start_2,
#line 600 "string.m"
  MR_Integer mercury__string__End_3,
#line 600 "string.m"
  MR_String * mercury__string__SubString_4)
#line 600 "string.m"
{
#line 3955 "string.m"
  {
#line 3955 "string.m"
    MR_bool mercury__string__succeeded;

#line 3959 "string.m"
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
#line 3959 "string.m"
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
#line 24598 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
#line 3959 "string.m"
}
#line 3955 "string.m"
  }
#line 600 "string.m"
}

#line 599 "string.m"
MR_String MR_CALL 
mercury__string__between_3_f_0(
#line 599 "string.m"
  MR_String mercury__string__Str_5,
#line 599 "string.m"
  MR_Integer mercury__string__Start_6,
#line 599 "string.m"
  MR_Integer mercury__string__End_7)
#line 599 "string.m"
{
#line 3953 "string.m"
  {
#line 3953 "string.m"
    MR_bool mercury__string__succeeded;
#line 3953 "string.m"
    MR_String mercury__string__SubString_8;

#line 3953 "string.m"
    {
#line 3953 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    }
#line 3953 "string.m"
    return mercury__string__SubString_8;
#line 3953 "string.m"
  }
#line 599 "string.m"
}

#line 588 "string.m"
void MR_CALL 
mercury__string__right_by_codepoint_3_p_0(
#line 588 "string.m"
  MR_String mercury__string__String_4,
#line 588 "string.m"
  MR_Integer mercury__string__RightCount_5,
#line 588 "string.m"
  MR_String * mercury__string__RightString_6)
#line 588 "string.m"
{
#line 3945 "string.m"
  {
#line 3945 "string.m"
    MR_bool mercury__string__succeeded;
#line 3945 "string.m"
    MR_Integer mercury__string__TotalCount_7;
#line 3945 "string.m"
    MR_Integer mercury__string__LeftCount_8;
#line 3948 "string.m"
    MR_String mercury__string___LeftString_9;

#line 3946 "string.m"
    {
#line 3946 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_7);
    }
#line 3947 "string.m"
    mercury__string__LeftCount_8 = (mercury__string__TotalCount_7 - mercury__string__RightCount_5);
#line 3948 "string.m"
    {
#line 3948 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
    }
#line 3945 "string.m"
  }
#line 588 "string.m"
}

#line 587 "string.m"
MR_String MR_CALL 
mercury__string__right_by_codepoint_2_f_0(
#line 587 "string.m"
  MR_String mercury__string__String_4,
#line 587 "string.m"
  MR_Integer mercury__string__RightCount_5)
#line 587 "string.m"
{
#line 3945 "string.m"
  {
#line 3945 "string.m"
    MR_bool mercury__string__succeeded;
#line 3945 "string.m"
    MR_String mercury__string__RightString_6;
#line 3945 "string.m"
    MR_Integer mercury__string__TotalCount_10;
#line 3945 "string.m"
    MR_Integer mercury__string__LeftCount_11;
#line 3948 "string.m"
    MR_String mercury__string___LeftString_12;

#line 3946 "string.m"
    {
#line 3946 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_10);
    }
#line 3947 "string.m"
    mercury__string__LeftCount_11 = (mercury__string__TotalCount_10 - mercury__string__RightCount_5);
#line 3948 "string.m"
    {
#line 3948 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__RightString_6);
    }
#line 3945 "string.m"
    return mercury__string__RightString_6;
#line 3945 "string.m"
  }
#line 587 "string.m"
}

#line 578 "string.m"
void MR_CALL 
mercury__string__right_3_p_0(
#line 578 "string.m"
  MR_String mercury__string__String_4,
#line 578 "string.m"
  MR_Integer mercury__string__RightCount_5,
#line 578 "string.m"
  MR_String * mercury__string__RightString_6)
#line 578 "string.m"
{
#line 3937 "string.m"
  {
#line 3937 "string.m"
    MR_bool mercury__string__succeeded;
#line 3937 "string.m"
    MR_Integer mercury__string__Length_7;
#line 3937 "string.m"
    MR_Integer mercury__string__LeftCount_8;
#line 3940 "string.m"
    MR_String mercury__string___LeftString_9;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__right_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 24755 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
#line 2409 "string.m"
}
#line 3939 "string.m"
    mercury__string__LeftCount_8 = (mercury__string__Length_7 - mercury__string__RightCount_5);
#line 3940 "string.m"
    {
#line 3940 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
    }
#line 3937 "string.m"
  }
#line 578 "string.m"
}

#line 577 "string.m"
MR_String MR_CALL 
mercury__string__right_2_f_0(
#line 577 "string.m"
  MR_String mercury__string__S1_4,
#line 577 "string.m"
  MR_Integer mercury__string__N_5)
#line 577 "string.m"
{
#line 3937 "string.m"
  {
#line 3937 "string.m"
    MR_bool mercury__string__succeeded;
#line 3937 "string.m"
    MR_String mercury__string__S2_6;
#line 3937 "string.m"
    MR_Integer mercury__string__Length_10;
#line 3937 "string.m"
    MR_Integer mercury__string__LeftCount_11;
#line 3940 "string.m"
    MR_String mercury__string___LeftString_12;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__right_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S1_4 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 24809 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_10  = Length;
#line 2409 "string.m"
}
#line 3939 "string.m"
    mercury__string__LeftCount_11 = (mercury__string__Length_10 - mercury__string__N_5);
#line 3940 "string.m"
    {
#line 3940 "string.m"
      mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__S2_6);
    }
#line 3937 "string.m"
    return mercury__string__S2_6;
#line 3937 "string.m"
  }
#line 577 "string.m"
}

#line 569 "string.m"
void MR_CALL 
mercury__string__left_by_codepoint_3_p_0(
#line 569 "string.m"
  MR_String mercury__string__String_4,
#line 569 "string.m"
  MR_Integer mercury__string__Count_5,
#line 569 "string.m"
  MR_String * mercury__string__LeftString_6)
#line 569 "string.m"
{
#line 3932 "string.m"
  {
#line 3932 "string.m"
    MR_bool mercury__string__succeeded;
#line 3932 "string.m"
    MR_String mercury__string___RightString_7;

#line 3932 "string.m"
    {
#line 3932 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
    }
#line 3932 "string.m"
  }
#line 569 "string.m"
}

#line 568 "string.m"
MR_String MR_CALL 
mercury__string__left_by_codepoint_2_f_0(
#line 568 "string.m"
  MR_String mercury__string__String_4,
#line 568 "string.m"
  MR_Integer mercury__string__Count_5)
#line 568 "string.m"
{
#line 3932 "string.m"
  {
#line 3932 "string.m"
    MR_bool mercury__string__succeeded;
#line 3932 "string.m"
    MR_String mercury__string__LeftString_6;
#line 3932 "string.m"
    MR_String mercury__string___RightString_10;

#line 3932 "string.m"
    {
#line 3932 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, &mercury__string__LeftString_6, &mercury__string___RightString_10);
    }
#line 3932 "string.m"
    return mercury__string__LeftString_6;
#line 3932 "string.m"
  }
#line 568 "string.m"
}

#line 559 "string.m"
void MR_CALL 
mercury__string__left_3_p_0(
#line 559 "string.m"
  MR_String mercury__string__String_4,
#line 559 "string.m"
  MR_Integer mercury__string__Count_5,
#line 559 "string.m"
  MR_String * mercury__string__LeftString_6)
#line 559 "string.m"
{
#line 3926 "string.m"
  {
#line 3926 "string.m"
    MR_bool mercury__string__succeeded;
#line 3926 "string.m"
    MR_String mercury__string___RightString_7;

#line 3926 "string.m"
    {
#line 3926 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
    }
#line 3926 "string.m"
  }
#line 559 "string.m"
}

#line 558 "string.m"
MR_String MR_CALL 
mercury__string__left_2_f_0(
#line 558 "string.m"
  MR_String mercury__string__S1_4,
#line 558 "string.m"
  MR_Integer mercury__string__N_5)
#line 558 "string.m"
{
#line 3926 "string.m"
  {
#line 3926 "string.m"
    MR_bool mercury__string__succeeded;
#line 3926 "string.m"
    MR_String mercury__string__S2_6;
#line 3926 "string.m"
    MR_String mercury__string___RightString_10;

#line 3926 "string.m"
    {
#line 3926 "string.m"
      mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__N_5, &mercury__string__S2_6, &mercury__string___RightString_10);
    }
#line 3926 "string.m"
    return mercury__string__S2_6;
#line 3926 "string.m"
  }
#line 558 "string.m"
}

#line 549 "string.m"
void MR_CALL 
mercury__string__split_by_codepoint_4_p_0(
#line 549 "string.m"
  MR_String mercury__string__Str_5,
#line 549 "string.m"
  MR_Integer mercury__string__Count_6,
#line 549 "string.m"
  MR_String * mercury__string__Left_7,
#line 549 "string.m"
  MR_String * mercury__string__Right_8)
#line 549 "string.m"
{
#line 3912 "string.m"
  {
#line 3912 "string.m"
    MR_bool mercury__string__succeeded;
#line 3912 "string.m"
    MR_Integer mercury__string__Offset_9;

#line 2600 "string.m"
    {
#line 2600 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Count_6, &mercury__string__Offset_9);
    }
#line 3912 "string.m"
    if (mercury__string__succeeded)
#line 3911 "string.m"
      {
#line 3911 "string.m"
        mercury__string__split_4_p_0(mercury__string__Str_5, mercury__string__Offset_9, mercury__string__Left_7, mercury__string__Right_8);
#line 3911 "string.m"
        return;
      }
#line 3912 "string.m"
    else
#line 3915 "string.m"
      {
#line 3912 "string.m"
        mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
#line 3915 "string.m"
        if (mercury__string__succeeded)
#line 3913 "string.m"
          {
#line 3913 "string.m"
            *mercury__string__Left_7 = (MR_String) "";
#line 3914 "string.m"
            *mercury__string__Right_8 = mercury__string__Str_5;
#line 3913 "string.m"
          }
#line 3915 "string.m"
        else
#line 3916 "string.m"
          {
#line 3916 "string.m"
            *mercury__string__Left_7 = mercury__string__Str_5;
#line 3917 "string.m"
            *mercury__string__Right_8 = (MR_String) "";
#line 3916 "string.m"
          }
#line 3915 "string.m"
      }
#line 3912 "string.m"
  }
#line 549 "string.m"
}

#line 540 "string.m"
void MR_CALL 
mercury__string__split_4_p_0(
#line 540 "string.m"
  MR_String mercury__string__Str_1,
#line 540 "string.m"
  MR_Integer mercury__string__Count_2,
#line 540 "string.m"
  MR_String * mercury__string__Left_3,
#line 540 "string.m"
  MR_String * mercury__string__Right_4)
#line 540 "string.m"
{
#line 3808 "string.m"
  {
#line 3808 "string.m"
    MR_bool mercury__string__succeeded;

#line 3812 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_4_p_0

	MR_String Str;
	MR_Integer Count;
	MR_String Left;
	MR_String Right;

	Str =  mercury__string__Str_1 ;
	Count =  mercury__string__Count_2 ;
		{
#line 3812 "string.m"
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
#line 25067 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Left_3  = Left;
	 *mercury__string__Right_4  = Right;
#line 3812 "string.m"
}
#line 3808 "string.m"
  }
#line 540 "string.m"
}

#line 532 "string.m"
void MR_CALL 
mercury__string__first_char_3_p_4(
#line 532 "string.m"
  MR_String * mercury__string__Str_1,
#line 532 "string.m"
  MR_Char mercury__string__First_2,
#line 532 "string.m"
  MR_String mercury__string__Rest_3)
#line 532 "string.m"
{
#line 3765 "string.m"
  {
#line 3765 "string.m"
    MR_bool mercury__string__succeeded;

#line 3769 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_4

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__First_2 ;
	Rest =  mercury__string__Rest_3 ;
		{
#line 3769 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 25115 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_1  = Str;
#line 3769 "string.m"
}
#line 3765 "string.m"
  }
#line 532 "string.m"
}

#line 531 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_3(
#line 531 "string.m"
  MR_String mercury__string__Str_1,
#line 531 "string.m"
  MR_Char * mercury__string__First_2,
#line 531 "string.m"
  MR_String * mercury__string__Rest_3)
#line 531 "string.m"
{
#line 3693 "string.m"
  {
#line 3693 "string.m"
    MR_bool mercury__string__succeeded;

#line 3697 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_3

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
		{
#line 3697 "string.m"
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
#line 25170 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
	 *mercury__string__Rest_3  = Rest;
#line 3697 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3693 "string.m"
    return mercury__string__succeeded;
#line 3693 "string.m"
  }
#line 531 "string.m"
}

#line 530 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_2(
#line 530 "string.m"
  MR_String mercury__string__Str_1,
#line 530 "string.m"
  MR_Char mercury__string__First_2,
#line 530 "string.m"
  MR_String * mercury__string__Rest_3)
#line 530 "string.m"
{
#line 3625 "string.m"
  {
#line 3625 "string.m"
    MR_bool mercury__string__succeeded;

#line 3629 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_2

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	First =  mercury__string__First_2 ;
		{
#line 3629 "string.m"
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
#line 25232 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Rest_3  = Rest;
#line 3629 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3625 "string.m"
    return mercury__string__succeeded;
#line 3625 "string.m"
  }
#line 530 "string.m"
}

#line 529 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_1(
#line 529 "string.m"
  MR_String mercury__string__Str_1,
#line 529 "string.m"
  MR_Char * mercury__string__First_2,
#line 529 "string.m"
  MR_String mercury__string__Rest_3)
#line 529 "string.m"
{
#line 3562 "string.m"
  {
#line 3562 "string.m"
    MR_bool mercury__string__succeeded;

#line 3566 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_1

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Rest =  mercury__string__Rest_3 ;
		{
#line 3566 "string.m"

    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (First > 0 && strcmp(Str + pos, Rest) == 0);

#line 25283 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
#line 3566 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3562 "string.m"
    return mercury__string__succeeded;
#line 3562 "string.m"
  }
#line 529 "string.m"
}

#line 528 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_0(
#line 528 "string.m"
  MR_String mercury__string__Str_1,
#line 528 "string.m"
  MR_Char mercury__string__First_2,
#line 528 "string.m"
  MR_String mercury__string__Rest_3)
#line 528 "string.m"
{
#line 3505 "string.m"
  {
#line 3505 "string.m"
    MR_bool mercury__string__succeeded;

#line 3509 "string.m"
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
#line 3509 "string.m"

    MR_Integer pos = 0;
    int c = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (
        c == First &&
        First != '\0' &&
        strcmp(Str + pos, Rest) == 0
    );

#line 25339 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3509 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3505 "string.m"
    return mercury__string__succeeded;
#line 3505 "string.m"
  }
#line 528 "string.m"
}

#line 510 "string.m"
MR_String MR_CALL 
mercury__string__join_list_2_f_0(
#line 510 "string.m"
  MR_String mercury__string__Sep_1,
#line 510 "string.m"
  MR_Word mercury__string__Strs_2)
#line 510 "string.m"
{
#line 3406 "string.m"
  {
#line 3406 "string.m"
    MR_bool mercury__string__succeeded;
#line 3406 "string.m"
    MR_String mercury__string__Str_3;

#line 3410 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_2_f_0

	MR_String Sep;
	MR_Word Strs;
	MR_String Str;

	Sep =  mercury__string__Sep_1 ;
	Strs =  mercury__string__Strs_2 ;
		{
#line 3410 "string.m"
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
#line 25426 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_3  = Str;
#line 3410 "string.m"
}
#line 3406 "string.m"
    return mercury__string__Str_3;
#line 3406 "string.m"
  }
#line 510 "string.m"
}

#line 502 "string.m"
void MR_CALL 
mercury__string__append_list_2_p_0(
#line 502 "string.m"
  MR_Word mercury__string__Lists_3,
#line 502 "string.m"
  MR_String * mercury__string__HeadVar__2_2)
#line 502 "string.m"
{
#line 3398 "string.m"
  {
#line 3398 "string.m"
    MR_bool mercury__string__succeeded;

#line 3398 "string.m"
    {
#line 3398 "string.m"
      *mercury__string__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__string__Lists_3);
    }
#line 3398 "string.m"
  }
#line 502 "string.m"
}

#line 501 "string.m"
MR_String MR_CALL 
mercury__string__append_list_1_f_0(
#line 501 "string.m"
  MR_Word mercury__string__Strs_1)
#line 501 "string.m"
{
#line 3326 "string.m"
  {
#line 3326 "string.m"
    MR_bool mercury__string__succeeded;
#line 3326 "string.m"
    MR_String mercury__string__Str_2;

#line 3330 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_list_1_f_0

	MR_Word Strs;
	MR_String Str;

	Strs =  mercury__string__Strs_1 ;
		{
#line 3330 "string.m"
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
#line 25513 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_2  = Str;
#line 3330 "string.m"
}
#line 3326 "string.m"
    return mercury__string__Str_2;
#line 3326 "string.m"
  }
#line 501 "string.m"
}

#line 497 "string.m"
MR_String MR_CALL 
mercury__string__f_43_43_2_f_0(
#line 497 "string.m"
  MR_String mercury__string__S1_4,
#line 497 "string.m"
  MR_String mercury__string__S2_5)
#line 497 "string.m"
{
#line 3215 "string.m"
  {
#line 3215 "string.m"
    MR_bool mercury__string__succeeded;
#line 3215 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_43_43_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 25563 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
#line 3219 "string.m"
}
#line 3215 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3215 "string.m"
  }
#line 497 "string.m"
}

#line 485 "string.m"
void MR_CALL 
mercury__string__append_3_p_3(
#line 485 "string.m"
  MR_String * mercury__string__S1_1,
#line 485 "string.m"
  MR_String * mercury__string__S2_2,
#line 485 "string.m"
  MR_String mercury__string__S3_3,
#line 485 "string.m"
  MR_Cont mercury__string__cont,
#line 485 "string.m"
  void * mercury__string__cont_env_ptr)
#line 485 "string.m"
{
#line 3251 "string.m"
  {
#line 3251 "string.m"
    MR_bool mercury__string__succeeded;
#line 3251 "string.m"
    MR_Integer mercury__string__S3Len_19;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 25612 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_19  = Length;
#line 2409 "string.m"
}
#line 3253 "string.m"
    {
#line 3253 "string.m"
      mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_19, mercury__string__S1_1, mercury__string__S2_2, mercury__string__S3_3, mercury__string__cont, mercury__string__cont_env_ptr);
#line 3253 "string.m"
      return;
    }
#line 3251 "string.m"
  }
#line 485 "string.m"
}

#line 484 "string.m"
void MR_CALL 
mercury__string__append_3_p_2(
#line 484 "string.m"
  MR_String mercury__string__S1_1,
#line 484 "string.m"
  MR_String mercury__string__S2_2,
#line 484 "string.m"
  MR_String * mercury__string__S3_3)
#line 484 "string.m"
{
#line 3215 "string.m"
  {
#line 3215 "string.m"
    MR_bool mercury__string__succeeded;

#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_2

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 25667 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
#line 3219 "string.m"
}
#line 3215 "string.m"
  }
#line 484 "string.m"
}

#line 483 "string.m"
MR_bool MR_CALL 
mercury__string__append_3_p_1(
#line 483 "string.m"
  MR_String mercury__string__S1_1,
#line 483 "string.m"
  MR_String * mercury__string__S2_2,
#line 483 "string.m"
  MR_String mercury__string__S3_3)
#line 483 "string.m"
{
#line 3163 "string.m"
  {
#line 3163 "string.m"
    MR_bool mercury__string__succeeded;

#line 3167 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_1

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3167 "string.m"
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
#line 25725 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
#line 3167 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3163 "string.m"
    return mercury__string__succeeded;
#line 3163 "string.m"
  }
#line 483 "string.m"
}

#line 482 "string.m"
MR_bool MR_CALL 
mercury__string__append_3_p_0(
#line 482 "string.m"
  MR_String mercury__string__S1_1,
#line 482 "string.m"
  MR_String mercury__string__S2_2,
#line 482 "string.m"
  MR_String mercury__string__S3_3)
#line 482 "string.m"
{
#line 3120 "string.m"
  {
#line 3120 "string.m"
    MR_bool mercury__string__succeeded;

#line 3124 "string.m"
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
#line 3124 "string.m"
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}
#line 25779 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3120 "string.m"
    return mercury__string__succeeded;
#line 3120 "string.m"
  }
#line 482 "string.m"
}

#line 479 "string.m"
MR_String MR_CALL 
mercury__string__append_2_f_0(
#line 479 "string.m"
  MR_String mercury__string__S1_4,
#line 479 "string.m"
  MR_String mercury__string__S2_5)
#line 479 "string.m"
{
#line 3215 "string.m"
  {
#line 3215 "string.m"
    MR_bool mercury__string__succeeded;
#line 3215 "string.m"
    MR_String mercury__string__S3_6;

#line 3219 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
#line 3219 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 25831 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3_6  = S3;
#line 3219 "string.m"
}
#line 3215 "string.m"
    return mercury__string__S3_6;
#line 3215 "string.m"
  }
#line 479 "string.m"
}

#line 469 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_start_4_p_0(
#line 469 "string.m"
  MR_String mercury__string__WholeString_1,
#line 469 "string.m"
  MR_String mercury__string__Pattern_2,
#line 469 "string.m"
  MR_Integer mercury__string__BeginAt_3,
#line 469 "string.m"
  MR_Integer * mercury__string__Index_4)
#line 469 "string.m"
{
#line 3006 "string.m"
  {
#line 3006 "string.m"
    MR_bool mercury__string__succeeded;

#line 3011 "string.m"
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
#line 3011 "string.m"
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
#line 25892 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
#line 3011 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3006 "string.m"
    return mercury__string__succeeded;
#line 3006 "string.m"
  }
#line 469 "string.m"
}

#line 461 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_3_p_0(
#line 461 "string.m"
  MR_String mercury__string__WholeString_4,
#line 461 "string.m"
  MR_String mercury__string__Pattern_5,
#line 461 "string.m"
  MR_Integer * mercury__string__Index_6)
#line 461 "string.m"
{
#line 3003 "string.m"
  {
#line 3003 "string.m"
    MR_bool mercury__string__succeeded;

#line 3011 "string.m"
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
#line 3011 "string.m"
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
#line 25954 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_6  = Index;
#line 3011 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3003 "string.m"
    return mercury__string__succeeded;
#line 3003 "string.m"
  }
#line 461 "string.m"
}

#line 452 "string.m"
MR_Integer MR_CALL 
mercury__string__suffix_length_2_f_0(
#line 452 "string.m"
  MR_Word mercury__string__P_4,
#line 452 "string.m"
  MR_String mercury__string__S_5)
#line 452 "string.m"
{
#line 2984 "string.m"
  {
#line 2984 "string.m"
    MR_bool mercury__string__succeeded;
#line 2984 "string.m"
    MR_Integer mercury__string__HeadVar__3_3;
#line 2984 "string.m"
    MR_Integer mercury__string__End_6;
#line 2984 "string.m"
    MR_Integer mercury__string__Index_7;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_length_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 26004 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_6  = Length;
#line 2409 "string.m"
}
#line 2986 "string.m"
    {
#line 2986 "string.m"
      mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_6, &mercury__string__Index_7);
    }
#line 2984 "string.m"
    mercury__string__HeadVar__3_3 = (mercury__string__End_6 - mercury__string__Index_7);
#line 2984 "string.m"
    return mercury__string__HeadVar__3_3;
#line 2984 "string.m"
  }
#line 452 "string.m"
}

#line 444 "string.m"
MR_Integer MR_CALL 
mercury__string__prefix_length_2_f_0(
#line 444 "string.m"
  MR_Word mercury__string__P_4,
#line 444 "string.m"
  MR_String mercury__string__S_5)
#line 444 "string.m"
{
#line 2968 "string.m"
  {
#line 2968 "string.m"
    MR_bool mercury__string__succeeded;
#line 2968 "string.m"
    MR_Integer mercury__string__Index_6;

#line 2969 "string.m"
    {
#line 2969 "string.m"
      mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__Index_6);
    }
#line 2968 "string.m"
    return mercury__string__Index_6;
#line 2968 "string.m"
  }
#line 444 "string.m"
}

#line 437 "string.m"
MR_bool MR_CALL 
mercury__string__contains_char_2_p_0(
#line 437 "string.m"
  MR_String mercury__string__Str_1,
#line 437 "string.m"
  MR_Char mercury__string__Ch_2)
#line 437 "string.m"
{
#line 2915 "string.m"
  {
#line 2915 "string.m"
    MR_bool mercury__string__succeeded;

#line 2919 "string.m"
{
#define MR_PROC_LABEL mercury__string__contains_char_2_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Ch =  mercury__string__Ch_2 ;
		{
#line 2919 "string.m"

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

#line 26091 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2919 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2915 "string.m"
    return mercury__string__succeeded;
#line 2915 "string.m"
  }
#line 437 "string.m"
}

#line 431 "string.m"
MR_bool MR_CALL 
mercury__string__all_match_2_p_0(
#line 431 "string.m"
  MR_Word mercury__string__P_3,
#line 431 "string.m"
  MR_String mercury__string__String_4)
#line 431 "string.m"
{
#line 2896 "string.m"
  {
#line 2896 "string.m"
    MR_bool mercury__string__succeeded;

#line 2897 "string.m"
    {
#line 2897 "string.m"
      return mercury__string__succeeded = mercury__string__all_match_loop_3_p_0(mercury__string__P_3, mercury__string__String_4, (MR_Integer) 0);
    }
#line 2896 "string.m"
    return mercury__string__succeeded;
#line 2896 "string.m"
  }
#line 431 "string.m"
}

#line 424 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_digits_1_p_0(
#line 424 "string.m"
  MR_String mercury__string__S_1)
#line 424 "string.m"
{
#line 2870 "string.m"
  {
#line 2870 "string.m"
    MR_bool mercury__string__succeeded;

#line 2874 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_digits_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2874 "string.m"

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

#line 26171 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2874 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2870 "string.m"
    return mercury__string__succeeded;
#line 2870 "string.m"
  }
#line 424 "string.m"
}

#line 420 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alnum_or_underscore_1_p_0(
#line 420 "string.m"
  MR_String mercury__string__S_1)
#line 420 "string.m"
{
#line 2829 "string.m"
  {
#line 2829 "string.m"
    MR_bool mercury__string__succeeded;

#line 2833 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alnum_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2833 "string.m"

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

#line 26241 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2833 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2829 "string.m"
    return mercury__string__succeeded;
#line 2829 "string.m"
  }
#line 420 "string.m"
}

#line 415 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alpha_or_underscore_1_p_0(
#line 415 "string.m"
  MR_String mercury__string__S_1)
#line 415 "string.m"
{
#line 2792 "string.m"
  {
#line 2792 "string.m"
    MR_bool mercury__string__succeeded;

#line 2796 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alpha_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2796 "string.m"

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

#line 26308 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2796 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2792 "string.m"
    return mercury__string__succeeded;
#line 2792 "string.m"
  }
#line 415 "string.m"
}

#line 410 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alnum_1_p_0(
#line 410 "string.m"
  MR_String mercury__string__S_2)
#line 410 "string.m"
{
#line 2789 "string.m"
  {
#line 2789 "string.m"
    MR_bool mercury__string__succeeded;

#line 2897 "string.m"
    {
#line 2897 "string.m"
      return mercury__string__succeeded = mercury__string__all_match_loop__ho30_3_p_0(mercury__string__S_2, (MR_Integer) 0);
    }
#line 2789 "string.m"
    return mercury__string__succeeded;
#line 2789 "string.m"
  }
#line 410 "string.m"
}

#line 405 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alpha_1_p_0(
#line 405 "string.m"
  MR_String mercury__string__S_1)
#line 405 "string.m"
{
#line 2754 "string.m"
  {
#line 2754 "string.m"
    MR_bool mercury__string__succeeded;

#line 2758 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alpha_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2758 "string.m"

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

#line 26397 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2758 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2754 "string.m"
    return mercury__string__succeeded;
#line 2754 "string.m"
  }
#line 405 "string.m"
}

#line 401 "string.m"
MR_bool MR_CALL 
mercury__string__is_empty_1_p_0(
#line 401 "string.m"
  MR_String mercury__string__HeadVar__1_1)
#line 401 "string.m"
{
#line 2752 "string.m"
  {
#line 2752 "string.m"
    MR_bool mercury__string__succeeded = (strcmp(mercury__string__HeadVar__1_1, (MR_String) "") == 0);

#line 2752 "string.m"
    return mercury__string__succeeded;
#line 2752 "string.m"
  }
#line 401 "string.m"
}

#line 393 "string.m"
MR_Integer MR_CALL 
mercury__string__hash6_1_f_0(
#line 393 "string.m"
  MR_String mercury__string__String_3)
#line 393 "string.m"
{
#line 2727 "string.m"
  {
#line 2727 "string.m"
    MR_bool mercury__string__succeeded;
#line 2727 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2727 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2727 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash6_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 26463 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2409 "string.m"
}
#line 2729 "string.m"
    {
#line 2729 "string.m"
      mercury__string__hash6_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2730 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2727 "string.m"
    return mercury__string__HashVal_4;
#line 2727 "string.m"
  }
#line 393 "string.m"
}

#line 392 "string.m"
MR_Integer MR_CALL 
mercury__string__hash5_1_f_0(
#line 392 "string.m"
  MR_String mercury__string__String_3)
#line 392 "string.m"
{
#line 2709 "string.m"
  {
#line 2709 "string.m"
    MR_bool mercury__string__succeeded;
#line 2709 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2709 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2709 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash5_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 26515 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2409 "string.m"
}
#line 2711 "string.m"
    {
#line 2711 "string.m"
      mercury__string__hash5_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2712 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2709 "string.m"
    return mercury__string__HashVal_4;
#line 2709 "string.m"
  }
#line 392 "string.m"
}

#line 391 "string.m"
MR_Integer MR_CALL 
mercury__string__hash4_1_f_0(
#line 391 "string.m"
  MR_String mercury__string__String_3)
#line 391 "string.m"
{
#line 2690 "string.m"
  {
#line 2690 "string.m"
    MR_bool mercury__string__succeeded;
#line 2690 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2690 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2690 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash4_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 26567 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2409 "string.m"
}
#line 2692 "string.m"
    {
#line 2692 "string.m"
      mercury__string__hash4_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2693 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2690 "string.m"
    return mercury__string__HashVal_4;
#line 2690 "string.m"
  }
#line 391 "string.m"
}

#line 387 "string.m"
MR_Integer MR_CALL 
mercury__string__hash3_1_f_0(
#line 387 "string.m"
  MR_String mercury__string__String_3)
#line 387 "string.m"
{
#line 2668 "string.m"
  {
#line 2668 "string.m"
    MR_bool mercury__string__succeeded;
#line 2668 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2668 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2668 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash3_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 26619 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2409 "string.m"
}
#line 2670 "string.m"
    {
#line 2670 "string.m"
      mercury__string__hash3_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2671 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2668 "string.m"
    return mercury__string__HashVal_4;
#line 2668 "string.m"
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
#line 2650 "string.m"
  {
#line 2650 "string.m"
    MR_bool mercury__string__succeeded;
#line 2650 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2650 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2650 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash2_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 26671 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2409 "string.m"
}
#line 2652 "string.m"
    {
#line 2652 "string.m"
      mercury__string__hash2_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2653 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2650 "string.m"
    return mercury__string__HashVal_4;
#line 2650 "string.m"
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
#line 2632 "string.m"
  {
#line 2632 "string.m"
    MR_bool mercury__string__succeeded;
#line 2632 "string.m"
    MR_Integer mercury__string__Length_7;
#line 2632 "string.m"
    MR_Integer mercury__string__HashVal1_8;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 26723 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
#line 2409 "string.m"
}
#line 2634 "string.m"
    {
#line 2634 "string.m"
      mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_7, (MR_Integer) 0, &mercury__string__HashVal1_8);
    }
#line 2635 "string.m"
    *mercury__string__HashVal_4 = (mercury__string__HashVal1_8 ^ mercury__string__Length_7);
#line 2632 "string.m"
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
#line 2632 "string.m"
  {
#line 2632 "string.m"
    MR_bool mercury__string__succeeded;
#line 2632 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2632 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2632 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 26773 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2409 "string.m"
}
#line 2634 "string.m"
    {
#line 2634 "string.m"
      mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2635 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2632 "string.m"
    return mercury__string__HashVal_4;
#line 2632 "string.m"
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
#line 2597 "string.m"
  {
#line 2597 "string.m"
    MR_bool mercury__string__succeeded;

#line 2600 "string.m"
    {
#line 2600 "string.m"
      return mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__String_4, (MR_Integer) 0, mercury__string__N_5, mercury__string__Index_6);
    }
#line 2597 "string.m"
    return mercury__string__succeeded;
#line 2597 "string.m"
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
#line 2551 "string.m"
  {
#line 2551 "string.m"
    MR_bool mercury__string__succeeded;

#line 2554 "string.m"
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
#line 2554 "string.m"

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

#line 26871 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
#line 2554 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2551 "string.m"
    return mercury__string__succeeded;
#line 2551 "string.m"
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
#line 2521 "string.m"
  {
#line 2521 "string.m"
    MR_bool mercury__string__succeeded;
#line 2521 "string.m"
    MR_Integer mercury__string__Length_2;

#line 2524 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2524 "string.m"

    Length = strlen(Str);

#line 26915 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_2  = Length;
#line 2524 "string.m"
}
#line 2521 "string.m"
    return mercury__string__Length_2;
#line 2521 "string.m"
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
#line 2471 "string.m"
  {
#line 2471 "string.m"
    MR_bool mercury__string__succeeded;

#line 2474 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_codepoints_2_p_0

	MR_String String;
	MR_Integer Count;

	String =  mercury__string__String_1 ;
		{
#line 2474 "string.m"

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

#line 26968 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Count_2  = Count;
#line 2474 "string.m"
}
#line 2471 "string.m"
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
#line 2469 "string.m"
  {
#line 2469 "string.m"
    MR_bool mercury__string__succeeded;
#line 2469 "string.m"
    MR_Integer mercury__string__Count_4;

#line 2469 "string.m"
    {
#line 2469 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_3, &mercury__string__Count_4);
    }
#line 2469 "string.m"
    return mercury__string__Count_4;
#line 2469 "string.m"
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
#line 2405 "string.m"
  {
#line 2405 "string.m"
    MR_bool mercury__string__succeeded;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_code_units_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 27033 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_4  = Length;
#line 2409 "string.m"
}
#line 2405 "string.m"
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
#line 2405 "string.m"
  {
#line 2405 "string.m"
    MR_bool mercury__string__succeeded;
#line 2405 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 27072 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Length;
#line 2409 "string.m"
}
#line 2405 "string.m"
    return mercury__string__HeadVar__2_2;
#line 2405 "string.m"
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
#line 2431 "string.m"
  {
#line 2431 "string.m"
    MR_bool mercury__string__succeeded;

#line 2435 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2435 "string.m"

    Length = strlen(Str);

#line 27113 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
#line 2435 "string.m"
}
#line 2431 "string.m"
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
#line 2405 "string.m"
  {
#line 2405 "string.m"
    MR_bool mercury__string__succeeded;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 27152 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
#line 2409 "string.m"
}
#line 2405 "string.m"
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
#line 2405 "string.m"
  {
#line 2405 "string.m"
    MR_bool mercury__string__succeeded;
#line 2405 "string.m"
    MR_Integer mercury__string__L_4;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 27191 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__L_4  = Length;
#line 2409 "string.m"
}
#line 2405 "string.m"
    return mercury__string__L_4;
#line 2405 "string.m"
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
#line 2324 "string.m"
  {
#line 2324 "string.m"
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

#line 27238 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2324 "string.m"
    if (mercury__string__succeeded)
#line 2323 "string.m"
      {
#line 2323 "string.m"
        {
#line 2323 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_set_char: null character");
#line 2323 "string.m"
          return;
        }
#line 2323 "string.m"
      }
#line 2324 "string.m"
    else
#line 2334 "string.m"
      {
#line 2338 "string.m"
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
#line 2338 "string.m"

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

#line 27299 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
#line 2338 "string.m"
}
#line 2334 "string.m"
      }
#line 2324 "string.m"
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
#line 2324 "string.m"
  {
#line 2324 "string.m"
    MR_bool mercury__string__succeeded;
#line 2324 "string.m"
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

#line 27346 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2324 "string.m"
    if (mercury__string__succeeded)
#line 2323 "string.m"
      {
#line 2323 "string.m"
        {
#line 2323 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_set_char: null character");
        }
#line 2323 "string.m"
      }
#line 2324 "string.m"
    else
#line 2334 "string.m"
      {
#line 2338 "string.m"
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
#line 2338 "string.m"

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

#line 27405 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_8  = Str;
#line 2338 "string.m"
}
#line 2334 "string.m"
      }
#line 2324 "string.m"
    return mercury__string__S_8;
#line 2324 "string.m"
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
#line 2312 "string.m"
  {
#line 2312 "string.m"
    MR_bool mercury__string__succeeded;
#line 2312 "string.m"
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

#line 27456 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2200 "string.m"
    if (mercury__string__succeeded)
#line 2199 "string.m"
      {
#line 2199 "string.m"
        {
#line 2199 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.set_char: null character");
#line 2199 "string.m"
          return;
        }
#line 2199 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2199 "string.m"
      }
#line 2200 "string.m"
    else
#line 2210 "string.m"
      {
#line 2214 "string.m"
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
#line 2214 "string.m"

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

#line 27527 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__String1_9  = Str;
#line 2214 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2210 "string.m"
      }
#line 2312 "string.m"
    if (mercury__string__succeeded)
#line 2311 "string.m"
      *mercury__string__String_8 = mercury__string__String1_9;
#line 2312 "string.m"
    else
#line 2313 "string.m"
      {
#line 2313 "string.m"
        {
#line 2313 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_set_char: index out of range");
#line 2313 "string.m"
          return;
        }
#line 2313 "string.m"
      }
#line 2312 "string.m"
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
#line 2307 "string.m"
  {
#line 2307 "string.m"
    MR_bool mercury__string__succeeded;
#line 2307 "string.m"
    MR_String mercury__string__S_8;

#line 2307 "string.m"
    {
#line 2307 "string.m"
      mercury__string__det_set_char_4_p_0(mercury__string__C_5, mercury__string__N_6, mercury__string__S0_7, &mercury__string__S_8);
    }
#line 2307 "string.m"
    return mercury__string__S_8;
#line 2307 "string.m"
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
#line 2200 "string.m"
  {
#line 2200 "string.m"
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

#line 27624 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2200 "string.m"
    if (mercury__string__succeeded)
#line 2199 "string.m"
      {
#line 2199 "string.m"
        {
#line 2199 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.set_char: null character");
        }
#line 2199 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2199 "string.m"
      }
#line 2200 "string.m"
    else
#line 2210 "string.m"
      {
#line 2214 "string.m"
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
#line 2214 "string.m"

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

#line 27693 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
#line 2214 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2210 "string.m"
      }
#line 2200 "string.m"
    return mercury__string__succeeded;
#line 2200 "string.m"
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
#line 2166 "string.m"
  {
#line 2166 "string.m"
    MR_bool mercury__string__succeeded;

#line 2169 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_code_unit_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 2169 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 27744 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Code_3  = Code;
#line 2169 "string.m"
}
#line 2166 "string.m"
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
#line 2038 "string.m"
  {
#line 2038 "string.m"
    MR_bool mercury__string__succeeded;

#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 27802 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__PrevIndex_3  = PrevIndex;
	 *mercury__string__Ch_4  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2038 "string.m"
    return mercury__string__succeeded;
#line 2038 "string.m"
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
#line 2030 "string.m"
  {
#line 2030 "string.m"
    MR_bool mercury__string__succeeded;
#line 2030 "string.m"
    MR_Integer mercury__string__Len_9;
#line 2030 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 27855 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
#line 2409 "string.m"
}
#line 2032 "string.m"
    mercury__string__V_10_10 = (mercury__string__Index_6 - (MR_Integer) 1);
#line 2143 "string.m"
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__V_10_10 ;
	Length =  mercury__string__Len_9 ;
		{
#line 2143 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 27886 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2143 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2030 "string.m"
    if (mercury__string__succeeded)
#line 2030 "string.m"
      {
#line 2042 "string.m"
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
#line 2042 "string.m"

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

#line 27927 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__CharIndex_7  = PrevIndex;
	 *mercury__string__Char_8  = Ch;
#line 2042 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2030 "string.m"
      }
#line 2030 "string.m"
    return mercury__string__succeeded;
#line 2030 "string.m"
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
#line 1949 "string.m"
  {
#line 1949 "string.m"
    MR_bool mercury__string__succeeded;

#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 27990 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__NextIndex_3  = NextIndex;
	 *mercury__string__Ch_4  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1949 "string.m"
    return mercury__string__succeeded;
#line 1949 "string.m"
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
#line 1941 "string.m"
  {
#line 1941 "string.m"
    MR_bool mercury__string__succeeded;
#line 1941 "string.m"
    MR_Integer mercury__string__Len_9;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 28041 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
#line 2409 "string.m"
}
#line 2143 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_6 ;
	Length =  mercury__string__Len_9 ;
		{
#line 2143 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 28070 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2143 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1941 "string.m"
    if (mercury__string__succeeded)
#line 1941 "string.m"
      {
#line 1953 "string.m"
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
#line 1953 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 28108 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__NextIndex_7  = NextIndex;
	 *mercury__string__Char_8  = Ch;
#line 1953 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1941 "string.m"
      }
#line 1941 "string.m"
    return mercury__string__succeeded;
#line 1941 "string.m"
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
#line 1879 "string.m"
  {
#line 1879 "string.m"
    MR_bool mercury__string__succeeded;
#line 1879 "string.m"
    MR_Char mercury__string__HeadVar__3_3;
#line 1879 "string.m"
    MR_Char mercury__string__CharPrime_12;

#line 1889 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_elem_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 1889 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28167 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_12  = Ch;
#line 1889 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1879 "string.m"
    if (mercury__string__succeeded)
#line 1878 "string.m"
      mercury__string__HeadVar__3_3 = mercury__string__CharPrime_12;
#line 1879 "string.m"
    else
#line 1880 "string.m"
      {
#line 1880 "string.m"
        {
#line 1880 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
        }
#line 1880 "string.m"
      }
#line 1879 "string.m"
    return mercury__string__HeadVar__3_3;
#line 1879 "string.m"
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
#line 1936 "string.m"
  {
#line 1936 "string.m"
    MR_bool mercury__string__succeeded;
#line 1936 "string.m"
    MR_Char mercury__string__HeadVar__3_3;

#line 1936 "string.m"
    {
#line 1936 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__det_index_2_f_0(mercury__string__String_4, mercury__string__Index_5);
    }
#line 1936 "string.m"
    return mercury__string__HeadVar__3_3;
#line 1936 "string.m"
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
#line 1879 "string.m"
  {
#line 1879 "string.m"
    MR_bool mercury__string__succeeded;
#line 1879 "string.m"
    MR_Char mercury__string__CharPrime_7;

#line 1889 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 1889 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28266 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_7  = Ch;
#line 1889 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1879 "string.m"
    if (mercury__string__succeeded)
#line 1878 "string.m"
      *mercury__string__Char_6 = mercury__string__CharPrime_7;
#line 1879 "string.m"
    else
#line 1880 "string.m"
      {
#line 1880 "string.m"
        {
#line 1880 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
#line 1880 "string.m"
          return;
        }
#line 1880 "string.m"
      }
#line 1879 "string.m"
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
#line 1879 "string.m"
  {
#line 1879 "string.m"
    MR_bool mercury__string__succeeded;
#line 1879 "string.m"
    MR_Char mercury__string__C_6;
#line 1879 "string.m"
    MR_Char mercury__string__CharPrime_10;

#line 1889 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{
#line 1889 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28337 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_10  = Ch;
#line 1889 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1879 "string.m"
    if (mercury__string__succeeded)
#line 1878 "string.m"
      mercury__string__C_6 = mercury__string__CharPrime_10;
#line 1879 "string.m"
    else
#line 1880 "string.m"
      {
#line 1880 "string.m"
        {
#line 1880 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
        }
#line 1880 "string.m"
      }
#line 1879 "string.m"
    return mercury__string__C_6;
#line 1879 "string.m"
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
#line 1869 "string.m"
  {
#line 1869 "string.m"
    MR_bool mercury__string__succeeded;
#line 1869 "string.m"
    MR_Char mercury__string__Char0_7;
#line 1855 "string.m"
    MR_Integer mercury__string__Len_12;
#line 1879 "string.m"
    MR_Char mercury__string__CharPrime_24;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 28404 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2409 "string.m"
}
#line 2143 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Int_5 ;
	Length =  mercury__string__Len_12 ;
		{
#line 2143 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 28433 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2143 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1855 "string.m"
    if (mercury__string__succeeded)
#line 1855 "string.m"
      {
#line 1889 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Int_5 ;
		{
#line 1889 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28467 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_24  = Ch;
#line 1889 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1879 "string.m"
        if (mercury__string__succeeded)
#line 1878 "string.m"
          mercury__string__Char0_7 = mercury__string__CharPrime_24;
#line 1879 "string.m"
        else
#line 1880 "string.m"
          {
#line 1880 "string.m"
            {
#line 1880 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
#line 1880 "string.m"
              return;
            }
#line 1880 "string.m"
          }
#line 1879 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 1855 "string.m"
      }
#line 1869 "string.m"
    if (mercury__string__succeeded)
#line 1868 "string.m"
      *mercury__string__Char_6 = mercury__string__Char0_7;
#line 1869 "string.m"
    else
#line 1870 "string.m"
      {
#line 1870 "string.m"
        {
#line 1870 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
#line 1870 "string.m"
          return;
        }
#line 1870 "string.m"
      }
#line 1869 "string.m"
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
#line 1869 "string.m"
  {
#line 1869 "string.m"
    MR_bool mercury__string__succeeded;
#line 1869 "string.m"
    MR_Char mercury__string__C_6;
#line 1869 "string.m"
    MR_Char mercury__string__Char0_10;
#line 1855 "string.m"
    MR_Integer mercury__string__Len_15;
#line 1879 "string.m"
    MR_Char mercury__string__CharPrime_27;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_4 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 28555 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_15  = Length;
#line 2409 "string.m"
}
#line 2143 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__N_5 ;
	Length =  mercury__string__Len_15 ;
		{
#line 2143 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 28584 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2143 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1855 "string.m"
    if (mercury__string__succeeded)
#line 1855 "string.m"
      {
#line 1889 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{
#line 1889 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28618 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_27  = Ch;
#line 1889 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1879 "string.m"
        if (mercury__string__succeeded)
#line 1878 "string.m"
          mercury__string__Char0_10 = mercury__string__CharPrime_27;
#line 1879 "string.m"
        else
#line 1880 "string.m"
          {
#line 1880 "string.m"
            {
#line 1880 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 1880 "string.m"
          }
#line 1879 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 1855 "string.m"
      }
#line 1869 "string.m"
    if (mercury__string__succeeded)
#line 1868 "string.m"
      mercury__string__C_6 = mercury__string__Char0_10;
#line 1869 "string.m"
    else
#line 1870 "string.m"
      {
#line 1870 "string.m"
        {
#line 1870 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
        }
#line 1870 "string.m"
      }
#line 1869 "string.m"
    return mercury__string__C_6;
#line 1869 "string.m"
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
#line 1855 "string.m"
  {
#line 1855 "string.m"
    MR_bool mercury__string__succeeded;
#line 1855 "string.m"
    MR_Integer mercury__string__Len_7;
#line 1879 "string.m"
    MR_Char mercury__string__CharPrime_19;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_4 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 28702 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
#line 2409 "string.m"
}
#line 2143 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_5 ;
	Length =  mercury__string__Len_7 ;
		{
#line 2143 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 28731 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2143 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1855 "string.m"
    if (mercury__string__succeeded)
#line 1855 "string.m"
      {
#line 1889 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 1889 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28765 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_19  = Ch;
#line 1889 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1879 "string.m"
        if (mercury__string__succeeded)
#line 1878 "string.m"
          *mercury__string__Char_6 = mercury__string__CharPrime_19;
#line 1879 "string.m"
        else
#line 1880 "string.m"
          {
#line 1880 "string.m"
            {
#line 1880 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 1880 "string.m"
          }
#line 1879 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 1855 "string.m"
      }
#line 1855 "string.m"
    return mercury__string__succeeded;
#line 1855 "string.m"
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
#line 1838 "string.m"
  {
#line 1838 "string.m"
    MR_bool mercury__string__succeeded;
#line 1838 "string.m"
    MR_Word mercury__string__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1838 "string.m"
    MR_Word mercury__string__V_7_7;
#line 1838 "string.m"
    MR_Word mercury__string__V_6_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1451 "string.m"
    MR_String mercury__string__Str0_23;

#line 145 "list.opt"
    {
#line 145 "list.opt"
      mercury__string__V_7_7 = mercury__list__duplicate_2_3_f_0(mercury__string__TypeCtorInfo_8_8, mercury__string__Count_5, ((MR_Box) (MR_Word) (mercury__string__Char_4)), mercury__string__V_6_15);
    }
#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_7_7, &mercury__string__Str0_23);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      *mercury__string__String_6 = mercury__string__Str0_23;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1452 "string.m"
          return;
        }
#line 1452 "string.m"
      }
#line 1838 "string.m"
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
#line 1836 "string.m"
  {
#line 1836 "string.m"
    MR_bool mercury__string__succeeded;
#line 1836 "string.m"
    MR_String mercury__string__S_6;

#line 1836 "string.m"
    {
#line 1836 "string.m"
      mercury__string__duplicate_char_3_p_0(mercury__string__C_4, mercury__string__N_5, &mercury__string__S_6);
    }
#line 1836 "string.m"
    return mercury__string__S_6;
#line 1836 "string.m"
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
#line 1710 "string.m"
  {
#line 1710 "string.m"
    MR_bool mercury__string__succeeded;

#line 1714 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_code_unit_list_2_p_0

	MR_Word CodeList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CodeList =  mercury__string__CodeList_1 ;
		{
#line 1714 "string.m"

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

#line 28946 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1714 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1710 "string.m"
    return mercury__string__succeeded;
#line 1710 "string.m"
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
#line 1693 "string.m"
  {
#line 1693 "string.m"
    MR_bool mercury__string__succeeded;
#line 1693 "string.m"
    MR_Integer mercury__string__V_6_6;

#line 2409 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2409 "string.m"

    Length = strlen(Str);

#line 28992 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_6_6  = Length;
#line 2409 "string.m"
}
#line 1694 "string.m"
    {
#line 1694 "string.m"
      mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__V_6_6, mercury__string__List_4);
#line 1694 "string.m"
      return;
    }
#line 1693 "string.m"
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
#line 1593 "string.m"
  {
#line 1593 "string.m"
    MR_bool mercury__string__succeeded;

#line 1597 "string.m"
{
#define MR_PROC_LABEL mercury__string__semidet_from_rev_char_list_2_p_0

	MR_Word Chars;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Chars =  mercury__string__Chars_1 ;
		{
#line 1597 "string.m"
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
#line 29089 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1597 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1593 "string.m"
    return mercury__string__succeeded;
#line 1593 "string.m"
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
#line 1589 "string.m"
  {
#line 1589 "string.m"
    MR_bool mercury__string__succeeded;
#line 1589 "string.m"
    MR_String mercury__string__Str0_5;

#line 1587 "string.m"
    {
#line 1587 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Chars_3, &mercury__string__Str0_5);
    }
#line 1589 "string.m"
    if (mercury__string__succeeded)
#line 1588 "string.m"
      *mercury__string__Str_4 = mercury__string__Str0_5;
#line 1589 "string.m"
    else
#line 1590 "string.m"
      {
#line 1590 "string.m"
        {
#line 1590 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
#line 1590 "string.m"
          return;
        }
#line 1590 "string.m"
      }
#line 1589 "string.m"
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
#line 1589 "string.m"
  {
#line 1589 "string.m"
    MR_bool mercury__string__succeeded;
#line 1589 "string.m"
    MR_String mercury__string__S_4;
#line 1589 "string.m"
    MR_String mercury__string__Str0_7;

#line 1587 "string.m"
    {
#line 1587 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_7);
    }
#line 1589 "string.m"
    if (mercury__string__succeeded)
#line 1588 "string.m"
      mercury__string__S_4 = mercury__string__Str0_7;
#line 1589 "string.m"
    else
#line 1590 "string.m"
      {
#line 1590 "string.m"
        {
#line 1590 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
        }
#line 1590 "string.m"
      }
#line 1589 "string.m"
    return mercury__string__S_4;
#line 1589 "string.m"
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
#line 1455 "string.m"
  {
#line 1455 "string.m"
    MR_bool mercury__string__succeeded;

#line 1459 "string.m"
{
#define MR_PROC_LABEL mercury__string__semidet_from_char_list_2_p_0

	MR_Word CharList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CharList =  mercury__string__CharList_1 ;
		{
#line 1459 "string.m"
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
#line 29271 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1459 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1455 "string.m"
    return mercury__string__succeeded;
#line 1455 "string.m"
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
#line 1369 "string.m"
  {
#line 1369 "string.m"
    MR_bool mercury__string__succeeded;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_char_list_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_2 ;
		{
#line 1373 "string.m"
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
#line 29326 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Chars_1  = CharList;
#line 1373 "string.m"
}
#line 1369 "string.m"
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
#line 1451 "string.m"
  {
#line 1451 "string.m"
    MR_bool mercury__string__succeeded;
#line 1451 "string.m"
    MR_String mercury__string__Str0_7;

#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Chars_1, &mercury__string__Str0_7);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      *mercury__string__Str_2 = mercury__string__Str0_7;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1452 "string.m"
          return;
        }
#line 1452 "string.m"
      }
#line 1451 "string.m"
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
#line 1451 "string.m"
  {
#line 1451 "string.m"
    MR_bool mercury__string__succeeded;
#line 1451 "string.m"
    MR_String mercury__string__S_4;
#line 1451 "string.m"
    MR_String mercury__string__Str0_9;

#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_9);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      mercury__string__S_4 = mercury__string__Str0_9;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1452 "string.m"
      }
#line 1451 "string.m"
    return mercury__string__S_4;
#line 1451 "string.m"
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
#line 1451 "string.m"
  {
#line 1451 "string.m"
    MR_bool mercury__string__succeeded;
#line 1451 "string.m"
    MR_String mercury__string__Str0_11;

#line 1449 "string.m"
    {
#line 1449 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__CharList_2, &mercury__string__Str0_11);
    }
#line 1451 "string.m"
    if (mercury__string__succeeded)
#line 1450 "string.m"
      *mercury__string__Str_1 = mercury__string__Str0_11;
#line 1451 "string.m"
    else
#line 1452 "string.m"
      {
#line 1452 "string.m"
        {
#line 1452 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1452 "string.m"
          return;
        }
#line 1452 "string.m"
      }
#line 1451 "string.m"
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
#line 1369 "string.m"
  {
#line 1369 "string.m"
    MR_bool mercury__string__succeeded;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
#line 1373 "string.m"
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
#line 29505 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
#line 1373 "string.m"
}
#line 1369 "string.m"
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
#line 1369 "string.m"
  {
#line 1369 "string.m"
    MR_bool mercury__string__succeeded;
#line 1369 "string.m"
    MR_Word mercury__string__Cs_4;

#line 1373 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S_3 ;
		{
#line 1373 "string.m"
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
#line 29555 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Cs_4  = CharList;
#line 1373 "string.m"
}
#line 1369 "string.m"
    return mercury__string__Cs_4;
#line 1369 "string.m"
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
