/*
** Automatically generated from `thread.future.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
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
#include "string.to_string.mih"
#include "thread.semaphore.mih"




#line 91 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_1__pseudo_1;

#line 94 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_func_1__pseudo_1;

#line 97 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct0 mercury__thread__future____vpti_pred_0;

#line 100 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__thread__future____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 103 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_tuple_1__pseudo_1;

#line 106 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_future_1[1];

#line 109 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_ok_or_exception_1__pseudo_1;

#line 112 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_io_1__pseudo_thread__future__pti_ok_or_exception_1__pseudo_1;

#line 115 "thread.future.c"
static const MR_NotagFunctorDesc mercury__thread__future__thread__future__notag_functor_desc_future_1;

#line 118 "thread.future.c"
static const MR_FA_TypeInfo_Struct1 mercury__thread__future__mutvar__ti_mutvar_1thread__future__type_ctor_info_ready_0;

#line 121 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__mutvar__pti_mutvar_1__pseudo_1;

#line 124 "thread.future.c"
static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_future_io_1_0[3];

#line 127 "thread.future.c"
static const MR_ConstString mercury__thread__future__thread__future__field_names_future_io_1_0[3];

#line 130 "thread.future.c"
static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_future_io_1_0;

#line 133 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_future_io_1_0[1];

#line 136 "thread.future.c"
static const MR_DuPtagLayout mercury__thread__future__thread__future__du_ptag_ordered_future_io_1[1];

#line 139 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_name_ordered_future_io_1[1];

#line 142 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_future_io_1[1];

#line 145 "thread.future.c"
static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_0[1];

#line 148 "thread.future.c"
static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_0;

#line 151 "thread.future.c"
static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_1[1];

#line 154 "thread.future.c"
static const MR_DuExistLocn mercury__thread__future__thread__future__exist_locns_ok_or_exception_1_1[1];

#line 157 "thread.future.c"
static const MR_DuExistInfo mercury__thread__future__thread__future__exist_info_ok_or_exception_1_1;

#line 160 "thread.future.c"
static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_1;

#line 163 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_0[1];

#line 166 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_1[1];

#line 169 "thread.future.c"
static const MR_DuPtagLayout mercury__thread__future__thread__future__du_ptag_ordered_ok_or_exception_1[2];

#line 172 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_name_ordered_ok_or_exception_1[2];

#line 175 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_ok_or_exception_1[2];

#line 178 "thread.future.c"
static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_0;

#line 181 "thread.future.c"
static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_1;

#line 184 "thread.future.c"
static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_value_ordered_ready_0[2];

#line 187 "thread.future.c"
static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_name_ordered_ready_0[2];

#line 190 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_ready_0[2];

#line 193 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____future_1_0_10001(
#line 196 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 198 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 200 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3);

#line 203 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____future_1_0_10001(
#line 206 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 208 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_2,
#line 210 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3,
#line 212 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_4);

#line 215 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____future_io_1_0_10001(
#line 218 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 220 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 222 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3);

#line 225 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____future_io_1_0_10001(
#line 228 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 230 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_2,
#line 232 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3,
#line 234 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_4);

#line 237 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____ok_or_exception_1_0_10001(
#line 240 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 242 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 244 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3);

#line 247 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____ok_or_exception_1_0_10001(
#line 250 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 252 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_2,
#line 254 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3,
#line 256 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_4);

#line 259 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____ready_0_0_10001(
#line 262 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 264 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2);

#line 267 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____ready_0_0_10001(
#line 270 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_1,
#line 272 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 274 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3);

#line 70 "thread.opt"
static void MR_CALL 
mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_55_48_95_95_49_95_95_91_50_93_95_48_4_p_0(
#line 70 "thread.opt"
  MR_Word mercury__thread__future__Goal0_4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 70 "thread.opt"
static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__spawn__70__1_4_p_0(
#line 70 "thread.opt"
  MR_Word mercury__thread__future__Goal0_4_4,
#line 70 "thread.opt"
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

#line 319 "thread.future.c"
static void MR_CALL 
mercury__thread__future__run_future_2_p_0_1(
#line 322 "thread.future.c"
  MR_Box mercury__thread__future__closure_arg,
#line 324 "thread.future.c"
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

#line 66 "thread.opt"
static void MR_CALL 
mercury__thread__future__future_1_f_0_3(
#line 66 "thread.opt"
  MR_Box mercury__thread__future__closure_arg,
#line 66 "thread.opt"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 66 "thread.opt"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 66 "thread.opt"
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
#include "type_desc.mh"
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
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "thread.semaphore.mh"
#include "thread.mh"
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



#line 829 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_1__pseudo_1 = {
  &mercury__thread__future__thread__future__type_ctor_info_future_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 837 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_func_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 846 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct0 mercury__thread__future____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

#line 854 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct2 mercury__thread__future____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 864 "thread.future.c"
static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_tuple_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 873 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_future_1[1] = {
  (MR_Integer) 0
};

#line 878 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_ok_or_exception_1__pseudo_1 = {
  &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 886 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_io_1__pseudo_thread__future__pti_ok_or_exception_1__pseudo_1 = {
  &mercury__thread__future__thread__future__type_ctor_info_future_io_1,
  {
    (MR_PseudoTypeInfo) &mercury__thread__future__thread__future__pti_ok_or_exception_1__pseudo_1
  }
};

#line 894 "thread.future.c"
static const MR_NotagFunctorDesc mercury__thread__future__thread__future__notag_functor_desc_future_1 = {
  (MR_String) "future",
  (MR_PseudoTypeInfo) &mercury__thread__future__thread__future__pti_future_io_1__pseudo_thread__future__pti_ok_or_exception_1__pseudo_1,
  NULL
};

#line 901 "thread.future.c"
const MR_TypeCtorInfo_Struct mercury__thread__future__thread__future__type_ctor_info_future_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__thread__future____Unify____future_1_0_10001)),
  ((MR_Box) (mercury__thread__future____Compare____future_1_0_10001)),
  (MR_String) "thread.future",
  (MR_String) "future",
  {
    &mercury__thread__future__thread__future__notag_functor_desc_future_1
  },
  {
    &mercury__thread__future__thread__future__notag_functor_desc_future_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__future__thread__future__functor_number_map_future_1
};

#line 922 "thread.future.c"
static const MR_FA_TypeInfo_Struct1 mercury__thread__future__mutvar__ti_mutvar_1thread__future__type_ctor_info_ready_0 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_TypeInfo) &mercury__thread__future__thread__future__type_ctor_info_ready_0
  }
};

#line 930 "thread.future.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__mutvar__pti_mutvar_1__pseudo_1 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 938 "thread.future.c"
static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_future_io_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__thread__future__mutvar__ti_mutvar_1thread__future__type_ctor_info_ready_0,
  (MR_PseudoTypeInfo) &mercury__thread__semaphore__thread__semaphore__type_ctor_info_semaphore_0,
  (MR_PseudoTypeInfo) &mercury__thread__future__mutvar__pti_mutvar_1__pseudo_1
};

#line 945 "thread.future.c"
static const MR_ConstString mercury__thread__future__thread__future__field_names_future_io_1_0[3] = {
  (MR_String) "f_ready",
  (MR_String) "f_wait",
  (MR_String) "f_value"
};

#line 952 "thread.future.c"
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

#line 967 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_future_io_1_0[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_future_io_1_0
};

#line 972 "thread.future.c"
static const MR_DuPtagLayout mercury__thread__future__thread__future__du_ptag_ordered_future_io_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__thread__future__thread__future__du_stag_ordered_future_io_1_0
  }
};

#line 981 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_name_ordered_future_io_1[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_future_io_1_0
};

#line 986 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_future_io_1[1] = {
  (MR_Integer) 0
};

#line 991 "thread.future.c"
const MR_TypeCtorInfo_Struct mercury__thread__future__thread__future__type_ctor_info_future_io_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__future____Unify____future_io_1_0_10001)),
  ((MR_Box) (mercury__thread__future____Compare____future_io_1_0_10001)),
  (MR_String) "thread.future",
  (MR_String) "future_io",
  {
    mercury__thread__future__thread__future__du_name_ordered_future_io_1
  },
  {
    mercury__thread__future__thread__future__du_ptag_ordered_future_io_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__future__thread__future__functor_number_map_future_io_1
};

#line 1012 "thread.future.c"
static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1017 "thread.future.c"
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

#line 1032 "thread.future.c"
static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

#line 1037 "thread.future.c"
static const MR_DuExistLocn mercury__thread__future__thread__future__exist_locns_ok_or_exception_1_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) -1
  }
};

#line 1045 "thread.future.c"
static const MR_DuExistInfo mercury__thread__future__thread__future__exist_info_ok_or_exception_1_1 = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__thread__future__thread__future__exist_locns_ok_or_exception_1_1,
  NULL
};

#line 1054 "thread.future.c"
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

#line 1069 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_0[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_0
};

#line 1074 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_1[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_1
};

#line 1079 "thread.future.c"
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

#line 1093 "thread.future.c"
static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_name_ordered_ok_or_exception_1[2] = {
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_1,
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_0
};

#line 1099 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_ok_or_exception_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1105 "thread.future.c"
const MR_TypeCtorInfo_Struct mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__future____Unify____ok_or_exception_1_0_10001)),
  ((MR_Box) (mercury__thread__future____Compare____ok_or_exception_1_0_10001)),
  (MR_String) "thread.future",
  (MR_String) "ok_or_exception",
  {
    mercury__thread__future__thread__future__du_name_ordered_ok_or_exception_1
  },
  {
    mercury__thread__future__thread__future__du_ptag_ordered_ok_or_exception_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__thread__future__thread__future__functor_number_map_ok_or_exception_1
};

#line 1126 "thread.future.c"
static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_0 = {
  (MR_String) "ready",
  (MR_Integer) 0
};

#line 1132 "thread.future.c"
static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_1 = {
  (MR_String) "not_ready",
  (MR_Integer) 1
};

#line 1138 "thread.future.c"
static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_value_ordered_ready_0[2] = {
  &mercury__thread__future__thread__future__enum_functor_desc_ready_0_0,
  &mercury__thread__future__thread__future__enum_functor_desc_ready_0_1
};

#line 1144 "thread.future.c"
static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_name_ordered_ready_0[2] = {
  &mercury__thread__future__thread__future__enum_functor_desc_ready_0_1,
  &mercury__thread__future__thread__future__enum_functor_desc_ready_0_0
};

#line 1150 "thread.future.c"
static const MR_Integer mercury__thread__future__thread__future__functor_number_map_ready_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1156 "thread.future.c"
const MR_TypeCtorInfo_Struct mercury__thread__future__thread__future__type_ctor_info_ready_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__thread__future____Unify____ready_0_0_10001)),
  ((MR_Box) (mercury__thread__future____Compare____ready_0_0_10001)),
  (MR_String) "thread.future",
  (MR_String) "ready",
  {
    mercury__thread__future__thread__future__enum_name_ordered_ready_0
  },
  {
    mercury__thread__future__thread__future__enum_value_ordered_ready_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__thread__future__thread__future__functor_number_map_ready_0
};

#line 1177 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____future_1_0_10001(
#line 1180 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1182 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 1184 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3)
#line 1186 "thread.future.c"
{
#line 1188 "thread.future.c"
  {
#line 1190 "thread.future.c"
    MR_bool mercury__thread__future__succeeded;

#line 1193 "thread.future.c"
    {
#line 1195 "thread.future.c"
      mercury__thread__future__succeeded = mercury__thread__future____Unify____future_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), ((MR_Word) mercury__thread__future__wrapper_arg_2), ((MR_Word) mercury__thread__future__wrapper_arg_3));
    }
#line 1198 "thread.future.c"
    return mercury__thread__future__succeeded;
#line 1200 "thread.future.c"
  }
#line 1202 "thread.future.c"
}

#line 1205 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____future_1_0_10001(
#line 1208 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1210 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_2,
#line 1212 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3,
#line 1214 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_4)
#line 1216 "thread.future.c"
{
#line 1218 "thread.future.c"
  {
#line 1220 "thread.future.c"
    MR_Word mercury__thread__future__conv0_HeadVar__1_1;

#line 1223 "thread.future.c"
    {
#line 1225 "thread.future.c"
      mercury__thread__future____Compare____future_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), &mercury__thread__future__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__future__wrapper_arg_3), ((MR_Word) mercury__thread__future__wrapper_arg_4));
    }
#line 1228 "thread.future.c"
    *mercury__thread__future__wrapper_arg_2 = ((MR_Box) (mercury__thread__future__conv0_HeadVar__1_1));
#line 1230 "thread.future.c"
  }
#line 1232 "thread.future.c"
}

#line 1235 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____future_io_1_0_10001(
#line 1238 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1240 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 1242 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3)
#line 1244 "thread.future.c"
{
#line 1246 "thread.future.c"
  {
#line 1248 "thread.future.c"
    MR_bool mercury__thread__future__succeeded;

#line 1251 "thread.future.c"
    {
#line 1253 "thread.future.c"
      mercury__thread__future__succeeded = mercury__thread__future____Unify____future_io_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), ((MR_Word) mercury__thread__future__wrapper_arg_2), ((MR_Word) mercury__thread__future__wrapper_arg_3));
    }
#line 1256 "thread.future.c"
    return mercury__thread__future__succeeded;
#line 1258 "thread.future.c"
  }
#line 1260 "thread.future.c"
}

#line 1263 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____future_io_1_0_10001(
#line 1266 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1268 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_2,
#line 1270 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3,
#line 1272 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_4)
#line 1274 "thread.future.c"
{
#line 1276 "thread.future.c"
  {
#line 1278 "thread.future.c"
    MR_Word mercury__thread__future__conv0_HeadVar__1_1;

#line 1281 "thread.future.c"
    {
#line 1283 "thread.future.c"
      mercury__thread__future____Compare____future_io_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), &mercury__thread__future__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__future__wrapper_arg_3), ((MR_Word) mercury__thread__future__wrapper_arg_4));
    }
#line 1286 "thread.future.c"
    *mercury__thread__future__wrapper_arg_2 = ((MR_Box) (mercury__thread__future__conv0_HeadVar__1_1));
#line 1288 "thread.future.c"
  }
#line 1290 "thread.future.c"
}

#line 1293 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____ok_or_exception_1_0_10001(
#line 1296 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1298 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 1300 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3)
#line 1302 "thread.future.c"
{
#line 1304 "thread.future.c"
  {
#line 1306 "thread.future.c"
    MR_bool mercury__thread__future__succeeded;

#line 1309 "thread.future.c"
    {
#line 1311 "thread.future.c"
      mercury__thread__future__succeeded = mercury__thread__future____Unify____ok_or_exception_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), ((MR_Word) mercury__thread__future__wrapper_arg_2), ((MR_Word) mercury__thread__future__wrapper_arg_3));
    }
#line 1314 "thread.future.c"
    return mercury__thread__future__succeeded;
#line 1316 "thread.future.c"
  }
#line 1318 "thread.future.c"
}

#line 1321 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____ok_or_exception_1_0_10001(
#line 1324 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1326 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_2,
#line 1328 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3,
#line 1330 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_4)
#line 1332 "thread.future.c"
{
#line 1334 "thread.future.c"
  {
#line 1336 "thread.future.c"
    MR_Word mercury__thread__future__conv0_HeadVar__1_1;

#line 1339 "thread.future.c"
    {
#line 1341 "thread.future.c"
      mercury__thread__future____Compare____ok_or_exception_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), &mercury__thread__future__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__future__wrapper_arg_3), ((MR_Word) mercury__thread__future__wrapper_arg_4));
    }
#line 1344 "thread.future.c"
    *mercury__thread__future__wrapper_arg_2 = ((MR_Box) (mercury__thread__future__conv0_HeadVar__1_1));
#line 1346 "thread.future.c"
  }
#line 1348 "thread.future.c"
}

#line 1351 "thread.future.c"
static MR_bool MR_CALL 
mercury__thread__future____Unify____ready_0_0_10001(
#line 1354 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 1356 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2)
#line 1358 "thread.future.c"
{
#line 1360 "thread.future.c"
  {
#line 1362 "thread.future.c"
    MR_bool mercury__thread__future__succeeded;

#line 1365 "thread.future.c"
    {
#line 1367 "thread.future.c"
      mercury__thread__future__succeeded = mercury__thread__future____Unify____ready_0_0(((MR_Word) mercury__thread__future__wrapper_arg_1), ((MR_Word) mercury__thread__future__wrapper_arg_2));
    }
#line 1370 "thread.future.c"
    return mercury__thread__future__succeeded;
#line 1372 "thread.future.c"
  }
#line 1374 "thread.future.c"
}

#line 1377 "thread.future.c"
static void MR_CALL 
mercury__thread__future____Compare____ready_0_0_10001(
#line 1380 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_1,
#line 1382 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 1384 "thread.future.c"
  MR_Box mercury__thread__future__wrapper_arg_3)
#line 1386 "thread.future.c"
{
#line 1388 "thread.future.c"
  {
#line 1390 "thread.future.c"
    MR_Word mercury__thread__future__conv0_HeadVar__1_1;

#line 1393 "thread.future.c"
    {
#line 1395 "thread.future.c"
      mercury__thread__future____Compare____ready_0_0(&mercury__thread__future__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__future__wrapper_arg_2), ((MR_Word) mercury__thread__future__wrapper_arg_3));
    }
#line 1398 "thread.future.c"
    *mercury__thread__future__wrapper_arg_1 = ((MR_Box) (mercury__thread__future__conv0_HeadVar__1_1));
#line 1400 "thread.future.c"
  }
#line 1402 "thread.future.c"
}

#line 70 "thread.opt"
static void MR_CALL 
mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_55_48_95_95_49_95_95_91_50_93_95_48_4_p_0(
#line 70 "thread.opt"
  MR_Word mercury__thread__future__Goal0_4_4)
#line 70 "thread.opt"
{
#line 70 "thread.opt"
  {
#line 70 "thread.opt"
    MR_bool mercury__thread__future__succeeded;
#line 70 "thread.opt"
    void MR_CALL (* mercury__thread__future__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__thread__future__Goal0_4_4, (MR_Integer) 1)));
#line 70 "thread.opt"
    MR_Box mercury__thread__future__conv1_HeadVar__4_21;

#line 70 "thread.opt"
    {
#line 70 "thread.opt"
      mercury__thread__future__func_0(((MR_Box) mercury__thread__future__Goal0_4_4), ((MR_Box) ((MR_Integer) 0)), &mercury__thread__future__conv1_HeadVar__4_21);
    }
#line 70 "thread.opt"
  }
#line 70 "thread.opt"
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

#line 70 "thread.opt"
static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__spawn__70__1_4_p_0(
#line 70 "thread.opt"
  MR_Word mercury__thread__future__Goal0_4_4,
#line 70 "thread.opt"
  MR_Word mercury__thread__future__HeadVar__2_19)
#line 70 "thread.opt"
{
#line 70 "thread.opt"
  {
#line 70 "thread.opt"
    MR_bool mercury__thread__future__succeeded;

#line 70 "thread.opt"
    {
#line 70 "thread.opt"
      mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_55_48_95_95_49_95_95_91_50_93_95_48_4_p_0(mercury__thread__future__Goal0_4_4);
#line 70 "thread.opt"
      return;
    }
#line 70 "thread.opt"
  }
#line 70 "thread.opt"
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
#line 1499 "thread.future.c"
    {
#line 1501 "thread.future.c"
      MR_Tuple base;
#line 1503 "thread.future.c"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1505 "thread.future.c"
      *mercury__thread__future__OutputTuple_18 = base;
#line 1507 "thread.future.c"
      MR_hl_field(MR_mktag(0), base, 0) = mercury__thread__future__Result_20;
#line 1509 "thread.future.c"
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

#line 66 "private_builtin.opt"
    mercury__thread__future__succeeded = (mercury__thread__future__Cast_HeadVar1_4 < mercury__thread__future__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__thread__future__succeeded)
#line 68 "private_builtin.opt"
      *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__thread__future__succeeded = (mercury__thread__future__Cast_HeadVar1_4 == mercury__thread__future__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__thread__future__succeeded)
#line 73 "private_builtin.opt"
          *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
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
#line 1572 "thread.future.c"
  {
#line 1574 "thread.future.c"
    MR_bool mercury__thread__future__succeeded = (mercury__thread__future__HeadVar__2_1 == mercury__thread__future__HeadVar__2_2);

#line 1577 "thread.future.c"
    return mercury__thread__future__succeeded;
#line 1579 "thread.future.c"
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
#line 1800 "thread.future.c"
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
#line 1828 "thread.future.c"
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
#line 1848 "thread.future.c"
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

#line 1919 "thread.future.c"
        {
#line 1921 "thread.future.c"
          mercury__thread__future__succeeded = mercury__builtin__unify_2_p_0(mercury__thread__future__TypeInfo_12_12, ((MR_Box) (mercury__thread__future__V_3_3)), ((MR_Box) (mercury__thread__future__V_6_6)));
        }
#line 167 "thread.future.m"
        if (mercury__thread__future__succeeded)
#line 167 "thread.future.m"
          {
#line 1928 "thread.future.c"
            {
#line 1930 "thread.future.c"
              mercury__thread__future__succeeded = mercury__thread__semaphore____Unify____semaphore_0_0(mercury__thread__future__V_4_4, mercury__thread__future__V_7_7);
            }
#line 167 "thread.future.m"
            if (mercury__thread__future__succeeded)
#line 1935 "thread.future.c"
              {
#line 1937 "thread.future.c"
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
#line 1977 "thread.future.c"
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

#line 1992 "thread.future.c"
        {
#line 1994 "thread.future.c"
          mercury__thread__future__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1996 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_10_10, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_9_9));
#line 1998 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_10_10, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_8));
#line 2000 "thread.future.c"
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

#line 2055 "thread.future.c"
        {
#line 2057 "thread.future.c"
          mercury__thread__future__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2059 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_8_8));
#line 2061 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_7));
#line 2063 "thread.future.c"
        }
#line 2065 "thread.future.c"
        {
#line 2067 "thread.future.c"
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

#line 2097 "thread.future.c"

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

#line 2126 "thread.future.c"

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
    if ((mercury__thread__future__Ready_8 == (MR_Integer) 1))
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
    else
#line 238 "thread.future.m"
      {
#line 238 "thread.future.m"
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

#line 2232 "thread.future.c"
static void MR_CALL 
mercury__thread__future__run_future_2_p_0_1(
#line 2235 "thread.future.c"
  MR_Box mercury__thread__future__closure_arg,
#line 2237 "thread.future.c"
  MR_Box * mercury__thread__future__wrapper_arg_1)
#line 2239 "thread.future.c"
{
#line 2241 "thread.future.c"
  {
#line 2243 "thread.future.c"
    MR_Box mercury__thread__future__closure = mercury__thread__future__closure_arg;
#line 2245 "thread.future.c"
    MR_Tuple mercury__thread__future__conv0_OutputTuple_18;

#line 2248 "thread.future.c"
    {
#line 2250 "thread.future.c"
      mercury__thread__future__IntroducedFrom__pred__run_future__131__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 4))), &mercury__thread__future__conv0_OutputTuple_18);
    }
#line 2253 "thread.future.c"
    *mercury__thread__future__wrapper_arg_1 = ((MR_Box) (mercury__thread__future__conv0_OutputTuple_18));
#line 2255 "thread.future.c"
  }
#line 2257 "thread.future.c"
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

#line 2288 "thread.future.c"
    {
#line 2290 "thread.future.c"
      mercury__thread__future__TryLambda_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2292 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_6[2]));
#line 2294 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 1) = ((MR_Box) (mercury__thread__future__run_future_2_p_0_1));
#line 2296 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2298 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 3) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_12));
#line 2300 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 4) = ((MR_Box) (mercury__thread__future__Func_4));
#line 2302 "thread.future.c"
    }
#line 2304 "thread.future.c"
    mercury__thread__future__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
#line 2306 "thread.future.c"
    {
#line 2308 "thread.future.c"
      mercury__thread__future__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2310 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_23_23, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_21_21));
#line 2312 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_23_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 2314 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_23_23, 2) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_12));
#line 2316 "thread.future.c"
    }
#line 131 "thread.future.m"
    {
#line 131 "thread.future.m"
      mercury__exception__try_2_p_0(mercury__thread__future__TypeInfo_23_23, (MR_Word) mercury__thread__future__TryLambda_19, &mercury__thread__future__conv1_TryResult_7);
    }
#line 131 "thread.future.m"
    mercury__thread__future__TryResult_7 = (MR_Word) mercury__thread__future__conv1_TryResult_7;
#line 2325 "thread.future.c"
    if (((MR_tag((MR_Word) mercury__thread__future__TryResult_7)) == (MR_mktag((MR_Integer) 2))))
#line 134 "thread.future.m"
      {
#line 134 "thread.future.m"
        MR_Word mercury__thread__future__TypeInfo_15_15;
#line 134 "thread.future.m"
        MR_Word mercury__thread__future__TypeCtorInfo_16_16;
#line 134 "thread.future.m"
        MR_Word mercury__thread__future__TypeInfo_17_17;
#line 134 "thread.future.m"
        MR_Word mercury__thread__future__TypeCtorInfo_11_44;
#line 134 "thread.future.m"
        MR_Box mercury__thread__future__Exp_6;
#line 134 "thread.future.m"
        MR_Word mercury__thread__future__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__thread__future__TryResult_7, (MR_Integer) 0)));
#line 134 "thread.future.m"
        MR_Word mercury__thread__future__V_9_9;
#line 134 "thread.future.m"
        MR_Word mercury__thread__future__MReady_38;
#line 134 "thread.future.m"
        MR_Box mercury__thread__future__Wait_39;
#line 134 "thread.future.m"
        MR_Word mercury__thread__future__MValue_40;
#line 134 "thread.future.m"
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
#line 2368 "thread.future.c"
        mercury__thread__future__TypeCtorInfo_16_16 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
#line 2370 "thread.future.c"
        {
#line 2372 "thread.future.c"
          mercury__thread__future__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2374 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_17_17, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_16_16));
#line 2376 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_17_17, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_12));
#line 2378 "thread.future.c"
        }
#line 202 "thread.future.m"
        mercury__thread__future__MReady_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 0)));
#line 202 "thread.future.m"
        mercury__thread__future__Wait_39 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 1)));
#line 202 "thread.future.m"
        mercury__thread__future__MValue_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 2)));
#line 2386 "thread.future.c"
        mercury__thread__future__TypeCtorInfo_11_44 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
#line 203 "thread.future.m"
        {
#line 203 "thread.future.m"
          mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_44, mercury__thread__future__MReady_38, &mercury__thread__future__conv2_Ready_41);
        }
#line 203 "thread.future.m"
        mercury__thread__future__Ready_41 = ((MR_Word) mercury__thread__future__conv2_Ready_41);
#line 214 "thread.future.m"
        if ((mercury__thread__future__Ready_41 == (MR_Integer) 1))
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
        else
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
#line 134 "thread.future.m"
      }
#line 2433 "thread.future.c"
    else
#line 2435 "thread.future.c"
      {
#line 2437 "thread.future.c"
        MR_Word mercury__thread__future__TypeCtorInfo_13_13;
#line 2439 "thread.future.c"
        MR_Word mercury__thread__future__TypeInfo_14_14;
#line 2441 "thread.future.c"
        MR_Word mercury__thread__future__TypeCtorInfo_11_33;
#line 2443 "thread.future.c"
        MR_Box mercury__thread__future__Result_5;
#line 2445 "thread.future.c"
        MR_Word mercury__thread__future__V_11_11;
#line 2447 "thread.future.c"
        MR_Tuple mercury__thread__future__OutputTuple_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__thread__future__TryResult_7, (MR_Integer) 0)));
#line 2449 "thread.future.c"
        MR_Word mercury__thread__future__MReady_27;
#line 2451 "thread.future.c"
        MR_Box mercury__thread__future__Wait_28;
#line 2453 "thread.future.c"
        MR_Word mercury__thread__future__MValue_29;
#line 2455 "thread.future.c"
        MR_Word mercury__thread__future__Ready_30;
#line 203 "thread.future.m"
        MR_Box mercury__thread__future__conv3_Ready_30;

#line 2460 "thread.future.c"
        mercury__thread__future__Result_5 = (MR_hl_field(MR_mktag(0), mercury__thread__future__OutputTuple_25, (MR_Integer) 0));
#line 133 "thread.future.m"
        {
#line 133 "thread.future.m"
          mercury__thread__future__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 133 "thread.future.m"
          MR_hl_field(MR_mktag(0), mercury__thread__future__V_11_11, 0) = mercury__thread__future__Result_5;
#line 133 "thread.future.m"
        }
#line 2470 "thread.future.c"
        mercury__thread__future__TypeCtorInfo_13_13 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
#line 2472 "thread.future.c"
        {
#line 2474 "thread.future.c"
          mercury__thread__future__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2476 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_14_14, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_13_13));
#line 2478 "thread.future.c"
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_14_14, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_12));
#line 2480 "thread.future.c"
        }
#line 202 "thread.future.m"
        mercury__thread__future__MReady_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 0)));
#line 202 "thread.future.m"
        mercury__thread__future__Wait_28 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 1)));
#line 202 "thread.future.m"
        mercury__thread__future__MValue_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 2)));
#line 2488 "thread.future.c"
        mercury__thread__future__TypeCtorInfo_11_33 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
#line 203 "thread.future.m"
        {
#line 203 "thread.future.m"
          mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_33, mercury__thread__future__MReady_27, &mercury__thread__future__conv3_Ready_30);
        }
#line 203 "thread.future.m"
        mercury__thread__future__Ready_30 = ((MR_Word) mercury__thread__future__conv3_Ready_30);
#line 214 "thread.future.m"
        if ((mercury__thread__future__Ready_30 == (MR_Integer) 1))
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
        else
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
#line 2533 "thread.future.c"
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
    if ((mercury__thread__future__Ready_16 == (MR_Integer) 1))
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
    else
#line 238 "thread.future.m"
      {
#line 238 "thread.future.m"
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
    if ((mercury__thread__future__Ready_15 == (MR_Integer) 1))
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
    else
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

#line 2781 "thread.future.c"
    {
#line 2783 "thread.future.c"
      mercury__thread__future__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2785 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_8_8));
#line 2787 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_7));
#line 2789 "thread.future.c"
    }
#line 235 "thread.future.m"
    mercury__thread__future__MReady_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 0)));
#line 235 "thread.future.m"
    mercury__thread__future__Wait_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 1)));
#line 235 "thread.future.m"
    mercury__thread__future__MValue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 2)));
#line 2797 "thread.future.c"
    mercury__thread__future__TypeCtorInfo_10_17 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
#line 236 "thread.future.m"
    {
#line 236 "thread.future.m"
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_10_17, mercury__thread__future__MReady_13, &mercury__thread__future__conv0_Ready_16);
    }
#line 236 "thread.future.m"
    mercury__thread__future__Ready_16 = ((MR_Word) mercury__thread__future__conv0_Ready_16);
#line 240 "thread.future.m"
    if ((mercury__thread__future__Ready_16 == (MR_Integer) 1))
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
    else
#line 238 "thread.future.m"
      {
#line 238 "thread.future.m"
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

#line 66 "thread.opt"
static void MR_CALL 
mercury__thread__future__future_1_f_0_3(
#line 66 "thread.opt"
  MR_Box mercury__thread__future__closure_arg,
#line 66 "thread.opt"
  MR_Box mercury__thread__future__wrapper_arg_1,
#line 66 "thread.opt"
  MR_Box mercury__thread__future__wrapper_arg_2,
#line 66 "thread.opt"
  MR_Box * mercury__thread__future__wrapper_arg_3)
#line 66 "thread.opt"
{
#line 66 "thread.opt"
  {
#line 66 "thread.opt"
    MR_Box mercury__thread__future__closure = mercury__thread__future__closure_arg;

#line 66 "thread.opt"
    {
#line 66 "thread.opt"
      mercury__thread__future__IntroducedFrom__pred__spawn__70__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 3))), ((MR_Word) mercury__thread__future__wrapper_arg_1));
#line 66 "thread.opt"
      return;
    }
#line 66 "thread.opt"
  }
#line 66 "thread.opt"
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

#line 2984 "thread.future.c"
    {
#line 2986 "thread.future.c"
      mercury__thread__future__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2988 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_8_8));
#line 2990 "thread.future.c"
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_7));
#line 2992 "thread.future.c"
    }
#line 2994 "thread.future.c"
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

#line 3053 "thread.future.c"

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
#line 66 "thread.opt"
    {
#line 66 "thread.opt"
      mercury__thread__future__Goal_6_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 66 "thread.opt"
      MR_hl_field(MR_mktag(0), mercury__thread__future__Goal_6_24, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_7[0]));
#line 66 "thread.opt"
      MR_hl_field(MR_mktag(0), mercury__thread__future__Goal_6_24, 1) = ((MR_Box) (mercury__thread__future__future_1_f_0_3));
#line 66 "thread.opt"
      MR_hl_field(MR_mktag(0), mercury__thread__future__Goal_6_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 66 "thread.opt"
      MR_hl_field(MR_mktag(0), mercury__thread__future__Goal_6_24, 3) = ((MR_Box) (mercury__thread__future__V_18_18));
#line 66 "thread.opt"
    }
#line 86 "thread.opt"
    {
#line 86 "thread.opt"
      mercury__thread__future__succeeded = mercury__thread__can_spawn_context_0_p_0();
    }
#line 89 "thread.opt"
    if (mercury__thread__future__succeeded)
#line 88 "thread.opt"
      {
#line 88 "thread.opt"
        MR_Word mercury__thread__future__Success_8_50;
#line 88 "thread.opt"
        MR_String mercury__thread__future__ThreadId_9_51;

#line 104 "thread.opt"
        {
#line 104 "thread.opt"
          mercury__thread__spawn_context_2_5_p_0(mercury__thread__future__Goal_6_24, &mercury__thread__future__Success_8_50, &mercury__thread__future__ThreadId_9_51);
        }
#line 109 "thread.opt"
        if ((mercury__thread__future__Success_8_50 == (MR_Integer) 0))
#line 110 "thread.opt"
          {
#line 111 "thread.opt"
            mercury__thread__future__Res_9_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread__future_scalar_common_8[0]);
#line 110 "thread.opt"
          }
#line 109 "thread.opt"
        else
#line 106 "thread.opt"
          {
#line 106 "thread.opt"
            MR_Word mercury__thread__future__V_14_52 = (MR_Word) mercury__thread__future__ThreadId_9_51;

#line 107 "thread.opt"
            {
#line 107 "thread.opt"
              mercury__thread__future__Res_9_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 107 "thread.opt"
              MR_hl_field(MR_mktag(0), mercury__thread__future__Res_9_31, 0) = ((MR_Box) (mercury__thread__future__V_14_52));
#line 107 "thread.opt"
            }
#line 106 "thread.opt"
          }
#line 88 "thread.opt"
      }
#line 89 "thread.opt"
    else
#line 90 "thread.opt"
      {
#line 90 "thread.opt"
        MR_Word mercury__thread__future__Success_8_58;
#line 90 "thread.opt"
        MR_String mercury__thread__future__ThreadId_9_59;

#line 93 "thread.opt"
        {
#line 93 "thread.opt"
          mercury__thread__spawn_native_2_5_p_0(mercury__thread__future__Goal_6_24, &mercury__thread__future__Success_8_58, &mercury__thread__future__ThreadId_9_59);
        }
#line 98 "thread.opt"
        if ((mercury__thread__future__Success_8_58 == (MR_Integer) 0))
#line 99 "thread.opt"
          {
#line 100 "thread.opt"
            mercury__thread__future__Res_9_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread__future_scalar_common_8[1]);
#line 99 "thread.opt"
          }
#line 98 "thread.opt"
        else
#line 95 "thread.opt"
          {
#line 95 "thread.opt"
            MR_Word mercury__thread__future__V_14_60 = (MR_Word) mercury__thread__future__ThreadId_9_59;

#line 96 "thread.opt"
            {
#line 96 "thread.opt"
              mercury__thread__future__Res_9_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 96 "thread.opt"
              MR_hl_field(MR_mktag(0), mercury__thread__future__Res_9_31, 0) = ((MR_Box) (mercury__thread__future__V_14_60));
#line 96 "thread.opt"
            }
#line 95 "thread.opt"
          }
#line 90 "thread.opt"
      }
#line 78 "thread.opt"
    if (((MR_tag((MR_Word) mercury__thread__future__Res_9_31)) == (MR_mktag((MR_Integer) 1))))
#line 79 "thread.opt"
      {
#line 79 "thread.opt"
        MR_String mercury__thread__future__Error_11_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__thread__future__Res_9_31, (MR_Integer) 0)));

#line 82 "thread.opt"
        {
#line 82 "thread.opt"
          mercury__require__unexpected_3_p_0((MR_String) "thread", (MR_String) "predicate \140thread.spawn\'/3", mercury__thread__future__Error_11_33);
        }
#line 79 "thread.opt"
      }
#line 78 "thread.opt"
    else
#line 77 "thread.opt"
      {
#line 77 "thread.opt"
      }
#line 270 "thread.future.m"
{
#define MR_PROC_LABEL mercury__thread__future__future_1_f_0


		{
#line 270 "thread.future.m"

#line 3202 "thread.future.c"

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
