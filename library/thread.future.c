/*
** Automatically generated from `thread.future.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


/* :- module thread.future. */
/* :- implementation. */

/*
INIT mercury__thread__future__init
ENDINIT
*/

#include "thread.future.mih"


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
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
#include "thread.mih"
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
#include "thread.semaphore.mih"




#line 96 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_1__pseudo_1;

#line 99 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_func_1__pseudo_1;

#line 102 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct0 mercury__thread__future____vpti_pred_0;

#line 105 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__thread__future____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 108 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_tuple_1__pseudo_1;

#line 111 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_future_1[1];

#line 114 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_ok_or_exception_1__pseudo_1;

#line 117 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_io_1__pseudo_thread__future__pti_ok_or_exception_1__pseudo_1;

#line 120 "thread.future.c"
static const MR_NotagFunctorDesc mercury__thread__future__thread__future__notag_functor_desc_future_1;

#line 123 "thread.future.c"
static const MR_FA_TypeInfo_Struct1 mercury__thread__future__mutvar__ti_mutvar_1thread__future__type_ctor_info_ready_0;

#line 126 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__mutvar__pti_mutvar_1__pseudo_1;

#line 129 "thread.future.c"
static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_future_io_1_0[3];

#line 132 "thread.future.c"
static const MR_ConstString mercury__thread__future__thread__future__field_names_future_io_1_0[3];

#line 135 "thread.future.c"
static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_future_io_1_0;

#line 138 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_future_io_1_0[1];

#line 141 "thread.future.c"
static const MR_DuPtagLayout mercury__thread__future__thread__future__du_ptag_ordered_future_io_1[1];

#line 144 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_name_ordered_future_io_1[1];

#line 147 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_future_io_1[1];

#line 150 "thread.future.c"
static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_0[1];

#line 153 "thread.future.c"
static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_0;

#line 156 "thread.future.c"
static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_1[1];

#line 159 "thread.future.c"
static const MR_DuExistLocn mercury__thread__future__thread__future__exist_locns_ok_or_exception_1_1[1];

#line 162 "thread.future.c"
static const MR_DuExistInfo mercury__thread__future__thread__future__exist_info_ok_or_exception_1_1;

#line 165 "thread.future.c"
static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_1;

#line 168 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_0[1];

#line 171 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_1[1];

#line 174 "thread.future.c"
static const MR_DuPtagLayout mercury__thread__future__thread__future__du_ptag_ordered_ok_or_exception_1[2];

#line 177 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_name_ordered_ok_or_exception_1[2];

#line 180 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_ok_or_exception_1[2];

#line 183 "thread.future.c"
static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_0;

#line 186 "thread.future.c"
static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_1;

#line 189 "thread.future.c"
static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_value_ordered_ready_0[2];

#line 192 "thread.future.c"
static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_name_ordered_ready_0[2];

#line 195 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_ready_0[2];

#line 198 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____future_1_0_10001(
#line 201 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 203 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 205 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3);

#line 208 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____future_1_0_10001(
#line 211 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 213 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_2,
#line 215 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3,
#line 217 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_4);

#line 220 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____future_io_1_0_10001(
#line 223 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 225 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 227 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3);

#line 230 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____future_io_1_0_10001(
#line 233 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 235 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_2,
#line 237 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3,
#line 239 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_4);

#line 242 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____ok_or_exception_1_0_10001(
#line 245 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 247 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 249 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3);

#line 252 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____ok_or_exception_1_0_10001(
#line 255 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 257 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_2,
#line 259 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3,
#line 261 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_4);

#line 264 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____ready_0_0_10001(
#line 267 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 269 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2);

#line 272 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____ready_0_0_10001(
#line 275 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_1,
#line 277 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 279 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3);

#line 49 "thread.opt"
static void MR_CALL 
mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_52_57_95_95_49_95_95_91_50_93_95_48_4_p_0(
#line 49 "thread.opt"
  MR_Word mercury__thread__future__Goal0_4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 49 "thread.opt"
static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__spawn__49__1_4_p_0(
#line 49 "thread.opt"
  MR_Word mercury__thread__future__Goal0_4_4,
#line 49 "thread.opt"
  MR_Word mercury__thread__future__HeadVar__2_19);

#line 131 "thread.future.m"
static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__run_future__131__1_3_p_0(
#line 131 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_12,
#line 131 "thread.future.m"
  MR_Word mercury__thread__future__Func_4,
#line 131 "thread.future.m"
  MR_Tuple * mercury__thread__future__OutputTuple_18);

#line 267 "thread.future.m"
static void MR_CALL 
mercury__thread__future__consume_io_state_1_p_0(void);

#line 256 "thread.future.m"
static void MR_CALL 
mercury__thread__future__make_io_state_1_p_0(void);

#line 158 "thread.future.m"
static void MR_CALL 
mercury__thread__future__spawn_impure_2_3_p_0(
#line 158 "thread.future.m"
  MR_Word mercury__thread__future__Task_4);

#line 324 "thread.future.c"
static void MR_CALL 
mercury__thread__future__run_future_2_p_0_1(
#line 327 "thread.future.c"
  MR_Box mercury__thread__future__closure_arg,
#line 329 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_1);

#line 127 "thread.future.m"
static void MR_CALL 
mercury__thread__future__run_future_2_p_0(
#line 127 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_12,
#line 127 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__1_1,
#line 127 "thread.future.m"
  MR_Word mercury__thread__future__Func_4);

#line 45 "thread.opt"
static void MR_CALL 
mercury__thread__future__future_1_f_0_3(
#line 45 "thread.opt"
  MR_Box mercury__thread__future__closure_arg,
#line 45 "thread.opt"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 45 "thread.opt"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 45 "thread.opt"
  MR_Box * mercury__thread__future__wrapper_arg_3);

#line 153 "thread.future.m"
static void MR_CALL 
mercury__thread__future__future_1_f_0_2(
#line 153 "thread.future.m"
  MR_Box mercury__thread__future__closure_arg,
#line 153 "thread.future.m"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 153 "thread.future.m"
  MR_Box * mercury__thread__future__wrapper_arg_2);

#line 124 "thread.future.m"
static void MR_CALL 
mercury__thread__future__future_1_f_0_1(
#line 124 "thread.future.m"
  MR_Box mercury__thread__future__closure_arg);


static /* final */ const MR_Box mercury__thread__future_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__thread__future_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__thread__future_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__thread__future_scalar_common_4[2][5];

static /* final */ const MR_Integer mercury__thread__future_scalar_common_5[1][2];

static /* final */ const MR_Box mercury__thread__future_scalar_common_6[3][6];

static /* final */ const MR_Box mercury__thread__future_scalar_common_7[1][7];

static /* final */ const MR_Box mercury__thread__future_scalar_common_8[2][1];




static /* final */ const MR_Box mercury__thread__future_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__mutvar__mutvar__type_ctor_info_mutvar_1)),
    ((MR_Box) (&mercury__thread__future__thread__future__type_ctor_info_ready_0))
  },
};

static /* final */ const MR_Box mercury__thread__future_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__future_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__future_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__future_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__future_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__future_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__thread__future_scalar_common_5[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__thread__future_scalar_common_6[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__thread__future_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__thread__future__thread__future__pti_future_1__pseudo_1)),
    ((MR_Box) (&mercury__thread__future____vpti_func_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__thread__future____vpti_pred_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mercury__thread__future_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__thread__future____vpti_func_1__pseudo_1)),
    ((MR_Box) (&mercury__thread__future____vpti_tuple_1__pseudo_1))
  },
};

static /* final */ const MR_Box mercury__thread__future_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__thread__future____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__thread__thread__type_ctor_info_thread_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__future_scalar_common_8[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Unable to spawn threads in this grade."))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "Unable to create native thread."))
  },
};



#include "thread.future.mh"
#include "thread.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "thread.semaphore.mh"
#include "thread.semaphore.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "type_desc.mh"
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
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "version_array.mh"
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
#include "math.mh"
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
#include "builtin.mh"
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
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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
#include "thread.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "thread.semaphore.mh"
#include "thread.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 682 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_1__pseudo_1 = {
  &mercury__thread__future__thread__future__type_ctor_info_future_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 690 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_func_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 699 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct0 mercury__thread__future____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

#line 707 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__thread__future____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 717 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_tuple_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 726 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_future_1[1] = {
  (MR_Integer) 0
};

#line 731 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_ok_or_exception_1__pseudo_1 = {
  &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 739 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_io_1__pseudo_thread__future__pti_ok_or_exception_1__pseudo_1 = {
  &mercury__thread__future__thread__future__type_ctor_info_future_io_1,
  {
    (MR_PseudoTypeInfo) &mercury__thread__future__thread__future__pti_ok_or_exception_1__pseudo_1
  }
};

#line 747 "thread.future.c"
static const MR_NotagFunctorDesc mercury__thread__future__thread__future__notag_functor_desc_future_1 = {
  (MR_String) "future",
  (MR_PseudoTypeInfo) &mercury__thread__future__thread__future__pti_future_io_1__pseudo_thread__future__pti_ok_or_exception_1__pseudo_1,
  NULL
};

#line 754 "thread.future.c"
const MR_TypeCtorInfo_Struct mercury__thread__future__thread__future__type_ctor_info_future_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__thread__future____Unify____future_1_0_10001)),
  ((MR_Box) (mercury__thread__future____Compare____future_1_0_10001)),
  (MR_String) "thread.future",
  (MR_String) "future",
  {     &mercury__thread__future__thread__future__notag_functor_desc_future_1 },
  {     &mercury__thread__future__thread__future__notag_functor_desc_future_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__future__thread__future__functor_number_map_future_1
};

#line 771 "thread.future.c"
static const MR_FA_TypeInfo_Struct1 mercury__thread__future__mutvar__ti_mutvar_1thread__future__type_ctor_info_ready_0 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_TypeInfo) &mercury__thread__future__thread__future__type_ctor_info_ready_0
  }
};

#line 779 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__mutvar__pti_mutvar_1__pseudo_1 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 787 "thread.future.c"
static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_future_io_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__thread__future__mutvar__ti_mutvar_1thread__future__type_ctor_info_ready_0,
  (MR_PseudoTypeInfo) &mercury__thread__semaphore__thread__semaphore__type_ctor_info_semaphore_0,
  (MR_PseudoTypeInfo) &mercury__thread__future__mutvar__pti_mutvar_1__pseudo_1
};

#line 794 "thread.future.c"
static const MR_ConstString mercury__thread__future__thread__future__field_names_future_io_1_0[3] = {
  (MR_String) "f_ready",
  (MR_String) "f_wait",
  (MR_String) "f_value"
};

#line 801 "thread.future.c"
static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_future_io_1_0 = {
  (MR_String) "future_io",
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__thread__future__thread__future__field_types_future_io_1_0,
  mercury__thread__future__thread__future__field_names_future_io_1_0,
  NULL,
  NULL
};

#line 816 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_future_io_1_0[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_future_io_1_0
};

#line 821 "thread.future.c"
static const MR_DuPtagLayout mercury__thread__future__thread__future__du_ptag_ordered_future_io_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__thread__future__thread__future__du_stag_ordered_future_io_1_0
  }
};

