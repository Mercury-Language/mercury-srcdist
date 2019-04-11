/*
** Automatically generated from `thread.future.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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
#include "uint.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_func_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct0 mercury__thread__future____vpti_pred_0;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__thread__future____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_tuple_1__pseudo_1;

static const MR_Integer mercury__thread__future__thread__future__functor_number_map_future_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_ok_or_exception_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_io_1__pseudo_thread__future__pti_ok_or_exception_1__pseudo_1;

static const MR_NotagFunctorDesc mercury__thread__future__thread__future__notag_functor_desc_future_1;

static const MR_FA_TypeInfo_Struct1 mercury__thread__future__mutvar__ti_mutvar_1thread__future__type_ctor_info_ready_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__mutvar__pti_mutvar_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_future_io_1_0[3];

static const MR_ConstString mercury__thread__future__thread__future__field_names_future_io_1_0[3];

static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_future_io_1_0;

static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_future_io_1_0[1];

static const MR_DuPtagLayout mercury__thread__future__thread__future__du_ptag_ordered_future_io_1[1];

static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_name_ordered_future_io_1[1];

static const MR_Integer mercury__thread__future__thread__future__functor_number_map_future_io_1[1];

static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_0[1];

static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_0;

static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_1[1];

static const MR_DuExistLocn mercury__thread__future__thread__future__exist_locns_ok_or_exception_1_1[1];

static const MR_DuExistInfo mercury__thread__future__thread__future__exist_info_ok_or_exception_1_1;

static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_1;

static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_0[1];

static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_1[1];

static const MR_DuPtagLayout mercury__thread__future__thread__future__du_ptag_ordered_ok_or_exception_1[2];

static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_name_ordered_ok_or_exception_1[2];

static const MR_Integer mercury__thread__future__thread__future__functor_number_map_ok_or_exception_1[2];

static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_0;

static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_1;

static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_value_ordered_ready_0[2];

static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_name_ordered_ready_0[2];

static const MR_Integer mercury__thread__future__thread__future__functor_number_map_ready_0[2];

static MR_bool MR_CALL 
mercury__thread__future____Unify____future_1_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3);

static void MR_CALL 
mercury__thread__future____Compare____future_1_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box * mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3,
  MR_Box mercury__thread__future__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__future____Unify____future_io_1_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3);

static void MR_CALL 
mercury__thread__future____Compare____future_io_1_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box * mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3,
  MR_Box mercury__thread__future__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__future____Unify____ok_or_exception_1_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3);

static void MR_CALL 
mercury__thread__future____Compare____ok_or_exception_1_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box * mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3,
  MR_Box mercury__thread__future__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__future____Unify____ready_0_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box mercury__thread__future__wrapper_arg_2);

static void MR_CALL 
mercury__thread__future____Compare____ready_0_0_10001(
  MR_Box * mercury__thread__future__wrapper_arg_1,
  MR_Box mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3);

static void MR_CALL 
mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_55_48_95_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__thread__future__V_4_4);

static MR_Integer MR_CALL 
mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__spawn__70__1_4_p_0(
  MR_Word mercury__thread__future__V_4_4,
  MR_Word mercury__thread__future__LambdaHeadVar__1_19);

static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__run_future__131__1_3_p_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_12,
  MR_Word mercury__thread__future__Func_4,
  MR_Tuple * mercury__thread__future__OutputTuple_18);

static void MR_CALL 
mercury__thread__future__consume_io_state_1_p_0(void);

static void MR_CALL 
mercury__thread__future__make_io_state_1_p_0(void);

static void MR_CALL 
mercury__thread__future__spawn_impure_2_3_p_0(
  MR_Word mercury__thread__future__Task_4);

static void MR_CALL 
mercury__thread__future__run_future_2_p_0_1(
  MR_Box mercury__thread__future__closure_arg,
  MR_Box * mercury__thread__future__wrapper_arg_1);

static void MR_CALL 
mercury__thread__future__run_future_2_p_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_12,
  MR_Word mercury__thread__future__HeadVar__1_1,
  MR_Word mercury__thread__future__Func_4);

static void MR_CALL 
mercury__thread__future__future_1_f_0_3(
  MR_Box mercury__thread__future__closure_arg,
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box mercury__thread__future__wrapper_arg_2,
  MR_Box * mercury__thread__future__wrapper_arg_3);

static void MR_CALL 
mercury__thread__future__future_1_f_0_2(
  MR_Box mercury__thread__future__closure_arg,
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box * mercury__thread__future__wrapper_arg_2);

static void MR_CALL 
mercury__thread__future__future_1_f_0_1(
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
#include "thread.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "version_array.mh"
#include "thread.future.mh"
#include "thread.semaphore.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_1__pseudo_1 = {
  &mercury__thread__future__thread__future__type_ctor_info_future_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_func_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct0 mercury__thread__future____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__thread__future____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_tuple_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_Integer mercury__thread__future__thread__future__functor_number_map_future_1[1] = {
  (MR_Integer) 0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_ok_or_exception_1__pseudo_1 = {
  &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_io_1__pseudo_thread__future__pti_ok_or_exception_1__pseudo_1 = {
  &mercury__thread__future__thread__future__type_ctor_info_future_io_1,
  {
    (MR_PseudoTypeInfo) &mercury__thread__future__thread__future__pti_ok_or_exception_1__pseudo_1
  }
};

static const MR_NotagFunctorDesc mercury__thread__future__thread__future__notag_functor_desc_future_1 = {
  (MR_String) "future",
  (MR_PseudoTypeInfo) &mercury__thread__future__thread__future__pti_future_io_1__pseudo_thread__future__pti_ok_or_exception_1__pseudo_1,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__thread__future__thread__future__type_ctor_info_future_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
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

static const MR_FA_TypeInfo_Struct1 mercury__thread__future__mutvar__ti_mutvar_1thread__future__type_ctor_info_ready_0 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_TypeInfo) &mercury__thread__future__thread__future__type_ctor_info_ready_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__mutvar__pti_mutvar_1__pseudo_1 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_future_io_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__thread__future__mutvar__ti_mutvar_1thread__future__type_ctor_info_ready_0,
  (MR_PseudoTypeInfo) &mercury__thread__semaphore__thread__semaphore__type_ctor_info_semaphore_0,
  (MR_PseudoTypeInfo) &mercury__thread__future__mutvar__pti_mutvar_1__pseudo_1
};

static const MR_ConstString mercury__thread__future__thread__future__field_names_future_io_1_0[3] = {
  (MR_String) "f_ready",
  (MR_String) "f_wait",
  (MR_String) "f_value"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_future_io_1_0[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_future_io_1_0
};

static const MR_DuPtagLayout mercury__thread__future__thread__future__du_ptag_ordered_future_io_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__thread__future__thread__future__du_stag_ordered_future_io_1_0
  }
};

static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_name_ordered_future_io_1[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_future_io_1_0
};

static const MR_Integer mercury__thread__future__thread__future__functor_number_map_future_io_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__thread__future__thread__future__type_ctor_info_future_io_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 513
};

static const MR_DuExistLocn mercury__thread__future__thread__future__exist_locns_ok_or_exception_1_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) -1
  }
};

static const MR_DuExistInfo mercury__thread__future__thread__future__exist_info_ok_or_exception_1_1 = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__thread__future__thread__future__exist_locns_ok_or_exception_1_1,
  NULL
};

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
  &mercury__thread__future__thread__future__exist_info_ok_or_exception_1_1,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_0[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_0
};

static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_1[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_1
};

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

static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_name_ordered_ok_or_exception_1[2] = {
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_1,
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_0
};

static const MR_Integer mercury__thread__future__thread__future__functor_number_map_ok_or_exception_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
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

static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_0 = {
  (MR_String) "ready",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_1 = {
  (MR_String) "not_ready",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_value_ordered_ready_0[2] = {
  &mercury__thread__future__thread__future__enum_functor_desc_ready_0_0,
  &mercury__thread__future__thread__future__enum_functor_desc_ready_0_1
};

static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_name_ordered_ready_0[2] = {
  &mercury__thread__future__thread__future__enum_functor_desc_ready_0_1,
  &mercury__thread__future__thread__future__enum_functor_desc_ready_0_0
};

static const MR_Integer mercury__thread__future__thread__future__functor_number_map_ready_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__thread__future__thread__future__type_ctor_info_ready_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
mercury__thread__future____Unify____future_1_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3)
{
  {
    MR_bool mercury__thread__future__succeeded;

    {
      mercury__thread__future__succeeded = mercury__thread__future____Unify____future_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), ((MR_Word) mercury__thread__future__wrapper_arg_2), ((MR_Word) mercury__thread__future__wrapper_arg_3));
    }
    return mercury__thread__future__succeeded;
  }
}

static void MR_CALL 
mercury__thread__future____Compare____future_1_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box * mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3,
  MR_Box mercury__thread__future__wrapper_arg_4)
{
  {
    MR_Word mercury__thread__future__conv0_HeadVar__1_1;

    {
      mercury__thread__future____Compare____future_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), &mercury__thread__future__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__future__wrapper_arg_3), ((MR_Word) mercury__thread__future__wrapper_arg_4));
    }
    *mercury__thread__future__wrapper_arg_2 = ((MR_Box) (mercury__thread__future__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__thread__future____Unify____future_io_1_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3)
{
  {
    MR_bool mercury__thread__future__succeeded;

    {
      mercury__thread__future__succeeded = mercury__thread__future____Unify____future_io_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), ((MR_Word) mercury__thread__future__wrapper_arg_2), ((MR_Word) mercury__thread__future__wrapper_arg_3));
    }
    return mercury__thread__future__succeeded;
  }
}

static void MR_CALL 
mercury__thread__future____Compare____future_io_1_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box * mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3,
  MR_Box mercury__thread__future__wrapper_arg_4)
{
  {
    MR_Word mercury__thread__future__conv0_HeadVar__1_1;

    {
      mercury__thread__future____Compare____future_io_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), &mercury__thread__future__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__future__wrapper_arg_3), ((MR_Word) mercury__thread__future__wrapper_arg_4));
    }
    *mercury__thread__future__wrapper_arg_2 = ((MR_Box) (mercury__thread__future__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__thread__future____Unify____ok_or_exception_1_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3)
{
  {
    MR_bool mercury__thread__future__succeeded;

    {
      mercury__thread__future__succeeded = mercury__thread__future____Unify____ok_or_exception_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), ((MR_Word) mercury__thread__future__wrapper_arg_2), ((MR_Word) mercury__thread__future__wrapper_arg_3));
    }
    return mercury__thread__future__succeeded;
  }
}

static void MR_CALL 
mercury__thread__future____Compare____ok_or_exception_1_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box * mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3,
  MR_Box mercury__thread__future__wrapper_arg_4)
{
  {
    MR_Word mercury__thread__future__conv0_HeadVar__1_1;

    {
      mercury__thread__future____Compare____ok_or_exception_1_0(((MR_Word) mercury__thread__future__wrapper_arg_1), &mercury__thread__future__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__future__wrapper_arg_3), ((MR_Word) mercury__thread__future__wrapper_arg_4));
    }
    *mercury__thread__future__wrapper_arg_2 = ((MR_Box) (mercury__thread__future__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__thread__future____Unify____ready_0_0_10001(
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box mercury__thread__future__wrapper_arg_2)
{
  {
    MR_bool mercury__thread__future__succeeded;

    {
      mercury__thread__future__succeeded = mercury__thread__future____Unify____ready_0_0(((MR_Word) mercury__thread__future__wrapper_arg_1), ((MR_Word) mercury__thread__future__wrapper_arg_2));
    }
    return mercury__thread__future__succeeded;
  }
}

static void MR_CALL 
mercury__thread__future____Compare____ready_0_0_10001(
  MR_Box * mercury__thread__future__wrapper_arg_1,
  MR_Box mercury__thread__future__wrapper_arg_2,
  MR_Box mercury__thread__future__wrapper_arg_3)
{
  {
    MR_Word mercury__thread__future__conv0_HeadVar__1_1;

    {
      mercury__thread__future____Compare____ready_0_0(&mercury__thread__future__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__future__wrapper_arg_2), ((MR_Word) mercury__thread__future__wrapper_arg_3));
    }
    *mercury__thread__future__wrapper_arg_1 = ((MR_Box) (mercury__thread__future__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_55_48_95_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__thread__future__V_4_4)
{
  {
    MR_bool mercury__thread__future__succeeded;
    void MR_CALL (* mercury__thread__future__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__thread__future__V_4_4, (MR_Integer) 1)));
    MR_Box mercury__thread__future__conv1_LambdaHeadVar__3_21;

    {
      mercury__thread__future__func_0(((MR_Box) mercury__thread__future__V_4_4), ((MR_Box) ((MR_Integer) 0)), &mercury__thread__future__conv1_LambdaHeadVar__3_21);
    }
  }
}

static MR_Integer MR_CALL 
mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__thread__future__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__spawn__70__1_4_p_0(
  MR_Word mercury__thread__future__V_4_4,
  MR_Word mercury__thread__future__LambdaHeadVar__1_19)
{
  {
    MR_bool mercury__thread__future__succeeded;

    {
      mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_55_48_95_95_49_95_95_91_50_93_95_48_4_p_0(mercury__thread__future__V_4_4);
    }
  }
}

static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__run_future__131__1_3_p_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_12,
  MR_Word mercury__thread__future__Func_4,
  MR_Tuple * mercury__thread__future__OutputTuple_18)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Box mercury__thread__future__Result_20;
    MR_Box MR_CALL (* mercury__thread__future__func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__thread__future__Func_4, (MR_Integer) 1)));

    {
      mercury__thread__future__Result_20 = mercury__thread__future__func_0(((MR_Box) mercury__thread__future__Func_4));
    }
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      *mercury__thread__future__OutputTuple_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = mercury__thread__future__Result_20;
    }
  }
}

void MR_CALL 
mercury__thread__future____Compare____ready_0_0(
  MR_Word * mercury__thread__future__HeadVar__1_1,
  MR_Word mercury__thread__future__HeadVar__2_2,
  MR_Word mercury__thread__future__HeadVar__3_3)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Integer mercury__thread__future__Cast_HeadVar1_4 = (MR_Integer) mercury__thread__future__HeadVar__2_2;
    MR_Integer mercury__thread__future__Cast_HeadVar2_5 = (MR_Integer) mercury__thread__future__HeadVar__3_3;

    mercury__thread__future__succeeded = (mercury__thread__future__Cast_HeadVar1_4 < mercury__thread__future__Cast_HeadVar2_5);
    if (mercury__thread__future__succeeded)
      *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        mercury__thread__future__succeeded = (mercury__thread__future__Cast_HeadVar1_4 == mercury__thread__future__Cast_HeadVar2_5);
        if (mercury__thread__future__succeeded)
          *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 2;
      }
  }
}

MR_bool MR_CALL 
mercury__thread__future____Unify____ready_0_0(
  MR_Word mercury__thread__future__HeadVar__2_1,
  MR_Word mercury__thread__future__HeadVar__2_2)
{
  {
    MR_bool mercury__thread__future__succeeded = (mercury__thread__future__HeadVar__2_1 == mercury__thread__future__HeadVar__2_2);

    return mercury__thread__future__succeeded;
  }
}

void MR_CALL 
mercury__thread__future____Compare____ok_or_exception_1_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_14,
  MR_Word * mercury__thread__future__HeadVar__1_1,
  MR_Word mercury__thread__future__HeadVar__2_2,
  MR_Word mercury__thread__future__HeadVar__3_3)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Integer mercury__thread__future__CastX_12 = (MR_Integer) mercury__thread__future__HeadVar__2_2;
    MR_Integer mercury__thread__future__CastY_13 = (MR_Integer) mercury__thread__future__HeadVar__3_3;

    mercury__thread__future__succeeded = (mercury__thread__future__CastX_12 == mercury__thread__future__CastY_13);
    if (mercury__thread__future__succeeded)
      *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__thread__future__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__thread__future__TypeInfo_15_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box mercury__thread__future__Var_19 = (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__2_2, (MR_Integer) 1));

        if (((MR_tag((MR_Word) mercury__thread__future__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mercury__thread__future__TypeInfo_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__3_3, (MR_Integer) 0)));
            MR_Box mercury__thread__future__Var_11 = (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__3_3, (MR_Integer) 1));

            {
              mercury__private_builtin__typed_compare_3_p_0(mercury__thread__future__TypeInfo_15_20, mercury__thread__future__TypeInfo_16_16, mercury__thread__future__HeadVar__1_1, mercury__thread__future__Var_19, mercury__thread__future__Var_11);
            }
          }
        else
          *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Box mercury__thread__future__Var_21 = (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 0));

        if (((MR_tag((MR_Word) mercury__thread__future__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Box mercury__thread__future__Var_5 = (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__3_3, (MR_Integer) 0));

            {
              mercury__builtin__compare_3_p_0(mercury__thread__future__TypeInfo_for_T_14, mercury__thread__future__HeadVar__1_1, mercury__thread__future__Var_21, mercury__thread__future__Var_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__thread__future____Unify____ok_or_exception_1_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_9,
  MR_Word mercury__thread__future__HeadVar__1_1,
  MR_Word mercury__thread__future__HeadVar__2_2)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Integer mercury__thread__future__CastX_7 = (MR_Integer) mercury__thread__future__HeadVar__1_1;
    MR_Integer mercury__thread__future__CastY_8 = (MR_Integer) mercury__thread__future__HeadVar__2_2;

    mercury__thread__future__succeeded = (mercury__thread__future__CastX_7 == mercury__thread__future__CastY_8);
    if (mercury__thread__future__succeeded)
      mercury__thread__future__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__thread__future__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__thread__future__TypeInfo_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__thread__future__TypeInfo_11_11;
        MR_Box mercury__thread__future__Var_5 = (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__1_1, (MR_Integer) 1));
        MR_Box mercury__thread__future__Var_6;

        mercury__thread__future__succeeded = ((MR_tag((MR_Word) mercury__thread__future__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__thread__future__succeeded)
          {
            mercury__thread__future__TypeInfo_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__2_2, (MR_Integer) 0)));
            mercury__thread__future__Var_6 = (MR_hl_field(MR_mktag(1), mercury__thread__future__HeadVar__2_2, (MR_Integer) 1));
            {
              mercury__thread__future__succeeded = mercury__private_builtin__typed_unify_2_p_0(mercury__thread__future__TypeInfo_10_10, mercury__thread__future__TypeInfo_11_11, mercury__thread__future__Var_5, mercury__thread__future__Var_6);
            }
          }
      }
    else
      {
        MR_Box mercury__thread__future__Var_3 = (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mercury__thread__future__Var_4;

        mercury__thread__future__succeeded = ((MR_tag((MR_Word) mercury__thread__future__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (mercury__thread__future__succeeded)
          {
            mercury__thread__future__Var_4 = (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 0));
            {
              mercury__thread__future__succeeded = mercury__builtin__unify_2_p_0(mercury__thread__future__TypeInfo_for_T_9, mercury__thread__future__Var_3, mercury__thread__future__Var_4);
            }
          }
      }
    return mercury__thread__future__succeeded;
  }
}

void MR_CALL 
mercury__thread__future____Compare____future_io_1_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_14,
  MR_Word * mercury__thread__future__HeadVar__1_1,
  MR_Word mercury__thread__future__HeadVar__2_2,
  MR_Word mercury__thread__future__HeadVar__3_3)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Integer mercury__thread__future__CastX_12 = (MR_Integer) mercury__thread__future__HeadVar__2_2;
    MR_Integer mercury__thread__future__CastY_13 = (MR_Integer) mercury__thread__future__HeadVar__3_3;

    mercury__thread__future__succeeded = (mercury__thread__future__CastX_12 == mercury__thread__future__CastY_13);
    if (mercury__thread__future__succeeded)
      *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__thread__future__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box mercury__thread__future__Var_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__thread__future__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__thread__future__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__3_3, (MR_Integer) 0)));
        MR_Box mercury__thread__future__Var_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__thread__future__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__thread__future__Var_10;
        MR_Word mercury__thread__future__TypeInfo_15_15 = (MR_Word) &mercury__thread__future_scalar_common_1[0];

        {
          mercury__builtin__compare_3_p_0(mercury__thread__future__TypeInfo_15_15, &mercury__thread__future__Var_10, ((MR_Box) (mercury__thread__future__Var_4)), ((MR_Box) (mercury__thread__future__Var_7)));
        }
        mercury__thread__future__succeeded = (mercury__thread__future__Var_10 == (MR_Integer) 0);
        mercury__thread__future__succeeded = !(mercury__thread__future__succeeded);
        if (mercury__thread__future__succeeded)
          *mercury__thread__future__HeadVar__1_1 = mercury__thread__future__Var_10;
        else
          {
            MR_Word mercury__thread__future__Var_11;

            {
              mercury__thread__semaphore____Compare____semaphore_0_0(&mercury__thread__future__Var_11, mercury__thread__future__Var_5, mercury__thread__future__Var_8);
            }
            mercury__thread__future__succeeded = (mercury__thread__future__Var_11 == (MR_Integer) 0);
            mercury__thread__future__succeeded = !(mercury__thread__future__succeeded);
            if (mercury__thread__future__succeeded)
              *mercury__thread__future__HeadVar__1_1 = mercury__thread__future__Var_11;
            else
              {
                mercury__mutvar____Compare____mutvar_1_0(mercury__thread__future__TypeInfo_for_T_14, mercury__thread__future__HeadVar__1_1, mercury__thread__future__Var_6, mercury__thread__future__Var_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__thread__future____Unify____future_io_1_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_11,
  MR_Word mercury__thread__future__HeadVar__1_1,
  MR_Word mercury__thread__future__HeadVar__2_2)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Integer mercury__thread__future__CastX_9 = (MR_Integer) mercury__thread__future__HeadVar__1_1;
    MR_Integer mercury__thread__future__CastY_10 = (MR_Integer) mercury__thread__future__HeadVar__2_2;

    mercury__thread__future__succeeded = (mercury__thread__future__CastX_9 == mercury__thread__future__CastY_10);
    if (mercury__thread__future__succeeded)
      mercury__thread__future__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__thread__future__TypeInfo_12_12 = (MR_Word) &mercury__thread__future_scalar_common_1[0];
        MR_Word mercury__thread__future__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__1_1, (MR_Integer) 0)));
        MR_Box mercury__thread__future__Var_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__thread__future__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__thread__future__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 0)));
        MR_Box mercury__thread__future__Var_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__thread__future__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__HeadVar__2_2, (MR_Integer) 2)));

        {
          mercury__thread__future__succeeded = mercury__builtin__unify_2_p_0(mercury__thread__future__TypeInfo_12_12, ((MR_Box) (mercury__thread__future__Var_3)), ((MR_Box) (mercury__thread__future__Var_6)));
        }
        if (mercury__thread__future__succeeded)
          {
            {
              mercury__thread__future__succeeded = mercury__thread__semaphore____Unify____semaphore_0_0(mercury__thread__future__Var_4, mercury__thread__future__Var_7);
            }
            if (mercury__thread__future__succeeded)
              {
                mercury__thread__future__succeeded = mercury__mutvar____Unify____mutvar_1_0(mercury__thread__future__TypeInfo_for_T_11, mercury__thread__future__Var_5, mercury__thread__future__Var_8);
              }
          }
      }
    return mercury__thread__future__succeeded;
  }
}

void MR_CALL 
mercury__thread__future____Compare____future_1_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_8,
  MR_Word * mercury__thread__future__HeadVar__1_1,
  MR_Word mercury__thread__future__HeadVar__2_2,
  MR_Word mercury__thread__future__HeadVar__3_3)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Integer mercury__thread__future__CastX_6 = (MR_Integer) mercury__thread__future__HeadVar__2_2;
    MR_Integer mercury__thread__future__CastY_7 = (MR_Integer) mercury__thread__future__HeadVar__3_3;

    mercury__thread__future__succeeded = (mercury__thread__future__CastX_6 == mercury__thread__future__CastY_7);
    if (mercury__thread__future__succeeded)
      *mercury__thread__future__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__thread__future__TypeCtorInfo_9_9 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
        MR_Word mercury__thread__future__TypeInfo_10_10;
        MR_Word mercury__thread__future__Var_4 = (MR_Word) mercury__thread__future__HeadVar__2_2;
        MR_Word mercury__thread__future__Var_5 = (MR_Word) mercury__thread__future__HeadVar__3_3;

        {
          mercury__thread__future__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_10_10, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_9_9));
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_10_10, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_8));
        }
        {
          mercury__thread__future____Compare____future_io_1_0(mercury__thread__future__TypeInfo_10_10, mercury__thread__future__HeadVar__1_1, (MR_Word) mercury__thread__future__Var_4, (MR_Word) mercury__thread__future__Var_5);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__thread__future____Unify____future_1_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_7,
  MR_Word mercury__thread__future__HeadVar__1_1,
  MR_Word mercury__thread__future__HeadVar__2_2)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Integer mercury__thread__future__CastX_5 = (MR_Integer) mercury__thread__future__HeadVar__1_1;
    MR_Integer mercury__thread__future__CastY_6 = (MR_Integer) mercury__thread__future__HeadVar__2_2;

    mercury__thread__future__succeeded = (mercury__thread__future__CastX_5 == mercury__thread__future__CastY_6);
    if (mercury__thread__future__succeeded)
      mercury__thread__future__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__thread__future__TypeCtorInfo_8_8 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
        MR_Word mercury__thread__future__TypeInfo_9_9;
        MR_Word mercury__thread__future__Var_3 = (MR_Word) mercury__thread__future__HeadVar__1_1;
        MR_Word mercury__thread__future__Var_4 = (MR_Word) mercury__thread__future__HeadVar__2_2;

        {
          mercury__thread__future__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_8_8));
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_7));
        }
        {
          mercury__thread__future__succeeded = mercury__thread__future____Unify____future_io_1_0(mercury__thread__future__TypeInfo_9_9, (MR_Word) mercury__thread__future__Var_3, (MR_Word) mercury__thread__future__Var_4);
        }
      }
    return mercury__thread__future__succeeded;
  }
}

static void MR_CALL 
mercury__thread__future__consume_io_state_1_p_0(void)
{
  {
    MR_bool mercury__thread__future__succeeded;

{
#define MR_PROC_LABEL mercury__thread__future__consume_io_state_1_p_0


		{


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__thread__future__make_io_state_1_p_0(void)
{
  {
    MR_bool mercury__thread__future__succeeded;

{
#define MR_PROC_LABEL mercury__thread__future__make_io_state_1_p_0


		{


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__thread__future__wait_2_p_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_9,
  MR_Word mercury__thread__future__Future_3,
  MR_Box * mercury__thread__future__Value_4)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Word mercury__thread__future__TypeCtorInfo_10_10 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
    MR_Word mercury__thread__future__MReady_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 0)));
    MR_Box mercury__thread__future__Wait_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 1)));
    MR_Word mercury__thread__future__MValue_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 2)));
    MR_Word mercury__thread__future__Ready_8;
    MR_Box mercury__thread__future__conv0_Ready_8;

    {
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_10_10, mercury__thread__future__MReady_5, &mercury__thread__future__conv0_Ready_8);
    }
    mercury__thread__future__Ready_8 = ((MR_Word) mercury__thread__future__conv0_Ready_8);
    switch (mercury__thread__future__Ready_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__thread__semaphore__impure_wait_1_p_0(mercury__thread__future__Wait_6);
          }
          {
            mercury__thread__semaphore__impure_signal_1_p_0(mercury__thread__future__Wait_6);
          }
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    {
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeInfo_for_T_9, mercury__thread__future__MValue_7, mercury__thread__future__Value_4);
    }
  }
}

static void MR_CALL 
mercury__thread__future__spawn_impure_2_3_p_0(
  MR_Word mercury__thread__future__Task_4)
{
  {
    MR_bool mercury__thread__future__succeeded;
    void MR_CALL (* mercury__thread__future__func_0)(MR_Box) = ((void MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__thread__future__Task_4, (MR_Integer) 1)));

    {
      mercury__thread__future__func_0(((MR_Box) mercury__thread__future__Task_4));
    }
  }
}

static void MR_CALL 
mercury__thread__future__run_future_2_p_0_1(
  MR_Box mercury__thread__future__closure_arg,
  MR_Box * mercury__thread__future__wrapper_arg_1)
{
  {
    MR_Box mercury__thread__future__closure = mercury__thread__future__closure_arg;
    MR_Tuple mercury__thread__future__conv0_OutputTuple_18;

    {
      mercury__thread__future__IntroducedFrom__pred__run_future__131__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 4))), &mercury__thread__future__conv0_OutputTuple_18);
    }
    *mercury__thread__future__wrapper_arg_1 = ((MR_Box) (mercury__thread__future__conv0_OutputTuple_18));
  }
}

static void MR_CALL 
mercury__thread__future__run_future_2_p_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_12,
  MR_Word mercury__thread__future__HeadVar__1_1,
  MR_Word mercury__thread__future__Func_4)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Word mercury__thread__future__TypeCtorInfo_21_21;
    MR_Word mercury__thread__future__TypeInfo_23_23;
    MR_Word mercury__thread__future__Future_3 = (MR_Word) mercury__thread__future__HeadVar__1_1;
    MR_Word mercury__thread__future__TryResult_7;
    MR_Word mercury__thread__future__TryLambda_19;
    MR_Word mercury__thread__future__conv1_TryResult_7;

    {
      mercury__thread__future__TryLambda_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 1) = ((MR_Box) (mercury__thread__future__run_future_2_p_0_1));
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 3) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_12));
      MR_hl_field(MR_mktag(0), mercury__thread__future__TryLambda_19, 4) = ((MR_Box) (mercury__thread__future__Func_4));
    }
    mercury__thread__future__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
    {
      mercury__thread__future__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_23_23, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_21_21));
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_23_23, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_23_23, 2) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_12));
    }
    {
      mercury__exception__try_2_p_0(mercury__thread__future__TypeInfo_23_23, (MR_Word) mercury__thread__future__TryLambda_19, &mercury__thread__future__conv1_TryResult_7);
    }
    mercury__thread__future__TryResult_7 = (MR_Word) mercury__thread__future__conv1_TryResult_7;
    if (((MR_tag((MR_Word) mercury__thread__future__TryResult_7)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Word mercury__thread__future__TypeInfo_15_15;
        MR_Word mercury__thread__future__TypeCtorInfo_16_16;
        MR_Word mercury__thread__future__TypeInfo_17_17;
        MR_Word mercury__thread__future__TypeCtorInfo_11_44;
        MR_Box mercury__thread__future__Exp_6;
        MR_Word mercury__thread__future__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__thread__future__TryResult_7, (MR_Integer) 0)));
        MR_Word mercury__thread__future__Var_9;
        MR_Word mercury__thread__future__MReady_38;
        MR_Box mercury__thread__future__Wait_39;
        MR_Word mercury__thread__future__MValue_40;
        MR_Word mercury__thread__future__Ready_41;
        MR_Box mercury__thread__future__conv2_Ready_41;

        mercury__thread__future__TypeInfo_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Var_8, (MR_Integer) 0)));
        mercury__thread__future__Exp_6 = (MR_hl_field(MR_mktag(0), mercury__thread__future__Var_8, (MR_Integer) 1));
        {
          mercury__thread__future__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__thread__future__Var_9, 0) = ((MR_Box) (mercury__thread__future__TypeInfo_15_15));
          MR_hl_field(MR_mktag(1), mercury__thread__future__Var_9, 1) = mercury__thread__future__Exp_6;
        }
        mercury__thread__future__TypeCtorInfo_16_16 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
        {
          mercury__thread__future__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_17_17, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_16_16));
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_17_17, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_12));
        }
        mercury__thread__future__MReady_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 0)));
        mercury__thread__future__Wait_39 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 1)));
        mercury__thread__future__MValue_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 2)));
        mercury__thread__future__TypeCtorInfo_11_44 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
        {
          mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_44, mercury__thread__future__MReady_38, &mercury__thread__future__conv2_Ready_41);
        }
        mercury__thread__future__Ready_41 = ((MR_Word) mercury__thread__future__conv2_Ready_41);
        switch (mercury__thread__future__Ready_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mercury__mutvar__set_mutvar_2_p_0(mercury__thread__future__TypeInfo_17_17, (MR_Word) mercury__thread__future__MValue_40, ((MR_Box) (mercury__thread__future__Var_9)));
              }
              {
                mercury__thread__semaphore__impure_signal_1_p_0(mercury__thread__future__Wait_39);
              }
              {
                mercury__mutvar__set_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_44, mercury__thread__future__MReady_38, ((MR_Box) ((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mercury__require__error_1_p_0((MR_String) "Multiple calls to thread.future.signal/2");
                return;
              }
            }
            break;
        }
      }
    else
      {
        MR_Word mercury__thread__future__TypeCtorInfo_13_13;
        MR_Word mercury__thread__future__TypeInfo_14_14;
        MR_Word mercury__thread__future__TypeCtorInfo_11_33;
        MR_Box mercury__thread__future__Result_5;
        MR_Word mercury__thread__future__Var_11;
        MR_Tuple mercury__thread__future__OutputTuple_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__thread__future__TryResult_7, (MR_Integer) 0)));
        MR_Word mercury__thread__future__MReady_27;
        MR_Box mercury__thread__future__Wait_28;
        MR_Word mercury__thread__future__MValue_29;
        MR_Word mercury__thread__future__Ready_30;
        MR_Box mercury__thread__future__conv3_Ready_30;

        mercury__thread__future__Result_5 = (MR_hl_field(MR_mktag(0), mercury__thread__future__OutputTuple_25, (MR_Integer) 0));
        {
          mercury__thread__future__Var_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__thread__future__Var_11, 0) = mercury__thread__future__Result_5;
        }
        mercury__thread__future__TypeCtorInfo_13_13 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
        {
          mercury__thread__future__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_14_14, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_13_13));
          MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_14_14, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_12));
        }
        mercury__thread__future__MReady_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 0)));
        mercury__thread__future__Wait_28 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 1)));
        mercury__thread__future__MValue_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 2)));
        mercury__thread__future__TypeCtorInfo_11_33 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
        {
          mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_33, mercury__thread__future__MReady_27, &mercury__thread__future__conv3_Ready_30);
        }
        mercury__thread__future__Ready_30 = ((MR_Word) mercury__thread__future__conv3_Ready_30);
        switch (mercury__thread__future__Ready_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              {
                mercury__mutvar__set_mutvar_2_p_0(mercury__thread__future__TypeInfo_14_14, (MR_Word) mercury__thread__future__MValue_29, ((MR_Box) (mercury__thread__future__Var_11)));
              }
              {
                mercury__thread__semaphore__impure_signal_1_p_0(mercury__thread__future__Wait_28);
              }
              {
                mercury__mutvar__set_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_33, mercury__thread__future__MReady_27, ((MR_Box) ((MR_Integer) 0)));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                mercury__require__error_1_p_0((MR_String) "Multiple calls to thread.future.signal/2");
                return;
              }
            }
            break;
        }
      }
  }
}

void MR_CALL 
mercury__thread__future__wait_4_p_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_10,
  MR_Word mercury__thread__future__Future_5,
  MR_Box * mercury__thread__future__Value_6)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Word mercury__thread__future__TypeCtorInfo_10_17 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
    MR_Word mercury__thread__future__MReady_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_5, (MR_Integer) 0)));
    MR_Box mercury__thread__future__Wait_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_5, (MR_Integer) 1)));
    MR_Word mercury__thread__future__MValue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_5, (MR_Integer) 2)));
    MR_Word mercury__thread__future__Ready_16;
    MR_Box mercury__thread__future__conv0_Ready_16;

    {
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_10_17, mercury__thread__future__MReady_13, &mercury__thread__future__conv0_Ready_16);
    }
    mercury__thread__future__Ready_16 = ((MR_Word) mercury__thread__future__conv0_Ready_16);
    switch (mercury__thread__future__Ready_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__thread__semaphore__impure_wait_1_p_0(mercury__thread__future__Wait_14);
          }
          {
            mercury__thread__semaphore__impure_signal_1_p_0(mercury__thread__future__Wait_14);
          }
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    {
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeInfo_for_T_10, mercury__thread__future__MValue_15, mercury__thread__future__Value_6);
    }
  }
}

void MR_CALL 
mercury__thread__future__signal_4_p_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_10,
  MR_Word mercury__thread__future__Future_5,
  MR_Box mercury__thread__future__Value_6)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Word mercury__thread__future__TypeCtorInfo_11_18 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
    MR_Word mercury__thread__future__MReady_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_5, (MR_Integer) 0)));
    MR_Box mercury__thread__future__Wait_13 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_5, (MR_Integer) 1)));
    MR_Word mercury__thread__future__MValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_5, (MR_Integer) 2)));
    MR_Word mercury__thread__future__Ready_15;
    MR_Box mercury__thread__future__conv0_Ready_15;

    {
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_18, mercury__thread__future__MReady_12, &mercury__thread__future__conv0_Ready_15);
    }
    mercury__thread__future__Ready_15 = ((MR_Word) mercury__thread__future__conv0_Ready_15);
    switch (mercury__thread__future__Ready_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__mutvar__set_mutvar_2_p_0(mercury__thread__future__TypeInfo_for_T_10, mercury__thread__future__MValue_14, mercury__thread__future__Value_6);
          }
          {
            mercury__thread__semaphore__impure_signal_1_p_0(mercury__thread__future__Wait_13);
          }
          {
            mercury__mutvar__set_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_11_18, mercury__thread__future__MReady_12, ((MR_Box) ((MR_Integer) 0)));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mercury__require__error_1_p_0((MR_String) "Multiple calls to thread.future.signal/2");
            return;
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__thread__future__init_3_p_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_8,
  MR_Word * mercury__thread__future__Future_4)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Word mercury__thread__future__TypeCtorInfo_7_13 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
    MR_Word mercury__thread__future__Ready_9;
    MR_Box mercury__thread__future__Wait_10;
    MR_Word mercury__thread__future__Value_11;

    {
      mercury__mutvar__new_mutvar_2_p_1(mercury__thread__future__TypeCtorInfo_7_13, ((MR_Box) ((MR_Integer) 1)), &mercury__thread__future__Ready_9);
    }
    {
      mercury__thread__semaphore__impure_init_1_p_0(&mercury__thread__future__Wait_10);
    }
    {
      mercury__mutvar__new_mutvar0_1_p_0(mercury__thread__future__TypeInfo_for_T_8, &mercury__thread__future__Value_11);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__thread__future__Future_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__future__Ready_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__thread__future__Wait_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__thread__future__Value_11));
    }
  }
}

MR_Box MR_CALL 
mercury__thread__future__wait_1_f_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_7,
  MR_Word mercury__thread__future__HeadVar__1_1)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Box mercury__thread__future__Value_4;
    MR_Word mercury__thread__future__TypeCtorInfo_8_8 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
    MR_Word mercury__thread__future__TypeInfo_9_9;
    MR_Word mercury__thread__future__TypeCtorInfo_10_17;
    MR_Word mercury__thread__future__Future_3 = (MR_Word) mercury__thread__future__HeadVar__1_1;
    MR_Word mercury__thread__future__Result_5;
    MR_Word mercury__thread__future__MReady_13;
    MR_Box mercury__thread__future__Wait_14;
    MR_Word mercury__thread__future__MValue_15;
    MR_Word mercury__thread__future__Ready_16;
    MR_Box mercury__thread__future__conv0_Ready_16;
    MR_Box mercury__thread__future__conv1_Result_5;

    {
      mercury__thread__future__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_7));
    }
    mercury__thread__future__MReady_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 0)));
    mercury__thread__future__Wait_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 1)));
    mercury__thread__future__MValue_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__Future_3, (MR_Integer) 2)));
    mercury__thread__future__TypeCtorInfo_10_17 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
    {
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeCtorInfo_10_17, mercury__thread__future__MReady_13, &mercury__thread__future__conv0_Ready_16);
    }
    mercury__thread__future__Ready_16 = ((MR_Word) mercury__thread__future__conv0_Ready_16);
    switch (mercury__thread__future__Ready_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          {
            mercury__thread__semaphore__impure_wait_1_p_0(mercury__thread__future__Wait_14);
          }
          {
            mercury__thread__semaphore__impure_signal_1_p_0(mercury__thread__future__Wait_14);
          }
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    {
      mercury__mutvar__get_mutvar_2_p_0(mercury__thread__future__TypeInfo_9_9, (MR_Word) mercury__thread__future__MValue_15, &mercury__thread__future__conv1_Result_5);
    }
    mercury__thread__future__Result_5 = ((MR_Word) mercury__thread__future__conv1_Result_5);
    if (((MR_tag((MR_Word) mercury__thread__future__Result_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__thread__future__TypeInfo_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__thread__future__Result_5, (MR_Integer) 0)));
        MR_Box mercury__thread__future__Exception_6 = (MR_hl_field(MR_mktag(1), mercury__thread__future__Result_5, (MR_Integer) 1));

        {
          mercury__exception__throw_1_p_0(mercury__thread__future__TypeInfo_10_10, mercury__thread__future__Exception_6);
        }
      }
    else
      mercury__thread__future__Value_4 = (MR_hl_field(MR_mktag(0), mercury__thread__future__Result_5, (MR_Integer) 0));
    return mercury__thread__future__Value_4;
  }
}

static void MR_CALL 
mercury__thread__future__future_1_f_0_3(
  MR_Box mercury__thread__future__closure_arg,
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box mercury__thread__future__wrapper_arg_2,
  MR_Box * mercury__thread__future__wrapper_arg_3)
{
  {
    MR_Box mercury__thread__future__closure = mercury__thread__future__closure_arg;

    {
      mercury__thread__future__IntroducedFrom__pred__spawn__70__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 3))), ((MR_Word) mercury__thread__future__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
mercury__thread__future__future_1_f_0_2(
  MR_Box mercury__thread__future__closure_arg,
  MR_Box mercury__thread__future__wrapper_arg_1,
  MR_Box * mercury__thread__future__wrapper_arg_2)
{
  {
    MR_Box mercury__thread__future__closure = mercury__thread__future__closure_arg;

    {
      mercury__thread__future__spawn_impure_2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 3))));
    }
  }
}

static void MR_CALL 
mercury__thread__future__future_1_f_0_1(
  MR_Box mercury__thread__future__closure_arg)
{
  {
    MR_Box mercury__thread__future__closure = mercury__thread__future__closure_arg;

    {
      mercury__thread__future__run_future_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__future__closure, (MR_Integer) 5))));
    }
  }
}

MR_Word MR_CALL 
mercury__thread__future__future_1_f_0(
  MR_Word mercury__thread__future__TypeInfo_for_T_7,
  MR_Word mercury__thread__future__Func_3)
{
  {
    MR_bool mercury__thread__future__succeeded;
    MR_Word mercury__thread__future__Future_4;
    MR_Word mercury__thread__future__TypeCtorInfo_8_8 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1;
    MR_Word mercury__thread__future__TypeInfo_9_9;
    MR_Word mercury__thread__future__TypeCtorInfo_7_14;
    MR_Word mercury__thread__future__FutureIO_5;
    MR_Word mercury__thread__future__Var_6;
    MR_Word mercury__thread__future__Ready_10;
    MR_Box mercury__thread__future__Wait_11;
    MR_Word mercury__thread__future__Value_12;
    MR_Word mercury__thread__future__conv0_Value_12;
    MR_Word mercury__thread__future__Var_18;
    MR_Word mercury__thread__future__V_6_24;
    MR_Word mercury__thread__future__V_9_31;

    {
      mercury__thread__future__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 0) = ((MR_Box) (mercury__thread__future__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__thread__future__TypeInfo_9_9, 1) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_7));
    }
    mercury__thread__future__TypeCtorInfo_7_14 = (MR_Word) &mercury__thread__future__thread__future__type_ctor_info_ready_0;
    {
      mercury__mutvar__new_mutvar_2_p_1(mercury__thread__future__TypeCtorInfo_7_14, ((MR_Box) ((MR_Integer) 1)), &mercury__thread__future__Ready_10);
    }
    {
      mercury__thread__semaphore__impure_init_1_p_0(&mercury__thread__future__Wait_11);
    }
    {
      mercury__mutvar__new_mutvar0_1_p_0(mercury__thread__future__TypeInfo_9_9, &mercury__thread__future__conv0_Value_12);
    }
    mercury__thread__future__Value_12 = (MR_Word) mercury__thread__future__conv0_Value_12;
    {
      mercury__thread__future__FutureIO_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__future__FutureIO_5, 0) = ((MR_Box) (mercury__thread__future__Ready_10));
      MR_hl_field(MR_mktag(0), mercury__thread__future__FutureIO_5, 1) = ((MR_Box) (mercury__thread__future__Wait_11));
      MR_hl_field(MR_mktag(0), mercury__thread__future__FutureIO_5, 2) = ((MR_Box) (mercury__thread__future__Value_12));
    }
    mercury__thread__future__Future_4 = (MR_Word) mercury__thread__future__FutureIO_5;
    {
      mercury__thread__future__Var_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__future__Var_6, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), mercury__thread__future__Var_6, 1) = ((MR_Box) (mercury__thread__future__future_1_f_0_1));
      MR_hl_field(MR_mktag(0), mercury__thread__future__Var_6, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), mercury__thread__future__Var_6, 3) = ((MR_Box) (mercury__thread__future__TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), mercury__thread__future__Var_6, 4) = ((MR_Box) (mercury__thread__future__Future_4));
      MR_hl_field(MR_mktag(0), mercury__thread__future__Var_6, 5) = ((MR_Box) (mercury__thread__future__Func_3));
    }
{
#define MR_PROC_LABEL mercury__thread__future__future_1_f_0


		{


		;}
#undef MR_PROC_LABEL
}
    {
      mercury__thread__future__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__future__Var_18, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), mercury__thread__future__Var_18, 1) = ((MR_Box) (mercury__thread__future__future_1_f_0_2));
      MR_hl_field(MR_mktag(0), mercury__thread__future__Var_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mercury__thread__future__Var_18, 3) = ((MR_Box) (mercury__thread__future__Var_6));
    }
    {
      mercury__thread__future__V_6_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_6_24, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_6_24, 1) = ((MR_Box) (mercury__thread__future__future_1_f_0_3));
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_6_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mercury__thread__future__V_6_24, 3) = ((MR_Box) (mercury__thread__future__Var_18));
    }
    {
      mercury__thread__future__succeeded = mercury__thread__can_spawn_context_0_p_0();
    }
    if (mercury__thread__future__succeeded)
      {
        MR_Word mercury__thread__future__V_8_50;
        MR_String mercury__thread__future__V_9_51;

        {
          mercury__thread__spawn_context_2_5_p_0(mercury__thread__future__V_6_24, &mercury__thread__future__V_8_50, &mercury__thread__future__V_9_51);
        }
        switch (mercury__thread__future__V_8_50) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__thread__future__V_9_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread__future_scalar_common_8[0]);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__thread__future__V_14_52 = (MR_Word) mercury__thread__future__V_9_51;

              {
                mercury__thread__future__V_9_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__thread__future__V_9_31, 0) = ((MR_Box) (mercury__thread__future__V_14_52));
              }
            }
            break;
        }
      }
    else
      {
        MR_Word mercury__thread__future__V_8_58;
        MR_String mercury__thread__future__V_9_59;

        {
          mercury__thread__spawn_native_2_5_p_0(mercury__thread__future__V_6_24, &mercury__thread__future__V_8_58, &mercury__thread__future__V_9_59);
        }
        switch (mercury__thread__future__V_8_58) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__thread__future__V_9_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__thread__future_scalar_common_8[1]);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__thread__future__V_14_60 = (MR_Word) mercury__thread__future__V_9_59;

              {
                mercury__thread__future__V_9_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__thread__future__V_9_31, 0) = ((MR_Box) (mercury__thread__future__V_14_60));
              }
            }
            break;
        }
      }
    if (((MR_tag((MR_Word) mercury__thread__future__V_9_31)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mercury__thread__future__V_11_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__thread__future__V_9_31, (MR_Integer) 0)));

        {
          mercury__require__unexpected_3_p_0((MR_String) "thread", (MR_String) "predicate \140thread.spawn\'/3", mercury__thread__future__V_11_33);
        }
      }
    else
      {
      }
{
#define MR_PROC_LABEL mercury__thread__future__future_1_f_0


		{


		;}
#undef MR_PROC_LABEL
}
    return mercury__thread__future__Future_4;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__thread__future__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module thread.future. */
