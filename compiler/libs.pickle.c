/*
** Automatically generated from `pickle.m'
** by the Mercury compiler,
** version rotd-2023-06-12
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


// :- module libs.pickle.
// :- implementation.

/*
INIT mercury__libs__pickle__init
ENDINIT
*/

#include "libs.pickle.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exception.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_Integer libs__pickle__libs__pickle__functor_number_map_get_byte_out_of_range_0[1];

static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_get_byte_out_of_range_0;

static const MR_VA_TypeInfo_Struct5 libs__pickle____vti_pred_5io__type_ctor_info_binary_output_stream_0libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_Integer libs__pickle__libs__pickle__functor_number_map_picklers_0[1];

static const MR_FA_TypeInfo_Struct2 libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_5io__type_ctor_info_binary_output_stream_0libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_picklers_0;

static const MR_VA_TypeInfo_Struct6 libs__pickle____vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_Integer libs__pickle__libs__pickle__functor_number_map_unpicklers_0[1];

static const MR_FA_TypeInfo_Struct2 libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_unpicklers_0;

static void MR_CALL 
libs__pickle__IntroducedFrom__pred__unpickle_from_file__240__1_4_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word Unpicklers_6,
  MR_Box Bitmap_13,
  MR_Box * LambdaHeadVar__1_27);

static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
libs__pickle__reinterpret_ints_as_float_3_p_0(
  MR_Integer A_1,
  MR_Integer B_2,
  MR_Float * Flt_3);

static void MR_CALL 
libs__pickle__reinterpret_float_as_ints_3_p_0(
  MR_Float Flt_1,
  MR_Integer * A_2,
  MR_Integer * B_3);

static void MR_CALL 
libs__pickle__local_unsafe_set_char_4_p_0(
  MR_Char Chr_1,
  MR_Integer Index_2,
  MR_String Str0_3,
  MR_String * Str_4);

static void MR_CALL 
libs__pickle__allocate_string_2_p_0(
  MR_Integer Length_1,
  MR_String * Str_2);

static void MR_CALL 
libs__pickle__pickle_char_4_p_0(
  MR_Word OutputStream_5,
  MR_Char Char_6);

static void MR_CALL 
libs__pickle__unpickler_inst_cast_2_p_0(
  MR_Word A_1,
  MR_Word * B_2);

static void MR_CALL 
libs__pickle__pickler_inst_cast_2_p_0(
  MR_Word A_1,
  MR_Word * B_2);

static void MR_CALL 
libs__pickle__unpickle_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
libs__pickle__unpickle_2_6_p_0(
  MR_Word Unpicklers_7,
  MR_Box Handle_8,
  MR_Word TypeDesc_9,
  MR_Word * Univ_10,
  MR_Integer STATE_VARIABLE_State_0_29,
  MR_Integer * STATE_VARIABLE_State_30);

static void MR_CALL 
libs__pickle__unpickle_string_2_7_p_0(
  MR_Box Handle_8,
  MR_Integer Index_9,
  MR_Integer Length_10,
  MR_String STATE_VARIABLE_String_0_14,
  MR_String * STATE_VARIABLE_String_15,
  MR_Integer STATE_VARIABLE_State_0_16,
  MR_Integer * STATE_VARIABLE_State_17);

static void MR_CALL 
libs__pickle__unpickle_int32_4_p_0(
  MR_Box Handle_5,
  MR_Integer * Int_6,
  MR_Integer STATE_VARIABLE_State_0_13,
  MR_Integer * STATE_VARIABLE_State_14);

static void MR_CALL 
libs__pickle__unpickle_from_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
libs__pickle__pickle_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__pickle__pickle_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__pickle__pickle_args_7_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word OutputStream_8,
  MR_Word Pickles_9,
  MR_Integer N_10,
  MR_Integer Arity_11,
  MR_Box T_12);

static void MR_CALL 
libs__pickle__pickle_float_4_p_0(
  MR_Word OutputStream_5,
  MR_Float Float_6);

static void MR_CALL 
libs__pickle__pickle_int32_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Int_6);

static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__pickle____Unify____pickler_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____pickler_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__pickle____Unify____picklers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____picklers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_handle_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____unpickle_handle_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____unpickle_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__pickle____Unify____unpickler_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____unpickler_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
libs__pickle____Unify____unpicklers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____unpicklers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box libs__pickle_scalar_common_1[3][7];

static /* final */ const MR_Box libs__pickle_scalar_common_2[1][8];

static /* final */ const MR_Box libs__pickle_scalar_common_3[2][3];

static /* final */ const MR_Integer libs__pickle_scalar_common_4[1][2];

static /* final */ const MR_Box libs__pickle_scalar_common_5[1][9];




static /* final */ const MR_Box libs__pickle_scalar_common_1[3][7] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_output_stream_0)),
    ((MR_Box) (&libs__pickle__libs__pickle__type_ctor_info_picklers_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_binary_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (&libs__pickle_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&libs__pickle__libs__pickle__type_ctor_info_unpicklers_0)),
    ((MR_Box) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box libs__pickle_scalar_common_2[1][8] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__pickle__libs__pickle__type_ctor_info_unpicklers_0)),
    ((MR_Box) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box libs__pickle_scalar_common_3[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0)),
    ((MR_Box) (&libs__pickle_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0)),
    ((MR_Box) (&libs__pickle_scalar_common_2[0]))
  },
};

static /* final */ const MR_Integer libs__pickle_scalar_common_4[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box libs__pickle_scalar_common_5[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__pickle__libs__pickle__type_ctor_info_unpicklers_0)),
    ((MR_Box) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "libs.pickle.mh"


static const MR_Integer libs__pickle__libs__pickle__functor_number_map_get_byte_out_of_range_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_get_byte_out_of_range_0 = {
  (MR_String) "get_byte_out_of_range",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (libs__pickle____Unify____get_byte_out_of_range_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____get_byte_out_of_range_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "get_byte_out_of_range",
  { &libs__pickle__libs__pickle__notag_functor_desc_get_byte_out_of_range_0 },
  { &libs__pickle__libs__pickle__notag_functor_desc_get_byte_out_of_range_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  libs__pickle__libs__pickle__functor_number_map_get_byte_out_of_range_0,

};

static const MR_VA_TypeInfo_Struct5 libs__pickle____vti_pred_5io__type_ctor_info_binary_output_stream_0libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_binary_output_stream_0),
    (MR_TypeInfo) (&libs__pickle__libs__pickle__type_ctor_info_picklers_0),
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_pickler_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__pickle____Unify____pickler_pred_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____pickler_pred_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "pickler_pred",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__pickle____vti_pred_5io__type_ctor_info_binary_output_stream_0libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer libs__pickle__libs__pickle__functor_number_map_picklers_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct2 libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_5io__type_ctor_info_binary_output_stream_0libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0),
    (MR_TypeInfo) (&libs__pickle____vti_pred_5io__type_ctor_info_binary_output_stream_0libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0)
  }
};