#line 830 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_name_ordered_future_io_1[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_future_io_1_0
};

#line 835 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_future_io_1[1] = {
  (MR_Integer) 0
};

#line 840 "thread.future.c"
const MR_TypeCtorInfo_Struct mercury__thread__future__thread__future__type_ctor_info_future_io_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__future____Unify____future_io_1_0_10001)),
  ((MR_Box) (mercury__thread__future____Compare____future_io_1_0_10001)),
  (MR_String) "thread.future",
  (MR_String) "future_io",
  {     mercury__thread__future__thread__future__du_name_ordered_future_io_1 },
  {     mercury__thread__future__thread__future__du_ptag_ordered_future_io_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__future__thread__future__functor_number_map_future_io_1
};

#line 857 "thread.future.c"
static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 862 "thread.future.c"
static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__thread__future__thread__future__field_types_ok_or_exception_1_0,
  NULL,
  NULL,
  NULL
};

#line 877 "thread.future.c"
static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

#line 882 "thread.future.c"
static const MR_DuExistLocn mercury__thread__future__thread__future__exist_locns_ok_or_exception_1_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) -1
  }
};

#line 890 "thread.future.c"
static const MR_DuExistInfo mercury__thread__future__thread__future__exist_info_ok_or_exception_1_1 = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__thread__future__thread__future__exist_locns_ok_or_exception_1_1,
  NULL
};

#line 899 "thread.future.c"
static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_1 = {
  (MR_String) "exception",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__thread__future__thread__future__field_types_ok_or_exception_1_1,
  NULL,
  NULL,
  &mercury__thread__future__thread__future__exist_info_ok_or_exception_1_1
};

#line 914 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_0[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_0
};

#line 919 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_1[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_1
};

#line 924 "thread.future.c"
static const MR_DuPtagLayout mercury__thread__future__thread__future__du_ptag_ordered_ok_or_exception_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_1
  }
};

#line 938 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_name_ordered_ok_or_exception_1[2] = {
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_1,
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_0
};

#line 944 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_ok_or_exception_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 950 "thread.future.c"
const MR_TypeCtorInfo_Struct mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__future____Unify____ok_or_exception_1_0_10001)),
  ((MR_Box) (mercury__thread__future____Compare____ok_or_exception_1_0_10001)),
  (MR_String) "thread.future",
  (MR_String) "ok_or_exception",
  {     mercury__thread__future__thread__future__du_name_ordered_ok_or_exception_1 },
  {     mercury__thread__future__thread__future__du_ptag_ordered_ok_or_exception_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__thread__future__thread__future__functor_number_map_ok_or_exception_1
};

#line 967 "thread.future.c"
static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_0 = {
  (MR_String) "ready",
  (MR_Integer) 0
};

#line 973 "thread.future.c"
static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_1 = {
  (MR_String) "not_ready",
  (MR_Integer) 1
};

#line 979 "thread.future.c"
static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_value_ordered_ready_0[2] = {
  &mercury__thread__future__thread__future__enum_functor_desc_ready_0_0,
  &mercury__thread__future__thread__future__enum_functor_desc_ready_0_1
};

#line 985 "thread.future.c"
static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_name_ordered_ready_0[2] = {
  &mercury__thread__future__thread__future__enum_functor_desc_ready_0_1,
  &mercury__thread__future__thread__future__enum_functor_desc_ready_0_0
};

#line 991 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_ready_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 997 "thread.future.c"
const MR_TypeCtorInfo_Struct mercury__thread__future__thread__future__type_ctor_info_ready_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__thread__future____Unify____ready_0_0_10001)),
  ((MR_Box) (mercury__thread__future____Compare____ready_0_0_10001)),
  (MR_String) "thread.future",
  (MR_String) "ready",
  {     mercury__thread__future__thread__future__enum_name_ordered_ready_0 },
  {     mercury__thread__future__thread__future__enum_value_ordered_ready_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__thread__future__thread__future__functor_number_map_ready_0
};

#line 1014 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____future_1_0_10001(
#line 1017 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1019 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 1021 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3)
#line 1023 "thread.future.c"
{
#line 1025 "thread.future.c"
  {
#line 1027 "thread.future.c"
    MR_bool mercury__thread__future__succeeded;

#line 1030 "thread.future.c"
    {
#line 1032 "thread.future.c"
      mercury__thread__future__succeeded = mercury__thread__future____Unify____future_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), ((MR_Word) mercury__thread__future__wrapper_arg_2), ((MR_Word) mercury__thread__future__wrapper_arg_3));
    }
#line 1035 "thread.future.c"
    return mercury__thread__future__succeeded;
#line 1037 "thread.future.c"
  }
#line 1039 "thread.future.c"
}

#line 1042 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____future_1_0_10001(
#line 1045 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1047 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_2,
#line 1049 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3,
#line 1051 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_4)
#line 1053 "thread.future.c"
{
#line 1055 "thread.future.c"
  {
#line 1057 "thread.future.c"
    MR_Word mercury__thread__future__conv0_HeadVar__1_1;

#line 1060 "thread.future.c"
    {
#line 1062 "thread.future.c"
      mercury__thread__future____Compare____future_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), &mercury__thread__future__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__future__wrapper_arg_3), ((MR_Word) mercury__thread__future__wrapper_arg_4));
    }
#line 1065 "thread.future.c"
    *mercury__thread__future__wrapper_arg_2 = ((MR_Box) (mercury__thread__future__conv0_HeadVar__1_1));
#line 1067 "thread.future.c"
  }
#line 1069 "thread.future.c"
}

#line 1072 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____future_io_1_0_10001(
#line 1075 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1077 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 1079 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3)
#line 1081 "thread.future.c"
{
#line 1083 "thread.future.c"
  {
#line 1085 "thread.future.c"
    MR_bool mercury__thread__future__succeeded;

#line 1088 "thread.future.c"
    {
#line 1090 "thread.future.c"
      mercury__thread__future__succeeded = mercury__thread__future____Unify____future_io_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), ((MR_Word) mercury__thread__future__wrapper_arg_2), ((MR_Word) mercury__thread__future__wrapper_arg_3));
    }
#line 1093 "thread.future.c"
    return mercury__thread__future__succeeded;
#line 1095 "thread.future.c"
  }
#line 1097 "thread.future.c"
}

#line 1100 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____future_io_1_0_10001(
#line 1103 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1105 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_2,
#line 1107 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3,
#line 1109 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_4)
#line 1111 "thread.future.c"
{
#line 1113 "thread.future.c"
  {
#line 1115 "thread.future.c"
    MR_Word mercury__thread__future__conv0_HeadVar__1_1;

#line 1118 "thread.future.c"
    {
#line 1120 "thread.future.c"
      mercury__thread__future____Compare____future_io_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), &mercury__thread__future__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__future__wrapper_arg_3), ((MR_Word) mercury__thread__future__wrapper_arg_4));
    }
#line 1123 "thread.future.c"
    *mercury__thread__future__wrapper_arg_2 = ((MR_Box) (mercury__thread__future__conv0_HeadVar__1_1));
#line 1125 "thread.future.c"
  }
#line 1127 "thread.future.c"
}

#line 1130 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____ok_or_exception_1_0_10001(
#line 1133 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1135 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 1137 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3)
#line 1139 "thread.future.c"
{
#line 1141 "thread.future.c"
  {
#line 1143 "thread.future.c"
    MR_bool mercury__thread__future__succeeded;

#line 1146 "thread.future.c"
    {
#line 1148 "thread.future.c"
      mercury__thread__future__succeeded = mercury__thread__future____Unify____ok_or_exception_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), ((MR_Word) mercury__thread__future__wrapper_arg_2), ((MR_Word) mercury__thread__future__wrapper_arg_3));
    }
#line 1151 "thread.future.c"
    return mercury__thread__future__succeeded;
#line 1153 "thread.future.c"
  }
#line 1155 "thread.future.c"
}

#line 1158 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____ok_or_exception_1_0_10001(
#line 1161 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1163 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_2,
#line 1165 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3,
#line 1167 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_4)
#line 1169 "thread.future.c"
{
#line 1171 "thread.future.c"
  {
#line 1173 "thread.future.c"
    MR_Word mercury__thread__future__conv0_HeadVar__1_1;

#line 1176 "thread.future.c"
    {
#line 1178 "thread.future.c"
      mercury__thread__future____Compare____ok_or_exception_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), &mercury__thread__future__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__future__wrapper_arg_3), ((MR_Word) mercury__thread__future__wrapper_arg_4));
    }
#line 1181 "thread.future.c"
    *mercury__thread__future__wrapper_arg_2 = ((MR_Box) (mercury__thread__future__conv0_HeadVar__1_1));
#line 1183 "thread.future.c"
  }
#line 1185 "thread.future.c"
}

#line 1188 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____ready_0_0_10001(
#line 1191 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1193 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2)
#line 1195 "thread.future.c"
{
#line 1197 "thread.future.c"
  {
#line 1199 "thread.future.c"
    MR_bool mercury__thread__future__succeeded;

#line 1202 "thread.future.c"
    {
#line 1204 "thread.future.c"
      mercury__thread__future__succeeded = mercury__thread__future____Unify____ready_0_0(((MR_Word) mercury__thread__future__wrapper_arg_1), ((MR_Word) mercury__thread__future__wrapper_arg_2));
    }
#line 1207 "thread.future.c"
    return mercury__thread__future__succeeded;
#line 1209 "thread.future.c"
  }
#line 1211 "thread.future.c"
}

#line 1214 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____ready_0_0_10001(
#line 1217 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_1,
#line 1219 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 1221 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3)
#line 1223 "thread.future.c"
{
#line 1225 "thread.future.c"
  {
#line 1227 "thread.future.c"
    MR_Word mercury__thread__future__conv0_HeadVar__1_1;

#line 1230 "thread.future.c"
    {
#line 1232 "thread.future.c"
      mercury__thread__future____Compare____ready_0_0(&mercury__thread__future__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__future__wrapper_arg_2), ((MR_Word) mercury__thread__future__wrapper_arg_3));
    }
#line 1235 "thread.future.c"
    *mercury__thread__future__wrapper_arg_1 = ((MR_Box) (mercury__thread__future__conv0_HeadVar__1_1));
#line 1237 "thread.future.c"
  }
#line 1239 "thread.future.c"
}

#line 49 "thread.opt"
static void MR_CALL 
mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_52_57_95_95_49_95_95_91_50_93_95_48_4_p_0(
#line 49 "thread.opt"
  MR_Word mercury__thread__future__Goal0_4_4)
#line 49 "thread.opt"
{
#line 49 "thread.opt"
  {
#line 49 "thread.opt"
    MR_bool mercury__thread__future__succeeded;
#line 49 "thread.opt"
    void MR_CALL (* mercury__thread__future__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__thread__future__Goal0_4_4, (MR_Integer) 1)));
#line 49 "thread.opt"
    MR_Box mercury__thread__future__conv1_HeadVar__4_21;

