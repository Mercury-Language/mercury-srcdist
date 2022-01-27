/*
** Automatically generated from `pickle.m'
** by the Mercury compiler,
** version 2016-10-30
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


/* :- module libs.pickle. */
/* :- implementation. */

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

static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3);

static MR_bool MR_CALL 
libs__pickle____Unify____pickler_pred_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____pickler_pred_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3);

static MR_bool MR_CALL 
libs__pickle____Unify____picklers_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____picklers_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3);

static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_handle_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____unpickle_handle_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3);

static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_state_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____unpickle_state_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3);

static MR_bool MR_CALL 
libs__pickle____Unify____unpickler_pred_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____unpickler_pred_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3);

static MR_bool MR_CALL 
libs__pickle____Unify____unpicklers_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2);

static void MR_CALL 
libs__pickle____Compare____unpicklers_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3);

static void MR_CALL 
libs__pickle__IntroducedFrom__pred__unpickle_from_file__245__1_4_p_0(
  MR_Word libs__pickle__TypeInfo_for_T_32,
  MR_Word libs__pickle__Unpicklers_6,
  MR_Box libs__pickle__Bitmap_12,
  MR_Box * libs__pickle__LambdaHeadVar__1_26);

static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0(
  MR_Word * libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__HeadVar__2_2,
  MR_Word libs__pickle__HeadVar__3_3);

static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0(
  MR_Word libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__HeadVar__2_2);

static void MR_CALL 
libs__pickle__reinterpret_ints_as_float_3_p_0(
  MR_Integer libs__pickle__A_1,
  MR_Integer libs__pickle__B_2,
  MR_Float * libs__pickle__Flt_3);

static void MR_CALL 
libs__pickle__unpickle_float_4_p_0(
  MR_Box libs__pickle__Handle_5,
  MR_Float * libs__pickle__Float_6,
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_10,
  MR_Integer * libs__pickle__STATE_VARIABLE_State_11);

static void MR_CALL 
libs__pickle__reinterpret_float_as_ints_3_p_0(
  MR_Float libs__pickle__Flt_1,
  MR_Integer * libs__pickle__A_2,
  MR_Integer * libs__pickle__B_3);

static void MR_CALL 
libs__pickle__pickle_float_3_p_0(
  MR_Float libs__pickle__Float_4);

static void MR_CALL 
libs__pickle__local_unsafe_set_char_4_p_0(
  MR_Char libs__pickle__Chr_1,
  MR_Integer libs__pickle__Index_2,
  MR_String libs__pickle__Str0_3,
  MR_String * libs__pickle__Str_4);

static void MR_CALL 
libs__pickle__allocate_string_2_p_0(
  MR_Integer libs__pickle__Length_1,
  MR_String * libs__pickle__Str_2);

static void MR_CALL 
libs__pickle__unpickle_string_2_7_p_0(
  MR_Box libs__pickle__Handle_8,
  MR_Integer libs__pickle__Index_9,
  MR_Integer libs__pickle__Length_10,
  MR_String libs__pickle__STATE_VARIABLE_String_0_14,
  MR_String * libs__pickle__STATE_VARIABLE_String_15,
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_16,
  MR_Integer * libs__pickle__STATE_VARIABLE_State_17);

static void MR_CALL 
libs__pickle__unpickle_string_4_p_0(
  MR_Box libs__pickle__Handle_5,
  MR_String * libs__pickle__String_6,
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_10,
  MR_Integer * libs__pickle__STATE_VARIABLE_State_11);

static void MR_CALL 
libs__pickle__pickle_string_3_p_0_1(
  MR_Box libs__pickle__closure_arg,
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box * libs__pickle__wrapper_arg_3);

static void MR_CALL 
libs__pickle__pickle_string_3_p_0(
  MR_String libs__pickle__String_4);

static void MR_CALL 
libs__pickle__unpickle_char_4_p_0(
  MR_Box libs__pickle__Handle_5,
  MR_Char * libs__pickle__Char_6,
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_9,
  MR_Integer * libs__pickle__STATE_VARIABLE_State_10);

static void MR_CALL 
libs__pickle__pickle_char_3_p_0(
  MR_Char libs__pickle__Char_4);

static void MR_CALL 
libs__pickle__unpickle_int32_4_p_0(
  MR_Box libs__pickle__Handle_5,
  MR_Integer * libs__pickle__Int_6,
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_13,
  MR_Integer * libs__pickle__STATE_VARIABLE_State_14);

static void MR_CALL 
libs__pickle__pickle_int32_3_p_0(
  MR_Integer libs__pickle__Int_4);

static void MR_CALL 
libs__pickle__unpickler_inst_cast_2_p_0(
  MR_Word libs__pickle__A_1,
  MR_Word * libs__pickle__B_2);

static void MR_CALL 
libs__pickle__unpickle_2_6_p_0_1(
  MR_Box libs__pickle__closure_arg,
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box * libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3,
  MR_Box * libs__pickle__wrapper_arg_4);

static void MR_CALL 
libs__pickle__unpickle_2_6_p_0(
  MR_Word libs__pickle__Unpicklers_7,
  MR_Box libs__pickle__Handle_8,
  MR_Word libs__pickle__TypeDesc_9,
  MR_Word * libs__pickle__Univ_10,
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_29,
  MR_Integer * libs__pickle__STATE_VARIABLE_State_30);

static void MR_CALL 
libs__pickle__pickler_inst_cast_2_p_0(
  MR_Word libs__pickle__A_1,
  MR_Word * libs__pickle__B_2);

static MR_bool MR_CALL 
libs__pickle__user_defined_pickler_3_p_0(
  MR_Word libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__TypeCtorDesc_5,
  MR_Word * libs__pickle__Pickle_6);

static void MR_CALL 
libs__pickle__pickle_args_6_p_0(
  MR_Word libs__pickle__TypeInfo_for_T_23,
  MR_Word libs__pickle__Pickles_7,
  MR_Integer libs__pickle__N_8,
  MR_Integer libs__pickle__Arity_9,
  MR_Box libs__pickle__T_10);

static void MR_CALL 
libs__pickle__unpickle_from_file_5_p_0_1(
  MR_Box libs__pickle__closure_arg,
  MR_Box * libs__pickle__wrapper_arg_1);

static void MR_CALL 
libs__pickle__pickle_4_p_0_1(
  MR_Box libs__pickle__closure_arg,
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box * libs__pickle__wrapper_arg_3);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (libs__pickle__pickle_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&libs__pickle_scalar_common_1[1])),
    ((MR_Box) (libs__pickle__pickle_string_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&libs__pickle__libs__pickle__type_ctor_info_unpicklers_0)),
    ((MR_Box) (&mercury__bitmap__bitmap__type_ctor_info_bitmap_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box libs__pickle_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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
    (MR_TypeInfo) &libs__pickle__libs__pickle__type_ctor_info_picklers_0,
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_TypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_pickler_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__pickle____Unify____pickler_pred_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____pickler_pred_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "pickler_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__pickle____vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0 },
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
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0,
    (MR_TypeInfo) &libs__pickle____vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0
  }
};

