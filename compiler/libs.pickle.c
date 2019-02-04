/*
** Automatically generated from `pickle.m'
** by the Mercury compiler,
** version rotd-2018-10-15
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


#include "libs.mih"
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
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_Integer libs__pickle__libs__pickle__functor_number_map_get_byte_out_of_range_0[1];

static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_get_byte_out_of_range_0;

static const MR_VA_TypeInfo_Struct4 libs__pickle____vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_Integer libs__pickle__libs__pickle__functor_number_map_picklers_0[1];

static const MR_FA_TypeInfo_Struct2 libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_picklers_0;

static const MR_VA_TypeInfo_Struct6 libs__pickle____vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_Integer libs__pickle__libs__pickle__functor_number_map_unpicklers_0[1];

static const MR_FA_TypeInfo_Struct2 libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_unpicklers_0;

static void MR_CALL 
libs__pickle__IntroducedFrom__pred__unpickle_from_file__245__1_4_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word Unpicklers_6,
  MR_Box Bitmap_12,
  MR_Box * LambdaHeadVar__1_26);

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
libs__pickle__unpickle_float_4_p_0(
  MR_Box Handle_5,
  MR_Float * Float_6,
  MR_Integer STATE_VARIABLE_State_0_10,
  MR_Integer * STATE_VARIABLE_State_11);

static void MR_CALL 
libs__pickle__unpickle_string_4_p_0(
  MR_Box Handle_5,
  MR_String * String_6,
  MR_Integer STATE_VARIABLE_State_0_10,
  MR_Integer * STATE_VARIABLE_State_11);

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
libs__pickle__unpickle_char_4_p_0(
  MR_Box Handle_5,
  MR_Char * Char_6,
  MR_Integer STATE_VARIABLE_State_0_9,
  MR_Integer * STATE_VARIABLE_State_10);

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
libs__pickle__pickle_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__pickle__pickle_args_6_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word Pickles_7,
  MR_Integer N_8,
  MR_Integer Arity_9,
  MR_Box T_10);

static void MR_CALL 
libs__pickle__pickle_float_3_p_0(
  MR_Float Float_4);

static void MR_CALL 
libs__pickle__pickle_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
libs__pickle__pickle_string_3_p_0(
  MR_String String_4);

static void MR_CALL 
libs__pickle__pickle_char_3_p_0(
  MR_Char Char_4);

static void MR_CALL 
libs__pickle__pickle_int32_3_p_0(
  MR_Integer Int_4);

static MR_bool MR_CALL 
libs__pickle__user_defined_pickler_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeCtorDesc_5,
  MR_Word * Pickle_6);

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


static /* final */ const MR_Box libs__pickle_scalar_common_1[2][6];

static /* final */ const MR_Box libs__pickle_scalar_common_2[1][8];

static /* final */ const MR_Box libs__pickle_scalar_common_3[4][3];

static /* final */ const MR_Integer libs__pickle_scalar_common_4[1][2];

static /* final */ const MR_Box libs__pickle_scalar_common_5[1][7];

static /* final */ const MR_Box libs__pickle_scalar_common_6[1][9];




