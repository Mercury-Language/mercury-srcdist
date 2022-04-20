/*
** Automatically generated from `thread.future.m'
** by the Mercury compiler,
** version 22.01.1
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


// :- module thread.future.
// :- implementation.

/*
INIT mercury__thread__future__init
ENDINIT
*/

#include "thread.future.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "prolog.mih"
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
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
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

static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_ordinal_ordered_ready_0[2];

static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_name_ordered_ready_0[2];

static const MR_Integer mercury__thread__future__thread__future__functor_number_map_ready_0[2];

static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__spawn__87__1_4_p_0(
  MR_Word HeadVar__1_4,
  MR_Word LambdaHeadVar__1_18);

static void MR_CALL 
mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_56_55_95_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word HeadVar__1_4);

static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__run_future__130__1_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Func_4,
  MR_Tuple * OutputTuple_18);

static void MR_CALL 
mercury__thread__future__consume_io_state_1_p_0(void);

static void MR_CALL 
mercury__thread__future__make_io_state_1_p_0(void);

static void MR_CALL 
mercury__thread__future__spawn_impure_2_3_p_0(
  MR_Word Task_4);

static void MR_CALL 
mercury__thread__future__run_future_2_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
mercury__thread__future__run_future_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Word Func_4);

static void MR_CALL 
mercury__thread__future__future_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__thread__future__future_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
mercury__thread__future__future_1_f_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
mercury__thread__future____Unify____future_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__thread__future____Compare____future_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__future____Unify____future_io_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__thread__future____Compare____future_io_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__future____Unify____ok_or_exception_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__thread__future____Compare____ok_or_exception_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__future____Unify____ready_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__thread__future____Compare____ready_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__thread__future_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__thread__future_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__thread__future_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__thread__future_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__thread__future_scalar_common_5[1][1];

static /* final */ const MR_Integer mercury__thread__future_scalar_common_6[1][2];

static /* final */ const MR_Box mercury__thread__future_scalar_common_7[3][6];

static /* final */ const MR_Box mercury__thread__future_scalar_common_8[1][7];




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

static /* final */ const MR_Box mercury__thread__future_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "Unable to spawn threads in this grade."))
  },
};

static /* final */ const MR_Integer mercury__thread__future_scalar_common_6[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__thread__future_scalar_common_7[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__thread__future_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__thread__future__thread__future__pti_future_1__pseudo_1)),
    ((MR_Box) (&mercury__thread__future____vpti_func_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__thread__future____vpti_pred_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mercury__thread__future_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__thread__future____vpti_func_1__pseudo_1)),
    ((MR_Box) (&mercury__thread__future____vpti_tuple_1__pseudo_1))
  },
};