static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_picklers_0 = {
  (MR_String) "picklers",
  (MR_PseudoTypeInfo) &libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_picklers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__pickle____Unify____unpickle_handle_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____unpickle_handle_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "unpickle_handle",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_unpickle_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__pickle____Unify____unpickle_state_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____unpickle_state_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "unpickle_state",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_TypeInfo_Struct6 libs__pickle____vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_TypeInfo) &libs__pickle__libs__pickle__type_ctor_info_unpicklers_0,
    (MR_TypeInfo) &mercury__bitmap__bitmap__type_ctor_info_bitmap_0,
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0,
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_unpickler_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__pickle____Unify____unpickler_pred_0_0_10001)),
  ((MR_Box) (libs__pickle____Compare____unpickler_pred_0_0_10001)),
  (MR_String) "libs.pickle",
  (MR_String) "unpickler_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__pickle____vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 },
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
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0,
    (MR_TypeInfo) &libs__pickle____vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_unpicklers_0 = {
  (MR_String) "unpicklers",
  (MR_PseudoTypeInfo) &libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_unpicklers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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

static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2)
{
  {
    MR_bool libs__pickle__succeeded;

    {
      libs__pickle__succeeded = libs__pickle____Unify____get_byte_out_of_range_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
    return libs__pickle__succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3)
{
  {
    MR_Word libs__pickle__conv0_HeadVar__1_1;

    {
      libs__pickle____Compare____get_byte_out_of_range_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____pickler_pred_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2)
{
  {
    MR_bool libs__pickle__succeeded;

    {
      libs__pickle__succeeded = libs__pickle____Unify____pickler_pred_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
    return libs__pickle__succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____pickler_pred_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3)
{
  {
    MR_Word libs__pickle__conv0_HeadVar__1_1;

    {
      libs__pickle____Compare____pickler_pred_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____picklers_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2)
{
  {
    MR_bool libs__pickle__succeeded;

    {
      libs__pickle__succeeded = libs__pickle____Unify____picklers_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
    return libs__pickle__succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____picklers_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3)
{
  {
    MR_Word libs__pickle__conv0_HeadVar__1_1;

    {
      libs__pickle____Compare____picklers_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_handle_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2)
{
  {
    MR_bool libs__pickle__succeeded;

    {
      libs__pickle__succeeded = libs__pickle____Unify____unpickle_handle_0_0(((MR_Box) libs__pickle__wrapper_arg_1), ((MR_Box) libs__pickle__wrapper_arg_2));
    }
    return libs__pickle__succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____unpickle_handle_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3)
{
  {
    MR_Word libs__pickle__conv0_HeadVar__1_1;

    {
      libs__pickle____Compare____unpickle_handle_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Box) libs__pickle__wrapper_arg_2), ((MR_Box) libs__pickle__wrapper_arg_3));
    }
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_state_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2)
{
  {
    MR_bool libs__pickle__succeeded;

    {
      libs__pickle__succeeded = libs__pickle____Unify____unpickle_state_0_0(((MR_Integer) libs__pickle__wrapper_arg_1), ((MR_Integer) libs__pickle__wrapper_arg_2));
    }
    return libs__pickle__succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____unpickle_state_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3)
{
  {
    MR_Word libs__pickle__conv0_HeadVar__1_1;

    {
      libs__pickle____Compare____unpickle_state_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Integer) libs__pickle__wrapper_arg_2), ((MR_Integer) libs__pickle__wrapper_arg_3));
    }
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____unpickler_pred_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2)
{
  {
    MR_bool libs__pickle__succeeded;

    {
      libs__pickle__succeeded = libs__pickle____Unify____unpickler_pred_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
    return libs__pickle__succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____unpickler_pred_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3)
{
  {
    MR_Word libs__pickle__conv0_HeadVar__1_1;

    {
      libs__pickle____Compare____unpickler_pred_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____unpicklers_0_0_10001(
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2)
{
  {
    MR_bool libs__pickle__succeeded;

    {
      libs__pickle__succeeded = libs__pickle____Unify____unpicklers_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
    return libs__pickle__succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____unpicklers_0_0_10001(
  MR_Box * libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3)
{
  {
    MR_Word libs__pickle__conv0_HeadVar__1_1;

    {
      libs__pickle____Compare____unpicklers_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
libs__pickle__IntroducedFrom__pred__unpickle_from_file__245__1_4_p_0(
  MR_Word libs__pickle__TypeInfo_for_T_32,
  MR_Word libs__pickle__Unpicklers_6,
  MR_Box libs__pickle__Bitmap_12,
  MR_Box * libs__pickle__LambdaHeadVar__1_26)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Word libs__pickle__Univ_40;
    MR_Word libs__pickle__V_41_41;
    MR_Integer libs__pickle___State_15;

    {
      libs__pickle__V_41_41 = mercury__type_desc__type_of_1_f_0(libs__pickle__TypeInfo_for_T_32);
    }
    {
      libs__pickle__unpickle_2_6_p_0(libs__pickle__Unpicklers_6, libs__pickle__Bitmap_12, libs__pickle__V_41_41, &libs__pickle__Univ_40, (MR_Integer) 0, &libs__pickle___State_15);
    }
    {
      mercury__univ__det_univ_to_type_2_p_0(libs__pickle__TypeInfo_for_T_32, libs__pickle__Univ_40, libs__pickle__LambdaHeadVar__1_26);
    }
  }
}

void MR_CALL 
libs__pickle____Compare____unpicklers_0_0(
  MR_Word * libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__HeadVar__2_2,
  MR_Word libs__pickle__HeadVar__3_3)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__CastX_6 = (MR_Integer) libs__pickle__HeadVar__2_2;
    MR_Integer libs__pickle__CastY_7 = (MR_Integer) libs__pickle__HeadVar__3_3;

    libs__pickle__succeeded = (libs__pickle__CastX_6 == libs__pickle__CastY_7);
    if (libs__pickle__succeeded)
      *libs__pickle__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word libs__pickle__V_4_4 = (MR_Word) libs__pickle__HeadVar__2_2;
        MR_Word libs__pickle__V_5_5 = (MR_Word) libs__pickle__HeadVar__3_3;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &libs__pickle_scalar_common_3[1], libs__pickle__HeadVar__1_1, ((MR_Box) (libs__pickle__V_4_4)), ((MR_Box) (libs__pickle__V_5_5)));
        }
      }
  }
}

MR_bool MR_CALL 
libs__pickle____Unify____unpicklers_0_0(
  MR_Word libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__HeadVar__2_2)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__CastX_5 = (MR_Integer) libs__pickle__HeadVar__1_1;
    MR_Integer libs__pickle__CastY_6 = (MR_Integer) libs__pickle__HeadVar__2_2;

    libs__pickle__succeeded = (libs__pickle__CastX_5 == libs__pickle__CastY_6);
    if (libs__pickle__succeeded)
      libs__pickle__succeeded = MR_TRUE;
    else
      {
        MR_Word libs__pickle__V_3_3 = (MR_Word) libs__pickle__HeadVar__1_1;
        MR_Word libs__pickle__V_4_4 = (MR_Word) libs__pickle__HeadVar__2_2;

        {
          libs__pickle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__pickle_scalar_common_3[1], ((MR_Box) (libs__pickle__V_3_3)), ((MR_Box) (libs__pickle__V_4_4)));
        }
      }
    return libs__pickle__succeeded;
  }
}

void MR_CALL 
libs__pickle____Compare____unpickler_pred_0_0(
  MR_Word * libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__HeadVar__2_2,
  MR_Word libs__pickle__HeadVar__3_3)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Word libs__pickle__Cast_HeadVar1_4 = libs__pickle__HeadVar__2_2;
    MR_Word libs__pickle__Cast_HeadVar2_5 = libs__pickle__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &libs__pickle_scalar_common_2[0], libs__pickle__HeadVar__1_1, ((MR_Box) (libs__pickle__Cast_HeadVar1_4)), ((MR_Box) (libs__pickle__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
libs__pickle____Unify____unpickler_pred_0_0(
  MR_Word libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__HeadVar__2_2)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Word libs__pickle__Cast_HeadVar1_3 = libs__pickle__HeadVar__1_1;
    MR_Word libs__pickle__Cast_HeadVar2_4 = libs__pickle__HeadVar__2_2;

    {
      libs__pickle__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) libs__pickle__Cast_HeadVar1_3, (MR_Word) libs__pickle__Cast_HeadVar2_4);
    }
    return libs__pickle__succeeded;
  }
}

void MR_CALL 
libs__pickle____Compare____unpickle_state_0_0(
  MR_Word * libs__pickle__HeadVar__1_1,
  MR_Integer libs__pickle__HeadVar__2_2,
  MR_Integer libs__pickle__HeadVar__3_3)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__Cast_HeadVar1_4 = libs__pickle__HeadVar__2_2;
    MR_Integer libs__pickle__Cast_HeadVar2_5 = libs__pickle__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__pickle__HeadVar__1_1, libs__pickle__Cast_HeadVar1_4, libs__pickle__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__pickle____Unify____unpickle_state_0_0(
  MR_Integer libs__pickle__HeadVar__1_1,
  MR_Integer libs__pickle__HeadVar__2_2)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__Cast_HeadVar1_3 = libs__pickle__HeadVar__1_1;
    MR_Integer libs__pickle__Cast_HeadVar2_4 = libs__pickle__HeadVar__2_2;

    libs__pickle__succeeded = (libs__pickle__Cast_HeadVar1_3 == libs__pickle__Cast_HeadVar2_4);
    return libs__pickle__succeeded;
  }
}

void MR_CALL 
libs__pickle____Compare____unpickle_handle_0_0(
  MR_Word * libs__pickle__HeadVar__1_1,
  MR_Box libs__pickle__HeadVar__2_2,
  MR_Box libs__pickle__HeadVar__3_3)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Box libs__pickle__Cast_HeadVar1_4 = libs__pickle__HeadVar__2_2;
    MR_Box libs__pickle__Cast_HeadVar2_5 = libs__pickle__HeadVar__3_3;

    {
      mercury__bitmap____Compare____bitmap_0_0(libs__pickle__HeadVar__1_1, libs__pickle__Cast_HeadVar1_4, libs__pickle__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__pickle____Unify____unpickle_handle_0_0(
  MR_Box libs__pickle__HeadVar__1_1,
  MR_Box libs__pickle__HeadVar__2_2)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Box libs__pickle__Cast_HeadVar1_3 = libs__pickle__HeadVar__1_1;
    MR_Box libs__pickle__Cast_HeadVar2_4 = libs__pickle__HeadVar__2_2;

    {
      libs__pickle__succeeded = mercury__bitmap____Unify____bitmap_0_0(libs__pickle__Cast_HeadVar1_3, libs__pickle__Cast_HeadVar2_4);
    }
    return libs__pickle__succeeded;
  }
}

void MR_CALL 
libs__pickle____Compare____picklers_0_0(
  MR_Word * libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__HeadVar__2_2,
  MR_Word libs__pickle__HeadVar__3_3)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__CastX_6 = (MR_Integer) libs__pickle__HeadVar__2_2;
    MR_Integer libs__pickle__CastY_7 = (MR_Integer) libs__pickle__HeadVar__3_3;

    libs__pickle__succeeded = (libs__pickle__CastX_6 == libs__pickle__CastY_7);
    if (libs__pickle__succeeded)
      *libs__pickle__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word libs__pickle__V_4_4 = (MR_Word) libs__pickle__HeadVar__2_2;
        MR_Word libs__pickle__V_5_5 = (MR_Word) libs__pickle__HeadVar__3_3;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &libs__pickle_scalar_common_3[0], libs__pickle__HeadVar__1_1, ((MR_Box) (libs__pickle__V_4_4)), ((MR_Box) (libs__pickle__V_5_5)));
        }
      }
  }
}

MR_bool MR_CALL 
libs__pickle____Unify____picklers_0_0(
  MR_Word libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__HeadVar__2_2)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__CastX_5 = (MR_Integer) libs__pickle__HeadVar__1_1;
    MR_Integer libs__pickle__CastY_6 = (MR_Integer) libs__pickle__HeadVar__2_2;

    libs__pickle__succeeded = (libs__pickle__CastX_5 == libs__pickle__CastY_6);
    if (libs__pickle__succeeded)
      libs__pickle__succeeded = MR_TRUE;
    else
      {
        MR_Word libs__pickle__V_3_3 = (MR_Word) libs__pickle__HeadVar__1_1;
        MR_Word libs__pickle__V_4_4 = (MR_Word) libs__pickle__HeadVar__2_2;

        {
          libs__pickle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__pickle_scalar_common_3[0], ((MR_Box) (libs__pickle__V_3_3)), ((MR_Box) (libs__pickle__V_4_4)));
        }
      }
    return libs__pickle__succeeded;
  }
}