static /* final */ const MR_Box libs__pickle_scalar_common_1[2][6] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_pred_0)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&libs__pickle__libs__pickle__type_ctor_info_picklers_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__pickle_scalar_common_2[1][8] = {
  /* row 0 */
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

static /* final */ const MR_Box libs__pickle_scalar_common_3[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0)),
    ((MR_Box) (&libs__pickle_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0)),
    ((MR_Box) (&libs__pickle_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&libs__pickle_scalar_common_1[1])),
    ((MR_Box) (libs__pickle__pickle_string_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__pickle_scalar_common_1[1])),
    ((MR_Box) (libs__pickle__pickle_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer libs__pickle_scalar_common_4[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box libs__pickle_scalar_common_5[1][7] = {
  /* row 0 */
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

static /* final */ const MR_Box libs__pickle_scalar_common_6[1][9] = {
  /* row 0 */
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



#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "libs.pickle.mh"



static const MR_Integer libs__pickle__libs__pickle__functor_number_map_get_byte_out_of_range_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_get_byte_out_of_range_0 = {
  (MR_String) "get_byte_out_of_range",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (libs__pickle____Unify____get_byte_out_of_range_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____get_byte_out_of_range_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "get_byte_out_of_range",
  {     &libs__pickle__libs__pickle__notag_functor_desc_get_byte_out_of_range_0 },
  {     &libs__pickle__libs__pickle__notag_functor_desc_get_byte_out_of_range_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__pickle__libs__pickle__functor_number_map_get_byte_out_of_range_0
};

static const MR_VA_TypeInfo_Struct4 libs__pickle____vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_TypeInfo) (&libs__pickle__libs__pickle__type_ctor_info_picklers_0),
    (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_TypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_pickler_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__pickle____Unify____pickler_pred_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____pickler_pred_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "pickler_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__pickle____vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer libs__pickle__libs__pickle__functor_number_map_picklers_0[1] = {
  (MR_Integer) 0
};

static const MR_FA_TypeInfo_Struct2 libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0),
    (MR_TypeInfo) (&libs__pickle____vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0)
  }
};

static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_picklers_0 = {
  (MR_String) "picklers",
  (MR_PseudoTypeInfo) (&libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_picklers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (libs__pickle____Unify____picklers_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____picklers_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "picklers",
  {     &libs__pickle__libs__pickle__notag_functor_desc_picklers_0 },
  {     &libs__pickle__libs__pickle__notag_functor_desc_picklers_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__pickle__libs__pickle__functor_number_map_picklers_0
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_unpickle_handle_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__pickle____Unify____unpickle_handle_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____unpickle_handle_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "unpickle_handle",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_unpickle_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__pickle____Unify____unpickle_state_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____unpickle_state_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "unpickle_state",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__pickle____Unify____unpickler_pred_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____unpickler_pred_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "unpickler_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&libs__pickle____vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_Integer libs__pickle__libs__pickle__functor_number_map_unpicklers_0[1] = {
  (MR_Integer) 0
};

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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (libs__pickle____Unify____unpicklers_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____unpicklers_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "unpicklers",
  {     &libs__pickle__libs__pickle__notag_functor_desc_unpicklers_0 },
  {     &libs__pickle__libs__pickle__notag_functor_desc_unpicklers_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__pickle__libs__pickle__functor_number_map_unpicklers_0
};

static void MR_CALL 
libs__pickle__IntroducedFrom__pred__unpickle_from_file__245__1_4_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word Unpicklers_6,
  MR_Box Bitmap_12,
  MR_Box * LambdaHeadVar__1_26)
{
  {
    MR_Word Univ_40;
    MR_Word Var_41;
    MR_Integer _State_15;

    Var_41 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_32);
    libs__pickle__unpickle_2_6_p_0(Unpicklers_6, Bitmap_12, Var_41, &Univ_40, (MR_Integer) 0, &_State_15);
    mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_32, Univ_40, LambdaHeadVar__1_26);
  }
}

void MR_CALL 
libs__pickle____Compare____unpicklers_0_0(
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
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__builtin__compare_3_p_0((MR_Word) (&libs__pickle_scalar_common_3[1]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

MR_bool MR_CALL 
libs__pickle____Unify____unpicklers_0_0(
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
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__pickle_scalar_common_3[1]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

void MR_CALL 
libs__pickle____Compare____unpickler_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__pickle_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
libs__pickle____Unify____unpickler_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

void MR_CALL 
libs__pickle____Compare____unpickle_state_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
libs__pickle____Unify____unpickle_state_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
libs__pickle____Compare____unpickle_handle_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Box Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Box Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__bitmap____Compare____bitmap_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
libs__pickle____Unify____unpickle_handle_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Box Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Box Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__bitmap____Unify____bitmap_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
libs__pickle____Compare____picklers_0_0(
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
      MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
      MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

      mercury__builtin__compare_3_p_0((MR_Word) (&libs__pickle_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    }
  }
}

MR_bool MR_CALL 
libs__pickle____Unify____picklers_0_0(
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
      MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
      MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&libs__pickle_scalar_common_3[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
    return succeeded;
  }
}

void MR_CALL 
libs__pickle____Compare____pickler_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&libs__pickle_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
libs__pickle____Unify____pickler_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0(
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
      MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
      MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0(
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
      MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
      MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
    return succeeded;
  }
}

static void MR_CALL 
libs__pickle__reinterpret_ints_as_float_3_p_0(
  MR_Integer A_1,
  MR_Integer B_2,
  MR_Float * Flt_3)
{
  {
{
#define MR_PROC_LABEL libs__pickle__reinterpret_ints_as_float_3_p_0

	MR_Integer A;
	MR_Integer B;
	MR_Float Flt;

	A =  A_1 ;
	B =  B_2 ;
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
}

static void MR_CALL 
libs__pickle__reinterpret_float_as_ints_3_p_0(
  MR_Float Flt_1,
  MR_Integer * A_2,
  MR_Integer * B_3)
{
  {
{
#define MR_PROC_LABEL libs__pickle__reinterpret_float_as_ints_3_p_0

	MR_Float Flt;
	MR_Integer A;
	MR_Integer B;

	Flt =  Flt_1 ;
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
}

static void MR_CALL 
libs__pickle__local_unsafe_set_char_4_p_0(
  MR_Char Chr_1,
  MR_Integer Index_2,
  MR_String Str0_3,
  MR_String * Str_4)
{
  {
{
#define MR_PROC_LABEL libs__pickle__local_unsafe_set_char_4_p_0

	MR_Char Chr;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;

	Chr =  Chr_1 ;
	Index =  Index_2 ;
	Str0 =  Str0_3 ;
		{

    Str0[Index] = Chr;
    Str = Str0;


		;}
#undef MR_PROC_LABEL
	 *Str_4  = Str;
}
  }
}

static void MR_CALL 
libs__pickle__allocate_string_2_p_0(
  MR_Integer Length_1,
  MR_String * Str_2)
{
  {
{
#define MR_PROC_LABEL libs__pickle__allocate_string_2_p_0

	MR_Integer Length;
	MR_String Str;

	Length =  Length_1 ;
		{

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';


		;}
#undef MR_PROC_LABEL
	 *Str_2  = Str;
}
  }
}

static void MR_CALL 
libs__pickle__unpickler_inst_cast_2_p_0(
  MR_Word A_1,
  MR_Word * B_2)
{
  {
{
#define MR_PROC_LABEL libs__pickle__unpickler_inst_cast_2_p_0

	MR_Word A;
	MR_Word B;

	A =  A_1 ;
		{

    B = A;


		;}
#undef MR_PROC_LABEL
	 *B_2  = B;
}
  }
}

static void MR_CALL 
libs__pickle__pickler_inst_cast_2_p_0(
  MR_Word A_1,
  MR_Word * B_2)
{
  {
{
#define MR_PROC_LABEL libs__pickle__pickler_inst_cast_2_p_0

	MR_Word A;
	MR_Word B;

	A =  A_1 ;
		{

    B = A;


		;}
#undef MR_PROC_LABEL
	 *B_2  = B;
}
  }
}

void MR_CALL 
libs__pickle__unpickle_5_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word Unpicklers_6,
  MR_Box Handle_7,
  MR_Box * T_8,
  MR_Integer STATE_VARIABLE_State_0_11,
  MR_Integer * STATE_VARIABLE_State_12)
{
  {
    MR_Word Univ_10;
    MR_Word Var_13;

    Var_13 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_15);
    libs__pickle__unpickle_2_6_p_0(Unpicklers_6, Handle_7, Var_13, &Univ_10, STATE_VARIABLE_State_0_11, STATE_VARIABLE_State_12);
    mercury__univ__det_univ_to_type_2_p_0(TypeInfo_for_T_15, Univ_10, T_8);
  }
}

static void MR_CALL 
libs__pickle__unpickle_2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Univ_10;
    MR_Integer conv4_STATE_VARIABLE_State_30;

    libs__pickle__unpickle_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Box) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv5_Univ_10, ((MR_Integer) (wrapper_arg_3)), &conv4_STATE_VARIABLE_State_30);
    *wrapper_arg_2 = ((MR_Box) (conv5_Univ_10));
    *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_State_30));
  }
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
  {
    MR_bool succeeded;
    MR_Word Var_64;

    Var_64 = mercury__type_desc__type_of_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    succeeded = mercury__type_desc____Unify____type_desc_0_0(TypeDesc_9, Var_64);
    if (succeeded)
    {
      MR_String String_13;
      MR_Integer Length_77;
      MR_String String0_78;
      MR_Integer STATE_VARIABLE_State_12_79;

      libs__pickle__unpickle_int32_4_p_0(Handle_8, &Length_77, STATE_VARIABLE_State_0_29, &STATE_VARIABLE_State_12_79);
{
#define MR_PROC_LABEL libs__pickle__unpickle_2_6_p_0

	MR_Integer Length;
	MR_String Str;

	Length =  Length_77 ;
		{

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';


		;}
#undef MR_PROC_LABEL
	 String0_78  = Str;
}
      libs__pickle__unpickle_string_2_7_p_0(Handle_8, (MR_Integer) 0, Length_77, String0_78, &String_13, STATE_VARIABLE_State_12_79, STATE_VARIABLE_State_30);
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

          libs__pickle__unpickle_float_4_p_0(Handle_8, &Float_17, STATE_VARIABLE_State_0_29, STATE_VARIABLE_State_30);
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

            libs__pickle__unpickle_char_4_p_0(Handle_8, &Char_19, STATE_VARIABLE_State_0_29, STATE_VARIABLE_State_30);
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

	A =  Unpickle0_89 ;
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
              void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Unpickle_20, (MR_Integer) 1))));
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
              MR_Word IsTuple_23;
              MR_Word ArgTypes_25;
              MR_Integer N_26;

              libs__pickle__unpickle_string_4_p_0(Handle_8, &Functor_21, STATE_VARIABLE_State_0_29, &STATE_VARIABLE_State_41_41);
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
                  MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&libs__pickle_scalar_common_6[0]));
                  MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (libs__pickle__unpickle_2_6_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (Unpicklers_7));
                  MR_hl_field(MR_mktag(0), Var_43, 4) = ((MR_Box) (Handle_8));
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
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.pickle.unpickle_2\'/6", (MR_String) "unable to construct");
                          return;
                        }
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
  }
}