static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_picklers_0 = {
  (MR_String) "picklers",
  (MR_PseudoTypeInfo) (&libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_5io__type_ctor_info_binary_output_stream_0libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_picklers_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (libs__pickle____Unify____picklers_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____picklers_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "picklers",
  { &libs__pickle__libs__pickle__notag_functor_desc_picklers_0 },
  { &libs__pickle__libs__pickle__notag_functor_desc_picklers_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  libs__pickle__libs__pickle__functor_number_map_picklers_0,

};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_unpickle_handle_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__pickle____Unify____unpickle_handle_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____unpickle_handle_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "unpickle_handle",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_unpickle_state_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__pickle____Unify____unpickle_state_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____unpickle_state_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "unpickle_state",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_TypeInfo_Struct6 libs__pickle____vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_TypeInfo) (&libs__pickle__libs__pickle__type_ctor_info_unpicklers_0),
    (MR_TypeInfo) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0),
    (MR_TypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0),
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_unpickler_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__pickle____Unify____unpickler_pred_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____unpickler_pred_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "unpickler_pred",
  { NULL },
  { (MR_PseudoTypeInfo) (&libs__pickle____vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer libs__pickle__libs__pickle__functor_number_map_unpicklers_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct2 libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0),
    (MR_TypeInfo) (&libs__pickle____vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0)
  }
};

static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_unpicklers_0 = {
  (MR_String) "unpicklers",
  (MR_PseudoTypeInfo) (&libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_unpicklers_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (libs__pickle____Unify____unpicklers_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____unpicklers_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "unpicklers",
  { &libs__pickle__libs__pickle__notag_functor_desc_unpicklers_0 },
  { &libs__pickle__libs__pickle__notag_functor_desc_unpicklers_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  libs__pickle__libs__pickle__functor_number_map_unpicklers_0,

};

static void MR_CALL 
libs__pickle__IntroducedFrom__pred__unpickle_from_file__240__1_4_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word Unpicklers_6,
  MR_Box Bitmap_13,
  MR_Box * LambdaHeadVar__1_27)
{
  MR_Word Univ_34;
  MR_Word Var_35;
  MR_Integer _State_16;

  Var_35 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_33);
  libs__pickle__unpickle_2_6_p_0(Unpicklers_6, Bitmap_13, Var_35, &Univ_34, (MR_Integer) 0, &_State_16);
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_33, Univ_34, LambdaHeadVar__1_27);
}

void MR_CALL 
libs__pickle____Compare____unpicklers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__pickle_scalar_common_3[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
libs__pickle____Unify____unpicklers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__pickle_scalar_common_3[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
libs__pickle____Compare____unpickler_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__pickle_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
libs__pickle____Unify____unpickler_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
libs__pickle____Compare____unpickle_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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
libs__pickle____Unify____unpickle_state_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
libs__pickle____Compare____unpickle_handle_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Box Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Box Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__bitmap____Compare____bitmap_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
libs__pickle____Unify____unpickle_handle_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Box Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Box Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__bitmap____Unify____bitmap_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
libs__pickle____Compare____picklers_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__pickle_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
libs__pickle____Unify____picklers_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__pickle_scalar_common_3[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
libs__pickle____Compare____pickler_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&libs__pickle_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
libs__pickle____Unify____pickler_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
  return succeeded;
}

static void MR_CALL 
libs__pickle__reinterpret_ints_as_float_3_p_0(
  MR_Integer A_1,
  MR_Integer B_2,
  MR_Float * Flt_3)
{
{
#define MR_PROC_LABEL libs__pickle__reinterpret_ints_as_float_3_p_0

	MR_Integer A;
	MR_Integer B;
	MR_Float Flt;

	A = A_1 ;
	B = B_2 ;
		{

    if (sizeof(MR_Float) == sizeof(float)) {
        MR_Float    *p;

        p = (MR_Float *) &A;
        Flt = *p;
        (void) B;
    } else {
        MR_uint_least64_t   tmp;
        MR_Float            *p;

        tmp = (((MR_uint_least64_t) A) << 32) |
            (((MR_uint_least64_t) B) & 0xffffffff);
        p = (MR_Float *) &tmp;
        Flt = *p;
    }


		;}
#undef MR_PROC_LABEL
	*Flt_3  = Flt;
}
}

static void MR_CALL 
libs__pickle__reinterpret_float_as_ints_3_p_0(
  MR_Float Flt_1,
  MR_Integer * A_2,
  MR_Integer * B_3)
{
{
#define MR_PROC_LABEL libs__pickle__reinterpret_float_as_ints_3_p_0

	MR_Float Flt;
	MR_Integer A;
	MR_Integer B;

	Flt = Flt_1 ;
		{

    if (sizeof(MR_Float) == sizeof(float)) {
        MR_uint_least32_t   *p;

        p = (MR_uint_least32_t *) &Flt;
        A = *p;
        B = 0;
    } else {
        MR_uint_least64_t   *p;

        p = (MR_uint_least64_t *) &Flt;
        A = (*p >> 32) & 0xffffffff;
        B = (*p >>  0) & 0xffffffff;
    }


		;}
#undef MR_PROC_LABEL
	*A_2  = A;
	*B_3  = B;
}
}

static void MR_CALL 
libs__pickle__local_unsafe_set_char_4_p_0(
  MR_Char Chr_1,
  MR_Integer Index_2,
  MR_String Str0_3,
  MR_String * Str_4)
{
{
#define MR_PROC_LABEL libs__pickle__local_unsafe_set_char_4_p_0

	MR_Char Chr;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;

	Chr = Chr_1 ;
	Index = Index_2 ;
	Str0 = Str0_3 ;
		{

    Str0[Index] = Chr;
    Str = Str0;


		;}
#undef MR_PROC_LABEL
	*Str_4  = Str;
}
}

static void MR_CALL 
libs__pickle__allocate_string_2_p_0(
  MR_Integer Length_1,
  MR_String * Str_2)
{
{
#define MR_PROC_LABEL libs__pickle__allocate_string_2_p_0

	MR_Integer Length;
	MR_String Str;

	Length = Length_1 ;
		{

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';


		;}
#undef MR_PROC_LABEL
	*Str_2  = Str;
}
}

static void MR_CALL 
libs__pickle__pickle_char_4_p_0(
  MR_Word OutputStream_5,
  MR_Char Char_6)
{
  MR_Integer Int_8;

  mercury__char__to_int_2_p_0(Char_6, &Int_8);
  mercury__io__write_byte_4_p_0(OutputStream_5, Int_8);
}

static void MR_CALL 
libs__pickle__unpickler_inst_cast_2_p_0(
  MR_Word A_1,
  MR_Word * B_2)
{
{
#define MR_PROC_LABEL libs__pickle__unpickler_inst_cast_2_p_0

	MR_Word A;
	MR_Word B;

	A = A_1 ;
		{

    B = A;


		;}
#undef MR_PROC_LABEL
	*B_2  = B;
}
}

static void MR_CALL 
libs__pickle__pickler_inst_cast_2_p_0(
  MR_Word A_1,
  MR_Word * B_2)
{
{
#define MR_PROC_LABEL libs__pickle__pickler_inst_cast_2_p_0

	MR_Word A;
	MR_Word B;

	A = A_1 ;
		{

    B = A;


		;}
#undef MR_PROC_LABEL
	*B_2  = B;
}
}

void MR_CALL 
libs__pickle__unpickle_5_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word Unpicklers_6,
  MR_Box Handle_7,
  MR_Box * T_8,
  MR_Integer STATE_VARIABLE_State_0_11,
  MR_Integer * STATE_VARIABLE_State_12)
{
  MR_Word Univ_10;
  MR_Word Var_13;

  Var_13 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_14);
  libs__pickle__unpickle_2_6_p_0(Unpicklers_6, Handle_7, Var_13, &Univ_10, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
  mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_14, Univ_10, T_8);
}