void MR_CALL 
libs__pickle____Compare____pickler_pred_0_0(
  MR_Word * libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__HeadVar__2_2,
  MR_Word libs__pickle__HeadVar__3_3)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Word libs__pickle__Cast_HeadVar1_4 = libs__pickle__HeadVar__2_2;
    MR_Word libs__pickle__Cast_HeadVar2_5 = libs__pickle__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &libs__pickle_scalar_common_1[0], libs__pickle__HeadVar__1_1, ((MR_Box) (libs__pickle__Cast_HeadVar1_4)), ((MR_Box) (libs__pickle__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
libs__pickle____Unify____pickler_pred_0_0(
  MR_Word libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__HeadVar__2_2)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Word libs__pickle__Cast_HeadVar1_3 = libs__pickle__HeadVar__1_1;
    MR_Word libs__pickle__Cast_HeadVar2_4 = libs__pickle__HeadVar__2_2;

    {
      libs__pickle__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) libs__pickle__Cast_HeadVar1_3, (MR_Word) libs__pickle__Cast_HeadVar2_4);
    }
    return libs__pickle__succeeded;
  }
}

static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0(
  MR_Word * libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__HeadVar__2_2,
  MR_Word libs__pickle__HeadVar__3_3)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__CastX_6 = (MR_Integer) libs__pickle__HeadVar__2_2;
    MR_Integer libs__pickle__CastY_7 = (MR_Integer) libs__pickle__HeadVar__3_3;

    libs__pickle__succeeded = (libs__pickle__CastX_6 == libs__pickle__CastY_7);
    if (libs__pickle__succeeded)
      *libs__pickle__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String libs__pickle__V_4_4 = (MR_String) libs__pickle__HeadVar__2_2;
        MR_String libs__pickle__V_5_5 = (MR_String) libs__pickle__HeadVar__3_3;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(libs__pickle__HeadVar__1_1, libs__pickle__V_4_4, libs__pickle__V_5_5);
        }
      }
  }
}

static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0(
  MR_Word libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__HeadVar__2_2)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__CastX_5 = (MR_Integer) libs__pickle__HeadVar__1_1;
    MR_Integer libs__pickle__CastY_6 = (MR_Integer) libs__pickle__HeadVar__2_2;

    libs__pickle__succeeded = (libs__pickle__CastX_5 == libs__pickle__CastY_6);
    if (libs__pickle__succeeded)
      libs__pickle__succeeded = MR_TRUE;
    else
      {
        MR_String libs__pickle__V_3_3 = (MR_String) libs__pickle__HeadVar__1_1;
        MR_String libs__pickle__V_4_4 = (MR_String) libs__pickle__HeadVar__2_2;

        libs__pickle__succeeded = (strcmp(libs__pickle__V_3_3, libs__pickle__V_4_4) == 0);
      }
    return libs__pickle__succeeded;
  }
}

static void MR_CALL 
libs__pickle__reinterpret_ints_as_float_3_p_0(
  MR_Integer libs__pickle__A_1,
  MR_Integer libs__pickle__B_2,
  MR_Float * libs__pickle__Flt_3)
{
  {
    MR_bool libs__pickle__succeeded;

{
#define MR_PROC_LABEL libs__pickle__reinterpret_ints_as_float_3_p_0

	MR_Integer A;
	MR_Integer B;
	MR_Float Flt;

	A =  libs__pickle__A_1 ;
	B =  libs__pickle__B_2 ;
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
	 *libs__pickle__Flt_3  = Flt;
}
  }
}

static void MR_CALL 
libs__pickle__unpickle_float_4_p_0(
  MR_Box libs__pickle__Handle_5,
  MR_Float * libs__pickle__Float_6,
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_10,
  MR_Integer * libs__pickle__STATE_VARIABLE_State_11)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__A_8;
    MR_Integer libs__pickle__B_9;
    MR_Integer libs__pickle__STATE_VARIABLE_State_12_12;

    {
      libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_5, &libs__pickle__A_8, libs__pickle__STATE_VARIABLE_State_0_10, &libs__pickle__STATE_VARIABLE_State_12_12);
    }
    {
      libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_5, &libs__pickle__B_9, libs__pickle__STATE_VARIABLE_State_12_12, libs__pickle__STATE_VARIABLE_State_11);
    }
{
#define MR_PROC_LABEL libs__pickle__unpickle_float_4_p_0

	MR_Integer A;
	MR_Integer B;
	MR_Float Flt;

	A =  libs__pickle__A_8 ;
	B =  libs__pickle__B_9 ;
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
	 *libs__pickle__Float_6  = Flt;
}
  }
}

static void MR_CALL 
libs__pickle__reinterpret_float_as_ints_3_p_0(
  MR_Float libs__pickle__Flt_1,
  MR_Integer * libs__pickle__A_2,
  MR_Integer * libs__pickle__B_3)
{
  {
    MR_bool libs__pickle__succeeded;

{
#define MR_PROC_LABEL libs__pickle__reinterpret_float_as_ints_3_p_0

	MR_Float Flt;
	MR_Integer A;
	MR_Integer B;

	Flt =  libs__pickle__Flt_1 ;
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
	 *libs__pickle__A_2  = A;
	 *libs__pickle__B_3  = B;
}
  }
}

static void MR_CALL 
libs__pickle__pickle_float_3_p_0(
  MR_Float libs__pickle__Float_4)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__A_6;
    MR_Integer libs__pickle__B_7;
    MR_Integer libs__pickle__A_21;
    MR_Integer libs__pickle__B_22;
    MR_Integer libs__pickle__C_23;
    MR_Integer libs__pickle__D_24;
    MR_Integer libs__pickle__V_25_25;
    MR_Integer libs__pickle__V_28_28;
    MR_Integer libs__pickle__V_31_31;
    MR_Integer libs__pickle__V_34_34;
    MR_Integer libs__pickle__A_45;
    MR_Integer libs__pickle__B_46;
    MR_Integer libs__pickle__C_47;
    MR_Integer libs__pickle__D_48;
    MR_Integer libs__pickle__V_49_49;
    MR_Integer libs__pickle__V_52_52;
    MR_Integer libs__pickle__V_55_55;
    MR_Integer libs__pickle__V_58_58;

{
#define MR_PROC_LABEL libs__pickle__pickle_float_3_p_0

	MR_Float Flt;
	MR_Integer A;
	MR_Integer B;

	Flt =  libs__pickle__Float_4 ;
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
	 libs__pickle__A_6  = A;
	 libs__pickle__B_7  = B;
}
    {
      libs__pickle__V_25_25 = mercury__int__f_62_62_2_f_0(libs__pickle__A_6, (MR_Integer) 24);
    }
    libs__pickle__A_21 = (libs__pickle__V_25_25 & (MR_Integer) 255);
    {
      libs__pickle__V_28_28 = mercury__int__f_62_62_2_f_0(libs__pickle__A_6, (MR_Integer) 16);
    }
    libs__pickle__B_22 = (libs__pickle__V_28_28 & (MR_Integer) 255);
    {
      libs__pickle__V_31_31 = mercury__int__f_62_62_2_f_0(libs__pickle__A_6, (MR_Integer) 8);
    }
    libs__pickle__C_23 = (libs__pickle__V_31_31 & (MR_Integer) 255);
    {
      libs__pickle__V_34_34 = mercury__int__f_62_62_2_f_0(libs__pickle__A_6, (MR_Integer) 0);
    }
    libs__pickle__D_24 = (libs__pickle__V_34_34 & (MR_Integer) 255);
    {
      mercury__io__write_byte_3_p_0(libs__pickle__A_21);
    }
    {
      mercury__io__write_byte_3_p_0(libs__pickle__B_22);
    }
    {
      mercury__io__write_byte_3_p_0(libs__pickle__C_23);
    }
    {
      mercury__io__write_byte_3_p_0(libs__pickle__D_24);
    }
    {
      libs__pickle__V_49_49 = mercury__int__f_62_62_2_f_0(libs__pickle__B_7, (MR_Integer) 24);
    }
    libs__pickle__A_45 = (libs__pickle__V_49_49 & (MR_Integer) 255);
    {
      libs__pickle__V_52_52 = mercury__int__f_62_62_2_f_0(libs__pickle__B_7, (MR_Integer) 16);
    }
    libs__pickle__B_46 = (libs__pickle__V_52_52 & (MR_Integer) 255);
    {
      libs__pickle__V_55_55 = mercury__int__f_62_62_2_f_0(libs__pickle__B_7, (MR_Integer) 8);
    }
    libs__pickle__C_47 = (libs__pickle__V_55_55 & (MR_Integer) 255);
    {
      libs__pickle__V_58_58 = mercury__int__f_62_62_2_f_0(libs__pickle__B_7, (MR_Integer) 0);
    }
    libs__pickle__D_48 = (libs__pickle__V_58_58 & (MR_Integer) 255);
    {
      mercury__io__write_byte_3_p_0(libs__pickle__A_45);
    }
    {
      mercury__io__write_byte_3_p_0(libs__pickle__B_46);
    }
    {
      mercury__io__write_byte_3_p_0(libs__pickle__C_47);
    }
    {
      mercury__io__write_byte_3_p_0(libs__pickle__D_48);
    }
  }
}

static void MR_CALL 
libs__pickle__local_unsafe_set_char_4_p_0(
  MR_Char libs__pickle__Chr_1,
  MR_Integer libs__pickle__Index_2,
  MR_String libs__pickle__Str0_3,
  MR_String * libs__pickle__Str_4)
{
  {
    MR_bool libs__pickle__succeeded;

{
#define MR_PROC_LABEL libs__pickle__local_unsafe_set_char_4_p_0

	MR_Char Chr;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;

	Chr =  libs__pickle__Chr_1 ;
	Index =  libs__pickle__Index_2 ;
	Str0 =  libs__pickle__Str0_3 ;
		{

    Str0[Index] = Chr;
    Str = Str0;


		;}
#undef MR_PROC_LABEL
	 *libs__pickle__Str_4  = Str;
}
  }
}

static void MR_CALL 
libs__pickle__allocate_string_2_p_0(
  MR_Integer libs__pickle__Length_1,
  MR_String * libs__pickle__Str_2)
{
  {
    MR_bool libs__pickle__succeeded;

{
#define MR_PROC_LABEL libs__pickle__allocate_string_2_p_0

	MR_Integer Length;
	MR_String Str;

	Length =  libs__pickle__Length_1 ;
		{

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';


		;}
#undef MR_PROC_LABEL
	 *libs__pickle__Str_2  = Str;
}
  }
}

