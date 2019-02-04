/*
** Automatically generated from `table_builtin.m'
** by the Mercury compiler,
** version rotd-2018-11-07
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


// :- module table_builtin.
// :- implementation.

/*
INIT mercury__table_builtin__init
ENDINIT
*/

#include "table_builtin.mih"


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
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
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
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_0;

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_1;

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_loop_status_0[2];

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_loop_status_0[2];

static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_loop_status_0[2];

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_0;

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_1;

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_2;

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_det_status_0[3];

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_det_status_0[3];

static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_det_status_0[3];

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_0;

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_1;

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_2;

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_3;

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_non_status_0[4];

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_non_status_0[4];

static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_non_status_0[4];

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_0;

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_1;

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_2;

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_3;

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_semi_status_0[4];

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_semi_status_0[4];

static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_semi_status_0[4];

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_0;

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_1;

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_2;

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_mm_status_0[3];

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_mm_status_0[3];

static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_mm_status_0[3];

static MR_Integer MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_bool MR_CALL 
mercury__table_builtin____Unify____loop_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_builtin____Compare____loop_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_det_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_builtin____Compare____memo_det_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_record_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_builtin____Compare____memo_non_record_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_builtin____Compare____memo_non_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_semi_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_builtin____Compare____memo_semi_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_block_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_builtin____Compare____ml_answer_block_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_builtin____Compare____ml_answer_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_consumer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_builtin____Compare____ml_consumer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_generator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_builtin____Compare____ml_generator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_proc_table_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_builtin____Compare____ml_proc_table_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_subgoal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_builtin____Compare____ml_subgoal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_trie_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_builtin____Compare____ml_trie_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__table_builtin____Unify____mm_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__table_builtin____Compare____mm_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__table_builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__table_builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__table_builtin_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__table_builtin_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__table_builtin_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__table_builtin_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__table_builtin_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__table_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__table_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"



static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_0 = {
  (MR_String) "loop_inactive",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_1 = {
  (MR_String) "loop_active",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_loop_status_0[2] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_1
};

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_loop_status_0[2] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_loop_status_0_0
};

