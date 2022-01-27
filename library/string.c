/*
** Automatically generated from `string.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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



#line 4914 "string.m"
struct mercury__string__foldr_between_2_6_p_4_env_0_s {
#line 4914 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18;
#line 4914 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__Closure_7;
#line 4914 "string.m"
  MR_String mercury__string__foldr_between_2_6_p_4_env_0__String_8;
#line 4914 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__Start_9;
#line 4914 "string.m"
  MR_Box * mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
#line 4914 "string.m"
  MR_Cont mercury__string__foldr_between_2_6_p_4_env_0__cont;
#line 4914 "string.m"
  void * mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr;
#line 4925 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__J_12;
#line 4923 "string.m"
  MR_Box mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
#line 4914 "string.m"
};

#line 4912 "string.m"
struct mercury__string__foldr_between_2_6_p_3_env_0_s {
#line 4912 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18;
#line 4912 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__Closure_7;
#line 4912 "string.m"
  MR_String mercury__string__foldr_between_2_6_p_3_env_0__String_8;
#line 4912 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__Start_9;
#line 4912 "string.m"
  MR_Box * mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
#line 4912 "string.m"
  MR_Cont mercury__string__foldr_between_2_6_p_3_env_0__cont;
#line 4912 "string.m"
  void * mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr;
#line 4925 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__J_12;
#line 4923 "string.m"
  MR_Box mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
#line 4912 "string.m"
};

#line 4859 "string.m"
struct mercury__string__foldl2_between_2_8_p_5_env_0_s {
#line 4859 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25;
#line 4859 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26;
#line 4859 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9;
#line 4859 "string.m"
  MR_String mercury__string__foldl2_between_2_8_p_5_env_0__String_10;
#line 4859 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__End_12;
#line 4859 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18;
#line 4859 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20;
#line 4859 "string.m"
  MR_Cont mercury__string__foldl2_between_2_8_p_5_env_0__cont;
#line 4859 "string.m"
  void * mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr;
#line 4870 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__J_15;
#line 4868 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21;
#line 4868 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22;
#line 4859 "string.m"
};

#line 4857 "string.m"
struct mercury__string__foldl2_between_2_8_p_4_env_0_s {
#line 4857 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25;
#line 4857 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26;
#line 4857 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9;
#line 4857 "string.m"
  MR_String mercury__string__foldl2_between_2_8_p_4_env_0__String_10;
#line 4857 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__End_12;
#line 4857 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18;
#line 4857 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20;
#line 4857 "string.m"
  MR_Cont mercury__string__foldl2_between_2_8_p_4_env_0__cont;
#line 4857 "string.m"
  void * mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr;
#line 4870 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__J_15;
#line 4868 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21;
#line 4868 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22;
#line 4857 "string.m"
};

#line 4832 "string.m"
struct mercury__string__foldl_between_2_6_p_4_env_0_s {
#line 4832 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18;
#line 4832 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__Closure_7;
#line 4832 "string.m"
  MR_String mercury__string__foldl_between_2_6_p_4_env_0__String_8;
#line 4832 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__End_10;
#line 4832 "string.m"
  MR_Box * mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
#line 4832 "string.m"
  MR_Cont mercury__string__foldl_between_2_6_p_4_env_0__cont;
#line 4832 "string.m"
  void * mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr;
#line 4843 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__J_12;
#line 4841 "string.m"
  MR_Box mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
#line 4832 "string.m"
};

#line 4830 "string.m"
struct mercury__string__foldl_between_2_6_p_3_env_0_s {
#line 4830 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18;
#line 4830 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__Closure_7;
#line 4830 "string.m"
  MR_String mercury__string__foldl_between_2_6_p_3_env_0__String_8;
#line 4830 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__End_10;
#line 4830 "string.m"
  MR_Box * mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
#line 4830 "string.m"
  MR_Cont mercury__string__foldl_between_2_6_p_3_env_0__cont;
#line 4830 "string.m"
  void * mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr;
#line 4843 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__J_12;
#line 4841 "string.m"
  MR_Box mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
#line 4830 "string.m"
};

#line 3492 "string.m"
struct mercury__string__mercury_append_3_p_3_env_0_s {
#line 3492 "string.m"
  MR_String * mercury__string__mercury_append_3_p_3_env_0__X_4;
#line 3492 "string.m"
  MR_String * mercury__string__mercury_append_3_p_3_env_0__Y_5;
#line 3492 "string.m"
  MR_Cont mercury__string__mercury_append_3_p_3_env_0__cont;
#line 3492 "string.m"
  void * mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr;
#line 3494 "string.m"
  MR_bool mercury__string__mercury_append_3_p_3_env_0__succeeded;
#line 3494 "string.m"
  MR_Word mercury__string__mercury_append_3_p_3_env_0__XList_7;
#line 3494 "string.m"
  MR_Word mercury__string__mercury_append_3_p_3_env_0__YList_8;
#line 3492 "string.m"
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

#line 437 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_56_95_95_91_50_93_95_48_3_f_in__list_0(
#line 437 "list.int"
  MR_String mercury__string__V_36_36,
#line 437 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 437 "list.int"
  MR_Word mercury__string__HeadVar__3_3);

#line 4826 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_53_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 4826 "string.m"
  MR_String mercury__string__V_21_21,
#line 4826 "string.m"
  MR_String mercury__string__String_8,
#line 4826 "string.m"
  MR_Integer mercury__string__I_9,
#line 4826 "string.m"
  MR_Integer mercury__string__End_10,
#line 4826 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4826 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15);

#line 4826 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4826 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4826 "string.m"
  MR_String mercury__string__String_8,
#line 4826 "string.m"
  MR_Integer mercury__string__I_9,
#line 4826 "string.m"
  MR_Integer mercury__string__End_10,
#line 4826 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4826 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4906 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4906 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4906 "string.m"
  MR_String mercury__string__String_8,
#line 4906 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4906 "string.m"
  MR_Integer mercury__string__I_10,
#line 4906 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4906 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4828 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_55_95_95_91_50_93_95_48_6_p_0(
#line 4828 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4828 "string.m"
  MR_String mercury__string__String_8,
#line 4828 "string.m"
  MR_Integer mercury__string__I_9,
#line 4828 "string.m"
  MR_Integer mercury__string__End_10,
#line 4828 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4828 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 4828 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_50_93_95_48_6_p_0(
#line 4828 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4828 "string.m"
  MR_String mercury__string__String_8,
#line 4828 "string.m"
  MR_Integer mercury__string__I_9,
#line 4828 "string.m"
  MR_Integer mercury__string__End_10,
#line 4828 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4828 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 135 "list.int"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(
#line 135 "list.int"
  MR_String mercury__string__V_20_20,
#line 135 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 135 "list.int"
  MR_Word mercury__string__HeadVar__3_3,
#line 135 "list.int"
  MR_Word * mercury__string__HeadVar__4_4);

#line 4906 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_52_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4906 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4906 "string.m"
  MR_String mercury__string__String_8,
#line 4906 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4906 "string.m"
  MR_Integer mercury__string__I_10,
#line 4906 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4906 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4826 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4826 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4826 "string.m"
  MR_String mercury__string__String_8,
#line 4826 "string.m"
  MR_Integer mercury__string__I_9,
#line 4826 "string.m"
  MR_Integer mercury__string__End_10,
#line 4826 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4826 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4370 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_53_95_95_91_50_93_95_48_6_p_0(
#line 4370 "string.m"
  MR_Char mercury__string__V_21_21,
#line 4370 "string.m"
  MR_String mercury__string__Str_8,
#line 4370 "string.m"
  MR_Integer mercury__string__I_9,
#line 4370 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4370 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4370 "string.m"
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

#line 4351 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(
#line 4351 "string.m"
  MR_Word mercury__string__V_11_11,
#line 4351 "string.m"
  MR_String mercury__string__String_6,
#line 4351 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4351 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 326 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(
#line 326 "list.int"
  MR_String mercury__string__V_12_12,
#line 326 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 326 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(
#line 326 "list.int"
  MR_Char mercury__string__V_12_12,
#line 326 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 326 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 326 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(
#line 326 "list.int"
  MR_Char mercury__string__V_12_12,
#line 326 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 326 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 4906 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2__ho54_6_p_0(
#line 4906 "string.m"
  MR_String mercury__string__String_8,
#line 4906 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4906 "string.m"
  MR_Integer mercury__string__I_10,
#line 4906 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4906 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15);

#line 4906 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2__ho53_6_p_0(
#line 4906 "string.m"
  MR_String mercury__string__String_8,
#line 4906 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4906 "string.m"
  MR_Integer mercury__string__I_10,
#line 4906 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4906 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15);

#line 4351 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho10__ho51_4_p_0(
#line 4351 "string.m"
  MR_String mercury__string__String_6,
#line 4351 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4351 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 4331 "string.m"
static void MR_CALL 
mercury__string__words_loop__ho40_4_p_0(
#line 4331 "string.m"
  MR_String mercury__string__String_6,
#line 4331 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4331 "string.m"
  MR_Word * mercury__string__Words_8);

#line 4351 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho39_4_p_0(
#line 4351 "string.m"
  MR_String mercury__string__String_6,
#line 4351 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4351 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 3168 "string.m"
static void MR_CALL 
mercury__string__suffix_length_loop__ho37_4_p_0(
#line 3168 "string.m"
  MR_String mercury__string__S_6,
#line 3168 "string.m"
  MR_Integer mercury__string__I_7,
#line 3168 "string.m"
  MR_Integer * mercury__string__Index_8);

#line 3151 "string.m"
static void MR_CALL 
mercury__string__prefix_length_loop__ho36_4_p_0(
#line 3151 "string.m"
  MR_String mercury__string__S_6,
#line 3151 "string.m"
  MR_Integer mercury__string__I_7,
#line 3151 "string.m"
  MR_Integer * mercury__string__Index_8);

#line 3079 "string.m"
static MR_bool MR_CALL 
mercury__string__all_match_loop__ho34_3_p_0(
#line 3079 "string.m"
  MR_String mercury__string__String_5,
#line 3079 "string.m"
  MR_Integer mercury__string__Cur_6);

#line 326 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho16_2_f_in__list_0(
#line 326 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 437 "list.int"
static MR_Word MR_CALL 
mercury__string__map_corresponding__ho15_3_f_in__list_0(
#line 437 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 437 "list.int"
  MR_Word mercury__string__HeadVar__3_3);

#line 326 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
#line 326 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 326 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho13_2_f_in__list_0(
#line 326 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 135 "list.int"
static void MR_CALL 
mercury__string__foldl__ho8_4_p_in__list_0(
#line 135 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 135 "list.int"
  MR_Integer mercury__string__HeadVar__3_3,
#line 135 "list.int"
  MR_Integer * mercury__string__HeadVar__4_4);

#line 4771 "string.m"
static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__4771__1_2_f_0(
#line 4771 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4771 "string.m"
  MR_String mercury__string__HeadVar__2_60);

#line 4641 "string.m"
static MR_Word MR_CALL 
mercury__string__IntroducedFrom__func__replace_all__4641__1_3_f_0(
#line 4641 "string.m"
  MR_String mercury__string__Subst_7,
#line 4641 "string.m"
  MR_Char mercury__string__HeadVar__2_16,
#line 4641 "string.m"
  MR_Word mercury__string__HeadVar__3_17);

#line 4923 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
#line 4923 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4923 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
#line 4923 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4868 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
#line 4868 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4868 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
#line 4868 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4841 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
#line 4841 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4841 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
#line 4841 "string.m"
  void * mercury__string__env_ptr_arg);

#line 3494 "string.m"
static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
#line 3494 "string.m"
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



#include "string.mh"
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
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"

#line 5180 "string.m"
MR_bool 
ML_string_to_float(
#line 5180 "string.m"
  MR_String mercury__string__FloatString_1,
#line 5180 "string.m"
  MR_Float * mercury__string__FloatVal_2)
#line 5180 "string.m"
{
#line 5180 "string.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__string__to_float_2_p_0((MR_String) mercury__string__FloatString_1, (MR_Float *) mercury__string__FloatVal_2);
	return ret_value;
}


#line 1111 "string.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1119 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1124 "string.c"
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

#line 1139 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1144 "string.c"
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

#line 1159 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_0[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0
};

#line 1164 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_1[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

#line 1169 "string.c"
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

#line 1183 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_justified_column_0[2] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0,
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

#line 1189 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justified_column_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1195 "string.c"
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

#line 1212 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_0 = {
  (MR_String) "just_left",
  (MR_Integer) 0
};

#line 1218 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_1 = {
  (MR_String) "just_right",
  (MR_Integer) 1
};

#line 1224 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_value_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

#line 1230 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_name_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

#line 1236 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justify_sense_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1242 "string.c"
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

#line 1259 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_line_0[1] = {
  (MR_Integer) 0
};

#line 1264 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_line_0 = {
  (MR_String) "line",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1271 "string.c"
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

#line 1288 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1293 "string.c"
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

#line 1308 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1313 "string.c"
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

#line 1328 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1333 "string.c"
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

#line 1348 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 1353 "string.c"
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

#line 1368 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_0[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_0
};

#line 1373 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_1[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_1
};

#line 1378 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_2[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

#line 1383 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3
};

#line 1388 "string.c"
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

#line 1412 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[4] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3,
  &mercury__string__string__du_functor_desc_poly_type_0_0,
  &mercury__string__string__du_functor_desc_poly_type_0_1,
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

#line 1420 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1428 "string.c"
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

#line 1445 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_text_file_0[1] = {
  (MR_Integer) 0
};

#line 1450 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_text_file_0 = {
  (MR_String) "text_file",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1457 "string.c"
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

#line 1474 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
#line 1477 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1479 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1481 "string.c"
{
#line 1483 "string.c"
  {
#line 1485 "string.c"
    MR_bool mercury__string__succeeded;

#line 1488 "string.c"
    {
#line 1490 "string.c"
      mercury__string__succeeded = mercury__string____Unify____justified_column_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1493 "string.c"
    return mercury__string__succeeded;
#line 1495 "string.c"
  }
#line 1497 "string.c"
}

#line 1500 "string.c"
static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
#line 1503 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1505 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1507 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1509 "string.c"
{
#line 1511 "string.c"
  {
#line 1513 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1516 "string.c"
    {
#line 1518 "string.c"
      mercury__string____Compare____justified_column_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1521 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1523 "string.c"
  }
#line 1525 "string.c"
}

#line 1528 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
#line 1531 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1533 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1535 "string.c"
{
#line 1537 "string.c"
  {
#line 1539 "string.c"
    MR_bool mercury__string__succeeded;

#line 1542 "string.c"
    {
#line 1544 "string.c"
      mercury__string__succeeded = mercury__string____Unify____justify_sense_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1547 "string.c"
    return mercury__string__succeeded;
#line 1549 "string.c"
  }
#line 1551 "string.c"
}

#line 1554 "string.c"
static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
#line 1557 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1559 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1561 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1563 "string.c"
{
#line 1565 "string.c"
  {
#line 1567 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1570 "string.c"
    {
#line 1572 "string.c"
      mercury__string____Compare____justify_sense_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1575 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1577 "string.c"
  }
#line 1579 "string.c"
}

#line 1582 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
#line 1585 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1587 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1589 "string.c"
{
#line 1591 "string.c"
  {
#line 1593 "string.c"
    MR_bool mercury__string__succeeded;

#line 1596 "string.c"
    {
#line 1598 "string.c"
      mercury__string__succeeded = mercury__string____Unify____line_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1601 "string.c"
    return mercury__string__succeeded;
#line 1603 "string.c"
  }
#line 1605 "string.c"
}

#line 1608 "string.c"
static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
#line 1611 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1613 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1615 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1617 "string.c"
{
#line 1619 "string.c"
  {
#line 1621 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1624 "string.c"
    {
#line 1626 "string.c"
      mercury__string____Compare____line_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1629 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1631 "string.c"
  }
#line 1633 "string.c"
}

#line 1636 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
#line 1639 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1641 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1643 "string.c"
{
#line 1645 "string.c"
  {
#line 1647 "string.c"
    MR_bool mercury__string__succeeded;

#line 1650 "string.c"
    {
#line 1652 "string.c"
      mercury__string__succeeded = mercury__string____Unify____poly_type_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1655 "string.c"
    return mercury__string__succeeded;
#line 1657 "string.c"
  }
#line 1659 "string.c"
}

#line 1662 "string.c"
static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
#line 1665 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1667 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1669 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1671 "string.c"
{
#line 1673 "string.c"
  {
#line 1675 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1678 "string.c"
    {
#line 1680 "string.c"
      mercury__string____Compare____poly_type_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1683 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1685 "string.c"
  }
#line 1687 "string.c"
}

#line 1690 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
#line 1693 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1695 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1697 "string.c"
{
#line 1699 "string.c"
  {
#line 1701 "string.c"
    MR_bool mercury__string__succeeded;

#line 1704 "string.c"
    {
#line 1706 "string.c"
      mercury__string__succeeded = mercury__string____Unify____text_file_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1709 "string.c"
    return mercury__string__succeeded;
#line 1711 "string.c"
  }
#line 1713 "string.c"
}

#line 1716 "string.c"
static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
#line 1719 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1721 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1723 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1725 "string.c"
{
#line 1727 "string.c"
  {
#line 1729 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1732 "string.c"
    {
#line 1734 "string.c"
      mercury__string____Compare____text_file_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1737 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1739 "string.c"
  }
#line 1741 "string.c"
}

#line 437 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_56_95_95_91_50_93_95_48_3_f_in__list_0(
#line 437 "list.int"
  MR_String mercury__string__V_36_36,
#line 437 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 437 "list.int"
  MR_Word mercury__string__HeadVar__3_3)
#line 437 "list.int"
{
#line 207 "list.opt"
  {
#line 207 "list.opt"
    MR_bool mercury__string__succeeded;
#line 207 "list.opt"
    MR_Word mercury__string__HeadVar__4_4;

#line 207 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "list.opt"
      if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "list.opt"
        mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 207 "list.opt"
      else
#line 208 "list.opt"
        {
#line 10 "require.opt"
          {
#line 10 "require.opt"
            mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          }
#line 208 "list.opt"
        }
#line 207 "list.opt"
    else
#line 207 "list.opt"
      {
#line 207 "list.opt"
        MR_Word mercury__string__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 207 "list.opt"
        MR_String mercury__string__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 207 "list.opt"
        if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 213 "list.opt"
          {
#line 10 "require.opt"
            {
#line 10 "require.opt"
              mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
            }
#line 213 "list.opt"
          }
#line 207 "list.opt"
        else
#line 218 "list.opt"
          {
#line 218 "list.opt"
            MR_String mercury__string__HB_21_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 218 "list.opt"
            MR_Word mercury__string__TBs_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 1)));
#line 218 "list.opt"
            MR_String mercury__string__V_23_25;
#line 218 "list.opt"
            MR_Word mercury__string__V_24_26;
#line 218 "list.opt"
            MR_String mercury__string__V_48_48;

#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_56_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_36_36 ;
	S2 =  mercury__string__V_35_35 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 1834 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_48_48  = S3;
#line 3399 "string.m"
}
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_56_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__HB_21_23 ;
	S2 =  mercury__string__V_48_48 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 1861 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_23_25  = S3;
#line 3399 "string.m"
}
#line 220 "list.opt"
            {
#line 220 "list.opt"
              mercury__string__V_24_26 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_56_95_95_91_50_93_95_48_3_f_in__list_0(mercury__string__V_36_36, mercury__string__V_34_34, mercury__string__TBs_22_24);
            }
#line 218 "list.opt"
            {
#line 218 "list.opt"
              mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 0) = ((MR_Box) (mercury__string__V_23_25));
#line 218 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 1) = ((MR_Box) (mercury__string__V_24_26));
#line 218 "list.opt"
            }
#line 218 "list.opt"
          }
#line 207 "list.opt"
      }
#line 207 "list.opt"
    return mercury__string__HeadVar__4_4;
#line 207 "list.opt"
  }
#line 437 "list.int"
}

#line 4826 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_53_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 4826 "string.m"
  MR_String mercury__string__V_21_21,
#line 4826 "string.m"
  MR_String mercury__string__String_8,
#line 4826 "string.m"
  MR_Integer mercury__string__I_9,
#line 4826 "string.m"
  MR_Integer mercury__string__End_10,
#line 4826 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4826 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15)
#line 4826 "string.m"
{
#line 4843 "string.m"
  while (MR_TRUE)
#line 4843 "string.m"
    {
#line 4843 "string.m"
      /* tailcall optimized into a loop */
#line 4843 "string.m"
      {
#line 4843 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4843 "string.m"
        MR_Integer mercury__string__J_12;
#line 4843 "string.m"
        MR_Char mercury__string__Char_13;

#line 4837 "string.m"
        if (mercury__string__succeeded)
#line 4837 "string.m"
          {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 1955 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4837 "string.m"
            if (mercury__string__succeeded)
#line 4839 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4837 "string.m"
          }
#line 4843 "string.m"
        if (mercury__string__succeeded)
#line 4841 "string.m"
          {
#line 4841 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4798 "string.m"
            {
#line 4798 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__IntroducedFrom__func__replace_all__4641__1_3_f_0(mercury__string__V_21_21, mercury__string__Char_13, mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4842 "string.m"
            /* direct tailcall eliminated */
#line 4842 "string.m"
            {
#line 4842 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4842 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4842 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4842 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4842 "string.m"
            }
#line 4842 "string.m"
            continue;
#line 4841 "string.m"
          }
#line 4843 "string.m"
        else
#line 4843 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4843 "string.m"
      }
#line 4843 "string.m"
      break;
#line 4843 "string.m"
    }
#line 4826 "string.m"
}

#line 4826 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4826 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4826 "string.m"
  MR_String mercury__string__String_8,
#line 4826 "string.m"
  MR_Integer mercury__string__I_9,
#line 4826 "string.m"
  MR_Integer mercury__string__End_10,
#line 4826 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4826 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4826 "string.m"
{
#line 4843 "string.m"
  while (MR_TRUE)
#line 4843 "string.m"
    {
#line 4843 "string.m"
      /* tailcall optimized into a loop */
#line 4843 "string.m"
      {
#line 4843 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4843 "string.m"
        MR_Integer mercury__string__J_12;
#line 4843 "string.m"
        MR_Char mercury__string__Char_13;

#line 4837 "string.m"
        if (mercury__string__succeeded)
#line 4837 "string.m"
          {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2077 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4837 "string.m"
            if (mercury__string__succeeded)
#line 4839 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4837 "string.m"
          }
#line 4843 "string.m"
        if (mercury__string__succeeded)
#line 4841 "string.m"
          {
#line 4841 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4798 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4798 "string.m"
            {
#line 4798 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4842 "string.m"
            /* direct tailcall eliminated */
#line 4842 "string.m"
            {
#line 4842 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4842 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4842 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4842 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4842 "string.m"
            }
#line 4842 "string.m"
            continue;
#line 4841 "string.m"
          }
#line 4843 "string.m"
        else
#line 4843 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4843 "string.m"
      }
#line 4843 "string.m"
      break;
#line 4843 "string.m"
    }
#line 4826 "string.m"
}

#line 4906 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4906 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4906 "string.m"
  MR_String mercury__string__String_8,
#line 4906 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4906 "string.m"
  MR_Integer mercury__string__I_10,
#line 4906 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4906 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4906 "string.m"
{
#line 4925 "string.m"
  while (MR_TRUE)
#line 4925 "string.m"
    {
#line 4925 "string.m"
      /* tailcall optimized into a loop */
#line 4925 "string.m"
      {
#line 4925 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4925 "string.m"
        MR_Integer mercury__string__J_12;
#line 4925 "string.m"
        MR_Char mercury__string__Char_13;

#line 4919 "string.m"
        if (mercury__string__succeeded)
#line 4919 "string.m"
          {
#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 2204 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4919 "string.m"
            if (mercury__string__succeeded)
#line 4921 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4919 "string.m"
          }
#line 4925 "string.m"
        if (mercury__string__succeeded)
#line 4923 "string.m"
          {
#line 4923 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4890 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4890 "string.m"
            {
#line 4890 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4924 "string.m"
            /* direct tailcall eliminated */
#line 4924 "string.m"
            {
#line 4924 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4924 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4924 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4924 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4924 "string.m"
            }
#line 4924 "string.m"
            continue;
#line 4923 "string.m"
          }
#line 4925 "string.m"
        else
#line 4925 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4925 "string.m"
      }
#line 4925 "string.m"
      break;
#line 4925 "string.m"
    }
#line 4906 "string.m"
}

#line 4828 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_55_95_95_91_50_93_95_48_6_p_0(
#line 4828 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4828 "string.m"
  MR_String mercury__string__String_8,
#line 4828 "string.m"
  MR_Integer mercury__string__I_9,
#line 4828 "string.m"
  MR_Integer mercury__string__End_10,
#line 4828 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4828 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 4828 "string.m"
{
#line 4843 "string.m"
  while (MR_TRUE)
#line 4843 "string.m"
    {
#line 4843 "string.m"
      /* tailcall optimized into a loop */
#line 4843 "string.m"
      {
#line 4843 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4843 "string.m"
        MR_Integer mercury__string__J_12;
#line 4843 "string.m"
        MR_Char mercury__string__Char_13;

#line 4837 "string.m"
        if (mercury__string__succeeded)
#line 4837 "string.m"
          {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2328 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4837 "string.m"
            if (mercury__string__succeeded)
#line 4839 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4837 "string.m"
          }
#line 4843 "string.m"
        if (mercury__string__succeeded)
#line 4841 "string.m"
          {
#line 4841 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4841 "string.m"
            MR_Integer mercury__string__M_24;
#line 4841 "string.m"
            MR_Integer mercury__string__V_25_25;

#line 5162 "string.m"
            {
#line 5162 "string.m"
              mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__V_19_19, mercury__string__Char_13, &mercury__string__M_24);
            }
#line 4841 "string.m"
            if (mercury__string__succeeded)
#line 4841 "string.m"
              {
#line 5163 "string.m"
                mercury__string__V_25_25 = (mercury__string__V_19_19 * mercury__string__STATE_VARIABLE_Acc_0_14);
#line 5163 "string.m"
                mercury__string__STATE_VARIABLE_Acc_16_16 = (mercury__string__V_25_25 + mercury__string__M_24);
#line 5166 "string.m"
                mercury__string__succeeded = (mercury__string__STATE_VARIABLE_Acc_0_14 <= mercury__string__STATE_VARIABLE_Acc_16_16);
#line 4841 "string.m"
                if (mercury__string__succeeded)
#line 4842 "string.m"
                  {
#line 4842 "string.m"
                    /* direct tailcall eliminated */
#line 4842 "string.m"
                    {
#line 4842 "string.m"
                      MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4842 "string.m"
                      MR_Integer mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4842 "string.m"
                      mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4842 "string.m"
                      mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4842 "string.m"
                    }
#line 4842 "string.m"
                    continue;
#line 4842 "string.m"
                  }
#line 4841 "string.m"
              }
#line 4841 "string.m"
          }
#line 4843 "string.m"
        else
#line 4843 "string.m"
          {
#line 4843 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4843 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4843 "string.m"
          }
#line 4843 "string.m"
        return mercury__string__succeeded;
#line 4843 "string.m"
      }
#line 4843 "string.m"
      break;
#line 4843 "string.m"
    }
#line 4828 "string.m"
}

#line 4828 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_50_93_95_48_6_p_0(
#line 4828 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4828 "string.m"
  MR_String mercury__string__String_8,
#line 4828 "string.m"
  MR_Integer mercury__string__I_9,
#line 4828 "string.m"
  MR_Integer mercury__string__End_10,
#line 4828 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4828 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 4828 "string.m"
{
#line 4843 "string.m"
  while (MR_TRUE)
#line 4843 "string.m"
    {
#line 4843 "string.m"
      /* tailcall optimized into a loop */
#line 4843 "string.m"
      {
#line 4843 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4843 "string.m"
        MR_Integer mercury__string__J_12;
#line 4843 "string.m"
        MR_Char mercury__string__Char_13;

#line 4837 "string.m"
        if (mercury__string__succeeded)
#line 4837 "string.m"
          {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2480 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4837 "string.m"
            if (mercury__string__succeeded)
#line 4839 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4837 "string.m"
          }
#line 4843 "string.m"
        if (mercury__string__succeeded)
#line 4841 "string.m"
          {
#line 4841 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4841 "string.m"
            MR_Integer mercury__string__M_24;
#line 4841 "string.m"
            MR_Integer mercury__string__V_25_25;

#line 5172 "string.m"
            {
#line 5172 "string.m"
              mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__V_19_19, mercury__string__Char_13, &mercury__string__M_24);
            }
#line 4841 "string.m"
            if (mercury__string__succeeded)
#line 4841 "string.m"
              {
#line 5173 "string.m"
                mercury__string__V_25_25 = (mercury__string__V_19_19 * mercury__string__STATE_VARIABLE_Acc_0_14);
#line 5173 "string.m"
                mercury__string__STATE_VARIABLE_Acc_16_16 = (mercury__string__V_25_25 - mercury__string__M_24);
#line 5176 "string.m"
                mercury__string__succeeded = (mercury__string__STATE_VARIABLE_Acc_16_16 <= mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4841 "string.m"
                if (mercury__string__succeeded)
#line 4842 "string.m"
                  {
#line 4842 "string.m"
                    /* direct tailcall eliminated */
#line 4842 "string.m"
                    {
#line 4842 "string.m"
                      MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4842 "string.m"
                      MR_Integer mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4842 "string.m"
                      mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4842 "string.m"
                      mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4842 "string.m"
                    }
#line 4842 "string.m"
                    continue;
#line 4842 "string.m"
                  }
#line 4841 "string.m"
              }
#line 4841 "string.m"
          }
#line 4843 "string.m"
        else
#line 4843 "string.m"
          {
#line 4843 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4843 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4843 "string.m"
          }
#line 4843 "string.m"
        return mercury__string__succeeded;
#line 4843 "string.m"
      }
#line 4843 "string.m"
      break;
#line 4843 "string.m"
    }
#line 4828 "string.m"
}

#line 135 "list.int"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(
#line 135 "list.int"
  MR_String mercury__string__V_20_20,
#line 135 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 135 "list.int"
  MR_Word mercury__string__HeadVar__3_3,
#line 135 "list.int"
  MR_Word * mercury__string__HeadVar__4_4)
#line 135 "list.int"
{
#line 385 "list.opt"
  while (MR_TRUE)
#line 385 "list.opt"
    {
#line 385 "list.opt"
      /* tailcall optimized into a loop */
#line 385 "list.opt"
      {
#line 385 "list.opt"
        MR_bool mercury__string__succeeded;

#line 385 "list.opt"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "list.opt"
          *mercury__string__HeadVar__4_4 = mercury__string__HeadVar__3_3;
#line 385 "list.opt"
        else
#line 387 "list.opt"
          {
#line 387 "list.opt"
            MR_Word mercury__string__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 387 "list.opt"
            MR_Word mercury__string__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 387 "list.opt"
            MR_Word mercury__string__STATE_VARIABLE_A_15_15_13;

#line 4962 "string.m"
            {
#line 4962 "string.m"
              mercury__string__STATE_VARIABLE_A_15_15_13 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_56_95_95_91_50_93_95_48_3_f_in__list_0(mercury__string__V_20_20, mercury__string__H_10_9, mercury__string__HeadVar__3_3);
            }
#line 389 "list.opt"
            /* direct tailcall eliminated */
#line 389 "list.opt"
            {
#line 389 "list.opt"
              MR_Word mercury__string__HeadVar__2__tmp_copy_2 = mercury__string__T_11_10;
#line 389 "list.opt"
              MR_Word mercury__string__HeadVar__3__tmp_copy_3 = mercury__string__STATE_VARIABLE_A_15_15_13;

#line 389 "list.opt"
              mercury__string__HeadVar__3_3 = mercury__string__HeadVar__3__tmp_copy_3;
#line 389 "list.opt"
              mercury__string__HeadVar__2_2 = mercury__string__HeadVar__2__tmp_copy_2;
#line 389 "list.opt"
            }
#line 389 "list.opt"
            continue;
#line 387 "list.opt"
          }
#line 385 "list.opt"
      }
#line 385 "list.opt"
      break;
#line 385 "list.opt"
    }
#line 135 "list.int"
}

#line 4906 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_52_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4906 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4906 "string.m"
  MR_String mercury__string__String_8,
#line 4906 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4906 "string.m"
  MR_Integer mercury__string__I_10,
#line 4906 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4906 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4906 "string.m"
{
#line 4925 "string.m"
  while (MR_TRUE)
#line 4925 "string.m"
    {
#line 4925 "string.m"
      /* tailcall optimized into a loop */
#line 4925 "string.m"
      {
#line 4925 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4925 "string.m"
        MR_Integer mercury__string__J_12;
#line 4925 "string.m"
        MR_Char mercury__string__Char_13;

#line 4919 "string.m"
        if (mercury__string__succeeded)
#line 4919 "string.m"
          {
#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 2707 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4919 "string.m"
            if (mercury__string__succeeded)
#line 4921 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4919 "string.m"
          }
#line 4925 "string.m"
        if (mercury__string__succeeded)
#line 4923 "string.m"
          {
#line 4923 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4897 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4897 "string.m"
            {
#line 4897 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4924 "string.m"
            /* direct tailcall eliminated */
#line 4924 "string.m"
            {
#line 4924 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4924 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4924 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4924 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4924 "string.m"
            }
#line 4924 "string.m"
            continue;
#line 4923 "string.m"
          }
#line 4925 "string.m"
        else
#line 4925 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4925 "string.m"
      }
#line 4925 "string.m"
      break;
#line 4925 "string.m"
    }
#line 4906 "string.m"
}

#line 4826 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4826 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4826 "string.m"
  MR_String mercury__string__String_8,
#line 4826 "string.m"
  MR_Integer mercury__string__I_9,
#line 4826 "string.m"
  MR_Integer mercury__string__End_10,
#line 4826 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4826 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4826 "string.m"
{
#line 4843 "string.m"
  while (MR_TRUE)
#line 4843 "string.m"
    {
#line 4843 "string.m"
      /* tailcall optimized into a loop */
#line 4843 "string.m"
      {
#line 4843 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4843 "string.m"
        MR_Integer mercury__string__J_12;
#line 4843 "string.m"
        MR_Char mercury__string__Char_13;

#line 4837 "string.m"
        if (mercury__string__succeeded)
#line 4837 "string.m"
          {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2831 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4837 "string.m"
            if (mercury__string__succeeded)
#line 4839 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4837 "string.m"
          }
#line 4843 "string.m"
        if (mercury__string__succeeded)
#line 4841 "string.m"
          {
#line 4841 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4815 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4815 "string.m"
            {
#line 4815 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4842 "string.m"
            /* direct tailcall eliminated */
#line 4842 "string.m"
            {
#line 4842 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4842 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4842 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4842 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4842 "string.m"
            }
#line 4842 "string.m"
            continue;
#line 4841 "string.m"
          }
#line 4843 "string.m"
        else
#line 4843 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4843 "string.m"
      }
#line 4843 "string.m"
      break;
#line 4843 "string.m"
    }
#line 4826 "string.m"
}

#line 4370 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_53_95_95_91_50_93_95_48_6_p_0(
#line 4370 "string.m"
  MR_Char mercury__string__V_21_21,
#line 4370 "string.m"
  MR_String mercury__string__Str_8,
#line 4370 "string.m"
  MR_Integer mercury__string__I_9,
#line 4370 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4370 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4370 "string.m"
  MR_Word * mercury__string__Acc_12)
#line 4370 "string.m"
{
#line 4390 "string.m"
  while (MR_TRUE)
#line 4390 "string.m"
    {
#line 4390 "string.m"
      /* tailcall optimized into a loop */
#line 4390 "string.m"
      {
#line 4390 "string.m"
        MR_bool mercury__string__succeeded;
#line 4390 "string.m"
        MR_Integer mercury__string__J_13;
#line 4390 "string.m"
        MR_Char mercury__string__C_14;

#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 2954 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_13  = PrevIndex;
	 mercury__string__C_14  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4390 "string.m"
        if (mercury__string__succeeded)
#line 4386 "string.m"
          {
#line 4399 "string.m"
            mercury__string__succeeded = (mercury__string__V_21_21 == mercury__string__C_14);
#line 4386 "string.m"
            if (mercury__string__succeeded)
#line 4383 "string.m"
              {
#line 4383 "string.m"
                MR_String mercury__string__Seg_16;
#line 4383 "string.m"
                MR_Word mercury__string__V_18_18;

#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3002 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_16  = SubString;
#line 4289 "string.m"
}
#line 4385 "string.m"
                {
#line 4385 "string.m"
                  mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4385 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Seg_16));
#line 4385 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4385 "string.m"
                }
#line 4385 "string.m"
                /* direct tailcall eliminated */
#line 4385 "string.m"
                {
#line 4385 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;
#line 4385 "string.m"
                  MR_Integer mercury__string__SegEnd__tmp_copy_10 = mercury__string__J_13;
#line 4385 "string.m"
                  MR_Word mercury__string__Acc0__tmp_copy_11 = mercury__string__V_18_18;

#line 4385 "string.m"
                  mercury__string__Acc0_11 = mercury__string__Acc0__tmp_copy_11;
#line 4385 "string.m"
                  mercury__string__SegEnd_10 = mercury__string__SegEnd__tmp_copy_10;
#line 4385 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4385 "string.m"
                }
#line 4385 "string.m"
                continue;
#line 4383 "string.m"
              }
#line 4386 "string.m"
            else
#line 4388 "string.m"
              {
#line 4388 "string.m"
                /* direct tailcall eliminated */
#line 4388 "string.m"
                {
#line 4388 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;

#line 4388 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4388 "string.m"
                }
#line 4388 "string.m"
                continue;
#line 4388 "string.m"
              }
#line 4386 "string.m"
          }
#line 4390 "string.m"
        else
#line 4392 "string.m"
          {
#line 4392 "string.m"
            MR_String mercury__string__Seg_20;

#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3092 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_20  = SubString;
#line 4289 "string.m"
}
#line 4393 "string.m"
            {
#line 4393 "string.m"
              MR_Word base;
#line 4393 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4393 "string.m"
              *mercury__string__Acc_12 = base;
#line 4393 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Seg_20));
#line 4393 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4393 "string.m"
            }
#line 4392 "string.m"
          }
#line 4390 "string.m"
      }
#line 4390 "string.m"
      break;
#line 4390 "string.m"
    }
#line 4370 "string.m"
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
#line 4809 "string.m"
  {
#line 4809 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4809 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4809 "string.m"
    MR_Integer mercury__string__End_13;
#line 4809 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 3173 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4812 "string.m"
    {
#line 4812 "string.m"
      return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_55_95_95_91_50_93_95_48_6_p_0(mercury__string__V_20_20, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4809 "string.m"
    return mercury__string__succeeded;
#line 4809 "string.m"
  }
#line 939 "string.m"
}

#line 4351 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(
#line 4351 "string.m"
  MR_Word mercury__string__V_11_11,
#line 4351 "string.m"
  MR_String mercury__string__String_6,
#line 4351 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4351 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4351 "string.m"
{
#line 4360 "string.m"
  while (MR_TRUE)
#line 4360 "string.m"
    {
#line 4360 "string.m"
      /* tailcall optimized into a loop */
#line 4360 "string.m"
      {
#line 4360 "string.m"
        MR_bool mercury__string__succeeded;
#line 4360 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4356 "string.m"
        MR_Char mercury__string__Char_10;
#line 38 "std_util.opt"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3257 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4356 "string.m"
        if (mercury__string__succeeded)
#line 4356 "string.m"
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
#line 4356 "string.m"
          }
#line 4360 "string.m"
        if (mercury__string__succeeded)
#line 4359 "string.m"
          {
#line 4359 "string.m"
            /* direct tailcall eliminated */
#line 4359 "string.m"
            {
#line 4359 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4359 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4359 "string.m"
            }
#line 4359 "string.m"
            continue;
#line 4359 "string.m"
          }
#line 4360 "string.m"
        else
#line 4361 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4360 "string.m"
      }
#line 4360 "string.m"
      break;
#line 4360 "string.m"
    }
#line 4351 "string.m"
}

#line 326 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(
#line 326 "list.int"
  MR_String mercury__string__V_12_12,
#line 326 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 326 "list.int"
{
#line 175 "list.opt"
  {
#line 175 "list.opt"
    MR_bool mercury__string__succeeded;
#line 175 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 175 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 175 "list.opt"
    else
#line 176 "list.opt"
      {
#line 176 "list.opt"
        MR_String mercury__string__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "list.opt"
        MR_String mercury__string__V_8_8;
#line 176 "list.opt"
        MR_Word mercury__string__V_9_9;

#line 177 "list.opt"
        {
#line 177 "list.opt"
          mercury__string__V_8_8 = mercury__string__IntroducedFrom__func__word_wrap_loop__4771__1_2_f_0(mercury__string__V_12_12, mercury__string__H_6_6);
        }
#line 178 "list.opt"
        {
#line 178 "list.opt"
          mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(mercury__string__V_12_12, mercury__string__T_7_7);
        }
#line 176 "list.opt"
        {
#line 176 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 176 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 176 "list.opt"
        }
#line 176 "list.opt"
      }
#line 175 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 175 "list.opt"
  }
#line 326 "list.int"
}

#line 326 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(
#line 326 "list.int"
  MR_Char mercury__string__V_12_12,
#line 326 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 326 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 326 "list.int"
{
#line 175 "list.opt"
  {
#line 175 "list.opt"
    MR_bool mercury__string__succeeded;
#line 175 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 175 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 175 "list.opt"
    else
#line 176 "list.opt"
      {
#line 176 "list.opt"
        MR_String mercury__string__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "list.opt"
        MR_String mercury__string__V_8_8;
#line 176 "list.opt"
        MR_Word mercury__string__V_9_9;
#line 176 "list.opt"
        MR_Integer mercury__string__Length_25;

#line 4594 "string.m"
        {
#line 4594 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__H_6_6, &mercury__string__Length_25);
        }
#line 4595 "string.m"
        mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_13_13);
#line 4599 "string.m"
        if (mercury__string__succeeded)
#line 4596 "string.m"
          {
#line 4596 "string.m"
            MR_Integer mercury__string__Count_26 = (mercury__string__V_13_13 - mercury__string__Length_25);
#line 4596 "string.m"
            MR_String mercury__string__PadString_27;

#line 4597 "string.m"
            {
#line 4597 "string.m"
              mercury__string__duplicate_char_3_p_0(mercury__string__V_12_12, mercury__string__Count_26, &mercury__string__PadString_27);
            }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__H_6_6 ;
	S2 =  mercury__string__PadString_27 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 3455 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3399 "string.m"
}
#line 4596 "string.m"
          }
#line 4599 "string.m"
        else
#line 4600 "string.m"
          mercury__string__V_8_8 = mercury__string__H_6_6;
#line 178 "list.opt"
        {
#line 178 "list.opt"
          mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(mercury__string__V_12_12, mercury__string__V_13_13, mercury__string__T_7_7);
        }
#line 176 "list.opt"
        {
#line 176 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 176 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 176 "list.opt"
        }
#line 176 "list.opt"
      }
#line 175 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 175 "list.opt"
  }
#line 326 "list.int"
}

#line 326 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(
#line 326 "list.int"
  MR_Char mercury__string__V_12_12,
#line 326 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 326 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 326 "list.int"
{
#line 175 "list.opt"
  {
#line 175 "list.opt"
    MR_bool mercury__string__succeeded;
#line 175 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 175 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 175 "list.opt"
    else
#line 176 "list.opt"
      {
#line 176 "list.opt"
        MR_String mercury__string__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "list.opt"
        MR_String mercury__string__V_8_8;
#line 176 "list.opt"
        MR_Word mercury__string__V_9_9;
#line 176 "list.opt"
        MR_Integer mercury__string__Length_25;

#line 4581 "string.m"
        {
#line 4581 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__H_6_6, &mercury__string__Length_25);
        }
#line 4582 "string.m"
        mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_13_13);
#line 4586 "string.m"
        if (mercury__string__succeeded)
#line 4583 "string.m"
          {
#line 4583 "string.m"
            MR_Integer mercury__string__Count_26 = (mercury__string__V_13_13 - mercury__string__Length_25);
#line 4583 "string.m"
            MR_String mercury__string__PadString_27;

#line 4584 "string.m"
            {
#line 4584 "string.m"
              mercury__string__duplicate_char_3_p_0(mercury__string__V_12_12, mercury__string__Count_26, &mercury__string__PadString_27);
            }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_27 ;
	S2 =  mercury__string__H_6_6 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 3570 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3399 "string.m"
}
#line 4583 "string.m"
          }
#line 4586 "string.m"
        else
#line 4587 "string.m"
          mercury__string__V_8_8 = mercury__string__H_6_6;
#line 178 "list.opt"
        {
#line 178 "list.opt"
          mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(mercury__string__V_12_12, mercury__string__V_13_13, mercury__string__T_7_7);
        }
#line 176 "list.opt"
        {
#line 176 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 176 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 176 "list.opt"
        }
#line 176 "list.opt"
      }
#line 175 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 175 "list.opt"
  }
#line 326 "list.int"
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

#line 4906 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2__ho54_6_p_0(
#line 4906 "string.m"
  MR_String mercury__string__String_8,
#line 4906 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4906 "string.m"
  MR_Integer mercury__string__I_10,
#line 4906 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4906 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15)
#line 4906 "string.m"
{
#line 4925 "string.m"
  while (MR_TRUE)
#line 4925 "string.m"
    {
#line 4925 "string.m"
      /* tailcall optimized into a loop */
#line 4925 "string.m"
      {
#line 4925 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4925 "string.m"
        MR_Integer mercury__string__J_12;
#line 4925 "string.m"
        MR_Char mercury__string__Char_13;

#line 4919 "string.m"
        if (mercury__string__succeeded)
#line 4919 "string.m"
          {
#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 3686 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4919 "string.m"
            if (mercury__string__succeeded)
#line 4921 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4919 "string.m"
          }
#line 4925 "string.m"
        if (mercury__string__succeeded)
#line 4923 "string.m"
          {
#line 4923 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4923 "string.m"
            {
#line 4923 "string.m"
              mercury__string__encode_utf8_3_p_0(mercury__string__Char_13, mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4924 "string.m"
            /* direct tailcall eliminated */
#line 4924 "string.m"
            {
#line 4924 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4924 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4924 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4924 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4924 "string.m"
            }
#line 4924 "string.m"
            continue;
#line 4923 "string.m"
          }
#line 4925 "string.m"
        else
#line 4925 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4925 "string.m"
      }
#line 4925 "string.m"
      break;
#line 4925 "string.m"
    }
#line 4906 "string.m"
}

#line 4906 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2__ho53_6_p_0(
#line 4906 "string.m"
  MR_String mercury__string__String_8,
#line 4906 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4906 "string.m"
  MR_Integer mercury__string__I_10,
#line 4906 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4906 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15)
#line 4906 "string.m"
{
#line 4925 "string.m"
  while (MR_TRUE)
#line 4925 "string.m"
    {
#line 4925 "string.m"
      /* tailcall optimized into a loop */
#line 4925 "string.m"
      {
#line 4925 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4925 "string.m"
        MR_Integer mercury__string__J_12;
#line 4925 "string.m"
        MR_Char mercury__string__Char_13;

#line 4919 "string.m"
        if (mercury__string__succeeded)
#line 4919 "string.m"
          {
#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 3809 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4919 "string.m"
            if (mercury__string__succeeded)
#line 4921 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4919 "string.m"
          }
#line 4925 "string.m"
        if (mercury__string__succeeded)
#line 4923 "string.m"
          {
#line 4923 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4923 "string.m"
            {
#line 4923 "string.m"
              mercury__string__encode_utf16_3_p_0(mercury__string__Char_13, mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4924 "string.m"
            /* direct tailcall eliminated */
#line 4924 "string.m"
            {
#line 4924 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4924 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4924 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4924 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4924 "string.m"
            }
#line 4924 "string.m"
            continue;
#line 4923 "string.m"
          }
#line 4925 "string.m"
        else
#line 4925 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4925 "string.m"
      }
#line 4925 "string.m"
      break;
#line 4925 "string.m"
    }
#line 4906 "string.m"
}

#line 4351 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho10__ho51_4_p_0(
#line 4351 "string.m"
  MR_String mercury__string__String_6,
#line 4351 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4351 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4351 "string.m"
{
#line 4360 "string.m"
  while (MR_TRUE)
#line 4360 "string.m"
    {
#line 4360 "string.m"
      /* tailcall optimized into a loop */
#line 4360 "string.m"
      {
#line 4360 "string.m"
        MR_bool mercury__string__succeeded;
#line 4360 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4356 "string.m"
        MR_Char mercury__string__Char_10;

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3921 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4356 "string.m"
        if (mercury__string__succeeded)
#line 4356 "string.m"
          {
#line 38 "std_util.opt"
            {
#line 38 "std_util.opt"
              mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
            }
#line 37 "std_util.opt"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4356 "string.m"
          }
#line 4360 "string.m"
        if (mercury__string__succeeded)
#line 4359 "string.m"
          {
#line 4359 "string.m"
            /* direct tailcall eliminated */
#line 4359 "string.m"
            {
#line 4359 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4359 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4359 "string.m"
            }
#line 4359 "string.m"
            continue;
#line 4359 "string.m"
          }
#line 4360 "string.m"
        else
#line 4361 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4360 "string.m"
      }
#line 4360 "string.m"
      break;
#line 4360 "string.m"
    }
#line 4351 "string.m"
}

#line 4331 "string.m"
static void MR_CALL 
mercury__string__words_loop__ho40_4_p_0(
#line 4331 "string.m"
  MR_String mercury__string__String_6,
#line 4331 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4331 "string.m"
  MR_Word * mercury__string__Words_8)
#line 4331 "string.m"
{
#line 4334 "string.m"
  {
#line 4334 "string.m"
    MR_bool mercury__string__succeeded;
#line 4334 "string.m"
    MR_Integer mercury__string__WordEnd_9;

#line 4335 "string.m"
    {
#line 4335 "string.m"
      mercury__string__next_boundary__ho10__ho51_4_p_0(mercury__string__String_6, mercury__string__WordStart_7, &mercury__string__WordEnd_9);
    }
#line 4336 "string.m"
    mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__WordStart_7);
#line 4338 "string.m"
    if (mercury__string__succeeded)
#line 4337 "string.m"
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4338 "string.m"
    else
#line 4339 "string.m"
      {
#line 4339 "string.m"
        MR_String mercury__string__Word_10;
#line 4339 "string.m"
        MR_Integer mercury__string__NextWordStart_11;

#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 4037 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Word_10  = SubString;
#line 4289 "string.m"
}
#line 4340 "string.m"
        {
#line 4340 "string.m"
          mercury__string__next_boundary__ho39_4_p_0(mercury__string__String_6, mercury__string__WordEnd_9, &mercury__string__NextWordStart_11);
        }
#line 4341 "string.m"
        mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__NextWordStart_11);
#line 4343 "string.m"
        if (mercury__string__succeeded)
#line 4342 "string.m"
          {
#line 4342 "string.m"
            MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4342 "string.m"
            {
#line 4342 "string.m"
              MR_Word base;
#line 4342 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4342 "string.m"
              *mercury__string__Words_8 = base;
#line 4342 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4342 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__V_14_14));
#line 4342 "string.m"
            }
#line 4342 "string.m"
          }
#line 4343 "string.m"
        else
#line 4344 "string.m"
          {
#line 4344 "string.m"
            MR_Word mercury__string__Words0_12;

#line 4344 "string.m"
            {
#line 4344 "string.m"
              mercury__string__words_loop__ho40_4_p_0(mercury__string__String_6, mercury__string__NextWordStart_11, &mercury__string__Words0_12);
            }
#line 4345 "string.m"
            {
#line 4345 "string.m"
              MR_Word base;
#line 4345 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4345 "string.m"
              *mercury__string__Words_8 = base;
#line 4345 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4345 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Words0_12));
#line 4345 "string.m"
            }
#line 4344 "string.m"
          }
#line 4339 "string.m"
      }
#line 4334 "string.m"
  }
#line 4331 "string.m"
}

#line 4351 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho39_4_p_0(
#line 4351 "string.m"
  MR_String mercury__string__String_6,
#line 4351 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4351 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4351 "string.m"
{
#line 4360 "string.m"
  while (MR_TRUE)
#line 4360 "string.m"
    {
#line 4360 "string.m"
      /* tailcall optimized into a loop */
#line 4360 "string.m"
      {
#line 4360 "string.m"
        MR_bool mercury__string__succeeded;
#line 4360 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4356 "string.m"
        MR_Char mercury__string__Char_10;

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4160 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4356 "string.m"
        if (mercury__string__succeeded)
#line 4357 "string.m"
          {
#line 4357 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 4360 "string.m"
        if (mercury__string__succeeded)
#line 4359 "string.m"
          {
#line 4359 "string.m"
            /* direct tailcall eliminated */
#line 4359 "string.m"
            {
#line 4359 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4359 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4359 "string.m"
            }
#line 4359 "string.m"
            continue;
#line 4359 "string.m"
          }
#line 4360 "string.m"
        else
#line 4361 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4360 "string.m"
      }
#line 4360 "string.m"
      break;
#line 4360 "string.m"
    }
#line 4351 "string.m"
}

#line 3168 "string.m"
static void MR_CALL 
mercury__string__suffix_length_loop__ho37_4_p_0(
#line 3168 "string.m"
  MR_String mercury__string__S_6,
#line 3168 "string.m"
  MR_Integer mercury__string__I_7,
#line 3168 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 3168 "string.m"
{
#line 3177 "string.m"
  while (MR_TRUE)
#line 3177 "string.m"
    {
#line 3177 "string.m"
      /* tailcall optimized into a loop */
#line 3177 "string.m"
      {
#line 3177 "string.m"
        MR_bool mercury__string__succeeded;
#line 3177 "string.m"
        MR_Integer mercury__string__J_9;
#line 3173 "string.m"
        MR_Char mercury__string__Char_10;

#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 4264 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3173 "string.m"
        if (mercury__string__succeeded)
#line 3174 "string.m"
          {
#line 3174 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 3177 "string.m"
        if (mercury__string__succeeded)
#line 3176 "string.m"
          {
#line 3176 "string.m"
            /* direct tailcall eliminated */
#line 3176 "string.m"
            {
#line 3176 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 3176 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 3176 "string.m"
            }
#line 3176 "string.m"
            continue;
#line 3176 "string.m"
          }
#line 3177 "string.m"
        else
#line 3178 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 3177 "string.m"
      }
#line 3177 "string.m"
      break;
#line 3177 "string.m"
    }
#line 3168 "string.m"
}

#line 3151 "string.m"
static void MR_CALL 
mercury__string__prefix_length_loop__ho36_4_p_0(
#line 3151 "string.m"
  MR_String mercury__string__S_6,
#line 3151 "string.m"
  MR_Integer mercury__string__I_7,
#line 3151 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 3151 "string.m"
{
#line 3160 "string.m"
  while (MR_TRUE)
#line 3160 "string.m"
    {
#line 3160 "string.m"
      /* tailcall optimized into a loop */
#line 3160 "string.m"
      {
#line 3160 "string.m"
        MR_bool mercury__string__succeeded;
#line 3160 "string.m"
        MR_Integer mercury__string__J_9;
#line 3156 "string.m"
        MR_Char mercury__string__Char_10;

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4365 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3156 "string.m"
        if (mercury__string__succeeded)
#line 3157 "string.m"
          {
#line 3157 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 3160 "string.m"
        if (mercury__string__succeeded)
#line 3159 "string.m"
          {
#line 3159 "string.m"
            /* direct tailcall eliminated */
#line 3159 "string.m"
            {
#line 3159 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 3159 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 3159 "string.m"
            }
#line 3159 "string.m"
            continue;
#line 3159 "string.m"
          }
#line 3160 "string.m"
        else
#line 3161 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 3160 "string.m"
      }
#line 3160 "string.m"
      break;
#line 3160 "string.m"
    }
#line 3151 "string.m"
}

#line 3079 "string.m"
static MR_bool MR_CALL 
mercury__string__all_match_loop__ho34_3_p_0(
#line 3079 "string.m"
  MR_String mercury__string__String_5,
#line 3079 "string.m"
  MR_Integer mercury__string__Cur_6)
#line 3079 "string.m"
{
#line 3086 "string.m"
  while (MR_TRUE)
#line 3086 "string.m"
    {
#line 3086 "string.m"
      /* tailcall optimized into a loop */
#line 3086 "string.m"
      {
#line 3086 "string.m"
        MR_bool mercury__string__succeeded;
#line 3086 "string.m"
        MR_Integer mercury__string__Next_7;
#line 3086 "string.m"
        MR_Char mercury__string__Char_8;

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4464 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3086 "string.m"
        if (mercury__string__succeeded)
#line 3084 "string.m"
          {
#line 3084 "string.m"
            {
#line 3084 "string.m"
              mercury__string__succeeded = mercury__char__is_alnum_1_p_0(mercury__string__Char_8);
            }
#line 3084 "string.m"
            if (mercury__string__succeeded)
#line 3085 "string.m"
              {
#line 3085 "string.m"
                /* direct tailcall eliminated */
#line 3085 "string.m"
                {
#line 3085 "string.m"
                  MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 3085 "string.m"
                  mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 3085 "string.m"
                }
#line 3085 "string.m"
                continue;
#line 3085 "string.m"
              }
#line 3084 "string.m"
          }
#line 3086 "string.m"
        else
#line 3087 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 3086 "string.m"
        return mercury__string__succeeded;
#line 3086 "string.m"
      }
#line 3086 "string.m"
      break;
#line 3086 "string.m"
    }
#line 3079 "string.m"
}

#line 326 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho16_2_f_in__list_0(
#line 326 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 326 "list.int"
{
#line 175 "list.opt"
  {
#line 175 "list.opt"
    MR_bool mercury__string__succeeded;
#line 175 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 175 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 175 "list.opt"
    else
#line 176 "list.opt"
      {
#line 176 "list.opt"
        MR_Word mercury__string__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "list.opt"
        MR_Integer mercury__string__V_8_8;
#line 176 "list.opt"
        MR_Word mercury__string__V_9_9;

#line 177 "list.opt"
        {
#line 177 "list.opt"
          mercury__string__V_8_8 = mercury__string__find_max_length_1_f_0(mercury__string__H_6_6);
        }
#line 178 "list.opt"
        {
#line 178 "list.opt"
          mercury__string__V_9_9 = mercury__string__map__ho16_2_f_in__list_0(mercury__string__T_7_7);
        }
#line 176 "list.opt"
        {
#line 176 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 176 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 176 "list.opt"
        }
#line 176 "list.opt"
      }
#line 175 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 175 "list.opt"
  }
#line 326 "list.int"
}

#line 437 "list.int"
static MR_Word MR_CALL 
mercury__string__map_corresponding__ho15_3_f_in__list_0(
#line 437 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 437 "list.int"
  MR_Word mercury__string__HeadVar__3_3)
#line 437 "list.int"
{
#line 207 "list.opt"
  {
#line 207 "list.opt"
    MR_bool mercury__string__succeeded;
#line 207 "list.opt"
    MR_Word mercury__string__HeadVar__4_4;

#line 207 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "list.opt"
      if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "list.opt"
        mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 207 "list.opt"
      else
#line 208 "list.opt"
        {
#line 10 "require.opt"
          {
#line 10 "require.opt"
            mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          }
#line 208 "list.opt"
        }
#line 207 "list.opt"
    else
#line 207 "list.opt"
      {
#line 207 "list.opt"
        MR_Word mercury__string__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 207 "list.opt"
        MR_Integer mercury__string__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 207 "list.opt"
        if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 213 "list.opt"
          {
#line 10 "require.opt"
            {
#line 10 "require.opt"
              mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
            }
#line 213 "list.opt"
          }
#line 207 "list.opt"
        else
#line 218 "list.opt"
          {
#line 218 "list.opt"
            MR_Word mercury__string__HB_21_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 218 "list.opt"
            MR_Word mercury__string__TBs_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 1)));
#line 218 "list.opt"
            MR_Word mercury__string__V_23_25;
#line 218 "list.opt"
            MR_Word mercury__string__V_24_26;

#line 219 "list.opt"
            {
#line 219 "list.opt"
              mercury__string__V_23_25 = mercury__string__pad_column_2_f_0(mercury__string__V_35_35, mercury__string__HB_21_23);
            }
#line 220 "list.opt"
            {
#line 220 "list.opt"
              mercury__string__V_24_26 = mercury__string__map_corresponding__ho15_3_f_in__list_0(mercury__string__V_34_34, mercury__string__TBs_22_24);
            }
#line 218 "list.opt"
            {
#line 218 "list.opt"
              mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 0) = ((MR_Box) (mercury__string__V_23_25));
#line 218 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 1) = ((MR_Box) (mercury__string__V_24_26));
#line 218 "list.opt"
            }
#line 218 "list.opt"
          }
#line 207 "list.opt"
      }
#line 207 "list.opt"
    return mercury__string__HeadVar__4_4;
#line 207 "list.opt"
  }
#line 437 "list.int"
}

#line 326 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
#line 326 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 326 "list.int"
{
#line 175 "list.opt"
  {
#line 175 "list.opt"
    MR_bool mercury__string__succeeded;
#line 175 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 175 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 175 "list.opt"
    else
#line 176 "list.opt"
      {
#line 176 "list.opt"
        MR_Word mercury__string__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "list.opt"
        MR_Word mercury__string__V_8_8;
#line 176 "list.opt"
        MR_Word mercury__string__V_9_9;

#line 177 "list.opt"
        {
#line 177 "list.opt"
          mercury__string__V_8_8 = mercury__string__find_max_length_with_limit_1_f_0(mercury__string__H_6_6);
        }
#line 178 "list.opt"
        {
#line 178 "list.opt"
          mercury__string__V_9_9 = mercury__string__map__ho14_2_f_in__list_0(mercury__string__T_7_7);
        }
#line 176 "list.opt"
        {
#line 176 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 176 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 176 "list.opt"
        }
#line 176 "list.opt"
      }
#line 175 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 175 "list.opt"
  }
#line 326 "list.int"
}

#line 326 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho13_2_f_in__list_0(
#line 326 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 326 "list.int"
{
#line 175 "list.opt"
  {
#line 175 "list.opt"
    MR_bool mercury__string__succeeded;
#line 175 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 175 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 175 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 175 "list.opt"
    else
#line 176 "list.opt"
      {
#line 176 "list.opt"
        MR_Word mercury__string__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "list.opt"
        MR_Word mercury__string__V_8_8;
#line 176 "list.opt"
        MR_Word mercury__string__V_9_9;
#line 176 "list.opt"
        MR_Word mercury__string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__H_6_6, (MR_Integer) 0)));
#line 4981 "string.m"
        MR_Word mercury__string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__H_6_6, (MR_Integer) 1)));

#line 4981 "string.m"
        if (((MR_tag((MR_Word) mercury__string__V_19_19)) == (MR_mktag((MR_Integer) 0))))
#line 4981 "string.m"
          mercury__string__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_19_19, (MR_Integer) 0)));
#line 4981 "string.m"
        else
#line 4982 "string.m"
          mercury__string__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_19_19, (MR_Integer) 0)));
#line 178 "list.opt"
        {
#line 178 "list.opt"
          mercury__string__V_9_9 = mercury__string__map__ho13_2_f_in__list_0(mercury__string__T_7_7);
        }
#line 176 "list.opt"
        {
#line 176 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 176 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 176 "list.opt"
        }
#line 176 "list.opt"
      }
#line 175 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 175 "list.opt"
  }
#line 326 "list.int"
}

#line 135 "list.int"
static void MR_CALL 
mercury__string__foldl__ho8_4_p_in__list_0(
#line 135 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 135 "list.int"
  MR_Integer mercury__string__HeadVar__3_3,
#line 135 "list.int"
  MR_Integer * mercury__string__HeadVar__4_4)
#line 135 "list.int"
{
#line 385 "list.opt"
  while (MR_TRUE)
#line 385 "list.opt"
    {
#line 385 "list.opt"
      /* tailcall optimized into a loop */
#line 385 "list.opt"
      {
#line 385 "list.opt"
        MR_bool mercury__string__succeeded;

#line 385 "list.opt"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 385 "list.opt"
          *mercury__string__HeadVar__4_4 = mercury__string__HeadVar__3_3;
#line 385 "list.opt"
        else
#line 387 "list.opt"
          {
#line 387 "list.opt"
            MR_String mercury__string__H_10_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 387 "list.opt"
            MR_Word mercury__string__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 387 "list.opt"
            MR_Integer mercury__string__STATE_VARIABLE_A_15_15_13;
#line 387 "list.opt"
            MR_Integer mercury__string__Length_19;

#line 2649 "string.m"
            {
#line 2649 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__H_10_9, &mercury__string__Length_19);
            }
#line 5116 "string.m"
            mercury__string__succeeded = (mercury__string__Length_19 > mercury__string__HeadVar__3_3);
#line 5118 "string.m"
            if (mercury__string__succeeded)
#line 5117 "string.m"
              mercury__string__STATE_VARIABLE_A_15_15_13 = mercury__string__Length_19;
#line 5118 "string.m"
            else
#line 5119 "string.m"
              mercury__string__STATE_VARIABLE_A_15_15_13 = mercury__string__HeadVar__3_3;
#line 389 "list.opt"
            /* direct tailcall eliminated */
#line 389 "list.opt"
            {
#line 389 "list.opt"
              MR_Word mercury__string__HeadVar__2__tmp_copy_2 = mercury__string__T_11_10;
#line 389 "list.opt"
              MR_Integer mercury__string__HeadVar__3__tmp_copy_3 = mercury__string__STATE_VARIABLE_A_15_15_13;

#line 389 "list.opt"
              mercury__string__HeadVar__3_3 = mercury__string__HeadVar__3__tmp_copy_3;
#line 389 "list.opt"
              mercury__string__HeadVar__2_2 = mercury__string__HeadVar__2__tmp_copy_2;
#line 389 "list.opt"
            }
#line 389 "list.opt"
            continue;
#line 387 "list.opt"
          }
#line 385 "list.opt"
      }
#line 385 "list.opt"
      break;
#line 385 "list.opt"
    }
#line 135 "list.int"
}

#line 4771 "string.m"
static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__4771__1_2_f_0(
#line 4771 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4771 "string.m"
  MR_String mercury__string__HeadVar__2_60)
#line 4771 "string.m"
{
#line 4771 "string.m"
  {
#line 4771 "string.m"
    MR_bool mercury__string__succeeded;
#line 4771 "string.m"
    MR_String mercury__string__HeadVar__3_61;
#line 4771 "string.m"
    MR_String mercury__string__V_62_62;

#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__word_wrap_loop__4771__1_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__WordSep_2 ;
	S2 =  (MR_String) "\n" ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 4924 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_62_62  = S3;
#line 3399 "string.m"
}
#line 4771 "string.m"
    {
#line 4771 "string.m"
      return mercury__string__HeadVar__3_61 = mercury__string__f_43_43_2_f_0(mercury__string__HeadVar__2_60, mercury__string__V_62_62);
    }
#line 4771 "string.m"
    return mercury__string__HeadVar__3_61;
#line 4771 "string.m"
  }
#line 4771 "string.m"
}

#line 4641 "string.m"
static MR_Word MR_CALL 
mercury__string__IntroducedFrom__func__replace_all__4641__1_3_f_0(
#line 4641 "string.m"
  MR_String mercury__string__Subst_7,
#line 4641 "string.m"
  MR_Char mercury__string__HeadVar__2_16,
#line 4641 "string.m"
  MR_Word mercury__string__HeadVar__3_17)
#line 4641 "string.m"
{
#line 4641 "string.m"
  {
#line 4641 "string.m"
    MR_bool mercury__string__succeeded;
#line 4641 "string.m"
    MR_Word mercury__string__HeadVar__4_18;
#line 4641 "string.m"
    MR_String mercury__string__V_19_19;
#line 4641 "string.m"
    MR_String mercury__string__V_20_20;
#line 4641 "string.m"
    MR_Word mercury__string__V_35_35;
#line 4641 "string.m"
    MR_Word mercury__string__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1505 "string.m"
    MR_String mercury__string__Str0_45;

#line 5307 "string.m"
    {
#line 5307 "string.m"
      mercury__string__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5307 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_35_35, 0) = ((MR_Box) (MR_Word) (mercury__string__HeadVar__2_16));
#line 5307 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_35_35, 1) = ((MR_Box) (mercury__string__V_36_36));
#line 5307 "string.m"
    }
#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_35_35, &mercury__string__Str0_45);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      mercury__string__V_20_20 = mercury__string__Str0_45;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1506 "string.m"
      }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__replace_all__4641__1_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_20_20 ;
	S2 =  mercury__string__Subst_7 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 5021 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_19_19  = S3;
#line 3399 "string.m"
}
#line 4641 "string.m"
    {
#line 4641 "string.m"
      mercury__string__HeadVar__4_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4641 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_18, 0) = ((MR_Box) (mercury__string__V_19_19));
#line 4641 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_18, 1) = ((MR_Box) (mercury__string__HeadVar__3_17));
#line 4641 "string.m"
    }
#line 4641 "string.m"
    return mercury__string__HeadVar__4_18;
#line 4641 "string.m"
  }
#line 4641 "string.m"
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
#line 5069 "string.c"
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

#line 96 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____text_file_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_4_4 ;
	S2 =  mercury__string__V_5_5 ;
		{
#line 96 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5097 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Res_7_12  = Res;
#line 96 "private_builtin.opt"
}
#line 68 "private_builtin.opt"
        mercury__string__succeeded = (mercury__string__Res_7_12 < (MR_Integer) 0);
#line 71 "private_builtin.opt"
        if (mercury__string__succeeded)
#line 70 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 71 "private_builtin.opt"
        else
#line 76 "private_builtin.opt"
          {
#line 73 "private_builtin.opt"
            mercury__string__succeeded = (mercury__string__Res_7_12 == (MR_Integer) 0);
#line 76 "private_builtin.opt"
            if (mercury__string__succeeded)
#line 75 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "private_builtin.opt"
            else
#line 77 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "private_builtin.opt"
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

#line 5166 "string.c"
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
#line 5201 "string.c"
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

#line 84 "private_builtin.opt"
                  mercury__string__succeeded = (mercury__string__V_43_43 < mercury__string__V_5_5);
#line 87 "private_builtin.opt"
                  if (mercury__string__succeeded)
#line 86 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 87 "private_builtin.opt"
                  else
#line 92 "private_builtin.opt"
                    {
#line 89 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__V_43_43 > mercury__string__V_5_5);
#line 92 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 91 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 92 "private_builtin.opt"
                      else
#line 93 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "private_builtin.opt"
                    }
#line 1264 "string.m"
                }
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 1:
#line 5257 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 2:
#line 5263 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 3:
#line 5269 "string.c"
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
#line 5293 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 1:
#line 1264 "string.m"
                {
#line 1264 "string.m"
                  MR_Integer mercury__string__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 32 "private_builtin.opt"
                  mercury__string__succeeded = (mercury__string__V_44_44 < mercury__string__V_15_15);
#line 35 "private_builtin.opt"
                  if (mercury__string__succeeded)
#line 34 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
                  else
#line 40 "private_builtin.opt"
                    {
#line 37 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__V_44_44 == mercury__string__V_15_15);
#line 40 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 39 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
                      else
#line 41 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
                    }
#line 1264 "string.m"
                }
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 2:
#line 5332 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 3:
#line 5338 "string.c"
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
#line 5362 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 1:
#line 5368 "string.c"
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
                  MR_Integer mercury__string__Res_7_60;

#line 96 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_45_45 ;
	S2 =  mercury__string__V_25_25 ;
		{
#line 96 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5396 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Res_7_60  = Res;
#line 96 "private_builtin.opt"
}
#line 68 "private_builtin.opt"
                  mercury__string__succeeded = (mercury__string__Res_7_60 < (MR_Integer) 0);
#line 71 "private_builtin.opt"
                  if (mercury__string__succeeded)
#line 70 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 71 "private_builtin.opt"
                  else
#line 76 "private_builtin.opt"
                    {
#line 73 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__Res_7_60 == (MR_Integer) 0);
#line 76 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 75 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "private_builtin.opt"
                      else
#line 77 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "private_builtin.opt"
                    }
#line 1264 "string.m"
                }
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 3:
#line 5431 "string.c"
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
#line 5455 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 1:
#line 5461 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1264 "string.m"
                break;
#line 1264 "string.m"
              case (MR_Integer) 2:
#line 5467 "string.c"
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
                  MR_Integer mercury__string__XI_7_49;
#line 1264 "string.m"
                  MR_Integer mercury__string__YI_8_50;

#line 32 "char.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__V_42_42 ;
		{
#line 32 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 5495 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XI_7_49  = Int;
#line 32 "char.opt"
}
#line 32 "char.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__V_35_35 ;
		{
#line 32 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 5515 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YI_8_50  = Int;
#line 32 "char.opt"
}
#line 50 "private_builtin.opt"
                  mercury__string__succeeded = (mercury__string__XI_7_49 < mercury__string__YI_8_50);
#line 53 "private_builtin.opt"
                  if (mercury__string__succeeded)
#line 52 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 53 "private_builtin.opt"
                  else
#line 58 "private_builtin.opt"
                    {
#line 55 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__XI_7_49 == mercury__string__YI_8_50);
#line 58 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 57 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 58 "private_builtin.opt"
                      else
#line 59 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 58 "private_builtin.opt"
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
#line 5609 "string.c"
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
#line 5634 "string.c"
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
#line 5659 "string.c"
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
#line 5684 "string.c"
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
#line 5725 "string.c"
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

#line 96 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____line_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_4_4 ;
	S2 =  mercury__string__V_5_5 ;
		{
#line 96 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5753 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Res_7_12  = Res;
#line 96 "private_builtin.opt"
}
#line 68 "private_builtin.opt"
        mercury__string__succeeded = (mercury__string__Res_7_12 < (MR_Integer) 0);
#line 71 "private_builtin.opt"
        if (mercury__string__succeeded)
#line 70 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 71 "private_builtin.opt"
        else
#line 76 "private_builtin.opt"
          {
#line 73 "private_builtin.opt"
            mercury__string__succeeded = (mercury__string__Res_7_12 == (MR_Integer) 0);
#line 76 "private_builtin.opt"
            if (mercury__string__succeeded)
#line 75 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "private_builtin.opt"
            else
#line 77 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "private_builtin.opt"
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

#line 5822 "string.c"
        mercury__string__succeeded = (strcmp(mercury__string__V_3_3, mercury__string__V_4_4) == 0);
#line 101 "string.m"
      }
#line 101 "string.m"
    return mercury__string__succeeded;
#line 101 "string.m"
  }
#line 101 "string.m"
}

#line 5069 "string.m"
void MR_CALL 
mercury__string____Compare____justify_sense_0_0(
#line 5069 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 5069 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 5069 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 5069 "string.m"
{
#line 5069 "string.m"
  {
#line 5069 "string.m"
    MR_bool mercury__string__succeeded;
#line 5069 "string.m"
    MR_Integer mercury__string__Cast_HeadVar1_4 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 5069 "string.m"
    MR_Integer mercury__string__Cast_HeadVar2_5 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 32 "private_builtin.opt"
    mercury__string__succeeded = (mercury__string__Cast_HeadVar1_4 < mercury__string__Cast_HeadVar2_5);
#line 35 "private_builtin.opt"
    if (mercury__string__succeeded)
#line 34 "private_builtin.opt"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
    else
#line 40 "private_builtin.opt"
      {
#line 37 "private_builtin.opt"
        mercury__string__succeeded = (mercury__string__Cast_HeadVar1_4 == mercury__string__Cast_HeadVar2_5);
#line 40 "private_builtin.opt"
        if (mercury__string__succeeded)
#line 39 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
        else
#line 41 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
      }
#line 5069 "string.m"
  }
#line 5069 "string.m"
}

#line 5069 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0(
#line 5069 "string.m"
  MR_Word mercury__string__HeadVar__2_1,
#line 5069 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 5069 "string.m"
{
#line 5889 "string.c"
  {
#line 5891 "string.c"
    MR_bool mercury__string__succeeded = (mercury__string__HeadVar__2_1 == mercury__string__HeadVar__2_2);

#line 5894 "string.c"
    return mercury__string__succeeded;
#line 5896 "string.c"
  }
#line 5069 "string.m"
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
#line 5925 "string.c"
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
#line 5956 "string.c"
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
#line 5969 "string.c"
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
#line 6041 "string.c"
            mercury__string__TypeInfo_9_9 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 6043 "string.c"
            {
#line 6045 "string.c"
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
#line 6071 "string.c"
            mercury__string__TypeInfo_10_10 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 6073 "string.c"
            {
#line 6075 "string.c"
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

#line 5523 "string.m"
MR_Integer MR_CALL 
mercury__string__max_precision_0_f_0(void)
#line 5523 "string.m"
{
#line 5525 "string.m"
  {
#line 5525 "string.m"
    MR_bool mercury__string__succeeded;
#line 5525 "string.m"
    MR_Integer mercury__string__HeadVar__1_1 = ((MR_Integer) 15 + (MR_Integer) 2);

#line 5525 "string.m"
    return mercury__string__HeadVar__1_1;
#line 5525 "string.m"
  }
#line 5523 "string.m"
}

#line 5517 "string.m"
MR_Integer MR_CALL 
mercury__string__min_precision_0_f_0(void)
#line 5517 "string.m"
{
#line 5519 "string.m"
  {
#line 5519 "string.m"
    MR_bool mercury__string__succeeded;

#line 5519 "string.m"
    return (MR_Integer) 15;
#line 5519 "string.m"
  }
#line 5517 "string.m"
}

#line 5499 "string.m"
MR_String MR_CALL 
mercury__string__float_to_string_loop_2_f_0(
#line 5499 "string.m"
  MR_Integer mercury__string__Prec_4,
#line 5499 "string.m"
  MR_Float mercury__string__Float_5)
#line 5499 "string.m"
{
#line 5501 "string.m"
  while (MR_TRUE)
#line 5501 "string.m"
    {
#line 5501 "string.m"
      /* tailcall optimized into a loop */
#line 5501 "string.m"
      {
#line 5501 "string.m"
        MR_bool mercury__string__succeeded;
#line 5501 "string.m"
        MR_String mercury__string__String_6;
#line 5501 "string.m"
        MR_String mercury__string__Tmp_7;
#line 5501 "string.m"
        MR_String mercury__string__V_8_8;
#line 5501 "string.m"
        MR_Word mercury__string__V_9_9;
#line 5501 "string.m"
        MR_String mercury__string__V_11_11;
#line 5501 "string.m"
        MR_String mercury__string__V_12_12;
#line 5501 "string.m"
        MR_Word mercury__string__V_14_14;
#line 5501 "string.m"
        MR_Word mercury__string__V_15_15;
#line 5503 "string.m"
        MR_Integer mercury__string__V_18_18;

#line 5317 "string.m"
        {
#line 5317 "string.m"
          mercury__string__int_to_base_string_3_p_0(mercury__string__Prec_4, (MR_Integer) 10, &mercury__string__V_12_12);
        }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_12_12 ;
	S2 =  (MR_String) "g" ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6188 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = S3;
#line 3399 "string.m"
}
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "%#." ;
	S2 =  mercury__string__V_11_11 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6215 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3399 "string.m"
}
#line 5502 "string.m"
        {
#line 5502 "string.m"
          mercury__string__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 5502 "string.m"
          MR_hl_field(MR_mktag(0), mercury__string__V_14_14, 0) = MR_box_float(mercury__string__Float_5);
#line 5502 "string.m"
        }
#line 5502 "string.m"
        mercury__string__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5502 "string.m"
        {
#line 5502 "string.m"
          mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5502 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_9_9, 0) = ((MR_Box) (mercury__string__V_14_14));
#line 5502 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_9_9, 1) = ((MR_Box) (mercury__string__V_15_15));
#line 5502 "string.m"
        }
#line 5587 "string.m"
        {
#line 5587 "string.m"
          mercury__string__format__format_impl_3_p_0(mercury__string__V_8_8, mercury__string__V_9_9, &mercury__string__Tmp_7);
        }
#line 5525 "string.m"
        mercury__string__V_18_18 = ((MR_Integer) 15 + (MR_Integer) 2);
#line 5503 "string.m"
        mercury__string__succeeded = (mercury__string__Prec_4 == mercury__string__V_18_18);
#line 5505 "string.m"
        if (mercury__string__succeeded)
#line 5504 "string.m"
          mercury__string__String_6 = mercury__string__Tmp_7;
#line 5505 "string.m"
        else
#line 5508 "string.m"
          {
#line 5506 "string.m"
            MR_Float mercury__string__V_19_19;

#line 5189 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__Tmp_7 ;
		{
#line 5189 "string.m"
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
#line 6284 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__V_19_19  = FloatVal;
#line 5189 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5506 "string.m"
            if (mercury__string__succeeded)
#line 5506 "string.m"
              mercury__string__succeeded = (mercury__string__Float_5 == mercury__string__V_19_19);
#line 5508 "string.m"
            if (mercury__string__succeeded)
#line 5507 "string.m"
              mercury__string__String_6 = mercury__string__Tmp_7;
#line 5508 "string.m"
            else
#line 5509 "string.m"
              {
#line 5509 "string.m"
                MR_Integer mercury__string__V_16_16 = (mercury__string__Prec_4 + (MR_Integer) 1);

#line 5509 "string.m"
                /* direct tailcall eliminated */
#line 5509 "string.m"
                {
#line 5509 "string.m"
                  MR_Integer mercury__string__Prec__tmp_copy_4 = mercury__string__V_16_16;

#line 5509 "string.m"
                  mercury__string__Prec_4 = mercury__string__Prec__tmp_copy_4;
#line 5509 "string.m"
                }
#line 5509 "string.m"
                continue;
#line 5509 "string.m"
              }
#line 5508 "string.m"
          }
#line 5501 "string.m"
        return mercury__string__String_6;
#line 5501 "string.m"
      }
#line 5501 "string.m"
      break;
#line 5501 "string.m"
    }
#line 5499 "string.m"
}

#line 5403 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_group_2_6_p_0(
#line 5403 "string.m"
  MR_Integer mercury__string__NegN_7,
#line 5403 "string.m"
  MR_Integer mercury__string__Base_8,
#line 5403 "string.m"
  MR_Integer mercury__string__Curr_9,
#line 5403 "string.m"
  MR_Integer mercury__string__GroupLength_10,
#line 5403 "string.m"
  MR_String mercury__string__Sep_11,
#line 5403 "string.m"
  MR_String * mercury__string__Str_12)
#line 5403 "string.m"
{
#line 5414 "string.m"
  {
#line 5414 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Curr_9 == mercury__string__GroupLength_10);
#line 5408 "string.m"
    MR_Integer mercury__string__V_19_19;

#line 5408 "string.m"
    if (mercury__string__succeeded)
#line 5408 "string.m"
      {
#line 5409 "string.m"
        mercury__string__V_19_19 = (MR_Integer) 0;
#line 5409 "string.m"
        mercury__string__succeeded = (mercury__string__GroupLength_10 > mercury__string__V_19_19);
#line 5408 "string.m"
      }
#line 5414 "string.m"
    if (mercury__string__succeeded)
#line 5412 "string.m"
      {
#line 5412 "string.m"
        MR_String mercury__string__Str1_13;

#line 5411 "string.m"
        {
#line 5411 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN_7, mercury__string__Base_8, (MR_Integer) 0, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_13);
        }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_13 ;
	S2 =  mercury__string__Sep_11 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6403 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
#line 3399 "string.m"
}
#line 5412 "string.m"
      }
#line 5414 "string.m"
    else
#line 5419 "string.m"
      {
#line 5415 "string.m"
        MR_Integer mercury__string__V_21_21 = ((MR_Integer) 0 - mercury__string__Base_8);

#line 5415 "string.m"
        mercury__string__succeeded = (mercury__string__NegN_7 > mercury__string__V_21_21);
#line 5419 "string.m"
        if (mercury__string__succeeded)
#line 5416 "string.m"
          {
#line 5416 "string.m"
            MR_Integer mercury__string__N_14 = ((MR_Integer) 0 - mercury__string__NegN_7);
#line 5416 "string.m"
            MR_Char mercury__string__DigitChar_15;
#line 5416 "string.m"
            MR_Word mercury__string__V_45_45;
#line 5416 "string.m"
            MR_Word mercury__string__V_46_46;
#line 1505 "string.m"
            MR_String mercury__string__Str0_55;

#line 5417 "string.m"
            {
#line 5417 "string.m"
              mercury__string__DigitChar_15 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N_14);
            }
#line 5307 "string.m"
            mercury__string__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5307 "string.m"
            {
#line 5307 "string.m"
              mercury__string__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5307 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_15));
#line 5307 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 1) = ((MR_Box) (mercury__string__V_46_46));
#line 5307 "string.m"
            }
#line 1503 "string.m"
            {
#line 1503 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_45_45, &mercury__string__Str0_55);
            }
#line 1505 "string.m"
            if (mercury__string__succeeded)
#line 1504 "string.m"
              *mercury__string__Str_12 = mercury__string__Str0_55;
#line 1505 "string.m"
            else
#line 1506 "string.m"
              {
#line 1506 "string.m"
                {
#line 1506 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1506 "string.m"
                  return;
                }
#line 1506 "string.m"
              }
#line 5416 "string.m"
          }
#line 5419 "string.m"
        else
#line 5420 "string.m"
          {
#line 5420 "string.m"
            MR_Integer mercury__string__NegN1_16;
#line 5420 "string.m"
            MR_Integer mercury__string__N10_17;
#line 5420 "string.m"
            MR_String mercury__string__DigitString_18;
#line 5420 "string.m"
            MR_Integer mercury__string__V_22_22;
#line 5420 "string.m"
            MR_Integer mercury__string__V_23_23;
#line 5420 "string.m"
            MR_String mercury__string__Str1_25;
#line 5420 "string.m"
            MR_Char mercury__string__DigitChar_26;
#line 5420 "string.m"
            MR_Word mercury__string__V_65_65;
#line 5420 "string.m"
            MR_Word mercury__string__V_66_66;
#line 1505 "string.m"
            MR_String mercury__string__Str0_75;

#line 267 "int.opt"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 267 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6517 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 267 "int.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 62 "int.opt"
            if (mercury__string__succeeded)
#line 63 "int.opt"
              mercury__string__succeeded = (mercury__string__Base_8 == (MR_Integer) 0);
#line 68 "int.opt"
            if (mercury__string__succeeded)
#line 65 "int.opt"
              {
#line 65 "int.opt"
                MR_Word mercury__string__TypeCtorInfo_9_62 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 65 "int.opt"
                MR_Word mercury__string__V_7_60 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 67 "int.opt"
                {
#line 67 "int.opt"
                  mercury__exception__throw_1_p_0(mercury__string__TypeCtorInfo_9_62, ((MR_Box) (mercury__string__V_7_60)));
#line 67 "int.opt"
                  return;
                }
#line 65 "int.opt"
              }
#line 68 "int.opt"
            else
#line 69 "int.opt"
              mercury__string__NegN1_16 = (mercury__string__NegN_7 / mercury__string__Base_8);
#line 5421 "string.m"
            mercury__string__V_22_22 = (mercury__string__NegN1_16 * mercury__string__Base_8);
#line 5421 "string.m"
            mercury__string__N10_17 = (mercury__string__V_22_22 - mercury__string__NegN_7);
#line 5422 "string.m"
            {
#line 5422 "string.m"
              mercury__string__DigitChar_26 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N10_17);
            }
#line 5307 "string.m"
            mercury__string__V_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5307 "string.m"
            {
#line 5307 "string.m"
              mercury__string__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5307 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_65_65, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_26));
#line 5307 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_65_65, 1) = ((MR_Box) (mercury__string__V_66_66));
#line 5307 "string.m"
            }
#line 1503 "string.m"
            {
#line 1503 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_65_65, &mercury__string__Str0_75);
            }
#line 1505 "string.m"
            if (mercury__string__succeeded)
#line 1504 "string.m"
              mercury__string__DigitString_18 = mercury__string__Str0_75;
#line 1505 "string.m"
            else
#line 1506 "string.m"
              {
#line 1506 "string.m"
                {
#line 1506 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1506 "string.m"
                  return;
                }
#line 1506 "string.m"
              }
#line 5424 "string.m"
            mercury__string__V_23_23 = (mercury__string__Curr_9 + (MR_Integer) 1);
#line 5424 "string.m"
            {
#line 5424 "string.m"
              mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN1_16, mercury__string__Base_8, mercury__string__V_23_23, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_25);
            }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_25 ;
	S2 =  mercury__string__DigitString_18 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6622 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
#line 3399 "string.m"
}
#line 5420 "string.m"
          }
#line 5419 "string.m"
      }
#line 5414 "string.m"
  }
#line 5403 "string.m"
}

#line 5379 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_group_1_5_p_0(
#line 5379 "string.m"
  MR_Integer mercury__string__N_6,
#line 5379 "string.m"
  MR_Integer mercury__string__Base_7,
#line 5379 "string.m"
  MR_Integer mercury__string__GroupLength_8,
#line 5379 "string.m"
  MR_String mercury__string__Sep_9,
#line 5379 "string.m"
  MR_String * mercury__string__Str_10)
#line 5379 "string.m"
{
#line 5389 "string.m"
  {
#line 5389 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__N_6 < (MR_Integer) 0);

#line 5389 "string.m"
    if (mercury__string__succeeded)
#line 5387 "string.m"
      {
#line 5387 "string.m"
        MR_String mercury__string__Str1_11;

#line 5387 "string.m"
        {
#line 5387 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N_6, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str1_11);
        }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_1_5_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "-" ;
	S2 =  mercury__string__Str1_11 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6690 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_10  = S3;
#line 3399 "string.m"
}
#line 5387 "string.m"
      }
#line 5389 "string.m"
    else
#line 5390 "string.m"
      {
#line 5390 "string.m"
        MR_Integer mercury__string__N1_12 = ((MR_Integer) 0 - mercury__string__N_6);

#line 5391 "string.m"
        {
#line 5391 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N1_12, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, mercury__string__Str_10);
#line 5391 "string.m"
          return;
        }
#line 5390 "string.m"
      }
#line 5389 "string.m"
  }
#line 5379 "string.m"
}

#line 5349 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_2_4_p_0(
#line 5349 "string.m"
  MR_Integer mercury__string__NegN_5,
#line 5349 "string.m"
  MR_Integer mercury__string__Base_6,
#line 5349 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevChars_0_12,
#line 5349 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevChars_13)
#line 5349 "string.m"
{
#line 5360 "string.m"
  {
#line 5360 "string.m"
    MR_bool mercury__string__succeeded;
#line 5356 "string.m"
    MR_Integer mercury__string__V_14_14 = ((MR_Integer) 0 - mercury__string__Base_6);

#line 5356 "string.m"
    mercury__string__succeeded = (mercury__string__NegN_5 > mercury__string__V_14_14);
#line 5360 "string.m"
    if (mercury__string__succeeded)
#line 5357 "string.m"
      {
#line 5357 "string.m"
        MR_Integer mercury__string__N_8 = ((MR_Integer) 0 - mercury__string__NegN_5);
#line 5357 "string.m"
        MR_Char mercury__string__DigitChar_9;

#line 5358 "string.m"
        {
#line 5358 "string.m"
          mercury__string__DigitChar_9 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N_8);
        }
#line 5359 "string.m"
        {
#line 5359 "string.m"
          MR_Word base;
#line 5359 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5359 "string.m"
          *mercury__string__STATE_VARIABLE_RevChars_13 = base;
#line 5359 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_9));
#line 5359 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_0_12));
#line 5359 "string.m"
        }
#line 5357 "string.m"
      }
#line 5360 "string.m"
    else
#line 5361 "string.m"
      {
#line 5361 "string.m"
        MR_Integer mercury__string__NegN1_10;
#line 5361 "string.m"
        MR_Integer mercury__string__N10_11;
#line 5361 "string.m"
        MR_Integer mercury__string__V_16_16;
#line 5361 "string.m"
        MR_Word mercury__string__STATE_VARIABLE_RevChars_17_17;
#line 5361 "string.m"
        MR_Char mercury__string__DigitChar_19;

#line 267 "int.opt"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_2_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 267 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6802 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 267 "int.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 62 "int.opt"
        if (mercury__string__succeeded)
#line 63 "int.opt"
          mercury__string__succeeded = (mercury__string__Base_6 == (MR_Integer) 0);
#line 68 "int.opt"
        if (mercury__string__succeeded)
#line 65 "int.opt"
          {
#line 65 "int.opt"
            MR_Word mercury__string__TypeCtorInfo_9_25 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 65 "int.opt"
            MR_Word mercury__string__V_7_23 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 67 "int.opt"
            {
#line 67 "int.opt"
              mercury__exception__throw_1_p_0(mercury__string__TypeCtorInfo_9_25, ((MR_Box) (mercury__string__V_7_23)));
#line 67 "int.opt"
              return;
            }
#line 65 "int.opt"
          }
#line 68 "int.opt"
        else
#line 69 "int.opt"
          mercury__string__NegN1_10 = (mercury__string__NegN_5 / mercury__string__Base_6);
#line 5362 "string.m"
        mercury__string__V_16_16 = (mercury__string__NegN1_10 * mercury__string__Base_6);
#line 5362 "string.m"
        mercury__string__N10_11 = (mercury__string__V_16_16 - mercury__string__NegN_5);
#line 5363 "string.m"
        {
#line 5363 "string.m"
          mercury__string__DigitChar_19 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N10_11);
        }
#line 5364 "string.m"
        {
#line 5364 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN1_10, mercury__string__Base_6, mercury__string__STATE_VARIABLE_RevChars_0_12, &mercury__string__STATE_VARIABLE_RevChars_17_17);
        }
#line 5365 "string.m"
        {
#line 5365 "string.m"
          MR_Word base;
#line 5365 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5365 "string.m"
          *mercury__string__STATE_VARIABLE_RevChars_13 = base;
#line 5365 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_19));
#line 5365 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_17_17));
#line 5365 "string.m"
        }
#line 5361 "string.m"
      }
#line 5360 "string.m"
  }
#line 5349 "string.m"
}

#line 5335 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_1_3_p_0(
#line 5335 "string.m"
  MR_Integer mercury__string__N_4,
#line 5335 "string.m"
  MR_Integer mercury__string__Base_5,
#line 5335 "string.m"
  MR_String * mercury__string__Str_6)
#line 5335 "string.m"
{
#line 5337 "string.m"
  {
#line 5337 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__N_4 < (MR_Integer) 0);
#line 5337 "string.m"
    MR_Word mercury__string__RevChars_7;
#line 1643 "string.m"
    MR_String mercury__string__Str0_17;

#line 5343 "string.m"
    if (mercury__string__succeeded)
#line 5342 "string.m"
      {
#line 5342 "string.m"
        MR_Word mercury__string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[4]);
#line 5342 "string.m"
        MR_Word mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 5342 "string.m"
        {
#line 5342 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__V_10_10, &mercury__string__RevChars_7);
        }
#line 5342 "string.m"
      }
#line 5343 "string.m"
    else
#line 5344 "string.m"
      {
#line 5344 "string.m"
        MR_Integer mercury__string__NegN_8 = ((MR_Integer) 0 - mercury__string__N_4);
#line 5344 "string.m"
        MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 5345 "string.m"
        {
#line 5345 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN_8, mercury__string__Base_5, mercury__string__V_14_14, &mercury__string__RevChars_7);
        }
#line 5344 "string.m"
      }
#line 1641 "string.m"
    {
#line 1641 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__RevChars_7, &mercury__string__Str0_17);
    }
#line 1643 "string.m"
    if (mercury__string__succeeded)
#line 1642 "string.m"
      *mercury__string__Str_6 = mercury__string__Str0_17;
#line 1643 "string.m"
    else
#line 1644 "string.m"
      {
#line 1644 "string.m"
        {
#line 1644 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
#line 1644 "string.m"
          return;
        }
#line 1644 "string.m"
      }
#line 5337 "string.m"
  }
#line 5335 "string.m"
}

#line 5168 "string.m"
MR_bool MR_CALL 
mercury__string__accumulate_negative_int_4_p_0(
#line 5168 "string.m"
  MR_Integer mercury__string__Base_5,
#line 5168 "string.m"
  MR_Char mercury__string__Char_6,
#line 5168 "string.m"
  MR_Integer mercury__string__N0_7,
#line 5168 "string.m"
  MR_Integer * mercury__string__N_8)
#line 5168 "string.m"
{
#line 5171 "string.m"
  {
#line 5171 "string.m"
    MR_bool mercury__string__succeeded;
#line 5171 "string.m"
    MR_Integer mercury__string__M_9;
#line 5171 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 5172 "string.m"
    {
#line 5172 "string.m"
      mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    }
#line 5171 "string.m"
    if (mercury__string__succeeded)
#line 5171 "string.m"
      {
#line 5173 "string.m"
        mercury__string__V_10_10 = (mercury__string__Base_5 * mercury__string__N0_7);
#line 5173 "string.m"
        *mercury__string__N_8 = (mercury__string__V_10_10 - mercury__string__M_9);
#line 5176 "string.m"
        mercury__string__succeeded = (*mercury__string__N_8 <= mercury__string__N0_7);
#line 5171 "string.m"
      }
#line 5171 "string.m"
    return mercury__string__succeeded;
#line 5171 "string.m"
  }
#line 5168 "string.m"
}

#line 5159 "string.m"
MR_bool MR_CALL 
mercury__string__accumulate_int_4_p_0(
#line 5159 "string.m"
  MR_Integer mercury__string__Base_5,
#line 5159 "string.m"
  MR_Char mercury__string__Char_6,
#line 5159 "string.m"
  MR_Integer mercury__string__N0_7,
#line 5159 "string.m"
  MR_Integer * mercury__string__N_8)
#line 5159 "string.m"
{
#line 5161 "string.m"
  {
#line 5161 "string.m"
    MR_bool mercury__string__succeeded;
#line 5161 "string.m"
    MR_Integer mercury__string__M_9;
#line 5161 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 5162 "string.m"
    {
#line 5162 "string.m"
      mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    }
#line 5161 "string.m"
    if (mercury__string__succeeded)
#line 5161 "string.m"
      {
#line 5163 "string.m"
        mercury__string__V_10_10 = (mercury__string__Base_5 * mercury__string__N0_7);
#line 5163 "string.m"
        *mercury__string__N_8 = (mercury__string__V_10_10 + mercury__string__M_9);
#line 5166 "string.m"
        mercury__string__succeeded = (mercury__string__N0_7 <= *mercury__string__N_8);
#line 5161 "string.m"
      }
#line 5161 "string.m"
    return mercury__string__succeeded;
#line 5161 "string.m"
  }
#line 5159 "string.m"
}

#line 5112 "string.m"
void MR_CALL 
mercury__string__max_str_length_3_p_0(
#line 5112 "string.m"
  MR_String mercury__string__Str_4,
#line 5112 "string.m"
  MR_Integer mercury__string__PrevMaxLen_5,
#line 5112 "string.m"
  MR_Integer * mercury__string__MaxLen_6)
#line 5112 "string.m"
{
#line 5114 "string.m"
  {
#line 5114 "string.m"
    MR_bool mercury__string__succeeded;
#line 5114 "string.m"
    MR_Integer mercury__string__Length_7;

#line 2649 "string.m"
    {
#line 2649 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_4, &mercury__string__Length_7);
    }
#line 5116 "string.m"
    mercury__string__succeeded = (mercury__string__Length_7 > mercury__string__PrevMaxLen_5);
#line 5118 "string.m"
    if (mercury__string__succeeded)
#line 5117 "string.m"
      *mercury__string__MaxLen_6 = mercury__string__Length_7;
#line 5118 "string.m"
    else
#line 5119 "string.m"
      *mercury__string__MaxLen_6 = mercury__string__PrevMaxLen_5;
#line 5114 "string.m"
  }
#line 5112 "string.m"
}

#line 5108 "string.m"
MR_String MR_CALL 
mercury__string__lpad_3_f_0(
#line 5108 "string.m"
  MR_Char mercury__string__Chr_5,
#line 5108 "string.m"
  MR_Integer mercury__string__N_6,
#line 5108 "string.m"
  MR_String mercury__string__Str_7)
#line 5108 "string.m"
{
#line 4580 "string.m"
  {
#line 4580 "string.m"
    MR_bool mercury__string__succeeded;
#line 4580 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4580 "string.m"
    MR_Integer mercury__string__Length_16;

#line 4581 "string.m"
    {
#line 4581 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    }
#line 4582 "string.m"
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
#line 4586 "string.m"
    if (mercury__string__succeeded)
#line 4583 "string.m"
      {
#line 4583 "string.m"
        MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
#line 4583 "string.m"
        MR_String mercury__string__PadString_18;

#line 4584 "string.m"
        {
#line 4584 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
        }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__lpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_18 ;
	S2 =  mercury__string__Str_7 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7142 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3399 "string.m"
}
#line 4583 "string.m"
      }
#line 4586 "string.m"
    else
#line 4587 "string.m"
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
#line 4580 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4580 "string.m"
  }
#line 5108 "string.m"
}

#line 5104 "string.m"
MR_String MR_CALL 
mercury__string__rpad_3_f_0(
#line 5104 "string.m"
  MR_Char mercury__string__Chr_5,
#line 5104 "string.m"
  MR_Integer mercury__string__N_6,
#line 5104 "string.m"
  MR_String mercury__string__Str_7)
#line 5104 "string.m"
{
#line 4593 "string.m"
  {
#line 4593 "string.m"
    MR_bool mercury__string__succeeded;
#line 4593 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4593 "string.m"
    MR_Integer mercury__string__Length_16;

#line 4594 "string.m"
    {
#line 4594 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    }
#line 4595 "string.m"
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
#line 4599 "string.m"
    if (mercury__string__succeeded)
#line 4596 "string.m"
      {
#line 4596 "string.m"
        MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
#line 4596 "string.m"
        MR_String mercury__string__PadString_18;

#line 4597 "string.m"
        {
#line 4597 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
        }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__rpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str_7 ;
	S2 =  mercury__string__PadString_18 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7223 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3399 "string.m"
}
#line 4596 "string.m"
      }
#line 4599 "string.m"
    else
#line 4600 "string.m"
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
#line 4593 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4593 "string.m"
  }
#line 5104 "string.m"
}

#line 5097 "string.m"
MR_Word MR_CALL 
mercury__string__pad_column_2_f_0(
#line 5097 "string.m"
  MR_Integer mercury__string__Width_1,
#line 5097 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 5097 "string.m"
{
#line 5099 "string.m"
  {
#line 5099 "string.m"
    MR_bool mercury__string__succeeded;
#line 5099 "string.m"
    MR_Word mercury__string__HeadVar__3_3;

#line 5099 "string.m"
    if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 5099 "string.m"
      {
#line 5099 "string.m"
        MR_Word mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 5100 "string.m"
        {
#line 5100 "string.m"
          return mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_5);
        }
#line 5099 "string.m"
      }
#line 5099 "string.m"
    else
#line 5101 "string.m"
      {
#line 5101 "string.m"
        MR_Word mercury__string__Strings_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 5102 "string.m"
        {
#line 5102 "string.m"
          return mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_9);
        }
#line 5101 "string.m"
      }
#line 5099 "string.m"
    return mercury__string__HeadVar__3_3;
#line 5099 "string.m"
  }
#line 5097 "string.m"
}

#line 5073 "string.m"
MR_Word MR_CALL 
mercury__string__find_max_length_with_limit_1_f_0(
#line 5073 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 5073 "string.m"
{
#line 5076 "string.m"
  {
#line 5076 "string.m"
    MR_bool mercury__string__succeeded;
#line 5076 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 5076 "string.m"
    MR_Word mercury__string__JustColumn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 5076 "string.m"
    MR_Word mercury__string__MaybeLimit_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 5076 "string.m"
    MR_Word mercury__string__Sense_5;
#line 5076 "string.m"
    MR_Integer mercury__string__MaxLength_6;
#line 5076 "string.m"
    MR_Word mercury__string__Strings_7;
#line 5076 "string.m"
    MR_Integer mercury__string__MaxLength0_8;

#line 5080 "string.m"
    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
#line 5078 "string.m"
      {
#line 5078 "string.m"
        mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 5079 "string.m"
        mercury__string__Sense_5 = (MR_Integer) 0;
#line 5078 "string.m"
      }
#line 5080 "string.m"
    else
#line 5081 "string.m"
      {
#line 5081 "string.m"
        mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 5082 "string.m"
        mercury__string__Sense_5 = (MR_Integer) 1;
#line 5081 "string.m"
      }
#line 5084 "string.m"
    {
#line 5084 "string.m"
      mercury__string__foldl__ho8_4_p_in__list_0(mercury__string__Strings_7, (MR_Integer) 0, &mercury__string__MaxLength0_8);
    }
#line 5092 "string.m"
    if ((mercury__string__MaybeLimit_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5094 "string.m"
      mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
#line 5092 "string.m"
    else
#line 5086 "string.m"
      {
#line 5086 "string.m"
        MR_Integer mercury__string__Limit_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__MaybeLimit_4, (MR_Integer) 0)));

#line 5087 "string.m"
        mercury__string__succeeded = (mercury__string__MaxLength0_8 > mercury__string__Limit_9);
#line 5089 "string.m"
        if (mercury__string__succeeded)
#line 5088 "string.m"
          mercury__string__MaxLength_6 = mercury__string__Limit_9;
#line 5089 "string.m"
        else
#line 5090 "string.m"
          mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
#line 5086 "string.m"
      }
#line 5076 "string.m"
    {
#line 5076 "string.m"
      mercury__string__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5076 "string.m"
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__Sense_5));
#line 5076 "string.m"
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 1) = ((MR_Box) (mercury__string__MaxLength_6));
#line 5076 "string.m"
    }
#line 5076 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5076 "string.m"
  }
#line 5073 "string.m"
}

#line 5061 "string.m"
MR_Integer MR_CALL 
mercury__string__find_max_length_1_f_0(
#line 5061 "string.m"
  MR_Word mercury__string__JustColumn_3)
#line 5061 "string.m"
{
#line 5063 "string.m"
  {
#line 5063 "string.m"
    MR_bool mercury__string__succeeded;
#line 5063 "string.m"
    MR_Integer mercury__string__MaxLength_4;
#line 5063 "string.m"
    MR_Word mercury__string__Strings_5;

#line 5065 "string.m"
    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
#line 5064 "string.m"
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 5065 "string.m"
    else
#line 5065 "string.m"
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 5067 "string.m"
    {
#line 5067 "string.m"
      mercury__string__foldl__ho8_4_p_in__list_0(mercury__string__Strings_5, (MR_Integer) 0, &mercury__string__MaxLength_4);
    }
#line 5063 "string.m"
    return mercury__string__MaxLength_4;
#line 5063 "string.m"
  }
#line 5061 "string.m"
}

#line 5057 "string.m"
MR_String MR_CALL 
mercury__string__join_rev_columns_3_f_0(
#line 5057 "string.m"
  MR_String mercury__string__Separator_5,
#line 5057 "string.m"
  MR_String mercury__string__Col1_6,
#line 5057 "string.m"
  MR_String mercury__string__Col2_7)
#line 5057 "string.m"
{
#line 5059 "string.m"
  {
#line 5059 "string.m"
    MR_bool mercury__string__succeeded;
#line 5059 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 5059 "string.m"
    MR_String mercury__string__V_8_8;

#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Separator_5 ;
	S2 =  mercury__string__Col1_6 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7461 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3399 "string.m"
}
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Col2_7 ;
	S2 =  mercury__string__V_8_8 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7488 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3399 "string.m"
}
#line 5059 "string.m"
    return mercury__string__HeadVar__4_4;
#line 5059 "string.m"
  }
#line 5057 "string.m"
}

#line 5018 "string.m"
void MR_CALL 
mercury__string__pad_row_6_p_0(
#line 5018 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 5018 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 5018 "string.m"
  MR_String mercury__string__Separator_3,
#line 5018 "string.m"
  MR_Integer mercury__string__SepLen_4,
#line 5018 "string.m"
  MR_Integer mercury__string__CurColumn_5,
#line 5018 "string.m"
  MR_String * mercury__string__HeadVar__6_6)
#line 5018 "string.m"
{
#line 5021 "string.m"
  {
#line 5021 "string.m"
    MR_bool mercury__string__succeeded;

#line 5021 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5021 "string.m"
      if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5021 "string.m"
        *mercury__string__HeadVar__6_6 = (MR_String) "";
#line 5021 "string.m"
      else
#line 5052 "string.m"
        {
#line 5053 "string.m"
          {
#line 5053 "string.m"
            mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
#line 5053 "string.m"
            return;
          }
#line 5052 "string.m"
        }
#line 5021 "string.m"
    else
#line 5021 "string.m"
      {
#line 5021 "string.m"
        MR_Word mercury__string__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 5021 "string.m"
        MR_Word mercury__string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));

#line 5021 "string.m"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5054 "string.m"
          {
#line 5055 "string.m"
            {
#line 5055 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
#line 5055 "string.m"
              return;
            }
#line 5054 "string.m"
          }
#line 5021 "string.m"
        else
#line 5023 "string.m"
          {
#line 5023 "string.m"
            MR_Word mercury__string__Justify_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_55_55, (MR_Integer) 0)));
#line 5023 "string.m"
            MR_Integer mercury__string__MaxWidth_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__V_55_55, (MR_Integer) 1)));
#line 5023 "string.m"
            MR_String mercury__string__ColumnStr0_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5023 "string.m"
            MR_Word mercury__string__ColumnStrs0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 5023 "string.m"
            MR_Integer mercury__string__NextColumn_19;
#line 5023 "string.m"
            MR_String mercury__string__LineRest_20;
#line 5023 "string.m"
            MR_Integer mercury__string__V_27_27 = (mercury__string__CurColumn_5 + mercury__string__MaxWidth_11);
#line 5027 "string.m"
            MR_Integer mercury__string__V_28_28;

#line 5024 "string.m"
            mercury__string__NextColumn_19 = (mercury__string__V_27_27 + mercury__string__SepLen_4);
#line 5025 "string.m"
            {
#line 5025 "string.m"
              mercury__string__pad_row_6_p_0(mercury__string__V_54_54, mercury__string__ColumnStrs0_14, mercury__string__Separator_3, mercury__string__SepLen_4, mercury__string__NextColumn_19, &mercury__string__LineRest_20);
            }
#line 2649 "string.m"
            {
#line 2649 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__V_28_28);
            }
#line 5027 "string.m"
            mercury__string__succeeded = (mercury__string__V_28_28 <= mercury__string__MaxWidth_11);
#line 5042 "string.m"
            if (mercury__string__succeeded)
#line 5034 "string.m"
              {
#line 5034 "string.m"
                MR_String mercury__string__ColumnStr_21;

#line 5031 "string.m"
#line 5031 "string.m"
                switch (mercury__string__Justify_10) {
#line 5031 "string.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 5031 "string.m"
                  case (MR_Integer) 0:
#line 5029 "string.m"
                    {
#line 5029 "string.m"
                      MR_Integer mercury__string__Length_66;

#line 4594 "string.m"
                      {
#line 4594 "string.m"
                        mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__Length_66);
                      }
#line 4595 "string.m"
                      mercury__string__succeeded = (mercury__string__Length_66 < mercury__string__MaxWidth_11);
#line 4599 "string.m"
                      if (mercury__string__succeeded)
#line 4596 "string.m"
                        {
#line 4596 "string.m"
                          MR_Integer mercury__string__Count_67 = (mercury__string__MaxWidth_11 - mercury__string__Length_66);
#line 4596 "string.m"
                          MR_String mercury__string__PadString_68;

#line 4597 "string.m"
                          {
#line 4597 "string.m"
                            mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__Count_67, &mercury__string__PadString_68);
                          }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_row_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__ColumnStr0_13 ;
	S2 =  mercury__string__PadString_68 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7660 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ColumnStr_21  = S3;
#line 3399 "string.m"
}
#line 4596 "string.m"
                        }
#line 4599 "string.m"
                      else
#line 4600 "string.m"
                        mercury__string__ColumnStr_21 = mercury__string__ColumnStr0_13;
#line 5029 "string.m"
                    }
#line 5031 "string.m"
                    break;
#line 5031 "string.m"
                  case (MR_Integer) 1:
#line 5032 "string.m"
                    {
#line 5033 "string.m"
                      {
#line 5033 "string.m"
                        mercury__string__ColumnStr_21 = mercury__string__pad_left_3_f_0(mercury__string__ColumnStr0_13, (MR_Char) 32, mercury__string__MaxWidth_11);
                      }
#line 5032 "string.m"
                    }
#line 5031 "string.m"
                    break;
#line 5031 "string.m"
                }
#line 5038 "string.m"
                if ((mercury__string__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5036 "string.m"
                  *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr_21;
#line 5038 "string.m"
                else
#line 5039 "string.m"
                  {
#line 5039 "string.m"
                    MR_String mercury__string__V_31_31;

#line 5040 "string.m"
                    {
#line 5040 "string.m"
                      mercury__string__V_31_31 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__LineRest_20);
                    }
#line 5040 "string.m"
                    {
#line 5040 "string.m"
                      *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr_21, mercury__string__V_31_31);
                    }
#line 5039 "string.m"
                  }
#line 5034 "string.m"
              }
#line 5042 "string.m"
            else
#line 5046 "string.m"
            if ((mercury__string__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5044 "string.m"
              *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr0_13;
#line 5046 "string.m"
            else
#line 5047 "string.m"
              {
#line 5047 "string.m"
                MR_String mercury__string__V_32_32;
#line 5047 "string.m"
                MR_String mercury__string__V_33_33;
#line 5047 "string.m"
                MR_String mercury__string__V_35_35;
#line 5047 "string.m"
                MR_String mercury__string__V_36_36;

#line 2016 "string.m"
                {
#line 2016 "string.m"
                  mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__NextColumn_19, &mercury__string__V_36_36);
                }
#line 5049 "string.m"
                {
#line 5049 "string.m"
                  mercury__string__V_35_35 = mercury__string__f_43_43_2_f_0(mercury__string__V_36_36, mercury__string__LineRest_20);
                }
#line 5048 "string.m"
                {
#line 5048 "string.m"
                  mercury__string__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mercury__string__V_35_35);
                }
#line 5048 "string.m"
                {
#line 5048 "string.m"
                  mercury__string__V_32_32 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__V_33_33);
                }
#line 5048 "string.m"
                {
#line 5048 "string.m"
                  *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr0_13, mercury__string__V_32_32);
                }
#line 5047 "string.m"
              }
#line 5023 "string.m"
          }
#line 5021 "string.m"
      }
#line 5021 "string.m"
  }
#line 5018 "string.m"
}

#line 5004 "string.m"
void MR_CALL 
mercury__string__get_next_line_3_p_0(
#line 5004 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 5004 "string.m"
  MR_Word * mercury__string__HeadVar__2_2,
#line 5004 "string.m"
  MR_Word * mercury__string__HeadVar__3_3)
#line 5004 "string.m"
{
#line 5007 "string.m"
  {
#line 5007 "string.m"
    MR_bool mercury__string__succeeded;

#line 5007 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5007 "string.m"
      {
#line 5007 "string.m"
        *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5007 "string.m"
        *mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5007 "string.m"
      }
#line 5007 "string.m"
    else
#line 5009 "string.m"
      {
#line 5009 "string.m"
        MR_Word mercury__string__Column_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 5009 "string.m"
        MR_Word mercury__string__Columns_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 5009 "string.m"
        MR_String mercury__string__ColumnTop_6;
#line 5009 "string.m"
        MR_Word mercury__string__ColumnTops_7;
#line 5009 "string.m"
        MR_Word mercury__string__ColumnRest_8;
#line 5009 "string.m"
        MR_Word mercury__string__ColumnRests_9;

#line 5013 "string.m"
        if ((mercury__string__Column_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5011 "string.m"
          {
#line 5012 "string.m"
            {
#line 5012 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.get_next_line\'/3", (MR_String) "list length mismatch");
#line 5012 "string.m"
              return;
            }
#line 5011 "string.m"
          }
#line 5013 "string.m"
        else
#line 5014 "string.m"
          {
#line 5014 "string.m"
            mercury__string__ColumnTop_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 0)));
#line 5014 "string.m"
            mercury__string__ColumnRest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 1)));
#line 5014 "string.m"
          }
#line 5016 "string.m"
        {
#line 5016 "string.m"
          mercury__string__get_next_line_3_p_0(mercury__string__Columns_5, &mercury__string__ColumnTops_7, &mercury__string__ColumnRests_9);
        }
#line 5008 "string.m"
        {
#line 5008 "string.m"
          MR_Word base;
#line 5008 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5008 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 5008 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnTop_6));
#line 5008 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnTops_7));
#line 5008 "string.m"
        }
#line 5009 "string.m"
        {
#line 5009 "string.m"
          MR_Word base;
#line 5009 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5009 "string.m"
          *mercury__string__HeadVar__3_3 = base;
#line 5009 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnRest_8));
#line 5009 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnRests_9));
#line 5009 "string.m"
        }
#line 5009 "string.m"
      }
#line 5007 "string.m"
  }
#line 5004 "string.m"
}

#line 4997 "string.m"
MR_bool MR_CALL 
mercury__string__all_empty_1_p_0(
#line 4997 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4997 "string.m"
{
#line 4999 "string.m"
  while (MR_TRUE)
#line 4999 "string.m"
    {
#line 4999 "string.m"
      /* tailcall optimized into a loop */
#line 4999 "string.m"
      {
#line 4999 "string.m"
        MR_bool mercury__string__succeeded;

#line 4999 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4999 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4999 "string.m"
        else
#line 5000 "string.m"
          {
#line 5000 "string.m"
            MR_Word mercury__string__List_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 5000 "string.m"
            MR_Word mercury__string__Lists_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

#line 5001 "string.m"
            mercury__string__succeeded = (mercury__string__List_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 5000 "string.m"
            if (mercury__string__succeeded)
#line 5002 "string.m"
              {
#line 5002 "string.m"
                /* direct tailcall eliminated */
#line 5002 "string.m"
                {
#line 5002 "string.m"
                  MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__Lists_3;

#line 5002 "string.m"
                  mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 5002 "string.m"
                }
#line 5002 "string.m"
                continue;
#line 5002 "string.m"
              }
#line 5000 "string.m"
          }
#line 4999 "string.m"
        return mercury__string__succeeded;
#line 4999 "string.m"
      }
#line 4999 "string.m"
      break;
#line 4999 "string.m"
    }
#line 4997 "string.m"
}

#line 4984 "string.m"
void MR_CALL 
mercury__string__generate_rows_6_p_0(
#line 4984 "string.m"
  MR_Word mercury__string__MaxWidthsSenses_7,
#line 4984 "string.m"
  MR_String mercury__string__Separator_8,
#line 4984 "string.m"
  MR_Integer mercury__string__SepLen_9,
#line 4984 "string.m"
  MR_Word mercury__string__Columns0_10,
#line 4984 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevRows_0_15,
#line 4984 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevRows_16)
#line 4984 "string.m"
{
#line 4990 "string.m"
  while (MR_TRUE)
#line 4990 "string.m"
    {
#line 4990 "string.m"
      /* tailcall optimized into a loop */
#line 4990 "string.m"
      {
#line 4990 "string.m"
        MR_bool mercury__string__succeeded;

#line 4988 "string.m"
        {
#line 4988 "string.m"
          mercury__string__succeeded = mercury__string__all_empty_1_p_0(mercury__string__Columns0_10);
        }
#line 4990 "string.m"
        if (mercury__string__succeeded)
#line 4990 "string.m"
          *mercury__string__STATE_VARIABLE_RevRows_16 = mercury__string__STATE_VARIABLE_RevRows_0_15;
#line 4990 "string.m"
        else
#line 4991 "string.m"
          {
#line 4991 "string.m"
            MR_Word mercury__string__Line_12;
#line 4991 "string.m"
            MR_Word mercury__string__Columns_13;
#line 4991 "string.m"
            MR_String mercury__string__Row_14;
#line 4991 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_RevRows_18_18;

#line 4991 "string.m"
            {
#line 4991 "string.m"
              mercury__string__get_next_line_3_p_0(mercury__string__Columns0_10, &mercury__string__Line_12, &mercury__string__Columns_13);
            }
#line 4992 "string.m"
            {
#line 4992 "string.m"
              mercury__string__pad_row_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Line_12, mercury__string__Separator_8, mercury__string__SepLen_9, (MR_Integer) 0, &mercury__string__Row_14);
            }
#line 4993 "string.m"
            {
#line 4993 "string.m"
              mercury__string__STATE_VARIABLE_RevRows_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4993 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 0) = ((MR_Box) (mercury__string__Row_14));
#line 4993 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevRows_0_15));
#line 4993 "string.m"
            }
#line 4994 "string.m"
            /* direct tailcall eliminated */
#line 4994 "string.m"
            {
#line 4994 "string.m"
              MR_Word mercury__string__Columns0__tmp_copy_10 = mercury__string__Columns_13;
#line 4994 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_RevRows_0__tmp_copy_15 = mercury__string__STATE_VARIABLE_RevRows_18_18;

#line 4994 "string.m"
              mercury__string__STATE_VARIABLE_RevRows_0_15 = mercury__string__STATE_VARIABLE_RevRows_0__tmp_copy_15;
#line 4994 "string.m"
              mercury__string__Columns0_10 = mercury__string__Columns0__tmp_copy_10;
#line 4994 "string.m"
            }
#line 4994 "string.m"
            continue;
#line 4991 "string.m"
          }
#line 4990 "string.m"
      }
#line 4990 "string.m"
      break;
#line 4990 "string.m"
    }
#line 4984 "string.m"
}

#line 4978 "string.m"
MR_Word MR_CALL 
mercury__string__project_column_strings_1_f_0(
#line 4978 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4978 "string.m"
{
#line 4981 "string.m"
  {
#line 4981 "string.m"
    MR_bool mercury__string__succeeded;
#line 4981 "string.m"
    MR_Word mercury__string__Strings_2;
#line 4981 "string.m"
    MR_Word mercury__string__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4981 "string.m"
    MR_Word mercury__string__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

#line 4981 "string.m"
    if (((MR_tag((MR_Word) mercury__string__V_10_10)) == (MR_mktag((MR_Integer) 0))))
#line 4981 "string.m"
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_10_10, (MR_Integer) 0)));
#line 4981 "string.m"
    else
#line 4982 "string.m"
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_10_10, (MR_Integer) 0)));
#line 4981 "string.m"
    return mercury__string__Strings_2;
#line 4981 "string.m"
  }
#line 4978 "string.m"
}

#line 4923 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
#line 4923 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4923 "string.m"
{
#line 4923 "string.m"
  {
#line 4923 "string.m"
    struct mercury__string__foldr_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4924 "string.m"
    {
#line 4924 "string.m"
      mercury__string__foldr_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
#line 4924 "string.m"
      return;
    }
#line 4923 "string.m"
  }
#line 4923 "string.m"
}

#line 4914 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_4(
#line 4914 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4914 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4914 "string.m"
  MR_String mercury__string__String_8,
#line 4914 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4914 "string.m"
  MR_Integer mercury__string__I_10,
#line 4914 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4914 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4914 "string.m"
  MR_Cont mercury__string__cont,
#line 4914 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4914 "string.m"
{
#line 4914 "string.m"
  {
#line 4914 "string.m"
    struct mercury__string__foldr_between_2_6_p_4_env_0_s mercury__string__env;

#line 4914 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
#line 4914 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
#line 4914 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
#line 4914 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9 = mercury__string__Start_9;
#line 4914 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4914 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont = mercury__string__cont;
#line 4914 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4925 "string.m"
    {
#line 4925 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
#line 4925 "string.m"
      MR_Char mercury__string__Char_13;

#line 4919 "string.m"
      if (mercury__string__succeeded)
#line 4919 "string.m"
        {
#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 8179 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4919 "string.m"
          if (mercury__string__succeeded)
#line 4921 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
#line 4919 "string.m"
        }
#line 4925 "string.m"
      if (mercury__string__succeeded)
#line 4923 "string.m"
        {
#line 4923 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

#line 4923 "string.m"
          {
#line 4923 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_4_1, &mercury__string__env);
          }
#line 4923 "string.m"
        }
#line 4925 "string.m"
      else
#line 4925 "string.m"
        {
#line 4925 "string.m"
          *((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4925 "string.m"
          {
#line 4925 "string.m"
            ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
#line 4925 "string.m"
            return;
          }
#line 4925 "string.m"
        }
#line 4925 "string.m"
    }
#line 4914 "string.m"
  }
#line 4914 "string.m"
}

#line 4923 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
#line 4923 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4923 "string.m"
{
#line 4923 "string.m"
  {
#line 4923 "string.m"
    struct mercury__string__foldr_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 4924 "string.m"
    {
#line 4924 "string.m"
      mercury__string__foldr_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
#line 4924 "string.m"
      return;
    }
#line 4923 "string.m"
  }
#line 4923 "string.m"
}

#line 4912 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_3(
#line 4912 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4912 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4912 "string.m"
  MR_String mercury__string__String_8,
#line 4912 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4912 "string.m"
  MR_Integer mercury__string__I_10,
#line 4912 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4912 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4912 "string.m"
  MR_Cont mercury__string__cont,
#line 4912 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4912 "string.m"
{
#line 4912 "string.m"
  {
#line 4912 "string.m"
    struct mercury__string__foldr_between_2_6_p_3_env_0_s mercury__string__env;

#line 4912 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
#line 4912 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
#line 4912 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
#line 4912 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9 = mercury__string__Start_9;
#line 4912 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4912 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont = mercury__string__cont;
#line 4912 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4925 "string.m"
    {
#line 4925 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
#line 4925 "string.m"
      MR_Char mercury__string__Char_13;

#line 4919 "string.m"
      if (mercury__string__succeeded)
#line 4919 "string.m"
        {
#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 8337 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4919 "string.m"
          if (mercury__string__succeeded)
#line 4921 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
#line 4919 "string.m"
        }
#line 4925 "string.m"
      if (mercury__string__succeeded)
#line 4923 "string.m"
        {
#line 4923 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

#line 4923 "string.m"
          {
#line 4923 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_3_1, &mercury__string__env);
          }
#line 4923 "string.m"
        }
#line 4925 "string.m"
      else
#line 4925 "string.m"
        {
#line 4925 "string.m"
          *((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4925 "string.m"
          {
#line 4925 "string.m"
            ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
#line 4925 "string.m"
            return;
          }
#line 4925 "string.m"
        }
#line 4925 "string.m"
    }
#line 4912 "string.m"
  }
#line 4912 "string.m"
}

#line 4910 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_between_2_6_p_2(
#line 4910 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4910 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4910 "string.m"
  MR_String mercury__string__String_8,
#line 4910 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4910 "string.m"
  MR_Integer mercury__string__I_10,
#line 4910 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4910 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4910 "string.m"
{
#line 4925 "string.m"
  while (MR_TRUE)
#line 4925 "string.m"
    {
#line 4925 "string.m"
      /* tailcall optimized into a loop */
#line 4925 "string.m"
      {
#line 4925 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4925 "string.m"
        MR_Integer mercury__string__J_12;
#line 4925 "string.m"
        MR_Char mercury__string__Char_13;

#line 4919 "string.m"
        if (mercury__string__succeeded)
#line 4919 "string.m"
          {
#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 8456 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4919 "string.m"
            if (mercury__string__succeeded)
#line 4921 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4919 "string.m"
          }
#line 4925 "string.m"
        if (mercury__string__succeeded)
#line 4923 "string.m"
          {
#line 4923 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4923 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4923 "string.m"
            {
#line 4923 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4923 "string.m"
            if (mercury__string__succeeded)
#line 4924 "string.m"
              {
#line 4924 "string.m"
                /* direct tailcall eliminated */
#line 4924 "string.m"
                {
#line 4924 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4924 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4924 "string.m"
                  mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4924 "string.m"
                  mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4924 "string.m"
                }
#line 4924 "string.m"
                continue;
#line 4924 "string.m"
              }
#line 4923 "string.m"
          }
#line 4925 "string.m"
        else
#line 4925 "string.m"
          {
#line 4925 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4925 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4925 "string.m"
          }
#line 4925 "string.m"
        return mercury__string__succeeded;
#line 4925 "string.m"
      }
#line 4925 "string.m"
      break;
#line 4925 "string.m"
    }
#line 4910 "string.m"
}

#line 4908 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_1(
#line 4908 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4908 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4908 "string.m"
  MR_String mercury__string__String_8,
#line 4908 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4908 "string.m"
  MR_Integer mercury__string__I_10,
#line 4908 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4908 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4908 "string.m"
{
#line 4925 "string.m"
  while (MR_TRUE)
#line 4925 "string.m"
    {
#line 4925 "string.m"
      /* tailcall optimized into a loop */
#line 4925 "string.m"
      {
#line 4925 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4925 "string.m"
        MR_Integer mercury__string__J_12;
#line 4925 "string.m"
        MR_Char mercury__string__Char_13;

#line 4919 "string.m"
        if (mercury__string__succeeded)
#line 4919 "string.m"
          {
#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 8599 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4919 "string.m"
            if (mercury__string__succeeded)
#line 4921 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4919 "string.m"
          }
#line 4925 "string.m"
        if (mercury__string__succeeded)
#line 4923 "string.m"
          {
#line 4923 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4923 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4923 "string.m"
            {
#line 4923 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4924 "string.m"
            /* direct tailcall eliminated */
#line 4924 "string.m"
            {
#line 4924 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4924 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4924 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4924 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4924 "string.m"
            }
#line 4924 "string.m"
            continue;
#line 4923 "string.m"
          }
#line 4925 "string.m"
        else
#line 4925 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4925 "string.m"
      }
#line 4925 "string.m"
      break;
#line 4925 "string.m"
    }
#line 4908 "string.m"
}

#line 4906 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_0(
#line 4906 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4906 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4906 "string.m"
  MR_String mercury__string__String_8,
#line 4906 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4906 "string.m"
  MR_Integer mercury__string__I_10,
#line 4906 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4906 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4906 "string.m"
{
#line 4925 "string.m"
  while (MR_TRUE)
#line 4925 "string.m"
    {
#line 4925 "string.m"
      /* tailcall optimized into a loop */
#line 4925 "string.m"
      {
#line 4925 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4925 "string.m"
        MR_Integer mercury__string__J_12;
#line 4925 "string.m"
        MR_Char mercury__string__Char_13;

#line 4919 "string.m"
        if (mercury__string__succeeded)
#line 4919 "string.m"
          {
#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 8728 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4919 "string.m"
            if (mercury__string__succeeded)
#line 4921 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4919 "string.m"
          }
#line 4925 "string.m"
        if (mercury__string__succeeded)
#line 4923 "string.m"
          {
#line 4923 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4923 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4923 "string.m"
            {
#line 4923 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4924 "string.m"
            /* direct tailcall eliminated */
#line 4924 "string.m"
            {
#line 4924 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4924 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4924 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4924 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4924 "string.m"
            }
#line 4924 "string.m"
            continue;
#line 4923 "string.m"
          }
#line 4925 "string.m"
        else
#line 4925 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4925 "string.m"
      }
#line 4925 "string.m"
      break;
#line 4925 "string.m"
    }
#line 4906 "string.m"
}

#line 4868 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
#line 4868 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4868 "string.m"
{
#line 4868 "string.m"
  {
#line 4868 "string.m"
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_5_env_0_s *) mercury__string__env_ptr_arg;

#line 4869 "string.m"
    {
#line 4869 "string.m"
      mercury__string__foldl2_between_2_8_p_5((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
#line 4869 "string.m"
      return;
    }
#line 4868 "string.m"
  }
#line 4868 "string.m"
}

#line 4859 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_5(
#line 4859 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4859 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4859 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4859 "string.m"
  MR_String mercury__string__String_10,
#line 4859 "string.m"
  MR_Integer mercury__string__I_11,
#line 4859 "string.m"
  MR_Integer mercury__string__End_12,
#line 4859 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4859 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4859 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4859 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 4859 "string.m"
  MR_Cont mercury__string__cont,
#line 4859 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4859 "string.m"
{
#line 4859 "string.m"
  {
#line 4859 "string.m"
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s mercury__string__env;

#line 4859 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
#line 4859 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
#line 4859 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9 = mercury__string__Closure_9;
#line 4859 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__String_10 = mercury__string__String_10;
#line 4859 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12 = mercury__string__End_12;
#line 4859 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
#line 4859 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
#line 4859 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont = mercury__string__cont;
#line 4859 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4870 "string.m"
    {
#line 4870 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
#line 4870 "string.m"
      MR_Char mercury__string__Char_16;

#line 4864 "string.m"
      if (mercury__string__succeeded)
#line 4864 "string.m"
        {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8903 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4864 "string.m"
          if (mercury__string__succeeded)
#line 4866 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
#line 4864 "string.m"
        }
#line 4870 "string.m"
      if (mercury__string__succeeded)
#line 4868 "string.m"
        {
#line 4868 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (MR_Integer) 1)));

#line 4868 "string.m"
          {
#line 4868 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_5_1, &mercury__string__env);
          }
#line 4868 "string.m"
        }
#line 4870 "string.m"
      else
#line 4871 "string.m"
        {
#line 4871 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4871 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4871 "string.m"
          {
#line 4871 "string.m"
            ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
#line 4871 "string.m"
            return;
          }
#line 4871 "string.m"
        }
#line 4870 "string.m"
    }
#line 4859 "string.m"
  }
#line 4859 "string.m"
}

#line 4868 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
#line 4868 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4868 "string.m"
{
#line 4868 "string.m"
  {
#line 4868 "string.m"
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4869 "string.m"
    {
#line 4869 "string.m"
      mercury__string__foldl2_between_2_8_p_4((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
#line 4869 "string.m"
      return;
    }
#line 4868 "string.m"
  }
#line 4868 "string.m"
}

#line 4857 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_4(
#line 4857 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4857 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4857 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4857 "string.m"
  MR_String mercury__string__String_10,
#line 4857 "string.m"
  MR_Integer mercury__string__I_11,
#line 4857 "string.m"
  MR_Integer mercury__string__End_12,
#line 4857 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4857 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4857 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4857 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 4857 "string.m"
  MR_Cont mercury__string__cont,
#line 4857 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4857 "string.m"
{
#line 4857 "string.m"
  {
#line 4857 "string.m"
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s mercury__string__env;

#line 4857 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
#line 4857 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
#line 4857 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9 = mercury__string__Closure_9;
#line 4857 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__String_10 = mercury__string__String_10;
#line 4857 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12 = mercury__string__End_12;
#line 4857 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
#line 4857 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
#line 4857 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont = mercury__string__cont;
#line 4857 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4870 "string.m"
    {
#line 4870 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
#line 4870 "string.m"
      MR_Char mercury__string__Char_16;

#line 4864 "string.m"
      if (mercury__string__succeeded)
#line 4864 "string.m"
        {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9070 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4864 "string.m"
          if (mercury__string__succeeded)
#line 4866 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
#line 4864 "string.m"
        }
#line 4870 "string.m"
      if (mercury__string__succeeded)
#line 4868 "string.m"
        {
#line 4868 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (MR_Integer) 1)));

#line 4868 "string.m"
          {
#line 4868 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_4_1, &mercury__string__env);
          }
#line 4868 "string.m"
        }
#line 4870 "string.m"
      else
#line 4871 "string.m"
        {
#line 4871 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4871 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4871 "string.m"
          {
#line 4871 "string.m"
            ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
#line 4871 "string.m"
            return;
          }
#line 4871 "string.m"
        }
#line 4870 "string.m"
    }
#line 4857 "string.m"
  }
#line 4857 "string.m"
}

#line 4855 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_between_2_8_p_3(
#line 4855 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4855 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4855 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4855 "string.m"
  MR_String mercury__string__String_10,
#line 4855 "string.m"
  MR_Integer mercury__string__I_11,
#line 4855 "string.m"
  MR_Integer mercury__string__End_12,
#line 4855 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4855 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4855 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4855 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4855 "string.m"
{
#line 4870 "string.m"
  while (MR_TRUE)
#line 4870 "string.m"
    {
#line 4870 "string.m"
      /* tailcall optimized into a loop */
#line 4870 "string.m"
      {
#line 4870 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4870 "string.m"
        MR_Integer mercury__string__J_15;
#line 4870 "string.m"
        MR_Char mercury__string__Char_16;

#line 4864 "string.m"
        if (mercury__string__succeeded)
#line 4864 "string.m"
          {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9194 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4864 "string.m"
            if (mercury__string__succeeded)
#line 4866 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4864 "string.m"
          }
#line 4870 "string.m"
        if (mercury__string__succeeded)
#line 4868 "string.m"
          {
#line 4868 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4868 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4868 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4868 "string.m"
            {
#line 4868 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4868 "string.m"
            if (mercury__string__succeeded)
#line 4869 "string.m"
              {
#line 4869 "string.m"
                /* direct tailcall eliminated */
#line 4869 "string.m"
                {
#line 4869 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4869 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4869 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4869 "string.m"
                  mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4869 "string.m"
                  mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4869 "string.m"
                  mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4869 "string.m"
                }
#line 4869 "string.m"
                continue;
#line 4869 "string.m"
              }
#line 4868 "string.m"
          }
#line 4870 "string.m"
        else
#line 4871 "string.m"
          {
#line 4871 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4871 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4871 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4871 "string.m"
          }
#line 4870 "string.m"
        return mercury__string__succeeded;
#line 4870 "string.m"
      }
#line 4870 "string.m"
      break;
#line 4870 "string.m"
    }
#line 4855 "string.m"
}

#line 4853 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_2(
#line 4853 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4853 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4853 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4853 "string.m"
  MR_String mercury__string__String_10,
#line 4853 "string.m"
  MR_Integer mercury__string__I_11,
#line 4853 "string.m"
  MR_Integer mercury__string__End_12,
#line 4853 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4853 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4853 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4853 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4853 "string.m"
{
#line 4870 "string.m"
  while (MR_TRUE)
#line 4870 "string.m"
    {
#line 4870 "string.m"
      /* tailcall optimized into a loop */
#line 4870 "string.m"
      {
#line 4870 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4870 "string.m"
        MR_Integer mercury__string__J_15;
#line 4870 "string.m"
        MR_Char mercury__string__Char_16;

#line 4864 "string.m"
        if (mercury__string__succeeded)
#line 4864 "string.m"
          {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9348 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4864 "string.m"
            if (mercury__string__succeeded)
#line 4866 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4864 "string.m"
          }
#line 4870 "string.m"
        if (mercury__string__succeeded)
#line 4868 "string.m"
          {
#line 4868 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4868 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4868 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4868 "string.m"
            {
#line 4868 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4869 "string.m"
            /* direct tailcall eliminated */
#line 4869 "string.m"
            {
#line 4869 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4869 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4869 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4869 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4869 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4869 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4869 "string.m"
            }
#line 4869 "string.m"
            continue;
#line 4868 "string.m"
          }
#line 4870 "string.m"
        else
#line 4871 "string.m"
          {
#line 4871 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4871 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4871 "string.m"
          }
#line 4870 "string.m"
      }
#line 4870 "string.m"
      break;
#line 4870 "string.m"
    }
#line 4853 "string.m"
}

#line 4851 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_1(
#line 4851 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4851 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4851 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4851 "string.m"
  MR_String mercury__string__String_10,
#line 4851 "string.m"
  MR_Integer mercury__string__I_11,
#line 4851 "string.m"
  MR_Integer mercury__string__End_12,
#line 4851 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4851 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4851 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4851 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4851 "string.m"
{
#line 4870 "string.m"
  while (MR_TRUE)
#line 4870 "string.m"
    {
#line 4870 "string.m"
      /* tailcall optimized into a loop */
#line 4870 "string.m"
      {
#line 4870 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4870 "string.m"
        MR_Integer mercury__string__J_15;
#line 4870 "string.m"
        MR_Char mercury__string__Char_16;

#line 4864 "string.m"
        if (mercury__string__succeeded)
#line 4864 "string.m"
          {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9492 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4864 "string.m"
            if (mercury__string__succeeded)
#line 4866 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4864 "string.m"
          }
#line 4870 "string.m"
        if (mercury__string__succeeded)
#line 4868 "string.m"
          {
#line 4868 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4868 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4868 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4868 "string.m"
            {
#line 4868 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4869 "string.m"
            /* direct tailcall eliminated */
#line 4869 "string.m"
            {
#line 4869 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4869 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4869 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4869 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4869 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4869 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4869 "string.m"
            }
#line 4869 "string.m"
            continue;
#line 4868 "string.m"
          }
#line 4870 "string.m"
        else
#line 4871 "string.m"
          {
#line 4871 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4871 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4871 "string.m"
          }
#line 4870 "string.m"
      }
#line 4870 "string.m"
      break;
#line 4870 "string.m"
    }
#line 4851 "string.m"
}

#line 4849 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_0(
#line 4849 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4849 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4849 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4849 "string.m"
  MR_String mercury__string__String_10,
#line 4849 "string.m"
  MR_Integer mercury__string__I_11,
#line 4849 "string.m"
  MR_Integer mercury__string__End_12,
#line 4849 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4849 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4849 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4849 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4849 "string.m"
{
#line 4870 "string.m"
  while (MR_TRUE)
#line 4870 "string.m"
    {
#line 4870 "string.m"
      /* tailcall optimized into a loop */
#line 4870 "string.m"
      {
#line 4870 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4870 "string.m"
        MR_Integer mercury__string__J_15;
#line 4870 "string.m"
        MR_Char mercury__string__Char_16;

#line 4864 "string.m"
        if (mercury__string__succeeded)
#line 4864 "string.m"
          {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9636 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4864 "string.m"
            if (mercury__string__succeeded)
#line 4866 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4864 "string.m"
          }
#line 4870 "string.m"
        if (mercury__string__succeeded)
#line 4868 "string.m"
          {
#line 4868 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4868 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4868 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4868 "string.m"
            {
#line 4868 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4869 "string.m"
            /* direct tailcall eliminated */
#line 4869 "string.m"
            {
#line 4869 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4869 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4869 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4869 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4869 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4869 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4869 "string.m"
            }
#line 4869 "string.m"
            continue;
#line 4868 "string.m"
          }
#line 4870 "string.m"
        else
#line 4871 "string.m"
          {
#line 4871 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4871 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4871 "string.m"
          }
#line 4870 "string.m"
      }
#line 4870 "string.m"
      break;
#line 4870 "string.m"
    }
#line 4849 "string.m"
}

#line 4841 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
#line 4841 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4841 "string.m"
{
#line 4841 "string.m"
  {
#line 4841 "string.m"
    struct mercury__string__foldl_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4842 "string.m"
    {
#line 4842 "string.m"
      mercury__string__foldl_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
#line 4842 "string.m"
      return;
    }
#line 4841 "string.m"
  }
#line 4841 "string.m"
}

#line 4832 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_4(
#line 4832 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4832 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4832 "string.m"
  MR_String mercury__string__String_8,
#line 4832 "string.m"
  MR_Integer mercury__string__I_9,
#line 4832 "string.m"
  MR_Integer mercury__string__End_10,
#line 4832 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4832 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4832 "string.m"
  MR_Cont mercury__string__cont,
#line 4832 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4832 "string.m"
{
#line 4832 "string.m"
  {
#line 4832 "string.m"
    struct mercury__string__foldl_between_2_6_p_4_env_0_s mercury__string__env;

#line 4832 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
#line 4832 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
#line 4832 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
#line 4832 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10 = mercury__string__End_10;
#line 4832 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4832 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont = mercury__string__cont;
#line 4832 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4843 "string.m"
    {
#line 4843 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
#line 4843 "string.m"
      MR_Char mercury__string__Char_13;

#line 4837 "string.m"
      if (mercury__string__succeeded)
#line 4837 "string.m"
        {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9813 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4837 "string.m"
          if (mercury__string__succeeded)
#line 4839 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
#line 4837 "string.m"
        }
#line 4843 "string.m"
      if (mercury__string__succeeded)
#line 4841 "string.m"
        {
#line 4841 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

#line 4841 "string.m"
          {
#line 4841 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_4_1, &mercury__string__env);
          }
#line 4841 "string.m"
        }
#line 4843 "string.m"
      else
#line 4843 "string.m"
        {
#line 4843 "string.m"
          *((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4843 "string.m"
          {
#line 4843 "string.m"
            ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
#line 4843 "string.m"
            return;
          }
#line 4843 "string.m"
        }
#line 4843 "string.m"
    }
#line 4832 "string.m"
  }
#line 4832 "string.m"
}

#line 4841 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
#line 4841 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4841 "string.m"
{
#line 4841 "string.m"
  {
#line 4841 "string.m"
    struct mercury__string__foldl_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 4842 "string.m"
    {
#line 4842 "string.m"
      mercury__string__foldl_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
#line 4842 "string.m"
      return;
    }
#line 4841 "string.m"
  }
#line 4841 "string.m"
}

#line 4830 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_3(
#line 4830 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4830 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4830 "string.m"
  MR_String mercury__string__String_8,
#line 4830 "string.m"
  MR_Integer mercury__string__I_9,
#line 4830 "string.m"
  MR_Integer mercury__string__End_10,
#line 4830 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4830 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4830 "string.m"
  MR_Cont mercury__string__cont,
#line 4830 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4830 "string.m"
{
#line 4830 "string.m"
  {
#line 4830 "string.m"
    struct mercury__string__foldl_between_2_6_p_3_env_0_s mercury__string__env;

#line 4830 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
#line 4830 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
#line 4830 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
#line 4830 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10 = mercury__string__End_10;
#line 4830 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4830 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont = mercury__string__cont;
#line 4830 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4843 "string.m"
    {
#line 4843 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
#line 4843 "string.m"
      MR_Char mercury__string__Char_13;

#line 4837 "string.m"
      if (mercury__string__succeeded)
#line 4837 "string.m"
        {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9968 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4837 "string.m"
          if (mercury__string__succeeded)
#line 4839 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
#line 4837 "string.m"
        }
#line 4843 "string.m"
      if (mercury__string__succeeded)
#line 4841 "string.m"
        {
#line 4841 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

#line 4841 "string.m"
          {
#line 4841 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_3_1, &mercury__string__env);
          }
#line 4841 "string.m"
        }
#line 4843 "string.m"
      else
#line 4843 "string.m"
        {
#line 4843 "string.m"
          *((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4843 "string.m"
          {
#line 4843 "string.m"
            ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
#line 4843 "string.m"
            return;
          }
#line 4843 "string.m"
        }
#line 4843 "string.m"
    }
#line 4830 "string.m"
  }
#line 4830 "string.m"
}

#line 4828 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_between_2_6_p_2(
#line 4828 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4828 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4828 "string.m"
  MR_String mercury__string__String_8,
#line 4828 "string.m"
  MR_Integer mercury__string__I_9,
#line 4828 "string.m"
  MR_Integer mercury__string__End_10,
#line 4828 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4828 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4828 "string.m"
{
#line 4843 "string.m"
  while (MR_TRUE)
#line 4843 "string.m"
    {
#line 4843 "string.m"
      /* tailcall optimized into a loop */
#line 4843 "string.m"
      {
#line 4843 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4843 "string.m"
        MR_Integer mercury__string__J_12;
#line 4843 "string.m"
        MR_Char mercury__string__Char_13;

#line 4837 "string.m"
        if (mercury__string__succeeded)
#line 4837 "string.m"
          {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 10084 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4837 "string.m"
            if (mercury__string__succeeded)
#line 4839 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4837 "string.m"
          }
#line 4843 "string.m"
        if (mercury__string__succeeded)
#line 4841 "string.m"
          {
#line 4841 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4841 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4841 "string.m"
            {
#line 4841 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4841 "string.m"
            if (mercury__string__succeeded)
#line 4842 "string.m"
              {
#line 4842 "string.m"
                /* direct tailcall eliminated */
#line 4842 "string.m"
                {
#line 4842 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4842 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4842 "string.m"
                  mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4842 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4842 "string.m"
                }
#line 4842 "string.m"
                continue;
#line 4842 "string.m"
              }
#line 4841 "string.m"
          }
#line 4843 "string.m"
        else
#line 4843 "string.m"
          {
#line 4843 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4843 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4843 "string.m"
          }
#line 4843 "string.m"
        return mercury__string__succeeded;
#line 4843 "string.m"
      }
#line 4843 "string.m"
      break;
#line 4843 "string.m"
    }
#line 4828 "string.m"
}

#line 4826 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_1(
#line 4826 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4826 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4826 "string.m"
  MR_String mercury__string__String_8,
#line 4826 "string.m"
  MR_Integer mercury__string__I_9,
#line 4826 "string.m"
  MR_Integer mercury__string__End_10,
#line 4826 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4826 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4826 "string.m"
{
#line 4843 "string.m"
  while (MR_TRUE)
#line 4843 "string.m"
    {
#line 4843 "string.m"
      /* tailcall optimized into a loop */
#line 4843 "string.m"
      {
#line 4843 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4843 "string.m"
        MR_Integer mercury__string__J_12;
#line 4843 "string.m"
        MR_Char mercury__string__Char_13;

#line 4837 "string.m"
        if (mercury__string__succeeded)
#line 4837 "string.m"
          {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 10224 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4837 "string.m"
            if (mercury__string__succeeded)
#line 4839 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4837 "string.m"
          }
#line 4843 "string.m"
        if (mercury__string__succeeded)
#line 4841 "string.m"
          {
#line 4841 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4841 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4841 "string.m"
            {
#line 4841 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4842 "string.m"
            /* direct tailcall eliminated */
#line 4842 "string.m"
            {
#line 4842 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4842 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4842 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4842 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4842 "string.m"
            }
#line 4842 "string.m"
            continue;
#line 4841 "string.m"
          }
#line 4843 "string.m"
        else
#line 4843 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4843 "string.m"
      }
#line 4843 "string.m"
      break;
#line 4843 "string.m"
    }
#line 4826 "string.m"
}

#line 4824 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_0(
#line 4824 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4824 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4824 "string.m"
  MR_String mercury__string__String_8,
#line 4824 "string.m"
  MR_Integer mercury__string__I_9,
#line 4824 "string.m"
  MR_Integer mercury__string__End_10,
#line 4824 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4824 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4824 "string.m"
{
#line 4843 "string.m"
  while (MR_TRUE)
#line 4843 "string.m"
    {
#line 4843 "string.m"
      /* tailcall optimized into a loop */
#line 4843 "string.m"
      {
#line 4843 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4843 "string.m"
        MR_Integer mercury__string__J_12;
#line 4843 "string.m"
        MR_Char mercury__string__Char_13;

#line 4837 "string.m"
        if (mercury__string__succeeded)
#line 4837 "string.m"
          {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 10350 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4837 "string.m"
            if (mercury__string__succeeded)
#line 4839 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4837 "string.m"
          }
#line 4843 "string.m"
        if (mercury__string__succeeded)
#line 4841 "string.m"
          {
#line 4841 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4841 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4841 "string.m"
            {
#line 4841 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4842 "string.m"
            /* direct tailcall eliminated */
#line 4842 "string.m"
            {
#line 4842 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4842 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4842 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4842 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4842 "string.m"
            }
#line 4842 "string.m"
            continue;
#line 4841 "string.m"
          }
#line 4843 "string.m"
        else
#line 4843 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4843 "string.m"
      }
#line 4843 "string.m"
      break;
#line 4843 "string.m"
    }
#line 4824 "string.m"
}

#line 4782 "string.m"
MR_Word MR_CALL 
mercury__string__break_up_string_reverse_3_f_0(
#line 4782 "string.m"
  MR_String mercury__string__Str_5,
#line 4782 "string.m"
  MR_Integer mercury__string__N_6,
#line 4782 "string.m"
  MR_Word mercury__string__Prev_7)
#line 4782 "string.m"
{
#line 4787 "string.m"
  while (MR_TRUE)
#line 4787 "string.m"
    {
#line 4787 "string.m"
      /* tailcall optimized into a loop */
#line 4787 "string.m"
      {
#line 4787 "string.m"
        MR_bool mercury__string__succeeded;
#line 4787 "string.m"
        MR_Word mercury__string__Strs_8;
#line 4785 "string.m"
        MR_Integer mercury__string__V_11_11;

#line 2649 "string.m"
        {
#line 2649 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__Str_5, &mercury__string__V_11_11);
        }
#line 4785 "string.m"
        mercury__string__succeeded = (mercury__string__V_11_11 <= mercury__string__N_6);
#line 4787 "string.m"
        if (mercury__string__succeeded)
#line 4786 "string.m"
          {
#line 4786 "string.m"
            mercury__string__Strs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4786 "string.m"
            MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 0) = ((MR_Box) (mercury__string__Str_5));
#line 4786 "string.m"
            MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 1) = ((MR_Box) (mercury__string__Prev_7));
#line 4786 "string.m"
          }
#line 4787 "string.m"
        else
#line 4788 "string.m"
          {
#line 4788 "string.m"
            MR_String mercury__string__Left_9;
#line 4788 "string.m"
            MR_String mercury__string__Right_10;
#line 4788 "string.m"
            MR_Word mercury__string__V_12_12;

#line 4788 "string.m"
            {
#line 4788 "string.m"
              mercury__string__split_by_codepoint_4_p_0(mercury__string__Str_5, mercury__string__N_6, &mercury__string__Left_9, &mercury__string__Right_10);
            }
#line 4789 "string.m"
            {
#line 4789 "string.m"
              mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4789 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_12_12, 0) = ((MR_Box) (mercury__string__Left_9));
#line 4789 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_12_12, 1) = ((MR_Box) (mercury__string__Prev_7));
#line 4789 "string.m"
            }
#line 4789 "string.m"
            /* direct tailcall eliminated */
#line 4789 "string.m"
            {
#line 4789 "string.m"
              MR_String mercury__string__Str__tmp_copy_5 = mercury__string__Right_10;
#line 4789 "string.m"
              MR_Word mercury__string__Prev__tmp_copy_7 = mercury__string__V_12_12;

#line 4789 "string.m"
              mercury__string__Prev_7 = mercury__string__Prev__tmp_copy_7;
#line 4789 "string.m"
              mercury__string__Str_5 = mercury__string__Str__tmp_copy_5;
#line 4789 "string.m"
            }
#line 4789 "string.m"
            continue;
#line 4788 "string.m"
          }
#line 4787 "string.m"
        return mercury__string__Strs_8;
#line 4787 "string.m"
      }
#line 4787 "string.m"
      break;
#line 4787 "string.m"
    }
#line 4782 "string.m"
}

#line 4705 "string.m"
void MR_CALL 
mercury__string__word_wrap_loop_7_p_0(
#line 4705 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4705 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4705 "string.m"
  MR_Integer mercury__string__SepLen_3,
#line 4705 "string.m"
  MR_Integer mercury__string__CurCol_4,
#line 4705 "string.m"
  MR_Integer mercury__string__MaxCol_5,
#line 4705 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6,
#line 4705 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7)
#line 4705 "string.m"
{
#line 4708 "string.m"
  while (MR_TRUE)
#line 4708 "string.m"
    {
#line 4708 "string.m"
      /* tailcall optimized into a loop */
#line 4708 "string.m"
      {
#line 4708 "string.m"
        MR_bool mercury__string__succeeded;

#line 4708 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4708 "string.m"
          *mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6;
#line 4708 "string.m"
        else
#line 4710 "string.m"
          {
#line 4710 "string.m"
            MR_String mercury__string__Word_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4710 "string.m"
            MR_Word mercury__string__Words_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4710 "string.m"
            MR_Integer mercury__string__WordLen_22;
#line 4710 "string.m"
            MR_Word mercury__string__NewWords_23;
#line 4710 "string.m"
            MR_Integer mercury__string__NewCol_24;
#line 4710 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

#line 2649 "string.m"
            {
#line 2649 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__Word_15, &mercury__string__WordLen_22);
            }
#line 4715 "string.m"
            mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4715 "string.m"
            if (mercury__string__succeeded)
#line 4716 "string.m"
              mercury__string__succeeded = (mercury__string__WordLen_22 < mercury__string__MaxCol_5);
#line 4721 "string.m"
            if (mercury__string__succeeded)
#line 4718 "string.m"
              {
#line 4718 "string.m"
                mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4719 "string.m"
                mercury__string__NewCol_24 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
#line 4720 "string.m"
                {
#line 4720 "string.m"
                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4720 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4720 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4720 "string.m"
                }
#line 4718 "string.m"
              }
#line 4721 "string.m"
            else
#line 4736 "string.m"
              {
#line 4723 "string.m"
                mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4723 "string.m"
                if (mercury__string__succeeded)
#line 4724 "string.m"
                  mercury__string__succeeded = (mercury__string__WordLen_22 == mercury__string__MaxCol_5);
#line 4736 "string.m"
                if (mercury__string__succeeded)
#line 4726 "string.m"
                  {
#line 4726 "string.m"
                    mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4727 "string.m"
                    mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4732 "string.m"
                    if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4731 "string.m"
                      {
#line 4731 "string.m"
                        mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4731 "string.m"
                        MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4731 "string.m"
                        MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4731 "string.m"
                      }
#line 4732 "string.m"
                    else
#line 4733 "string.m"
                      {
#line 4733 "string.m"
                        MR_Word mercury__string__V_39_39;

#line 4734 "string.m"
                        {
#line 4734 "string.m"
                          mercury__string__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4734 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_39_39, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4734 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_39_39, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4734 "string.m"
                        }
#line 4734 "string.m"
                        {
#line 4734 "string.m"
                          mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4734 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4734 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_39_39));
#line 4734 "string.m"
                        }
#line 4733 "string.m"
                      }
#line 4726 "string.m"
                  }
#line 4736 "string.m"
                else
#line 4744 "string.m"
                  {
#line 4739 "string.m"
                    MR_Integer mercury__string__V_41_41 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

#line 4739 "string.m"
                    mercury__string__succeeded = (mercury__string__V_41_41 < mercury__string__MaxCol_5);
#line 4744 "string.m"
                    if (mercury__string__succeeded)
#line 4741 "string.m"
                      {
#line 4741 "string.m"
                        MR_Integer mercury__string__V_42_42;
#line 4741 "string.m"
                        MR_Word mercury__string__V_45_45;

#line 4741 "string.m"
                        mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4742 "string.m"
                        mercury__string__V_42_42 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
#line 4742 "string.m"
                        mercury__string__NewCol_24 = (mercury__string__V_42_42 + (MR_Integer) 1);
#line 4743 "string.m"
                        {
#line 4743 "string.m"
                          mercury__string__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4743 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 0) = ((MR_Box) ((MR_String) " "));
#line 4743 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4743 "string.m"
                        }
#line 4743 "string.m"
                        {
#line 4743 "string.m"
                          mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4743 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4743 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_45_45));
#line 4743 "string.m"
                        }
#line 4741 "string.m"
                      }
#line 4744 "string.m"
                    else
#line 4758 "string.m"
                      {
#line 4746 "string.m"
                        MR_Integer mercury__string__V_70_70 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

#line 4746 "string.m"
                        mercury__string__succeeded = (mercury__string__MaxCol_5 == mercury__string__V_70_70);
#line 4758 "string.m"
                        if (mercury__string__succeeded)
#line 4748 "string.m"
                          {
#line 4748 "string.m"
                            mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4749 "string.m"
                            mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4754 "string.m"
                            if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4752 "string.m"
                              {
#line 4752 "string.m"
                                MR_Word mercury__string__V_53_53;

#line 4753 "string.m"
                                {
#line 4753 "string.m"
                                  mercury__string__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4753 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_53_53, 0) = ((MR_Box) ((MR_String) " "));
#line 4753 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_53_53, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4753 "string.m"
                                }
#line 4753 "string.m"
                                {
#line 4753 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4753 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4753 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_53_53));
#line 4753 "string.m"
                                }
#line 4752 "string.m"
                              }
#line 4754 "string.m"
                            else
#line 4755 "string.m"
                              {
#line 4755 "string.m"
                                MR_Word mercury__string__V_49_49;
#line 4755 "string.m"
                                MR_Word mercury__string__V_50_50;

#line 4756 "string.m"
                                {
#line 4756 "string.m"
                                  mercury__string__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4756 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_50_50, 0) = ((MR_Box) ((MR_String) " "));
#line 4756 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_50_50, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4756 "string.m"
                                }
#line 4756 "string.m"
                                {
#line 4756 "string.m"
                                  mercury__string__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4756 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_49_49, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4756 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_49_49, 1) = ((MR_Box) (mercury__string__V_50_50));
#line 4756 "string.m"
                                }
#line 4756 "string.m"
                                {
#line 4756 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4756 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4756 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_49_49));
#line 4756 "string.m"
                                }
#line 4755 "string.m"
                              }
#line 4748 "string.m"
                          }
#line 4758 "string.m"
                        else
#line 4773 "string.m"
                          {
#line 4760 "string.m"
                            mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4773 "string.m"
                            if (mercury__string__succeeded)
#line 4762 "string.m"
                              {
#line 4762 "string.m"
                                MR_Word mercury__string__TypeCtorInfo_69_69;
#line 4762 "string.m"
                                MR_Word mercury__string__RevPieces_29;
#line 4762 "string.m"
                                MR_String mercury__string__LastPiece_30;
#line 4762 "string.m"
                                MR_Word mercury__string__Rest_31;
#line 4762 "string.m"
                                MR_Word mercury__string__RestWithSep_32;
#line 4762 "string.m"
                                MR_Integer mercury__string__V_55_55 = (mercury__string__MaxCol_5 - mercury__string__SepLen_3);
#line 4762 "string.m"
                                MR_Word mercury__string__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4762 "string.m"
                                {
#line 4762 "string.m"
                                  mercury__string__RevPieces_29 = mercury__string__break_up_string_reverse_3_f_0(mercury__string__Word_15, mercury__string__V_55_55, mercury__string__V_56_56);
                                }
#line 4765 "string.m"
                                if ((mercury__string__RevPieces_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4766 "string.m"
                                  {
#line 4767 "string.m"
                                    {
#line 4767 "string.m"
                                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.word_wrap_loop\'/7", (MR_String) "no pieces");
#line 4767 "string.m"
                                      return;
                                    }
#line 4766 "string.m"
                                  }
#line 4765 "string.m"
                                else
#line 4764 "string.m"
                                  {
#line 4764 "string.m"
                                    mercury__string__LastPiece_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 0)));
#line 4764 "string.m"
                                    mercury__string__Rest_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 1)));
#line 4764 "string.m"
                                  }
#line 4769 "string.m"
                                {
#line 4769 "string.m"
                                  mercury__string__NewWords_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4769 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 0) = ((MR_Box) (mercury__string__LastPiece_30));
#line 4769 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 1) = ((MR_Box) (mercury__string__Words_16));
#line 4769 "string.m"
                                }
#line 4770 "string.m"
                                mercury__string__NewCol_24 = (MR_Integer) 1;
#line 10857 "string.c"
                                mercury__string__TypeCtorInfo_69_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4771 "string.m"
                                {
#line 4771 "string.m"
                                  mercury__string__RestWithSep_32 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(mercury__string__WordSep_2, mercury__string__Rest_31);
                                }
#line 48 "list.opt"
                                {
#line 48 "list.opt"
                                  mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_69_69, mercury__string__RestWithSep_32, mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6, &mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36);
                                }
#line 4762 "string.m"
                              }
#line 4773 "string.m"
                            else
#line 4774 "string.m"
                              {
#line 4774 "string.m"
                                mercury__string__NewWords_23 = mercury__string__HeadVar__1_1;
#line 4775 "string.m"
                                mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4776 "string.m"
                                {
#line 4776 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4776 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4776 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4776 "string.m"
                                }
#line 4774 "string.m"
                              }
#line 4773 "string.m"
                          }
#line 4758 "string.m"
                      }
#line 4744 "string.m"
                  }
#line 4736 "string.m"
              }
#line 4779 "string.m"
            /* direct tailcall eliminated */
#line 4779 "string.m"
            {
#line 4779 "string.m"
              MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__NewWords_23;
#line 4779 "string.m"
              MR_Integer mercury__string__CurCol__tmp_copy_4 = mercury__string__NewCol_24;
#line 4779 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0__tmp_copy_6 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

#line 4779 "string.m"
              mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0__tmp_copy_6;
#line 4779 "string.m"
              mercury__string__CurCol_4 = mercury__string__CurCol__tmp_copy_4;
#line 4779 "string.m"
              mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 4779 "string.m"
            }
#line 4779 "string.m"
            continue;
#line 4710 "string.m"
          }
#line 4708 "string.m"
      }
#line 4708 "string.m"
      break;
#line 4708 "string.m"
    }
#line 4705 "string.m"
}

#line 4651 "string.m"
void MR_CALL 
mercury__string__replace_all_loop_7_p_0(
#line 4651 "string.m"
  MR_String mercury__string__Str_8,
#line 4651 "string.m"
  MR_String mercury__string__Pat_9,
#line 4651 "string.m"
  MR_String mercury__string__Subst_10,
#line 4651 "string.m"
  MR_Integer mercury__string__PatLength_11,
#line 4651 "string.m"
  MR_Integer mercury__string__BeginAt_12,
#line 4651 "string.m"
  MR_Word mercury__string__RevChunks0_13,
#line 4651 "string.m"
  MR_Word * mercury__string__RevChunks_14)
#line 4651 "string.m"
{
#line 4661 "string.m"
  while (MR_TRUE)
#line 4661 "string.m"
    {
#line 4661 "string.m"
      /* tailcall optimized into a loop */
#line 4661 "string.m"
      {
#line 4661 "string.m"
        MR_bool mercury__string__succeeded;
#line 4661 "string.m"
        MR_Integer mercury__string__Index_15;

#line 3191 "string.m"
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
#line 3191 "string.m"
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
#line 10992 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_15  = Index;
#line 3191 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4661 "string.m"
        if (mercury__string__succeeded)
#line 4657 "string.m"
          {
#line 4657 "string.m"
            MR_String mercury__string__Initial_16;
#line 4657 "string.m"
            MR_Integer mercury__string__Start_17;
#line 4657 "string.m"
            MR_Word mercury__string__V_19_19;
#line 4657 "string.m"
            MR_Word mercury__string__V_20_20;

#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11037 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_16  = SubString;
#line 4289 "string.m"
}
#line 4658 "string.m"
            mercury__string__Start_17 = (mercury__string__Index_15 + mercury__string__PatLength_11);
#line 4660 "string.m"
            {
#line 4660 "string.m"
              mercury__string__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4660 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_20_20, 0) = ((MR_Box) (mercury__string__Initial_16));
#line 4660 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_20_20, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
#line 4660 "string.m"
            }
#line 4660 "string.m"
            {
#line 4660 "string.m"
              mercury__string__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4660 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_19_19, 0) = ((MR_Box) (mercury__string__Subst_10));
#line 4660 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_19_19, 1) = ((MR_Box) (mercury__string__V_20_20));
#line 4660 "string.m"
            }
#line 4659 "string.m"
            /* direct tailcall eliminated */
#line 4659 "string.m"
            {
#line 4659 "string.m"
              MR_Integer mercury__string__BeginAt__tmp_copy_12 = mercury__string__Start_17;
#line 4659 "string.m"
              MR_Word mercury__string__RevChunks0__tmp_copy_13 = mercury__string__V_19_19;

#line 4659 "string.m"
              mercury__string__RevChunks0_13 = mercury__string__RevChunks0__tmp_copy_13;
#line 4659 "string.m"
              mercury__string__BeginAt_12 = mercury__string__BeginAt__tmp_copy_12;
#line 4659 "string.m"
            }
#line 4659 "string.m"
            continue;
#line 4657 "string.m"
          }
#line 4661 "string.m"
        else
#line 4662 "string.m"
          {
#line 4662 "string.m"
            MR_String mercury__string__EndString_18;
#line 4662 "string.m"
            MR_Integer mercury__string__V_21_21;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 11107 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_21_21  = Length;
#line 2589 "string.m"
}
#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11136 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndString_18  = SubString;
#line 4289 "string.m"
}
#line 4663 "string.m"
            {
#line 4663 "string.m"
              MR_Word base;
#line 4663 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4663 "string.m"
              *mercury__string__RevChunks_14 = base;
#line 4663 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__EndString_18));
#line 4663 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
#line 4663 "string.m"
            }
#line 4662 "string.m"
          }
#line 4661 "string.m"
      }
#line 4661 "string.m"
      break;
#line 4661 "string.m"
    }
#line 4651 "string.m"
}

#line 4568 "string.m"
void MR_CALL 
mercury__string__char_list_to_lower_2_p_0(
#line 4568 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4568 "string.m"
  MR_Word * mercury__string__HeadVar__2_2)
#line 4568 "string.m"
{
#line 4570 "string.m"
  {
#line 4570 "string.m"
    MR_bool mercury__string__succeeded;

#line 4570 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4570 "string.m"
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4570 "string.m"
    else
#line 4571 "string.m"
      {
#line 4571 "string.m"
        MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4571 "string.m"
        MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4571 "string.m"
        MR_Char mercury__string__Y_5;
#line 4571 "string.m"
        MR_Word mercury__string__Ys_6;
#line 64 "char.opt"
        MR_Char mercury__string__LowerChar_5_9;

#line 61 "char.opt"
        {
#line 61 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_1(&mercury__string__LowerChar_5_9, mercury__string__X_3);
        }
#line 64 "char.opt"
        if (mercury__string__succeeded)
#line 63 "char.opt"
          mercury__string__Y_5 = mercury__string__LowerChar_5_9;
#line 64 "char.opt"
        else
#line 65 "char.opt"
          mercury__string__Y_5 = mercury__string__X_3;
#line 4573 "string.m"
        {
#line 4573 "string.m"
          mercury__string__char_list_to_lower_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
        }
#line 4571 "string.m"
        {
#line 4571 "string.m"
          MR_Word base;
#line 4571 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4571 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4571 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
#line 4571 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
#line 4571 "string.m"
        }
#line 4571 "string.m"
      }
#line 4570 "string.m"
  }
#line 4568 "string.m"
}

#line 4553 "string.m"
void MR_CALL 
mercury__string__char_list_to_upper_2_p_0(
#line 4553 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4553 "string.m"
  MR_Word * mercury__string__HeadVar__2_2)
#line 4553 "string.m"
{
#line 4555 "string.m"
  {
#line 4555 "string.m"
    MR_bool mercury__string__succeeded;

#line 4555 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4555 "string.m"
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4555 "string.m"
    else
#line 4556 "string.m"
      {
#line 4556 "string.m"
        MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4556 "string.m"
        MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4556 "string.m"
        MR_Char mercury__string__Y_5;
#line 4556 "string.m"
        MR_Word mercury__string__Ys_6;
#line 54 "char.opt"
        MR_Char mercury__string__UpperChar_5_9;

#line 51 "char.opt"
        {
#line 51 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_0(mercury__string__X_3, &mercury__string__UpperChar_5_9);
        }
#line 54 "char.opt"
        if (mercury__string__succeeded)
#line 53 "char.opt"
          mercury__string__Y_5 = mercury__string__UpperChar_5_9;
#line 54 "char.opt"
        else
#line 55 "char.opt"
          mercury__string__Y_5 = mercury__string__X_3;
#line 4558 "string.m"
        {
#line 4558 "string.m"
          mercury__string__char_list_to_upper_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
        }
#line 4556 "string.m"
        {
#line 4556 "string.m"
          MR_Word base;
#line 4556 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4556 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4556 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
#line 4556 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
#line 4556 "string.m"
        }
#line 4556 "string.m"
      }
#line 4555 "string.m"
  }
#line 4553 "string.m"
}

#line 4476 "string.m"
void MR_CALL 
mercury__string__suffix_2_ioii_4_p_0(
#line 4476 "string.m"
  MR_String mercury__string__String_5,
#line 4476 "string.m"
  MR_String * mercury__string__Suffix_6,
#line 4476 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4476 "string.m"
  MR_Integer mercury__string__Len_8,
#line 4476 "string.m"
  MR_Cont mercury__string__cont,
#line 4476 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4476 "string.m"
{
#line 4480 "string.m"
  while (MR_TRUE)
#line 4480 "string.m"
    {
#line 4480 "string.m"
      /* tailcall optimized into a loop */
#line 4480 "string.m"
      {
#line 4480 "string.m"
        MR_bool mercury__string__succeeded;

#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11362 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Suffix_6  = SubString;
#line 4289 "string.m"
}
#line 4285 "string.m"
        {
#line 4285 "string.m"
          mercury__string__cont(mercury__string__cont_env_ptr);
        }
#line 4482 "string.m"
        {
#line 4482 "string.m"
          MR_Integer mercury__string__Prev_9;
#line 2218 "string.m"
          MR_Char mercury__string__V_10_10;

#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 11409 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Prev_9  = PrevIndex;
	 mercury__string__V_10_10  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4482 "string.m"
          if (mercury__string__succeeded)
#line 4483 "string.m"
            {
#line 4483 "string.m"
              /* direct tailcall eliminated */
#line 4483 "string.m"
              {
#line 4483 "string.m"
                MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Prev_9;

#line 4483 "string.m"
                mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4483 "string.m"
              }
#line 4483 "string.m"
              continue;
#line 4483 "string.m"
            }
#line 4482 "string.m"
        }
#line 4480 "string.m"
      }
#line 4480 "string.m"
      break;
#line 4480 "string.m"
    }
#line 4476 "string.m"
}

#line 4464 "string.m"
MR_bool MR_CALL 
mercury__string__suffix_2_iiii_5_p_0(
#line 4464 "string.m"
  MR_String mercury__string__String_6,
#line 4464 "string.m"
  MR_String mercury__string__Suffix_7,
#line 4464 "string.m"
  MR_Integer mercury__string__I_8,
#line 4464 "string.m"
  MR_Integer mercury__string__Offset_9,
#line 4464 "string.m"
  MR_Integer mercury__string__Len_10)
#line 4464 "string.m"
{
#line 4472 "string.m"
  while (MR_TRUE)
#line 4472 "string.m"
    {
#line 4472 "string.m"
      /* tailcall optimized into a loop */
#line 4472 "string.m"
      {
#line 4472 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_8 < mercury__string__Len_10);

#line 4472 "string.m"
        if (mercury__string__succeeded)
#line 4469 "string.m"
          {
#line 4469 "string.m"
            MR_Integer mercury__string__C_11;
#line 4469 "string.m"
            MR_Integer mercury__string__V_12_12 = (mercury__string__I_8 + mercury__string__Offset_9);
#line 4469 "string.m"
            MR_Integer mercury__string__V_13_13;
#line 4469 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 4469 "string.m"
            MR_Integer mercury__string__V_15_15;

#line 2349 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__V_12_12 ;
		{
#line 2349 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 11507 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_11  = Code;
#line 2349 "string.m"
}
#line 2349 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Suffix_7 ;
	Index =  mercury__string__I_8 ;
		{
#line 2349 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 11530 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_15_15  = Code;
#line 2349 "string.m"
}
#line 4470 "string.m"
            mercury__string__succeeded = (mercury__string__C_11 == mercury__string__V_15_15);
#line 4469 "string.m"
            if (mercury__string__succeeded)
#line 4469 "string.m"
              {
#line 4471 "string.m"
                mercury__string__V_14_14 = (MR_Integer) 1;
#line 4471 "string.m"
                mercury__string__V_13_13 = (mercury__string__I_8 + mercury__string__V_14_14);
#line 4471 "string.m"
                /* direct tailcall eliminated */
#line 4471 "string.m"
                {
#line 4471 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_8 = mercury__string__V_13_13;

#line 4471 "string.m"
                  mercury__string__I_8 = mercury__string__I__tmp_copy_8;
#line 4471 "string.m"
                }
#line 4471 "string.m"
                continue;
#line 4469 "string.m"
              }
#line 4469 "string.m"
          }
#line 4472 "string.m"
        else
#line 4473 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4472 "string.m"
        return mercury__string__succeeded;
#line 4472 "string.m"
      }
#line 4472 "string.m"
      break;
#line 4472 "string.m"
    }
#line 4464 "string.m"
}

#line 4443 "string.m"
void MR_CALL 
mercury__string__prefix_2_ioi_3_p_0(
#line 4443 "string.m"
  MR_String mercury__string__String_4,
#line 4443 "string.m"
  MR_String * mercury__string__Prefix_5,
#line 4443 "string.m"
  MR_Integer mercury__string__Cur_6,
#line 4443 "string.m"
  MR_Cont mercury__string__cont,
#line 4443 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4443 "string.m"
{
#line 4447 "string.m"
  while (MR_TRUE)
#line 4447 "string.m"
    {
#line 4447 "string.m"
      /* tailcall optimized into a loop */
#line 4447 "string.m"
      {
#line 4447 "string.m"
        MR_bool mercury__string__succeeded;

#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11627 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Prefix_5  = SubString;
#line 4289 "string.m"
}
#line 4447 "string.m"
        {
#line 4447 "string.m"
          mercury__string__cont(mercury__string__cont_env_ptr);
        }
#line 4449 "string.m"
        {
#line 4449 "string.m"
          MR_Integer mercury__string__Next_7;
#line 2129 "string.m"
          MR_Char mercury__string__V_8_8;

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 11671 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__V_8_8  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4449 "string.m"
          if (mercury__string__succeeded)
#line 4450 "string.m"
            {
#line 4450 "string.m"
              /* direct tailcall eliminated */
#line 4450 "string.m"
              {
#line 4450 "string.m"
                MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 4450 "string.m"
                mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 4450 "string.m"
              }
#line 4450 "string.m"
              continue;
#line 4450 "string.m"
            }
#line 4449 "string.m"
        }
#line 4447 "string.m"
      }
#line 4447 "string.m"
      break;
#line 4447 "string.m"
    }
#line 4443 "string.m"
}

#line 4432 "string.m"
MR_bool MR_CALL 
mercury__string__prefix_2_iii_3_p_0(
#line 4432 "string.m"
  MR_String mercury__string__String_4,
#line 4432 "string.m"
  MR_String mercury__string__Prefix_5,
#line 4432 "string.m"
  MR_Integer mercury__string__I_6)
#line 4432 "string.m"
{
#line 4439 "string.m"
  while (MR_TRUE)
#line 4439 "string.m"
    {
#line 4439 "string.m"
      /* tailcall optimized into a loop */
#line 4439 "string.m"
      {
#line 4439 "string.m"
        MR_bool mercury__string__succeeded = ((MR_Integer) 0 <= mercury__string__I_6);

#line 4439 "string.m"
        if (mercury__string__succeeded)
#line 4436 "string.m"
          {
#line 4436 "string.m"
            MR_Integer mercury__string__C_7;
#line 4436 "string.m"
            MR_Integer mercury__string__V_9_9;
#line 4436 "string.m"
            MR_Integer mercury__string__V_10_10;
#line 4436 "string.m"
            MR_Integer mercury__string__V_11_11;

#line 2349 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__I_6 ;
		{
#line 2349 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 11763 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_7  = Code;
#line 2349 "string.m"
}
#line 2349 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Prefix_5 ;
	Index =  mercury__string__I_6 ;
		{
#line 2349 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 11786 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Code;
#line 2349 "string.m"
}
#line 4437 "string.m"
            mercury__string__succeeded = (mercury__string__C_7 == mercury__string__V_11_11);
#line 4436 "string.m"
            if (mercury__string__succeeded)
#line 4436 "string.m"
              {
#line 4438 "string.m"
                mercury__string__V_10_10 = (MR_Integer) 1;
#line 4438 "string.m"
                mercury__string__V_9_9 = (mercury__string__I_6 - mercury__string__V_10_10);
#line 4438 "string.m"
                /* direct tailcall eliminated */
#line 4438 "string.m"
                {
#line 4438 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__V_9_9;

#line 4438 "string.m"
                  mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 4438 "string.m"
                }
#line 4438 "string.m"
                continue;
#line 4436 "string.m"
              }
#line 4436 "string.m"
          }
#line 4439 "string.m"
        else
#line 4440 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4439 "string.m"
        return mercury__string__succeeded;
#line 4439 "string.m"
      }
#line 4439 "string.m"
      break;
#line 4439 "string.m"
    }
#line 4432 "string.m"
}

#line 4404 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_string_loop_4_f_0(
#line 4404 "string.m"
  MR_Integer mercury__string__StartAt_6,
#line 4404 "string.m"
  MR_Integer mercury__string__NeedleLen_7,
#line 4404 "string.m"
  MR_String mercury__string__Needle_8,
#line 4404 "string.m"
  MR_String mercury__string__Total_9)
#line 4404 "string.m"
{
#line 4412 "string.m"
  {
#line 4412 "string.m"
    MR_bool mercury__string__succeeded;
#line 4412 "string.m"
    MR_Word mercury__string__Out_10;
#line 4412 "string.m"
    MR_Integer mercury__string__NeedlePos_11;

#line 3191 "string.m"
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
#line 3191 "string.m"
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
#line 11886 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__NeedlePos_11  = Index;
#line 3191 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4412 "string.m"
    if (mercury__string__succeeded)
#line 4408 "string.m"
      {
#line 4408 "string.m"
        MR_String mercury__string__BeforeNeedle_12;
#line 4408 "string.m"
        MR_Word mercury__string__Tail_13;
#line 4408 "string.m"
        MR_Integer mercury__string__V_16_16;

#line 4133 "string.m"
        {
#line 4133 "string.m"
          mercury__string__between_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, mercury__string__NeedlePos_11, &mercury__string__BeforeNeedle_12);
        }
#line 4409 "string.m"
        mercury__string__V_16_16 = (mercury__string__NeedlePos_11 + mercury__string__NeedleLen_7);
#line 4409 "string.m"
        {
#line 4409 "string.m"
          mercury__string__Tail_13 = mercury__string__split_at_string_loop_4_f_0(mercury__string__V_16_16, mercury__string__NeedleLen_7, mercury__string__Needle_8, mercury__string__Total_9);
        }
#line 4411 "string.m"
        {
#line 4411 "string.m"
          mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4411 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__BeforeNeedle_12));
#line 4411 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__Tail_13));
#line 4411 "string.m"
        }
#line 4408 "string.m"
      }
#line 4412 "string.m"
    else
#line 4413 "string.m"
      {
#line 4413 "string.m"
        MR_String mercury__string__Last_15;
#line 4413 "string.m"
        MR_Word mercury__string__V_17_17;
#line 4413 "string.m"
        MR_String mercury__string___Skip_14;

#line 4413 "string.m"
        {
#line 4413 "string.m"
          mercury__string__split_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, &mercury__string___Skip_14, &mercury__string__Last_15);
        }
#line 4414 "string.m"
        mercury__string__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4414 "string.m"
        {
#line 4414 "string.m"
          mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4414 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__Last_15));
#line 4414 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__V_17_17));
#line 4414 "string.m"
        }
#line 4413 "string.m"
      }
#line 4412 "string.m"
    return mercury__string__Out_10;
#line 4412 "string.m"
  }
#line 4404 "string.m"
}

#line 4370 "string.m"
void MR_CALL 
mercury__string__split_at_separator_loop_6_p_0(
#line 4370 "string.m"
  MR_Word mercury__string__DelimP_7,
#line 4370 "string.m"
  MR_String mercury__string__Str_8,
#line 4370 "string.m"
  MR_Integer mercury__string__I_9,
#line 4370 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4370 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4370 "string.m"
  MR_Word * mercury__string__Acc_12)
#line 4370 "string.m"
{
#line 4390 "string.m"
  while (MR_TRUE)
#line 4390 "string.m"
    {
#line 4390 "string.m"
      /* tailcall optimized into a loop */
#line 4390 "string.m"
      {
#line 4390 "string.m"
        MR_bool mercury__string__succeeded;
#line 4390 "string.m"
        MR_Integer mercury__string__J_13;
#line 4390 "string.m"
        MR_Char mercury__string__C_14;

#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 12028 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_13  = PrevIndex;
	 mercury__string__C_14  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4390 "string.m"
        if (mercury__string__succeeded)
#line 4386 "string.m"
          {
#line 4381 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__DelimP_7, (MR_Integer) 1)));

#line 4381 "string.m"
            {
#line 4381 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__DelimP_7), ((MR_Box) (MR_Word) (mercury__string__C_14)));
            }
#line 4386 "string.m"
            if (mercury__string__succeeded)
#line 4383 "string.m"
              {
#line 4383 "string.m"
                MR_String mercury__string__Seg_16;
#line 4383 "string.m"
                MR_Word mercury__string__V_18_18;

#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 12082 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_16  = SubString;
#line 4289 "string.m"
}
#line 4385 "string.m"
                {
#line 4385 "string.m"
                  mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4385 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Seg_16));
#line 4385 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4385 "string.m"
                }
#line 4385 "string.m"
                /* direct tailcall eliminated */
#line 4385 "string.m"
                {
#line 4385 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;
#line 4385 "string.m"
                  MR_Integer mercury__string__SegEnd__tmp_copy_10 = mercury__string__J_13;
#line 4385 "string.m"
                  MR_Word mercury__string__Acc0__tmp_copy_11 = mercury__string__V_18_18;

#line 4385 "string.m"
                  mercury__string__Acc0_11 = mercury__string__Acc0__tmp_copy_11;
#line 4385 "string.m"
                  mercury__string__SegEnd_10 = mercury__string__SegEnd__tmp_copy_10;
#line 4385 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4385 "string.m"
                }
#line 4385 "string.m"
                continue;
#line 4383 "string.m"
              }
#line 4386 "string.m"
            else
#line 4388 "string.m"
              {
#line 4388 "string.m"
                /* direct tailcall eliminated */
#line 4388 "string.m"
                {
#line 4388 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;

#line 4388 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4388 "string.m"
                }
#line 4388 "string.m"
                continue;
#line 4388 "string.m"
              }
#line 4386 "string.m"
          }
#line 4390 "string.m"
        else
#line 4392 "string.m"
          {
#line 4392 "string.m"
            MR_String mercury__string__Seg_20;

#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 12172 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_20  = SubString;
#line 4289 "string.m"
}
#line 4393 "string.m"
            {
#line 4393 "string.m"
              MR_Word base;
#line 4393 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4393 "string.m"
              *mercury__string__Acc_12 = base;
#line 4393 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Seg_20));
#line 4393 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4393 "string.m"
            }
#line 4392 "string.m"
          }
#line 4390 "string.m"
      }
#line 4390 "string.m"
      break;
#line 4390 "string.m"
    }
#line 4370 "string.m"
}

#line 4351 "string.m"
void MR_CALL 
mercury__string__next_boundary_4_p_0(
#line 4351 "string.m"
  MR_Word mercury__string__P_5,
#line 4351 "string.m"
  MR_String mercury__string__String_6,
#line 4351 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4351 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4351 "string.m"
{
#line 4360 "string.m"
  while (MR_TRUE)
#line 4360 "string.m"
    {
#line 4360 "string.m"
      /* tailcall optimized into a loop */
#line 4360 "string.m"
      {
#line 4360 "string.m"
        MR_bool mercury__string__succeeded;
#line 4360 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4356 "string.m"
        MR_Char mercury__string__Char_10;
#line 4357 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 12259 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4356 "string.m"
        if (mercury__string__succeeded)
#line 4356 "string.m"
          {
#line 4357 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 4357 "string.m"
            {
#line 4357 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 4356 "string.m"
          }
#line 4360 "string.m"
        if (mercury__string__succeeded)
#line 4359 "string.m"
          {
#line 4359 "string.m"
            /* direct tailcall eliminated */
#line 4359 "string.m"
            {
#line 4359 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4359 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4359 "string.m"
            }
#line 4359 "string.m"
            continue;
#line 4359 "string.m"
          }
#line 4360 "string.m"
        else
#line 4361 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4360 "string.m"
      }
#line 4360 "string.m"
      break;
#line 4360 "string.m"
    }
#line 4351 "string.m"
}

#line 4331 "string.m"
void MR_CALL 
mercury__string__words_loop_4_p_0(
#line 4331 "string.m"
  MR_Word mercury__string__SepP_5,
#line 4331 "string.m"
  MR_String mercury__string__String_6,
#line 4331 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4331 "string.m"
  MR_Word * mercury__string__Words_8)
#line 4331 "string.m"
{
#line 4334 "string.m"
  {
#line 4334 "string.m"
    MR_bool mercury__string__succeeded;
#line 4334 "string.m"
    MR_Integer mercury__string__WordEnd_9;

#line 4335 "string.m"
    {
#line 4335 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__WordStart_7, &mercury__string__WordEnd_9);
    }
#line 4336 "string.m"
    mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__WordStart_7);
#line 4338 "string.m"
    if (mercury__string__succeeded)
#line 4337 "string.m"
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4338 "string.m"
    else
#line 4339 "string.m"
      {
#line 4339 "string.m"
        MR_String mercury__string__Word_10;
#line 4339 "string.m"
        MR_Integer mercury__string__NextWordStart_11;

#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 12377 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Word_10  = SubString;
#line 4289 "string.m"
}
#line 4340 "string.m"
        {
#line 4340 "string.m"
          mercury__string__next_boundary_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__WordEnd_9, &mercury__string__NextWordStart_11);
        }
#line 4341 "string.m"
        mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__NextWordStart_11);
#line 4343 "string.m"
        if (mercury__string__succeeded)
#line 4342 "string.m"
          {
#line 4342 "string.m"
            MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4342 "string.m"
            {
#line 4342 "string.m"
              MR_Word base;
#line 4342 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4342 "string.m"
              *mercury__string__Words_8 = base;
#line 4342 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4342 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__V_14_14));
#line 4342 "string.m"
            }
#line 4342 "string.m"
          }
#line 4343 "string.m"
        else
#line 4344 "string.m"
          {
#line 4344 "string.m"
            MR_Word mercury__string__Words0_12;

#line 4344 "string.m"
            {
#line 4344 "string.m"
              mercury__string__words_loop_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__NextWordStart_11, &mercury__string__Words0_12);
            }
#line 4345 "string.m"
            {
#line 4345 "string.m"
              MR_Word base;
#line 4345 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4345 "string.m"
              *mercury__string__Words_8 = base;
#line 4345 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4345 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Words0_12));
#line 4345 "string.m"
            }
#line 4344 "string.m"
          }
#line 4339 "string.m"
      }
#line 4334 "string.m"
  }
#line 4331 "string.m"
}

#line 4247 "string.m"
void MR_CALL 
mercury__string__convert_endpoints_4_p_0(
#line 4247 "string.m"
  MR_Integer mercury__string__Start_5,
#line 4247 "string.m"
  MR_Integer mercury__string__Count_6,
#line 4247 "string.m"
  MR_Integer * mercury__string__ClampStart_7,
#line 4247 "string.m"
  MR_Integer * mercury__string__ClampEnd_8)
#line 4247 "string.m"
{
#line 4249 "string.m"
  {
#line 4249 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_5);

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      *mercury__string__ClampStart_7 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      *mercury__string__ClampStart_7 = mercury__string__Start_5;
#line 4251 "string.m"
    mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
#line 4253 "string.m"
    if (mercury__string__succeeded)
#line 4252 "string.m"
      *mercury__string__ClampEnd_8 = *mercury__string__ClampStart_7;
#line 4253 "string.m"
    else
#line 4257 "string.m"
      {
#line 4255 "string.m"
        MR_Integer mercury__string__V_11_11;
#line 4255 "string.m"
        MR_Integer mercury__string__V_12_12;

#line 105 "int.opt"
{
#define MR_PROC_LABEL mercury__string__convert_endpoints_4_p_0

	MR_Integer Max;

		{
#line 105 "int.opt"

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

#line 12511 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_12_12  = Max;
#line 105 "int.opt"
}
#line 4255 "string.m"
        mercury__string__V_11_11 = (mercury__string__V_12_12 - mercury__string__Count_6);
#line 4255 "string.m"
        mercury__string__succeeded = (*mercury__string__ClampStart_7 > mercury__string__V_11_11);
#line 4257 "string.m"
        if (mercury__string__succeeded)
#line 105 "int.opt"
          {
#line 105 "int.opt"
{
#define MR_PROC_LABEL mercury__string__convert_endpoints_4_p_0

	MR_Integer Max;

		{
#line 105 "int.opt"

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

#line 12547 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__ClampEnd_8  = Max;
#line 105 "int.opt"
}
#line 105 "int.opt"
          }
#line 4257 "string.m"
        else
#line 4258 "string.m"
          *mercury__string__ClampEnd_8 = (*mercury__string__ClampStart_7 + mercury__string__Count_6);
#line 4257 "string.m"
      }
#line 4249 "string.m"
  }
#line 4247 "string.m"
}

#line 4224 "string.m"
MR_Word MR_CALL 
mercury__string__between_loop_3_f_0(
#line 4224 "string.m"
  MR_Integer mercury__string__I_5,
#line 4224 "string.m"
  MR_Integer mercury__string__End_6,
#line 4224 "string.m"
  MR_String mercury__string__Str_7)
#line 4224 "string.m"
{
#line 4234 "string.m"
  {
#line 4234 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__I_5 < mercury__string__End_6);
#line 4234 "string.m"
    MR_Word mercury__string__Chars_8;
#line 4234 "string.m"
    MR_Integer mercury__string__J_9;
#line 4234 "string.m"
    MR_Char mercury__string__C_10;

#line 4228 "string.m"
    if (mercury__string__succeeded)
#line 4228 "string.m"
      {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 12618 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__C_10  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4228 "string.m"
        if (mercury__string__succeeded)
#line 4230 "string.m"
          mercury__string__succeeded = (mercury__string__J_9 <= mercury__string__End_6);
#line 4228 "string.m"
      }
#line 4234 "string.m"
    if (mercury__string__succeeded)
#line 4232 "string.m"
      {
#line 4232 "string.m"
        MR_Word mercury__string__Cs_11;

#line 4232 "string.m"
        {
#line 4232 "string.m"
          mercury__string__Cs_11 = mercury__string__between_loop_3_f_0(mercury__string__J_9, mercury__string__End_6, mercury__string__Str_7);
        }
#line 4233 "string.m"
        {
#line 4233 "string.m"
          mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4233 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 0) = ((MR_Box) (MR_Word) (mercury__string__C_10));
#line 4233 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 1) = ((MR_Box) (mercury__string__Cs_11));
#line 4233 "string.m"
        }
#line 4232 "string.m"
      }
#line 4234 "string.m"
    else
#line 4235 "string.m"
      mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4234 "string.m"
    return mercury__string__Chars_8;
#line 4234 "string.m"
  }
#line 4224 "string.m"
}

#line 3675 "string.m"
MR_String MR_CALL 
mercury__string__join_list_loop_2_f_0(
#line 3675 "string.m"
  MR_String mercury__string__Sep_1,
#line 3675 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 3675 "string.m"
{
#line 3677 "string.m"
  {
#line 3677 "string.m"
    MR_bool mercury__string__succeeded;
#line 3677 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 3677 "string.m"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3677 "string.m"
      mercury__string__HeadVar__3_3 = (MR_String) "";
#line 3677 "string.m"
    else
#line 3678 "string.m"
      {
#line 3678 "string.m"
        MR_String mercury__string__H_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 3678 "string.m"
        MR_Word mercury__string__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 3678 "string.m"
        MR_String mercury__string__V_8_8;
#line 3678 "string.m"
        MR_String mercury__string__V_9_9;

#line 3678 "string.m"
        {
#line 3678 "string.m"
          mercury__string__V_9_9 = mercury__string__join_list_loop_2_f_0(mercury__string__Sep_1, mercury__string__T_7);
        }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__H_6 ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 12728 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3399 "string.m"
}
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Sep_1 ;
	S2 =  mercury__string__V_8_8 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 12755 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
#line 3399 "string.m"
}
#line 3678 "string.m"
      }
#line 3677 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3677 "string.m"
  }
#line 3675 "string.m"
}

#line 3494 "string.m"
static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
#line 3494 "string.m"
  void * mercury__string__env_ptr_arg)
#line 3494 "string.m"
{
#line 3494 "string.m"
  {
#line 3494 "string.m"
    struct mercury__string__mercury_append_3_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__mercury_append_3_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 3494 "string.m"
    {
#line 1505 "string.m"
      MR_String mercury__string__Str0_27;
#line 1505 "string.m"
      MR_String mercury__string__Str0_37;

#line 1503 "string.m"
      {
#line 1503 "string.m"
        (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__XList_7, &mercury__string__Str0_27);
      }
#line 1505 "string.m"
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
#line 1504 "string.m"
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__X_4) = mercury__string__Str0_27;
#line 1505 "string.m"
      else
#line 1506 "string.m"
        {
#line 1506 "string.m"
          {
#line 1506 "string.m"
            mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1506 "string.m"
            return;
          }
#line 1506 "string.m"
        }
#line 1503 "string.m"
      {
#line 1503 "string.m"
        (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__YList_8, &mercury__string__Str0_37);
      }
#line 1505 "string.m"
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
#line 1504 "string.m"
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__Y_5) = mercury__string__Str0_37;
#line 1505 "string.m"
      else
#line 1506 "string.m"
        {
#line 1506 "string.m"
          {
#line 1506 "string.m"
            mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1506 "string.m"
            return;
          }
#line 1506 "string.m"
        }
#line 1505 "string.m"
      {
#line 1505 "string.m"
        ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont)((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr);
#line 1505 "string.m"
        return;
      }
#line 3494 "string.m"
    }
#line 3494 "string.m"
  }
#line 3494 "string.m"
}

#line 3492 "string.m"
void MR_CALL 
mercury__string__mercury_append_3_p_3(
#line 3492 "string.m"
  MR_String * mercury__string__X_4,
#line 3492 "string.m"
  MR_String * mercury__string__Y_5,
#line 3492 "string.m"
  MR_String mercury__string__Z_6,
#line 3492 "string.m"
  MR_Cont mercury__string__cont,
#line 3492 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3492 "string.m"
{
#line 3492 "string.m"
  {
#line 3492 "string.m"
    struct mercury__string__mercury_append_3_p_3_env_0_s mercury__string__env;

#line 3492 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__X_4 = mercury__string__X_4;
#line 3492 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__Y_5 = mercury__string__Y_5;
#line 3492 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont = mercury__string__cont;
#line 3492 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 3494 "string.m"
    {
#line 3494 "string.m"
      MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3494 "string.m"
      MR_Word mercury__string__ZList_9;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_3

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1427 "string.m"
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
#line 12907 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1427 "string.m"
}
#line 12914 "string.c"
      mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3498 "string.m"
      {
#line 3498 "string.m"
        mercury__list__append_3_p_4(mercury__string__TypeCtorInfo_10_10, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__XList_7, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__YList_8, mercury__string__ZList_9, mercury__string__mercury_append_3_p_3_1, &mercury__string__env);
      }
#line 3494 "string.m"
    }
#line 3492 "string.m"
  }
#line 3492 "string.m"
}

#line 3491 "string.m"
void MR_CALL 
mercury__string__mercury_append_3_p_2(
#line 3491 "string.m"
  MR_String mercury__string__X_4,
#line 3491 "string.m"
  MR_String mercury__string__Y_5,
#line 3491 "string.m"
  MR_String * mercury__string__Z_6)
#line 3491 "string.m"
{
#line 3494 "string.m"
  {
#line 3494 "string.m"
    MR_bool mercury__string__succeeded;
#line 3494 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3494 "string.m"
    MR_Word mercury__string__XList_7;
#line 3494 "string.m"
    MR_Word mercury__string__YList_8;
#line 3494 "string.m"
    MR_Word mercury__string__ZList_9;
#line 1505 "string.m"
    MR_String mercury__string__Str0_35;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1427 "string.m"
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
#line 12978 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1427 "string.m"
}
#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
#line 1427 "string.m"
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
#line 13009 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
#line 1427 "string.m"
}
#line 13016 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3498 "string.m"
    {
#line 3498 "string.m"
      mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, &mercury__string__ZList_9);
    }
#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ZList_9, &mercury__string__Str0_35);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      *mercury__string__Z_6 = mercury__string__Str0_35;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1506 "string.m"
          return;
        }
#line 1506 "string.m"
      }
#line 3494 "string.m"
  }
#line 3491 "string.m"
}

#line 3490 "string.m"
MR_bool MR_CALL 
mercury__string__mercury_append_3_p_1(
#line 3490 "string.m"
  MR_String mercury__string__X_4,
#line 3490 "string.m"
  MR_String * mercury__string__Y_5,
#line 3490 "string.m"
  MR_String mercury__string__Z_6)
#line 3490 "string.m"
{
#line 3494 "string.m"
  {
#line 3494 "string.m"
    MR_bool mercury__string__succeeded;
#line 3494 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3494 "string.m"
    MR_Word mercury__string__XList_7;
#line 3494 "string.m"
    MR_Word mercury__string__YList_8;
#line 3494 "string.m"
    MR_Word mercury__string__ZList_9;
#line 1505 "string.m"
    MR_String mercury__string__Str0_35;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1427 "string.m"
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
#line 13100 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1427 "string.m"
}
#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1427 "string.m"
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
#line 13131 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1427 "string.m"
}
#line 13138 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3498 "string.m"
    {
#line 3498 "string.m"
      mercury__string__succeeded = mercury__list__append_3_p_3(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, &mercury__string__YList_8, mercury__string__ZList_9);
    }
#line 3494 "string.m"
    if (mercury__string__succeeded)
#line 3494 "string.m"
      {
#line 1503 "string.m"
        {
#line 1503 "string.m"
          mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__YList_8, &mercury__string__Str0_35);
        }
#line 1505 "string.m"
        if (mercury__string__succeeded)
#line 1504 "string.m"
          *mercury__string__Y_5 = mercury__string__Str0_35;
#line 1505 "string.m"
        else
#line 1506 "string.m"
          {
#line 1506 "string.m"
            {
#line 1506 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
            }
#line 1506 "string.m"
          }
#line 1505 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 3494 "string.m"
      }
#line 3494 "string.m"
    return mercury__string__succeeded;
#line 3494 "string.m"
  }
#line 3490 "string.m"
}

#line 3489 "string.m"
MR_bool MR_CALL 
mercury__string__mercury_append_3_p_0(
#line 3489 "string.m"
  MR_String mercury__string__X_4,
#line 3489 "string.m"
  MR_String mercury__string__Y_5,
#line 3489 "string.m"
  MR_String mercury__string__Z_6)
#line 3489 "string.m"
{
#line 3494 "string.m"
  {
#line 3494 "string.m"
    MR_bool mercury__string__succeeded;
#line 3494 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3494 "string.m"
    MR_Word mercury__string__XList_7;
#line 3494 "string.m"
    MR_Word mercury__string__YList_8;
#line 3494 "string.m"
    MR_Word mercury__string__ZList_9;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1427 "string.m"
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
#line 13228 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1427 "string.m"
}
#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
#line 1427 "string.m"
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
#line 13259 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
#line 1427 "string.m"
}
#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1427 "string.m"
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
#line 13290 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1427 "string.m"
}
#line 13297 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3498 "string.m"
    {
#line 3498 "string.m"
      return mercury__string__succeeded = mercury__list__append_3_p_2(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, mercury__string__ZList_9);
    }
#line 3494 "string.m"
    return mercury__string__succeeded;
#line 3494 "string.m"
  }
#line 3489 "string.m"
}

#line 3450 "string.m"
void MR_CALL 
mercury__string__append_ooi_3_5_p_0(
#line 3450 "string.m"
  MR_Integer mercury__string__S1Len_1,
#line 3450 "string.m"
  MR_Integer mercury__string__S3Len_2,
#line 3450 "string.m"
  MR_String * mercury__string__S1_3,
#line 3450 "string.m"
  MR_String * mercury__string__S2_4,
#line 3450 "string.m"
  MR_String mercury__string__S3_5)
#line 3450 "string.m"
{
#line 3453 "string.m"
  {
#line 3453 "string.m"
    MR_bool mercury__string__succeeded;

#line 3457 "string.m"
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
#line 3457 "string.m"
{
    MR_allocate_aligned_string_msg(S1, S1Len, MR_ALLOC_ID);
    MR_memcpy(S1, S3, S1Len);
    S1[S1Len] = '\0';
    MR_allocate_aligned_string_msg(S2, S3Len - S1Len, MR_ALLOC_ID);
    strcpy(S2, S3 + S1Len);
}
#line 13353 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S1_3  = S1;
	 *mercury__string__S2_4  = S2;
#line 3457 "string.m"
}
#line 3453 "string.m"
  }
#line 3450 "string.m"
}

#line 3435 "string.m"
void MR_CALL 
mercury__string__append_ooi_2_5_p_0(
#line 3435 "string.m"
  MR_Integer mercury__string__NextS1Len_6,
#line 3435 "string.m"
  MR_Integer mercury__string__S3Len_7,
#line 3435 "string.m"
  MR_String * mercury__string__S1_8,
#line 3435 "string.m"
  MR_String * mercury__string__S2_9,
#line 3435 "string.m"
  MR_String mercury__string__S3_10,
#line 3435 "string.m"
  MR_Cont mercury__string__cont,
#line 3435 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3435 "string.m"
{
#line 3441 "string.m"
  while (MR_TRUE)
#line 3441 "string.m"
    {
#line 3441 "string.m"
      /* tailcall optimized into a loop */
#line 3441 "string.m"
      {
#line 3441 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__NextS1Len_6 == mercury__string__S3Len_7);

#line 3441 "string.m"
        if (mercury__string__succeeded)
#line 3440 "string.m"
          {
#line 3440 "string.m"
            {
#line 3440 "string.m"
              mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
            }
#line 3440 "string.m"
            {
#line 3440 "string.m"
              mercury__string__cont(mercury__string__cont_env_ptr);
#line 3440 "string.m"
              return;
            }
#line 3440 "string.m"
          }
#line 3441 "string.m"
        else
#line 3444 "string.m"
          {
#line 3443 "string.m"
            {
#line 3443 "string.m"
              mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
            }
#line 3443 "string.m"
            {
#line 3443 "string.m"
              mercury__string__cont(mercury__string__cont_env_ptr);
            }
#line 3445 "string.m"
            {
#line 3445 "string.m"
              MR_Integer mercury__string__AdvS1Len_11;
#line 2129 "string.m"
              MR_Char mercury__string__V_12_12;

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13460 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__AdvS1Len_11  = NextIndex;
	 mercury__string__V_12_12  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3445 "string.m"
              if (mercury__string__succeeded)
#line 3446 "string.m"
                {
#line 3446 "string.m"
                  /* direct tailcall eliminated */
#line 3446 "string.m"
                  {
#line 3446 "string.m"
                    MR_Integer mercury__string__NextS1Len__tmp_copy_6 = mercury__string__AdvS1Len_11;

#line 3446 "string.m"
                    mercury__string__NextS1Len_6 = mercury__string__NextS1Len__tmp_copy_6;
#line 3446 "string.m"
                  }
#line 3446 "string.m"
                  continue;
#line 3446 "string.m"
                }
#line 3445 "string.m"
            }
#line 3444 "string.m"
          }
#line 3441 "string.m"
      }
#line 3441 "string.m"
      break;
#line 3441 "string.m"
    }
#line 3435 "string.m"
}

#line 3429 "string.m"
void MR_CALL 
mercury__string__append_ooi_3_p_0(
#line 3429 "string.m"
  MR_String * mercury__string__S1_4,
#line 3429 "string.m"
  MR_String * mercury__string__S2_5,
#line 3429 "string.m"
  MR_String mercury__string__S3_6,
#line 3429 "string.m"
  MR_Cont mercury__string__cont,
#line 3429 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3429 "string.m"
{
#line 3431 "string.m"
  {
#line 3431 "string.m"
    MR_bool mercury__string__succeeded;
#line 3431 "string.m"
    MR_Integer mercury__string__S3Len_7;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ooi_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 13538 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_7  = Length;
#line 2589 "string.m"
}
#line 3433 "string.m"
    {
#line 3433 "string.m"
      mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_7, mercury__string__S1_4, mercury__string__S2_5, mercury__string__S3_6, mercury__string__cont, mercury__string__cont_env_ptr);
#line 3433 "string.m"
      return;
    }
#line 3431 "string.m"
  }
#line 3429 "string.m"
}

#line 3393 "string.m"
void MR_CALL 
mercury__string__append_iio_3_p_0(
#line 3393 "string.m"
  MR_String mercury__string__S1_1,
#line 3393 "string.m"
  MR_String mercury__string__S2_2,
#line 3393 "string.m"
  MR_String * mercury__string__S3_3)
#line 3393 "string.m"
{
#line 3395 "string.m"
  {
#line 3395 "string.m"
    MR_bool mercury__string__succeeded;

#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_iio_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 13593 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
#line 3399 "string.m"
}
#line 3395 "string.m"
  }
#line 3393 "string.m"
}

#line 3341 "string.m"
MR_bool MR_CALL 
mercury__string__append_ioi_3_p_0(
#line 3341 "string.m"
  MR_String mercury__string__S1_1,
#line 3341 "string.m"
  MR_String * mercury__string__S2_2,
#line 3341 "string.m"
  MR_String mercury__string__S3_3)
#line 3341 "string.m"
{
#line 3343 "string.m"
  {
#line 3343 "string.m"
    MR_bool mercury__string__succeeded;

#line 3347 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ioi_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3347 "string.m"
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
#line 13651 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
#line 3347 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3343 "string.m"
    return mercury__string__succeeded;
#line 3343 "string.m"
  }
#line 3341 "string.m"
}

#line 3298 "string.m"
MR_bool MR_CALL 
mercury__string__append_iii_3_p_0(
#line 3298 "string.m"
  MR_String mercury__string__S1_1,
#line 3298 "string.m"
  MR_String mercury__string__S2_2,
#line 3298 "string.m"
  MR_String mercury__string__S3_3)
#line 3298 "string.m"
{
#line 3300 "string.m"
  {
#line 3300 "string.m"
    MR_bool mercury__string__succeeded;

#line 3304 "string.m"
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
#line 3304 "string.m"
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}
#line 13705 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3304 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3300 "string.m"
    return mercury__string__succeeded;
#line 3300 "string.m"
  }
#line 3298 "string.m"
}

#line 3258 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_start_loop_6_p_0(
#line 3258 "string.m"
  MR_String mercury__string__String_7,
#line 3258 "string.m"
  MR_String mercury__string__SubString_8,
#line 3258 "string.m"
  MR_Integer mercury__string__I_9,
#line 3258 "string.m"
  MR_Integer mercury__string__Len_10,
#line 3258 "string.m"
  MR_Integer mercury__string__SubLen_11,
#line 3258 "string.m"
  MR_Integer * mercury__string__Index_12)
#line 3258 "string.m"
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
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__Len_10);
#line 3269 "string.m"
        MR_Integer mercury__string__V_13_13;
#line 3269 "string.m"
        MR_String mercury__string__V_17_17;

#line 3261 "string.m"
        if (mercury__string__succeeded)
#line 3261 "string.m"
          {
#line 3269 "string.m"
            mercury__string__V_13_13 = (mercury__string__I_9 + mercury__string__SubLen_11);
#line 4133 "string.m"
            {
#line 4133 "string.m"
              mercury__string__between_4_p_0(mercury__string__String_7, mercury__string__I_9, mercury__string__V_13_13, &mercury__string__V_17_17);
            }
#line 3269 "string.m"
            mercury__string__succeeded = (strcmp(mercury__string__SubString_8, mercury__string__V_17_17) == 0);
#line 3272 "string.m"
            if (mercury__string__succeeded)
#line 3271 "string.m"
              {
#line 3271 "string.m"
                *mercury__string__Index_12 = mercury__string__I_9;
#line 3271 "string.m"
                mercury__string__succeeded = MR_TRUE;
#line 3271 "string.m"
              }
#line 3272 "string.m"
            else
#line 3273 "string.m"
              {
#line 3273 "string.m"
                MR_Integer mercury__string__V_14_14 = (mercury__string__I_9 + (MR_Integer) 1);

#line 3273 "string.m"
                /* direct tailcall eliminated */
#line 3273 "string.m"
                {
#line 3273 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__V_14_14;

#line 3273 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 3273 "string.m"
                }
#line 3273 "string.m"
                continue;
#line 3273 "string.m"
              }
#line 3261 "string.m"
          }
#line 3261 "string.m"
        return mercury__string__succeeded;
#line 3261 "string.m"
      }
#line 3261 "string.m"
      break;
#line 3261 "string.m"
    }
#line 3258 "string.m"
}

#line 3168 "string.m"
void MR_CALL 
mercury__string__suffix_length_loop_4_p_0(
#line 3168 "string.m"
  MR_Word mercury__string__P_5,
#line 3168 "string.m"
  MR_String mercury__string__S_6,
#line 3168 "string.m"
  MR_Integer mercury__string__I_7,
#line 3168 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 3168 "string.m"
{
#line 3177 "string.m"
  while (MR_TRUE)
#line 3177 "string.m"
    {
#line 3177 "string.m"
      /* tailcall optimized into a loop */
#line 3177 "string.m"
      {
#line 3177 "string.m"
        MR_bool mercury__string__succeeded;
#line 3177 "string.m"
        MR_Integer mercury__string__J_9;
#line 3173 "string.m"
        MR_Char mercury__string__Char_10;
#line 3174 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 13869 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3173 "string.m"
        if (mercury__string__succeeded)
#line 3173 "string.m"
          {
#line 3174 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 3174 "string.m"
            {
#line 3174 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 3173 "string.m"
          }
#line 3177 "string.m"
        if (mercury__string__succeeded)
#line 3176 "string.m"
          {
#line 3176 "string.m"
            /* direct tailcall eliminated */
#line 3176 "string.m"
            {
#line 3176 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 3176 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 3176 "string.m"
            }
#line 3176 "string.m"
            continue;
#line 3176 "string.m"
          }
#line 3177 "string.m"
        else
#line 3178 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 3177 "string.m"
      }
#line 3177 "string.m"
      break;
#line 3177 "string.m"
    }
#line 3168 "string.m"
}

#line 3151 "string.m"
void MR_CALL 
mercury__string__prefix_length_loop_4_p_0(
#line 3151 "string.m"
  MR_Word mercury__string__P_5,
#line 3151 "string.m"
  MR_String mercury__string__S_6,
#line 3151 "string.m"
  MR_Integer mercury__string__I_7,
#line 3151 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 3151 "string.m"
{
#line 3160 "string.m"
  while (MR_TRUE)
#line 3160 "string.m"
    {
#line 3160 "string.m"
      /* tailcall optimized into a loop */
#line 3160 "string.m"
      {
#line 3160 "string.m"
        MR_bool mercury__string__succeeded;
#line 3160 "string.m"
        MR_Integer mercury__string__J_9;
#line 3156 "string.m"
        MR_Char mercury__string__Char_10;
#line 3157 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13980 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3156 "string.m"
        if (mercury__string__succeeded)
#line 3156 "string.m"
          {
#line 3157 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 3157 "string.m"
            {
#line 3157 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 3156 "string.m"
          }
#line 3160 "string.m"
        if (mercury__string__succeeded)
#line 3159 "string.m"
          {
#line 3159 "string.m"
            /* direct tailcall eliminated */
#line 3159 "string.m"
            {
#line 3159 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 3159 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 3159 "string.m"
            }
#line 3159 "string.m"
            continue;
#line 3159 "string.m"
          }
#line 3160 "string.m"
        else
#line 3161 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 3160 "string.m"
      }
#line 3160 "string.m"
      break;
#line 3160 "string.m"
    }
#line 3151 "string.m"
}

#line 3133 "string.m"
MR_bool MR_CALL 
mercury__string__contains_char_3_p_0(
#line 3133 "string.m"
  MR_String mercury__string__Str_4,
#line 3133 "string.m"
  MR_Char mercury__string__Char_5,
#line 3133 "string.m"
  MR_Integer mercury__string__I_6)
#line 3133 "string.m"
{
#line 3142 "string.m"
  while (MR_TRUE)
#line 3142 "string.m"
    {
#line 3142 "string.m"
      /* tailcall optimized into a loop */
#line 3142 "string.m"
      {
#line 3142 "string.m"
        MR_bool mercury__string__succeeded;
#line 3142 "string.m"
        MR_Integer mercury__string__J_7;
#line 3142 "string.m"
        MR_Char mercury__string__IndexChar_8;

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14087 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_7  = NextIndex;
	 mercury__string__IndexChar_8  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3142 "string.m"
        if (mercury__string__succeeded)
#line 3142 "string.m"
          {
#line 3137 "string.m"
            mercury__string__succeeded = (mercury__string__IndexChar_8 == mercury__string__Char_5);
#line 3139 "string.m"
            if (mercury__string__succeeded)
#line 3138 "string.m"
              mercury__string__succeeded = MR_TRUE;
#line 3139 "string.m"
            else
#line 3140 "string.m"
              {
#line 3140 "string.m"
                /* direct tailcall eliminated */
#line 3140 "string.m"
                {
#line 3140 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__J_7;

#line 3140 "string.m"
                  mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 3140 "string.m"
                }
#line 3140 "string.m"
                continue;
#line 3140 "string.m"
              }
#line 3142 "string.m"
          }
#line 3142 "string.m"
        return mercury__string__succeeded;
#line 3142 "string.m"
      }
#line 3142 "string.m"
      break;
#line 3142 "string.m"
    }
#line 3133 "string.m"
}

#line 3079 "string.m"
MR_bool MR_CALL 
mercury__string__all_match_loop_3_p_0(
#line 3079 "string.m"
  MR_Word mercury__string__P_4,
#line 3079 "string.m"
  MR_String mercury__string__String_5,
#line 3079 "string.m"
  MR_Integer mercury__string__Cur_6)
#line 3079 "string.m"
{
#line 3086 "string.m"
  while (MR_TRUE)
#line 3086 "string.m"
    {
#line 3086 "string.m"
      /* tailcall optimized into a loop */
#line 3086 "string.m"
      {
#line 3086 "string.m"
        MR_bool mercury__string__succeeded;
#line 3086 "string.m"
        MR_Integer mercury__string__Next_7;
#line 3086 "string.m"
        MR_Char mercury__string__Char_8;

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14191 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3086 "string.m"
        if (mercury__string__succeeded)
#line 3084 "string.m"
          {
#line 3084 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_4, (MR_Integer) 1)));

#line 3084 "string.m"
            {
#line 3084 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_4), ((MR_Box) (MR_Word) (mercury__string__Char_8)));
            }
#line 3084 "string.m"
            if (mercury__string__succeeded)
#line 3085 "string.m"
              {
#line 3085 "string.m"
                /* direct tailcall eliminated */
#line 3085 "string.m"
                {
#line 3085 "string.m"
                  MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 3085 "string.m"
                  mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 3085 "string.m"
                }
#line 3085 "string.m"
                continue;
#line 3085 "string.m"
              }
#line 3084 "string.m"
          }
#line 3086 "string.m"
        else
#line 3087 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 3086 "string.m"
        return mercury__string__succeeded;
#line 3086 "string.m"
      }
#line 3086 "string.m"
      break;
#line 3086 "string.m"
    }
#line 3079 "string.m"
}

#line 2912 "string.m"
void MR_CALL 
mercury__string__hash6_loop_5_p_0(
#line 2912 "string.m"
  MR_String mercury__string__String_6,
#line 2912 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2912 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2912 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2912 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2912 "string.m"
{
#line 2921 "string.m"
  while (MR_TRUE)
#line 2921 "string.m"
    {
#line 2921 "string.m"
      /* tailcall optimized into a loop */
#line 2921 "string.m"
      {
#line 2921 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2921 "string.m"
        if (mercury__string__succeeded)
#line 2917 "string.m"
          {
#line 2917 "string.m"
            MR_Integer mercury__string__C_10;
#line 2917 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2917 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 2917 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
#line 2917 "string.m"
            MR_Integer mercury__string__V_17_17;
#line 2917 "string.m"
            MR_Integer mercury__string__V_18_18;
#line 2917 "string.m"
            MR_Integer mercury__string__V_22_22;
#line 2917 "string.m"
            MR_Integer mercury__string__V_23_23;
#line 2917 "string.m"
            MR_Integer mercury__string__V_28_28;
#line 2917 "string.m"
            MR_Integer mercury__string__V_29_29;

#line 2349 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash6_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2349 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 14317 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2349 "string.m"
}
#line 2918 "string.m"
            mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 49);
#line 2868 "string.m"
            mercury__string__V_23_23 = ((MR_Integer) 1 << (MR_Integer) 30);
#line 2868 "string.m"
            mercury__string__V_22_22 = (mercury__string__V_23_23 - (MR_Integer) 1);
#line 2868 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__V_14_14 & mercury__string__V_22_22);
#line 2919 "string.m"
            mercury__string__V_17_17 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2868 "string.m"
            mercury__string__V_29_29 = ((MR_Integer) 1 << (MR_Integer) 30);
#line 2868 "string.m"
            mercury__string__V_28_28 = (mercury__string__V_29_29 - (MR_Integer) 1);
#line 2868 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__V_17_17 & mercury__string__V_28_28);
#line 2920 "string.m"
            mercury__string__V_18_18 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2920 "string.m"
            /* direct tailcall eliminated */
#line 2920 "string.m"
            {
#line 2920 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_18_18;
#line 2920 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

#line 2920 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2920 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2920 "string.m"
            }
#line 2920 "string.m"
            continue;
#line 2917 "string.m"
          }
#line 2921 "string.m"
        else
#line 2921 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2921 "string.m"
      }
#line 2921 "string.m"
      break;
#line 2921 "string.m"
    }
#line 2912 "string.m"
}

#line 2894 "string.m"
void MR_CALL 
mercury__string__hash5_loop_5_p_0(
#line 2894 "string.m"
  MR_String mercury__string__String_6,
#line 2894 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2894 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2894 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2894 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2894 "string.m"
{
#line 2903 "string.m"
  while (MR_TRUE)
#line 2903 "string.m"
    {
#line 2903 "string.m"
      /* tailcall optimized into a loop */
#line 2903 "string.m"
      {
#line 2903 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2903 "string.m"
        if (mercury__string__succeeded)
#line 2899 "string.m"
          {
#line 2899 "string.m"
            MR_Integer mercury__string__C_10;
#line 2899 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2899 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 2899 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
#line 2899 "string.m"
            MR_Integer mercury__string__V_17_17;
#line 2899 "string.m"
            MR_Integer mercury__string__V_18_18;
#line 2899 "string.m"
            MR_Integer mercury__string__V_22_22;
#line 2899 "string.m"
            MR_Integer mercury__string__V_23_23;
#line 2899 "string.m"
            MR_Integer mercury__string__V_28_28;
#line 2899 "string.m"
            MR_Integer mercury__string__V_29_29;

#line 2349 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash5_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2349 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 14441 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2349 "string.m"
}
#line 2900 "string.m"
            mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 37);
#line 2868 "string.m"
            mercury__string__V_23_23 = ((MR_Integer) 1 << (MR_Integer) 30);
#line 2868 "string.m"
            mercury__string__V_22_22 = (mercury__string__V_23_23 - (MR_Integer) 1);
#line 2868 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__V_14_14 & mercury__string__V_22_22);
#line 2901 "string.m"
            mercury__string__V_17_17 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2868 "string.m"
            mercury__string__V_29_29 = ((MR_Integer) 1 << (MR_Integer) 30);
#line 2868 "string.m"
            mercury__string__V_28_28 = (mercury__string__V_29_29 - (MR_Integer) 1);
#line 2868 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__V_17_17 & mercury__string__V_28_28);
#line 2902 "string.m"
            mercury__string__V_18_18 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2902 "string.m"
            /* direct tailcall eliminated */
#line 2902 "string.m"
            {
#line 2902 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_18_18;
#line 2902 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

#line 2902 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2902 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2902 "string.m"
            }
#line 2902 "string.m"
            continue;
#line 2899 "string.m"
          }
#line 2903 "string.m"
        else
#line 2903 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2903 "string.m"
      }
#line 2903 "string.m"
      break;
#line 2903 "string.m"
    }
#line 2894 "string.m"
}

#line 2875 "string.m"
void MR_CALL 
mercury__string__hash4_loop_5_p_0(
#line 2875 "string.m"
  MR_String mercury__string__String_6,
#line 2875 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2875 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2875 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2875 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2875 "string.m"
{
#line 2885 "string.m"
  {
#line 2885 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2885 "string.m"
    if (mercury__string__succeeded)
#line 2880 "string.m"
      {
#line 2880 "string.m"
        MR_Integer mercury__string__C_10;
#line 2880 "string.m"
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2880 "string.m"
        MR_Integer mercury__string__V_14_14;
#line 2880 "string.m"
        MR_Integer mercury__string__V_15_15;
#line 2880 "string.m"
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_17_17;
#line 2880 "string.m"
        MR_Integer mercury__string__V_18_18;
#line 2880 "string.m"
        MR_Integer mercury__string__V_22_22;
#line 2880 "string.m"
        MR_Integer mercury__string__V_23_23;

#line 2349 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash4_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2349 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 14555 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2349 "string.m"
}
#line 2882 "string.m"
        mercury__string__V_15_15 = (mercury__string__STATE_VARIABLE_HashVal_0_11 << (MR_Integer) 5);
#line 2881 "string.m"
        mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 ^ mercury__string__V_15_15);
#line 2868 "string.m"
        mercury__string__V_23_23 = ((MR_Integer) 1 << (MR_Integer) 30);
#line 2868 "string.m"
        mercury__string__V_22_22 = (mercury__string__V_23_23 - (MR_Integer) 1);
#line 2868 "string.m"
        mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__V_14_14 & mercury__string__V_22_22);
#line 2883 "string.m"
        mercury__string__STATE_VARIABLE_HashVal_17_17 = (mercury__string__STATE_VARIABLE_HashVal_13_13 ^ mercury__string__C_10);
#line 2884 "string.m"
        mercury__string__V_18_18 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2884 "string.m"
        {
#line 2884 "string.m"
          mercury__string__hash_loop_5_p_0(mercury__string__String_6, mercury__string__V_18_18, mercury__string__Length_8, mercury__string__STATE_VARIABLE_HashVal_17_17, mercury__string__STATE_VARIABLE_HashVal_12);
#line 2884 "string.m"
          return;
        }
#line 2880 "string.m"
      }
#line 2885 "string.m"
    else
#line 2885 "string.m"
      *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2885 "string.m"
  }
#line 2875 "string.m"
}

#line 2866 "string.m"
MR_Integer MR_CALL 
mercury__string__keep_30_bits_1_f_0(
#line 2866 "string.m"
  MR_Integer mercury__string__N_3)
#line 2866 "string.m"
{
#line 2868 "string.m"
  {
#line 2868 "string.m"
    MR_bool mercury__string__succeeded;
#line 2868 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;
#line 2868 "string.m"
    MR_Integer mercury__string__V_4_4;
#line 2868 "string.m"
    MR_Integer mercury__string__V_5_5 = ((MR_Integer) 1 << (MR_Integer) 30);

#line 2868 "string.m"
    mercury__string__V_4_4 = (mercury__string__V_5_5 - (MR_Integer) 1);
#line 2868 "string.m"
    mercury__string__HeadVar__2_2 = (mercury__string__N_3 & mercury__string__V_4_4);
#line 2868 "string.m"
    return mercury__string__HeadVar__2_2;
#line 2868 "string.m"
  }
#line 2866 "string.m"
}

#line 2853 "string.m"
void MR_CALL 
mercury__string__hash3_loop_5_p_0(
#line 2853 "string.m"
  MR_String mercury__string__String_6,
#line 2853 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2853 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2853 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2853 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2853 "string.m"
{
#line 2862 "string.m"
  while (MR_TRUE)
#line 2862 "string.m"
    {
#line 2862 "string.m"
      /* tailcall optimized into a loop */
#line 2862 "string.m"
      {
#line 2862 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2862 "string.m"
        if (mercury__string__succeeded)
#line 2858 "string.m"
          {
#line 2858 "string.m"
            MR_Integer mercury__string__C_10;
#line 2858 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2858 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
#line 2858 "string.m"
            MR_Integer mercury__string__V_16_16;

#line 2349 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash3_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2349 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 14678 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2349 "string.m"
}
#line 2859 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 49);
#line 2860 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2861 "string.m"
            mercury__string__V_16_16 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2861 "string.m"
            /* direct tailcall eliminated */
#line 2861 "string.m"
            {
#line 2861 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_16_16;
#line 2861 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

#line 2861 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2861 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2861 "string.m"
            }
#line 2861 "string.m"
            continue;
#line 2858 "string.m"
          }
#line 2862 "string.m"
        else
#line 2862 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2862 "string.m"
      }
#line 2862 "string.m"
      break;
#line 2862 "string.m"
    }
#line 2853 "string.m"
}

#line 2835 "string.m"
void MR_CALL 
mercury__string__hash2_loop_5_p_0(
#line 2835 "string.m"
  MR_String mercury__string__String_6,
#line 2835 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2835 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2835 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2835 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2835 "string.m"
{
#line 2844 "string.m"
  while (MR_TRUE)
#line 2844 "string.m"
    {
#line 2844 "string.m"
      /* tailcall optimized into a loop */
#line 2844 "string.m"
      {
#line 2844 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2844 "string.m"
        if (mercury__string__succeeded)
#line 2840 "string.m"
          {
#line 2840 "string.m"
            MR_Integer mercury__string__C_10;
#line 2840 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2840 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
#line 2840 "string.m"
            MR_Integer mercury__string__V_16_16;

#line 2349 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash2_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2349 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 14778 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2349 "string.m"
}
#line 2841 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 37);
#line 2842 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2843 "string.m"
            mercury__string__V_16_16 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2843 "string.m"
            /* direct tailcall eliminated */
#line 2843 "string.m"
            {
#line 2843 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_16_16;
#line 2843 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

#line 2843 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2843 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2843 "string.m"
            }
#line 2843 "string.m"
            continue;
#line 2840 "string.m"
          }
#line 2844 "string.m"
        else
#line 2844 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2844 "string.m"
      }
#line 2844 "string.m"
      break;
#line 2844 "string.m"
    }
#line 2835 "string.m"
}

#line 2817 "string.m"
void MR_CALL 
mercury__string__hash_loop_5_p_0(
#line 2817 "string.m"
  MR_String mercury__string__String_6,
#line 2817 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2817 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2817 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2817 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2817 "string.m"
{
#line 2826 "string.m"
  while (MR_TRUE)
#line 2826 "string.m"
    {
#line 2826 "string.m"
      /* tailcall optimized into a loop */
#line 2826 "string.m"
      {
#line 2826 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2826 "string.m"
        if (mercury__string__succeeded)
#line 2822 "string.m"
          {
#line 2822 "string.m"
            MR_Integer mercury__string__C_10;
#line 2822 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2822 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 2822 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
#line 2822 "string.m"
            MR_Integer mercury__string__V_17_17;

#line 2349 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2349 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 14880 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2349 "string.m"
}
#line 2823 "string.m"
            mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 << (MR_Integer) 5);
#line 2823 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 ^ mercury__string__V_14_14);
#line 2824 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__STATE_VARIABLE_HashVal_13_13 ^ mercury__string__C_10);
#line 2825 "string.m"
            mercury__string__V_17_17 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2825 "string.m"
            /* direct tailcall eliminated */
#line 2825 "string.m"
            {
#line 2825 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_17_17;
#line 2825 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

#line 2825 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2825 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2825 "string.m"
            }
#line 2825 "string.m"
            continue;
#line 2822 "string.m"
          }
#line 2826 "string.m"
        else
#line 2826 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2826 "string.m"
      }
#line 2826 "string.m"
      break;
#line 2826 "string.m"
    }
#line 2817 "string.m"
}

#line 2787 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_loop_5_p_0(
#line 2787 "string.m"
  MR_String mercury__string__String_6,
#line 2787 "string.m"
  MR_Integer mercury__string__Offset_7,
#line 2787 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2787 "string.m"
  MR_Integer mercury__string__N_9,
#line 2787 "string.m"
  MR_Integer * mercury__string__Index_10)
#line 2787 "string.m"
{
#line 2790 "string.m"
  while (MR_TRUE)
#line 2790 "string.m"
    {
#line 2790 "string.m"
      /* tailcall optimized into a loop */
#line 2790 "string.m"
      {
#line 2790 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Offset_7 < mercury__string__Length_8);

#line 2790 "string.m"
        if (mercury__string__succeeded)
#line 2790 "string.m"
          {
#line 2792 "string.m"
            mercury__string__succeeded = (mercury__string__N_9 == (MR_Integer) 0);
#line 2794 "string.m"
            if (mercury__string__succeeded)
#line 2793 "string.m"
              {
#line 2793 "string.m"
                *mercury__string__Index_10 = mercury__string__Offset_7;
#line 2793 "string.m"
                mercury__string__succeeded = MR_TRUE;
#line 2793 "string.m"
              }
#line 2794 "string.m"
            else
#line 2795 "string.m"
              {
#line 2795 "string.m"
                MR_Integer mercury__string__NextOffset_11;
#line 2795 "string.m"
                MR_Integer mercury__string__V_13_13;
#line 2795 "string.m"
                MR_Integer mercury__string__V_14_14;
#line 2129 "string.m"
                MR_Char mercury__string__V_12_12;

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 15007 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__NextOffset_11  = NextIndex;
	 mercury__string__V_12_12  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2795 "string.m"
                if (mercury__string__succeeded)
#line 2795 "string.m"
                  {
#line 2796 "string.m"
                    mercury__string__V_14_14 = (MR_Integer) 1;
#line 2796 "string.m"
                    mercury__string__V_13_13 = (mercury__string__N_9 - mercury__string__V_14_14);
#line 2796 "string.m"
                    /* direct tailcall eliminated */
#line 2796 "string.m"
                    {
#line 2796 "string.m"
                      MR_Integer mercury__string__Offset__tmp_copy_7 = mercury__string__NextOffset_11;
#line 2796 "string.m"
                      MR_Integer mercury__string__N__tmp_copy_9 = mercury__string__V_13_13;

#line 2796 "string.m"
                      mercury__string__N_9 = mercury__string__N__tmp_copy_9;
#line 2796 "string.m"
                      mercury__string__Offset_7 = mercury__string__Offset__tmp_copy_7;
#line 2796 "string.m"
                    }
#line 2796 "string.m"
                    continue;
#line 2795 "string.m"
                  }
#line 2795 "string.m"
              }
#line 2790 "string.m"
          }
#line 2790 "string.m"
        return mercury__string__succeeded;
#line 2790 "string.m"
      }
#line 2790 "string.m"
      break;
#line 2790 "string.m"
    }
#line 2787 "string.m"
}

#line 2717 "string.m"
void MR_CALL 
mercury__string__count_utf8_code_units_2_3_p_0(
#line 2717 "string.m"
  MR_Char mercury__string__Char_4,
#line 2717 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Length_0_8,
#line 2717 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Length_9)
#line 2717 "string.m"
{
#line 2719 "string.m"
  {
#line 2719 "string.m"
    MR_bool mercury__string__succeeded;
#line 2719 "string.m"
    MR_Integer mercury__string__CharInt_6;

#line 32 "char.opt"
{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_2_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__Char_4 ;
		{
#line 32 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 15091 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__CharInt_6  = Int;
#line 32 "char.opt"
}
#line 2721 "string.m"
    mercury__string__succeeded = (mercury__string__CharInt_6 <= (MR_Integer) 127);
#line 2723 "string.m"
    if (mercury__string__succeeded)
#line 2722 "string.m"
      {
#line 2722 "string.m"
        *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + (MR_Integer) 1);
#line 2722 "string.m"
      }
#line 2723 "string.m"
    else
#line 2725 "string.m"
      {
#line 2725 "string.m"
        MR_Word mercury__string__UTF8_7;

#line 2723 "string.m"
        {
#line 2723 "string.m"
          mercury__string__succeeded = mercury__char__to_utf8_2_p_0(mercury__string__Char_4, &mercury__string__UTF8_7);
        }
#line 2725 "string.m"
        if (mercury__string__succeeded)
#line 2724 "string.m"
          {
#line 2724 "string.m"
            MR_Word mercury__string__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2724 "string.m"
            MR_Integer mercury__string__V_14_14;

#line 83 "list.opt"
            {
#line 83 "list.opt"
              mercury__list__length_2_3_p_0(mercury__string__TypeCtorInfo_17_17, mercury__string__UTF8_7, (MR_Integer) 0, &mercury__string__V_14_14);
            }
#line 2724 "string.m"
            *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + mercury__string__V_14_14);
#line 2724 "string.m"
          }
#line 2725 "string.m"
        else
#line 2726 "string.m"
          {
#line 2726 "string.m"
            {
#line 2726 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.count_utf8_code_units_2\'/3", (MR_String) "char.to_utf8 failed");
#line 2726 "string.m"
              return;
            }
#line 2726 "string.m"
          }
#line 2725 "string.m"
      }
#line 2719 "string.m"
  }
#line 2717 "string.m"
}

#line 2690 "string.m"
void MR_CALL 
mercury__string__count_codepoints_loop_4_p_0(
#line 2690 "string.m"
  MR_String mercury__string__String_5,
#line 2690 "string.m"
  MR_Integer mercury__string__I_6,
#line 2690 "string.m"
  MR_Integer mercury__string__Count0_7,
#line 2690 "string.m"
  MR_Integer * mercury__string__Count_8)
#line 2690 "string.m"
{
#line 2695 "string.m"
  while (MR_TRUE)
#line 2695 "string.m"
    {
#line 2695 "string.m"
      /* tailcall optimized into a loop */
#line 2695 "string.m"
      {
#line 2695 "string.m"
        MR_bool mercury__string__succeeded;
#line 2695 "string.m"
        MR_Integer mercury__string__J_9;
#line 2129 "string.m"
        MR_Char mercury__string__V_10_10;

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 15211 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__V_10_10  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2695 "string.m"
        if (mercury__string__succeeded)
#line 2694 "string.m"
          {
#line 2694 "string.m"
            MR_Integer mercury__string__V_11_11 = (mercury__string__Count0_7 + (MR_Integer) 1);

#line 2694 "string.m"
            /* direct tailcall eliminated */
#line 2694 "string.m"
            {
#line 2694 "string.m"
              MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__J_9;
#line 2694 "string.m"
              MR_Integer mercury__string__Count0__tmp_copy_7 = mercury__string__V_11_11;

#line 2694 "string.m"
              mercury__string__Count0_7 = mercury__string__Count0__tmp_copy_7;
#line 2694 "string.m"
              mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 2694 "string.m"
            }
#line 2694 "string.m"
            continue;
#line 2694 "string.m"
          }
#line 2695 "string.m"
        else
#line 2696 "string.m"
          *mercury__string__Count_8 = mercury__string__Count0_7;
#line 2695 "string.m"
      }
#line 2695 "string.m"
      break;
#line 2695 "string.m"
    }
#line 2690 "string.m"
}

#line 2509 "string.m"
void MR_CALL 
mercury__string__unsafe_set_char_non_null_4_p_0(
#line 2509 "string.m"
  MR_Char mercury__string__Ch_1,
#line 2509 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2509 "string.m"
  MR_String mercury__string__Str0_3,
#line 2509 "string.m"
  MR_String * mercury__string__Str_4)
#line 2509 "string.m"
{
#line 2514 "string.m"
  {
#line 2514 "string.m"
    MR_bool mercury__string__succeeded;

#line 2518 "string.m"
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
#line 2518 "string.m"

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

#line 15314 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = Str;
#line 2518 "string.m"
}
#line 2514 "string.m"
  }
#line 2509 "string.m"
}

#line 2385 "string.m"
MR_bool MR_CALL 
mercury__string__set_char_non_null_4_p_0(
#line 2385 "string.m"
  MR_Char mercury__string__Ch_1,
#line 2385 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2385 "string.m"
  MR_String mercury__string__Str0_3,
#line 2385 "string.m"
  MR_String * mercury__string__Str_4)
#line 2385 "string.m"
{
#line 2390 "string.m"
  {
#line 2390 "string.m"
    MR_bool mercury__string__succeeded;

#line 2394 "string.m"
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
#line 2394 "string.m"

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

#line 15387 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_4  = Str;
#line 2394 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2390 "string.m"
    return mercury__string__succeeded;
#line 2390 "string.m"
  }
#line 2385 "string.m"
}

#line 2317 "string.m"
MR_bool MR_CALL 
mercury__string__index_check_2_p_0(
#line 2317 "string.m"
  MR_Integer mercury__string__Index_1,
#line 2317 "string.m"
  MR_Integer mercury__string__Length_2)
#line 2317 "string.m"
{
#line 2319 "string.m"
  {
#line 2319 "string.m"
    MR_bool mercury__string__succeeded;

#line 2323 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_check_2_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_1 ;
	Length =  mercury__string__Length_2 ;
		{
#line 2323 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 15440 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2323 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2319 "string.m"
    return mercury__string__succeeded;
#line 2319 "string.m"
  }
#line 2317 "string.m"
}

#line 2063 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_index_2_3_p_0(
#line 2063 "string.m"
  MR_String mercury__string__Str_1,
#line 2063 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2063 "string.m"
  MR_Char * mercury__string__Ch_3)
#line 2063 "string.m"
{
#line 2065 "string.m"
  {
#line 2065 "string.m"
    MR_bool mercury__string__succeeded;

#line 2069 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 2069 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 15493 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Ch_3  = Ch;
#line 2069 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2065 "string.m"
    return mercury__string__succeeded;
#line 2065 "string.m"
  }
#line 2063 "string.m"
}

#line 1989 "string.m"
MR_bool MR_CALL 
mercury__string__decode_utf16_3_p_0(
#line 1989 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1989 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1989 "string.m"
  MR_Word * mercury__string__RevChars_3)
#line 1989 "string.m"
{
#line 1992 "string.m"
  while (MR_TRUE)
#line 1992 "string.m"
    {
#line 1992 "string.m"
      /* tailcall optimized into a loop */
#line 1992 "string.m"
      {
#line 1992 "string.m"
        MR_bool mercury__string__succeeded;

#line 1992 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1992 "string.m"
          {
#line 1992 "string.m"
            *mercury__string__RevChars_3 = mercury__string__HeadVar__2_2;
#line 1992 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 1992 "string.m"
          }
#line 1992 "string.m"
        else
#line 1993 "string.m"
          {
#line 1993 "string.m"
            MR_Integer mercury__string__A_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1993 "string.m"
            MR_Word mercury__string__FollowA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 1993 "string.m"
            MR_Integer mercury__string__CharInt_9;
#line 1993 "string.m"
            MR_Word mercury__string__Rest_10;
#line 1993 "string.m"
            MR_Char mercury__string__Char_12;
#line 1993 "string.m"
            MR_Word mercury__string__V_23_23;

#line 1994 "string.m"
            mercury__string__succeeded = (mercury__string__A_5 < (MR_Integer) 0);
#line 1996 "string.m"
            if (mercury__string__succeeded)
#line 1995 "string.m"
              mercury__string__succeeded = MR_FALSE;
#line 1996 "string.m"
            else
#line 1999 "string.m"
              {
#line 1996 "string.m"
                mercury__string__succeeded = (mercury__string__A_5 < (MR_Integer) 55296);
#line 1999 "string.m"
                if (mercury__string__succeeded)
#line 1997 "string.m"
                  {
#line 1997 "string.m"
                    mercury__string__CharInt_9 = mercury__string__A_5;
#line 1998 "string.m"
                    mercury__string__Rest_10 = mercury__string__FollowA_6;
#line 1997 "string.m"
                    mercury__string__succeeded = MR_TRUE;
#line 1997 "string.m"
                  }
#line 1999 "string.m"
                else
#line 2004 "string.m"
                  {
#line 1999 "string.m"
                    mercury__string__succeeded = (mercury__string__A_5 < (MR_Integer) 56320);
#line 2004 "string.m"
                    if (mercury__string__succeeded)
#line 2000 "string.m"
                      {
#line 2000 "string.m"
                        MR_Integer mercury__string__B_11;
#line 2000 "string.m"
                        MR_Integer mercury__string__V_16_16;
#line 2000 "string.m"
                        MR_Integer mercury__string__V_17_17;
#line 2000 "string.m"
                        MR_Integer mercury__string__V_18_18;
#line 2000 "string.m"
                        MR_Integer mercury__string__V_19_19;
#line 2000 "string.m"
                        MR_Integer mercury__string__V_20_20;
#line 2000 "string.m"
                        MR_Integer mercury__string__V_21_21;

#line 2000 "string.m"
                        mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__FollowA_6)) == (MR_mktag((MR_Integer) 1)));
#line 2000 "string.m"
                        if (mercury__string__succeeded)
#line 2000 "string.m"
                          {
#line 2000 "string.m"
                            mercury__string__B_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 0)));
#line 2000 "string.m"
                            mercury__string__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 1)));
#line 2001 "string.m"
                            mercury__string__V_16_16 = (MR_Integer) 56320;
#line 2001 "string.m"
                            mercury__string__succeeded = (mercury__string__B_11 >= mercury__string__V_16_16);
#line 2000 "string.m"
                            if (mercury__string__succeeded)
#line 2000 "string.m"
                              {
#line 2002 "string.m"
                                mercury__string__V_17_17 = (MR_Integer) 57343;
#line 2002 "string.m"
                                mercury__string__succeeded = (mercury__string__B_11 <= mercury__string__V_17_17);
#line 2000 "string.m"
                                if (mercury__string__succeeded)
#line 2000 "string.m"
                                  {
#line 2003 "string.m"
                                    mercury__string__V_20_20 = (MR_Integer) 10;
#line 2003 "string.m"
                                    {
#line 2003 "string.m"
                                      mercury__string__V_19_19 = mercury__int__f_60_60_2_f_0(mercury__string__A_5, mercury__string__V_20_20);
                                    }
#line 2003 "string.m"
                                    mercury__string__V_18_18 = (mercury__string__V_19_19 + mercury__string__B_11);
#line 2003 "string.m"
                                    mercury__string__V_21_21 = (MR_Integer) 56613888;
#line 2003 "string.m"
                                    mercury__string__CharInt_9 = (mercury__string__V_18_18 - mercury__string__V_21_21);
#line 2003 "string.m"
                                    mercury__string__succeeded = MR_TRUE;
#line 2000 "string.m"
                                  }
#line 2000 "string.m"
                              }
#line 2000 "string.m"
                          }
#line 2000 "string.m"
                      }
#line 2004 "string.m"
                    else
#line 2007 "string.m"
                      {
#line 2004 "string.m"
                        mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 65535);
#line 2007 "string.m"
                        if (mercury__string__succeeded)
#line 2007 "string.m"
                          {
#line 2005 "string.m"
                            mercury__string__CharInt_9 = mercury__string__A_5;
#line 2006 "string.m"
                            mercury__string__Rest_10 = mercury__string__FollowA_6;
#line 2006 "string.m"
                            mercury__string__succeeded = MR_TRUE;
#line 2007 "string.m"
                          }
#line 2007 "string.m"
                      }
#line 2004 "string.m"
                  }
#line 1999 "string.m"
              }
#line 1993 "string.m"
            if (mercury__string__succeeded)
#line 1993 "string.m"
              {
#line 25 "char.opt"
{
#define MR_PROC_LABEL mercury__string__decode_utf16_3_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__string__CharInt_9 ;
		{
#line 25 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 15700 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Char_12  = Character;
#line 25 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1993 "string.m"
                if (mercury__string__succeeded)
#line 1993 "string.m"
                  {
#line 2011 "string.m"
                    {
#line 2011 "string.m"
                      mercury__string__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2011 "string.m"
                      MR_hl_field(MR_mktag(1), mercury__string__V_23_23, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_12));
#line 2011 "string.m"
                      MR_hl_field(MR_mktag(1), mercury__string__V_23_23, 1) = ((MR_Box) (mercury__string__HeadVar__2_2));
#line 2011 "string.m"
                    }
#line 2011 "string.m"
                    /* direct tailcall eliminated */
#line 2011 "string.m"
                    {
#line 2011 "string.m"
                      MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__Rest_10;
#line 2011 "string.m"
                      MR_Word mercury__string__HeadVar__2__tmp_copy_2 = mercury__string__V_23_23;

#line 2011 "string.m"
                      mercury__string__HeadVar__2_2 = mercury__string__HeadVar__2__tmp_copy_2;
#line 2011 "string.m"
                      mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 2011 "string.m"
                    }
#line 2011 "string.m"
                    continue;
#line 1993 "string.m"
                  }
#line 1993 "string.m"
              }
#line 1993 "string.m"
          }
#line 1992 "string.m"
        return mercury__string__succeeded;
#line 1992 "string.m"
      }
#line 1992 "string.m"
      break;
#line 1992 "string.m"
    }
#line 1989 "string.m"
}

#line 1974 "string.m"
MR_bool MR_CALL 
mercury__string__utf8_is_trail_byte_1_p_0(
#line 1974 "string.m"
  MR_Integer mercury__string__C_2)
#line 1974 "string.m"
{
#line 1976 "string.m"
  {
#line 1976 "string.m"
    MR_bool mercury__string__succeeded;
#line 1976 "string.m"
    MR_Integer mercury__string__V_3_3 = (mercury__string__C_2 & (MR_Integer) 192);

#line 1977 "string.m"
    mercury__string__succeeded = (mercury__string__V_3_3 == (MR_Integer) 128);
#line 1976 "string.m"
    return mercury__string__succeeded;
#line 1976 "string.m"
  }
#line 1974 "string.m"
}

#line 1933 "string.m"
MR_bool MR_CALL 
mercury__string__decode_utf8_3_p_0(
#line 1933 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1933 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1933 "string.m"
  MR_Word * mercury__string__RevChars_3)
#line 1933 "string.m"
{
#line 1935 "string.m"
  while (MR_TRUE)
#line 1935 "string.m"
    {
#line 1935 "string.m"
      /* tailcall optimized into a loop */
#line 1935 "string.m"
      {
#line 1935 "string.m"
        MR_bool mercury__string__succeeded;

#line 1935 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1935 "string.m"
          {
#line 1935 "string.m"
            *mercury__string__RevChars_3 = mercury__string__HeadVar__2_2;
#line 1935 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 1935 "string.m"
          }
#line 1935 "string.m"
        else
#line 1936 "string.m"
          {
#line 1936 "string.m"
            MR_Integer mercury__string__A_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1936 "string.m"
            MR_Word mercury__string__FollowA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 1936 "string.m"
            MR_Integer mercury__string__CharInt_9;
#line 1936 "string.m"
            MR_Word mercury__string__Rest_10;
#line 1936 "string.m"
            MR_Char mercury__string__Char_14;
#line 1936 "string.m"
            MR_Word mercury__string__V_60_60;

#line 1937 "string.m"
            mercury__string__succeeded = (mercury__string__A_5 < (MR_Integer) 0);
#line 1939 "string.m"
            if (mercury__string__succeeded)
#line 1938 "string.m"
              mercury__string__succeeded = MR_FALSE;
#line 1939 "string.m"
            else
#line 1942 "string.m"
              {
#line 1939 "string.m"
                mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 127);
#line 1942 "string.m"
                if (mercury__string__succeeded)
#line 1940 "string.m"
                  {
#line 1940 "string.m"
                    mercury__string__CharInt_9 = mercury__string__A_5;
#line 1941 "string.m"
                    mercury__string__Rest_10 = mercury__string__FollowA_6;
#line 1940 "string.m"
                    mercury__string__succeeded = MR_TRUE;
#line 1940 "string.m"
                  }
#line 1942 "string.m"
                else
#line 1944 "string.m"
                  {
#line 1942 "string.m"
                    mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 193);
#line 1944 "string.m"
                    if (mercury__string__succeeded)
#line 1943 "string.m"
                      mercury__string__succeeded = MR_FALSE;
#line 1944 "string.m"
                    else
#line 1950 "string.m"
                      {
#line 1944 "string.m"
                        mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 223);
#line 1950 "string.m"
                        if (mercury__string__succeeded)
#line 1945 "string.m"
                          {
#line 1945 "string.m"
                            MR_Integer mercury__string__B_11;
#line 1945 "string.m"
                            MR_Integer mercury__string__V_19_19;
#line 1945 "string.m"
                            MR_Integer mercury__string__V_20_20;
#line 1945 "string.m"
                            MR_Integer mercury__string__V_21_21;
#line 1945 "string.m"
                            MR_Integer mercury__string__V_22_22;
#line 1945 "string.m"
                            MR_Integer mercury__string__V_23_23;
#line 1945 "string.m"
                            MR_Integer mercury__string__V_24_24;
#line 1945 "string.m"
                            MR_Integer mercury__string__V_25_25;
#line 1945 "string.m"
                            MR_Integer mercury__string__V_68_68;
#line 1945 "string.m"
                            MR_Integer mercury__string__V_69_69;

#line 1945 "string.m"
                            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__FollowA_6)) == (MR_mktag((MR_Integer) 1)));
#line 1945 "string.m"
                            if (mercury__string__succeeded)
#line 1945 "string.m"
                              {
#line 1945 "string.m"
                                mercury__string__B_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 0)));
#line 1945 "string.m"
                                mercury__string__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 1)));
#line 1977 "string.m"
                                mercury__string__V_69_69 = (MR_Integer) 192;
#line 1977 "string.m"
                                mercury__string__V_68_68 = (mercury__string__B_11 & mercury__string__V_69_69);
#line 1977 "string.m"
                                mercury__string__succeeded = (mercury__string__V_68_68 == (MR_Integer) 128);
#line 1945 "string.m"
                                if (mercury__string__succeeded)
#line 1945 "string.m"
                                  {
#line 1947 "string.m"
                                    mercury__string__V_21_21 = (MR_Integer) 31;
#line 1947 "string.m"
                                    mercury__string__V_20_20 = (mercury__string__A_5 & mercury__string__V_21_21);
#line 1947 "string.m"
                                    mercury__string__V_22_22 = (MR_Integer) 6;
#line 1947 "string.m"
                                    {
#line 1947 "string.m"
                                      mercury__string__V_19_19 = mercury__int__f_60_60_2_f_0(mercury__string__V_20_20, mercury__string__V_22_22);
                                    }
#line 1948 "string.m"
                                    mercury__string__V_24_24 = (MR_Integer) 63;
#line 1948 "string.m"
                                    mercury__string__V_23_23 = (mercury__string__B_11 & mercury__string__V_24_24);
#line 1948 "string.m"
                                    mercury__string__CharInt_9 = (mercury__string__V_19_19 | mercury__string__V_23_23);
#line 1949 "string.m"
                                    mercury__string__V_25_25 = (MR_Integer) 128;
#line 1949 "string.m"
                                    mercury__string__succeeded = (mercury__string__CharInt_9 >= mercury__string__V_25_25);
#line 1945 "string.m"
                                  }
#line 1945 "string.m"
                              }
#line 1945 "string.m"
                          }
#line 1950 "string.m"
                        else
#line 1958 "string.m"
                          {
#line 1950 "string.m"
                            mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 239);
#line 1958 "string.m"
                            if (mercury__string__succeeded)
#line 1951 "string.m"
                              {
#line 1951 "string.m"
                                MR_Integer mercury__string__C_12;
#line 1951 "string.m"
                                MR_Word mercury__string__V_27_27;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_28_28;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_29_29;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_30_30;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_31_31;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_32_32;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_33_33;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_34_34;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_35_35;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_36_36;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_37_37;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_38_38;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_39_39;
#line 1951 "string.m"
                                MR_Integer mercury__string__B_61;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_71_71;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_72_72;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_74_74;
#line 1951 "string.m"
                                MR_Integer mercury__string__V_75_75;

#line 1951 "string.m"
                                mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__FollowA_6)) == (MR_mktag((MR_Integer) 1)));
#line 1951 "string.m"
                                if (mercury__string__succeeded)
#line 1951 "string.m"
                                  {
#line 1951 "string.m"
                                    mercury__string__B_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 0)));
#line 1951 "string.m"
                                    mercury__string__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 1)));
#line 1951 "string.m"
                                    mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__V_27_27)) == (MR_mktag((MR_Integer) 1)));
#line 1951 "string.m"
                                    if (mercury__string__succeeded)
#line 1951 "string.m"
                                      {
#line 1951 "string.m"
                                        mercury__string__C_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__V_27_27, (MR_Integer) 0)));
#line 1951 "string.m"
                                        mercury__string__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_27_27, (MR_Integer) 1)));
#line 1977 "string.m"
                                        mercury__string__V_72_72 = (MR_Integer) 192;
#line 1977 "string.m"
                                        mercury__string__V_71_71 = (mercury__string__B_61 & mercury__string__V_72_72);
#line 1977 "string.m"
                                        mercury__string__succeeded = (mercury__string__V_71_71 == (MR_Integer) 128);
#line 1951 "string.m"
                                        if (mercury__string__succeeded)
#line 1951 "string.m"
                                          {
#line 1977 "string.m"
                                            mercury__string__V_75_75 = (MR_Integer) 192;
#line 1977 "string.m"
                                            mercury__string__V_74_74 = (mercury__string__C_12 & mercury__string__V_75_75);
#line 1977 "string.m"
                                            mercury__string__succeeded = (mercury__string__V_74_74 == (MR_Integer) 128);
#line 1951 "string.m"
                                            if (mercury__string__succeeded)
#line 1951 "string.m"
                                              {
#line 1954 "string.m"
                                                mercury__string__V_31_31 = (MR_Integer) 15;
#line 1954 "string.m"
                                                mercury__string__V_30_30 = (mercury__string__A_5 & mercury__string__V_31_31);
#line 1954 "string.m"
                                                mercury__string__V_32_32 = (MR_Integer) 12;
#line 1954 "string.m"
                                                {
#line 1954 "string.m"
                                                  mercury__string__V_29_29 = mercury__int__f_60_60_2_f_0(mercury__string__V_30_30, mercury__string__V_32_32);
                                                }
#line 1955 "string.m"
                                                mercury__string__V_35_35 = (MR_Integer) 63;
#line 1955 "string.m"
                                                mercury__string__V_34_34 = (mercury__string__B_61 & mercury__string__V_35_35);
#line 1955 "string.m"
                                                mercury__string__V_36_36 = (MR_Integer) 6;
#line 1955 "string.m"
                                                {
#line 1955 "string.m"
                                                  mercury__string__V_33_33 = mercury__int__f_60_60_2_f_0(mercury__string__V_34_34, mercury__string__V_36_36);
                                                }
#line 1955 "string.m"
                                                mercury__string__V_28_28 = (mercury__string__V_29_29 | mercury__string__V_33_33);
#line 1956 "string.m"
                                                mercury__string__V_38_38 = (MR_Integer) 63;
#line 1956 "string.m"
                                                mercury__string__V_37_37 = (mercury__string__C_12 & mercury__string__V_38_38);
#line 1956 "string.m"
                                                mercury__string__CharInt_9 = (mercury__string__V_28_28 | mercury__string__V_37_37);
#line 1957 "string.m"
                                                mercury__string__V_39_39 = (MR_Integer) 2048;
#line 1957 "string.m"
                                                mercury__string__succeeded = (mercury__string__CharInt_9 >= mercury__string__V_39_39);
#line 1951 "string.m"
                                              }
#line 1951 "string.m"
                                          }
#line 1951 "string.m"
                                      }
#line 1951 "string.m"
                                  }
#line 1951 "string.m"
                              }
#line 1958 "string.m"
                            else
#line 1968 "string.m"
                              {
#line 1968 "string.m"
                                MR_Integer mercury__string__D_13;
#line 1968 "string.m"
                                MR_Word mercury__string__V_41_41;
#line 1968 "string.m"
                                MR_Word mercury__string__V_42_42;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_43_43;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_44_44;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_45_45;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_46_46;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_47_47;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_48_48;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_49_49;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_50_50;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_51_51;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_52_52;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_53_53;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_54_54;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_55_55;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_56_56;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_57_57;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_58_58;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_59_59;
#line 1968 "string.m"
                                MR_Integer mercury__string__B_62;
#line 1968 "string.m"
                                MR_Integer mercury__string__C_63;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_77_77;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_78_78;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_80_80;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_81_81;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_83_83;
#line 1968 "string.m"
                                MR_Integer mercury__string__V_84_84;

#line 1958 "string.m"
                                mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 244);
#line 1968 "string.m"
                                if (mercury__string__succeeded)
#line 1968 "string.m"
                                  {
#line 1959 "string.m"
                                    mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__FollowA_6)) == (MR_mktag((MR_Integer) 1)));
#line 1959 "string.m"
                                    if (mercury__string__succeeded)
#line 1959 "string.m"
                                      {
#line 1959 "string.m"
                                        mercury__string__B_62 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 0)));
#line 1959 "string.m"
                                        mercury__string__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 1)));
#line 1959 "string.m"
                                        mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 1959 "string.m"
                                        if (mercury__string__succeeded)
#line 1959 "string.m"
                                          {
#line 1959 "string.m"
                                            mercury__string__C_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__V_41_41, (MR_Integer) 0)));
#line 1959 "string.m"
                                            mercury__string__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_41_41, (MR_Integer) 1)));
#line 1959 "string.m"
                                            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 1959 "string.m"
                                            if (mercury__string__succeeded)
#line 1959 "string.m"
                                              {
#line 1959 "string.m"
                                                mercury__string__D_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__V_42_42, (MR_Integer) 0)));
#line 1959 "string.m"
                                                mercury__string__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_42_42, (MR_Integer) 1)));
#line 1977 "string.m"
                                                mercury__string__V_78_78 = (MR_Integer) 192;
#line 1977 "string.m"
                                                mercury__string__V_77_77 = (mercury__string__B_62 & mercury__string__V_78_78);
#line 1977 "string.m"
                                                mercury__string__succeeded = (mercury__string__V_77_77 == (MR_Integer) 128);
#line 1968 "string.m"
                                                if (mercury__string__succeeded)
#line 1968 "string.m"
                                                  {
#line 1977 "string.m"
                                                    mercury__string__V_81_81 = (MR_Integer) 192;
#line 1977 "string.m"
                                                    mercury__string__V_80_80 = (mercury__string__C_63 & mercury__string__V_81_81);
#line 1977 "string.m"
                                                    mercury__string__succeeded = (mercury__string__V_80_80 == (MR_Integer) 128);
#line 1968 "string.m"
                                                    if (mercury__string__succeeded)
#line 1968 "string.m"
                                                      {
#line 1977 "string.m"
                                                        mercury__string__V_84_84 = (MR_Integer) 192;
#line 1977 "string.m"
                                                        mercury__string__V_83_83 = (mercury__string__D_13 & mercury__string__V_84_84);
#line 1977 "string.m"
                                                        mercury__string__succeeded = (mercury__string__V_83_83 == (MR_Integer) 128);
#line 1968 "string.m"
                                                        if (mercury__string__succeeded)
#line 1968 "string.m"
                                                          {
#line 1963 "string.m"
                                                            mercury__string__V_47_47 = (MR_Integer) 7;
#line 1963 "string.m"
                                                            mercury__string__V_46_46 = (mercury__string__A_5 & mercury__string__V_47_47);
#line 1963 "string.m"
                                                            mercury__string__V_48_48 = (MR_Integer) 18;
#line 1963 "string.m"
                                                            {
#line 1963 "string.m"
                                                              mercury__string__V_45_45 = mercury__int__f_60_60_2_f_0(mercury__string__V_46_46, mercury__string__V_48_48);
                                                            }
#line 1964 "string.m"
                                                            mercury__string__V_51_51 = (MR_Integer) 63;
#line 1964 "string.m"
                                                            mercury__string__V_50_50 = (mercury__string__B_62 & mercury__string__V_51_51);
#line 1964 "string.m"
                                                            mercury__string__V_52_52 = (MR_Integer) 12;
#line 1964 "string.m"
                                                            {
#line 1964 "string.m"
                                                              mercury__string__V_49_49 = mercury__int__f_60_60_2_f_0(mercury__string__V_50_50, mercury__string__V_52_52);
                                                            }
#line 1964 "string.m"
                                                            mercury__string__V_44_44 = (mercury__string__V_45_45 | mercury__string__V_49_49);
#line 1965 "string.m"
                                                            mercury__string__V_55_55 = (MR_Integer) 63;
#line 1965 "string.m"
                                                            mercury__string__V_54_54 = (mercury__string__C_63 & mercury__string__V_55_55);
#line 1965 "string.m"
                                                            mercury__string__V_56_56 = (MR_Integer) 6;
#line 1965 "string.m"
                                                            {
#line 1965 "string.m"
                                                              mercury__string__V_53_53 = mercury__int__f_60_60_2_f_0(mercury__string__V_54_54, mercury__string__V_56_56);
                                                            }
#line 1965 "string.m"
                                                            mercury__string__V_43_43 = (mercury__string__V_44_44 | mercury__string__V_53_53);
#line 1966 "string.m"
                                                            mercury__string__V_58_58 = (MR_Integer) 63;
#line 1966 "string.m"
                                                            mercury__string__V_57_57 = (mercury__string__D_13 & mercury__string__V_58_58);
#line 1966 "string.m"
                                                            mercury__string__CharInt_9 = (mercury__string__V_43_43 | mercury__string__V_57_57);
#line 1967 "string.m"
                                                            mercury__string__V_59_59 = (MR_Integer) 65536;
#line 1967 "string.m"
                                                            mercury__string__succeeded = (mercury__string__CharInt_9 >= mercury__string__V_59_59);
#line 1968 "string.m"
                                                          }
#line 1968 "string.m"
                                                      }
#line 1968 "string.m"
                                                  }
#line 1959 "string.m"
                                              }
#line 1959 "string.m"
                                          }
#line 1959 "string.m"
                                      }
#line 1968 "string.m"
                                  }
#line 1968 "string.m"
                              }
#line 1958 "string.m"
                          }
#line 1950 "string.m"
                      }
#line 1944 "string.m"
                  }
#line 1942 "string.m"
              }
#line 1936 "string.m"
            if (mercury__string__succeeded)
#line 1936 "string.m"
              {
#line 25 "char.opt"
{
#define MR_PROC_LABEL mercury__string__decode_utf8_3_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__string__CharInt_9 ;
		{
#line 25 "char.opt"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);

#line 16292 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Char_14  = Character;
#line 25 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1936 "string.m"
                if (mercury__string__succeeded)
#line 1936 "string.m"
                  {
#line 1972 "string.m"
                    {
#line 1972 "string.m"
                      mercury__string__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "string.m"
                      MR_hl_field(MR_mktag(1), mercury__string__V_60_60, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_14));
#line 1972 "string.m"
                      MR_hl_field(MR_mktag(1), mercury__string__V_60_60, 1) = ((MR_Box) (mercury__string__HeadVar__2_2));
#line 1972 "string.m"
                    }
#line 1972 "string.m"
                    /* direct tailcall eliminated */
#line 1972 "string.m"
                    {
#line 1972 "string.m"
                      MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__Rest_10;
#line 1972 "string.m"
                      MR_Word mercury__string__HeadVar__2__tmp_copy_2 = mercury__string__V_60_60;

#line 1972 "string.m"
                      mercury__string__HeadVar__2_2 = mercury__string__HeadVar__2__tmp_copy_2;
#line 1972 "string.m"
                      mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 1972 "string.m"
                    }
#line 1972 "string.m"
                    continue;
#line 1936 "string.m"
                  }
#line 1936 "string.m"
              }
#line 1936 "string.m"
          }
#line 1935 "string.m"
        return mercury__string__succeeded;
#line 1935 "string.m"
      }
#line 1935 "string.m"
      break;
#line 1935 "string.m"
    }
#line 1933 "string.m"
}

#line 1789 "string.m"
void MR_CALL 
mercury__string__encode_utf16_3_p_0(
#line 1789 "string.m"
  MR_Char mercury__string__Char_4,
#line 1789 "string.m"
  MR_Word mercury__string__CodeList0_5,
#line 1789 "string.m"
  MR_Word * mercury__string__CodeList_6)
#line 1789 "string.m"
{
#line 1794 "string.m"
  {
#line 1794 "string.m"
    MR_bool mercury__string__succeeded;
#line 1794 "string.m"
    MR_Word mercury__string__CharCodes_7;

#line 1792 "string.m"
    {
#line 1792 "string.m"
      mercury__string__succeeded = mercury__char__to_utf16_2_p_0(mercury__string__Char_4, &mercury__string__CharCodes_7);
    }
#line 1794 "string.m"
    if (mercury__string__succeeded)
#line 1793 "string.m"
      {
#line 1793 "string.m"
        MR_Word mercury__string__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 48 "list.opt"
        {
#line 48 "list.opt"
          mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_11_11, mercury__string__CharCodes_7, mercury__string__CodeList0_5, mercury__string__CodeList_6);
#line 48 "list.opt"
          return;
        }
#line 1793 "string.m"
      }
#line 1794 "string.m"
    else
#line 1795 "string.m"
      {
#line 1795 "string.m"
        {
#line 1795 "string.m"
          mercury__require__unexpected_3_p_0((MR_String) "string", (MR_String) "predicate \140string.encode_utf16\'/3", (MR_String) "char.to_utf16 failed");
#line 1795 "string.m"
          return;
        }
#line 1795 "string.m"
      }
#line 1794 "string.m"
  }
#line 1789 "string.m"
}

#line 1771 "string.m"
void MR_CALL 
mercury__string__encode_utf8_3_p_0(
#line 1771 "string.m"
  MR_Char mercury__string__Char_4,
#line 1771 "string.m"
  MR_Word mercury__string__CodeList0_5,
#line 1771 "string.m"
  MR_Word * mercury__string__CodeList_6)
#line 1771 "string.m"
{
#line 1776 "string.m"
  {
#line 1776 "string.m"
    MR_bool mercury__string__succeeded;
#line 1776 "string.m"
    MR_Word mercury__string__CharCodes_7;

#line 1774 "string.m"
    {
#line 1774 "string.m"
      mercury__string__succeeded = mercury__char__to_utf8_2_p_0(mercury__string__Char_4, &mercury__string__CharCodes_7);
    }
#line 1776 "string.m"
    if (mercury__string__succeeded)
#line 1775 "string.m"
      {
#line 1775 "string.m"
        MR_Word mercury__string__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

#line 48 "list.opt"
        {
#line 48 "list.opt"
          mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_11_11, mercury__string__CharCodes_7, mercury__string__CodeList0_5, mercury__string__CodeList_6);
#line 48 "list.opt"
          return;
        }
#line 1775 "string.m"
      }
#line 1776 "string.m"
    else
#line 1777 "string.m"
      {
#line 1777 "string.m"
        {
#line 1777 "string.m"
          mercury__require__unexpected_3_p_0((MR_String) "string", (MR_String) "predicate \140string.encode_utf8\'/3", (MR_String) "char.to_utf8 failed");
#line 1777 "string.m"
          return;
        }
#line 1777 "string.m"
      }
#line 1776 "string.m"
  }
#line 1771 "string.m"
}

#line 1750 "string.m"
void MR_CALL 
mercury__string__to_code_unit_list_loop_4_p_0(
#line 1750 "string.m"
  MR_String mercury__string__String_5,
#line 1750 "string.m"
  MR_Integer mercury__string__Index_6,
#line 1750 "string.m"
  MR_Integer mercury__string__End_7,
#line 1750 "string.m"
  MR_Word * mercury__string__List_8)
#line 1750 "string.m"
{
#line 1756 "string.m"
  {
#line 1756 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Index_6 >= mercury__string__End_7);

#line 1756 "string.m"
    if (mercury__string__succeeded)
#line 1755 "string.m"
      *mercury__string__List_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1756 "string.m"
    else
#line 1757 "string.m"
      {
#line 1757 "string.m"
        MR_Integer mercury__string__Code_9;
#line 1757 "string.m"
        MR_Word mercury__string__Tail_10;
#line 1757 "string.m"
        MR_Integer mercury__string__V_11_11;

#line 2349 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Index_6 ;
		{
#line 2349 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 16513 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Code_9  = Code;
#line 2349 "string.m"
}
#line 1758 "string.m"
        mercury__string__V_11_11 = (mercury__string__Index_6 + (MR_Integer) 1);
#line 1758 "string.m"
        {
#line 1758 "string.m"
          mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_5, mercury__string__V_11_11, mercury__string__End_7, &mercury__string__Tail_10);
        }
#line 1759 "string.m"
        {
#line 1759 "string.m"
          MR_Word base;
#line 1759 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1759 "string.m"
          *mercury__string__List_8 = base;
#line 1759 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Code_9));
#line 1759 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Tail_10));
#line 1759 "string.m"
        }
#line 1757 "string.m"
      }
#line 1756 "string.m"
  }
#line 1750 "string.m"
}

#line 1421 "string.m"
void MR_CALL 
mercury__string__to_char_list_forward_2_p_0(
#line 1421 "string.m"
  MR_String mercury__string__Str_1,
#line 1421 "string.m"
  MR_Word * mercury__string__CharList_2)
#line 1421 "string.m"
{
#line 1423 "string.m"
  {
#line 1423 "string.m"
    MR_bool mercury__string__succeeded;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_forward_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
#line 1427 "string.m"
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
#line 16586 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
#line 1427 "string.m"
}
#line 1423 "string.m"
  }
#line 1421 "string.m"
}

#line 1379 "string.m"
MR_bool MR_CALL 
mercury__string__internal_encoding_is_utf8_0_p_0(void)
#line 1379 "string.m"
{
#line 1381 "string.m"
  {
#line 1381 "string.m"
    MR_bool mercury__string__succeeded;

#line 1384 "string.m"
{
#define MR_PROC_LABEL mercury__string__internal_encoding_is_utf8_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1384 "string.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 16619 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1384 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1381 "string.m"
    return mercury__string__succeeded;
#line 1381 "string.m"
  }
#line 1379 "string.m"
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
#line 5587 "string.m"
  {
#line 5587 "string.m"
    MR_bool mercury__string__succeeded;

#line 5587 "string.m"
    {
#line 5587 "string.m"
      mercury__string__format__format_impl_3_p_0(mercury__string__FormatString_4, mercury__string__PolyList_5, mercury__string__String_6);
#line 5587 "string.m"
      return;
    }
#line 5587 "string.m"
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
#line 5587 "string.m"
  {
#line 5587 "string.m"
    MR_bool mercury__string__succeeded;
#line 5587 "string.m"
    MR_String mercury__string__S2_6;

#line 5587 "string.m"
    {
#line 5587 "string.m"
      mercury__string__format__format_impl_3_p_0(mercury__string__S1_4, mercury__string__PT_5, &mercury__string__S2_6);
    }
#line 5587 "string.m"
    return mercury__string__S2_6;
#line 5587 "string.m"
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
#line 16722 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16724 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 16727 "string.c"
    {
#line 16729 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16732 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 16741 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__RevStrings_9_15, &mercury__string__V_11_16);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 21 "string.to_string.opt"
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
#line 16789 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16791 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 16794 "string.c"
    {
#line 16796 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16799 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 16808 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__RevStrings_9_15, &mercury__string__V_11_16);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 21 "string.to_string.opt"
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
#line 16856 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16858 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 16861 "string.c"
    {
#line 16863 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16866 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 16875 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__RevStrings_9_15, &mercury__string__V_11_16);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 21 "string.to_string.opt"
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
#line 16923 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16925 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 16928 "string.c"
    {
#line 16930 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16933 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 16942 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__RevStrings_9_15, &mercury__string__V_11_16);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 21 "string.to_string.opt"
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
#line 16988 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_27, (MR_Integer) 0)), (MR_Integer) 12)));
#line 16990 "string.c"
    MR_Box mercury__string__conv1_V_13_25;

#line 16993 "string.c"
    {
#line 16995 "string.c"
      mercury__string__conv1_V_13_25 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_27), ((MR_Box) ((MR_Integer) 0)));
    }
#line 16998 "string.c"
    mercury__string__V_13_25 = ((MR_Integer) mercury__string__conv1_V_13_25);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_24 = (mercury__string__V_13_25 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_6, (MR_Integer) 1, mercury__string__Priority_10_24, mercury__string__X_5, mercury__string__V_10_15, &mercury__string__RevStrings_9_16);
    }
#line 17007 "string.c"
    mercury__string__TypeCtorInfo_13_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 123 "list.opt"
    {
#line 123 "list.opt"
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
#line 17055 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);
#line 17057 "string.c"
    MR_Box mercury__string__conv1_V_13_23;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 22 "string.to_string.opt"
    mercury__string__V_10_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 17064 "string.c"
    mercury__string__TypeClassInfo_for_op_table_25 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 17066 "string.c"
    mercury__string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 12)));
#line 17068 "string.c"
    {
#line 17070 "string.c"
      mercury__string__conv1_V_13_23 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_25), ((MR_Box) ((MR_Integer) 0)));
    }
#line 17073 "string.c"
    mercury__string__V_13_23 = ((MR_Integer) mercury__string__conv1_V_13_23);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_22 = (mercury__string__V_13_23 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_4, (MR_Integer) 1, mercury__string__Priority_10_22, mercury__string__X_3, mercury__string__V_10_13, &mercury__string__RevStrings_9_14);
    }
#line 17082 "string.c"
    mercury__string__TypeCtorInfo_13_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 123 "list.opt"
    {
#line 123 "list.opt"
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
#line 1228 "string.m"
}

#line 1218 "string.m"
MR_String MR_CALL 
mercury__string__from_c_pointer_1_f_0(
#line 1218 "string.m"
  MR_Word mercury__string__P_3)
#line 1218 "string.m"
{
#line 5560 "string.m"
  {
#line 5560 "string.m"
    MR_bool mercury__string__succeeded;
#line 5560 "string.m"
    MR_String mercury__string__S_4;
#line 5560 "string.m"
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
#line 5560 "string.m"
    MR_String mercury__string__V_9_9;
#line 5560 "string.m"
    MR_String mercury__string__V_10_10;

#line 5325 "string.m"
    {
#line 5325 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__V_10_10);
    }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_10_10 ;
	S2 =  (MR_String) ")" ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 17146 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = S3;
#line 3399 "string.m"
}
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 17173 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
#line 3399 "string.m"
}
#line 5560 "string.m"
    return mercury__string__S_4;
#line 5560 "string.m"
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
#line 5560 "string.m"
  {
#line 5560 "string.m"
    MR_bool mercury__string__succeeded;
#line 5560 "string.m"
    MR_Integer mercury__string__Int_5 = (MR_Integer) mercury__string__C_Pointer_3;
#line 5560 "string.m"
    MR_String mercury__string__V_7_7;
#line 5560 "string.m"
    MR_String mercury__string__V_8_8;

#line 5325 "string.m"
    {
#line 5325 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_5, (MR_Integer) 16, &mercury__string__V_8_8);
    }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_8_8 ;
	S2 =  (MR_String) ")" ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 17232 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = S3;
#line 3399 "string.m"
}
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_7_7 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 17259 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = S3;
#line 3399 "string.m"
}
#line 5560 "string.m"
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
#line 5560 "string.m"
  {
#line 5560 "string.m"
    MR_bool mercury__string__succeeded;
#line 5560 "string.m"
    MR_String mercury__string__S_4;
#line 5560 "string.m"
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
#line 5560 "string.m"
    MR_String mercury__string__V_9_9;
#line 5560 "string.m"
    MR_String mercury__string__V_10_10;

#line 5325 "string.m"
    {
#line 5325 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__V_10_10);
    }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_10_10 ;
	S2 =  (MR_String) ")" ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 17316 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = S3;
#line 3399 "string.m"
}
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 17343 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
#line 3399 "string.m"
}
#line 5560 "string.m"
    return mercury__string__S_4;
#line 5560 "string.m"
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
#line 5432 "string.m"
  {
#line 5432 "string.m"
    MR_bool mercury__string__succeeded;
#line 5432 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5436 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_float_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
#line 5436 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 17388 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Str;
#line 5436 "string.m"
}
#line 5432 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5432 "string.m"
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
#line 5432 "string.m"
  {
#line 5432 "string.m"
    MR_bool mercury__string__succeeded;

#line 5436 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Flt_1 ;
		{
#line 5436 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 17433 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_2  = Str;
#line 5436 "string.m"
}
#line 5432 "string.m"
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
#line 5432 "string.m"
  {
#line 5432 "string.m"
    MR_bool mercury__string__succeeded;
#line 5432 "string.m"
    MR_String mercury__string__S2_4;

#line 5436 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
#line 5436 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 17476 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_4  = Str;
#line 5436 "string.m"
}
#line 5432 "string.m"
    return mercury__string__S2_4;
#line 5432 "string.m"
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
#line 5371 "string.m"
  {
#line 5371 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_7);
#line 5371 "string.m"
    MR_String mercury__string__Str_10;
#line 5372 "string.m"
    MR_Integer mercury__string__V_12_12;

#line 5372 "string.m"
    if (mercury__string__succeeded)
#line 5372 "string.m"
      {
#line 5372 "string.m"
        mercury__string__V_12_12 = (MR_Integer) 36;
#line 5372 "string.m"
        mercury__string__succeeded = (mercury__string__Base_7 <= mercury__string__V_12_12);
#line 5372 "string.m"
      }
#line 5374 "string.m"
    if (mercury__string__succeeded)
#line 5373 "string.m"
      {
#line 5373 "string.m"
      }
#line 5374 "string.m"
    else
#line 5375 "string.m"
      {
#line 5375 "string.m"
        {
#line 5375 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.int_to_base_string_group: invalid base");
        }
#line 5375 "string.m"
      }
#line 5377 "string.m"
    {
#line 5377 "string.m"
      mercury__string__int_to_base_string_group_1_5_p_0(mercury__string__N_6, mercury__string__Base_7, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str_10);
    }
#line 5371 "string.m"
    return mercury__string__Str_10;
#line 5371 "string.m"
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
#line 5368 "string.m"
  {
#line 5368 "string.m"
    MR_bool mercury__string__succeeded;
#line 5368 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5369 "string.m"
    {
#line 5369 "string.m"
      return mercury__string__HeadVar__2_2 = mercury__string__int_to_base_string_group_4_f_0(mercury__string__N_3, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
#line 5368 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5368 "string.m"
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
#line 5327 "string.m"
  {
#line 5327 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_5);
#line 5328 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 5328 "string.m"
    if (mercury__string__succeeded)
#line 5328 "string.m"
      {
#line 5328 "string.m"
        mercury__string__V_8_8 = (MR_Integer) 36;
#line 5328 "string.m"
        mercury__string__succeeded = (mercury__string__Base_5 <= mercury__string__V_8_8);
#line 5328 "string.m"
      }
#line 5330 "string.m"
    if (mercury__string__succeeded)
#line 5329 "string.m"
      {
#line 5329 "string.m"
      }
#line 5330 "string.m"
    else
#line 5331 "string.m"
      {
#line 5331 "string.m"
        {
#line 5331 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.int_to_base_string: invalid base");
#line 5331 "string.m"
          return;
        }
#line 5331 "string.m"
      }
#line 5333 "string.m"
    {
#line 5333 "string.m"
      mercury__string__int_to_base_string_1_3_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__Str_6);
#line 5333 "string.m"
      return;
    }
#line 5327 "string.m"
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
#line 5325 "string.m"
  {
#line 5325 "string.m"
    MR_bool mercury__string__succeeded;
#line 5325 "string.m"
    MR_String mercury__string__S2_6;

#line 5325 "string.m"
    {
#line 5325 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N1_4, mercury__string__N2_5, &mercury__string__S2_6);
    }
#line 5325 "string.m"
    return mercury__string__S2_6;
#line 5325 "string.m"
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
#line 5316 "string.m"
  {
#line 5316 "string.m"
    MR_bool mercury__string__succeeded;
#line 5316 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5317 "string.m"
    {
#line 5317 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__HeadVar__2_2);
    }
#line 5316 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5316 "string.m"
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
#line 5316 "string.m"
  {
#line 5316 "string.m"
    MR_bool mercury__string__succeeded;

#line 5317 "string.m"
    {
#line 5317 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, mercury__string__Str_4);
#line 5317 "string.m"
      return;
    }
#line 5316 "string.m"
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
#line 5316 "string.m"
  {
#line 5316 "string.m"
    MR_bool mercury__string__succeeded;
#line 5316 "string.m"
    MR_String mercury__string__S1_4;

#line 5317 "string.m"
    {
#line 5317 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__S1_4);
    }
#line 5316 "string.m"
    return mercury__string__S1_4;
#line 5316 "string.m"
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
#line 5306 "string.m"
  {
#line 5306 "string.m"
    MR_bool mercury__string__succeeded;
#line 5306 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 5306 "string.m"
    MR_Word mercury__string__V_8_8;
#line 5306 "string.m"
    MR_Word mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1505 "string.m"
    MR_String mercury__string__Str0_18;

#line 5307 "string.m"
    {
#line 5307 "string.m"
      mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5307 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_3));
#line 5307 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 5307 "string.m"
    }
#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_8_8, &mercury__string__Str0_18);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      mercury__string__HeadVar__2_2 = mercury__string__Str0_18;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1506 "string.m"
      }
#line 5306 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5306 "string.m"
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
#line 5306 "string.m"
  {
#line 5306 "string.m"
    MR_bool mercury__string__succeeded;
#line 5306 "string.m"
    MR_Word mercury__string__TypeInfo_8_8;
#line 5306 "string.m"
    MR_Word mercury__string__V_5_5;
#line 5306 "string.m"
    MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5306 "string.m"
    MR_Word mercury__string__V_7_7;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__char_to_string_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__String_4 ;
		{
#line 1427 "string.m"
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
#line 17845 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_5_5  = CharList;
#line 1427 "string.m"
}
#line 5307 "string.m"
    mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 5307 "string.m"
    if (mercury__string__succeeded)
#line 5307 "string.m"
      {
#line 5307 "string.m"
        *mercury__string__Char_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_5_5, (MR_Integer) 0)));
#line 5307 "string.m"
        mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_5_5, (MR_Integer) 1)));
#line 17862 "string.c"
        mercury__string__TypeInfo_8_8 = (MR_Word) &mercury__string_scalar_common_1[2];
#line 5307 "string.m"
        {
#line 5307 "string.m"
          return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_8_8, ((MR_Box) (mercury__string__V_6_6)), ((MR_Box) (mercury__string__V_7_7)));
        }
#line 5307 "string.m"
      }
#line 5306 "string.m"
    return mercury__string__succeeded;
#line 5306 "string.m"
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
#line 5306 "string.m"
  {
#line 5306 "string.m"
    MR_bool mercury__string__succeeded;
#line 5306 "string.m"
    MR_Word mercury__string__V_5_5;
#line 5306 "string.m"
    MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1505 "string.m"
    MR_String mercury__string__Str0_15;

#line 5307 "string.m"
    {
#line 5307 "string.m"
      mercury__string__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5307 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_5_5, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_3));
#line 5307 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_5_5, 1) = ((MR_Box) (mercury__string__V_6_6));
#line 5307 "string.m"
    }
#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_5_5, &mercury__string__Str0_15);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      *mercury__string__String_4 = mercury__string__Str0_15;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1506 "string.m"
          return;
        }
#line 1506 "string.m"
      }
#line 5306 "string.m"
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
#line 5306 "string.m"
  {
#line 5306 "string.m"
    MR_bool mercury__string__succeeded;
#line 5306 "string.m"
    MR_String mercury__string__S1_4;
#line 5306 "string.m"
    MR_Word mercury__string__V_7_7;
#line 5306 "string.m"
    MR_Word mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1505 "string.m"
    MR_String mercury__string__Str0_17;

#line 5307 "string.m"
    {
#line 5307 "string.m"
      mercury__string__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5307 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 0) = ((MR_Box) (MR_Word) (mercury__string__C_3));
#line 5307 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 1) = ((MR_Box) (mercury__string__V_8_8));
#line 5307 "string.m"
    }
#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_7_7, &mercury__string__Str0_17);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      mercury__string__S1_4 = mercury__string__Str0_17;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1506 "string.m"
      }
#line 5306 "string.m"
    return mercury__string__S1_4;
#line 5306 "string.m"
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
#line 5297 "string.m"
  {
#line 5297 "string.m"
    MR_bool mercury__string__succeeded;
#line 5297 "string.m"
    MR_Float mercury__string__Float_4;
#line 5297 "string.m"
    MR_Float mercury__string__FloatPrime_5;

#line 5189 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_to_float_1_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_3 ;
		{
#line 5189 "string.m"
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
#line 18030 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__FloatPrime_5  = FloatVal;
#line 5189 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5297 "string.m"
    if (mercury__string__succeeded)
#line 5296 "string.m"
      mercury__string__Float_4 = mercury__string__FloatPrime_5;
#line 5297 "string.m"
    else
#line 5298 "string.m"
      {
#line 5298 "string.m"
        {
#line 5298 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_to_float/1: conversion failed.");
        }
#line 5298 "string.m"
      }
#line 5297 "string.m"
    return mercury__string__Float_4;
#line 5297 "string.m"
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
#line 5185 "string.m"
  {
#line 5185 "string.m"
    MR_bool mercury__string__succeeded;

#line 5189 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_float_2_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_1 ;
		{
#line 5189 "string.m"
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
#line 18098 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__FloatVal_2  = FloatVal;
#line 5189 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5185 "string.m"
    return mercury__string__succeeded;
#line 5185 "string.m"
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
#line 5155 "string.m"
  {
#line 5155 "string.m"
    MR_bool mercury__string__succeeded;
#line 5155 "string.m"
    MR_Integer mercury__string__N_6;
#line 5155 "string.m"
    MR_Integer mercury__string__N0_7;

#line 5153 "string.m"
    {
#line 5153 "string.m"
      mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__string__Base_4, mercury__string__S_5, &mercury__string__N0_7);
    }
#line 5155 "string.m"
    if (mercury__string__succeeded)
#line 5154 "string.m"
      mercury__string__N_6 = mercury__string__N0_7;
#line 5155 "string.m"
    else
#line 5156 "string.m"
      {
#line 5156 "string.m"
        {
#line 5156 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_base_string_to_int: conversion failed");
        }
#line 5156 "string.m"
      }
#line 5155 "string.m"
    return mercury__string__N_6;
#line 5155 "string.m"
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
#line 5139 "string.m"
  {
#line 5139 "string.m"
    MR_bool mercury__string__succeeded;
#line 5139 "string.m"
    MR_Char mercury__string__Char_7;
#line 5139 "string.m"
    MR_Integer mercury__string__End_8;
#line 5139 "string.m"
    MR_Integer mercury__string__Len_36;
#line 2059 "string.m"
    MR_Char mercury__string__CharPrime_48;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 18197 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_36  = Length;
#line 2589 "string.m"
}
#line 2323 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__string__Len_36 ;
		{
#line 2323 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 18226 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2323 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5139 "string.m"
    if (mercury__string__succeeded)
#line 5139 "string.m"
      {
#line 2069 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  (MR_Integer) 0 ;
		{
#line 2069 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 18260 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_48  = Ch;
#line 2069 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2059 "string.m"
        if (mercury__string__succeeded)
#line 2058 "string.m"
          mercury__string__Char_7 = mercury__string__CharPrime_48;
#line 2059 "string.m"
        else
#line 2060 "string.m"
          {
#line 2060 "string.m"
            {
#line 2060 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 2060 "string.m"
          }
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 18298 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_8  = Length;
#line 2589 "string.m"
}
#line 5142 "string.m"
        mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 45);
#line 5145 "string.m"
        if (mercury__string__succeeded)
#line 5143 "string.m"
          {
#line 5143 "string.m"
            MR_Integer mercury__string__V_12_12;
#line 5143 "string.m"
            MR_Integer mercury__string__V_13_13;
#line 5143 "string.m"
            MR_Integer mercury__string__Start_63;
#line 5143 "string.m"
            MR_Integer mercury__string__End_64;
#line 5143 "string.m"
            MR_Integer mercury__string__V_66_66;
#line 4810 "string.m"
            MR_Integer mercury__string__V_65_65;

#line 5143 "string.m"
            mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
#line 5143 "string.m"
            if (mercury__string__succeeded)
#line 5143 "string.m"
              {
#line 5144 "string.m"
                mercury__string__V_12_12 = (MR_Integer) 1;
#line 5144 "string.m"
                mercury__string__V_13_13 = (MR_Integer) 0;
#line 4810 "string.m"
                mercury__string__V_65_65 = (MR_Integer) 0;
#line 43 "int.opt"
                mercury__string__Start_63 = mercury__string__V_12_12;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 18351 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_66_66  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
                mercury__string__succeeded = (mercury__string__End_8 < mercury__string__V_66_66);
#line 52 "int.opt"
                if (mercury__string__succeeded)
#line 51 "int.opt"
                  mercury__string__End_64 = mercury__string__End_8;
#line 52 "int.opt"
                else
#line 53 "int.opt"
                  mercury__string__End_64 = mercury__string__V_66_66;
#line 4812 "string.m"
                {
#line 4812 "string.m"
                  return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, mercury__string__Start_63, mercury__string__End_64, mercury__string__V_13_13, mercury__string__Int_6);
                }
#line 5143 "string.m"
              }
#line 5143 "string.m"
          }
#line 5145 "string.m"
        else
#line 5148 "string.m"
          {
#line 5145 "string.m"
            mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 43);
#line 5148 "string.m"
            if (mercury__string__succeeded)
#line 5146 "string.m"
              {
#line 5146 "string.m"
                MR_Integer mercury__string__V_16_16;
#line 5146 "string.m"
                MR_Integer mercury__string__V_17_17;

#line 5146 "string.m"
                mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
#line 5146 "string.m"
                if (mercury__string__succeeded)
#line 5146 "string.m"
                  {
#line 5147 "string.m"
                    mercury__string__V_16_16 = (MR_Integer) 1;
#line 5147 "string.m"
                    mercury__string__V_17_17 = (MR_Integer) 0;
#line 5147 "string.m"
                    {
#line 5147 "string.m"
                      return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, mercury__string__V_16_16, mercury__string__End_8, mercury__string__V_17_17, mercury__string__Int_6);
                    }
#line 5146 "string.m"
                  }
#line 5146 "string.m"
              }
#line 5148 "string.m"
            else
#line 5149 "string.m"
              {
#line 5149 "string.m"
                {
#line 5149 "string.m"
                  return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, (MR_Integer) 0, mercury__string__End_8, (MR_Integer) 0, mercury__string__Int_6);
                }
#line 5149 "string.m"
              }
#line 5148 "string.m"
          }
#line 5139 "string.m"
      }
#line 5139 "string.m"
    return mercury__string__succeeded;
#line 5139 "string.m"
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
#line 5137 "string.m"
  {
#line 5137 "string.m"
    MR_bool mercury__string__succeeded;
#line 5137 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;
#line 5155 "string.m"
    MR_Integer mercury__string__N0_8;

#line 5153 "string.m"
    {
#line 5153 "string.m"
      mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__S_3, &mercury__string__N0_8);
    }
#line 5155 "string.m"
    if (mercury__string__succeeded)
#line 5154 "string.m"
      mercury__string__HeadVar__2_2 = mercury__string__N0_8;
#line 5155 "string.m"
    else
#line 5156 "string.m"
      {
#line 5156 "string.m"
        {
#line 5156 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_base_string_to_int: conversion failed");
        }
#line 5156 "string.m"
      }
#line 5137 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5137 "string.m"
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
#line 5134 "string.m"
  {
#line 5134 "string.m"
    MR_bool mercury__string__succeeded;

#line 5135 "string.m"
    {
#line 5135 "string.m"
      return mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__String_3, mercury__string__Int_4);
    }
#line 5134 "string.m"
    return mercury__string__succeeded;
#line 5134 "string.m"
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
#line 5127 "string.m"
  {
#line 5127 "string.m"
    MR_bool mercury__string__succeeded;
#line 5127 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 5127 "string.m"
    MR_Word mercury__string__V_4_4;
#line 5127 "string.m"
    MR_Word mercury__string__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_5[0]);
#line 5127 "string.m"
    MR_Word mercury__string__V_7_7;
#line 5127 "string.m"
    MR_Word mercury__string__V_8_8;
#line 5127 "string.m"
    MR_Word mercury__string__V_9_9;
#line 5127 "string.m"
    MR_Word mercury__string__V_12_12;

#line 5127 "string.m"
    {
#line 5127 "string.m"
      mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 0) = ((MR_Box) (mercury__string__S_3));
#line 5127 "string.m"
    }
#line 5127 "string.m"
    mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5127 "string.m"
    mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[3]);
#line 5127 "string.m"
    {
#line 5127 "string.m"
      mercury__string__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 5127 "string.m"
    }
#line 5127 "string.m"
    {
#line 5127 "string.m"
      mercury__string__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_4_4, 0) = ((MR_Box) (mercury__string__V_5_5));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_4_4, 1) = ((MR_Box) (mercury__string__V_7_7));
#line 5127 "string.m"
    }
#line 5127 "string.m"
    {
#line 5127 "string.m"
      mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 5127 "string.m"
      MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__V_4_4));
#line 5127 "string.m"
    }
#line 5127 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5127 "string.m"
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
#line 4970 "string.m"
  {
#line 4970 "string.m"
    MR_bool mercury__string__succeeded;
#line 4970 "string.m"
    MR_String mercury__string__Table_6;
#line 4970 "string.m"
    MR_Word mercury__string__TypeCtorInfo_23_23;
#line 4970 "string.m"
    MR_Word mercury__string__MaxWidthsSenses_7;
#line 4970 "string.m"
    MR_Word mercury__string__Columns_8;
#line 4970 "string.m"
    MR_Integer mercury__string__SepLen_9;
#line 4970 "string.m"
    MR_Word mercury__string__RevRows_10;
#line 4970 "string.m"
    MR_Word mercury__string__Rows_11;
#line 4970 "string.m"
    MR_Word mercury__string__V_14_14;

#line 4971 "string.m"
    {
#line 4971 "string.m"
      mercury__string__MaxWidthsSenses_7 = mercury__string__map__ho14_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    }
#line 4972 "string.m"
    {
#line 4972 "string.m"
      mercury__string__Columns_8 = mercury__string__map__ho13_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    }
#line 2649 "string.m"
    {
#line 2649 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Separator_5, &mercury__string__SepLen_9);
    }
#line 4974 "string.m"
    mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4974 "string.m"
    {
#line 4974 "string.m"
      mercury__string__generate_rows_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Separator_5, mercury__string__SepLen_9, mercury__string__Columns_8, mercury__string__V_14_14, &mercury__string__RevRows_10);
    }
#line 18627 "string.c"
    mercury__string__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4975 "string.m"
    {
#line 4975 "string.m"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_23_23, mercury__string__RevRows_10, &mercury__string__Rows_11);
    }
#line 4976 "string.m"
    {
#line 4976 "string.m"
      return mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    }
#line 4970 "string.m"
    return mercury__string__Table_6;
#line 4970 "string.m"
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
#line 4953 "string.m"
  {
#line 4953 "string.m"
    MR_bool mercury__string__succeeded;
#line 4953 "string.m"
    MR_String mercury__string__Table_6;
#line 4953 "string.m"
    MR_Word mercury__string__MaxWidths_7;
#line 4953 "string.m"
    MR_Word mercury__string__PaddedColumns_8;
#line 4953 "string.m"
    MR_Word mercury__string__Rows_11;

#line 4954 "string.m"
    {
#line 4954 "string.m"
      mercury__string__MaxWidths_7 = mercury__string__map__ho16_2_f_in__list_0(mercury__string__Columns_4);
    }
#line 4959 "string.m"
    {
#line 4959 "string.m"
      mercury__string__PaddedColumns_8 = mercury__string__map_corresponding__ho15_3_f_in__list_0(mercury__string__MaxWidths_7, mercury__string__Columns_4);
    }
#line 4964 "string.m"
    if ((mercury__string__PaddedColumns_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4966 "string.m"
      mercury__string__Rows_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4964 "string.m"
    else
#line 4961 "string.m"
      {
#line 4961 "string.m"
        MR_Word mercury__string__PaddedHead_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 0)));
#line 4961 "string.m"
        MR_Word mercury__string__PaddedTail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 1)));

#line 400 "list.opt"
        {
#line 400 "list.opt"
          mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_53_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(mercury__string__Separator_5, mercury__string__PaddedTail_10, mercury__string__PaddedHead_9, &mercury__string__Rows_11);
        }
#line 4961 "string.m"
      }
#line 4968 "string.m"
    {
#line 4968 "string.m"
      return mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    }
#line 4953 "string.m"
    return mercury__string__Table_6;
#line 4953 "string.m"
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
#line 4933 "string.m"
  {
#line 4933 "string.m"
    MR_bool mercury__string__succeeded;
#line 4933 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4933 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4934 "string.m"
    {
#line 4934 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4935 "string.m"
    {
#line 4935 "string.m"
      mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4935 "string.m"
      return;
    }
#line 4933 "string.m"
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
#line 4933 "string.m"
  {
#line 4933 "string.m"
    MR_bool mercury__string__succeeded;
#line 4933 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4933 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4934 "string.m"
    {
#line 4934 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4935 "string.m"
    {
#line 4935 "string.m"
      mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4935 "string.m"
      return;
    }
#line 4933 "string.m"
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
#line 4933 "string.m"
  {
#line 4933 "string.m"
    MR_bool mercury__string__succeeded;
#line 4933 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4933 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4934 "string.m"
    {
#line 4934 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4935 "string.m"
    {
#line 4935 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4933 "string.m"
    return mercury__string__succeeded;
#line 4933 "string.m"
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
#line 4933 "string.m"
  {
#line 4933 "string.m"
    MR_bool mercury__string__succeeded;
#line 4933 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4933 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4934 "string.m"
    {
#line 4934 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4935 "string.m"
    {
#line 4935 "string.m"
      mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4935 "string.m"
      return;
    }
#line 4933 "string.m"
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
#line 4933 "string.m"
  {
#line 4933 "string.m"
    MR_bool mercury__string__succeeded;
#line 4933 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4933 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4934 "string.m"
    {
#line 4934 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4935 "string.m"
    {
#line 4935 "string.m"
      mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4935 "string.m"
      return;
    }
#line 4933 "string.m"
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
#line 4929 "string.m"
  {
#line 4929 "string.m"
    MR_bool mercury__string__succeeded;
#line 4929 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4929 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4929 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4930 "string.m"
    {
#line 4930 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4931 "string.m"
    {
#line 4931 "string.m"
      return mercury__string__Acc_12 = mercury__string__foldr_between_5_f_0(mercury__string__TypeInfo_for_T_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    }
#line 4929 "string.m"
    return mercury__string__Acc_12;
#line 4929 "string.m"
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
#line 4900 "string.m"
  {
#line 4900 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4900 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4900 "string.m"
    MR_Integer mercury__string__End_13;
#line 4900 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 19043 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4903 "string.m"
    {
#line 4903 "string.m"
      mercury__string__foldr_between_2_6_p_4(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4903 "string.m"
      return;
    }
#line 4900 "string.m"
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
#line 4900 "string.m"
  {
#line 4900 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4900 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4900 "string.m"
    MR_Integer mercury__string__End_13;
#line 4900 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 19127 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4903 "string.m"
    {
#line 4903 "string.m"
      mercury__string__foldr_between_2_6_p_3(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4903 "string.m"
      return;
    }
#line 4900 "string.m"
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
#line 4900 "string.m"
  {
#line 4900 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4900 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4900 "string.m"
    MR_Integer mercury__string__End_13;
#line 4900 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 19207 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4903 "string.m"
    {
#line 4903 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_2_6_p_2(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4900 "string.m"
    return mercury__string__succeeded;
#line 4900 "string.m"
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
#line 4900 "string.m"
  {
#line 4900 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4900 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4900 "string.m"
    MR_Integer mercury__string__End_13;
#line 4900 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 19287 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4903 "string.m"
    {
#line 4903 "string.m"
      mercury__string__foldr_between_2_6_p_1(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4903 "string.m"
      return;
    }
#line 4900 "string.m"
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
#line 4900 "string.m"
  {
#line 4900 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4900 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4900 "string.m"
    MR_Integer mercury__string__End_13;
#line 4900 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 19367 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4903 "string.m"
    {
#line 4903 "string.m"
      mercury__string__foldr_between_2_6_p_0(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4903 "string.m"
      return;
    }
#line 4900 "string.m"
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
#line 4896 "string.m"
  {
#line 4896 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
#line 4896 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4896 "string.m"
    MR_Integer mercury__string__Start_31;
#line 4896 "string.m"
    MR_Integer mercury__string__End_32;
#line 4896 "string.m"
    MR_Integer mercury__string__V_34_34;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_31 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_31 = mercury__string__Start_9;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 19447 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_34_34  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__Count_10 < mercury__string__V_34_34);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_32 = mercury__string__Count_10;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_32 = mercury__string__V_34_34;
#line 4903 "string.m"
    {
#line 4903 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_52_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__String_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__Acc0_11, &mercury__string__Acc_12);
    }
#line 4896 "string.m"
    return mercury__string__Acc_12;
#line 4896 "string.m"
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
#line 4893 "string.m"
  {
#line 4893 "string.m"
    MR_bool mercury__string__succeeded;
#line 4893 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 19515 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2589 "string.m"
}
#line 4894 "string.m"
    {
#line 4894 "string.m"
      mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4894 "string.m"
      return;
    }
#line 4893 "string.m"
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
#line 4893 "string.m"
  {
#line 4893 "string.m"
    MR_bool mercury__string__succeeded;
#line 4893 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 19573 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2589 "string.m"
}
#line 4894 "string.m"
    {
#line 4894 "string.m"
      mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4894 "string.m"
      return;
    }
#line 4893 "string.m"
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
#line 4893 "string.m"
  {
#line 4893 "string.m"
    MR_bool mercury__string__succeeded;
#line 4893 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 19627 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2589 "string.m"
}
#line 4894 "string.m"
    {
#line 4894 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
    }
#line 4893 "string.m"
    return mercury__string__succeeded;
#line 4893 "string.m"
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
#line 4893 "string.m"
  {
#line 4893 "string.m"
    MR_bool mercury__string__succeeded;
#line 4893 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 19681 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2589 "string.m"
}
#line 4894 "string.m"
    {
#line 4894 "string.m"
      mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
#line 4894 "string.m"
      return;
    }
#line 4893 "string.m"
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
#line 4893 "string.m"
  {
#line 4893 "string.m"
    MR_bool mercury__string__succeeded;
#line 4893 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 19735 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2589 "string.m"
}
#line 4894 "string.m"
    {
#line 4894 "string.m"
      mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
#line 4894 "string.m"
      return;
    }
#line 4893 "string.m"
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
#line 4889 "string.m"
  {
#line 4889 "string.m"
    MR_bool mercury__string__succeeded;
#line 4889 "string.m"
    MR_Box mercury__string__Acc_8;
#line 4889 "string.m"
    MR_Integer mercury__string__V_26_26;
#line 4889 "string.m"
    MR_Integer mercury__string__End_41;
#line 4889 "string.m"
    MR_Integer mercury__string__V_43_43;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 19793 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_26_26  = Length;
#line 2589 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 19813 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_43_43  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__V_26_26 < mercury__string__V_43_43);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_41 = mercury__string__V_26_26;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_41 = mercury__string__V_43_43;
#line 4903 "string.m"
    {
#line 4903 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__End_41, mercury__string__Acc0_7, &mercury__string__Acc_8);
    }
#line 4889 "string.m"
    return mercury__string__Acc_8;
#line 4889 "string.m"
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
#line 4882 "string.m"
  {
#line 4882 "string.m"
    MR_bool mercury__string__succeeded;
#line 4882 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4882 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4883 "string.m"
    {
#line 4883 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4884 "string.m"
    {
#line 4884 "string.m"
      mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4884 "string.m"
      return;
    }
#line 4882 "string.m"
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
#line 4882 "string.m"
  {
#line 4882 "string.m"
    MR_bool mercury__string__succeeded;
#line 4882 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4882 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4883 "string.m"
    {
#line 4883 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4884 "string.m"
    {
#line 4884 "string.m"
      mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4884 "string.m"
      return;
    }
#line 4882 "string.m"
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
#line 4882 "string.m"
  {
#line 4882 "string.m"
    MR_bool mercury__string__succeeded;
#line 4882 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4882 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4883 "string.m"
    {
#line 4883 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4884 "string.m"
    {
#line 4884 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    }
#line 4882 "string.m"
    return mercury__string__succeeded;
#line 4882 "string.m"
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
#line 4882 "string.m"
  {
#line 4882 "string.m"
    MR_bool mercury__string__succeeded;
#line 4882 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4882 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4883 "string.m"
    {
#line 4883 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4884 "string.m"
    {
#line 4884 "string.m"
      mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4884 "string.m"
      return;
    }
#line 4882 "string.m"
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
#line 4882 "string.m"
  {
#line 4882 "string.m"
    MR_bool mercury__string__succeeded;
#line 4882 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4882 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4883 "string.m"
    {
#line 4883 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4884 "string.m"
    {
#line 4884 "string.m"
      mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4884 "string.m"
      return;
    }
#line 4882 "string.m"
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
#line 4882 "string.m"
  {
#line 4882 "string.m"
    MR_bool mercury__string__succeeded;
#line 4882 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4882 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4883 "string.m"
    {
#line 4883 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4884 "string.m"
    {
#line 4884 "string.m"
      mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4884 "string.m"
      return;
    }
#line 4882 "string.m"
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
#line 4878 "string.m"
  {
#line 4878 "string.m"
    MR_bool mercury__string__succeeded;
#line 4878 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4878 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4879 "string.m"
    {
#line 4879 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4880 "string.m"
    {
#line 4880 "string.m"
      mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4880 "string.m"
      return;
    }
#line 4878 "string.m"
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
#line 4878 "string.m"
  {
#line 4878 "string.m"
    MR_bool mercury__string__succeeded;
#line 4878 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4878 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4879 "string.m"
    {
#line 4879 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4880 "string.m"
    {
#line 4880 "string.m"
      mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4880 "string.m"
      return;
    }
#line 4878 "string.m"
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
#line 4878 "string.m"
  {
#line 4878 "string.m"
    MR_bool mercury__string__succeeded;
#line 4878 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4878 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4879 "string.m"
    {
#line 4879 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4880 "string.m"
    {
#line 4880 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4878 "string.m"
    return mercury__string__succeeded;
#line 4878 "string.m"
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
#line 4878 "string.m"
  {
#line 4878 "string.m"
    MR_bool mercury__string__succeeded;
#line 4878 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4878 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4879 "string.m"
    {
#line 4879 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4880 "string.m"
    {
#line 4880 "string.m"
      mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4880 "string.m"
      return;
    }
#line 4878 "string.m"
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
#line 4878 "string.m"
  {
#line 4878 "string.m"
    MR_bool mercury__string__succeeded;
#line 4878 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4878 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4879 "string.m"
    {
#line 4879 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4880 "string.m"
    {
#line 4880 "string.m"
      mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4880 "string.m"
      return;
    }
#line 4878 "string.m"
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
#line 4874 "string.m"
  {
#line 4874 "string.m"
    MR_bool mercury__string__succeeded;
#line 4874 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4874 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4874 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4875 "string.m"
    {
#line 4875 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4876 "string.m"
    {
#line 4876 "string.m"
      return mercury__string__Acc_12 = mercury__string__foldl_between_5_f_0(mercury__string__TypeInfo_for_A_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    }
#line 4874 "string.m"
    return mercury__string__Acc_12;
#line 4874 "string.m"
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
#line 4818 "string.m"
  {
#line 4818 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4818 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4818 "string.m"
    MR_Integer mercury__string__End_16;
#line 4818 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 20495 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4821 "string.m"
    {
#line 4821 "string.m"
      mercury__string__foldl2_between_2_8_p_5(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4821 "string.m"
      return;
    }
#line 4818 "string.m"
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
#line 4818 "string.m"
  {
#line 4818 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4818 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4818 "string.m"
    MR_Integer mercury__string__End_16;
#line 4818 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 20585 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4821 "string.m"
    {
#line 4821 "string.m"
      mercury__string__foldl2_between_2_8_p_4(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4821 "string.m"
      return;
    }
#line 4818 "string.m"
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
#line 4818 "string.m"
  {
#line 4818 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4818 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4818 "string.m"
    MR_Integer mercury__string__End_16;
#line 4818 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 20671 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4821 "string.m"
    {
#line 4821 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_2_8_p_3(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    }
#line 4818 "string.m"
    return mercury__string__succeeded;
#line 4818 "string.m"
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
#line 4818 "string.m"
  {
#line 4818 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4818 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4818 "string.m"
    MR_Integer mercury__string__End_16;
#line 4818 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 20757 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4821 "string.m"
    {
#line 4821 "string.m"
      mercury__string__foldl2_between_2_8_p_2(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4821 "string.m"
      return;
    }
#line 4818 "string.m"
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
#line 4818 "string.m"
  {
#line 4818 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4818 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4818 "string.m"
    MR_Integer mercury__string__End_16;
#line 4818 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 20843 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4821 "string.m"
    {
#line 4821 "string.m"
      mercury__string__foldl2_between_2_8_p_1(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4821 "string.m"
      return;
    }
#line 4818 "string.m"
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
#line 4818 "string.m"
  {
#line 4818 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4818 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4818 "string.m"
    MR_Integer mercury__string__End_16;
#line 4818 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 20929 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4821 "string.m"
    {
#line 4821 "string.m"
      mercury__string__foldl2_between_2_8_p_0(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4821 "string.m"
      return;
    }
#line 4818 "string.m"
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
#line 4809 "string.m"
  {
#line 4809 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4809 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4809 "string.m"
    MR_Integer mercury__string__End_13;
#line 4809 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21013 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4812 "string.m"
    {
#line 4812 "string.m"
      mercury__string__foldl_between_2_6_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4812 "string.m"
      return;
    }
#line 4809 "string.m"
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
#line 4809 "string.m"
  {
#line 4809 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4809 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4809 "string.m"
    MR_Integer mercury__string__End_13;
#line 4809 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21097 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4812 "string.m"
    {
#line 4812 "string.m"
      mercury__string__foldl_between_2_6_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4812 "string.m"
      return;
    }
#line 4809 "string.m"
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
#line 4809 "string.m"
  {
#line 4809 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4809 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4809 "string.m"
    MR_Integer mercury__string__End_13;
#line 4809 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21177 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4812 "string.m"
    {
#line 4812 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_2_6_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4809 "string.m"
    return mercury__string__succeeded;
#line 4809 "string.m"
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
#line 4809 "string.m"
  {
#line 4809 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4809 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4809 "string.m"
    MR_Integer mercury__string__End_13;
#line 4809 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21257 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4812 "string.m"
    {
#line 4812 "string.m"
      mercury__string__foldl_between_2_6_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4812 "string.m"
      return;
    }
#line 4809 "string.m"
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
#line 4809 "string.m"
  {
#line 4809 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4809 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4809 "string.m"
    MR_Integer mercury__string__End_13;
#line 4809 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21337 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4812 "string.m"
    {
#line 4812 "string.m"
      mercury__string__foldl_between_2_6_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4812 "string.m"
      return;
    }
#line 4809 "string.m"
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
#line 4814 "string.m"
  {
#line 4814 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
#line 4814 "string.m"
    MR_Box mercury__string__B_12;
#line 4814 "string.m"
    MR_Integer mercury__string__Start_31;
#line 4814 "string.m"
    MR_Integer mercury__string__End_32;
#line 4814 "string.m"
    MR_Integer mercury__string__V_34_34;

#line 42 "int.opt"
    if (mercury__string__succeeded)
#line 41 "int.opt"
      mercury__string__Start_31 = (MR_Integer) 0;
#line 42 "int.opt"
    else
#line 43 "int.opt"
      mercury__string__Start_31 = mercury__string__Start_9;
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21417 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_34_34  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__End_10 < mercury__string__V_34_34);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_32 = mercury__string__End_10;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_32 = mercury__string__V_34_34;
#line 4812 "string.m"
    {
#line 4812 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__S_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__A_11, &mercury__string__B_12);
    }
#line 4814 "string.m"
    return mercury__string__B_12;
#line 4814 "string.m"
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
#line 4805 "string.m"
  {
#line 4805 "string.m"
    MR_bool mercury__string__succeeded;
#line 4805 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21491 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2589 "string.m"
}
#line 4807 "string.m"
    {
#line 4807 "string.m"
      mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4807 "string.m"
      return;
    }
#line 4805 "string.m"
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
#line 4805 "string.m"
  {
#line 4805 "string.m"
    MR_bool mercury__string__succeeded;
#line 4805 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21555 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2589 "string.m"
}
#line 4807 "string.m"
    {
#line 4807 "string.m"
      mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4807 "string.m"
      return;
    }
#line 4805 "string.m"
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
#line 4805 "string.m"
  {
#line 4805 "string.m"
    MR_bool mercury__string__succeeded;
#line 4805 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21615 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2589 "string.m"
}
#line 4807 "string.m"
    {
#line 4807 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
    }
#line 4805 "string.m"
    return mercury__string__succeeded;
#line 4805 "string.m"
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
#line 4805 "string.m"
  {
#line 4805 "string.m"
    MR_bool mercury__string__succeeded;
#line 4805 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21675 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2589 "string.m"
}
#line 4807 "string.m"
    {
#line 4807 "string.m"
      mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4807 "string.m"
      return;
    }
#line 4805 "string.m"
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
#line 4805 "string.m"
  {
#line 4805 "string.m"
    MR_bool mercury__string__succeeded;
#line 4805 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21735 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2589 "string.m"
}
#line 4807 "string.m"
    {
#line 4807 "string.m"
      mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4807 "string.m"
      return;
    }
#line 4805 "string.m"
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
#line 4805 "string.m"
  {
#line 4805 "string.m"
    MR_bool mercury__string__succeeded;
#line 4805 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21795 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2589 "string.m"
}
#line 4807 "string.m"
    {
#line 4807 "string.m"
      mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4807 "string.m"
      return;
    }
#line 4805 "string.m"
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
#line 4801 "string.m"
  {
#line 4801 "string.m"
    MR_bool mercury__string__succeeded;
#line 4801 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21853 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2589 "string.m"
}
#line 4803 "string.m"
    {
#line 4803 "string.m"
      mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4803 "string.m"
      return;
    }
#line 4801 "string.m"
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
#line 4801 "string.m"
  {
#line 4801 "string.m"
    MR_bool mercury__string__succeeded;
#line 4801 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21911 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2589 "string.m"
}
#line 4803 "string.m"
    {
#line 4803 "string.m"
      mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4803 "string.m"
      return;
    }
#line 4801 "string.m"
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
#line 4801 "string.m"
  {
#line 4801 "string.m"
    MR_bool mercury__string__succeeded;
#line 4801 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 21965 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2589 "string.m"
}
#line 4803 "string.m"
    {
#line 4803 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
    }
#line 4801 "string.m"
    return mercury__string__succeeded;
#line 4801 "string.m"
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
#line 4801 "string.m"
  {
#line 4801 "string.m"
    MR_bool mercury__string__succeeded;
#line 4801 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22019 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2589 "string.m"
}
#line 4803 "string.m"
    {
#line 4803 "string.m"
      mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
#line 4803 "string.m"
      return;
    }
#line 4801 "string.m"
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
#line 4801 "string.m"
  {
#line 4801 "string.m"
    MR_bool mercury__string__succeeded;
#line 4801 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22073 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2589 "string.m"
}
#line 4803 "string.m"
    {
#line 4803 "string.m"
      mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
#line 4803 "string.m"
      return;
    }
#line 4801 "string.m"
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
#line 4797 "string.m"
  {
#line 4797 "string.m"
    MR_bool mercury__string__succeeded;
#line 4797 "string.m"
    MR_Box mercury__string__B_8;
#line 4797 "string.m"
    MR_Integer mercury__string__Length_25;
#line 4797 "string.m"
    MR_Integer mercury__string__End_39;
#line 4797 "string.m"
    MR_Integer mercury__string__V_41_41;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22131 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_25  = Length;
#line 2589 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22151 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_41_41  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
    mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_41_41);
#line 52 "int.opt"
    if (mercury__string__succeeded)
#line 51 "int.opt"
      mercury__string__End_39 = mercury__string__Length_25;
#line 52 "int.opt"
    else
#line 53 "int.opt"
      mercury__string__End_39 = mercury__string__V_41_41;
#line 4812 "string.m"
    {
#line 4812 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__S_6, (MR_Integer) 0, mercury__string__End_39, mercury__string__A_7, &mercury__string__B_8);
    }
#line 4797 "string.m"
    return mercury__string__B_8;
#line 4797 "string.m"
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
#line 4670 "string.m"
  {
#line 4670 "string.m"
    MR_bool mercury__string__succeeded;
#line 4670 "string.m"
    MR_String mercury__string__Wrapped_8;
#line 4670 "string.m"
    MR_Word mercury__string__TypeCtorInfo_20_20;
#line 4670 "string.m"
    MR_Word mercury__string__Words_9;
#line 4670 "string.m"
    MR_Integer mercury__string__SepLen0_10;
#line 4670 "string.m"
    MR_String mercury__string__WordSep_11;
#line 4670 "string.m"
    MR_Integer mercury__string__SepLen_12;
#line 4670 "string.m"
    MR_Word mercury__string__RevWordsSpacesNls0_15;
#line 4670 "string.m"
    MR_Word mercury__string__RevWordsSpacesNls_16;
#line 4670 "string.m"
    MR_Word mercury__string__WordsSpacesNls_17;
#line 4670 "string.m"
    MR_Integer mercury__string__WordStart_25;

#line 4326 "string.m"
    {
#line 4326 "string.m"
      mercury__string__next_boundary__ho39_4_p_0(mercury__string__Str_5, (MR_Integer) 0, &mercury__string__WordStart_25);
    }
#line 4327 "string.m"
    {
#line 4327 "string.m"
      mercury__string__words_loop__ho40_4_p_0(mercury__string__Str_5, mercury__string__WordStart_25, &mercury__string__Words_9);
    }
#line 2649 "string.m"
    {
#line 2649 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__WordSep0_7, &mercury__string__SepLen0_10);
    }
#line 4673 "string.m"
    mercury__string__succeeded = (mercury__string__SepLen0_10 < mercury__string__N_6);
#line 4676 "string.m"
    if (mercury__string__succeeded)
#line 4674 "string.m"
      {
#line 4674 "string.m"
        mercury__string__WordSep_11 = mercury__string__WordSep0_7;
#line 4675 "string.m"
        mercury__string__SepLen_12 = mercury__string__SepLen0_10;
#line 4674 "string.m"
      }
#line 4676 "string.m"
    else
#line 4677 "string.m"
      {
#line 4677 "string.m"
        mercury__string__WordSep_11 = (MR_String) "";
#line 4678 "string.m"
        mercury__string__SepLen_12 = (MR_Integer) 0;
#line 4677 "string.m"
      }
#line 4682 "string.m"
    mercury__string__RevWordsSpacesNls0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4683 "string.m"
    {
#line 4683 "string.m"
      mercury__string__word_wrap_loop_7_p_0(mercury__string__Words_9, mercury__string__WordSep_11, mercury__string__SepLen_12, (MR_Integer) 1, mercury__string__N_6, mercury__string__RevWordsSpacesNls0_15, &mercury__string__RevWordsSpacesNls_16);
    }
#line 22260 "string.c"
    mercury__string__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4685 "string.m"
    {
#line 4685 "string.m"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_20_20, mercury__string__RevWordsSpacesNls_16, &mercury__string__WordsSpacesNls_17);
    }
#line 4686 "string.m"
    {
#line 4686 "string.m"
      return mercury__string__Wrapped_8 = mercury__string__append_list_1_f_0(mercury__string__WordsSpacesNls_17);
    }
#line 4670 "string.m"
    return mercury__string__Wrapped_8;
#line 4670 "string.m"
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
#line 4668 "string.m"
  {
#line 4668 "string.m"
    MR_bool mercury__string__succeeded;
#line 4668 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 4668 "string.m"
    {
#line 4668 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__word_wrap_separator_3_f_0(mercury__string__Str_4, mercury__string__N_5, (MR_String) "");
    }
#line 4668 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4668 "string.m"
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
#line 4644 "string.m"
  {
#line 4644 "string.m"
    MR_bool mercury__string__succeeded = (strcmp(mercury__string__Pat_6, (MR_String) "") == 0);

#line 4644 "string.m"
    if (mercury__string__succeeded)
#line 4641 "string.m"
      {
#line 4641 "string.m"
        MR_Word mercury__string__TypeCtorInfo_29_29;
#line 4641 "string.m"
        MR_Word mercury__string__Foldl_12;
#line 4641 "string.m"
        MR_Word mercury__string__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4641 "string.m"
        MR_Word mercury__string__V_22_22;
#line 4641 "string.m"
        MR_Word mercury__string__V_23_23;
#line 4641 "string.m"
        MR_Integer mercury__string__Length_51;
#line 4641 "string.m"
        MR_Integer mercury__string__End_67;
#line 4641 "string.m"
        MR_Integer mercury__string__V_69_69;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22359 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_51  = Length;
#line 2589 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22379 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_69_69  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
        mercury__string__succeeded = (mercury__string__Length_51 < mercury__string__V_69_69);
#line 52 "int.opt"
        if (mercury__string__succeeded)
#line 51 "int.opt"
          mercury__string__End_67 = mercury__string__Length_51;
#line 52 "int.opt"
        else
#line 53 "int.opt"
          mercury__string__End_67 = mercury__string__V_69_69;
#line 4812 "string.m"
        {
#line 4812 "string.m"
          mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_53_95_95_91_49_44_32_51_93_95_48_6_p_0(mercury__string__Subst_7, mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_67, mercury__string__V_21_21, &mercury__string__Foldl_12);
        }
#line 22401 "string.c"
        mercury__string__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 123 "list.opt"
        {
#line 123 "list.opt"
          mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_29_29, mercury__string__Foldl_12, &mercury__string__V_23_23);
        }
#line 4643 "string.m"
        {
#line 4643 "string.m"
          mercury__string__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4643 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_22_22, 0) = ((MR_Box) (mercury__string__Subst_7));
#line 4643 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_22_22, 1) = ((MR_Box) (mercury__string__V_23_23));
#line 4643 "string.m"
        }
#line 4643 "string.m"
        {
#line 4643 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__V_22_22);
        }
#line 4641 "string.m"
      }
#line 4644 "string.m"
    else
#line 4645 "string.m"
      {
#line 4645 "string.m"
        MR_Word mercury__string__TypeCtorInfo_30_30;
#line 4645 "string.m"
        MR_Integer mercury__string__PatLength_13;
#line 4645 "string.m"
        MR_Word mercury__string__ReversedChunks_14;
#line 4645 "string.m"
        MR_Word mercury__string__Chunks_15;
#line 4645 "string.m"
        MR_Word mercury__string__V_25_25;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22453 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PatLength_13  = Length;
#line 2589 "string.m"
}
#line 4646 "string.m"
        mercury__string__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4646 "string.m"
        {
#line 4646 "string.m"
          mercury__string__replace_all_loop_7_p_0(mercury__string__Str_5, mercury__string__Pat_6, mercury__string__Subst_7, mercury__string__PatLength_13, (MR_Integer) 0, mercury__string__V_25_25, &mercury__string__ReversedChunks_14);
        }
#line 22467 "string.c"
        mercury__string__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4647 "string.m"
        {
#line 4647 "string.m"
          mercury__string__Chunks_15 = mercury__list__reverse_1_f_0(mercury__string__TypeCtorInfo_30_30, mercury__string__ReversedChunks_14);
        }
#line 4648 "string.m"
        {
#line 4648 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__Chunks_15);
        }
#line 4645 "string.m"
      }
#line 4644 "string.m"
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
#line 4637 "string.m"
  {
#line 4637 "string.m"
    MR_bool mercury__string__succeeded;
#line 4637 "string.m"
    MR_String mercury__string__S4_8;

#line 4637 "string.m"
    {
#line 4637 "string.m"
      mercury__string__replace_all_4_p_0(mercury__string__S1_5, mercury__string__S2_6, mercury__string__S3_7, &mercury__string__S4_8);
    }
#line 4637 "string.m"
    return mercury__string__S4_8;
#line 4637 "string.m"
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
#line 4625 "string.m"
  {
#line 4625 "string.m"
    MR_bool mercury__string__succeeded;
#line 4625 "string.m"
    MR_Integer mercury__string__Index_9;
#line 4625 "string.m"
    MR_String mercury__string__Initial_10;
#line 4625 "string.m"
    MR_Integer mercury__string__BeginAt_11;
#line 4625 "string.m"
    MR_Integer mercury__string__EndAt_12;
#line 4625 "string.m"
    MR_String mercury__string__Final_13;
#line 4625 "string.m"
    MR_Integer mercury__string__V_14_14;
#line 4625 "string.m"
    MR_Integer mercury__string__V_15_15;
#line 4625 "string.m"
    MR_Word mercury__string__V_16_16;
#line 4625 "string.m"
    MR_Word mercury__string__V_17_17;
#line 4625 "string.m"
    MR_Word mercury__string__V_18_18;
#line 4625 "string.m"
    MR_Word mercury__string__V_19_19;

#line 3191 "string.m"
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
#line 3191 "string.m"
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
#line 22585 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_9  = Index;
#line 3191 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4625 "string.m"
    if (mercury__string__succeeded)
#line 4625 "string.m"
      {
#line 4628 "string.m"
        mercury__string__V_14_14 = (MR_Integer) 0;
#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 22623 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_10  = SubString;
#line 4289 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22643 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_15_15  = Length;
#line 2589 "string.m"
}
#line 4630 "string.m"
        mercury__string__BeginAt_11 = (mercury__string__Index_9 + mercury__string__V_15_15);
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22665 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndAt_12  = Length;
#line 2589 "string.m"
}
#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 22694 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Final_13  = SubString;
#line 4289 "string.m"
}
#line 4634 "string.m"
        mercury__string__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4634 "string.m"
        {
#line 4634 "string.m"
          mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4634 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Final_13));
#line 4634 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__V_19_19));
#line 4634 "string.m"
        }
#line 4634 "string.m"
        {
#line 4634 "string.m"
          mercury__string__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4634 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_17_17, 0) = ((MR_Box) (mercury__string__Subst_7));
#line 4634 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_17_17, 1) = ((MR_Box) (mercury__string__V_18_18));
#line 4634 "string.m"
        }
#line 4634 "string.m"
        {
#line 4634 "string.m"
          mercury__string__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4634 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_16_16, 0) = ((MR_Box) (mercury__string__Initial_10));
#line 4634 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_16_16, 1) = ((MR_Box) (mercury__string__V_17_17));
#line 4634 "string.m"
        }
#line 4634 "string.m"
        {
#line 4634 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__V_16_16);
        }
#line 4634 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 4625 "string.m"
      }
#line 4625 "string.m"
    return mercury__string__succeeded;
#line 4625 "string.m"
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
#line 4619 "string.m"
  {
#line 4619 "string.m"
    MR_bool mercury__string__succeeded;
#line 4619 "string.m"
    MR_String mercury__string__HeadVar__3_3;
#line 4619 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4619 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4619 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4619 "string.m"
    MR_Integer mercury__string__End_16;
#line 4619 "string.m"
    MR_Integer mercury__string__Index_17;
#line 4106 "string.m"
    MR_String mercury__string___RightString_29;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22790 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2589 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22810 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_16  = Length;
#line 2589 "string.m"
}
#line 3166 "string.m"
    {
#line 3166 "string.m"
      mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_16, &mercury__string__Index_17);
    }
#line 3164 "string.m"
    mercury__string__V_8_8 = (mercury__string__End_16 - mercury__string__Index_17);
#line 4619 "string.m"
    mercury__string__V_6_6 = (mercury__string__V_7_7 - mercury__string__V_8_8);
#line 4106 "string.m"
    {
#line 4106 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__V_6_6, &mercury__string__HeadVar__3_3, &mercury__string___RightString_29);
    }
#line 4619 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4619 "string.m"
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
#line 4621 "string.m"
  {
#line 4621 "string.m"
    MR_bool mercury__string__succeeded;
#line 4621 "string.m"
    MR_String mercury__string__HeadVar__3_3;
#line 4621 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4621 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4621 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4621 "string.m"
    MR_Integer mercury__string__Length_24;
#line 4621 "string.m"
    MR_Integer mercury__string__LeftCount_25;
#line 4120 "string.m"
    MR_String mercury__string___LeftString_26;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22879 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2589 "string.m"
}
#line 3149 "string.m"
    {
#line 3149 "string.m"
      mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__V_8_8);
    }
#line 4621 "string.m"
    mercury__string__V_6_6 = (mercury__string__V_7_7 - mercury__string__V_8_8);
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22906 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_24  = Length;
#line 2589 "string.m"
}
#line 4119 "string.m"
    mercury__string__LeftCount_25 = (mercury__string__Length_24 - mercury__string__V_6_6);
#line 4120 "string.m"
    {
#line 4120 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__LeftCount_25, &mercury__string___LeftString_26, &mercury__string__HeadVar__3_3);
    }
#line 4621 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4621 "string.m"
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
#line 4610 "string.m"
  {
#line 4610 "string.m"
    MR_bool mercury__string__succeeded;
#line 4610 "string.m"
    MR_String mercury__string__S_4;
#line 4610 "string.m"
    MR_Integer mercury__string__L_5;
#line 4610 "string.m"
    MR_Integer mercury__string__R_6;
#line 4610 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4610 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4610 "string.m"
    MR_Integer mercury__string__End_21;
#line 4610 "string.m"
    MR_Integer mercury__string__Index_22;

#line 3149 "string.m"
    {
#line 3149 "string.m"
      mercury__string__prefix_length_loop__ho36_4_p_0(mercury__string__S0_3, (MR_Integer) 0, &mercury__string__L_5);
    }
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22971 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_21  = Length;
#line 2589 "string.m"
}
#line 3166 "string.m"
    {
#line 3166 "string.m"
      mercury__string__suffix_length_loop__ho37_4_p_0(mercury__string__S0_3, mercury__string__End_21, &mercury__string__Index_22);
    }
#line 3164 "string.m"
    mercury__string__R_6 = (mercury__string__End_21 - mercury__string__Index_22);
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 22998 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2589 "string.m"
}
#line 4613 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__R_6);
#line 4133 "string.m"
    {
#line 4133 "string.m"
      mercury__string__between_4_p_0(mercury__string__S0_3, mercury__string__L_5, mercury__string__V_9_9, &mercury__string__S_4);
    }
#line 4610 "string.m"
    return mercury__string__S_4;
#line 4610 "string.m"
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
#line 4615 "string.m"
  {
#line 4615 "string.m"
    MR_bool mercury__string__succeeded;
#line 4615 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 4615 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4615 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4615 "string.m"
    MR_Integer mercury__string__V_11_11;
#line 4615 "string.m"
    MR_Integer mercury__string__End_20;
#line 4615 "string.m"
    MR_Integer mercury__string__Index_21;
#line 4106 "string.m"
    MR_String mercury__string___RightString_33;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 23058 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2589 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 23078 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_20  = Length;
#line 2589 "string.m"
}
#line 3166 "string.m"
    {
#line 3166 "string.m"
      mercury__string__suffix_length_loop__ho37_4_p_0(mercury__string__S_3, mercury__string__End_20, &mercury__string__Index_21);
    }
#line 3164 "string.m"
    mercury__string__V_11_11 = (mercury__string__End_20 - mercury__string__Index_21);
#line 4619 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 4106 "string.m"
    {
#line 4106 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__V_9_9, &mercury__string__HeadVar__2_2, &mercury__string___RightString_33);
    }
#line 4615 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4615 "string.m"
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
#line 4617 "string.m"
  {
#line 4617 "string.m"
    MR_bool mercury__string__succeeded;
#line 4617 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 4617 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4617 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4617 "string.m"
    MR_Integer mercury__string__V_11_11;
#line 4617 "string.m"
    MR_Integer mercury__string__Length_28;
#line 4617 "string.m"
    MR_Integer mercury__string__LeftCount_29;
#line 4120 "string.m"
    MR_String mercury__string___LeftString_30;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 23145 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2589 "string.m"
}
#line 3149 "string.m"
    {
#line 3149 "string.m"
      mercury__string__prefix_length_loop__ho36_4_p_0(mercury__string__S_3, (MR_Integer) 0, &mercury__string__V_11_11);
    }
#line 4621 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 23172 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_28  = Length;
#line 2589 "string.m"
}
#line 4119 "string.m"
    mercury__string__LeftCount_29 = (mercury__string__Length_28 - mercury__string__V_9_9);
#line 4120 "string.m"
    {
#line 4120 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__LeftCount_29, &mercury__string___LeftString_30, &mercury__string__HeadVar__2_2);
    }
#line 4617 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4617 "string.m"
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
#line 4606 "string.m"
  {
#line 4606 "string.m"
    MR_bool mercury__string__succeeded;
#line 4606 "string.m"
    MR_String mercury__string__Chomp_4;
#line 4606 "string.m"
    MR_Integer mercury__string__Offset_5;
#line 4604 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4604 "string.m"
    MR_Char mercury__string__V_8_8;
#line 4604 "string.m"
    MR_Integer mercury__string__Len_18;
#line 4604 "string.m"
    MR_Integer mercury__string__V_19_19;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 23230 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_6_6  = Length;
#line 2589 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 23250 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_18  = Length;
#line 2589 "string.m"
}
#line 2212 "string.m"
    mercury__string__V_19_19 = (mercury__string__V_6_6 - (MR_Integer) 1);
#line 2323 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__V_19_19 ;
	Length =  mercury__string__Len_18 ;
		{
#line 2323 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 23281 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2323 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4604 "string.m"
    if (mercury__string__succeeded)
#line 4604 "string.m"
      {
#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 23322 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Offset_5  = PrevIndex;
	 mercury__string__V_8_8  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4604 "string.m"
        if (mercury__string__succeeded)
#line 4604 "string.m"
          mercury__string__succeeded = ((MR_Char) 10 == mercury__string__V_8_8);
#line 4604 "string.m"
      }
#line 4606 "string.m"
    if (mercury__string__succeeded)
#line 4106 "string.m"
      {
#line 4106 "string.m"
        MR_String mercury__string___RightString_35;

#line 4106 "string.m"
        {
#line 4106 "string.m"
          mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__Offset_5, &mercury__string__Chomp_4, &mercury__string___RightString_35);
        }
#line 4106 "string.m"
      }
#line 4606 "string.m"
    else
#line 4607 "string.m"
      mercury__string__Chomp_4 = mercury__string__S_3;
#line 4606 "string.m"
    return mercury__string__Chomp_4;
#line 4606 "string.m"
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
#line 4593 "string.m"
  {
#line 4593 "string.m"
    MR_bool mercury__string__succeeded;
#line 4593 "string.m"
    MR_Integer mercury__string__Length_9;

#line 4594 "string.m"
    {
#line 4594 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    }
#line 4595 "string.m"
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
#line 4599 "string.m"
    if (mercury__string__succeeded)
#line 4596 "string.m"
      {
#line 4596 "string.m"
        MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
#line 4596 "string.m"
        MR_String mercury__string__PadString_11;

#line 4597 "string.m"
        {
#line 4597 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
        }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_right_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__String0_5 ;
	S2 =  mercury__string__PadString_11 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 23425 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
#line 3399 "string.m"
}
#line 4596 "string.m"
      }
#line 4599 "string.m"
    else
#line 4600 "string.m"
      *mercury__string__String_8 = mercury__string__String0_5;
#line 4593 "string.m"
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
#line 4593 "string.m"
  {
#line 4593 "string.m"
    MR_bool mercury__string__succeeded;
#line 4593 "string.m"
    MR_String mercury__string__S2_8;
#line 4593 "string.m"
    MR_Integer mercury__string__Length_13;

#line 4594 "string.m"
    {
#line 4594 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    }
#line 4595 "string.m"
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
#line 4599 "string.m"
    if (mercury__string__succeeded)
#line 4596 "string.m"
      {
#line 4596 "string.m"
        MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
#line 4596 "string.m"
        MR_String mercury__string__PadString_15;

#line 4597 "string.m"
        {
#line 4597 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
        }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_right_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_5 ;
	S2 =  mercury__string__PadString_15 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 23504 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
#line 3399 "string.m"
}
#line 4596 "string.m"
      }
#line 4599 "string.m"
    else
#line 4600 "string.m"
      mercury__string__S2_8 = mercury__string__S1_5;
#line 4593 "string.m"
    return mercury__string__S2_8;
#line 4593 "string.m"
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
#line 4580 "string.m"
  {
#line 4580 "string.m"
    MR_bool mercury__string__succeeded;
#line 4580 "string.m"
    MR_Integer mercury__string__Length_9;

#line 4581 "string.m"
    {
#line 4581 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    }
#line 4582 "string.m"
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
#line 4586 "string.m"
    if (mercury__string__succeeded)
#line 4583 "string.m"
      {
#line 4583 "string.m"
        MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
#line 4583 "string.m"
        MR_String mercury__string__PadString_11;

#line 4584 "string.m"
        {
#line 4584 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
        }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_left_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_11 ;
	S2 =  mercury__string__String0_5 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 23585 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
#line 3399 "string.m"
}
#line 4583 "string.m"
      }
#line 4586 "string.m"
    else
#line 4587 "string.m"
      *mercury__string__String_8 = mercury__string__String0_5;
#line 4580 "string.m"
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
#line 4580 "string.m"
  {
#line 4580 "string.m"
    MR_bool mercury__string__succeeded;
#line 4580 "string.m"
    MR_String mercury__string__S2_8;
#line 4580 "string.m"
    MR_Integer mercury__string__Length_13;

#line 4581 "string.m"
    {
#line 4581 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    }
#line 4582 "string.m"
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
#line 4586 "string.m"
    if (mercury__string__succeeded)
#line 4583 "string.m"
      {
#line 4583 "string.m"
        MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
#line 4583 "string.m"
        MR_String mercury__string__PadString_15;

#line 4584 "string.m"
        {
#line 4584 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
        }
#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_left_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_15 ;
	S2 =  mercury__string__S1_5 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 23664 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
#line 3399 "string.m"
}
#line 4583 "string.m"
      }
#line 4586 "string.m"
    else
#line 4587 "string.m"
      mercury__string__S2_8 = mercury__string__S1_5;
#line 4580 "string.m"
    return mercury__string__S2_8;
#line 4580 "string.m"
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
#line 4563 "string.m"
  {
#line 4563 "string.m"
    MR_bool mercury__string__succeeded;
#line 4563 "string.m"
    MR_Word mercury__string__List_5;
#line 4563 "string.m"
    MR_Word mercury__string__ListLow_6;
#line 4563 "string.m"
    MR_String mercury__string__V_7_7;
#line 1505 "string.m"
    MR_String mercury__string__Str0_20;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1427 "string.m"
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
#line 23730 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1427 "string.m"
}
#line 4565 "string.m"
    {
#line 4565 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_5, &mercury__string__ListLow_6);
    }
#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_6, &mercury__string__Str0_20);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      mercury__string__V_7_7 = mercury__string__Str0_20;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1506 "string.m"
      }
#line 4566 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__StrOut_4, mercury__string__V_7_7) == 0);
#line 4563 "string.m"
    return mercury__string__succeeded;
#line 4563 "string.m"
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
#line 4563 "string.m"
  {
#line 4563 "string.m"
    MR_bool mercury__string__succeeded;
#line 4563 "string.m"
    MR_Word mercury__string__List_5;
#line 4563 "string.m"
    MR_Word mercury__string__ListLow_6;
#line 1505 "string.m"
    MR_String mercury__string__Str0_19;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1427 "string.m"
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
#line 23815 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1427 "string.m"
}
#line 4565 "string.m"
    {
#line 4565 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_5, &mercury__string__ListLow_6);
    }
#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_6, &mercury__string__Str0_19);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      *mercury__string__StrOut_4 = mercury__string__Str0_19;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1506 "string.m"
          return;
        }
#line 1506 "string.m"
      }
#line 4563 "string.m"
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
#line 4563 "string.m"
  {
#line 4563 "string.m"
    MR_bool mercury__string__succeeded;
#line 4563 "string.m"
    MR_String mercury__string__S2_4;
#line 4563 "string.m"
    MR_Word mercury__string__List_7;
#line 4563 "string.m"
    MR_Word mercury__string__ListLow_8;
#line 1505 "string.m"
    MR_String mercury__string__Str0_21;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S1_3 ;
		{
#line 1427 "string.m"
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
#line 23898 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_7  = CharList;
#line 1427 "string.m"
}
#line 4565 "string.m"
    {
#line 4565 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_7, &mercury__string__ListLow_8);
    }
#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_8, &mercury__string__Str0_21);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      mercury__string__S2_4 = mercury__string__Str0_21;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1506 "string.m"
      }
#line 4563 "string.m"
    return mercury__string__S2_4;
#line 4563 "string.m"
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
#line 4548 "string.m"
  {
#line 4548 "string.m"
    MR_bool mercury__string__succeeded;
#line 4548 "string.m"
    MR_Word mercury__string__List_5;
#line 4548 "string.m"
    MR_Word mercury__string__ListUpp_6;
#line 4548 "string.m"
    MR_String mercury__string__V_7_7;
#line 1505 "string.m"
    MR_String mercury__string__Str0_20;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1427 "string.m"
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
#line 23983 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1427 "string.m"
}
#line 4550 "string.m"
    {
#line 4550 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_5, &mercury__string__ListUpp_6);
    }
#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_6, &mercury__string__Str0_20);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      mercury__string__V_7_7 = mercury__string__Str0_20;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1506 "string.m"
      }
#line 4551 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__StrOut_4, mercury__string__V_7_7) == 0);
#line 4548 "string.m"
    return mercury__string__succeeded;
#line 4548 "string.m"
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
#line 4548 "string.m"
  {
#line 4548 "string.m"
    MR_bool mercury__string__succeeded;
#line 4548 "string.m"
    MR_Word mercury__string__List_5;
#line 4548 "string.m"
    MR_Word mercury__string__ListUpp_6;
#line 1505 "string.m"
    MR_String mercury__string__Str0_19;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1427 "string.m"
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
#line 24068 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1427 "string.m"
}
#line 4550 "string.m"
    {
#line 4550 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_5, &mercury__string__ListUpp_6);
    }
#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_6, &mercury__string__Str0_19);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      *mercury__string__StrOut_4 = mercury__string__Str0_19;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1506 "string.m"
          return;
        }
#line 1506 "string.m"
      }
#line 4548 "string.m"
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
#line 4548 "string.m"
  {
#line 4548 "string.m"
    MR_bool mercury__string__succeeded;
#line 4548 "string.m"
    MR_String mercury__string__S2_4;
#line 4548 "string.m"
    MR_Word mercury__string__List_7;
#line 4548 "string.m"
    MR_Word mercury__string__ListUpp_8;
#line 1505 "string.m"
    MR_String mercury__string__Str0_21;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S1_3 ;
		{
#line 1427 "string.m"
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
#line 24151 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_7  = CharList;
#line 1427 "string.m"
}
#line 4550 "string.m"
    {
#line 4550 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_7, &mercury__string__ListUpp_8);
    }
#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_8, &mercury__string__Str0_21);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      mercury__string__S2_4 = mercury__string__Str0_21;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1506 "string.m"
      }
#line 4548 "string.m"
    return mercury__string__S2_4;
#line 4548 "string.m"
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
#line 4541 "string.m"
  {
#line 4541 "string.m"
    MR_bool mercury__string__succeeded;
#line 4541 "string.m"
    MR_Char mercury__string__C_5;
#line 4541 "string.m"
    MR_String mercury__string__S1_6;

#line 3877 "string.m"
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
#line 3877 "string.m"
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
#line 24235 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
#line 3877 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4541 "string.m"
    if (mercury__string__succeeded)
#line 4539 "string.m"
      {
#line 4539 "string.m"
        MR_Char mercury__string__LowerC_7;
#line 64 "char.opt"
        MR_Char mercury__string__LowerChar_5_10;

#line 61 "char.opt"
        {
#line 61 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_1(&mercury__string__LowerChar_5_10, mercury__string__C_5);
        }
#line 64 "char.opt"
        if (mercury__string__succeeded)
#line 63 "char.opt"
          mercury__string__LowerC_7 = mercury__string__LowerChar_5_10;
#line 64 "char.opt"
        else
#line 65 "char.opt"
          mercury__string__LowerC_7 = mercury__string__C_5;
#line 3949 "string.m"
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__LowerC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
#line 3949 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 24287 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
#line 3949 "string.m"
}
#line 4539 "string.m"
      }
#line 4541 "string.m"
    else
#line 4542 "string.m"
      *mercury__string__S_4 = mercury__string__S0_3;
#line 4541 "string.m"
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
#line 4535 "string.m"
  {
#line 4535 "string.m"
    MR_bool mercury__string__succeeded;
#line 4535 "string.m"
    MR_String mercury__string__S2_4;

#line 4535 "string.m"
    {
#line 4535 "string.m"
      mercury__string__uncapitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    }
#line 4535 "string.m"
    return mercury__string__S2_4;
#line 4535 "string.m"
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
#line 4530 "string.m"
  {
#line 4530 "string.m"
    MR_bool mercury__string__succeeded;
#line 4530 "string.m"
    MR_Char mercury__string__C_5;
#line 4530 "string.m"
    MR_String mercury__string__S1_6;

#line 3877 "string.m"
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
#line 3877 "string.m"
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
#line 24376 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
#line 3877 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4530 "string.m"
    if (mercury__string__succeeded)
#line 4528 "string.m"
      {
#line 4528 "string.m"
        MR_Char mercury__string__UpperC_7;
#line 54 "char.opt"
        MR_Char mercury__string__UpperChar_5_10;

#line 51 "char.opt"
        {
#line 51 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_0(mercury__string__C_5, &mercury__string__UpperChar_5_10);
        }
#line 54 "char.opt"
        if (mercury__string__succeeded)
#line 53 "char.opt"
          mercury__string__UpperC_7 = mercury__string__UpperChar_5_10;
#line 54 "char.opt"
        else
#line 55 "char.opt"
          mercury__string__UpperC_7 = mercury__string__C_5;
#line 3949 "string.m"
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__UpperC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
#line 3949 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 24428 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
#line 3949 "string.m"
}
#line 4528 "string.m"
      }
#line 4530 "string.m"
    else
#line 4531 "string.m"
      *mercury__string__S_4 = mercury__string__S0_3;
#line 4530 "string.m"
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
#line 4524 "string.m"
  {
#line 4524 "string.m"
    MR_bool mercury__string__succeeded;
#line 4524 "string.m"
    MR_String mercury__string__S2_4;

#line 4524 "string.m"
    {
#line 4524 "string.m"
      mercury__string__capitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    }
#line 4524 "string.m"
    return mercury__string__S2_4;
#line 4524 "string.m"
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
#line 4509 "string.m"
  {
#line 4509 "string.m"
    MR_bool mercury__string__succeeded;
#line 4509 "string.m"
    MR_String mercury__string__Out_6;
#line 4509 "string.m"
    MR_Integer mercury__string__LeftCount_7;
#line 4509 "string.m"
    MR_String mercury__string__LeftString_8;
#line 4509 "string.m"
    MR_String mercury__string__RightString_9;
#line 4509 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4509 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 24511 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2589 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_4 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 24531 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2589 "string.m"
}
#line 4510 "string.m"
    mercury__string__LeftCount_7 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 4511 "string.m"
    {
#line 4511 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_5, mercury__string__LeftCount_7, &mercury__string__LeftString_8, &mercury__string__RightString_9);
    }
#line 4512 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__RightString_9, mercury__string__Suffix_4) == 0);
#line 4514 "string.m"
    if (mercury__string__succeeded)
#line 4513 "string.m"
      mercury__string__Out_6 = mercury__string__LeftString_8;
#line 4514 "string.m"
    else
#line 4515 "string.m"
      mercury__string__Out_6 = mercury__string__String_5;
#line 4509 "string.m"
    return mercury__string__Out_6;
#line 4509 "string.m"
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
#line 4505 "string.m"
  {
#line 4505 "string.m"
    MR_bool mercury__string__succeeded;
#line 4505 "string.m"
    MR_String mercury__string__StringWithoutSuffix_6;
#line 4505 "string.m"
    MR_String mercury__string__StringWithoutSuffixPrime_7;

#line 4503 "string.m"
    {
#line 4503 "string.m"
      mercury__string__succeeded = mercury__string__remove_suffix_3_p_0(mercury__string__String_4, mercury__string__Suffix_5, &mercury__string__StringWithoutSuffixPrime_7);
    }
#line 4505 "string.m"
    if (mercury__string__succeeded)
#line 4504 "string.m"
      mercury__string__StringWithoutSuffix_6 = mercury__string__StringWithoutSuffixPrime_7;
#line 4505 "string.m"
    else
#line 4506 "string.m"
      {
#line 4506 "string.m"
        {
#line 4506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_remove_suffix: string does not have given suffix");
        }
#line 4506 "string.m"
      }
#line 4505 "string.m"
    return mercury__string__StringWithoutSuffix_6;
#line 4505 "string.m"
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
#line 4498 "string.m"
  {
#line 4498 "string.m"
    MR_bool mercury__string__succeeded;
#line 4498 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4498 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4498 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4498 "string.m"
    MR_Integer mercury__string__Len_12;
#line 4498 "string.m"
    MR_Integer mercury__string__PreLen_13;
#line 4498 "string.m"
    MR_Integer mercury__string__V_14_14;
#line 4498 "string.m"
    MR_Integer mercury__string__V_15_15;
#line 4106 "string.m"
    MR_String mercury__string___RightString_43;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 24652 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2589 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 24672 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_13  = Length;
#line 2589 "string.m"
}
#line 4458 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_13 <= mercury__string__Len_12);
#line 4498 "string.m"
    if (mercury__string__succeeded)
#line 4498 "string.m"
      {
#line 4459 "string.m"
        mercury__string__V_14_14 = (MR_Integer) 0;
#line 4459 "string.m"
        mercury__string__V_15_15 = (mercury__string__Len_12 - mercury__string__PreLen_13);
#line 4459 "string.m"
        {
#line 4459 "string.m"
          mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_4, mercury__string__Suffix_5, mercury__string__V_14_14, mercury__string__V_15_15, mercury__string__PreLen_13);
        }
#line 4498 "string.m"
        if (mercury__string__succeeded)
#line 4498 "string.m"
          {
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 24711 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = Length;
#line 2589 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 24731 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = Length;
#line 2589 "string.m"
}
#line 4500 "string.m"
            mercury__string__V_7_7 = (mercury__string__V_8_8 - mercury__string__V_9_9);
#line 4106 "string.m"
            {
#line 4106 "string.m"
              mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__V_7_7, mercury__string__StringWithoutSuffix_6, &mercury__string___RightString_43);
            }
#line 4106 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4498 "string.m"
          }
#line 4498 "string.m"
      }
#line 4498 "string.m"
    return mercury__string__succeeded;
#line 4498 "string.m"
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
#line 4494 "string.m"
  {
#line 4494 "string.m"
    MR_bool mercury__string__succeeded;
#line 4494 "string.m"
    MR_String mercury__string__Out_6;
#line 4494 "string.m"
    MR_String mercury__string__Suffix_7;

#line 3347 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_prefix_if_present_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
#line 3347 "string.m"
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
#line 24806 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Suffix_7  = S2;
#line 3347 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4494 "string.m"
    if (mercury__string__succeeded)
#line 4493 "string.m"
      mercury__string__Out_6 = mercury__string__Suffix_7;
#line 4494 "string.m"
    else
#line 4495 "string.m"
      mercury__string__Out_6 = mercury__string__String_5;
#line 4494 "string.m"
    return mercury__string__Out_6;
#line 4494 "string.m"
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
#line 3343 "string.m"
  {
#line 3343 "string.m"
    MR_bool mercury__string__succeeded;

#line 3347 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_prefix_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
#line 3347 "string.m"
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
#line 24877 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Suffix_6  = S2;
#line 3347 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3343 "string.m"
    return mercury__string__succeeded;
#line 3343 "string.m"
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
#line 4460 "string.m"
  {
#line 4460 "string.m"
    MR_bool mercury__string__succeeded;
#line 4460 "string.m"
    MR_Integer mercury__string__Len_11;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 24927 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_11  = Length;
#line 2589 "string.m"
}
#line 4462 "string.m"
    {
#line 4462 "string.m"
      mercury__string__suffix_2_ioii_4_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__Len_11, mercury__string__Len_11, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4462 "string.m"
      return;
    }
#line 4460 "string.m"
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
#line 4455 "string.m"
  {
#line 4455 "string.m"
    MR_bool mercury__string__succeeded;
#line 4455 "string.m"
    MR_Integer mercury__string__Len_5;
#line 4455 "string.m"
    MR_Integer mercury__string__PreLen_6;
#line 4455 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4455 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 24981 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
#line 2589 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_2 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 25001 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
#line 2589 "string.m"
}
#line 4458 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
#line 4455 "string.m"
    if (mercury__string__succeeded)
#line 4455 "string.m"
      {
#line 4459 "string.m"
        mercury__string__V_7_7 = (MR_Integer) 0;
#line 4459 "string.m"
        mercury__string__V_8_8 = (mercury__string__Len_5 - mercury__string__PreLen_6);
#line 4459 "string.m"
        {
#line 4459 "string.m"
          return mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__V_7_7, mercury__string__V_8_8, mercury__string__PreLen_6);
        }
#line 4455 "string.m"
      }
#line 4455 "string.m"
    return mercury__string__succeeded;
#line 4455 "string.m"
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
#line 4429 "string.m"
  {
#line 4429 "string.m"
    MR_bool mercury__string__succeeded;

#line 4430 "string.m"
    {
#line 4430 "string.m"
      mercury__string__prefix_2_ioi_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, (MR_Integer) 0, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4430 "string.m"
      return;
    }
#line 4429 "string.m"
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
#line 4424 "string.m"
  {
#line 4424 "string.m"
    MR_bool mercury__string__succeeded;
#line 4424 "string.m"
    MR_Integer mercury__string__Len_5;
#line 4424 "string.m"
    MR_Integer mercury__string__PreLen_6;
#line 4424 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4424 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 25097 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
#line 2589 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Prefix_2 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 25117 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
#line 2589 "string.m"
}
#line 4427 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
#line 4424 "string.m"
    if (mercury__string__succeeded)
#line 4424 "string.m"
      {
#line 4428 "string.m"
        mercury__string__V_8_8 = (MR_Integer) 1;
#line 4428 "string.m"
        mercury__string__V_7_7 = (mercury__string__PreLen_6 - mercury__string__V_8_8);
#line 4428 "string.m"
        {
#line 4428 "string.m"
          return mercury__string__succeeded = mercury__string__prefix_2_iii_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, mercury__string__V_7_7);
        }
#line 4424 "string.m"
      }
#line 4424 "string.m"
    return mercury__string__succeeded;
#line 4424 "string.m"
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
#line 4401 "string.m"
  {
#line 4401 "string.m"
    MR_bool mercury__string__succeeded;
#line 4401 "string.m"
    MR_Word mercury__string__HeadVar__3_3;
#line 4401 "string.m"
    MR_Integer mercury__string__V_7_7;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Needle_4 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 25179 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2589 "string.m"
}
#line 4402 "string.m"
    {
#line 4402 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__split_at_string_loop_4_f_0((MR_Integer) 0, mercury__string__V_7_7, mercury__string__Needle_4, mercury__string__Total_5);
    }
#line 4401 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4401 "string.m"
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
#line 4398 "string.m"
  {
#line 4398 "string.m"
    MR_bool mercury__string__succeeded;
#line 4398 "string.m"
    MR_Word mercury__string__HeadVar__3_3;
#line 4398 "string.m"
    MR_Integer mercury__string__Len_12;
#line 4398 "string.m"
    MR_Word mercury__string__V_14_14;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_char_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 25231 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2589 "string.m"
}
#line 4368 "string.m"
    mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4368 "string.m"
    {
#line 4368 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_53_95_95_91_50_93_95_48_6_p_0(mercury__string__C_4, mercury__string__String_5, mercury__string__Len_12, mercury__string__Len_12, mercury__string__V_14_14, &mercury__string__HeadVar__3_3);
    }
#line 4398 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4398 "string.m"
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
#line 4366 "string.m"
  {
#line 4366 "string.m"
    MR_bool mercury__string__succeeded;
#line 4366 "string.m"
    MR_Word mercury__string__Substrings_6;
#line 4366 "string.m"
    MR_Integer mercury__string__Len_7;
#line 4366 "string.m"
    MR_Word mercury__string__V_9_9;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_separator_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 25285 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
#line 2589 "string.m"
}
#line 4368 "string.m"
    mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4368 "string.m"
    {
#line 4368 "string.m"
      mercury__string__split_at_separator_loop_6_p_0(mercury__string__DelimP_4, mercury__string__String_5, mercury__string__Len_7, mercury__string__Len_7, mercury__string__V_9_9, &mercury__string__Substrings_6);
    }
#line 4366 "string.m"
    return mercury__string__Substrings_6;
#line 4366 "string.m"
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
#line 4329 "string.m"
  {
#line 4329 "string.m"
    MR_bool mercury__string__succeeded;
#line 4329 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4329 "string.m"
    MR_Integer mercury__string__WordStart_10;

#line 4326 "string.m"
    {
#line 4326 "string.m"
      mercury__string__next_boundary__ho39_4_p_0(mercury__string__String_3, (MR_Integer) 0, &mercury__string__WordStart_10);
    }
#line 4327 "string.m"
    {
#line 4327 "string.m"
      mercury__string__words_loop__ho40_4_p_0(mercury__string__String_3, mercury__string__WordStart_10, &mercury__string__HeadVar__2_2);
    }
#line 4329 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4329 "string.m"
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
#line 4325 "string.m"
  {
#line 4325 "string.m"
    MR_bool mercury__string__succeeded;
#line 4325 "string.m"
    MR_Word mercury__string__Words_6;
#line 4325 "string.m"
    MR_Integer mercury__string__WordStart_7;

#line 4326 "string.m"
    {
#line 4326 "string.m"
      mercury__string__next_boundary_4_p_0(mercury__string__SepP_4, mercury__string__String_5, (MR_Integer) 0, &mercury__string__WordStart_7);
    }
#line 4327 "string.m"
    {
#line 4327 "string.m"
      mercury__string__words_loop_4_p_0(mercury__string__SepP_4, mercury__string__String_5, mercury__string__WordStart_7, &mercury__string__Words_6);
    }
#line 4325 "string.m"
    return mercury__string__Words_6;
#line 4325 "string.m"
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
#line 4320 "string.m"
  {
#line 4320 "string.m"
    MR_bool mercury__string__succeeded;
#line 4320 "string.m"
    MR_Integer mercury__string__V_9_9 = (mercury__string__Start_6 + mercury__string__Count_7);

#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 25416 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_8  = SubString;
#line 4289 "string.m"
}
#line 4320 "string.m"
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
#line 4317 "string.m"
  {
#line 4317 "string.m"
    MR_bool mercury__string__succeeded;
#line 4317 "string.m"
    MR_String mercury__string__SubString_8;
#line 4317 "string.m"
    MR_Integer mercury__string__V_9_9 = (mercury__string__Start_6 + mercury__string__Count_7);

#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 25470 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
#line 4289 "string.m"
}
#line 4317 "string.m"
    return mercury__string__SubString_8;
#line 4317 "string.m"
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
#line 4285 "string.m"
  {
#line 4285 "string.m"
    MR_bool mercury__string__succeeded;

#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 25524 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
#line 4289 "string.m"
}
#line 4285 "string.m"
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
#line 4285 "string.m"
  {
#line 4285 "string.m"
    MR_bool mercury__string__succeeded;
#line 4285 "string.m"
    MR_String mercury__string__SubString_8;

#line 4289 "string.m"
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
#line 4289 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 25576 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
#line 4289 "string.m"
}
#line 4285 "string.m"
    return mercury__string__SubString_8;
#line 4285 "string.m"
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
#line 4267 "string.m"
  {
#line 4267 "string.m"
    MR_bool mercury__string__succeeded;
#line 4267 "string.m"
    MR_Integer mercury__string__StartOffset_10;
#line 4267 "string.m"
    MR_Integer mercury__string__EndOffset_12;
#line 4270 "string.m"
    MR_Integer mercury__string__StartOffset0_9;
#line 4275 "string.m"
    MR_Integer mercury__string__EndOffset0_11;

#line 2780 "string.m"
    {
#line 2780 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Start_6, &mercury__string__StartOffset0_9);
    }
#line 4270 "string.m"
    if (mercury__string__succeeded)
#line 4269 "string.m"
      mercury__string__StartOffset_10 = mercury__string__StartOffset0_9;
#line 4270 "string.m"
    else
#line 4271 "string.m"
      mercury__string__StartOffset_10 = (MR_Integer) 0;
#line 2780 "string.m"
    {
#line 2780 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_7, &mercury__string__EndOffset0_11);
    }
#line 4275 "string.m"
    if (mercury__string__succeeded)
#line 4274 "string.m"
      mercury__string__EndOffset_12 = mercury__string__EndOffset0_11;
#line 4275 "string.m"
    else
#line 2585 "string.m"
      {
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__between_codepoints_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 25655 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndOffset_12  = Length;
#line 2589 "string.m"
}
#line 2585 "string.m"
      }
#line 4278 "string.m"
    {
#line 4278 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__StartOffset_10, mercury__string__EndOffset_12, mercury__string__SubString_8);
#line 4278 "string.m"
      return;
    }
#line 4267 "string.m"
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
#line 4265 "string.m"
  {
#line 4265 "string.m"
    MR_bool mercury__string__succeeded;
#line 4265 "string.m"
    MR_String mercury__string__SubString_8;

#line 4265 "string.m"
    {
#line 4265 "string.m"
      mercury__string__between_codepoints_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    }
#line 4265 "string.m"
    return mercury__string__SubString_8;
#line 4265 "string.m"
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
#line 4243 "string.m"
  {
#line 4243 "string.m"
    MR_bool mercury__string__succeeded;
#line 4243 "string.m"
    MR_Integer mercury__string__ClampStart_9;
#line 4243 "string.m"
    MR_Integer mercury__string__ClampEnd_10;

#line 4244 "string.m"
    {
#line 4244 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_9, &mercury__string__ClampEnd_10);
    }
#line 4245 "string.m"
    {
#line 4245 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_9, mercury__string__ClampEnd_10, mercury__string__SubString_8);
#line 4245 "string.m"
      return;
    }
#line 4243 "string.m"
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
#line 4243 "string.m"
  {
#line 4243 "string.m"
    MR_bool mercury__string__succeeded;
#line 4243 "string.m"
    MR_String mercury__string__SubString_8;
#line 4243 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4243 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4244 "string.m"
    {
#line 4244 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4245 "string.m"
    {
#line 4245 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, &mercury__string__SubString_8);
    }
#line 4243 "string.m"
    return mercury__string__SubString_8;
#line 4243 "string.m"
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
#line 4135 "string.m"
  {
#line 4135 "string.m"
    MR_bool mercury__string__succeeded;

#line 4139 "string.m"
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
#line 4139 "string.m"
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
#line 25837 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
#line 4139 "string.m"
}
#line 4135 "string.m"
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
#line 4133 "string.m"
  {
#line 4133 "string.m"
    MR_bool mercury__string__succeeded;
#line 4133 "string.m"
    MR_String mercury__string__SubString_8;

#line 4133 "string.m"
    {
#line 4133 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    }
#line 4133 "string.m"
    return mercury__string__SubString_8;
#line 4133 "string.m"
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
#line 4125 "string.m"
  {
#line 4125 "string.m"
    MR_bool mercury__string__succeeded;
#line 4125 "string.m"
    MR_Integer mercury__string__TotalCount_7;
#line 4125 "string.m"
    MR_Integer mercury__string__LeftCount_8;
#line 4128 "string.m"
    MR_String mercury__string___LeftString_9;

#line 4126 "string.m"
    {
#line 4126 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_7);
    }
#line 4127 "string.m"
    mercury__string__LeftCount_8 = (mercury__string__TotalCount_7 - mercury__string__RightCount_5);
#line 4128 "string.m"
    {
#line 4128 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
    }
#line 4125 "string.m"
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
#line 4125 "string.m"
  {
#line 4125 "string.m"
    MR_bool mercury__string__succeeded;
#line 4125 "string.m"
    MR_String mercury__string__RightString_6;
#line 4125 "string.m"
    MR_Integer mercury__string__TotalCount_10;
#line 4125 "string.m"
    MR_Integer mercury__string__LeftCount_11;
#line 4128 "string.m"
    MR_String mercury__string___LeftString_12;

#line 4126 "string.m"
    {
#line 4126 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_10);
    }
#line 4127 "string.m"
    mercury__string__LeftCount_11 = (mercury__string__TotalCount_10 - mercury__string__RightCount_5);
#line 4128 "string.m"
    {
#line 4128 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__RightString_6);
    }
#line 4125 "string.m"
    return mercury__string__RightString_6;
#line 4125 "string.m"
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
#line 4117 "string.m"
  {
#line 4117 "string.m"
    MR_bool mercury__string__succeeded;
#line 4117 "string.m"
    MR_Integer mercury__string__Length_7;
#line 4117 "string.m"
    MR_Integer mercury__string__LeftCount_8;
#line 4120 "string.m"
    MR_String mercury__string___LeftString_9;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__right_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 25994 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
#line 2589 "string.m"
}
#line 4119 "string.m"
    mercury__string__LeftCount_8 = (mercury__string__Length_7 - mercury__string__RightCount_5);
#line 4120 "string.m"
    {
#line 4120 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
    }
#line 4117 "string.m"
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
#line 4117 "string.m"
  {
#line 4117 "string.m"
    MR_bool mercury__string__succeeded;
#line 4117 "string.m"
    MR_String mercury__string__S2_6;
#line 4117 "string.m"
    MR_Integer mercury__string__Length_10;
#line 4117 "string.m"
    MR_Integer mercury__string__LeftCount_11;
#line 4120 "string.m"
    MR_String mercury__string___LeftString_12;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__right_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S1_4 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 26048 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_10  = Length;
#line 2589 "string.m"
}
#line 4119 "string.m"
    mercury__string__LeftCount_11 = (mercury__string__Length_10 - mercury__string__N_5);
#line 4120 "string.m"
    {
#line 4120 "string.m"
      mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__S2_6);
    }
#line 4117 "string.m"
    return mercury__string__S2_6;
#line 4117 "string.m"
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
#line 4112 "string.m"
  {
#line 4112 "string.m"
    MR_bool mercury__string__succeeded;
#line 4112 "string.m"
    MR_String mercury__string___RightString_7;

#line 4112 "string.m"
    {
#line 4112 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
    }
#line 4112 "string.m"
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
#line 4112 "string.m"
  {
#line 4112 "string.m"
    MR_bool mercury__string__succeeded;
#line 4112 "string.m"
    MR_String mercury__string__LeftString_6;
#line 4112 "string.m"
    MR_String mercury__string___RightString_10;

#line 4112 "string.m"
    {
#line 4112 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, &mercury__string__LeftString_6, &mercury__string___RightString_10);
    }
#line 4112 "string.m"
    return mercury__string__LeftString_6;
#line 4112 "string.m"
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
#line 4106 "string.m"
  {
#line 4106 "string.m"
    MR_bool mercury__string__succeeded;
#line 4106 "string.m"
    MR_String mercury__string___RightString_7;

#line 4106 "string.m"
    {
#line 4106 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
    }
#line 4106 "string.m"
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
#line 4106 "string.m"
  {
#line 4106 "string.m"
    MR_bool mercury__string__succeeded;
#line 4106 "string.m"
    MR_String mercury__string__S2_6;
#line 4106 "string.m"
    MR_String mercury__string___RightString_10;

#line 4106 "string.m"
    {
#line 4106 "string.m"
      mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__N_5, &mercury__string__S2_6, &mercury__string___RightString_10);
    }
#line 4106 "string.m"
    return mercury__string__S2_6;
#line 4106 "string.m"
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
#line 4092 "string.m"
  {
#line 4092 "string.m"
    MR_bool mercury__string__succeeded;
#line 4092 "string.m"
    MR_Integer mercury__string__Offset_9;

#line 2780 "string.m"
    {
#line 2780 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Count_6, &mercury__string__Offset_9);
    }
#line 4092 "string.m"
    if (mercury__string__succeeded)
#line 4091 "string.m"
      {
#line 4091 "string.m"
        mercury__string__split_4_p_0(mercury__string__Str_5, mercury__string__Offset_9, mercury__string__Left_7, mercury__string__Right_8);
#line 4091 "string.m"
        return;
      }
#line 4092 "string.m"
    else
#line 4095 "string.m"
      {
#line 4092 "string.m"
        mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
#line 4095 "string.m"
        if (mercury__string__succeeded)
#line 4093 "string.m"
          {
#line 4093 "string.m"
            *mercury__string__Left_7 = (MR_String) "";
#line 4094 "string.m"
            *mercury__string__Right_8 = mercury__string__Str_5;
#line 4093 "string.m"
          }
#line 4095 "string.m"
        else
#line 4096 "string.m"
          {
#line 4096 "string.m"
            *mercury__string__Left_7 = mercury__string__Str_5;
#line 4097 "string.m"
            *mercury__string__Right_8 = (MR_String) "";
#line 4096 "string.m"
          }
#line 4095 "string.m"
      }
#line 4092 "string.m"
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
#line 3988 "string.m"
  {
#line 3988 "string.m"
    MR_bool mercury__string__succeeded;

#line 3992 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_4_p_0

	MR_String Str;
	MR_Integer Count;
	MR_String Left;
	MR_String Right;

	Str =  mercury__string__Str_1 ;
	Count =  mercury__string__Count_2 ;
		{
#line 3992 "string.m"
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
#line 26306 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Left_3  = Left;
	 *mercury__string__Right_4  = Right;
#line 3992 "string.m"
}
#line 3988 "string.m"
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
#line 3945 "string.m"
  {
#line 3945 "string.m"
    MR_bool mercury__string__succeeded;

#line 3949 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_4

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__First_2 ;
	Rest =  mercury__string__Rest_3 ;
		{
#line 3949 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 26354 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_1  = Str;
#line 3949 "string.m"
}
#line 3945 "string.m"
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
#line 3873 "string.m"
  {
#line 3873 "string.m"
    MR_bool mercury__string__succeeded;

#line 3877 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_3

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
		{
#line 3877 "string.m"
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
#line 26409 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
	 *mercury__string__Rest_3  = Rest;
#line 3877 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3873 "string.m"
    return mercury__string__succeeded;
#line 3873 "string.m"
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
#line 3805 "string.m"
  {
#line 3805 "string.m"
    MR_bool mercury__string__succeeded;

#line 3809 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_2

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	First =  mercury__string__First_2 ;
		{
#line 3809 "string.m"
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
#line 26471 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Rest_3  = Rest;
#line 3809 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3805 "string.m"
    return mercury__string__succeeded;
#line 3805 "string.m"
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
#line 3742 "string.m"
  {
#line 3742 "string.m"
    MR_bool mercury__string__succeeded;

#line 3746 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_1

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Rest =  mercury__string__Rest_3 ;
		{
#line 3746 "string.m"

    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (First > 0 && strcmp(Str + pos, Rest) == 0);

#line 26522 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
#line 3746 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3742 "string.m"
    return mercury__string__succeeded;
#line 3742 "string.m"
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
#line 3685 "string.m"
  {
#line 3685 "string.m"
    MR_bool mercury__string__succeeded;

#line 3689 "string.m"
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
#line 3689 "string.m"

    MR_Integer pos = 0;
    int c = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (
        c == First &&
        First != '\0' &&
        strcmp(Str + pos, Rest) == 0
    );

#line 26578 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3689 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3685 "string.m"
    return mercury__string__succeeded;
#line 3685 "string.m"
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
#line 3586 "string.m"
  {
#line 3586 "string.m"
    MR_bool mercury__string__succeeded;
#line 3586 "string.m"
    MR_String mercury__string__Str_3;

#line 3590 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_2_f_0

	MR_String Sep;
	MR_Word Strs;
	MR_String Str;

	Sep =  mercury__string__Sep_1 ;
	Strs =  mercury__string__Strs_2 ;
		{
#line 3590 "string.m"
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
#line 26665 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_3  = Str;
#line 3590 "string.m"
}
#line 3586 "string.m"
    return mercury__string__Str_3;
#line 3586 "string.m"
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
#line 3578 "string.m"
  {
#line 3578 "string.m"
    MR_bool mercury__string__succeeded;

#line 3578 "string.m"
    {
#line 3578 "string.m"
      *mercury__string__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__string__Lists_3);
    }
#line 3578 "string.m"
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
#line 3506 "string.m"
  {
#line 3506 "string.m"
    MR_bool mercury__string__succeeded;
#line 3506 "string.m"
    MR_String mercury__string__Str_2;

#line 3510 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_list_1_f_0

	MR_Word Strs;
	MR_String Str;

	Strs =  mercury__string__Strs_1 ;
		{
#line 3510 "string.m"
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
#line 26752 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_2  = Str;
#line 3510 "string.m"
}
#line 3506 "string.m"
    return mercury__string__Str_2;
#line 3506 "string.m"
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
#line 3395 "string.m"
  {
#line 3395 "string.m"
    MR_bool mercury__string__succeeded;
#line 3395 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_43_43_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 26802 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
#line 3399 "string.m"
}
#line 3395 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3395 "string.m"
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
#line 3431 "string.m"
  {
#line 3431 "string.m"
    MR_bool mercury__string__succeeded;
#line 3431 "string.m"
    MR_Integer mercury__string__S3Len_19;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 26851 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_19  = Length;
#line 2589 "string.m"
}
#line 3433 "string.m"
    {
#line 3433 "string.m"
      mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_19, mercury__string__S1_1, mercury__string__S2_2, mercury__string__S3_3, mercury__string__cont, mercury__string__cont_env_ptr);
#line 3433 "string.m"
      return;
    }
#line 3431 "string.m"
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
#line 3395 "string.m"
  {
#line 3395 "string.m"
    MR_bool mercury__string__succeeded;

#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_2

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 26906 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
#line 3399 "string.m"
}
#line 3395 "string.m"
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
#line 3343 "string.m"
  {
#line 3343 "string.m"
    MR_bool mercury__string__succeeded;

#line 3347 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_1

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3347 "string.m"
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
#line 26964 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
#line 3347 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3343 "string.m"
    return mercury__string__succeeded;
#line 3343 "string.m"
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
#line 3300 "string.m"
  {
#line 3300 "string.m"
    MR_bool mercury__string__succeeded;

#line 3304 "string.m"
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
#line 3304 "string.m"
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}
#line 27018 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3304 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3300 "string.m"
    return mercury__string__succeeded;
#line 3300 "string.m"
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
#line 3395 "string.m"
  {
#line 3395 "string.m"
    MR_bool mercury__string__succeeded;
#line 3395 "string.m"
    MR_String mercury__string__S3_6;

#line 3399 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
#line 3399 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 27070 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3_6  = S3;
#line 3399 "string.m"
}
#line 3395 "string.m"
    return mercury__string__S3_6;
#line 3395 "string.m"
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
#line 3186 "string.m"
  {
#line 3186 "string.m"
    MR_bool mercury__string__succeeded;

#line 3191 "string.m"
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
#line 3191 "string.m"
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
#line 27131 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
#line 3191 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3186 "string.m"
    return mercury__string__succeeded;
#line 3186 "string.m"
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
#line 3183 "string.m"
  {
#line 3183 "string.m"
    MR_bool mercury__string__succeeded;

#line 3191 "string.m"
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
#line 3191 "string.m"
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
#line 27193 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_6  = Index;
#line 3191 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3183 "string.m"
    return mercury__string__succeeded;
#line 3183 "string.m"
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
#line 3164 "string.m"
  {
#line 3164 "string.m"
    MR_bool mercury__string__succeeded;
#line 3164 "string.m"
    MR_Integer mercury__string__HeadVar__3_3;
#line 3164 "string.m"
    MR_Integer mercury__string__End_6;
#line 3164 "string.m"
    MR_Integer mercury__string__Index_7;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_length_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 27243 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_6  = Length;
#line 2589 "string.m"
}
#line 3166 "string.m"
    {
#line 3166 "string.m"
      mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_6, &mercury__string__Index_7);
    }
#line 3164 "string.m"
    mercury__string__HeadVar__3_3 = (mercury__string__End_6 - mercury__string__Index_7);
#line 3164 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3164 "string.m"
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
#line 3148 "string.m"
  {
#line 3148 "string.m"
    MR_bool mercury__string__succeeded;
#line 3148 "string.m"
    MR_Integer mercury__string__Index_6;

#line 3149 "string.m"
    {
#line 3149 "string.m"
      mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__Index_6);
    }
#line 3148 "string.m"
    return mercury__string__Index_6;
#line 3148 "string.m"
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
#line 3095 "string.m"
  {
#line 3095 "string.m"
    MR_bool mercury__string__succeeded;

#line 3099 "string.m"
{
#define MR_PROC_LABEL mercury__string__contains_char_2_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Ch =  mercury__string__Ch_2 ;
		{
#line 3099 "string.m"

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

#line 27330 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3099 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3095 "string.m"
    return mercury__string__succeeded;
#line 3095 "string.m"
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
#line 3076 "string.m"
  {
#line 3076 "string.m"
    MR_bool mercury__string__succeeded;

#line 3077 "string.m"
    {
#line 3077 "string.m"
      return mercury__string__succeeded = mercury__string__all_match_loop_3_p_0(mercury__string__P_3, mercury__string__String_4, (MR_Integer) 0);
    }
#line 3076 "string.m"
    return mercury__string__succeeded;
#line 3076 "string.m"
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
#line 3050 "string.m"
  {
#line 3050 "string.m"
    MR_bool mercury__string__succeeded;

#line 3054 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_digits_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 3054 "string.m"

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

#line 27410 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3054 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3050 "string.m"
    return mercury__string__succeeded;
#line 3050 "string.m"
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
#line 3009 "string.m"
  {
#line 3009 "string.m"
    MR_bool mercury__string__succeeded;

#line 3013 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alnum_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 3013 "string.m"

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

#line 27480 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3013 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3009 "string.m"
    return mercury__string__succeeded;
#line 3009 "string.m"
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
#line 2972 "string.m"
  {
#line 2972 "string.m"
    MR_bool mercury__string__succeeded;

#line 2976 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alpha_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2976 "string.m"

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

#line 27547 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2976 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2972 "string.m"
    return mercury__string__succeeded;
#line 2972 "string.m"
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
#line 2969 "string.m"
  {
#line 2969 "string.m"
    MR_bool mercury__string__succeeded;

#line 3077 "string.m"
    {
#line 3077 "string.m"
      return mercury__string__succeeded = mercury__string__all_match_loop__ho34_3_p_0(mercury__string__S_2, (MR_Integer) 0);
    }
#line 2969 "string.m"
    return mercury__string__succeeded;
#line 2969 "string.m"
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
#line 2934 "string.m"
  {
#line 2934 "string.m"
    MR_bool mercury__string__succeeded;

#line 2938 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alpha_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2938 "string.m"

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

#line 27636 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2938 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2934 "string.m"
    return mercury__string__succeeded;
#line 2934 "string.m"
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
#line 2932 "string.m"
  {
#line 2932 "string.m"
    MR_bool mercury__string__succeeded = (strcmp(mercury__string__HeadVar__1_1, (MR_String) "") == 0);

#line 2932 "string.m"
    return mercury__string__succeeded;
#line 2932 "string.m"
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
#line 2907 "string.m"
  {
#line 2907 "string.m"
    MR_bool mercury__string__succeeded;
#line 2907 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2907 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2907 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash6_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 27702 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2589 "string.m"
}
#line 2909 "string.m"
    {
#line 2909 "string.m"
      mercury__string__hash6_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2910 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2907 "string.m"
    return mercury__string__HashVal_4;
#line 2907 "string.m"
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
#line 2889 "string.m"
  {
#line 2889 "string.m"
    MR_bool mercury__string__succeeded;
#line 2889 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2889 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2889 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash5_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 27754 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2589 "string.m"
}
#line 2891 "string.m"
    {
#line 2891 "string.m"
      mercury__string__hash5_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2892 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2889 "string.m"
    return mercury__string__HashVal_4;
#line 2889 "string.m"
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
#line 2870 "string.m"
  {
#line 2870 "string.m"
    MR_bool mercury__string__succeeded;
#line 2870 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2870 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2870 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash4_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 27806 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2589 "string.m"
}
#line 2872 "string.m"
    {
#line 2872 "string.m"
      mercury__string__hash4_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2873 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2870 "string.m"
    return mercury__string__HashVal_4;
#line 2870 "string.m"
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
#line 2848 "string.m"
  {
#line 2848 "string.m"
    MR_bool mercury__string__succeeded;
#line 2848 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2848 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2848 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash3_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 27858 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2589 "string.m"
}
#line 2850 "string.m"
    {
#line 2850 "string.m"
      mercury__string__hash3_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2851 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2848 "string.m"
    return mercury__string__HashVal_4;
#line 2848 "string.m"
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
#line 2830 "string.m"
  {
#line 2830 "string.m"
    MR_bool mercury__string__succeeded;
#line 2830 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2830 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2830 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash2_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 27910 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2589 "string.m"
}
#line 2832 "string.m"
    {
#line 2832 "string.m"
      mercury__string__hash2_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2833 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2830 "string.m"
    return mercury__string__HashVal_4;
#line 2830 "string.m"
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
#line 2812 "string.m"
  {
#line 2812 "string.m"
    MR_bool mercury__string__succeeded;
#line 2812 "string.m"
    MR_Integer mercury__string__Length_7;
#line 2812 "string.m"
    MR_Integer mercury__string__HashVal1_8;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 27962 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
#line 2589 "string.m"
}
#line 2814 "string.m"
    {
#line 2814 "string.m"
      mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_7, (MR_Integer) 0, &mercury__string__HashVal1_8);
    }
#line 2815 "string.m"
    *mercury__string__HashVal_4 = (mercury__string__HashVal1_8 ^ mercury__string__Length_7);
#line 2812 "string.m"
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
#line 2812 "string.m"
  {
#line 2812 "string.m"
    MR_bool mercury__string__succeeded;
#line 2812 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2812 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2812 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 28012 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2589 "string.m"
}
#line 2814 "string.m"
    {
#line 2814 "string.m"
      mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2815 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2812 "string.m"
    return mercury__string__HashVal_4;
#line 2812 "string.m"
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
#line 2777 "string.m"
  {
#line 2777 "string.m"
    MR_bool mercury__string__succeeded;

#line 2780 "string.m"
    {
#line 2780 "string.m"
      return mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__String_4, (MR_Integer) 0, mercury__string__N_5, mercury__string__Index_6);
    }
#line 2777 "string.m"
    return mercury__string__succeeded;
#line 2777 "string.m"
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
#line 2731 "string.m"
  {
#line 2731 "string.m"
    MR_bool mercury__string__succeeded;

#line 2734 "string.m"
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
#line 2734 "string.m"

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

#line 28110 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
#line 2734 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2731 "string.m"
    return mercury__string__succeeded;
#line 2731 "string.m"
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
#line 2701 "string.m"
  {
#line 2701 "string.m"
    MR_bool mercury__string__succeeded;
#line 2701 "string.m"
    MR_Integer mercury__string__Length_2;

#line 2704 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2704 "string.m"

    Length = strlen(Str);

#line 28154 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_2  = Length;
#line 2704 "string.m"
}
#line 2701 "string.m"
    return mercury__string__Length_2;
#line 2701 "string.m"
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
#line 2651 "string.m"
  {
#line 2651 "string.m"
    MR_bool mercury__string__succeeded;

#line 2654 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_codepoints_2_p_0

	MR_String String;
	MR_Integer Count;

	String =  mercury__string__String_1 ;
		{
#line 2654 "string.m"

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

#line 28207 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Count_2  = Count;
#line 2654 "string.m"
}
#line 2651 "string.m"
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
#line 2649 "string.m"
  {
#line 2649 "string.m"
    MR_bool mercury__string__succeeded;
#line 2649 "string.m"
    MR_Integer mercury__string__Count_4;

#line 2649 "string.m"
    {
#line 2649 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_3, &mercury__string__Count_4);
    }
#line 2649 "string.m"
    return mercury__string__Count_4;
#line 2649 "string.m"
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
#line 2585 "string.m"
  {
#line 2585 "string.m"
    MR_bool mercury__string__succeeded;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_code_units_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 28272 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_4  = Length;
#line 2589 "string.m"
}
#line 2585 "string.m"
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
#line 2585 "string.m"
  {
#line 2585 "string.m"
    MR_bool mercury__string__succeeded;
#line 2585 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 28311 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Length;
#line 2589 "string.m"
}
#line 2585 "string.m"
    return mercury__string__HeadVar__2_2;
#line 2585 "string.m"
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
#line 2611 "string.m"
  {
#line 2611 "string.m"
    MR_bool mercury__string__succeeded;

#line 2615 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2615 "string.m"

    Length = strlen(Str);

#line 28352 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
#line 2615 "string.m"
}
#line 2611 "string.m"
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
#line 2585 "string.m"
  {
#line 2585 "string.m"
    MR_bool mercury__string__succeeded;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 28391 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
#line 2589 "string.m"
}
#line 2585 "string.m"
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
#line 2585 "string.m"
  {
#line 2585 "string.m"
    MR_bool mercury__string__succeeded;
#line 2585 "string.m"
    MR_Integer mercury__string__L_4;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 28430 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__L_4  = Length;
#line 2589 "string.m"
}
#line 2585 "string.m"
    return mercury__string__L_4;
#line 2585 "string.m"
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
#line 2504 "string.m"
  {
#line 2504 "string.m"
    MR_bool mercury__string__succeeded;

#line 29 "char.opt"
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 29 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 28477 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 29 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2504 "string.m"
    if (mercury__string__succeeded)
#line 2503 "string.m"
      {
#line 2503 "string.m"
        {
#line 2503 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_set_char: null character");
#line 2503 "string.m"
          return;
        }
#line 2503 "string.m"
      }
#line 2504 "string.m"
    else
#line 2514 "string.m"
      {
#line 2518 "string.m"
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
#line 2518 "string.m"

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

#line 28538 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
#line 2518 "string.m"
}
#line 2514 "string.m"
      }
#line 2504 "string.m"
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
#line 2504 "string.m"
  {
#line 2504 "string.m"
    MR_bool mercury__string__succeeded;
#line 2504 "string.m"
    MR_String mercury__string__S_8;

#line 29 "char.opt"
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_3_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__C_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 29 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 28585 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 29 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2504 "string.m"
    if (mercury__string__succeeded)
#line 2503 "string.m"
      {
#line 2503 "string.m"
        {
#line 2503 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_set_char: null character");
        }
#line 2503 "string.m"
      }
#line 2504 "string.m"
    else
#line 2514 "string.m"
      {
#line 2518 "string.m"
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
#line 2518 "string.m"

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

#line 28644 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_8  = Str;
#line 2518 "string.m"
}
#line 2514 "string.m"
      }
#line 2504 "string.m"
    return mercury__string__S_8;
#line 2504 "string.m"
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
#line 2492 "string.m"
  {
#line 2492 "string.m"
    MR_bool mercury__string__succeeded;
#line 2492 "string.m"
    MR_String mercury__string__String1_9;

#line 29 "char.opt"
{
#define MR_PROC_LABEL mercury__string__det_set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 29 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 28695 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 29 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2380 "string.m"
    if (mercury__string__succeeded)
#line 2379 "string.m"
      {
#line 2379 "string.m"
        {
#line 2379 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.set_char: null character");
#line 2379 "string.m"
          return;
        }
#line 2379 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2379 "string.m"
      }
#line 2380 "string.m"
    else
#line 2390 "string.m"
      {
#line 2394 "string.m"
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
#line 2394 "string.m"

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

#line 28766 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__String1_9  = Str;
#line 2394 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2390 "string.m"
      }
#line 2492 "string.m"
    if (mercury__string__succeeded)
#line 2491 "string.m"
      *mercury__string__String_8 = mercury__string__String1_9;
#line 2492 "string.m"
    else
#line 2493 "string.m"
      {
#line 2493 "string.m"
        {
#line 2493 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_set_char: index out of range");
#line 2493 "string.m"
          return;
        }
#line 2493 "string.m"
      }
#line 2492 "string.m"
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
#line 2487 "string.m"
  {
#line 2487 "string.m"
    MR_bool mercury__string__succeeded;
#line 2487 "string.m"
    MR_String mercury__string__S_8;

#line 2487 "string.m"
    {
#line 2487 "string.m"
      mercury__string__det_set_char_4_p_0(mercury__string__C_5, mercury__string__N_6, mercury__string__S0_7, &mercury__string__S_8);
    }
#line 2487 "string.m"
    return mercury__string__S_8;
#line 2487 "string.m"
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
#line 2380 "string.m"
  {
#line 2380 "string.m"
    MR_bool mercury__string__succeeded;

#line 29 "char.opt"
{
#define MR_PROC_LABEL mercury__string__set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 29 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 28863 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 29 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2380 "string.m"
    if (mercury__string__succeeded)
#line 2379 "string.m"
      {
#line 2379 "string.m"
        {
#line 2379 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.set_char: null character");
        }
#line 2379 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2379 "string.m"
      }
#line 2380 "string.m"
    else
#line 2390 "string.m"
      {
#line 2394 "string.m"
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
#line 2394 "string.m"

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

#line 28932 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
#line 2394 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2390 "string.m"
      }
#line 2380 "string.m"
    return mercury__string__succeeded;
#line 2380 "string.m"
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
#line 2346 "string.m"
  {
#line 2346 "string.m"
    MR_bool mercury__string__succeeded;

#line 2349 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_code_unit_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 2349 "string.m"

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];

#line 28983 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Code_3  = Code;
#line 2349 "string.m"
}
#line 2346 "string.m"
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
#line 2218 "string.m"
  {
#line 2218 "string.m"
    MR_bool mercury__string__succeeded;

#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 29041 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__PrevIndex_3  = PrevIndex;
	 *mercury__string__Ch_4  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2218 "string.m"
    return mercury__string__succeeded;
#line 2218 "string.m"
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
#line 2210 "string.m"
  {
#line 2210 "string.m"
    MR_bool mercury__string__succeeded;
#line 2210 "string.m"
    MR_Integer mercury__string__Len_9;
#line 2210 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 29094 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
#line 2589 "string.m"
}
#line 2212 "string.m"
    mercury__string__V_10_10 = (mercury__string__Index_6 - (MR_Integer) 1);
#line 2323 "string.m"
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__V_10_10 ;
	Length =  mercury__string__Len_9 ;
		{
#line 2323 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 29125 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2323 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2210 "string.m"
    if (mercury__string__succeeded)
#line 2210 "string.m"
      {
#line 2222 "string.m"
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
#line 2222 "string.m"

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

#line 29166 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__CharIndex_7  = PrevIndex;
	 *mercury__string__Char_8  = Ch;
#line 2222 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2210 "string.m"
      }
#line 2210 "string.m"
    return mercury__string__succeeded;
#line 2210 "string.m"
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
#line 2129 "string.m"
  {
#line 2129 "string.m"
    MR_bool mercury__string__succeeded;

#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 29229 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__NextIndex_3  = NextIndex;
	 *mercury__string__Ch_4  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2129 "string.m"
    return mercury__string__succeeded;
#line 2129 "string.m"
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
#line 2121 "string.m"
  {
#line 2121 "string.m"
    MR_bool mercury__string__succeeded;
#line 2121 "string.m"
    MR_Integer mercury__string__Len_9;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 29280 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
#line 2589 "string.m"
}
#line 2323 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_6 ;
	Length =  mercury__string__Len_9 ;
		{
#line 2323 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 29309 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2323 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2121 "string.m"
    if (mercury__string__succeeded)
#line 2121 "string.m"
      {
#line 2133 "string.m"
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
#line 2133 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 29347 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__NextIndex_7  = NextIndex;
	 *mercury__string__Char_8  = Ch;
#line 2133 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2121 "string.m"
      }
#line 2121 "string.m"
    return mercury__string__succeeded;
#line 2121 "string.m"
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
#line 2059 "string.m"
  {
#line 2059 "string.m"
    MR_bool mercury__string__succeeded;
#line 2059 "string.m"
    MR_Char mercury__string__HeadVar__3_3;
#line 2059 "string.m"
    MR_Char mercury__string__CharPrime_12;

#line 2069 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_elem_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 2069 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 29406 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_12  = Ch;
#line 2069 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2059 "string.m"
    if (mercury__string__succeeded)
#line 2058 "string.m"
      mercury__string__HeadVar__3_3 = mercury__string__CharPrime_12;
#line 2059 "string.m"
    else
#line 2060 "string.m"
      {
#line 2060 "string.m"
        {
#line 2060 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
        }
#line 2060 "string.m"
      }
#line 2059 "string.m"
    return mercury__string__HeadVar__3_3;
#line 2059 "string.m"
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
#line 2116 "string.m"
  {
#line 2116 "string.m"
    MR_bool mercury__string__succeeded;
#line 2116 "string.m"
    MR_Char mercury__string__HeadVar__3_3;

#line 2116 "string.m"
    {
#line 2116 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__det_index_2_f_0(mercury__string__String_4, mercury__string__Index_5);
    }
#line 2116 "string.m"
    return mercury__string__HeadVar__3_3;
#line 2116 "string.m"
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
#line 2059 "string.m"
  {
#line 2059 "string.m"
    MR_bool mercury__string__succeeded;
#line 2059 "string.m"
    MR_Char mercury__string__CharPrime_7;

#line 2069 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 2069 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 29505 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_7  = Ch;
#line 2069 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2059 "string.m"
    if (mercury__string__succeeded)
#line 2058 "string.m"
      *mercury__string__Char_6 = mercury__string__CharPrime_7;
#line 2059 "string.m"
    else
#line 2060 "string.m"
      {
#line 2060 "string.m"
        {
#line 2060 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
#line 2060 "string.m"
          return;
        }
#line 2060 "string.m"
      }
#line 2059 "string.m"
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
#line 2059 "string.m"
  {
#line 2059 "string.m"
    MR_bool mercury__string__succeeded;
#line 2059 "string.m"
    MR_Char mercury__string__C_6;
#line 2059 "string.m"
    MR_Char mercury__string__CharPrime_10;

#line 2069 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{
#line 2069 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 29576 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_10  = Ch;
#line 2069 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2059 "string.m"
    if (mercury__string__succeeded)
#line 2058 "string.m"
      mercury__string__C_6 = mercury__string__CharPrime_10;
#line 2059 "string.m"
    else
#line 2060 "string.m"
      {
#line 2060 "string.m"
        {
#line 2060 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
        }
#line 2060 "string.m"
      }
#line 2059 "string.m"
    return mercury__string__C_6;
#line 2059 "string.m"
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
#line 2049 "string.m"
  {
#line 2049 "string.m"
    MR_bool mercury__string__succeeded;
#line 2049 "string.m"
    MR_Char mercury__string__Char0_7;
#line 2035 "string.m"
    MR_Integer mercury__string__Len_12;
#line 2059 "string.m"
    MR_Char mercury__string__CharPrime_24;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 29643 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2589 "string.m"
}
#line 2323 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Int_5 ;
	Length =  mercury__string__Len_12 ;
		{
#line 2323 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 29672 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2323 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2035 "string.m"
    if (mercury__string__succeeded)
#line 2035 "string.m"
      {
#line 2069 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Int_5 ;
		{
#line 2069 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 29706 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_24  = Ch;
#line 2069 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2059 "string.m"
        if (mercury__string__succeeded)
#line 2058 "string.m"
          mercury__string__Char0_7 = mercury__string__CharPrime_24;
#line 2059 "string.m"
        else
#line 2060 "string.m"
          {
#line 2060 "string.m"
            {
#line 2060 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
#line 2060 "string.m"
              return;
            }
#line 2060 "string.m"
          }
#line 2059 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2035 "string.m"
      }
#line 2049 "string.m"
    if (mercury__string__succeeded)
#line 2048 "string.m"
      *mercury__string__Char_6 = mercury__string__Char0_7;
#line 2049 "string.m"
    else
#line 2050 "string.m"
      {
#line 2050 "string.m"
        {
#line 2050 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
#line 2050 "string.m"
          return;
        }
#line 2050 "string.m"
      }
#line 2049 "string.m"
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
#line 2049 "string.m"
  {
#line 2049 "string.m"
    MR_bool mercury__string__succeeded;
#line 2049 "string.m"
    MR_Char mercury__string__C_6;
#line 2049 "string.m"
    MR_Char mercury__string__Char0_10;
#line 2035 "string.m"
    MR_Integer mercury__string__Len_15;
#line 2059 "string.m"
    MR_Char mercury__string__CharPrime_27;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_4 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 29794 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_15  = Length;
#line 2589 "string.m"
}
#line 2323 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__N_5 ;
	Length =  mercury__string__Len_15 ;
		{
#line 2323 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 29823 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2323 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2035 "string.m"
    if (mercury__string__succeeded)
#line 2035 "string.m"
      {
#line 2069 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{
#line 2069 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 29857 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_27  = Ch;
#line 2069 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2059 "string.m"
        if (mercury__string__succeeded)
#line 2058 "string.m"
          mercury__string__Char0_10 = mercury__string__CharPrime_27;
#line 2059 "string.m"
        else
#line 2060 "string.m"
          {
#line 2060 "string.m"
            {
#line 2060 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 2060 "string.m"
          }
#line 2059 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2035 "string.m"
      }
#line 2049 "string.m"
    if (mercury__string__succeeded)
#line 2048 "string.m"
      mercury__string__C_6 = mercury__string__Char0_10;
#line 2049 "string.m"
    else
#line 2050 "string.m"
      {
#line 2050 "string.m"
        {
#line 2050 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
        }
#line 2050 "string.m"
      }
#line 2049 "string.m"
    return mercury__string__C_6;
#line 2049 "string.m"
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
#line 2035 "string.m"
  {
#line 2035 "string.m"
    MR_bool mercury__string__succeeded;
#line 2035 "string.m"
    MR_Integer mercury__string__Len_7;
#line 2059 "string.m"
    MR_Char mercury__string__CharPrime_19;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_4 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 29941 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
#line 2589 "string.m"
}
#line 2323 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_5 ;
	Length =  mercury__string__Len_7 ;
		{
#line 2323 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 29970 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2323 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2035 "string.m"
    if (mercury__string__succeeded)
#line 2035 "string.m"
      {
#line 2069 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 2069 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 30004 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_19  = Ch;
#line 2069 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2059 "string.m"
        if (mercury__string__succeeded)
#line 2058 "string.m"
          *mercury__string__Char_6 = mercury__string__CharPrime_19;
#line 2059 "string.m"
        else
#line 2060 "string.m"
          {
#line 2060 "string.m"
            {
#line 2060 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 2060 "string.m"
          }
#line 2059 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2035 "string.m"
      }
#line 2035 "string.m"
    return mercury__string__succeeded;
#line 2035 "string.m"
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
#line 2018 "string.m"
  {
#line 2018 "string.m"
    MR_bool mercury__string__succeeded;
#line 2018 "string.m"
    MR_Word mercury__string__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 2018 "string.m"
    MR_Word mercury__string__V_7_7;
#line 2018 "string.m"
    MR_Word mercury__string__V_6_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1505 "string.m"
    MR_String mercury__string__Str0_23;

#line 150 "list.opt"
    {
#line 150 "list.opt"
      mercury__string__V_7_7 = mercury__list__duplicate_2_3_f_0(mercury__string__TypeCtorInfo_8_8, mercury__string__Count_5, ((MR_Box) (MR_Word) (mercury__string__Char_4)), mercury__string__V_6_15);
    }
#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_7_7, &mercury__string__Str0_23);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      *mercury__string__String_6 = mercury__string__Str0_23;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1506 "string.m"
          return;
        }
#line 1506 "string.m"
      }
#line 2018 "string.m"
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
#line 2016 "string.m"
  {
#line 2016 "string.m"
    MR_bool mercury__string__succeeded;
#line 2016 "string.m"
    MR_String mercury__string__S_6;

#line 2016 "string.m"
    {
#line 2016 "string.m"
      mercury__string__duplicate_char_3_p_0(mercury__string__C_4, mercury__string__N_5, &mercury__string__S_6);
    }
#line 2016 "string.m"
    return mercury__string__S_6;
#line 2016 "string.m"
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
#line 1985 "string.m"
  {
#line 1985 "string.m"
    MR_bool mercury__string__succeeded;

#line 1384 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_utf16_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1384 "string.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 30149 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1384 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1985 "string.m"
    if (mercury__string__succeeded)
#line 1983 "string.m"
      {
#line 1983 "string.m"
        MR_Word mercury__string__RevChars_5;
#line 1983 "string.m"
        MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1643 "string.m"
        MR_String mercury__string__Str0_9;

#line 1983 "string.m"
        {
#line 1983 "string.m"
          mercury__string__succeeded = mercury__string__decode_utf16_3_p_0(mercury__string__CodeList_3, mercury__string__V_6_6, &mercury__string__RevChars_5);
        }
#line 1983 "string.m"
        if (mercury__string__succeeded)
#line 1983 "string.m"
          {
#line 1641 "string.m"
            {
#line 1641 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__RevChars_5, &mercury__string__Str0_9);
            }
#line 1643 "string.m"
            if (mercury__string__succeeded)
#line 1642 "string.m"
              *mercury__string__String_4 = mercury__string__Str0_9;
#line 1643 "string.m"
            else
#line 1644 "string.m"
              {
#line 1644 "string.m"
                {
#line 1644 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
                }
#line 1644 "string.m"
              }
#line 1643 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 1983 "string.m"
          }
#line 1983 "string.m"
      }
#line 1985 "string.m"
    else
#line 1986 "string.m"
      {
#line 1986 "string.m"
        return mercury__string__succeeded = mercury__string__from_code_unit_list_2_p_0(mercury__string__CodeList_3, mercury__string__String_4);
      }
#line 1985 "string.m"
    return mercury__string__succeeded;
#line 1985 "string.m"
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
#line 1928 "string.m"
  {
#line 1928 "string.m"
    MR_bool mercury__string__succeeded;

#line 1384 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_utf8_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1384 "string.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 30243 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1384 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1928 "string.m"
    if (mercury__string__succeeded)
#line 1927 "string.m"
      {
#line 1927 "string.m"
        return mercury__string__succeeded = mercury__string__from_code_unit_list_2_p_0(mercury__string__CodeList_3, mercury__string__String_4);
      }
#line 1928 "string.m"
    else
#line 1929 "string.m"
      {
#line 1929 "string.m"
        MR_Word mercury__string__RevChars_5;
#line 1929 "string.m"
        MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1643 "string.m"
        MR_String mercury__string__Str0_9;

#line 1929 "string.m"
        {
#line 1929 "string.m"
          mercury__string__succeeded = mercury__string__decode_utf8_3_p_0(mercury__string__CodeList_3, mercury__string__V_6_6, &mercury__string__RevChars_5);
        }
#line 1929 "string.m"
        if (mercury__string__succeeded)
#line 1929 "string.m"
          {
#line 1641 "string.m"
            {
#line 1641 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__RevChars_5, &mercury__string__Str0_9);
            }
#line 1643 "string.m"
            if (mercury__string__succeeded)
#line 1642 "string.m"
              *mercury__string__String_4 = mercury__string__Str0_9;
#line 1643 "string.m"
            else
#line 1644 "string.m"
              {
#line 1644 "string.m"
                {
#line 1644 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
                }
#line 1644 "string.m"
              }
#line 1643 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 1929 "string.m"
          }
#line 1929 "string.m"
      }
#line 1928 "string.m"
    return mercury__string__succeeded;
#line 1928 "string.m"
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
#line 1800 "string.m"
  {
#line 1800 "string.m"
    MR_bool mercury__string__succeeded;

#line 1804 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_code_unit_list_2_p_0

	MR_Word CodeList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CodeList =  mercury__string__CodeList_1 ;
		{
#line 1804 "string.m"

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

#line 30373 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1804 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1800 "string.m"
    return mercury__string__succeeded;
#line 1800 "string.m"
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
#line 1785 "string.m"
  {
#line 1785 "string.m"
    MR_bool mercury__string__succeeded;

#line 1384 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1384 "string.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 30415 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1384 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1785 "string.m"
    if (mercury__string__succeeded)
#line 1784 "string.m"
      {
#line 1784 "string.m"
        MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1784 "string.m"
        MR_Integer mercury__string__V_18_18;
#line 1784 "string.m"
        MR_Integer mercury__string__End_35;
#line 1784 "string.m"
        MR_Integer mercury__string__V_37_37;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 30450 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_18_18  = Length;
#line 2589 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 30470 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_37_37  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
        mercury__string__succeeded = (mercury__string__V_18_18 < mercury__string__V_37_37);
#line 52 "int.opt"
        if (mercury__string__succeeded)
#line 51 "int.opt"
          mercury__string__End_35 = mercury__string__V_18_18;
#line 52 "int.opt"
        else
#line 53 "int.opt"
          mercury__string__End_35 = mercury__string__V_37_37;
#line 4903 "string.m"
        {
#line 4903 "string.m"
          mercury__string__foldr_between_2__ho53_6_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__End_35, mercury__string__V_6_6, mercury__string__CodeList_4);
#line 4903 "string.m"
          return;
        }
#line 1784 "string.m"
      }
#line 1785 "string.m"
    else
#line 1747 "string.m"
      {
#line 1747 "string.m"
        MR_Integer mercury__string__V_60_60;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 30516 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_60_60  = Length;
#line 2589 "string.m"
}
#line 1748 "string.m"
        {
#line 1748 "string.m"
          mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__V_60_60, mercury__string__CodeList_4);
#line 1748 "string.m"
          return;
        }
#line 1747 "string.m"
      }
#line 1785 "string.m"
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
#line 1767 "string.m"
  {
#line 1767 "string.m"
    MR_bool mercury__string__succeeded;

#line 1384 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1384 "string.m"

    SUCCESS_INDICATOR = MR_TRUE;

#line 30562 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1384 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1767 "string.m"
    if (mercury__string__succeeded)
#line 1747 "string.m"
      {
#line 1747 "string.m"
        MR_Integer mercury__string__V_14_14;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 30591 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_14_14  = Length;
#line 2589 "string.m"
}
#line 1748 "string.m"
        {
#line 1748 "string.m"
          mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__V_14_14, mercury__string__CodeList_4);
#line 1748 "string.m"
          return;
        }
#line 1747 "string.m"
      }
#line 1767 "string.m"
    else
#line 1768 "string.m"
      {
#line 1768 "string.m"
        MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1768 "string.m"
        MR_Integer mercury__string__V_27_27;
#line 1768 "string.m"
        MR_Integer mercury__string__End_44;
#line 1768 "string.m"
        MR_Integer mercury__string__V_46_46;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 30633 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_27_27  = Length;
#line 2589 "string.m"
}
#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 30653 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_46_46  = Length;
#line 2589 "string.m"
}
#line 49 "int.opt"
        mercury__string__succeeded = (mercury__string__V_27_27 < mercury__string__V_46_46);
#line 52 "int.opt"
        if (mercury__string__succeeded)
#line 51 "int.opt"
          mercury__string__End_44 = mercury__string__V_27_27;
#line 52 "int.opt"
        else
#line 53 "int.opt"
          mercury__string__End_44 = mercury__string__V_46_46;
#line 4903 "string.m"
        {
#line 4903 "string.m"
          mercury__string__foldr_between_2__ho54_6_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__End_44, mercury__string__V_6_6, mercury__string__CodeList_4);
#line 4903 "string.m"
          return;
        }
#line 1768 "string.m"
      }
#line 1767 "string.m"
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
#line 1747 "string.m"
  {
#line 1747 "string.m"
    MR_bool mercury__string__succeeded;
#line 1747 "string.m"
    MR_Integer mercury__string__V_6_6;

#line 2589 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2589 "string.m"

    Length = strlen(Str);

#line 30713 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_6_6  = Length;
#line 2589 "string.m"
}
#line 1748 "string.m"
    {
#line 1748 "string.m"
      mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__V_6_6, mercury__string__List_4);
#line 1748 "string.m"
      return;
    }
#line 1747 "string.m"
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
#line 1647 "string.m"
  {
#line 1647 "string.m"
    MR_bool mercury__string__succeeded;

#line 1651 "string.m"
{
#define MR_PROC_LABEL mercury__string__semidet_from_rev_char_list_2_p_0

	MR_Word Chars;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Chars =  mercury__string__Chars_1 ;
		{
#line 1651 "string.m"
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
#line 30810 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1651 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1647 "string.m"
    return mercury__string__succeeded;
#line 1647 "string.m"
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
#line 1643 "string.m"
  {
#line 1643 "string.m"
    MR_bool mercury__string__succeeded;
#line 1643 "string.m"
    MR_String mercury__string__Str0_5;

#line 1641 "string.m"
    {
#line 1641 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Chars_3, &mercury__string__Str0_5);
    }
#line 1643 "string.m"
    if (mercury__string__succeeded)
#line 1642 "string.m"
      *mercury__string__Str_4 = mercury__string__Str0_5;
#line 1643 "string.m"
    else
#line 1644 "string.m"
      {
#line 1644 "string.m"
        {
#line 1644 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
#line 1644 "string.m"
          return;
        }
#line 1644 "string.m"
      }
#line 1643 "string.m"
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
#line 1643 "string.m"
  {
#line 1643 "string.m"
    MR_bool mercury__string__succeeded;
#line 1643 "string.m"
    MR_String mercury__string__S_4;
#line 1643 "string.m"
    MR_String mercury__string__Str0_7;

#line 1641 "string.m"
    {
#line 1641 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_7);
    }
#line 1643 "string.m"
    if (mercury__string__succeeded)
#line 1642 "string.m"
      mercury__string__S_4 = mercury__string__Str0_7;
#line 1643 "string.m"
    else
#line 1644 "string.m"
      {
#line 1644 "string.m"
        {
#line 1644 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
        }
#line 1644 "string.m"
      }
#line 1643 "string.m"
    return mercury__string__S_4;
#line 1643 "string.m"
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
#line 1509 "string.m"
  {
#line 1509 "string.m"
    MR_bool mercury__string__succeeded;

#line 1513 "string.m"
{
#define MR_PROC_LABEL mercury__string__semidet_from_char_list_2_p_0

	MR_Word CharList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CharList =  mercury__string__CharList_1 ;
		{
#line 1513 "string.m"
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
#line 30992 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1513 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1509 "string.m"
    return mercury__string__succeeded;
#line 1509 "string.m"
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
#line 1423 "string.m"
  {
#line 1423 "string.m"
    MR_bool mercury__string__succeeded;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_char_list_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_2 ;
		{
#line 1427 "string.m"
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
#line 31047 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Chars_1  = CharList;
#line 1427 "string.m"
}
#line 1423 "string.m"
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
#line 1505 "string.m"
  {
#line 1505 "string.m"
    MR_bool mercury__string__succeeded;
#line 1505 "string.m"
    MR_String mercury__string__Str0_7;

#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Chars_1, &mercury__string__Str0_7);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      *mercury__string__Str_2 = mercury__string__Str0_7;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1506 "string.m"
          return;
        }
#line 1506 "string.m"
      }
#line 1505 "string.m"
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
#line 1505 "string.m"
  {
#line 1505 "string.m"
    MR_bool mercury__string__succeeded;
#line 1505 "string.m"
    MR_String mercury__string__S_4;
#line 1505 "string.m"
    MR_String mercury__string__Str0_9;

#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_9);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      mercury__string__S_4 = mercury__string__Str0_9;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1506 "string.m"
      }
#line 1505 "string.m"
    return mercury__string__S_4;
#line 1505 "string.m"
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
#line 1505 "string.m"
  {
#line 1505 "string.m"
    MR_bool mercury__string__succeeded;
#line 1505 "string.m"
    MR_String mercury__string__Str0_11;

#line 1503 "string.m"
    {
#line 1503 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__CharList_2, &mercury__string__Str0_11);
    }
#line 1505 "string.m"
    if (mercury__string__succeeded)
#line 1504 "string.m"
      *mercury__string__Str_1 = mercury__string__Str0_11;
#line 1505 "string.m"
    else
#line 1506 "string.m"
      {
#line 1506 "string.m"
        {
#line 1506 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1506 "string.m"
          return;
        }
#line 1506 "string.m"
      }
#line 1505 "string.m"
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
#line 1423 "string.m"
  {
#line 1423 "string.m"
    MR_bool mercury__string__succeeded;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
#line 1427 "string.m"
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
#line 31226 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
#line 1427 "string.m"
}
#line 1423 "string.m"
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
#line 1423 "string.m"
  {
#line 1423 "string.m"
    MR_bool mercury__string__succeeded;
#line 1423 "string.m"
    MR_Word mercury__string__Cs_4;

#line 1427 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S_3 ;
		{
#line 1427 "string.m"
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
#line 31276 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Cs_4  = CharList;
#line 1427 "string.m"
}
#line 1423 "string.m"
    return mercury__string__Cs_4;
#line 1423 "string.m"
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