static void MR_CALL 
libs__pickle__unpickle_float_4_p_0(
  MR_Box Handle_5,
  MR_Float * Float_6,
  MR_Integer STATE_VARIABLE_State_0_10,
  MR_Integer * STATE_VARIABLE_State_11)
{
  {
    MR_Integer A_8;
    MR_Integer B_9;
    MR_Integer STATE_VARIABLE_State_12_12;

    libs__pickle__unpickle_int32_4_p_0(Handle_5, &A_8, STATE_VARIABLE_State_0_10, &STATE_VARIABLE_State_12_12);
    libs__pickle__unpickle_int32_4_p_0(Handle_5, &B_9, STATE_VARIABLE_State_12_12, STATE_VARIABLE_State_11);
{
#define MR_PROC_LABEL libs__pickle__unpickle_float_4_p_0

	MR_Integer A;
	MR_Integer B;
	MR_Float Flt;

	A =  A_8 ;
	B =  B_9 ;
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
	 *Float_6  = Flt;
}
  }
}

static void MR_CALL 
libs__pickle__unpickle_string_4_p_0(
  MR_Box Handle_5,
  MR_String * String_6,
  MR_Integer STATE_VARIABLE_State_0_10,
  MR_Integer * STATE_VARIABLE_State_11)
{
  {
    MR_Integer Length_8;
    MR_String String0_9;
    MR_Integer STATE_VARIABLE_State_12_12;

    libs__pickle__unpickle_int32_4_p_0(Handle_5, &Length_8, STATE_VARIABLE_State_0_10, &STATE_VARIABLE_State_12_12);
{
#define MR_PROC_LABEL libs__pickle__unpickle_string_4_p_0

	MR_Integer Length;
	MR_String Str;

	Length =  Length_8 ;
		{

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';


		;}
#undef MR_PROC_LABEL
	 String0_9  = Str;
}
    libs__pickle__unpickle_string_2_7_p_0(Handle_5, (MR_Integer) 0, Length_8, String0_9, String_6, STATE_VARIABLE_State_12_12, STATE_VARIABLE_State_11);
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
      MR_Integer STATE_VARIABLE_State_18_18 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_State_0_16 + (MR_Unsigned) (MR_Integer) 1);
      MR_String STATE_VARIABLE_String_19_19;
      MR_Integer Var_20;
      MR_Integer Byte_29;
      MR_Integer next_value_of_Index_9;
      MR_String next_value_of_STATE_VARIABLE_String_0_14;
      MR_Integer next_value_of_STATE_VARIABLE_State_0_16;

      succeeded = mercury__bitmap__byte_in_range_2_p_0(Handle_8, STATE_VARIABLE_State_0_16);
      if (succeeded)
        Byte_29 = mercury__bitmap__unsafe_byte_2_f_0(STATE_VARIABLE_State_0_16, Handle_8);
      else
      {
        MR_String Msg_34;
        MR_String Var_37;
        MR_String Var_38;
        MR_Word Var_40;

        Var_38 = mercury__string__from_int_1_f_0(STATE_VARIABLE_State_0_16);
        Var_37 = mercury__string__f_43_43_2_f_0(Var_38, (MR_String) " is out of range");
        Msg_34 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", Var_37);
        Var_40 = (MR_Word) (Msg_34);
        {
          mercury__exception__throw_1_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), ((MR_Box) (Var_40)));
          return;
        }
      }
      mercury__char__det_from_int_2_p_0(Byte_29, &Char_13);
{
#define MR_PROC_LABEL libs__pickle__unpickle_string_2_7_p_0

	MR_Char Chr;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;

	Chr =  Char_13 ;
	Index =  Index_9 ;
	Str0 =  STATE_VARIABLE_String_0_14 ;
		{

    Str0[Index] = Chr;
    Str = Str0;


		;}
#undef MR_PROC_LABEL
	 STATE_VARIABLE_String_19_19  = Str;
}
      Var_20 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) (MR_Integer) 1);
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
libs__pickle__unpickle_char_4_p_0(
  MR_Box Handle_5,
  MR_Char * Char_6,
  MR_Integer STATE_VARIABLE_State_0_9,
  MR_Integer * STATE_VARIABLE_State_10)
{
  {
    MR_bool succeeded;
    MR_Integer Byte_8;

    *STATE_VARIABLE_State_10 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_State_0_9 + (MR_Unsigned) (MR_Integer) 1);
    succeeded = mercury__bitmap__byte_in_range_2_p_0(Handle_5, STATE_VARIABLE_State_0_9);
    if (succeeded)
      Byte_8 = mercury__bitmap__unsafe_byte_2_f_0(STATE_VARIABLE_State_0_9, Handle_5);
    else
    {
      MR_String Msg_15;
      MR_String Var_18;
      MR_String Var_19;
      MR_Word Var_21;

      Var_19 = mercury__string__from_int_1_f_0(STATE_VARIABLE_State_0_9);
      Var_18 = mercury__string__f_43_43_2_f_0(Var_19, (MR_String) " is out of range");
      Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", Var_18);
      Var_21 = (MR_Word) (Msg_15);
      {
        mercury__exception__throw_1_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), ((MR_Box) (Var_21)));
        return;
      }
    }
    mercury__char__det_from_int_2_p_0(Byte_8, Char_6);
  }
}