static void MR_CALL 
libs__pickle__unpickle_string_2_7_p_0(
  MR_Box libs__pickle__Handle_8,
  MR_Integer libs__pickle__Index_9,
  MR_Integer libs__pickle__Length_10,
  MR_String libs__pickle__STATE_VARIABLE_String_0_14,
  MR_String * libs__pickle__STATE_VARIABLE_String_15,
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_16,
  MR_Integer * libs__pickle__STATE_VARIABLE_State_17)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__pickle__succeeded = (libs__pickle__Index_9 == libs__pickle__Length_10);

        if (libs__pickle__succeeded)
          {
            *libs__pickle__STATE_VARIABLE_State_17 = libs__pickle__STATE_VARIABLE_State_0_16;
            *libs__pickle__STATE_VARIABLE_String_15 = libs__pickle__STATE_VARIABLE_String_0_14;
          }
        else
          {
            MR_Char libs__pickle__Char_13;
            MR_Integer libs__pickle__STATE_VARIABLE_State_18_18 = (libs__pickle__STATE_VARIABLE_State_0_16 + (MR_Integer) 1);
            MR_String libs__pickle__STATE_VARIABLE_String_19_19;
            MR_Integer libs__pickle__V_20_20;
            MR_Integer libs__pickle__Byte_29;

            {
              libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_8, libs__pickle__STATE_VARIABLE_State_0_16);
            }
            if (libs__pickle__succeeded)
              {
                libs__pickle__Byte_29 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_0_16, libs__pickle__Handle_8);
              }
            else
              {
                MR_String libs__pickle__Msg_34;
                MR_String libs__pickle__V_37_37;
                MR_String libs__pickle__V_38_38;
                MR_Word libs__pickle__V_40_40;

                {
                  libs__pickle__V_38_38 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_0_16);
                }
                {
                  libs__pickle__V_37_37 = mercury__string__f_43_43_2_f_0(libs__pickle__V_38_38, (MR_String) " is out of range");
                }
                {
                  libs__pickle__Msg_34 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_37_37);
                }
                libs__pickle__V_40_40 = (MR_Word) libs__pickle__Msg_34;
                {
                  mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_40_40)));
                  return;
                }
              }
            {
              mercury__char__det_from_int_2_p_0(libs__pickle__Byte_29, &libs__pickle__Char_13);
            }
{
#define MR_PROC_LABEL libs__pickle__unpickle_string_2_7_p_0

	MR_Char Chr;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;

	Chr =  libs__pickle__Char_13 ;
	Index =  libs__pickle__Index_9 ;
	Str0 =  libs__pickle__STATE_VARIABLE_String_0_14 ;
		{

    Str0[Index] = Chr;
    Str = Str0;


		;}
#undef MR_PROC_LABEL
	 libs__pickle__STATE_VARIABLE_String_19_19  = Str;
}
            libs__pickle__V_20_20 = (libs__pickle__Index_9 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Integer libs__pickle__Index__tmp_copy_9 = libs__pickle__V_20_20;
              MR_String libs__pickle__STATE_VARIABLE_String_0__tmp_copy_14 = libs__pickle__STATE_VARIABLE_String_19_19;
              MR_Integer libs__pickle__STATE_VARIABLE_State_0__tmp_copy_16 = libs__pickle__STATE_VARIABLE_State_18_18;

              libs__pickle__STATE_VARIABLE_State_0_16 = libs__pickle__STATE_VARIABLE_State_0__tmp_copy_16;
              libs__pickle__STATE_VARIABLE_String_0_14 = libs__pickle__STATE_VARIABLE_String_0__tmp_copy_14;
              libs__pickle__Index_9 = libs__pickle__Index__tmp_copy_9;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
libs__pickle__unpickle_string_4_p_0(
  MR_Box libs__pickle__Handle_5,
  MR_String * libs__pickle__String_6,
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_10,
  MR_Integer * libs__pickle__STATE_VARIABLE_State_11)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__Length_8;
    MR_String libs__pickle__String0_9;
    MR_Integer libs__pickle__STATE_VARIABLE_State_12_12;

    {
      libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_5, &libs__pickle__Length_8, libs__pickle__STATE_VARIABLE_State_0_10, &libs__pickle__STATE_VARIABLE_State_12_12);
    }
{
#define MR_PROC_LABEL libs__pickle__unpickle_string_4_p_0

	MR_Integer Length;
	MR_String Str;

	Length =  libs__pickle__Length_8 ;
		{

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';


		;}
#undef MR_PROC_LABEL
	 libs__pickle__String0_9  = Str;
}
    {
      libs__pickle__unpickle_string_2_7_p_0(libs__pickle__Handle_5, (MR_Integer) 0, libs__pickle__Length_8, libs__pickle__String0_9, libs__pickle__String_6, libs__pickle__STATE_VARIABLE_State_12_12, libs__pickle__STATE_VARIABLE_State_11);
    }
  }
}

static void MR_CALL 
libs__pickle__pickle_string_3_p_0_1(
  MR_Box libs__pickle__closure_arg,
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box * libs__pickle__wrapper_arg_3)
{
  {
    MR_Box libs__pickle__closure = libs__pickle__closure_arg;

    {
      libs__pickle__pickle_char_3_p_0(((MR_Char) (MR_Word) libs__pickle__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
libs__pickle__pickle_string_3_p_0(
  MR_String libs__pickle__String_4)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__Length_6;
    MR_Integer libs__pickle__A_20;
    MR_Integer libs__pickle__B_21;
    MR_Integer libs__pickle__C_22;
    MR_Integer libs__pickle__D_23;
    MR_Integer libs__pickle__V_24_24;
    MR_Integer libs__pickle__V_27_27;
    MR_Integer libs__pickle__V_30_30;
    MR_Integer libs__pickle__V_33_33;
    MR_Box libs__pickle__conv0_STATE_VARIABLE_IO_8;

    {
      libs__pickle__Length_6 = mercury__string__length_1_f_0(libs__pickle__String_4);
    }
    {
      libs__pickle__V_24_24 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_6, (MR_Integer) 24);
    }
    libs__pickle__A_20 = (libs__pickle__V_24_24 & (MR_Integer) 255);
    {
      libs__pickle__V_27_27 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_6, (MR_Integer) 16);
    }
    libs__pickle__B_21 = (libs__pickle__V_27_27 & (MR_Integer) 255);
    {
      libs__pickle__V_30_30 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_6, (MR_Integer) 8);
    }
    libs__pickle__C_22 = (libs__pickle__V_30_30 & (MR_Integer) 255);
    {
      libs__pickle__V_33_33 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_6, (MR_Integer) 0);
    }
    libs__pickle__D_23 = (libs__pickle__V_33_33 & (MR_Integer) 255);
    {
      mercury__io__write_byte_3_p_0(libs__pickle__A_20);
    }
    {
      mercury__io__write_byte_3_p_0(libs__pickle__B_21);
    }
    {
      mercury__io__write_byte_3_p_0(libs__pickle__C_22);
    }
    {
      mercury__io__write_byte_3_p_0(libs__pickle__D_23);
    }
    {
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &libs__pickle_scalar_common_3[3], libs__pickle__String_4, ((MR_Box) ((MR_Integer) 0)), &libs__pickle__conv0_STATE_VARIABLE_IO_8);
    }
  }
}

static void MR_CALL 
libs__pickle__unpickle_char_4_p_0(
  MR_Box libs__pickle__Handle_5,
  MR_Char * libs__pickle__Char_6,
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_9,
  MR_Integer * libs__pickle__STATE_VARIABLE_State_10)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__Byte_8;

    *libs__pickle__STATE_VARIABLE_State_10 = (libs__pickle__STATE_VARIABLE_State_0_9 + (MR_Integer) 1);
    {
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_0_9);
    }
    if (libs__pickle__succeeded)
      {
        libs__pickle__Byte_8 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_0_9, libs__pickle__Handle_5);
      }
    else
      {
        MR_String libs__pickle__Msg_15;
        MR_String libs__pickle__V_18_18;
        MR_String libs__pickle__V_19_19;
        MR_Word libs__pickle__V_21_21;

        {
          libs__pickle__V_19_19 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_0_9);
        }
        {
          libs__pickle__V_18_18 = mercury__string__f_43_43_2_f_0(libs__pickle__V_19_19, (MR_String) " is out of range");
        }
        {
          libs__pickle__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_18_18);
        }
        libs__pickle__V_21_21 = (MR_Word) libs__pickle__Msg_15;
        {
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_21_21)));
          return;
        }
      }
    {
      mercury__char__det_from_int_2_p_0(libs__pickle__Byte_8, libs__pickle__Char_6);
    }
  }
}

static void MR_CALL 
libs__pickle__pickle_char_3_p_0(
  MR_Char libs__pickle__Char_4)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__Int_6;

    {
      mercury__char__to_int_2_p_0(libs__pickle__Char_4, &libs__pickle__Int_6);
    }
    {
      mercury__io__write_byte_3_p_0(libs__pickle__Int_6);
    }
  }
}