static void MR_CALL 
libs__pickle__unpickle_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Univ_10;
  MR_Integer conv4_STATE_VARIABLE_State_30;

  libs__pickle__unpickle_2_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Box) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv5_Univ_10, ((MR_Integer) (wrapper_arg_3)), &conv4_STATE_VARIABLE_State_30);
  *wrapper_arg_2 = ((MR_Box) (conv5_Univ_10));
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_State_30));
}

static void MR_CALL 
libs__pickle__unpickle_2_6_p_0(
  MR_Word Unpicklers_7,
  MR_Box Handle_8,
  MR_Word TypeDesc_9,
  MR_Word * Univ_10,
  MR_Integer STATE_VARIABLE_State_0_29,
  MR_Integer * STATE_VARIABLE_State_30)
{
  MR_bool succeeded;
  MR_Word Var_64;

  Var_64 = mercury__type_desc__type_of_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_9, Var_64);
  if (succeeded)
  {
    MR_String String_13;
    MR_Integer Length_72;
    MR_String String0_73;
    MR_Integer STATE_VARIABLE_State_12_74;

    libs__pickle__unpickle_int32_4_p_0(Handle_8, &Length_72, STATE_VARIABLE_State_0_29, &STATE_VARIABLE_State_12_74);
{
#define MR_PROC_LABEL libs__pickle__unpickle_2_6_p_0

	MR_Integer Length;
	MR_String Str;

	Length = Length_72 ;
		{

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';


		;}
#undef MR_PROC_LABEL
	String0_73  = Str;
}
    libs__pickle__unpickle_string_2_7_p_0(Handle_8, (MR_Integer) 0, Length_72, String0_73, &String_13, STATE_VARIABLE_State_12_74, STATE_VARIABLE_State_30);
    *Univ_10 = mercury__univ__univ_1_f_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (String_13)));
  }
  else
  {
    MR_Word Var_65;

    Var_65 = mercury__type_desc__type_of_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_9, Var_65);
    if (succeeded)
    {
      MR_Integer Int_15;

      libs__pickle__unpickle_int32_4_p_0(Handle_8, &Int_15, STATE_VARIABLE_State_0_29, STATE_VARIABLE_State_30);
      *Univ_10 = mercury__univ__univ_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Int_15)));
    }
    else
    {
      MR_Word Var_66;

      Var_66 = mercury__type_desc__type_of_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0));
      succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_9, Var_66);
      if (succeeded)
      {
        MR_Float Float_17;
        MR_Integer A_76;
        MR_Integer B_77;
        MR_Integer STATE_VARIABLE_State_12_78;

        libs__pickle__unpickle_int32_4_p_0(Handle_8, &A_76, STATE_VARIABLE_State_0_29, &STATE_VARIABLE_State_12_78);
        libs__pickle__unpickle_int32_4_p_0(Handle_8, &B_77, STATE_VARIABLE_State_12_78, STATE_VARIABLE_State_30);
{
#define MR_PROC_LABEL libs__pickle__unpickle_2_6_p_0

	MR_Integer A;
	MR_Integer B;
	MR_Float Flt;

	A = A_76 ;
	B = B_77 ;
		{

    if (sizeof(MR_Float) == sizeof(float)) {
        MR_Float    *p;

        p = (MR_Float *) &A;
        Flt = *p;
        (void) B;
    } else {
        MR_uint_least64_t   tmp;
        MR_Float            *p;

        tmp = (((MR_uint_least64_t) A) << 32) |
            (((MR_uint_least64_t) B) & 0xffffffff);
        p = (MR_Float *) &tmp;
        Flt = *p;
    }


		;}
#undef MR_PROC_LABEL
	Float_17  = Flt;
}
        *Univ_10 = mercury__univ__univ_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), MR_box_float(Float_17));
      }
      else
      {
        MR_Word Var_67;

        Var_67 = mercury__type_desc__type_of_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0));
        succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_9, Var_67);
        if (succeeded)
        {
          MR_Char Char_19;
          MR_Integer Byte_79;

          *STATE_VARIABLE_State_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_State_0_29 + (MR_Unsigned) 1);
          succeeded = mercury__bitmap__byte_in_range_2_p_0(Handle_8, STATE_VARIABLE_State_0_29);
          if (succeeded)
            Byte_79 = mercury__bitmap__unsafe_byte_2_f_0(STATE_VARIABLE_State_0_29, Handle_8);
          else
          {
            MR_String Msg_80;
            MR_String Var_83;
            MR_String Var_84;
            MR_Word Var_86;

            Var_84 = mercury__string__from_int_1_f_0(STATE_VARIABLE_State_0_29);
            Var_83 = mercury__string__f_43_43_2_f_0(Var_84, (MR_String) " is out of range");
            Msg_80 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", Var_83);
            Var_86 = (MR_Word) (Msg_80);
            {
              mercury__exception__throw_1_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), ((MR_Box) (Var_86)));
              return;
            }
          }
          mercury__char__det_from_int_2_p_0(Byte_79, &Char_19);
          *Univ_10 = mercury__univ__univ_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), ((MR_Box) (MR_Word) (Char_19)));
        }
        else
        {
          MR_Word Unpickle_20;
          MR_Word Var_39;
          MR_Word Unpicklers_88;
          MR_Word Unpickle0_89;
          MR_Box conv0_Unpickle0_89;

          Var_39 = mercury__type_desc__type_ctor_1_f_0(TypeDesc_9);
          Unpicklers_88 = (MR_Word) (Unpicklers_7);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), (MR_Word) (&libs__pickle_scalar_common_2[0]), Unpicklers_88, ((MR_Box) (Var_39)), &conv0_Unpickle0_89);
          if (succeeded)
          {
            Unpickle0_89 = ((MR_Word) (conv0_Unpickle0_89));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
{
#define MR_PROC_LABEL libs__pickle__unpickle_2_6_p_0

	MR_Word A;
	MR_Word B;

	A = Unpickle0_89 ;
		{

    B = A;


		;}
#undef MR_PROC_LABEL
	Unpickle_20  = B;
}
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Unpickle_20, (MR_Integer) 1))));
            MR_Box conv3_Univ_10;
            MR_Box conv2_STATE_VARIABLE_State_30;

            func_1(((MR_Box) (Unpickle_20)), ((MR_Box) (Unpicklers_7)), ((MR_Box) (Handle_8)), ((MR_Box) (TypeDesc_9)), &conv3_Univ_10, ((MR_Box) (STATE_VARIABLE_State_0_29)), &conv2_STATE_VARIABLE_State_30);
            *Univ_10 = ((MR_Word) (conv3_Univ_10));
            *STATE_VARIABLE_State_30 = ((MR_Integer) (conv2_STATE_VARIABLE_State_30));
          }
          else
          {
            MR_String Functor_21;
            MR_Integer Arity_22;
            MR_Integer STATE_VARIABLE_State_41_41;
            MR_Integer STATE_VARIABLE_State_42_42;
            MR_Integer Length_92;
            MR_String String0_93;
            MR_Integer STATE_VARIABLE_State_12_94;
            MR_Word IsTuple_23;
            MR_Word ArgTypes_25;
            MR_Integer N_26;

            libs__pickle__unpickle_int32_4_p_0(Handle_8, &Length_92, STATE_VARIABLE_State_0_29, &STATE_VARIABLE_State_12_94);
{
#define MR_PROC_LABEL libs__pickle__unpickle_2_6_p_0

	MR_Integer Length;
	MR_String Str;

	Length = Length_92 ;
		{

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';


		;}
#undef MR_PROC_LABEL
	String0_93  = Str;
}
            libs__pickle__unpickle_string_2_7_p_0(Handle_8, (MR_Integer) 0, Length_92, String0_93, &Functor_21, STATE_VARIABLE_State_12_94, &STATE_VARIABLE_State_41_41);
            libs__pickle__unpickle_int32_4_p_0(Handle_8, &Arity_22, STATE_VARIABLE_State_41_41, &STATE_VARIABLE_State_42_42);
            succeeded = (strcmp(Functor_21, (MR_String) "{}") == 0);
            if (succeeded)
            {
              MR_Word Var_24;

              IsTuple_23 = (MR_Integer) 1;
              mercury__type_desc__type_ctor_and_args_3_p_0(TypeDesc_9, &Var_24, &ArgTypes_25);
              N_26 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            else
            {
              IsTuple_23 = (MR_Integer) 0;
              succeeded = mercury__construct__find_functor_5_p_0(TypeDesc_9, Functor_21, Arity_22, &N_26, &ArgTypes_25);
            }
            if (succeeded)
            {
              MR_Word ArgUnivs_27;
              MR_Word Var_43;
              MR_Box conv6_STATE_VARIABLE_State_30;

              {
                Var_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_43, 0) = ((MR_Box) (&libs__pickle_scalar_common_5[0]));
                MR_hl_field(0, Var_43, 1) = ((MR_Box) (libs__pickle__unpickle_2_6_p_0_1));
                MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_43, 3) = ((MR_Box) (Unpicklers_7));
                MR_hl_field(0, Var_43, 4) = ((MR_Box) (Handle_8));
              }
              mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_desc_0), (MR_Word) (&mercury__univ__univ__type_ctor_info_univ_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_43, ArgTypes_25, &ArgUnivs_27, ((MR_Box) (STATE_VARIABLE_State_42_42)), &conv6_STATE_VARIABLE_State_30);
              *STATE_VARIABLE_State_30 = ((MR_Integer) (conv6_STATE_VARIABLE_State_30));
              switch (IsTuple_23) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Univ0_28;

                    succeeded = mercury__construct__construct_3_f_0(TypeDesc_9, N_26, ArgUnivs_27, &Univ0_28);
                    if (succeeded)
                      *Univ_10 = Univ0_28;
                    else
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.pickle.unpickle_2\'/6", (MR_String) "unable to construct");
                        return;
                      }
                  }
                  break;
                case (MR_Integer) 1:
                  *Univ_10 = mercury__construct__construct_tuple_1_f_0(ArgUnivs_27);
                  break;
              }
            }
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.pickle.unpickle_2\'/6", (MR_String) "unable to unpickle");
                return;
              }
          }
        }
      }
    }
  }
}