static void MR_CALL 
libs__pickle__unpickle_int32_4_p_0(
  MR_Box Handle_5,
  MR_Integer * Int_6,
  MR_Integer STATE_VARIABLE_State_0_13,
  MR_Integer * STATE_VARIABLE_State_14)
{
  {
    MR_bool succeeded;
    MR_Integer A_8;
    MR_Integer B_9;
    MR_Integer C_10;
    MR_Integer D_11;
    MR_Integer Int0_12;
    MR_Integer STATE_VARIABLE_State_15_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_State_0_13 + (MR_Unsigned) (MR_Integer) 1);
    MR_Integer STATE_VARIABLE_State_16_16;
    MR_Integer STATE_VARIABLE_State_17_17;
    MR_Integer Var_19;
    MR_Integer Var_20;
    MR_Integer Var_21;
    MR_Integer Var_23;
    MR_Integer Var_25;
    MR_Integer Var_27;
    MR_Integer Mask_75;
    MR_Integer Var_78;

    succeeded = mercury__bitmap__byte_in_range_2_p_0(Handle_5, STATE_VARIABLE_State_0_13);
    if (succeeded)
      A_8 = mercury__bitmap__unsafe_byte_2_f_0(STATE_VARIABLE_State_0_13, Handle_5);
    else
    {
      MR_String Msg_32;
      MR_String Var_35;
      MR_String Var_36;
      MR_Word Var_38;

      Var_36 = mercury__string__from_int_1_f_0(STATE_VARIABLE_State_0_13);
      Var_35 = mercury__string__f_43_43_2_f_0(Var_36, (MR_String) " is out of range");
      Msg_32 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", Var_35);
      Var_38 = (MR_Word) (Msg_32);
      {
        mercury__exception__throw_1_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), ((MR_Box) (Var_38)));
        return;
      }
    }
    STATE_VARIABLE_State_16_16 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_State_15_15 + (MR_Unsigned) (MR_Integer) 1);
    succeeded = mercury__bitmap__byte_in_range_2_p_0(Handle_5, STATE_VARIABLE_State_15_15);
    if (succeeded)
      B_9 = mercury__bitmap__unsafe_byte_2_f_0(STATE_VARIABLE_State_15_15, Handle_5);
    else
    {
      MR_String Msg_43;
      MR_String Var_46;
      MR_String Var_47;
      MR_Word Var_49;

      Var_47 = mercury__string__from_int_1_f_0(STATE_VARIABLE_State_15_15);
      Var_46 = mercury__string__f_43_43_2_f_0(Var_47, (MR_String) " is out of range");
      Msg_43 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", Var_46);
      Var_49 = (MR_Word) (Msg_43);
      {
        mercury__exception__throw_1_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), ((MR_Box) (Var_49)));
        return;
      }
    }
    STATE_VARIABLE_State_17_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_State_16_16 + (MR_Unsigned) (MR_Integer) 1);
    succeeded = mercury__bitmap__byte_in_range_2_p_0(Handle_5, STATE_VARIABLE_State_16_16);
    if (succeeded)
      C_10 = mercury__bitmap__unsafe_byte_2_f_0(STATE_VARIABLE_State_16_16, Handle_5);
    else
    {
      MR_String Msg_54;
      MR_String Var_57;
      MR_String Var_58;
      MR_Word Var_60;

      Var_58 = mercury__string__from_int_1_f_0(STATE_VARIABLE_State_16_16);
      Var_57 = mercury__string__f_43_43_2_f_0(Var_58, (MR_String) " is out of range");
      Msg_54 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", Var_57);
      Var_60 = (MR_Word) (Msg_54);
      {
        mercury__exception__throw_1_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), ((MR_Box) (Var_60)));
        return;
      }
    }
    *STATE_VARIABLE_State_14 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_State_17_17 + (MR_Unsigned) (MR_Integer) 1);
    succeeded = mercury__bitmap__byte_in_range_2_p_0(Handle_5, STATE_VARIABLE_State_17_17);
    if (succeeded)
      D_11 = mercury__bitmap__unsafe_byte_2_f_0(STATE_VARIABLE_State_17_17, Handle_5);
    else
    {
      MR_String Msg_65;
      MR_String Var_68;
      MR_String Var_69;
      MR_Word Var_71;

      Var_69 = mercury__string__from_int_1_f_0(STATE_VARIABLE_State_17_17);
      Var_68 = mercury__string__f_43_43_2_f_0(Var_69, (MR_String) " is out of range");
      Msg_65 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", Var_68);
      Var_71 = (MR_Word) (Msg_65);
      {
        mercury__exception__throw_1_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), ((MR_Box) (Var_71)));
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
    Mask_75 = ((MR_Integer) 1 << 31);
    Var_78 = (Int0_12 ^ Mask_75);
    *Int_6 = (MR_Integer) ((MR_Unsigned) Var_78 - (MR_Unsigned) Mask_75);
  }
}