static /* final */ const MR_Box mercury__thread__future_scalar_common_8[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__thread__future____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__thread__thread__type_ctor_info_thread_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "builtin.mh"
#include "char.mh"
#include "construct.mh"
#include "dir.mh"
#include "exception.mh"
#include "float.mh"
#include "int.mh"
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
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
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "thread.future.mh"
#include "thread.semaphore.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_1__pseudo_1 = {
  &mercury__thread__future__thread__future__type_ctor_info_future_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_func_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
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
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 mercury__thread__future____vpti_tuple_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_Integer mercury__thread__future__thread__future__functor_number_map_future_1[1] = {
  (MR_Integer) 0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_ok_or_exception_1__pseudo_1 = {
  &mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__thread__future__pti_future_io_1__pseudo_thread__future__pti_ok_or_exception_1__pseudo_1 = {
  &mercury__thread__future__thread__future__type_ctor_info_future_io_1,
  {
    (MR_PseudoTypeInfo) (&mercury__thread__future__thread__future__pti_ok_or_exception_1__pseudo_1)
  }
};

static const MR_NotagFunctorDesc mercury__thread__future__thread__future__notag_functor_desc_future_1 = {
  (MR_String) "future",
  (MR_PseudoTypeInfo) (&mercury__thread__future__thread__future__pti_future_io_1__pseudo_thread__future__pti_ok_or_exception_1__pseudo_1),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__thread__future__thread__future__type_ctor_info_future_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__thread__future____Unify____future_1_0_10001)),
  ((MR_Box) (mercury__thread__future____Compare____future_1_0_10001)),
  (MR_String) "thread.future",
  (MR_String) "future",
  {     &mercury__thread__future__thread__future__notag_functor_desc_future_1 },
  {     &mercury__thread__future__thread__future__notag_functor_desc_future_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__thread__future__thread__future__functor_number_map_future_1,

};

static const MR_FA_TypeInfo_Struct1 mercury__thread__future__mutvar__ti_mutvar_1thread__future__type_ctor_info_ready_0 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_TypeInfo) (&mercury__thread__future__thread__future__type_ctor_info_ready_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__future__mutvar__pti_mutvar_1__pseudo_1 = {
  &mercury__mutvar__mutvar__type_ctor_info_mutvar_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_future_io_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__thread__future__mutvar__ti_mutvar_1thread__future__type_ctor_info_ready_0),
  (MR_PseudoTypeInfo) (&mercury__thread__semaphore__thread__semaphore__type_ctor_info_semaphore_0),
  (MR_PseudoTypeInfo) (&mercury__thread__future__mutvar__pti_mutvar_1__pseudo_1)
};

static const MR_ConstString mercury__thread__future__thread__future__field_names_future_io_1_0[3] = {
  (MR_String) "f_ready",
  (MR_String) "f_wait",
  (MR_String) "f_value"
};

static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_future_io_1_0 = {
  (MR_String) "future_io",
  INT16_C(3),
  UINT16_C(4),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__thread__future__thread__future__field_types_future_io_1_0,
  mercury__thread__future__thread__future__field_names_future_io_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_future_io_1_0[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_future_io_1_0
};

static const MR_DuPtagLayout mercury__thread__future__thread__future__du_ptag_ordered_future_io_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__thread__future__thread__future__du_stag_ordered_future_io_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__future____Unify____future_io_1_0_10001)),
  ((MR_Box) (mercury__thread__future____Compare____future_io_1_0_10001)),
  (MR_String) "thread.future",
  (MR_String) "future_io",
  {     mercury__thread__future__thread__future__du_name_ordered_future_io_1 },
  {     mercury__thread__future__thread__future__du_ptag_ordered_future_io_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__thread__future__thread__future__functor_number_map_future_io_1,

};

static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__thread__future__thread__future__field_types_ok_or_exception_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__thread__future__thread__future__field_types_ok_or_exception_1_1[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 513)
};

static const MR_DuExistLocn mercury__thread__future__thread__future__exist_locns_ok_or_exception_1_1[1] = {
  {
    INT16_C(0),
    INT16_C(-1)
  }
};

static const MR_DuExistInfo mercury__thread__future__thread__future__exist_info_ok_or_exception_1_1 = {
  INT16_C(1),
  INT16_C(0),
  INT16_C(0),
  mercury__thread__future__thread__future__exist_locns_ok_or_exception_1_1,
  NULL
};

static const MR_DuFunctorDesc mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_1 = {
  (MR_String) "exception",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__thread__future__thread__future__field_types_ok_or_exception_1_1,
  NULL,
  NULL,
  &mercury__thread__future__thread__future__exist_info_ok_or_exception_1_1,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_0[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_0
};

static const MR_DuFunctorDescPtr mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_1[1] = {
  &mercury__thread__future__thread__future__du_functor_desc_ok_or_exception_1_1
};

static const MR_DuPtagLayout mercury__thread__future__thread__future__du_ptag_ordered_ok_or_exception_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__thread__future__thread__future__du_stag_ordered_ok_or_exception_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__future____Unify____ok_or_exception_1_0_10001)),
  ((MR_Box) (mercury__thread__future____Compare____ok_or_exception_1_0_10001)),
  (MR_String) "thread.future",
  (MR_String) "ok_or_exception",
  {     mercury__thread__future__thread__future__du_name_ordered_ok_or_exception_1 },
  {     mercury__thread__future__thread__future__du_ptag_ordered_ok_or_exception_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__thread__future__thread__future__functor_number_map_ok_or_exception_1,

};

static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_0 = {
  (MR_String) "ready",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__thread__future__thread__future__enum_functor_desc_ready_0_1 = {
  (MR_String) "not_ready",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__thread__future__thread__future__enum_ordinal_ordered_ready_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__thread__future____Unify____ready_0_0_10001)),
  ((MR_Box) (mercury__thread__future____Compare____ready_0_0_10001)),
  (MR_String) "thread.future",
  (MR_String) "ready",
  {     mercury__thread__future__thread__future__enum_name_ordered_ready_0 },
  {     mercury__thread__future__thread__future__enum_ordinal_ordered_ready_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__thread__future__thread__future__functor_number_map_ready_0,

};