static void MR_CALL 
libs__pickle__unpickle_string_2_7_p_0(
  MR_Box Handle_8,
  MR_Integer Index_9,
  MR_Integer Length_10,
  MR_String STATE_VARIABLE_String_0_14,
  MR_String * STATE_VARIABLE_String_15,
  MR_Integer STATE_VARIABLE_State_0_16,
  MR_Integer * STATE_VARIABLE_State_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_9 == Length_10);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      *STATE_VARIABLE_State_17 = STATE_VARIABLE_State_0_16;
      *STATE_VARIABLE_String_15 = STATE_VARIABLE_String_0_14;
    }
    else
    {
      MR_Char Char_13;
      MR_Integer STATE_VARIABLE_State_18_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_State_0_16 + (MR_Unsigned) 1);
      MR_String STATE_VARIABLE_String_19_19;
      MR_Integer Var_20;
      MR_Integer Byte_24;
      MR_Integer next_value_of_Index_9;
      MR_String next_value_of_STATE_VARIABLE_String_0_14;
      MR_Integer next_value_of_STATE_VARIABLE_State_0_16;

      succeeded = mercury__bitmap__byte_in_range_2_p_0(Handle_8, STATE_VARIABLE_State_0_16);
      if (succeeded)
        Byte_24 = mercury__bitmap__unsafe_byte_2_f_0(STATE_VARIABLE_State_0_16, Handle_8);
      else
      {
        MR_String Msg_25;
        MR_String Var_28;
        MR_String Var_29;
        MR_Word Var_31;

        Var_29 = mercury__string__from_int_1_f_0(STATE_VARIABLE_State_0_16);
        Var_28 = mercury__string__f_43_43_2_f_0(Var_29, (MR_String) " is out of range");
        Msg_25 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", Var_28);
        Var_31 = (MR_Word) (Msg_25);
        {
          mercury__exception__throw_1_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), ((MR_Box) (Var_31)));
          return;
        }
      }
      mercury__char__det_from_int_2_p_0(Byte_24, &Char_13);
{
#define MR_PROC_LABEL libs__pickle__unpickle_string_2_7_p_0

	MR_Char Chr;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;

	Chr = Char_13 ;
	Index = Index_9 ;
	Str0 = STATE_VARIABLE_String_0_14 ;
		{

    Str0[Index] = Chr;
    Str = Str0;


		;}
#undef MR_PROC_LABEL
	STATE_VARIABLE_String_19_19  = Str;
}
      Var_20 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_9 = Var_20;
      next_value_of_STATE_VARIABLE_String_0_14 = STATE_VARIABLE_String_19_19;
      next_value_of_STATE_VARIABLE_State_0_16 = STATE_VARIABLE_State_18_18;
      Index_9 = next_value_of_Index_9;
      STATE_VARIABLE_String_0_14 = next_value_of_STATE_VARIABLE_String_0_14;
      STATE_VARIABLE_State_0_16 = next_value_of_STATE_VARIABLE_State_0_16;
      continue;
    }
    break;
  }
}