static void MR_CALL 
libs__pickle__unpickle_from_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  {
    MR_Box closure = closure_arg;

    libs__pickle__IntroducedFrom__pred__unpickle_from_file__245__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Box) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), wrapper_arg_1);
  }
}

void MR_CALL 
libs__pickle__unpickle_from_file_5_p_0(
  MR_Word TypeInfo_for_T_32,
  MR_Word Unpicklers_6,
  MR_String FileName_7,
  MR_Word * Result_8)
{
  {
    MR_bool succeeded;
    MR_Word SeeResult_10;

    mercury__io__see_binary_4_p_0(FileName_7, &SeeResult_10);
    if ((SeeResult_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ReadResult_11;

      mercury__io__read_binary_file_as_bitmap_3_p_0(&ReadResult_11);
      mercury__io__seen_binary_2_p_0();
      if (((MR_tag((MR_Word) ReadResult_11)) == (MR_Integer) 1))
        *Result_8 = ReadResult_11;
      else
      {
        MR_Box Bitmap_12 = ((MR_Box) ((MR_hl_field(MR_mktag(0), ReadResult_11, (MR_Integer) 0))));
        MR_Word TryResult_13;
        MR_Word Var_25;

        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&libs__pickle_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (libs__pickle__unpickle_from_file_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (TypeInfo_for_T_32));
          MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (Unpicklers_6));
          MR_hl_field(MR_mktag(0), Var_25, 5) = ((MR_Box) (Bitmap_12));
        }
        mercury__exception__try_2_p_0(TypeInfo_for_T_32, Var_25, &TryResult_13);
        if (((MR_tag((MR_Word) TryResult_13)) == (MR_Integer) 2))
        {
          MR_Word Excp_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), TryResult_13, (MR_Integer) 0))));
          MR_String Msg_18;
          MR_Word Var_28;
          MR_Box conv0_Var_28;

          succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0), Excp_17, &conv0_Var_28);
          if (succeeded)
          {
            Var_28 = ((MR_Word) (conv0_Var_28));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            Msg_18 = (MR_String) (Var_28);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word Var_29;

            Var_29 = mercury__io__make_io_error_1_f_0(Msg_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
            }
          }
          else
            {
              mercury__exception__rethrow_1_p_0(TypeInfo_for_T_32, TryResult_13);
              return;
            }
        }
        else
        {
          MR_Box T_16 = (MR_hl_field(MR_mktag(1), TryResult_13, (MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = T_16;
          }
        }
      }
    }
    else
    {
      MR_Word Error_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SeeResult_10, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_31));
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
  {
    MR_Word Map0_9 = (MR_Word) (Unpicklers0_7);
    MR_Word Map_10;

    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), (MR_Word) (&libs__pickle_scalar_common_2[0]), ((MR_Box) (TypeCtorDesc_5)), ((MR_Box) (Unpickle_6)), Map0_9, &Map_10);
    *Unpicklers_8 = (MR_Word) (Map_10);
  }
}

