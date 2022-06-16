/*
** Automatically generated from `stm_builtin.m'
** by the Mercury compiler,
** version rotd-2022-06-16
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


// :- module stm_builtin.
// :- implementation.

/*
INIT mercury__stm_builtin__init
ENDINIT
*/

#include "stm_builtin.mih"


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
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "std_util.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_VA_PseudoTypeInfo_Struct3 mercury__stm_builtin____vpti_pred_3__pseudo_1__plain_stm_builtin__type_ctor_info_stm_0__plain_stm_builtin__type_ctor_info_stm_0;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__stm_builtin____vpti_tuple_2__pseudo_1__plain_stm_builtin__type_ctor_info_stm_0;

static const MR_EnumFunctorDesc mercury__stm_builtin__stm_builtin__enum_functor_desc_rollback_exception_0_0;

static const MR_EnumFunctorDesc mercury__stm_builtin__stm_builtin__enum_functor_desc_rollback_exception_0_1;

static const MR_EnumFunctorDescPtr mercury__stm_builtin__stm_builtin__enum_ordinal_ordered_rollback_exception_0[2];

static const MR_EnumFunctorDescPtr mercury__stm_builtin__stm_builtin__enum_name_ordered_rollback_exception_0[2];

static const MR_Integer mercury__stm_builtin__stm_builtin__functor_number_map_rollback_exception_0[2];

static const MR_EnumFunctorDesc mercury__stm_builtin__stm_builtin__enum_functor_desc_stm_dummy_output_0_0;

static const MR_EnumFunctorDescPtr mercury__stm_builtin__stm_builtin__enum_ordinal_ordered_stm_dummy_output_0[1];

static const MR_EnumFunctorDescPtr mercury__stm_builtin__stm_builtin__enum_name_ordered_stm_dummy_output_0[1];

static const MR_Integer mercury__stm_builtin__stm_builtin__functor_number_map_stm_dummy_output_0[1];

static const MR_EnumFunctorDesc mercury__stm_builtin__stm_builtin__enum_functor_desc_stm_validation_result_0_0;

static const MR_EnumFunctorDesc mercury__stm_builtin__stm_builtin__enum_functor_desc_stm_validation_result_0_1;

static const MR_EnumFunctorDescPtr mercury__stm_builtin__stm_builtin__enum_ordinal_ordered_stm_validation_result_0[2];

static const MR_EnumFunctorDescPtr mercury__stm_builtin__stm_builtin__enum_name_ordered_stm_validation_result_0[2];

static const MR_Integer mercury__stm_builtin__stm_builtin__functor_number_map_stm_validation_result_0[2];

static void MR_CALL 
mercury__stm_builtin__call_atomic_goal_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Goal_5,
  MR_Box * Result_6,
  MR_Box STATE_VARIABLE_STM_0_9,
  MR_Box * STATE_VARIABLE_STM_10);

static void MR_CALL 
mercury__stm_builtin__or_else_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
mercury__stm_builtin__or_else_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
mercury__stm_builtin__atomic_transaction_impl_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
mercury__stm_builtin__atomic_transaction_impl_2_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__stm_builtin__atomic_transaction_impl_2_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Goal_3,
  MR_Box * Result_4);

static MR_bool MR_CALL 
mercury__stm_builtin____Unify____rollback_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__stm_builtin____Compare____rollback_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__stm_builtin____Unify____stm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__stm_builtin____Compare____stm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__stm_builtin____Unify____stm_dummy_output_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__stm_builtin____Compare____stm_dummy_output_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__stm_builtin____Unify____stm_validation_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__stm_builtin____Compare____stm_validation_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__stm_builtin____Unify____stm_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__stm_builtin____Compare____stm_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__stm_builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__stm_builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__stm_builtin_scalar_common_3[2][5];

static /* final */ const MR_Integer mercury__stm_builtin_scalar_common_4[1][2];

static /* final */ const MR_Box mercury__stm_builtin_scalar_common_5[1][8];

static /* final */ const MR_Box mercury__stm_builtin_scalar_common_6[1][7];




static /* final */ const MR_Box mercury__stm_builtin_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stm_builtin_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stm_builtin_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__stm_builtin_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stm_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__stm_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__stm_builtin_scalar_common_4[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__stm_builtin_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__stm_builtin_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__stm_builtin____vpti_pred_3__pseudo_1__plain_stm_builtin__type_ctor_info_stm_0__plain_stm_builtin__type_ctor_info_stm_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0)),
    ((MR_Box) (&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0))
  },
};

static /* final */ const MR_Box mercury__stm_builtin_scalar_common_6[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__stm_builtin_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__stm_builtin____vpti_pred_3__pseudo_1__plain_stm_builtin__type_ctor_info_stm_0__plain_stm_builtin__type_ctor_info_stm_0)),
    ((MR_Box) (&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0)),
    ((MR_Box) (&mercury__stm_builtin____vpti_tuple_2__pseudo_1__plain_stm_builtin__type_ctor_info_stm_0))
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
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
#include "io.mh"
#include "pretty_printer.mh"
#include "private_builtin.mh"
#include "rtti_implementation.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"
#line 418 "stm_builtin.m"

#if !defined(MR_HIGHLEVEL_CODE)

    MR_BEGIN_MODULE(hand_written_stm_builtin_module)
        MR_init_entry_ai(mercury__stm_builtin__block_thread_resume);
    MR_BEGIN_CODE

    MR_define_entry(mercury__stm_builtin__block_thread_resume);
    {
        MR_proceed();
    }
    MR_END_MODULE