#line 49 "thread.opt"
    {
#line 49 "thread.opt"
      mercury__thread__future__func_0(((MR_Box) mercury__thread__future__Goal0_4_4), ((MR_Box) ((MR_Integer) 0)), &mercury__thread__future__conv1_HeadVar__4_21);
    }
#line 49 "thread.opt"
  }
#line 49 "thread.opt"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__thread__future__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 49 "thread.opt"
static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__spawn__49__1_4_p_0(
#line 49 "thread.opt"
  MR_Word mercury__thread__future__Goal0_4_4,
#line 49 "thread.opt"
  MR_Word mercury__thread__future__HeadVar__2_19)
#line 49 "thread.opt"
{
#line 49 "thread.opt"
  {
#line 49 "thread.opt"
    MR_bool mercury__thread__future__succeeded;

#line 49 "thread.opt"
    {
#line 49 "thread.opt"
      mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_52_57_95_95_49_95_95_91_50_93_95_48_4_p_0(mercury__thread__future__Goal0_4_4);
#line 49 "thread.opt"
      return;
    }
#line 49 "thread.opt"
  }
#line 49 "thread.opt"
}

#line 131 "thread.future.m"
static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__run_future__131__1_3_p_0(
#line 131 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_12,
#line 131 "thread.future.m"
  MR_Word mercury__thread__future__Func_4,
#line 131 "thread.future.m"
  MR_Tuple * mercury__thread__future__OutputTuple_18)
#line 131 "thread.future.m"
{
#line 131 "thread.future.m"
  {
#line 131 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 131 "thread.future.m"
    MR_Box mercury__thread__future__Result_20;
#line 131 "thread.future.m"
    MR_Box MR_CALL (* mercury__thread__future__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__thread__future__Func_4, (MR_Integer) 1)));

#line 131 "thread.future.m"
    {
#line 131 "thread.future.m"
      mercury__thread__future__Result_20 = mercury__thread__future__func_0(((MR_Box) mercury__thread__future__Func_4));
    }
#line 1336 "thread.future.c"
    {
#line 1338 "thread.future.c"
      MR_Tuple base;
#line 1340 "thread.future.c"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "thread.future.c"
      *mercury__thread__future__OutputTuple_18 = base;
#line 1344 "thread.future.c"
      MR_hl_field(MR_mktag(0), base, 0) = mercury__thread__future__Result_20;
#line 1346 "thread.future.c"
    }
#line 131 "thread.future.m"
  }
#line 131 "thread.future.m"
}

#line 177 "thread.future.m"
void MR_CALL 
mercury__thread__future____Compare____ready_0_0(
#line 177 "thread.future.m"
  MR_Word * mercury__thread__future__HeadVar__1_1,
#line 177 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__2_2,
#line 177 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__3_3)
#line 177 "thread.future.m"
{
#line 177 "thread.future.m"
  {
#line 177 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 177 "thread.future.m"
    MR_Integer mercury__thread__future__Cast_HeadVar1_4 = (MR_Integer) mercury__thread__future__HeadVar__2_2;
#line 177 "thread.future.m"
    MR_Integer mercury__thread__future__Cast_HeadVar2_5 = (MR_Integer) mercury__thread__future__HeadVar__3_3;

#line 32 "private_builtin.opt"
    mercury__thread__future__succeeded = (mercury__thread__future__Cast_HeadVar1_4 < mercury__thread__future__Cast_HeadVar2_5);
#line 35 "private_builtin.opt"
    if (mercury__thread__future__succeeded)
#line 34 "private_builtin.opt"
      *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
    else
#line 40 "private_builtin.opt"
      {
#line 37 "private_builtin.opt"
        mercury__thread__future__succeeded = (mercury__thread__future__Cast_HeadVar1_4 == mercury__thread__future__Cast_HeadVar2_5);
#line 40 "private_builtin.opt"
        if (mercury__thread__future__succeeded)
#line 39 "private_builtin.opt"
          *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
        else
#line 41 "private_builtin.opt"
          *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
      }
#line 177 "thread.future.m"
  }
#line 177 "thread.future.m"
}

#line 177 "thread.future.m"
MR_bool MR_CALL 
mercury__thread__future____Unify____ready_0_0(
#line 177 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__2_1,
#line 177 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__2_2)
#line 177 "thread.future.m"
{
#line 1409 "thread.future.c"
  {
#line 1411 "thread.future.c"
    MR_bool mercury__thread__future__succeeded = (mercury__thread__future__HeadVar__2_1 == mercury__thread__future__HeadVar__2_2);

#line 1414 "thread.future.c"
    return mercury__thread__future__succeeded;
#line 1416 "thread.future.c"
  }
#line 177 "thread.future.m"
}

#line 115 "thread.future.m"
void MR_CALL 
mercury__thread__future____Compare____ok_or_exception_1_0(
#line 115 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_14,
#line 115 "thread.future.m"
  MR_Word * mercury__thread__future__HeadVar__1_1,
#line 115 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__2_2,
#line 115 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__3_3)
#line 115 "thread.future.m"
{
#line 115 "thread.future.m"
  {
#line 115 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 115 "thread.future.m"
    MR_Integer mercury__thread__future__CastX_12 = (MR_Integer) mercury__thread__future__HeadVar__2_2;
#line 115 "thread.future.m"
    MR_Integer mercury__thread__future__CastY_13 = (MR_Integer) mercury__thread__future__HeadVar__3_3;

#line 115 "thread.future.m"
    mercury__thread__future__succeeded = (mercury__thread__future__CastX_12 == mercury__thread__future__CastY_13);
#line 115 "thread.future.m"
    if (mercury__thread__future__succeeded)
#line 115 "thread.future.m"
      *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 0;
#line 115 "thread.future.m"
    else
#line 115 "thread.future.m"
    if (((MR_tag((MR_Word) mercury__thread__future__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 115 "thread.future.m"
      {
#line 115 "thread.future.m"
        MR_Word mercury__thread__future__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__2_2, (MR_Integer) 0)));
#line 115 "thread.future.m"
        MR_Box mercury__thread__future__V_19_19 = (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__2_2, (MR_Integer) 1));

#line 115 "thread.future.m"
        if (((MR_tag((MR_Word) mercury__thread__future__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 115 "thread.future.m"
          {
#line 115 "thread.future.m"
            MR_Word mercury__thread__future__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__3_3, (MR_Integer) 0)));
#line 115 "thread.future.m"
            MR_Box mercury__thread__future__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__3_3, (MR_Integer) 1));

#line 115 "thread.future.m"
            {
#line 115 "thread.future.m"
              mercury__private_builtin__typed_compare_3_p_0(mercury__thread__future__V_20_20, mercury__thread__future__TypeInfo_16_16, mercury__thread__future__HeadVar__1_1, mercury__thread__future__V_19_19, mercury__thread__future__V_11_11);
#line 115 "thread.future.m"
              return;
            }
#line 115 "thread.future.m"
          }
#line 115 "thread.future.m"
        else
#line 115 "thread.future.m"
          *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 2;
#line 115 "thread.future.m"
      }
#line 115 "thread.future.m"
    else
#line 115 "thread.future.m"
      {
#line 115 "thread.future.m"
        MR_Box mercury__thread__future__V_21_21 = (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 0));

#line 115 "thread.future.m"
        if (((MR_tag((MR_Word) mercury__thread__future__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 115 "thread.future.m"
          *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 1;
#line 115 "thread.future.m"
        else
#line 115 "thread.future.m"
          {
#line 115 "thread.future.m"
            MR_Box mercury__thread__future__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__3_3, (MR_Integer) 0));

#line 115 "thread.future.m"
            {
#line 115 "thread.future.m"
              mercury__builtin__compare_3_p_0(mercury__thread__future__TypeInfo_for_T_14, mercury__thread__future__HeadVar__1_1, mercury__thread__future__V_21_21, mercury__thread__future__V_5_5);
#line 115 "thread.future.m"
              return;
            }
#line 115 "thread.future.m"
          }
#line 115 "thread.future.m"
      }
#line 115 "thread.future.m"
  }
#line 115 "thread.future.m"
}

#line 115 "thread.future.m"
MR_bool MR_CALL 
mercury__thread__future____Unify____ok_or_exception_1_0(
#line 115 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_9,
#line 115 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__1_1,
#line 115 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__2_2)
#line 115 "thread.future.m"
{
#line 115 "thread.future.m"
  {
#line 115 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 115 "thread.future.m"
    MR_Integer mercury__thread__future__CastX_7 = (MR_Integer) mercury__thread__future__HeadVar__1_1;
#line 115 "thread.future.m"
    MR_Integer mercury__thread__future__CastY_8 = (MR_Integer) mercury__thread__future__HeadVar__2_2;

#line 115 "thread.future.m"
    mercury__thread__future__succeeded = (mercury__thread__future__CastX_7 == mercury__thread__future__CastY_8);
#line 115 "thread.future.m"
    if (mercury__thread__future__succeeded)
#line 115 "thread.future.m"
      mercury__thread__future__succeeded = MR_TRUE;
#line 115 "thread.future.m"
    else
#line 115 "thread.future.m"
    if (((MR_tag((MR_Word) mercury__thread__future__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 115 "thread.future.m"
      {
#line 115 "thread.future.m"
        MR_Word mercury__thread__future__TypeInfo_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__1_1, (MR_Integer) 0)));
#line 115 "thread.future.m"
        MR_Word mercury__thread__future__TypeInfo_11_11;
#line 115 "thread.future.m"
        MR_Box mercury__thread__future__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__1_1, (MR_Integer) 1));
#line 115 "thread.future.m"
        MR_Box mercury__thread__future__V_6_6;

#line 115 "thread.future.m"
        mercury__thread__future__succeeded = ((MR_tag((MR_Word) mercury__thread__future__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 115 "thread.future.m"
        if (mercury__thread__future__succeeded)
#line 115 "thread.future.m"
          {
#line 115 "thread.future.m"
            mercury__thread__future__TypeInfo_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__2_2, (MR_Integer) 0)));
#line 115 "thread.future.m"
            mercury__thread__future__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__2_2, (MR_Integer) 1));
#line 115 "thread.future.m"
            {
#line 115 "thread.future.m"
              return mercury__thread__future__succeeded = mercury__private_builtin__typed_unify_2_p_0(mercury__thread__future__TypeInfo_10_10, mercury__thread__future__TypeInfo_11_11, mercury__thread__future__V_5_5, mercury__thread__future__V_6_6);
            }
#line 115 "thread.future.m"
          }
#line 115 "thread.future.m"
      }
#line 115 "thread.future.m"
    else
#line 115 "thread.future.m"
      {
#line 115 "thread.future.m"
        MR_Box mercury__thread__future__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__1_1, (MR_Integer) 0));
#line 115 "thread.future.m"
        MR_Box mercury__thread__future__V_4_4;

#line 115 "thread.future.m"
        mercury__thread__future__succeeded = ((MR_tag((MR_Word) mercury__thread__future__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 115 "thread.future.m"
        if (mercury__thread__future__succeeded)
#line 115 "thread.future.m"
          {
#line 115 "thread.future.m"
            mercury__thread__future__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 0));
#line 115 "thread.future.m"
            {
#line 115 "thread.future.m"
              return mercury__thread__future__succeeded = mercury__builtin__unify_2_p_0(mercury__thread__future__TypeInfo_for_T_9, mercury__thread__future__V_3_3, mercury__thread__future__V_4_4);
            }
#line 115 "thread.future.m"
          }
#line 115 "thread.future.m"
      }
#line 115 "thread.future.m"
    return mercury__thread__future__succeeded;
#line 115 "thread.future.m"
  }
#line 115 "thread.future.m"
}