static void MR_CALL 
libs__pickle__unpickle_int32_4_p_0(
  MR_Box libs__pickle__Handle_5,
  MR_Integer * libs__pickle__Int_6,
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_13,
  MR_Integer * libs__pickle__STATE_VARIABLE_State_14)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__A_8;
    MR_Integer libs__pickle__B_9;
    MR_Integer libs__pickle__C_10;
    MR_Integer libs__pickle__D_11;
    MR_Integer libs__pickle__Int0_12;
    MR_Integer libs__pickle__STATE_VARIABLE_State_15_15 = (libs__pickle__STATE_VARIABLE_State_0_13 + (MR_Integer) 1);
    MR_Integer libs__pickle__STATE_VARIABLE_State_16_16;
    MR_Integer libs__pickle__STATE_VARIABLE_State_17_17;
    MR_Integer libs__pickle__V_19_19;
    MR_Integer libs__pickle__V_20_20;
    MR_Integer libs__pickle__V_21_21;
    MR_Integer libs__pickle__V_23_23;
    MR_Integer libs__pickle__V_25_25;
    MR_Integer libs__pickle__V_27_27;
    MR_Integer libs__pickle__Mask_75;
    MR_Integer libs__pickle__V_78_78;

    {
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_0_13);
    }
    if (libs__pickle__succeeded)
      {
        libs__pickle__A_8 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_0_13, libs__pickle__Handle_5);
      }
    else
      {
        MR_String libs__pickle__Msg_32;
        MR_String libs__pickle__V_35_35;
        MR_String libs__pickle__V_36_36;
        MR_Word libs__pickle__V_38_38;

        {
          libs__pickle__V_36_36 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_0_13);
        }
        {
          libs__pickle__V_35_35 = mercury__string__f_43_43_2_f_0(libs__pickle__V_36_36, (MR_String) " is out of range");
        }
        {
          libs__pickle__Msg_32 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_35_35);
        }
        libs__pickle__V_38_38 = (MR_Word) libs__pickle__Msg_32;
        {
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_38_38)));
          return;
        }
      }
    libs__pickle__STATE_VARIABLE_State_16_16 = (libs__pickle__STATE_VARIABLE_State_15_15 + (MR_Integer) 1);
    {
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_15_15);
    }
    if (libs__pickle__succeeded)
      {
        libs__pickle__B_9 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_15_15, libs__pickle__Handle_5);
      }
    else
      {
        MR_String libs__pickle__Msg_43;
        MR_String libs__pickle__V_46_46;
        MR_String libs__pickle__V_47_47;
        MR_Word libs__pickle__V_49_49;

        {
          libs__pickle__V_47_47 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_15_15);
        }
        {
          libs__pickle__V_46_46 = mercury__string__f_43_43_2_f_0(libs__pickle__V_47_47, (MR_String) " is out of range");
        }
        {
          libs__pickle__Msg_43 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_46_46);
        }
        libs__pickle__V_49_49 = (MR_Word) libs__pickle__Msg_43;
        {
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_49_49)));
          return;
        }
      }
    libs__pickle__STATE_VARIABLE_State_17_17 = (libs__pickle__STATE_VARIABLE_State_16_16 + (MR_Integer) 1);
    {
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_16_16);
    }
    if (libs__pickle__succeeded)
      {
        libs__pickle__C_10 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_16_16, libs__pickle__Handle_5);
      }
    else
      {
        MR_String libs__pickle__Msg_54;
        MR_String libs__pickle__V_57_57;
        MR_String libs__pickle__V_58_58;
        MR_Word libs__pickle__V_60_60;

        {
          libs__pickle__V_58_58 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_16_16);
        }
        {
          libs__pickle__V_57_57 = mercury__string__f_43_43_2_f_0(libs__pickle__V_58_58, (MR_String) " is out of range");
        }
        {
          libs__pickle__Msg_54 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_57_57);
        }
        libs__pickle__V_60_60 = (MR_Word) libs__pickle__Msg_54;
        {
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_60_60)));
          return;
        }
      }
    *libs__pickle__STATE_VARIABLE_State_14 = (libs__pickle__STATE_VARIABLE_State_17_17 + (MR_Integer) 1);
    {
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_17_17);
    }
    if (libs__pickle__succeeded)
      {
        libs__pickle__D_11 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_17_17, libs__pickle__Handle_5);
      }
    else
      {
        MR_String libs__pickle__Msg_65;
        MR_String libs__pickle__V_68_68;
        MR_String libs__pickle__V_69_69;
        MR_Word libs__pickle__V_71_71;

        {
          libs__pickle__V_69_69 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_17_17);
        }
        {
          libs__pickle__V_68_68 = mercury__string__f_43_43_2_f_0(libs__pickle__V_69_69, (MR_String) " is out of range");
        }
        {
          libs__pickle__Msg_65 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_68_68);
        }
        libs__pickle__V_71_71 = (MR_Word) libs__pickle__Msg_65;
        {
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_71_71)));
          return;
        }
      }
    libs__pickle__V_21_21 = (libs__pickle__A_8 << (MR_Integer) 24);
    libs__pickle__V_23_23 = (libs__pickle__B_9 << (MR_Integer) 16);
    libs__pickle__V_20_20 = (libs__pickle__V_21_21 | libs__pickle__V_23_23);
    libs__pickle__V_25_25 = (libs__pickle__C_10 << (MR_Integer) 8);
    libs__pickle__V_19_19 = (libs__pickle__V_20_20 | libs__pickle__V_25_25);
    libs__pickle__V_27_27 = (libs__pickle__D_11 << (MR_Integer) 0);
    libs__pickle__Int0_12 = (libs__pickle__V_19_19 | libs__pickle__V_27_27);
    libs__pickle__Mask_75 = ((MR_Integer) 1 << (MR_Integer) 31);
    libs__pickle__V_78_78 = (libs__pickle__Int0_12 ^ libs__pickle__Mask_75);
    *libs__pickle__Int_6 = (libs__pickle__V_78_78 - libs__pickle__Mask_75);
  }
}

static void MR_CALL 
libs__pickle__pickle_int32_3_p_0(
  MR_Integer libs__pickle__Int_4)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Integer libs__pickle__A_6;
    MR_Integer libs__pickle__B_7;
    MR_Integer libs__pickle__C_8;
    MR_Integer libs__pickle__D_9;
    MR_Integer libs__pickle__V_12_12;
    MR_Integer libs__pickle__V_15_15;
    MR_Integer libs__pickle__V_18_18;
    MR_Integer libs__pickle__V_21_21;

    {
      libs__pickle__V_12_12 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_4, (MR_Integer) 24);
    }
    libs__pickle__A_6 = (libs__pickle__V_12_12 & (MR_Integer) 255);
    {
      libs__pickle__V_15_15 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_4, (MR_Integer) 16);
    }
    libs__pickle__B_7 = (libs__pickle__V_15_15 & (MR_Integer) 255);
    {
      libs__pickle__V_18_18 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_4, (MR_Integer) 8);
    }
    libs__pickle__C_8 = (libs__pickle__V_18_18 & (MR_Integer) 255);
    {
      libs__pickle__V_21_21 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_4, (MR_Integer) 0);
    }
    libs__pickle__D_9 = (libs__pickle__V_21_21 & (MR_Integer) 255);
    {
      mercury__io__write_byte_3_p_0(libs__pickle__A_6);
    }
    {
      mercury__io__write_byte_3_p_0(libs__pickle__B_7);
    }
    {
      mercury__io__write_byte_3_p_0(libs__pickle__C_8);
    }
    {
      mercury__io__write_byte_3_p_0(libs__pickle__D_9);
    }
  }
}

static void MR_CALL 
libs__pickle__unpickler_inst_cast_2_p_0(
  MR_Word libs__pickle__A_1,
  MR_Word * libs__pickle__B_2)
{
  {
    MR_bool libs__pickle__succeeded;

{
#define MR_PROC_LABEL libs__pickle__unpickler_inst_cast_2_p_0

	MR_Word A;
	MR_Word B;

	A =  libs__pickle__A_1 ;
		{

    B = A;


		;}
#undef MR_PROC_LABEL
	 *libs__pickle__B_2  = B;
}
  }
}

static void MR_CALL 
libs__pickle__unpickle_2_6_p_0_1(
  MR_Box libs__pickle__closure_arg,
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box * libs__pickle__wrapper_arg_2,
  MR_Box libs__pickle__wrapper_arg_3,
  MR_Box * libs__pickle__wrapper_arg_4)
{
  {
    MR_Box libs__pickle__closure = libs__pickle__closure_arg;
    MR_Word libs__pickle__conv5_Univ_10;
    MR_Integer libs__pickle__conv4_STATE_VARIABLE_State_30;

    {
      libs__pickle__unpickle_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 3))), ((MR_Box) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 4))), ((MR_Word) libs__pickle__wrapper_arg_1), &libs__pickle__conv5_Univ_10, ((MR_Integer) libs__pickle__wrapper_arg_3), &libs__pickle__conv4_STATE_VARIABLE_State_30);
    }
    *libs__pickle__wrapper_arg_2 = ((MR_Box) (libs__pickle__conv5_Univ_10));
    *libs__pickle__wrapper_arg_4 = ((MR_Box) (libs__pickle__conv4_STATE_VARIABLE_State_30));
  }
}