#endif

    // Forward decls to suppress gcc warnings.
    void mercury_sys_init_stm_builtin_modules_init(void);
    void mercury_sys_init_stm_builtin_modules_init_type_tables(void);
    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_stm_builtin_modules_write_out_proc_statics(
        FILE *deep_fp, FILE *procrep_fp);
    #endif

    void mercury_sys_init_stm_builtin_modules_init(void)
    {
    #if !defined(MR_HIGHLEVEL_CODE)
        hand_written_stm_builtin_module();
    #endif
    }

    void mercury_sys_init_stm_builtin_modules_init_type_tables(void)
    {
        // No types to register.
    }

    #ifdef  MR_DEEP_PROFILING
    void mercury_sys_init_stm_builtin_modules_write_out_proc_statics(
        FILE *deep_fp, FILE *procrep_fp)
    {
        // No proc_statics to write out.
    }
    #endif




static const MR_VA_PseudoTypeInfo_Struct3 mercury__stm_builtin____vpti_pred_3__pseudo_1__plain_stm_builtin__type_ctor_info_stm_0__plain_stm_builtin__type_ctor_info_stm_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0),
    (MR_PseudoTypeInfo) (&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__stm_builtin____vpti_tuple_2__pseudo_1__plain_stm_builtin__type_ctor_info_stm_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0)
  }
};

static const MR_EnumFunctorDesc mercury__stm_builtin__stm_builtin__enum_functor_desc_rollback_exception_0_0 = {
  (MR_String) "rollback_invalid_transaction",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__stm_builtin__stm_builtin__enum_functor_desc_rollback_exception_0_1 = {
  (MR_String) "rollback_retry",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__stm_builtin__stm_builtin__enum_ordinal_ordered_rollback_exception_0[2] = {
  &mercury__stm_builtin__stm_builtin__enum_functor_desc_rollback_exception_0_0,
  &mercury__stm_builtin__stm_builtin__enum_functor_desc_rollback_exception_0_1
};

static const MR_EnumFunctorDescPtr mercury__stm_builtin__stm_builtin__enum_name_ordered_rollback_exception_0[2] = {
  &mercury__stm_builtin__stm_builtin__enum_functor_desc_rollback_exception_0_0,
  &mercury__stm_builtin__stm_builtin__enum_functor_desc_rollback_exception_0_1
};

static const MR_Integer mercury__stm_builtin__stm_builtin__functor_number_map_rollback_exception_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__stm_builtin____Unify____rollback_exception_0_0_10001)),
  ((MR_Box) (mercury__stm_builtin____Compare____rollback_exception_0_0_10001)),
  (MR_String) "stm_builtin",
  (MR_String) "rollback_exception",
  { mercury__stm_builtin__stm_builtin__enum_name_ordered_rollback_exception_0 },
  { mercury__stm_builtin__stm_builtin__enum_ordinal_ordered_rollback_exception_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__stm_builtin__stm_builtin__functor_number_map_rollback_exception_0,

};

const MR_TypeCtorInfo_Struct mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__stm_builtin____Unify____stm_0_0_10001)),
  ((MR_Box) (mercury__stm_builtin____Compare____stm_0_0_10001)),
  (MR_String) "stm_builtin",
  (MR_String) "stm",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__stm_builtin__stm_builtin__enum_functor_desc_stm_dummy_output_0_0 = {
  (MR_String) "stm_dummy_output",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__stm_builtin__stm_builtin__enum_ordinal_ordered_stm_dummy_output_0[1] = {
  &mercury__stm_builtin__stm_builtin__enum_functor_desc_stm_dummy_output_0_0
};

static const MR_EnumFunctorDescPtr mercury__stm_builtin__stm_builtin__enum_name_ordered_stm_dummy_output_0[1] = {
  &mercury__stm_builtin__stm_builtin__enum_functor_desc_stm_dummy_output_0_0
};

static const MR_Integer mercury__stm_builtin__stm_builtin__functor_number_map_stm_dummy_output_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__stm_builtin__stm_builtin__type_ctor_info_stm_dummy_output_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__stm_builtin____Unify____stm_dummy_output_0_0_10001)),
  ((MR_Box) (mercury__stm_builtin____Compare____stm_dummy_output_0_0_10001)),
  (MR_String) "stm_builtin",
  (MR_String) "stm_dummy_output",
  { mercury__stm_builtin__stm_builtin__enum_name_ordered_stm_dummy_output_0 },
  { mercury__stm_builtin__stm_builtin__enum_ordinal_ordered_stm_dummy_output_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__stm_builtin__stm_builtin__functor_number_map_stm_dummy_output_0,

};

static const MR_EnumFunctorDesc mercury__stm_builtin__stm_builtin__enum_functor_desc_stm_validation_result_0_0 = {
  (MR_String) "stm_transaction_valid",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__stm_builtin__stm_builtin__enum_functor_desc_stm_validation_result_0_1 = {
  (MR_String) "stm_transaction_invalid",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__stm_builtin__stm_builtin__enum_ordinal_ordered_stm_validation_result_0[2] = {
  &mercury__stm_builtin__stm_builtin__enum_functor_desc_stm_validation_result_0_0,
  &mercury__stm_builtin__stm_builtin__enum_functor_desc_stm_validation_result_0_1
};

static const MR_EnumFunctorDescPtr mercury__stm_builtin__stm_builtin__enum_name_ordered_stm_validation_result_0[2] = {
  &mercury__stm_builtin__stm_builtin__enum_functor_desc_stm_validation_result_0_1,
  &mercury__stm_builtin__stm_builtin__enum_functor_desc_stm_validation_result_0_0
};

static const MR_Integer mercury__stm_builtin__stm_builtin__functor_number_map_stm_validation_result_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__stm_builtin__stm_builtin__type_ctor_info_stm_validation_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__stm_builtin____Unify____stm_validation_result_0_0_10001)),
  ((MR_Box) (mercury__stm_builtin____Compare____stm_validation_result_0_0_10001)),
  (MR_String) "stm_builtin",
  (MR_String) "stm_validation_result",
  { mercury__stm_builtin__stm_builtin__enum_name_ordered_stm_validation_result_0 },
  { mercury__stm_builtin__stm_builtin__enum_ordinal_ordered_stm_validation_result_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__stm_builtin__stm_builtin__functor_number_map_stm_validation_result_0,

};