MR_Word MR_CALL 
libs__pickle__init_unpicklers_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;

    Var_2 = mercury__map__init_0_f_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), (MR_Word) (&libs__pickle_scalar_common_2[0]));
    HeadVar__1_1 = (MR_Word) (Var_2);
    return HeadVar__1_1;
  }
}

static void MR_CALL 
libs__pickle__pickle_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    libs__pickle__pickle_char_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
libs__pickle__pickle_4_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word Pickles_5,
  MR_Box T_6)
{
  {
    MR_bool succeeded;
    MR_String String_8;
    MR_Box conv0_String_8;

    succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_30, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), T_6, &conv0_String_8);
    if (succeeded)
    {
      String_8 = ((MR_String) (conv0_String_8));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer Length_40;
      MR_Integer A_52;
      MR_Integer B_53;
      MR_Integer C_54;
      MR_Integer D_55;
      MR_Integer Var_56;
      MR_Integer Var_59;
      MR_Integer Var_62;
      MR_Integer Var_65;
      MR_Box conv1_STATE_VARIABLE_IO_18;

      Length_40 = mercury__string__length_1_f_0(String_8);
      Var_56 = mercury__int__f_62_62_2_f_0(Length_40, (MR_Integer) 24);
      A_52 = (Var_56 & (MR_Integer) 255);
      Var_59 = mercury__int__f_62_62_2_f_0(Length_40, (MR_Integer) 16);
      B_53 = (Var_59 & (MR_Integer) 255);
      Var_62 = mercury__int__f_62_62_2_f_0(Length_40, (MR_Integer) 8);
      C_54 = (Var_62 & (MR_Integer) 255);
      Var_65 = mercury__int__f_62_62_2_f_0(Length_40, (MR_Integer) 0);
      D_55 = (Var_65 & (MR_Integer) 255);
      mercury__io__write_byte_3_p_0(A_52);
      mercury__io__write_byte_3_p_0(B_53);
      mercury__io__write_byte_3_p_0(C_54);
      mercury__io__write_byte_3_p_0(D_55);
      mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&libs__pickle_scalar_common_3[3]), String_8, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
    }
    else
    {
      MR_Integer Int_9;
      MR_Box conv2_Int_9;

      succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_30, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), T_6, &conv2_Int_9);
      if (succeeded)
      {
        Int_9 = ((MR_Integer) (conv2_Int_9));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Integer A_76;
        MR_Integer B_77;
        MR_Integer C_78;
        MR_Integer D_79;
        MR_Integer Var_80;
        MR_Integer Var_83;
        MR_Integer Var_86;
        MR_Integer Var_89;

        Var_80 = mercury__int__f_62_62_2_f_0(Int_9, (MR_Integer) 24);
        A_76 = (Var_80 & (MR_Integer) 255);
        Var_83 = mercury__int__f_62_62_2_f_0(Int_9, (MR_Integer) 16);
        B_77 = (Var_83 & (MR_Integer) 255);
        Var_86 = mercury__int__f_62_62_2_f_0(Int_9, (MR_Integer) 8);
        C_78 = (Var_86 & (MR_Integer) 255);
        Var_89 = mercury__int__f_62_62_2_f_0(Int_9, (MR_Integer) 0);
        D_79 = (Var_89 & (MR_Integer) 255);
        mercury__io__write_byte_3_p_0(A_76);
        mercury__io__write_byte_3_p_0(B_77);
        mercury__io__write_byte_3_p_0(C_78);
        mercury__io__write_byte_3_p_0(D_79);
      }
      else
      {
        MR_Float Float_10;
        MR_Box conv3_Float_10;

        succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_30, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_float_0), T_6, &conv3_Float_10);
        if (succeeded)
        {
          Float_10 = MR_unbox_float(conv3_Float_10);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          libs__pickle__pickle_float_3_p_0(Float_10);
        else
        {
          MR_Char Char_11;
          MR_Box conv4_Char_11;

          succeeded = mercury__builtin__dynamic_cast_2_p_0(TypeInfo_for_T_30, (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), T_6, &conv4_Char_11);
          if (succeeded)
          {
            Char_11 = ((MR_Char) (MR_Word) conv4_Char_11);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            libs__pickle__pickle_char_3_p_0(Char_11);
          else
          {
            MR_Word Pickle_14;
            MR_Word TypeDesc_12;
            MR_Word TypeCtorDesc_13;

            TypeDesc_12 = mercury__type_desc__type_of_1_f_0(TypeInfo_for_T_30);
            TypeCtorDesc_13 = mercury__type_desc__type_ctor_1_f_0(TypeDesc_12);
            succeeded = libs__pickle__user_defined_pickler_3_p_0(Pickles_5, TypeCtorDesc_13, &Pickle_14);
            if (succeeded)
            {
              MR_Word Var_23;
              void MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
              MR_Box conv6_STATE_VARIABLE_IO_18;

              Var_23 = mercury__univ__univ_1_f_0(TypeInfo_for_T_30, T_6);
              func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pickle_14, (MR_Integer) 1))));
              func_5(((MR_Box) (Pickle_14)), ((MR_Box) (Pickles_5)), ((MR_Box) (Var_23)), ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_18);
            }
            else
            {
              MR_String Functor_15;
              MR_Integer Arity_16;

              mercury__deconstruct__functor_4_p_0(TypeInfo_for_T_30, T_6, (MR_Integer) 0, &Functor_15, &Arity_16);
              libs__pickle__pickle_string_3_p_0(Functor_15);
              libs__pickle__pickle_int32_3_p_0(Arity_16);
              libs__pickle__pickle_args_6_p_0(TypeInfo_for_T_30, Pickles_5, (MR_Integer) 0, Arity_16, T_6);
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
libs__pickle__pickle_args_6_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word Pickles_7,
  MR_Integer N_8,
  MR_Integer Arity_9,
  MR_Box T_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_8 == Arity_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Word TypeInfo_23_23;
      MR_Box Arg_12;

      succeeded = mercury__deconstruct__arg_4_p_0(TypeInfo_for_T_22, &TypeInfo_23_23, T_10, (MR_Integer) 0, N_8, &Arg_12);
      if (succeeded)
      {
        MR_Integer Var_17;
        MR_Integer next_value_of_N_8;

        libs__pickle__pickle_4_p_0(TypeInfo_23_23, Pickles_7, Arg_12);
        Var_17 = (MR_Integer) ((MR_Unsigned) N_8 + (MR_Unsigned) (MR_Integer) 1);
        // direct tailcall eliminated
        ;
        next_value_of_N_8 = Var_17;
        N_8 = next_value_of_N_8;
        continue;
      }
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140libs.pickle.pickle_args\'/6", (MR_String) "unable to deconstruct arg");
          return;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
libs__pickle__pickle_float_3_p_0(
  MR_Float Float_4)
{
  {
    MR_Integer A_6;
    MR_Integer B_7;
    MR_Integer A_21;
    MR_Integer B_22;
    MR_Integer C_23;
    MR_Integer D_24;
    MR_Integer Var_25;
    MR_Integer Var_28;
    MR_Integer Var_31;
    MR_Integer Var_34;
    MR_Integer A_45;
    MR_Integer B_46;
    MR_Integer C_47;
    MR_Integer D_48;
    MR_Integer Var_49;
    MR_Integer Var_52;
    MR_Integer Var_55;
    MR_Integer Var_58;

{
#define MR_PROC_LABEL libs__pickle__pickle_float_3_p_0

	MR_Float Flt;
	MR_Integer A;
	MR_Integer B;

	Flt =  Float_4 ;
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
	 A_6  = A;
	 B_7  = B;
}
    Var_25 = mercury__int__f_62_62_2_f_0(A_6, (MR_Integer) 24);
    A_21 = (Var_25 & (MR_Integer) 255);
    Var_28 = mercury__int__f_62_62_2_f_0(A_6, (MR_Integer) 16);
    B_22 = (Var_28 & (MR_Integer) 255);
    Var_31 = mercury__int__f_62_62_2_f_0(A_6, (MR_Integer) 8);
    C_23 = (Var_31 & (MR_Integer) 255);
    Var_34 = mercury__int__f_62_62_2_f_0(A_6, (MR_Integer) 0);
    D_24 = (Var_34 & (MR_Integer) 255);
    mercury__io__write_byte_3_p_0(A_21);
    mercury__io__write_byte_3_p_0(B_22);
    mercury__io__write_byte_3_p_0(C_23);
    mercury__io__write_byte_3_p_0(D_24);
    Var_49 = mercury__int__f_62_62_2_f_0(B_7, (MR_Integer) 24);
    A_45 = (Var_49 & (MR_Integer) 255);
    Var_52 = mercury__int__f_62_62_2_f_0(B_7, (MR_Integer) 16);
    B_46 = (Var_52 & (MR_Integer) 255);
    Var_55 = mercury__int__f_62_62_2_f_0(B_7, (MR_Integer) 8);
    C_47 = (Var_55 & (MR_Integer) 255);
    Var_58 = mercury__int__f_62_62_2_f_0(B_7, (MR_Integer) 0);
    D_48 = (Var_58 & (MR_Integer) 255);
    mercury__io__write_byte_3_p_0(A_45);
    mercury__io__write_byte_3_p_0(B_46);
    mercury__io__write_byte_3_p_0(C_47);
    mercury__io__write_byte_3_p_0(D_48);
  }
}

static void MR_CALL 
libs__pickle__pickle_string_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    libs__pickle__pickle_char_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
libs__pickle__pickle_string_3_p_0(
  MR_String String_4)
{
  {
    MR_Integer Length_6;
    MR_Integer A_20;
    MR_Integer B_21;
    MR_Integer C_22;
    MR_Integer D_23;
    MR_Integer Var_24;
    MR_Integer Var_27;
    MR_Integer Var_30;
    MR_Integer Var_33;
    MR_Box conv0_STATE_VARIABLE_IO_8;

    Length_6 = mercury__string__length_1_f_0(String_4);
    Var_24 = mercury__int__f_62_62_2_f_0(Length_6, (MR_Integer) 24);
    A_20 = (Var_24 & (MR_Integer) 255);
    Var_27 = mercury__int__f_62_62_2_f_0(Length_6, (MR_Integer) 16);
    B_21 = (Var_27 & (MR_Integer) 255);
    Var_30 = mercury__int__f_62_62_2_f_0(Length_6, (MR_Integer) 8);
    C_22 = (Var_30 & (MR_Integer) 255);
    Var_33 = mercury__int__f_62_62_2_f_0(Length_6, (MR_Integer) 0);
    D_23 = (Var_33 & (MR_Integer) 255);
    mercury__io__write_byte_3_p_0(A_20);
    mercury__io__write_byte_3_p_0(B_21);
    mercury__io__write_byte_3_p_0(C_22);
    mercury__io__write_byte_3_p_0(D_23);
    mercury__string__foldl_4_p_0((MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&libs__pickle_scalar_common_3[2]), String_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_8);
  }
}

static void MR_CALL 
libs__pickle__pickle_char_3_p_0(
  MR_Char Char_4)
{
  {
    MR_Integer Int_6;

    mercury__char__to_int_2_p_0(Char_4, &Int_6);
    mercury__io__write_byte_3_p_0(Int_6);
  }
}

static void MR_CALL 
libs__pickle__pickle_int32_3_p_0(
  MR_Integer Int_4)
{
  {
    MR_Integer A_6;
    MR_Integer B_7;
    MR_Integer C_8;
    MR_Integer D_9;
    MR_Integer Var_12;
    MR_Integer Var_15;
    MR_Integer Var_18;
    MR_Integer Var_21;

    Var_12 = mercury__int__f_62_62_2_f_0(Int_4, (MR_Integer) 24);
    A_6 = (Var_12 & (MR_Integer) 255);
    Var_15 = mercury__int__f_62_62_2_f_0(Int_4, (MR_Integer) 16);
    B_7 = (Var_15 & (MR_Integer) 255);
    Var_18 = mercury__int__f_62_62_2_f_0(Int_4, (MR_Integer) 8);
    C_8 = (Var_18 & (MR_Integer) 255);
    Var_21 = mercury__int__f_62_62_2_f_0(Int_4, (MR_Integer) 0);
    D_9 = (Var_21 & (MR_Integer) 255);
    mercury__io__write_byte_3_p_0(A_6);
    mercury__io__write_byte_3_p_0(B_7);
    mercury__io__write_byte_3_p_0(C_8);
    mercury__io__write_byte_3_p_0(D_9);
  }
}

static MR_bool MR_CALL 
libs__pickle__user_defined_pickler_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeCtorDesc_5,
  MR_Word * Pickle_6)
{
  {
    MR_bool succeeded;
    MR_Word Pickles_4 = (MR_Word) (HeadVar__1_1);
    MR_Word Pickle0_7;
    MR_Box conv0_Pickle0_7;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), (MR_Word) (&libs__pickle_scalar_common_1[0]), Pickles_4, ((MR_Box) (TypeCtorDesc_5)), &conv0_Pickle0_7);
    if (succeeded)
    {
      Pickle0_7 = ((MR_Word) (conv0_Pickle0_7));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
{
#define MR_PROC_LABEL libs__pickle__user_defined_pickler_3_p_0

	MR_Word A;
	MR_Word B;

	A =  Pickle0_7 ;
		{

    B = A;


		;}
#undef MR_PROC_LABEL
	 *Pickle_6  = B;
}
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
libs__pickle__register_pickler_4_p_0(
  MR_Word TypeCtorDesc_5,
  MR_Word Pickle_6,
  MR_Word Pickles0_7,
  MR_Word * Pickles_8)
{
  {
    MR_Word Map0_9 = (MR_Word) (Pickles0_7);
    MR_Word Map_10;

    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), (MR_Word) (&libs__pickle_scalar_common_1[0]), ((MR_Box) (TypeCtorDesc_5)), ((MR_Box) (Pickle_6)), Map0_9, &Map_10);
    *Pickles_8 = (MR_Word) (Map_10);
  }
}

MR_Word MR_CALL 
libs__pickle__init_picklers_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;
    MR_Word Var_2;

    Var_2 = mercury__map__init_0_f_0((MR_Word) (&mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0), (MR_Word) (&libs__pickle_scalar_common_1[0]));
    HeadVar__1_1 = (MR_Word) (Var_2);
    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__pickle____Unify____get_byte_out_of_range_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__pickle____Compare____get_byte_out_of_range_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____pickler_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__pickle____Unify____pickler_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____pickler_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__pickle____Compare____pickler_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____picklers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__pickle____Unify____picklers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____picklers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__pickle____Compare____picklers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_handle_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__pickle____Unify____unpickle_handle_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____unpickle_handle_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__pickle____Compare____unpickle_handle_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_state_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__pickle____Unify____unpickle_state_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____unpickle_state_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__pickle____Compare____unpickle_state_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____unpickler_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__pickle____Unify____unpickler_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____unpickler_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__pickle____Compare____unpickler_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____unpicklers_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = libs__pickle____Unify____unpicklers_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____unpicklers_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    libs__pickle____Compare____unpicklers_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