#line 167 "thread.future.m"
void MR_CALL 
mercury__thread__future____Compare____future_io_1_0(
#line 167 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_14,
#line 167 "thread.future.m"
  MR_Word * mercury__thread__future__HeadVar__1_1,
#line 167 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__2_2,
#line 167 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__3_3)
#line 167 "thread.future.m"
{
#line 167 "thread.future.m"
  {
#line 167 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 167 "thread.future.m"
    MR_Integer mercury__thread__future__CastX_12 = (MR_Integer) mercury__thread__future__HeadVar__2_2;
#line 167 "thread.future.m"
    MR_Integer mercury__thread__future__CastY_13 = (MR_Integer) mercury__thread__future__HeadVar__3_3;

#line 167 "thread.future.m"
    mercury__thread__future__succeeded = (mercury__thread__future__CastX_12 == mercury__thread__future__CastY_13);
#line 167 "thread.future.m"
    if (mercury__thread__future__succeeded)
#line 1637 "thread.future.c"
      *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 0;
#line 167 "thread.future.m"
    else
#line 167 "thread.future.m"
      {
#line 167 "thread.future.m"
        MR_Word mercury__thread__future__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 0)));
#line 167 "thread.future.m"
        MR_Box mercury__thread__future__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 1)));
#line 167 "thread.future.m"
        MR_Word mercury__thread__future__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 2)));
#line 167 "thread.future.m"
        MR_Word mercury__thread__future__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__3_3, (MR_Integer) 0)));
#line 167 "thread.future.m"
        MR_Box mercury__thread__future__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__3_3, (MR_Integer) 1)));
#line 167 "thread.future.m"
        MR_Word mercury__thread__future__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__3_3, (MR_Integer) 2)));
#line 167 "thread.future.m"
        MR_Word mercury__thread__future__V_10_10;
#line 167 "thread.future.m"
        MR_Word mercury__thread__future__TypeInfo_15_15 = (MR_Word) &mercury__thread__future_scalar_common_1[0];

#line 167 "thread.future.m"
        {
#line 167 "thread.future.m"
          mercury__builtin__compare_3_p_0(mercury__thread__future__TypeInfo_15_15, &mercury__thread__future__V_10_10, ((MR_Box) (mercury__thread__future__V_4_4)), ((MR_Box) (mercury__thread__future__V_7_7)));
        }
#line 1665 "thread.future.c"
        mercury__thread__future__succeeded = (mercury__thread__future__V_10_10 == (MR_Integer) 0);
#line 167 "thread.future.m"
        mercury__thread__future__succeeded = !(mercury__thread__future__succeeded);
#line 167 "thread.future.m"
        if (mercury__thread__future__succeeded)
#line 167 "thread.future.m"
          *mercury__thread__future__HeadVar__1_1 = mercury__thread__future__V_10_10;
#line 167 "thread.future.m"
        else
#line 167 "thread.future.m"
          {
#line 167 "thread.future.m"
            MR_Word mercury__thread__future__V_11_11;

#line 167 "thread.future.m"
            {
#line 167 "thread.future.m"
              mercury__thread__semaphore____Compare____semaphore_0_0(&mercury__thread__future__V_11_11, mercury__thread__future__V_5_5, mercury__thread__future__V_8_8);
            }
#line 1685 "thread.future.c"
            mercury__thread__future__succeeded = (mercury__thread__future__V_11_11 == (MR_Integer) 0);
#line 167 "thread.future.m"
            mercury__thread__future__succeeded = !(mercury__thread__future__succeeded);
#line 167 "thread.future.m"
            if (mercury__thread__future__succeeded)
#line 167 "thread.future.m"
              *mercury__thread__future__HeadVar__1_1 = mercury__thread__future__V_11_11;
#line 167 "thread.future.m"
            else
#line 167 "thread.future.m"
              {
#line 167 "thread.future.m"
                mercury__mutvar____Compare____mutvar_1_0(mercury__thread__future__TypeInfo_for_T_14, mercury__thread__future__HeadVar__1_1, mercury__thread__future__V_6_6, mercury__thread__future__V_9_9);
#line 167 "thread.future.m"
                return;
              }
#line 167 "thread.future.m"
          }
#line 167 "thread.future.m"
      }
#line 167 "thread.future.m"
  }
#line 167 "thread.future.m"
}

#line 167 "thread.future.m"
MR_bool MR_CALL 
mercury__thread__future____Unify____future_io_1_0(
#line 167 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_11,
#line 167 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__1_1,
#line 167 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__2_2)
#line 167 "thread.future.m"
{
#line 167 "thread.future.m"
  {
#line 167 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 167 "thread.future.m"
    MR_Integer mercury__thread__future__CastX_9 = (MR_Integer) mercury__thread__future__HeadVar__1_1;
#line 167 "thread.future.m"
    MR_Integer mercury__thread__future__CastY_10 = (MR_Integer) mercury__thread__future__HeadVar__2_2;

#line 167 "thread.future.m"
    mercury__thread__future__succeeded = (mercury__thread__future__CastX_9 == mercury__thread__future__CastY_10);
#line 167 "thread.future.m"
    if (mercury__thread__future__succeeded)
#line 167 "thread.future.m"
      mercury__thread__future__succeeded = MR_TRUE;
#line 167 "thread.future.m"
    else
#line 167 "thread.future.m"
      {
#line 167 "thread.future.m"
        MR_Word mercury__thread__future__TypeInfo_12_12 = (MR_Word) &mercury__thread__future_scalar_common_1[0];
#line 167 "thread.future.m"
        MR_Word mercury__thread__future__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__1_1, (MR_Integer) 0)));
#line 167 "thread.future.m"
        MR_Box mercury__thread__future__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__1_1, (MR_Integer) 1)));
#line 167 "thread.future.m"
        MR_Word mercury__thread__future__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__1_1, (MR_Integer) 2)));
#line 167 "thread.future.m"
        MR_Word mercury__thread__future__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 0)));
#line 167 "thread.future.m"
        MR_Box mercury__thread__future__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 1)));
#line 167 "thread.future.m"
        MR_Word mercury__thread__future__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 2)));

#line 1756 "thread.future.c"
        {
#line 1758 "thread.future.c"
          mercury__thread__future__succeeded = mercury__builtin__unify_2_p_0(mercury__thread__future__TypeInfo_12_12, ((MR_Box) (mercury__thread__future__V_3_3)), ((MR_Box) (mercury__thread__future__V_6_6)));
        }
#line 167 "thread.future.m"
        if (mercury__thread__future__succeeded)
#line 167 "thread.future.m"
          {
#line 1765 "thread.future.c"
            {
#line 1767 "thread.future.c"
              mercury__thread__future__succeeded = mercury__thread__semaphore____Unify____semaphore_0_0(mercury__thread__future__V_4_4, mercury__thread__future__V_7_7);
            }
#line 167 "thread.future.m"
            if (mercury__thread__future__succeeded)
#line 1772 "thread.future.c"
              {
#line 1774 "thread.future.c"
                return mercury__thread__future__succeeded = mercury__mutvar____Unify____mutvar_1_0(mercury__thread__future__TypeInfo_for_T_11, mercury__thread__future__V_5_5, mercury__thread__future__V_8_8);
              }
#line 167 "thread.future.m"
          }
#line 167 "thread.future.m"
      }
#line 167 "thread.future.m"
    return mercury__thread__future__succeeded;
#line 167 "thread.future.m"
  }
#line 167 "thread.future.m"
}

#line 112 "thread.future.m"
void MR_CALL 
mercury__thread__future____Compare____future_1_0(
#line 112 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_8,
#line 112 "thread.future.m"
  MR_Word * mercury__thread__future__HeadVar__1_1,
#line 112 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__2_2,
#line 112 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__3_3)
#line 112 "thread.future.m"
{
#line 112 "thread.future.m"
  {
#line 112 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 112 "thread.future.m"
    MR_Integer mercury__thread__future__CastX_6 = (MR_Integer) mercury__thread__future__HeadVar__2_2;
#line 112 "thread.future.m"
    MR_Integer mercury__thread__future__CastY_7 = (MR_Integer) mercury__thread__future__HeadVar__3_3;

#line 112 "thread.future.m"
    mercury__thread__future__succeeded = (mercury__thread__future__CastX_6 == mercury__thread__future__CastY_7);
#line 112 "thread.future.m"
    if (mercury__thread__future__succeeded)
#line 1814 "thread.future.c"
      *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "thread.future.m"
    else
#line 112 "thread.future.m"
      {
#line 112 "thread.future.m"
        MR_Word mercury__thread__future__TypeCtorInfo_9_9 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
#line 112 "thread.future.m"
        MR_Word mercury__thread__future__TypeInfo_10_10;
#line 112 "thread.future.m"
        MR_Word mercury__thread__future__V_4_4 = (MR_Word) mercury__thread__future__HeadVar__2_2;
#line 112 "thread.future.m"
        MR_Word mercury__thread__future__V_5_5 = (MR_Word) mercury__thread__future__HeadVar__3_3;

#line 1829 "thread.future.c"
        {
#line 1831 "thread.future.c"
          mercury__thread__future__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1833 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_10_10, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_9_9));
#line 1835 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_10_10, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_8));
#line 1837 "thread.future.c"
        }
#line 112 "thread.future.m"
        {
#line 112 "thread.future.m"
          mercury__thread__future____Compare____future_io_1_0(mercury__thread__future__TypeInfo_10_10, mercury__thread__future__HeadVar__1_1, (MR_Word) mercury__thread__future__V_4_4, (MR_Word) mercury__thread__future__V_5_5);
#line 112 "thread.future.m"
          return;
        }
#line 112 "thread.future.m"
      }
#line 112 "thread.future.m"
  }
#line 112 "thread.future.m"
}