const MR_TypeCtorInfo_Struct mercury__stm_builtin__stm_builtin__type_ctor_info_stm_var_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_STABLE_FOREIGN,
  ((MR_Box) (mercury__stm_builtin____Unify____stm_var_1_0_10001)),
  ((MR_Box) (mercury__stm_builtin____Compare____stm_var_1_0_10001)),
  (MR_String) "stm_builtin",
  (MR_String) "stm_var",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__stm_builtin____Compare____stm_var_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__stm_builtin____Unify____stm_var_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__stm_builtin____Compare____stm_validation_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__stm_builtin____Unify____stm_validation_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__stm_builtin____Compare____stm_dummy_output_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__stm_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_109_95_98_117_105_108_116_105_110_95_95_115_116_109_95_100_117_109_109_121_95_111_117_116_112_117_116_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__stm_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_115_116_109_95_98_117_105_108_116_105_110_95_95_115_116_109_95_100_117_109_109_121_95_111_117_116_112_117_116_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__stm_builtin____Unify____stm_dummy_output_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__stm_builtin____Compare____stm_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__stm_builtin____Unify____stm_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__stm_builtin____Compare____rollback_exception_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
mercury__stm_builtin____Unify____rollback_exception_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mercury__stm_builtin__call_atomic_goal_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Goal_5,
  MR_Box * Result_6,
  MR_Box STATE_VARIABLE_STM_0_9,
  MR_Box * STATE_VARIABLE_STM_10)
{
  MR_Word IsValid_8;
  void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
  MR_Box conv1_STATE_VARIABLE_STM_10;

  func_0(((MR_Box) (Goal_5)), Result_6, ((MR_Box) (STATE_VARIABLE_STM_0_9)), &conv1_STATE_VARIABLE_STM_10);
  *STATE_VARIABLE_STM_10 = ((MR_Box) (conv1_STATE_VARIABLE_STM_10));
{
#define MR_PROC_LABEL mercury__stm_builtin__call_atomic_goal_4_p_0


		{

    #if defined(MR_THREAD_SAFE)
        MR_LOCK(&MR_STM_lock, "stm_lock/0");
    #endif
    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM LOCKING\n");
    #endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__stm_builtin__call_atomic_goal_4_p_0

	MR_STM_TransLog * STM;
	MR_Word IsValid;

	STM = (MR_STM_TransLog *)*STATE_VARIABLE_STM_10 ;
		{

    IsValid = MR_STM_validate(STM);


		;}
#undef MR_PROC_LABEL
	IsValid_8  = IsValid;
}
  switch (IsValid_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
{
#define MR_PROC_LABEL mercury__stm_builtin__call_atomic_goal_4_p_0


		{

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif


		;}
#undef MR_PROC_LABEL
}
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0), ((MR_Box) ((MR_Integer) 0)));
          return;
        }
      }
      break;
    case (MR_Integer) 0:
      {
{
#define MR_PROC_LABEL mercury__stm_builtin__call_atomic_goal_4_p_0

	MR_STM_TransLog * STM;

	STM = (MR_STM_TransLog *)*STATE_VARIABLE_STM_10 ;
		{

    MR_STM_commit(STM);


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__stm_builtin__call_atomic_goal_4_p_0


		{

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif


		;}
#undef MR_PROC_LABEL
}
      }
      break;
  }
}

void MR_CALL 
mercury__stm_builtin__stm_merge_nested_logs_3_p_0(
  MR_Box Child_1,
  MR_Box Parent0_2,
  MR_Box * Parent_3)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__stm_merge_nested_logs_3_p_0

	MR_STM_TransLog * Child;
	MR_STM_TransLog * Parent0;
	MR_STM_TransLog * Parent;

	Child = (MR_STM_TransLog *)Child_1 ;
	Parent0 = (MR_STM_TransLog *)Parent0_2 ;
		{

    // Avoid a warning: Child, Parent0, Parent
#if defined(MR_STM_DEBUG)
    fprintf(stderr, "STM Calling Merge Nested: log <0x%.8lx>\n",
        (MR_Word)(Child));
#endif
    MR_STM_merge_transactions(Child);
    Parent = Parent0;


		;}
#undef MR_PROC_LABEL
	*Parent_3  = (MR_Box) Parent;
}
}

void MR_CALL 
mercury__stm_builtin__unsafe_write_stm_var_4_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__unsafe_write_stm_var_4_p_0

	MR_STM_Var * TVar;
	MR_Word Value;
	MR_STM_TransLog * STM0;
	MR_STM_TransLog * STM;

	TVar = (MR_STM_Var *)HeadVar__1_1 ;
	Value = (MR_Word) HeadVar__2_2 ;
	STM0 = (MR_STM_TransLog *)HeadVar__3_3 ;
		{

    MR_STM_unsafe_write_var(TVar, Value);
    STM = STM0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__4_4  = (MR_Box) STM;
}
}

void MR_CALL 
mercury__stm_builtin__stm_from_inner_to_outer_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__stm_from_inner_to_outer_2_p_0

	MR_STM_TransLog * STM0;
	MR_Word IO;

	STM0 = (MR_STM_TransLog *)HeadVar__1_1 ;
		{

    STM0 = NULL;
    IO = 0; // The value does not matter.


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = (MR_Box) IO;
}
}