static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__spawn__87__1_4_p_0(
  MR_Word HeadVar__1_4,
  MR_Word LambdaHeadVar__1_18)
{
  mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_56_55_95_95_49_95_95_91_50_93_95_48_4_p_0(HeadVar__1_4);
}

static void MR_CALL 
mercury__thread__future__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_115_112_97_119_110_95_95_56_55_95_95_49_95_95_91_50_93_95_48_4_p_0(
  MR_Word HeadVar__1_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_4, (MR_Integer) 1))));
    MR_Box conv1_LambdaHeadVar__3_20;

    func_0(((MR_Box) (HeadVar__1_4)), ((MR_Box) ((MR_Integer) 0)), &conv1_LambdaHeadVar__3_20);
  }
}

static void MR_CALL 
mercury__thread__future__IntroducedFrom__pred__run_future__130__1_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word Func_4,
  MR_Tuple * OutputTuple_18)
{
  {
    MR_Box Result_20;
    MR_Box MR_CALL (* func_0)(MR_Box) = ((MR_Box MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), Func_4, (MR_Integer) 1))));

    Result_20 = func_0(((MR_Box) (Func_4)));
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, (1 * sizeof(MR_Word)), NULL, NULL);
      *OutputTuple_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = Result_20;
    }
  }
}

void MR_CALL 
mercury__thread__future____Compare____ready_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mercury__thread__future____Unify____ready_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__thread__future____Compare____ok_or_exception_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word TypeInfo_15_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box Var_19 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word TypeInfo_16_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Box ArgY1_11 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));

        mercury__private_builtin__typed_compare_3_p_0(TypeInfo_15_20, TypeInfo_16_16, HeadVar__1_1, Var_19, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Box Var_21 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_14, HeadVar__1_1, Var_21, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__thread__future____Unify____ok_or_exception_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word TypeInfo_10_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word TypeInfo_11_11;
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Box ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        TypeInfo_11_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        succeeded = mercury__private_builtin__typed_unify_2_p_0(TypeInfo_10_10, TypeInfo_11_11, ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__thread__future____Compare____future_1_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      {
        TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_10_10, 0) = ((MR_Box) (&mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1));
        MR_hl_field(MR_mktag(0), TypeInfo_10_10, 1) = ((MR_Box) (TypeInfo_for_T_8));
      }
      mercury__thread__future____Compare____future_io_1_0(TypeInfo_10_10, HeadVar__1_1, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
    }
  }
}