#line 112 "thread.future.m"
MR_bool MR_CALL 
mercury__thread__future____Unify____future_1_0(
#line 112 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_7,
#line 112 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__1_1,
#line 112 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__2_2)
#line 112 "thread.future.m"
{
#line 112 "thread.future.m"
  {
#line 112 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 112 "thread.future.m"
    MR_Integer mercury__thread__future__CastX_5 = (MR_Integer) mercury__thread__future__HeadVar__1_1;
#line 112 "thread.future.m"
    MR_Integer mercury__thread__future__CastY_6 = (MR_Integer) mercury__thread__future__HeadVar__2_2;

#line 112 "thread.future.m"
    mercury__thread__future__succeeded = (mercury__thread__future__CastX_5 == mercury__thread__future__CastY_6);
#line 112 "thread.future.m"
    if (mercury__thread__future__succeeded)
#line 112 "thread.future.m"
      mercury__thread__future__succeeded = MR_TRUE;
#line 112 "thread.future.m"
    else
#line 112 "thread.future.m"
      {
#line 112 "thread.future.m"
        MR_Word mercury__thread__future__TypeCtorInfo_8_8 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
#line 112 "thread.future.m"
        MR_Word mercury__thread__future__TypeInfo_9_9;
#line 112 "thread.future.m"
        MR_Word mercury__thread__future__V_3_3 = (MR_Word) mercury__thread__future__HeadVar__1_1;
#line 112 "thread.future.m"
        MR_Word mercury__thread__future__V_4_4 = (MR_Word) mercury__thread__future__HeadVar__2_2;

#line 1892 "thread.future.c"
        {
#line 1894 "thread.future.c"
          mercury__thread__future__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1896 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_8_8));
#line 1898 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_7));
#line 1900 "thread.future.c"
        }
#line 1902 "thread.future.c"
        {
#line 1904 "thread.future.c"
          return mercury__thread__future__succeeded = mercury__thread__future____Unify____future_io_1_0(mercury__thread__future__TypeInfo_9_9, (MR_Word) mercury__thread__future__V_3_3, (MR_Word) mercury__thread__future__V_4_4);
        }
#line 112 "thread.future.m"
      }
#line 112 "thread.future.m"
    return mercury__thread__future__succeeded;
#line 112 "thread.future.m"
  }
#line 112 "thread.future.m"
}

#line 267 "thread.future.m"
static void MR_CALL 
mercury__thread__future__consume_io_state_1_p_0(void)
#line 267 "thread.future.m"
{
#line 268 "thread.future.m"
  {
#line 268 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;

#line 270 "thread.future.m"
{
#define MR_PROC_LABEL mercury__thread__future__consume_io_state_1_p_0


		{
#line 270 "thread.future.m"

#line 1934 "thread.future.c"

		;}
#undef MR_PROC_LABEL
#line 270 "thread.future.m"
}
#line 268 "thread.future.m"
  }
#line 267 "thread.future.m"
}

#line 256 "thread.future.m"
static void MR_CALL 
mercury__thread__future__make_io_state_1_p_0(void)
#line 256 "thread.future.m"
{
#line 257 "thread.future.m"
  {
#line 257 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;

#line 259 "thread.future.m"
{
#define MR_PROC_LABEL mercury__thread__future__make_io_state_1_p_0


		{
#line 259 "thread.future.m"

#line 1963 "thread.future.c"

		;}
#undef MR_PROC_LABEL
#line 259 "thread.future.m"
}
#line 257 "thread.future.m"
  }
#line 256 "thread.future.m"
}

#line 231 "thread.future.m"
void MR_CALL 
mercury__thread__future__wait_2_p_0(
#line 231 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_9,
#line 231 "thread.future.m"
  MR_Word mercury__thread__future__Future_3,
#line 231 "thread.future.m"
  MR_Box * mercury__thread__future__Value_4)
#line 231 "thread.future.m"
{
#line 234 "thread.future.m"
  {
#line 234 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 234 "thread.future.m"
    MR_Word mercury__thread__future__TypeCtorInfo_10_10 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
#line 234 "thread.future.m"
    MR_Word mercury__thread__future__MReady_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 0)));
#line 234 "thread.future.m"
    MR_Box mercury__thread__future__Wait_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 1)));
#line 234 "thread.future.m"
    MR_Word mercury__thread__future__MValue_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 2)));
#line 234 "thread.future.m"
    MR_Word mercury__thread__future__Ready_8;
#line 236 "thread.future.m"
    MR_Box mercury__thread__future__conv0_Ready_8;

#line 236 "thread.future.m"
    {
#line 236 "thread.future.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_10_10, mercury__thread__future__MReady_5, &mercury__thread__future__conv0_Ready_8);
    }
#line 236 "thread.future.m"
    mercury__thread__future__Ready_8 = ((MR_Word) mercury__thread__future__conv0_Ready_8);
#line 240 "thread.future.m"
#line 240 "thread.future.m"
    switch (mercury__thread__future__Ready_8) {
#line 240 "thread.future.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 240 "thread.future.m"
      case (MR_Integer) 1:
#line 241 "thread.future.m"
        {
#line 243 "thread.future.m"
          {
#line 243 "thread.future.m"
            mercury__thread__semaphore__impure_wait_1_p_0(mercury__thread__future__Wait_6);
          }
#line 245 "thread.future.m"
          {
#line 245 "thread.future.m"
            mercury__thread__semaphore__impure_signal_1_p_0(mercury__thread__future__Wait_6);
          }
#line 241 "thread.future.m"
        }
#line 240 "thread.future.m"
        break;
#line 240 "thread.future.m"
      case (MR_Integer) 0:
#line 238 "thread.future.m"
        {
#line 238 "thread.future.m"
        }
#line 240 "thread.future.m"
        break;
#line 240 "thread.future.m"
    }
#line 247 "thread.future.m"
    {
#line 247 "thread.future.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeInfo_for_T_9, mercury__thread__future__MValue_7, mercury__thread__future__Value_4);
#line 247 "thread.future.m"
      return;
    }
#line 234 "thread.future.m"
  }
#line 231 "thread.future.m"
}

#line 158 "thread.future.m"
static void MR_CALL 
mercury__thread__future__spawn_impure_2_3_p_0(
#line 158 "thread.future.m"
  MR_Word mercury__thread__future__Task_4)
#line 158 "thread.future.m"
{
#line 161 "thread.future.m"
  {
#line 161 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 162 "thread.future.m"
    void MR_CALL (* mercury__thread__future__func_0)(MR_Box) = ((void MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__thread__future__Task_4, (MR_Integer) 1)));

#line 162 "thread.future.m"
    {
#line 162 "thread.future.m"
      mercury__thread__future__func_0(((MR_Box) mercury__thread__future__Task_4));
#line 162 "thread.future.m"
      return;
    }
#line 161 "thread.future.m"
  }
#line 158 "thread.future.m"
}

#line 2080 "thread.future.c"
static void MR_CALL 
mercury__thread__future__run_future_2_p_0_1(
#line 2083 "thread.future.c"
  MR_Box mercury__thread__future__closure_arg,
#line 2085 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_1)
#line 2087 "thread.future.c"
{
#line 2089 "thread.future.c"
  {
#line 2091 "thread.future.c"
    MR_Box mercury__thread__future__closure = mercury__thread__future__closure_arg;
#line 2093 "thread.future.c"
    MR_Tuple mercury__thread__future__conv0_OutputTuple_18;

#line 2096 "thread.future.c"
    {
#line 2098 "thread.future.c"
      mercury__thread__future__IntroducedFrom__pred__run_future__131__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 4))), &mercury__thread__future__conv0_OutputTuple_18);
    }
#line 2101 "thread.future.c"
    *mercury__thread__future__wrapper_arg_1 = ((MR_Box) (mercury__thread__future__conv0_OutputTuple_18));
#line 2103 "thread.future.c"
  }
#line 2105 "thread.future.c"
}

#line 127 "thread.future.m"
static void MR_CALL 
mercury__thread__future__run_future_2_p_0(
#line 127 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_12,
#line 127 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__1_1,
#line 127 "thread.future.m"
  MR_Word mercury__thread__future__Func_4)
#line 127 "thread.future.m"
{
#line 129 "thread.future.m"
  {
#line 129 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 129 "thread.future.m"
    MR_Word mercury__thread__future__TypeCtorInfo_21_21;
#line 129 "thread.future.m"
    MR_Word mercury__thread__future__TypeInfo_23_23;
#line 129 "thread.future.m"
    MR_Word mercury__thread__future__Future_3 = (MR_Word) mercury__thread__future__HeadVar__1_1;
#line 129 "thread.future.m"
    MR_Word mercury__thread__future__TryResult_7;
#line 129 "thread.future.m"
    MR_Word mercury__thread__future__TryLambda_19;
#line 131 "thread.future.m"
    MR_Word mercury__thread__future__conv1_TryResult_7;

#line 2136 "thread.future.c"
    {
#line 2138 "thread.future.c"
      mercury__thread__future__TryLambda_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2140 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_6[2]));
#line 2142 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 1) = ((MR_Box) (mercury__thread__future__run_future_2_p_0_1));
#line 2144 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2146 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 3) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_12));
#line 2148 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 4) = ((MR_Box) (mercury__thread__future__Func_4));
#line 2150 "thread.future.c"
    }
#line 2152 "thread.future.c"
    mercury__thread__future__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 2154 "thread.future.c"
    {
#line 2156 "thread.future.c"
      mercury__thread__future__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2158 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_23_23, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_21_21));
#line 2160 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_23_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 2162 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_23_23, 2) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_12));
#line 2164 "thread.future.c"
    }
#line 131 "thread.future.m"
    {
#line 131 "thread.future.m"
      mercury__exception__try_2_p_0(mercury__thread__future__TypeInfo_23_23, (MR_Word) mercury__thread__future__TryLambda_19, &mercury__thread__future__conv1_TryResult_7);
    }
#line 131 "thread.future.m"
    mercury__thread__future__TryResult_7 = (MR_Word) mercury__thread__future__conv1_TryResult_7;
#line 2173 "thread.future.c"
    if (((MR_tag((MR_Word) mercury__thread__future__TryResult_7)) == (MR_mktag((MR_Integer) 2))))
#line 130 "thread.future.m"
      {
#line 130 "thread.future.m"
        MR_Word mercury__thread__future__TypeInfo_15_15;
#line 130 "thread.future.m"
        MR_Word mercury__thread__future__TypeCtorInfo_16_16;
#line 130 "thread.future.m"
        MR_Word mercury__thread__future__TypeInfo_17_17;
#line 130 "thread.future.m"
        MR_Word mercury__thread__future__TypeCtorInfo_11_44;
#line 130 "thread.future.m"
        MR_Box mercury__thread__future__Exp_6;
#line 130 "thread.future.m"
        MR_Word mercury__thread__future__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__thread__future__TryResult_7, (MR_Integer) 0)));
#line 130 "thread.future.m"
        MR_Word mercury__thread__future__V_9_9;
#line 130 "thread.future.m"
        MR_Word mercury__thread__future__MReady_38;
#line 130 "thread.future.m"
        MR_Box mercury__thread__future__Wait_39;
#line 130 "thread.future.m"
        MR_Word mercury__thread__future__MValue_40;
#line 130 "thread.future.m"
        MR_Word mercury__thread__future__Ready_41;
#line 203 "thread.future.m"
        MR_Box mercury__thread__future__conv2_Ready_41;

#line 12 "univ.opt"
        mercury__thread__future__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__V_8_8, (MR_Integer) 0)));
#line 12 "univ.opt"
        mercury__thread__future__Exp_6 = (MR_hl_field(MR_mktag(0), mercury__thread__future__V_8_8, (MR_Integer) 1));
#line 135 "thread.future.m"
        {
#line 135 "thread.future.m"
          mercury__thread__future__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 135 "thread.future.m"
          MR_hl_field(MR_mktag(1), mercury__thread__future__V_9_9, 0) = ((MR_Box) (mercury__thread__future__TypeInfo_15_15));
#line 135 "thread.future.m"
          MR_hl_field(MR_mktag(1), mercury__thread__future__V_9_9, 1) = mercury__thread__future__Exp_6;
#line 135 "thread.future.m"
        }