void MR_CALL 
mercury__stm_builtin__stm_from_outer_to_inner_2_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__stm_from_outer_to_inner_2_p_0

	MR_Word IO;
	MR_STM_TransLog * STM;

	IO = (MR_Word) HeadVar__1_1 ;
		{

    STM = NULL;
    // ignore IO


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = (MR_Box) STM;
}
}

void MR_CALL 
mercury__stm_builtin__stm_block_1_p_0(
  MR_Box STM_1)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__stm_block_1_p_0

	MR_STM_TransLog * STM;

	STM = (MR_STM_TransLog *)STM_1 ;
		{

#if defined(MR_HIGHLEVEL_CODE)
    MR_STM_block_thread(STM);
#else

    MR_STM_wait(STM, STM);

#if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM BLOCKING: log <0x%.8lx>\n", STM);
#endif

    MR_save_context(MR_ENGINE(MR_eng_this_context));

    MR_ENGINE(MR_eng_this_context)->MR_ctxt_resume =
        MR_ENTRY(mercury__stm_builtin__block_thread_resume);

    MR_UNLOCK(&MR_STM_lock, "MR_STM_block_thread");

    MR_ENGINE(MR_eng_this_context) = NULL;
    MR_idle();
#endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__stm_builtin__stm_commit_1_p_0(
  MR_Box STM_1)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__stm_commit_1_p_0

	MR_STM_TransLog * STM;

	STM = (MR_STM_TransLog *)STM_1 ;
		{

    MR_STM_commit(STM);


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__stm_builtin__stm_validate_2_p_0(
  MR_Box STM_1,
  MR_Word * IsValid_2)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__stm_validate_2_p_0

	MR_STM_TransLog * STM;
	MR_Word IsValid;

	STM = (MR_STM_TransLog *)STM_1 ;
		{

    IsValid = MR_STM_validate(STM);


		;}
#undef MR_PROC_LABEL
	*IsValid_2  = IsValid;
}
}

void MR_CALL 
mercury__stm_builtin__stm_unlock_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__stm_unlock_0_p_0


		{

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__stm_builtin__stm_lock_0_p_0(void)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__stm_lock_0_p_0


		{

    #if defined(MR_THREAD_SAFE)
        MR_LOCK(&MR_STM_lock, "stm_lock/0");
    #endif
    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM LOCKING\n");
    #endif


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__stm_builtin__stm_create_nested_transaction_log_2_p_0(
  MR_Box Parent_1,
  MR_Box * Child_2)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__stm_create_nested_transaction_log_2_p_0

	MR_STM_TransLog * Parent;
	MR_STM_TransLog * Child;

	Parent = (MR_STM_TransLog *)Parent_1 ;
		{

    MR_STM_create_log(Child, Parent);
#ifdef  MR_STM_DEBUG
        fprintf(stderr,
                "STM: Creating nested log <0x%.8lx>, parent <0x%.8lx>\n",
                (MR_Word)(Child), (MR_Word)(Parent));
#endif


		;}
#undef MR_PROC_LABEL
	*Child_2  = (MR_Box) Child;
}
}

void MR_CALL 
mercury__stm_builtin__stm_discard_transaction_log_1_p_0(
  MR_Box STM_1)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__stm_discard_transaction_log_1_p_0

	MR_STM_TransLog * STM;

	STM = (MR_STM_TransLog *)STM_1 ;
		{

    MR_STM_discard_log(STM);


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__stm_builtin__stm_create_transaction_log_1_p_0(
  MR_Box * STM_1)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__stm_create_transaction_log_1_p_0

	MR_STM_TransLog * STM;

		{

    MR_STM_create_log(STM, NULL);

#if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM NEW LOG: log <0x%.8lx>\n",
            (MR_Word)(STM));
#endif


		;}
#undef MR_PROC_LABEL
	*STM_1  = (MR_Box) STM;
}
}

static void MR_CALL 
mercury__stm_builtin__or_else_5_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv4_HeadVar__3_6;

  mercury__exception__unsafe_call_transaction_goal_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Box) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv4_HeadVar__3_6);
  *wrapper_arg_1 = ((MR_Box) (conv4_HeadVar__3_6));
}

static void MR_CALL 
mercury__stm_builtin__or_else_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv0_HeadVar__3_6;

  mercury__exception__unsafe_call_transaction_goal_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Box) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv0_HeadVar__3_6);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__3_6));
}

void MR_CALL 
mercury__stm_builtin__or_else_5_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TransA_6,
  MR_Word TransB_7,
  MR_Box * Result_8,
  MR_Box OuterSTM0_9,
  MR_Box * OuterSTM_10)
{
  MR_bool succeeded;
  MR_Box InnerSTM_A0_11;
  MR_Word ResultA_12;
  MR_Box InnerSTM_A_13;
  MR_Word TypeInfo_21_44;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word conv1_Var_35;

{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0

	MR_STM_TransLog * Parent;
	MR_STM_TransLog * Child;

	Parent = (MR_STM_TransLog *)OuterSTM0_9 ;
		{

    MR_STM_create_log(Child, Parent);
#ifdef  MR_STM_DEBUG
        fprintf(stderr,
                "STM: Creating nested log <0x%.8lx>, parent <0x%.8lx>\n",
                (MR_Word)(Child), (MR_Word)(Parent));
#endif


		;}
#undef MR_PROC_LABEL
	InnerSTM_A0_11  = (MR_Box) Child;
}
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&mercury__stm_builtin_scalar_common_6[0]));
    MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (mercury__stm_builtin__or_else_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (TypeInfo_for_T_25));
    MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (TransA_6));
    MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (InnerSTM_A0_11));
  }
  {
    TypeInfo_21_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_21_44, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(MR_mktag(0), TypeInfo_21_44, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), TypeInfo_21_44, 2) = ((MR_Box) (TypeInfo_for_T_25));
    MR_hl_field(MR_mktag(0), TypeInfo_21_44, 3) = ((MR_Box) (&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0));
  }
  mercury__exception__try_2_p_0(TypeInfo_21_44, (MR_Word) (Var_33), &conv1_Var_35);
  Var_35 = (MR_Word) (conv1_Var_35);
  if (((MR_tag((MR_Word) Var_35)) == (MR_Integer) 2))
  {
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_35, (MR_Integer) 0))));
    MR_Word Var_40;
    MR_Box conv2_Copy;