static void MR_CALL 
libs__pickle__unpickle_int32_4_p_0(
  MR_Box Handle_5,
  MR_Integer * Int_6,
  MR_Integer STATE_VARIABLE_State_0_13,
  MR_Integer * STATE_VARIABLE_State_14)
{
  MR_bool succeeded;
  MR_Integer A_8;
  MR_Integer B_9;
  MR_Integer C_10;
  MR_Integer D_11;
  MR_Integer Int0_12;
  MR_Integer STATE_VARIABLE_State_15_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_State_0_13 + (MR_Unsigned) 1);
  MR_Integer STATE_VARIABLE_State_16_16;
  MR_Integer STATE_VARIABLE_State_17_17;
  MR_Integer Var_19;
  MR_Integer Var_20;
  MR_Integer Var_21;
  MR_Integer Var_23;
  MR_Integer Var_25;
  MR_Integer Var_27;
  MR_Integer Mask_61;
  MR_Integer Var_64;

  succeeded = mercury__bitmap__byte_in_range_2_p_0(Handle_5, STATE_VARIABLE_State_0_13);
  if (succeeded)
    A_8 = mercury__bitmap__unsafe_byte_2_f_0(STATE_VARIABLE_State_0_13, Handle_5);
  else
  {
    MR_String Msg_29;
    MR_String Var_32;
    MR_String Var_33;
    MR_Word Var_35;

    Var_33 = mercury__string__from_int_1_f_0(STATE_VARIABLE_State_0_13);
    Var_32 = mercury__string__f_43_43_2_f_0(Var_33, (MR_String) " is out of range");
    Msg_29 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", Var_32);
    Var_35 = (MR_Word) (Msg_29);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), ((MR_Box) (Var_35)));
      return;
    }
  }
  STATE_VARIABLE_State_16_16 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_State_15_15 + (MR_Unsigned) 1);
  succeeded = mercury__bitmap__byte_in_range_2_p_0(Handle_5, STATE_VARIABLE_State_15_15);
  if (succeeded)
    B_9 = mercury__bitmap__unsafe_byte_2_f_0(STATE_VARIABLE_State_15_15, Handle_5);
  else
  {
    MR_String Msg_37;
    MR_String Var_40;
    MR_String Var_41;
    MR_Word Var_43;

    Var_41 = mercury__string__from_int_1_f_0(STATE_VARIABLE_State_15_15);
    Var_40 = mercury__string__f_43_43_2_f_0(Var_41, (MR_String) " is out of range");
    Msg_37 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", Var_40);
    Var_43 = (MR_Word) (Msg_37);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), ((MR_Box) (Var_43)));
      return;
    }
  }
  STATE_VARIABLE_State_17_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_State_16_16 + (MR_Unsigned) 1);
  succeeded = mercury__bitmap__byte_in_range_2_p_0(Handle_5, STATE_VARIABLE_State_16_16);
  if (succeeded)
    C_10 = mercury__bitmap__unsafe_byte_2_f_0(STATE_VARIABLE_State_16_16, Handle_5);
  else
  {
    MR_String Msg_45;
    MR_String Var_48;
    MR_String Var_49;
    MR_Word Var_51;

    Var_49 = mercury__string__from_int_1_f_0(STATE_VARIABLE_State_16_16);
    Var_48 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) " is out of range");
    Msg_45 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", Var_48);
    Var_51 = (MR_Word) (Msg_45);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), ((MR_Box) (Var_51)));
      return;
    }
  }
  *STATE_VARIABLE_State_14 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_State_17_17 + (MR_Unsigned) 1);
  succeeded = mercury__bitmap__byte_in_range_2_p_0(Handle_5, STATE_VARIABLE_State_17_17);
  if (succeeded)
    D_11 = mercury__bitmap__unsafe_byte_2_f_0(STATE_VARIABLE_State_17_17, Handle_5);
  else
  {
    MR_String Msg_53;
    MR_String Var_56;
    MR_String Var_57;
    MR_Word Var_59;

    Var_57 = mercury__string__from_int_1_f_0(STATE_VARIABLE_State_17_17);
    Var_56 = mercury__string__f_43_43_2_f_0(Var_57, (MR_String) " is out of range");
    Msg_53 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", Var_56);
    Var_59 = (MR_Word) (Msg_53);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), ((MR_Box) (Var_59)));
      return;
    }
  }
  Var_21 = (A_8 << 24);
  Var_23 = (B_9 << 16);
  Var_20 = (Var_21 | Var_23);
  Var_25 = (C_10 << 8);
  Var_19 = (Var_20 | Var_25);
  Var_27 = (D_11 << 0);
  Int0_12 = (Var_19 | Var_27);
  Mask_61 = ((MR_Integer) 1 << 31);
  Var_64 = (Int0_12 ^ Mask_61);
  *Int_6 = (MR_Integer) ((MR_Unsigned) Var_64 - (MR_Unsigned) Mask_61);
}

static void MR_CALL 
libs__pickle__unpickle_from_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;

  libs__pickle__IntroducedFrom__pred__unpickle_from_file__240__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Box) ((MR_hl_field(0, closure, (MR_Integer) 5)))), wrapper_arg_1);
}