#line 2216 "thread.future.c"
        mercury__thread__future__TypeCtorInfo_16_16 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
#line 2218 "thread.future.c"
        {
#line 2220 "thread.future.c"
          mercury__thread__future__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2222 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_17_17, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_16_16));
#line 2224 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_17_17, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_12));
#line 2226 "thread.future.c"
        }
#line 202 "thread.future.m"
        mercury__thread__future__MReady_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 0)));
#line 202 "thread.future.m"
        mercury__thread__future__Wait_39 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 1)));
#line 202 "thread.future.m"
        mercury__thread__future__MValue_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 2)));
#line 2234 "thread.future.c"
        mercury__thread__future__TypeCtorInfo_11_44 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
#line 203 "thread.future.m"
        {
#line 203 "thread.future.m"
          mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_44, mercury__thread__future__MReady_38, &mercury__thread__future__conv2_Ready_41);
        }
#line 203 "thread.future.m"
        mercury__thread__future__Ready_41 = ((MR_Word) mercury__thread__future__conv2_Ready_41);
#line 214 "thread.future.m"
#line 214 "thread.future.m"
        switch (mercury__thread__future__Ready_41) {
#line 214 "thread.future.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 214 "thread.future.m"
          case (MR_Integer) 1:
#line 205 "thread.future.m"
            {
#line 206 "thread.future.m"
              {
#line 206 "thread.future.m"
                mercury__mutvar__set_mutvar_2_p_0(mercury__thread__future__TypeInfo_17_17, (MR_Word) mercury__thread__future__MValue_40, ((MR_Box) (mercury__thread__future__V_9_9)));
              }
#line 208 "thread.future.m"
              {
#line 208 "thread.future.m"
                mercury__thread__semaphore__impure_signal_1_p_0(mercury__thread__future__Wait_39);
              }
#line 213 "thread.future.m"
              {
#line 213 "thread.future.m"
                mercury__mutvar__set_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_44, mercury__thread__future__MReady_38, ((MR_Box) ((MR_Integer) 0)));
#line 213 "thread.future.m"
                return;
              }
#line 205 "thread.future.m"
            }
#line 214 "thread.future.m"
            break;
#line 214 "thread.future.m"
          case (MR_Integer) 0:
#line 215 "thread.future.m"
            {
#line 220 "thread.future.m"
              {
#line 220 "thread.future.m"
                mercury__require__error_1_p_0((MR_String) "Multiple calls to thread.future.signal/2");
#line 220 "thread.future.m"
                return;
              }
#line 215 "thread.future.m"
            }
#line 214 "thread.future.m"
            break;
#line 214 "thread.future.m"
        }
#line 130 "thread.future.m"
      }
#line 2292 "thread.future.c"
    else
#line 2294 "thread.future.c"
      {
#line 2296 "thread.future.c"
        MR_Word mercury__thread__future__TypeCtorInfo_13_13;
#line 2298 "thread.future.c"
        MR_Word mercury__thread__future__TypeInfo_14_14;
#line 2300 "thread.future.c"
        MR_Word mercury__thread__future__TypeCtorInfo_11_33;
#line 2302 "thread.future.c"
        MR_Box mercury__thread__future__Result_5;
#line 2304 "thread.future.c"
        MR_Word mercury__thread__future__V_11_11;
#line 2306 "thread.future.c"
        MR_Tuple mercury__thread__future__OutputTuple_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__thread__future__TryResult_7, (MR_Integer) 0)));
#line 2308 "thread.future.c"
        MR_Word mercury__thread__future__MReady_27;
#line 2310 "thread.future.c"
        MR_Box mercury__thread__future__Wait_28;
#line 2312 "thread.future.c"
        MR_Word mercury__thread__future__MValue_29;
#line 2314 "thread.future.c"
        MR_Word mercury__thread__future__Ready_30;
#line 203 "thread.future.m"
        MR_Box mercury__thread__future__conv3_Ready_30;

#line 2319 "thread.future.c"
        mercury__thread__future__Result_5 = (MR_hl_field(MR_mktag(0), mercury__thread__future__OutputTuple_25, (MR_Integer) 0));
#line 133 "thread.future.m"
        {
#line 133 "thread.future.m"
          mercury__thread__future__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 133 "thread.future.m"
          MR_hl_field(MR_mktag(0), mercury__thread__future__V_11_11, 0) = mercury__thread__future__Result_5;
#line 133 "thread.future.m"
        }
#line 2329 "thread.future.c"
        mercury__thread__future__TypeCtorInfo_13_13 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
#line 2331 "thread.future.c"
        {
#line 2333 "thread.future.c"
          mercury__thread__future__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2335 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_14_14, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_13_13));
#line 2337 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_14_14, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_12));
#line 2339 "thread.future.c"
        }
#line 202 "thread.future.m"
        mercury__thread__future__MReady_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 0)));
#line 202 "thread.future.m"
        mercury__thread__future__Wait_28 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 1)));
#line 202 "thread.future.m"
        mercury__thread__future__MValue_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 2)));
#line 2347 "thread.future.c"
        mercury__thread__future__TypeCtorInfo_11_33 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
#line 203 "thread.future.m"
        {
#line 203 "thread.future.m"
          mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_33, mercury__thread__future__MReady_27, &mercury__thread__future__conv3_Ready_30);
        }
#line 203 "thread.future.m"
        mercury__thread__future__Ready_30 = ((MR_Word) mercury__thread__future__conv3_Ready_30);
#line 214 "thread.future.m"
#line 214 "thread.future.m"
        switch (mercury__thread__future__Ready_30) {
#line 214 "thread.future.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 214 "thread.future.m"
          case (MR_Integer) 1:
#line 205 "thread.future.m"
            {
#line 206 "thread.future.m"
              {
#line 206 "thread.future.m"
                mercury__mutvar__set_mutvar_2_p_0(mercury__thread__future__TypeInfo_14_14, (MR_Word) mercury__thread__future__MValue_29, ((MR_Box) (mercury__thread__future__V_11_11)));
              }
#line 208 "thread.future.m"
              {
#line 208 "thread.future.m"
                mercury__thread__semaphore__impure_signal_1_p_0(mercury__thread__future__Wait_28);
              }
#line 213 "thread.future.m"
              {
#line 213 "thread.future.m"
                mercury__mutvar__set_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_33, mercury__thread__future__MReady_27, ((MR_Box) ((MR_Integer) 0)));
#line 213 "thread.future.m"
                return;
              }
#line 205 "thread.future.m"
            }
#line 214 "thread.future.m"
            break;
#line 214 "thread.future.m"
          case (MR_Integer) 0:
#line 215 "thread.future.m"
            {
#line 220 "thread.future.m"
              {
#line 220 "thread.future.m"
                mercury__require__error_1_p_0((MR_String) "Multiple calls to thread.future.signal/2");
#line 220 "thread.future.m"
                return;
              }
#line 215 "thread.future.m"
            }
#line 214 "thread.future.m"
            break;
#line 214 "thread.future.m"
        }
#line 2403 "thread.future.c"
      }
#line 129 "thread.future.m"
  }
#line 127 "thread.future.m"
}

#line 100 "thread.future.m"
void MR_CALL 
mercury__thread__future__wait_4_p_0(
#line 100 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_10,
#line 100 "thread.future.m"
  MR_Word mercury__thread__future__Future_5,
#line 100 "thread.future.m"
  MR_Box * mercury__thread__future__Value_6)
#line 100 "thread.future.m"
{
#line 225 "thread.future.m"
  {
#line 225 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 225 "thread.future.m"
    MR_Word mercury__thread__future__TypeCtorInfo_10_17 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
#line 225 "thread.future.m"
    MR_Word mercury__thread__future__MReady_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_5, (MR_Integer) 0)));
#line 225 "thread.future.m"
    MR_Box mercury__thread__future__Wait_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_5, (MR_Integer) 1)));
#line 225 "thread.future.m"
    MR_Word mercury__thread__future__MValue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_5, (MR_Integer) 2)));
#line 225 "thread.future.m"
    MR_Word mercury__thread__future__Ready_16;
#line 236 "thread.future.m"
    MR_Box mercury__thread__future__conv0_Ready_16;

#line 236 "thread.future.m"
    {
#line 236 "thread.future.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_10_17, mercury__thread__future__MReady_13, &mercury__thread__future__conv0_Ready_16);
    }
#line 236 "thread.future.m"
    mercury__thread__future__Ready_16 = ((MR_Word) mercury__thread__future__conv0_Ready_16);
#line 240 "thread.future.m"
#line 240 "thread.future.m"
    switch (mercury__thread__future__Ready_16) {
#line 240 "thread.future.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 240 "thread.future.m"
      case (MR_Integer) 1:
#line 241 "thread.future.m"
        {
#line 243 "thread.future.m"
          {
#line 243 "thread.future.m"
            mercury__thread__semaphore__impure_wait_1_p_0(mercury__thread__future__Wait_14);
          }
#line 245 "thread.future.m"
          {
#line 245 "thread.future.m"
            mercury__thread__semaphore__impure_signal_1_p_0(mercury__thread__future__Wait_14);
          }
#line 241 "thread.future.m"
        }
#line 240 "thread.future.m"
        break;
#line 240 "thread.future.m"
      case (MR_Integer) 0:
#line 238 "thread.future.m"
        {
#line 238 "thread.future.m"
        }
#line 240 "thread.future.m"
        break;
#line 240 "thread.future.m"
    }
#line 247 "thread.future.m"
    {
#line 247 "thread.future.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeInfo_for_T_10, mercury__thread__future__MValue_15, mercury__thread__future__Value_6);
#line 247 "thread.future.m"
      return;
    }
#line 225 "thread.future.m"
  }
#line 100 "thread.future.m"
}

#line 95 "thread.future.m"
void MR_CALL 
mercury__thread__future__signal_4_p_0(
#line 95 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_10,
#line 95 "thread.future.m"
  MR_Word mercury__thread__future__Future_5,
#line 95 "thread.future.m"
  MR_Box mercury__thread__future__Value_6)
#line 95 "thread.future.m"
{
#line 197 "thread.future.m"
  {
#line 197 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 197 "thread.future.m"
    MR_Word mercury__thread__future__TypeCtorInfo_11_18 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
#line 197 "thread.future.m"
    MR_Word mercury__thread__future__MReady_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_5, (MR_Integer) 0)));
#line 197 "thread.future.m"
    MR_Box mercury__thread__future__Wait_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_5, (MR_Integer) 1)));
#line 197 "thread.future.m"
    MR_Word mercury__thread__future__MValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_5, (MR_Integer) 2)));
#line 197 "thread.future.m"
    MR_Word mercury__thread__future__Ready_15;
#line 203 "thread.future.m"
    MR_Box mercury__thread__future__conv0_Ready_15;

#line 203 "thread.future.m"
    {
#line 203 "thread.future.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_18, mercury__thread__future__MReady_12, &mercury__thread__future__conv0_Ready_15);
    }