void MR_CALL 
mercury__thread__future____Compare____future_io_1_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Box ArgX2_7 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box ArgY2_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&mercury__thread__future_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__thread__semaphore____Compare____semaphore_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__mutvar____Compare____mutvar_1_0(TypeInfo_for_T_14, HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__thread__future____Unify____future_1_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      {
        TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1));
        MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
      }
      succeeded = mercury__thread__future____Unify____future_io_1_0(TypeInfo_9_9, (MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__thread__future____Unify____future_io_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Box ArgX2_5 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Box ArgY2_6 = ((MR_Box) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__thread__future_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        succeeded = mercury__thread__semaphore____Unify____semaphore_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
          succeeded = mercury__mutvar____Unify____mutvar_1_0(TypeInfo_for_T_11, ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__thread__future__consume_io_state_1_p_0(void)
{
  {
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
{
#define MR_PROC_LABEL mercury__thread__future__make_io_state_1_p_0


		{


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mercury__thread__future__spawn_impure_2_3_p_0(
  MR_Word Task_4)
{
  {
    void MR_CALL (* func_0)(MR_Box) = ((void MR_CALL (*)(MR_Box)) ((MR_hl_field(MR_mktag(0), Task_4, (MR_Integer) 1))));

    func_0(((MR_Box) (Task_4)));
  }
}

static void MR_CALL 
mercury__thread__future__run_future_2_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv0_OutputTuple_18;

    mercury__thread__future__IntroducedFrom__pred__run_future__130__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv0_OutputTuple_18);
    *wrapper_arg_1 = ((MR_Box) (conv0_OutputTuple_18));
  }
}

static void MR_CALL 
mercury__thread__future__run_future_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Word Func_4)
{
  {
    MR_Word TypeInfo_23_23;
    MR_Word Future_3 = (MR_Word) (HeadVar__1_1);
    MR_Word TryResult_7;
    MR_Word TryLambda_19;
    MR_Word conv1_TryResult_7;

    {
      TryLambda_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TryLambda_19, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_7[2]));
      MR_hl_field(MR_mktag(0), TryLambda_19, 1) = ((MR_Box) (mercury__thread__future__run_future_2_p_0_1));
      MR_hl_field(MR_mktag(0), TryLambda_19, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), TryLambda_19, 3) = ((MR_Box) (TypeInfo_for_T_12));
      MR_hl_field(MR_mktag(0), TryLambda_19, 4) = ((MR_Box) (Func_4));
    }
    {
      TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), TypeInfo_23_23, 2) = ((MR_Box) (TypeInfo_for_T_12));
    }
    mercury__exception__try_2_p_0(TypeInfo_23_23, (MR_Word) (TryLambda_19), &conv1_TryResult_7);
    TryResult_7 = (MR_Word) (conv1_TryResult_7);
    if (((MR_tag((MR_Word) TryResult_7)) == (MR_Integer) 2))
    {
      MR_Word TypeInfo_15_15;
      MR_Word TypeInfo_17_17;
      MR_Box Exp_6;
      MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TryResult_7, (MR_Integer) 0))));
      MR_Word Var_9;
      MR_Word MReady_38;
      MR_Box Wait_39;
      MR_Word MValue_40;
      MR_Word Ready_41;
      MR_Box conv2_Ready_41;

      TypeInfo_15_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
      Exp_6 = (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1));
      {
        Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (TypeInfo_15_15));
        MR_hl_field(MR_mktag(1), Var_9, 1) = Exp_6;
      }
      {
        TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1));
        MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_T_12));
      }
      MReady_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Future_3, (MR_Integer) 0))));
      Wait_39 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Future_3, (MR_Integer) 1))));
      MValue_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Future_3, (MR_Integer) 2))));
      mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__thread__future__thread__future__type_ctor_info_ready_0), MReady_38, &conv2_Ready_41);
      Ready_41 = ((MR_Word) (conv2_Ready_41));
      switch (Ready_41) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__mutvar__set_mutvar_2_p_0(TypeInfo_17_17, (MR_Word) (MValue_40), ((MR_Box) (Var_9)));
            mercury__thread__semaphore__impure_signal_1_p_0(Wait_39);
            mercury__mutvar__set_mutvar_2_p_0((MR_Word) (&mercury__thread__future__thread__future__type_ctor_info_ready_0), MReady_38, ((MR_Box) ((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 0:
          {
            mercury__require__error_1_p_0((MR_String) "Multiple calls to thread.future.signal/2");
            return;
          }
          break;
      }
    }
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Box Result_5;
      MR_Word Var_11;
      MR_Tuple OutputTuple_25 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), TryResult_7, (MR_Integer) 0))));
      MR_Word MReady_27;
      MR_Box Wait_28;
      MR_Word MValue_29;
      MR_Word Ready_30;
      MR_Box conv3_Ready_30;

      Result_5 = (MR_hl_field(MR_mktag(0), OutputTuple_25, (MR_Integer) 0));
      {
        Var_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_11, 0) = Result_5;
      }
      {
        TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_14_14, 0) = ((MR_Box) (&mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1));
        MR_hl_field(MR_mktag(0), TypeInfo_14_14, 1) = ((MR_Box) (TypeInfo_for_T_12));
      }
      MReady_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Future_3, (MR_Integer) 0))));
      Wait_28 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Future_3, (MR_Integer) 1))));
      MValue_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Future_3, (MR_Integer) 2))));
      mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__thread__future__thread__future__type_ctor_info_ready_0), MReady_27, &conv3_Ready_30);
      Ready_30 = ((MR_Word) (conv3_Ready_30));
      switch (Ready_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__mutvar__set_mutvar_2_p_0(TypeInfo_14_14, (MR_Word) (MValue_29), ((MR_Box) (Var_11)));
            mercury__thread__semaphore__impure_signal_1_p_0(Wait_28);
            mercury__mutvar__set_mutvar_2_p_0((MR_Word) (&mercury__thread__future__thread__future__type_ctor_info_ready_0), MReady_27, ((MR_Box) ((MR_Integer) 0)));
          }
          break;
        case (MR_Integer) 0:
          {
            mercury__require__error_1_p_0((MR_String) "Multiple calls to thread.future.signal/2");
            return;
          }
          break;
      }
    }
  }
}