{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T = (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0) ;
	Value = (MR_Word) ((MR_Box) (Var_39)) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	conv2_Copy  = (MR_Box) Copy;
    Var_40 = ((MR_Word) (conv2_Copy));
}
    {
      ResultA_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ResultA_12, 0) = ((MR_Box) (Var_40));
    }
    InnerSTM_A_13 = InnerSTM_A0_11;
  }
  else
  {
    MR_Tuple Var_36 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0))));
    MR_Box Var_37 = (MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 0));
    MR_Box Var_38 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Var_36, (MR_Integer) 1))));

    {
      ResultA_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ResultA_12, 0) = Var_37;
    }
    InnerSTM_A_13 = Var_38;
  }
  if (((MR_tag((MR_Word) ResultA_12)) == (MR_Integer) 2))
  {
    MR_Word ExcpA_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResultA_12, (MR_Integer) 0))));
    MR_Word Var_22;
    MR_Box conv3_Var_22;

    succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0), &conv3_Var_22, ExcpA_14);
    if (succeeded)
    {
      Var_22 = ((MR_Word) (conv3_Var_22));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = (Var_22 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Box InnerSTM_B0_15;
      MR_Word ResultB_16;
      MR_Box InnerSTM_B_17;
      MR_Word TypeInfo_21_64;
      MR_Word Var_53;
      MR_Word Var_55;
      MR_Word conv5_Var_55;

{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0

	MR_STM_TransLog * Parent;
	MR_STM_TransLog * Child;

	Parent = (MR_STM_TransLog *)OuterSTM0_9 ;
		{

    MR_STM_create_log(Child, Parent);
#ifdef  MR_STM_DEBUG
        fprintf(stderr,
                "STM: Creating nested log <0x%.8lx>, parent <0x%.8lx>\n",
                (MR_Word)(Child), (MR_Word)(Parent));
#endif


		;}
#undef MR_PROC_LABEL
	InnerSTM_B0_15  = (MR_Box) Child;
}
      {
        Var_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (&mercury__stm_builtin_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (mercury__stm_builtin__or_else_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (TypeInfo_for_T_25));
        MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (TransB_7));
        MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (InnerSTM_B0_15));
      }
      {
        TypeInfo_21_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_21_64, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
        MR_hl_field(MR_mktag(0), TypeInfo_21_64, 1) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), TypeInfo_21_64, 2) = ((MR_Box) (TypeInfo_for_T_25));
        MR_hl_field(MR_mktag(0), TypeInfo_21_64, 3) = ((MR_Box) (&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0));
      }
      mercury__exception__try_2_p_0(TypeInfo_21_64, (MR_Word) (Var_53), &conv5_Var_55);
      Var_55 = (MR_Word) (conv5_Var_55);
      if (((MR_tag((MR_Word) Var_55)) == (MR_Integer) 2))
      {
        MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_55, (MR_Integer) 0))));
        MR_Word Var_60;
        MR_Box conv6_Copy;