void MR_CALL 
libs__pickle__unpickle_from_file_5_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word Unpicklers_6,
  MR_String FileName_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word FileResult_10;

  mercury__io__open_binary_input_4_p_0(FileName_7, &FileResult_10);
  if (((MR_tag((MR_Word) FileResult_10)) == (MR_Integer) 1))
    *Result_8 = FileResult_10;
  else
  {
    MR_Word FileStream_11 = ((MR_Word) ((MR_hl_field(0, FileResult_10, (MR_Integer) 0))));
    MR_Word ReadResult_12;

    mercury__io__read_binary_file_as_bitmap_4_p_0(FileStream_11, &ReadResult_12);
    mercury__io__close_binary_input_3_p_0(FileStream_11);
    if (((MR_tag((MR_Word) ReadResult_12)) == (MR_Integer) 1))
      *Result_8 = ReadResult_12;
    else
    {
      MR_Box Bitmap_13 = ((MR_Box) ((MR_hl_field(0, ReadResult_12, (MR_Integer) 0))));
      MR_Word TryResult_14;
      MR_Word Var_26;

      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&libs__pickle_scalar_common_1[2]));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (libs__pickle__unpickle_from_file_5_p_0_1));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_26, 3) = ((MR_Box) (TypeInfo_for_T_33));
        MR_hl_field(0, Var_26, 4) = ((MR_Box) (Unpicklers_6));
        MR_hl_field(0, Var_26, 5) = ((MR_Box) (Bitmap_13));
      }
      mercury__exception__try_2_p_0(TypeInfo_for_T_33, Var_26, &TryResult_14);
      if (((MR_tag((MR_Word) TryResult_14)) == (MR_Integer) 2))
      {
        MR_Word Excp_18 = ((MR_Word) ((MR_hl_field(2, TryResult_14, (MR_Integer) 0))));
        MR_String Msg_19;
        MR_Word Var_29;
        MR_Box conv0_Var_29;

        succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), Excp_18, &conv0_Var_29);
        if (succeeded)
        {
          Var_29 = ((MR_Word) (conv0_Var_29));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Msg_19 = (MR_String) (Var_29);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Var_30;

          Var_30 = mercury__io__make_io_error_1_f_0(Msg_19);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_30));
          }
        }
        else
          {
            mercury__exception__rethrow_1_p_0(TypeInfo_for_T_33, TryResult_14);
            return;
          }
      }
      else
      {
        MR_Box T_17 = (MR_hl_field(1, TryResult_14, (MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Result_8 = base;
          MR_hl_field(0, base, 0) = T_17;
        }
      }
    }
  }
}

void MR_CALL 
libs__pickle__register_unpickler_4_p_0(
  MR_Word TypeCtorDesc_5,
  MR_Word Unpickle_6,
  MR_Word Unpicklers0_7,
  MR_Word * Unpicklers_8)
{
  MR_Word Map0_9 = (MR_Word) (Unpicklers0_7);
  MR_Word Map_10;

  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), (MR_Word) (&libs__pickle_scalar_common_2[0]), ((MR_Box) (TypeCtorDesc_5)), ((MR_Box) (Unpickle_6)), Map0_9, &Map_10);
  *Unpicklers_8 = (MR_Word) (Map_10);
}

MR_Word MR_CALL 
libs__pickle__init_unpicklers_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;

  Var_2 = mercury__map__init_0_f_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), (MR_Word) (&libs__pickle_scalar_common_2[0]));
  HeadVar__1_1 = (MR_Word) (Var_2);
  return HeadVar__1_1;
}

static void MR_CALL 
libs__pickle__pickle_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  libs__pickle__pickle_char_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
}

static void MR_CALL 
libs__pickle__pickle_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  libs__pickle__pickle_char_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1));
}