void MR_CALL 
mercury__thread__future__wait_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Future_5,
  MR_Box * Value_6)
{
  mercury__thread__future__wait_2_p_0(TypeInfo_for_T_10, Future_5, Value_6);
}

void MR_CALL 
mercury__thread__future__signal_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Future_5,
  MR_Box Value_6)
{
  {
    MR_Word MReady_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Future_5, (MR_Integer) 0))));
    MR_Box Wait_13 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Future_5, (MR_Integer) 1))));
    MR_Word MValue_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Future_5, (MR_Integer) 2))));
    MR_Word Ready_15;
    MR_Box conv0_Ready_15;

    mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__thread__future__thread__future__type_ctor_info_ready_0), MReady_12, &conv0_Ready_15);
    Ready_15 = ((MR_Word) (conv0_Ready_15));
    switch (Ready_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__mutvar__set_mutvar_2_p_0(TypeInfo_for_T_10, MValue_14, Value_6);
          mercury__thread__semaphore__impure_signal_1_p_0(Wait_13);
          mercury__mutvar__set_mutvar_2_p_0((MR_Word) (&mercury__thread__future__thread__future__type_ctor_info_ready_0), MReady_12, ((MR_Box) ((MR_Integer) 0)));
        }
        break;
      case (MR_Integer) 0:
        {
          mercury__require__error_1_p_0((MR_String) "Multiple calls to thread.future.signal/2");
          return;
        }
        break;
    }
  }
}

void MR_CALL 
mercury__thread__future__init_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * Future_4)
{
  {
    MR_Word Ready_9;
    MR_Box Wait_10;
    MR_Word Value_11;

    mercury__mutvar__new_mutvar_2_p_1((MR_Word) (&mercury__thread__future__thread__future__type_ctor_info_ready_0), ((MR_Box) ((MR_Integer) 1)), &Ready_9);
    mercury__thread__semaphore__impure_init_1_p_0(&Wait_10);
    mercury__mutvar__new_mutvar0_1_p_0(TypeInfo_for_T_8, &Value_11);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Future_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Ready_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Wait_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Value_11));
    }
  }
}

MR_Box MR_CALL 
mercury__thread__future__wait_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1)
{
  {
    MR_Box Value_4;
    MR_Word TypeInfo_9_9;
    MR_Word Future_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Result_5;
    MR_Box conv0_Result_5;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
    }
    mercury__thread__future__wait_2_p_0(TypeInfo_9_9, (MR_Word) (Future_3), &conv0_Result_5);
    Result_5 = ((MR_Word) (conv0_Result_5));
    if (((MR_tag((MR_Word) Result_5)) == (MR_Integer) 1))
    {
      MR_Word TypeInfo_10_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_5, (MR_Integer) 0))));
      MR_Box Exception_6 = (MR_hl_field(MR_mktag(1), Result_5, (MR_Integer) 1));

      mercury__exception__throw_1_p_0(TypeInfo_10_10, Exception_6);
    }
    else
      Value_4 = (MR_hl_field(MR_mktag(0), Result_5, (MR_Integer) 0));
    return Value_4;
  }
}

void MR_CALL 
mercury__thread__future__wait_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Future_3,
  MR_Box * Value_4)
{
  {
    MR_Word MReady_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Future_3, (MR_Integer) 0))));
    MR_Box Wait_6 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Future_3, (MR_Integer) 1))));
    MR_Word MValue_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Future_3, (MR_Integer) 2))));
    MR_Word Ready_8;
    MR_Box conv0_Ready_8;

    mercury__mutvar__get_mutvar_2_p_0((MR_Word) (&mercury__thread__future__thread__future__type_ctor_info_ready_0), MReady_5, &conv0_Ready_8);
    Ready_8 = ((MR_Word) (conv0_Ready_8));
    switch (Ready_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__thread__semaphore__impure_wait_1_p_0(Wait_6);
          mercury__thread__semaphore__impure_signal_1_p_0(Wait_6);
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    mercury__mutvar__get_mutvar_2_p_0(TypeInfo_for_T_9, MValue_7, Value_4);
  }
}

static void MR_CALL 
mercury__thread__future__future_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mercury__thread__future__IntroducedFrom__pred__spawn__87__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
mercury__thread__future__future_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;

    mercury__thread__future__spawn_impure_2_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
  }
}

static void MR_CALL 
mercury__thread__future__future_1_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_Box closure = closure_arg;

    mercury__thread__future__run_future_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))));
  }
}