{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T = (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0) ;
	Value = (MR_Word) ((MR_Box) (Var_59)) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	conv6_Copy  = (MR_Box) Copy;
        Var_60 = ((MR_Word) (conv6_Copy));
}
        {
          ResultB_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ResultB_16, 0) = ((MR_Box) (Var_60));
        }
        InnerSTM_B_17 = InnerSTM_B0_15;
      }
      else
      {
        MR_Tuple Var_56 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 0))));
        MR_Box Var_57 = (MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 0));
        MR_Box Var_58 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Var_56, (MR_Integer) 1))));

        {
          ResultB_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ResultB_16, 0) = Var_57;
        }
        InnerSTM_B_17 = Var_58;
      }
      if (((MR_tag((MR_Word) ResultB_16)) == (MR_Integer) 2))
      {
        MR_Word ExcpB_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ResultB_16, (MR_Integer) 0))));
        MR_Word Var_23;
        MR_Box conv7_Var_23;

        succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0), &conv7_Var_23, ExcpB_18);
        if (succeeded)
        {
          Var_23 = ((MR_Word) (conv7_Var_23));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          succeeded = (Var_23 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word IsValidA_19;
          MR_Word IsValidB_20;

{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0


		{

    #if defined(MR_THREAD_SAFE)
        MR_LOCK(&MR_STM_lock, "stm_lock/0");
    #endif
    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM LOCKING\n");
    #endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0

	MR_STM_TransLog * STM;
	MR_Word IsValid;

	STM = (MR_STM_TransLog *)InnerSTM_A_13 ;
		{

    IsValid = MR_STM_validate(STM);


		;}
#undef MR_PROC_LABEL
	IsValidA_19  = IsValid;
}
{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0

	MR_STM_TransLog * STM;
	MR_Word IsValid;

	STM = (MR_STM_TransLog *)InnerSTM_B_17 ;
		{

    IsValid = MR_STM_validate(STM);


		;}
#undef MR_PROC_LABEL
	IsValidB_20  = IsValid;
}
          succeeded = (IsValidA_19 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (IsValidB_20 == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Box OuterSTM1_21;

{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0

	MR_STM_TransLog * Child;
	MR_STM_TransLog * Parent0;
	MR_STM_TransLog * Parent;

	Child = (MR_STM_TransLog *)InnerSTM_A_13 ;
	Parent0 = (MR_STM_TransLog *)OuterSTM0_9 ;
		{

    // Avoid a warning: Child, Parent0, Parent
#if defined(MR_STM_DEBUG)
    fprintf(stderr, "STM Calling Merge Nested: log <0x%.8lx>\n",
        (MR_Word)(Child));
#endif
    MR_STM_merge_transactions(Child);
    Parent = Parent0;


		;}
#undef MR_PROC_LABEL
	OuterSTM1_21  = (MR_Box) Parent;
}
{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0

	MR_STM_TransLog * Child;
	MR_STM_TransLog * Parent0;
	MR_STM_TransLog * Parent;

	Child = (MR_STM_TransLog *)InnerSTM_B_17 ;
	Parent0 = (MR_STM_TransLog *)OuterSTM1_21 ;
		{

    // Avoid a warning: Child, Parent0, Parent
#if defined(MR_STM_DEBUG)
    fprintf(stderr, "STM Calling Merge Nested: log <0x%.8lx>\n",
        (MR_Word)(Child));
#endif
    MR_STM_merge_transactions(Child);
    Parent = Parent0;


		;}
#undef MR_PROC_LABEL
	*OuterSTM_10  = (MR_Box) Parent;
}
{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0


		{

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif


		;}
#undef MR_PROC_LABEL
}
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0), ((MR_Box) ((MR_Integer) 1)));
              return;
            }
          }
          else
          {
{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0


		{

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif


		;}
#undef MR_PROC_LABEL
}
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0), ((MR_Box) ((MR_Integer) 0)));
              return;
            }
          }
        }
        else
        {
{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0

	MR_STM_TransLog * STM;

	STM = (MR_STM_TransLog *)InnerSTM_B_17 ;
		{

    MR_STM_discard_log(STM);


		;}
#undef MR_PROC_LABEL
}
          {
            mercury__exception__rethrow_1_p_0(TypeInfo_for_T_25, ResultB_16);
            return;
          }
        }
      }
      else
      {
        *Result_8 = (MR_hl_field(MR_mktag(1), ResultB_16, (MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0

	MR_STM_TransLog * Child;
	MR_STM_TransLog * Parent0;
	MR_STM_TransLog * Parent;

	Child = (MR_STM_TransLog *)InnerSTM_B_17 ;
	Parent0 = (MR_STM_TransLog *)OuterSTM0_9 ;
		{

    // Avoid a warning: Child, Parent0, Parent
#if defined(MR_STM_DEBUG)
    fprintf(stderr, "STM Calling Merge Nested: log <0x%.8lx>\n",
        (MR_Word)(Child));
#endif
    MR_STM_merge_transactions(Child);
    Parent = Parent0;


		;}
#undef MR_PROC_LABEL
	*OuterSTM_10  = (MR_Box) Parent;
}
      }
    }
    else
    {
{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0

	MR_STM_TransLog * STM;

	STM = (MR_STM_TransLog *)InnerSTM_A_13 ;
		{

    MR_STM_discard_log(STM);


		;}
#undef MR_PROC_LABEL
}
      {
        mercury__exception__rethrow_1_p_0(TypeInfo_for_T_25, ResultA_12);
        return;
      }
    }
  }
  else
  {
    *Result_8 = (MR_hl_field(MR_mktag(1), ResultA_12, (MR_Integer) 0));
{
#define MR_PROC_LABEL mercury__stm_builtin__or_else_5_p_0

	MR_STM_TransLog * Child;
	MR_STM_TransLog * Parent0;
	MR_STM_TransLog * Parent;

	Child = (MR_STM_TransLog *)InnerSTM_A_13 ;
	Parent0 = (MR_STM_TransLog *)OuterSTM0_9 ;
		{

    // Avoid a warning: Child, Parent0, Parent
#if defined(MR_STM_DEBUG)
    fprintf(stderr, "STM Calling Merge Nested: log <0x%.8lx>\n",
        (MR_Word)(Child));
#endif
    MR_STM_merge_transactions(Child);
    Parent = Parent0;


		;}
#undef MR_PROC_LABEL
	*OuterSTM_10  = (MR_Box) Parent;
}
  }
}

void MR_CALL 
mercury__stm_builtin__atomic_transaction_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word Goal_5,
  MR_Box * Result_6)
{
  mercury__stm_builtin__atomic_transaction_impl_2_p_0(TypeInfo_for_T_10, Goal_5, Result_6);
}

static void MR_CALL 
mercury__stm_builtin__atomic_transaction_impl_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv1_HeadVar__3_6;

  mercury__exception__unsafe_call_transaction_goal_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Box) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), &conv1_HeadVar__3_6);
  *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_6));
}

static void MR_CALL 
mercury__stm_builtin__atomic_transaction_impl_2_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Box conv0_STATE_VARIABLE_STM_10;

  mercury__stm_builtin__call_atomic_goal_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), wrapper_arg_1, ((MR_Box) (wrapper_arg_2)), &conv0_STATE_VARIABLE_STM_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_STM_10));
}

static void MR_CALL 
mercury__stm_builtin__atomic_transaction_impl_2_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Goal_3,
  MR_Box * Result_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box STM0_5;
    MR_Word Result0_6;
    MR_Box STM_7;
    MR_Word TypeInfo_21_35;
    MR_Word Var_10;
    MR_Word Var_24;
    MR_Word Var_26;
    MR_Word conv2_Var_26;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__stm_builtin__atomic_transaction_impl_2_p_0

	MR_STM_TransLog * STM;

		{

    MR_STM_create_log(STM, NULL);

#if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM NEW LOG: log <0x%.8lx>\n",
            (MR_Word)(STM));
#endif


		;}