void MR_CALL 
libs__pickle__pickle_5_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word OutputStream_6,
  MR_Word Pickles_7,
  MR_Box T_8)
{
  MR_bool succeeded;
  MR_String String_10;
  MR_Box conv0_String_10;

  succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_31, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), T_8, &conv0_String_10);
  if (succeeded)
  {
    String_10 = ((MR_String) (conv0_String_10));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Length_37;
    MR_Word Var_39;
    MR_Integer A_41;
    MR_Integer B_42;
    MR_Integer C_43;
    MR_Integer D_44;
    MR_Integer Var_45;
    MR_Integer Var_48;
    MR_Integer Var_51;
    MR_Integer Var_54;
    MR_Box conv1_STATE_VARIABLE_IO_20;

    Length_37 = mercury__string__length_1_f_0(String_10);
    Var_45 = mercury__int__f_62_62_2_f_0(Length_37, (MR_Integer) 24);
    A_41 = (Var_45 & (MR_Integer) 255);
    Var_48 = mercury__int__f_62_62_2_f_0(Length_37, (MR_Integer) 16);
    B_42 = (Var_48 & (MR_Integer) 255);
    Var_51 = mercury__int__f_62_62_2_f_0(Length_37, (MR_Integer) 8);
    C_43 = (Var_51 & (MR_Integer) 255);
    Var_54 = mercury__int__f_62_62_2_f_0(Length_37, (MR_Integer) 0);
    D_44 = (Var_54 & (MR_Integer) 255);
    mercury__io__write_byte_4_p_0(OutputStream_6, A_41);
    mercury__io__write_byte_4_p_0(OutputStream_6, B_42);
    mercury__io__write_byte_4_p_0(OutputStream_6, C_43);
    mercury__io__write_byte_4_p_0(OutputStream_6, D_44);
    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (&libs__pickle_scalar_common_1[1]));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) (libs__pickle__pickle_5_p_0_1));
      MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_39, 3) = ((MR_Box) (OutputStream_6));
    }
    mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_39, String_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20);
  }
  else
  {
    MR_Integer Int_11;
    MR_Box conv2_Int_11;

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_31, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), T_8, &conv2_Int_11);
    if (succeeded)
    {
      Int_11 = ((MR_Integer) (conv2_Int_11));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer A_60;
      MR_Integer B_61;
      MR_Integer C_62;
      MR_Integer D_63;
      MR_Integer Var_64;
      MR_Integer Var_67;
      MR_Integer Var_70;
      MR_Integer Var_73;

      Var_64 = mercury__int__f_62_62_2_f_0(Int_11, (MR_Integer) 24);
      A_60 = (Var_64 & (MR_Integer) 255);
      Var_67 = mercury__int__f_62_62_2_f_0(Int_11, (MR_Integer) 16);
      B_61 = (Var_67 & (MR_Integer) 255);
      Var_70 = mercury__int__f_62_62_2_f_0(Int_11, (MR_Integer) 8);
      C_62 = (Var_70 & (MR_Integer) 255);
      Var_73 = mercury__int__f_62_62_2_f_0(Int_11, (MR_Integer) 0);
      D_63 = (Var_73 & (MR_Integer) 255);
      mercury__io__write_byte_4_p_0(OutputStream_6, A_60);
      mercury__io__write_byte_4_p_0(OutputStream_6, B_61);
      mercury__io__write_byte_4_p_0(OutputStream_6, C_62);
      mercury__io__write_byte_4_p_0(OutputStream_6, D_63);
    }
    else
    {
      MR_Float Float_12;
      MR_Box conv3_Float_12;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_31, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), T_8, &conv3_Float_12);
      if (succeeded)
      {
        Float_12 = MR_unbox_float(conv3_Float_12);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        libs__pickle__pickle_float_4_p_0(OutputStream_6, Float_12);
      else
      {
        MR_Char Char_13;
        MR_Box conv4_Char_13;

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_31, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), T_8, &conv4_Char_13);
        if (succeeded)
        {
          Char_13 = ((MR_Char) (MR_Word) conv4_Char_13);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Integer Int_79;

          mercury__char__to_int_2_p_0(Char_13, &Int_79);
          mercury__io__write_byte_4_p_0(OutputStream_6, Int_79);
        }
        else
        {
          MR_Word Pickle_16;
          MR_Word TypeDesc_14;
          MR_Word TypeCtorDesc_15;
          MR_Word Pickles_80;
          MR_Word Pickle0_81;
          MR_Box conv5_Pickle0_81;

          TypeDesc_14 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_31);
          TypeCtorDesc_15 = mercury__type_desc__type_ctor_1_f_0(TypeDesc_14);
          Pickles_80 = (MR_Word) (Pickles_7);
          succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), (MR_Word) (&libs__pickle_scalar_common_1[0]), Pickles_80, ((MR_Box) (TypeCtorDesc_15)), &conv5_Pickle0_81);
          if (succeeded)
          {
            Pickle0_81 = ((MR_Word) (conv5_Pickle0_81));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
{
#define MR_PROC_LABEL libs__pickle__pickle_5_p_0

	MR_Word A;
	MR_Word B;

	A = Pickle0_81 ;
		{

    B = A;


		;}
#undef MR_PROC_LABEL
	Pickle_16  = B;
}
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Var_25;
            void MR_CALL (* func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box conv7_STATE_VARIABLE_IO_20;

            Var_25 = mercury__univ__univ_1_f_0(TypeInfo_for_T_31, T_8);
            func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pickle_16, (MR_Integer) 1))));
            func_6(((MR_Box) (Pickle_16)), ((MR_Box) (OutputStream_6)), ((MR_Box) (Pickles_7)), ((MR_Box) (Var_25)), ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_20);
          }
          else
          {
            MR_String Functor_17;
            MR_Integer Arity_18;
            MR_Integer Length_84;
            MR_Word Var_86;
            MR_Integer A_88;
            MR_Integer B_89;
            MR_Integer C_90;
            MR_Integer D_91;
            MR_Integer Var_92;
            MR_Integer Var_95;
            MR_Integer Var_98;
            MR_Integer Var_101;
            MR_Box conv8_STATE_VARIABLE_IO_28_28;

            mercury__deconstruct__functor_4_p_0(TypeInfo_for_T_31, T_8, (MR_Integer) 0, &Functor_17, &Arity_18);
            Length_84 = mercury__string__length_1_f_0(Functor_17);
            Var_92 = mercury__int__f_62_62_2_f_0(Length_84, (MR_Integer) 24);
            A_88 = (Var_92 & (MR_Integer) 255);
            Var_95 = mercury__int__f_62_62_2_f_0(Length_84, (MR_Integer) 16);
            B_89 = (Var_95 & (MR_Integer) 255);
            Var_98 = mercury__int__f_62_62_2_f_0(Length_84, (MR_Integer) 8);
            C_90 = (Var_98 & (MR_Integer) 255);
            Var_101 = mercury__int__f_62_62_2_f_0(Length_84, (MR_Integer) 0);
            D_91 = (Var_101 & (MR_Integer) 255);
            mercury__io__write_byte_4_p_0(OutputStream_6, A_88);
            mercury__io__write_byte_4_p_0(OutputStream_6, B_89);
            mercury__io__write_byte_4_p_0(OutputStream_6, C_90);
            mercury__io__write_byte_4_p_0(OutputStream_6, D_91);
            {
              Var_86 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_86, 0) = ((MR_Box) (&libs__pickle_scalar_common_1[1]));
              MR_hl_field(0, Var_86, 1) = ((MR_Box) (libs__pickle__pickle_5_p_0_2));
              MR_hl_field(0, Var_86, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_86, 3) = ((MR_Box) (OutputStream_6));
            }
            mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_86, Functor_17, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_28_28);
            libs__pickle__pickle_int32_4_p_0(OutputStream_6, Arity_18);
            libs__pickle__pickle_args_7_p_0(TypeInfo_for_T_31, OutputStream_6, Pickles_7, (MR_Integer) 0, Arity_18, T_8);
          }
        }
      }
    }
  }
}

static void MR_CALL 
libs__pickle__pickle_args_7_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word OutputStream_8,
  MR_Word Pickles_9,
  MR_Integer N_10,
  MR_Integer Arity_11,
  MR_Box T_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_10 == Arity_11);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Word TypeInfo_25_25;
      MR_Box Arg_14;

      succeeded = mercury__deconstruct__arg_4_p_0(TypeInfo_for_T_24, &TypeInfo_25_25, T_12, (MR_Integer) 0, N_10, &Arg_14);
      if (succeeded)
      {
        MR_Integer Var_19;
        MR_Integer next_value_of_N_10;

        libs__pickle__pickle_5_p_0(TypeInfo_25_25, OutputStream_8, Pickles_9, Arg_14);
        Var_19 = (MR_Integer) ((MR_Unsigned) N_10 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_N_10 = Var_19;
        N_10 = next_value_of_N_10;
        continue;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.pickle.pickle_args\'/7", (MR_String) "unable to deconstruct arg");
          return;
        }
    }
    break;
  }
}