MR_Word MR_CALL 
mercury__thread__future__future_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word Func_3)
{
  {
    MR_bool succeeded;
    MR_Word Future_4;
    MR_Word TypeInfo_9_9;
    MR_Word FutureIO_5;
    MR_Word Var_6;
    MR_Word Ready_10;
    MR_Box Wait_11;
    MR_Word Value_12;
    MR_Word conv0_Value_12;
    MR_Word Var_18;
    MR_Word Var_24;
    MR_Word Var_31;

    {
      TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 0) = ((MR_Box) (&mercury__thread__future__thread__future__type_ctor_info_ok_or_exception_1));
      MR_hl_field(MR_mktag(0), TypeInfo_9_9, 1) = ((MR_Box) (TypeInfo_for_T_7));
    }
    mercury__mutvar__new_mutvar_2_p_1((MR_Word) (&mercury__thread__future__thread__future__type_ctor_info_ready_0), ((MR_Box) ((MR_Integer) 1)), &Ready_10);
    mercury__thread__semaphore__impure_init_1_p_0(&Wait_11);
    mercury__mutvar__new_mutvar0_1_p_0(TypeInfo_9_9, &conv0_Value_12);
    Value_12 = (MR_Word) (conv0_Value_12);
    {
      FutureIO_5 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FutureIO_5, 0) = ((MR_Box) (Ready_10));
      MR_hl_field(MR_mktag(0), FutureIO_5, 1) = ((MR_Box) (Wait_11));
      MR_hl_field(MR_mktag(0), FutureIO_5, 2) = ((MR_Box) (Value_12));
    }
    Future_4 = (MR_Word) (FutureIO_5);
    {
      Var_6 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_6, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_6, 1) = ((MR_Box) (mercury__thread__future__future_1_f_0_1));
      MR_hl_field(MR_mktag(0), Var_6, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_6, 3) = ((MR_Box) (TypeInfo_for_T_7));
      MR_hl_field(MR_mktag(0), Var_6, 4) = ((MR_Box) (Future_4));
      MR_hl_field(MR_mktag(0), Var_6, 5) = ((MR_Box) (Func_3));
    }
{
#define MR_PROC_LABEL mercury__thread__future__future_1_f_0


		{


		;}
#undef MR_PROC_LABEL
}
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (mercury__thread__future__future_1_f_0_2));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Var_6));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&mercury__thread__future_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (mercury__thread__future__future_1_f_0_3));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Var_18));
    }
    succeeded = mercury__thread__can_spawn_context_0_p_0();
    if (succeeded)
    {
      MR_Word Var_49;
      MR_String Var_50;

      mercury__thread__spawn_context_2_5_p_0(Var_24, &Var_49, &Var_50);
      switch (Var_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Var_31 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__thread__future_scalar_common_5[0]));
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_51 = (MR_Word) (Var_50);

            {
              Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_51));
            }
          }
          break;
      }
    }
    else
    {
      MR_Word Var_65;
      MR_String Var_66;
      MR_String Var_67;

      mercury__thread__spawn_native_2_7_p_0(Var_24, (MR_Unsigned) ((MR_Word) (((MR_Box) ((MR_Unsigned) 0U)))), &Var_65, &Var_66, &Var_67);
      switch (Var_65) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_67));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_68 = (MR_Word) (Var_66);

            {
              Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (Var_68));
            }
          }
          break;
      }
    }
    if (((MR_tag((MR_Word) Var_31)) == (MR_Integer) 1))
    {
      MR_String Var_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_31, (MR_Integer) 0))));

      mercury__require__unexpected_2_p_0((MR_String) "predicate \140thread.spawn\'/3", Var_33);
    }
{
#define MR_PROC_LABEL mercury__thread__future__future_1_f_0


		{


		;}
#undef MR_PROC_LABEL
}
    return Future_4;
  }
}

static MR_bool MR_CALL 
mercury__thread__future____Unify____future_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__thread__future____Unify____future_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__thread__future____Compare____future_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__thread__future____Compare____future_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__thread__future____Unify____future_io_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__thread__future____Unify____future_io_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__thread__future____Compare____future_io_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__thread__future____Compare____future_io_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__thread__future____Unify____ok_or_exception_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__thread__future____Unify____ok_or_exception_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__thread__future____Compare____ok_or_exception_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__thread__future____Compare____ok_or_exception_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__thread__future____Unify____ready_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__thread__future____Unify____ready_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__thread__future____Compare____ready_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__thread__future____Compare____ready_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module thread.future.