#line 203 "thread.future.m"
    mercury__thread__future__Ready_15 = ((MR_Word) mercury__thread__future__conv0_Ready_15);
#line 214 "thread.future.m"
#line 214 "thread.future.m"
    switch (mercury__thread__future__Ready_15) {
#line 214 "thread.future.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 214 "thread.future.m"
      case (MR_Integer) 1:
#line 205 "thread.future.m"
        {
#line 206 "thread.future.m"
          {
#line 206 "thread.future.m"
            mercury__mutvar__set_mutvar_2_p_0(mercury__thread__future__TypeInfo_for_T_10, mercury__thread__future__MValue_14, mercury__thread__future__Value_6);
          }
#line 208 "thread.future.m"
          {
#line 208 "thread.future.m"
            mercury__thread__semaphore__impure_signal_1_p_0(mercury__thread__future__Wait_13);
          }
#line 213 "thread.future.m"
          {
#line 213 "thread.future.m"
            mercury__mutvar__set_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_18, mercury__thread__future__MReady_12, ((MR_Box) ((MR_Integer) 0)));
#line 213 "thread.future.m"
            return;
          }
#line 205 "thread.future.m"
        }
#line 214 "thread.future.m"
        break;
#line 214 "thread.future.m"
      case (MR_Integer) 0:
#line 215 "thread.future.m"
        {
#line 220 "thread.future.m"
          {
#line 220 "thread.future.m"
            mercury__require__error_1_p_0((MR_String) "Multiple calls to thread.future.signal/2");
#line 220 "thread.future.m"
            return;
          }
#line 215 "thread.future.m"
        }
#line 214 "thread.future.m"
        break;
#line 214 "thread.future.m"
    }
#line 197 "thread.future.m"
  }
#line 95 "thread.future.m"
}

#line 88 "thread.future.m"
void MR_CALL 
mercury__thread__future__init_3_p_0(
#line 88 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_8,
#line 88 "thread.future.m"
  MR_Word * mercury__thread__future__Future_4)
#line 88 "thread.future.m"
{
#line 183 "thread.future.m"
  {
#line 183 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 183 "thread.future.m"
    MR_Word mercury__thread__future__TypeCtorInfo_7_13 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
#line 183 "thread.future.m"
    MR_Word mercury__thread__future__Ready_9;
#line 183 "thread.future.m"
    MR_Box mercury__thread__future__Wait_10;
#line 183 "thread.future.m"
    MR_Word mercury__thread__future__Value_11;

#line 189 "thread.future.m"
    {
#line 189 "thread.future.m"
      mercury__mutvar__new_mutvar_2_p_1(mercury__thread__future__TypeCtorInfo_7_13, ((MR_Box) ((MR_Integer) 1)), &mercury__thread__future__Ready_9);
    }
#line 190 "thread.future.m"
    {
#line 190 "thread.future.m"
      mercury__thread__semaphore__impure_init_1_p_0(&mercury__thread__future__Wait_10);
    }
#line 191 "thread.future.m"
    {
#line 191 "thread.future.m"
      mercury__mutvar__new_mutvar0_1_p_0(mercury__thread__future__TypeInfo_for_T_8, &mercury__thread__future__Value_11);
    }
#line 188 "thread.future.m"
    {
#line 188 "thread.future.m"
      MR_Word base;
#line 188 "thread.future.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 188 "thread.future.m"
      *mercury__thread__future__Future_4 = base;
#line 188 "thread.future.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__future__Ready_9));
#line 188 "thread.future.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__thread__future__Wait_10));
#line 188 "thread.future.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__thread__future__Value_11));
#line 188 "thread.future.m"
    }
#line 183 "thread.future.m"
  }
#line 88 "thread.future.m"
}

#line 72 "thread.future.m"
MR_Box MR_CALL 
mercury__thread__future__wait_1_f_0(
#line 72 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_7,
#line 72 "thread.future.m"
  MR_Word mercury__thread__future__HeadVar__1_1)
#line 72 "thread.future.m"
{
#line 138 "thread.future.m"
  {
#line 138 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 138 "thread.future.m"
    MR_Box mercury__thread__future__Value_4;
#line 138 "thread.future.m"
    MR_Word mercury__thread__future__TypeCtorInfo_8_8 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
#line 138 "thread.future.m"
    MR_Word mercury__thread__future__TypeInfo_9_9;
#line 138 "thread.future.m"
    MR_Word mercury__thread__future__TypeCtorInfo_10_17;
#line 138 "thread.future.m"
    MR_Word mercury__thread__future__Future_3 = (MR_Word) mercury__thread__future__HeadVar__1_1;
#line 138 "thread.future.m"
    MR_Word mercury__thread__future__Result_5;
#line 138 "thread.future.m"
    MR_Word mercury__thread__future__MReady_13;
#line 138 "thread.future.m"
    MR_Box mercury__thread__future__Wait_14;
#line 138 "thread.future.m"
    MR_Word mercury__thread__future__MValue_15;
#line 138 "thread.future.m"
    MR_Word mercury__thread__future__Ready_16;
#line 236 "thread.future.m"
    MR_Box mercury__thread__future__conv0_Ready_16;
#line 247 "thread.future.m"
    MR_Box mercury__thread__future__conv1_Result_5;

#line 2673 "thread.future.c"
    {
#line 2675 "thread.future.c"
      mercury__thread__future__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2677 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_8_8));
#line 2679 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_7));
#line 2681 "thread.future.c"
    }
#line 235 "thread.future.m"
    mercury__thread__future__MReady_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 0)));
#line 235 "thread.future.m"
    mercury__thread__future__Wait_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 1)));
#line 235 "thread.future.m"
    mercury__thread__future__MValue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 2)));
#line 2689 "thread.future.c"
    mercury__thread__future__TypeCtorInfo_10_17 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
#line 236 "thread.future.m"
    {
#line 236 "thread.future.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_10_17, mercury__thread__future__MReady_13, &mercury__thread__future__conv0_Ready_16);
    }
#line 236 "thread.future.m"
    mercury__thread__future__Ready_16 = ((MR_Word) mercury__thread__future__conv0_Ready_16);
#line 240 "thread.future.m"
#line 240 "thread.future.m"
    switch (mercury__thread__future__Ready_16) {
#line 240 "thread.future.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 240 "thread.future.m"
      case (MR_Integer) 1:
#line 241 "thread.future.m"
        {
#line 243 "thread.future.m"
          {
#line 243 "thread.future.m"
            mercury__thread__semaphore__impure_wait_1_p_0(mercury__thread__future__Wait_14);
          }
#line 245 "thread.future.m"
          {
#line 245 "thread.future.m"
            mercury__thread__semaphore__impure_signal_1_p_0(mercury__thread__future__Wait_14);
          }
#line 241 "thread.future.m"
        }
#line 240 "thread.future.m"
        break;
#line 240 "thread.future.m"
      case (MR_Integer) 0:
#line 238 "thread.future.m"
        {
#line 238 "thread.future.m"
        }
#line 240 "thread.future.m"
        break;
#line 240 "thread.future.m"
    }
#line 247 "thread.future.m"
    {
#line 247 "thread.future.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeInfo_9_9, (MR_Word) mercury__thread__future__MValue_15, &mercury__thread__future__conv1_Result_5);
    }
#line 247 "thread.future.m"
    mercury__thread__future__Result_5 = ((MR_Word) mercury__thread__future__conv1_Result_5);
#line 142 "thread.future.m"
    if (((MR_tag((MR_Word) mercury__thread__future__Result_5)) == (MR_mktag((MR_Integer) 1))))
#line 143 "thread.future.m"
      {
#line 143 "thread.future.m"
        MR_Word mercury__thread__future__TypeInfo_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__thread__future__Result_5, (MR_Integer) 0)));
#line 143 "thread.future.m"
        MR_Box mercury__thread__future__Exception_6 = (MR_hl_field(MR_mktag(1), mercury__thread__future__Result_5, (MR_Integer) 1));

#line 144 "thread.future.m"
        {
#line 144 "thread.future.m"
          mercury__exception__throw_1_p_0(mercury__thread__future__TypeInfo_10_10, mercury__thread__future__Exception_6);
        }
#line 143 "thread.future.m"
      }
#line 142 "thread.future.m"
    else
#line 141 "thread.future.m"
      mercury__thread__future__Value_4 = (MR_hl_field(MR_mktag(0), mercury__thread__future__Result_5, (MR_Integer) 0));
#line 138 "thread.future.m"
    return mercury__thread__future__Value_4;
#line 138 "thread.future.m"
  }
#line 72 "thread.future.m"
}

#line 45 "thread.opt"
static void MR_CALL 
mercury__thread__future__future_1_f_0_3(
#line 45 "thread.opt"
  MR_Box mercury__thread__future__closure_arg,
#line 45 "thread.opt"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 45 "thread.opt"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 45 "thread.opt"
  MR_Box * mercury__thread__future__wrapper_arg_3)
#line 45 "thread.opt"
{
#line 45 "thread.opt"
  {
#line 45 "thread.opt"
    MR_Box mercury__thread__future__closure = mercury__thread__future__closure_arg;

#line 45 "thread.opt"
    {
#line 45 "thread.opt"
      mercury__thread__future__IntroducedFrom__pred__spawn__49__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 3))), ((MR_Word) mercury__thread__future__wrapper_arg_1));
#line 45 "thread.opt"
      return;
    }
#line 45 "thread.opt"
  }
#line 45 "thread.opt"
}

#line 153 "thread.future.m"
static void MR_CALL 
mercury__thread__future__future_1_f_0_2(
#line 153 "thread.future.m"
  MR_Box mercury__thread__future__closure_arg,
#line 153 "thread.future.m"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 153 "thread.future.m"
  MR_Box * mercury__thread__future__wrapper_arg_2)
#line 153 "thread.future.m"
{
#line 153 "thread.future.m"
  {
#line 153 "thread.future.m"
    MR_Box mercury__thread__future__closure = mercury__thread__future__closure_arg;

#line 153 "thread.future.m"
    {
#line 153 "thread.future.m"
      mercury__thread__future__spawn_impure_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 3))));
#line 153 "thread.future.m"
      return;
    }
#line 153 "thread.future.m"
  }
#line 153 "thread.future.m"
}

#line 124 "thread.future.m"
static void MR_CALL 
mercury__thread__future__future_1_f_0_1(
#line 124 "thread.future.m"
  MR_Box mercury__thread__future__closure_arg)
#line 124 "thread.future.m"
{
#line 124 "thread.future.m"
  {
#line 124 "thread.future.m"
    MR_Box mercury__thread__future__closure = mercury__thread__future__closure_arg;

#line 124 "thread.future.m"
    {
#line 124 "thread.future.m"
      mercury__thread__future__run_future_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 5))));
#line 124 "thread.future.m"
      return;
    }
#line 124 "thread.future.m"
  }
#line 124 "thread.future.m"
}

#line 68 "thread.future.m"
MR_Word MR_CALL 
mercury__thread__future__future_1_f_0(
#line 68 "thread.future.m"
  MR_Word mercury__thread__future__TypeInfo_for_T_7,
#line 68 "thread.future.m"
  MR_Word mercury__thread__future__Func_3)