static void MR_CALL 
libs__pickle__unpickle_2_6_p_0(
  MR_Word libs__pickle__Unpicklers_7,
  MR_Box libs__pickle__Handle_8,
  MR_Word libs__pickle__TypeDesc_9,
  MR_Word * libs__pickle__Univ_10,
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_29,
  MR_Integer * libs__pickle__STATE_VARIABLE_State_30)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Word libs__pickle__V_66_66;
    MR_String libs__pickle__V_31_31;

    {
      libs__pickle__V_66_66 = mercury__type_desc__type_of_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    {
      libs__pickle__succeeded = mercury__type_desc____Unify____type_desc_0_0(libs__pickle__TypeDesc_9, libs__pickle__V_66_66);
    }
    if (libs__pickle__succeeded)
      {
        MR_String libs__pickle__String_13;
        MR_Integer libs__pickle__Length_79;
        MR_String libs__pickle__String0_80;
        MR_Integer libs__pickle__STATE_VARIABLE_State_12_81;

        {
          libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_8, &libs__pickle__Length_79, libs__pickle__STATE_VARIABLE_State_0_29, &libs__pickle__STATE_VARIABLE_State_12_81);
        }
{
#define MR_PROC_LABEL libs__pickle__unpickle_2_6_p_0

	MR_Integer Length;
	MR_String Str;

	Length =  libs__pickle__Length_79 ;
		{

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';


		;}
#undef MR_PROC_LABEL
	 libs__pickle__String0_80  = Str;
}
        {
          libs__pickle__unpickle_string_2_7_p_0(libs__pickle__Handle_8, (MR_Integer) 0, libs__pickle__Length_79, libs__pickle__String0_80, &libs__pickle__String_13, libs__pickle__STATE_VARIABLE_State_12_81, libs__pickle__STATE_VARIABLE_State_30);
        }
        {
          *libs__pickle__Univ_10 = mercury__univ__univ_1_f_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (libs__pickle__String_13)));
        }
      }
    else
      {
        MR_Word libs__pickle__V_67_67;
        MR_Integer libs__pickle__V_33_33;

        {
          libs__pickle__V_67_67 = mercury__type_desc__type_of_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        }
        {
          libs__pickle__succeeded = mercury__type_desc____Unify____type_desc_0_0(libs__pickle__TypeDesc_9, libs__pickle__V_67_67);
        }
        if (libs__pickle__succeeded)
          {
            MR_Integer libs__pickle__Int_15;

            {
              libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_8, &libs__pickle__Int_15, libs__pickle__STATE_VARIABLE_State_0_29, libs__pickle__STATE_VARIABLE_State_30);
            }
            {
              *libs__pickle__Univ_10 = mercury__univ__univ_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (libs__pickle__Int_15)));
            }
          }
        else
          {
            MR_Word libs__pickle__V_68_68;
            MR_Float libs__pickle__V_35_35;

            {
              libs__pickle__V_68_68 = mercury__type_desc__type_of_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0);
            }
            {
              libs__pickle__succeeded = mercury__type_desc____Unify____type_desc_0_0(libs__pickle__TypeDesc_9, libs__pickle__V_68_68);
            }
            if (libs__pickle__succeeded)
              {
                MR_Float libs__pickle__Float_17;

                {
                  libs__pickle__unpickle_float_4_p_0(libs__pickle__Handle_8, &libs__pickle__Float_17, libs__pickle__STATE_VARIABLE_State_0_29, libs__pickle__STATE_VARIABLE_State_30);
                }
                {
                  *libs__pickle__Univ_10 = mercury__univ__univ_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, MR_box_float(libs__pickle__Float_17));
                }
              }
            else
              {
                MR_Word libs__pickle__V_69_69;
                MR_Char libs__pickle__V_37_37;

                {
                  libs__pickle__V_69_69 = mercury__type_desc__type_of_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0);
                }
                {
                  libs__pickle__succeeded = mercury__type_desc____Unify____type_desc_0_0(libs__pickle__TypeDesc_9, libs__pickle__V_69_69);
                }
                if (libs__pickle__succeeded)
                  {
                    MR_Char libs__pickle__Char_19;

                    {
                      libs__pickle__unpickle_char_4_p_0(libs__pickle__Handle_8, &libs__pickle__Char_19, libs__pickle__STATE_VARIABLE_State_0_29, libs__pickle__STATE_VARIABLE_State_30);
                    }
                    {
                      *libs__pickle__Univ_10 = mercury__univ__univ_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, ((MR_Box) (MR_Word) (libs__pickle__Char_19)));
                    }
                  }
                else
                  {
                    MR_Word libs__pickle__Unpickle_20;
                    MR_Word libs__pickle__V_39_39;
                    MR_Word libs__pickle__Unpicklers_90;
                    MR_Word libs__pickle__Unpickle0_91;
                    MR_Box libs__pickle__conv0_Unpickle0_91;

                    {
                      libs__pickle__V_39_39 = mercury__type_desc__type_ctor_1_f_0(libs__pickle__TypeDesc_9);
                    }
                    libs__pickle__Unpicklers_90 = (MR_Word) libs__pickle__Unpicklers_7;
                    {
                      libs__pickle__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_2[0], libs__pickle__Unpicklers_90, ((MR_Box) (libs__pickle__V_39_39)), &libs__pickle__conv0_Unpickle0_91);
                    }
                    if (libs__pickle__succeeded)
                      {
                        libs__pickle__Unpickle0_91 = ((MR_Word) libs__pickle__conv0_Unpickle0_91);
                        libs__pickle__succeeded = MR_TRUE;
                      }
                    if (libs__pickle__succeeded)
                      {
{
#define MR_PROC_LABEL libs__pickle__unpickle_2_6_p_0

	MR_Word A;
	MR_Word B;

	A =  libs__pickle__Unpickle0_91 ;
		{

    B = A;


		;}
#undef MR_PROC_LABEL
	 libs__pickle__Unpickle_20  = B;
}
                        libs__pickle__succeeded = MR_TRUE;
                      }
                    if (libs__pickle__succeeded)
                      {
                        void MR_CALL (* libs__pickle__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__pickle__Unpickle_20, (MR_Integer) 1)));
                        MR_Box libs__pickle__conv3_Univ_10;
                        MR_Box libs__pickle__conv2_STATE_VARIABLE_State_30;

                        {
                          libs__pickle__func_1(((MR_Box) libs__pickle__Unpickle_20), ((MR_Box) (libs__pickle__Unpicklers_7)), ((MR_Box) (libs__pickle__Handle_8)), ((MR_Box) (libs__pickle__TypeDesc_9)), &libs__pickle__conv3_Univ_10, ((MR_Box) (libs__pickle__STATE_VARIABLE_State_0_29)), &libs__pickle__conv2_STATE_VARIABLE_State_30);
                        }
                        *libs__pickle__Univ_10 = ((MR_Word) libs__pickle__conv3_Univ_10);
                        *libs__pickle__STATE_VARIABLE_State_30 = ((MR_Integer) libs__pickle__conv2_STATE_VARIABLE_State_30);
                      }
                    else
                      {
                        MR_String libs__pickle__Functor_21;
                        MR_Integer libs__pickle__Arity_22;
                        MR_Integer libs__pickle__STATE_VARIABLE_State_41_41;
                        MR_Integer libs__pickle__STATE_VARIABLE_State_42_42;
                        MR_Word libs__pickle__IsTuple_23;
                        MR_Word libs__pickle__ArgTypes_25;
                        MR_Integer libs__pickle__N_26;

                        {
                          libs__pickle__unpickle_string_4_p_0(libs__pickle__Handle_8, &libs__pickle__Functor_21, libs__pickle__STATE_VARIABLE_State_0_29, &libs__pickle__STATE_VARIABLE_State_41_41);
                        }
                        {
                          libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_8, &libs__pickle__Arity_22, libs__pickle__STATE_VARIABLE_State_41_41, &libs__pickle__STATE_VARIABLE_State_42_42);
                        }
                        libs__pickle__succeeded = (strcmp(libs__pickle__Functor_21, (MR_String) "{}") == 0);
                        if (libs__pickle__succeeded)
                          {
                            MR_Word libs__pickle__V_24_24;

                            libs__pickle__IsTuple_23 = (MR_Integer) 1;
                            {
                              mercury__type_desc__type_ctor_and_args_3_p_0(libs__pickle__TypeDesc_9, &libs__pickle__V_24_24, &libs__pickle__ArgTypes_25);
                            }
                            libs__pickle__N_26 = (MR_Integer) 0;
                            libs__pickle__succeeded = MR_TRUE;
                          }
                        else
                          {
                            libs__pickle__IsTuple_23 = (MR_Integer) 0;
                            {
                              libs__pickle__succeeded = mercury__construct__find_functor_5_p_0(libs__pickle__TypeDesc_9, libs__pickle__Functor_21, libs__pickle__Arity_22, &libs__pickle__N_26, &libs__pickle__ArgTypes_25);
                            }
                          }
                        if (libs__pickle__succeeded)
                          {
                            MR_Word libs__pickle__ArgUnivs_27;
                            MR_Word libs__pickle__V_43_43;
                            MR_Box libs__pickle__conv6_STATE_VARIABLE_State_30;

                            {
                              libs__pickle__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 0) = ((MR_Box) (&libs__pickle_scalar_common_6[0]));
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 1) = ((MR_Box) (libs__pickle__unpickle_2_6_p_0_1));
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 3) = ((MR_Box) (libs__pickle__Unpicklers_7));
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 4) = ((MR_Box) (libs__pickle__Handle_8));
                            }
                            {
                              mercury__list__map_foldl_5_p_2((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__pickle__V_43_43, libs__pickle__ArgTypes_25, &libs__pickle__ArgUnivs_27, ((MR_Box) (libs__pickle__STATE_VARIABLE_State_42_42)), &libs__pickle__conv6_STATE_VARIABLE_State_30);
                            }
                            *libs__pickle__STATE_VARIABLE_State_30 = ((MR_Integer) libs__pickle__conv6_STATE_VARIABLE_State_30);
                            switch (libs__pickle__IsTuple_23) {
                              default: /*NOTREACHED*/ MR_assert(0);
                              case (MR_Integer) 0:
                                {
                                  MR_Word libs__pickle__Univ0_28;

                                  {
                                    libs__pickle__succeeded = mercury__construct__construct_3_f_0(libs__pickle__TypeDesc_9, libs__pickle__N_26, libs__pickle__ArgUnivs_27, &libs__pickle__Univ0_28);
                                  }
                                  if (libs__pickle__succeeded)
                                    *libs__pickle__Univ_10 = libs__pickle__Univ0_28;
                                  else
                                    {
                                      {
                                        mercury__require__unexpected_3_p_0((MR_String) "libs.pickle", (MR_String) "predicate \140libs.pickle.unpickle_2\'/6", (MR_String) "unable to construct");
                                        return;
                                      }
                                    }
                                }
                                break;
                              case (MR_Integer) 1:
                                {
                                  *libs__pickle__Univ_10 = mercury__construct__construct_tuple_1_f_0(libs__pickle__ArgUnivs_27);
                                }
                                break;
                            }
                          }
                        else
                          {
                            {
                              mercury__require__unexpected_3_p_0((MR_String) "libs.pickle", (MR_String) "predicate \140libs.pickle.unpickle_2\'/6", (MR_String) "unable to unpickle");
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
libs__pickle__pickler_inst_cast_2_p_0(
  MR_Word libs__pickle__A_1,
  MR_Word * libs__pickle__B_2)
{
  {
    MR_bool libs__pickle__succeeded;

{
#define MR_PROC_LABEL libs__pickle__pickler_inst_cast_2_p_0

	MR_Word A;
	MR_Word B;

	A =  libs__pickle__A_1 ;
		{

    B = A;


		;}
#undef MR_PROC_LABEL
	 *libs__pickle__B_2  = B;
}
  }
}

static MR_bool MR_CALL 
libs__pickle__user_defined_pickler_3_p_0(
  MR_Word libs__pickle__HeadVar__1_1,
  MR_Word libs__pickle__TypeCtorDesc_5,
  MR_Word * libs__pickle__Pickle_6)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Word libs__pickle__Pickles_4 = (MR_Word) libs__pickle__HeadVar__1_1;
    MR_Word libs__pickle__Pickle0_7;
    MR_Box libs__pickle__conv0_Pickle0_7;

    {
      libs__pickle__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_1[0], libs__pickle__Pickles_4, ((MR_Box) (libs__pickle__TypeCtorDesc_5)), &libs__pickle__conv0_Pickle0_7);
    }
    if (libs__pickle__succeeded)
      {
        libs__pickle__Pickle0_7 = ((MR_Word) libs__pickle__conv0_Pickle0_7);
        libs__pickle__succeeded = MR_TRUE;
      }
    if (libs__pickle__succeeded)
      {
{
#define MR_PROC_LABEL libs__pickle__user_defined_pickler_3_p_0

	MR_Word A;
	MR_Word B;

	A =  libs__pickle__Pickle0_7 ;
		{

    B = A;


		;}
#undef MR_PROC_LABEL
	 *libs__pickle__Pickle_6  = B;
}
        libs__pickle__succeeded = MR_TRUE;
      }
    return libs__pickle__succeeded;
  }
}

