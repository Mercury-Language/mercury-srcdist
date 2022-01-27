/*
** Automatically generated from `string.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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



#line 4909 "string.m"
struct mercury__string__foldr_between_2_6_p_4_env_0_s {
#line 4909 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18;
#line 4909 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__Closure_7;
#line 4909 "string.m"
  MR_String mercury__string__foldr_between_2_6_p_4_env_0__String_8;
#line 4909 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__Start_9;
#line 4909 "string.m"
  MR_Box * mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
#line 4909 "string.m"
  MR_Cont mercury__string__foldr_between_2_6_p_4_env_0__cont;
#line 4909 "string.m"
  void * mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr;
#line 4920 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__J_12;
#line 4918 "string.m"
  MR_Box mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
#line 4909 "string.m"
};

#line 4907 "string.m"
struct mercury__string__foldr_between_2_6_p_3_env_0_s {
#line 4907 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18;
#line 4907 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__Closure_7;
#line 4907 "string.m"
  MR_String mercury__string__foldr_between_2_6_p_3_env_0__String_8;
#line 4907 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__Start_9;
#line 4907 "string.m"
  MR_Box * mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
#line 4907 "string.m"
  MR_Cont mercury__string__foldr_between_2_6_p_3_env_0__cont;
#line 4907 "string.m"
  void * mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr;
#line 4920 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__J_12;
#line 4918 "string.m"
  MR_Box mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
#line 4907 "string.m"
};

#line 4854 "string.m"
struct mercury__string__foldl2_between_2_8_p_5_env_0_s {
#line 4854 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25;
#line 4854 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26;
#line 4854 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9;
#line 4854 "string.m"
  MR_String mercury__string__foldl2_between_2_8_p_5_env_0__String_10;
#line 4854 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__End_12;
#line 4854 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18;
#line 4854 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20;
#line 4854 "string.m"
  MR_Cont mercury__string__foldl2_between_2_8_p_5_env_0__cont;
#line 4854 "string.m"
  void * mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr;
#line 4865 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__J_15;
#line 4863 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21;
#line 4863 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22;
#line 4854 "string.m"
};

#line 4852 "string.m"
struct mercury__string__foldl2_between_2_8_p_4_env_0_s {
#line 4852 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25;
#line 4852 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26;
#line 4852 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9;
#line 4852 "string.m"
  MR_String mercury__string__foldl2_between_2_8_p_4_env_0__String_10;
#line 4852 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__End_12;
#line 4852 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18;
#line 4852 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20;
#line 4852 "string.m"
  MR_Cont mercury__string__foldl2_between_2_8_p_4_env_0__cont;
#line 4852 "string.m"
  void * mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr;
#line 4865 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__J_15;
#line 4863 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21;
#line 4863 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22;
#line 4852 "string.m"
};

#line 4827 "string.m"
struct mercury__string__foldl_between_2_6_p_4_env_0_s {
#line 4827 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18;
#line 4827 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__Closure_7;
#line 4827 "string.m"
  MR_String mercury__string__foldl_between_2_6_p_4_env_0__String_8;
#line 4827 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__End_10;
#line 4827 "string.m"
  MR_Box * mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
#line 4827 "string.m"
  MR_Cont mercury__string__foldl_between_2_6_p_4_env_0__cont;
#line 4827 "string.m"
  void * mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr;
#line 4838 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__J_12;
#line 4836 "string.m"
  MR_Box mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
#line 4827 "string.m"
};

#line 4825 "string.m"
struct mercury__string__foldl_between_2_6_p_3_env_0_s {
#line 4825 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18;
#line 4825 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__Closure_7;
#line 4825 "string.m"
  MR_String mercury__string__foldl_between_2_6_p_3_env_0__String_8;
#line 4825 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__End_10;
#line 4825 "string.m"
  MR_Box * mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
#line 4825 "string.m"
  MR_Cont mercury__string__foldl_between_2_6_p_3_env_0__cont;
#line 4825 "string.m"
  void * mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr;
#line 4838 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__J_12;
#line 4836 "string.m"
  MR_Box mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
#line 4825 "string.m"
};

#line 3483 "string.m"
struct mercury__string__mercury_append_3_p_3_env_0_s {
#line 3483 "string.m"
  MR_String * mercury__string__mercury_append_3_p_3_env_0__X_4;
#line 3483 "string.m"
  MR_String * mercury__string__mercury_append_3_p_3_env_0__Y_5;
#line 3483 "string.m"
  MR_Cont mercury__string__mercury_append_3_p_3_env_0__cont;
#line 3483 "string.m"
  void * mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr;
#line 3485 "string.m"
  MR_bool mercury__string__mercury_append_3_p_3_env_0__succeeded;
#line 3485 "string.m"
  MR_Word mercury__string__mercury_append_3_p_3_env_0__XList_7;
#line 3485 "string.m"
  MR_Word mercury__string__mercury_append_3_p_3_env_0__YList_8;
#line 3483 "string.m"
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

#line 428 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_56_95_95_91_50_93_95_48_3_f_in__list_0(
#line 428 "list.int"
  MR_String mercury__string__V_36_36,
#line 428 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 428 "list.int"
  MR_Word mercury__string__HeadVar__3_3);

#line 4821 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_53_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 4821 "string.m"
  MR_String mercury__string__V_21_21,
#line 4821 "string.m"
  MR_String mercury__string__String_8,
#line 4821 "string.m"
  MR_Integer mercury__string__I_9,
#line 4821 "string.m"
  MR_Integer mercury__string__End_10,
#line 4821 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4821 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15);

#line 4821 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4821 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4821 "string.m"
  MR_String mercury__string__String_8,
#line 4821 "string.m"
  MR_Integer mercury__string__I_9,
#line 4821 "string.m"
  MR_Integer mercury__string__End_10,
#line 4821 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4821 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4901 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4901 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4901 "string.m"
  MR_String mercury__string__String_8,
#line 4901 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4901 "string.m"
  MR_Integer mercury__string__I_10,
#line 4901 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4901 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4823 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_55_95_95_91_50_93_95_48_6_p_0(
#line 4823 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4823 "string.m"
  MR_String mercury__string__String_8,
#line 4823 "string.m"
  MR_Integer mercury__string__I_9,
#line 4823 "string.m"
  MR_Integer mercury__string__End_10,
#line 4823 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4823 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 4823 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_50_93_95_48_6_p_0(
#line 4823 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4823 "string.m"
  MR_String mercury__string__String_8,
#line 4823 "string.m"
  MR_Integer mercury__string__I_9,
#line 4823 "string.m"
  MR_Integer mercury__string__End_10,
#line 4823 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4823 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 127 "list.int"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_String mercury__string__V_20_20,
#line 127 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__string__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__string__HeadVar__4_4);

#line 4901 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_52_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4901 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4901 "string.m"
  MR_String mercury__string__String_8,
#line 4901 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4901 "string.m"
  MR_Integer mercury__string__I_10,
#line 4901 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4901 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4821 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4821 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4821 "string.m"
  MR_String mercury__string__String_8,
#line 4821 "string.m"
  MR_Integer mercury__string__I_9,
#line 4821 "string.m"
  MR_Integer mercury__string__End_10,
#line 4821 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4821 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4365 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_53_95_95_91_50_93_95_48_6_p_0(
#line 4365 "string.m"
  MR_Char mercury__string__V_21_21,
#line 4365 "string.m"
  MR_String mercury__string__Str_8,
#line 4365 "string.m"
  MR_Integer mercury__string__I_9,
#line 4365 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4365 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4365 "string.m"
  MR_Word * mercury__string__Acc_12);

#line 939 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(
#line 939 "string.m"
  MR_Integer mercury__string__V_20_20,
#line 939 "string.m"
  MR_String mercury__string__String_8,
#line 939 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 939 "string.m"
  MR_Integer mercury__string__End0_10,
#line 939 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 939 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 4346 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(
#line 4346 "string.m"
  MR_Word mercury__string__V_11_11,
#line 4346 "string.m"
  MR_String mercury__string__String_6,
#line 4346 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4346 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_String mercury__string__V_12_12,
#line 311 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Char mercury__string__V_12_12,
#line 311 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 311 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Char mercury__string__V_12_12,
#line 311 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 311 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 4901 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2__ho54_6_p_0(
#line 4901 "string.m"
  MR_String mercury__string__String_8,
#line 4901 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4901 "string.m"
  MR_Integer mercury__string__I_10,
#line 4901 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4901 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15);

#line 4901 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2__ho53_6_p_0(
#line 4901 "string.m"
  MR_String mercury__string__String_8,
#line 4901 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4901 "string.m"
  MR_Integer mercury__string__I_10,
#line 4901 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4901 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15);

#line 4346 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho10__ho51_4_p_0(
#line 4346 "string.m"
  MR_String mercury__string__String_6,
#line 4346 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4346 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 4326 "string.m"
static void MR_CALL 
mercury__string__words_loop__ho40_4_p_0(
#line 4326 "string.m"
  MR_String mercury__string__String_6,
#line 4326 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4326 "string.m"
  MR_Word * mercury__string__Words_8);

#line 4346 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho39_4_p_0(
#line 4346 "string.m"
  MR_String mercury__string__String_6,
#line 4346 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4346 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 3159 "string.m"
static void MR_CALL 
mercury__string__suffix_length_loop__ho37_4_p_0(
#line 3159 "string.m"
  MR_String mercury__string__S_6,
#line 3159 "string.m"
  MR_Integer mercury__string__I_7,
#line 3159 "string.m"
  MR_Integer * mercury__string__Index_8);

#line 3142 "string.m"
static void MR_CALL 
mercury__string__prefix_length_loop__ho36_4_p_0(
#line 3142 "string.m"
  MR_String mercury__string__S_6,
#line 3142 "string.m"
  MR_Integer mercury__string__I_7,
#line 3142 "string.m"
  MR_Integer * mercury__string__Index_8);

#line 3070 "string.m"
static MR_bool MR_CALL 
mercury__string__all_match_loop__ho34_3_p_0(
#line 3070 "string.m"
  MR_String mercury__string__String_5,
#line 3070 "string.m"
  MR_Integer mercury__string__Cur_6);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho16_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 428 "list.int"
static MR_Word MR_CALL 
mercury__string__map_corresponding__ho15_3_f_in__list_0(
#line 428 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 428 "list.int"
  MR_Word mercury__string__HeadVar__3_3);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho13_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 127 "list.int"
static void MR_CALL 
mercury__string__foldl__ho8_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 127 "list.int"
  MR_Integer mercury__string__HeadVar__3_3,
#line 127 "list.int"
  MR_Integer * mercury__string__HeadVar__4_4);

#line 4766 "string.m"
static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__4766__1_2_f_0(
#line 4766 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4766 "string.m"
  MR_String mercury__string__HeadVar__2_60);

#line 4636 "string.m"
static MR_Word MR_CALL 
mercury__string__IntroducedFrom__func__replace_all__4636__1_3_f_0(
#line 4636 "string.m"
  MR_String mercury__string__Subst_7,
#line 4636 "string.m"
  MR_Char mercury__string__HeadVar__2_16,
#line 4636 "string.m"
  MR_Word mercury__string__HeadVar__3_17);

#line 4918 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
#line 4918 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4918 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
#line 4918 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4863 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
#line 4863 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4863 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
#line 4863 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4836 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
#line 4836 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4836 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
#line 4836 "string.m"
  void * mercury__string__env_ptr_arg);

#line 3485 "string.m"
static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
#line 3485 "string.m"
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
#include "benchmarking.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "io.mh"
#include "math.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "version_array.mh"

#line 5175 "string.m"
MR_bool 
ML_string_to_float(
#line 5175 "string.m"
  MR_String mercury__string__FloatString_1,
#line 5175 "string.m"
  MR_Float * mercury__string__FloatVal_2)
#line 5175 "string.m"
{
#line 5175 "string.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__string__to_float_2_p_0((MR_String) mercury__string__FloatString_1, (MR_Float *) mercury__string__FloatVal_2);
	return ret_value;
}


#line 975 "string.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 983 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 988 "string.c"
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

#line 1003 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1008 "string.c"
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

#line 1023 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_0[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0
};

#line 1028 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_1[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

#line 1033 "string.c"
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

#line 1047 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_justified_column_0[2] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0,
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

#line 1053 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justified_column_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1059 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_justified_column_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string____Unify____justified_column_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____justified_column_0_0_10001)),
  (MR_String) "string",
  (MR_String) "justified_column",
  {     mercury__string__string__du_name_ordered_justified_column_0 },
  {     mercury__string__string__du_ptag_ordered_justified_column_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_justified_column_0
};

#line 1076 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_0 = {
  (MR_String) "just_left",
  (MR_Integer) 0
};

#line 1082 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_1 = {
  (MR_String) "just_right",
  (MR_Integer) 1
};

#line 1088 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_value_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

#line 1094 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_name_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

#line 1100 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justify_sense_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1106 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_justify_sense_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string____Unify____justify_sense_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____justify_sense_0_0_10001)),
  (MR_String) "string",
  (MR_String) "justify_sense",
  {     mercury__string__string__enum_name_ordered_justify_sense_0 },
  {     mercury__string__string__enum_value_ordered_justify_sense_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_justify_sense_0
};

#line 1123 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_line_0[1] = {
  (MR_Integer) 0
};

#line 1128 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_line_0 = {
  (MR_String) "line",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1135 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_line_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__string____Unify____line_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____line_0_0_10001)),
  (MR_String) "string",
  (MR_String) "line",
  {     &mercury__string__string__notag_functor_desc_line_0 },
  {     &mercury__string__string__notag_functor_desc_line_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_line_0
};

#line 1152 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1157 "string.c"
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

#line 1172 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1177 "string.c"
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

#line 1192 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1197 "string.c"
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

#line 1212 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 1217 "string.c"
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

#line 1232 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_0[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_0
};

#line 1237 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_1[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_1
};

#line 1242 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_2[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

#line 1247 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3
};

#line 1252 "string.c"
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

#line 1276 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[4] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3,
  &mercury__string__string__du_functor_desc_poly_type_0_0,
  &mercury__string__string__du_functor_desc_poly_type_0_1,
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

#line 1284 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1292 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_poly_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string____Unify____poly_type_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____poly_type_0_0_10001)),
  (MR_String) "string",
  (MR_String) "poly_type",
  {     mercury__string__string__du_name_ordered_poly_type_0 },
  {     mercury__string__string__du_ptag_ordered_poly_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_poly_type_0
};

#line 1309 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_text_file_0[1] = {
  (MR_Integer) 0
};

#line 1314 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_text_file_0 = {
  (MR_String) "text_file",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1321 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_text_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__string____Unify____text_file_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____text_file_0_0_10001)),
  (MR_String) "string",
  (MR_String) "text_file",
  {     &mercury__string__string__notag_functor_desc_text_file_0 },
  {     &mercury__string__string__notag_functor_desc_text_file_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_text_file_0
};

#line 1338 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
#line 1341 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1343 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1345 "string.c"
{
#line 1347 "string.c"
  {
#line 1349 "string.c"
    MR_bool mercury__string__succeeded;

#line 1352 "string.c"
    {
#line 1354 "string.c"
      mercury__string__succeeded = mercury__string____Unify____justified_column_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1357 "string.c"
    return mercury__string__succeeded;
#line 1359 "string.c"
  }
#line 1361 "string.c"
}

#line 1364 "string.c"
static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
#line 1367 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1369 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1371 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1373 "string.c"
{
#line 1375 "string.c"
  {
#line 1377 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1380 "string.c"
    {
#line 1382 "string.c"
      mercury__string____Compare____justified_column_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1385 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1387 "string.c"
  }
#line 1389 "string.c"
}

#line 1392 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
#line 1395 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1397 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1399 "string.c"
{
#line 1401 "string.c"
  {
#line 1403 "string.c"
    MR_bool mercury__string__succeeded;

#line 1406 "string.c"
    {
#line 1408 "string.c"
      mercury__string__succeeded = mercury__string____Unify____justify_sense_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1411 "string.c"
    return mercury__string__succeeded;
#line 1413 "string.c"
  }
#line 1415 "string.c"
}

#line 1418 "string.c"
static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
#line 1421 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1423 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1425 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1427 "string.c"
{
#line 1429 "string.c"
  {
#line 1431 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1434 "string.c"
    {
#line 1436 "string.c"
      mercury__string____Compare____justify_sense_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1439 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1441 "string.c"
  }
#line 1443 "string.c"
}

#line 1446 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
#line 1449 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1451 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1453 "string.c"
{
#line 1455 "string.c"
  {
#line 1457 "string.c"
    MR_bool mercury__string__succeeded;

#line 1460 "string.c"
    {
#line 1462 "string.c"
      mercury__string__succeeded = mercury__string____Unify____line_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1465 "string.c"
    return mercury__string__succeeded;
#line 1467 "string.c"
  }
#line 1469 "string.c"
}

#line 1472 "string.c"
static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
#line 1475 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1477 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1479 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1481 "string.c"
{
#line 1483 "string.c"
  {
#line 1485 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1488 "string.c"
    {
#line 1490 "string.c"
      mercury__string____Compare____line_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1493 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1495 "string.c"
  }
#line 1497 "string.c"
}

#line 1500 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
#line 1503 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1505 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1507 "string.c"
{
#line 1509 "string.c"
  {
#line 1511 "string.c"
    MR_bool mercury__string__succeeded;

#line 1514 "string.c"
    {
#line 1516 "string.c"
      mercury__string__succeeded = mercury__string____Unify____poly_type_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1519 "string.c"
    return mercury__string__succeeded;
#line 1521 "string.c"
  }
#line 1523 "string.c"
}

#line 1526 "string.c"
static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
#line 1529 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1531 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1533 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1535 "string.c"
{
#line 1537 "string.c"
  {
#line 1539 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1542 "string.c"
    {
#line 1544 "string.c"
      mercury__string____Compare____poly_type_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1547 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1549 "string.c"
  }
#line 1551 "string.c"
}

#line 1554 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
#line 1557 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1559 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1561 "string.c"
{
#line 1563 "string.c"
  {
#line 1565 "string.c"
    MR_bool mercury__string__succeeded;

#line 1568 "string.c"
    {
#line 1570 "string.c"
      mercury__string__succeeded = mercury__string____Unify____text_file_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1573 "string.c"
    return mercury__string__succeeded;
#line 1575 "string.c"
  }
#line 1577 "string.c"
}

#line 1580 "string.c"
static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
#line 1583 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1585 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1587 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1589 "string.c"
{
#line 1591 "string.c"
  {
#line 1593 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1596 "string.c"
    {
#line 1598 "string.c"
      mercury__string____Compare____text_file_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1601 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1603 "string.c"
  }
#line 1605 "string.c"
}

#line 428 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_56_95_95_91_50_93_95_48_3_f_in__list_0(
#line 428 "list.int"
  MR_String mercury__string__V_36_36,
#line 428 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 428 "list.int"
  MR_Word mercury__string__HeadVar__3_3)
#line 428 "list.int"
{
#line 714 "list.opt"
  {
#line 714 "list.opt"
    MR_bool mercury__string__succeeded;
#line 714 "list.opt"
    MR_Word mercury__string__HeadVar__4_4;

#line 714 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "list.opt"
      if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "list.opt"
        mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 714 "list.opt"
      else
#line 715 "list.opt"
        {
#line 66 "require.opt"
          {
#line 66 "require.opt"
            mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          }
#line 715 "list.opt"
        }
#line 714 "list.opt"
    else
#line 714 "list.opt"
      {
#line 714 "list.opt"
        MR_Word mercury__string__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 714 "list.opt"
        MR_String mercury__string__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 714 "list.opt"
        if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 720 "list.opt"
          {
#line 66 "require.opt"
            {
#line 66 "require.opt"
              mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
            }
#line 720 "list.opt"
          }
#line 714 "list.opt"
        else
#line 725 "list.opt"
          {
#line 725 "list.opt"
            MR_String mercury__string__V_21_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 725 "list.opt"
            MR_Word mercury__string__V_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 1)));
#line 725 "list.opt"
            MR_String mercury__string__V_23_25;
#line 725 "list.opt"
            MR_Word mercury__string__V_24_26;
#line 725 "list.opt"
            MR_String mercury__string__V_48_48;

#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_56_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_36_36 ;
	S2 =  mercury__string__V_35_35 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 1698 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_48_48  = S3;
#line 3390 "string.m"
}
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_56_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_21_23 ;
	S2 =  mercury__string__V_48_48 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 1725 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_23_25  = S3;
#line 3390 "string.m"
}
#line 727 "list.opt"
            {
#line 727 "list.opt"
              mercury__string__V_24_26 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_56_95_95_91_50_93_95_48_3_f_in__list_0(mercury__string__V_36_36, mercury__string__V_34_34, mercury__string__V_22_24);
            }
#line 725 "list.opt"
            {
#line 725 "list.opt"
              mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 0) = ((MR_Box) (mercury__string__V_23_25));
#line 725 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 1) = ((MR_Box) (mercury__string__V_24_26));
#line 725 "list.opt"
            }
#line 725 "list.opt"
          }
#line 714 "list.opt"
      }
#line 714 "list.opt"
    return mercury__string__HeadVar__4_4;
#line 714 "list.opt"
  }
#line 428 "list.int"
}

#line 4821 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_53_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 4821 "string.m"
  MR_String mercury__string__V_21_21,
#line 4821 "string.m"
  MR_String mercury__string__String_8,
#line 4821 "string.m"
  MR_Integer mercury__string__I_9,
#line 4821 "string.m"
  MR_Integer mercury__string__End_10,
#line 4821 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4821 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15)
#line 4821 "string.m"
{
#line 4838 "string.m"
  while (MR_TRUE)
#line 4838 "string.m"
    {
#line 4838 "string.m"
      /* tailcall optimized into a loop */
#line 4838 "string.m"
      {
#line 4838 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4838 "string.m"
        MR_Integer mercury__string__J_12;
#line 4838 "string.m"
        MR_Char mercury__string__Char_13;

#line 4832 "string.m"
        if (mercury__string__succeeded)
#line 4832 "string.m"
          {
#line 2124 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_53_95_95_91_49_44_32_51_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1819 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4832 "string.m"
            if (mercury__string__succeeded)
#line 4834 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4832 "string.m"
          }
#line 4838 "string.m"
        if (mercury__string__succeeded)
#line 4836 "string.m"
          {
#line 4836 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4793 "string.m"
            {
#line 4793 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__IntroducedFrom__func__replace_all__4636__1_3_f_0(mercury__string__V_21_21, mercury__string__Char_13, mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4837 "string.m"
            /* direct tailcall eliminated */
#line 4837 "string.m"
            {
#line 4837 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4837 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4837 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4837 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4837 "string.m"
            }
#line 4837 "string.m"
            continue;
#line 4836 "string.m"
          }
#line 4838 "string.m"
        else
#line 4838 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4838 "string.m"
      }
#line 4838 "string.m"
      break;
#line 4838 "string.m"
    }
#line 4821 "string.m"
}

#line 4821 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4821 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4821 "string.m"
  MR_String mercury__string__String_8,
#line 4821 "string.m"
  MR_Integer mercury__string__I_9,
#line 4821 "string.m"
  MR_Integer mercury__string__End_10,
#line 4821 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4821 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4821 "string.m"
{
#line 4838 "string.m"
  while (MR_TRUE)
#line 4838 "string.m"
    {
#line 4838 "string.m"
      /* tailcall optimized into a loop */
#line 4838 "string.m"
      {
#line 4838 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4838 "string.m"
        MR_Integer mercury__string__J_12;
#line 4838 "string.m"
        MR_Char mercury__string__Char_13;

#line 4832 "string.m"
        if (mercury__string__succeeded)
#line 4832 "string.m"
          {
#line 2124 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1941 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4832 "string.m"
            if (mercury__string__succeeded)
#line 4834 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4832 "string.m"
          }
#line 4838 "string.m"
        if (mercury__string__succeeded)
#line 4836 "string.m"
          {
#line 4836 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4793 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4793 "string.m"
            {
#line 4793 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4837 "string.m"
            /* direct tailcall eliminated */
#line 4837 "string.m"
            {
#line 4837 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4837 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4837 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4837 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4837 "string.m"
            }
#line 4837 "string.m"
            continue;
#line 4836 "string.m"
          }
#line 4838 "string.m"
        else
#line 4838 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4838 "string.m"
      }
#line 4838 "string.m"
      break;
#line 4838 "string.m"
    }
#line 4821 "string.m"
}

#line 4901 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4901 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4901 "string.m"
  MR_String mercury__string__String_8,
#line 4901 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4901 "string.m"
  MR_Integer mercury__string__I_10,
#line 4901 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4901 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4901 "string.m"
{
#line 4920 "string.m"
  while (MR_TRUE)
#line 4920 "string.m"
    {
#line 4920 "string.m"
      /* tailcall optimized into a loop */
#line 4920 "string.m"
      {
#line 4920 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4920 "string.m"
        MR_Integer mercury__string__J_12;
#line 4920 "string.m"
        MR_Char mercury__string__Char_13;

#line 4914 "string.m"
        if (mercury__string__succeeded)
#line 4914 "string.m"
          {
#line 2213 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{
#line 2213 "string.m"

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

#line 2068 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4914 "string.m"
            if (mercury__string__succeeded)
#line 4916 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4914 "string.m"
          }
#line 4920 "string.m"
        if (mercury__string__succeeded)
#line 4918 "string.m"
          {
#line 4918 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4885 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4885 "string.m"
            {
#line 4885 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4919 "string.m"
            /* direct tailcall eliminated */
#line 4919 "string.m"
            {
#line 4919 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4919 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4919 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4919 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4919 "string.m"
            }
#line 4919 "string.m"
            continue;
#line 4918 "string.m"
          }
#line 4920 "string.m"
        else
#line 4920 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4920 "string.m"
      }
#line 4920 "string.m"
      break;
#line 4920 "string.m"
    }
#line 4901 "string.m"
}

#line 4823 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_55_95_95_91_50_93_95_48_6_p_0(
#line 4823 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4823 "string.m"
  MR_String mercury__string__String_8,
#line 4823 "string.m"
  MR_Integer mercury__string__I_9,
#line 4823 "string.m"
  MR_Integer mercury__string__End_10,
#line 4823 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4823 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 4823 "string.m"
{
#line 4838 "string.m"
  while (MR_TRUE)
#line 4838 "string.m"
    {
#line 4838 "string.m"
      /* tailcall optimized into a loop */
#line 4838 "string.m"
      {
#line 4838 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4838 "string.m"
        MR_Integer mercury__string__J_12;
#line 4838 "string.m"
        MR_Char mercury__string__Char_13;

#line 4832 "string.m"
        if (mercury__string__succeeded)
#line 4832 "string.m"
          {
#line 2124 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_55_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2192 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4832 "string.m"
            if (mercury__string__succeeded)
#line 4834 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4832 "string.m"
          }
#line 4838 "string.m"
        if (mercury__string__succeeded)
#line 4836 "string.m"
          {
#line 4836 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4836 "string.m"
            MR_Integer mercury__string__M_24;
#line 4836 "string.m"
            MR_Integer mercury__string__V_25_25;

#line 5157 "string.m"
            {
#line 5157 "string.m"
              mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__V_19_19, mercury__string__Char_13, &mercury__string__M_24);
            }
#line 4836 "string.m"
            if (mercury__string__succeeded)
#line 4836 "string.m"
              {
#line 5158 "string.m"
                mercury__string__V_25_25 = (mercury__string__V_19_19 * mercury__string__STATE_VARIABLE_Acc_0_14);
#line 5158 "string.m"
                mercury__string__STATE_VARIABLE_Acc_16_16 = (mercury__string__V_25_25 + mercury__string__M_24);
#line 5161 "string.m"
                mercury__string__succeeded = (mercury__string__STATE_VARIABLE_Acc_0_14 <= mercury__string__STATE_VARIABLE_Acc_16_16);
#line 4836 "string.m"
                if (mercury__string__succeeded)
#line 4837 "string.m"
                  {
#line 4837 "string.m"
                    /* direct tailcall eliminated */
#line 4837 "string.m"
                    {
#line 4837 "string.m"
                      MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4837 "string.m"
                      MR_Integer mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4837 "string.m"
                      mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4837 "string.m"
                      mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4837 "string.m"
                    }
#line 4837 "string.m"
                    continue;
#line 4837 "string.m"
                  }
#line 4836 "string.m"
              }
#line 4836 "string.m"
          }
#line 4838 "string.m"
        else
#line 4838 "string.m"
          {
#line 4838 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4838 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4838 "string.m"
          }
#line 4838 "string.m"
        return mercury__string__succeeded;
#line 4838 "string.m"
      }
#line 4838 "string.m"
      break;
#line 4838 "string.m"
    }
#line 4823 "string.m"
}

#line 4823 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_50_93_95_48_6_p_0(
#line 4823 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4823 "string.m"
  MR_String mercury__string__String_8,
#line 4823 "string.m"
  MR_Integer mercury__string__I_9,
#line 4823 "string.m"
  MR_Integer mercury__string__End_10,
#line 4823 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4823 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 4823 "string.m"
{
#line 4838 "string.m"
  while (MR_TRUE)
#line 4838 "string.m"
    {
#line 4838 "string.m"
      /* tailcall optimized into a loop */
#line 4838 "string.m"
      {
#line 4838 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4838 "string.m"
        MR_Integer mercury__string__J_12;
#line 4838 "string.m"
        MR_Char mercury__string__Char_13;

#line 4832 "string.m"
        if (mercury__string__succeeded)
#line 4832 "string.m"
          {
#line 2124 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2344 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4832 "string.m"
            if (mercury__string__succeeded)
#line 4834 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4832 "string.m"
          }
#line 4838 "string.m"
        if (mercury__string__succeeded)
#line 4836 "string.m"
          {
#line 4836 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4836 "string.m"
            MR_Integer mercury__string__M_24;
#line 4836 "string.m"
            MR_Integer mercury__string__V_25_25;

#line 5167 "string.m"
            {
#line 5167 "string.m"
              mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__V_19_19, mercury__string__Char_13, &mercury__string__M_24);
            }
#line 4836 "string.m"
            if (mercury__string__succeeded)
#line 4836 "string.m"
              {
#line 5168 "string.m"
                mercury__string__V_25_25 = (mercury__string__V_19_19 * mercury__string__STATE_VARIABLE_Acc_0_14);
#line 5168 "string.m"
                mercury__string__STATE_VARIABLE_Acc_16_16 = (mercury__string__V_25_25 - mercury__string__M_24);
#line 5171 "string.m"
                mercury__string__succeeded = (mercury__string__STATE_VARIABLE_Acc_16_16 <= mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4836 "string.m"
                if (mercury__string__succeeded)
#line 4837 "string.m"
                  {
#line 4837 "string.m"
                    /* direct tailcall eliminated */
#line 4837 "string.m"
                    {
#line 4837 "string.m"
                      MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4837 "string.m"
                      MR_Integer mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4837 "string.m"
                      mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4837 "string.m"
                      mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4837 "string.m"
                    }
#line 4837 "string.m"
                    continue;
#line 4837 "string.m"
                  }
#line 4836 "string.m"
              }
#line 4836 "string.m"
          }
#line 4838 "string.m"
        else
#line 4838 "string.m"
          {
#line 4838 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4838 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4838 "string.m"
          }
#line 4838 "string.m"
        return mercury__string__succeeded;
#line 4838 "string.m"
      }
#line 4838 "string.m"
      break;
#line 4838 "string.m"
    }
#line 4823 "string.m"
}

#line 127 "list.int"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_String mercury__string__V_20_20,
#line 127 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__string__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__string__HeadVar__4_4)
#line 127 "list.int"
{
#line 391 "list.opt"
  while (MR_TRUE)
#line 391 "list.opt"
    {
#line 391 "list.opt"
      /* tailcall optimized into a loop */
#line 391 "list.opt"
      {
#line 391 "list.opt"
        MR_bool mercury__string__succeeded;

#line 391 "list.opt"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "list.opt"
          *mercury__string__HeadVar__4_4 = mercury__string__HeadVar__3_3;
#line 391 "list.opt"
        else
#line 393 "list.opt"
          {
#line 393 "list.opt"
            MR_Word mercury__string__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "list.opt"
            MR_Word mercury__string__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "list.opt"
            MR_Word mercury__string__V_15_13;

#line 4957 "string.m"
            {
#line 4957 "string.m"
              mercury__string__V_15_13 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_56_95_95_91_50_93_95_48_3_f_in__list_0(mercury__string__V_20_20, mercury__string__V_10_9, mercury__string__HeadVar__3_3);
            }
#line 395 "list.opt"
            /* direct tailcall eliminated */
#line 395 "list.opt"
            {
#line 395 "list.opt"
              MR_Word mercury__string__HeadVar__2__tmp_copy_2 = mercury__string__V_11_10;
#line 395 "list.opt"
              MR_Word mercury__string__HeadVar__3__tmp_copy_3 = mercury__string__V_15_13;

#line 395 "list.opt"
              mercury__string__HeadVar__3_3 = mercury__string__HeadVar__3__tmp_copy_3;
#line 395 "list.opt"
              mercury__string__HeadVar__2_2 = mercury__string__HeadVar__2__tmp_copy_2;
#line 395 "list.opt"
            }
#line 395 "list.opt"
            continue;
#line 393 "list.opt"
          }
#line 391 "list.opt"
      }
#line 391 "list.opt"
      break;
#line 391 "list.opt"
    }
#line 127 "list.int"
}

#line 4901 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_52_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4901 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4901 "string.m"
  MR_String mercury__string__String_8,
#line 4901 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4901 "string.m"
  MR_Integer mercury__string__I_10,
#line 4901 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4901 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4901 "string.m"
{
#line 4920 "string.m"
  while (MR_TRUE)
#line 4920 "string.m"
    {
#line 4920 "string.m"
      /* tailcall optimized into a loop */
#line 4920 "string.m"
      {
#line 4920 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4920 "string.m"
        MR_Integer mercury__string__J_12;
#line 4920 "string.m"
        MR_Char mercury__string__Char_13;

#line 4914 "string.m"
        if (mercury__string__succeeded)
#line 4914 "string.m"
          {
#line 2213 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_52_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{
#line 2213 "string.m"

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

#line 2571 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4914 "string.m"
            if (mercury__string__succeeded)
#line 4916 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4914 "string.m"
          }
#line 4920 "string.m"
        if (mercury__string__succeeded)
#line 4918 "string.m"
          {
#line 4918 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4892 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4892 "string.m"
            {
#line 4892 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4919 "string.m"
            /* direct tailcall eliminated */
#line 4919 "string.m"
            {
#line 4919 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4919 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4919 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4919 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4919 "string.m"
            }
#line 4919 "string.m"
            continue;
#line 4918 "string.m"
          }
#line 4920 "string.m"
        else
#line 4920 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4920 "string.m"
      }
#line 4920 "string.m"
      break;
#line 4920 "string.m"
    }
#line 4901 "string.m"
}

#line 4821 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4821 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4821 "string.m"
  MR_String mercury__string__String_8,
#line 4821 "string.m"
  MR_Integer mercury__string__I_9,
#line 4821 "string.m"
  MR_Integer mercury__string__End_10,
#line 4821 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4821 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4821 "string.m"
{
#line 4838 "string.m"
  while (MR_TRUE)
#line 4838 "string.m"
    {
#line 4838 "string.m"
      /* tailcall optimized into a loop */
#line 4838 "string.m"
      {
#line 4838 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4838 "string.m"
        MR_Integer mercury__string__J_12;
#line 4838 "string.m"
        MR_Char mercury__string__Char_13;

#line 4832 "string.m"
        if (mercury__string__succeeded)
#line 4832 "string.m"
          {
#line 2124 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2695 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4832 "string.m"
            if (mercury__string__succeeded)
#line 4834 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4832 "string.m"
          }
#line 4838 "string.m"
        if (mercury__string__succeeded)
#line 4836 "string.m"
          {
#line 4836 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4810 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4810 "string.m"
            {
#line 4810 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4837 "string.m"
            /* direct tailcall eliminated */
#line 4837 "string.m"
            {
#line 4837 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4837 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4837 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4837 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4837 "string.m"
            }
#line 4837 "string.m"
            continue;
#line 4836 "string.m"
          }
#line 4838 "string.m"
        else
#line 4838 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4838 "string.m"
      }
#line 4838 "string.m"
      break;
#line 4838 "string.m"
    }
#line 4821 "string.m"
}

#line 4365 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_53_95_95_91_50_93_95_48_6_p_0(
#line 4365 "string.m"
  MR_Char mercury__string__V_21_21,
#line 4365 "string.m"
  MR_String mercury__string__Str_8,
#line 4365 "string.m"
  MR_Integer mercury__string__I_9,
#line 4365 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4365 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4365 "string.m"
  MR_Word * mercury__string__Acc_12)
#line 4365 "string.m"
{
#line 4385 "string.m"
  while (MR_TRUE)
#line 4385 "string.m"
    {
#line 4385 "string.m"
      /* tailcall optimized into a loop */
#line 4385 "string.m"
      {
#line 4385 "string.m"
        MR_bool mercury__string__succeeded;
#line 4385 "string.m"
        MR_Integer mercury__string__J_13;
#line 4385 "string.m"
        MR_Char mercury__string__C_14;

#line 2213 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_53_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 2213 "string.m"

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

#line 2818 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_13  = PrevIndex;
	 mercury__string__C_14  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4385 "string.m"
        if (mercury__string__succeeded)
#line 4381 "string.m"
          {
#line 4394 "string.m"
            mercury__string__succeeded = (mercury__string__V_21_21 == mercury__string__C_14);
#line 4381 "string.m"
            if (mercury__string__succeeded)
#line 4378 "string.m"
              {
#line 4378 "string.m"
                MR_String mercury__string__Seg_16;
#line 4378 "string.m"
                MR_Word mercury__string__V_18_18;

#line 4284 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_53_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  mercury__string__I_9 ;
	End =  mercury__string__SegEnd_10 ;
		{
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 2866 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_16  = SubString;
#line 4284 "string.m"
}
#line 4380 "string.m"
                {
#line 4380 "string.m"
                  mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4380 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Seg_16));
#line 4380 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4380 "string.m"
                }
#line 4380 "string.m"
                /* direct tailcall eliminated */
#line 4380 "string.m"
                {
#line 4380 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;
#line 4380 "string.m"
                  MR_Integer mercury__string__SegEnd__tmp_copy_10 = mercury__string__J_13;
#line 4380 "string.m"
                  MR_Word mercury__string__Acc0__tmp_copy_11 = mercury__string__V_18_18;

#line 4380 "string.m"
                  mercury__string__Acc0_11 = mercury__string__Acc0__tmp_copy_11;
#line 4380 "string.m"
                  mercury__string__SegEnd_10 = mercury__string__SegEnd__tmp_copy_10;
#line 4380 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4380 "string.m"
                }
#line 4380 "string.m"
                continue;
#line 4378 "string.m"
              }
#line 4381 "string.m"
            else
#line 4383 "string.m"
              {
#line 4383 "string.m"
                /* direct tailcall eliminated */
#line 4383 "string.m"
                {
#line 4383 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;

#line 4383 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4383 "string.m"
                }
#line 4383 "string.m"
                continue;
#line 4383 "string.m"
              }
#line 4381 "string.m"
          }
#line 4385 "string.m"
        else
#line 4387 "string.m"
          {
#line 4387 "string.m"
            MR_String mercury__string__Seg_20;

#line 4284 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_53_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  (MR_Integer) 0 ;
	End =  mercury__string__SegEnd_10 ;
		{
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 2956 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_20  = SubString;
#line 4284 "string.m"
}
#line 4388 "string.m"
            {
#line 4388 "string.m"
              MR_Word base;
#line 4388 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4388 "string.m"
              *mercury__string__Acc_12 = base;
#line 4388 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Seg_20));
#line 4388 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4388 "string.m"
            }
#line 4387 "string.m"
          }
#line 4385 "string.m"
      }
#line 4385 "string.m"
      break;
#line 4385 "string.m"
    }
#line 4365 "string.m"
}

#line 939 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(
#line 939 "string.m"
  MR_Integer mercury__string__V_20_20,
#line 939 "string.m"
  MR_String mercury__string__String_8,
#line 939 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 939 "string.m"
  MR_Integer mercury__string__End0_10,
#line 939 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 939 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 939 "string.m"
{
#line 4804 "string.m"
  {
#line 4804 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4804 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4804 "string.m"
    MR_Integer mercury__string__End_13;
#line 4804 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 3037 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4807 "string.m"
    {
#line 4807 "string.m"
      return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_55_95_95_91_50_93_95_48_6_p_0(mercury__string__V_20_20, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4804 "string.m"
    return mercury__string__succeeded;
#line 4804 "string.m"
  }
#line 939 "string.m"
}

#line 4346 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(
#line 4346 "string.m"
  MR_Word mercury__string__V_11_11,
#line 4346 "string.m"
  MR_String mercury__string__String_6,
#line 4346 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4346 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4346 "string.m"
{
#line 4355 "string.m"
  while (MR_TRUE)
#line 4355 "string.m"
    {
#line 4355 "string.m"
      /* tailcall optimized into a loop */
#line 4355 "string.m"
      {
#line 4355 "string.m"
        MR_bool mercury__string__succeeded;
#line 4355 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4351 "string.m"
        MR_Char mercury__string__Char_10;
#line 18 "std_util.opt"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3121 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4351 "string.m"
        if (mercury__string__succeeded)
#line 4351 "string.m"
          {
#line 18 "std_util.opt"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_11_11, (MR_Integer) 1)));
#line 18 "std_util.opt"
            {
#line 18 "std_util.opt"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__V_11_11), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 17 "std_util.opt"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4351 "string.m"
          }
#line 4355 "string.m"
        if (mercury__string__succeeded)
#line 4354 "string.m"
          {
#line 4354 "string.m"
            /* direct tailcall eliminated */
#line 4354 "string.m"
            {
#line 4354 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4354 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4354 "string.m"
            }
#line 4354 "string.m"
            continue;
#line 4354 "string.m"
          }
#line 4355 "string.m"
        else
#line 4356 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4355 "string.m"
      }
#line 4355 "string.m"
      break;
#line 4355 "string.m"
    }
#line 4346 "string.m"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_String mercury__string__V_12_12,
#line 311 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__string__succeeded;
#line 610 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_String mercury__string__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_String mercury__string__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__string__V_9_9;

#line 612 "list.opt"
        {
#line 612 "list.opt"
          mercury__string__V_8_8 = mercury__string__IntroducedFrom__func__word_wrap_loop__4766__1_2_f_0(mercury__string__V_12_12, mercury__string__V_6_6);
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(mercury__string__V_12_12, mercury__string__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Char mercury__string__V_12_12,
#line 311 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 311 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__string__succeeded;
#line 610 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_String mercury__string__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_String mercury__string__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__string__V_9_9;
#line 611 "list.opt"
        MR_Integer mercury__string__Length_25;

#line 4589 "string.m"
        {
#line 4589 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__V_6_6, &mercury__string__Length_25);
        }
#line 4590 "string.m"
        mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_13_13);
#line 4594 "string.m"
        if (mercury__string__succeeded)
#line 4591 "string.m"
          {
#line 4591 "string.m"
            MR_Integer mercury__string__Count_26 = (mercury__string__V_13_13 - mercury__string__Length_25);
#line 4591 "string.m"
            MR_String mercury__string__PadString_27;

#line 4592 "string.m"
            {
#line 4592 "string.m"
              mercury__string__duplicate_char_3_p_0(mercury__string__V_12_12, mercury__string__Count_26, &mercury__string__PadString_27);
            }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_6_6 ;
	S2 =  mercury__string__PadString_27 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 3319 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3390 "string.m"
}
#line 4591 "string.m"
          }
#line 4594 "string.m"
        else
#line 4595 "string.m"
          mercury__string__V_8_8 = mercury__string__V_6_6;
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(mercury__string__V_12_12, mercury__string__V_13_13, mercury__string__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(
#line 311 "list.int"
  MR_Char mercury__string__V_12_12,
#line 311 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 311 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__string__succeeded;
#line 610 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_String mercury__string__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_String mercury__string__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__string__V_9_9;
#line 611 "list.opt"
        MR_Integer mercury__string__Length_25;

#line 4576 "string.m"
        {
#line 4576 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__V_6_6, &mercury__string__Length_25);
        }
#line 4577 "string.m"
        mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_13_13);
#line 4581 "string.m"
        if (mercury__string__succeeded)
#line 4578 "string.m"
          {
#line 4578 "string.m"
            MR_Integer mercury__string__Count_26 = (mercury__string__V_13_13 - mercury__string__Length_25);
#line 4578 "string.m"
            MR_String mercury__string__PadString_27;

#line 4579 "string.m"
            {
#line 4579 "string.m"
              mercury__string__duplicate_char_3_p_0(mercury__string__V_12_12, mercury__string__Count_26, &mercury__string__PadString_27);
            }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_27 ;
	S2 =  mercury__string__V_6_6 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 3434 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3390 "string.m"
}
#line 4578 "string.m"
          }
#line 4581 "string.m"
        else
#line 4582 "string.m"
          mercury__string__V_8_8 = mercury__string__V_6_6;
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(mercury__string__V_12_12, mercury__string__V_13_13, mercury__string__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__string__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 4901 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2__ho54_6_p_0(
#line 4901 "string.m"
  MR_String mercury__string__String_8,
#line 4901 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4901 "string.m"
  MR_Integer mercury__string__I_10,
#line 4901 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4901 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15)
#line 4901 "string.m"
{
#line 4920 "string.m"
  while (MR_TRUE)
#line 4920 "string.m"
    {
#line 4920 "string.m"
      /* tailcall optimized into a loop */
#line 4920 "string.m"
      {
#line 4920 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4920 "string.m"
        MR_Integer mercury__string__J_12;
#line 4920 "string.m"
        MR_Char mercury__string__Char_13;

#line 4914 "string.m"
        if (mercury__string__succeeded)
#line 4914 "string.m"
          {
#line 2213 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_2__ho54_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{
#line 2213 "string.m"

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

#line 3550 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4914 "string.m"
            if (mercury__string__succeeded)
#line 4916 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4914 "string.m"
          }
#line 4920 "string.m"
        if (mercury__string__succeeded)
#line 4918 "string.m"
          {
#line 4918 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4918 "string.m"
            {
#line 4918 "string.m"
              mercury__string__encode_utf8_3_p_0(mercury__string__Char_13, mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4919 "string.m"
            /* direct tailcall eliminated */
#line 4919 "string.m"
            {
#line 4919 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4919 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4919 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4919 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4919 "string.m"
            }
#line 4919 "string.m"
            continue;
#line 4918 "string.m"
          }
#line 4920 "string.m"
        else
#line 4920 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4920 "string.m"
      }
#line 4920 "string.m"
      break;
#line 4920 "string.m"
    }
#line 4901 "string.m"
}

#line 4901 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2__ho53_6_p_0(
#line 4901 "string.m"
  MR_String mercury__string__String_8,
#line 4901 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4901 "string.m"
  MR_Integer mercury__string__I_10,
#line 4901 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4901 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15)
#line 4901 "string.m"
{
#line 4920 "string.m"
  while (MR_TRUE)
#line 4920 "string.m"
    {
#line 4920 "string.m"
      /* tailcall optimized into a loop */
#line 4920 "string.m"
      {
#line 4920 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4920 "string.m"
        MR_Integer mercury__string__J_12;
#line 4920 "string.m"
        MR_Char mercury__string__Char_13;

#line 4914 "string.m"
        if (mercury__string__succeeded)
#line 4914 "string.m"
          {
#line 2213 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_2__ho53_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{
#line 2213 "string.m"

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

#line 3673 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4914 "string.m"
            if (mercury__string__succeeded)
#line 4916 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4914 "string.m"
          }
#line 4920 "string.m"
        if (mercury__string__succeeded)
#line 4918 "string.m"
          {
#line 4918 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4918 "string.m"
            {
#line 4918 "string.m"
              mercury__string__encode_utf16_3_p_0(mercury__string__Char_13, mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4919 "string.m"
            /* direct tailcall eliminated */
#line 4919 "string.m"
            {
#line 4919 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4919 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4919 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4919 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4919 "string.m"
            }
#line 4919 "string.m"
            continue;
#line 4918 "string.m"
          }
#line 4920 "string.m"
        else
#line 4920 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4920 "string.m"
      }
#line 4920 "string.m"
      break;
#line 4920 "string.m"
    }
#line 4901 "string.m"
}

#line 4346 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho10__ho51_4_p_0(
#line 4346 "string.m"
  MR_String mercury__string__String_6,
#line 4346 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4346 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4346 "string.m"
{
#line 4355 "string.m"
  while (MR_TRUE)
#line 4355 "string.m"
    {
#line 4355 "string.m"
      /* tailcall optimized into a loop */
#line 4355 "string.m"
      {
#line 4355 "string.m"
        MR_bool mercury__string__succeeded;
#line 4355 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4351 "string.m"
        MR_Char mercury__string__Char_10;

#line 2124 "string.m"
{
#define MR_PROC_LABEL mercury__string__next_boundary__ho10__ho51_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Cur_7 ;
		{
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3785 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4351 "string.m"
        if (mercury__string__succeeded)
#line 4351 "string.m"
          {
#line 18 "std_util.opt"
            {
#line 18 "std_util.opt"
              mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
            }
#line 17 "std_util.opt"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4351 "string.m"
          }
#line 4355 "string.m"
        if (mercury__string__succeeded)
#line 4354 "string.m"
          {
#line 4354 "string.m"
            /* direct tailcall eliminated */
#line 4354 "string.m"
            {
#line 4354 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4354 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4354 "string.m"
            }
#line 4354 "string.m"
            continue;
#line 4354 "string.m"
          }
#line 4355 "string.m"
        else
#line 4356 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4355 "string.m"
      }
#line 4355 "string.m"
      break;
#line 4355 "string.m"
    }
#line 4346 "string.m"
}

#line 4326 "string.m"
static void MR_CALL 
mercury__string__words_loop__ho40_4_p_0(
#line 4326 "string.m"
  MR_String mercury__string__String_6,
#line 4326 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4326 "string.m"
  MR_Word * mercury__string__Words_8)
#line 4326 "string.m"
{
#line 4329 "string.m"
  {
#line 4329 "string.m"
    MR_bool mercury__string__succeeded;
#line 4329 "string.m"
    MR_Integer mercury__string__WordEnd_9;

#line 4330 "string.m"
    {
#line 4330 "string.m"
      mercury__string__next_boundary__ho10__ho51_4_p_0(mercury__string__String_6, mercury__string__WordStart_7, &mercury__string__WordEnd_9);
    }
#line 4331 "string.m"
    mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__WordStart_7);
#line 4333 "string.m"
    if (mercury__string__succeeded)
#line 4332 "string.m"
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4333 "string.m"
    else
#line 4334 "string.m"
      {
#line 4334 "string.m"
        MR_String mercury__string__Word_10;
#line 4334 "string.m"
        MR_Integer mercury__string__NextWordStart_11;

#line 4284 "string.m"
{
#define MR_PROC_LABEL mercury__string__words_loop__ho40_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__String_6 ;
	Start =  mercury__string__WordStart_7 ;
	End =  mercury__string__WordEnd_9 ;
		{
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3901 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Word_10  = SubString;
#line 4284 "string.m"
}
#line 4335 "string.m"
        {
#line 4335 "string.m"
          mercury__string__next_boundary__ho39_4_p_0(mercury__string__String_6, mercury__string__WordEnd_9, &mercury__string__NextWordStart_11);
        }
#line 4336 "string.m"
        mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__NextWordStart_11);
#line 4338 "string.m"
        if (mercury__string__succeeded)
#line 4337 "string.m"
          {
#line 4337 "string.m"
            MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4337 "string.m"
            {
#line 4337 "string.m"
              MR_Word base;
#line 4337 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4337 "string.m"
              *mercury__string__Words_8 = base;
#line 4337 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4337 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__V_14_14));
#line 4337 "string.m"
            }
#line 4337 "string.m"
          }
#line 4338 "string.m"
        else
#line 4339 "string.m"
          {
#line 4339 "string.m"
            MR_Word mercury__string__Words0_12;

#line 4339 "string.m"
            {
#line 4339 "string.m"
              mercury__string__words_loop__ho40_4_p_0(mercury__string__String_6, mercury__string__NextWordStart_11, &mercury__string__Words0_12);
            }
#line 4340 "string.m"
            {
#line 4340 "string.m"
              MR_Word base;
#line 4340 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4340 "string.m"
              *mercury__string__Words_8 = base;
#line 4340 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4340 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Words0_12));
#line 4340 "string.m"
            }
#line 4339 "string.m"
          }
#line 4334 "string.m"
      }
#line 4329 "string.m"
  }
#line 4326 "string.m"
}

#line 4346 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho39_4_p_0(
#line 4346 "string.m"
  MR_String mercury__string__String_6,
#line 4346 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4346 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4346 "string.m"
{
#line 4355 "string.m"
  while (MR_TRUE)
#line 4355 "string.m"
    {
#line 4355 "string.m"
      /* tailcall optimized into a loop */
#line 4355 "string.m"
      {
#line 4355 "string.m"
        MR_bool mercury__string__succeeded;
#line 4355 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4351 "string.m"
        MR_Char mercury__string__Char_10;

#line 2124 "string.m"
{
#define MR_PROC_LABEL mercury__string__next_boundary__ho39_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Cur_7 ;
		{
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4024 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4351 "string.m"
        if (mercury__string__succeeded)
#line 4352 "string.m"
          {
#line 4352 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 4355 "string.m"
        if (mercury__string__succeeded)
#line 4354 "string.m"
          {
#line 4354 "string.m"
            /* direct tailcall eliminated */
#line 4354 "string.m"
            {
#line 4354 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4354 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4354 "string.m"
            }
#line 4354 "string.m"
            continue;
#line 4354 "string.m"
          }
#line 4355 "string.m"
        else
#line 4356 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4355 "string.m"
      }
#line 4355 "string.m"
      break;
#line 4355 "string.m"
    }
#line 4346 "string.m"
}

#line 3159 "string.m"
static void MR_CALL 
mercury__string__suffix_length_loop__ho37_4_p_0(
#line 3159 "string.m"
  MR_String mercury__string__S_6,
#line 3159 "string.m"
  MR_Integer mercury__string__I_7,
#line 3159 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 3159 "string.m"
{
#line 3168 "string.m"
  while (MR_TRUE)
#line 3168 "string.m"
    {
#line 3168 "string.m"
      /* tailcall optimized into a loop */
#line 3168 "string.m"
      {
#line 3168 "string.m"
        MR_bool mercury__string__succeeded;
#line 3168 "string.m"
        MR_Integer mercury__string__J_9;
#line 3164 "string.m"
        MR_Char mercury__string__Char_10;

#line 2213 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_length_loop__ho37_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_6 ;
	Index =  mercury__string__I_7 ;
		{
#line 2213 "string.m"

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

#line 4128 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3164 "string.m"
        if (mercury__string__succeeded)
#line 3165 "string.m"
          {
#line 3165 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 3168 "string.m"
        if (mercury__string__succeeded)
#line 3167 "string.m"
          {
#line 3167 "string.m"
            /* direct tailcall eliminated */
#line 3167 "string.m"
            {
#line 3167 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 3167 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 3167 "string.m"
            }
#line 3167 "string.m"
            continue;
#line 3167 "string.m"
          }
#line 3168 "string.m"
        else
#line 3169 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 3168 "string.m"
      }
#line 3168 "string.m"
      break;
#line 3168 "string.m"
    }
#line 3159 "string.m"
}

#line 3142 "string.m"
static void MR_CALL 
mercury__string__prefix_length_loop__ho36_4_p_0(
#line 3142 "string.m"
  MR_String mercury__string__S_6,
#line 3142 "string.m"
  MR_Integer mercury__string__I_7,
#line 3142 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 3142 "string.m"
{
#line 3151 "string.m"
  while (MR_TRUE)
#line 3151 "string.m"
    {
#line 3151 "string.m"
      /* tailcall optimized into a loop */
#line 3151 "string.m"
      {
#line 3151 "string.m"
        MR_bool mercury__string__succeeded;
#line 3151 "string.m"
        MR_Integer mercury__string__J_9;
#line 3147 "string.m"
        MR_Char mercury__string__Char_10;

#line 2124 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_length_loop__ho36_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_6 ;
	Index =  mercury__string__I_7 ;
		{
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4229 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3147 "string.m"
        if (mercury__string__succeeded)
#line 3148 "string.m"
          {
#line 3148 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 3151 "string.m"
        if (mercury__string__succeeded)
#line 3150 "string.m"
          {
#line 3150 "string.m"
            /* direct tailcall eliminated */
#line 3150 "string.m"
            {
#line 3150 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 3150 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 3150 "string.m"
            }
#line 3150 "string.m"
            continue;
#line 3150 "string.m"
          }
#line 3151 "string.m"
        else
#line 3152 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 3151 "string.m"
      }
#line 3151 "string.m"
      break;
#line 3151 "string.m"
    }
#line 3142 "string.m"
}

#line 3070 "string.m"
static MR_bool MR_CALL 
mercury__string__all_match_loop__ho34_3_p_0(
#line 3070 "string.m"
  MR_String mercury__string__String_5,
#line 3070 "string.m"
  MR_Integer mercury__string__Cur_6)
#line 3070 "string.m"
{
#line 3077 "string.m"
  while (MR_TRUE)
#line 3077 "string.m"
    {
#line 3077 "string.m"
      /* tailcall optimized into a loop */
#line 3077 "string.m"
      {
#line 3077 "string.m"
        MR_bool mercury__string__succeeded;
#line 3077 "string.m"
        MR_Integer mercury__string__Next_7;
#line 3077 "string.m"
        MR_Char mercury__string__Char_8;

#line 2124 "string.m"
{
#define MR_PROC_LABEL mercury__string__all_match_loop__ho34_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Cur_6 ;
		{
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4328 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3077 "string.m"
        if (mercury__string__succeeded)
#line 3075 "string.m"
          {
#line 3075 "string.m"
            {
#line 3075 "string.m"
              mercury__string__succeeded = mercury__char__is_alnum_1_p_0(mercury__string__Char_8);
            }
#line 3075 "string.m"
            if (mercury__string__succeeded)
#line 3076 "string.m"
              {
#line 3076 "string.m"
                /* direct tailcall eliminated */
#line 3076 "string.m"
                {
#line 3076 "string.m"
                  MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 3076 "string.m"
                  mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 3076 "string.m"
                }
#line 3076 "string.m"
                continue;
#line 3076 "string.m"
              }
#line 3075 "string.m"
          }
#line 3077 "string.m"
        else
#line 3078 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 3077 "string.m"
        return mercury__string__succeeded;
#line 3077 "string.m"
      }
#line 3077 "string.m"
      break;
#line 3077 "string.m"
    }
#line 3070 "string.m"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho16_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__string__succeeded;
#line 610 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_Word mercury__string__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Integer mercury__string__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__string__V_9_9;

#line 612 "list.opt"
        {
#line 612 "list.opt"
          mercury__string__V_8_8 = mercury__string__find_max_length_1_f_0(mercury__string__V_6_6);
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__string__V_9_9 = mercury__string__map__ho16_2_f_in__list_0(mercury__string__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 428 "list.int"
static MR_Word MR_CALL 
mercury__string__map_corresponding__ho15_3_f_in__list_0(
#line 428 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 428 "list.int"
  MR_Word mercury__string__HeadVar__3_3)
#line 428 "list.int"
{
#line 714 "list.opt"
  {
#line 714 "list.opt"
    MR_bool mercury__string__succeeded;
#line 714 "list.opt"
    MR_Word mercury__string__HeadVar__4_4;

#line 714 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "list.opt"
      if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "list.opt"
        mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 714 "list.opt"
      else
#line 715 "list.opt"
        {
#line 66 "require.opt"
          {
#line 66 "require.opt"
            mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          }
#line 715 "list.opt"
        }
#line 714 "list.opt"
    else
#line 714 "list.opt"
      {
#line 714 "list.opt"
        MR_Word mercury__string__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 714 "list.opt"
        MR_Integer mercury__string__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 714 "list.opt"
        if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 720 "list.opt"
          {
#line 66 "require.opt"
            {
#line 66 "require.opt"
              mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
            }
#line 720 "list.opt"
          }
#line 714 "list.opt"
        else
#line 725 "list.opt"
          {
#line 725 "list.opt"
            MR_Word mercury__string__V_21_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 725 "list.opt"
            MR_Word mercury__string__V_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 1)));
#line 725 "list.opt"
            MR_Word mercury__string__V_23_25;
#line 725 "list.opt"
            MR_Word mercury__string__V_24_26;

#line 726 "list.opt"
            {
#line 726 "list.opt"
              mercury__string__V_23_25 = mercury__string__pad_column_2_f_0(mercury__string__V_35_35, mercury__string__V_21_23);
            }
#line 727 "list.opt"
            {
#line 727 "list.opt"
              mercury__string__V_24_26 = mercury__string__map_corresponding__ho15_3_f_in__list_0(mercury__string__V_34_34, mercury__string__V_22_24);
            }
#line 725 "list.opt"
            {
#line 725 "list.opt"
              mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 0) = ((MR_Box) (mercury__string__V_23_25));
#line 725 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 1) = ((MR_Box) (mercury__string__V_24_26));
#line 725 "list.opt"
            }
#line 725 "list.opt"
          }
#line 714 "list.opt"
      }
#line 714 "list.opt"
    return mercury__string__HeadVar__4_4;
#line 714 "list.opt"
  }
#line 428 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__string__succeeded;
#line 610 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_Word mercury__string__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Word mercury__string__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__string__V_9_9;

#line 612 "list.opt"
        {
#line 612 "list.opt"
          mercury__string__V_8_8 = mercury__string__find_max_length_with_limit_1_f_0(mercury__string__V_6_6);
        }
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__string__V_9_9 = mercury__string__map__ho14_2_f_in__list_0(mercury__string__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 311 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho13_2_f_in__list_0(
#line 311 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 311 "list.int"
{
#line 610 "list.opt"
  {
#line 610 "list.opt"
    MR_bool mercury__string__succeeded;
#line 610 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 610 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 610 "list.opt"
    else
#line 611 "list.opt"
      {
#line 611 "list.opt"
        MR_Word mercury__string__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 611 "list.opt"
        MR_Word mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 611 "list.opt"
        MR_Word mercury__string__V_8_8;
#line 611 "list.opt"
        MR_Word mercury__string__V_9_9;
#line 611 "list.opt"
        MR_Word mercury__string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_6_6, (MR_Integer) 0)));
#line 4976 "string.m"
        MR_Word mercury__string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_6_6, (MR_Integer) 1)));

#line 4976 "string.m"
        if (((MR_tag((MR_Word) mercury__string__V_19_19)) == (MR_mktag((MR_Integer) 0))))
#line 4976 "string.m"
          mercury__string__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_19_19, (MR_Integer) 0)));
#line 4976 "string.m"
        else
#line 4977 "string.m"
          mercury__string__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_19_19, (MR_Integer) 0)));
#line 613 "list.opt"
        {
#line 613 "list.opt"
          mercury__string__V_9_9 = mercury__string__map__ho13_2_f_in__list_0(mercury__string__V_7_7);
        }
#line 611 "list.opt"
        {
#line 611 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 611 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 611 "list.opt"
        }
#line 611 "list.opt"
      }
#line 610 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 610 "list.opt"
  }
#line 311 "list.int"
}

#line 127 "list.int"
static void MR_CALL 
mercury__string__foldl__ho8_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 127 "list.int"
  MR_Integer mercury__string__HeadVar__3_3,
#line 127 "list.int"
  MR_Integer * mercury__string__HeadVar__4_4)
#line 127 "list.int"
{
#line 391 "list.opt"
  while (MR_TRUE)
#line 391 "list.opt"
    {
#line 391 "list.opt"
      /* tailcall optimized into a loop */
#line 391 "list.opt"
      {
#line 391 "list.opt"
        MR_bool mercury__string__succeeded;

#line 391 "list.opt"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "list.opt"
          *mercury__string__HeadVar__4_4 = mercury__string__HeadVar__3_3;
#line 391 "list.opt"
        else
#line 393 "list.opt"
          {
#line 393 "list.opt"
            MR_String mercury__string__V_10_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 393 "list.opt"
            MR_Word mercury__string__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "list.opt"
            MR_Integer mercury__string__V_15_13;
#line 393 "list.opt"
            MR_Integer mercury__string__Length_19;

#line 2640 "string.m"
            {
#line 2640 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__V_10_9, &mercury__string__Length_19);
            }
#line 5111 "string.m"
            mercury__string__succeeded = (mercury__string__Length_19 > mercury__string__HeadVar__3_3);
#line 5113 "string.m"
            if (mercury__string__succeeded)
#line 5112 "string.m"
              mercury__string__V_15_13 = mercury__string__Length_19;
#line 5113 "string.m"
            else
#line 5114 "string.m"
              mercury__string__V_15_13 = mercury__string__HeadVar__3_3;
#line 395 "list.opt"
            /* direct tailcall eliminated */
#line 395 "list.opt"
            {
#line 395 "list.opt"
              MR_Word mercury__string__HeadVar__2__tmp_copy_2 = mercury__string__V_11_10;
#line 395 "list.opt"
              MR_Integer mercury__string__HeadVar__3__tmp_copy_3 = mercury__string__V_15_13;

#line 395 "list.opt"
              mercury__string__HeadVar__3_3 = mercury__string__HeadVar__3__tmp_copy_3;
#line 395 "list.opt"
              mercury__string__HeadVar__2_2 = mercury__string__HeadVar__2__tmp_copy_2;
#line 395 "list.opt"
            }
#line 395 "list.opt"
            continue;
#line 393 "list.opt"
          }
#line 391 "list.opt"
      }
#line 391 "list.opt"
      break;
#line 391 "list.opt"
    }
#line 127 "list.int"
}

#line 4766 "string.m"
static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__4766__1_2_f_0(
#line 4766 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4766 "string.m"
  MR_String mercury__string__HeadVar__2_60)
#line 4766 "string.m"
{
#line 4766 "string.m"
  {
#line 4766 "string.m"
    MR_bool mercury__string__succeeded;
#line 4766 "string.m"
    MR_String mercury__string__HeadVar__3_61;
#line 4766 "string.m"
    MR_String mercury__string__V_62_62;

#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__word_wrap_loop__4766__1_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__WordSep_2 ;
	S2 =  (MR_String) "\n" ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 4788 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_62_62  = S3;
#line 3390 "string.m"
}
#line 4766 "string.m"
    {
#line 4766 "string.m"
      return mercury__string__HeadVar__3_61 = mercury__string__f_43_43_2_f_0(mercury__string__HeadVar__2_60, mercury__string__V_62_62);
    }
#line 4766 "string.m"
    return mercury__string__HeadVar__3_61;
#line 4766 "string.m"
  }
#line 4766 "string.m"
}

#line 4636 "string.m"
static MR_Word MR_CALL 
mercury__string__IntroducedFrom__func__replace_all__4636__1_3_f_0(
#line 4636 "string.m"
  MR_String mercury__string__Subst_7,
#line 4636 "string.m"
  MR_Char mercury__string__HeadVar__2_16,
#line 4636 "string.m"
  MR_Word mercury__string__HeadVar__3_17)
#line 4636 "string.m"
{
#line 4636 "string.m"
  {
#line 4636 "string.m"
    MR_bool mercury__string__succeeded;
#line 4636 "string.m"
    MR_Word mercury__string__HeadVar__4_18;
#line 4636 "string.m"
    MR_String mercury__string__V_19_19;
#line 4636 "string.m"
    MR_String mercury__string__V_20_20;
#line 4636 "string.m"
    MR_Word mercury__string__V_35_35;
#line 4636 "string.m"
    MR_Word mercury__string__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1496 "string.m"
    MR_String mercury__string__Str0_45;

#line 5300 "string.m"
    {
#line 5300 "string.m"
      mercury__string__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5300 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_35_35, 0) = ((MR_Box) (MR_Word) (mercury__string__HeadVar__2_16));
#line 5300 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_35_35, 1) = ((MR_Box) (mercury__string__V_36_36));
#line 5300 "string.m"
    }
#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_35_35, &mercury__string__Str0_45);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      mercury__string__V_20_20 = mercury__string__Str0_45;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1497 "string.m"
      }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__replace_all__4636__1_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_20_20 ;
	S2 =  mercury__string__Subst_7 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 4885 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_19_19  = S3;
#line 3390 "string.m"
}
#line 4636 "string.m"
    {
#line 4636 "string.m"
      mercury__string__HeadVar__4_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4636 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_18, 0) = ((MR_Box) (mercury__string__V_19_19));
#line 4636 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_18, 1) = ((MR_Box) (mercury__string__HeadVar__3_17));
#line 4636 "string.m"
    }
#line 4636 "string.m"
    return mercury__string__HeadVar__4_18;
#line 4636 "string.m"
  }
#line 4636 "string.m"
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
#line 4933 "string.c"
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
        MR_Integer mercury__string__V_7_12;

#line 100 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____text_file_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_4_4 ;
	S2 =  mercury__string__V_5_5 ;
		{
#line 100 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 4961 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_12  = Res;
#line 100 "private_builtin.opt"
}
#line 87 "private_builtin.opt"
        mercury__string__succeeded = (mercury__string__V_7_12 < (MR_Integer) 0);
#line 90 "private_builtin.opt"
        if (mercury__string__succeeded)
#line 89 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 90 "private_builtin.opt"
        else
#line 95 "private_builtin.opt"
          {
#line 92 "private_builtin.opt"
            mercury__string__succeeded = (mercury__string__V_7_12 == (MR_Integer) 0);
#line 95 "private_builtin.opt"
            if (mercury__string__succeeded)
#line 94 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "private_builtin.opt"
            else
#line 96 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "private_builtin.opt"
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

#line 5030 "string.c"
        mercury__string__succeeded = (strcmp(mercury__string__V_3_3, mercury__string__V_4_4) == 0);
#line 107 "string.m"
      }
#line 107 "string.m"
    return mercury__string__succeeded;
#line 107 "string.m"
  }
#line 107 "string.m"
}

#line 1264 "string.m"
void MR_CALL 
mercury__string____Compare____poly_type_0_0(
#line 1264 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 1264 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1264 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 1264 "string.m"
{
#line 1264 "string.m"
  {
#line 1264 "string.m"
    MR_bool mercury__string__succeeded;
#line 1264 "string.m"
    MR_Integer mercury__string__CastX_36 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 1264 "string.m"
    MR_Integer mercury__string__CastY_37 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 1264 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_36 == mercury__string__CastY_37);
#line 1264 "string.m"
    if (mercury__string__succeeded)
#line 5065 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 1264 "string.m"
    else
#line 1264 "string.m"
#line 1264 "string.m"
      switch (MR_tag((MR_Word) mercury__string__HeadVar__2_2)) {
#line 1264 "string.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "string.m"
        case (MR_Integer) 0:
#line 1264 "string.m"
          {
#line 1264 "string.m"
            MR_Float mercury__string__V_43_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1264 "string.m"
#line 1264 "string.m"
            switch (MR_tag((MR_Word) mercury__string__HeadVar__3_3)) {
#line 1264 "string.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "string.m"
              case (MR_Integer) 0:
#line 1264 "string.m"
                {
#line 1264 "string.m"
                  MR_Float mercury__string__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 53 "private_builtin.opt"
                  mercury__string__succeeded = (mercury__string__V_43_43 < mercury__string__V_5_5);
#line 56 "private_builtin.opt"
                  if (mercury__string__succeeded)
#line 55 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 56 "private_builtin.opt"
                  else
#line 61 "private_builtin.opt"
                    {
#line 58 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__V_43_43 > mercury__string__V_5_5);
#line 61 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 60 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 61 "private_builtin.opt"
                      else
#line 62 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 61 "private_builtin.opt"
                    }
#line 1264 "string.m"
                }
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 1:
#line 5121 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 2:
#line 5127 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 3:
#line 5133 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
            }
#line 1264 "string.m"
          }
#line 1264 "string.m"
          break;
#line 1264 "string.m"
        case (MR_Integer) 1:
#line 1264 "string.m"
          {
#line 1264 "string.m"
            MR_Integer mercury__string__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1264 "string.m"
#line 1264 "string.m"
            switch (MR_tag((MR_Word) mercury__string__HeadVar__3_3)) {
#line 1264 "string.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "string.m"
              case (MR_Integer) 0:
#line 5157 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 1:
#line 1264 "string.m"
                {
#line 1264 "string.m"
                  MR_Integer mercury__string__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 69 "private_builtin.opt"
                  mercury__string__succeeded = (mercury__string__V_44_44 < mercury__string__V_15_15);
#line 72 "private_builtin.opt"
                  if (mercury__string__succeeded)
#line 71 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
                  else
#line 77 "private_builtin.opt"
                    {
#line 74 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__V_44_44 == mercury__string__V_15_15);
#line 77 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 76 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
                      else
#line 78 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
                    }
#line 1264 "string.m"
                }
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 2:
#line 5196 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 3:
#line 5202 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
            }
#line 1264 "string.m"
          }
#line 1264 "string.m"
          break;
#line 1264 "string.m"
        case (MR_Integer) 2:
#line 1264 "string.m"
          {
#line 1264 "string.m"
            MR_String mercury__string__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1264 "string.m"
#line 1264 "string.m"
            switch (MR_tag((MR_Word) mercury__string__HeadVar__3_3)) {
#line 1264 "string.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "string.m"
              case (MR_Integer) 0:
#line 5226 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 1:
#line 5232 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 2:
#line 1264 "string.m"
                {
#line 1264 "string.m"
                  MR_String mercury__string__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 1264 "string.m"
                  MR_Integer mercury__string__V_7_60;

#line 100 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_45_45 ;
	S2 =  mercury__string__V_25_25 ;
		{
#line 100 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5260 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_60  = Res;
#line 100 "private_builtin.opt"
}
#line 87 "private_builtin.opt"
                  mercury__string__succeeded = (mercury__string__V_7_60 < (MR_Integer) 0);
#line 90 "private_builtin.opt"
                  if (mercury__string__succeeded)
#line 89 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 90 "private_builtin.opt"
                  else
#line 95 "private_builtin.opt"
                    {
#line 92 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__V_7_60 == (MR_Integer) 0);
#line 95 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 94 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "private_builtin.opt"
                      else
#line 96 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "private_builtin.opt"
                    }
#line 1264 "string.m"
                }
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 3:
#line 5295 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
            }
#line 1264 "string.m"
          }
#line 1264 "string.m"
          break;
#line 1264 "string.m"
        case (MR_Integer) 3:
#line 1264 "string.m"
          {
#line 1264 "string.m"
            MR_Char mercury__string__V_42_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1264 "string.m"
#line 1264 "string.m"
            switch (MR_tag((MR_Word) mercury__string__HeadVar__3_3)) {
#line 1264 "string.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "string.m"
              case (MR_Integer) 0:
#line 5319 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 1:
#line 5325 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 2:
#line 5331 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 3:
#line 1264 "string.m"
                {
#line 1264 "string.m"
                  MR_Char mercury__string__V_35_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 1264 "string.m"
                  MR_Integer mercury__string__V_7_49;
#line 1264 "string.m"
                  MR_Integer mercury__string__V_8_50;

#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__V_42_42 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 5359 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_49  = Int;
#line 110 "char.opt"
}
#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__V_35_35 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 5379 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_50  = Int;
#line 110 "char.opt"
}
#line 37 "private_builtin.opt"
                  mercury__string__succeeded = (mercury__string__V_7_49 < mercury__string__V_8_50);
#line 40 "private_builtin.opt"
                  if (mercury__string__succeeded)
#line 39 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "private_builtin.opt"
                  else
#line 45 "private_builtin.opt"
                    {
#line 42 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__V_7_49 == mercury__string__V_8_50);
#line 45 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 44 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "private_builtin.opt"
                      else
#line 46 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "private_builtin.opt"
                    }
#line 1264 "string.m"
                }
#line 1264 "string.m"
                break;
#line 1264 "string.m"
            }
#line 1264 "string.m"
          }
#line 1264 "string.m"
          break;
#line 1264 "string.m"
      }
#line 1264 "string.m"
  }
#line 1264 "string.m"
}

#line 1264 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0(
#line 1264 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1264 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 1264 "string.m"
{
#line 1264 "string.m"
  {
#line 1264 "string.m"
    MR_bool mercury__string__succeeded;
#line 1264 "string.m"
    MR_Integer mercury__string__CastX_11 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 1264 "string.m"
    MR_Integer mercury__string__CastY_12 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 1264 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_11 == mercury__string__CastY_12);
#line 1264 "string.m"
    if (mercury__string__succeeded)
#line 1264 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 1264 "string.m"
    else
#line 1264 "string.m"
#line 1264 "string.m"
      switch (MR_tag((MR_Word) mercury__string__HeadVar__1_1)) {
#line 1264 "string.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1264 "string.m"
        case (MR_Integer) 0:
#line 1264 "string.m"
          {
#line 1264 "string.m"
            MR_Float mercury__string__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1264 "string.m"
            MR_Float mercury__string__V_4_4;

#line 1264 "string.m"
            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1264 "string.m"
            if (mercury__string__succeeded)
#line 1264 "string.m"
              {
#line 1264 "string.m"
                mercury__string__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5473 "string.c"
                mercury__string__succeeded = (mercury__string__V_3_3 == mercury__string__V_4_4);
#line 1264 "string.m"
              }
#line 1264 "string.m"
          }
#line 1264 "string.m"
          break;
#line 1264 "string.m"
        case (MR_Integer) 1:
#line 1264 "string.m"
          {
#line 1264 "string.m"
            MR_Integer mercury__string__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1264 "string.m"
            MR_Integer mercury__string__V_6_6;

#line 1264 "string.m"
            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1264 "string.m"
            if (mercury__string__succeeded)
#line 1264 "string.m"
              {
#line 1264 "string.m"
                mercury__string__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5498 "string.c"
                mercury__string__succeeded = (mercury__string__V_5_5 == mercury__string__V_6_6);
#line 1264 "string.m"
              }
#line 1264 "string.m"
          }
#line 1264 "string.m"
          break;
#line 1264 "string.m"
        case (MR_Integer) 2:
#line 1264 "string.m"
          {
#line 1264 "string.m"
            MR_String mercury__string__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1264 "string.m"
            MR_String mercury__string__V_8_8;

#line 1264 "string.m"
            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1264 "string.m"
            if (mercury__string__succeeded)
#line 1264 "string.m"
              {
#line 1264 "string.m"
                mercury__string__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5523 "string.c"
                mercury__string__succeeded = (strcmp(mercury__string__V_7_7, mercury__string__V_8_8) == 0);
#line 1264 "string.m"
              }
#line 1264 "string.m"
          }
#line 1264 "string.m"
          break;
#line 1264 "string.m"
        case (MR_Integer) 3:
#line 1264 "string.m"
          {
#line 1264 "string.m"
            MR_Char mercury__string__V_9_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1264 "string.m"
            MR_Char mercury__string__V_10_10;

#line 1264 "string.m"
            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1264 "string.m"
            if (mercury__string__succeeded)
#line 1264 "string.m"
              {
#line 1264 "string.m"
                mercury__string__V_10_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5548 "string.c"
                mercury__string__succeeded = (mercury__string__V_9_9 == mercury__string__V_10_10);
#line 1264 "string.m"
              }
#line 1264 "string.m"
          }
#line 1264 "string.m"
          break;
#line 1264 "string.m"
      }
#line 1264 "string.m"
    return mercury__string__succeeded;
#line 1264 "string.m"
  }
#line 1264 "string.m"
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
#line 5589 "string.c"
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
        MR_Integer mercury__string__V_7_12;

#line 100 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____line_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_4_4 ;
	S2 =  mercury__string__V_5_5 ;
		{
#line 100 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5617 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_12  = Res;
#line 100 "private_builtin.opt"
}
#line 87 "private_builtin.opt"
        mercury__string__succeeded = (mercury__string__V_7_12 < (MR_Integer) 0);
#line 90 "private_builtin.opt"
        if (mercury__string__succeeded)
#line 89 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 90 "private_builtin.opt"
        else
#line 95 "private_builtin.opt"
          {
#line 92 "private_builtin.opt"
            mercury__string__succeeded = (mercury__string__V_7_12 == (MR_Integer) 0);
#line 95 "private_builtin.opt"
            if (mercury__string__succeeded)
#line 94 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "private_builtin.opt"
            else
#line 96 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 95 "private_builtin.opt"
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

#line 5686 "string.c"
        mercury__string__succeeded = (strcmp(mercury__string__V_3_3, mercury__string__V_4_4) == 0);
#line 101 "string.m"
      }
#line 101 "string.m"
    return mercury__string__succeeded;
#line 101 "string.m"
  }
#line 101 "string.m"
}

#line 5064 "string.m"
void MR_CALL 
mercury__string____Compare____justify_sense_0_0(
#line 5064 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 5064 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 5064 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 5064 "string.m"
{
#line 5064 "string.m"
  {
#line 5064 "string.m"
    MR_bool mercury__string__succeeded;
#line 5064 "string.m"
    MR_Integer mercury__string__Cast_HeadVar1_4 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 5064 "string.m"
    MR_Integer mercury__string__Cast_HeadVar2_5 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 69 "private_builtin.opt"
    mercury__string__succeeded = (mercury__string__Cast_HeadVar1_4 < mercury__string__Cast_HeadVar2_5);
#line 72 "private_builtin.opt"
    if (mercury__string__succeeded)
#line 71 "private_builtin.opt"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "private_builtin.opt"
    else
#line 77 "private_builtin.opt"
      {
#line 74 "private_builtin.opt"
        mercury__string__succeeded = (mercury__string__Cast_HeadVar1_4 == mercury__string__Cast_HeadVar2_5);
#line 77 "private_builtin.opt"
        if (mercury__string__succeeded)
#line 76 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "private_builtin.opt"
        else
#line 78 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "private_builtin.opt"
      }
#line 5064 "string.m"
  }
#line 5064 "string.m"
}

#line 5064 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0(
#line 5064 "string.m"
  MR_Word mercury__string__HeadVar__2_1,
#line 5064 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 5064 "string.m"
{
#line 5753 "string.c"
  {
#line 5755 "string.c"
    MR_bool mercury__string__succeeded = (mercury__string__HeadVar__2_1 == mercury__string__HeadVar__2_2);

#line 5758 "string.c"
    return mercury__string__succeeded;
#line 5760 "string.c"
  }
#line 5064 "string.m"
}

#line 1056 "string.m"
void MR_CALL 
mercury__string____Compare____justified_column_0_0(
#line 1056 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 1056 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1056 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 1056 "string.m"
{
#line 1056 "string.m"
  {
#line 1056 "string.m"
    MR_bool mercury__string__succeeded;
#line 1056 "string.m"
    MR_Integer mercury__string__CastX_12 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 1056 "string.m"
    MR_Integer mercury__string__CastY_13 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 1056 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_12 == mercury__string__CastY_13);
#line 1056 "string.m"
    if (mercury__string__succeeded)
#line 5789 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 1056 "string.m"
    else
#line 1056 "string.m"
    if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1056 "string.m"
      {
#line 1056 "string.m"
        MR_Word mercury__string__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1056 "string.m"
        if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1056 "string.m"
          {
#line 1056 "string.m"
            MR_Word mercury__string__TypeInfo_15_15 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 1056 "string.m"
            MR_Word mercury__string__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 1056 "string.m"
            {
#line 1056 "string.m"
              mercury__builtin__compare_3_p_0(mercury__string__TypeInfo_15_15, mercury__string__HeadVar__1_1, ((MR_Box) (mercury__string__V_16_16)), ((MR_Box) (mercury__string__V_5_5)));
#line 1056 "string.m"
              return;
            }
#line 1056 "string.m"
          }
#line 1056 "string.m"
        else
#line 5820 "string.c"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1056 "string.m"
      }
#line 1056 "string.m"
    else
#line 1056 "string.m"
      {
#line 1056 "string.m"
        MR_Word mercury__string__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1056 "string.m"
        if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5833 "string.c"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1056 "string.m"
        else
#line 1056 "string.m"
          {
#line 1056 "string.m"
            MR_Word mercury__string__TypeInfo_14_14 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 1056 "string.m"
            MR_Word mercury__string__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 1056 "string.m"
            {
#line 1056 "string.m"
              mercury__builtin__compare_3_p_0(mercury__string__TypeInfo_14_14, mercury__string__HeadVar__1_1, ((MR_Box) (mercury__string__V_17_17)), ((MR_Box) (mercury__string__V_11_11)));
#line 1056 "string.m"
              return;
            }
#line 1056 "string.m"
          }
#line 1056 "string.m"
      }
#line 1056 "string.m"
  }
#line 1056 "string.m"
}

#line 1056 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0(
#line 1056 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1056 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 1056 "string.m"
{
#line 1056 "string.m"
  {
#line 1056 "string.m"
    MR_bool mercury__string__succeeded;
#line 1056 "string.m"
    MR_Integer mercury__string__CastX_7 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 1056 "string.m"
    MR_Integer mercury__string__CastY_8 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 1056 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_7 == mercury__string__CastY_8);
#line 1056 "string.m"
    if (mercury__string__succeeded)
#line 1056 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 1056 "string.m"
    else
#line 1056 "string.m"
    if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1056 "string.m"
      {
#line 1056 "string.m"
        MR_Word mercury__string__TypeInfo_9_9;
#line 1056 "string.m"
        MR_Word mercury__string__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1056 "string.m"
        MR_Word mercury__string__V_4_4;

#line 1056 "string.m"
        mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1056 "string.m"
        if (mercury__string__succeeded)
#line 1056 "string.m"
          {
#line 1056 "string.m"
            mercury__string__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5905 "string.c"
            mercury__string__TypeInfo_9_9 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 5907 "string.c"
            {
#line 5909 "string.c"
              return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_9_9, ((MR_Box) (mercury__string__V_3_3)), ((MR_Box) (mercury__string__V_4_4)));
            }
#line 1056 "string.m"
          }
#line 1056 "string.m"
      }
#line 1056 "string.m"
    else
#line 1056 "string.m"
      {
#line 1056 "string.m"
        MR_Word mercury__string__TypeInfo_10_10;
#line 1056 "string.m"
        MR_Word mercury__string__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1056 "string.m"
        MR_Word mercury__string__V_6_6;

#line 1056 "string.m"
        mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1056 "string.m"
        if (mercury__string__succeeded)
#line 1056 "string.m"
          {
#line 1056 "string.m"
            mercury__string__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5935 "string.c"
            mercury__string__TypeInfo_10_10 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 5937 "string.c"
            {
#line 5939 "string.c"
              return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_10_10, ((MR_Box) (mercury__string__V_5_5)), ((MR_Box) (mercury__string__V_6_6)));
            }
#line 1056 "string.m"
          }
#line 1056 "string.m"
      }
#line 1056 "string.m"
    return mercury__string__succeeded;
#line 1056 "string.m"
  }
#line 1056 "string.m"
}

#line 5516 "string.m"
MR_Integer MR_CALL 
mercury__string__max_precision_0_f_0(void)
#line 5516 "string.m"
{
#line 5518 "string.m"
  {
#line 5518 "string.m"
    MR_bool mercury__string__succeeded;
#line 5518 "string.m"
    MR_Integer mercury__string__HeadVar__1_1 = ((MR_Integer) 15 + (MR_Integer) 2);

#line 5518 "string.m"
    return mercury__string__HeadVar__1_1;
#line 5518 "string.m"
  }
#line 5516 "string.m"
}

#line 5510 "string.m"
MR_Integer MR_CALL 
mercury__string__min_precision_0_f_0(void)
#line 5510 "string.m"
{
#line 5512 "string.m"
  {
#line 5512 "string.m"
    MR_bool mercury__string__succeeded;

#line 5512 "string.m"
    return (MR_Integer) 15;
#line 5512 "string.m"
  }
#line 5510 "string.m"
}

#line 5492 "string.m"
MR_String MR_CALL 
mercury__string__float_to_string_loop_2_f_0(
#line 5492 "string.m"
  MR_Integer mercury__string__Prec_4,
#line 5492 "string.m"
  MR_Float mercury__string__Float_5)
#line 5492 "string.m"
{
#line 5494 "string.m"
  while (MR_TRUE)
#line 5494 "string.m"
    {
#line 5494 "string.m"
      /* tailcall optimized into a loop */
#line 5494 "string.m"
      {
#line 5494 "string.m"
        MR_bool mercury__string__succeeded;
#line 5494 "string.m"
        MR_String mercury__string__String_6;
#line 5494 "string.m"
        MR_String mercury__string__Tmp_7;
#line 5494 "string.m"
        MR_String mercury__string__V_8_8;
#line 5494 "string.m"
        MR_Word mercury__string__V_9_9;
#line 5494 "string.m"
        MR_String mercury__string__V_11_11;
#line 5494 "string.m"
        MR_String mercury__string__V_12_12;
#line 5494 "string.m"
        MR_Word mercury__string__V_14_14;
#line 5494 "string.m"
        MR_Word mercury__string__V_15_15;
#line 5496 "string.m"
        MR_Integer mercury__string__V_18_18;

#line 5310 "string.m"
        {
#line 5310 "string.m"
          mercury__string__int_to_base_string_3_p_0(mercury__string__Prec_4, (MR_Integer) 10, &mercury__string__V_12_12);
        }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_12_12 ;
	S2 =  (MR_String) "g" ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6052 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = S3;
#line 3390 "string.m"
}
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "%#." ;
	S2 =  mercury__string__V_11_11 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6079 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3390 "string.m"
}
#line 5495 "string.m"
        {
#line 5495 "string.m"
          mercury__string__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 5495 "string.m"
          MR_hl_field(MR_mktag(0), mercury__string__V_14_14, 0) = MR_box_float(mercury__string__Float_5);
#line 5495 "string.m"
        }
#line 5495 "string.m"
        mercury__string__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5495 "string.m"
        {
#line 5495 "string.m"
          mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5495 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_9_9, 0) = ((MR_Box) (mercury__string__V_14_14));
#line 5495 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_9_9, 1) = ((MR_Box) (mercury__string__V_15_15));
#line 5495 "string.m"
        }
#line 5580 "string.m"
        {
#line 5580 "string.m"
          mercury__string__format__format_impl_3_p_0(mercury__string__V_8_8, mercury__string__V_9_9, &mercury__string__Tmp_7);
        }
#line 5518 "string.m"
        mercury__string__V_18_18 = ((MR_Integer) 15 + (MR_Integer) 2);
#line 5496 "string.m"
        mercury__string__succeeded = (mercury__string__Prec_4 == mercury__string__V_18_18);
#line 5498 "string.m"
        if (mercury__string__succeeded)
#line 5497 "string.m"
          mercury__string__String_6 = mercury__string__Tmp_7;
#line 5498 "string.m"
        else
#line 5501 "string.m"
          {
#line 5499 "string.m"
            MR_Float mercury__string__V_19_19;

#line 5182 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__Tmp_7 ;
		{
#line 5182 "string.m"
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
#line 6148 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__V_19_19  = FloatVal;
#line 5182 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5499 "string.m"
            if (mercury__string__succeeded)
#line 5499 "string.m"
              mercury__string__succeeded = (mercury__string__Float_5 == mercury__string__V_19_19);
#line 5501 "string.m"
            if (mercury__string__succeeded)
#line 5500 "string.m"
              mercury__string__String_6 = mercury__string__Tmp_7;
#line 5501 "string.m"
            else
#line 5502 "string.m"
              {
#line 5502 "string.m"
                MR_Integer mercury__string__V_16_16 = (mercury__string__Prec_4 + (MR_Integer) 1);

#line 5502 "string.m"
                /* direct tailcall eliminated */
#line 5502 "string.m"
                {
#line 5502 "string.m"
                  MR_Integer mercury__string__Prec__tmp_copy_4 = mercury__string__V_16_16;

#line 5502 "string.m"
                  mercury__string__Prec_4 = mercury__string__Prec__tmp_copy_4;
#line 5502 "string.m"
                }
#line 5502 "string.m"
                continue;
#line 5502 "string.m"
              }
#line 5501 "string.m"
          }
#line 5494 "string.m"
        return mercury__string__String_6;
#line 5494 "string.m"
      }
#line 5494 "string.m"
      break;
#line 5494 "string.m"
    }
#line 5492 "string.m"
}

#line 5396 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_group_2_6_p_0(
#line 5396 "string.m"
  MR_Integer mercury__string__NegN_7,
#line 5396 "string.m"
  MR_Integer mercury__string__Base_8,
#line 5396 "string.m"
  MR_Integer mercury__string__Curr_9,
#line 5396 "string.m"
  MR_Integer mercury__string__GroupLength_10,
#line 5396 "string.m"
  MR_String mercury__string__Sep_11,
#line 5396 "string.m"
  MR_String * mercury__string__Str_12)
#line 5396 "string.m"
{
#line 5407 "string.m"
  {
#line 5407 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Curr_9 == mercury__string__GroupLength_10);
#line 5401 "string.m"
    MR_Integer mercury__string__V_19_19;

#line 5401 "string.m"
    if (mercury__string__succeeded)
#line 5401 "string.m"
      {
#line 5402 "string.m"
        mercury__string__V_19_19 = (MR_Integer) 0;
#line 5402 "string.m"
        mercury__string__succeeded = (mercury__string__GroupLength_10 > mercury__string__V_19_19);
#line 5401 "string.m"
      }
#line 5407 "string.m"
    if (mercury__string__succeeded)
#line 5405 "string.m"
      {
#line 5405 "string.m"
        MR_String mercury__string__Str1_13;

#line 5404 "string.m"
        {
#line 5404 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN_7, mercury__string__Base_8, (MR_Integer) 0, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_13);
        }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_13 ;
	S2 =  mercury__string__Sep_11 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6267 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
#line 3390 "string.m"
}
#line 5405 "string.m"
      }
#line 5407 "string.m"
    else
#line 5412 "string.m"
      {
#line 5408 "string.m"
        MR_Integer mercury__string__V_21_21 = ((MR_Integer) 0 - mercury__string__Base_8);

#line 5408 "string.m"
        mercury__string__succeeded = (mercury__string__NegN_7 > mercury__string__V_21_21);
#line 5412 "string.m"
        if (mercury__string__succeeded)
#line 5409 "string.m"
          {
#line 5409 "string.m"
            MR_Integer mercury__string__N_14 = ((MR_Integer) 0 - mercury__string__NegN_7);
#line 5409 "string.m"
            MR_Char mercury__string__DigitChar_15;
#line 5409 "string.m"
            MR_Word mercury__string__V_45_45;
#line 5409 "string.m"
            MR_Word mercury__string__V_46_46;
#line 1496 "string.m"
            MR_String mercury__string__Str0_55;

#line 5410 "string.m"
            {
#line 5410 "string.m"
              mercury__string__DigitChar_15 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N_14);
            }
#line 5300 "string.m"
            mercury__string__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5300 "string.m"
            {
#line 5300 "string.m"
              mercury__string__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5300 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_15));
#line 5300 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 1) = ((MR_Box) (mercury__string__V_46_46));
#line 5300 "string.m"
            }
#line 1494 "string.m"
            {
#line 1494 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_45_45, &mercury__string__Str0_55);
            }
#line 1496 "string.m"
            if (mercury__string__succeeded)
#line 1495 "string.m"
              *mercury__string__Str_12 = mercury__string__Str0_55;
#line 1496 "string.m"
            else
#line 1497 "string.m"
              {
#line 1497 "string.m"
                {
#line 1497 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1497 "string.m"
                  return;
                }
#line 1497 "string.m"
              }
#line 5409 "string.m"
          }
#line 5412 "string.m"
        else
#line 5413 "string.m"
          {
#line 5413 "string.m"
            MR_Integer mercury__string__NegN1_16;
#line 5413 "string.m"
            MR_Integer mercury__string__N10_17;
#line 5413 "string.m"
            MR_String mercury__string__DigitString_18;
#line 5413 "string.m"
            MR_Integer mercury__string__V_22_22;
#line 5413 "string.m"
            MR_Integer mercury__string__V_23_23;
#line 5413 "string.m"
            MR_String mercury__string__Str1_25;
#line 5413 "string.m"
            MR_Char mercury__string__DigitChar_26;
#line 5413 "string.m"
            MR_Word mercury__string__V_65_65;
#line 5413 "string.m"
            MR_Word mercury__string__V_66_66;
#line 1496 "string.m"
            MR_String mercury__string__Str0_75;

#line 193 "int.opt"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 193 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6381 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 193 "int.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 39 "int.opt"
            if (mercury__string__succeeded)
#line 40 "int.opt"
              mercury__string__succeeded = (mercury__string__Base_8 == (MR_Integer) 0);
#line 45 "int.opt"
            if (mercury__string__succeeded)
#line 42 "int.opt"
              {
#line 42 "int.opt"
                MR_Word mercury__string__TypeCtorInfo_9_62 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 42 "int.opt"
                MR_Word mercury__string__V_7_60 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 44 "int.opt"
                {
#line 44 "int.opt"
                  mercury__exception__throw_1_p_0(mercury__string__TypeCtorInfo_9_62, ((MR_Box) (mercury__string__V_7_60)));
#line 44 "int.opt"
                  return;
                }
#line 42 "int.opt"
              }
#line 45 "int.opt"
            else
#line 46 "int.opt"
              mercury__string__NegN1_16 = (mercury__string__NegN_7 / mercury__string__Base_8);
#line 5414 "string.m"
            mercury__string__V_22_22 = (mercury__string__NegN1_16 * mercury__string__Base_8);
#line 5414 "string.m"
            mercury__string__N10_17 = (mercury__string__V_22_22 - mercury__string__NegN_7);
#line 5415 "string.m"
            {
#line 5415 "string.m"
              mercury__string__DigitChar_26 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N10_17);
            }
#line 5300 "string.m"
            mercury__string__V_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5300 "string.m"
            {
#line 5300 "string.m"
              mercury__string__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5300 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_65_65, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_26));
#line 5300 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_65_65, 1) = ((MR_Box) (mercury__string__V_66_66));
#line 5300 "string.m"
            }
#line 1494 "string.m"
            {
#line 1494 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_65_65, &mercury__string__Str0_75);
            }
#line 1496 "string.m"
            if (mercury__string__succeeded)
#line 1495 "string.m"
              mercury__string__DigitString_18 = mercury__string__Str0_75;
#line 1496 "string.m"
            else
#line 1497 "string.m"
              {
#line 1497 "string.m"
                {
#line 1497 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1497 "string.m"
                  return;
                }
#line 1497 "string.m"
              }
#line 5417 "string.m"
            mercury__string__V_23_23 = (mercury__string__Curr_9 + (MR_Integer) 1);
#line 5417 "string.m"
            {
#line 5417 "string.m"
              mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN1_16, mercury__string__Base_8, mercury__string__V_23_23, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_25);
            }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_25 ;
	S2 =  mercury__string__DigitString_18 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6486 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
#line 3390 "string.m"
}
#line 5413 "string.m"
          }
#line 5412 "string.m"
      }
#line 5407 "string.m"
  }
#line 5396 "string.m"
}

#line 5372 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_group_1_5_p_0(
#line 5372 "string.m"
  MR_Integer mercury__string__N_6,
#line 5372 "string.m"
  MR_Integer mercury__string__Base_7,
#line 5372 "string.m"
  MR_Integer mercury__string__GroupLength_8,
#line 5372 "string.m"
  MR_String mercury__string__Sep_9,
#line 5372 "string.m"
  MR_String * mercury__string__Str_10)
#line 5372 "string.m"
{
#line 5382 "string.m"
  {
#line 5382 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__N_6 < (MR_Integer) 0);

#line 5382 "string.m"
    if (mercury__string__succeeded)
#line 5380 "string.m"
      {
#line 5380 "string.m"
        MR_String mercury__string__Str1_11;

#line 5380 "string.m"
        {
#line 5380 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N_6, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str1_11);
        }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_1_5_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "-" ;
	S2 =  mercury__string__Str1_11 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6554 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_10  = S3;
#line 3390 "string.m"
}
#line 5380 "string.m"
      }
#line 5382 "string.m"
    else
#line 5383 "string.m"
      {
#line 5383 "string.m"
        MR_Integer mercury__string__N1_12 = ((MR_Integer) 0 - mercury__string__N_6);

#line 5384 "string.m"
        {
#line 5384 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N1_12, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, mercury__string__Str_10);
#line 5384 "string.m"
          return;
        }
#line 5383 "string.m"
      }
#line 5382 "string.m"
  }
#line 5372 "string.m"
}

#line 5342 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_2_4_p_0(
#line 5342 "string.m"
  MR_Integer mercury__string__NegN_5,
#line 5342 "string.m"
  MR_Integer mercury__string__Base_6,
#line 5342 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevChars_0_12,
#line 5342 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevChars_13)
#line 5342 "string.m"
{
#line 5353 "string.m"
  {
#line 5353 "string.m"
    MR_bool mercury__string__succeeded;
#line 5349 "string.m"
    MR_Integer mercury__string__V_14_14 = ((MR_Integer) 0 - mercury__string__Base_6);

#line 5349 "string.m"
    mercury__string__succeeded = (mercury__string__NegN_5 > mercury__string__V_14_14);
#line 5353 "string.m"
    if (mercury__string__succeeded)
#line 5350 "string.m"
      {
#line 5350 "string.m"
        MR_Integer mercury__string__N_8 = ((MR_Integer) 0 - mercury__string__NegN_5);
#line 5350 "string.m"
        MR_Char mercury__string__DigitChar_9;

#line 5351 "string.m"
        {
#line 5351 "string.m"
          mercury__string__DigitChar_9 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N_8);
        }
#line 5352 "string.m"
        {
#line 5352 "string.m"
          MR_Word base;
#line 5352 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5352 "string.m"
          *mercury__string__STATE_VARIABLE_RevChars_13 = base;
#line 5352 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_9));
#line 5352 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_0_12));
#line 5352 "string.m"
        }
#line 5350 "string.m"
      }
#line 5353 "string.m"
    else
#line 5354 "string.m"
      {
#line 5354 "string.m"
        MR_Integer mercury__string__NegN1_10;
#line 5354 "string.m"
        MR_Integer mercury__string__N10_11;
#line 5354 "string.m"
        MR_Integer mercury__string__V_16_16;
#line 5354 "string.m"
        MR_Word mercury__string__STATE_VARIABLE_RevChars_17_17;
#line 5354 "string.m"
        MR_Char mercury__string__DigitChar_19;

#line 193 "int.opt"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_2_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 193 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6666 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 193 "int.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 39 "int.opt"
        if (mercury__string__succeeded)
#line 40 "int.opt"
          mercury__string__succeeded = (mercury__string__Base_6 == (MR_Integer) 0);
#line 45 "int.opt"
        if (mercury__string__succeeded)
#line 42 "int.opt"
          {
#line 42 "int.opt"
            MR_Word mercury__string__TypeCtorInfo_9_25 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 42 "int.opt"
            MR_Word mercury__string__V_7_23 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 44 "int.opt"
            {
#line 44 "int.opt"
              mercury__exception__throw_1_p_0(mercury__string__TypeCtorInfo_9_25, ((MR_Box) (mercury__string__V_7_23)));
#line 44 "int.opt"
              return;
            }
#line 42 "int.opt"
          }
#line 45 "int.opt"
        else
#line 46 "int.opt"
          mercury__string__NegN1_10 = (mercury__string__NegN_5 / mercury__string__Base_6);
#line 5355 "string.m"
        mercury__string__V_16_16 = (mercury__string__NegN1_10 * mercury__string__Base_6);
#line 5355 "string.m"
        mercury__string__N10_11 = (mercury__string__V_16_16 - mercury__string__NegN_5);
#line 5356 "string.m"
        {
#line 5356 "string.m"
          mercury__string__DigitChar_19 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N10_11);
        }
#line 5357 "string.m"
        {
#line 5357 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN1_10, mercury__string__Base_6, mercury__string__STATE_VARIABLE_RevChars_0_12, &mercury__string__STATE_VARIABLE_RevChars_17_17);
        }
#line 5358 "string.m"
        {
#line 5358 "string.m"
          MR_Word base;
#line 5358 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5358 "string.m"
          *mercury__string__STATE_VARIABLE_RevChars_13 = base;
#line 5358 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_19));
#line 5358 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_17_17));
#line 5358 "string.m"
        }
#line 5354 "string.m"
      }
#line 5353 "string.m"
  }
#line 5342 "string.m"
}

#line 5328 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_1_3_p_0(
#line 5328 "string.m"
  MR_Integer mercury__string__N_4,
#line 5328 "string.m"
  MR_Integer mercury__string__Base_5,
#line 5328 "string.m"
  MR_String * mercury__string__Str_6)
#line 5328 "string.m"
{
#line 5330 "string.m"
  {
#line 5330 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__N_4 < (MR_Integer) 0);
#line 5330 "string.m"
    MR_Word mercury__string__RevChars_7;
#line 1634 "string.m"
    MR_String mercury__string__Str0_17;

#line 5336 "string.m"
    if (mercury__string__succeeded)
#line 5335 "string.m"
      {
#line 5335 "string.m"
        MR_Word mercury__string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[4]);
#line 5335 "string.m"
        MR_Word mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 5335 "string.m"
        {
#line 5335 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__V_10_10, &mercury__string__RevChars_7);
        }
#line 5335 "string.m"
      }
#line 5336 "string.m"
    else
#line 5337 "string.m"
      {
#line 5337 "string.m"
        MR_Integer mercury__string__NegN_8 = ((MR_Integer) 0 - mercury__string__N_4);
#line 5337 "string.m"
        MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 5338 "string.m"
        {
#line 5338 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN_8, mercury__string__Base_5, mercury__string__V_14_14, &mercury__string__RevChars_7);
        }
#line 5337 "string.m"
      }
#line 1632 "string.m"
    {
#line 1632 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__RevChars_7, &mercury__string__Str0_17);
    }
#line 1634 "string.m"
    if (mercury__string__succeeded)
#line 1633 "string.m"
      *mercury__string__Str_6 = mercury__string__Str0_17;
#line 1634 "string.m"
    else
#line 1635 "string.m"
      {
#line 1635 "string.m"
        {
#line 1635 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
#line 1635 "string.m"
          return;
        }
#line 1635 "string.m"
      }
#line 5330 "string.m"
  }
#line 5328 "string.m"
}

#line 5163 "string.m"
MR_bool MR_CALL 
mercury__string__accumulate_negative_int_4_p_0(
#line 5163 "string.m"
  MR_Integer mercury__string__Base_5,
#line 5163 "string.m"
  MR_Char mercury__string__Char_6,
#line 5163 "string.m"
  MR_Integer mercury__string__N0_7,
#line 5163 "string.m"
  MR_Integer * mercury__string__N_8)
#line 5163 "string.m"
{
#line 5166 "string.m"
  {
#line 5166 "string.m"
    MR_bool mercury__string__succeeded;
#line 5166 "string.m"
    MR_Integer mercury__string__M_9;
#line 5166 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 5167 "string.m"
    {
#line 5167 "string.m"
      mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    }
#line 5166 "string.m"
    if (mercury__string__succeeded)
#line 5166 "string.m"
      {
#line 5168 "string.m"
        mercury__string__V_10_10 = (mercury__string__Base_5 * mercury__string__N0_7);
#line 5168 "string.m"
        *mercury__string__N_8 = (mercury__string__V_10_10 - mercury__string__M_9);
#line 5171 "string.m"
        mercury__string__succeeded = (*mercury__string__N_8 <= mercury__string__N0_7);
#line 5166 "string.m"
      }
#line 5166 "string.m"
    return mercury__string__succeeded;
#line 5166 "string.m"
  }
#line 5163 "string.m"
}

#line 5154 "string.m"
MR_bool MR_CALL 
mercury__string__accumulate_int_4_p_0(
#line 5154 "string.m"
  MR_Integer mercury__string__Base_5,
#line 5154 "string.m"
  MR_Char mercury__string__Char_6,
#line 5154 "string.m"
  MR_Integer mercury__string__N0_7,
#line 5154 "string.m"
  MR_Integer * mercury__string__N_8)
#line 5154 "string.m"
{
#line 5156 "string.m"
  {
#line 5156 "string.m"
    MR_bool mercury__string__succeeded;
#line 5156 "string.m"
    MR_Integer mercury__string__M_9;
#line 5156 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 5157 "string.m"
    {
#line 5157 "string.m"
      mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    }
#line 5156 "string.m"
    if (mercury__string__succeeded)
#line 5156 "string.m"
      {
#line 5158 "string.m"
        mercury__string__V_10_10 = (mercury__string__Base_5 * mercury__string__N0_7);
#line 5158 "string.m"
        *mercury__string__N_8 = (mercury__string__V_10_10 + mercury__string__M_9);
#line 5161 "string.m"
        mercury__string__succeeded = (mercury__string__N0_7 <= *mercury__string__N_8);
#line 5156 "string.m"
      }
#line 5156 "string.m"
    return mercury__string__succeeded;
#line 5156 "string.m"
  }
#line 5154 "string.m"
}

#line 5107 "string.m"
void MR_CALL 
mercury__string__max_str_length_3_p_0(
#line 5107 "string.m"
  MR_String mercury__string__Str_4,
#line 5107 "string.m"
  MR_Integer mercury__string__PrevMaxLen_5,
#line 5107 "string.m"
  MR_Integer * mercury__string__MaxLen_6)
#line 5107 "string.m"
{
#line 5109 "string.m"
  {
#line 5109 "string.m"
    MR_bool mercury__string__succeeded;
#line 5109 "string.m"
    MR_Integer mercury__string__Length_7;

#line 2640 "string.m"
    {
#line 2640 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_4, &mercury__string__Length_7);
    }
#line 5111 "string.m"
    mercury__string__succeeded = (mercury__string__Length_7 > mercury__string__PrevMaxLen_5);
#line 5113 "string.m"
    if (mercury__string__succeeded)
#line 5112 "string.m"
      *mercury__string__MaxLen_6 = mercury__string__Length_7;
#line 5113 "string.m"
    else
#line 5114 "string.m"
      *mercury__string__MaxLen_6 = mercury__string__PrevMaxLen_5;
#line 5109 "string.m"
  }
#line 5107 "string.m"
}

#line 5103 "string.m"
MR_String MR_CALL 
mercury__string__lpad_3_f_0(
#line 5103 "string.m"
  MR_Char mercury__string__Chr_5,
#line 5103 "string.m"
  MR_Integer mercury__string__N_6,
#line 5103 "string.m"
  MR_String mercury__string__Str_7)
#line 5103 "string.m"
{
#line 4575 "string.m"
  {
#line 4575 "string.m"
    MR_bool mercury__string__succeeded;
#line 4575 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4575 "string.m"
    MR_Integer mercury__string__Length_16;

#line 4576 "string.m"
    {
#line 4576 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    }
#line 4577 "string.m"
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
#line 4581 "string.m"
    if (mercury__string__succeeded)
#line 4578 "string.m"
      {
#line 4578 "string.m"
        MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
#line 4578 "string.m"
        MR_String mercury__string__PadString_18;

#line 4579 "string.m"
        {
#line 4579 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
        }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__lpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_18 ;
	S2 =  mercury__string__Str_7 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7006 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3390 "string.m"
}
#line 4578 "string.m"
      }
#line 4581 "string.m"
    else
#line 4582 "string.m"
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
#line 4575 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4575 "string.m"
  }
#line 5103 "string.m"
}

#line 5099 "string.m"
MR_String MR_CALL 
mercury__string__rpad_3_f_0(
#line 5099 "string.m"
  MR_Char mercury__string__Chr_5,
#line 5099 "string.m"
  MR_Integer mercury__string__N_6,
#line 5099 "string.m"
  MR_String mercury__string__Str_7)
#line 5099 "string.m"
{
#line 4588 "string.m"
  {
#line 4588 "string.m"
    MR_bool mercury__string__succeeded;
#line 4588 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4588 "string.m"
    MR_Integer mercury__string__Length_16;

#line 4589 "string.m"
    {
#line 4589 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    }
#line 4590 "string.m"
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
#line 4594 "string.m"
    if (mercury__string__succeeded)
#line 4591 "string.m"
      {
#line 4591 "string.m"
        MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
#line 4591 "string.m"
        MR_String mercury__string__PadString_18;

#line 4592 "string.m"
        {
#line 4592 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
        }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__rpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str_7 ;
	S2 =  mercury__string__PadString_18 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7087 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3390 "string.m"
}
#line 4591 "string.m"
      }
#line 4594 "string.m"
    else
#line 4595 "string.m"
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
#line 4588 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4588 "string.m"
  }
#line 5099 "string.m"
}

#line 5092 "string.m"
MR_Word MR_CALL 
mercury__string__pad_column_2_f_0(
#line 5092 "string.m"
  MR_Integer mercury__string__Width_1,
#line 5092 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 5092 "string.m"
{
#line 5094 "string.m"
  {
#line 5094 "string.m"
    MR_bool mercury__string__succeeded;
#line 5094 "string.m"
    MR_Word mercury__string__HeadVar__3_3;

#line 5094 "string.m"
    if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 5094 "string.m"
      {
#line 5094 "string.m"
        MR_Word mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 5095 "string.m"
        {
#line 5095 "string.m"
          return mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_5);
        }
#line 5094 "string.m"
      }
#line 5094 "string.m"
    else
#line 5096 "string.m"
      {
#line 5096 "string.m"
        MR_Word mercury__string__Strings_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 5097 "string.m"
        {
#line 5097 "string.m"
          return mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_9);
        }
#line 5096 "string.m"
      }
#line 5094 "string.m"
    return mercury__string__HeadVar__3_3;
#line 5094 "string.m"
  }
#line 5092 "string.m"
}

#line 5068 "string.m"
MR_Word MR_CALL 
mercury__string__find_max_length_with_limit_1_f_0(
#line 5068 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 5068 "string.m"
{
#line 5071 "string.m"
  {
#line 5071 "string.m"
    MR_bool mercury__string__succeeded;
#line 5071 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 5071 "string.m"
    MR_Word mercury__string__JustColumn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 5071 "string.m"
    MR_Word mercury__string__MaybeLimit_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 5071 "string.m"
    MR_Word mercury__string__Sense_5;
#line 5071 "string.m"
    MR_Integer mercury__string__MaxLength_6;
#line 5071 "string.m"
    MR_Word mercury__string__Strings_7;
#line 5071 "string.m"
    MR_Integer mercury__string__MaxLength0_8;

#line 5075 "string.m"
    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
#line 5073 "string.m"
      {
#line 5073 "string.m"
        mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 5074 "string.m"
        mercury__string__Sense_5 = (MR_Integer) 0;
#line 5073 "string.m"
      }
#line 5075 "string.m"
    else
#line 5076 "string.m"
      {
#line 5076 "string.m"
        mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 5077 "string.m"
        mercury__string__Sense_5 = (MR_Integer) 1;
#line 5076 "string.m"
      }
#line 5079 "string.m"
    {
#line 5079 "string.m"
      mercury__string__foldl__ho8_4_p_in__list_0(mercury__string__Strings_7, (MR_Integer) 0, &mercury__string__MaxLength0_8);
    }
#line 5087 "string.m"
    if ((mercury__string__MaybeLimit_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5089 "string.m"
      mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
#line 5087 "string.m"
    else
#line 5081 "string.m"
      {
#line 5081 "string.m"
        MR_Integer mercury__string__Limit_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__MaybeLimit_4, (MR_Integer) 0)));

#line 5082 "string.m"
        mercury__string__succeeded = (mercury__string__MaxLength0_8 > mercury__string__Limit_9);
#line 5084 "string.m"
        if (mercury__string__succeeded)
#line 5083 "string.m"
          mercury__string__MaxLength_6 = mercury__string__Limit_9;
#line 5084 "string.m"
        else
#line 5085 "string.m"
          mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
#line 5081 "string.m"
      }
#line 5071 "string.m"
    {
#line 5071 "string.m"
      mercury__string__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5071 "string.m"
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__Sense_5));
#line 5071 "string.m"
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 1) = ((MR_Box) (mercury__string__MaxLength_6));
#line 5071 "string.m"
    }
#line 5071 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5071 "string.m"
  }
#line 5068 "string.m"
}

#line 5056 "string.m"
MR_Integer MR_CALL 
mercury__string__find_max_length_1_f_0(
#line 5056 "string.m"
  MR_Word mercury__string__JustColumn_3)
#line 5056 "string.m"
{
#line 5058 "string.m"
  {
#line 5058 "string.m"
    MR_bool mercury__string__succeeded;
#line 5058 "string.m"
    MR_Integer mercury__string__MaxLength_4;
#line 5058 "string.m"
    MR_Word mercury__string__Strings_5;

#line 5060 "string.m"
    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
#line 5059 "string.m"
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 5060 "string.m"
    else
#line 5060 "string.m"
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 5062 "string.m"
    {
#line 5062 "string.m"
      mercury__string__foldl__ho8_4_p_in__list_0(mercury__string__Strings_5, (MR_Integer) 0, &mercury__string__MaxLength_4);
    }
#line 5058 "string.m"
    return mercury__string__MaxLength_4;
#line 5058 "string.m"
  }
#line 5056 "string.m"
}

#line 5052 "string.m"
MR_String MR_CALL 
mercury__string__join_rev_columns_3_f_0(
#line 5052 "string.m"
  MR_String mercury__string__Separator_5,
#line 5052 "string.m"
  MR_String mercury__string__Col1_6,
#line 5052 "string.m"
  MR_String mercury__string__Col2_7)
#line 5052 "string.m"
{
#line 5054 "string.m"
  {
#line 5054 "string.m"
    MR_bool mercury__string__succeeded;
#line 5054 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 5054 "string.m"
    MR_String mercury__string__V_8_8;

#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Separator_5 ;
	S2 =  mercury__string__Col1_6 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7325 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3390 "string.m"
}
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Col2_7 ;
	S2 =  mercury__string__V_8_8 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7352 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3390 "string.m"
}
#line 5054 "string.m"
    return mercury__string__HeadVar__4_4;
#line 5054 "string.m"
  }
#line 5052 "string.m"
}

#line 5013 "string.m"
void MR_CALL 
mercury__string__pad_row_6_p_0(
#line 5013 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 5013 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 5013 "string.m"
  MR_String mercury__string__Separator_3,
#line 5013 "string.m"
  MR_Integer mercury__string__SepLen_4,
#line 5013 "string.m"
  MR_Integer mercury__string__CurColumn_5,
#line 5013 "string.m"
  MR_String * mercury__string__HeadVar__6_6)
#line 5013 "string.m"
{
#line 5016 "string.m"
  {
#line 5016 "string.m"
    MR_bool mercury__string__succeeded;

#line 5016 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5016 "string.m"
      if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5016 "string.m"
        *mercury__string__HeadVar__6_6 = (MR_String) "";
#line 5016 "string.m"
      else
#line 5047 "string.m"
        {
#line 5048 "string.m"
          {
#line 5048 "string.m"
            mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
#line 5048 "string.m"
            return;
          }
#line 5047 "string.m"
        }
#line 5016 "string.m"
    else
#line 5016 "string.m"
      {
#line 5016 "string.m"
        MR_Word mercury__string__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 5016 "string.m"
        MR_Word mercury__string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));

#line 5016 "string.m"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5049 "string.m"
          {
#line 5050 "string.m"
            {
#line 5050 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
#line 5050 "string.m"
              return;
            }
#line 5049 "string.m"
          }
#line 5016 "string.m"
        else
#line 5018 "string.m"
          {
#line 5018 "string.m"
            MR_Word mercury__string__Justify_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_55_55, (MR_Integer) 0)));
#line 5018 "string.m"
            MR_Integer mercury__string__MaxWidth_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__V_55_55, (MR_Integer) 1)));
#line 5018 "string.m"
            MR_String mercury__string__ColumnStr0_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5018 "string.m"
            MR_Word mercury__string__ColumnStrs0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 5018 "string.m"
            MR_Integer mercury__string__NextColumn_19;
#line 5018 "string.m"
            MR_String mercury__string__LineRest_20;
#line 5018 "string.m"
            MR_Integer mercury__string__V_27_27 = (mercury__string__CurColumn_5 + mercury__string__MaxWidth_11);
#line 5022 "string.m"
            MR_Integer mercury__string__V_28_28;

#line 5019 "string.m"
            mercury__string__NextColumn_19 = (mercury__string__V_27_27 + mercury__string__SepLen_4);
#line 5020 "string.m"
            {
#line 5020 "string.m"
              mercury__string__pad_row_6_p_0(mercury__string__V_54_54, mercury__string__ColumnStrs0_14, mercury__string__Separator_3, mercury__string__SepLen_4, mercury__string__NextColumn_19, &mercury__string__LineRest_20);
            }
#line 2640 "string.m"
            {
#line 2640 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__V_28_28);
            }
#line 5022 "string.m"
            mercury__string__succeeded = (mercury__string__V_28_28 <= mercury__string__MaxWidth_11);
#line 5037 "string.m"
            if (mercury__string__succeeded)
#line 5029 "string.m"
              {
#line 5029 "string.m"
                MR_String mercury__string__ColumnStr_21;

#line 5026 "string.m"
#line 5026 "string.m"
                switch (mercury__string__Justify_10) {
#line 5026 "string.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 5026 "string.m"
                  case (MR_Integer) 0:
#line 5024 "string.m"
                    {
#line 5024 "string.m"
                      MR_Integer mercury__string__Length_66;

#line 4589 "string.m"
                      {
#line 4589 "string.m"
                        mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__Length_66);
                      }
#line 4590 "string.m"
                      mercury__string__succeeded = (mercury__string__Length_66 < mercury__string__MaxWidth_11);
#line 4594 "string.m"
                      if (mercury__string__succeeded)
#line 4591 "string.m"
                        {
#line 4591 "string.m"
                          MR_Integer mercury__string__Count_67 = (mercury__string__MaxWidth_11 - mercury__string__Length_66);
#line 4591 "string.m"
                          MR_String mercury__string__PadString_68;

#line 4592 "string.m"
                          {
#line 4592 "string.m"
                            mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__Count_67, &mercury__string__PadString_68);
                          }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_row_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__ColumnStr0_13 ;
	S2 =  mercury__string__PadString_68 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7524 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ColumnStr_21  = S3;
#line 3390 "string.m"
}
#line 4591 "string.m"
                        }
#line 4594 "string.m"
                      else
#line 4595 "string.m"
                        mercury__string__ColumnStr_21 = mercury__string__ColumnStr0_13;
#line 5024 "string.m"
                    }
#line 5026 "string.m"
                    break;
#line 5026 "string.m"
                  case (MR_Integer) 1:
#line 5027 "string.m"
                    {
#line 5028 "string.m"
                      {
#line 5028 "string.m"
                        mercury__string__ColumnStr_21 = mercury__string__pad_left_3_f_0(mercury__string__ColumnStr0_13, (MR_Char) 32, mercury__string__MaxWidth_11);
                      }
#line 5027 "string.m"
                    }
#line 5026 "string.m"
                    break;
#line 5026 "string.m"
                }
#line 5033 "string.m"
                if ((mercury__string__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5031 "string.m"
                  *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr_21;
#line 5033 "string.m"
                else
#line 5034 "string.m"
                  {
#line 5034 "string.m"
                    MR_String mercury__string__V_31_31;

#line 5035 "string.m"
                    {
#line 5035 "string.m"
                      mercury__string__V_31_31 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__LineRest_20);
                    }
#line 5035 "string.m"
                    {
#line 5035 "string.m"
                      *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr_21, mercury__string__V_31_31);
                    }
#line 5034 "string.m"
                  }
#line 5029 "string.m"
              }
#line 5037 "string.m"
            else
#line 5041 "string.m"
            if ((mercury__string__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5039 "string.m"
              *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr0_13;
#line 5041 "string.m"
            else
#line 5042 "string.m"
              {
#line 5042 "string.m"
                MR_String mercury__string__V_32_32;
#line 5042 "string.m"
                MR_String mercury__string__V_33_33;
#line 5042 "string.m"
                MR_String mercury__string__V_35_35;
#line 5042 "string.m"
                MR_String mercury__string__V_36_36;

#line 2007 "string.m"
                {
#line 2007 "string.m"
                  mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__NextColumn_19, &mercury__string__V_36_36);
                }
#line 5044 "string.m"
                {
#line 5044 "string.m"
                  mercury__string__V_35_35 = mercury__string__f_43_43_2_f_0(mercury__string__V_36_36, mercury__string__LineRest_20);
                }
#line 5043 "string.m"
                {
#line 5043 "string.m"
                  mercury__string__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mercury__string__V_35_35);
                }
#line 5043 "string.m"
                {
#line 5043 "string.m"
                  mercury__string__V_32_32 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__V_33_33);
                }
#line 5043 "string.m"
                {
#line 5043 "string.m"
                  *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr0_13, mercury__string__V_32_32);
                }
#line 5042 "string.m"
              }
#line 5018 "string.m"
          }
#line 5016 "string.m"
      }
#line 5016 "string.m"
  }
#line 5013 "string.m"
}

#line 4999 "string.m"
void MR_CALL 
mercury__string__get_next_line_3_p_0(
#line 4999 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4999 "string.m"
  MR_Word * mercury__string__HeadVar__2_2,
#line 4999 "string.m"
  MR_Word * mercury__string__HeadVar__3_3)
#line 4999 "string.m"
{
#line 5002 "string.m"
  {
#line 5002 "string.m"
    MR_bool mercury__string__succeeded;

#line 5002 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5002 "string.m"
      {
#line 5002 "string.m"
        *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5002 "string.m"
        *mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5002 "string.m"
      }
#line 5002 "string.m"
    else
#line 5004 "string.m"
      {
#line 5004 "string.m"
        MR_Word mercury__string__Column_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 5004 "string.m"
        MR_Word mercury__string__Columns_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 5004 "string.m"
        MR_String mercury__string__ColumnTop_6;
#line 5004 "string.m"
        MR_Word mercury__string__ColumnTops_7;
#line 5004 "string.m"
        MR_Word mercury__string__ColumnRest_8;
#line 5004 "string.m"
        MR_Word mercury__string__ColumnRests_9;

#line 5008 "string.m"
        if ((mercury__string__Column_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5006 "string.m"
          {
#line 5007 "string.m"
            {
#line 5007 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.get_next_line\'/3", (MR_String) "list length mismatch");
#line 5007 "string.m"
              return;
            }
#line 5006 "string.m"
          }
#line 5008 "string.m"
        else
#line 5009 "string.m"
          {
#line 5009 "string.m"
            mercury__string__ColumnTop_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 0)));
#line 5009 "string.m"
            mercury__string__ColumnRest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 1)));
#line 5009 "string.m"
          }
#line 5011 "string.m"
        {
#line 5011 "string.m"
          mercury__string__get_next_line_3_p_0(mercury__string__Columns_5, &mercury__string__ColumnTops_7, &mercury__string__ColumnRests_9);
        }
#line 5003 "string.m"
        {
#line 5003 "string.m"
          MR_Word base;
#line 5003 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5003 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 5003 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnTop_6));
#line 5003 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnTops_7));
#line 5003 "string.m"
        }
#line 5004 "string.m"
        {
#line 5004 "string.m"
          MR_Word base;
#line 5004 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5004 "string.m"
          *mercury__string__HeadVar__3_3 = base;
#line 5004 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnRest_8));
#line 5004 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnRests_9));
#line 5004 "string.m"
        }
#line 5004 "string.m"
      }
#line 5002 "string.m"
  }
#line 4999 "string.m"
}

#line 4992 "string.m"
MR_bool MR_CALL 
mercury__string__all_empty_1_p_0(
#line 4992 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4992 "string.m"
{
#line 4994 "string.m"
  while (MR_TRUE)
#line 4994 "string.m"
    {
#line 4994 "string.m"
      /* tailcall optimized into a loop */
#line 4994 "string.m"
      {
#line 4994 "string.m"
        MR_bool mercury__string__succeeded;

#line 4994 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4994 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4994 "string.m"
        else
#line 4995 "string.m"
          {
#line 4995 "string.m"
            MR_Word mercury__string__List_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4995 "string.m"
            MR_Word mercury__string__Lists_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

#line 4996 "string.m"
            mercury__string__succeeded = (mercury__string__List_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 4995 "string.m"
            if (mercury__string__succeeded)
#line 4997 "string.m"
              {
#line 4997 "string.m"
                /* direct tailcall eliminated */
#line 4997 "string.m"
                {
#line 4997 "string.m"
                  MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__Lists_3;

#line 4997 "string.m"
                  mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 4997 "string.m"
                }
#line 4997 "string.m"
                continue;
#line 4997 "string.m"
              }
#line 4995 "string.m"
          }
#line 4994 "string.m"
        return mercury__string__succeeded;
#line 4994 "string.m"
      }
#line 4994 "string.m"
      break;
#line 4994 "string.m"
    }
#line 4992 "string.m"
}

#line 4979 "string.m"
void MR_CALL 
mercury__string__generate_rows_6_p_0(
#line 4979 "string.m"
  MR_Word mercury__string__MaxWidthsSenses_7,
#line 4979 "string.m"
  MR_String mercury__string__Separator_8,
#line 4979 "string.m"
  MR_Integer mercury__string__SepLen_9,
#line 4979 "string.m"
  MR_Word mercury__string__Columns0_10,
#line 4979 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevRows_0_15,
#line 4979 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevRows_16)
#line 4979 "string.m"
{
#line 4985 "string.m"
  while (MR_TRUE)
#line 4985 "string.m"
    {
#line 4985 "string.m"
      /* tailcall optimized into a loop */
#line 4985 "string.m"
      {
#line 4985 "string.m"
        MR_bool mercury__string__succeeded;

#line 4983 "string.m"
        {
#line 4983 "string.m"
          mercury__string__succeeded = mercury__string__all_empty_1_p_0(mercury__string__Columns0_10);
        }
#line 4985 "string.m"
        if (mercury__string__succeeded)
#line 4985 "string.m"
          *mercury__string__STATE_VARIABLE_RevRows_16 = mercury__string__STATE_VARIABLE_RevRows_0_15;
#line 4985 "string.m"
        else
#line 4986 "string.m"
          {
#line 4986 "string.m"
            MR_Word mercury__string__Line_12;
#line 4986 "string.m"
            MR_Word mercury__string__Columns_13;
#line 4986 "string.m"
            MR_String mercury__string__Row_14;
#line 4986 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_RevRows_18_18;

#line 4986 "string.m"
            {
#line 4986 "string.m"
              mercury__string__get_next_line_3_p_0(mercury__string__Columns0_10, &mercury__string__Line_12, &mercury__string__Columns_13);
            }
#line 4987 "string.m"
            {
#line 4987 "string.m"
              mercury__string__pad_row_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Line_12, mercury__string__Separator_8, mercury__string__SepLen_9, (MR_Integer) 0, &mercury__string__Row_14);
            }
#line 4988 "string.m"
            {
#line 4988 "string.m"
              mercury__string__STATE_VARIABLE_RevRows_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4988 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 0) = ((MR_Box) (mercury__string__Row_14));
#line 4988 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevRows_0_15));
#line 4988 "string.m"
            }
#line 4989 "string.m"
            /* direct tailcall eliminated */
#line 4989 "string.m"
            {
#line 4989 "string.m"
              MR_Word mercury__string__Columns0__tmp_copy_10 = mercury__string__Columns_13;
#line 4989 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_RevRows_0__tmp_copy_15 = mercury__string__STATE_VARIABLE_RevRows_18_18;

#line 4989 "string.m"
              mercury__string__STATE_VARIABLE_RevRows_0_15 = mercury__string__STATE_VARIABLE_RevRows_0__tmp_copy_15;
#line 4989 "string.m"
              mercury__string__Columns0_10 = mercury__string__Columns0__tmp_copy_10;
#line 4989 "string.m"
            }
#line 4989 "string.m"
            continue;
#line 4986 "string.m"
          }
#line 4985 "string.m"
      }
#line 4985 "string.m"
      break;
#line 4985 "string.m"
    }
#line 4979 "string.m"
}

#line 4973 "string.m"
MR_Word MR_CALL 
mercury__string__project_column_strings_1_f_0(
#line 4973 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4973 "string.m"
{
#line 4976 "string.m"
  {
#line 4976 "string.m"
    MR_bool mercury__string__succeeded;
#line 4976 "string.m"
    MR_Word mercury__string__Strings_2;
#line 4976 "string.m"
    MR_Word mercury__string__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4976 "string.m"
    MR_Word mercury__string__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

#line 4976 "string.m"
    if (((MR_tag((MR_Word) mercury__string__V_10_10)) == (MR_mktag((MR_Integer) 0))))
#line 4976 "string.m"
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_10_10, (MR_Integer) 0)));
#line 4976 "string.m"
    else
#line 4977 "string.m"
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_10_10, (MR_Integer) 0)));
#line 4976 "string.m"
    return mercury__string__Strings_2;
#line 4976 "string.m"
  }
#line 4973 "string.m"
}

#line 4918 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
#line 4918 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4918 "string.m"
{
#line 4918 "string.m"
  {
#line 4918 "string.m"
    struct mercury__string__foldr_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4919 "string.m"
    {
#line 4919 "string.m"
      mercury__string__foldr_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
#line 4919 "string.m"
      return;
    }
#line 4918 "string.m"
  }
#line 4918 "string.m"
}

#line 4909 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_4(
#line 4909 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4909 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4909 "string.m"
  MR_String mercury__string__String_8,
#line 4909 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4909 "string.m"
  MR_Integer mercury__string__I_10,
#line 4909 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4909 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4909 "string.m"
  MR_Cont mercury__string__cont,
#line 4909 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4909 "string.m"
{
#line 4909 "string.m"
  {
#line 4909 "string.m"
    struct mercury__string__foldr_between_2_6_p_4_env_0_s mercury__string__env;

#line 4909 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
#line 4909 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
#line 4909 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
#line 4909 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9 = mercury__string__Start_9;
#line 4909 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4909 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont = mercury__string__cont;
#line 4909 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4920 "string.m"
    {
#line 4920 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
#line 4920 "string.m"
      MR_Char mercury__string__Char_13;

#line 4914 "string.m"
      if (mercury__string__succeeded)
#line 4914 "string.m"
        {
#line 2213 "string.m"
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
#line 2213 "string.m"

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

#line 8043 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4914 "string.m"
          if (mercury__string__succeeded)
#line 4916 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
#line 4914 "string.m"
        }
#line 4920 "string.m"
      if (mercury__string__succeeded)
#line 4918 "string.m"
        {
#line 4918 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

#line 4918 "string.m"
          {
#line 4918 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_4_1, &mercury__string__env);
          }
#line 4918 "string.m"
        }
#line 4920 "string.m"
      else
#line 4920 "string.m"
        {
#line 4920 "string.m"
          *((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4920 "string.m"
          {
#line 4920 "string.m"
            ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
#line 4920 "string.m"
            return;
          }
#line 4920 "string.m"
        }
#line 4920 "string.m"
    }
#line 4909 "string.m"
  }
#line 4909 "string.m"
}

#line 4918 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
#line 4918 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4918 "string.m"
{
#line 4918 "string.m"
  {
#line 4918 "string.m"
    struct mercury__string__foldr_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 4919 "string.m"
    {
#line 4919 "string.m"
      mercury__string__foldr_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
#line 4919 "string.m"
      return;
    }
#line 4918 "string.m"
  }
#line 4918 "string.m"
}

#line 4907 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_3(
#line 4907 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4907 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4907 "string.m"
  MR_String mercury__string__String_8,
#line 4907 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4907 "string.m"
  MR_Integer mercury__string__I_10,
#line 4907 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4907 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4907 "string.m"
  MR_Cont mercury__string__cont,
#line 4907 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4907 "string.m"
{
#line 4907 "string.m"
  {
#line 4907 "string.m"
    struct mercury__string__foldr_between_2_6_p_3_env_0_s mercury__string__env;

#line 4907 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
#line 4907 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
#line 4907 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
#line 4907 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9 = mercury__string__Start_9;
#line 4907 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4907 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont = mercury__string__cont;
#line 4907 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4920 "string.m"
    {
#line 4920 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
#line 4920 "string.m"
      MR_Char mercury__string__Char_13;

#line 4914 "string.m"
      if (mercury__string__succeeded)
#line 4914 "string.m"
        {
#line 2213 "string.m"
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
#line 2213 "string.m"

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

#line 8201 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4914 "string.m"
          if (mercury__string__succeeded)
#line 4916 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
#line 4914 "string.m"
        }
#line 4920 "string.m"
      if (mercury__string__succeeded)
#line 4918 "string.m"
        {
#line 4918 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

#line 4918 "string.m"
          {
#line 4918 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_3_1, &mercury__string__env);
          }
#line 4918 "string.m"
        }
#line 4920 "string.m"
      else
#line 4920 "string.m"
        {
#line 4920 "string.m"
          *((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4920 "string.m"
          {
#line 4920 "string.m"
            ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
#line 4920 "string.m"
            return;
          }
#line 4920 "string.m"
        }
#line 4920 "string.m"
    }
#line 4907 "string.m"
  }
#line 4907 "string.m"
}

#line 4905 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_between_2_6_p_2(
#line 4905 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4905 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4905 "string.m"
  MR_String mercury__string__String_8,
#line 4905 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4905 "string.m"
  MR_Integer mercury__string__I_10,
#line 4905 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4905 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4905 "string.m"
{
#line 4920 "string.m"
  while (MR_TRUE)
#line 4920 "string.m"
    {
#line 4920 "string.m"
      /* tailcall optimized into a loop */
#line 4920 "string.m"
      {
#line 4920 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4920 "string.m"
        MR_Integer mercury__string__J_12;
#line 4920 "string.m"
        MR_Char mercury__string__Char_13;

#line 4914 "string.m"
        if (mercury__string__succeeded)
#line 4914 "string.m"
          {
#line 2213 "string.m"
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
#line 2213 "string.m"

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

#line 8320 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4914 "string.m"
            if (mercury__string__succeeded)
#line 4916 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4914 "string.m"
          }
#line 4920 "string.m"
        if (mercury__string__succeeded)
#line 4918 "string.m"
          {
#line 4918 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4918 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4918 "string.m"
            {
#line 4918 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4918 "string.m"
            if (mercury__string__succeeded)
#line 4919 "string.m"
              {
#line 4919 "string.m"
                /* direct tailcall eliminated */
#line 4919 "string.m"
                {
#line 4919 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4919 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4919 "string.m"
                  mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4919 "string.m"
                  mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4919 "string.m"
                }
#line 4919 "string.m"
                continue;
#line 4919 "string.m"
              }
#line 4918 "string.m"
          }
#line 4920 "string.m"
        else
#line 4920 "string.m"
          {
#line 4920 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4920 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4920 "string.m"
          }
#line 4920 "string.m"
        return mercury__string__succeeded;
#line 4920 "string.m"
      }
#line 4920 "string.m"
      break;
#line 4920 "string.m"
    }
#line 4905 "string.m"
}

#line 4903 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_1(
#line 4903 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4903 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4903 "string.m"
  MR_String mercury__string__String_8,
#line 4903 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4903 "string.m"
  MR_Integer mercury__string__I_10,
#line 4903 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4903 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4903 "string.m"
{
#line 4920 "string.m"
  while (MR_TRUE)
#line 4920 "string.m"
    {
#line 4920 "string.m"
      /* tailcall optimized into a loop */
#line 4920 "string.m"
      {
#line 4920 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4920 "string.m"
        MR_Integer mercury__string__J_12;
#line 4920 "string.m"
        MR_Char mercury__string__Char_13;

#line 4914 "string.m"
        if (mercury__string__succeeded)
#line 4914 "string.m"
          {
#line 2213 "string.m"
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
#line 2213 "string.m"

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

#line 8463 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4914 "string.m"
            if (mercury__string__succeeded)
#line 4916 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4914 "string.m"
          }
#line 4920 "string.m"
        if (mercury__string__succeeded)
#line 4918 "string.m"
          {
#line 4918 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4918 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4918 "string.m"
            {
#line 4918 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4919 "string.m"
            /* direct tailcall eliminated */
#line 4919 "string.m"
            {
#line 4919 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4919 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4919 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4919 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4919 "string.m"
            }
#line 4919 "string.m"
            continue;
#line 4918 "string.m"
          }
#line 4920 "string.m"
        else
#line 4920 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4920 "string.m"
      }
#line 4920 "string.m"
      break;
#line 4920 "string.m"
    }
#line 4903 "string.m"
}

#line 4901 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_0(
#line 4901 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4901 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4901 "string.m"
  MR_String mercury__string__String_8,
#line 4901 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4901 "string.m"
  MR_Integer mercury__string__I_10,
#line 4901 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4901 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4901 "string.m"
{
#line 4920 "string.m"
  while (MR_TRUE)
#line 4920 "string.m"
    {
#line 4920 "string.m"
      /* tailcall optimized into a loop */
#line 4920 "string.m"
      {
#line 4920 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4920 "string.m"
        MR_Integer mercury__string__J_12;
#line 4920 "string.m"
        MR_Char mercury__string__Char_13;

#line 4914 "string.m"
        if (mercury__string__succeeded)
#line 4914 "string.m"
          {
#line 2213 "string.m"
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
#line 2213 "string.m"

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

#line 8592 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4914 "string.m"
            if (mercury__string__succeeded)
#line 4916 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4914 "string.m"
          }
#line 4920 "string.m"
        if (mercury__string__succeeded)
#line 4918 "string.m"
          {
#line 4918 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4918 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4918 "string.m"
            {
#line 4918 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4919 "string.m"
            /* direct tailcall eliminated */
#line 4919 "string.m"
            {
#line 4919 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4919 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4919 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4919 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4919 "string.m"
            }
#line 4919 "string.m"
            continue;
#line 4918 "string.m"
          }
#line 4920 "string.m"
        else
#line 4920 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4920 "string.m"
      }
#line 4920 "string.m"
      break;
#line 4920 "string.m"
    }
#line 4901 "string.m"
}

#line 4863 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
#line 4863 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4863 "string.m"
{
#line 4863 "string.m"
  {
#line 4863 "string.m"
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_5_env_0_s *) mercury__string__env_ptr_arg;

#line 4864 "string.m"
    {
#line 4864 "string.m"
      mercury__string__foldl2_between_2_8_p_5((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
#line 4864 "string.m"
      return;
    }
#line 4863 "string.m"
  }
#line 4863 "string.m"
}

#line 4854 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_5(
#line 4854 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4854 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4854 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4854 "string.m"
  MR_String mercury__string__String_10,
#line 4854 "string.m"
  MR_Integer mercury__string__I_11,
#line 4854 "string.m"
  MR_Integer mercury__string__End_12,
#line 4854 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4854 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4854 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4854 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 4854 "string.m"
  MR_Cont mercury__string__cont,
#line 4854 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4854 "string.m"
{
#line 4854 "string.m"
  {
#line 4854 "string.m"
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s mercury__string__env;

#line 4854 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
#line 4854 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
#line 4854 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9 = mercury__string__Closure_9;
#line 4854 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__String_10 = mercury__string__String_10;
#line 4854 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12 = mercury__string__End_12;
#line 4854 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
#line 4854 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
#line 4854 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont = mercury__string__cont;
#line 4854 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4865 "string.m"
    {
#line 4865 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
#line 4865 "string.m"
      MR_Char mercury__string__Char_16;

#line 4859 "string.m"
      if (mercury__string__succeeded)
#line 4859 "string.m"
        {
#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8767 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4859 "string.m"
          if (mercury__string__succeeded)
#line 4861 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
#line 4859 "string.m"
        }
#line 4865 "string.m"
      if (mercury__string__succeeded)
#line 4863 "string.m"
        {
#line 4863 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (MR_Integer) 1)));

#line 4863 "string.m"
          {
#line 4863 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_5_1, &mercury__string__env);
          }
#line 4863 "string.m"
        }
#line 4865 "string.m"
      else
#line 4866 "string.m"
        {
#line 4866 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4866 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4866 "string.m"
          {
#line 4866 "string.m"
            ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
#line 4866 "string.m"
            return;
          }
#line 4866 "string.m"
        }
#line 4865 "string.m"
    }
#line 4854 "string.m"
  }
#line 4854 "string.m"
}

#line 4863 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
#line 4863 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4863 "string.m"
{
#line 4863 "string.m"
  {
#line 4863 "string.m"
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4864 "string.m"
    {
#line 4864 "string.m"
      mercury__string__foldl2_between_2_8_p_4((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
#line 4864 "string.m"
      return;
    }
#line 4863 "string.m"
  }
#line 4863 "string.m"
}

#line 4852 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_4(
#line 4852 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4852 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4852 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4852 "string.m"
  MR_String mercury__string__String_10,
#line 4852 "string.m"
  MR_Integer mercury__string__I_11,
#line 4852 "string.m"
  MR_Integer mercury__string__End_12,
#line 4852 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4852 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4852 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4852 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 4852 "string.m"
  MR_Cont mercury__string__cont,
#line 4852 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4852 "string.m"
{
#line 4852 "string.m"
  {
#line 4852 "string.m"
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s mercury__string__env;

#line 4852 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
#line 4852 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
#line 4852 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9 = mercury__string__Closure_9;
#line 4852 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__String_10 = mercury__string__String_10;
#line 4852 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12 = mercury__string__End_12;
#line 4852 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
#line 4852 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
#line 4852 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont = mercury__string__cont;
#line 4852 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4865 "string.m"
    {
#line 4865 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
#line 4865 "string.m"
      MR_Char mercury__string__Char_16;

#line 4859 "string.m"
      if (mercury__string__succeeded)
#line 4859 "string.m"
        {
#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8934 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4859 "string.m"
          if (mercury__string__succeeded)
#line 4861 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
#line 4859 "string.m"
        }
#line 4865 "string.m"
      if (mercury__string__succeeded)
#line 4863 "string.m"
        {
#line 4863 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (MR_Integer) 1)));

#line 4863 "string.m"
          {
#line 4863 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_4_1, &mercury__string__env);
          }
#line 4863 "string.m"
        }
#line 4865 "string.m"
      else
#line 4866 "string.m"
        {
#line 4866 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4866 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4866 "string.m"
          {
#line 4866 "string.m"
            ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
#line 4866 "string.m"
            return;
          }
#line 4866 "string.m"
        }
#line 4865 "string.m"
    }
#line 4852 "string.m"
  }
#line 4852 "string.m"
}

#line 4850 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_between_2_8_p_3(
#line 4850 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4850 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4850 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4850 "string.m"
  MR_String mercury__string__String_10,
#line 4850 "string.m"
  MR_Integer mercury__string__I_11,
#line 4850 "string.m"
  MR_Integer mercury__string__End_12,
#line 4850 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4850 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4850 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4850 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4850 "string.m"
{
#line 4865 "string.m"
  while (MR_TRUE)
#line 4865 "string.m"
    {
#line 4865 "string.m"
      /* tailcall optimized into a loop */
#line 4865 "string.m"
      {
#line 4865 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4865 "string.m"
        MR_Integer mercury__string__J_15;
#line 4865 "string.m"
        MR_Char mercury__string__Char_16;

#line 4859 "string.m"
        if (mercury__string__succeeded)
#line 4859 "string.m"
          {
#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9058 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4859 "string.m"
            if (mercury__string__succeeded)
#line 4861 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4859 "string.m"
          }
#line 4865 "string.m"
        if (mercury__string__succeeded)
#line 4863 "string.m"
          {
#line 4863 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4863 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4863 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4863 "string.m"
            {
#line 4863 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4863 "string.m"
            if (mercury__string__succeeded)
#line 4864 "string.m"
              {
#line 4864 "string.m"
                /* direct tailcall eliminated */
#line 4864 "string.m"
                {
#line 4864 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4864 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4864 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4864 "string.m"
                  mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4864 "string.m"
                  mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4864 "string.m"
                  mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4864 "string.m"
                }
#line 4864 "string.m"
                continue;
#line 4864 "string.m"
              }
#line 4863 "string.m"
          }
#line 4865 "string.m"
        else
#line 4866 "string.m"
          {
#line 4866 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4866 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4866 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4866 "string.m"
          }
#line 4865 "string.m"
        return mercury__string__succeeded;
#line 4865 "string.m"
      }
#line 4865 "string.m"
      break;
#line 4865 "string.m"
    }
#line 4850 "string.m"
}

#line 4848 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_2(
#line 4848 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4848 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4848 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4848 "string.m"
  MR_String mercury__string__String_10,
#line 4848 "string.m"
  MR_Integer mercury__string__I_11,
#line 4848 "string.m"
  MR_Integer mercury__string__End_12,
#line 4848 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4848 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4848 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4848 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4848 "string.m"
{
#line 4865 "string.m"
  while (MR_TRUE)
#line 4865 "string.m"
    {
#line 4865 "string.m"
      /* tailcall optimized into a loop */
#line 4865 "string.m"
      {
#line 4865 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4865 "string.m"
        MR_Integer mercury__string__J_15;
#line 4865 "string.m"
        MR_Char mercury__string__Char_16;

#line 4859 "string.m"
        if (mercury__string__succeeded)
#line 4859 "string.m"
          {
#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9212 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4859 "string.m"
            if (mercury__string__succeeded)
#line 4861 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4859 "string.m"
          }
#line 4865 "string.m"
        if (mercury__string__succeeded)
#line 4863 "string.m"
          {
#line 4863 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4863 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4863 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4863 "string.m"
            {
#line 4863 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4864 "string.m"
            /* direct tailcall eliminated */
#line 4864 "string.m"
            {
#line 4864 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4864 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4864 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4864 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4864 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4864 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4864 "string.m"
            }
#line 4864 "string.m"
            continue;
#line 4863 "string.m"
          }
#line 4865 "string.m"
        else
#line 4866 "string.m"
          {
#line 4866 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4866 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4866 "string.m"
          }
#line 4865 "string.m"
      }
#line 4865 "string.m"
      break;
#line 4865 "string.m"
    }
#line 4848 "string.m"
}

#line 4846 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_1(
#line 4846 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4846 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4846 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4846 "string.m"
  MR_String mercury__string__String_10,
#line 4846 "string.m"
  MR_Integer mercury__string__I_11,
#line 4846 "string.m"
  MR_Integer mercury__string__End_12,
#line 4846 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4846 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4846 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4846 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4846 "string.m"
{
#line 4865 "string.m"
  while (MR_TRUE)
#line 4865 "string.m"
    {
#line 4865 "string.m"
      /* tailcall optimized into a loop */
#line 4865 "string.m"
      {
#line 4865 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4865 "string.m"
        MR_Integer mercury__string__J_15;
#line 4865 "string.m"
        MR_Char mercury__string__Char_16;

#line 4859 "string.m"
        if (mercury__string__succeeded)
#line 4859 "string.m"
          {
#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9356 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4859 "string.m"
            if (mercury__string__succeeded)
#line 4861 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4859 "string.m"
          }
#line 4865 "string.m"
        if (mercury__string__succeeded)
#line 4863 "string.m"
          {
#line 4863 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4863 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4863 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4863 "string.m"
            {
#line 4863 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4864 "string.m"
            /* direct tailcall eliminated */
#line 4864 "string.m"
            {
#line 4864 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4864 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4864 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4864 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4864 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4864 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4864 "string.m"
            }
#line 4864 "string.m"
            continue;
#line 4863 "string.m"
          }
#line 4865 "string.m"
        else
#line 4866 "string.m"
          {
#line 4866 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4866 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4866 "string.m"
          }
#line 4865 "string.m"
      }
#line 4865 "string.m"
      break;
#line 4865 "string.m"
    }
#line 4846 "string.m"
}

#line 4844 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_0(
#line 4844 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4844 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4844 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4844 "string.m"
  MR_String mercury__string__String_10,
#line 4844 "string.m"
  MR_Integer mercury__string__I_11,
#line 4844 "string.m"
  MR_Integer mercury__string__End_12,
#line 4844 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4844 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4844 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4844 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4844 "string.m"
{
#line 4865 "string.m"
  while (MR_TRUE)
#line 4865 "string.m"
    {
#line 4865 "string.m"
      /* tailcall optimized into a loop */
#line 4865 "string.m"
      {
#line 4865 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4865 "string.m"
        MR_Integer mercury__string__J_15;
#line 4865 "string.m"
        MR_Char mercury__string__Char_16;

#line 4859 "string.m"
        if (mercury__string__succeeded)
#line 4859 "string.m"
          {
#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9500 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4859 "string.m"
            if (mercury__string__succeeded)
#line 4861 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4859 "string.m"
          }
#line 4865 "string.m"
        if (mercury__string__succeeded)
#line 4863 "string.m"
          {
#line 4863 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4863 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4863 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4863 "string.m"
            {
#line 4863 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4864 "string.m"
            /* direct tailcall eliminated */
#line 4864 "string.m"
            {
#line 4864 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4864 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4864 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4864 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4864 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4864 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4864 "string.m"
            }
#line 4864 "string.m"
            continue;
#line 4863 "string.m"
          }
#line 4865 "string.m"
        else
#line 4866 "string.m"
          {
#line 4866 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4866 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4866 "string.m"
          }
#line 4865 "string.m"
      }
#line 4865 "string.m"
      break;
#line 4865 "string.m"
    }
#line 4844 "string.m"
}

#line 4836 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
#line 4836 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4836 "string.m"
{
#line 4836 "string.m"
  {
#line 4836 "string.m"
    struct mercury__string__foldl_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4837 "string.m"
    {
#line 4837 "string.m"
      mercury__string__foldl_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
#line 4837 "string.m"
      return;
    }
#line 4836 "string.m"
  }
#line 4836 "string.m"
}

#line 4827 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_4(
#line 4827 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4827 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4827 "string.m"
  MR_String mercury__string__String_8,
#line 4827 "string.m"
  MR_Integer mercury__string__I_9,
#line 4827 "string.m"
  MR_Integer mercury__string__End_10,
#line 4827 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4827 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4827 "string.m"
  MR_Cont mercury__string__cont,
#line 4827 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4827 "string.m"
{
#line 4827 "string.m"
  {
#line 4827 "string.m"
    struct mercury__string__foldl_between_2_6_p_4_env_0_s mercury__string__env;

#line 4827 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
#line 4827 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
#line 4827 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
#line 4827 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10 = mercury__string__End_10;
#line 4827 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4827 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont = mercury__string__cont;
#line 4827 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4838 "string.m"
    {
#line 4838 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
#line 4838 "string.m"
      MR_Char mercury__string__Char_13;

#line 4832 "string.m"
      if (mercury__string__succeeded)
#line 4832 "string.m"
        {
#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9677 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4832 "string.m"
          if (mercury__string__succeeded)
#line 4834 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
#line 4832 "string.m"
        }
#line 4838 "string.m"
      if (mercury__string__succeeded)
#line 4836 "string.m"
        {
#line 4836 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

#line 4836 "string.m"
          {
#line 4836 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_4_1, &mercury__string__env);
          }
#line 4836 "string.m"
        }
#line 4838 "string.m"
      else
#line 4838 "string.m"
        {
#line 4838 "string.m"
          *((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4838 "string.m"
          {
#line 4838 "string.m"
            ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
#line 4838 "string.m"
            return;
          }
#line 4838 "string.m"
        }
#line 4838 "string.m"
    }
#line 4827 "string.m"
  }
#line 4827 "string.m"
}

#line 4836 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
#line 4836 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4836 "string.m"
{
#line 4836 "string.m"
  {
#line 4836 "string.m"
    struct mercury__string__foldl_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 4837 "string.m"
    {
#line 4837 "string.m"
      mercury__string__foldl_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
#line 4837 "string.m"
      return;
    }
#line 4836 "string.m"
  }
#line 4836 "string.m"
}

#line 4825 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_3(
#line 4825 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4825 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4825 "string.m"
  MR_String mercury__string__String_8,
#line 4825 "string.m"
  MR_Integer mercury__string__I_9,
#line 4825 "string.m"
  MR_Integer mercury__string__End_10,
#line 4825 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4825 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4825 "string.m"
  MR_Cont mercury__string__cont,
#line 4825 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4825 "string.m"
{
#line 4825 "string.m"
  {
#line 4825 "string.m"
    struct mercury__string__foldl_between_2_6_p_3_env_0_s mercury__string__env;

#line 4825 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
#line 4825 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
#line 4825 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
#line 4825 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10 = mercury__string__End_10;
#line 4825 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4825 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont = mercury__string__cont;
#line 4825 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4838 "string.m"
    {
#line 4838 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
#line 4838 "string.m"
      MR_Char mercury__string__Char_13;

#line 4832 "string.m"
      if (mercury__string__succeeded)
#line 4832 "string.m"
        {
#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9832 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4832 "string.m"
          if (mercury__string__succeeded)
#line 4834 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
#line 4832 "string.m"
        }
#line 4838 "string.m"
      if (mercury__string__succeeded)
#line 4836 "string.m"
        {
#line 4836 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

#line 4836 "string.m"
          {
#line 4836 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_3_1, &mercury__string__env);
          }
#line 4836 "string.m"
        }
#line 4838 "string.m"
      else
#line 4838 "string.m"
        {
#line 4838 "string.m"
          *((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4838 "string.m"
          {
#line 4838 "string.m"
            ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
#line 4838 "string.m"
            return;
          }
#line 4838 "string.m"
        }
#line 4838 "string.m"
    }
#line 4825 "string.m"
  }
#line 4825 "string.m"
}

#line 4823 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_between_2_6_p_2(
#line 4823 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4823 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4823 "string.m"
  MR_String mercury__string__String_8,
#line 4823 "string.m"
  MR_Integer mercury__string__I_9,
#line 4823 "string.m"
  MR_Integer mercury__string__End_10,
#line 4823 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4823 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4823 "string.m"
{
#line 4838 "string.m"
  while (MR_TRUE)
#line 4838 "string.m"
    {
#line 4838 "string.m"
      /* tailcall optimized into a loop */
#line 4838 "string.m"
      {
#line 4838 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4838 "string.m"
        MR_Integer mercury__string__J_12;
#line 4838 "string.m"
        MR_Char mercury__string__Char_13;

#line 4832 "string.m"
        if (mercury__string__succeeded)
#line 4832 "string.m"
          {
#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9948 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4832 "string.m"
            if (mercury__string__succeeded)
#line 4834 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4832 "string.m"
          }
#line 4838 "string.m"
        if (mercury__string__succeeded)
#line 4836 "string.m"
          {
#line 4836 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4836 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4836 "string.m"
            {
#line 4836 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4836 "string.m"
            if (mercury__string__succeeded)
#line 4837 "string.m"
              {
#line 4837 "string.m"
                /* direct tailcall eliminated */
#line 4837 "string.m"
                {
#line 4837 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4837 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4837 "string.m"
                  mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4837 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4837 "string.m"
                }
#line 4837 "string.m"
                continue;
#line 4837 "string.m"
              }
#line 4836 "string.m"
          }
#line 4838 "string.m"
        else
#line 4838 "string.m"
          {
#line 4838 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4838 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4838 "string.m"
          }
#line 4838 "string.m"
        return mercury__string__succeeded;
#line 4838 "string.m"
      }
#line 4838 "string.m"
      break;
#line 4838 "string.m"
    }
#line 4823 "string.m"
}

#line 4821 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_1(
#line 4821 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4821 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4821 "string.m"
  MR_String mercury__string__String_8,
#line 4821 "string.m"
  MR_Integer mercury__string__I_9,
#line 4821 "string.m"
  MR_Integer mercury__string__End_10,
#line 4821 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4821 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4821 "string.m"
{
#line 4838 "string.m"
  while (MR_TRUE)
#line 4838 "string.m"
    {
#line 4838 "string.m"
      /* tailcall optimized into a loop */
#line 4838 "string.m"
      {
#line 4838 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4838 "string.m"
        MR_Integer mercury__string__J_12;
#line 4838 "string.m"
        MR_Char mercury__string__Char_13;

#line 4832 "string.m"
        if (mercury__string__succeeded)
#line 4832 "string.m"
          {
#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 10088 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4832 "string.m"
            if (mercury__string__succeeded)
#line 4834 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4832 "string.m"
          }
#line 4838 "string.m"
        if (mercury__string__succeeded)
#line 4836 "string.m"
          {
#line 4836 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4836 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4836 "string.m"
            {
#line 4836 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4837 "string.m"
            /* direct tailcall eliminated */
#line 4837 "string.m"
            {
#line 4837 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4837 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4837 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4837 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4837 "string.m"
            }
#line 4837 "string.m"
            continue;
#line 4836 "string.m"
          }
#line 4838 "string.m"
        else
#line 4838 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4838 "string.m"
      }
#line 4838 "string.m"
      break;
#line 4838 "string.m"
    }
#line 4821 "string.m"
}

#line 4819 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_0(
#line 4819 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4819 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4819 "string.m"
  MR_String mercury__string__String_8,
#line 4819 "string.m"
  MR_Integer mercury__string__I_9,
#line 4819 "string.m"
  MR_Integer mercury__string__End_10,
#line 4819 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4819 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4819 "string.m"
{
#line 4838 "string.m"
  while (MR_TRUE)
#line 4838 "string.m"
    {
#line 4838 "string.m"
      /* tailcall optimized into a loop */
#line 4838 "string.m"
      {
#line 4838 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4838 "string.m"
        MR_Integer mercury__string__J_12;
#line 4838 "string.m"
        MR_Char mercury__string__Char_13;

#line 4832 "string.m"
        if (mercury__string__succeeded)
#line 4832 "string.m"
          {
#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 10214 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4832 "string.m"
            if (mercury__string__succeeded)
#line 4834 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4832 "string.m"
          }
#line 4838 "string.m"
        if (mercury__string__succeeded)
#line 4836 "string.m"
          {
#line 4836 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4836 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4836 "string.m"
            {
#line 4836 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4837 "string.m"
            /* direct tailcall eliminated */
#line 4837 "string.m"
            {
#line 4837 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4837 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4837 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4837 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4837 "string.m"
            }
#line 4837 "string.m"
            continue;
#line 4836 "string.m"
          }
#line 4838 "string.m"
        else
#line 4838 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4838 "string.m"
      }
#line 4838 "string.m"
      break;
#line 4838 "string.m"
    }
#line 4819 "string.m"
}

#line 4777 "string.m"
MR_Word MR_CALL 
mercury__string__break_up_string_reverse_3_f_0(
#line 4777 "string.m"
  MR_String mercury__string__Str_5,
#line 4777 "string.m"
  MR_Integer mercury__string__N_6,
#line 4777 "string.m"
  MR_Word mercury__string__Prev_7)
#line 4777 "string.m"
{
#line 4782 "string.m"
  while (MR_TRUE)
#line 4782 "string.m"
    {
#line 4782 "string.m"
      /* tailcall optimized into a loop */
#line 4782 "string.m"
      {
#line 4782 "string.m"
        MR_bool mercury__string__succeeded;
#line 4782 "string.m"
        MR_Word mercury__string__Strs_8;
#line 4780 "string.m"
        MR_Integer mercury__string__V_11_11;

#line 2640 "string.m"
        {
#line 2640 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__Str_5, &mercury__string__V_11_11);
        }
#line 4780 "string.m"
        mercury__string__succeeded = (mercury__string__V_11_11 <= mercury__string__N_6);
#line 4782 "string.m"
        if (mercury__string__succeeded)
#line 4781 "string.m"
          {
#line 4781 "string.m"
            mercury__string__Strs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4781 "string.m"
            MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 0) = ((MR_Box) (mercury__string__Str_5));
#line 4781 "string.m"
            MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 1) = ((MR_Box) (mercury__string__Prev_7));
#line 4781 "string.m"
          }
#line 4782 "string.m"
        else
#line 4783 "string.m"
          {
#line 4783 "string.m"
            MR_String mercury__string__Left_9;
#line 4783 "string.m"
            MR_String mercury__string__Right_10;
#line 4783 "string.m"
            MR_Word mercury__string__V_12_12;

#line 4783 "string.m"
            {
#line 4783 "string.m"
              mercury__string__split_by_codepoint_4_p_0(mercury__string__Str_5, mercury__string__N_6, &mercury__string__Left_9, &mercury__string__Right_10);
            }
#line 4784 "string.m"
            {
#line 4784 "string.m"
              mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4784 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_12_12, 0) = ((MR_Box) (mercury__string__Left_9));
#line 4784 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_12_12, 1) = ((MR_Box) (mercury__string__Prev_7));
#line 4784 "string.m"
            }
#line 4784 "string.m"
            /* direct tailcall eliminated */
#line 4784 "string.m"
            {
#line 4784 "string.m"
              MR_String mercury__string__Str__tmp_copy_5 = mercury__string__Right_10;
#line 4784 "string.m"
              MR_Word mercury__string__Prev__tmp_copy_7 = mercury__string__V_12_12;

#line 4784 "string.m"
              mercury__string__Prev_7 = mercury__string__Prev__tmp_copy_7;
#line 4784 "string.m"
              mercury__string__Str_5 = mercury__string__Str__tmp_copy_5;
#line 4784 "string.m"
            }
#line 4784 "string.m"
            continue;
#line 4783 "string.m"
          }
#line 4782 "string.m"
        return mercury__string__Strs_8;
#line 4782 "string.m"
      }
#line 4782 "string.m"
      break;
#line 4782 "string.m"
    }
#line 4777 "string.m"
}

#line 4700 "string.m"
void MR_CALL 
mercury__string__word_wrap_loop_7_p_0(
#line 4700 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4700 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4700 "string.m"
  MR_Integer mercury__string__SepLen_3,
#line 4700 "string.m"
  MR_Integer mercury__string__CurCol_4,
#line 4700 "string.m"
  MR_Integer mercury__string__MaxCol_5,
#line 4700 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6,
#line 4700 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7)
#line 4700 "string.m"
{
#line 4703 "string.m"
  while (MR_TRUE)
#line 4703 "string.m"
    {
#line 4703 "string.m"
      /* tailcall optimized into a loop */
#line 4703 "string.m"
      {
#line 4703 "string.m"
        MR_bool mercury__string__succeeded;

#line 4703 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4703 "string.m"
          *mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6;
#line 4703 "string.m"
        else
#line 4705 "string.m"
          {
#line 4705 "string.m"
            MR_String mercury__string__Word_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4705 "string.m"
            MR_Word mercury__string__Words_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4705 "string.m"
            MR_Integer mercury__string__WordLen_22;
#line 4705 "string.m"
            MR_Word mercury__string__NewWords_23;
#line 4705 "string.m"
            MR_Integer mercury__string__NewCol_24;
#line 4705 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

#line 2640 "string.m"
            {
#line 2640 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__Word_15, &mercury__string__WordLen_22);
            }
#line 4710 "string.m"
            mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4710 "string.m"
            if (mercury__string__succeeded)
#line 4711 "string.m"
              mercury__string__succeeded = (mercury__string__WordLen_22 < mercury__string__MaxCol_5);
#line 4716 "string.m"
            if (mercury__string__succeeded)
#line 4713 "string.m"
              {
#line 4713 "string.m"
                mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4714 "string.m"
                mercury__string__NewCol_24 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
#line 4715 "string.m"
                {
#line 4715 "string.m"
                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4715 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4715 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4715 "string.m"
                }
#line 4713 "string.m"
              }
#line 4716 "string.m"
            else
#line 4731 "string.m"
              {
#line 4718 "string.m"
                mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4718 "string.m"
                if (mercury__string__succeeded)
#line 4719 "string.m"
                  mercury__string__succeeded = (mercury__string__WordLen_22 == mercury__string__MaxCol_5);
#line 4731 "string.m"
                if (mercury__string__succeeded)
#line 4721 "string.m"
                  {
#line 4721 "string.m"
                    mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4722 "string.m"
                    mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4727 "string.m"
                    if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4726 "string.m"
                      {
#line 4726 "string.m"
                        mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4726 "string.m"
                        MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4726 "string.m"
                        MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4726 "string.m"
                      }
#line 4727 "string.m"
                    else
#line 4728 "string.m"
                      {
#line 4728 "string.m"
                        MR_Word mercury__string__V_39_39;

#line 4729 "string.m"
                        {
#line 4729 "string.m"
                          mercury__string__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4729 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_39_39, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4729 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_39_39, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4729 "string.m"
                        }
#line 4729 "string.m"
                        {
#line 4729 "string.m"
                          mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4729 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4729 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_39_39));
#line 4729 "string.m"
                        }
#line 4728 "string.m"
                      }
#line 4721 "string.m"
                  }
#line 4731 "string.m"
                else
#line 4739 "string.m"
                  {
#line 4734 "string.m"
                    MR_Integer mercury__string__V_41_41 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

#line 4734 "string.m"
                    mercury__string__succeeded = (mercury__string__V_41_41 < mercury__string__MaxCol_5);
#line 4739 "string.m"
                    if (mercury__string__succeeded)
#line 4736 "string.m"
                      {
#line 4736 "string.m"
                        MR_Integer mercury__string__V_42_42;
#line 4736 "string.m"
                        MR_Word mercury__string__V_45_45;

#line 4736 "string.m"
                        mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4737 "string.m"
                        mercury__string__V_42_42 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
#line 4737 "string.m"
                        mercury__string__NewCol_24 = (mercury__string__V_42_42 + (MR_Integer) 1);
#line 4738 "string.m"
                        {
#line 4738 "string.m"
                          mercury__string__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4738 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 0) = ((MR_Box) ((MR_String) " "));
#line 4738 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4738 "string.m"
                        }
#line 4738 "string.m"
                        {
#line 4738 "string.m"
                          mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4738 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4738 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_45_45));
#line 4738 "string.m"
                        }
#line 4736 "string.m"
                      }
#line 4739 "string.m"
                    else
#line 4753 "string.m"
                      {
#line 4741 "string.m"
                        MR_Integer mercury__string__V_70_70 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

#line 4741 "string.m"
                        mercury__string__succeeded = (mercury__string__MaxCol_5 == mercury__string__V_70_70);
#line 4753 "string.m"
                        if (mercury__string__succeeded)
#line 4743 "string.m"
                          {
#line 4743 "string.m"
                            mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4744 "string.m"
                            mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4749 "string.m"
                            if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4747 "string.m"
                              {
#line 4747 "string.m"
                                MR_Word mercury__string__V_53_53;

#line 4748 "string.m"
                                {
#line 4748 "string.m"
                                  mercury__string__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4748 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_53_53, 0) = ((MR_Box) ((MR_String) " "));
#line 4748 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_53_53, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4748 "string.m"
                                }
#line 4748 "string.m"
                                {
#line 4748 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4748 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4748 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_53_53));
#line 4748 "string.m"
                                }
#line 4747 "string.m"
                              }
#line 4749 "string.m"
                            else
#line 4750 "string.m"
                              {
#line 4750 "string.m"
                                MR_Word mercury__string__V_49_49;
#line 4750 "string.m"
                                MR_Word mercury__string__V_50_50;

#line 4751 "string.m"
                                {
#line 4751 "string.m"
                                  mercury__string__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4751 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_50_50, 0) = ((MR_Box) ((MR_String) " "));
#line 4751 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_50_50, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4751 "string.m"
                                }
#line 4751 "string.m"
                                {
#line 4751 "string.m"
                                  mercury__string__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4751 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_49_49, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4751 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_49_49, 1) = ((MR_Box) (mercury__string__V_50_50));
#line 4751 "string.m"
                                }
#line 4751 "string.m"
                                {
#line 4751 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4751 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4751 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_49_49));
#line 4751 "string.m"
                                }
#line 4750 "string.m"
                              }
#line 4743 "string.m"
                          }
#line 4753 "string.m"
                        else
#line 4768 "string.m"
                          {
#line 4755 "string.m"
                            mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4768 "string.m"
                            if (mercury__string__succeeded)
#line 4757 "string.m"
                              {
#line 4757 "string.m"
                                MR_Word mercury__string__TypeCtorInfo_69_69;
#line 4757 "string.m"
                                MR_Word mercury__string__RevPieces_29;
#line 4757 "string.m"
                                MR_String mercury__string__LastPiece_30;
#line 4757 "string.m"
                                MR_Word mercury__string__Rest_31;
#line 4757 "string.m"
                                MR_Word mercury__string__RestWithSep_32;
#line 4757 "string.m"
                                MR_Integer mercury__string__V_55_55 = (mercury__string__MaxCol_5 - mercury__string__SepLen_3);
#line 4757 "string.m"
                                MR_Word mercury__string__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4757 "string.m"
                                {
#line 4757 "string.m"
                                  mercury__string__RevPieces_29 = mercury__string__break_up_string_reverse_3_f_0(mercury__string__Word_15, mercury__string__V_55_55, mercury__string__V_56_56);
                                }
#line 4760 "string.m"
                                if ((mercury__string__RevPieces_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4761 "string.m"
                                  {
#line 4762 "string.m"
                                    {
#line 4762 "string.m"
                                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.word_wrap_loop\'/7", (MR_String) "no pieces");
#line 4762 "string.m"
                                      return;
                                    }
#line 4761 "string.m"
                                  }
#line 4760 "string.m"
                                else
#line 4759 "string.m"
                                  {
#line 4759 "string.m"
                                    mercury__string__LastPiece_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 0)));
#line 4759 "string.m"
                                    mercury__string__Rest_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 1)));
#line 4759 "string.m"
                                  }
#line 4764 "string.m"
                                {
#line 4764 "string.m"
                                  mercury__string__NewWords_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4764 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 0) = ((MR_Box) (mercury__string__LastPiece_30));
#line 4764 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 1) = ((MR_Box) (mercury__string__Words_16));
#line 4764 "string.m"
                                }
#line 4765 "string.m"
                                mercury__string__NewCol_24 = (MR_Integer) 1;
#line 10721 "string.c"
                                mercury__string__TypeCtorInfo_69_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4766 "string.m"
                                {
#line 4766 "string.m"
                                  mercury__string__RestWithSep_32 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(mercury__string__WordSep_2, mercury__string__Rest_31);
                                }
#line 113 "list.opt"
                                {
#line 113 "list.opt"
                                  mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_69_69, mercury__string__RestWithSep_32, mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6, &mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36);
                                }
#line 4757 "string.m"
                              }
#line 4768 "string.m"
                            else
#line 4769 "string.m"
                              {
#line 4769 "string.m"
                                mercury__string__NewWords_23 = mercury__string__HeadVar__1_1;
#line 4770 "string.m"
                                mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4771 "string.m"
                                {
#line 4771 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4771 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4771 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4771 "string.m"
                                }
#line 4769 "string.m"
                              }
#line 4768 "string.m"
                          }
#line 4753 "string.m"
                      }
#line 4739 "string.m"
                  }
#line 4731 "string.m"
              }
#line 4774 "string.m"
            /* direct tailcall eliminated */
#line 4774 "string.m"
            {
#line 4774 "string.m"
              MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__NewWords_23;
#line 4774 "string.m"
              MR_Integer mercury__string__CurCol__tmp_copy_4 = mercury__string__NewCol_24;
#line 4774 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0__tmp_copy_6 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

#line 4774 "string.m"
              mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0__tmp_copy_6;
#line 4774 "string.m"
              mercury__string__CurCol_4 = mercury__string__CurCol__tmp_copy_4;
#line 4774 "string.m"
              mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 4774 "string.m"
            }
#line 4774 "string.m"
            continue;
#line 4705 "string.m"
          }
#line 4703 "string.m"
      }
#line 4703 "string.m"
      break;
#line 4703 "string.m"
    }
#line 4700 "string.m"
}

#line 4646 "string.m"
void MR_CALL 
mercury__string__replace_all_loop_7_p_0(
#line 4646 "string.m"
  MR_String mercury__string__Str_8,
#line 4646 "string.m"
  MR_String mercury__string__Pat_9,
#line 4646 "string.m"
  MR_String mercury__string__Subst_10,
#line 4646 "string.m"
  MR_Integer mercury__string__PatLength_11,
#line 4646 "string.m"
  MR_Integer mercury__string__BeginAt_12,
#line 4646 "string.m"
  MR_Word mercury__string__RevChunks0_13,
#line 4646 "string.m"
  MR_Word * mercury__string__RevChunks_14)
#line 4646 "string.m"
{
#line 4656 "string.m"
  while (MR_TRUE)
#line 4656 "string.m"
    {
#line 4656 "string.m"
      /* tailcall optimized into a loop */
#line 4656 "string.m"
      {
#line 4656 "string.m"
        MR_bool mercury__string__succeeded;
#line 4656 "string.m"
        MR_Integer mercury__string__Index_15;

#line 3182 "string.m"
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
#line 3182 "string.m"
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
#line 10856 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_15  = Index;
#line 3182 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4656 "string.m"
        if (mercury__string__succeeded)
#line 4652 "string.m"
          {
#line 4652 "string.m"
            MR_String mercury__string__Initial_16;
#line 4652 "string.m"
            MR_Integer mercury__string__Start_17;
#line 4652 "string.m"
            MR_Word mercury__string__V_19_19;
#line 4652 "string.m"
            MR_Word mercury__string__V_20_20;

#line 4284 "string.m"
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
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 10901 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_16  = SubString;
#line 4284 "string.m"
}
#line 4653 "string.m"
            mercury__string__Start_17 = (mercury__string__Index_15 + mercury__string__PatLength_11);
#line 4655 "string.m"
            {
#line 4655 "string.m"
              mercury__string__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4655 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_20_20, 0) = ((MR_Box) (mercury__string__Initial_16));
#line 4655 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_20_20, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
#line 4655 "string.m"
            }
#line 4655 "string.m"
            {
#line 4655 "string.m"
              mercury__string__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4655 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_19_19, 0) = ((MR_Box) (mercury__string__Subst_10));
#line 4655 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_19_19, 1) = ((MR_Box) (mercury__string__V_20_20));
#line 4655 "string.m"
            }
#line 4654 "string.m"
            /* direct tailcall eliminated */
#line 4654 "string.m"
            {
#line 4654 "string.m"
              MR_Integer mercury__string__BeginAt__tmp_copy_12 = mercury__string__Start_17;
#line 4654 "string.m"
              MR_Word mercury__string__RevChunks0__tmp_copy_13 = mercury__string__V_19_19;

#line 4654 "string.m"
              mercury__string__RevChunks0_13 = mercury__string__RevChunks0__tmp_copy_13;
#line 4654 "string.m"
              mercury__string__BeginAt_12 = mercury__string__BeginAt__tmp_copy_12;
#line 4654 "string.m"
            }
#line 4654 "string.m"
            continue;
#line 4652 "string.m"
          }
#line 4656 "string.m"
        else
#line 4657 "string.m"
          {
#line 4657 "string.m"
            MR_String mercury__string__EndString_18;
#line 4657 "string.m"
            MR_Integer mercury__string__V_21_21;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 10971 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_21_21  = Length;
#line 2580 "string.m"
}
#line 4284 "string.m"
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
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11000 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndString_18  = SubString;
#line 4284 "string.m"
}
#line 4658 "string.m"
            {
#line 4658 "string.m"
              MR_Word base;
#line 4658 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4658 "string.m"
              *mercury__string__RevChunks_14 = base;
#line 4658 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__EndString_18));
#line 4658 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
#line 4658 "string.m"
            }
#line 4657 "string.m"
          }
#line 4656 "string.m"
      }
#line 4656 "string.m"
      break;
#line 4656 "string.m"
    }
#line 4646 "string.m"
}

#line 4563 "string.m"
void MR_CALL 
mercury__string__char_list_to_lower_2_p_0(
#line 4563 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4563 "string.m"
  MR_Word * mercury__string__HeadVar__2_2)
#line 4563 "string.m"
{
#line 4565 "string.m"
  {
#line 4565 "string.m"
    MR_bool mercury__string__succeeded;

#line 4565 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4565 "string.m"
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4565 "string.m"
    else
#line 4566 "string.m"
      {
#line 4566 "string.m"
        MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4566 "string.m"
        MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4566 "string.m"
        MR_Char mercury__string__Y_5;
#line 4566 "string.m"
        MR_Word mercury__string__Ys_6;
#line 122 "char.opt"
        MR_Char mercury__string__V_5_9;

#line 119 "char.opt"
        {
#line 119 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_1(&mercury__string__V_5_9, mercury__string__X_3);
        }
#line 122 "char.opt"
        if (mercury__string__succeeded)
#line 121 "char.opt"
          mercury__string__Y_5 = mercury__string__V_5_9;
#line 122 "char.opt"
        else
#line 123 "char.opt"
          mercury__string__Y_5 = mercury__string__X_3;
#line 4568 "string.m"
        {
#line 4568 "string.m"
          mercury__string__char_list_to_lower_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
        }
#line 4566 "string.m"
        {
#line 4566 "string.m"
          MR_Word base;
#line 4566 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4566 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4566 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
#line 4566 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
#line 4566 "string.m"
        }
#line 4566 "string.m"
      }
#line 4565 "string.m"
  }
#line 4563 "string.m"
}

#line 4548 "string.m"
void MR_CALL 
mercury__string__char_list_to_upper_2_p_0(
#line 4548 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4548 "string.m"
  MR_Word * mercury__string__HeadVar__2_2)
#line 4548 "string.m"
{
#line 4550 "string.m"
  {
#line 4550 "string.m"
    MR_bool mercury__string__succeeded;

#line 4550 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4550 "string.m"
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4550 "string.m"
    else
#line 4551 "string.m"
      {
#line 4551 "string.m"
        MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4551 "string.m"
        MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4551 "string.m"
        MR_Char mercury__string__Y_5;
#line 4551 "string.m"
        MR_Word mercury__string__Ys_6;
#line 134 "char.opt"
        MR_Char mercury__string__V_5_9;

#line 131 "char.opt"
        {
#line 131 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_0(mercury__string__X_3, &mercury__string__V_5_9);
        }
#line 134 "char.opt"
        if (mercury__string__succeeded)
#line 133 "char.opt"
          mercury__string__Y_5 = mercury__string__V_5_9;
#line 134 "char.opt"
        else
#line 135 "char.opt"
          mercury__string__Y_5 = mercury__string__X_3;
#line 4553 "string.m"
        {
#line 4553 "string.m"
          mercury__string__char_list_to_upper_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
        }
#line 4551 "string.m"
        {
#line 4551 "string.m"
          MR_Word base;
#line 4551 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4551 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4551 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
#line 4551 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
#line 4551 "string.m"
        }
#line 4551 "string.m"
      }
#line 4550 "string.m"
  }
#line 4548 "string.m"
}

#line 4471 "string.m"
void MR_CALL 
mercury__string__suffix_2_ioii_4_p_0(
#line 4471 "string.m"
  MR_String mercury__string__String_5,
#line 4471 "string.m"
  MR_String * mercury__string__Suffix_6,
#line 4471 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4471 "string.m"
  MR_Integer mercury__string__Len_8,
#line 4471 "string.m"
  MR_Cont mercury__string__cont,
#line 4471 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4471 "string.m"
{
#line 4475 "string.m"
  while (MR_TRUE)
#line 4475 "string.m"
    {
#line 4475 "string.m"
      /* tailcall optimized into a loop */
#line 4475 "string.m"
      {
#line 4475 "string.m"
        MR_bool mercury__string__succeeded;

#line 4284 "string.m"
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
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11226 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Suffix_6  = SubString;
#line 4284 "string.m"
}
#line 4280 "string.m"
        {
#line 4280 "string.m"
          mercury__string__cont(mercury__string__cont_env_ptr);
        }
#line 4477 "string.m"
        {
#line 4477 "string.m"
          MR_Integer mercury__string__Prev_9;
#line 2209 "string.m"
          MR_Char mercury__string__V_10_10;

#line 2213 "string.m"
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
#line 2213 "string.m"

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

#line 11273 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Prev_9  = PrevIndex;
	 mercury__string__V_10_10  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4477 "string.m"
          if (mercury__string__succeeded)
#line 4478 "string.m"
            {
#line 4478 "string.m"
              /* direct tailcall eliminated */
#line 4478 "string.m"
              {
#line 4478 "string.m"
                MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Prev_9;

#line 4478 "string.m"
                mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4478 "string.m"
              }
#line 4478 "string.m"
              continue;
#line 4478 "string.m"
            }
#line 4477 "string.m"
        }
#line 4475 "string.m"
      }
#line 4475 "string.m"
      break;
#line 4475 "string.m"
    }
#line 4471 "string.m"
}

#line 4459 "string.m"
MR_bool MR_CALL 
mercury__string__suffix_2_iiii_5_p_0(
#line 4459 "string.m"
  MR_String mercury__string__String_6,
#line 4459 "string.m"
  MR_String mercury__string__Suffix_7,
#line 4459 "string.m"
  MR_Integer mercury__string__I_8,
#line 4459 "string.m"
  MR_Integer mercury__string__Offset_9,
#line 4459 "string.m"
  MR_Integer mercury__string__Len_10)
#line 4459 "string.m"
{
#line 4467 "string.m"
  while (MR_TRUE)
#line 4467 "string.m"
    {
#line 4467 "string.m"
      /* tailcall optimized into a loop */
#line 4467 "string.m"
      {
#line 4467 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_8 < mercury__string__Len_10);

#line 4467 "string.m"
        if (mercury__string__succeeded)
#line 4464 "string.m"
          {
#line 4464 "string.m"
            MR_Integer mercury__string__C_11;
#line 4464 "string.m"
            MR_Integer mercury__string__V_12_12 = (mercury__string__I_8 + mercury__string__Offset_9);
#line 4464 "string.m"
            MR_Integer mercury__string__V_13_13;
#line 4464 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 4464 "string.m"
            MR_Integer mercury__string__V_15_15;

#line 2340 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__V_12_12 ;
		{
#line 2340 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 11371 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_11  = Code;
#line 2340 "string.m"
}
#line 2340 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Suffix_7 ;
	Index =  mercury__string__I_8 ;
		{
#line 2340 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 11394 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_15_15  = Code;
#line 2340 "string.m"
}
#line 4465 "string.m"
            mercury__string__succeeded = (mercury__string__C_11 == mercury__string__V_15_15);
#line 4464 "string.m"
            if (mercury__string__succeeded)
#line 4464 "string.m"
              {
#line 4466 "string.m"
                mercury__string__V_14_14 = (MR_Integer) 1;
#line 4466 "string.m"
                mercury__string__V_13_13 = (mercury__string__I_8 + mercury__string__V_14_14);
#line 4466 "string.m"
                /* direct tailcall eliminated */
#line 4466 "string.m"
                {
#line 4466 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_8 = mercury__string__V_13_13;

#line 4466 "string.m"
                  mercury__string__I_8 = mercury__string__I__tmp_copy_8;
#line 4466 "string.m"
                }
#line 4466 "string.m"
                continue;
#line 4464 "string.m"
              }
#line 4464 "string.m"
          }
#line 4467 "string.m"
        else
#line 4468 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4467 "string.m"
        return mercury__string__succeeded;
#line 4467 "string.m"
      }
#line 4467 "string.m"
      break;
#line 4467 "string.m"
    }
#line 4459 "string.m"
}

#line 4438 "string.m"
void MR_CALL 
mercury__string__prefix_2_ioi_3_p_0(
#line 4438 "string.m"
  MR_String mercury__string__String_4,
#line 4438 "string.m"
  MR_String * mercury__string__Prefix_5,
#line 4438 "string.m"
  MR_Integer mercury__string__Cur_6,
#line 4438 "string.m"
  MR_Cont mercury__string__cont,
#line 4438 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4438 "string.m"
{
#line 4442 "string.m"
  while (MR_TRUE)
#line 4442 "string.m"
    {
#line 4442 "string.m"
      /* tailcall optimized into a loop */
#line 4442 "string.m"
      {
#line 4442 "string.m"
        MR_bool mercury__string__succeeded;

#line 4284 "string.m"
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
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11491 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Prefix_5  = SubString;
#line 4284 "string.m"
}
#line 4442 "string.m"
        {
#line 4442 "string.m"
          mercury__string__cont(mercury__string__cont_env_ptr);
        }
#line 4444 "string.m"
        {
#line 4444 "string.m"
          MR_Integer mercury__string__Next_7;
#line 2120 "string.m"
          MR_Char mercury__string__V_8_8;

#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 11535 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__V_8_8  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4444 "string.m"
          if (mercury__string__succeeded)
#line 4445 "string.m"
            {
#line 4445 "string.m"
              /* direct tailcall eliminated */
#line 4445 "string.m"
              {
#line 4445 "string.m"
                MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 4445 "string.m"
                mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 4445 "string.m"
              }
#line 4445 "string.m"
              continue;
#line 4445 "string.m"
            }
#line 4444 "string.m"
        }
#line 4442 "string.m"
      }
#line 4442 "string.m"
      break;
#line 4442 "string.m"
    }
#line 4438 "string.m"
}

#line 4427 "string.m"
MR_bool MR_CALL 
mercury__string__prefix_2_iii_3_p_0(
#line 4427 "string.m"
  MR_String mercury__string__String_4,
#line 4427 "string.m"
  MR_String mercury__string__Prefix_5,
#line 4427 "string.m"
  MR_Integer mercury__string__I_6)
#line 4427 "string.m"
{
#line 4434 "string.m"
  while (MR_TRUE)
#line 4434 "string.m"
    {
#line 4434 "string.m"
      /* tailcall optimized into a loop */
#line 4434 "string.m"
      {
#line 4434 "string.m"
        MR_bool mercury__string__succeeded = ((MR_Integer) 0 <= mercury__string__I_6);

#line 4434 "string.m"
        if (mercury__string__succeeded)
#line 4431 "string.m"
          {
#line 4431 "string.m"
            MR_Integer mercury__string__C_7;
#line 4431 "string.m"
            MR_Integer mercury__string__V_9_9;
#line 4431 "string.m"
            MR_Integer mercury__string__V_10_10;
#line 4431 "string.m"
            MR_Integer mercury__string__V_11_11;

#line 2340 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__I_6 ;
		{
#line 2340 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 11627 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_7  = Code;
#line 2340 "string.m"
}
#line 2340 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Prefix_5 ;
	Index =  mercury__string__I_6 ;
		{
#line 2340 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 11650 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Code;
#line 2340 "string.m"
}
#line 4432 "string.m"
            mercury__string__succeeded = (mercury__string__C_7 == mercury__string__V_11_11);
#line 4431 "string.m"
            if (mercury__string__succeeded)
#line 4431 "string.m"
              {
#line 4433 "string.m"
                mercury__string__V_10_10 = (MR_Integer) 1;
#line 4433 "string.m"
                mercury__string__V_9_9 = (mercury__string__I_6 - mercury__string__V_10_10);
#line 4433 "string.m"
                /* direct tailcall eliminated */
#line 4433 "string.m"
                {
#line 4433 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__V_9_9;

#line 4433 "string.m"
                  mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 4433 "string.m"
                }
#line 4433 "string.m"
                continue;
#line 4431 "string.m"
              }
#line 4431 "string.m"
          }
#line 4434 "string.m"
        else
#line 4435 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4434 "string.m"
        return mercury__string__succeeded;
#line 4434 "string.m"
      }
#line 4434 "string.m"
      break;
#line 4434 "string.m"
    }
#line 4427 "string.m"
}

#line 4399 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_string_loop_4_f_0(
#line 4399 "string.m"
  MR_Integer mercury__string__StartAt_6,
#line 4399 "string.m"
  MR_Integer mercury__string__NeedleLen_7,
#line 4399 "string.m"
  MR_String mercury__string__Needle_8,
#line 4399 "string.m"
  MR_String mercury__string__Total_9)
#line 4399 "string.m"
{
#line 4407 "string.m"
  {
#line 4407 "string.m"
    MR_bool mercury__string__succeeded;
#line 4407 "string.m"
    MR_Word mercury__string__Out_10;
#line 4407 "string.m"
    MR_Integer mercury__string__NeedlePos_11;

#line 3182 "string.m"
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
#line 3182 "string.m"
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
#line 11750 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__NeedlePos_11  = Index;
#line 3182 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4407 "string.m"
    if (mercury__string__succeeded)
#line 4403 "string.m"
      {
#line 4403 "string.m"
        MR_String mercury__string__BeforeNeedle_12;
#line 4403 "string.m"
        MR_Word mercury__string__Tail_13;
#line 4403 "string.m"
        MR_Integer mercury__string__V_16_16;

#line 4124 "string.m"
        {
#line 4124 "string.m"
          mercury__string__between_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, mercury__string__NeedlePos_11, &mercury__string__BeforeNeedle_12);
        }
#line 4404 "string.m"
        mercury__string__V_16_16 = (mercury__string__NeedlePos_11 + mercury__string__NeedleLen_7);
#line 4404 "string.m"
        {
#line 4404 "string.m"
          mercury__string__Tail_13 = mercury__string__split_at_string_loop_4_f_0(mercury__string__V_16_16, mercury__string__NeedleLen_7, mercury__string__Needle_8, mercury__string__Total_9);
        }
#line 4406 "string.m"
        {
#line 4406 "string.m"
          mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4406 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__BeforeNeedle_12));
#line 4406 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__Tail_13));
#line 4406 "string.m"
        }
#line 4403 "string.m"
      }
#line 4407 "string.m"
    else
#line 4408 "string.m"
      {
#line 4408 "string.m"
        MR_String mercury__string__Last_15;
#line 4408 "string.m"
        MR_Word mercury__string__V_17_17;
#line 4408 "string.m"
        MR_String mercury__string___Skip_14;

#line 4408 "string.m"
        {
#line 4408 "string.m"
          mercury__string__split_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, &mercury__string___Skip_14, &mercury__string__Last_15);
        }
#line 4409 "string.m"
        mercury__string__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4409 "string.m"
        {
#line 4409 "string.m"
          mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4409 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__Last_15));
#line 4409 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__V_17_17));
#line 4409 "string.m"
        }
#line 4408 "string.m"
      }
#line 4407 "string.m"
    return mercury__string__Out_10;
#line 4407 "string.m"
  }
#line 4399 "string.m"
}

#line 4365 "string.m"
void MR_CALL 
mercury__string__split_at_separator_loop_6_p_0(
#line 4365 "string.m"
  MR_Word mercury__string__DelimP_7,
#line 4365 "string.m"
  MR_String mercury__string__Str_8,
#line 4365 "string.m"
  MR_Integer mercury__string__I_9,
#line 4365 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4365 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4365 "string.m"
  MR_Word * mercury__string__Acc_12)
#line 4365 "string.m"
{
#line 4385 "string.m"
  while (MR_TRUE)
#line 4385 "string.m"
    {
#line 4385 "string.m"
      /* tailcall optimized into a loop */
#line 4385 "string.m"
      {
#line 4385 "string.m"
        MR_bool mercury__string__succeeded;
#line 4385 "string.m"
        MR_Integer mercury__string__J_13;
#line 4385 "string.m"
        MR_Char mercury__string__C_14;

#line 2213 "string.m"
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
#line 2213 "string.m"

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

#line 11892 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_13  = PrevIndex;
	 mercury__string__C_14  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4385 "string.m"
        if (mercury__string__succeeded)
#line 4381 "string.m"
          {
#line 4376 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__DelimP_7, (MR_Integer) 1)));

#line 4376 "string.m"
            {
#line 4376 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__DelimP_7), ((MR_Box) (MR_Word) (mercury__string__C_14)));
            }
#line 4381 "string.m"
            if (mercury__string__succeeded)
#line 4378 "string.m"
              {
#line 4378 "string.m"
                MR_String mercury__string__Seg_16;
#line 4378 "string.m"
                MR_Word mercury__string__V_18_18;

#line 4284 "string.m"
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
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11946 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_16  = SubString;
#line 4284 "string.m"
}
#line 4380 "string.m"
                {
#line 4380 "string.m"
                  mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4380 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Seg_16));
#line 4380 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4380 "string.m"
                }
#line 4380 "string.m"
                /* direct tailcall eliminated */
#line 4380 "string.m"
                {
#line 4380 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;
#line 4380 "string.m"
                  MR_Integer mercury__string__SegEnd__tmp_copy_10 = mercury__string__J_13;
#line 4380 "string.m"
                  MR_Word mercury__string__Acc0__tmp_copy_11 = mercury__string__V_18_18;

#line 4380 "string.m"
                  mercury__string__Acc0_11 = mercury__string__Acc0__tmp_copy_11;
#line 4380 "string.m"
                  mercury__string__SegEnd_10 = mercury__string__SegEnd__tmp_copy_10;
#line 4380 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4380 "string.m"
                }
#line 4380 "string.m"
                continue;
#line 4378 "string.m"
              }
#line 4381 "string.m"
            else
#line 4383 "string.m"
              {
#line 4383 "string.m"
                /* direct tailcall eliminated */
#line 4383 "string.m"
                {
#line 4383 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;

#line 4383 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4383 "string.m"
                }
#line 4383 "string.m"
                continue;
#line 4383 "string.m"
              }
#line 4381 "string.m"
          }
#line 4385 "string.m"
        else
#line 4387 "string.m"
          {
#line 4387 "string.m"
            MR_String mercury__string__Seg_20;

#line 4284 "string.m"
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
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 12036 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_20  = SubString;
#line 4284 "string.m"
}
#line 4388 "string.m"
            {
#line 4388 "string.m"
              MR_Word base;
#line 4388 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4388 "string.m"
              *mercury__string__Acc_12 = base;
#line 4388 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Seg_20));
#line 4388 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4388 "string.m"
            }
#line 4387 "string.m"
          }
#line 4385 "string.m"
      }
#line 4385 "string.m"
      break;
#line 4385 "string.m"
    }
#line 4365 "string.m"
}

#line 4346 "string.m"
void MR_CALL 
mercury__string__next_boundary_4_p_0(
#line 4346 "string.m"
  MR_Word mercury__string__P_5,
#line 4346 "string.m"
  MR_String mercury__string__String_6,
#line 4346 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4346 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4346 "string.m"
{
#line 4355 "string.m"
  while (MR_TRUE)
#line 4355 "string.m"
    {
#line 4355 "string.m"
      /* tailcall optimized into a loop */
#line 4355 "string.m"
      {
#line 4355 "string.m"
        MR_bool mercury__string__succeeded;
#line 4355 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4351 "string.m"
        MR_Char mercury__string__Char_10;
#line 4352 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 12123 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4351 "string.m"
        if (mercury__string__succeeded)
#line 4351 "string.m"
          {
#line 4352 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 4352 "string.m"
            {
#line 4352 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 4351 "string.m"
          }
#line 4355 "string.m"
        if (mercury__string__succeeded)
#line 4354 "string.m"
          {
#line 4354 "string.m"
            /* direct tailcall eliminated */
#line 4354 "string.m"
            {
#line 4354 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4354 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4354 "string.m"
            }
#line 4354 "string.m"
            continue;
#line 4354 "string.m"
          }
#line 4355 "string.m"
        else
#line 4356 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4355 "string.m"
      }
#line 4355 "string.m"
      break;
#line 4355 "string.m"
    }
#line 4346 "string.m"
}

#line 4326 "string.m"
void MR_CALL 
mercury__string__words_loop_4_p_0(
#line 4326 "string.m"
  MR_Word mercury__string__SepP_5,
#line 4326 "string.m"
  MR_String mercury__string__String_6,
#line 4326 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4326 "string.m"
  MR_Word * mercury__string__Words_8)
#line 4326 "string.m"
{
#line 4329 "string.m"
  {
#line 4329 "string.m"
    MR_bool mercury__string__succeeded;
#line 4329 "string.m"
    MR_Integer mercury__string__WordEnd_9;

#line 4330 "string.m"
    {
#line 4330 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__WordStart_7, &mercury__string__WordEnd_9);
    }
#line 4331 "string.m"
    mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__WordStart_7);
#line 4333 "string.m"
    if (mercury__string__succeeded)
#line 4332 "string.m"
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4333 "string.m"
    else
#line 4334 "string.m"
      {
#line 4334 "string.m"
        MR_String mercury__string__Word_10;
#line 4334 "string.m"
        MR_Integer mercury__string__NextWordStart_11;

#line 4284 "string.m"
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
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 12241 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Word_10  = SubString;
#line 4284 "string.m"
}
#line 4335 "string.m"
        {
#line 4335 "string.m"
          mercury__string__next_boundary_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__WordEnd_9, &mercury__string__NextWordStart_11);
        }
#line 4336 "string.m"
        mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__NextWordStart_11);
#line 4338 "string.m"
        if (mercury__string__succeeded)
#line 4337 "string.m"
          {
#line 4337 "string.m"
            MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4337 "string.m"
            {
#line 4337 "string.m"
              MR_Word base;
#line 4337 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4337 "string.m"
              *mercury__string__Words_8 = base;
#line 4337 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4337 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__V_14_14));
#line 4337 "string.m"
            }
#line 4337 "string.m"
          }
#line 4338 "string.m"
        else
#line 4339 "string.m"
          {
#line 4339 "string.m"
            MR_Word mercury__string__Words0_12;

#line 4339 "string.m"
            {
#line 4339 "string.m"
              mercury__string__words_loop_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__NextWordStart_11, &mercury__string__Words0_12);
            }
#line 4340 "string.m"
            {
#line 4340 "string.m"
              MR_Word base;
#line 4340 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4340 "string.m"
              *mercury__string__Words_8 = base;
#line 4340 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4340 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Words0_12));
#line 4340 "string.m"
            }
#line 4339 "string.m"
          }
#line 4334 "string.m"
      }
#line 4329 "string.m"
  }
#line 4326 "string.m"
}

#line 4238 "string.m"
void MR_CALL 
mercury__string__convert_endpoints_4_p_0(
#line 4238 "string.m"
  MR_Integer mercury__string__Start_5,
#line 4238 "string.m"
  MR_Integer mercury__string__Count_6,
#line 4238 "string.m"
  MR_Integer * mercury__string__ClampStart_7,
#line 4238 "string.m"
  MR_Integer * mercury__string__ClampEnd_8)
#line 4238 "string.m"
{
#line 4240 "string.m"
  {
#line 4240 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_5);

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      *mercury__string__ClampStart_7 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      *mercury__string__ClampStart_7 = mercury__string__Start_5;
#line 4242 "string.m"
    mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
#line 4244 "string.m"
    if (mercury__string__succeeded)
#line 4243 "string.m"
      *mercury__string__ClampEnd_8 = *mercury__string__ClampStart_7;
#line 4244 "string.m"
    else
#line 4248 "string.m"
      {
#line 4246 "string.m"
        MR_Integer mercury__string__V_11_11;
#line 4246 "string.m"
        MR_Integer mercury__string__V_12_12;

#line 221 "int.opt"
{
#define MR_PROC_LABEL mercury__string__convert_endpoints_4_p_0

	MR_Integer Max;

		{
#line 221 "int.opt"

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

#line 12375 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_12_12  = Max;
#line 221 "int.opt"
}
#line 4246 "string.m"
        mercury__string__V_11_11 = (mercury__string__V_12_12 - mercury__string__Count_6);
#line 4246 "string.m"
        mercury__string__succeeded = (*mercury__string__ClampStart_7 > mercury__string__V_11_11);
#line 4248 "string.m"
        if (mercury__string__succeeded)
#line 221 "int.opt"
          {
#line 221 "int.opt"
{
#define MR_PROC_LABEL mercury__string__convert_endpoints_4_p_0

	MR_Integer Max;

		{
#line 221 "int.opt"

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

#line 12411 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__ClampEnd_8  = Max;
#line 221 "int.opt"
}
#line 221 "int.opt"
          }
#line 4248 "string.m"
        else
#line 4249 "string.m"
          *mercury__string__ClampEnd_8 = (*mercury__string__ClampStart_7 + mercury__string__Count_6);
#line 4248 "string.m"
      }
#line 4240 "string.m"
  }
#line 4238 "string.m"
}

#line 4215 "string.m"
MR_Word MR_CALL 
mercury__string__between_loop_3_f_0(
#line 4215 "string.m"
  MR_Integer mercury__string__I_5,
#line 4215 "string.m"
  MR_Integer mercury__string__End_6,
#line 4215 "string.m"
  MR_String mercury__string__Str_7)
#line 4215 "string.m"
{
#line 4225 "string.m"
  {
#line 4225 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__I_5 < mercury__string__End_6);
#line 4225 "string.m"
    MR_Word mercury__string__Chars_8;
#line 4225 "string.m"
    MR_Integer mercury__string__J_9;
#line 4225 "string.m"
    MR_Char mercury__string__C_10;

#line 4219 "string.m"
    if (mercury__string__succeeded)
#line 4219 "string.m"
      {
#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 12482 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__C_10  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4219 "string.m"
        if (mercury__string__succeeded)
#line 4221 "string.m"
          mercury__string__succeeded = (mercury__string__J_9 <= mercury__string__End_6);
#line 4219 "string.m"
      }
#line 4225 "string.m"
    if (mercury__string__succeeded)
#line 4223 "string.m"
      {
#line 4223 "string.m"
        MR_Word mercury__string__Cs_11;

#line 4223 "string.m"
        {
#line 4223 "string.m"
          mercury__string__Cs_11 = mercury__string__between_loop_3_f_0(mercury__string__J_9, mercury__string__End_6, mercury__string__Str_7);
        }
#line 4224 "string.m"
        {
#line 4224 "string.m"
          mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4224 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 0) = ((MR_Box) (MR_Word) (mercury__string__C_10));
#line 4224 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 1) = ((MR_Box) (mercury__string__Cs_11));
#line 4224 "string.m"
        }
#line 4223 "string.m"
      }
#line 4225 "string.m"
    else
#line 4226 "string.m"
      mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4225 "string.m"
    return mercury__string__Chars_8;
#line 4225 "string.m"
  }
#line 4215 "string.m"
}

#line 3666 "string.m"
MR_String MR_CALL 
mercury__string__join_list_loop_2_f_0(
#line 3666 "string.m"
  MR_String mercury__string__Sep_1,
#line 3666 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 3666 "string.m"
{
#line 3668 "string.m"
  {
#line 3668 "string.m"
    MR_bool mercury__string__succeeded;
#line 3668 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 3668 "string.m"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3668 "string.m"
      mercury__string__HeadVar__3_3 = (MR_String) "";
#line 3668 "string.m"
    else
#line 3669 "string.m"
      {
#line 3669 "string.m"
        MR_String mercury__string__H_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 3669 "string.m"
        MR_Word mercury__string__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 3669 "string.m"
        MR_String mercury__string__V_8_8;
#line 3669 "string.m"
        MR_String mercury__string__V_9_9;

#line 3669 "string.m"
        {
#line 3669 "string.m"
          mercury__string__V_9_9 = mercury__string__join_list_loop_2_f_0(mercury__string__Sep_1, mercury__string__T_7);
        }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__H_6 ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3390 "string.m"
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
	 mercury__string__V_8_8  = S3;
#line 3390 "string.m"
}
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Sep_1 ;
	S2 =  mercury__string__V_8_8 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 12619 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
#line 3390 "string.m"
}
#line 3669 "string.m"
      }
#line 3668 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3668 "string.m"
  }
#line 3666 "string.m"
}

#line 3485 "string.m"
static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
#line 3485 "string.m"
  void * mercury__string__env_ptr_arg)
#line 3485 "string.m"
{
#line 3485 "string.m"
  {
#line 3485 "string.m"
    struct mercury__string__mercury_append_3_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__mercury_append_3_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 3485 "string.m"
    {
#line 1496 "string.m"
      MR_String mercury__string__Str0_27;
#line 1496 "string.m"
      MR_String mercury__string__Str0_37;

#line 1494 "string.m"
      {
#line 1494 "string.m"
        (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__XList_7, &mercury__string__Str0_27);
      }
#line 1496 "string.m"
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
#line 1495 "string.m"
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__X_4) = mercury__string__Str0_27;
#line 1496 "string.m"
      else
#line 1497 "string.m"
        {
#line 1497 "string.m"
          {
#line 1497 "string.m"
            mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1497 "string.m"
            return;
          }
#line 1497 "string.m"
        }
#line 1494 "string.m"
      {
#line 1494 "string.m"
        (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__YList_8, &mercury__string__Str0_37);
      }
#line 1496 "string.m"
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
#line 1495 "string.m"
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__Y_5) = mercury__string__Str0_37;
#line 1496 "string.m"
      else
#line 1497 "string.m"
        {
#line 1497 "string.m"
          {
#line 1497 "string.m"
            mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1497 "string.m"
            return;
          }
#line 1497 "string.m"
        }
#line 1496 "string.m"
      {
#line 1496 "string.m"
        ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont)((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr);
#line 1496 "string.m"
        return;
      }
#line 3485 "string.m"
    }
#line 3485 "string.m"
  }
#line 3485 "string.m"
}

#line 3483 "string.m"
void MR_CALL 
mercury__string__mercury_append_3_p_3(
#line 3483 "string.m"
  MR_String * mercury__string__X_4,
#line 3483 "string.m"
  MR_String * mercury__string__Y_5,
#line 3483 "string.m"
  MR_String mercury__string__Z_6,
#line 3483 "string.m"
  MR_Cont mercury__string__cont,
#line 3483 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3483 "string.m"
{
#line 3483 "string.m"
  {
#line 3483 "string.m"
    struct mercury__string__mercury_append_3_p_3_env_0_s mercury__string__env;

#line 3483 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__X_4 = mercury__string__X_4;
#line 3483 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__Y_5 = mercury__string__Y_5;
#line 3483 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont = mercury__string__cont;
#line 3483 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 3485 "string.m"
    {
#line 3485 "string.m"
      MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3485 "string.m"
      MR_Word mercury__string__ZList_9;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_3

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1418 "string.m"
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
#line 12771 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1418 "string.m"
}
#line 12778 "string.c"
      mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3489 "string.m"
      {
#line 3489 "string.m"
        mercury__list__append_3_p_4(mercury__string__TypeCtorInfo_10_10, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__XList_7, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__YList_8, mercury__string__ZList_9, mercury__string__mercury_append_3_p_3_1, &mercury__string__env);
      }
#line 3485 "string.m"
    }
#line 3483 "string.m"
  }
#line 3483 "string.m"
}

#line 3482 "string.m"
void MR_CALL 
mercury__string__mercury_append_3_p_2(
#line 3482 "string.m"
  MR_String mercury__string__X_4,
#line 3482 "string.m"
  MR_String mercury__string__Y_5,
#line 3482 "string.m"
  MR_String * mercury__string__Z_6)
#line 3482 "string.m"
{
#line 3485 "string.m"
  {
#line 3485 "string.m"
    MR_bool mercury__string__succeeded;
#line 3485 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3485 "string.m"
    MR_Word mercury__string__XList_7;
#line 3485 "string.m"
    MR_Word mercury__string__YList_8;
#line 3485 "string.m"
    MR_Word mercury__string__ZList_9;
#line 1496 "string.m"
    MR_String mercury__string__Str0_35;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1418 "string.m"
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
#line 12842 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1418 "string.m"
}
#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
#line 1418 "string.m"
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
#line 12873 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
#line 1418 "string.m"
}
#line 12880 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3489 "string.m"
    {
#line 3489 "string.m"
      mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, &mercury__string__ZList_9);
    }
#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ZList_9, &mercury__string__Str0_35);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      *mercury__string__Z_6 = mercury__string__Str0_35;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1497 "string.m"
          return;
        }
#line 1497 "string.m"
      }
#line 3485 "string.m"
  }
#line 3482 "string.m"
}

#line 3481 "string.m"
MR_bool MR_CALL 
mercury__string__mercury_append_3_p_1(
#line 3481 "string.m"
  MR_String mercury__string__X_4,
#line 3481 "string.m"
  MR_String * mercury__string__Y_5,
#line 3481 "string.m"
  MR_String mercury__string__Z_6)
#line 3481 "string.m"
{
#line 3485 "string.m"
  {
#line 3485 "string.m"
    MR_bool mercury__string__succeeded;
#line 3485 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3485 "string.m"
    MR_Word mercury__string__XList_7;
#line 3485 "string.m"
    MR_Word mercury__string__YList_8;
#line 3485 "string.m"
    MR_Word mercury__string__ZList_9;
#line 1496 "string.m"
    MR_String mercury__string__Str0_35;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1418 "string.m"
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
#line 12964 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1418 "string.m"
}
#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1418 "string.m"
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
#line 12995 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1418 "string.m"
}
#line 13002 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3489 "string.m"
    {
#line 3489 "string.m"
      mercury__string__succeeded = mercury__list__append_3_p_3(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, &mercury__string__YList_8, mercury__string__ZList_9);
    }
#line 3485 "string.m"
    if (mercury__string__succeeded)
#line 3485 "string.m"
      {
#line 1494 "string.m"
        {
#line 1494 "string.m"
          mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__YList_8, &mercury__string__Str0_35);
        }
#line 1496 "string.m"
        if (mercury__string__succeeded)
#line 1495 "string.m"
          *mercury__string__Y_5 = mercury__string__Str0_35;
#line 1496 "string.m"
        else
#line 1497 "string.m"
          {
#line 1497 "string.m"
            {
#line 1497 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
            }
#line 1497 "string.m"
          }
#line 1496 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 3485 "string.m"
      }
#line 3485 "string.m"
    return mercury__string__succeeded;
#line 3485 "string.m"
  }
#line 3481 "string.m"
}

#line 3480 "string.m"
MR_bool MR_CALL 
mercury__string__mercury_append_3_p_0(
#line 3480 "string.m"
  MR_String mercury__string__X_4,
#line 3480 "string.m"
  MR_String mercury__string__Y_5,
#line 3480 "string.m"
  MR_String mercury__string__Z_6)
#line 3480 "string.m"
{
#line 3485 "string.m"
  {
#line 3485 "string.m"
    MR_bool mercury__string__succeeded;
#line 3485 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3485 "string.m"
    MR_Word mercury__string__XList_7;
#line 3485 "string.m"
    MR_Word mercury__string__YList_8;
#line 3485 "string.m"
    MR_Word mercury__string__ZList_9;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1418 "string.m"
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
#line 13092 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1418 "string.m"
}
#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
#line 1418 "string.m"
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
#line 13123 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
#line 1418 "string.m"
}
#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1418 "string.m"
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
#line 13154 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1418 "string.m"
}
#line 13161 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3489 "string.m"
    {
#line 3489 "string.m"
      return mercury__string__succeeded = mercury__list__append_3_p_2(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, mercury__string__ZList_9);
    }
#line 3485 "string.m"
    return mercury__string__succeeded;
#line 3485 "string.m"
  }
#line 3480 "string.m"
}

#line 3441 "string.m"
void MR_CALL 
mercury__string__append_ooi_3_5_p_0(
#line 3441 "string.m"
  MR_Integer mercury__string__S1Len_1,
#line 3441 "string.m"
  MR_Integer mercury__string__S3Len_2,
#line 3441 "string.m"
  MR_String * mercury__string__S1_3,
#line 3441 "string.m"
  MR_String * mercury__string__S2_4,
#line 3441 "string.m"
  MR_String mercury__string__S3_5)
#line 3441 "string.m"
{
#line 3444 "string.m"
  {
#line 3444 "string.m"
    MR_bool mercury__string__succeeded;

#line 3448 "string.m"
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
#line 3448 "string.m"
{
    MR_allocate_aligned_string_msg(S1, S1Len, MR_ALLOC_ID);
    MR_memcpy(S1, S3, S1Len);
    S1[S1Len] = '\0';
    MR_allocate_aligned_string_msg(S2, S3Len - S1Len, MR_ALLOC_ID);
    strcpy(S2, S3 + S1Len);
}
#line 13217 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S1_3  = S1;
	 *mercury__string__S2_4  = S2;
#line 3448 "string.m"
}
#line 3444 "string.m"
  }
#line 3441 "string.m"
}

#line 3426 "string.m"
void MR_CALL 
mercury__string__append_ooi_2_5_p_0(
#line 3426 "string.m"
  MR_Integer mercury__string__NextS1Len_6,
#line 3426 "string.m"
  MR_Integer mercury__string__S3Len_7,
#line 3426 "string.m"
  MR_String * mercury__string__S1_8,
#line 3426 "string.m"
  MR_String * mercury__string__S2_9,
#line 3426 "string.m"
  MR_String mercury__string__S3_10,
#line 3426 "string.m"
  MR_Cont mercury__string__cont,
#line 3426 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3426 "string.m"
{
#line 3432 "string.m"
  while (MR_TRUE)
#line 3432 "string.m"
    {
#line 3432 "string.m"
      /* tailcall optimized into a loop */
#line 3432 "string.m"
      {
#line 3432 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__NextS1Len_6 == mercury__string__S3Len_7);

#line 3432 "string.m"
        if (mercury__string__succeeded)
#line 3431 "string.m"
          {
#line 3431 "string.m"
            {
#line 3431 "string.m"
              mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
            }
#line 3431 "string.m"
            {
#line 3431 "string.m"
              mercury__string__cont(mercury__string__cont_env_ptr);
#line 3431 "string.m"
              return;
            }
#line 3431 "string.m"
          }
#line 3432 "string.m"
        else
#line 3435 "string.m"
          {
#line 3434 "string.m"
            {
#line 3434 "string.m"
              mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
            }
#line 3434 "string.m"
            {
#line 3434 "string.m"
              mercury__string__cont(mercury__string__cont_env_ptr);
            }
#line 3436 "string.m"
            {
#line 3436 "string.m"
              MR_Integer mercury__string__AdvS1Len_11;
#line 2120 "string.m"
              MR_Char mercury__string__V_12_12;

#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13324 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__AdvS1Len_11  = NextIndex;
	 mercury__string__V_12_12  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3436 "string.m"
              if (mercury__string__succeeded)
#line 3437 "string.m"
                {
#line 3437 "string.m"
                  /* direct tailcall eliminated */
#line 3437 "string.m"
                  {
#line 3437 "string.m"
                    MR_Integer mercury__string__NextS1Len__tmp_copy_6 = mercury__string__AdvS1Len_11;

#line 3437 "string.m"
                    mercury__string__NextS1Len_6 = mercury__string__NextS1Len__tmp_copy_6;
#line 3437 "string.m"
                  }
#line 3437 "string.m"
                  continue;
#line 3437 "string.m"
                }
#line 3436 "string.m"
            }
#line 3435 "string.m"
          }
#line 3432 "string.m"
      }
#line 3432 "string.m"
      break;
#line 3432 "string.m"
    }
#line 3426 "string.m"
}

#line 3420 "string.m"
void MR_CALL 
mercury__string__append_ooi_3_p_0(
#line 3420 "string.m"
  MR_String * mercury__string__S1_4,
#line 3420 "string.m"
  MR_String * mercury__string__S2_5,
#line 3420 "string.m"
  MR_String mercury__string__S3_6,
#line 3420 "string.m"
  MR_Cont mercury__string__cont,
#line 3420 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3420 "string.m"
{
#line 3422 "string.m"
  {
#line 3422 "string.m"
    MR_bool mercury__string__succeeded;
#line 3422 "string.m"
    MR_Integer mercury__string__S3Len_7;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ooi_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 13402 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_7  = Length;
#line 2580 "string.m"
}
#line 3424 "string.m"
    {
#line 3424 "string.m"
      mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_7, mercury__string__S1_4, mercury__string__S2_5, mercury__string__S3_6, mercury__string__cont, mercury__string__cont_env_ptr);
#line 3424 "string.m"
      return;
    }
#line 3422 "string.m"
  }
#line 3420 "string.m"
}

#line 3384 "string.m"
void MR_CALL 
mercury__string__append_iio_3_p_0(
#line 3384 "string.m"
  MR_String mercury__string__S1_1,
#line 3384 "string.m"
  MR_String mercury__string__S2_2,
#line 3384 "string.m"
  MR_String * mercury__string__S3_3)
#line 3384 "string.m"
{
#line 3386 "string.m"
  {
#line 3386 "string.m"
    MR_bool mercury__string__succeeded;

#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_iio_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 13457 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
#line 3390 "string.m"
}
#line 3386 "string.m"
  }
#line 3384 "string.m"
}

#line 3332 "string.m"
MR_bool MR_CALL 
mercury__string__append_ioi_3_p_0(
#line 3332 "string.m"
  MR_String mercury__string__S1_1,
#line 3332 "string.m"
  MR_String * mercury__string__S2_2,
#line 3332 "string.m"
  MR_String mercury__string__S3_3)
#line 3332 "string.m"
{
#line 3334 "string.m"
  {
#line 3334 "string.m"
    MR_bool mercury__string__succeeded;

#line 3338 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ioi_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3338 "string.m"
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
#line 13515 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
#line 3338 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3334 "string.m"
    return mercury__string__succeeded;
#line 3334 "string.m"
  }
#line 3332 "string.m"
}

#line 3289 "string.m"
MR_bool MR_CALL 
mercury__string__append_iii_3_p_0(
#line 3289 "string.m"
  MR_String mercury__string__S1_1,
#line 3289 "string.m"
  MR_String mercury__string__S2_2,
#line 3289 "string.m"
  MR_String mercury__string__S3_3)
#line 3289 "string.m"
{
#line 3291 "string.m"
  {
#line 3291 "string.m"
    MR_bool mercury__string__succeeded;

#line 3295 "string.m"
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
#line 3295 "string.m"
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}
#line 13569 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3295 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3291 "string.m"
    return mercury__string__succeeded;
#line 3291 "string.m"
  }
#line 3289 "string.m"
}

#line 3249 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_start_loop_6_p_0(
#line 3249 "string.m"
  MR_String mercury__string__String_7,
#line 3249 "string.m"
  MR_String mercury__string__SubString_8,
#line 3249 "string.m"
  MR_Integer mercury__string__I_9,
#line 3249 "string.m"
  MR_Integer mercury__string__Len_10,
#line 3249 "string.m"
  MR_Integer mercury__string__SubLen_11,
#line 3249 "string.m"
  MR_Integer * mercury__string__Index_12)
#line 3249 "string.m"
{
#line 3252 "string.m"
  while (MR_TRUE)
#line 3252 "string.m"
    {
#line 3252 "string.m"
      /* tailcall optimized into a loop */
#line 3252 "string.m"
      {
#line 3252 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__Len_10);
#line 3260 "string.m"
        MR_Integer mercury__string__V_13_13;
#line 3260 "string.m"
        MR_String mercury__string__V_17_17;

#line 3252 "string.m"
        if (mercury__string__succeeded)
#line 3252 "string.m"
          {
#line 3260 "string.m"
            mercury__string__V_13_13 = (mercury__string__I_9 + mercury__string__SubLen_11);
#line 4124 "string.m"
            {
#line 4124 "string.m"
              mercury__string__between_4_p_0(mercury__string__String_7, mercury__string__I_9, mercury__string__V_13_13, &mercury__string__V_17_17);
            }
#line 3260 "string.m"
            mercury__string__succeeded = (strcmp(mercury__string__SubString_8, mercury__string__V_17_17) == 0);
#line 3263 "string.m"
            if (mercury__string__succeeded)
#line 3262 "string.m"
              {
#line 3262 "string.m"
                *mercury__string__Index_12 = mercury__string__I_9;
#line 3262 "string.m"
                mercury__string__succeeded = MR_TRUE;
#line 3262 "string.m"
              }
#line 3263 "string.m"
            else
#line 3264 "string.m"
              {
#line 3264 "string.m"
                MR_Integer mercury__string__V_14_14 = (mercury__string__I_9 + (MR_Integer) 1);

#line 3264 "string.m"
                /* direct tailcall eliminated */
#line 3264 "string.m"
                {
#line 3264 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__V_14_14;

#line 3264 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 3264 "string.m"
                }
#line 3264 "string.m"
                continue;
#line 3264 "string.m"
              }
#line 3252 "string.m"
          }
#line 3252 "string.m"
        return mercury__string__succeeded;
#line 3252 "string.m"
      }
#line 3252 "string.m"
      break;
#line 3252 "string.m"
    }
#line 3249 "string.m"
}

#line 3159 "string.m"
void MR_CALL 
mercury__string__suffix_length_loop_4_p_0(
#line 3159 "string.m"
  MR_Word mercury__string__P_5,
#line 3159 "string.m"
  MR_String mercury__string__S_6,
#line 3159 "string.m"
  MR_Integer mercury__string__I_7,
#line 3159 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 3159 "string.m"
{
#line 3168 "string.m"
  while (MR_TRUE)
#line 3168 "string.m"
    {
#line 3168 "string.m"
      /* tailcall optimized into a loop */
#line 3168 "string.m"
      {
#line 3168 "string.m"
        MR_bool mercury__string__succeeded;
#line 3168 "string.m"
        MR_Integer mercury__string__J_9;
#line 3164 "string.m"
        MR_Char mercury__string__Char_10;
#line 3165 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 2213 "string.m"
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
#line 2213 "string.m"

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

#line 13733 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3164 "string.m"
        if (mercury__string__succeeded)
#line 3164 "string.m"
          {
#line 3165 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 3165 "string.m"
            {
#line 3165 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 3164 "string.m"
          }
#line 3168 "string.m"
        if (mercury__string__succeeded)
#line 3167 "string.m"
          {
#line 3167 "string.m"
            /* direct tailcall eliminated */
#line 3167 "string.m"
            {
#line 3167 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 3167 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 3167 "string.m"
            }
#line 3167 "string.m"
            continue;
#line 3167 "string.m"
          }
#line 3168 "string.m"
        else
#line 3169 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 3168 "string.m"
      }
#line 3168 "string.m"
      break;
#line 3168 "string.m"
    }
#line 3159 "string.m"
}

#line 3142 "string.m"
void MR_CALL 
mercury__string__prefix_length_loop_4_p_0(
#line 3142 "string.m"
  MR_Word mercury__string__P_5,
#line 3142 "string.m"
  MR_String mercury__string__S_6,
#line 3142 "string.m"
  MR_Integer mercury__string__I_7,
#line 3142 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 3142 "string.m"
{
#line 3151 "string.m"
  while (MR_TRUE)
#line 3151 "string.m"
    {
#line 3151 "string.m"
      /* tailcall optimized into a loop */
#line 3151 "string.m"
      {
#line 3151 "string.m"
        MR_bool mercury__string__succeeded;
#line 3151 "string.m"
        MR_Integer mercury__string__J_9;
#line 3147 "string.m"
        MR_Char mercury__string__Char_10;
#line 3148 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13844 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3147 "string.m"
        if (mercury__string__succeeded)
#line 3147 "string.m"
          {
#line 3148 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 3148 "string.m"
            {
#line 3148 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 3147 "string.m"
          }
#line 3151 "string.m"
        if (mercury__string__succeeded)
#line 3150 "string.m"
          {
#line 3150 "string.m"
            /* direct tailcall eliminated */
#line 3150 "string.m"
            {
#line 3150 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 3150 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 3150 "string.m"
            }
#line 3150 "string.m"
            continue;
#line 3150 "string.m"
          }
#line 3151 "string.m"
        else
#line 3152 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 3151 "string.m"
      }
#line 3151 "string.m"
      break;
#line 3151 "string.m"
    }
#line 3142 "string.m"
}

#line 3124 "string.m"
MR_bool MR_CALL 
mercury__string__contains_char_3_p_0(
#line 3124 "string.m"
  MR_String mercury__string__Str_4,
#line 3124 "string.m"
  MR_Char mercury__string__Char_5,
#line 3124 "string.m"
  MR_Integer mercury__string__I_6)
#line 3124 "string.m"
{
#line 3133 "string.m"
  while (MR_TRUE)
#line 3133 "string.m"
    {
#line 3133 "string.m"
      /* tailcall optimized into a loop */
#line 3133 "string.m"
      {
#line 3133 "string.m"
        MR_bool mercury__string__succeeded;
#line 3133 "string.m"
        MR_Integer mercury__string__J_7;
#line 3133 "string.m"
        MR_Char mercury__string__IndexChar_8;

#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13951 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_7  = NextIndex;
	 mercury__string__IndexChar_8  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3133 "string.m"
        if (mercury__string__succeeded)
#line 3133 "string.m"
          {
#line 3128 "string.m"
            mercury__string__succeeded = (mercury__string__IndexChar_8 == mercury__string__Char_5);
#line 3130 "string.m"
            if (mercury__string__succeeded)
#line 3129 "string.m"
              mercury__string__succeeded = MR_TRUE;
#line 3130 "string.m"
            else
#line 3131 "string.m"
              {
#line 3131 "string.m"
                /* direct tailcall eliminated */
#line 3131 "string.m"
                {
#line 3131 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__J_7;

#line 3131 "string.m"
                  mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 3131 "string.m"
                }
#line 3131 "string.m"
                continue;
#line 3131 "string.m"
              }
#line 3133 "string.m"
          }
#line 3133 "string.m"
        return mercury__string__succeeded;
#line 3133 "string.m"
      }
#line 3133 "string.m"
      break;
#line 3133 "string.m"
    }
#line 3124 "string.m"
}

#line 3070 "string.m"
MR_bool MR_CALL 
mercury__string__all_match_loop_3_p_0(
#line 3070 "string.m"
  MR_Word mercury__string__P_4,
#line 3070 "string.m"
  MR_String mercury__string__String_5,
#line 3070 "string.m"
  MR_Integer mercury__string__Cur_6)
#line 3070 "string.m"
{
#line 3077 "string.m"
  while (MR_TRUE)
#line 3077 "string.m"
    {
#line 3077 "string.m"
      /* tailcall optimized into a loop */
#line 3077 "string.m"
      {
#line 3077 "string.m"
        MR_bool mercury__string__succeeded;
#line 3077 "string.m"
        MR_Integer mercury__string__Next_7;
#line 3077 "string.m"
        MR_Char mercury__string__Char_8;

#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14055 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3077 "string.m"
        if (mercury__string__succeeded)
#line 3075 "string.m"
          {
#line 3075 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_4, (MR_Integer) 1)));

#line 3075 "string.m"
            {
#line 3075 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_4), ((MR_Box) (MR_Word) (mercury__string__Char_8)));
            }
#line 3075 "string.m"
            if (mercury__string__succeeded)
#line 3076 "string.m"
              {
#line 3076 "string.m"
                /* direct tailcall eliminated */
#line 3076 "string.m"
                {
#line 3076 "string.m"
                  MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 3076 "string.m"
                  mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 3076 "string.m"
                }
#line 3076 "string.m"
                continue;
#line 3076 "string.m"
              }
#line 3075 "string.m"
          }
#line 3077 "string.m"
        else
#line 3078 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 3077 "string.m"
        return mercury__string__succeeded;
#line 3077 "string.m"
      }
#line 3077 "string.m"
      break;
#line 3077 "string.m"
    }
#line 3070 "string.m"
}

#line 2903 "string.m"
void MR_CALL 
mercury__string__hash6_loop_5_p_0(
#line 2903 "string.m"
  MR_String mercury__string__String_6,
#line 2903 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2903 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2903 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2903 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2903 "string.m"
{
#line 2912 "string.m"
  while (MR_TRUE)
#line 2912 "string.m"
    {
#line 2912 "string.m"
      /* tailcall optimized into a loop */
#line 2912 "string.m"
      {
#line 2912 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2912 "string.m"
        if (mercury__string__succeeded)
#line 2908 "string.m"
          {
#line 2908 "string.m"
            MR_Integer mercury__string__C_10;
#line 2908 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2908 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 2908 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
#line 2908 "string.m"
            MR_Integer mercury__string__V_17_17;
#line 2908 "string.m"
            MR_Integer mercury__string__V_18_18;
#line 2908 "string.m"
            MR_Integer mercury__string__V_22_22;
#line 2908 "string.m"
            MR_Integer mercury__string__V_23_23;
#line 2908 "string.m"
            MR_Integer mercury__string__V_28_28;
#line 2908 "string.m"
            MR_Integer mercury__string__V_29_29;

#line 2340 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash6_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2340 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 14181 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2340 "string.m"
}
#line 2909 "string.m"
            mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 49);
#line 2859 "string.m"
            mercury__string__V_23_23 = ((MR_Integer) 1 << (MR_Integer) 30);
#line 2859 "string.m"
            mercury__string__V_22_22 = (mercury__string__V_23_23 - (MR_Integer) 1);
#line 2859 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__V_14_14 & mercury__string__V_22_22);
#line 2910 "string.m"
            mercury__string__V_17_17 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2859 "string.m"
            mercury__string__V_29_29 = ((MR_Integer) 1 << (MR_Integer) 30);
#line 2859 "string.m"
            mercury__string__V_28_28 = (mercury__string__V_29_29 - (MR_Integer) 1);
#line 2859 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__V_17_17 & mercury__string__V_28_28);
#line 2911 "string.m"
            mercury__string__V_18_18 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2911 "string.m"
            /* direct tailcall eliminated */
#line 2911 "string.m"
            {
#line 2911 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_18_18;
#line 2911 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

#line 2911 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2911 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2911 "string.m"
            }
#line 2911 "string.m"
            continue;
#line 2908 "string.m"
          }
#line 2912 "string.m"
        else
#line 2912 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2912 "string.m"
      }
#line 2912 "string.m"
      break;
#line 2912 "string.m"
    }
#line 2903 "string.m"
}

#line 2885 "string.m"
void MR_CALL 
mercury__string__hash5_loop_5_p_0(
#line 2885 "string.m"
  MR_String mercury__string__String_6,
#line 2885 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2885 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2885 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2885 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2885 "string.m"
{
#line 2894 "string.m"
  while (MR_TRUE)
#line 2894 "string.m"
    {
#line 2894 "string.m"
      /* tailcall optimized into a loop */
#line 2894 "string.m"
      {
#line 2894 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2894 "string.m"
        if (mercury__string__succeeded)
#line 2890 "string.m"
          {
#line 2890 "string.m"
            MR_Integer mercury__string__C_10;
#line 2890 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2890 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 2890 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
#line 2890 "string.m"
            MR_Integer mercury__string__V_17_17;
#line 2890 "string.m"
            MR_Integer mercury__string__V_18_18;
#line 2890 "string.m"
            MR_Integer mercury__string__V_22_22;
#line 2890 "string.m"
            MR_Integer mercury__string__V_23_23;
#line 2890 "string.m"
            MR_Integer mercury__string__V_28_28;
#line 2890 "string.m"
            MR_Integer mercury__string__V_29_29;

#line 2340 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash5_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2340 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 14305 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2340 "string.m"
}
#line 2891 "string.m"
            mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 37);
#line 2859 "string.m"
            mercury__string__V_23_23 = ((MR_Integer) 1 << (MR_Integer) 30);
#line 2859 "string.m"
            mercury__string__V_22_22 = (mercury__string__V_23_23 - (MR_Integer) 1);
#line 2859 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__V_14_14 & mercury__string__V_22_22);
#line 2892 "string.m"
            mercury__string__V_17_17 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2859 "string.m"
            mercury__string__V_29_29 = ((MR_Integer) 1 << (MR_Integer) 30);
#line 2859 "string.m"
            mercury__string__V_28_28 = (mercury__string__V_29_29 - (MR_Integer) 1);
#line 2859 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__V_17_17 & mercury__string__V_28_28);
#line 2893 "string.m"
            mercury__string__V_18_18 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2893 "string.m"
            /* direct tailcall eliminated */
#line 2893 "string.m"
            {
#line 2893 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_18_18;
#line 2893 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

#line 2893 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2893 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2893 "string.m"
            }
#line 2893 "string.m"
            continue;
#line 2890 "string.m"
          }
#line 2894 "string.m"
        else
#line 2894 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2894 "string.m"
      }
#line 2894 "string.m"
      break;
#line 2894 "string.m"
    }
#line 2885 "string.m"
}

#line 2866 "string.m"
void MR_CALL 
mercury__string__hash4_loop_5_p_0(
#line 2866 "string.m"
  MR_String mercury__string__String_6,
#line 2866 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2866 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2866 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2866 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2866 "string.m"
{
#line 2876 "string.m"
  {
#line 2876 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2876 "string.m"
    if (mercury__string__succeeded)
#line 2871 "string.m"
      {
#line 2871 "string.m"
        MR_Integer mercury__string__C_10;
#line 2871 "string.m"
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2871 "string.m"
        MR_Integer mercury__string__V_14_14;
#line 2871 "string.m"
        MR_Integer mercury__string__V_15_15;
#line 2871 "string.m"
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_17_17;
#line 2871 "string.m"
        MR_Integer mercury__string__V_18_18;
#line 2871 "string.m"
        MR_Integer mercury__string__V_22_22;
#line 2871 "string.m"
        MR_Integer mercury__string__V_23_23;

#line 2340 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash4_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2340 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 14419 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2340 "string.m"
}
#line 2873 "string.m"
        mercury__string__V_15_15 = (mercury__string__STATE_VARIABLE_HashVal_0_11 << (MR_Integer) 5);
#line 2872 "string.m"
        mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 ^ mercury__string__V_15_15);
#line 2859 "string.m"
        mercury__string__V_23_23 = ((MR_Integer) 1 << (MR_Integer) 30);
#line 2859 "string.m"
        mercury__string__V_22_22 = (mercury__string__V_23_23 - (MR_Integer) 1);
#line 2859 "string.m"
        mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__V_14_14 & mercury__string__V_22_22);
#line 2874 "string.m"
        mercury__string__STATE_VARIABLE_HashVal_17_17 = (mercury__string__STATE_VARIABLE_HashVal_13_13 ^ mercury__string__C_10);
#line 2875 "string.m"
        mercury__string__V_18_18 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2875 "string.m"
        {
#line 2875 "string.m"
          mercury__string__hash_loop_5_p_0(mercury__string__String_6, mercury__string__V_18_18, mercury__string__Length_8, mercury__string__STATE_VARIABLE_HashVal_17_17, mercury__string__STATE_VARIABLE_HashVal_12);
#line 2875 "string.m"
          return;
        }
#line 2871 "string.m"
      }
#line 2876 "string.m"
    else
#line 2876 "string.m"
      *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2876 "string.m"
  }
#line 2866 "string.m"
}

#line 2857 "string.m"
MR_Integer MR_CALL 
mercury__string__keep_30_bits_1_f_0(
#line 2857 "string.m"
  MR_Integer mercury__string__N_3)
#line 2857 "string.m"
{
#line 2859 "string.m"
  {
#line 2859 "string.m"
    MR_bool mercury__string__succeeded;
#line 2859 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;
#line 2859 "string.m"
    MR_Integer mercury__string__V_4_4;
#line 2859 "string.m"
    MR_Integer mercury__string__V_5_5 = ((MR_Integer) 1 << (MR_Integer) 30);

#line 2859 "string.m"
    mercury__string__V_4_4 = (mercury__string__V_5_5 - (MR_Integer) 1);
#line 2859 "string.m"
    mercury__string__HeadVar__2_2 = (mercury__string__N_3 & mercury__string__V_4_4);
#line 2859 "string.m"
    return mercury__string__HeadVar__2_2;
#line 2859 "string.m"
  }
#line 2857 "string.m"
}

#line 2844 "string.m"
void MR_CALL 
mercury__string__hash3_loop_5_p_0(
#line 2844 "string.m"
  MR_String mercury__string__String_6,
#line 2844 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2844 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2844 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2844 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2844 "string.m"
{
#line 2853 "string.m"
  while (MR_TRUE)
#line 2853 "string.m"
    {
#line 2853 "string.m"
      /* tailcall optimized into a loop */
#line 2853 "string.m"
      {
#line 2853 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2853 "string.m"
        if (mercury__string__succeeded)
#line 2849 "string.m"
          {
#line 2849 "string.m"
            MR_Integer mercury__string__C_10;
#line 2849 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2849 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
#line 2849 "string.m"
            MR_Integer mercury__string__V_16_16;

#line 2340 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash3_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2340 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 14542 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2340 "string.m"
}
#line 2850 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 49);
#line 2851 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2852 "string.m"
            mercury__string__V_16_16 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2852 "string.m"
            /* direct tailcall eliminated */
#line 2852 "string.m"
            {
#line 2852 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_16_16;
#line 2852 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

#line 2852 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2852 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2852 "string.m"
            }
#line 2852 "string.m"
            continue;
#line 2849 "string.m"
          }
#line 2853 "string.m"
        else
#line 2853 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2853 "string.m"
      }
#line 2853 "string.m"
      break;
#line 2853 "string.m"
    }
#line 2844 "string.m"
}

#line 2826 "string.m"
void MR_CALL 
mercury__string__hash2_loop_5_p_0(
#line 2826 "string.m"
  MR_String mercury__string__String_6,
#line 2826 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2826 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2826 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2826 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2826 "string.m"
{
#line 2835 "string.m"
  while (MR_TRUE)
#line 2835 "string.m"
    {
#line 2835 "string.m"
      /* tailcall optimized into a loop */
#line 2835 "string.m"
      {
#line 2835 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2835 "string.m"
        if (mercury__string__succeeded)
#line 2831 "string.m"
          {
#line 2831 "string.m"
            MR_Integer mercury__string__C_10;
#line 2831 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2831 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
#line 2831 "string.m"
            MR_Integer mercury__string__V_16_16;

#line 2340 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash2_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2340 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 14642 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2340 "string.m"
}
#line 2832 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 37);
#line 2833 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2834 "string.m"
            mercury__string__V_16_16 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2834 "string.m"
            /* direct tailcall eliminated */
#line 2834 "string.m"
            {
#line 2834 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_16_16;
#line 2834 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

#line 2834 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2834 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2834 "string.m"
            }
#line 2834 "string.m"
            continue;
#line 2831 "string.m"
          }
#line 2835 "string.m"
        else
#line 2835 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2835 "string.m"
      }
#line 2835 "string.m"
      break;
#line 2835 "string.m"
    }
#line 2826 "string.m"
}

#line 2808 "string.m"
void MR_CALL 
mercury__string__hash_loop_5_p_0(
#line 2808 "string.m"
  MR_String mercury__string__String_6,
#line 2808 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2808 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2808 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2808 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2808 "string.m"
{
#line 2817 "string.m"
  while (MR_TRUE)
#line 2817 "string.m"
    {
#line 2817 "string.m"
      /* tailcall optimized into a loop */
#line 2817 "string.m"
      {
#line 2817 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2817 "string.m"
        if (mercury__string__succeeded)
#line 2813 "string.m"
          {
#line 2813 "string.m"
            MR_Integer mercury__string__C_10;
#line 2813 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2813 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 2813 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
#line 2813 "string.m"
            MR_Integer mercury__string__V_17_17;

#line 2340 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2340 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 14744 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2340 "string.m"
}
#line 2814 "string.m"
            mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 << (MR_Integer) 5);
#line 2814 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 ^ mercury__string__V_14_14);
#line 2815 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__STATE_VARIABLE_HashVal_13_13 ^ mercury__string__C_10);
#line 2816 "string.m"
            mercury__string__V_17_17 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2816 "string.m"
            /* direct tailcall eliminated */
#line 2816 "string.m"
            {
#line 2816 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_17_17;
#line 2816 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

#line 2816 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2816 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2816 "string.m"
            }
#line 2816 "string.m"
            continue;
#line 2813 "string.m"
          }
#line 2817 "string.m"
        else
#line 2817 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2817 "string.m"
      }
#line 2817 "string.m"
      break;
#line 2817 "string.m"
    }
#line 2808 "string.m"
}

#line 2778 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_loop_5_p_0(
#line 2778 "string.m"
  MR_String mercury__string__String_6,
#line 2778 "string.m"
  MR_Integer mercury__string__Offset_7,
#line 2778 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2778 "string.m"
  MR_Integer mercury__string__N_9,
#line 2778 "string.m"
  MR_Integer * mercury__string__Index_10)
#line 2778 "string.m"
{
#line 2781 "string.m"
  while (MR_TRUE)
#line 2781 "string.m"
    {
#line 2781 "string.m"
      /* tailcall optimized into a loop */
#line 2781 "string.m"
      {
#line 2781 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Offset_7 < mercury__string__Length_8);

#line 2781 "string.m"
        if (mercury__string__succeeded)
#line 2781 "string.m"
          {
#line 2783 "string.m"
            mercury__string__succeeded = (mercury__string__N_9 == (MR_Integer) 0);
#line 2785 "string.m"
            if (mercury__string__succeeded)
#line 2784 "string.m"
              {
#line 2784 "string.m"
                *mercury__string__Index_10 = mercury__string__Offset_7;
#line 2784 "string.m"
                mercury__string__succeeded = MR_TRUE;
#line 2784 "string.m"
              }
#line 2785 "string.m"
            else
#line 2786 "string.m"
              {
#line 2786 "string.m"
                MR_Integer mercury__string__NextOffset_11;
#line 2786 "string.m"
                MR_Integer mercury__string__V_13_13;
#line 2786 "string.m"
                MR_Integer mercury__string__V_14_14;
#line 2120 "string.m"
                MR_Char mercury__string__V_12_12;

#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14871 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__NextOffset_11  = NextIndex;
	 mercury__string__V_12_12  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2786 "string.m"
                if (mercury__string__succeeded)
#line 2786 "string.m"
                  {
#line 2787 "string.m"
                    mercury__string__V_14_14 = (MR_Integer) 1;
#line 2787 "string.m"
                    mercury__string__V_13_13 = (mercury__string__N_9 - mercury__string__V_14_14);
#line 2787 "string.m"
                    /* direct tailcall eliminated */
#line 2787 "string.m"
                    {
#line 2787 "string.m"
                      MR_Integer mercury__string__Offset__tmp_copy_7 = mercury__string__NextOffset_11;
#line 2787 "string.m"
                      MR_Integer mercury__string__N__tmp_copy_9 = mercury__string__V_13_13;

#line 2787 "string.m"
                      mercury__string__N_9 = mercury__string__N__tmp_copy_9;
#line 2787 "string.m"
                      mercury__string__Offset_7 = mercury__string__Offset__tmp_copy_7;
#line 2787 "string.m"
                    }
#line 2787 "string.m"
                    continue;
#line 2786 "string.m"
                  }
#line 2786 "string.m"
              }
#line 2781 "string.m"
          }
#line 2781 "string.m"
        return mercury__string__succeeded;
#line 2781 "string.m"
      }
#line 2781 "string.m"
      break;
#line 2781 "string.m"
    }
#line 2778 "string.m"
}

#line 2708 "string.m"
void MR_CALL 
mercury__string__count_utf8_code_units_2_3_p_0(
#line 2708 "string.m"
  MR_Char mercury__string__Char_4,
#line 2708 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Length_0_8,
#line 2708 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Length_9)
#line 2708 "string.m"
{
#line 2710 "string.m"
  {
#line 2710 "string.m"
    MR_bool mercury__string__succeeded;
#line 2710 "string.m"
    MR_Integer mercury__string__CharInt_6;

#line 110 "char.opt"
{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_2_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__Char_4 ;
		{
#line 110 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 14955 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__CharInt_6  = Int;
#line 110 "char.opt"
}
#line 2712 "string.m"
    mercury__string__succeeded = (mercury__string__CharInt_6 <= (MR_Integer) 127);
#line 2714 "string.m"
    if (mercury__string__succeeded)
#line 2713 "string.m"
      {
#line 2713 "string.m"
        *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + (MR_Integer) 1);
#line 2713 "string.m"
      }
#line 2714 "string.m"
    else
#line 2716 "string.m"
      {
#line 2716 "string.m"
        MR_Word mercury__string__UTF8_7;

#line 2714 "string.m"
        {
#line 2714 "string.m"
          mercury__string__succeeded = mercury__char__to_utf8_2_p_0(mercury__string__Char_4, &mercury__string__UTF8_7);
        }
#line 2716 "string.m"
        if (mercury__string__succeeded)
#line 2715 "string.m"
          {
#line 2715 "string.m"
            MR_Word mercury__string__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2715 "string.m"
            MR_Integer mercury__string__V_14_14;

#line 600 "list.opt"
            {
#line 600 "list.opt"
              mercury__list__length_acc_3_p_0(mercury__string__TypeCtorInfo_17_17, mercury__string__UTF8_7, (MR_Integer) 0, &mercury__string__V_14_14);
            }
#line 2715 "string.m"
            *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + mercury__string__V_14_14);
#line 2715 "string.m"
          }
#line 2716 "string.m"
        else
#line 2717 "string.m"
          {
#line 2717 "string.m"
            {
#line 2717 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.count_utf8_code_units_2\'/3", (MR_String) "char.to_utf8 failed");
#line 2717 "string.m"
              return;
            }
#line 2717 "string.m"
          }
#line 2716 "string.m"
      }
#line 2710 "string.m"
  }
#line 2708 "string.m"
}

#line 2681 "string.m"
void MR_CALL 
mercury__string__count_codepoints_loop_4_p_0(
#line 2681 "string.m"
  MR_String mercury__string__String_5,
#line 2681 "string.m"
  MR_Integer mercury__string__I_6,
#line 2681 "string.m"
  MR_Integer mercury__string__Count0_7,
#line 2681 "string.m"
  MR_Integer * mercury__string__Count_8)
#line 2681 "string.m"
{
#line 2686 "string.m"
  while (MR_TRUE)
#line 2686 "string.m"
    {
#line 2686 "string.m"
      /* tailcall optimized into a loop */
#line 2686 "string.m"
      {
#line 2686 "string.m"
        MR_bool mercury__string__succeeded;
#line 2686 "string.m"
        MR_Integer mercury__string__J_9;
#line 2120 "string.m"
        MR_Char mercury__string__V_10_10;

#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 15075 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__V_10_10  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2686 "string.m"
        if (mercury__string__succeeded)
#line 2685 "string.m"
          {
#line 2685 "string.m"
            MR_Integer mercury__string__V_11_11 = (mercury__string__Count0_7 + (MR_Integer) 1);

#line 2685 "string.m"
            /* direct tailcall eliminated */
#line 2685 "string.m"
            {
#line 2685 "string.m"
              MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__J_9;
#line 2685 "string.m"
              MR_Integer mercury__string__Count0__tmp_copy_7 = mercury__string__V_11_11;

#line 2685 "string.m"
              mercury__string__Count0_7 = mercury__string__Count0__tmp_copy_7;
#line 2685 "string.m"
              mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 2685 "string.m"
            }
#line 2685 "string.m"
            continue;
#line 2685 "string.m"
          }
#line 2686 "string.m"
        else
#line 2687 "string.m"
          *mercury__string__Count_8 = mercury__string__Count0_7;
#line 2686 "string.m"
      }
#line 2686 "string.m"
      break;
#line 2686 "string.m"
    }
#line 2681 "string.m"
}

#line 2500 "string.m"
void MR_CALL 
mercury__string__unsafe_set_char_non_null_4_p_0(
#line 2500 "string.m"
  MR_Char mercury__string__Ch_1,
#line 2500 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2500 "string.m"
  MR_String mercury__string__Str0_3,
#line 2500 "string.m"
  MR_String * mercury__string__Str_4)
#line 2500 "string.m"
{
#line 2505 "string.m"
  {
#line 2505 "string.m"
    MR_bool mercury__string__succeeded;

#line 2509 "string.m"
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
#line 2509 "string.m"

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

#line 15178 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = Str;
#line 2509 "string.m"
}
#line 2505 "string.m"
  }
#line 2500 "string.m"
}

#line 2376 "string.m"
MR_bool MR_CALL 
mercury__string__set_char_non_null_4_p_0(
#line 2376 "string.m"
  MR_Char mercury__string__Ch_1,
#line 2376 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2376 "string.m"
  MR_String mercury__string__Str0_3,
#line 2376 "string.m"
  MR_String * mercury__string__Str_4)
#line 2376 "string.m"
{
#line 2381 "string.m"
  {
#line 2381 "string.m"
    MR_bool mercury__string__succeeded;

#line 2385 "string.m"
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
#line 2385 "string.m"

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

#line 15251 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_4  = Str;
#line 2385 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2381 "string.m"
    return mercury__string__succeeded;
#line 2381 "string.m"
  }
#line 2376 "string.m"
}

#line 2308 "string.m"
MR_bool MR_CALL 
mercury__string__index_check_2_p_0(
#line 2308 "string.m"
  MR_Integer mercury__string__Index_1,
#line 2308 "string.m"
  MR_Integer mercury__string__Length_2)
#line 2308 "string.m"
{
#line 2310 "string.m"
  {
#line 2310 "string.m"
    MR_bool mercury__string__succeeded;

#line 2314 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_check_2_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_1 ;
	Length =  mercury__string__Length_2 ;
		{
#line 2314 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 15304 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2314 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2310 "string.m"
    return mercury__string__succeeded;
#line 2310 "string.m"
  }
#line 2308 "string.m"
}

#line 2054 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_index_2_3_p_0(
#line 2054 "string.m"
  MR_String mercury__string__Str_1,
#line 2054 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2054 "string.m"
  MR_Char * mercury__string__Ch_3)
#line 2054 "string.m"
{
#line 2056 "string.m"
  {
#line 2056 "string.m"
    MR_bool mercury__string__succeeded;

#line 2060 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 2060 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 15357 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Ch_3  = Ch;
#line 2060 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2056 "string.m"
    return mercury__string__succeeded;
#line 2056 "string.m"
  }
#line 2054 "string.m"
}

#line 1980 "string.m"
MR_bool MR_CALL 
mercury__string__decode_utf16_3_p_0(
#line 1980 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1980 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1980 "string.m"
  MR_Word * mercury__string__RevChars_3)
#line 1980 "string.m"
{
#line 1983 "string.m"
  while (MR_TRUE)
#line 1983 "string.m"
    {
#line 1983 "string.m"
      /* tailcall optimized into a loop */
#line 1983 "string.m"
      {
#line 1983 "string.m"
        MR_bool mercury__string__succeeded;

#line 1983 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1983 "string.m"
          {
#line 1983 "string.m"
            *mercury__string__RevChars_3 = mercury__string__HeadVar__2_2;
#line 1983 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 1983 "string.m"
          }
#line 1983 "string.m"
        else
#line 1984 "string.m"
          {
#line 1984 "string.m"
            MR_Integer mercury__string__A_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1984 "string.m"
            MR_Word mercury__string__FollowA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 1984 "string.m"
            MR_Integer mercury__string__CharInt_9;
#line 1984 "string.m"
            MR_Word mercury__string__Rest_10;
#line 1984 "string.m"
            MR_Char mercury__string__Char_12;
#line 1984 "string.m"
            MR_Word mercury__string__V_23_23;

#line 1985 "string.m"
            mercury__string__succeeded = (mercury__string__A_5 < (MR_Integer) 0);
#line 1987 "string.m"
            if (mercury__string__succeeded)
#line 1986 "string.m"
              mercury__string__succeeded = MR_FALSE;
#line 1987 "string.m"
            else
#line 1990 "string.m"
              {
#line 1987 "string.m"
                mercury__string__succeeded = (mercury__string__A_5 < (MR_Integer) 55296);
#line 1990 "string.m"
                if (mercury__string__succeeded)
#line 1988 "string.m"
                  {
#line 1988 "string.m"
                    mercury__string__CharInt_9 = mercury__string__A_5;
#line 1989 "string.m"
                    mercury__string__Rest_10 = mercury__string__FollowA_6;
#line 1988 "string.m"
                    mercury__string__succeeded = MR_TRUE;
#line 1988 "string.m"
                  }
#line 1990 "string.m"
                else
#line 1995 "string.m"
                  {
#line 1990 "string.m"
                    mercury__string__succeeded = (mercury__string__A_5 < (MR_Integer) 56320);
#line 1995 "string.m"
                    if (mercury__string__succeeded)
#line 1991 "string.m"
                      {
#line 1991 "string.m"
                        MR_Integer mercury__string__B_11;
#line 1991 "string.m"
                        MR_Integer mercury__string__V_16_16;
#line 1991 "string.m"
                        MR_Integer mercury__string__V_17_17;
#line 1991 "string.m"
                        MR_Integer mercury__string__V_18_18;
#line 1991 "string.m"
                        MR_Integer mercury__string__V_19_19;
#line 1991 "string.m"
                        MR_Integer mercury__string__V_20_20;
#line 1991 "string.m"
                        MR_Integer mercury__string__V_21_21;

#line 1991 "string.m"
                        mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__FollowA_6)) == (MR_mktag((MR_Integer) 1)));
#line 1991 "string.m"
                        if (mercury__string__succeeded)
#line 1991 "string.m"
                          {
#line 1991 "string.m"
                            mercury__string__B_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 0)));
#line 1991 "string.m"
                            mercury__string__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 1)));
#line 1992 "string.m"
                            mercury__string__V_16_16 = (MR_Integer) 56320;
#line 1992 "string.m"
                            mercury__string__succeeded = (mercury__string__B_11 >= mercury__string__V_16_16);
#line 1991 "string.m"
                            if (mercury__string__succeeded)
#line 1991 "string.m"
                              {
#line 1993 "string.m"
                                mercury__string__V_17_17 = (MR_Integer) 57343;
#line 1993 "string.m"
                                mercury__string__succeeded = (mercury__string__B_11 <= mercury__string__V_17_17);
#line 1991 "string.m"
                                if (mercury__string__succeeded)
#line 1991 "string.m"
                                  {
#line 1994 "string.m"
                                    mercury__string__V_20_20 = (MR_Integer) 10;
#line 1994 "string.m"
                                    {
#line 1994 "string.m"
                                      mercury__string__V_19_19 = mercury__int__f_60_60_2_f_0(mercury__string__A_5, mercury__string__V_20_20);
                                    }
#line 1994 "string.m"
                                    mercury__string__V_18_18 = (mercury__string__V_19_19 + mercury__string__B_11);
#line 1994 "string.m"
                                    mercury__string__V_21_21 = (MR_Integer) 56613888;
#line 1994 "string.m"
                                    mercury__string__CharInt_9 = (mercury__string__V_18_18 - mercury__string__V_21_21);
#line 1994 "string.m"
                                    mercury__string__succeeded = MR_TRUE;
#line 1991 "string.m"
                                  }
#line 1991 "string.m"
                              }
#line 1991 "string.m"
                          }
#line 1991 "string.m"
                      }
#line 1995 "string.m"
                    else
#line 1998 "string.m"
                      {
#line 1995 "string.m"
                        mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 65535);
#line 1998 "string.m"
                        if (mercury__string__succeeded)
#line 1998 "string.m"
                          {
#line 1996 "string.m"
                            mercury__string__CharInt_9 = mercury__string__A_5;
#line 1997 "string.m"
                            mercury__string__Rest_10 = mercury__string__FollowA_6;
#line 1997 "string.m"
                            mercury__string__succeeded = MR_TRUE;
#line 1998 "string.m"
                          }
#line 1998 "string.m"
                      }
#line 1995 "string.m"
                  }
#line 1990 "string.m"
              }
#line 1984 "string.m"
            if (mercury__string__succeeded)
#line 1984 "string.m"
              {
#line 103 "char.opt"
{
#define MR_PROC_LABEL mercury__string__decode_utf16_3_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__string__CharInt_9 ;
		{
#line 103 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 15564 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Char_12  = Character;
#line 103 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1984 "string.m"
                if (mercury__string__succeeded)
#line 1984 "string.m"
                  {
#line 2002 "string.m"
                    {
#line 2002 "string.m"
                      mercury__string__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2002 "string.m"
                      MR_hl_field(MR_mktag(1), mercury__string__V_23_23, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_12));
#line 2002 "string.m"
                      MR_hl_field(MR_mktag(1), mercury__string__V_23_23, 1) = ((MR_Box) (mercury__string__HeadVar__2_2));
#line 2002 "string.m"
                    }
#line 2002 "string.m"
                    /* direct tailcall eliminated */
#line 2002 "string.m"
                    {
#line 2002 "string.m"
                      MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__Rest_10;
#line 2002 "string.m"
                      MR_Word mercury__string__HeadVar__2__tmp_copy_2 = mercury__string__V_23_23;

#line 2002 "string.m"
                      mercury__string__HeadVar__2_2 = mercury__string__HeadVar__2__tmp_copy_2;
#line 2002 "string.m"
                      mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 2002 "string.m"
                    }
#line 2002 "string.m"
                    continue;
#line 1984 "string.m"
                  }
#line 1984 "string.m"
              }
#line 1984 "string.m"
          }
#line 1983 "string.m"
        return mercury__string__succeeded;
#line 1983 "string.m"
      }
#line 1983 "string.m"
      break;
#line 1983 "string.m"
    }
#line 1980 "string.m"
}

#line 1965 "string.m"
MR_bool MR_CALL 
mercury__string__utf8_is_trail_byte_1_p_0(
#line 1965 "string.m"
  MR_Integer mercury__string__C_2)
#line 1965 "string.m"
{
#line 1967 "string.m"
  {
#line 1967 "string.m"
    MR_bool mercury__string__succeeded;
#line 1967 "string.m"
    MR_Integer mercury__string__V_3_3 = (mercury__string__C_2 & (MR_Integer) 192);

#line 1968 "string.m"
    mercury__string__succeeded = (mercury__string__V_3_3 == (MR_Integer) 128);
#line 1967 "string.m"
    return mercury__string__succeeded;
#line 1967 "string.m"
  }
#line 1965 "string.m"
}

#line 1924 "string.m"
MR_bool MR_CALL 
mercury__string__decode_utf8_3_p_0(
#line 1924 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1924 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1924 "string.m"
  MR_Word * mercury__string__RevChars_3)
#line 1924 "string.m"
{
#line 1926 "string.m"
  while (MR_TRUE)
#line 1926 "string.m"
    {
#line 1926 "string.m"
      /* tailcall optimized into a loop */
#line 1926 "string.m"
      {
#line 1926 "string.m"
        MR_bool mercury__string__succeeded;

#line 1926 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1926 "string.m"
          {
#line 1926 "string.m"
            *mercury__string__RevChars_3 = mercury__string__HeadVar__2_2;
#line 1926 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 1926 "string.m"
          }
#line 1926 "string.m"
        else
#line 1927 "string.m"
          {
#line 1927 "string.m"
            MR_Integer mercury__string__A_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1927 "string.m"
            MR_Word mercury__string__FollowA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 1927 "string.m"
            MR_Integer mercury__string__CharInt_9;
#line 1927 "string.m"
            MR_Word mercury__string__Rest_10;
#line 1927 "string.m"
            MR_Char mercury__string__Char_14;
#line 1927 "string.m"
            MR_Word mercury__string__V_60_60;

#line 1928 "string.m"
            mercury__string__succeeded = (mercury__string__A_5 < (MR_Integer) 0);
#line 1930 "string.m"
            if (mercury__string__succeeded)
#line 1929 "string.m"
              mercury__string__succeeded = MR_FALSE;
#line 1930 "string.m"
            else
#line 1933 "string.m"
              {
#line 1930 "string.m"
                mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 127);
#line 1933 "string.m"
                if (mercury__string__succeeded)
#line 1931 "string.m"
                  {
#line 1931 "string.m"
                    mercury__string__CharInt_9 = mercury__string__A_5;
#line 1932 "string.m"
                    mercury__string__Rest_10 = mercury__string__FollowA_6;
#line 1931 "string.m"
                    mercury__string__succeeded = MR_TRUE;
#line 1931 "string.m"
                  }
#line 1933 "string.m"
                else
#line 1935 "string.m"
                  {
#line 1933 "string.m"
                    mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 193);
#line 1935 "string.m"
                    if (mercury__string__succeeded)
#line 1934 "string.m"
                      mercury__string__succeeded = MR_FALSE;
#line 1935 "string.m"
                    else
#line 1941 "string.m"
                      {
#line 1935 "string.m"
                        mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 223);
#line 1941 "string.m"
                        if (mercury__string__succeeded)
#line 1936 "string.m"
                          {
#line 1936 "string.m"
                            MR_Integer mercury__string__B_11;
#line 1936 "string.m"
                            MR_Integer mercury__string__V_19_19;
#line 1936 "string.m"
                            MR_Integer mercury__string__V_20_20;
#line 1936 "string.m"
                            MR_Integer mercury__string__V_21_21;
#line 1936 "string.m"
                            MR_Integer mercury__string__V_22_22;
#line 1936 "string.m"
                            MR_Integer mercury__string__V_23_23;
#line 1936 "string.m"
                            MR_Integer mercury__string__V_24_24;
#line 1936 "string.m"
                            MR_Integer mercury__string__V_25_25;
#line 1936 "string.m"
                            MR_Integer mercury__string__V_68_68;
#line 1936 "string.m"
                            MR_Integer mercury__string__V_69_69;

#line 1936 "string.m"
                            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__FollowA_6)) == (MR_mktag((MR_Integer) 1)));
#line 1936 "string.m"
                            if (mercury__string__succeeded)
#line 1936 "string.m"
                              {
#line 1936 "string.m"
                                mercury__string__B_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 0)));
#line 1936 "string.m"
                                mercury__string__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 1)));
#line 1968 "string.m"
                                mercury__string__V_69_69 = (MR_Integer) 192;
#line 1968 "string.m"
                                mercury__string__V_68_68 = (mercury__string__B_11 & mercury__string__V_69_69);
#line 1968 "string.m"
                                mercury__string__succeeded = (mercury__string__V_68_68 == (MR_Integer) 128);
#line 1936 "string.m"
                                if (mercury__string__succeeded)
#line 1936 "string.m"
                                  {
#line 1938 "string.m"
                                    mercury__string__V_21_21 = (MR_Integer) 31;
#line 1938 "string.m"
                                    mercury__string__V_20_20 = (mercury__string__A_5 & mercury__string__V_21_21);
#line 1938 "string.m"
                                    mercury__string__V_22_22 = (MR_Integer) 6;
#line 1938 "string.m"
                                    {
#line 1938 "string.m"
                                      mercury__string__V_19_19 = mercury__int__f_60_60_2_f_0(mercury__string__V_20_20, mercury__string__V_22_22);
                                    }
#line 1939 "string.m"
                                    mercury__string__V_24_24 = (MR_Integer) 63;
#line 1939 "string.m"
                                    mercury__string__V_23_23 = (mercury__string__B_11 & mercury__string__V_24_24);
#line 1939 "string.m"
                                    mercury__string__CharInt_9 = (mercury__string__V_19_19 | mercury__string__V_23_23);
#line 1940 "string.m"
                                    mercury__string__V_25_25 = (MR_Integer) 128;
#line 1940 "string.m"
                                    mercury__string__succeeded = (mercury__string__CharInt_9 >= mercury__string__V_25_25);
#line 1936 "string.m"
                                  }
#line 1936 "string.m"
                              }
#line 1936 "string.m"
                          }
#line 1941 "string.m"
                        else
#line 1949 "string.m"
                          {
#line 1941 "string.m"
                            mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 239);
#line 1949 "string.m"
                            if (mercury__string__succeeded)
#line 1942 "string.m"
                              {
#line 1942 "string.m"
                                MR_Integer mercury__string__C_12;
#line 1942 "string.m"
                                MR_Word mercury__string__V_27_27;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_28_28;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_29_29;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_30_30;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_31_31;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_32_32;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_33_33;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_34_34;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_35_35;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_36_36;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_37_37;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_38_38;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_39_39;
#line 1942 "string.m"
                                MR_Integer mercury__string__B_61;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_71_71;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_72_72;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_74_74;
#line 1942 "string.m"
                                MR_Integer mercury__string__V_75_75;

#line 1942 "string.m"
                                mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__FollowA_6)) == (MR_mktag((MR_Integer) 1)));
#line 1942 "string.m"
                                if (mercury__string__succeeded)
#line 1942 "string.m"
                                  {
#line 1942 "string.m"
                                    mercury__string__B_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 0)));
#line 1942 "string.m"
                                    mercury__string__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 1)));
#line 1942 "string.m"
                                    mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 1942 "string.m"
                                    if (mercury__string__succeeded)
#line 1942 "string.m"
                                      {
#line 1942 "string.m"
                                        mercury__string__C_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__V_27_27, (MR_Integer) 0)));
#line 1942 "string.m"
                                        mercury__string__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_27_27, (MR_Integer) 1)));
#line 1968 "string.m"
                                        mercury__string__V_72_72 = (MR_Integer) 192;
#line 1968 "string.m"
                                        mercury__string__V_71_71 = (mercury__string__B_61 & mercury__string__V_72_72);
#line 1968 "string.m"
                                        mercury__string__succeeded = (mercury__string__V_71_71 == (MR_Integer) 128);
#line 1942 "string.m"
                                        if (mercury__string__succeeded)
#line 1942 "string.m"
                                          {
#line 1968 "string.m"
                                            mercury__string__V_75_75 = (MR_Integer) 192;
#line 1968 "string.m"
                                            mercury__string__V_74_74 = (mercury__string__C_12 & mercury__string__V_75_75);
#line 1968 "string.m"
                                            mercury__string__succeeded = (mercury__string__V_74_74 == (MR_Integer) 128);
#line 1942 "string.m"
                                            if (mercury__string__succeeded)
#line 1942 "string.m"
                                              {
#line 1945 "string.m"
                                                mercury__string__V_31_31 = (MR_Integer) 15;
#line 1945 "string.m"
                                                mercury__string__V_30_30 = (mercury__string__A_5 & mercury__string__V_31_31);
#line 1945 "string.m"
                                                mercury__string__V_32_32 = (MR_Integer) 12;
#line 1945 "string.m"
                                                {
#line 1945 "string.m"
                                                  mercury__string__V_29_29 = mercury__int__f_60_60_2_f_0(mercury__string__V_30_30, mercury__string__V_32_32);
                                                }
#line 1946 "string.m"
                                                mercury__string__V_35_35 = (MR_Integer) 63;
#line 1946 "string.m"
                                                mercury__string__V_34_34 = (mercury__string__B_61 & mercury__string__V_35_35);
#line 1946 "string.m"
                                                mercury__string__V_36_36 = (MR_Integer) 6;
#line 1946 "string.m"
                                                {
#line 1946 "string.m"
                                                  mercury__string__V_33_33 = mercury__int__f_60_60_2_f_0(mercury__string__V_34_34, mercury__string__V_36_36);
                                                }
#line 1946 "string.m"
                                                mercury__string__V_28_28 = (mercury__string__V_29_29 | mercury__string__V_33_33);
#line 1947 "string.m"
                                                mercury__string__V_38_38 = (MR_Integer) 63;
#line 1947 "string.m"
                                                mercury__string__V_37_37 = (mercury__string__C_12 & mercury__string__V_38_38);
#line 1947 "string.m"
                                                mercury__string__CharInt_9 = (mercury__string__V_28_28 | mercury__string__V_37_37);
#line 1948 "string.m"
                                                mercury__string__V_39_39 = (MR_Integer) 2048;
#line 1948 "string.m"
                                                mercury__string__succeeded = (mercury__string__CharInt_9 >= mercury__string__V_39_39);
#line 1942 "string.m"
                                              }
#line 1942 "string.m"
                                          }
#line 1942 "string.m"
                                      }
#line 1942 "string.m"
                                  }
#line 1942 "string.m"
                              }
#line 1949 "string.m"
                            else
#line 1959 "string.m"
                              {
#line 1959 "string.m"
                                MR_Integer mercury__string__D_13;
#line 1959 "string.m"
                                MR_Word mercury__string__V_41_41;
#line 1959 "string.m"
                                MR_Word mercury__string__V_42_42;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_43_43;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_44_44;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_45_45;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_46_46;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_47_47;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_48_48;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_49_49;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_50_50;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_51_51;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_52_52;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_53_53;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_54_54;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_55_55;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_56_56;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_57_57;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_58_58;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_59_59;
#line 1959 "string.m"
                                MR_Integer mercury__string__B_62;
#line 1959 "string.m"
                                MR_Integer mercury__string__C_63;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_77_77;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_78_78;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_80_80;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_81_81;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_83_83;
#line 1959 "string.m"
                                MR_Integer mercury__string__V_84_84;

#line 1949 "string.m"
                                mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 244);
#line 1959 "string.m"
                                if (mercury__string__succeeded)
#line 1959 "string.m"
                                  {
#line 1950 "string.m"
                                    mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__FollowA_6)) == (MR_mktag((MR_Integer) 1)));
#line 1950 "string.m"
                                    if (mercury__string__succeeded)
#line 1950 "string.m"
                                      {
#line 1950 "string.m"
                                        mercury__string__B_62 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 0)));
#line 1950 "string.m"
                                        mercury__string__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 1)));
#line 1950 "string.m"
                                        mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 1950 "string.m"
                                        if (mercury__string__succeeded)
#line 1950 "string.m"
                                          {
#line 1950 "string.m"
                                            mercury__string__C_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__V_41_41, (MR_Integer) 0)));
#line 1950 "string.m"
                                            mercury__string__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_41_41, (MR_Integer) 1)));
#line 1950 "string.m"
                                            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 1950 "string.m"
                                            if (mercury__string__succeeded)
#line 1950 "string.m"
                                              {
#line 1950 "string.m"
                                                mercury__string__D_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__V_42_42, (MR_Integer) 0)));
#line 1950 "string.m"
                                                mercury__string__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_42_42, (MR_Integer) 1)));
#line 1968 "string.m"
                                                mercury__string__V_78_78 = (MR_Integer) 192;
#line 1968 "string.m"
                                                mercury__string__V_77_77 = (mercury__string__B_62 & mercury__string__V_78_78);
#line 1968 "string.m"
                                                mercury__string__succeeded = (mercury__string__V_77_77 == (MR_Integer) 128);
#line 1959 "string.m"
                                                if (mercury__string__succeeded)
#line 1959 "string.m"
                                                  {
#line 1968 "string.m"
                                                    mercury__string__V_81_81 = (MR_Integer) 192;
#line 1968 "string.m"
                                                    mercury__string__V_80_80 = (mercury__string__C_63 & mercury__string__V_81_81);
#line 1968 "string.m"
                                                    mercury__string__succeeded = (mercury__string__V_80_80 == (MR_Integer) 128);
#line 1959 "string.m"
                                                    if (mercury__string__succeeded)
#line 1959 "string.m"
                                                      {
#line 1968 "string.m"
                                                        mercury__string__V_84_84 = (MR_Integer) 192;
#line 1968 "string.m"
                                                        mercury__string__V_83_83 = (mercury__string__D_13 & mercury__string__V_84_84);
#line 1968 "string.m"
                                                        mercury__string__succeeded = (mercury__string__V_83_83 == (MR_Integer) 128);
#line 1959 "string.m"
                                                        if (mercury__string__succeeded)
#line 1959 "string.m"
                                                          {
#line 1954 "string.m"
                                                            mercury__string__V_47_47 = (MR_Integer) 7;
#line 1954 "string.m"
                                                            mercury__string__V_46_46 = (mercury__string__A_5 & mercury__string__V_47_47);
#line 1954 "string.m"
                                                            mercury__string__V_48_48 = (MR_Integer) 18;
#line 1954 "string.m"
                                                            {
#line 1954 "string.m"
                                                              mercury__string__V_45_45 = mercury__int__f_60_60_2_f_0(mercury__string__V_46_46, mercury__string__V_48_48);
                                                            }
#line 1955 "string.m"
                                                            mercury__string__V_51_51 = (MR_Integer) 63;
#line 1955 "string.m"
                                                            mercury__string__V_50_50 = (mercury__string__B_62 & mercury__string__V_51_51);
#line 1955 "string.m"
                                                            mercury__string__V_52_52 = (MR_Integer) 12;
#line 1955 "string.m"
                                                            {
#line 1955 "string.m"
                                                              mercury__string__V_49_49 = mercury__int__f_60_60_2_f_0(mercury__string__V_50_50, mercury__string__V_52_52);
                                                            }
#line 1955 "string.m"
                                                            mercury__string__V_44_44 = (mercury__string__V_45_45 | mercury__string__V_49_49);
#line 1956 "string.m"
                                                            mercury__string__V_55_55 = (MR_Integer) 63;
#line 1956 "string.m"
                                                            mercury__string__V_54_54 = (mercury__string__C_63 & mercury__string__V_55_55);
#line 1956 "string.m"
                                                            mercury__string__V_56_56 = (MR_Integer) 6;
#line 1956 "string.m"
                                                            {
#line 1956 "string.m"
                                                              mercury__string__V_53_53 = mercury__int__f_60_60_2_f_0(mercury__string__V_54_54, mercury__string__V_56_56);
                                                            }
#line 1956 "string.m"
                                                            mercury__string__V_43_43 = (mercury__string__V_44_44 | mercury__string__V_53_53);
#line 1957 "string.m"
                                                            mercury__string__V_58_58 = (MR_Integer) 63;
#line 1957 "string.m"
                                                            mercury__string__V_57_57 = (mercury__string__D_13 & mercury__string__V_58_58);
#line 1957 "string.m"
                                                            mercury__string__CharInt_9 = (mercury__string__V_43_43 | mercury__string__V_57_57);
#line 1958 "string.m"
                                                            mercury__string__V_59_59 = (MR_Integer) 65536;
#line 1958 "string.m"
                                                            mercury__string__succeeded = (mercury__string__CharInt_9 >= mercury__string__V_59_59);
#line 1959 "string.m"
                                                          }
#line 1959 "string.m"
                                                      }
#line 1959 "string.m"
                                                  }
#line 1950 "string.m"
                                              }
#line 1950 "string.m"
                                          }
#line 1950 "string.m"
                                      }
#line 1959 "string.m"
                                  }
#line 1959 "string.m"
                              }
#line 1949 "string.m"
                          }
#line 1941 "string.m"
                      }
#line 1935 "string.m"
                  }
#line 1933 "string.m"
              }
#line 1927 "string.m"
            if (mercury__string__succeeded)
#line 1927 "string.m"
              {
#line 103 "char.opt"
{
#define MR_PROC_LABEL mercury__string__decode_utf8_3_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__string__CharInt_9 ;
		{
#line 103 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 16156 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Char_14  = Character;
#line 103 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1927 "string.m"
                if (mercury__string__succeeded)
#line 1927 "string.m"
                  {
#line 1963 "string.m"
                    {
#line 1963 "string.m"
                      mercury__string__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "string.m"
                      MR_hl_field(MR_mktag(1), mercury__string__V_60_60, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_14));
#line 1963 "string.m"
                      MR_hl_field(MR_mktag(1), mercury__string__V_60_60, 1) = ((MR_Box) (mercury__string__HeadVar__2_2));
#line 1963 "string.m"
                    }
#line 1963 "string.m"
                    /* direct tailcall eliminated */
#line 1963 "string.m"
                    {
#line 1963 "string.m"
                      MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__Rest_10;
#line 1963 "string.m"
                      MR_Word mercury__string__HeadVar__2__tmp_copy_2 = mercury__string__V_60_60;

#line 1963 "string.m"
                      mercury__string__HeadVar__2_2 = mercury__string__HeadVar__2__tmp_copy_2;
#line 1963 "string.m"
                      mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 1963 "string.m"
                    }
#line 1963 "string.m"
                    continue;
#line 1927 "string.m"
                  }
#line 1927 "string.m"
              }
#line 1927 "string.m"
          }
#line 1926 "string.m"
        return mercury__string__succeeded;
#line 1926 "string.m"
      }
#line 1926 "string.m"
      break;
#line 1926 "string.m"
    }
#line 1924 "string.m"
}

#line 1780 "string.m"
void MR_CALL 
mercury__string__encode_utf16_3_p_0(
#line 1780 "string.m"
  MR_Char mercury__string__Char_4,
#line 1780 "string.m"
  MR_Word mercury__string__CodeList0_5,
#line 1780 "string.m"
  MR_Word * mercury__string__CodeList_6)
#line 1780 "string.m"
{
#line 1785 "string.m"
  {
#line 1785 "string.m"
    MR_bool mercury__string__succeeded;
#line 1785 "string.m"
    MR_Word mercury__string__CharCodes_7;

#line 1783 "string.m"
    {
#line 1783 "string.m"
      mercury__string__succeeded = mercury__char__to_utf16_2_p_0(mercury__string__Char_4, &mercury__string__CharCodes_7);
    }
#line 1785 "string.m"
    if (mercury__string__succeeded)
#line 1784 "string.m"
      {
#line 1784 "string.m"
        MR_Word mercury__string__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 113 "list.opt"
        {
#line 113 "list.opt"
          mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_11_11, mercury__string__CharCodes_7, mercury__string__CodeList0_5, mercury__string__CodeList_6);
#line 113 "list.opt"
          return;
        }
#line 1784 "string.m"
      }
#line 1785 "string.m"
    else
#line 1786 "string.m"
      {
#line 1786 "string.m"
        {
#line 1786 "string.m"
          mercury__require__unexpected_3_p_0((MR_String) "string", (MR_String) "predicate \140string.encode_utf16\'/3", (MR_String) "char.to_utf16 failed");
#line 1786 "string.m"
          return;
        }
#line 1786 "string.m"
      }
#line 1785 "string.m"
  }
#line 1780 "string.m"
}

#line 1762 "string.m"
void MR_CALL 
mercury__string__encode_utf8_3_p_0(
#line 1762 "string.m"
  MR_Char mercury__string__Char_4,
#line 1762 "string.m"
  MR_Word mercury__string__CodeList0_5,
#line 1762 "string.m"
  MR_Word * mercury__string__CodeList_6)
#line 1762 "string.m"
{
#line 1767 "string.m"
  {
#line 1767 "string.m"
    MR_bool mercury__string__succeeded;
#line 1767 "string.m"
    MR_Word mercury__string__CharCodes_7;

#line 1765 "string.m"
    {
#line 1765 "string.m"
      mercury__string__succeeded = mercury__char__to_utf8_2_p_0(mercury__string__Char_4, &mercury__string__CharCodes_7);
    }
#line 1767 "string.m"
    if (mercury__string__succeeded)
#line 1766 "string.m"
      {
#line 1766 "string.m"
        MR_Word mercury__string__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 113 "list.opt"
        {
#line 113 "list.opt"
          mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_11_11, mercury__string__CharCodes_7, mercury__string__CodeList0_5, mercury__string__CodeList_6);
#line 113 "list.opt"
          return;
        }
#line 1766 "string.m"
      }
#line 1767 "string.m"
    else
#line 1768 "string.m"
      {
#line 1768 "string.m"
        {
#line 1768 "string.m"
          mercury__require__unexpected_3_p_0((MR_String) "string", (MR_String) "predicate \140string.encode_utf8\'/3", (MR_String) "char.to_utf8 failed");
#line 1768 "string.m"
          return;
        }
#line 1768 "string.m"
      }
#line 1767 "string.m"
  }
#line 1762 "string.m"
}

#line 1741 "string.m"
void MR_CALL 
mercury__string__to_code_unit_list_loop_4_p_0(
#line 1741 "string.m"
  MR_String mercury__string__String_5,
#line 1741 "string.m"
  MR_Integer mercury__string__Index_6,
#line 1741 "string.m"
  MR_Integer mercury__string__End_7,
#line 1741 "string.m"
  MR_Word * mercury__string__List_8)
#line 1741 "string.m"
{
#line 1747 "string.m"
  {
#line 1747 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Index_6 >= mercury__string__End_7);

#line 1747 "string.m"
    if (mercury__string__succeeded)
#line 1746 "string.m"
      *mercury__string__List_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1747 "string.m"
    else
#line 1748 "string.m"
      {
#line 1748 "string.m"
        MR_Integer mercury__string__Code_9;
#line 1748 "string.m"
        MR_Word mercury__string__Tail_10;
#line 1748 "string.m"
        MR_Integer mercury__string__V_11_11;

#line 2340 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Index_6 ;
		{
#line 2340 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 16377 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Code_9  = Code;
#line 2340 "string.m"
}
#line 1749 "string.m"
        mercury__string__V_11_11 = (mercury__string__Index_6 + (MR_Integer) 1);
#line 1749 "string.m"
        {
#line 1749 "string.m"
          mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_5, mercury__string__V_11_11, mercury__string__End_7, &mercury__string__Tail_10);
        }
#line 1750 "string.m"
        {
#line 1750 "string.m"
          MR_Word base;
#line 1750 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1750 "string.m"
          *mercury__string__List_8 = base;
#line 1750 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Code_9));
#line 1750 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Tail_10));
#line 1750 "string.m"
        }
#line 1748 "string.m"
      }
#line 1747 "string.m"
  }
#line 1741 "string.m"
}

#line 1412 "string.m"
void MR_CALL 
mercury__string__to_char_list_forward_2_p_0(
#line 1412 "string.m"
  MR_String mercury__string__Str_1,
#line 1412 "string.m"
  MR_Word * mercury__string__CharList_2)
#line 1412 "string.m"
{
#line 1414 "string.m"
  {
#line 1414 "string.m"
    MR_bool mercury__string__succeeded;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_forward_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
#line 1418 "string.m"
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
#line 16450 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
#line 1418 "string.m"
}
#line 1414 "string.m"
  }
#line 1412 "string.m"
}

#line 1370 "string.m"
MR_bool MR_CALL 
mercury__string__internal_encoding_is_utf8_0_p_0(void)
#line 1370 "string.m"
{
#line 1372 "string.m"
  {
#line 1372 "string.m"
    MR_bool mercury__string__succeeded;

#line 1375 "string.m"
{
#define MR_PROC_LABEL mercury__string__internal_encoding_is_utf8_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1375 "string.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 16483 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1375 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1372 "string.m"
    return mercury__string__succeeded;
#line 1372 "string.m"
  }
#line 1370 "string.m"
}

#line 1321 "string.m"
void MR_CALL 
mercury__string__format_3_p_0(
#line 1321 "string.m"
  MR_String mercury__string__FormatString_4,
#line 1321 "string.m"
  MR_Word mercury__string__PolyList_5,
#line 1321 "string.m"
  MR_String * mercury__string__String_6)
#line 1321 "string.m"
{
#line 5580 "string.m"
  {
#line 5580 "string.m"
    MR_bool mercury__string__succeeded;

#line 5580 "string.m"
    {
#line 5580 "string.m"
      mercury__string__format__format_impl_3_p_0(mercury__string__FormatString_4, mercury__string__PolyList_5, mercury__string__String_6);
#line 5580 "string.m"
      return;
    }
#line 5580 "string.m"
  }
#line 1321 "string.m"
}

#line 1320 "string.m"
MR_String MR_CALL 
mercury__string__format_2_f_0(
#line 1320 "string.m"
  MR_String mercury__string__S1_4,
#line 1320 "string.m"
  MR_Word mercury__string__PT_5)
#line 1320 "string.m"
{
#line 5580 "string.m"
  {
#line 5580 "string.m"
    MR_bool mercury__string__succeeded;
#line 5580 "string.m"
    MR_String mercury__string__S2_6;

#line 5580 "string.m"
    {
#line 5580 "string.m"
      mercury__string__format__format_impl_3_p_0(mercury__string__S1_4, mercury__string__PT_5, &mercury__string__S2_6);
    }
#line 5580 "string.m"
    return mercury__string__S2_6;
#line 5580 "string.m"
  }
#line 1320 "string.m"
}

#line 1251 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_3(
#line 1251 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1251 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1251 "string.m"
  MR_Box mercury__string__X_7,
#line 1251 "string.m"
  MR_String * mercury__string__String_8)
#line 1251 "string.m"
{
#line 49 "string.to_string.opt"
  {
#line 49 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 49 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_17;
#line 49 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 49 "string.to_string.opt"
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 49 "string.to_string.opt"
    MR_Word mercury__string__V_9_15;
#line 49 "string.to_string.opt"
    MR_Word mercury__string__V_11_16;
#line 49 "string.to_string.opt"
    MR_Integer mercury__string__V_10_23;
#line 49 "string.to_string.opt"
    MR_Integer mercury__string__V_13_24;
#line 16586 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16588 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 16591 "string.c"
    {
#line 16593 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16596 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 56 "string.to_string.opt"
    mercury__string__V_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 59 "string.to_string.opt"
    {
#line 59 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__V_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__V_9_15);
    }
#line 16605 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1040 "list.opt"
    {
#line 1040 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__V_9_15, &mercury__string__V_11_16);
    }
#line 52 "string.to_string.opt"
    {
#line 52 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 49 "string.to_string.opt"
  }
#line 1251 "string.m"
}

#line 1250 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_2(
#line 1250 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1250 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1250 "string.m"
  MR_Box mercury__string__X_7,
#line 1250 "string.m"
  MR_String * mercury__string__String_8)
#line 1250 "string.m"
{
#line 49 "string.to_string.opt"
  {
#line 49 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 49 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_17;
#line 49 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 49 "string.to_string.opt"
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 49 "string.to_string.opt"
    MR_Word mercury__string__V_9_15;
#line 49 "string.to_string.opt"
    MR_Word mercury__string__V_11_16;
#line 49 "string.to_string.opt"
    MR_Integer mercury__string__V_10_23;
#line 49 "string.to_string.opt"
    MR_Integer mercury__string__V_13_24;
#line 16653 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16655 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 16658 "string.c"
    {
#line 16660 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16663 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 56 "string.to_string.opt"
    mercury__string__V_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 59 "string.to_string.opt"
    {
#line 59 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__V_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__V_9_15);
    }
#line 16672 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1040 "list.opt"
    {
#line 1040 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__V_9_15, &mercury__string__V_11_16);
    }
#line 52 "string.to_string.opt"
    {
#line 52 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 49 "string.to_string.opt"
  }
#line 1250 "string.m"
}

#line 1249 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_1(
#line 1249 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1249 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1249 "string.m"
  MR_Box mercury__string__X_7,
#line 1249 "string.m"
  MR_String * mercury__string__String_8)
#line 1249 "string.m"
{
#line 49 "string.to_string.opt"
  {
#line 49 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 49 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_17;
#line 49 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 49 "string.to_string.opt"
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 49 "string.to_string.opt"
    MR_Word mercury__string__V_9_15;
#line 49 "string.to_string.opt"
    MR_Word mercury__string__V_11_16;
#line 49 "string.to_string.opt"
    MR_Integer mercury__string__V_10_23;
#line 49 "string.to_string.opt"
    MR_Integer mercury__string__V_13_24;
#line 16720 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16722 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 16725 "string.c"
    {
#line 16727 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16730 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 56 "string.to_string.opt"
    mercury__string__V_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 59 "string.to_string.opt"
    {
#line 59 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__V_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__V_9_15);
    }
#line 16739 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1040 "list.opt"
    {
#line 1040 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__V_9_15, &mercury__string__V_11_16);
    }
#line 52 "string.to_string.opt"
    {
#line 52 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 49 "string.to_string.opt"
  }
#line 1249 "string.m"
}

#line 1248 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_0(
#line 1248 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1248 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1248 "string.m"
  MR_Box mercury__string__X_7,
#line 1248 "string.m"
  MR_String * mercury__string__String_8)
#line 1248 "string.m"
{
#line 49 "string.to_string.opt"
  {
#line 49 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 49 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_17;
#line 49 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 49 "string.to_string.opt"
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 49 "string.to_string.opt"
    MR_Word mercury__string__V_9_15;
#line 49 "string.to_string.opt"
    MR_Word mercury__string__V_11_16;
#line 49 "string.to_string.opt"
    MR_Integer mercury__string__V_10_23;
#line 49 "string.to_string.opt"
    MR_Integer mercury__string__V_13_24;
#line 16787 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16789 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 16792 "string.c"
    {
#line 16794 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16797 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 56 "string.to_string.opt"
    mercury__string__V_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 59 "string.to_string.opt"
    {
#line 59 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__V_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__V_9_15);
    }
#line 16806 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1040 "list.opt"
    {
#line 1040 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__V_9_15, &mercury__string__V_11_16);
    }
#line 52 "string.to_string.opt"
    {
#line 52 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 49 "string.to_string.opt"
  }
#line 1248 "string.m"
}

#line 1232 "string.m"
MR_String MR_CALL 
mercury__string__string_ops_2_f_0(
#line 1232 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_6,
#line 1232 "string.m"
  MR_Box mercury__string__X_5)
#line 1232 "string.m"
{
#line 45 "string.to_string.opt"
  {
#line 45 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 45 "string.to_string.opt"
    MR_String mercury__string__HeadVar__3_3;
#line 45 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_18;
#line 45 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_27 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 45 "string.to_string.opt"
    MR_Word mercury__string__V_10_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 45 "string.to_string.opt"
    MR_Word mercury__string__V_9_16;
#line 45 "string.to_string.opt"
    MR_Word mercury__string__V_11_17;
#line 45 "string.to_string.opt"
    MR_Integer mercury__string__V_10_24;
#line 45 "string.to_string.opt"
    MR_Integer mercury__string__V_13_25;
#line 16852 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_27, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16854 "string.c"
    MR_Box mercury__string__conv1_V_13_25;

#line 16857 "string.c"
    {
#line 16859 "string.c"
      mercury__string__conv1_V_13_25 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_27), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16862 "string.c"
    mercury__string__V_13_25 = ((MR_Integer) mercury__string__conv1_V_13_25);
#line 56 "string.to_string.opt"
    mercury__string__V_10_24 = (mercury__string__V_13_25 + (MR_Integer) 1);
#line 59 "string.to_string.opt"
    {
#line 59 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_6, (MR_Integer) 1, mercury__string__V_10_24, mercury__string__X_5, mercury__string__V_10_15, &mercury__string__V_9_16);
    }
#line 16871 "string.c"
    mercury__string__TypeCtorInfo_13_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1040 "list.opt"
    {
#line 1040 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_18, mercury__string__V_9_16, &mercury__string__V_11_17);
    }
#line 52 "string.to_string.opt"
    {
#line 52 "string.to_string.opt"
      return mercury__string__HeadVar__3_3 = mercury__string__append_list_1_f_0(mercury__string__V_11_17);
    }
#line 45 "string.to_string.opt"
    return mercury__string__HeadVar__3_3;
#line 45 "string.to_string.opt"
  }
#line 1232 "string.m"
}

#line 1228 "string.m"
MR_String MR_CALL 
mercury__string__string_1_f_0(
#line 1228 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_4,
#line 1228 "string.m"
  MR_Box mercury__string__X_3)
#line 1228 "string.m"
{
#line 40 "string.to_string.opt"
  {
#line 40 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 40 "string.to_string.opt"
    MR_String mercury__string__HeadVar__2_2;
#line 40 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_16;
#line 40 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_25;
#line 40 "string.to_string.opt"
    MR_Word mercury__string__V_10_13;
#line 40 "string.to_string.opt"
    MR_Word mercury__string__V_9_14;
#line 40 "string.to_string.opt"
    MR_Word mercury__string__V_11_15;
#line 40 "string.to_string.opt"
    MR_Integer mercury__string__V_10_22;
#line 40 "string.to_string.opt"
    MR_Integer mercury__string__V_13_23;
#line 16919 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);
#line 16921 "string.c"
    MR_Box mercury__string__conv1_V_13_23;

#line 45 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 50 "string.to_string.opt"
    mercury__string__V_10_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 16928 "string.c"
    mercury__string__TypeClassInfo_for_op_table_25 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 16930 "string.c"
    mercury__string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16932 "string.c"
    {
#line 16934 "string.c"
      mercury__string__conv1_V_13_23 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_25), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16937 "string.c"
    mercury__string__V_13_23 = ((MR_Integer) mercury__string__conv1_V_13_23);
#line 56 "string.to_string.opt"
    mercury__string__V_10_22 = (mercury__string__V_13_23 + (MR_Integer) 1);
#line 59 "string.to_string.opt"
    {
#line 59 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_4, (MR_Integer) 1, mercury__string__V_10_22, mercury__string__X_3, mercury__string__V_10_13, &mercury__string__V_9_14);
    }
#line 16946 "string.c"
    mercury__string__TypeCtorInfo_13_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1040 "list.opt"
    {
#line 1040 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_16, mercury__string__V_9_14, &mercury__string__V_11_15);
    }
#line 52 "string.to_string.opt"
    {
#line 52 "string.to_string.opt"
      return mercury__string__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__string__V_11_15);
    }
#line 40 "string.to_string.opt"
    return mercury__string__HeadVar__2_2;
#line 40 "string.to_string.opt"
  }
#line 1228 "string.m"
}

#line 1218 "string.m"
MR_String MR_CALL 
mercury__string__from_c_pointer_1_f_0(
#line 1218 "string.m"
  MR_Word mercury__string__P_3)
#line 1218 "string.m"
{
#line 5553 "string.m"
  {
#line 5553 "string.m"
    MR_bool mercury__string__succeeded;
#line 5553 "string.m"
    MR_String mercury__string__S_4;
#line 5553 "string.m"
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
#line 5553 "string.m"
    MR_String mercury__string__V_9_9;
#line 5553 "string.m"
    MR_String mercury__string__V_10_10;

#line 5318 "string.m"
    {
#line 5318 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__V_10_10);
    }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_10_10 ;
	S2 =  (MR_String) ")" ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 17010 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = S3;
#line 3390 "string.m"
}
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 17037 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
#line 3390 "string.m"
}
#line 5553 "string.m"
    return mercury__string__S_4;
#line 5553 "string.m"
  }
#line 1218 "string.m"
}

#line 1214 "string.m"
void MR_CALL 
mercury__string__c_pointer_to_string_2_p_0(
#line 1214 "string.m"
  MR_Word mercury__string__C_Pointer_3,
#line 1214 "string.m"
  MR_String * mercury__string__Str_4)
#line 1214 "string.m"
{
#line 5553 "string.m"
  {
#line 5553 "string.m"
    MR_bool mercury__string__succeeded;
#line 5553 "string.m"
    MR_Integer mercury__string__Int_5 = (MR_Integer) mercury__string__C_Pointer_3;
#line 5553 "string.m"
    MR_String mercury__string__V_7_7;
#line 5553 "string.m"
    MR_String mercury__string__V_8_8;

#line 5318 "string.m"
    {
#line 5318 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_5, (MR_Integer) 16, &mercury__string__V_8_8);
    }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_8_8 ;
	S2 =  (MR_String) ")" ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 17096 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = S3;
#line 3390 "string.m"
}
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_7_7 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 17123 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = S3;
#line 3390 "string.m"
}
#line 5553 "string.m"
  }
#line 1214 "string.m"
}

#line 1213 "string.m"
MR_String MR_CALL 
mercury__string__c_pointer_to_string_1_f_0(
#line 1213 "string.m"
  MR_Word mercury__string__P_3)
#line 1213 "string.m"
{
#line 5553 "string.m"
  {
#line 5553 "string.m"
    MR_bool mercury__string__succeeded;
#line 5553 "string.m"
    MR_String mercury__string__S_4;
#line 5553 "string.m"
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
#line 5553 "string.m"
    MR_String mercury__string__V_9_9;
#line 5553 "string.m"
    MR_String mercury__string__V_10_10;

#line 5318 "string.m"
    {
#line 5318 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__V_10_10);
    }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_10_10 ;
	S2 =  (MR_String) ")" ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 17180 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = S3;
#line 3390 "string.m"
}
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 17207 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
#line 3390 "string.m"
}
#line 5553 "string.m"
    return mercury__string__S_4;
#line 5553 "string.m"
  }
#line 1213 "string.m"
}

#line 1208 "string.m"
MR_String MR_CALL 
mercury__string__from_float_1_f_0(
#line 1208 "string.m"
  MR_Float mercury__string__Float_3)
#line 1208 "string.m"
{
#line 5425 "string.m"
  {
#line 5425 "string.m"
    MR_bool mercury__string__succeeded;
#line 5425 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5429 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_float_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
#line 5429 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 17252 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Str;
#line 5429 "string.m"
}
#line 5425 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5425 "string.m"
  }
#line 1208 "string.m"
}

#line 1204 "string.m"
void MR_CALL 
mercury__string__float_to_string_2_p_0(
#line 1204 "string.m"
  MR_Float mercury__string__Flt_1,
#line 1204 "string.m"
  MR_String * mercury__string__Str_2)
#line 1204 "string.m"
{
#line 5425 "string.m"
  {
#line 5425 "string.m"
    MR_bool mercury__string__succeeded;

#line 5429 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Flt_1 ;
		{
#line 5429 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 17297 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_2  = Str;
#line 5429 "string.m"
}
#line 5425 "string.m"
  }
#line 1204 "string.m"
}

#line 1203 "string.m"
MR_String MR_CALL 
mercury__string__float_to_string_1_f_0(
#line 1203 "string.m"
  MR_Float mercury__string__Float_3)
#line 1203 "string.m"
{
#line 5425 "string.m"
  {
#line 5425 "string.m"
    MR_bool mercury__string__succeeded;
#line 5425 "string.m"
    MR_String mercury__string__S2_4;

#line 5429 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
#line 5429 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 17340 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_4  = Str;
#line 5429 "string.m"
}
#line 5425 "string.m"
    return mercury__string__S2_4;
#line 5425 "string.m"
  }
#line 1203 "string.m"
}

#line 1193 "string.m"
MR_String MR_CALL 
mercury__string__int_to_base_string_group_4_f_0(
#line 1193 "string.m"
  MR_Integer mercury__string__N_6,
#line 1193 "string.m"
  MR_Integer mercury__string__Base_7,
#line 1193 "string.m"
  MR_Integer mercury__string__GroupLength_8,
#line 1193 "string.m"
  MR_String mercury__string__Sep_9)
#line 1193 "string.m"
{
#line 5364 "string.m"
  {
#line 5364 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_7);
#line 5364 "string.m"
    MR_String mercury__string__Str_10;
#line 5365 "string.m"
    MR_Integer mercury__string__V_12_12;

#line 5365 "string.m"
    if (mercury__string__succeeded)
#line 5365 "string.m"
      {
#line 5365 "string.m"
        mercury__string__V_12_12 = (MR_Integer) 36;
#line 5365 "string.m"
        mercury__string__succeeded = (mercury__string__Base_7 <= mercury__string__V_12_12);
#line 5365 "string.m"
      }
#line 5367 "string.m"
    if (mercury__string__succeeded)
#line 5366 "string.m"
      {
#line 5366 "string.m"
      }
#line 5367 "string.m"
    else
#line 5368 "string.m"
      {
#line 5368 "string.m"
        {
#line 5368 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.int_to_base_string_group: invalid base");
        }
#line 5368 "string.m"
      }
#line 5370 "string.m"
    {
#line 5370 "string.m"
      mercury__string__int_to_base_string_group_1_5_p_0(mercury__string__N_6, mercury__string__Base_7, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str_10);
    }
#line 5364 "string.m"
    return mercury__string__Str_10;
#line 5364 "string.m"
  }
#line 1193 "string.m"
}

#line 1180 "string.m"
MR_String MR_CALL 
mercury__string__int_to_string_thousands_1_f_0(
#line 1180 "string.m"
  MR_Integer mercury__string__N_3)
#line 1180 "string.m"
{
#line 5361 "string.m"
  {
#line 5361 "string.m"
    MR_bool mercury__string__succeeded;
#line 5361 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5362 "string.m"
    {
#line 5362 "string.m"
      return mercury__string__HeadVar__2_2 = mercury__string__int_to_base_string_group_4_f_0(mercury__string__N_3, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
#line 5361 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5361 "string.m"
  }
#line 1180 "string.m"
}

#line 1176 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_3_p_0(
#line 1176 "string.m"
  MR_Integer mercury__string__N_4,
#line 1176 "string.m"
  MR_Integer mercury__string__Base_5,
#line 1176 "string.m"
  MR_String * mercury__string__Str_6)
#line 1176 "string.m"
{
#line 5320 "string.m"
  {
#line 5320 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_5);
#line 5321 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 5321 "string.m"
    if (mercury__string__succeeded)
#line 5321 "string.m"
      {
#line 5321 "string.m"
        mercury__string__V_8_8 = (MR_Integer) 36;
#line 5321 "string.m"
        mercury__string__succeeded = (mercury__string__Base_5 <= mercury__string__V_8_8);
#line 5321 "string.m"
      }
#line 5323 "string.m"
    if (mercury__string__succeeded)
#line 5322 "string.m"
      {
#line 5322 "string.m"
      }
#line 5323 "string.m"
    else
#line 5324 "string.m"
      {
#line 5324 "string.m"
        {
#line 5324 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.int_to_base_string: invalid base");
#line 5324 "string.m"
          return;
        }
#line 5324 "string.m"
      }
#line 5326 "string.m"
    {
#line 5326 "string.m"
      mercury__string__int_to_base_string_1_3_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__Str_6);
#line 5326 "string.m"
      return;
    }
#line 5320 "string.m"
  }
#line 1176 "string.m"
}

#line 1175 "string.m"
MR_String MR_CALL 
mercury__string__int_to_base_string_2_f_0(
#line 1175 "string.m"
  MR_Integer mercury__string__N1_4,
#line 1175 "string.m"
  MR_Integer mercury__string__N2_5)
#line 1175 "string.m"
{
#line 5318 "string.m"
  {
#line 5318 "string.m"
    MR_bool mercury__string__succeeded;
#line 5318 "string.m"
    MR_String mercury__string__S2_6;

#line 5318 "string.m"
    {
#line 5318 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N1_4, mercury__string__N2_5, &mercury__string__S2_6);
    }
#line 5318 "string.m"
    return mercury__string__S2_6;
#line 5318 "string.m"
  }
#line 1175 "string.m"
}

#line 1166 "string.m"
MR_String MR_CALL 
mercury__string__from_int_1_f_0(
#line 1166 "string.m"
  MR_Integer mercury__string__N_3)
#line 1166 "string.m"
{
#line 5309 "string.m"
  {
#line 5309 "string.m"
    MR_bool mercury__string__succeeded;
#line 5309 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5310 "string.m"
    {
#line 5310 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__HeadVar__2_2);
    }
#line 5309 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5309 "string.m"
  }
#line 1166 "string.m"
}

#line 1162 "string.m"
void MR_CALL 
mercury__string__int_to_string_2_p_0(
#line 1162 "string.m"
  MR_Integer mercury__string__N_3,
#line 1162 "string.m"
  MR_String * mercury__string__Str_4)
#line 1162 "string.m"
{
#line 5309 "string.m"
  {
#line 5309 "string.m"
    MR_bool mercury__string__succeeded;

#line 5310 "string.m"
    {
#line 5310 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, mercury__string__Str_4);
#line 5310 "string.m"
      return;
    }
#line 5309 "string.m"
  }
#line 1162 "string.m"
}

#line 1161 "string.m"
MR_String MR_CALL 
mercury__string__int_to_string_1_f_0(
#line 1161 "string.m"
  MR_Integer mercury__string__N_3)
#line 1161 "string.m"
{
#line 5309 "string.m"
  {
#line 5309 "string.m"
    MR_bool mercury__string__succeeded;
#line 5309 "string.m"
    MR_String mercury__string__S1_4;

#line 5310 "string.m"
    {
#line 5310 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__S1_4);
    }
#line 5309 "string.m"
    return mercury__string__S1_4;
#line 5309 "string.m"
  }
#line 1161 "string.m"
}

#line 1157 "string.m"
MR_String MR_CALL 
mercury__string__from_char_1_f_0(
#line 1157 "string.m"
  MR_Char mercury__string__Char_3)
#line 1157 "string.m"
{
#line 5299 "string.m"
  {
#line 5299 "string.m"
    MR_bool mercury__string__succeeded;
#line 5299 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 5299 "string.m"
    MR_Word mercury__string__V_8_8;
#line 5299 "string.m"
    MR_Word mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1496 "string.m"
    MR_String mercury__string__Str0_18;

#line 5300 "string.m"
    {
#line 5300 "string.m"
      mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5300 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_3));
#line 5300 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 5300 "string.m"
    }
#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_8_8, &mercury__string__Str0_18);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      mercury__string__HeadVar__2_2 = mercury__string__Str0_18;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1497 "string.m"
      }
#line 5299 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5299 "string.m"
  }
#line 1157 "string.m"
}

#line 1153 "string.m"
MR_bool MR_CALL 
mercury__string__char_to_string_2_p_1(
#line 1153 "string.m"
  MR_Char * mercury__string__Char_3,
#line 1153 "string.m"
  MR_String mercury__string__String_4)
#line 1153 "string.m"
{
#line 5299 "string.m"
  {
#line 5299 "string.m"
    MR_bool mercury__string__succeeded;
#line 5299 "string.m"
    MR_Word mercury__string__TypeInfo_8_8;
#line 5299 "string.m"
    MR_Word mercury__string__V_5_5;
#line 5299 "string.m"
    MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5299 "string.m"
    MR_Word mercury__string__V_7_7;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__char_to_string_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__String_4 ;
		{
#line 1418 "string.m"
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
#line 17709 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_5_5  = CharList;
#line 1418 "string.m"
}
#line 5300 "string.m"
    mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 5300 "string.m"
    if (mercury__string__succeeded)
#line 5300 "string.m"
      {
#line 5300 "string.m"
        *mercury__string__Char_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_5_5, (MR_Integer) 0)));
#line 5300 "string.m"
        mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_5_5, (MR_Integer) 1)));
#line 17726 "string.c"
        mercury__string__TypeInfo_8_8 = (MR_Word) &mercury__string_scalar_common_1[2];
#line 5300 "string.m"
        {
#line 5300 "string.m"
          return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_8_8, ((MR_Box) (mercury__string__V_6_6)), ((MR_Box) (mercury__string__V_7_7)));
        }
#line 5300 "string.m"
      }
#line 5299 "string.m"
    return mercury__string__succeeded;
#line 5299 "string.m"
  }
#line 1153 "string.m"
}

#line 1152 "string.m"
void MR_CALL 
mercury__string__char_to_string_2_p_0(
#line 1152 "string.m"
  MR_Char mercury__string__Char_3,
#line 1152 "string.m"
  MR_String * mercury__string__String_4)
#line 1152 "string.m"
{
#line 5299 "string.m"
  {
#line 5299 "string.m"
    MR_bool mercury__string__succeeded;
#line 5299 "string.m"
    MR_Word mercury__string__V_5_5;
#line 5299 "string.m"
    MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1496 "string.m"
    MR_String mercury__string__Str0_15;

#line 5300 "string.m"
    {
#line 5300 "string.m"
      mercury__string__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5300 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_5_5, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_3));
#line 5300 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_5_5, 1) = ((MR_Box) (mercury__string__V_6_6));
#line 5300 "string.m"
    }
#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_5_5, &mercury__string__Str0_15);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      *mercury__string__String_4 = mercury__string__Str0_15;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1497 "string.m"
          return;
        }
#line 1497 "string.m"
      }
#line 5299 "string.m"
  }
#line 1152 "string.m"
}

#line 1150 "string.m"
MR_String MR_CALL 
mercury__string__char_to_string_1_f_0(
#line 1150 "string.m"
  MR_Char mercury__string__C_3)
#line 1150 "string.m"
{
#line 5299 "string.m"
  {
#line 5299 "string.m"
    MR_bool mercury__string__succeeded;
#line 5299 "string.m"
    MR_String mercury__string__S1_4;
#line 5299 "string.m"
    MR_Word mercury__string__V_7_7;
#line 5299 "string.m"
    MR_Word mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1496 "string.m"
    MR_String mercury__string__Str0_17;

#line 5300 "string.m"
    {
#line 5300 "string.m"
      mercury__string__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5300 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 0) = ((MR_Box) (MR_Word) (mercury__string__C_3));
#line 5300 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 1) = ((MR_Box) (mercury__string__V_8_8));
#line 5300 "string.m"
    }
#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_7_7, &mercury__string__Str0_17);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      mercury__string__S1_4 = mercury__string__Str0_17;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1497 "string.m"
      }
#line 5299 "string.m"
    return mercury__string__S1_4;
#line 5299 "string.m"
  }
#line 1150 "string.m"
}

#line 1139 "string.m"
MR_Float MR_CALL 
mercury__string__det_to_float_1_f_0(
#line 1139 "string.m"
  MR_String mercury__string__FloatString_3)
#line 1139 "string.m"
{
#line 5290 "string.m"
  {
#line 5290 "string.m"
    MR_bool mercury__string__succeeded;
#line 5290 "string.m"
    MR_Float mercury__string__Float_4;
#line 5290 "string.m"
    MR_Float mercury__string__FloatPrime_5;

#line 5182 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_to_float_1_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_3 ;
		{
#line 5182 "string.m"
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
#line 17894 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__FloatPrime_5  = FloatVal;
#line 5182 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5290 "string.m"
    if (mercury__string__succeeded)
#line 5289 "string.m"
      mercury__string__Float_4 = mercury__string__FloatPrime_5;
#line 5290 "string.m"
    else
#line 5291 "string.m"
      {
#line 5291 "string.m"
        {
#line 5291 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_to_float/1: conversion failed.");
        }
#line 5291 "string.m"
      }
#line 5290 "string.m"
    return mercury__string__Float_4;
#line 5290 "string.m"
  }
#line 1139 "string.m"
}

#line 1133 "string.m"
MR_bool MR_CALL 
mercury__string__to_float_2_p_0(
#line 1133 "string.m"
  MR_String mercury__string__FloatString_1,
#line 1133 "string.m"
  MR_Float * mercury__string__FloatVal_2)
#line 1133 "string.m"
{
#line 5178 "string.m"
  {
#line 5178 "string.m"
    MR_bool mercury__string__succeeded;

#line 5182 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_float_2_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_1 ;
		{
#line 5182 "string.m"
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
#line 17962 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__FloatVal_2  = FloatVal;
#line 5182 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5178 "string.m"
    return mercury__string__succeeded;
#line 5178 "string.m"
  }
#line 1133 "string.m"
}

#line 1127 "string.m"
MR_Integer MR_CALL 
mercury__string__det_base_string_to_int_2_f_0(
#line 1127 "string.m"
  MR_Integer mercury__string__Base_4,
#line 1127 "string.m"
  MR_String mercury__string__S_5)
#line 1127 "string.m"
{
#line 5150 "string.m"
  {
#line 5150 "string.m"
    MR_bool mercury__string__succeeded;
#line 5150 "string.m"
    MR_Integer mercury__string__N_6;
#line 5150 "string.m"
    MR_Integer mercury__string__N0_7;

#line 5148 "string.m"
    {
#line 5148 "string.m"
      mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__string__Base_4, mercury__string__S_5, &mercury__string__N0_7);
    }
#line 5150 "string.m"
    if (mercury__string__succeeded)
#line 5149 "string.m"
      mercury__string__N_6 = mercury__string__N0_7;
#line 5150 "string.m"
    else
#line 5151 "string.m"
      {
#line 5151 "string.m"
        {
#line 5151 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_base_string_to_int: conversion failed");
        }
#line 5151 "string.m"
      }
#line 5150 "string.m"
    return mercury__string__N_6;
#line 5150 "string.m"
  }
#line 1127 "string.m"
}

#line 1120 "string.m"
MR_bool MR_CALL 
mercury__string__base_string_to_int_3_p_0(
#line 1120 "string.m"
  MR_Integer mercury__string__Base_4,
#line 1120 "string.m"
  MR_String mercury__string__String_5,
#line 1120 "string.m"
  MR_Integer * mercury__string__Int_6)
#line 1120 "string.m"
{
#line 5134 "string.m"
  {
#line 5134 "string.m"
    MR_bool mercury__string__succeeded;
#line 5134 "string.m"
    MR_Char mercury__string__Char_7;
#line 5134 "string.m"
    MR_Integer mercury__string__End_8;
#line 5134 "string.m"
    MR_Integer mercury__string__Len_36;
#line 2050 "string.m"
    MR_Char mercury__string__CharPrime_48;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 18061 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_36  = Length;
#line 2580 "string.m"
}
#line 2314 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__string__Len_36 ;
		{
#line 2314 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 18090 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2314 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5134 "string.m"
    if (mercury__string__succeeded)
#line 5134 "string.m"
      {
#line 2060 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  (MR_Integer) 0 ;
		{
#line 2060 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 18124 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_48  = Ch;
#line 2060 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2050 "string.m"
        if (mercury__string__succeeded)
#line 2049 "string.m"
          mercury__string__Char_7 = mercury__string__CharPrime_48;
#line 2050 "string.m"
        else
#line 2051 "string.m"
          {
#line 2051 "string.m"
            {
#line 2051 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 2051 "string.m"
          }
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 18162 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_8  = Length;
#line 2580 "string.m"
}
#line 5137 "string.m"
        mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 45);
#line 5140 "string.m"
        if (mercury__string__succeeded)
#line 5138 "string.m"
          {
#line 5138 "string.m"
            MR_Integer mercury__string__V_12_12;
#line 5138 "string.m"
            MR_Integer mercury__string__V_13_13;
#line 5138 "string.m"
            MR_Integer mercury__string__Start_63;
#line 5138 "string.m"
            MR_Integer mercury__string__End_64;
#line 5138 "string.m"
            MR_Integer mercury__string__V_66_66;
#line 4805 "string.m"
            MR_Integer mercury__string__V_65_65;

#line 5138 "string.m"
            mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
#line 5138 "string.m"
            if (mercury__string__succeeded)
#line 5138 "string.m"
              {
#line 5139 "string.m"
                mercury__string__V_12_12 = (MR_Integer) 1;
#line 5139 "string.m"
                mercury__string__V_13_13 = (MR_Integer) 0;
#line 4805 "string.m"
                mercury__string__V_65_65 = (MR_Integer) 0;
#line 215 "int.opt"
                mercury__string__Start_63 = mercury__string__V_12_12;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 18215 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_66_66  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
                mercury__string__succeeded = (mercury__string__End_8 < mercury__string__V_66_66);
#line 243 "int.opt"
                if (mercury__string__succeeded)
#line 242 "int.opt"
                  mercury__string__End_64 = mercury__string__End_8;
#line 243 "int.opt"
                else
#line 244 "int.opt"
                  mercury__string__End_64 = mercury__string__V_66_66;
#line 4807 "string.m"
                {
#line 4807 "string.m"
                  return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, mercury__string__Start_63, mercury__string__End_64, mercury__string__V_13_13, mercury__string__Int_6);
                }
#line 5138 "string.m"
              }
#line 5138 "string.m"
          }
#line 5140 "string.m"
        else
#line 5143 "string.m"
          {
#line 5140 "string.m"
            mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 43);
#line 5143 "string.m"
            if (mercury__string__succeeded)
#line 5141 "string.m"
              {
#line 5141 "string.m"
                MR_Integer mercury__string__V_16_16;
#line 5141 "string.m"
                MR_Integer mercury__string__V_17_17;

#line 5141 "string.m"
                mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
#line 5141 "string.m"
                if (mercury__string__succeeded)
#line 5141 "string.m"
                  {
#line 5142 "string.m"
                    mercury__string__V_16_16 = (MR_Integer) 1;
#line 5142 "string.m"
                    mercury__string__V_17_17 = (MR_Integer) 0;
#line 5142 "string.m"
                    {
#line 5142 "string.m"
                      return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, mercury__string__V_16_16, mercury__string__End_8, mercury__string__V_17_17, mercury__string__Int_6);
                    }
#line 5141 "string.m"
                  }
#line 5141 "string.m"
              }
#line 5143 "string.m"
            else
#line 5144 "string.m"
              {
#line 5144 "string.m"
                {
#line 5144 "string.m"
                  return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, (MR_Integer) 0, mercury__string__End_8, (MR_Integer) 0, mercury__string__Int_6);
                }
#line 5144 "string.m"
              }
#line 5143 "string.m"
          }
#line 5134 "string.m"
      }
#line 5134 "string.m"
    return mercury__string__succeeded;
#line 5134 "string.m"
  }
#line 1120 "string.m"
}

#line 1111 "string.m"
MR_Integer MR_CALL 
mercury__string__det_to_int_1_f_0(
#line 1111 "string.m"
  MR_String mercury__string__S_3)
#line 1111 "string.m"
{
#line 5132 "string.m"
  {
#line 5132 "string.m"
    MR_bool mercury__string__succeeded;
#line 5132 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;
#line 5150 "string.m"
    MR_Integer mercury__string__N0_8;

#line 5148 "string.m"
    {
#line 5148 "string.m"
      mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__S_3, &mercury__string__N0_8);
    }
#line 5150 "string.m"
    if (mercury__string__succeeded)
#line 5149 "string.m"
      mercury__string__HeadVar__2_2 = mercury__string__N0_8;
#line 5150 "string.m"
    else
#line 5151 "string.m"
      {
#line 5151 "string.m"
        {
#line 5151 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_base_string_to_int: conversion failed");
        }
#line 5151 "string.m"
      }
#line 5132 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5132 "string.m"
  }
#line 1111 "string.m"
}

#line 1105 "string.m"
MR_bool MR_CALL 
mercury__string__to_int_2_p_0(
#line 1105 "string.m"
  MR_String mercury__string__String_3,
#line 1105 "string.m"
  MR_Integer * mercury__string__Int_4)
#line 1105 "string.m"
{
#line 5129 "string.m"
  {
#line 5129 "string.m"
    MR_bool mercury__string__succeeded;

#line 5130 "string.m"
    {
#line 5130 "string.m"
      return mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__String_3, mercury__string__Int_4);
    }
#line 5129 "string.m"
    return mercury__string__succeeded;
#line 5129 "string.m"
  }
#line 1105 "string.m"
}

#line 1093 "string.m"
MR_Word MR_CALL 
mercury__string__string_to_doc_1_f_0(
#line 1093 "string.m"
  MR_String mercury__string__S_3)
#line 1093 "string.m"
{
#line 5122 "string.m"
  {
#line 5122 "string.m"
    MR_bool mercury__string__succeeded;
#line 5122 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 5122 "string.m"
    MR_Word mercury__string__V_4_4;
#line 5122 "string.m"
    MR_Word mercury__string__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_5[0]);
#line 5122 "string.m"
    MR_Word mercury__string__V_7_7;
#line 5122 "string.m"
    MR_Word mercury__string__V_8_8;
#line 5122 "string.m"
    MR_Word mercury__string__V_9_9;
#line 5122 "string.m"
    MR_Word mercury__string__V_12_12;

#line 5122 "string.m"
    {
#line 5122 "string.m"
      mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 5122 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 0) = ((MR_Box) (mercury__string__S_3));
#line 5122 "string.m"
    }
#line 5122 "string.m"
    mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5122 "string.m"
    mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[3]);
#line 5122 "string.m"
    {
#line 5122 "string.m"
      mercury__string__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5122 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 5122 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 5122 "string.m"
    }
#line 5122 "string.m"
    {
#line 5122 "string.m"
      mercury__string__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5122 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_4_4, 0) = ((MR_Box) (mercury__string__V_5_5));
#line 5122 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_4_4, 1) = ((MR_Box) (mercury__string__V_7_7));
#line 5122 "string.m"
    }
#line 5122 "string.m"
    {
#line 5122 "string.m"
      mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 5122 "string.m"
      MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__V_4_4));
#line 5122 "string.m"
    }
#line 5122 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5122 "string.m"
  }
#line 1093 "string.m"
}

#line 1083 "string.m"
MR_String MR_CALL 
mercury__string__format_table_max_2_f_0(
#line 1083 "string.m"
  MR_Word mercury__string__ColumnsLimits_4,
#line 1083 "string.m"
  MR_String mercury__string__Separator_5)
#line 1083 "string.m"
{
#line 4965 "string.m"
  {
#line 4965 "string.m"
    MR_bool mercury__string__succeeded;
#line 4965 "string.m"
    MR_String mercury__string__Table_6;
#line 4965 "string.m"
    MR_Word mercury__string__TypeCtorInfo_23_23;
#line 4965 "string.m"
    MR_Word mercury__string__MaxWidthsSenses_7;
#line 4965 "string.m"
    MR_Word mercury__string__Columns_8;
#line 4965 "string.m"
    MR_Integer mercury__string__SepLen_9;
#line 4965 "string.m"
    MR_Word mercury__string__RevRows_10;
#line 4965 "string.m"
    MR_Word mercury__string__Rows_11;
#line 4965 "string.m"
    MR_Word mercury__string__V_14_14;

#line 4966 "string.m"
    {
#line 4966 "string.m"
      mercury__string__MaxWidthsSenses_7 = mercury__string__map__ho14_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    }
#line 4967 "string.m"
    {
#line 4967 "string.m"
      mercury__string__Columns_8 = mercury__string__map__ho13_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    }
#line 2640 "string.m"
    {
#line 2640 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Separator_5, &mercury__string__SepLen_9);
    }
#line 4969 "string.m"
    mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4969 "string.m"
    {
#line 4969 "string.m"
      mercury__string__generate_rows_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Separator_5, mercury__string__SepLen_9, mercury__string__Columns_8, mercury__string__V_14_14, &mercury__string__RevRows_10);
    }
#line 18491 "string.c"
    mercury__string__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4970 "string.m"
    {
#line 4970 "string.m"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_23_23, mercury__string__RevRows_10, &mercury__string__Rows_11);
    }
#line 4971 "string.m"
    {
#line 4971 "string.m"
      return mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    }
#line 4965 "string.m"
    return mercury__string__Table_6;
#line 4965 "string.m"
  }
#line 1083 "string.m"
}

#line 1078 "string.m"
MR_String MR_CALL 
mercury__string__format_table_2_f_0(
#line 1078 "string.m"
  MR_Word mercury__string__Columns_4,
#line 1078 "string.m"
  MR_String mercury__string__Separator_5)
#line 1078 "string.m"
{
#line 4948 "string.m"
  {
#line 4948 "string.m"
    MR_bool mercury__string__succeeded;
#line 4948 "string.m"
    MR_String mercury__string__Table_6;
#line 4948 "string.m"
    MR_Word mercury__string__MaxWidths_7;
#line 4948 "string.m"
    MR_Word mercury__string__PaddedColumns_8;
#line 4948 "string.m"
    MR_Word mercury__string__Rows_11;

#line 4949 "string.m"
    {
#line 4949 "string.m"
      mercury__string__MaxWidths_7 = mercury__string__map__ho16_2_f_in__list_0(mercury__string__Columns_4);
    }
#line 4954 "string.m"
    {
#line 4954 "string.m"
      mercury__string__PaddedColumns_8 = mercury__string__map_corresponding__ho15_3_f_in__list_0(mercury__string__MaxWidths_7, mercury__string__Columns_4);
    }
#line 4959 "string.m"
    if ((mercury__string__PaddedColumns_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4961 "string.m"
      mercury__string__Rows_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4959 "string.m"
    else
#line 4956 "string.m"
      {
#line 4956 "string.m"
        MR_Word mercury__string__PaddedHead_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 0)));
#line 4956 "string.m"
        MR_Word mercury__string__PaddedTail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 1)));

#line 407 "list.opt"
        {
#line 407 "list.opt"
          mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(mercury__string__Separator_5, mercury__string__PaddedTail_10, mercury__string__PaddedHead_9, &mercury__string__Rows_11);
        }
#line 4956 "string.m"
      }
#line 4963 "string.m"
    {
#line 4963 "string.m"
      return mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    }
#line 4948 "string.m"
    return mercury__string__Table_6;
#line 4948 "string.m"
  }
#line 1078 "string.m"
}

#line 1048 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_4(
#line 1048 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1048 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1048 "string.m"
  MR_String mercury__string__String_8,
#line 1048 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1048 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1048 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1048 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1048 "string.m"
  MR_Cont mercury__string__cont,
#line 1048 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1048 "string.m"
{
#line 4928 "string.m"
  {
#line 4928 "string.m"
    MR_bool mercury__string__succeeded;
#line 4928 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4928 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4929 "string.m"
    {
#line 4929 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4930 "string.m"
    {
#line 4930 "string.m"
      mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4930 "string.m"
      return;
    }
#line 4928 "string.m"
  }
#line 1048 "string.m"
}

#line 1046 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_3(
#line 1046 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1046 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1046 "string.m"
  MR_String mercury__string__String_8,
#line 1046 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1046 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1046 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1046 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1046 "string.m"
  MR_Cont mercury__string__cont,
#line 1046 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1046 "string.m"
{
#line 4928 "string.m"
  {
#line 4928 "string.m"
    MR_bool mercury__string__succeeded;
#line 4928 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4928 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4929 "string.m"
    {
#line 4929 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4930 "string.m"
    {
#line 4930 "string.m"
      mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4930 "string.m"
      return;
    }
#line 4928 "string.m"
  }
#line 1046 "string.m"
}

#line 1044 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_substring_6_p_2(
#line 1044 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1044 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1044 "string.m"
  MR_String mercury__string__String_8,
#line 1044 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1044 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1044 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1044 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1044 "string.m"
{
#line 4928 "string.m"
  {
#line 4928 "string.m"
    MR_bool mercury__string__succeeded;
#line 4928 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4928 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4929 "string.m"
    {
#line 4929 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4930 "string.m"
    {
#line 4930 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4928 "string.m"
    return mercury__string__succeeded;
#line 4928 "string.m"
  }
#line 1044 "string.m"
}

#line 1042 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_1(
#line 1042 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1042 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1042 "string.m"
  MR_String mercury__string__String_8,
#line 1042 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1042 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1042 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1042 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1042 "string.m"
{
#line 4928 "string.m"
  {
#line 4928 "string.m"
    MR_bool mercury__string__succeeded;
#line 4928 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4928 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4929 "string.m"
    {
#line 4929 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4930 "string.m"
    {
#line 4930 "string.m"
      mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4930 "string.m"
      return;
    }
#line 4928 "string.m"
  }
#line 1042 "string.m"
}

#line 1040 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_0(
#line 1040 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1040 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1040 "string.m"
  MR_String mercury__string__String_8,
#line 1040 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1040 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1040 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1040 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1040 "string.m"
{
#line 4928 "string.m"
  {
#line 4928 "string.m"
    MR_bool mercury__string__succeeded;
#line 4928 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4928 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4929 "string.m"
    {
#line 4929 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4930 "string.m"
    {
#line 4930 "string.m"
      mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4930 "string.m"
      return;
    }
#line 4928 "string.m"
  }
#line 1040 "string.m"
}

#line 1038 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_substring_5_f_0(
#line 1038 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_15,
#line 1038 "string.m"
  MR_Word mercury__string__F_7,
#line 1038 "string.m"
  MR_String mercury__string__String_8,
#line 1038 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1038 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1038 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 1038 "string.m"
{
#line 4924 "string.m"
  {
#line 4924 "string.m"
    MR_bool mercury__string__succeeded;
#line 4924 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4924 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4924 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4925 "string.m"
    {
#line 4925 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4926 "string.m"
    {
#line 4926 "string.m"
      return mercury__string__Acc_12 = mercury__string__foldr_between_5_f_0(mercury__string__TypeInfo_for_T_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    }
#line 4924 "string.m"
    return mercury__string__Acc_12;
#line 4924 "string.m"
  }
#line 1038 "string.m"
}

#line 1030 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_4(
#line 1030 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1030 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1030 "string.m"
  MR_String mercury__string__String_8,
#line 1030 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1030 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1030 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1030 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1030 "string.m"
  MR_Cont mercury__string__cont,
#line 1030 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1030 "string.m"
{
#line 4895 "string.m"
  {
#line 4895 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4895 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4895 "string.m"
    MR_Integer mercury__string__End_13;
#line 4895 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 18907 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4898 "string.m"
    {
#line 4898 "string.m"
      mercury__string__foldr_between_2_6_p_4(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4898 "string.m"
      return;
    }
#line 4895 "string.m"
  }
#line 1030 "string.m"
}

#line 1028 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_3(
#line 1028 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1028 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1028 "string.m"
  MR_String mercury__string__String_8,
#line 1028 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1028 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1028 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1028 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1028 "string.m"
  MR_Cont mercury__string__cont,
#line 1028 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1028 "string.m"
{
#line 4895 "string.m"
  {
#line 4895 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4895 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4895 "string.m"
    MR_Integer mercury__string__End_13;
#line 4895 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 18991 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4898 "string.m"
    {
#line 4898 "string.m"
      mercury__string__foldr_between_2_6_p_3(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4898 "string.m"
      return;
    }
#line 4895 "string.m"
  }
#line 1028 "string.m"
}

#line 1026 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_between_6_p_2(
#line 1026 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1026 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1026 "string.m"
  MR_String mercury__string__String_8,
#line 1026 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1026 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1026 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1026 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1026 "string.m"
{
#line 4895 "string.m"
  {
#line 4895 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4895 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4895 "string.m"
    MR_Integer mercury__string__End_13;
#line 4895 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 19071 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4898 "string.m"
    {
#line 4898 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_2_6_p_2(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4895 "string.m"
    return mercury__string__succeeded;
#line 4895 "string.m"
  }
#line 1026 "string.m"
}

#line 1024 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_1(
#line 1024 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1024 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1024 "string.m"
  MR_String mercury__string__String_8,
#line 1024 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1024 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1024 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1024 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1024 "string.m"
{
#line 4895 "string.m"
  {
#line 4895 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4895 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4895 "string.m"
    MR_Integer mercury__string__End_13;
#line 4895 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 19151 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4898 "string.m"
    {
#line 4898 "string.m"
      mercury__string__foldr_between_2_6_p_1(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4898 "string.m"
      return;
    }
#line 4895 "string.m"
  }
#line 1024 "string.m"
}

#line 1022 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_0(
#line 1022 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1022 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1022 "string.m"
  MR_String mercury__string__String_8,
#line 1022 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1022 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1022 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1022 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1022 "string.m"
{
#line 4895 "string.m"
  {
#line 4895 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4895 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4895 "string.m"
    MR_Integer mercury__string__End_13;
#line 4895 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 19231 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4898 "string.m"
    {
#line 4898 "string.m"
      mercury__string__foldr_between_2_6_p_0(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4898 "string.m"
      return;
    }
#line 4895 "string.m"
  }
#line 1022 "string.m"
}

#line 1020 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_between_5_f_0(
#line 1020 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_23,
#line 1020 "string.m"
  MR_Word mercury__string__F_7,
#line 1020 "string.m"
  MR_String mercury__string__String_8,
#line 1020 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1020 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1020 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 1020 "string.m"
{
#line 4891 "string.m"
  {
#line 4891 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
#line 4891 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4891 "string.m"
    MR_Integer mercury__string__Start_31;
#line 4891 "string.m"
    MR_Integer mercury__string__End_32;
#line 4891 "string.m"
    MR_Integer mercury__string__V_34_34;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_31 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_31 = mercury__string__Start_9;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 19311 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_34_34  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__Count_10 < mercury__string__V_34_34);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_32 = mercury__string__Count_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_32 = mercury__string__V_34_34;
#line 4898 "string.m"
    {
#line 4898 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_52_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__String_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__Acc0_11, &mercury__string__Acc_12);
    }
#line 4891 "string.m"
    return mercury__string__Acc_12;
#line 4891 "string.m"
  }
#line 1020 "string.m"
}

#line 1012 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_4(
#line 1012 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 1012 "string.m"
  MR_Word mercury__string__Closure_5,
#line 1012 "string.m"
  MR_String mercury__string__String_6,
#line 1012 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 1012 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9,
#line 1012 "string.m"
  MR_Cont mercury__string__cont,
#line 1012 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1012 "string.m"
{
#line 4888 "string.m"
  {
#line 4888 "string.m"
    MR_bool mercury__string__succeeded;
#line 4888 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 19379 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2580 "string.m"
}
#line 4889 "string.m"
    {
#line 4889 "string.m"
      mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4889 "string.m"
      return;
    }
#line 4888 "string.m"
  }
#line 1012 "string.m"
}

#line 1011 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_3(
#line 1011 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 1011 "string.m"
  MR_Word mercury__string__Closure_5,
#line 1011 "string.m"
  MR_String mercury__string__String_6,
#line 1011 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 1011 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9,
#line 1011 "string.m"
  MR_Cont mercury__string__cont,
#line 1011 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1011 "string.m"
{
#line 4888 "string.m"
  {
#line 4888 "string.m"
    MR_bool mercury__string__succeeded;
#line 4888 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 19437 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2580 "string.m"
}
#line 4889 "string.m"
    {
#line 4889 "string.m"
      mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4889 "string.m"
      return;
    }
#line 4888 "string.m"
  }
#line 1011 "string.m"
}

#line 1010 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_4_p_2(
#line 1010 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 1010 "string.m"
  MR_Word mercury__string__Closure_5,
#line 1010 "string.m"
  MR_String mercury__string__String_6,
#line 1010 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 1010 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 1010 "string.m"
{
#line 4888 "string.m"
  {
#line 4888 "string.m"
    MR_bool mercury__string__succeeded;
#line 4888 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 19491 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2580 "string.m"
}
#line 4889 "string.m"
    {
#line 4889 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
    }
#line 4888 "string.m"
    return mercury__string__succeeded;
#line 4888 "string.m"
  }
#line 1010 "string.m"
}

#line 1009 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_1(
#line 1009 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 1009 "string.m"
  MR_Word mercury__string__Closure_5,
#line 1009 "string.m"
  MR_String mercury__string__String_6,
#line 1009 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 1009 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 1009 "string.m"
{
#line 4888 "string.m"
  {
#line 4888 "string.m"
    MR_bool mercury__string__succeeded;
#line 4888 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 19545 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2580 "string.m"
}
#line 4889 "string.m"
    {
#line 4889 "string.m"
      mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
#line 4889 "string.m"
      return;
    }
#line 4888 "string.m"
  }
#line 1009 "string.m"
}

#line 1008 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_0(
#line 1008 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 1008 "string.m"
  MR_Word mercury__string__Closure_5,
#line 1008 "string.m"
  MR_String mercury__string__String_6,
#line 1008 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 1008 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 1008 "string.m"
{
#line 4888 "string.m"
  {
#line 4888 "string.m"
    MR_bool mercury__string__succeeded;
#line 4888 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 19599 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2580 "string.m"
}
#line 4889 "string.m"
    {
#line 4889 "string.m"
      mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
#line 4889 "string.m"
      return;
    }
#line 4888 "string.m"
  }
#line 1008 "string.m"
}

#line 1006 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_3_f_0(
#line 1006 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1006 "string.m"
  MR_Word mercury__string__F_5,
#line 1006 "string.m"
  MR_String mercury__string__String_6,
#line 1006 "string.m"
  MR_Box mercury__string__Acc0_7)
#line 1006 "string.m"
{
#line 4884 "string.m"
  {
#line 4884 "string.m"
    MR_bool mercury__string__succeeded;
#line 4884 "string.m"
    MR_Box mercury__string__Acc_8;
#line 4884 "string.m"
    MR_Integer mercury__string__V_26_26;
#line 4884 "string.m"
    MR_Integer mercury__string__End_41;
#line 4884 "string.m"
    MR_Integer mercury__string__V_43_43;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 19657 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_26_26  = Length;
#line 2580 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 19677 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_43_43  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__V_26_26 < mercury__string__V_43_43);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_41 = mercury__string__V_26_26;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_41 = mercury__string__V_43_43;
#line 4898 "string.m"
    {
#line 4898 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__End_41, mercury__string__Acc0_7, &mercury__string__Acc_8);
    }
#line 4884 "string.m"
    return mercury__string__Acc_8;
#line 4884 "string.m"
  }
#line 1006 "string.m"
}

#line 1000 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_5(
#line 1000 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 1000 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 1000 "string.m"
  MR_Word mercury__string__Closure_9,
#line 1000 "string.m"
  MR_String mercury__string__String_10,
#line 1000 "string.m"
  MR_Integer mercury__string__Start_11,
#line 1000 "string.m"
  MR_Integer mercury__string__Count_12,
#line 1000 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 1000 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 1000 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 1000 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 1000 "string.m"
  MR_Cont mercury__string__cont,
#line 1000 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1000 "string.m"
{
#line 4877 "string.m"
  {
#line 4877 "string.m"
    MR_bool mercury__string__succeeded;
#line 4877 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4877 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4878 "string.m"
    {
#line 4878 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4879 "string.m"
    {
#line 4879 "string.m"
      mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4879 "string.m"
      return;
    }
#line 4877 "string.m"
  }
#line 1000 "string.m"
}

#line 998 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_4(
#line 998 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 998 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 998 "string.m"
  MR_Word mercury__string__Closure_9,
#line 998 "string.m"
  MR_String mercury__string__String_10,
#line 998 "string.m"
  MR_Integer mercury__string__Start_11,
#line 998 "string.m"
  MR_Integer mercury__string__Count_12,
#line 998 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 998 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 998 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 998 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 998 "string.m"
  MR_Cont mercury__string__cont,
#line 998 "string.m"
  void * mercury__string__cont_env_ptr)
#line 998 "string.m"
{
#line 4877 "string.m"
  {
#line 4877 "string.m"
    MR_bool mercury__string__succeeded;
#line 4877 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4877 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4878 "string.m"
    {
#line 4878 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4879 "string.m"
    {
#line 4879 "string.m"
      mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4879 "string.m"
      return;
    }
#line 4877 "string.m"
  }
#line 998 "string.m"
}

#line 996 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_substring_8_p_3(
#line 996 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 996 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 996 "string.m"
  MR_Word mercury__string__Closure_9,
#line 996 "string.m"
  MR_String mercury__string__String_10,
#line 996 "string.m"
  MR_Integer mercury__string__Start_11,
#line 996 "string.m"
  MR_Integer mercury__string__Count_12,
#line 996 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 996 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 996 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 996 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 996 "string.m"
{
#line 4877 "string.m"
  {
#line 4877 "string.m"
    MR_bool mercury__string__succeeded;
#line 4877 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4877 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4878 "string.m"
    {
#line 4878 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4879 "string.m"
    {
#line 4879 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    }
#line 4877 "string.m"
    return mercury__string__succeeded;
#line 4877 "string.m"
  }
#line 996 "string.m"
}

#line 994 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_2(
#line 994 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 994 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 994 "string.m"
  MR_Word mercury__string__Closure_9,
#line 994 "string.m"
  MR_String mercury__string__String_10,
#line 994 "string.m"
  MR_Integer mercury__string__Start_11,
#line 994 "string.m"
  MR_Integer mercury__string__Count_12,
#line 994 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 994 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 994 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 994 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 994 "string.m"
{
#line 4877 "string.m"
  {
#line 4877 "string.m"
    MR_bool mercury__string__succeeded;
#line 4877 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4877 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4878 "string.m"
    {
#line 4878 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4879 "string.m"
    {
#line 4879 "string.m"
      mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4879 "string.m"
      return;
    }
#line 4877 "string.m"
  }
#line 994 "string.m"
}

#line 992 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_1(
#line 992 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 992 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 992 "string.m"
  MR_Word mercury__string__Closure_9,
#line 992 "string.m"
  MR_String mercury__string__String_10,
#line 992 "string.m"
  MR_Integer mercury__string__Start_11,
#line 992 "string.m"
  MR_Integer mercury__string__Count_12,
#line 992 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 992 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 992 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 992 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 992 "string.m"
{
#line 4877 "string.m"
  {
#line 4877 "string.m"
    MR_bool mercury__string__succeeded;
#line 4877 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4877 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4878 "string.m"
    {
#line 4878 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4879 "string.m"
    {
#line 4879 "string.m"
      mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4879 "string.m"
      return;
    }
#line 4877 "string.m"
  }
#line 992 "string.m"
}

#line 990 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_0(
#line 990 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 990 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 990 "string.m"
  MR_Word mercury__string__Closure_9,
#line 990 "string.m"
  MR_String mercury__string__String_10,
#line 990 "string.m"
  MR_Integer mercury__string__Start_11,
#line 990 "string.m"
  MR_Integer mercury__string__Count_12,
#line 990 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 990 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 990 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 990 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 990 "string.m"
{
#line 4877 "string.m"
  {
#line 4877 "string.m"
    MR_bool mercury__string__succeeded;
#line 4877 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4877 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4878 "string.m"
    {
#line 4878 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4879 "string.m"
    {
#line 4879 "string.m"
      mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4879 "string.m"
      return;
    }
#line 4877 "string.m"
  }
#line 990 "string.m"
}

#line 981 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_4(
#line 981 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 981 "string.m"
  MR_Word mercury__string__Closure_7,
#line 981 "string.m"
  MR_String mercury__string__String_8,
#line 981 "string.m"
  MR_Integer mercury__string__Start_9,
#line 981 "string.m"
  MR_Integer mercury__string__Count_10,
#line 981 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 981 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 981 "string.m"
  MR_Cont mercury__string__cont,
#line 981 "string.m"
  void * mercury__string__cont_env_ptr)
#line 981 "string.m"
{
#line 4873 "string.m"
  {
#line 4873 "string.m"
    MR_bool mercury__string__succeeded;
#line 4873 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4873 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4874 "string.m"
    {
#line 4874 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4875 "string.m"
    {
#line 4875 "string.m"
      mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4875 "string.m"
      return;
    }
#line 4873 "string.m"
  }
#line 981 "string.m"
}

#line 979 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_3(
#line 979 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 979 "string.m"
  MR_Word mercury__string__Closure_7,
#line 979 "string.m"
  MR_String mercury__string__String_8,
#line 979 "string.m"
  MR_Integer mercury__string__Start_9,
#line 979 "string.m"
  MR_Integer mercury__string__Count_10,
#line 979 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 979 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 979 "string.m"
  MR_Cont mercury__string__cont,
#line 979 "string.m"
  void * mercury__string__cont_env_ptr)
#line 979 "string.m"
{
#line 4873 "string.m"
  {
#line 4873 "string.m"
    MR_bool mercury__string__succeeded;
#line 4873 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4873 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4874 "string.m"
    {
#line 4874 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4875 "string.m"
    {
#line 4875 "string.m"
      mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4875 "string.m"
      return;
    }
#line 4873 "string.m"
  }
#line 979 "string.m"
}

#line 977 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_substring_6_p_2(
#line 977 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 977 "string.m"
  MR_Word mercury__string__Closure_7,
#line 977 "string.m"
  MR_String mercury__string__String_8,
#line 977 "string.m"
  MR_Integer mercury__string__Start_9,
#line 977 "string.m"
  MR_Integer mercury__string__Count_10,
#line 977 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 977 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 977 "string.m"
{
#line 4873 "string.m"
  {
#line 4873 "string.m"
    MR_bool mercury__string__succeeded;
#line 4873 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4873 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4874 "string.m"
    {
#line 4874 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4875 "string.m"
    {
#line 4875 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4873 "string.m"
    return mercury__string__succeeded;
#line 4873 "string.m"
  }
#line 977 "string.m"
}

#line 975 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_1(
#line 975 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 975 "string.m"
  MR_Word mercury__string__Closure_7,
#line 975 "string.m"
  MR_String mercury__string__String_8,
#line 975 "string.m"
  MR_Integer mercury__string__Start_9,
#line 975 "string.m"
  MR_Integer mercury__string__Count_10,
#line 975 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 975 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 975 "string.m"
{
#line 4873 "string.m"
  {
#line 4873 "string.m"
    MR_bool mercury__string__succeeded;
#line 4873 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4873 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4874 "string.m"
    {
#line 4874 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4875 "string.m"
    {
#line 4875 "string.m"
      mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4875 "string.m"
      return;
    }
#line 4873 "string.m"
  }
#line 975 "string.m"
}

#line 973 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_0(
#line 973 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 973 "string.m"
  MR_Word mercury__string__Closure_7,
#line 973 "string.m"
  MR_String mercury__string__String_8,
#line 973 "string.m"
  MR_Integer mercury__string__Start_9,
#line 973 "string.m"
  MR_Integer mercury__string__Count_10,
#line 973 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 973 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 973 "string.m"
{
#line 4873 "string.m"
  {
#line 4873 "string.m"
    MR_bool mercury__string__succeeded;
#line 4873 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4873 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4874 "string.m"
    {
#line 4874 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4875 "string.m"
    {
#line 4875 "string.m"
      mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4875 "string.m"
      return;
    }
#line 4873 "string.m"
  }
#line 973 "string.m"
}

#line 971 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_substring_5_f_0(
#line 971 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_15,
#line 971 "string.m"
  MR_Word mercury__string__F_7,
#line 971 "string.m"
  MR_String mercury__string__String_8,
#line 971 "string.m"
  MR_Integer mercury__string__Start_9,
#line 971 "string.m"
  MR_Integer mercury__string__Count_10,
#line 971 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 971 "string.m"
{
#line 4869 "string.m"
  {
#line 4869 "string.m"
    MR_bool mercury__string__succeeded;
#line 4869 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4869 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4869 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4870 "string.m"
    {
#line 4870 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4871 "string.m"
    {
#line 4871 "string.m"
      return mercury__string__Acc_12 = mercury__string__foldl_between_5_f_0(mercury__string__TypeInfo_for_A_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    }
#line 4869 "string.m"
    return mercury__string__Acc_12;
#line 4869 "string.m"
  }
#line 971 "string.m"
}

#line 963 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_5(
#line 963 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 963 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 963 "string.m"
  MR_Word mercury__string__Closure_9,
#line 963 "string.m"
  MR_String mercury__string__String_10,
#line 963 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 963 "string.m"
  MR_Integer mercury__string__End0_12,
#line 963 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 963 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 963 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 963 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 963 "string.m"
  MR_Cont mercury__string__cont,
#line 963 "string.m"
  void * mercury__string__cont_env_ptr)
#line 963 "string.m"
{
#line 4813 "string.m"
  {
#line 4813 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4813 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4813 "string.m"
    MR_Integer mercury__string__End_16;
#line 4813 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 20359 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4816 "string.m"
    {
#line 4816 "string.m"
      mercury__string__foldl2_between_2_8_p_5(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4816 "string.m"
      return;
    }
#line 4813 "string.m"
  }
#line 963 "string.m"
}

#line 961 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_4(
#line 961 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 961 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 961 "string.m"
  MR_Word mercury__string__Closure_9,
#line 961 "string.m"
  MR_String mercury__string__String_10,
#line 961 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 961 "string.m"
  MR_Integer mercury__string__End0_12,
#line 961 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 961 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 961 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 961 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 961 "string.m"
  MR_Cont mercury__string__cont,
#line 961 "string.m"
  void * mercury__string__cont_env_ptr)
#line 961 "string.m"
{
#line 4813 "string.m"
  {
#line 4813 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4813 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4813 "string.m"
    MR_Integer mercury__string__End_16;
#line 4813 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 20449 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4816 "string.m"
    {
#line 4816 "string.m"
      mercury__string__foldl2_between_2_8_p_4(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4816 "string.m"
      return;
    }
#line 4813 "string.m"
  }
#line 961 "string.m"
}

#line 959 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_between_8_p_3(
#line 959 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 959 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 959 "string.m"
  MR_Word mercury__string__Closure_9,
#line 959 "string.m"
  MR_String mercury__string__String_10,
#line 959 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 959 "string.m"
  MR_Integer mercury__string__End0_12,
#line 959 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 959 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 959 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 959 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 959 "string.m"
{
#line 4813 "string.m"
  {
#line 4813 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4813 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4813 "string.m"
    MR_Integer mercury__string__End_16;
#line 4813 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 20535 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4816 "string.m"
    {
#line 4816 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_2_8_p_3(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    }
#line 4813 "string.m"
    return mercury__string__succeeded;
#line 4813 "string.m"
  }
#line 959 "string.m"
}

#line 957 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_2(
#line 957 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 957 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 957 "string.m"
  MR_Word mercury__string__Closure_9,
#line 957 "string.m"
  MR_String mercury__string__String_10,
#line 957 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 957 "string.m"
  MR_Integer mercury__string__End0_12,
#line 957 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 957 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 957 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 957 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 957 "string.m"
{
#line 4813 "string.m"
  {
#line 4813 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4813 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4813 "string.m"
    MR_Integer mercury__string__End_16;
#line 4813 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 20621 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4816 "string.m"
    {
#line 4816 "string.m"
      mercury__string__foldl2_between_2_8_p_2(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4816 "string.m"
      return;
    }
#line 4813 "string.m"
  }
#line 957 "string.m"
}

#line 955 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_1(
#line 955 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 955 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 955 "string.m"
  MR_Word mercury__string__Closure_9,
#line 955 "string.m"
  MR_String mercury__string__String_10,
#line 955 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 955 "string.m"
  MR_Integer mercury__string__End0_12,
#line 955 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 955 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 955 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 955 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 955 "string.m"
{
#line 4813 "string.m"
  {
#line 4813 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4813 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4813 "string.m"
    MR_Integer mercury__string__End_16;
#line 4813 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 20707 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4816 "string.m"
    {
#line 4816 "string.m"
      mercury__string__foldl2_between_2_8_p_1(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4816 "string.m"
      return;
    }
#line 4813 "string.m"
  }
#line 955 "string.m"
}

#line 953 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_0(
#line 953 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 953 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 953 "string.m"
  MR_Word mercury__string__Closure_9,
#line 953 "string.m"
  MR_String mercury__string__String_10,
#line 953 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 953 "string.m"
  MR_Integer mercury__string__End0_12,
#line 953 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 953 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 953 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 953 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 953 "string.m"
{
#line 4813 "string.m"
  {
#line 4813 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4813 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4813 "string.m"
    MR_Integer mercury__string__End_16;
#line 4813 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 20793 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4816 "string.m"
    {
#line 4816 "string.m"
      mercury__string__foldl2_between_2_8_p_0(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4816 "string.m"
      return;
    }
#line 4813 "string.m"
  }
#line 953 "string.m"
}

#line 943 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_4(
#line 943 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 943 "string.m"
  MR_Word mercury__string__Closure_7,
#line 943 "string.m"
  MR_String mercury__string__String_8,
#line 943 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 943 "string.m"
  MR_Integer mercury__string__End0_10,
#line 943 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 943 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 943 "string.m"
  MR_Cont mercury__string__cont,
#line 943 "string.m"
  void * mercury__string__cont_env_ptr)
#line 943 "string.m"
{
#line 4804 "string.m"
  {
#line 4804 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4804 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4804 "string.m"
    MR_Integer mercury__string__End_13;
#line 4804 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 20877 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4807 "string.m"
    {
#line 4807 "string.m"
      mercury__string__foldl_between_2_6_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4807 "string.m"
      return;
    }
#line 4804 "string.m"
  }
#line 943 "string.m"
}

#line 941 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_3(
#line 941 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 941 "string.m"
  MR_Word mercury__string__Closure_7,
#line 941 "string.m"
  MR_String mercury__string__String_8,
#line 941 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 941 "string.m"
  MR_Integer mercury__string__End0_10,
#line 941 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 941 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 941 "string.m"
  MR_Cont mercury__string__cont,
#line 941 "string.m"
  void * mercury__string__cont_env_ptr)
#line 941 "string.m"
{
#line 4804 "string.m"
  {
#line 4804 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4804 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4804 "string.m"
    MR_Integer mercury__string__End_13;
#line 4804 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 20961 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4807 "string.m"
    {
#line 4807 "string.m"
      mercury__string__foldl_between_2_6_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4807 "string.m"
      return;
    }
#line 4804 "string.m"
  }
#line 941 "string.m"
}

#line 939 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_between_6_p_2(
#line 939 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 939 "string.m"
  MR_Word mercury__string__Closure_7,
#line 939 "string.m"
  MR_String mercury__string__String_8,
#line 939 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 939 "string.m"
  MR_Integer mercury__string__End0_10,
#line 939 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 939 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 939 "string.m"
{
#line 4804 "string.m"
  {
#line 4804 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4804 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4804 "string.m"
    MR_Integer mercury__string__End_13;
#line 4804 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21041 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4807 "string.m"
    {
#line 4807 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_2_6_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4804 "string.m"
    return mercury__string__succeeded;
#line 4804 "string.m"
  }
#line 939 "string.m"
}

#line 937 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_1(
#line 937 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 937 "string.m"
  MR_Word mercury__string__Closure_7,
#line 937 "string.m"
  MR_String mercury__string__String_8,
#line 937 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 937 "string.m"
  MR_Integer mercury__string__End0_10,
#line 937 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 937 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 937 "string.m"
{
#line 4804 "string.m"
  {
#line 4804 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4804 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4804 "string.m"
    MR_Integer mercury__string__End_13;
#line 4804 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21121 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4807 "string.m"
    {
#line 4807 "string.m"
      mercury__string__foldl_between_2_6_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4807 "string.m"
      return;
    }
#line 4804 "string.m"
  }
#line 937 "string.m"
}

#line 935 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_0(
#line 935 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 935 "string.m"
  MR_Word mercury__string__Closure_7,
#line 935 "string.m"
  MR_String mercury__string__String_8,
#line 935 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 935 "string.m"
  MR_Integer mercury__string__End0_10,
#line 935 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 935 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 935 "string.m"
{
#line 4804 "string.m"
  {
#line 4804 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4804 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4804 "string.m"
    MR_Integer mercury__string__End_13;
#line 4804 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21201 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4807 "string.m"
    {
#line 4807 "string.m"
      mercury__string__foldl_between_2_6_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4807 "string.m"
      return;
    }
#line 4804 "string.m"
  }
#line 935 "string.m"
}

#line 933 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_between_5_f_0(
#line 933 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 933 "string.m"
  MR_Word mercury__string__F_7,
#line 933 "string.m"
  MR_String mercury__string__S_8,
#line 933 "string.m"
  MR_Integer mercury__string__Start_9,
#line 933 "string.m"
  MR_Integer mercury__string__End_10,
#line 933 "string.m"
  MR_Box mercury__string__A_11)
#line 933 "string.m"
{
#line 4809 "string.m"
  {
#line 4809 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
#line 4809 "string.m"
    MR_Box mercury__string__B_12;
#line 4809 "string.m"
    MR_Integer mercury__string__Start_31;
#line 4809 "string.m"
    MR_Integer mercury__string__End_32;
#line 4809 "string.m"
    MR_Integer mercury__string__V_34_34;

#line 214 "int.opt"
    if (mercury__string__succeeded)
#line 213 "int.opt"
      mercury__string__Start_31 = (MR_Integer) 0;
#line 214 "int.opt"
    else
#line 215 "int.opt"
      mercury__string__Start_31 = mercury__string__Start_9;
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21281 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_34_34  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__End_10 < mercury__string__V_34_34);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_32 = mercury__string__End_10;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_32 = mercury__string__V_34_34;
#line 4807 "string.m"
    {
#line 4807 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__S_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__A_11, &mercury__string__B_12);
    }
#line 4809 "string.m"
    return mercury__string__B_12;
#line 4809 "string.m"
  }
#line 933 "string.m"
}

#line 924 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_5(
#line 924 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 924 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 924 "string.m"
  MR_Word mercury__string__Closure_7,
#line 924 "string.m"
  MR_String mercury__string__String_8,
#line 924 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 924 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 924 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 924 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15,
#line 924 "string.m"
  MR_Cont mercury__string__cont,
#line 924 "string.m"
  void * mercury__string__cont_env_ptr)
#line 924 "string.m"
{
#line 4800 "string.m"
  {
#line 4800 "string.m"
    MR_bool mercury__string__succeeded;
#line 4800 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21355 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2580 "string.m"
}
#line 4802 "string.m"
    {
#line 4802 "string.m"
      mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4802 "string.m"
      return;
    }
#line 4800 "string.m"
  }
#line 924 "string.m"
}

#line 922 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_4(
#line 922 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 922 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 922 "string.m"
  MR_Word mercury__string__Closure_7,
#line 922 "string.m"
  MR_String mercury__string__String_8,
#line 922 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 922 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 922 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 922 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15,
#line 922 "string.m"
  MR_Cont mercury__string__cont,
#line 922 "string.m"
  void * mercury__string__cont_env_ptr)
#line 922 "string.m"
{
#line 4800 "string.m"
  {
#line 4800 "string.m"
    MR_bool mercury__string__succeeded;
#line 4800 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21419 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2580 "string.m"
}
#line 4802 "string.m"
    {
#line 4802 "string.m"
      mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4802 "string.m"
      return;
    }
#line 4800 "string.m"
  }
#line 922 "string.m"
}

#line 920 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_6_p_3(
#line 920 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 920 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 920 "string.m"
  MR_Word mercury__string__Closure_7,
#line 920 "string.m"
  MR_String mercury__string__String_8,
#line 920 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 920 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 920 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 920 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 920 "string.m"
{
#line 4800 "string.m"
  {
#line 4800 "string.m"
    MR_bool mercury__string__succeeded;
#line 4800 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21479 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2580 "string.m"
}
#line 4802 "string.m"
    {
#line 4802 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
    }
#line 4800 "string.m"
    return mercury__string__succeeded;
#line 4800 "string.m"
  }
#line 920 "string.m"
}

#line 918 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_2(
#line 918 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 918 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 918 "string.m"
  MR_Word mercury__string__Closure_7,
#line 918 "string.m"
  MR_String mercury__string__String_8,
#line 918 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 918 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 918 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 918 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 918 "string.m"
{
#line 4800 "string.m"
  {
#line 4800 "string.m"
    MR_bool mercury__string__succeeded;
#line 4800 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21539 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2580 "string.m"
}
#line 4802 "string.m"
    {
#line 4802 "string.m"
      mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4802 "string.m"
      return;
    }
#line 4800 "string.m"
  }
#line 918 "string.m"
}

#line 916 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_1(
#line 916 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 916 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 916 "string.m"
  MR_Word mercury__string__Closure_7,
#line 916 "string.m"
  MR_String mercury__string__String_8,
#line 916 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 916 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 916 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 916 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 916 "string.m"
{
#line 4800 "string.m"
  {
#line 4800 "string.m"
    MR_bool mercury__string__succeeded;
#line 4800 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21599 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2580 "string.m"
}
#line 4802 "string.m"
    {
#line 4802 "string.m"
      mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4802 "string.m"
      return;
    }
#line 4800 "string.m"
  }
#line 916 "string.m"
}

#line 914 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_0(
#line 914 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 914 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 914 "string.m"
  MR_Word mercury__string__Closure_7,
#line 914 "string.m"
  MR_String mercury__string__String_8,
#line 914 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 914 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 914 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 914 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 914 "string.m"
{
#line 4800 "string.m"
  {
#line 4800 "string.m"
    MR_bool mercury__string__succeeded;
#line 4800 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21659 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2580 "string.m"
}
#line 4802 "string.m"
    {
#line 4802 "string.m"
      mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4802 "string.m"
      return;
    }
#line 4800 "string.m"
  }
#line 914 "string.m"
}

#line 908 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_4(
#line 908 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 908 "string.m"
  MR_Word mercury__string__Closure_5,
#line 908 "string.m"
  MR_String mercury__string__String_6,
#line 908 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 908 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10,
#line 908 "string.m"
  MR_Cont mercury__string__cont,
#line 908 "string.m"
  void * mercury__string__cont_env_ptr)
#line 908 "string.m"
{
#line 4796 "string.m"
  {
#line 4796 "string.m"
    MR_bool mercury__string__succeeded;
#line 4796 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21717 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2580 "string.m"
}
#line 4798 "string.m"
    {
#line 4798 "string.m"
      mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4798 "string.m"
      return;
    }
#line 4796 "string.m"
  }
#line 908 "string.m"
}

#line 907 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_3(
#line 907 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 907 "string.m"
  MR_Word mercury__string__Closure_5,
#line 907 "string.m"
  MR_String mercury__string__String_6,
#line 907 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 907 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10,
#line 907 "string.m"
  MR_Cont mercury__string__cont,
#line 907 "string.m"
  void * mercury__string__cont_env_ptr)
#line 907 "string.m"
{
#line 4796 "string.m"
  {
#line 4796 "string.m"
    MR_bool mercury__string__succeeded;
#line 4796 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21775 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2580 "string.m"
}
#line 4798 "string.m"
    {
#line 4798 "string.m"
      mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4798 "string.m"
      return;
    }
#line 4796 "string.m"
  }
#line 907 "string.m"
}

#line 906 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_4_p_2(
#line 906 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 906 "string.m"
  MR_Word mercury__string__Closure_5,
#line 906 "string.m"
  MR_String mercury__string__String_6,
#line 906 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 906 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 906 "string.m"
{
#line 4796 "string.m"
  {
#line 4796 "string.m"
    MR_bool mercury__string__succeeded;
#line 4796 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21829 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2580 "string.m"
}
#line 4798 "string.m"
    {
#line 4798 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
    }
#line 4796 "string.m"
    return mercury__string__succeeded;
#line 4796 "string.m"
  }
#line 906 "string.m"
}

#line 905 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_1(
#line 905 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 905 "string.m"
  MR_Word mercury__string__Closure_5,
#line 905 "string.m"
  MR_String mercury__string__String_6,
#line 905 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 905 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 905 "string.m"
{
#line 4796 "string.m"
  {
#line 4796 "string.m"
    MR_bool mercury__string__succeeded;
#line 4796 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21883 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2580 "string.m"
}
#line 4798 "string.m"
    {
#line 4798 "string.m"
      mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
#line 4798 "string.m"
      return;
    }
#line 4796 "string.m"
  }
#line 905 "string.m"
}

#line 904 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_0(
#line 904 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 904 "string.m"
  MR_Word mercury__string__Closure_5,
#line 904 "string.m"
  MR_String mercury__string__String_6,
#line 904 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 904 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 904 "string.m"
{
#line 4796 "string.m"
  {
#line 4796 "string.m"
    MR_bool mercury__string__succeeded;
#line 4796 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21937 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2580 "string.m"
}
#line 4798 "string.m"
    {
#line 4798 "string.m"
      mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
#line 4798 "string.m"
      return;
    }
#line 4796 "string.m"
  }
#line 904 "string.m"
}

#line 902 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_3_f_0(
#line 902 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 902 "string.m"
  MR_Word mercury__string__F_5,
#line 902 "string.m"
  MR_String mercury__string__S_6,
#line 902 "string.m"
  MR_Box mercury__string__A_7)
#line 902 "string.m"
{
#line 4792 "string.m"
  {
#line 4792 "string.m"
    MR_bool mercury__string__succeeded;
#line 4792 "string.m"
    MR_Box mercury__string__B_8;
#line 4792 "string.m"
    MR_Integer mercury__string__Length_25;
#line 4792 "string.m"
    MR_Integer mercury__string__End_39;
#line 4792 "string.m"
    MR_Integer mercury__string__V_41_41;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 21995 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_25  = Length;
#line 2580 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22015 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_41_41  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
    mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_41_41);
#line 243 "int.opt"
    if (mercury__string__succeeded)
#line 242 "int.opt"
      mercury__string__End_39 = mercury__string__Length_25;
#line 243 "int.opt"
    else
#line 244 "int.opt"
      mercury__string__End_39 = mercury__string__V_41_41;
#line 4807 "string.m"
    {
#line 4807 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__S_6, (MR_Integer) 0, mercury__string__End_39, mercury__string__A_7, &mercury__string__B_8);
    }
#line 4792 "string.m"
    return mercury__string__B_8;
#line 4792 "string.m"
  }
#line 902 "string.m"
}

#line 885 "string.m"
MR_String MR_CALL 
mercury__string__word_wrap_separator_3_f_0(
#line 885 "string.m"
  MR_String mercury__string__Str_5,
#line 885 "string.m"
  MR_Integer mercury__string__N_6,
#line 885 "string.m"
  MR_String mercury__string__WordSep0_7)
#line 885 "string.m"
{
#line 4665 "string.m"
  {
#line 4665 "string.m"
    MR_bool mercury__string__succeeded;
#line 4665 "string.m"
    MR_String mercury__string__Wrapped_8;
#line 4665 "string.m"
    MR_Word mercury__string__TypeCtorInfo_20_20;
#line 4665 "string.m"
    MR_Word mercury__string__Words_9;
#line 4665 "string.m"
    MR_Integer mercury__string__SepLen0_10;
#line 4665 "string.m"
    MR_String mercury__string__WordSep_11;
#line 4665 "string.m"
    MR_Integer mercury__string__SepLen_12;
#line 4665 "string.m"
    MR_Word mercury__string__RevWordsSpacesNls0_15;
#line 4665 "string.m"
    MR_Word mercury__string__RevWordsSpacesNls_16;
#line 4665 "string.m"
    MR_Word mercury__string__WordsSpacesNls_17;
#line 4665 "string.m"
    MR_Integer mercury__string__WordStart_25;

#line 4321 "string.m"
    {
#line 4321 "string.m"
      mercury__string__next_boundary__ho39_4_p_0(mercury__string__Str_5, (MR_Integer) 0, &mercury__string__WordStart_25);
    }
#line 4322 "string.m"
    {
#line 4322 "string.m"
      mercury__string__words_loop__ho40_4_p_0(mercury__string__Str_5, mercury__string__WordStart_25, &mercury__string__Words_9);
    }
#line 2640 "string.m"
    {
#line 2640 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__WordSep0_7, &mercury__string__SepLen0_10);
    }
#line 4668 "string.m"
    mercury__string__succeeded = (mercury__string__SepLen0_10 < mercury__string__N_6);
#line 4671 "string.m"
    if (mercury__string__succeeded)
#line 4669 "string.m"
      {
#line 4669 "string.m"
        mercury__string__WordSep_11 = mercury__string__WordSep0_7;
#line 4670 "string.m"
        mercury__string__SepLen_12 = mercury__string__SepLen0_10;
#line 4669 "string.m"
      }
#line 4671 "string.m"
    else
#line 4672 "string.m"
      {
#line 4672 "string.m"
        mercury__string__WordSep_11 = (MR_String) "";
#line 4673 "string.m"
        mercury__string__SepLen_12 = (MR_Integer) 0;
#line 4672 "string.m"
      }
#line 4677 "string.m"
    mercury__string__RevWordsSpacesNls0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4678 "string.m"
    {
#line 4678 "string.m"
      mercury__string__word_wrap_loop_7_p_0(mercury__string__Words_9, mercury__string__WordSep_11, mercury__string__SepLen_12, (MR_Integer) 1, mercury__string__N_6, mercury__string__RevWordsSpacesNls0_15, &mercury__string__RevWordsSpacesNls_16);
    }
#line 22124 "string.c"
    mercury__string__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4680 "string.m"
    {
#line 4680 "string.m"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_20_20, mercury__string__RevWordsSpacesNls_16, &mercury__string__WordsSpacesNls_17);
    }
#line 4681 "string.m"
    {
#line 4681 "string.m"
      return mercury__string__Wrapped_8 = mercury__string__append_list_1_f_0(mercury__string__WordsSpacesNls_17);
    }
#line 4665 "string.m"
    return mercury__string__Wrapped_8;
#line 4665 "string.m"
  }
#line 885 "string.m"
}

#line 876 "string.m"
MR_String MR_CALL 
mercury__string__word_wrap_2_f_0(
#line 876 "string.m"
  MR_String mercury__string__Str_4,
#line 876 "string.m"
  MR_Integer mercury__string__N_5)
#line 876 "string.m"
{
#line 4663 "string.m"
  {
#line 4663 "string.m"
    MR_bool mercury__string__succeeded;
#line 4663 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 4663 "string.m"
    {
#line 4663 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__word_wrap_separator_3_f_0(mercury__string__Str_4, mercury__string__N_5, (MR_String) "");
    }
#line 4663 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4663 "string.m"
  }
#line 876 "string.m"
}

#line 865 "string.m"
void MR_CALL 
mercury__string__replace_all_4_p_0(
#line 865 "string.m"
  MR_String mercury__string__Str_5,
#line 865 "string.m"
  MR_String mercury__string__Pat_6,
#line 865 "string.m"
  MR_String mercury__string__Subst_7,
#line 865 "string.m"
  MR_String * mercury__string__Result_8)
#line 865 "string.m"
{
#line 4639 "string.m"
  {
#line 4639 "string.m"
    MR_bool mercury__string__succeeded = (strcmp(mercury__string__Pat_6, (MR_String) "") == 0);

#line 4639 "string.m"
    if (mercury__string__succeeded)
#line 4636 "string.m"
      {
#line 4636 "string.m"
        MR_Word mercury__string__TypeCtorInfo_29_29;
#line 4636 "string.m"
        MR_Word mercury__string__Foldl_12;
#line 4636 "string.m"
        MR_Word mercury__string__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4636 "string.m"
        MR_Word mercury__string__V_22_22;
#line 4636 "string.m"
        MR_Word mercury__string__V_23_23;
#line 4636 "string.m"
        MR_Integer mercury__string__Length_51;
#line 4636 "string.m"
        MR_Integer mercury__string__End_67;
#line 4636 "string.m"
        MR_Integer mercury__string__V_69_69;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22223 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_51  = Length;
#line 2580 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22243 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_69_69  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
        mercury__string__succeeded = (mercury__string__Length_51 < mercury__string__V_69_69);
#line 243 "int.opt"
        if (mercury__string__succeeded)
#line 242 "int.opt"
          mercury__string__End_67 = mercury__string__Length_51;
#line 243 "int.opt"
        else
#line 244 "int.opt"
          mercury__string__End_67 = mercury__string__V_69_69;
#line 4807 "string.m"
        {
#line 4807 "string.m"
          mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_53_95_95_91_49_44_32_51_93_95_48_6_p_0(mercury__string__Subst_7, mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_67, mercury__string__V_21_21, &mercury__string__Foldl_12);
        }
#line 22265 "string.c"
        mercury__string__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1040 "list.opt"
        {
#line 1040 "list.opt"
          mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_29_29, mercury__string__Foldl_12, &mercury__string__V_23_23);
        }
#line 4638 "string.m"
        {
#line 4638 "string.m"
          mercury__string__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4638 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_22_22, 0) = ((MR_Box) (mercury__string__Subst_7));
#line 4638 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_22_22, 1) = ((MR_Box) (mercury__string__V_23_23));
#line 4638 "string.m"
        }
#line 4638 "string.m"
        {
#line 4638 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__V_22_22);
        }
#line 4636 "string.m"
      }
#line 4639 "string.m"
    else
#line 4640 "string.m"
      {
#line 4640 "string.m"
        MR_Word mercury__string__TypeCtorInfo_30_30;
#line 4640 "string.m"
        MR_Integer mercury__string__PatLength_13;
#line 4640 "string.m"
        MR_Word mercury__string__ReversedChunks_14;
#line 4640 "string.m"
        MR_Word mercury__string__Chunks_15;
#line 4640 "string.m"
        MR_Word mercury__string__V_25_25;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22317 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PatLength_13  = Length;
#line 2580 "string.m"
}
#line 4641 "string.m"
        mercury__string__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4641 "string.m"
        {
#line 4641 "string.m"
          mercury__string__replace_all_loop_7_p_0(mercury__string__Str_5, mercury__string__Pat_6, mercury__string__Subst_7, mercury__string__PatLength_13, (MR_Integer) 0, mercury__string__V_25_25, &mercury__string__ReversedChunks_14);
        }
#line 22331 "string.c"
        mercury__string__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4642 "string.m"
        {
#line 4642 "string.m"
          mercury__string__Chunks_15 = mercury__list__reverse_1_f_0(mercury__string__TypeCtorInfo_30_30, mercury__string__ReversedChunks_14);
        }
#line 4643 "string.m"
        {
#line 4643 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__Chunks_15);
        }
#line 4640 "string.m"
      }
#line 4639 "string.m"
  }
#line 865 "string.m"
}

#line 864 "string.m"
MR_String MR_CALL 
mercury__string__replace_all_3_f_0(
#line 864 "string.m"
  MR_String mercury__string__S1_5,
#line 864 "string.m"
  MR_String mercury__string__S2_6,
#line 864 "string.m"
  MR_String mercury__string__S3_7)
#line 864 "string.m"
{
#line 4632 "string.m"
  {
#line 4632 "string.m"
    MR_bool mercury__string__succeeded;
#line 4632 "string.m"
    MR_String mercury__string__S4_8;

#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__replace_all_4_p_0(mercury__string__S1_5, mercury__string__S2_6, mercury__string__S3_7, &mercury__string__S4_8);
    }
#line 4632 "string.m"
    return mercury__string__S4_8;
#line 4632 "string.m"
  }
#line 864 "string.m"
}

#line 857 "string.m"
MR_bool MR_CALL 
mercury__string__replace_4_p_0(
#line 857 "string.m"
  MR_String mercury__string__Str_5,
#line 857 "string.m"
  MR_String mercury__string__Pat_6,
#line 857 "string.m"
  MR_String mercury__string__Subst_7,
#line 857 "string.m"
  MR_String * mercury__string__Result_8)
#line 857 "string.m"
{
#line 4620 "string.m"
  {
#line 4620 "string.m"
    MR_bool mercury__string__succeeded;
#line 4620 "string.m"
    MR_Integer mercury__string__Index_9;
#line 4620 "string.m"
    MR_String mercury__string__Initial_10;
#line 4620 "string.m"
    MR_Integer mercury__string__BeginAt_11;
#line 4620 "string.m"
    MR_Integer mercury__string__EndAt_12;
#line 4620 "string.m"
    MR_String mercury__string__Final_13;
#line 4620 "string.m"
    MR_Integer mercury__string__V_14_14;
#line 4620 "string.m"
    MR_Integer mercury__string__V_15_15;
#line 4620 "string.m"
    MR_Word mercury__string__V_16_16;
#line 4620 "string.m"
    MR_Word mercury__string__V_17_17;
#line 4620 "string.m"
    MR_Word mercury__string__V_18_18;
#line 4620 "string.m"
    MR_Word mercury__string__V_19_19;

#line 3182 "string.m"
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
#line 3182 "string.m"
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
#line 22449 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_9  = Index;
#line 3182 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4620 "string.m"
    if (mercury__string__succeeded)
#line 4620 "string.m"
      {
#line 4623 "string.m"
        mercury__string__V_14_14 = (MR_Integer) 0;
#line 4284 "string.m"
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
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 22487 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_10  = SubString;
#line 4284 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22507 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_15_15  = Length;
#line 2580 "string.m"
}
#line 4625 "string.m"
        mercury__string__BeginAt_11 = (mercury__string__Index_9 + mercury__string__V_15_15);
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22529 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndAt_12  = Length;
#line 2580 "string.m"
}
#line 4284 "string.m"
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
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 22558 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Final_13  = SubString;
#line 4284 "string.m"
}
#line 4629 "string.m"
        mercury__string__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4629 "string.m"
        {
#line 4629 "string.m"
          mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4629 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Final_13));
#line 4629 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__V_19_19));
#line 4629 "string.m"
        }
#line 4629 "string.m"
        {
#line 4629 "string.m"
          mercury__string__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4629 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_17_17, 0) = ((MR_Box) (mercury__string__Subst_7));
#line 4629 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_17_17, 1) = ((MR_Box) (mercury__string__V_18_18));
#line 4629 "string.m"
        }
#line 4629 "string.m"
        {
#line 4629 "string.m"
          mercury__string__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4629 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_16_16, 0) = ((MR_Box) (mercury__string__Initial_10));
#line 4629 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_16_16, 1) = ((MR_Box) (mercury__string__V_17_17));
#line 4629 "string.m"
        }
#line 4629 "string.m"
        {
#line 4629 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__V_16_16);
        }
#line 4629 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 4620 "string.m"
      }
#line 4620 "string.m"
    return mercury__string__succeeded;
#line 4620 "string.m"
  }
#line 857 "string.m"
}

#line 848 "string.m"
MR_String MR_CALL 
mercury__string__rstrip_pred_2_f_0(
#line 848 "string.m"
  MR_Word mercury__string__P_4,
#line 848 "string.m"
  MR_String mercury__string__S_5)
#line 848 "string.m"
{
#line 4614 "string.m"
  {
#line 4614 "string.m"
    MR_bool mercury__string__succeeded;
#line 4614 "string.m"
    MR_String mercury__string__HeadVar__3_3;
#line 4614 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4614 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4614 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4614 "string.m"
    MR_Integer mercury__string__End_16;
#line 4614 "string.m"
    MR_Integer mercury__string__Index_17;
#line 4097 "string.m"
    MR_String mercury__string___RightString_29;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22654 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2580 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22674 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_16  = Length;
#line 2580 "string.m"
}
#line 3157 "string.m"
    {
#line 3157 "string.m"
      mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_16, &mercury__string__Index_17);
    }
#line 3155 "string.m"
    mercury__string__V_8_8 = (mercury__string__End_16 - mercury__string__Index_17);
#line 4614 "string.m"
    mercury__string__V_6_6 = (mercury__string__V_7_7 - mercury__string__V_8_8);
#line 4097 "string.m"
    {
#line 4097 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__V_6_6, &mercury__string__HeadVar__3_3, &mercury__string___RightString_29);
    }
#line 4614 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4614 "string.m"
  }
#line 848 "string.m"
}

#line 840 "string.m"
MR_String MR_CALL 
mercury__string__lstrip_pred_2_f_0(
#line 840 "string.m"
  MR_Word mercury__string__P_4,
#line 840 "string.m"
  MR_String mercury__string__S_5)
#line 840 "string.m"
{
#line 4616 "string.m"
  {
#line 4616 "string.m"
    MR_bool mercury__string__succeeded;
#line 4616 "string.m"
    MR_String mercury__string__HeadVar__3_3;
#line 4616 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4616 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4616 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4616 "string.m"
    MR_Integer mercury__string__Length_24;
#line 4616 "string.m"
    MR_Integer mercury__string__LeftCount_25;
#line 4111 "string.m"
    MR_String mercury__string___LeftString_26;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22743 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2580 "string.m"
}
#line 3140 "string.m"
    {
#line 3140 "string.m"
      mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__V_8_8);
    }
#line 4616 "string.m"
    mercury__string__V_6_6 = (mercury__string__V_7_7 - mercury__string__V_8_8);
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22770 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_24  = Length;
#line 2580 "string.m"
}
#line 4110 "string.m"
    mercury__string__LeftCount_25 = (mercury__string__Length_24 - mercury__string__V_6_6);
#line 4111 "string.m"
    {
#line 4111 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__LeftCount_25, &mercury__string___LeftString_26, &mercury__string__HeadVar__3_3);
    }
#line 4616 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4616 "string.m"
  }
#line 840 "string.m"
}

#line 833 "string.m"
MR_String MR_CALL 
mercury__string__strip_1_f_0(
#line 833 "string.m"
  MR_String mercury__string__S0_3)
#line 833 "string.m"
{
#line 4605 "string.m"
  {
#line 4605 "string.m"
    MR_bool mercury__string__succeeded;
#line 4605 "string.m"
    MR_String mercury__string__S_4;
#line 4605 "string.m"
    MR_Integer mercury__string__L_5;
#line 4605 "string.m"
    MR_Integer mercury__string__R_6;
#line 4605 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4605 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4605 "string.m"
    MR_Integer mercury__string__End_21;
#line 4605 "string.m"
    MR_Integer mercury__string__Index_22;

#line 3140 "string.m"
    {
#line 3140 "string.m"
      mercury__string__prefix_length_loop__ho36_4_p_0(mercury__string__S0_3, (MR_Integer) 0, &mercury__string__L_5);
    }
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22835 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_21  = Length;
#line 2580 "string.m"
}
#line 3157 "string.m"
    {
#line 3157 "string.m"
      mercury__string__suffix_length_loop__ho37_4_p_0(mercury__string__S0_3, mercury__string__End_21, &mercury__string__Index_22);
    }
#line 3155 "string.m"
    mercury__string__R_6 = (mercury__string__End_21 - mercury__string__Index_22);
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22862 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2580 "string.m"
}
#line 4608 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__R_6);
#line 4124 "string.m"
    {
#line 4124 "string.m"
      mercury__string__between_4_p_0(mercury__string__S0_3, mercury__string__L_5, mercury__string__V_9_9, &mercury__string__S_4);
    }
#line 4605 "string.m"
    return mercury__string__S_4;
#line 4605 "string.m"
  }
#line 833 "string.m"
}

#line 826 "string.m"
MR_String MR_CALL 
mercury__string__rstrip_1_f_0(
#line 826 "string.m"
  MR_String mercury__string__S_3)
#line 826 "string.m"
{
#line 4610 "string.m"
  {
#line 4610 "string.m"
    MR_bool mercury__string__succeeded;
#line 4610 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 4610 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4610 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4610 "string.m"
    MR_Integer mercury__string__V_11_11;
#line 4610 "string.m"
    MR_Integer mercury__string__End_20;
#line 4610 "string.m"
    MR_Integer mercury__string__Index_21;
#line 4097 "string.m"
    MR_String mercury__string___RightString_33;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22922 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2580 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 22942 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_20  = Length;
#line 2580 "string.m"
}
#line 3157 "string.m"
    {
#line 3157 "string.m"
      mercury__string__suffix_length_loop__ho37_4_p_0(mercury__string__S_3, mercury__string__End_20, &mercury__string__Index_21);
    }
#line 3155 "string.m"
    mercury__string__V_11_11 = (mercury__string__End_20 - mercury__string__Index_21);
#line 4614 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 4097 "string.m"
    {
#line 4097 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__V_9_9, &mercury__string__HeadVar__2_2, &mercury__string___RightString_33);
    }
#line 4610 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4610 "string.m"
  }
#line 826 "string.m"
}

#line 819 "string.m"
MR_String MR_CALL 
mercury__string__lstrip_1_f_0(
#line 819 "string.m"
  MR_String mercury__string__S_3)
#line 819 "string.m"
{
#line 4612 "string.m"
  {
#line 4612 "string.m"
    MR_bool mercury__string__succeeded;
#line 4612 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 4612 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4612 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4612 "string.m"
    MR_Integer mercury__string__V_11_11;
#line 4612 "string.m"
    MR_Integer mercury__string__Length_28;
#line 4612 "string.m"
    MR_Integer mercury__string__LeftCount_29;
#line 4111 "string.m"
    MR_String mercury__string___LeftString_30;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 23009 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2580 "string.m"
}
#line 3140 "string.m"
    {
#line 3140 "string.m"
      mercury__string__prefix_length_loop__ho36_4_p_0(mercury__string__S_3, (MR_Integer) 0, &mercury__string__V_11_11);
    }
#line 4616 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 23036 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_28  = Length;
#line 2580 "string.m"
}
#line 4110 "string.m"
    mercury__string__LeftCount_29 = (mercury__string__Length_28 - mercury__string__V_9_9);
#line 4111 "string.m"
    {
#line 4111 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__LeftCount_29, &mercury__string___LeftString_30, &mercury__string__HeadVar__2_2);
    }
#line 4612 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4612 "string.m"
  }
#line 819 "string.m"
}

#line 812 "string.m"
MR_String MR_CALL 
mercury__string__chomp_1_f_0(
#line 812 "string.m"
  MR_String mercury__string__S_3)
#line 812 "string.m"
{
#line 4601 "string.m"
  {
#line 4601 "string.m"
    MR_bool mercury__string__succeeded;
#line 4601 "string.m"
    MR_String mercury__string__Chomp_4;
#line 4601 "string.m"
    MR_Integer mercury__string__Offset_5;
#line 4599 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4599 "string.m"
    MR_Char mercury__string__V_8_8;
#line 4599 "string.m"
    MR_Integer mercury__string__Len_18;
#line 4599 "string.m"
    MR_Integer mercury__string__V_19_19;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 23094 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_6_6  = Length;
#line 2580 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 23114 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_18  = Length;
#line 2580 "string.m"
}
#line 2203 "string.m"
    mercury__string__V_19_19 = (mercury__string__V_6_6 - (MR_Integer) 1);
#line 2314 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__V_19_19 ;
	Length =  mercury__string__Len_18 ;
		{
#line 2314 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 23145 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2314 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4599 "string.m"
    if (mercury__string__succeeded)
#line 4599 "string.m"
      {
#line 2213 "string.m"
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
#line 2213 "string.m"

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

#line 23186 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Offset_5  = PrevIndex;
	 mercury__string__V_8_8  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4599 "string.m"
        if (mercury__string__succeeded)
#line 4599 "string.m"
          mercury__string__succeeded = ((MR_Char) 10 == mercury__string__V_8_8);
#line 4599 "string.m"
      }
#line 4601 "string.m"
    if (mercury__string__succeeded)
#line 4097 "string.m"
      {
#line 4097 "string.m"
        MR_String mercury__string___RightString_35;

#line 4097 "string.m"
        {
#line 4097 "string.m"
          mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__Offset_5, &mercury__string__Chomp_4, &mercury__string___RightString_35);
        }
#line 4097 "string.m"
      }
#line 4601 "string.m"
    else
#line 4602 "string.m"
      mercury__string__Chomp_4 = mercury__string__S_3;
#line 4601 "string.m"
    return mercury__string__Chomp_4;
#line 4601 "string.m"
  }
#line 812 "string.m"
}

#line 806 "string.m"
void MR_CALL 
mercury__string__pad_right_4_p_0(
#line 806 "string.m"
  MR_String mercury__string__String0_5,
#line 806 "string.m"
  MR_Char mercury__string__PadChar_6,
#line 806 "string.m"
  MR_Integer mercury__string__Width_7,
#line 806 "string.m"
  MR_String * mercury__string__String_8)
#line 806 "string.m"
{
#line 4588 "string.m"
  {
#line 4588 "string.m"
    MR_bool mercury__string__succeeded;
#line 4588 "string.m"
    MR_Integer mercury__string__Length_9;

#line 4589 "string.m"
    {
#line 4589 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    }
#line 4590 "string.m"
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
#line 4594 "string.m"
    if (mercury__string__succeeded)
#line 4591 "string.m"
      {
#line 4591 "string.m"
        MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
#line 4591 "string.m"
        MR_String mercury__string__PadString_11;

#line 4592 "string.m"
        {
#line 4592 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
        }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_right_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__String0_5 ;
	S2 =  mercury__string__PadString_11 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 23289 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
#line 3390 "string.m"
}
#line 4591 "string.m"
      }
#line 4594 "string.m"
    else
#line 4595 "string.m"
      *mercury__string__String_8 = mercury__string__String0_5;
#line 4588 "string.m"
  }
#line 806 "string.m"
}

#line 805 "string.m"
MR_String MR_CALL 
mercury__string__pad_right_3_f_0(
#line 805 "string.m"
  MR_String mercury__string__S1_5,
#line 805 "string.m"
  MR_Char mercury__string__C_6,
#line 805 "string.m"
  MR_Integer mercury__string__N_7)
#line 805 "string.m"
{
#line 4588 "string.m"
  {
#line 4588 "string.m"
    MR_bool mercury__string__succeeded;
#line 4588 "string.m"
    MR_String mercury__string__S2_8;
#line 4588 "string.m"
    MR_Integer mercury__string__Length_13;

#line 4589 "string.m"
    {
#line 4589 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    }
#line 4590 "string.m"
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
#line 4594 "string.m"
    if (mercury__string__succeeded)
#line 4591 "string.m"
      {
#line 4591 "string.m"
        MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
#line 4591 "string.m"
        MR_String mercury__string__PadString_15;

#line 4592 "string.m"
        {
#line 4592 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
        }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_right_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_5 ;
	S2 =  mercury__string__PadString_15 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 23368 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
#line 3390 "string.m"
}
#line 4591 "string.m"
      }
#line 4594 "string.m"
    else
#line 4595 "string.m"
      mercury__string__S2_8 = mercury__string__S1_5;
#line 4588 "string.m"
    return mercury__string__S2_8;
#line 4588 "string.m"
  }
#line 805 "string.m"
}

#line 797 "string.m"
void MR_CALL 
mercury__string__pad_left_4_p_0(
#line 797 "string.m"
  MR_String mercury__string__String0_5,
#line 797 "string.m"
  MR_Char mercury__string__PadChar_6,
#line 797 "string.m"
  MR_Integer mercury__string__Width_7,
#line 797 "string.m"
  MR_String * mercury__string__String_8)
#line 797 "string.m"
{
#line 4575 "string.m"
  {
#line 4575 "string.m"
    MR_bool mercury__string__succeeded;
#line 4575 "string.m"
    MR_Integer mercury__string__Length_9;

#line 4576 "string.m"
    {
#line 4576 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    }
#line 4577 "string.m"
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
#line 4581 "string.m"
    if (mercury__string__succeeded)
#line 4578 "string.m"
      {
#line 4578 "string.m"
        MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
#line 4578 "string.m"
        MR_String mercury__string__PadString_11;

#line 4579 "string.m"
        {
#line 4579 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
        }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_left_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_11 ;
	S2 =  mercury__string__String0_5 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 23449 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
#line 3390 "string.m"
}
#line 4578 "string.m"
      }
#line 4581 "string.m"
    else
#line 4582 "string.m"
      *mercury__string__String_8 = mercury__string__String0_5;
#line 4575 "string.m"
  }
#line 797 "string.m"
}

#line 796 "string.m"
MR_String MR_CALL 
mercury__string__pad_left_3_f_0(
#line 796 "string.m"
  MR_String mercury__string__S1_5,
#line 796 "string.m"
  MR_Char mercury__string__C_6,
#line 796 "string.m"
  MR_Integer mercury__string__N_7)
#line 796 "string.m"
{
#line 4575 "string.m"
  {
#line 4575 "string.m"
    MR_bool mercury__string__succeeded;
#line 4575 "string.m"
    MR_String mercury__string__S2_8;
#line 4575 "string.m"
    MR_Integer mercury__string__Length_13;

#line 4576 "string.m"
    {
#line 4576 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    }
#line 4577 "string.m"
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
#line 4581 "string.m"
    if (mercury__string__succeeded)
#line 4578 "string.m"
      {
#line 4578 "string.m"
        MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
#line 4578 "string.m"
        MR_String mercury__string__PadString_15;

#line 4579 "string.m"
        {
#line 4579 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
        }
#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_left_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_15 ;
	S2 =  mercury__string__S1_5 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 23528 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
#line 3390 "string.m"
}
#line 4578 "string.m"
      }
#line 4581 "string.m"
    else
#line 4582 "string.m"
      mercury__string__S2_8 = mercury__string__S1_5;
#line 4575 "string.m"
    return mercury__string__S2_8;
#line 4575 "string.m"
  }
#line 796 "string.m"
}

#line 788 "string.m"
MR_bool MR_CALL 
mercury__string__to_lower_2_p_1(
#line 788 "string.m"
  MR_String mercury__string__StrIn_3,
#line 788 "string.m"
  MR_String mercury__string__StrOut_4)
#line 788 "string.m"
{
#line 4558 "string.m"
  {
#line 4558 "string.m"
    MR_bool mercury__string__succeeded;
#line 4558 "string.m"
    MR_Word mercury__string__List_5;
#line 4558 "string.m"
    MR_Word mercury__string__ListLow_6;
#line 4558 "string.m"
    MR_String mercury__string__V_7_7;
#line 1496 "string.m"
    MR_String mercury__string__Str0_20;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1418 "string.m"
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
#line 23594 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1418 "string.m"
}
#line 4560 "string.m"
    {
#line 4560 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_5, &mercury__string__ListLow_6);
    }
#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_6, &mercury__string__Str0_20);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      mercury__string__V_7_7 = mercury__string__Str0_20;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1497 "string.m"
      }
#line 4561 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__StrOut_4, mercury__string__V_7_7) == 0);
#line 4558 "string.m"
    return mercury__string__succeeded;
#line 4558 "string.m"
  }
#line 788 "string.m"
}

#line 787 "string.m"
void MR_CALL 
mercury__string__to_lower_2_p_0(
#line 787 "string.m"
  MR_String mercury__string__StrIn_3,
#line 787 "string.m"
  MR_String * mercury__string__StrOut_4)
#line 787 "string.m"
{
#line 4558 "string.m"
  {
#line 4558 "string.m"
    MR_bool mercury__string__succeeded;
#line 4558 "string.m"
    MR_Word mercury__string__List_5;
#line 4558 "string.m"
    MR_Word mercury__string__ListLow_6;
#line 1496 "string.m"
    MR_String mercury__string__Str0_19;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1418 "string.m"
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
#line 23679 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1418 "string.m"
}
#line 4560 "string.m"
    {
#line 4560 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_5, &mercury__string__ListLow_6);
    }
#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_6, &mercury__string__Str0_19);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      *mercury__string__StrOut_4 = mercury__string__Str0_19;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1497 "string.m"
          return;
        }
#line 1497 "string.m"
      }
#line 4558 "string.m"
  }
#line 787 "string.m"
}

#line 785 "string.m"
MR_String MR_CALL 
mercury__string__to_lower_1_f_0(
#line 785 "string.m"
  MR_String mercury__string__S1_3)
#line 785 "string.m"
{
#line 4558 "string.m"
  {
#line 4558 "string.m"
    MR_bool mercury__string__succeeded;
#line 4558 "string.m"
    MR_String mercury__string__S2_4;
#line 4558 "string.m"
    MR_Word mercury__string__List_7;
#line 4558 "string.m"
    MR_Word mercury__string__ListLow_8;
#line 1496 "string.m"
    MR_String mercury__string__Str0_21;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S1_3 ;
		{
#line 1418 "string.m"
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
#line 23762 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_7  = CharList;
#line 1418 "string.m"
}
#line 4560 "string.m"
    {
#line 4560 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_7, &mercury__string__ListLow_8);
    }
#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_8, &mercury__string__Str0_21);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      mercury__string__S2_4 = mercury__string__Str0_21;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1497 "string.m"
      }
#line 4558 "string.m"
    return mercury__string__S2_4;
#line 4558 "string.m"
  }
#line 785 "string.m"
}

#line 780 "string.m"
MR_bool MR_CALL 
mercury__string__to_upper_2_p_1(
#line 780 "string.m"
  MR_String mercury__string__StrIn_3,
#line 780 "string.m"
  MR_String mercury__string__StrOut_4)
#line 780 "string.m"
{
#line 4543 "string.m"
  {
#line 4543 "string.m"
    MR_bool mercury__string__succeeded;
#line 4543 "string.m"
    MR_Word mercury__string__List_5;
#line 4543 "string.m"
    MR_Word mercury__string__ListUpp_6;
#line 4543 "string.m"
    MR_String mercury__string__V_7_7;
#line 1496 "string.m"
    MR_String mercury__string__Str0_20;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1418 "string.m"
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
#line 23847 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1418 "string.m"
}
#line 4545 "string.m"
    {
#line 4545 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_5, &mercury__string__ListUpp_6);
    }
#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_6, &mercury__string__Str0_20);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      mercury__string__V_7_7 = mercury__string__Str0_20;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1497 "string.m"
      }
#line 4546 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__StrOut_4, mercury__string__V_7_7) == 0);
#line 4543 "string.m"
    return mercury__string__succeeded;
#line 4543 "string.m"
  }
#line 780 "string.m"
}

#line 779 "string.m"
void MR_CALL 
mercury__string__to_upper_2_p_0(
#line 779 "string.m"
  MR_String mercury__string__StrIn_3,
#line 779 "string.m"
  MR_String * mercury__string__StrOut_4)
#line 779 "string.m"
{
#line 4543 "string.m"
  {
#line 4543 "string.m"
    MR_bool mercury__string__succeeded;
#line 4543 "string.m"
    MR_Word mercury__string__List_5;
#line 4543 "string.m"
    MR_Word mercury__string__ListUpp_6;
#line 1496 "string.m"
    MR_String mercury__string__Str0_19;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1418 "string.m"
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
#line 23932 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1418 "string.m"
}
#line 4545 "string.m"
    {
#line 4545 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_5, &mercury__string__ListUpp_6);
    }
#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_6, &mercury__string__Str0_19);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      *mercury__string__StrOut_4 = mercury__string__Str0_19;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1497 "string.m"
          return;
        }
#line 1497 "string.m"
      }
#line 4543 "string.m"
  }
#line 779 "string.m"
}

#line 777 "string.m"
MR_String MR_CALL 
mercury__string__to_upper_1_f_0(
#line 777 "string.m"
  MR_String mercury__string__S1_3)
#line 777 "string.m"
{
#line 4543 "string.m"
  {
#line 4543 "string.m"
    MR_bool mercury__string__succeeded;
#line 4543 "string.m"
    MR_String mercury__string__S2_4;
#line 4543 "string.m"
    MR_Word mercury__string__List_7;
#line 4543 "string.m"
    MR_Word mercury__string__ListUpp_8;
#line 1496 "string.m"
    MR_String mercury__string__Str0_21;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S1_3 ;
		{
#line 1418 "string.m"
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
#line 24015 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_7  = CharList;
#line 1418 "string.m"
}
#line 4545 "string.m"
    {
#line 4545 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_7, &mercury__string__ListUpp_8);
    }
#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_8, &mercury__string__Str0_21);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      mercury__string__S2_4 = mercury__string__Str0_21;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1497 "string.m"
      }
#line 4543 "string.m"
    return mercury__string__S2_4;
#line 4543 "string.m"
  }
#line 777 "string.m"
}

#line 772 "string.m"
void MR_CALL 
mercury__string__uncapitalize_first_2_p_0(
#line 772 "string.m"
  MR_String mercury__string__S0_3,
#line 772 "string.m"
  MR_String * mercury__string__S_4)
#line 772 "string.m"
{
#line 4536 "string.m"
  {
#line 4536 "string.m"
    MR_bool mercury__string__succeeded;
#line 4536 "string.m"
    MR_Char mercury__string__C_5;
#line 4536 "string.m"
    MR_String mercury__string__S1_6;

#line 3868 "string.m"
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
#line 3868 "string.m"
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
#line 24099 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
#line 3868 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4536 "string.m"
    if (mercury__string__succeeded)
#line 4534 "string.m"
      {
#line 4534 "string.m"
        MR_Char mercury__string__LowerC_7;
#line 122 "char.opt"
        MR_Char mercury__string__V_5_10;

#line 119 "char.opt"
        {
#line 119 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_1(&mercury__string__V_5_10, mercury__string__C_5);
        }
#line 122 "char.opt"
        if (mercury__string__succeeded)
#line 121 "char.opt"
          mercury__string__LowerC_7 = mercury__string__V_5_10;
#line 122 "char.opt"
        else
#line 123 "char.opt"
          mercury__string__LowerC_7 = mercury__string__C_5;
#line 3940 "string.m"
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__LowerC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
#line 3940 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 24151 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
#line 3940 "string.m"
}
#line 4534 "string.m"
      }
#line 4536 "string.m"
    else
#line 4537 "string.m"
      *mercury__string__S_4 = mercury__string__S0_3;
#line 4536 "string.m"
  }
#line 772 "string.m"
}

#line 771 "string.m"
MR_String MR_CALL 
mercury__string__uncapitalize_first_1_f_0(
#line 771 "string.m"
  MR_String mercury__string__S1_3)
#line 771 "string.m"
{
#line 4530 "string.m"
  {
#line 4530 "string.m"
    MR_bool mercury__string__succeeded;
#line 4530 "string.m"
    MR_String mercury__string__S2_4;

#line 4530 "string.m"
    {
#line 4530 "string.m"
      mercury__string__uncapitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    }
#line 4530 "string.m"
    return mercury__string__S2_4;
#line 4530 "string.m"
  }
#line 771 "string.m"
}

#line 766 "string.m"
void MR_CALL 
mercury__string__capitalize_first_2_p_0(
#line 766 "string.m"
  MR_String mercury__string__S0_3,
#line 766 "string.m"
  MR_String * mercury__string__S_4)
#line 766 "string.m"
{
#line 4525 "string.m"
  {
#line 4525 "string.m"
    MR_bool mercury__string__succeeded;
#line 4525 "string.m"
    MR_Char mercury__string__C_5;
#line 4525 "string.m"
    MR_String mercury__string__S1_6;

#line 3868 "string.m"
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
#line 3868 "string.m"
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
#line 24240 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
#line 3868 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4525 "string.m"
    if (mercury__string__succeeded)
#line 4523 "string.m"
      {
#line 4523 "string.m"
        MR_Char mercury__string__UpperC_7;
#line 134 "char.opt"
        MR_Char mercury__string__V_5_10;

#line 131 "char.opt"
        {
#line 131 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_0(mercury__string__C_5, &mercury__string__V_5_10);
        }
#line 134 "char.opt"
        if (mercury__string__succeeded)
#line 133 "char.opt"
          mercury__string__UpperC_7 = mercury__string__V_5_10;
#line 134 "char.opt"
        else
#line 135 "char.opt"
          mercury__string__UpperC_7 = mercury__string__C_5;
#line 3940 "string.m"
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__UpperC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
#line 3940 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 24292 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
#line 3940 "string.m"
}
#line 4523 "string.m"
      }
#line 4525 "string.m"
    else
#line 4526 "string.m"
      *mercury__string__S_4 = mercury__string__S0_3;
#line 4525 "string.m"
  }
#line 766 "string.m"
}

#line 765 "string.m"
MR_String MR_CALL 
mercury__string__capitalize_first_1_f_0(
#line 765 "string.m"
  MR_String mercury__string__S1_3)
#line 765 "string.m"
{
#line 4519 "string.m"
  {
#line 4519 "string.m"
    MR_bool mercury__string__succeeded;
#line 4519 "string.m"
    MR_String mercury__string__S2_4;

#line 4519 "string.m"
    {
#line 4519 "string.m"
      mercury__string__capitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    }
#line 4519 "string.m"
    return mercury__string__S2_4;
#line 4519 "string.m"
  }
#line 765 "string.m"
}

#line 755 "string.m"
MR_String MR_CALL 
mercury__string__remove_suffix_if_present_2_f_0(
#line 755 "string.m"
  MR_String mercury__string__Suffix_4,
#line 755 "string.m"
  MR_String mercury__string__String_5)
#line 755 "string.m"
{
#line 4504 "string.m"
  {
#line 4504 "string.m"
    MR_bool mercury__string__succeeded;
#line 4504 "string.m"
    MR_String mercury__string__Out_6;
#line 4504 "string.m"
    MR_Integer mercury__string__LeftCount_7;
#line 4504 "string.m"
    MR_String mercury__string__LeftString_8;
#line 4504 "string.m"
    MR_String mercury__string__RightString_9;
#line 4504 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4504 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 24375 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2580 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_4 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 24395 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2580 "string.m"
}
#line 4505 "string.m"
    mercury__string__LeftCount_7 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 4506 "string.m"
    {
#line 4506 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_5, mercury__string__LeftCount_7, &mercury__string__LeftString_8, &mercury__string__RightString_9);
    }
#line 4507 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__RightString_9, mercury__string__Suffix_4) == 0);
#line 4509 "string.m"
    if (mercury__string__succeeded)
#line 4508 "string.m"
      mercury__string__Out_6 = mercury__string__LeftString_8;
#line 4509 "string.m"
    else
#line 4510 "string.m"
      mercury__string__Out_6 = mercury__string__String_5;
#line 4504 "string.m"
    return mercury__string__Out_6;
#line 4504 "string.m"
  }
#line 755 "string.m"
}

#line 750 "string.m"
MR_String MR_CALL 
mercury__string__det_remove_suffix_2_f_0(
#line 750 "string.m"
  MR_String mercury__string__String_4,
#line 750 "string.m"
  MR_String mercury__string__Suffix_5)
#line 750 "string.m"
{
#line 4500 "string.m"
  {
#line 4500 "string.m"
    MR_bool mercury__string__succeeded;
#line 4500 "string.m"
    MR_String mercury__string__StringWithoutSuffix_6;
#line 4500 "string.m"
    MR_String mercury__string__StringWithoutSuffixPrime_7;

#line 4498 "string.m"
    {
#line 4498 "string.m"
      mercury__string__succeeded = mercury__string__remove_suffix_3_p_0(mercury__string__String_4, mercury__string__Suffix_5, &mercury__string__StringWithoutSuffixPrime_7);
    }
#line 4500 "string.m"
    if (mercury__string__succeeded)
#line 4499 "string.m"
      mercury__string__StringWithoutSuffix_6 = mercury__string__StringWithoutSuffixPrime_7;
#line 4500 "string.m"
    else
#line 4501 "string.m"
      {
#line 4501 "string.m"
        {
#line 4501 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_remove_suffix: string does not have given suffix");
        }
#line 4501 "string.m"
      }
#line 4500 "string.m"
    return mercury__string__StringWithoutSuffix_6;
#line 4500 "string.m"
  }
#line 750 "string.m"
}

#line 745 "string.m"
MR_bool MR_CALL 
mercury__string__remove_suffix_3_p_0(
#line 745 "string.m"
  MR_String mercury__string__String_4,
#line 745 "string.m"
  MR_String mercury__string__Suffix_5,
#line 745 "string.m"
  MR_String * mercury__string__StringWithoutSuffix_6)
#line 745 "string.m"
{
#line 4493 "string.m"
  {
#line 4493 "string.m"
    MR_bool mercury__string__succeeded;
#line 4493 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4493 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4493 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4493 "string.m"
    MR_Integer mercury__string__Len_12;
#line 4493 "string.m"
    MR_Integer mercury__string__PreLen_13;
#line 4493 "string.m"
    MR_Integer mercury__string__V_14_14;
#line 4493 "string.m"
    MR_Integer mercury__string__V_15_15;
#line 4097 "string.m"
    MR_String mercury__string___RightString_43;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 24516 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2580 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 24536 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_13  = Length;
#line 2580 "string.m"
}
#line 4453 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_13 <= mercury__string__Len_12);
#line 4493 "string.m"
    if (mercury__string__succeeded)
#line 4493 "string.m"
      {
#line 4454 "string.m"
        mercury__string__V_14_14 = (MR_Integer) 0;
#line 4454 "string.m"
        mercury__string__V_15_15 = (mercury__string__Len_12 - mercury__string__PreLen_13);
#line 4454 "string.m"
        {
#line 4454 "string.m"
          mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_4, mercury__string__Suffix_5, mercury__string__V_14_14, mercury__string__V_15_15, mercury__string__PreLen_13);
        }
#line 4493 "string.m"
        if (mercury__string__succeeded)
#line 4493 "string.m"
          {
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 24575 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = Length;
#line 2580 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 24595 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = Length;
#line 2580 "string.m"
}
#line 4495 "string.m"
            mercury__string__V_7_7 = (mercury__string__V_8_8 - mercury__string__V_9_9);
#line 4097 "string.m"
            {
#line 4097 "string.m"
              mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__V_7_7, mercury__string__StringWithoutSuffix_6, &mercury__string___RightString_43);
            }
#line 4097 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4493 "string.m"
          }
#line 4493 "string.m"
      }
#line 4493 "string.m"
    return mercury__string__succeeded;
#line 4493 "string.m"
  }
#line 745 "string.m"
}

#line 738 "string.m"
MR_String MR_CALL 
mercury__string__remove_prefix_if_present_2_f_0(
#line 738 "string.m"
  MR_String mercury__string__Prefix_4,
#line 738 "string.m"
  MR_String mercury__string__String_5)
#line 738 "string.m"
{
#line 4489 "string.m"
  {
#line 4489 "string.m"
    MR_bool mercury__string__succeeded;
#line 4489 "string.m"
    MR_String mercury__string__Out_6;
#line 4489 "string.m"
    MR_String mercury__string__Suffix_7;

#line 3338 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_prefix_if_present_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
#line 3338 "string.m"
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
#line 24670 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Suffix_7  = S2;
#line 3338 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4489 "string.m"
    if (mercury__string__succeeded)
#line 4488 "string.m"
      mercury__string__Out_6 = mercury__string__Suffix_7;
#line 4489 "string.m"
    else
#line 4490 "string.m"
      mercury__string__Out_6 = mercury__string__String_5;
#line 4489 "string.m"
    return mercury__string__Out_6;
#line 4489 "string.m"
  }
#line 738 "string.m"
}

#line 733 "string.m"
MR_bool MR_CALL 
mercury__string__remove_prefix_3_p_0(
#line 733 "string.m"
  MR_String mercury__string__Prefix_4,
#line 733 "string.m"
  MR_String mercury__string__String_5,
#line 733 "string.m"
  MR_String * mercury__string__Suffix_6)
#line 733 "string.m"
{
#line 3334 "string.m"
  {
#line 3334 "string.m"
    MR_bool mercury__string__succeeded;

#line 3338 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_prefix_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
#line 3338 "string.m"
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
#line 24741 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Suffix_6  = S2;
#line 3338 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3334 "string.m"
    return mercury__string__succeeded;
#line 3334 "string.m"
  }
#line 733 "string.m"
}

#line 726 "string.m"
void MR_CALL 
mercury__string__suffix_2_p_1(
#line 726 "string.m"
  MR_String mercury__string__String_1,
#line 726 "string.m"
  MR_String * mercury__string__Suffix_2,
#line 726 "string.m"
  MR_Cont mercury__string__cont,
#line 726 "string.m"
  void * mercury__string__cont_env_ptr)
#line 726 "string.m"
{
#line 4455 "string.m"
  {
#line 4455 "string.m"
    MR_bool mercury__string__succeeded;
#line 4455 "string.m"
    MR_Integer mercury__string__Len_11;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 24791 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_11  = Length;
#line 2580 "string.m"
}
#line 4457 "string.m"
    {
#line 4457 "string.m"
      mercury__string__suffix_2_ioii_4_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__Len_11, mercury__string__Len_11, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4457 "string.m"
      return;
    }
#line 4455 "string.m"
  }
#line 726 "string.m"
}

#line 725 "string.m"
MR_bool MR_CALL 
mercury__string__suffix_2_p_0(
#line 725 "string.m"
  MR_String mercury__string__String_1,
#line 725 "string.m"
  MR_String mercury__string__Suffix_2)
#line 725 "string.m"
{
#line 4450 "string.m"
  {
#line 4450 "string.m"
    MR_bool mercury__string__succeeded;
#line 4450 "string.m"
    MR_Integer mercury__string__Len_5;
#line 4450 "string.m"
    MR_Integer mercury__string__PreLen_6;
#line 4450 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4450 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 24845 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
#line 2580 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_2 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 24865 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
#line 2580 "string.m"
}
#line 4453 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
#line 4450 "string.m"
    if (mercury__string__succeeded)
#line 4450 "string.m"
      {
#line 4454 "string.m"
        mercury__string__V_7_7 = (MR_Integer) 0;
#line 4454 "string.m"
        mercury__string__V_8_8 = (mercury__string__Len_5 - mercury__string__PreLen_6);
#line 4454 "string.m"
        {
#line 4454 "string.m"
          return mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__V_7_7, mercury__string__V_8_8, mercury__string__PreLen_6);
        }
#line 4450 "string.m"
      }
#line 4450 "string.m"
    return mercury__string__succeeded;
#line 4450 "string.m"
  }
#line 725 "string.m"
}

#line 719 "string.m"
void MR_CALL 
mercury__string__prefix_2_p_1(
#line 719 "string.m"
  MR_String mercury__string__String_1,
#line 719 "string.m"
  MR_String * mercury__string__Prefix_2,
#line 719 "string.m"
  MR_Cont mercury__string__cont,
#line 719 "string.m"
  void * mercury__string__cont_env_ptr)
#line 719 "string.m"
{
#line 4424 "string.m"
  {
#line 4424 "string.m"
    MR_bool mercury__string__succeeded;

#line 4425 "string.m"
    {
#line 4425 "string.m"
      mercury__string__prefix_2_ioi_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, (MR_Integer) 0, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4425 "string.m"
      return;
    }
#line 4424 "string.m"
  }
#line 719 "string.m"
}

#line 718 "string.m"
MR_bool MR_CALL 
mercury__string__prefix_2_p_0(
#line 718 "string.m"
  MR_String mercury__string__String_1,
#line 718 "string.m"
  MR_String mercury__string__Prefix_2)
#line 718 "string.m"
{
#line 4419 "string.m"
  {
#line 4419 "string.m"
    MR_bool mercury__string__succeeded;
#line 4419 "string.m"
    MR_Integer mercury__string__Len_5;
#line 4419 "string.m"
    MR_Integer mercury__string__PreLen_6;
#line 4419 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4419 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 24961 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
#line 2580 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Prefix_2 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 24981 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
#line 2580 "string.m"
}
#line 4422 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
#line 4419 "string.m"
    if (mercury__string__succeeded)
#line 4419 "string.m"
      {
#line 4423 "string.m"
        mercury__string__V_8_8 = (MR_Integer) 1;
#line 4423 "string.m"
        mercury__string__V_7_7 = (mercury__string__PreLen_6 - mercury__string__V_8_8);
#line 4423 "string.m"
        {
#line 4423 "string.m"
          return mercury__string__succeeded = mercury__string__prefix_2_iii_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, mercury__string__V_7_7);
        }
#line 4419 "string.m"
      }
#line 4419 "string.m"
    return mercury__string__succeeded;
#line 4419 "string.m"
  }
#line 718 "string.m"
}

#line 707 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_string_2_f_0(
#line 707 "string.m"
  MR_String mercury__string__Needle_4,
#line 707 "string.m"
  MR_String mercury__string__Total_5)
#line 707 "string.m"
{
#line 4396 "string.m"
  {
#line 4396 "string.m"
    MR_bool mercury__string__succeeded;
#line 4396 "string.m"
    MR_Word mercury__string__HeadVar__3_3;
#line 4396 "string.m"
    MR_Integer mercury__string__V_7_7;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Needle_4 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 25043 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2580 "string.m"
}
#line 4397 "string.m"
    {
#line 4397 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__split_at_string_loop_4_f_0((MR_Integer) 0, mercury__string__V_7_7, mercury__string__Needle_4, mercury__string__Total_5);
    }
#line 4396 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4396 "string.m"
  }
#line 707 "string.m"
}

#line 697 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_char_2_f_0(
#line 697 "string.m"
  MR_Char mercury__string__C_4,
#line 697 "string.m"
  MR_String mercury__string__String_5)
#line 697 "string.m"
{
#line 4393 "string.m"
  {
#line 4393 "string.m"
    MR_bool mercury__string__succeeded;
#line 4393 "string.m"
    MR_Word mercury__string__HeadVar__3_3;
#line 4393 "string.m"
    MR_Integer mercury__string__Len_12;
#line 4393 "string.m"
    MR_Word mercury__string__V_14_14;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_char_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 25095 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2580 "string.m"
}
#line 4363 "string.m"
    mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4363 "string.m"
    {
#line 4363 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_53_95_95_91_50_93_95_48_6_p_0(mercury__string__C_4, mercury__string__String_5, mercury__string__Len_12, mercury__string__Len_12, mercury__string__V_14_14, &mercury__string__HeadVar__3_3);
    }
#line 4393 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4393 "string.m"
  }
#line 697 "string.m"
}

#line 692 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_separator_2_f_0(
#line 692 "string.m"
  MR_Word mercury__string__DelimP_4,
#line 692 "string.m"
  MR_String mercury__string__String_5)
#line 692 "string.m"
{
#line 4361 "string.m"
  {
#line 4361 "string.m"
    MR_bool mercury__string__succeeded;
#line 4361 "string.m"
    MR_Word mercury__string__Substrings_6;
#line 4361 "string.m"
    MR_Integer mercury__string__Len_7;
#line 4361 "string.m"
    MR_Word mercury__string__V_9_9;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_separator_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 25149 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
#line 2580 "string.m"
}
#line 4363 "string.m"
    mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4363 "string.m"
    {
#line 4363 "string.m"
      mercury__string__split_at_separator_loop_6_p_0(mercury__string__DelimP_4, mercury__string__String_5, mercury__string__Len_7, mercury__string__Len_7, mercury__string__V_9_9, &mercury__string__Substrings_6);
    }
#line 4361 "string.m"
    return mercury__string__Substrings_6;
#line 4361 "string.m"
  }
#line 692 "string.m"
}

#line 680 "string.m"
MR_Word MR_CALL 
mercury__string__words_1_f_0(
#line 680 "string.m"
  MR_String mercury__string__String_3)
#line 680 "string.m"
{
#line 4324 "string.m"
  {
#line 4324 "string.m"
    MR_bool mercury__string__succeeded;
#line 4324 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4324 "string.m"
    MR_Integer mercury__string__WordStart_10;

#line 4321 "string.m"
    {
#line 4321 "string.m"
      mercury__string__next_boundary__ho39_4_p_0(mercury__string__String_3, (MR_Integer) 0, &mercury__string__WordStart_10);
    }
#line 4322 "string.m"
    {
#line 4322 "string.m"
      mercury__string__words_loop__ho40_4_p_0(mercury__string__String_3, mercury__string__WordStart_10, &mercury__string__HeadVar__2_2);
    }
#line 4324 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4324 "string.m"
  }
#line 680 "string.m"
}

#line 675 "string.m"
MR_Word MR_CALL 
mercury__string__words_separator_2_f_0(
#line 675 "string.m"
  MR_Word mercury__string__SepP_4,
#line 675 "string.m"
  MR_String mercury__string__String_5)
#line 675 "string.m"
{
#line 4320 "string.m"
  {
#line 4320 "string.m"
    MR_bool mercury__string__succeeded;
#line 4320 "string.m"
    MR_Word mercury__string__Words_6;
#line 4320 "string.m"
    MR_Integer mercury__string__WordStart_7;

#line 4321 "string.m"
    {
#line 4321 "string.m"
      mercury__string__next_boundary_4_p_0(mercury__string__SepP_4, mercury__string__String_5, (MR_Integer) 0, &mercury__string__WordStart_7);
    }
#line 4322 "string.m"
    {
#line 4322 "string.m"
      mercury__string__words_loop_4_p_0(mercury__string__SepP_4, mercury__string__String_5, mercury__string__WordStart_7, &mercury__string__Words_6);
    }
#line 4320 "string.m"
    return mercury__string__Words_6;
#line 4320 "string.m"
  }
#line 675 "string.m"
}

#line 662 "string.m"
void MR_CALL 
mercury__string__unsafe_substring_4_p_0(
#line 662 "string.m"
  MR_String mercury__string__Str_5,
#line 662 "string.m"
  MR_Integer mercury__string__Start_6,
#line 662 "string.m"
  MR_Integer mercury__string__Count_7,
#line 662 "string.m"
  MR_String * mercury__string__SubString_8)
#line 662 "string.m"
{
#line 4315 "string.m"
  {
#line 4315 "string.m"
    MR_bool mercury__string__succeeded;
#line 4315 "string.m"
    MR_Integer mercury__string__V_9_9 = (mercury__string__Start_6 + mercury__string__Count_7);

#line 4284 "string.m"
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
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 25280 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_8  = SubString;
#line 4284 "string.m"
}
#line 4315 "string.m"
  }
#line 662 "string.m"
}

#line 661 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_substring_3_f_0(
#line 661 "string.m"
  MR_String mercury__string__Str_5,
#line 661 "string.m"
  MR_Integer mercury__string__Start_6,
#line 661 "string.m"
  MR_Integer mercury__string__Count_7)
#line 661 "string.m"
{
#line 4312 "string.m"
  {
#line 4312 "string.m"
    MR_bool mercury__string__succeeded;
#line 4312 "string.m"
    MR_String mercury__string__SubString_8;
#line 4312 "string.m"
    MR_Integer mercury__string__V_9_9 = (mercury__string__Start_6 + mercury__string__Count_7);

#line 4284 "string.m"
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
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 25334 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
#line 4284 "string.m"
}
#line 4312 "string.m"
    return mercury__string__SubString_8;
#line 4312 "string.m"
  }
#line 661 "string.m"
}

#line 654 "string.m"
void MR_CALL 
mercury__string__unsafe_between_4_p_0(
#line 654 "string.m"
  MR_String mercury__string__Str_1,
#line 654 "string.m"
  MR_Integer mercury__string__Start_2,
#line 654 "string.m"
  MR_Integer mercury__string__End_3,
#line 654 "string.m"
  MR_String * mercury__string__SubString_4)
#line 654 "string.m"
{
#line 4280 "string.m"
  {
#line 4280 "string.m"
    MR_bool mercury__string__succeeded;

#line 4284 "string.m"
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
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 25388 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
#line 4284 "string.m"
}
#line 4280 "string.m"
  }
#line 654 "string.m"
}

#line 653 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_between_3_f_0(
#line 653 "string.m"
  MR_String mercury__string__Str_5,
#line 653 "string.m"
  MR_Integer mercury__string__Start_6,
#line 653 "string.m"
  MR_Integer mercury__string__End_7)
#line 653 "string.m"
{
#line 4280 "string.m"
  {
#line 4280 "string.m"
    MR_bool mercury__string__succeeded;
#line 4280 "string.m"
    MR_String mercury__string__SubString_8;

#line 4284 "string.m"
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
#line 4284 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 25440 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
#line 4284 "string.m"
}
#line 4280 "string.m"
    return mercury__string__SubString_8;
#line 4280 "string.m"
  }
#line 653 "string.m"
}

#line 640 "string.m"
void MR_CALL 
mercury__string__between_codepoints_4_p_0(
#line 640 "string.m"
  MR_String mercury__string__Str_5,
#line 640 "string.m"
  MR_Integer mercury__string__Start_6,
#line 640 "string.m"
  MR_Integer mercury__string__End_7,
#line 640 "string.m"
  MR_String * mercury__string__SubString_8)
#line 640 "string.m"
{
#line 4258 "string.m"
  {
#line 4258 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Start_6 < (MR_Integer) 0);
#line 4258 "string.m"
    MR_Integer mercury__string__StartOffset_9;
#line 4258 "string.m"
    MR_Integer mercury__string__EndOffset_11;

#line 4261 "string.m"
    if (mercury__string__succeeded)
#line 4260 "string.m"
      mercury__string__StartOffset_9 = (MR_Integer) 0;
#line 4261 "string.m"
    else
#line 4263 "string.m"
      {
#line 4263 "string.m"
        MR_Integer mercury__string__StartOffset0_10;

#line 2771 "string.m"
        {
#line 2771 "string.m"
          mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Start_6, &mercury__string__StartOffset0_10);
        }
#line 4263 "string.m"
        if (mercury__string__succeeded)
#line 4262 "string.m"
          mercury__string__StartOffset_9 = mercury__string__StartOffset0_10;
#line 4263 "string.m"
        else
#line 2576 "string.m"
          {
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__between_codepoints_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 25513 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__StartOffset_9  = Length;
#line 2580 "string.m"
}
#line 2576 "string.m"
          }
#line 4263 "string.m"
      }
#line 4266 "string.m"
    mercury__string__succeeded = (mercury__string__End_7 <= mercury__string__Start_6);
#line 4268 "string.m"
    if (mercury__string__succeeded)
#line 4267 "string.m"
      mercury__string__EndOffset_11 = mercury__string__StartOffset_9;
#line 4268 "string.m"
    else
#line 4270 "string.m"
      {
#line 4270 "string.m"
        MR_Integer mercury__string__EndOffset0_12;

#line 2771 "string.m"
        {
#line 2771 "string.m"
          mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_7, &mercury__string__EndOffset0_12);
        }
#line 4270 "string.m"
        if (mercury__string__succeeded)
#line 4269 "string.m"
          mercury__string__EndOffset_11 = mercury__string__EndOffset0_12;
#line 4270 "string.m"
        else
#line 2576 "string.m"
          {
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__between_codepoints_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 25563 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndOffset_11  = Length;
#line 2580 "string.m"
}
#line 2576 "string.m"
          }
#line 4270 "string.m"
      }
#line 4273 "string.m"
    {
#line 4273 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__StartOffset_9, mercury__string__EndOffset_11, mercury__string__SubString_8);
#line 4273 "string.m"
      return;
    }
#line 4258 "string.m"
  }
#line 640 "string.m"
}

#line 638 "string.m"
MR_String MR_CALL 
mercury__string__between_codepoints_3_f_0(
#line 638 "string.m"
  MR_String mercury__string__Str_5,
#line 638 "string.m"
  MR_Integer mercury__string__Start_6,
#line 638 "string.m"
  MR_Integer mercury__string__End_7)
#line 638 "string.m"
{
#line 4256 "string.m"
  {
#line 4256 "string.m"
    MR_bool mercury__string__succeeded;
#line 4256 "string.m"
    MR_String mercury__string__SubString_8;

#line 4256 "string.m"
    {
#line 4256 "string.m"
      mercury__string__between_codepoints_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    }
#line 4256 "string.m"
    return mercury__string__SubString_8;
#line 4256 "string.m"
  }
#line 638 "string.m"
}

#line 627 "string.m"
void MR_CALL 
mercury__string__substring_4_p_0(
#line 627 "string.m"
  MR_String mercury__string__Str_5,
#line 627 "string.m"
  MR_Integer mercury__string__Start_6,
#line 627 "string.m"
  MR_Integer mercury__string__Count_7,
#line 627 "string.m"
  MR_String * mercury__string__SubString_8)
#line 627 "string.m"
{
#line 4234 "string.m"
  {
#line 4234 "string.m"
    MR_bool mercury__string__succeeded;
#line 4234 "string.m"
    MR_Integer mercury__string__ClampStart_9;
#line 4234 "string.m"
    MR_Integer mercury__string__ClampEnd_10;

#line 4235 "string.m"
    {
#line 4235 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_9, &mercury__string__ClampEnd_10);
    }
#line 4236 "string.m"
    {
#line 4236 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_9, mercury__string__ClampEnd_10, mercury__string__SubString_8);
#line 4236 "string.m"
      return;
    }
#line 4234 "string.m"
  }
#line 627 "string.m"
}

#line 626 "string.m"
MR_String MR_CALL 
mercury__string__substring_3_f_0(
#line 626 "string.m"
  MR_String mercury__string__Str_5,
#line 626 "string.m"
  MR_Integer mercury__string__Start_6,
#line 626 "string.m"
  MR_Integer mercury__string__Count_7)
#line 626 "string.m"
{
#line 4234 "string.m"
  {
#line 4234 "string.m"
    MR_bool mercury__string__succeeded;
#line 4234 "string.m"
    MR_String mercury__string__SubString_8;
#line 4234 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4234 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4235 "string.m"
    {
#line 4235 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4236 "string.m"
    {
#line 4236 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, &mercury__string__SubString_8);
    }
#line 4234 "string.m"
    return mercury__string__SubString_8;
#line 4234 "string.m"
  }
#line 626 "string.m"
}

#line 619 "string.m"
void MR_CALL 
mercury__string__between_4_p_0(
#line 619 "string.m"
  MR_String mercury__string__Str_1,
#line 619 "string.m"
  MR_Integer mercury__string__Start_2,
#line 619 "string.m"
  MR_Integer mercury__string__End_3,
#line 619 "string.m"
  MR_String * mercury__string__SubString_4)
#line 619 "string.m"
{
#line 4126 "string.m"
  {
#line 4126 "string.m"
    MR_bool mercury__string__succeeded;

#line 4130 "string.m"
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
#line 4130 "string.m"
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
#line 25747 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
#line 4130 "string.m"
}
#line 4126 "string.m"
  }
#line 619 "string.m"
}

#line 618 "string.m"
MR_String MR_CALL 
mercury__string__between_3_f_0(
#line 618 "string.m"
  MR_String mercury__string__Str_5,
#line 618 "string.m"
  MR_Integer mercury__string__Start_6,
#line 618 "string.m"
  MR_Integer mercury__string__End_7)
#line 618 "string.m"
{
#line 4124 "string.m"
  {
#line 4124 "string.m"
    MR_bool mercury__string__succeeded;
#line 4124 "string.m"
    MR_String mercury__string__SubString_8;

#line 4124 "string.m"
    {
#line 4124 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    }
#line 4124 "string.m"
    return mercury__string__SubString_8;
#line 4124 "string.m"
  }
#line 618 "string.m"
}

#line 607 "string.m"
void MR_CALL 
mercury__string__right_by_codepoint_3_p_0(
#line 607 "string.m"
  MR_String mercury__string__String_4,
#line 607 "string.m"
  MR_Integer mercury__string__RightCount_5,
#line 607 "string.m"
  MR_String * mercury__string__RightString_6)
#line 607 "string.m"
{
#line 4116 "string.m"
  {
#line 4116 "string.m"
    MR_bool mercury__string__succeeded;
#line 4116 "string.m"
    MR_Integer mercury__string__TotalCount_7;
#line 4116 "string.m"
    MR_Integer mercury__string__LeftCount_8;
#line 4119 "string.m"
    MR_String mercury__string___LeftString_9;

#line 4117 "string.m"
    {
#line 4117 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_7);
    }
#line 4118 "string.m"
    mercury__string__LeftCount_8 = (mercury__string__TotalCount_7 - mercury__string__RightCount_5);
#line 4119 "string.m"
    {
#line 4119 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
    }
#line 4116 "string.m"
  }
#line 607 "string.m"
}

#line 606 "string.m"
MR_String MR_CALL 
mercury__string__right_by_codepoint_2_f_0(
#line 606 "string.m"
  MR_String mercury__string__String_4,
#line 606 "string.m"
  MR_Integer mercury__string__RightCount_5)
#line 606 "string.m"
{
#line 4116 "string.m"
  {
#line 4116 "string.m"
    MR_bool mercury__string__succeeded;
#line 4116 "string.m"
    MR_String mercury__string__RightString_6;
#line 4116 "string.m"
    MR_Integer mercury__string__TotalCount_10;
#line 4116 "string.m"
    MR_Integer mercury__string__LeftCount_11;
#line 4119 "string.m"
    MR_String mercury__string___LeftString_12;

#line 4117 "string.m"
    {
#line 4117 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_10);
    }
#line 4118 "string.m"
    mercury__string__LeftCount_11 = (mercury__string__TotalCount_10 - mercury__string__RightCount_5);
#line 4119 "string.m"
    {
#line 4119 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__RightString_6);
    }
#line 4116 "string.m"
    return mercury__string__RightString_6;
#line 4116 "string.m"
  }
#line 606 "string.m"
}

#line 597 "string.m"
void MR_CALL 
mercury__string__right_3_p_0(
#line 597 "string.m"
  MR_String mercury__string__String_4,
#line 597 "string.m"
  MR_Integer mercury__string__RightCount_5,
#line 597 "string.m"
  MR_String * mercury__string__RightString_6)
#line 597 "string.m"
{
#line 4108 "string.m"
  {
#line 4108 "string.m"
    MR_bool mercury__string__succeeded;
#line 4108 "string.m"
    MR_Integer mercury__string__Length_7;
#line 4108 "string.m"
    MR_Integer mercury__string__LeftCount_8;
#line 4111 "string.m"
    MR_String mercury__string___LeftString_9;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__right_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 25904 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
#line 2580 "string.m"
}
#line 4110 "string.m"
    mercury__string__LeftCount_8 = (mercury__string__Length_7 - mercury__string__RightCount_5);
#line 4111 "string.m"
    {
#line 4111 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
    }
#line 4108 "string.m"
  }
#line 597 "string.m"
}

#line 596 "string.m"
MR_String MR_CALL 
mercury__string__right_2_f_0(
#line 596 "string.m"
  MR_String mercury__string__S1_4,
#line 596 "string.m"
  MR_Integer mercury__string__N_5)
#line 596 "string.m"
{
#line 4108 "string.m"
  {
#line 4108 "string.m"
    MR_bool mercury__string__succeeded;
#line 4108 "string.m"
    MR_String mercury__string__S2_6;
#line 4108 "string.m"
    MR_Integer mercury__string__Length_10;
#line 4108 "string.m"
    MR_Integer mercury__string__LeftCount_11;
#line 4111 "string.m"
    MR_String mercury__string___LeftString_12;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__right_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S1_4 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 25958 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_10  = Length;
#line 2580 "string.m"
}
#line 4110 "string.m"
    mercury__string__LeftCount_11 = (mercury__string__Length_10 - mercury__string__N_5);
#line 4111 "string.m"
    {
#line 4111 "string.m"
      mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__S2_6);
    }
#line 4108 "string.m"
    return mercury__string__S2_6;
#line 4108 "string.m"
  }
#line 596 "string.m"
}

#line 588 "string.m"
void MR_CALL 
mercury__string__left_by_codepoint_3_p_0(
#line 588 "string.m"
  MR_String mercury__string__String_4,
#line 588 "string.m"
  MR_Integer mercury__string__Count_5,
#line 588 "string.m"
  MR_String * mercury__string__LeftString_6)
#line 588 "string.m"
{
#line 4103 "string.m"
  {
#line 4103 "string.m"
    MR_bool mercury__string__succeeded;
#line 4103 "string.m"
    MR_String mercury__string___RightString_7;

#line 4103 "string.m"
    {
#line 4103 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
    }
#line 4103 "string.m"
  }
#line 588 "string.m"
}

#line 587 "string.m"
MR_String MR_CALL 
mercury__string__left_by_codepoint_2_f_0(
#line 587 "string.m"
  MR_String mercury__string__String_4,
#line 587 "string.m"
  MR_Integer mercury__string__Count_5)
#line 587 "string.m"
{
#line 4103 "string.m"
  {
#line 4103 "string.m"
    MR_bool mercury__string__succeeded;
#line 4103 "string.m"
    MR_String mercury__string__LeftString_6;
#line 4103 "string.m"
    MR_String mercury__string___RightString_10;

#line 4103 "string.m"
    {
#line 4103 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, &mercury__string__LeftString_6, &mercury__string___RightString_10);
    }
#line 4103 "string.m"
    return mercury__string__LeftString_6;
#line 4103 "string.m"
  }
#line 587 "string.m"
}

#line 578 "string.m"
void MR_CALL 
mercury__string__left_3_p_0(
#line 578 "string.m"
  MR_String mercury__string__String_4,
#line 578 "string.m"
  MR_Integer mercury__string__Count_5,
#line 578 "string.m"
  MR_String * mercury__string__LeftString_6)
#line 578 "string.m"
{
#line 4097 "string.m"
  {
#line 4097 "string.m"
    MR_bool mercury__string__succeeded;
#line 4097 "string.m"
    MR_String mercury__string___RightString_7;

#line 4097 "string.m"
    {
#line 4097 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
    }
#line 4097 "string.m"
  }
#line 578 "string.m"
}

#line 577 "string.m"
MR_String MR_CALL 
mercury__string__left_2_f_0(
#line 577 "string.m"
  MR_String mercury__string__S1_4,
#line 577 "string.m"
  MR_Integer mercury__string__N_5)
#line 577 "string.m"
{
#line 4097 "string.m"
  {
#line 4097 "string.m"
    MR_bool mercury__string__succeeded;
#line 4097 "string.m"
    MR_String mercury__string__S2_6;
#line 4097 "string.m"
    MR_String mercury__string___RightString_10;

#line 4097 "string.m"
    {
#line 4097 "string.m"
      mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__N_5, &mercury__string__S2_6, &mercury__string___RightString_10);
    }
#line 4097 "string.m"
    return mercury__string__S2_6;
#line 4097 "string.m"
  }
#line 577 "string.m"
}

#line 568 "string.m"
void MR_CALL 
mercury__string__split_by_codepoint_4_p_0(
#line 568 "string.m"
  MR_String mercury__string__Str_5,
#line 568 "string.m"
  MR_Integer mercury__string__Count_6,
#line 568 "string.m"
  MR_String * mercury__string__Left_7,
#line 568 "string.m"
  MR_String * mercury__string__Right_8)
#line 568 "string.m"
{
#line 4083 "string.m"
  {
#line 4083 "string.m"
    MR_bool mercury__string__succeeded;
#line 4083 "string.m"
    MR_Integer mercury__string__Offset_9;

#line 2771 "string.m"
    {
#line 2771 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Count_6, &mercury__string__Offset_9);
    }
#line 4083 "string.m"
    if (mercury__string__succeeded)
#line 4082 "string.m"
      {
#line 4082 "string.m"
        mercury__string__split_4_p_0(mercury__string__Str_5, mercury__string__Offset_9, mercury__string__Left_7, mercury__string__Right_8);
#line 4082 "string.m"
        return;
      }
#line 4083 "string.m"
    else
#line 4086 "string.m"
      {
#line 4083 "string.m"
        mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
#line 4086 "string.m"
        if (mercury__string__succeeded)
#line 4084 "string.m"
          {
#line 4084 "string.m"
            *mercury__string__Left_7 = (MR_String) "";
#line 4085 "string.m"
            *mercury__string__Right_8 = mercury__string__Str_5;
#line 4084 "string.m"
          }
#line 4086 "string.m"
        else
#line 4087 "string.m"
          {
#line 4087 "string.m"
            *mercury__string__Left_7 = mercury__string__Str_5;
#line 4088 "string.m"
            *mercury__string__Right_8 = (MR_String) "";
#line 4087 "string.m"
          }
#line 4086 "string.m"
      }
#line 4083 "string.m"
  }
#line 568 "string.m"
}

#line 559 "string.m"
void MR_CALL 
mercury__string__split_4_p_0(
#line 559 "string.m"
  MR_String mercury__string__Str_1,
#line 559 "string.m"
  MR_Integer mercury__string__Count_2,
#line 559 "string.m"
  MR_String * mercury__string__Left_3,
#line 559 "string.m"
  MR_String * mercury__string__Right_4)
#line 559 "string.m"
{
#line 3979 "string.m"
  {
#line 3979 "string.m"
    MR_bool mercury__string__succeeded;

#line 3983 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_4_p_0

	MR_String Str;
	MR_Integer Count;
	MR_String Left;
	MR_String Right;

	Str =  mercury__string__Str_1 ;
	Count =  mercury__string__Count_2 ;
		{
#line 3983 "string.m"
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
#line 26216 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Left_3  = Left;
	 *mercury__string__Right_4  = Right;
#line 3983 "string.m"
}
#line 3979 "string.m"
  }
#line 559 "string.m"
}

#line 551 "string.m"
void MR_CALL 
mercury__string__first_char_3_p_4(
#line 551 "string.m"
  MR_String * mercury__string__Str_1,
#line 551 "string.m"
  MR_Char mercury__string__First_2,
#line 551 "string.m"
  MR_String mercury__string__Rest_3)
#line 551 "string.m"
{
#line 3936 "string.m"
  {
#line 3936 "string.m"
    MR_bool mercury__string__succeeded;

#line 3940 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_4

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__First_2 ;
	Rest =  mercury__string__Rest_3 ;
		{
#line 3940 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 26264 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_1  = Str;
#line 3940 "string.m"
}
#line 3936 "string.m"
  }
#line 551 "string.m"
}

#line 550 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_3(
#line 550 "string.m"
  MR_String mercury__string__Str_1,
#line 550 "string.m"
  MR_Char * mercury__string__First_2,
#line 550 "string.m"
  MR_String * mercury__string__Rest_3)
#line 550 "string.m"
{
#line 3864 "string.m"
  {
#line 3864 "string.m"
    MR_bool mercury__string__succeeded;

#line 3868 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_3

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
		{
#line 3868 "string.m"
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
#line 26319 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
	 *mercury__string__Rest_3  = Rest;
#line 3868 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3864 "string.m"
    return mercury__string__succeeded;
#line 3864 "string.m"
  }
#line 550 "string.m"
}

#line 549 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_2(
#line 549 "string.m"
  MR_String mercury__string__Str_1,
#line 549 "string.m"
  MR_Char mercury__string__First_2,
#line 549 "string.m"
  MR_String * mercury__string__Rest_3)
#line 549 "string.m"
{
#line 3796 "string.m"
  {
#line 3796 "string.m"
    MR_bool mercury__string__succeeded;

#line 3800 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_2

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	First =  mercury__string__First_2 ;
		{
#line 3800 "string.m"
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
#line 26381 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Rest_3  = Rest;
#line 3800 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3796 "string.m"
    return mercury__string__succeeded;
#line 3796 "string.m"
  }
#line 549 "string.m"
}

#line 548 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_1(
#line 548 "string.m"
  MR_String mercury__string__Str_1,
#line 548 "string.m"
  MR_Char * mercury__string__First_2,
#line 548 "string.m"
  MR_String mercury__string__Rest_3)
#line 548 "string.m"
{
#line 3733 "string.m"
  {
#line 3733 "string.m"
    MR_bool mercury__string__succeeded;

#line 3737 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_1

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Rest =  mercury__string__Rest_3 ;
		{
#line 3737 "string.m"

    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (First > 0 && strcmp(Str + pos, Rest) == 0);

#line 26432 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
#line 3737 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3733 "string.m"
    return mercury__string__succeeded;
#line 3733 "string.m"
  }
#line 548 "string.m"
}

#line 547 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_0(
#line 547 "string.m"
  MR_String mercury__string__Str_1,
#line 547 "string.m"
  MR_Char mercury__string__First_2,
#line 547 "string.m"
  MR_String mercury__string__Rest_3)
#line 547 "string.m"
{
#line 3676 "string.m"
  {
#line 3676 "string.m"
    MR_bool mercury__string__succeeded;

#line 3680 "string.m"
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
#line 3680 "string.m"

    MR_Integer pos = 0;
    int c = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (
        c == First &&
        First != '\0' &&
        strcmp(Str + pos, Rest) == 0
    );

#line 26488 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3680 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3676 "string.m"
    return mercury__string__succeeded;
#line 3676 "string.m"
  }
#line 547 "string.m"
}

#line 529 "string.m"
MR_String MR_CALL 
mercury__string__join_list_2_f_0(
#line 529 "string.m"
  MR_String mercury__string__Sep_1,
#line 529 "string.m"
  MR_Word mercury__string__Strs_2)
#line 529 "string.m"
{
#line 3577 "string.m"
  {
#line 3577 "string.m"
    MR_bool mercury__string__succeeded;
#line 3577 "string.m"
    MR_String mercury__string__Str_3;

#line 3581 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_2_f_0

	MR_String Sep;
	MR_Word Strs;
	MR_String Str;

	Sep =  mercury__string__Sep_1 ;
	Strs =  mercury__string__Strs_2 ;
		{
#line 3581 "string.m"
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
#line 26575 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_3  = Str;
#line 3581 "string.m"
}
#line 3577 "string.m"
    return mercury__string__Str_3;
#line 3577 "string.m"
  }
#line 529 "string.m"
}

#line 521 "string.m"
void MR_CALL 
mercury__string__append_list_2_p_0(
#line 521 "string.m"
  MR_Word mercury__string__Lists_3,
#line 521 "string.m"
  MR_String * mercury__string__HeadVar__2_2)
#line 521 "string.m"
{
#line 3569 "string.m"
  {
#line 3569 "string.m"
    MR_bool mercury__string__succeeded;

#line 3569 "string.m"
    {
#line 3569 "string.m"
      *mercury__string__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__string__Lists_3);
    }
#line 3569 "string.m"
  }
#line 521 "string.m"
}

#line 520 "string.m"
MR_String MR_CALL 
mercury__string__append_list_1_f_0(
#line 520 "string.m"
  MR_Word mercury__string__Strs_1)
#line 520 "string.m"
{
#line 3497 "string.m"
  {
#line 3497 "string.m"
    MR_bool mercury__string__succeeded;
#line 3497 "string.m"
    MR_String mercury__string__Str_2;

#line 3501 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_list_1_f_0

	MR_Word Strs;
	MR_String Str;

	Strs =  mercury__string__Strs_1 ;
		{
#line 3501 "string.m"
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
#line 26662 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_2  = Str;
#line 3501 "string.m"
}
#line 3497 "string.m"
    return mercury__string__Str_2;
#line 3497 "string.m"
  }
#line 520 "string.m"
}

#line 516 "string.m"
MR_String MR_CALL 
mercury__string__f_43_43_2_f_0(
#line 516 "string.m"
  MR_String mercury__string__S1_4,
#line 516 "string.m"
  MR_String mercury__string__S2_5)
#line 516 "string.m"
{
#line 3386 "string.m"
  {
#line 3386 "string.m"
    MR_bool mercury__string__succeeded;
#line 3386 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_43_43_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 26712 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
#line 3390 "string.m"
}
#line 3386 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3386 "string.m"
  }
#line 516 "string.m"
}

#line 504 "string.m"
void MR_CALL 
mercury__string__append_3_p_3(
#line 504 "string.m"
  MR_String * mercury__string__S1_1,
#line 504 "string.m"
  MR_String * mercury__string__S2_2,
#line 504 "string.m"
  MR_String mercury__string__S3_3,
#line 504 "string.m"
  MR_Cont mercury__string__cont,
#line 504 "string.m"
  void * mercury__string__cont_env_ptr)
#line 504 "string.m"
{
#line 3422 "string.m"
  {
#line 3422 "string.m"
    MR_bool mercury__string__succeeded;
#line 3422 "string.m"
    MR_Integer mercury__string__S3Len_19;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 26761 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_19  = Length;
#line 2580 "string.m"
}
#line 3424 "string.m"
    {
#line 3424 "string.m"
      mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_19, mercury__string__S1_1, mercury__string__S2_2, mercury__string__S3_3, mercury__string__cont, mercury__string__cont_env_ptr);
#line 3424 "string.m"
      return;
    }
#line 3422 "string.m"
  }
#line 504 "string.m"
}

#line 503 "string.m"
void MR_CALL 
mercury__string__append_3_p_2(
#line 503 "string.m"
  MR_String mercury__string__S1_1,
#line 503 "string.m"
  MR_String mercury__string__S2_2,
#line 503 "string.m"
  MR_String * mercury__string__S3_3)
#line 503 "string.m"
{
#line 3386 "string.m"
  {
#line 3386 "string.m"
    MR_bool mercury__string__succeeded;

#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_2

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 26816 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
#line 3390 "string.m"
}
#line 3386 "string.m"
  }
#line 503 "string.m"
}

#line 502 "string.m"
MR_bool MR_CALL 
mercury__string__append_3_p_1(
#line 502 "string.m"
  MR_String mercury__string__S1_1,
#line 502 "string.m"
  MR_String * mercury__string__S2_2,
#line 502 "string.m"
  MR_String mercury__string__S3_3)
#line 502 "string.m"
{
#line 3334 "string.m"
  {
#line 3334 "string.m"
    MR_bool mercury__string__succeeded;

#line 3338 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_1

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3338 "string.m"
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
#line 26874 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
#line 3338 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3334 "string.m"
    return mercury__string__succeeded;
#line 3334 "string.m"
  }
#line 502 "string.m"
}

#line 501 "string.m"
MR_bool MR_CALL 
mercury__string__append_3_p_0(
#line 501 "string.m"
  MR_String mercury__string__S1_1,
#line 501 "string.m"
  MR_String mercury__string__S2_2,
#line 501 "string.m"
  MR_String mercury__string__S3_3)
#line 501 "string.m"
{
#line 3291 "string.m"
  {
#line 3291 "string.m"
    MR_bool mercury__string__succeeded;

#line 3295 "string.m"
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
#line 3295 "string.m"
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}
#line 26928 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3295 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3291 "string.m"
    return mercury__string__succeeded;
#line 3291 "string.m"
  }
#line 501 "string.m"
}

#line 498 "string.m"
MR_String MR_CALL 
mercury__string__append_2_f_0(
#line 498 "string.m"
  MR_String mercury__string__S1_4,
#line 498 "string.m"
  MR_String mercury__string__S2_5)
#line 498 "string.m"
{
#line 3386 "string.m"
  {
#line 3386 "string.m"
    MR_bool mercury__string__succeeded;
#line 3386 "string.m"
    MR_String mercury__string__S3_6;

#line 3390 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
#line 3390 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 26980 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3_6  = S3;
#line 3390 "string.m"
}
#line 3386 "string.m"
    return mercury__string__S3_6;
#line 3386 "string.m"
  }
#line 498 "string.m"
}

#line 488 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_start_4_p_0(
#line 488 "string.m"
  MR_String mercury__string__WholeString_1,
#line 488 "string.m"
  MR_String mercury__string__Pattern_2,
#line 488 "string.m"
  MR_Integer mercury__string__BeginAt_3,
#line 488 "string.m"
  MR_Integer * mercury__string__Index_4)
#line 488 "string.m"
{
#line 3177 "string.m"
  {
#line 3177 "string.m"
    MR_bool mercury__string__succeeded;

#line 3182 "string.m"
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
#line 3182 "string.m"
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
#line 27041 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
#line 3182 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3177 "string.m"
    return mercury__string__succeeded;
#line 3177 "string.m"
  }
#line 488 "string.m"
}

#line 480 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_3_p_0(
#line 480 "string.m"
  MR_String mercury__string__WholeString_4,
#line 480 "string.m"
  MR_String mercury__string__Pattern_5,
#line 480 "string.m"
  MR_Integer * mercury__string__Index_6)
#line 480 "string.m"
{
#line 3174 "string.m"
  {
#line 3174 "string.m"
    MR_bool mercury__string__succeeded;

#line 3182 "string.m"
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
#line 3182 "string.m"
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
#line 27103 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_6  = Index;
#line 3182 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3174 "string.m"
    return mercury__string__succeeded;
#line 3174 "string.m"
  }
#line 480 "string.m"
}

#line 471 "string.m"
MR_Integer MR_CALL 
mercury__string__suffix_length_2_f_0(
#line 471 "string.m"
  MR_Word mercury__string__P_4,
#line 471 "string.m"
  MR_String mercury__string__S_5)
#line 471 "string.m"
{
#line 3155 "string.m"
  {
#line 3155 "string.m"
    MR_bool mercury__string__succeeded;
#line 3155 "string.m"
    MR_Integer mercury__string__HeadVar__3_3;
#line 3155 "string.m"
    MR_Integer mercury__string__End_6;
#line 3155 "string.m"
    MR_Integer mercury__string__Index_7;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_length_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 27153 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_6  = Length;
#line 2580 "string.m"
}
#line 3157 "string.m"
    {
#line 3157 "string.m"
      mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_6, &mercury__string__Index_7);
    }
#line 3155 "string.m"
    mercury__string__HeadVar__3_3 = (mercury__string__End_6 - mercury__string__Index_7);
#line 3155 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3155 "string.m"
  }
#line 471 "string.m"
}

#line 463 "string.m"
MR_Integer MR_CALL 
mercury__string__prefix_length_2_f_0(
#line 463 "string.m"
  MR_Word mercury__string__P_4,
#line 463 "string.m"
  MR_String mercury__string__S_5)
#line 463 "string.m"
{
#line 3139 "string.m"
  {
#line 3139 "string.m"
    MR_bool mercury__string__succeeded;
#line 3139 "string.m"
    MR_Integer mercury__string__Index_6;

#line 3140 "string.m"
    {
#line 3140 "string.m"
      mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__Index_6);
    }
#line 3139 "string.m"
    return mercury__string__Index_6;
#line 3139 "string.m"
  }
#line 463 "string.m"
}

#line 456 "string.m"
MR_bool MR_CALL 
mercury__string__contains_char_2_p_0(
#line 456 "string.m"
  MR_String mercury__string__Str_1,
#line 456 "string.m"
  MR_Char mercury__string__Ch_2)
#line 456 "string.m"
{
#line 3086 "string.m"
  {
#line 3086 "string.m"
    MR_bool mercury__string__succeeded;

#line 3090 "string.m"
{
#define MR_PROC_LABEL mercury__string__contains_char_2_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Ch =  mercury__string__Ch_2 ;
		{
#line 3090 "string.m"

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

#line 27240 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3090 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3086 "string.m"
    return mercury__string__succeeded;
#line 3086 "string.m"
  }
#line 456 "string.m"
}

#line 450 "string.m"
MR_bool MR_CALL 
mercury__string__all_match_2_p_0(
#line 450 "string.m"
  MR_Word mercury__string__P_3,
#line 450 "string.m"
  MR_String mercury__string__String_4)
#line 450 "string.m"
{
#line 3067 "string.m"
  {
#line 3067 "string.m"
    MR_bool mercury__string__succeeded;

#line 3068 "string.m"
    {
#line 3068 "string.m"
      return mercury__string__succeeded = mercury__string__all_match_loop_3_p_0(mercury__string__P_3, mercury__string__String_4, (MR_Integer) 0);
    }
#line 3067 "string.m"
    return mercury__string__succeeded;
#line 3067 "string.m"
  }
#line 450 "string.m"
}

#line 443 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_digits_1_p_0(
#line 443 "string.m"
  MR_String mercury__string__S_1)
#line 443 "string.m"
{
#line 3041 "string.m"
  {
#line 3041 "string.m"
    MR_bool mercury__string__succeeded;

#line 3045 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_digits_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 3045 "string.m"

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

#line 27320 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3045 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3041 "string.m"
    return mercury__string__succeeded;
#line 3041 "string.m"
  }
#line 443 "string.m"
}

#line 439 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alnum_or_underscore_1_p_0(
#line 439 "string.m"
  MR_String mercury__string__S_1)
#line 439 "string.m"
{
#line 3000 "string.m"
  {
#line 3000 "string.m"
    MR_bool mercury__string__succeeded;

#line 3004 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alnum_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 3004 "string.m"

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

#line 27390 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3004 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3000 "string.m"
    return mercury__string__succeeded;
#line 3000 "string.m"
  }
#line 439 "string.m"
}

#line 434 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alpha_or_underscore_1_p_0(
#line 434 "string.m"
  MR_String mercury__string__S_1)
#line 434 "string.m"
{
#line 2963 "string.m"
  {
#line 2963 "string.m"
    MR_bool mercury__string__succeeded;

#line 2967 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alpha_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2967 "string.m"

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

#line 27457 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2967 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2963 "string.m"
    return mercury__string__succeeded;
#line 2963 "string.m"
  }
#line 434 "string.m"
}

#line 429 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alnum_1_p_0(
#line 429 "string.m"
  MR_String mercury__string__S_2)
#line 429 "string.m"
{
#line 2960 "string.m"
  {
#line 2960 "string.m"
    MR_bool mercury__string__succeeded;

#line 3068 "string.m"
    {
#line 3068 "string.m"
      return mercury__string__succeeded = mercury__string__all_match_loop__ho34_3_p_0(mercury__string__S_2, (MR_Integer) 0);
    }
#line 2960 "string.m"
    return mercury__string__succeeded;
#line 2960 "string.m"
  }
#line 429 "string.m"
}

#line 424 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alpha_1_p_0(
#line 424 "string.m"
  MR_String mercury__string__S_1)
#line 424 "string.m"
{
#line 2925 "string.m"
  {
#line 2925 "string.m"
    MR_bool mercury__string__succeeded;

#line 2929 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alpha_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2929 "string.m"

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

#line 27546 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2929 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2925 "string.m"
    return mercury__string__succeeded;
#line 2925 "string.m"
  }
#line 424 "string.m"
}

#line 420 "string.m"
MR_bool MR_CALL 
mercury__string__is_empty_1_p_0(
#line 420 "string.m"
  MR_String mercury__string__HeadVar__1_1)
#line 420 "string.m"
{
#line 2923 "string.m"
  {
#line 2923 "string.m"
    MR_bool mercury__string__succeeded = (strcmp(mercury__string__HeadVar__1_1, (MR_String) "") == 0);

#line 2923 "string.m"
    return mercury__string__succeeded;
#line 2923 "string.m"
  }
#line 420 "string.m"
}

#line 412 "string.m"
MR_Integer MR_CALL 
mercury__string__hash6_1_f_0(
#line 412 "string.m"
  MR_String mercury__string__String_3)
#line 412 "string.m"
{
#line 2898 "string.m"
  {
#line 2898 "string.m"
    MR_bool mercury__string__succeeded;
#line 2898 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2898 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2898 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash6_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 27612 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2580 "string.m"
}
#line 2900 "string.m"
    {
#line 2900 "string.m"
      mercury__string__hash6_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2901 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2898 "string.m"
    return mercury__string__HashVal_4;
#line 2898 "string.m"
  }
#line 412 "string.m"
}

#line 411 "string.m"
MR_Integer MR_CALL 
mercury__string__hash5_1_f_0(
#line 411 "string.m"
  MR_String mercury__string__String_3)
#line 411 "string.m"
{
#line 2880 "string.m"
  {
#line 2880 "string.m"
    MR_bool mercury__string__succeeded;
#line 2880 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2880 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2880 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash5_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 27664 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2580 "string.m"
}
#line 2882 "string.m"
    {
#line 2882 "string.m"
      mercury__string__hash5_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2883 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2880 "string.m"
    return mercury__string__HashVal_4;
#line 2880 "string.m"
  }
#line 411 "string.m"
}

#line 410 "string.m"
MR_Integer MR_CALL 
mercury__string__hash4_1_f_0(
#line 410 "string.m"
  MR_String mercury__string__String_3)
#line 410 "string.m"
{
#line 2861 "string.m"
  {
#line 2861 "string.m"
    MR_bool mercury__string__succeeded;
#line 2861 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2861 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2861 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash4_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 27716 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2580 "string.m"
}
#line 2863 "string.m"
    {
#line 2863 "string.m"
      mercury__string__hash4_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2864 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2861 "string.m"
    return mercury__string__HashVal_4;
#line 2861 "string.m"
  }
#line 410 "string.m"
}

#line 406 "string.m"
MR_Integer MR_CALL 
mercury__string__hash3_1_f_0(
#line 406 "string.m"
  MR_String mercury__string__String_3)
#line 406 "string.m"
{
#line 2839 "string.m"
  {
#line 2839 "string.m"
    MR_bool mercury__string__succeeded;
#line 2839 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2839 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2839 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash3_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 27768 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2580 "string.m"
}
#line 2841 "string.m"
    {
#line 2841 "string.m"
      mercury__string__hash3_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2842 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2839 "string.m"
    return mercury__string__HashVal_4;
#line 2839 "string.m"
  }
#line 406 "string.m"
}

#line 405 "string.m"
MR_Integer MR_CALL 
mercury__string__hash2_1_f_0(
#line 405 "string.m"
  MR_String mercury__string__String_3)
#line 405 "string.m"
{
#line 2821 "string.m"
  {
#line 2821 "string.m"
    MR_bool mercury__string__succeeded;
#line 2821 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2821 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2821 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash2_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 27820 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2580 "string.m"
}
#line 2823 "string.m"
    {
#line 2823 "string.m"
      mercury__string__hash2_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2824 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2821 "string.m"
    return mercury__string__HashVal_4;
#line 2821 "string.m"
  }
#line 405 "string.m"
}

#line 401 "string.m"
void MR_CALL 
mercury__string__hash_2_p_0(
#line 401 "string.m"
  MR_String mercury__string__String_3,
#line 401 "string.m"
  MR_Integer * mercury__string__HashVal_4)
#line 401 "string.m"
{
#line 2803 "string.m"
  {
#line 2803 "string.m"
    MR_bool mercury__string__succeeded;
#line 2803 "string.m"
    MR_Integer mercury__string__Length_7;
#line 2803 "string.m"
    MR_Integer mercury__string__HashVal1_8;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 27872 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
#line 2580 "string.m"
}
#line 2805 "string.m"
    {
#line 2805 "string.m"
      mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_7, (MR_Integer) 0, &mercury__string__HashVal1_8);
    }
#line 2806 "string.m"
    *mercury__string__HashVal_4 = (mercury__string__HashVal1_8 ^ mercury__string__Length_7);
#line 2803 "string.m"
  }
#line 401 "string.m"
}

#line 400 "string.m"
MR_Integer MR_CALL 
mercury__string__hash_1_f_0(
#line 400 "string.m"
  MR_String mercury__string__String_3)
#line 400 "string.m"
{
#line 2803 "string.m"
  {
#line 2803 "string.m"
    MR_bool mercury__string__succeeded;
#line 2803 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2803 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2803 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 27922 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2580 "string.m"
}
#line 2805 "string.m"
    {
#line 2805 "string.m"
      mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2806 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2803 "string.m"
    return mercury__string__HashVal_4;
#line 2803 "string.m"
  }
#line 400 "string.m"
}

#line 391 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_3_p_0(
#line 391 "string.m"
  MR_String mercury__string__String_4,
#line 391 "string.m"
  MR_Integer mercury__string__N_5,
#line 391 "string.m"
  MR_Integer * mercury__string__Index_6)
#line 391 "string.m"
{
#line 2768 "string.m"
  {
#line 2768 "string.m"
    MR_bool mercury__string__succeeded;

#line 2771 "string.m"
    {
#line 2771 "string.m"
      return mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__String_4, (MR_Integer) 0, mercury__string__N_5, mercury__string__Index_6);
    }
#line 2768 "string.m"
    return mercury__string__succeeded;
#line 2768 "string.m"
  }
#line 391 "string.m"
}

#line 385 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_4_p_0(
#line 385 "string.m"
  MR_String mercury__string__String_1,
#line 385 "string.m"
  MR_Integer mercury__string__StartOffset_2,
#line 385 "string.m"
  MR_Integer mercury__string__N_3,
#line 385 "string.m"
  MR_Integer * mercury__string__Index_4)
#line 385 "string.m"
{
#line 2722 "string.m"
  {
#line 2722 "string.m"
    MR_bool mercury__string__succeeded;

#line 2725 "string.m"
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
#line 2725 "string.m"

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

#line 28020 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
#line 2725 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2722 "string.m"
    return mercury__string__succeeded;
#line 2722 "string.m"
  }
#line 385 "string.m"
}

#line 377 "string.m"
MR_Integer MR_CALL 
mercury__string__count_utf8_code_units_1_f_0(
#line 377 "string.m"
  MR_String mercury__string__Str_1)
#line 377 "string.m"
{
#line 2692 "string.m"
  {
#line 2692 "string.m"
    MR_bool mercury__string__succeeded;
#line 2692 "string.m"
    MR_Integer mercury__string__Length_2;

#line 2695 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2695 "string.m"

    Length = strlen(Str);

#line 28064 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_2  = Length;
#line 2695 "string.m"
}
#line 2692 "string.m"
    return mercury__string__Length_2;
#line 2692 "string.m"
  }
#line 377 "string.m"
}

#line 372 "string.m"
void MR_CALL 
mercury__string__count_codepoints_2_p_0(
#line 372 "string.m"
  MR_String mercury__string__String_1,
#line 372 "string.m"
  MR_Integer * mercury__string__Count_2)
#line 372 "string.m"
{
#line 2642 "string.m"
  {
#line 2642 "string.m"
    MR_bool mercury__string__succeeded;

#line 2645 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_codepoints_2_p_0

	MR_String String;
	MR_Integer Count;

	String =  mercury__string__String_1 ;
		{
#line 2645 "string.m"

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

#line 28117 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Count_2  = Count;
#line 2645 "string.m"
}
#line 2642 "string.m"
  }
#line 372 "string.m"
}

#line 371 "string.m"
MR_Integer MR_CALL 
mercury__string__count_codepoints_1_f_0(
#line 371 "string.m"
  MR_String mercury__string__String_3)
#line 371 "string.m"
{
#line 2640 "string.m"
  {
#line 2640 "string.m"
    MR_bool mercury__string__succeeded;
#line 2640 "string.m"
    MR_Integer mercury__string__Count_4;

#line 2640 "string.m"
    {
#line 2640 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_3, &mercury__string__Count_4);
    }
#line 2640 "string.m"
    return mercury__string__Count_4;
#line 2640 "string.m"
  }
#line 371 "string.m"
}

#line 363 "string.m"
void MR_CALL 
mercury__string__count_code_units_2_p_0(
#line 363 "string.m"
  MR_String mercury__string__Str_3,
#line 363 "string.m"
  MR_Integer * mercury__string__Length_4)
#line 363 "string.m"
{
#line 2576 "string.m"
  {
#line 2576 "string.m"
    MR_bool mercury__string__succeeded;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_code_units_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 28182 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_4  = Length;
#line 2580 "string.m"
}
#line 2576 "string.m"
  }
#line 363 "string.m"
}

#line 362 "string.m"
MR_Integer MR_CALL 
mercury__string__count_code_units_1_f_0(
#line 362 "string.m"
  MR_String mercury__string__Str_3)
#line 362 "string.m"
{
#line 2576 "string.m"
  {
#line 2576 "string.m"
    MR_bool mercury__string__succeeded;
#line 2576 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 28221 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Length;
#line 2580 "string.m"
}
#line 2576 "string.m"
    return mercury__string__HeadVar__2_2;
#line 2576 "string.m"
  }
#line 362 "string.m"
}

#line 358 "string.m"
void MR_CALL 
mercury__string__length_2_p_1(
#line 358 "string.m"
  MR_String mercury__string__Str_1,
#line 358 "string.m"
  MR_Integer * mercury__string__Length_2)
#line 358 "string.m"
{
#line 2602 "string.m"
  {
#line 2602 "string.m"
    MR_bool mercury__string__succeeded;

#line 2606 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2606 "string.m"

    Length = strlen(Str);

#line 28262 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
#line 2606 "string.m"
}
#line 2602 "string.m"
  }
#line 358 "string.m"
}

#line 357 "string.m"
void MR_CALL 
mercury__string__length_2_p_0(
#line 357 "string.m"
  MR_String mercury__string__Str_1,
#line 357 "string.m"
  MR_Integer * mercury__string__Length_2)
#line 357 "string.m"
{
#line 2576 "string.m"
  {
#line 2576 "string.m"
    MR_bool mercury__string__succeeded;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 28301 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
#line 2580 "string.m"
}
#line 2576 "string.m"
  }
#line 357 "string.m"
}

#line 355 "string.m"
MR_Integer MR_CALL 
mercury__string__length_1_f_0(
#line 355 "string.m"
  MR_String mercury__string__S_3)
#line 355 "string.m"
{
#line 2576 "string.m"
  {
#line 2576 "string.m"
    MR_bool mercury__string__succeeded;
#line 2576 "string.m"
    MR_Integer mercury__string__L_4;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 28340 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__L_4  = Length;
#line 2580 "string.m"
}
#line 2576 "string.m"
    return mercury__string__L_4;
#line 2576 "string.m"
  }
#line 355 "string.m"
}

#line 339 "string.m"
void MR_CALL 
mercury__string__unsafe_set_char_4_p_0(
#line 339 "string.m"
  MR_Char mercury__string__Char_5,
#line 339 "string.m"
  MR_Integer mercury__string__Index_6,
#line 339 "string.m"
  MR_String mercury__string__STATE_VARIABLE_Str_0_8,
#line 339 "string.m"
  MR_String * mercury__string__STATE_VARIABLE_Str_9)
#line 339 "string.m"
{
#line 2495 "string.m"
  {
#line 2495 "string.m"
    MR_bool mercury__string__succeeded;

#line 107 "char.opt"
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 107 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 28387 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 107 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2495 "string.m"
    if (mercury__string__succeeded)
#line 2494 "string.m"
      {
#line 2494 "string.m"
        {
#line 2494 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_set_char: null character");
#line 2494 "string.m"
          return;
        }
#line 2494 "string.m"
      }
#line 2495 "string.m"
    else
#line 2505 "string.m"
      {
#line 2509 "string.m"
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
#line 2509 "string.m"

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

#line 28448 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
#line 2509 "string.m"
}
#line 2505 "string.m"
      }
#line 2495 "string.m"
  }
#line 339 "string.m"
}

#line 334 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_set_char_3_f_0(
#line 334 "string.m"
  MR_Char mercury__string__C_5,
#line 334 "string.m"
  MR_Integer mercury__string__N_6,
#line 334 "string.m"
  MR_String mercury__string__S0_7)
#line 334 "string.m"
{
#line 2495 "string.m"
  {
#line 2495 "string.m"
    MR_bool mercury__string__succeeded;
#line 2495 "string.m"
    MR_String mercury__string__S_8;

#line 107 "char.opt"
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_3_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__C_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 107 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 28495 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 107 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2495 "string.m"
    if (mercury__string__succeeded)
#line 2494 "string.m"
      {
#line 2494 "string.m"
        {
#line 2494 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_set_char: null character");
        }
#line 2494 "string.m"
      }
#line 2495 "string.m"
    else
#line 2505 "string.m"
      {
#line 2509 "string.m"
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
#line 2509 "string.m"

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

#line 28554 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_8  = Str;
#line 2509 "string.m"
}
#line 2505 "string.m"
      }
#line 2495 "string.m"
    return mercury__string__S_8;
#line 2495 "string.m"
  }
#line 334 "string.m"
}

#line 319 "string.m"
void MR_CALL 
mercury__string__det_set_char_4_p_0(
#line 319 "string.m"
  MR_Char mercury__string__Char_5,
#line 319 "string.m"
  MR_Integer mercury__string__Int_6,
#line 319 "string.m"
  MR_String mercury__string__String0_7,
#line 319 "string.m"
  MR_String * mercury__string__String_8)
#line 319 "string.m"
{
#line 2483 "string.m"
  {
#line 2483 "string.m"
    MR_bool mercury__string__succeeded;
#line 2483 "string.m"
    MR_String mercury__string__String1_9;

#line 107 "char.opt"
{
#define MR_PROC_LABEL mercury__string__det_set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 107 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 28605 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 107 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2371 "string.m"
    if (mercury__string__succeeded)
#line 2370 "string.m"
      {
#line 2370 "string.m"
        {
#line 2370 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.set_char: null character");
#line 2370 "string.m"
          return;
        }
#line 2370 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2370 "string.m"
      }
#line 2371 "string.m"
    else
#line 2381 "string.m"
      {
#line 2385 "string.m"
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
#line 2385 "string.m"

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

#line 28676 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__String1_9  = Str;
#line 2385 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2381 "string.m"
      }
#line 2483 "string.m"
    if (mercury__string__succeeded)
#line 2482 "string.m"
      *mercury__string__String_8 = mercury__string__String1_9;
#line 2483 "string.m"
    else
#line 2484 "string.m"
      {
#line 2484 "string.m"
        {
#line 2484 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_set_char: index out of range");
#line 2484 "string.m"
          return;
        }
#line 2484 "string.m"
      }
#line 2483 "string.m"
  }
#line 319 "string.m"
}

#line 317 "string.m"
MR_String MR_CALL 
mercury__string__det_set_char_3_f_0(
#line 317 "string.m"
  MR_Char mercury__string__C_5,
#line 317 "string.m"
  MR_Integer mercury__string__N_6,
#line 317 "string.m"
  MR_String mercury__string__S0_7)
#line 317 "string.m"
{
#line 2478 "string.m"
  {
#line 2478 "string.m"
    MR_bool mercury__string__succeeded;
#line 2478 "string.m"
    MR_String mercury__string__S_8;

#line 2478 "string.m"
    {
#line 2478 "string.m"
      mercury__string__det_set_char_4_p_0(mercury__string__C_5, mercury__string__N_6, mercury__string__S0_7, &mercury__string__S_8);
    }
#line 2478 "string.m"
    return mercury__string__S_8;
#line 2478 "string.m"
  }
#line 317 "string.m"
}

#line 305 "string.m"
MR_bool MR_CALL 
mercury__string__set_char_4_p_0(
#line 305 "string.m"
  MR_Char mercury__string__Char_5,
#line 305 "string.m"
  MR_Integer mercury__string__Index_6,
#line 305 "string.m"
  MR_String mercury__string__STATE_VARIABLE_Str_0_8,
#line 305 "string.m"
  MR_String * mercury__string__STATE_VARIABLE_Str_9)
#line 305 "string.m"
{
#line 2371 "string.m"
  {
#line 2371 "string.m"
    MR_bool mercury__string__succeeded;

#line 107 "char.opt"
{
#define MR_PROC_LABEL mercury__string__set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 107 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 28773 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 107 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2371 "string.m"
    if (mercury__string__succeeded)
#line 2370 "string.m"
      {
#line 2370 "string.m"
        {
#line 2370 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.set_char: null character");
        }
#line 2370 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2370 "string.m"
      }
#line 2371 "string.m"
    else
#line 2381 "string.m"
      {
#line 2385 "string.m"
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
#line 2385 "string.m"

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

#line 28842 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
#line 2385 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2381 "string.m"
      }
#line 2371 "string.m"
    return mercury__string__succeeded;
#line 2371 "string.m"
  }
#line 305 "string.m"
}

#line 290 "string.m"
void MR_CALL 
mercury__string__unsafe_index_code_unit_3_p_0(
#line 290 "string.m"
  MR_String mercury__string__Str_1,
#line 290 "string.m"
  MR_Integer mercury__string__Index_2,
#line 290 "string.m"
  MR_Integer * mercury__string__Code_3)
#line 290 "string.m"
{
#line 2337 "string.m"
  {
#line 2337 "string.m"
    MR_bool mercury__string__succeeded;

#line 2340 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_code_unit_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 2340 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 28893 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Code_3  = Code;
#line 2340 "string.m"
}
#line 2337 "string.m"
  }
#line 290 "string.m"
}

#line 282 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_prev_index_4_p_0(
#line 282 "string.m"
  MR_String mercury__string__Str_1,
#line 282 "string.m"
  MR_Integer mercury__string__Index_2,
#line 282 "string.m"
  MR_Integer * mercury__string__PrevIndex_3,
#line 282 "string.m"
  MR_Char * mercury__string__Ch_4)
#line 282 "string.m"
{
#line 2209 "string.m"
  {
#line 2209 "string.m"
    MR_bool mercury__string__succeeded;

#line 2213 "string.m"
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
#line 2213 "string.m"

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

#line 28951 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__PrevIndex_3  = PrevIndex;
	 *mercury__string__Ch_4  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2209 "string.m"
    return mercury__string__succeeded;
#line 2209 "string.m"
  }
#line 282 "string.m"
}

#line 272 "string.m"
MR_bool MR_CALL 
mercury__string__prev_index_4_p_0(
#line 272 "string.m"
  MR_String mercury__string__Str_5,
#line 272 "string.m"
  MR_Integer mercury__string__Index_6,
#line 272 "string.m"
  MR_Integer * mercury__string__CharIndex_7,
#line 272 "string.m"
  MR_Char * mercury__string__Char_8)
#line 272 "string.m"
{
#line 2201 "string.m"
  {
#line 2201 "string.m"
    MR_bool mercury__string__succeeded;
#line 2201 "string.m"
    MR_Integer mercury__string__Len_9;
#line 2201 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 29004 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
#line 2580 "string.m"
}
#line 2203 "string.m"
    mercury__string__V_10_10 = (mercury__string__Index_6 - (MR_Integer) 1);
#line 2314 "string.m"
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__V_10_10 ;
	Length =  mercury__string__Len_9 ;
		{
#line 2314 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 29035 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2314 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2201 "string.m"
    if (mercury__string__succeeded)
#line 2201 "string.m"
      {
#line 2213 "string.m"
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
#line 2213 "string.m"

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

#line 29076 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__CharIndex_7  = PrevIndex;
	 *mercury__string__Char_8  = Ch;
#line 2213 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2201 "string.m"
      }
#line 2201 "string.m"
    return mercury__string__succeeded;
#line 2201 "string.m"
  }
#line 272 "string.m"
}

#line 264 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_index_next_4_p_0(
#line 264 "string.m"
  MR_String mercury__string__Str_1,
#line 264 "string.m"
  MR_Integer mercury__string__Index_2,
#line 264 "string.m"
  MR_Integer * mercury__string__NextIndex_3,
#line 264 "string.m"
  MR_Char * mercury__string__Ch_4)
#line 264 "string.m"
{
#line 2120 "string.m"
  {
#line 2120 "string.m"
    MR_bool mercury__string__succeeded;

#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 29139 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__NextIndex_3  = NextIndex;
	 *mercury__string__Ch_4  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2120 "string.m"
    return mercury__string__succeeded;
#line 2120 "string.m"
  }
#line 264 "string.m"
}

#line 254 "string.m"
MR_bool MR_CALL 
mercury__string__index_next_4_p_0(
#line 254 "string.m"
  MR_String mercury__string__Str_5,
#line 254 "string.m"
  MR_Integer mercury__string__Index_6,
#line 254 "string.m"
  MR_Integer * mercury__string__NextIndex_7,
#line 254 "string.m"
  MR_Char * mercury__string__Char_8)
#line 254 "string.m"
{
#line 2112 "string.m"
  {
#line 2112 "string.m"
    MR_bool mercury__string__succeeded;
#line 2112 "string.m"
    MR_Integer mercury__string__Len_9;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 29190 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
#line 2580 "string.m"
}
#line 2314 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_6 ;
	Length =  mercury__string__Len_9 ;
		{
#line 2314 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 29219 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2314 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2112 "string.m"
    if (mercury__string__succeeded)
#line 2112 "string.m"
      {
#line 2124 "string.m"
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
#line 2124 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 29257 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__NextIndex_7  = NextIndex;
	 *mercury__string__Char_8  = Ch;
#line 2124 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2112 "string.m"
      }
#line 2112 "string.m"
    return mercury__string__succeeded;
#line 2112 "string.m"
  }
#line 254 "string.m"
}

#line 246 "string.m"
MR_Char MR_CALL 
mercury__string__unsafe_elem_2_f_0(
#line 246 "string.m"
  MR_Integer mercury__string__Index_5,
#line 246 "string.m"
  MR_String mercury__string__String_4)
#line 246 "string.m"
{
#line 2050 "string.m"
  {
#line 2050 "string.m"
    MR_bool mercury__string__succeeded;
#line 2050 "string.m"
    MR_Char mercury__string__HeadVar__3_3;
#line 2050 "string.m"
    MR_Char mercury__string__CharPrime_12;

#line 2060 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_elem_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 2060 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 29316 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_12  = Ch;
#line 2060 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2050 "string.m"
    if (mercury__string__succeeded)
#line 2049 "string.m"
      mercury__string__HeadVar__3_3 = mercury__string__CharPrime_12;
#line 2050 "string.m"
    else
#line 2051 "string.m"
      {
#line 2051 "string.m"
        {
#line 2051 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
        }
#line 2051 "string.m"
      }
#line 2050 "string.m"
    return mercury__string__HeadVar__3_3;
#line 2050 "string.m"
  }
#line 246 "string.m"
}

#line 241 "string.m"
MR_Char MR_CALL 
mercury__string__elem_2_f_0(
#line 241 "string.m"
  MR_Integer mercury__string__Index_5,
#line 241 "string.m"
  MR_String mercury__string__String_4)
#line 241 "string.m"
{
#line 2107 "string.m"
  {
#line 2107 "string.m"
    MR_bool mercury__string__succeeded;
#line 2107 "string.m"
    MR_Char mercury__string__HeadVar__3_3;

#line 2107 "string.m"
    {
#line 2107 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__det_index_2_f_0(mercury__string__String_4, mercury__string__Index_5);
    }
#line 2107 "string.m"
    return mercury__string__HeadVar__3_3;
#line 2107 "string.m"
  }
#line 241 "string.m"
}

#line 236 "string.m"
void MR_CALL 
mercury__string__unsafe_index_3_p_0(
#line 236 "string.m"
  MR_String mercury__string__Str_4,
#line 236 "string.m"
  MR_Integer mercury__string__Index_5,
#line 236 "string.m"
  MR_Char * mercury__string__Char_6)
#line 236 "string.m"
{
#line 2050 "string.m"
  {
#line 2050 "string.m"
    MR_bool mercury__string__succeeded;
#line 2050 "string.m"
    MR_Char mercury__string__CharPrime_7;

#line 2060 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 2060 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 29415 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_7  = Ch;
#line 2060 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2050 "string.m"
    if (mercury__string__succeeded)
#line 2049 "string.m"
      *mercury__string__Char_6 = mercury__string__CharPrime_7;
#line 2050 "string.m"
    else
#line 2051 "string.m"
      {
#line 2051 "string.m"
        {
#line 2051 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
#line 2051 "string.m"
          return;
        }
#line 2051 "string.m"
      }
#line 2050 "string.m"
  }
#line 236 "string.m"
}

#line 235 "string.m"
MR_Char MR_CALL 
mercury__string__unsafe_index_2_f_0(
#line 235 "string.m"
  MR_String mercury__string__S_4,
#line 235 "string.m"
  MR_Integer mercury__string__N_5)
#line 235 "string.m"
{
#line 2050 "string.m"
  {
#line 2050 "string.m"
    MR_bool mercury__string__succeeded;
#line 2050 "string.m"
    MR_Char mercury__string__C_6;
#line 2050 "string.m"
    MR_Char mercury__string__CharPrime_10;

#line 2060 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{
#line 2060 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 29486 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_10  = Ch;
#line 2060 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2050 "string.m"
    if (mercury__string__succeeded)
#line 2049 "string.m"
      mercury__string__C_6 = mercury__string__CharPrime_10;
#line 2050 "string.m"
    else
#line 2051 "string.m"
      {
#line 2051 "string.m"
        {
#line 2051 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
        }
#line 2051 "string.m"
      }
#line 2050 "string.m"
    return mercury__string__C_6;
#line 2050 "string.m"
  }
#line 235 "string.m"
}

#line 224 "string.m"
void MR_CALL 
mercury__string__det_index_3_p_0(
#line 224 "string.m"
  MR_String mercury__string__String_4,
#line 224 "string.m"
  MR_Integer mercury__string__Int_5,
#line 224 "string.m"
  MR_Char * mercury__string__Char_6)
#line 224 "string.m"
{
#line 2040 "string.m"
  {
#line 2040 "string.m"
    MR_bool mercury__string__succeeded;
#line 2040 "string.m"
    MR_Char mercury__string__Char0_7;
#line 2026 "string.m"
    MR_Integer mercury__string__Len_12;
#line 2050 "string.m"
    MR_Char mercury__string__CharPrime_24;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 29553 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2580 "string.m"
}
#line 2314 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Int_5 ;
	Length =  mercury__string__Len_12 ;
		{
#line 2314 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 29582 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2314 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2026 "string.m"
    if (mercury__string__succeeded)
#line 2026 "string.m"
      {
#line 2060 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Int_5 ;
		{
#line 2060 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 29616 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_24  = Ch;
#line 2060 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2050 "string.m"
        if (mercury__string__succeeded)
#line 2049 "string.m"
          mercury__string__Char0_7 = mercury__string__CharPrime_24;
#line 2050 "string.m"
        else
#line 2051 "string.m"
          {
#line 2051 "string.m"
            {
#line 2051 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
#line 2051 "string.m"
              return;
            }
#line 2051 "string.m"
          }
#line 2050 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2026 "string.m"
      }
#line 2040 "string.m"
    if (mercury__string__succeeded)
#line 2039 "string.m"
      *mercury__string__Char_6 = mercury__string__Char0_7;
#line 2040 "string.m"
    else
#line 2041 "string.m"
      {
#line 2041 "string.m"
        {
#line 2041 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
#line 2041 "string.m"
          return;
        }
#line 2041 "string.m"
      }
#line 2040 "string.m"
  }
#line 224 "string.m"
}

#line 223 "string.m"
MR_Char MR_CALL 
mercury__string__det_index_2_f_0(
#line 223 "string.m"
  MR_String mercury__string__S_4,
#line 223 "string.m"
  MR_Integer mercury__string__N_5)
#line 223 "string.m"
{
#line 2040 "string.m"
  {
#line 2040 "string.m"
    MR_bool mercury__string__succeeded;
#line 2040 "string.m"
    MR_Char mercury__string__C_6;
#line 2040 "string.m"
    MR_Char mercury__string__Char0_10;
#line 2026 "string.m"
    MR_Integer mercury__string__Len_15;
#line 2050 "string.m"
    MR_Char mercury__string__CharPrime_27;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_4 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 29704 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_15  = Length;
#line 2580 "string.m"
}
#line 2314 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__N_5 ;
	Length =  mercury__string__Len_15 ;
		{
#line 2314 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 29733 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2314 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2026 "string.m"
    if (mercury__string__succeeded)
#line 2026 "string.m"
      {
#line 2060 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{
#line 2060 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 29767 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_27  = Ch;
#line 2060 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2050 "string.m"
        if (mercury__string__succeeded)
#line 2049 "string.m"
          mercury__string__Char0_10 = mercury__string__CharPrime_27;
#line 2050 "string.m"
        else
#line 2051 "string.m"
          {
#line 2051 "string.m"
            {
#line 2051 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 2051 "string.m"
          }
#line 2050 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2026 "string.m"
      }
#line 2040 "string.m"
    if (mercury__string__succeeded)
#line 2039 "string.m"
      mercury__string__C_6 = mercury__string__Char0_10;
#line 2040 "string.m"
    else
#line 2041 "string.m"
      {
#line 2041 "string.m"
        {
#line 2041 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
        }
#line 2041 "string.m"
      }
#line 2040 "string.m"
    return mercury__string__C_6;
#line 2040 "string.m"
  }
#line 223 "string.m"
}

#line 213 "string.m"
MR_bool MR_CALL 
mercury__string__index_3_p_0(
#line 213 "string.m"
  MR_String mercury__string__Str_4,
#line 213 "string.m"
  MR_Integer mercury__string__Index_5,
#line 213 "string.m"
  MR_Char * mercury__string__Char_6)
#line 213 "string.m"
{
#line 2026 "string.m"
  {
#line 2026 "string.m"
    MR_bool mercury__string__succeeded;
#line 2026 "string.m"
    MR_Integer mercury__string__Len_7;
#line 2050 "string.m"
    MR_Char mercury__string__CharPrime_19;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_4 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 29851 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
#line 2580 "string.m"
}
#line 2314 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_5 ;
	Length =  mercury__string__Len_7 ;
		{
#line 2314 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 29880 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2314 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2026 "string.m"
    if (mercury__string__succeeded)
#line 2026 "string.m"
      {
#line 2060 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 2060 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 29914 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_19  = Ch;
#line 2060 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2050 "string.m"
        if (mercury__string__succeeded)
#line 2049 "string.m"
          *mercury__string__Char_6 = mercury__string__CharPrime_19;
#line 2050 "string.m"
        else
#line 2051 "string.m"
          {
#line 2051 "string.m"
            {
#line 2051 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 2051 "string.m"
          }
#line 2050 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2026 "string.m"
      }
#line 2026 "string.m"
    return mercury__string__succeeded;
#line 2026 "string.m"
  }
#line 213 "string.m"
}

#line 198 "string.m"
void MR_CALL 
mercury__string__duplicate_char_3_p_0(
#line 198 "string.m"
  MR_Char mercury__string__Char_4,
#line 198 "string.m"
  MR_Integer mercury__string__Count_5,
#line 198 "string.m"
  MR_String * mercury__string__String_6)
#line 198 "string.m"
{
#line 2009 "string.m"
  {
#line 2009 "string.m"
    MR_bool mercury__string__succeeded;
#line 2009 "string.m"
    MR_Word mercury__string__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 2009 "string.m"
    MR_Word mercury__string__V_7_7;
#line 2009 "string.m"
    MR_Word mercury__string__V_7_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1496 "string.m"
    MR_String mercury__string__Str0_20;

#line 167 "list.opt"
    {
#line 167 "list.opt"
      mercury__list__accumulate_n_copies_4_p_0(mercury__string__TypeCtorInfo_8_8, mercury__string__Count_5, ((MR_Box) (MR_Word) (mercury__string__Char_4)), mercury__string__V_7_12, &mercury__string__V_7_7);
    }
#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_7_7, &mercury__string__Str0_20);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      *mercury__string__String_6 = mercury__string__Str0_20;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1497 "string.m"
          return;
        }
#line 1497 "string.m"
      }
#line 2009 "string.m"
  }
#line 198 "string.m"
}

#line 197 "string.m"
MR_String MR_CALL 
mercury__string__duplicate_char_2_f_0(
#line 197 "string.m"
  MR_Char mercury__string__C_4,
#line 197 "string.m"
  MR_Integer mercury__string__N_5)
#line 197 "string.m"
{
#line 2007 "string.m"
  {
#line 2007 "string.m"
    MR_bool mercury__string__succeeded;
#line 2007 "string.m"
    MR_String mercury__string__S_6;

#line 2007 "string.m"
    {
#line 2007 "string.m"
      mercury__string__duplicate_char_3_p_0(mercury__string__C_4, mercury__string__N_5, &mercury__string__S_6);
    }
#line 2007 "string.m"
    return mercury__string__S_6;
#line 2007 "string.m"
  }
#line 197 "string.m"
}

#line 190 "string.m"
MR_bool MR_CALL 
mercury__string__from_utf16_code_unit_list_2_p_0(
#line 190 "string.m"
  MR_Word mercury__string__CodeList_3,
#line 190 "string.m"
  MR_String * mercury__string__String_4)
#line 190 "string.m"
{
#line 1976 "string.m"
  {
#line 1976 "string.m"
    MR_bool mercury__string__succeeded;

#line 1375 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_utf16_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1375 "string.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 30059 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1375 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1976 "string.m"
    if (mercury__string__succeeded)
#line 1974 "string.m"
      {
#line 1974 "string.m"
        MR_Word mercury__string__RevChars_5;
#line 1974 "string.m"
        MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1634 "string.m"
        MR_String mercury__string__Str0_9;

#line 1974 "string.m"
        {
#line 1974 "string.m"
          mercury__string__succeeded = mercury__string__decode_utf16_3_p_0(mercury__string__CodeList_3, mercury__string__V_6_6, &mercury__string__RevChars_5);
        }
#line 1974 "string.m"
        if (mercury__string__succeeded)
#line 1974 "string.m"
          {
#line 1632 "string.m"
            {
#line 1632 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__RevChars_5, &mercury__string__Str0_9);
            }
#line 1634 "string.m"
            if (mercury__string__succeeded)
#line 1633 "string.m"
              *mercury__string__String_4 = mercury__string__Str0_9;
#line 1634 "string.m"
            else
#line 1635 "string.m"
              {
#line 1635 "string.m"
                {
#line 1635 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
                }
#line 1635 "string.m"
              }
#line 1634 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 1974 "string.m"
          }
#line 1974 "string.m"
      }
#line 1976 "string.m"
    else
#line 1977 "string.m"
      {
#line 1977 "string.m"
        return mercury__string__succeeded = mercury__string__from_code_unit_list_2_p_0(mercury__string__CodeList_3, mercury__string__String_4);
      }
#line 1976 "string.m"
    return mercury__string__succeeded;
#line 1976 "string.m"
  }
#line 190 "string.m"
}

#line 185 "string.m"
MR_bool MR_CALL 
mercury__string__from_utf8_code_unit_list_2_p_0(
#line 185 "string.m"
  MR_Word mercury__string__CodeList_3,
#line 185 "string.m"
  MR_String * mercury__string__String_4)
#line 185 "string.m"
{
#line 1919 "string.m"
  {
#line 1919 "string.m"
    MR_bool mercury__string__succeeded;

#line 1375 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_utf8_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1375 "string.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 30153 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1375 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1919 "string.m"
    if (mercury__string__succeeded)
#line 1918 "string.m"
      {
#line 1918 "string.m"
        return mercury__string__succeeded = mercury__string__from_code_unit_list_2_p_0(mercury__string__CodeList_3, mercury__string__String_4);
      }
#line 1919 "string.m"
    else
#line 1920 "string.m"
      {
#line 1920 "string.m"
        MR_Word mercury__string__RevChars_5;
#line 1920 "string.m"
        MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1634 "string.m"
        MR_String mercury__string__Str0_9;

#line 1920 "string.m"
        {
#line 1920 "string.m"
          mercury__string__succeeded = mercury__string__decode_utf8_3_p_0(mercury__string__CodeList_3, mercury__string__V_6_6, &mercury__string__RevChars_5);
        }
#line 1920 "string.m"
        if (mercury__string__succeeded)
#line 1920 "string.m"
          {
#line 1632 "string.m"
            {
#line 1632 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__RevChars_5, &mercury__string__Str0_9);
            }
#line 1634 "string.m"
            if (mercury__string__succeeded)
#line 1633 "string.m"
              *mercury__string__String_4 = mercury__string__Str0_9;
#line 1634 "string.m"
            else
#line 1635 "string.m"
              {
#line 1635 "string.m"
                {
#line 1635 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
                }
#line 1635 "string.m"
              }
#line 1634 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 1920 "string.m"
          }
#line 1920 "string.m"
      }
#line 1919 "string.m"
    return mercury__string__succeeded;
#line 1919 "string.m"
  }
#line 185 "string.m"
}

#line 180 "string.m"
MR_bool MR_CALL 
mercury__string__from_code_unit_list_2_p_0(
#line 180 "string.m"
  MR_Word mercury__string__CodeList_1,
#line 180 "string.m"
  MR_String * mercury__string__Str_2)
#line 180 "string.m"
{
#line 1791 "string.m"
  {
#line 1791 "string.m"
    MR_bool mercury__string__succeeded;

#line 1795 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_code_unit_list_2_p_0

	MR_Word CodeList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CodeList =  mercury__string__CodeList_1 ;
		{
#line 1795 "string.m"

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

#line 30283 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1795 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1791 "string.m"
    return mercury__string__succeeded;
#line 1791 "string.m"
  }
#line 180 "string.m"
}

#line 174 "string.m"
void MR_CALL 
mercury__string__to_utf16_code_unit_list_2_p_0(
#line 174 "string.m"
  MR_String mercury__string__String_3,
#line 174 "string.m"
  MR_Word * mercury__string__CodeList_4)
#line 174 "string.m"
{
#line 1776 "string.m"
  {
#line 1776 "string.m"
    MR_bool mercury__string__succeeded;

#line 1375 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1375 "string.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 30325 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1375 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1776 "string.m"
    if (mercury__string__succeeded)
#line 1775 "string.m"
      {
#line 1775 "string.m"
        MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1775 "string.m"
        MR_Integer mercury__string__V_18_18;
#line 1775 "string.m"
        MR_Integer mercury__string__End_35;
#line 1775 "string.m"
        MR_Integer mercury__string__V_37_37;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 30360 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_18_18  = Length;
#line 2580 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 30380 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_37_37  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
        mercury__string__succeeded = (mercury__string__V_18_18 < mercury__string__V_37_37);
#line 243 "int.opt"
        if (mercury__string__succeeded)
#line 242 "int.opt"
          mercury__string__End_35 = mercury__string__V_18_18;
#line 243 "int.opt"
        else
#line 244 "int.opt"
          mercury__string__End_35 = mercury__string__V_37_37;
#line 4898 "string.m"
        {
#line 4898 "string.m"
          mercury__string__foldr_between_2__ho53_6_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__End_35, mercury__string__V_6_6, mercury__string__CodeList_4);
#line 4898 "string.m"
          return;
        }
#line 1775 "string.m"
      }
#line 1776 "string.m"
    else
#line 1738 "string.m"
      {
#line 1738 "string.m"
        MR_Integer mercury__string__V_60_60;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 30426 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_60_60  = Length;
#line 2580 "string.m"
}
#line 1739 "string.m"
        {
#line 1739 "string.m"
          mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__V_60_60, mercury__string__CodeList_4);
#line 1739 "string.m"
          return;
        }
#line 1738 "string.m"
      }
#line 1776 "string.m"
  }
#line 174 "string.m"
}

#line 170 "string.m"
void MR_CALL 
mercury__string__to_utf8_code_unit_list_2_p_0(
#line 170 "string.m"
  MR_String mercury__string__String_3,
#line 170 "string.m"
  MR_Word * mercury__string__CodeList_4)
#line 170 "string.m"
{
#line 1758 "string.m"
  {
#line 1758 "string.m"
    MR_bool mercury__string__succeeded;

#line 1375 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1375 "string.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 30472 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1375 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1758 "string.m"
    if (mercury__string__succeeded)
#line 1738 "string.m"
      {
#line 1738 "string.m"
        MR_Integer mercury__string__V_14_14;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 30501 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_14_14  = Length;
#line 2580 "string.m"
}
#line 1739 "string.m"
        {
#line 1739 "string.m"
          mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__V_14_14, mercury__string__CodeList_4);
#line 1739 "string.m"
          return;
        }
#line 1738 "string.m"
      }
#line 1758 "string.m"
    else
#line 1759 "string.m"
      {
#line 1759 "string.m"
        MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1759 "string.m"
        MR_Integer mercury__string__V_27_27;
#line 1759 "string.m"
        MR_Integer mercury__string__End_44;
#line 1759 "string.m"
        MR_Integer mercury__string__V_46_46;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 30543 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_27_27  = Length;
#line 2580 "string.m"
}
#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 30563 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_46_46  = Length;
#line 2580 "string.m"
}
#line 240 "int.opt"
        mercury__string__succeeded = (mercury__string__V_27_27 < mercury__string__V_46_46);
#line 243 "int.opt"
        if (mercury__string__succeeded)
#line 242 "int.opt"
          mercury__string__End_44 = mercury__string__V_27_27;
#line 243 "int.opt"
        else
#line 244 "int.opt"
          mercury__string__End_44 = mercury__string__V_46_46;
#line 4898 "string.m"
        {
#line 4898 "string.m"
          mercury__string__foldr_between_2__ho54_6_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__End_44, mercury__string__V_6_6, mercury__string__CodeList_4);
#line 4898 "string.m"
          return;
        }
#line 1759 "string.m"
      }
#line 1758 "string.m"
  }
#line 170 "string.m"
}

#line 166 "string.m"
void MR_CALL 
mercury__string__to_code_unit_list_2_p_0(
#line 166 "string.m"
  MR_String mercury__string__String_3,
#line 166 "string.m"
  MR_Word * mercury__string__List_4)
#line 166 "string.m"
{
#line 1738 "string.m"
  {
#line 1738 "string.m"
    MR_bool mercury__string__succeeded;
#line 1738 "string.m"
    MR_Integer mercury__string__V_6_6;

#line 2580 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2580 "string.m"

    Length = strlen(Str);

#line 30623 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_6_6  = Length;
#line 2580 "string.m"
}
#line 1739 "string.m"
    {
#line 1739 "string.m"
      mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__V_6_6, mercury__string__List_4);
#line 1739 "string.m"
      return;
    }
#line 1738 "string.m"
  }
#line 166 "string.m"
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
#line 1638 "string.m"
  {
#line 1638 "string.m"
    MR_bool mercury__string__succeeded;

#line 1642 "string.m"
{
#define MR_PROC_LABEL mercury__string__semidet_from_rev_char_list_2_p_0

	MR_Word Chars;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Chars =  mercury__string__Chars_1 ;
		{
#line 1642 "string.m"
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
#line 30720 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1642 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1638 "string.m"
    return mercury__string__succeeded;
#line 1638 "string.m"
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
#line 1634 "string.m"
  {
#line 1634 "string.m"
    MR_bool mercury__string__succeeded;
#line 1634 "string.m"
    MR_String mercury__string__Str0_5;

#line 1632 "string.m"
    {
#line 1632 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Chars_3, &mercury__string__Str0_5);
    }
#line 1634 "string.m"
    if (mercury__string__succeeded)
#line 1633 "string.m"
      *mercury__string__Str_4 = mercury__string__Str0_5;
#line 1634 "string.m"
    else
#line 1635 "string.m"
      {
#line 1635 "string.m"
        {
#line 1635 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
#line 1635 "string.m"
          return;
        }
#line 1635 "string.m"
      }
#line 1634 "string.m"
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
#line 1634 "string.m"
  {
#line 1634 "string.m"
    MR_bool mercury__string__succeeded;
#line 1634 "string.m"
    MR_String mercury__string__S_4;
#line 1634 "string.m"
    MR_String mercury__string__Str0_7;

#line 1632 "string.m"
    {
#line 1632 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_7);
    }
#line 1634 "string.m"
    if (mercury__string__succeeded)
#line 1633 "string.m"
      mercury__string__S_4 = mercury__string__Str0_7;
#line 1634 "string.m"
    else
#line 1635 "string.m"
      {
#line 1635 "string.m"
        {
#line 1635 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
        }
#line 1635 "string.m"
      }
#line 1634 "string.m"
    return mercury__string__S_4;
#line 1634 "string.m"
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
#line 1500 "string.m"
  {
#line 1500 "string.m"
    MR_bool mercury__string__succeeded;

#line 1504 "string.m"
{
#define MR_PROC_LABEL mercury__string__semidet_from_char_list_2_p_0

	MR_Word CharList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CharList =  mercury__string__CharList_1 ;
		{
#line 1504 "string.m"
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
#line 30902 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1504 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1500 "string.m"
    return mercury__string__succeeded;
#line 1500 "string.m"
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
#line 1414 "string.m"
  {
#line 1414 "string.m"
    MR_bool mercury__string__succeeded;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_char_list_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_2 ;
		{
#line 1418 "string.m"
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
#line 30957 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Chars_1  = CharList;
#line 1418 "string.m"
}
#line 1414 "string.m"
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
#line 1496 "string.m"
  {
#line 1496 "string.m"
    MR_bool mercury__string__succeeded;
#line 1496 "string.m"
    MR_String mercury__string__Str0_7;

#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Chars_1, &mercury__string__Str0_7);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      *mercury__string__Str_2 = mercury__string__Str0_7;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1497 "string.m"
          return;
        }
#line 1497 "string.m"
      }
#line 1496 "string.m"
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
#line 1496 "string.m"
  {
#line 1496 "string.m"
    MR_bool mercury__string__succeeded;
#line 1496 "string.m"
    MR_String mercury__string__S_4;
#line 1496 "string.m"
    MR_String mercury__string__Str0_9;

#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_9);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      mercury__string__S_4 = mercury__string__Str0_9;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1497 "string.m"
      }
#line 1496 "string.m"
    return mercury__string__S_4;
#line 1496 "string.m"
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
#line 1496 "string.m"
  {
#line 1496 "string.m"
    MR_bool mercury__string__succeeded;
#line 1496 "string.m"
    MR_String mercury__string__Str0_11;

#line 1494 "string.m"
    {
#line 1494 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__CharList_2, &mercury__string__Str0_11);
    }
#line 1496 "string.m"
    if (mercury__string__succeeded)
#line 1495 "string.m"
      *mercury__string__Str_1 = mercury__string__Str0_11;
#line 1496 "string.m"
    else
#line 1497 "string.m"
      {
#line 1497 "string.m"
        {
#line 1497 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1497 "string.m"
          return;
        }
#line 1497 "string.m"
      }
#line 1496 "string.m"
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
#line 1414 "string.m"
  {
#line 1414 "string.m"
    MR_bool mercury__string__succeeded;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
#line 1418 "string.m"
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
#line 31136 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
#line 1418 "string.m"
}
#line 1414 "string.m"
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
#line 1414 "string.m"
  {
#line 1414 "string.m"
    MR_bool mercury__string__succeeded;
#line 1414 "string.m"
    MR_Word mercury__string__Cs_4;

#line 1418 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S_3 ;
		{
#line 1418 "string.m"
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
#line 31186 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Cs_4  = CharList;
#line 1418 "string.m"
}
#line 1414 "string.m"
    return mercury__string__Cs_4;
#line 1414 "string.m"
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