static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_loop_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_loop_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____loop_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____loop_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "loop_status",
  {     mercury__table_builtin__table_builtin__enum_name_ordered_loop_status_0 },
  {     mercury__table_builtin__table_builtin__enum_value_ordered_loop_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_loop_status_0
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_0 = {
  (MR_String) "memo_det_inactive",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_1 = {
  (MR_String) "memo_det_active",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_2 = {
  (MR_String) "memo_det_succeeded",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_det_status_0[3] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_2
};

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_det_status_0[3] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_det_status_0_2
};

static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_det_status_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_memo_det_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____memo_det_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____memo_det_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "memo_det_status",
  {     mercury__table_builtin__table_builtin__enum_name_ordered_memo_det_status_0 },
  {     mercury__table_builtin__table_builtin__enum_value_ordered_memo_det_status_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_memo_det_status_0
};

const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_memo_non_record_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____memo_non_record_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____memo_non_record_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "memo_non_record",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_0 = {
  (MR_String) "memo_non_inactive",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_1 = {
  (MR_String) "memo_non_active",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_2 = {
  (MR_String) "memo_non_incomplete",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_3 = {
  (MR_String) "memo_non_complete",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_non_status_0[4] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_2,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_3
};

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_non_status_0[4] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_3,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_non_status_0_2
};

static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_non_status_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_memo_non_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____memo_non_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____memo_non_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "memo_non_status",
  {     mercury__table_builtin__table_builtin__enum_name_ordered_memo_non_status_0 },
  {     mercury__table_builtin__table_builtin__enum_value_ordered_memo_non_status_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_memo_non_status_0
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_0 = {
  (MR_String) "memo_semi_inactive",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_1 = {
  (MR_String) "memo_semi_active",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_2 = {
  (MR_String) "memo_semi_succeeded",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_3 = {
  (MR_String) "memo_semi_failed",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_memo_semi_status_0[4] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_2,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_3
};

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_memo_semi_status_0[4] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_3,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_memo_semi_status_0_2
};

static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_memo_semi_status_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_memo_semi_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____memo_semi_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____memo_semi_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "memo_semi_status",
  {     mercury__table_builtin__table_builtin__enum_name_ordered_memo_semi_status_0 },
  {     mercury__table_builtin__table_builtin__enum_value_ordered_memo_semi_status_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_memo_semi_status_0
};

const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_answer_block_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_answer_block_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_answer_block_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_answer_block",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_answer_list_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_answer_list_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_answer_list_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_answer_list",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_consumer_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_consumer_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_consumer_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_consumer",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_generator_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_generator_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_generator_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_generator",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_proc_table_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_proc_table_info_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_proc_table_info_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_proc_table_info",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_subgoal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_SUBGOAL,
  ((MR_Box) (mercury__table_builtin____Unify____ml_subgoal_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_subgoal_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_subgoal",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_ml_trie_node_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__table_builtin____Unify____ml_trie_node_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____ml_trie_node_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "ml_trie_node",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_0 = {
  (MR_String) "mm_inactive",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_1 = {
  (MR_String) "mm_active",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_2 = {
  (MR_String) "mm_complete",
  (MR_Integer) 2
};

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_value_ordered_mm_status_0[3] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_0,
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_2
};

static const MR_EnumFunctorDescPtr mercury__table_builtin__table_builtin__enum_name_ordered_mm_status_0[3] = {
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_1,
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_2,
  &mercury__table_builtin__table_builtin__enum_functor_desc_mm_status_0_0
};

static const MR_Integer mercury__table_builtin__table_builtin__functor_number_map_mm_status_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__table_builtin__table_builtin__type_ctor_info_mm_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__table_builtin____Unify____mm_status_0_0_10001)),
  ((MR_Box) (mercury__table_builtin____Compare____mm_status_0_0_10001)),
  (MR_String) "table_builtin",
  (MR_String) "mm_status",
  {     mercury__table_builtin__table_builtin__enum_name_ordered_mm_status_0 },
  {     mercury__table_builtin__table_builtin__enum_value_ordered_mm_status_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__table_builtin__table_builtin__functor_number_map_mm_status_0
};

static MR_Integer MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_111_115_95_114_101_115_116_111_114_101_95_97_110_115_119_101_114_115_95_95_91_49_93_95_48_1_p_0(void)
{
  {
  }
}

void MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_109_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_p_0(void)
{
  {
  }
}

void MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_110_111_110_95_114_101_116_117_114_110_95_97_108_108_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_p_0(void)
{
  {
  }
}

void MR_CALL 
mercury__table_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_98_108_101_95_109_101_109_111_95_103_101_116_95_97_110_115_119_101_114_95_98_108_111_99_107_95_115_104_111_114_116_99_117_116_95_95_91_49_93_95_48_1_p_0(void)
{
  {
  }
}

void MR_CALL 
mercury__table_builtin____Compare____mm_status_0_0(
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
mercury__table_builtin____Unify____mm_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin____Compare____ml_trie_node_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_trie_node_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin____Compare____ml_subgoal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_subgoal_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin____Compare____ml_proc_table_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_proc_table_info_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin____Compare____ml_generator_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_generator_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin____Compare____ml_consumer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_consumer_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin____Compare____ml_answer_list_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_list_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin____Compare____ml_answer_block_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_block_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin____Compare____memo_semi_status_0_0(
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
mercury__table_builtin____Unify____memo_semi_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin____Compare____memo_non_status_0_0(
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
mercury__table_builtin____Unify____memo_non_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin____Compare____memo_non_record_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_record_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin____Compare____memo_det_status_0_0(
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
mercury__table_builtin____Unify____memo_det_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin____Compare____loop_status_0_0(
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
mercury__table_builtin____Unify____loop_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin__table_report_statistics_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_report_statistics_0_p_0


		{

    MR_table_report_statistics(stderr);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_error_1_p_0(
  MR_String Message_2)
{
  {
    mercury__require__error_1_p_0(Message_2);
    return;
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_any_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  MR_Box * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_any_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Word V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_any_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = (MR_Box) V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_io_state_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_io_state_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Word V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_io_state_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_float_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  MR_Float * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_float_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Float V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_float_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_string_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  MR_String * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_string_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_String V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_string_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_char_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  MR_Char * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_char_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Char V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_char_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_uint64_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  uint64_t * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_uint64_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	uint64_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_uint64_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_int64_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  int64_t * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_int64_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	int64_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_int64_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_uint32_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  uint32_t * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_uint32_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	uint32_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_uint32_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_int32_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  int32_t * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_int32_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	int32_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_int32_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_uint16_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  uint16_t * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_uint16_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	uint16_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_uint16_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_int16_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  int16_t * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_int16_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	int16_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_int16_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_uint8_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  uint8_t * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_uint8_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	uint8_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_uint8_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_int8_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  int8_t * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_int8_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	int8_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_int8_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_uint_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  MR_Unsigned * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_uint_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Unsigned V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_uint_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_restore_int_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  MR_Integer * V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_restore_int_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Integer V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
		{

    MR_tbl_restore_int_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
	 *V_3  = V;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_any_answer_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_any_answer_3_p_0

	MR_Word TypeInfo_for_T;
	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Word V;

	TypeInfo_for_T =  TypeInfo_for_T_8 ;
	AB = (MR_AnswerBlock) HeadVar__1_1 ;
	Offset =  HeadVar__2_2 ;
	V = (MR_Word) HeadVar__3_3 ;
		{

    MR_tbl_save_any_answer(MR_TABLE_DEBUG_BOOL, AB, Offset,
        TypeInfo_for_T, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_io_state_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_io_state_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Word V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V = (MR_Word) (MR_Integer) 0 ;
		{

    MR_tbl_save_io_state_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_float_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  MR_Float V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_float_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Float V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V =  V_3 ;
		{

    MR_tbl_save_float_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_string_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  MR_String V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_string_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_String V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V =  V_3 ;
		{

    MR_tbl_save_string_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_char_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  MR_Char V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_char_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Char V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V =  V_3 ;
		{

    MR_tbl_save_char_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_uint64_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  uint64_t V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_uint64_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	uint64_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V =  V_3 ;
		{

    MR_tbl_save_uint64_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_int64_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  int64_t V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_int64_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	int64_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V =  V_3 ;
		{

    MR_tbl_save_int64_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_uint32_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  uint32_t V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_uint32_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	uint32_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V =  V_3 ;
		{

    MR_tbl_save_uint32_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_int32_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  int32_t V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_int32_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	int32_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V =  V_3 ;
		{

    MR_tbl_save_int32_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_uint16_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  uint16_t V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_uint16_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	uint16_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V =  V_3 ;
		{

    MR_tbl_save_uint16_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_int16_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  int16_t V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_int16_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	int16_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V =  V_3 ;
		{

    MR_tbl_save_int16_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_uint8_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  uint8_t V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_uint8_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	uint8_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V =  V_3 ;
		{

    MR_tbl_save_uint8_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_int8_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  int8_t V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_int8_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	int8_t V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V =  V_3 ;
		{

    MR_tbl_save_int8_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_uint_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  MR_Unsigned V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_uint_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Unsigned V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V =  V_3 ;
		{

    MR_tbl_save_uint_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_save_int_answer_3_p_0(
  MR_Box AB_1,
  MR_Integer Offset_2,
  MR_Integer V_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_save_int_answer_3_p_0

	MR_AnswerBlock AB;
	MR_Integer Offset;
	MR_Integer V;

	AB = (MR_AnswerBlock) AB_1 ;
	Offset =  Offset_2 ;
	V =  V_3 ;
		{

    MR_tbl_save_int_answer(MR_TABLE_DEBUG_BOOL, AB, Offset, V);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_typeclassinfo_3_p_0(
  MR_Box T0_1,
  MR_Word V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_typeclassinfo_3_p_0

	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_typeclassinfo(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_typeinfo_3_p_0(
  MR_Box T0_1,
  MR_Word V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_typeinfo_3_p_0

	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_typeinfo(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_gen_poly_addr_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_gen_poly_addr_3_p_0

	MR_Word TypeInfo_for_T;
	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	TypeInfo_for_T =  TypeInfo_for_T_8 ;
	T0 = (MR_TrieNode) HeadVar__1_1 ;
	V = (MR_Word) HeadVar__2_2 ;
		{

    MR_tbl_lookup_insert_gen_poly_addr(NULL, MR_TABLE_DEBUG_BOOL,
        MR_FALSE, T0, TypeInfo_for_T, V, T);


		;}
#undef MR_PROC_LABEL
	 *HeadVar__3_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_gen_poly_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_gen_poly_3_p_0

	MR_Word TypeInfo_for_T;
	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	TypeInfo_for_T =  TypeInfo_for_T_8 ;
	T0 = (MR_TrieNode) HeadVar__1_1 ;
	V = (MR_Word) HeadVar__2_2 ;
		{

    MR_tbl_lookup_insert_gen_poly(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);


		;}
#undef MR_PROC_LABEL
	 *HeadVar__3_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_gen_addr_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_gen_addr_3_p_0

	MR_Word TypeInfo_for_T;
	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	TypeInfo_for_T =  TypeInfo_for_T_8 ;
	T0 = (MR_TrieNode) HeadVar__1_1 ;
	V = (MR_Word) HeadVar__2_2 ;
		{

    MR_tbl_lookup_insert_gen_addr(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);


		;}
#undef MR_PROC_LABEL
	 *HeadVar__3_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_gen_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_gen_3_p_0

	MR_Word TypeInfo_for_T;
	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	TypeInfo_for_T =  TypeInfo_for_T_8 ;
	T0 = (MR_TrieNode) HeadVar__1_1 ;
	V = (MR_Word) HeadVar__2_2 ;
		{

    MR_tbl_lookup_insert_gen(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        TypeInfo_for_T, V, T);


		;}
#undef MR_PROC_LABEL
	 *HeadVar__3_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_foreign_enum_3_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box * HeadVar__3_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_foreign_enum_3_p_0

	MR_TrieNode T0;
	MR_Word V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) HeadVar__1_1 ;
	V = (MR_Word) HeadVar__2_2 ;
		{

    MR_tbl_lookup_insert_foreign_enum(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        V, T);


		;}
#undef MR_PROC_LABEL
	 *HeadVar__3_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_enum_4_p_0(
  MR_Box T0_1,
  MR_Integer R_2,
  MR_Box V_3,
  MR_Box * T_4)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_enum_4_p_0

	MR_TrieNode T0;
	MR_Integer R;
	MR_Word V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	R =  R_2 ;
	V = (MR_Word) V_3 ;
		{

    MR_tbl_lookup_insert_enum(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0,
        R, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_4  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_float_3_p_0(
  MR_Box T0_1,
  MR_Float V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_float_3_p_0

	MR_TrieNode T0;
	MR_Float V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_float(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_string_3_p_0(
  MR_Box T0_1,
  MR_String V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_string_3_p_0

	MR_TrieNode T0;
	MR_String V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_string(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_char_3_p_0(
  MR_Box T0_1,
  MR_Char V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_char_3_p_0

	MR_TrieNode T0;
	MR_Char V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_char(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_start_int_4_p_0(
  MR_Box T0_1,
  MR_Integer S_2,
  MR_Integer V_3,
  MR_Box * T_4)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_start_int_4_p_0

	MR_TrieNode T0;
	MR_Integer S;
	MR_Integer V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	S =  S_2 ;
	V =  V_3 ;
		{

    MR_tbl_lookup_insert_start_int(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE,
        T0, S, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_4  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_uint64_3_p_0(
  MR_Box T0_1,
  uint64_t V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_uint64_3_p_0

	MR_TrieNode T0;
	uint64_t V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_uint64(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_int64_3_p_0(
  MR_Box T0_1,
  int64_t V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_int64_3_p_0

	MR_TrieNode T0;
	int64_t V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_int64(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_uint32_3_p_0(
  MR_Box T0_1,
  uint32_t V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_uint32_3_p_0

	MR_TrieNode T0;
	uint32_t V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_uint32(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_int32_3_p_0(
  MR_Box T0_1,
  int32_t V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_int32_3_p_0

	MR_TrieNode T0;
	int32_t V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_int32(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_uint16_3_p_0(
  MR_Box T0_1,
  uint16_t V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_uint16_3_p_0

	MR_TrieNode T0;
	uint16_t V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_uint16(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_int16_3_p_0(
  MR_Box T0_1,
  int16_t V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_int16_3_p_0

	MR_TrieNode T0;
	int16_t V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_int16(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_uint8_3_p_0(
  MR_Box T0_1,
  uint8_t V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_uint8_3_p_0

	MR_TrieNode T0;
	uint8_t V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_uint8(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_int8_3_p_0(
  MR_Box T0_1,
  int8_t V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_int8_3_p_0

	MR_TrieNode T0;
	int8_t V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_int8(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_uint_3_p_0(
  MR_Box T0_1,
  MR_Unsigned V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_uint_3_p_0

	MR_TrieNode T0;
	MR_Unsigned V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_uint(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_lookup_insert_int_3_p_0(
  MR_Box T0_1,
  MR_Integer V_2,
  MR_Box * T_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_lookup_insert_int_3_p_0

	MR_TrieNode T0;
	MR_Integer V;
	MR_TrieNode T;

	T0 = (MR_TrieNode) T0_1 ;
	V =  V_2 ;
		{

    MR_tbl_lookup_insert_int(NULL, MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, V, T);


		;}
#undef MR_PROC_LABEL
	 *T_3  = (MR_Box) T;
}
  }
}

MR_bool MR_CALL 
mercury__table_builtin__table_mmos_completion_1_p_0(
  MR_Box Generator_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_completion_1_p_0

	MR_GeneratorPtr Generator;

	Generator = (MR_GeneratorPtr) Generator_1 ;
		{

    // MR_tbl_mmos_completion(Generator);


		;}
#undef MR_PROC_LABEL
succeeded  = MR_FALSE;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin__table_mmos_return_answer_2_p_0(
  MR_Box Generator_1,
  MR_Box AnswerBlock_2)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_return_answer_2_p_0

	MR_GeneratorPtr Generator;
	MR_AnswerBlock AnswerBlock;

	Generator = (MR_GeneratorPtr) Generator_1 ;
	AnswerBlock = (MR_AnswerBlock) AnswerBlock_2 ;
		{

    // MR_tbl_mmos_return_answer(Generator, AnswerBlock);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_mmos_create_answer_block_3_p_0(
  MR_Box Generator_1,
  MR_Integer BlockSize_2,
  MR_Box * AnswerBlock_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_create_answer_block_3_p_0

	MR_GeneratorPtr Generator;
	MR_Integer BlockSize;
	MR_AnswerBlock AnswerBlock;

	Generator = (MR_GeneratorPtr) Generator_1 ;
	BlockSize =  BlockSize_2 ;
		{

    // MR_tbl_mmos_create_answer_block(Generator, BlockSize, AnswerBlock);


		;}
#undef MR_PROC_LABEL
	 *AnswerBlock_3  = (MR_Box) AnswerBlock;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_mmos_pickup_inputs_1_p_0(
  MR_Box * Generator_1)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_pickup_inputs_1_p_0

	MR_GeneratorPtr Generator;

		{

    // The body of this predicate doesn't matter, because it will never be
    // referred to. When the compiler creates references to this predicate,
    // it always overrides the predicate body.

    // mention Generator to shut up the warning.
    MR_fatal_error("table_mmos_pickup_inputs: direct call");


		;}
#undef MR_PROC_LABEL
	 *Generator_1  = (MR_Box) Generator;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_mmos_restore_answers_1_p_0(
  MR_Box AnswerBlock_1)
{
  {
  }
}

void MR_CALL 
mercury__table_builtin__table_mmos_consume_next_answer_multi_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

void MR_CALL 
mercury__table_builtin__table_mmos_consume_next_answer_nondet_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

MR_bool MR_CALL 
mercury__table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_p_0(
  MR_Box G_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_answer_is_not_duplicate_shortcut_1_p_0

	MR_GeneratorPtr G;
	MR_bool SUCCESS_INDICATOR;

	G = (MR_GeneratorPtr) G_1 ;
		{

    // The body of this predicate doesn't matter, because it will never be
    // referred to. When the compiler creates references to this predicate,
    // it always overrides the predicate body.

    // Mention G to shut up the warning.
    MR_fatal_error(
        "table_mmos_answer_is_not_duplicate_shortcut: direct call");


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__table_builtin__table_mmos_answer_is_not_duplicate_1_p_0(
  MR_Box T_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_answer_is_not_duplicate_1_p_0

	MR_TrieNode T;
	MR_bool SUCCESS_INDICATOR;

	T = (MR_TrieNode) T_1 ;
		{

    // The body of this predicate doesn't matter, because it will never be
    // referred to. When the compiler creates references to this predicate,
    // it always overrides the predicate body.

    // Mention T to shut up the warning.
    MR_fatal_error("table_mmos_answer_is_not_duplicate: direct call");


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin__table_mmos_setup_consumer_3_p_0(
  MR_Box T_1,
  MR_Word GeneratorPred_2,
  MR_Box * Consumer_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_setup_consumer_3_p_0

	MR_TrieNode T;
	MR_Word GeneratorPred;
	MR_ConsumerPtr Consumer;

	T = (MR_TrieNode) T_1 ;
	GeneratorPred =  GeneratorPred_2 ;
		{

    // The body of this predicate doesn't matter, because it will never be
    // referred to. When the compiler creates references to this predicate,
    // it always overrides the predicate body.

    // Mention T, GeneratorPred, Consumer to shut up the warning.
    MR_fatal_error("table_mmos_setup_consumer: direct call");


		;}
#undef MR_PROC_LABEL
	 *Consumer_3  = (MR_Box) Consumer;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_mmos_save_inputs_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_mmos_save_inputs_0_p_0


		{

    // The body of this predicate doesn't matter, because it will never be
    // referred to. When the compiler creates references to this predicate,
    // it always overrides the predicate body.
    MR_fatal_error("table_mmos_save_inputs: direct call");


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_mm_return_all_shortcut_1_p_0(
  MR_Box AnswerBlock_1)
{
  {
  }
}

void MR_CALL 
mercury__table_builtin__table_mm_return_all_multi_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

void MR_CALL 
mercury__table_builtin__table_mm_return_all_nondet_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

void MR_CALL 
mercury__table_builtin__table_mm_fill_answer_block_shortcut_1_p_0(
  MR_Box Subgoal_1)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_fill_answer_block_shortcut_1_p_0

	MR_SubgoalPtr Subgoal;

	Subgoal = (MR_SubgoalPtr) Subgoal_1 ;
		{

    MR_tbl_mm_fill_answer_block_shortcut(Subgoal);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_mm_create_answer_block_3_p_0(
  MR_Box Subgoal_1,
  MR_Integer Size_2,
  MR_Box * AnswerBlock_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_create_answer_block_3_p_0

	MR_SubgoalPtr Subgoal;
	MR_Integer Size;
	MR_AnswerBlock AnswerBlock;

	Subgoal = (MR_SubgoalPtr) Subgoal_1 ;
	Size =  Size_2 ;
		{

    MR_tbl_mm_create_answer_block(MR_TABLE_DEBUG_BOOL,
        Subgoal, Size, AnswerBlock);


		;}
#undef MR_PROC_LABEL
	 *AnswerBlock_3  = (MR_Box) AnswerBlock;
}
  }
}

MR_bool MR_CALL 
mercury__table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_p_0(
  MR_Box Subgoal_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_answer_is_not_duplicate_shortcut_1_p_0

	MR_SubgoalPtr Subgoal;
	MR_bool SUCCESS_INDICATOR;

	Subgoal = (MR_SubgoalPtr) Subgoal_1 ;
		{

    // The body of this predicate doesn't matter, because it will never be
    // referred to. When the compiler creates references to this predicate,
    // it always overrides the predicate body.

    // mention Subgoal to shut up the warning.
    MR_fatal_error("table_mm_answer_is_not_duplicate_shortcut: direct call");


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__table_builtin__table_mm_answer_is_not_duplicate_1_p_0(
  MR_Box TrieNode_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_answer_is_not_duplicate_1_p_0

	MR_TrieNode TrieNode;
	MR_bool SUCCESS_INDICATOR;

	TrieNode = (MR_TrieNode) TrieNode_1 ;
		{

    MR_tbl_mm_answer_is_not_duplicate(MR_TABLE_DEBUG_BOOL, TrieNode,
        SUCCESS_INDICATOR);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin__table_mm_get_answer_table_2_p_0(
  MR_Box Subgoal_1,
  MR_Box * AnswerTable_2)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_get_answer_table_2_p_0

	MR_SubgoalPtr Subgoal;
	MR_TrieNode AnswerTable;

	Subgoal = (MR_SubgoalPtr) Subgoal_1 ;
		{

    MR_tbl_mm_get_answer_table(MR_TABLE_DEBUG_BOOL, Subgoal, AnswerTable);


		;}
#undef MR_PROC_LABEL
	 *AnswerTable_2  = (MR_Box) AnswerTable;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_mm_completion_1_p_0(
  MR_Box HeadVar__1_1);

void MR_CALL 
mercury__table_builtin__table_mm_suspend_consumer_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

void MR_CALL 
mercury__table_builtin__table_mm_setup_3_p_0(
  MR_Box T_1,
  MR_Box * Subgoal_2,
  MR_Word * Status_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_mm_setup_3_p_0

	MR_TrieNode T;
	MR_SubgoalPtr Subgoal;
	MR_Word Status;

	T = (MR_TrieNode) T_1 ;
		{

    MR_tbl_mm_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Subgoal, Status);


		;}
#undef MR_PROC_LABEL
	 *Subgoal_2  = (MR_Box) Subgoal;
	 *Status_3  = Status;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_io_right_bracket_unitized_goal_1_p_0(
  MR_Integer TraceEnabled_1)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_io_right_bracket_unitized_goal_1_p_0

	MR_Integer TraceEnabled;

	TraceEnabled =  TraceEnabled_1 ;
		{

    MR_tbl_io_right_bracket_unitized_goal(TraceEnabled);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_io_left_bracket_unitized_goal_1_p_0(
  MR_Integer * TraceEnabled_1)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_io_left_bracket_unitized_goal_1_p_0

	MR_Integer TraceEnabled;

		{

    MR_tbl_io_left_bracket_unitized_goal(TraceEnabled);


		;}
#undef MR_PROC_LABEL
	 *TraceEnabled_1  = TraceEnabled;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_io_copy_io_state_2_p_0(void)
{
  {
  }
}

MR_bool MR_CALL 
mercury__table_builtin__table_io_has_occurred_1_p_0(
  MR_Box T_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_io_has_occurred_1_p_0

	MR_TrieNode T;
	MR_bool SUCCESS_INDICATOR;

	T = (MR_TrieNode) T_1 ;
		{

    MR_tbl_io_has_occurred(MR_TABLE_DEBUG_BOOL, T, SUCCESS_INDICATOR);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__table_builtin__table_io_in_range_3_p_0(
  MR_Box * T_1,
  MR_Integer * Counter_2,
  MR_Integer * Start_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_io_in_range_3_p_0

	MR_TrieNode T;
	MR_Integer Counter;
	MR_Integer Start;
	MR_bool SUCCESS_INDICATOR;

		{

    MR_tbl_io_in_range(MR_TABLE_DEBUG_BOOL, T, Counter, Start,
        SUCCESS_INDICATOR);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *T_1  = (MR_Box) T;
	 *Counter_2  = Counter;
	 *Start_3  = Start;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_non_return_all_shortcut_1_p_0(
  MR_Box R_1)
{
  {
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_return_all_answers_multi_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

void MR_CALL 
mercury__table_builtin__table_memo_return_all_answers_nondet_2_p_0(
  MR_Box HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

void MR_CALL 
mercury__table_builtin__table_memo_non_create_answer_block_shortcut_1_p_0(
  MR_Box R_1)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_create_answer_block_shortcut_1_p_0

	MR_MemoNonRecordPtr R;

	R = (MR_MemoNonRecordPtr) R_1 ;
		{

    MR_tbl_memo_non_create_answer_block_shortcut(R::in);


		;}
#undef MR_PROC_LABEL
}
  }
}

MR_bool MR_CALL 
mercury__table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_p_0(
  MR_Box R_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_answer_is_not_duplicate_shortcut_1_p_0

	MR_MemoNonRecordPtr R;
	MR_bool SUCCESS_INDICATOR;

	R = (MR_MemoNonRecordPtr) R_1 ;
		{

    MR_tbl_memo_non_answer_is_not_duplicate_shortcut(R,
        SUCCESS_INDICATOR);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__table_builtin__table_memo_non_answer_is_not_duplicate_1_p_0(
  MR_Box T_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_answer_is_not_duplicate_1_p_0

	MR_TrieNode T;
	MR_bool SUCCESS_INDICATOR;

	T = (MR_TrieNode) T_1 ;
		{

    MR_tbl_memo_non_answer_is_not_duplicate(MR_TABLE_DEBUG_BOOL,
        T, SUCCESS_INDICATOR);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_non_get_answer_table_2_p_0(
  MR_Box R_1,
  MR_Box * AT_2)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_get_answer_table_2_p_0

	MR_MemoNonRecordPtr R;
	MR_TrieNode AT;

	R = (MR_MemoNonRecordPtr) R_1 ;
		{

    MR_tbl_memo_non_get_answer_table(MR_TABLE_DEBUG_BOOL, R, AT);


		;}
#undef MR_PROC_LABEL
	 *AT_2  = (MR_Box) AT;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_get_answer_block_shortcut_1_p_0(
  MR_Box T_1)
{
  {
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_get_answer_block_2_p_0(
  MR_Box T_1,
  MR_Box * AnswerBlock_2)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_get_answer_block_2_p_0

	MR_TrieNode T;
	MR_AnswerBlock AnswerBlock;

	T = (MR_TrieNode) T_1 ;
		{

    MR_tbl_memo_get_answer_block(MR_TABLE_DEBUG_BOOL, T, AnswerBlock);


		;}
#undef MR_PROC_LABEL
	 *AnswerBlock_2  = (MR_Box) AnswerBlock;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_fill_answer_block_shortcut_1_p_0(
  MR_Box T_1)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_fill_answer_block_shortcut_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) T_1 ;
		{

    MR_tbl_memo_fill_answer_block_shortcut(T);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_create_answer_block_3_p_0(
  MR_Box T_1,
  MR_Integer Size_2,
  MR_Box * AnswerBlock_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_create_answer_block_3_p_0

	MR_TrieNode T;
	MR_Integer Size;
	MR_AnswerBlock AnswerBlock;

	T = (MR_TrieNode) T_1 ;
	Size =  Size_2 ;
		{

    MR_tbl_memo_create_answer_block(MR_TABLE_DEBUG_BOOL,
        T, Size, AnswerBlock);


		;}
#undef MR_PROC_LABEL
	 *AnswerBlock_3  = (MR_Box) AnswerBlock;
}
  }
}

MR_bool MR_CALL 
mercury__table_builtin__table_memo_mark_as_complete_and_fail_1_p_0(
  MR_Box R_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_complete_and_fail_1_p_0

	MR_MemoNonRecordPtr R;

	R = (MR_MemoNonRecordPtr) R_1 ;
		{

    MR_tbl_memo_mark_as_complete_and_fail(MR_TABLE_DEBUG_BOOL, R);


		;}
#undef MR_PROC_LABEL
succeeded  = MR_FALSE;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__table_builtin__table_memo_mark_as_active_and_fail_1_p_0(
  MR_Box R_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_active_and_fail_1_p_0

	MR_MemoNonRecordPtr R;

	R = (MR_MemoNonRecordPtr) R_1 ;
		{

    MR_tbl_memo_mark_as_active_and_fail(MR_TABLE_DEBUG_BOOL, R);


		;}
#undef MR_PROC_LABEL
succeeded  = MR_FALSE;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_mark_as_incomplete_1_p_0(
  MR_Box R_1)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_incomplete_1_p_0

	MR_MemoNonRecordPtr R;

	R = (MR_MemoNonRecordPtr) R_1 ;
		{

    MR_tbl_memo_mark_as_incomplete(MR_TABLE_DEBUG_BOOL, R);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_mark_as_succeeded_1_p_0(
  MR_Box T_1)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_succeeded_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) T_1 ;
		{

    MR_tbl_memo_mark_as_succeeded(MR_TABLE_DEBUG_BOOL, T);


		;}
#undef MR_PROC_LABEL
}
  }
}

MR_bool MR_CALL 
mercury__table_builtin__table_memo_mark_as_failed_1_p_0(
  MR_Box T_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_mark_as_failed_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) T_1 ;
		{

    MR_tbl_memo_mark_as_failed(MR_TABLE_DEBUG_BOOL, T);


		;}
#undef MR_PROC_LABEL
succeeded  = MR_FALSE;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_non_setup_3_p_0(
  MR_Box T0_1,
  MR_Box * Record_2,
  MR_Word * Status_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_non_setup_3_p_0

	MR_TrieNode T0;
	MR_MemoNonRecordPtr Record;
	MR_Word Status;

	T0 = (MR_TrieNode) T0_1 ;
		{

    MR_tbl_memo_non_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T0, Record, Status);


		;}
#undef MR_PROC_LABEL
	 *Record_2  = (MR_Box) Record;
	 *Status_3  = Status;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_semi_setup_shortcut_3_p_0(
  MR_Box T0_1,
  MR_Box * T_2,
  MR_Word * Status_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_semi_setup_shortcut_3_p_0

	MR_TrieNode T0;
	MR_TrieNode T;
	MR_Word Status;

	T0 = (MR_TrieNode) T0_1 ;
		{

    MR_tbl_memo_semi_setup_shortcut(T0, T, Status);


		;}
#undef MR_PROC_LABEL
	 *T_2  = (MR_Box) T;
	 *Status_3  = Status;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_semi_setup_2_p_0(
  MR_Box T_1,
  MR_Word * Status_2)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_semi_setup_2_p_0

	MR_TrieNode T;
	MR_Word Status;

	T = (MR_TrieNode) T_1 ;
		{

    MR_tbl_memo_semi_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);


		;}
#undef MR_PROC_LABEL
	 *Status_2  = Status;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_det_setup_shortcut_3_p_0(
  MR_Box T0_1,
  MR_Box * T_2,
  MR_Word * Status_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_det_setup_shortcut_3_p_0

	MR_TrieNode T0;
	MR_TrieNode T;
	MR_Word Status;

	T0 = (MR_TrieNode) T0_1 ;
		{

    MR_tbl_memo_det_setup_shortcut(T0, T, Status);


		;}
#undef MR_PROC_LABEL
	 *T_2  = (MR_Box) T;
	 *Status_3  = Status;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_memo_det_setup_2_p_0(
  MR_Box T_1,
  MR_Word * Status_2)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_memo_det_setup_2_p_0

	MR_TrieNode T;
	MR_Word Status;

	T = (MR_TrieNode) T_1 ;
		{

    MR_tbl_memo_det_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);


		;}
#undef MR_PROC_LABEL
	 *Status_2  = Status;
}
  }
}

MR_bool MR_CALL 
mercury__table_builtin__table_loop_mark_as_active_and_fail_1_p_0(
  MR_Box T_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_mark_as_active_and_fail_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) T_1 ;
		{

    MR_tbl_loop_mark_as_active_and_fail(MR_TABLE_DEBUG_BOOL, T);


		;}
#undef MR_PROC_LABEL
succeeded  = MR_FALSE;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__table_builtin__table_loop_mark_as_inactive_and_fail_1_p_0(
  MR_Box T_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_mark_as_inactive_and_fail_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) T_1 ;
		{

    MR_tbl_loop_mark_as_inactive_and_fail(MR_TABLE_DEBUG_BOOL, T);


		;}
#undef MR_PROC_LABEL
succeeded  = MR_FALSE;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__table_builtin__table_loop_mark_as_inactive_1_p_0(
  MR_Box T_1)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_mark_as_inactive_1_p_0

	MR_TrieNode T;

	T = (MR_TrieNode) T_1 ;
		{

    MR_tbl_loop_mark_as_inactive(MR_TABLE_DEBUG_BOOL, T);


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__table_builtin__table_loop_setup_shortcut_3_p_0(
  MR_Box T0_1,
  MR_Box * T_2,
  MR_Word * Status_3)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_setup_shortcut_3_p_0

	MR_TrieNode T0;
	MR_TrieNode T;
	MR_Word Status;

	T0 = (MR_TrieNode) T0_1 ;
		{

    MR_tbl_loop_setup_shortcut(T0, T, Status);


		;}
#undef MR_PROC_LABEL
	 *T_2  = (MR_Box) T;
	 *Status_3  = Status;
}
  }
}

void MR_CALL 
mercury__table_builtin__table_loop_setup_2_p_0(
  MR_Box T_1,
  MR_Word * Status_2)
{
  {
{
#define MR_PROC_LABEL mercury__table_builtin__table_loop_setup_2_p_0

	MR_TrieNode T;
	MR_Word Status;

	T = (MR_TrieNode) T_1 ;
		{

    MR_tbl_loop_setup(MR_TABLE_DEBUG_BOOL, MR_FALSE, T, Status);


		;}
#undef MR_PROC_LABEL
	 *Status_2  = Status;
}
  }
}

static MR_bool MR_CALL 
mercury__table_builtin____Unify____loop_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__table_builtin____Unify____loop_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__table_builtin____Compare____loop_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__table_builtin____Compare____loop_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_det_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__table_builtin____Unify____memo_det_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__table_builtin____Compare____memo_det_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__table_builtin____Compare____memo_det_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_record_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__table_builtin____Unify____memo_non_record_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__table_builtin____Compare____memo_non_record_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__table_builtin____Compare____memo_non_record_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_non_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__table_builtin____Unify____memo_non_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__table_builtin____Compare____memo_non_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__table_builtin____Compare____memo_non_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_builtin____Unify____memo_semi_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__table_builtin____Unify____memo_semi_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__table_builtin____Compare____memo_semi_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__table_builtin____Compare____memo_semi_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_block_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__table_builtin____Unify____ml_answer_block_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__table_builtin____Compare____ml_answer_block_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__table_builtin____Compare____ml_answer_block_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_answer_list_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__table_builtin____Unify____ml_answer_list_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__table_builtin____Compare____ml_answer_list_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__table_builtin____Compare____ml_answer_list_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_consumer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__table_builtin____Unify____ml_consumer_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__table_builtin____Compare____ml_consumer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__table_builtin____Compare____ml_consumer_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_generator_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__table_builtin____Unify____ml_generator_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__table_builtin____Compare____ml_generator_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__table_builtin____Compare____ml_generator_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_proc_table_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__table_builtin____Unify____ml_proc_table_info_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__table_builtin____Compare____ml_proc_table_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__table_builtin____Compare____ml_proc_table_info_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_subgoal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__table_builtin____Unify____ml_subgoal_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__table_builtin____Compare____ml_subgoal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__table_builtin____Compare____ml_subgoal_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_builtin____Unify____ml_trie_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__table_builtin____Unify____ml_trie_node_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__table_builtin____Compare____ml_trie_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__table_builtin____Compare____ml_trie_node_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__table_builtin____Unify____mm_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__table_builtin____Unify____mm_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__table_builtin____Compare____mm_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__table_builtin____Compare____mm_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__table_builtin__init(void)
{
}

void mercury__table_builtin__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_loop_status_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_memo_det_status_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_memo_non_record_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_memo_non_status_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_memo_semi_status_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_answer_block_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_answer_list_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_consumer_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_generator_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_proc_table_info_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_subgoal_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_ml_trie_node_0);
	MR_register_type_ctor_info(&mercury__table_builtin__table_builtin__type_ctor_info_mm_status_0);
}

void mercury__table_builtin__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__table_builtin__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module table_builtin.