#undef MR_PROC_LABEL
	STM0_5  = (MR_Box) STM;
}
    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&mercury__stm_builtin_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (mercury__stm_builtin__atomic_transaction_impl_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (TypeInfo_for_T_14));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Goal_3));
    }
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&mercury__stm_builtin_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (mercury__stm_builtin__atomic_transaction_impl_2_p_0_2));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (TypeInfo_for_T_14));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (STM0_5));
    }
    {
      TypeInfo_21_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_21_35, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
      MR_hl_field(MR_mktag(0), TypeInfo_21_35, 1) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), TypeInfo_21_35, 2) = ((MR_Box) (TypeInfo_for_T_14));
      MR_hl_field(MR_mktag(0), TypeInfo_21_35, 3) = ((MR_Box) (&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0));
    }
    mercury__exception__try_2_p_0(TypeInfo_21_35, (MR_Word) (Var_24), &conv2_Var_26);
    Var_26 = (MR_Word) (conv2_Var_26);
    if (((MR_tag((MR_Word) Var_26)) == (MR_Integer) 2))
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_26, (MR_Integer) 0))));
      MR_Word Var_31;
      MR_Box conv3_Copy;

{
#define MR_PROC_LABEL mercury__stm_builtin__atomic_transaction_impl_2_p_0

	MR_Word TypeInfo_for_T;
	MR_Word TypeInfo_In_1;
	MR_Word Value;
	MR_Word Copy;

	TypeInfo_for_T = (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0) ;
	Value = (MR_Word) ((MR_Box) (Var_30)) ;
	TypeInfo_In_1 = TypeInfo_for_T;
		{

    MR_save_transient_registers();
    Copy = MR_deep_copy(Value, (MR_TypeInfo) TypeInfo_for_T, NULL, NULL);
    MR_restore_transient_registers();


		;}
#undef MR_PROC_LABEL
	conv3_Copy  = (MR_Box) Copy;
      Var_31 = ((MR_Word) (conv3_Copy));
}
      {
        Result0_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Result0_6, 0) = ((MR_Box) (Var_31));
      }
      STM_7 = STM0_5;
    }
    else
    {
      MR_Tuple Var_27 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0))));
      MR_Box Var_28 = (MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 0));
      MR_Box Var_29 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Var_27, (MR_Integer) 1))));

      {
        Result0_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Result0_6, 0) = Var_28;
      }
      STM_7 = Var_29;
    }
    if (((MR_tag((MR_Word) Result0_6)) == (MR_Integer) 2))
    {
      MR_Word Excp_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result0_6, (MR_Integer) 0))));
      MR_Word Var_11;
      MR_Box conv4_Var_11;

      succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0), &conv4_Var_11, Excp_8);
      if (succeeded)
      {
        Var_11 = ((MR_Word) (conv4_Var_11));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = (Var_11 == (MR_Integer) 0);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__stm_builtin__atomic_transaction_impl_2_p_0

	MR_STM_TransLog * STM;

	STM = (MR_STM_TransLog *)STM_7 ;
		{

    MR_STM_discard_log(STM);


		;}
#undef MR_PROC_LABEL
}
        // direct tailcall eliminated
        ;
        continue;
      }
      else
      {
        MR_Word Var_12;
        MR_Box conv5_Var_12;

        succeeded = mercury__univ__type_to_univ_2_p_2((MR_Word) (&mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0), &conv5_Var_12, Excp_8);
        if (succeeded)
        {
          Var_12 = ((MR_Word) (conv5_Var_12));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          succeeded = (Var_12 == (MR_Integer) 1);
        if (succeeded)
        {
          MR_Word IsValid_9;

{
#define MR_PROC_LABEL mercury__stm_builtin__atomic_transaction_impl_2_p_0


		{

    #if defined(MR_THREAD_SAFE)
        MR_LOCK(&MR_STM_lock, "stm_lock/0");
    #endif
    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM LOCKING\n");
    #endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__stm_builtin__atomic_transaction_impl_2_p_0

	MR_STM_TransLog * STM;
	MR_Word IsValid;

	STM = (MR_STM_TransLog *)STM_7 ;
		{

    IsValid = MR_STM_validate(STM);


		;}
#undef MR_PROC_LABEL
	IsValid_9  = IsValid;
}
          switch (IsValid_9) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
{
#define MR_PROC_LABEL mercury__stm_builtin__atomic_transaction_impl_2_p_0


		{

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif


		;}
#undef MR_PROC_LABEL
}
              }
              break;
            case (MR_Integer) 0:
              {
{
#define MR_PROC_LABEL mercury__stm_builtin__atomic_transaction_impl_2_p_0

	MR_STM_TransLog * STM;

	STM = (MR_STM_TransLog *)STM_7 ;
		{

#if defined(MR_HIGHLEVEL_CODE)
    MR_STM_block_thread(STM);
#else

    MR_STM_wait(STM, STM);

#if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM BLOCKING: log <0x%.8lx>\n", STM);
#endif

    MR_save_context(MR_ENGINE(MR_eng_this_context));

    MR_ENGINE(MR_eng_this_context)->MR_ctxt_resume =
        MR_ENTRY(mercury__stm_builtin__block_thread_resume);

    MR_UNLOCK(&MR_STM_lock, "MR_STM_block_thread");

    MR_ENGINE(MR_eng_this_context) = NULL;
    MR_idle();
#endif


		;}
#undef MR_PROC_LABEL
}
              }
              break;
          }
{
#define MR_PROC_LABEL mercury__stm_builtin__atomic_transaction_impl_2_p_0

	MR_STM_TransLog * STM;

	STM = (MR_STM_TransLog *)STM_7 ;
		{

    MR_STM_discard_log(STM);


		;}
#undef MR_PROC_LABEL
}
          // direct tailcall eliminated
          ;
          continue;
        }
        else
        {
          MR_Word IsValid_13;

{
#define MR_PROC_LABEL mercury__stm_builtin__atomic_transaction_impl_2_p_0


		{

    #if defined(MR_THREAD_SAFE)
        MR_LOCK(&MR_STM_lock, "stm_lock/0");
    #endif
    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM LOCKING\n");
    #endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL mercury__stm_builtin__atomic_transaction_impl_2_p_0

	MR_STM_TransLog * STM;
	MR_Word IsValid;

	STM = (MR_STM_TransLog *)STM_7 ;
		{

    IsValid = MR_STM_validate(STM);


		;}
#undef MR_PROC_LABEL
	IsValid_13  = IsValid;
}
{
#define MR_PROC_LABEL mercury__stm_builtin__atomic_transaction_impl_2_p_0


		{

    #if defined(MR_STM_DEBUG)
        fprintf(stderr, "STM UNLOCKING\n");
    #endif
    #if defined(MR_THREAD_SAFE)
        MR_UNLOCK(&MR_STM_lock, "stm_unlock/0");
    #endif


		;}
#undef MR_PROC_LABEL
}
          switch (IsValid_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
{
#define MR_PROC_LABEL mercury__stm_builtin__atomic_transaction_impl_2_p_0

	MR_STM_TransLog * STM;

	STM = (MR_STM_TransLog *)STM_7 ;
		{

    MR_STM_discard_log(STM);


		;}
#undef MR_PROC_LABEL
}
                // direct tailcall eliminated
                ;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__exception__rethrow_1_p_0(TypeInfo_for_T_14, Result0_6);
                return;
              }
              break;
          }
        }
      }
    }
    else
      *Result_4 = (MR_hl_field(MR_mktag(1), Result0_6, (MR_Integer) 0));
    break;
  }
}