#line 68 "thread.future.m"
{
#line 121 "thread.future.m"
  {
#line 121 "thread.future.m"
    MR_bool mercury__thread__future__succeeded;
#line 121 "thread.future.m"
    MR_Word mercury__thread__future__Future_4;
#line 121 "thread.future.m"
    MR_Word mercury__thread__future__TypeCtorInfo_8_8 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
#line 121 "thread.future.m"
    MR_Word mercury__thread__future__TypeInfo_9_9;
#line 121 "thread.future.m"
    MR_Word mercury__thread__future__TypeCtorInfo_7_14;
#line 121 "thread.future.m"
    MR_Word mercury__thread__future__FutureIO_5;
#line 121 "thread.future.m"
    MR_Word mercury__thread__future__V_6_6;
#line 121 "thread.future.m"
    MR_Word mercury__thread__future__Ready_10;
#line 121 "thread.future.m"
    MR_Box mercury__thread__future__Wait_11;
#line 121 "thread.future.m"
    MR_Word mercury__thread__future__Value_12;
#line 191 "thread.future.m"
    MR_Word mercury__thread__future__conv0_Value_12;
#line 153 "thread.future.m"
    MR_Word mercury__thread__future__V_18_18;
#line 153 "thread.future.m"
    MR_Word mercury__thread__future__Goal_6_24;
#line 153 "thread.future.m"
    MR_Word mercury__thread__future__Res_9_31;

#line 2887 "thread.future.c"
    {
#line 2889 "thread.future.c"
      mercury__thread__future__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2891 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_8_8));
#line 2893 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_7));
#line 2895 "thread.future.c"
    }
#line 2897 "thread.future.c"
    mercury__thread__future__TypeCtorInfo_7_14 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
#line 189 "thread.future.m"
    {
#line 189 "thread.future.m"
      mercury__mutvar__new_mutvar_2_p_1(mercury__thread__future__TypeCtorInfo_7_14, ((MR_Box) ((MR_Integer) 1)), &mercury__thread__future__Ready_10);
    }
#line 190 "thread.future.m"
    {
#line 190 "thread.future.m"
      mercury__thread__semaphore__impure_init_1_p_0(&mercury__thread__future__Wait_11);
    }
#line 191 "thread.future.m"
    {
#line 191 "thread.future.m"
      mercury__mutvar__new_mutvar0_1_p_0(mercury__thread__future__TypeInfo_9_9, &mercury__thread__future__conv0_Value_12);
    }
#line 191 "thread.future.m"
    mercury__thread__future__Value_12 = (MR_Word) mercury__thread__future__conv0_Value_12;
#line 188 "thread.future.m"
    {
#line 188 "thread.future.m"
      mercury__thread__future__FutureIO_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 188 "thread.future.m"
      MR_hl_field(MR_mktag(0), mercury__thread__future__FutureIO_5, 0) = ((MR_Box) (mercury__thread__future__Ready_10));
#line 188 "thread.future.m"
      MR_hl_field(MR_mktag(0), mercury__thread__future__FutureIO_5, 1) = ((MR_Box) (mercury__thread__future__Wait_11));
#line 188 "thread.future.m"
      MR_hl_field(MR_mktag(0), mercury__thread__future__FutureIO_5, 2) = ((MR_Box) (mercury__thread__future__Value_12));
#line 188 "thread.future.m"
    }
#line 123 "thread.future.m"
    mercury__thread__future__Future_4 = (MR_Word) mercury__thread__future__FutureIO_5;
#line 124 "thread.future.m"
    {
#line 124 "thread.future.m"
      mercury__thread__future__V_6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 124 "thread.future.m"
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_6_6, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_6[0]));
#line 124 "thread.future.m"
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_6_6, 1) = ((MR_Box) (mercury__thread__future__future_1_f_0_1));
#line 124 "thread.future.m"
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_6_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 124 "thread.future.m"
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_6_6, 3) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_7));
#line 124 "thread.future.m"
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_6_6, 4) = ((MR_Box) (mercury__thread__future__Future_4));
#line 124 "thread.future.m"
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_6_6, 5) = ((MR_Box) (mercury__thread__future__Func_3));
#line 124 "thread.future.m"
    }
#line 259 "thread.future.m"
{
#define MR_PROC_LABEL mercury__thread__future__future_1_f_0


		{
#line 259 "thread.future.m"

#line 2956 "thread.future.c"

		;}
#undef MR_PROC_LABEL
#line 259 "thread.future.m"
}
#line 153 "thread.future.m"
    {
#line 153 "thread.future.m"
      mercury__thread__future__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 153 "thread.future.m"
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_18_18, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_6[1]));
#line 153 "thread.future.m"
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_18_18, 1) = ((MR_Box) (mercury__thread__future__future_1_f_0_2));
#line 153 "thread.future.m"
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 153 "thread.future.m"
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_18_18, 3) = ((MR_Box) (mercury__thread__future__V_6_6));
#line 153 "thread.future.m"
    }
#line 45 "thread.opt"
    {
#line 45 "thread.opt"
      mercury__thread__future__Goal_6_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 45 "thread.opt"
      MR_hl_field(MR_mktag(0), mercury__thread__future__Goal_6_24, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_7[0]));
#line 45 "thread.opt"
      MR_hl_field(MR_mktag(0), mercury__thread__future__Goal_6_24, 1) = ((MR_Box) (mercury__thread__future__future_1_f_0_3));
#line 45 "thread.opt"
      MR_hl_field(MR_mktag(0), mercury__thread__future__Goal_6_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 45 "thread.opt"
      MR_hl_field(MR_mktag(0), mercury__thread__future__Goal_6_24, 3) = ((MR_Box) (mercury__thread__future__V_18_18));
#line 45 "thread.opt"
    }
#line 65 "thread.opt"
    {
#line 65 "thread.opt"
      mercury__thread__future__succeeded = mercury__thread__can_spawn_context_0_p_0();
    }
#line 68 "thread.opt"
    if (mercury__thread__future__succeeded)
#line 67 "thread.opt"
      {
#line 67 "thread.opt"
        MR_Word mercury__thread__future__Success_8_50;
#line 67 "thread.opt"
        MR_String mercury__thread__future__ThreadId_9_51;

#line 83 "thread.opt"
        {
#line 83 "thread.opt"
          mercury__thread__spawn_context_2_5_p_0(mercury__thread__future__Goal_6_24, &mercury__thread__future__Success_8_50, &mercury__thread__future__ThreadId_9_51);
        }
#line 88 "thread.opt"
#line 88 "thread.opt"
        switch (mercury__thread__future__Success_8_50) {
#line 88 "thread.opt"
          default: /*NOTREACHED*/ MR_assert(0);
#line 88 "thread.opt"
          case (MR_Integer) 0:
#line 89 "thread.opt"
            {
#line 90 "thread.opt"
              mercury__thread__future__Res_9_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread__future_scalar_common_8[0]);
#line 89 "thread.opt"
            }
#line 88 "thread.opt"
            break;
#line 88 "thread.opt"
          case (MR_Integer) 1:
#line 85 "thread.opt"
            {
#line 85 "thread.opt"
              MR_Word mercury__thread__future__V_14_52 = (MR_Word) mercury__thread__future__ThreadId_9_51;

#line 86 "thread.opt"
              {
#line 86 "thread.opt"
                mercury__thread__future__Res_9_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 86 "thread.opt"
                MR_hl_field(MR_mktag(0), mercury__thread__future__Res_9_31, 0) = ((MR_Box) (mercury__thread__future__V_14_52));
#line 86 "thread.opt"
              }
#line 85 "thread.opt"
            }
#line 88 "thread.opt"
            break;
#line 88 "thread.opt"
        }
#line 67 "thread.opt"
      }
#line 68 "thread.opt"
    else
#line 69 "thread.opt"
      {
#line 69 "thread.opt"
        MR_Word mercury__thread__future__Success_8_58;
#line 69 "thread.opt"
        MR_String mercury__thread__future__ThreadId_9_59;

#line 72 "thread.opt"
        {
#line 72 "thread.opt"
          mercury__thread__spawn_native_2_5_p_0(mercury__thread__future__Goal_6_24, &mercury__thread__future__Success_8_58, &mercury__thread__future__ThreadId_9_59);
        }
#line 77 "thread.opt"
#line 77 "thread.opt"
        switch (mercury__thread__future__Success_8_58) {
#line 77 "thread.opt"
          default: /*NOTREACHED*/ MR_assert(0);
#line 77 "thread.opt"
          case (MR_Integer) 0:
#line 78 "thread.opt"
            {
#line 79 "thread.opt"
              mercury__thread__future__Res_9_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread__future_scalar_common_8[1]);
#line 78 "thread.opt"
            }
#line 77 "thread.opt"
            break;
#line 77 "thread.opt"
          case (MR_Integer) 1:
#line 74 "thread.opt"
            {
#line 74 "thread.opt"
              MR_Word mercury__thread__future__V_14_60 = (MR_Word) mercury__thread__future__ThreadId_9_59;

#line 75 "thread.opt"
              {
#line 75 "thread.opt"
                mercury__thread__future__Res_9_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 75 "thread.opt"
                MR_hl_field(MR_mktag(0), mercury__thread__future__Res_9_31, 0) = ((MR_Box) (mercury__thread__future__V_14_60));
#line 75 "thread.opt"
              }
#line 74 "thread.opt"
            }
#line 77 "thread.opt"
            break;
#line 77 "thread.opt"
        }
#line 69 "thread.opt"
      }
#line 57 "thread.opt"
    if (((MR_tag((MR_Word) mercury__thread__future__Res_9_31)) == (MR_mktag((MR_Integer) 1))))
#line 58 "thread.opt"
      {
#line 58 "thread.opt"
        MR_String mercury__thread__future__Error_11_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__thread__future__Res_9_31, (MR_Integer) 0)));

#line 61 "thread.opt"
        {
#line 61 "thread.opt"
          mercury__require__unexpected_3_p_0((MR_String) "thread", (MR_String) "predicate \140thread.spawn\'/3", mercury__thread__future__Error_11_33);
        }
#line 58 "thread.opt"
      }
#line 57 "thread.opt"
    else
#line 56 "thread.opt"
      {
#line 56 "thread.opt"
      }
#line 270 "thread.future.m"
{
#define MR_PROC_LABEL mercury__thread__future__future_1_f_0


		{
#line 270 "thread.future.m"

#line 3127 "thread.future.c"

		;}
#undef MR_PROC_LABEL
#line 270 "thread.future.m"
}
#line 121 "thread.future.m"
    return mercury__thread__future__Future_4;
#line 121 "thread.future.m"
  }
#line 68 "thread.future.m"
}

void mercury__thread__future__init(void)
{
}

void mercury__thread__future__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__thread__future__thread__future__type_ctor_info_future_1);
	MR_register_type_ctor_info(&mercury__thread__future__thread__future__type_ctor_info_future_io_1);
	MR_register_type_ctor_info(&mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1);
	MR_register_type_ctor_info(&mercury__thread__future__thread__future__type_ctor_info_ready_0);
}

void mercury__thread__future__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module thread.future. */