static void MR_CALL 
libs__pickle__pickle_args_6_p_0(
  MR_Word libs__pickle__TypeInfo_for_T_23,
  MR_Word libs__pickle__Pickles_7,
  MR_Integer libs__pickle__N_8,
  MR_Integer libs__pickle__Arity_9,
  MR_Box libs__pickle__T_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__pickle__succeeded = (libs__pickle__N_8 == libs__pickle__Arity_9);

        if (libs__pickle__succeeded)
          {
          }
        else
          {
            MR_Word libs__pickle__TypeInfo_24_24;
            MR_Box libs__pickle__Arg_12;

            {
              libs__pickle__succeeded = mercury__deconstruct__arg_4_p_0(libs__pickle__TypeInfo_for_T_23, &libs__pickle__TypeInfo_24_24, libs__pickle__T_10, (MR_Integer) 0, libs__pickle__N_8, &libs__pickle__Arg_12);
            }
            if (libs__pickle__succeeded)
              {
                MR_Integer libs__pickle__V_17_17;

                {
                  libs__pickle__pickle_4_p_0(libs__pickle__TypeInfo_24_24, libs__pickle__Pickles_7, libs__pickle__Arg_12);
                }
                libs__pickle__V_17_17 = (libs__pickle__N_8 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer libs__pickle__N__tmp_copy_8 = libs__pickle__V_17_17;

                  libs__pickle__N_8 = libs__pickle__N__tmp_copy_8;
                }
                continue;
              }
            else
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "libs.pickle", (MR_String) "predicate \140libs.pickle.pickle_args\'/6", (MR_String) "unable to deconstruct arg");
                  return;
                }
              }
          }
      }
      break;
    }
}

void MR_CALL 
libs__pickle__unpickle_5_p_0(
  MR_Word libs__pickle__TypeInfo_for_T_15,
  MR_Word libs__pickle__Unpicklers_6,
  MR_Box libs__pickle__Handle_7,
  MR_Box * libs__pickle__T_8,
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_11,
  MR_Integer * libs__pickle__STATE_VARIABLE_State_12)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Word libs__pickle__Univ_10;
    MR_Word libs__pickle__V_13_13;

    {
      libs__pickle__V_13_13 = mercury__type_desc__type_of_1_f_0(libs__pickle__TypeInfo_for_T_15);
    }
    {
      libs__pickle__unpickle_2_6_p_0(libs__pickle__Unpicklers_6, libs__pickle__Handle_7, libs__pickle__V_13_13, &libs__pickle__Univ_10, libs__pickle__STATE_VARIABLE_State_0_11, libs__pickle__STATE_VARIABLE_State_12);
    }
    {
      mercury__univ__det_univ_to_type_2_p_0(libs__pickle__TypeInfo_for_T_15, libs__pickle__Univ_10, libs__pickle__T_8);
    }
  }
}

static void MR_CALL 
libs__pickle__unpickle_from_file_5_p_0_1(
  MR_Box libs__pickle__closure_arg,
  MR_Box * libs__pickle__wrapper_arg_1)
{
  {
    MR_Box libs__pickle__closure = libs__pickle__closure_arg;

    {
      libs__pickle__IntroducedFrom__pred__unpickle_from_file__245__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 4))), ((MR_Box) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 5))), libs__pickle__wrapper_arg_1);
    }
  }
}

void MR_CALL 
libs__pickle__unpickle_from_file_5_p_0(
  MR_Word libs__pickle__TypeInfo_for_T_32,
  MR_Word libs__pickle__Unpicklers_6,
  MR_String libs__pickle__FileName_7,
  MR_Word * libs__pickle__Result_8)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Word libs__pickle__SeeResult_10;

    {
      mercury__io__see_binary_4_p_0(libs__pickle__FileName_7, &libs__pickle__SeeResult_10);
    }
    if ((libs__pickle__SeeResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word libs__pickle__ReadResult_11;

        {
          mercury__io__read_binary_file_as_bitmap_3_p_0(&libs__pickle__ReadResult_11);
        }
        {
          mercury__io__seen_binary_2_p_0();
        }
        if (((MR_tag((MR_Word) libs__pickle__ReadResult_11)) == (MR_mktag((MR_Integer) 1))))
          *libs__pickle__Result_8 = libs__pickle__ReadResult_11;
        else
          {
            MR_Box libs__pickle__Bitmap_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), libs__pickle__ReadResult_11, (MR_Integer) 0)));
            MR_Word libs__pickle__TryResult_13;
            MR_Word libs__pickle__V_25_25;

            {
              libs__pickle__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 0) = ((MR_Box) (&libs__pickle_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 1) = ((MR_Box) (libs__pickle__unpickle_from_file_5_p_0_1));
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 3) = ((MR_Box) (libs__pickle__TypeInfo_for_T_32));
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 4) = ((MR_Box) (libs__pickle__Unpicklers_6));
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 5) = ((MR_Box) (libs__pickle__Bitmap_12));
            }
            {
              mercury__exception__try_2_p_0(libs__pickle__TypeInfo_for_T_32, libs__pickle__V_25_25, &libs__pickle__TryResult_13);
            }
            if (((MR_tag((MR_Word) libs__pickle__TryResult_13)) == (MR_mktag((MR_Integer) 2))))
              {
                MR_Word libs__pickle__Excp_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__pickle__TryResult_13, (MR_Integer) 0)));
                MR_String libs__pickle__Msg_18;
                MR_Word libs__pickle__V_28_28;
                MR_Box libs__pickle__conv0_V_28_28;

                {
                  libs__pickle__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, libs__pickle__Excp_17, &libs__pickle__conv0_V_28_28);
                }
                if (libs__pickle__succeeded)
                  {
                    libs__pickle__V_28_28 = ((MR_Word) libs__pickle__conv0_V_28_28);
                    libs__pickle__succeeded = MR_TRUE;
                  }
                if (libs__pickle__succeeded)
                  {
                    libs__pickle__Msg_18 = (MR_String) libs__pickle__V_28_28;
                    libs__pickle__succeeded = MR_TRUE;
                  }
                if (libs__pickle__succeeded)
                  {
                    MR_Word libs__pickle__V_29_29;

                    {
                      libs__pickle__V_29_29 = mercury__io__make_io_error_1_f_0(libs__pickle__Msg_18);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *libs__pickle__Result_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__pickle__V_29_29));
                    }
                  }
                else
                  {
                    mercury__exception__rethrow_1_p_0(libs__pickle__TypeInfo_for_T_32, libs__pickle__TryResult_13);
                    return;
                  }
              }
            else
              {
                MR_Box libs__pickle__T_16 = (MR_hl_field(MR_mktag(1), libs__pickle__TryResult_13, (MR_Integer) 0));

                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *libs__pickle__Result_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = libs__pickle__T_16;
                }
              }
          }
      }
    else
      {
        MR_Word libs__pickle__Error_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__pickle__SeeResult_10, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *libs__pickle__Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__pickle__Error_31));
        }
      }
  }
}

void MR_CALL 
libs__pickle__register_unpickler_4_p_0(
  MR_Word libs__pickle__TypeCtorDesc_5,
  MR_Word libs__pickle__Unpickle_6,
  MR_Word libs__pickle__Unpicklers0_7,
  MR_Word * libs__pickle__Unpicklers_8)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Word libs__pickle__Map0_9 = (MR_Word) libs__pickle__Unpicklers0_7;
    MR_Word libs__pickle__Map_10;

    {
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_2[0], ((MR_Box) (libs__pickle__TypeCtorDesc_5)), ((MR_Box) (libs__pickle__Unpickle_6)), libs__pickle__Map0_9, &libs__pickle__Map_10);
    }
    *libs__pickle__Unpicklers_8 = (MR_Word) libs__pickle__Map_10;
  }
}

MR_Word MR_CALL 
libs__pickle__init_unpicklers_0_f_0(void)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Word libs__pickle__HeadVar__1_1;
    MR_Word libs__pickle__V_2_2;

    {
      libs__pickle__V_2_2 = mercury__map__init_0_f_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_2[0]);
    }
    libs__pickle__HeadVar__1_1 = (MR_Word) libs__pickle__V_2_2;
    return libs__pickle__HeadVar__1_1;
  }
}

static void MR_CALL 
libs__pickle__pickle_4_p_0_1(
  MR_Box libs__pickle__closure_arg,
  MR_Box libs__pickle__wrapper_arg_1,
  MR_Box libs__pickle__wrapper_arg_2,
  MR_Box * libs__pickle__wrapper_arg_3)
{
  {
    MR_Box libs__pickle__closure = libs__pickle__closure_arg;

    {
      libs__pickle__pickle_char_3_p_0(((MR_Char) (MR_Word) libs__pickle__wrapper_arg_1));
    }
  }
}