void MR_CALL 
mercury__stm_builtin__retry_1_p_0(
  MR_Box HeadVar__1_2)
{
  {
    mercury__exception__throw_1_p_0((MR_Word) (&mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0), ((MR_Box) ((MR_Integer) 1)));
    return;
  }
}

void MR_CALL 
mercury__stm_builtin__read_stm_var_4_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__read_stm_var_4_p_0

	MR_STM_Var * TVar;
	MR_Word Value;
	MR_STM_TransLog * STM0;
	MR_STM_TransLog * STM;

	TVar = (MR_STM_Var *)HeadVar__1_1 ;
	STM0 = (MR_STM_TransLog *)HeadVar__3_3 ;
		{

    Value = MR_STM_read_var(TVar, STM0);
    STM = STM0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = (MR_Box) Value;
	*HeadVar__4_4  = (MR_Box) STM;
}
}

void MR_CALL 
mercury__stm_builtin__write_stm_var_4_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__write_stm_var_4_p_0

	MR_STM_Var * TVar;
	MR_Word Value;
	MR_STM_TransLog * STM0;
	MR_STM_TransLog * STM;

	TVar = (MR_STM_Var *)HeadVar__1_1 ;
	Value = (MR_Word) HeadVar__2_2 ;
	STM0 = (MR_STM_TransLog *)HeadVar__3_3 ;
		{

    MR_STM_write_var(TVar, Value, STM0);
    STM = STM0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__4_4  = (MR_Box) STM;
}
}

void MR_CALL 
mercury__stm_builtin__new_stm_var_atomic_4_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__new_stm_var_atomic_4_p_0

	MR_Word T;
	MR_STM_Var * TVar;
	MR_STM_TransLog * STM0;
	MR_STM_TransLog * STM;

	T = (MR_Word) HeadVar__1_1 ;
	STM0 = (MR_STM_TransLog *)HeadVar__3_3 ;
		{

    MR_STM_new_stm_var(T, TVar);
    STM = STM0;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = (MR_Box) TVar;
	*HeadVar__4_4  = (MR_Box) STM;
}
}

void MR_CALL 
mercury__stm_builtin__new_stm_var_4_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2)
{
{
#define MR_PROC_LABEL mercury__stm_builtin__new_stm_var_4_p_0

	MR_Word T;
	MR_STM_Var * TVar;

	T = (MR_Word) HeadVar__1_1 ;
		{

    MR_STM_new_stm_var(T, TVar);


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = (MR_Box) TVar;
}
}

static MR_bool MR_CALL 
mercury__stm_builtin____Unify____rollback_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__stm_builtin____Unify____rollback_exception_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__stm_builtin____Compare____rollback_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__stm_builtin____Compare____rollback_exception_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__stm_builtin____Unify____stm_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__stm_builtin____Unify____stm_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__stm_builtin____Compare____stm_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__stm_builtin____Compare____stm_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__stm_builtin____Unify____stm_dummy_output_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__stm_builtin____Unify____stm_dummy_output_0_0();
  return succeeded;
}

static void MR_CALL 
mercury__stm_builtin____Compare____stm_dummy_output_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__stm_builtin____Compare____stm_dummy_output_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__stm_builtin____Unify____stm_validation_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__stm_builtin____Unify____stm_validation_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__stm_builtin____Compare____stm_validation_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__stm_builtin____Compare____stm_validation_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__stm_builtin____Unify____stm_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__stm_builtin____Unify____stm_var_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__stm_builtin____Compare____stm_var_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__stm_builtin____Compare____stm_var_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_3)), ((MR_Box) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__stm_builtin__init(void)
{
}

void mercury__stm_builtin__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__stm_builtin__stm_builtin__type_ctor_info_rollback_exception_0);
	MR_register_type_ctor_info(&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_0);
	MR_register_type_ctor_info(&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_dummy_output_0);
	MR_register_type_ctor_info(&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_validation_result_0);
	MR_register_type_ctor_info(&mercury__stm_builtin__stm_builtin__type_ctor_info_stm_var_1);
}

void mercury__stm_builtin__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__stm_builtin__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module stm_builtin.