static void MR_CALL 
libs__pickle__pickle_float_4_p_0(
  MR_Word OutputStream_5,
  MR_Float Float_6)
{
  MR_Integer A_8;
  MR_Integer B_9;
  MR_Integer A_13;
  MR_Integer B_14;
  MR_Integer C_15;
  MR_Integer D_16;
  MR_Integer Var_17;
  MR_Integer Var_20;
  MR_Integer Var_23;
  MR_Integer Var_26;
  MR_Integer A_32;
  MR_Integer B_33;
  MR_Integer C_34;
  MR_Integer D_35;
  MR_Integer Var_36;
  MR_Integer Var_39;
  MR_Integer Var_42;
  MR_Integer Var_45;

{
#define MR_PROC_LABEL libs__pickle__pickle_float_4_p_0

	MR_Float Flt;
	MR_Integer A;
	MR_Integer B;

	Flt = Float_6 ;
		{

    if (sizeof(MR_Float) == sizeof(float)) {
        MR_uint_least32_t   *p;

        p = (MR_uint_least32_t *) &Flt;
        A = *p;
        B = 0;
    } else {
        MR_uint_least64_t   *p;

        p = (MR_uint_least64_t *) &Flt;
        A = (*p >> 32) & 0xffffffff;
        B = (*p >>  0) & 0xffffffff;
    }


		;}
#undef MR_PROC_LABEL
	A_8  = A;
	B_9  = B;
}
  Var_17 = mercury__int__f_62_62_2_f_0(A_8, (MR_Integer) 24);
  A_13 = (Var_17 & (MR_Integer) 255);
  Var_20 = mercury__int__f_62_62_2_f_0(A_8, (MR_Integer) 16);
  B_14 = (Var_20 & (MR_Integer) 255);
  Var_23 = mercury__int__f_62_62_2_f_0(A_8, (MR_Integer) 8);
  C_15 = (Var_23 & (MR_Integer) 255);
  Var_26 = mercury__int__f_62_62_2_f_0(A_8, (MR_Integer) 0);
  D_16 = (Var_26 & (MR_Integer) 255);
  mercury__io__write_byte_4_p_0(OutputStream_5, A_13);
  mercury__io__write_byte_4_p_0(OutputStream_5, B_14);
  mercury__io__write_byte_4_p_0(OutputStream_5, C_15);
  mercury__io__write_byte_4_p_0(OutputStream_5, D_16);
  Var_36 = mercury__int__f_62_62_2_f_0(B_9, (MR_Integer) 24);
  A_32 = (Var_36 & (MR_Integer) 255);
  Var_39 = mercury__int__f_62_62_2_f_0(B_9, (MR_Integer) 16);
  B_33 = (Var_39 & (MR_Integer) 255);
  Var_42 = mercury__int__f_62_62_2_f_0(B_9, (MR_Integer) 8);
  C_34 = (Var_42 & (MR_Integer) 255);
  Var_45 = mercury__int__f_62_62_2_f_0(B_9, (MR_Integer) 0);
  D_35 = (Var_45 & (MR_Integer) 255);
  mercury__io__write_byte_4_p_0(OutputStream_5, A_32);
  mercury__io__write_byte_4_p_0(OutputStream_5, B_33);
  mercury__io__write_byte_4_p_0(OutputStream_5, C_34);
  mercury__io__write_byte_4_p_0(OutputStream_5, D_35);
}

static void MR_CALL 
libs__pickle__pickle_int32_4_p_0(
  MR_Word OutputStream_5,
  MR_Integer Int_6)
{
  MR_Integer A_8;
  MR_Integer B_9;
  MR_Integer C_10;
  MR_Integer D_11;
  MR_Integer Var_14;
  MR_Integer Var_17;
  MR_Integer Var_20;
  MR_Integer Var_23;

  Var_14 = mercury__int__f_62_62_2_f_0(Int_6, (MR_Integer) 24);
  A_8 = (Var_14 & (MR_Integer) 255);
  Var_17 = mercury__int__f_62_62_2_f_0(Int_6, (MR_Integer) 16);
  B_9 = (Var_17 & (MR_Integer) 255);
  Var_20 = mercury__int__f_62_62_2_f_0(Int_6, (MR_Integer) 8);
  C_10 = (Var_20 & (MR_Integer) 255);
  Var_23 = mercury__int__f_62_62_2_f_0(Int_6, (MR_Integer) 0);
  D_11 = (Var_23 & (MR_Integer) 255);
  mercury__io__write_byte_4_p_0(OutputStream_5, A_8);
  mercury__io__write_byte_4_p_0(OutputStream_5, B_9);
  mercury__io__write_byte_4_p_0(OutputStream_5, C_10);
  mercury__io__write_byte_4_p_0(OutputStream_5, D_11);
}

void MR_CALL 
libs__pickle__register_pickler_4_p_0(
  MR_Word TypeCtorDesc_5,
  MR_Word Pickle_6,
  MR_Word Pickles0_7,
  MR_Word * Pickles_8)
{
  MR_Word Map0_9 = (MR_Word) (Pickles0_7);
  MR_Word Map_10;

  mercury__map__det_insert_4_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), (MR_Word) (&libs__pickle_scalar_common_1[0]), ((MR_Box) (TypeCtorDesc_5)), ((MR_Box) (Pickle_6)), Map0_9, &Map_10);
  *Pickles_8 = (MR_Word) (Map_10);
}

MR_Word MR_CALL 
libs__pickle__init_picklers_0_f_0(void)
{
  MR_Word HeadVar__1_1;
  MR_Word Var_2;

  Var_2 = mercury__map__init_0_f_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), (MR_Word) (&libs__pickle_scalar_common_1[0]));
  HeadVar__1_1 = (MR_Word) (Var_2);
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__pickle____Unify____get_byte_out_of_range_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__pickle____Compare____get_byte_out_of_range_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__pickle____Unify____pickler_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__pickle____Unify____pickler_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__pickle____Compare____pickler_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__pickle____Compare____pickler_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__pickle____Unify____picklers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__pickle____Unify____picklers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__pickle____Compare____picklers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__pickle____Compare____picklers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_handle_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__pickle____Unify____unpickle_handle_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__pickle____Compare____unpickle_handle_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__pickle____Compare____unpickle_handle_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__pickle____Unify____unpickle_state_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__pickle____Compare____unpickle_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__pickle____Compare____unpickle_state_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__pickle____Unify____unpickler_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__pickle____Unify____unpickler_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__pickle____Compare____unpickler_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__pickle____Compare____unpickler_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
libs__pickle____Unify____unpicklers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = libs__pickle____Unify____unpicklers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
libs__pickle____Compare____unpicklers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  libs__pickle____Compare____unpicklers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__libs__pickle__init(void)
{
}

void mercury__libs__pickle__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0);
	MR_register_type_ctor_info(&libs__pickle__libs__pickle__type_ctor_info_pickler_pred_0);
	MR_register_type_ctor_info(&libs__pickle__libs__pickle__type_ctor_info_picklers_0);
	MR_register_type_ctor_info(&libs__pickle__libs__pickle__type_ctor_info_unpickle_handle_0);
	MR_register_type_ctor_info(&libs__pickle__libs__pickle__type_ctor_info_unpickle_state_0);
	MR_register_type_ctor_info(&libs__pickle__libs__pickle__type_ctor_info_unpickler_pred_0);
	MR_register_type_ctor_info(&libs__pickle__libs__pickle__type_ctor_info_unpicklers_0);
}

void mercury__libs__pickle__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__libs__pickle__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module libs.pickle.