void MR_CALL 
libs__pickle__pickle_4_p_0(
  MR_Word libs__pickle__TypeInfo_for_T_30,
  MR_Word libs__pickle__Pickles_5,
  MR_Box libs__pickle__T_6)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_String libs__pickle__String_8;
    MR_Box libs__pickle__conv0_String_8;

    {
      libs__pickle__succeeded = mercury__builtin__dynamic_cast_2_p_0(libs__pickle__TypeInfo_for_T_30, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__pickle__T_6, &libs__pickle__conv0_String_8);
    }
    if (libs__pickle__succeeded)
      {
        libs__pickle__String_8 = ((MR_String) libs__pickle__conv0_String_8);
        libs__pickle__succeeded = MR_TRUE;
      }
    if (libs__pickle__succeeded)
      {
        MR_Integer libs__pickle__Length_40;
        MR_Integer libs__pickle__A_52;
        MR_Integer libs__pickle__B_53;
        MR_Integer libs__pickle__C_54;
        MR_Integer libs__pickle__D_55;
        MR_Integer libs__pickle__V_56_56;
        MR_Integer libs__pickle__V_59_59;
        MR_Integer libs__pickle__V_62_62;
        MR_Integer libs__pickle__V_65_65;
        MR_Box libs__pickle__conv1_STATE_VARIABLE_IO_18;

        {
          libs__pickle__Length_40 = mercury__string__length_1_f_0(libs__pickle__String_8);
        }
        {
          libs__pickle__V_56_56 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_40, (MR_Integer) 24);
        }
        libs__pickle__A_52 = (libs__pickle__V_56_56 & (MR_Integer) 255);
        {
          libs__pickle__V_59_59 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_40, (MR_Integer) 16);
        }
        libs__pickle__B_53 = (libs__pickle__V_59_59 & (MR_Integer) 255);
        {
          libs__pickle__V_62_62 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_40, (MR_Integer) 8);
        }
        libs__pickle__C_54 = (libs__pickle__V_62_62 & (MR_Integer) 255);
        {
          libs__pickle__V_65_65 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_40, (MR_Integer) 0);
        }
        libs__pickle__D_55 = (libs__pickle__V_65_65 & (MR_Integer) 255);
        {
          mercury__io__write_byte_3_p_0(libs__pickle__A_52);
        }
        {
          mercury__io__write_byte_3_p_0(libs__pickle__B_53);
        }
        {
          mercury__io__write_byte_3_p_0(libs__pickle__C_54);
        }
        {
          mercury__io__write_byte_3_p_0(libs__pickle__D_55);
        }
        {
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &libs__pickle_scalar_common_3[2], libs__pickle__String_8, ((MR_Box) ((MR_Integer) 0)), &libs__pickle__conv1_STATE_VARIABLE_IO_18);
        }
      }
    else
      {
        MR_Integer libs__pickle__Int_9;
        MR_Box libs__pickle__conv2_Int_9;

        {
          libs__pickle__succeeded = mercury__builtin__dynamic_cast_2_p_0(libs__pickle__TypeInfo_for_T_30, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__pickle__T_6, &libs__pickle__conv2_Int_9);
        }
        if (libs__pickle__succeeded)
          {
            libs__pickle__Int_9 = ((MR_Integer) libs__pickle__conv2_Int_9);
            libs__pickle__succeeded = MR_TRUE;
          }
        if (libs__pickle__succeeded)
          {
            MR_Integer libs__pickle__A_76;
            MR_Integer libs__pickle__B_77;
            MR_Integer libs__pickle__C_78;
            MR_Integer libs__pickle__D_79;
            MR_Integer libs__pickle__V_80_80;
            MR_Integer libs__pickle__V_83_83;
            MR_Integer libs__pickle__V_86_86;
            MR_Integer libs__pickle__V_89_89;

            {
              libs__pickle__V_80_80 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_9, (MR_Integer) 24);
            }
            libs__pickle__A_76 = (libs__pickle__V_80_80 & (MR_Integer) 255);
            {
              libs__pickle__V_83_83 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_9, (MR_Integer) 16);
            }
            libs__pickle__B_77 = (libs__pickle__V_83_83 & (MR_Integer) 255);
            {
              libs__pickle__V_86_86 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_9, (MR_Integer) 8);
            }
            libs__pickle__C_78 = (libs__pickle__V_86_86 & (MR_Integer) 255);
            {
              libs__pickle__V_89_89 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_9, (MR_Integer) 0);
            }
            libs__pickle__D_79 = (libs__pickle__V_89_89 & (MR_Integer) 255);
            {
              mercury__io__write_byte_3_p_0(libs__pickle__A_76);
            }
            {
              mercury__io__write_byte_3_p_0(libs__pickle__B_77);
            }
            {
              mercury__io__write_byte_3_p_0(libs__pickle__C_78);
            }
            {
              mercury__io__write_byte_3_p_0(libs__pickle__D_79);
            }
          }
        else
          {
            MR_Float libs__pickle__Float_10;
            MR_Box libs__pickle__conv3_Float_10;

            {
              libs__pickle__succeeded = mercury__builtin__dynamic_cast_2_p_0(libs__pickle__TypeInfo_for_T_30, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, libs__pickle__T_6, &libs__pickle__conv3_Float_10);
            }
            if (libs__pickle__succeeded)
              {
                libs__pickle__Float_10 = MR_unbox_float(libs__pickle__conv3_Float_10);
                libs__pickle__succeeded = MR_TRUE;
              }
            if (libs__pickle__succeeded)
              {
                libs__pickle__pickle_float_3_p_0(libs__pickle__Float_10);
              }
            else
              {
                MR_Char libs__pickle__Char_11;
                MR_Box libs__pickle__conv4_Char_11;

                {
                  libs__pickle__succeeded = mercury__builtin__dynamic_cast_2_p_0(libs__pickle__TypeInfo_for_T_30, (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, libs__pickle__T_6, &libs__pickle__conv4_Char_11);
                }
                if (libs__pickle__succeeded)
                  {
                    libs__pickle__Char_11 = ((MR_Char) (MR_Word) libs__pickle__conv4_Char_11);
                    libs__pickle__succeeded = MR_TRUE;
                  }
                if (libs__pickle__succeeded)
                  {
                    libs__pickle__pickle_char_3_p_0(libs__pickle__Char_11);
                  }
                else
                  {
                    MR_Word libs__pickle__Pickle_14;
                    MR_Word libs__pickle__TypeDesc_12;
                    MR_Word libs__pickle__TypeCtorDesc_13;
                    MR_Box libs__pickle__V_35_35;

                    {
                      libs__pickle__TypeDesc_12 = mercury__type_desc__type_of_1_f_0(libs__pickle__TypeInfo_for_T_30);
                    }
                    {
                      libs__pickle__TypeCtorDesc_13 = mercury__type_desc__type_ctor_1_f_0(libs__pickle__TypeDesc_12);
                    }
                    {
                      libs__pickle__succeeded = libs__pickle__user_defined_pickler_3_p_0(libs__pickle__Pickles_5, libs__pickle__TypeCtorDesc_13, &libs__pickle__Pickle_14);
                    }
                    if (libs__pickle__succeeded)
                      {
                        MR_Word libs__pickle__V_23_23;
                        void MR_CALL (* libs__pickle__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
                        MR_Box libs__pickle__conv6_STATE_VARIABLE_IO_18;

                        {
                          libs__pickle__V_23_23 = mercury__univ__univ_1_f_0(libs__pickle__TypeInfo_for_T_30, libs__pickle__T_6);
                        }
                        libs__pickle__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__pickle__Pickle_14, (MR_Integer) 1)));
                        {
                          libs__pickle__func_5(((MR_Box) libs__pickle__Pickle_14), ((MR_Box) (libs__pickle__Pickles_5)), ((MR_Box) (libs__pickle__V_23_23)), ((MR_Box) ((MR_Integer) 0)), &libs__pickle__conv6_STATE_VARIABLE_IO_18);
                        }
                      }
                    else
                      {
                        MR_String libs__pickle__Functor_15;
                        MR_Integer libs__pickle__Arity_16;

                        {
                          mercury__deconstruct__functor_4_p_0(libs__pickle__TypeInfo_for_T_30, libs__pickle__T_6, (MR_Integer) 0, &libs__pickle__Functor_15, &libs__pickle__Arity_16);
                        }
                        {
                          libs__pickle__pickle_string_3_p_0(libs__pickle__Functor_15);
                        }
                        {
                          libs__pickle__pickle_int32_3_p_0(libs__pickle__Arity_16);
                        }
                        {
                          libs__pickle__pickle_args_6_p_0(libs__pickle__TypeInfo_for_T_30, libs__pickle__Pickles_5, (MR_Integer) 0, libs__pickle__Arity_16, libs__pickle__T_6);
                        }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
libs__pickle__register_pickler_4_p_0(
  MR_Word libs__pickle__TypeCtorDesc_5,
  MR_Word libs__pickle__Pickle_6,
  MR_Word libs__pickle__Pickles0_7,
  MR_Word * libs__pickle__Pickles_8)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Word libs__pickle__Map0_9 = (MR_Word) libs__pickle__Pickles0_7;
    MR_Word libs__pickle__Map_10;

    {
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_1[0], ((MR_Box) (libs__pickle__TypeCtorDesc_5)), ((MR_Box) (libs__pickle__Pickle_6)), libs__pickle__Map0_9, &libs__pickle__Map_10);
    }
    *libs__pickle__Pickles_8 = (MR_Word) libs__pickle__Map_10;
  }
}

MR_Word MR_CALL 
libs__pickle__init_picklers_0_f_0(void)
{
  {
    MR_bool libs__pickle__succeeded;
    MR_Word libs__pickle__HeadVar__1_1;
    MR_Word libs__pickle__V_2_2;

    {
      libs__pickle__V_2_2 = mercury__map__init_0_f_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_1[0]);
    }
    libs__pickle__HeadVar__1_1 = (MR_Word) libs__pickle__V_2_2;
    return libs__pickle__HeadVar__1_1;
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

/* :- end_module libs.pickle. */
