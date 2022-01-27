/*
** Automatically generated from `pickle.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 71 "libs.pickle.c"
static const MR_Integer libs__pickle__libs__pickle__functor_number_map_get_byte_out_of_range_0[1];

#line 74 "libs.pickle.c"
static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_get_byte_out_of_range_0;

#line 77 "libs.pickle.c"
static const MR_VA_TypeInfo_Struct4 libs__pickle____vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

#line 80 "libs.pickle.c"
static const MR_Integer libs__pickle__libs__pickle__functor_number_map_picklers_0[1];

#line 83 "libs.pickle.c"
static const MR_FA_TypeInfo_Struct2 libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0;

#line 86 "libs.pickle.c"
static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_picklers_0;

#line 89 "libs.pickle.c"
static const MR_VA_TypeInfo_Struct6 libs__pickle____vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 92 "libs.pickle.c"
static const MR_Integer libs__pickle__libs__pickle__functor_number_map_unpicklers_0[1];

#line 95 "libs.pickle.c"
static const MR_FA_TypeInfo_Struct2 libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 98 "libs.pickle.c"
static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_unpicklers_0;

#line 101 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0_10001(
#line 104 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 106 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2);

#line 109 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0_10001(
#line 112 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 114 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 116 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3);

#line 119 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____pickler_pred_0_0_10001(
#line 122 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 124 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2);

#line 127 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____pickler_pred_0_0_10001(
#line 130 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 132 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 134 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3);

#line 137 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____picklers_0_0_10001(
#line 140 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 142 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2);

#line 145 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____picklers_0_0_10001(
#line 148 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 150 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 152 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3);

#line 155 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_handle_0_0_10001(
#line 158 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 160 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2);

#line 163 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____unpickle_handle_0_0_10001(
#line 166 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 168 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 170 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3);

#line 173 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_state_0_0_10001(
#line 176 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 178 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2);

#line 181 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____unpickle_state_0_0_10001(
#line 184 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 186 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 188 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3);

#line 191 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____unpickler_pred_0_0_10001(
#line 194 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 196 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2);

#line 199 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____unpickler_pred_0_0_10001(
#line 202 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 204 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 206 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3);

#line 209 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____unpicklers_0_0_10001(
#line 212 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 214 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2);

#line 217 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____unpicklers_0_0_10001(
#line 220 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 222 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 224 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3);

#line 245 "pickle.m"
static void MR_CALL 
libs__pickle__IntroducedFrom__pred__unpickle_from_file__245__1_4_p_0(
#line 245 "pickle.m"
  MR_Word libs__pickle__TypeInfo_for_T_32,
#line 245 "pickle.m"
  MR_Word libs__pickle__Unpicklers_6,
#line 245 "pickle.m"
  MR_Box libs__pickle__Bitmap_12,
#line 245 "pickle.m"
  MR_Box * libs__pickle__LambdaHeadVar__1_26);

#line 124 "pickle.m"
static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0(
#line 124 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 124 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2,
#line 124 "pickle.m"
  MR_Word libs__pickle__HeadVar__3_3);

#line 124 "pickle.m"
static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0(
#line 124 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 124 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2);

#line 522 "pickle.m"
static void MR_CALL 
libs__pickle__reinterpret_ints_as_float_3_p_0(
#line 522 "pickle.m"
  MR_Integer libs__pickle__A_1,
#line 522 "pickle.m"
  MR_Integer libs__pickle__B_2,
#line 522 "pickle.m"
  MR_Float * libs__pickle__Flt_3);

#line 514 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_float_4_p_0(
#line 514 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 514 "pickle.m"
  MR_Float * libs__pickle__Float_6,
#line 514 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_10,
#line 514 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_11);

#line 489 "pickle.m"
static void MR_CALL 
libs__pickle__reinterpret_float_as_ints_3_p_0(
#line 489 "pickle.m"
  MR_Float libs__pickle__Flt_1,
#line 489 "pickle.m"
  MR_Integer * libs__pickle__A_2,
#line 489 "pickle.m"
  MR_Integer * libs__pickle__B_3);

#line 480 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_float_3_p_0(
#line 480 "pickle.m"
  MR_Float libs__pickle__Float_4);

#line 466 "pickle.m"
static void MR_CALL 
libs__pickle__local_unsafe_set_char_4_p_0(
#line 466 "pickle.m"
  MR_Char libs__pickle__Chr_1,
#line 466 "pickle.m"
  MR_Integer libs__pickle__Index_2,
#line 466 "pickle.m"
  MR_String libs__pickle__Str0_3,
#line 466 "pickle.m"
  MR_String * libs__pickle__Str_4);

#line 451 "pickle.m"
static void MR_CALL 
libs__pickle__allocate_string_2_p_0(
#line 451 "pickle.m"
  MR_Integer libs__pickle__Length_1,
#line 451 "pickle.m"
  MR_String * libs__pickle__Str_2);

#line 439 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_string_2_7_p_0(
#line 439 "pickle.m"
  MR_Box libs__pickle__Handle_8,
#line 439 "pickle.m"
  MR_Integer libs__pickle__Index_9,
#line 439 "pickle.m"
  MR_Integer libs__pickle__Length_10,
#line 439 "pickle.m"
  MR_String libs__pickle__STATE_VARIABLE_String_0_14,
#line 439 "pickle.m"
  MR_String * libs__pickle__STATE_VARIABLE_String_15,
#line 439 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_16,
#line 439 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_17);

#line 431 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_string_4_p_0(
#line 431 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 431 "pickle.m"
  MR_String * libs__pickle__String_6,
#line 431 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_10,
#line 431 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_11);

#line 429 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_string_3_p_0_1(
#line 429 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 429 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_1,
#line 429 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_2,
#line 429 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_3);

#line 424 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_string_3_p_0(
#line 424 "pickle.m"
  MR_String libs__pickle__String_4);

#line 417 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_char_4_p_0(
#line 417 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 417 "pickle.m"
  MR_Char * libs__pickle__Char_6,
#line 417 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_9,
#line 417 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_10);

#line 410 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_char_3_p_0(
#line 410 "pickle.m"
  MR_Char libs__pickle__Char_4);

#line 389 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_int32_4_p_0(
#line 389 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 389 "pickle.m"
  MR_Integer * libs__pickle__Int_6,
#line 389 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_13,
#line 389 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_14);

#line 377 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_int32_3_p_0(
#line 377 "pickle.m"
  MR_Integer libs__pickle__Int_4);

#line 341 "pickle.m"
static void MR_CALL 
libs__pickle__unpickler_inst_cast_2_p_0(
#line 341 "pickle.m"
  MR_Word libs__pickle__A_1,
#line 341 "pickle.m"
  MR_Word * libs__pickle__B_2);

#line 316 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_2_6_p_0_1(
#line 316 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 316 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_1,
#line 316 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_2,
#line 316 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_3,
#line 316 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_4);

#line 273 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_2_6_p_0(
#line 273 "pickle.m"
  MR_Word libs__pickle__Unpicklers_7,
#line 273 "pickle.m"
  MR_Box libs__pickle__Handle_8,
#line 273 "pickle.m"
  MR_Word libs__pickle__TypeDesc_9,
#line 273 "pickle.m"
  MR_Word * libs__pickle__Univ_10,
#line 273 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_29,
#line 273 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_30);

#line 191 "pickle.m"
static void MR_CALL 
libs__pickle__pickler_inst_cast_2_p_0(
#line 191 "pickle.m"
  MR_Word libs__pickle__A_1,
#line 191 "pickle.m"
  MR_Word * libs__pickle__B_2);

#line 184 "pickle.m"
static MR_bool MR_CALL 
libs__pickle__user_defined_pickler_3_p_0(
#line 184 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 184 "pickle.m"
  MR_Word libs__pickle__TypeCtorDesc_5,
#line 184 "pickle.m"
  MR_Word * libs__pickle__Pickle_6);

#line 169 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_args_6_p_0(
#line 169 "pickle.m"
  MR_Word libs__pickle__TypeInfo_for_T_23,
#line 169 "pickle.m"
  MR_Word libs__pickle__Pickles_7,
#line 169 "pickle.m"
  MR_Integer libs__pickle__N_8,
#line 169 "pickle.m"
  MR_Integer libs__pickle__Arity_9,
#line 169 "pickle.m"
  MR_Box libs__pickle__T_10);

#line 245 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_from_file_5_p_0_1(
#line 245 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 245 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_1);

#line 429 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_4_p_0_1(
#line 429 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 429 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_1,
#line 429 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_2,
#line 429 "pickle.m"
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



#line 613 "libs.pickle.c"
static const MR_Integer libs__pickle__libs__pickle__functor_number_map_get_byte_out_of_range_0[1] = {
  (MR_Integer) 0
};

#line 618 "libs.pickle.c"
static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_get_byte_out_of_range_0 = {
  (MR_String) "get_byte_out_of_range",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 625 "libs.pickle.c"
const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 642 "libs.pickle.c"
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

#line 654 "libs.pickle.c"
const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_pickler_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 671 "libs.pickle.c"
static const MR_Integer libs__pickle__libs__pickle__functor_number_map_picklers_0[1] = {
  (MR_Integer) 0
};

#line 676 "libs.pickle.c"
static const MR_FA_TypeInfo_Struct2 libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0,
    (MR_TypeInfo) &libs__pickle____vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0
  }
};

#line 685 "libs.pickle.c"
static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_picklers_0 = {
  (MR_String) "picklers",
  (MR_PseudoTypeInfo) &libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0,
  NULL
};

#line 692 "libs.pickle.c"
const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_picklers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 709 "libs.pickle.c"
const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_unpickle_handle_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 726 "libs.pickle.c"
const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_unpickle_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 743 "libs.pickle.c"
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

#line 757 "libs.pickle.c"
const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_unpickler_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 774 "libs.pickle.c"
static const MR_Integer libs__pickle__libs__pickle__functor_number_map_unpicklers_0[1] = {
  (MR_Integer) 0
};

#line 779 "libs.pickle.c"
static const MR_FA_TypeInfo_Struct2 libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0,
    (MR_TypeInfo) &libs__pickle____vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 788 "libs.pickle.c"
static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_unpicklers_0 = {
  (MR_String) "unpicklers",
  (MR_PseudoTypeInfo) &libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  NULL
};

#line 795 "libs.pickle.c"
const MR_TypeCtorInfo_Struct libs__pickle__libs__pickle__type_ctor_info_unpicklers_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 812 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0_10001(
#line 815 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 817 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 819 "libs.pickle.c"
{
#line 821 "libs.pickle.c"
  {
#line 823 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 826 "libs.pickle.c"
    {
#line 828 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____get_byte_out_of_range_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
#line 831 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 833 "libs.pickle.c"
  }
#line 835 "libs.pickle.c"
}

#line 838 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0_10001(
#line 841 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 843 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 845 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 847 "libs.pickle.c"
{
#line 849 "libs.pickle.c"
  {
#line 851 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 854 "libs.pickle.c"
    {
#line 856 "libs.pickle.c"
      libs__pickle____Compare____get_byte_out_of_range_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
#line 859 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 861 "libs.pickle.c"
  }
#line 863 "libs.pickle.c"
}

#line 866 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____pickler_pred_0_0_10001(
#line 869 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 871 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 873 "libs.pickle.c"
{
#line 875 "libs.pickle.c"
  {
#line 877 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 880 "libs.pickle.c"
    {
#line 882 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____pickler_pred_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
#line 885 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 887 "libs.pickle.c"
  }
#line 889 "libs.pickle.c"
}

#line 892 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____pickler_pred_0_0_10001(
#line 895 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 897 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 899 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 901 "libs.pickle.c"
{
#line 903 "libs.pickle.c"
  {
#line 905 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 908 "libs.pickle.c"
    {
#line 910 "libs.pickle.c"
      libs__pickle____Compare____pickler_pred_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
#line 913 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 915 "libs.pickle.c"
  }
#line 917 "libs.pickle.c"
}

#line 920 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____picklers_0_0_10001(
#line 923 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 925 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 927 "libs.pickle.c"
{
#line 929 "libs.pickle.c"
  {
#line 931 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 934 "libs.pickle.c"
    {
#line 936 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____picklers_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
#line 939 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 941 "libs.pickle.c"
  }
#line 943 "libs.pickle.c"
}

#line 946 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____picklers_0_0_10001(
#line 949 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 951 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 953 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 955 "libs.pickle.c"
{
#line 957 "libs.pickle.c"
  {
#line 959 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 962 "libs.pickle.c"
    {
#line 964 "libs.pickle.c"
      libs__pickle____Compare____picklers_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
#line 967 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 969 "libs.pickle.c"
  }
#line 971 "libs.pickle.c"
}

#line 974 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_handle_0_0_10001(
#line 977 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 979 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 981 "libs.pickle.c"
{
#line 983 "libs.pickle.c"
  {
#line 985 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 988 "libs.pickle.c"
    {
#line 990 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____unpickle_handle_0_0(((MR_Box) libs__pickle__wrapper_arg_1), ((MR_Box) libs__pickle__wrapper_arg_2));
    }
#line 993 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 995 "libs.pickle.c"
  }
#line 997 "libs.pickle.c"
}

#line 1000 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____unpickle_handle_0_0_10001(
#line 1003 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 1005 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 1007 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 1009 "libs.pickle.c"
{
#line 1011 "libs.pickle.c"
  {
#line 1013 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 1016 "libs.pickle.c"
    {
#line 1018 "libs.pickle.c"
      libs__pickle____Compare____unpickle_handle_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Box) libs__pickle__wrapper_arg_2), ((MR_Box) libs__pickle__wrapper_arg_3));
    }
#line 1021 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 1023 "libs.pickle.c"
  }
#line 1025 "libs.pickle.c"
}

#line 1028 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_state_0_0_10001(
#line 1031 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 1033 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 1035 "libs.pickle.c"
{
#line 1037 "libs.pickle.c"
  {
#line 1039 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 1042 "libs.pickle.c"
    {
#line 1044 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____unpickle_state_0_0(((MR_Integer) libs__pickle__wrapper_arg_1), ((MR_Integer) libs__pickle__wrapper_arg_2));
    }
#line 1047 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 1049 "libs.pickle.c"
  }
#line 1051 "libs.pickle.c"
}

#line 1054 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____unpickle_state_0_0_10001(
#line 1057 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 1059 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 1061 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 1063 "libs.pickle.c"
{
#line 1065 "libs.pickle.c"
  {
#line 1067 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 1070 "libs.pickle.c"
    {
#line 1072 "libs.pickle.c"
      libs__pickle____Compare____unpickle_state_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Integer) libs__pickle__wrapper_arg_2), ((MR_Integer) libs__pickle__wrapper_arg_3));
    }
#line 1075 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 1077 "libs.pickle.c"
  }
#line 1079 "libs.pickle.c"
}

#line 1082 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____unpickler_pred_0_0_10001(
#line 1085 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 1087 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 1089 "libs.pickle.c"
{
#line 1091 "libs.pickle.c"
  {
#line 1093 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 1096 "libs.pickle.c"
    {
#line 1098 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____unpickler_pred_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
#line 1101 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 1103 "libs.pickle.c"
  }
#line 1105 "libs.pickle.c"
}

#line 1108 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____unpickler_pred_0_0_10001(
#line 1111 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 1113 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 1115 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 1117 "libs.pickle.c"
{
#line 1119 "libs.pickle.c"
  {
#line 1121 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 1124 "libs.pickle.c"
    {
#line 1126 "libs.pickle.c"
      libs__pickle____Compare____unpickler_pred_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
#line 1129 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 1131 "libs.pickle.c"
  }
#line 1133 "libs.pickle.c"
}

#line 1136 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____unpicklers_0_0_10001(
#line 1139 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 1141 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 1143 "libs.pickle.c"
{
#line 1145 "libs.pickle.c"
  {
#line 1147 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 1150 "libs.pickle.c"
    {
#line 1152 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____unpicklers_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
#line 1155 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 1157 "libs.pickle.c"
  }
#line 1159 "libs.pickle.c"
}

#line 1162 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____unpicklers_0_0_10001(
#line 1165 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 1167 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 1169 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 1171 "libs.pickle.c"
{
#line 1173 "libs.pickle.c"
  {
#line 1175 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 1178 "libs.pickle.c"
    {
#line 1180 "libs.pickle.c"
      libs__pickle____Compare____unpicklers_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
#line 1183 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 1185 "libs.pickle.c"
  }
#line 1187 "libs.pickle.c"
}

#line 245 "pickle.m"
static void MR_CALL 
libs__pickle__IntroducedFrom__pred__unpickle_from_file__245__1_4_p_0(
#line 245 "pickle.m"
  MR_Word libs__pickle__TypeInfo_for_T_32,
#line 245 "pickle.m"
  MR_Word libs__pickle__Unpicklers_6,
#line 245 "pickle.m"
  MR_Box libs__pickle__Bitmap_12,
#line 245 "pickle.m"
  MR_Box * libs__pickle__LambdaHeadVar__1_26)
#line 245 "pickle.m"
{
#line 245 "pickle.m"
  {
#line 245 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 245 "pickle.m"
    MR_Word libs__pickle__Univ_40;
#line 245 "pickle.m"
    MR_Word libs__pickle__V_41_41;
#line 270 "pickle.m"
    MR_Integer libs__pickle___State_15;

#line 270 "pickle.m"
    {
#line 270 "pickle.m"
      libs__pickle__V_41_41 = mercury__type_desc__type_of_1_f_0(libs__pickle__TypeInfo_for_T_32);
    }
#line 270 "pickle.m"
    {
#line 270 "pickle.m"
      libs__pickle__unpickle_2_6_p_0(libs__pickle__Unpicklers_6, libs__pickle__Bitmap_12, libs__pickle__V_41_41, &libs__pickle__Univ_40, (MR_Integer) 0, &libs__pickle___State_15);
    }
#line 271 "pickle.m"
    {
#line 271 "pickle.m"
      mercury__univ__det_univ_to_type_2_p_0(libs__pickle__TypeInfo_for_T_32, libs__pickle__Univ_40, libs__pickle__LambdaHeadVar__1_26);
    }
#line 245 "pickle.m"
  }
#line 245 "pickle.m"
}

#line 116 "pickle.m"
void MR_CALL 
libs__pickle____Compare____unpicklers_0_0(
#line 116 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 116 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2,
#line 116 "pickle.m"
  MR_Word libs__pickle__HeadVar__3_3)
#line 116 "pickle.m"
{
#line 116 "pickle.m"
  {
#line 116 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 116 "pickle.m"
    MR_Integer libs__pickle__CastX_6 = (MR_Integer) libs__pickle__HeadVar__2_2;
#line 116 "pickle.m"
    MR_Integer libs__pickle__CastY_7 = (MR_Integer) libs__pickle__HeadVar__3_3;

#line 116 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__CastX_6 == libs__pickle__CastY_7);
#line 116 "pickle.m"
    if (libs__pickle__succeeded)
#line 1258 "libs.pickle.c"
      *libs__pickle__HeadVar__1_1 = (MR_Integer) 0;
#line 116 "pickle.m"
    else
#line 116 "pickle.m"
      {
#line 116 "pickle.m"
        MR_Word libs__pickle__V_4_4 = (MR_Word) libs__pickle__HeadVar__2_2;
#line 116 "pickle.m"
        MR_Word libs__pickle__V_5_5 = (MR_Word) libs__pickle__HeadVar__3_3;

#line 116 "pickle.m"
        {
#line 116 "pickle.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__pickle_scalar_common_3[1], libs__pickle__HeadVar__1_1, ((MR_Box) (libs__pickle__V_4_4)), ((MR_Box) (libs__pickle__V_5_5)));
        }
#line 116 "pickle.m"
      }
#line 116 "pickle.m"
  }
#line 116 "pickle.m"
}

#line 116 "pickle.m"
MR_bool MR_CALL 
libs__pickle____Unify____unpicklers_0_0(
#line 116 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 116 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2)
#line 116 "pickle.m"
{
#line 116 "pickle.m"
  {
#line 116 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 116 "pickle.m"
    MR_Integer libs__pickle__CastX_5 = (MR_Integer) libs__pickle__HeadVar__1_1;
#line 116 "pickle.m"
    MR_Integer libs__pickle__CastY_6 = (MR_Integer) libs__pickle__HeadVar__2_2;

#line 116 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__CastX_5 == libs__pickle__CastY_6);
#line 116 "pickle.m"
    if (libs__pickle__succeeded)
#line 116 "pickle.m"
      libs__pickle__succeeded = MR_TRUE;
#line 116 "pickle.m"
    else
#line 116 "pickle.m"
      {
#line 116 "pickle.m"
        MR_Word libs__pickle__V_3_3 = (MR_Word) libs__pickle__HeadVar__1_1;
#line 116 "pickle.m"
        MR_Word libs__pickle__V_4_4 = (MR_Word) libs__pickle__HeadVar__2_2;

#line 1314 "libs.pickle.c"
        {
#line 1316 "libs.pickle.c"
          libs__pickle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__pickle_scalar_common_3[1], ((MR_Box) (libs__pickle__V_3_3)), ((MR_Box) (libs__pickle__V_4_4)));
        }
#line 116 "pickle.m"
      }
#line 116 "pickle.m"
    return libs__pickle__succeeded;
#line 116 "pickle.m"
  }
#line 116 "pickle.m"
}

#line 66 "pickle.m"
void MR_CALL 
libs__pickle____Compare____unpickler_pred_0_0(
#line 66 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 66 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2,
#line 66 "pickle.m"
  MR_Word libs__pickle__HeadVar__3_3)
#line 66 "pickle.m"
{
#line 66 "pickle.m"
  {
#line 66 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 66 "pickle.m"
    MR_Word libs__pickle__Cast_HeadVar1_4 = libs__pickle__HeadVar__2_2;
#line 66 "pickle.m"
    MR_Word libs__pickle__Cast_HeadVar2_5 = libs__pickle__HeadVar__3_3;

#line 66 "pickle.m"
    {
#line 66 "pickle.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__pickle_scalar_common_2[0], libs__pickle__HeadVar__1_1, ((MR_Box) (libs__pickle__Cast_HeadVar1_4)), ((MR_Box) (libs__pickle__Cast_HeadVar2_5)));
    }
#line 66 "pickle.m"
  }
#line 66 "pickle.m"
}

#line 66 "pickle.m"
MR_bool MR_CALL 
libs__pickle____Unify____unpickler_pred_0_0(
#line 66 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 66 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2)
#line 66 "pickle.m"
{
#line 66 "pickle.m"
  {
#line 66 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 66 "pickle.m"
    MR_Word libs__pickle__Cast_HeadVar1_3 = libs__pickle__HeadVar__1_1;
#line 66 "pickle.m"
    MR_Word libs__pickle__Cast_HeadVar2_4 = libs__pickle__HeadVar__2_2;

#line 66 "pickle.m"
    {
#line 66 "pickle.m"
      libs__pickle__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) libs__pickle__Cast_HeadVar1_3, (MR_Word) libs__pickle__Cast_HeadVar2_4);
    }
#line 66 "pickle.m"
    return libs__pickle__succeeded;
#line 66 "pickle.m"
  }
#line 66 "pickle.m"
}

#line 122 "pickle.m"
void MR_CALL 
libs__pickle____Compare____unpickle_state_0_0(
#line 122 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 122 "pickle.m"
  MR_Integer libs__pickle__HeadVar__2_2,
#line 122 "pickle.m"
  MR_Integer libs__pickle__HeadVar__3_3)
#line 122 "pickle.m"
{
#line 122 "pickle.m"
  {
#line 122 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 122 "pickle.m"
    MR_Integer libs__pickle__Cast_HeadVar1_4 = libs__pickle__HeadVar__2_2;
#line 122 "pickle.m"
    MR_Integer libs__pickle__Cast_HeadVar2_5 = libs__pickle__HeadVar__3_3;

#line 122 "pickle.m"
    {
#line 122 "pickle.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__pickle__HeadVar__1_1, libs__pickle__Cast_HeadVar1_4, libs__pickle__Cast_HeadVar2_5);
    }
#line 122 "pickle.m"
  }
#line 122 "pickle.m"
}

#line 122 "pickle.m"
MR_bool MR_CALL 
libs__pickle____Unify____unpickle_state_0_0(
#line 122 "pickle.m"
  MR_Integer libs__pickle__HeadVar__1_1,
#line 122 "pickle.m"
  MR_Integer libs__pickle__HeadVar__2_2)
#line 122 "pickle.m"
{
#line 122 "pickle.m"
  {
#line 122 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 122 "pickle.m"
    MR_Integer libs__pickle__Cast_HeadVar1_3 = libs__pickle__HeadVar__1_1;
#line 122 "pickle.m"
    MR_Integer libs__pickle__Cast_HeadVar2_4 = libs__pickle__HeadVar__2_2;

#line 122 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__Cast_HeadVar1_3 == libs__pickle__Cast_HeadVar2_4);
#line 122 "pickle.m"
    return libs__pickle__succeeded;
#line 122 "pickle.m"
  }
#line 122 "pickle.m"
}

#line 121 "pickle.m"
void MR_CALL 
libs__pickle____Compare____unpickle_handle_0_0(
#line 121 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 121 "pickle.m"
  MR_Box libs__pickle__HeadVar__2_2,
#line 121 "pickle.m"
  MR_Box libs__pickle__HeadVar__3_3)
#line 121 "pickle.m"
{
#line 121 "pickle.m"
  {
#line 121 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 121 "pickle.m"
    MR_Box libs__pickle__Cast_HeadVar1_4 = libs__pickle__HeadVar__2_2;
#line 121 "pickle.m"
    MR_Box libs__pickle__Cast_HeadVar2_5 = libs__pickle__HeadVar__3_3;

#line 121 "pickle.m"
    {
#line 121 "pickle.m"
      mercury__bitmap____Compare____bitmap_0_0(libs__pickle__HeadVar__1_1, libs__pickle__Cast_HeadVar1_4, libs__pickle__Cast_HeadVar2_5);
    }
#line 121 "pickle.m"
  }
#line 121 "pickle.m"
}

#line 121 "pickle.m"
MR_bool MR_CALL 
libs__pickle____Unify____unpickle_handle_0_0(
#line 121 "pickle.m"
  MR_Box libs__pickle__HeadVar__1_1,
#line 121 "pickle.m"
  MR_Box libs__pickle__HeadVar__2_2)
#line 121 "pickle.m"
{
#line 121 "pickle.m"
  {
#line 121 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 121 "pickle.m"
    MR_Box libs__pickle__Cast_HeadVar1_3 = libs__pickle__HeadVar__1_1;
#line 121 "pickle.m"
    MR_Box libs__pickle__Cast_HeadVar2_4 = libs__pickle__HeadVar__2_2;

#line 121 "pickle.m"
    {
#line 121 "pickle.m"
      libs__pickle__succeeded = mercury__bitmap____Unify____bitmap_0_0(libs__pickle__Cast_HeadVar1_3, libs__pickle__Cast_HeadVar2_4);
    }
#line 121 "pickle.m"
    return libs__pickle__succeeded;
#line 121 "pickle.m"
  }
#line 121 "pickle.m"
}

#line 111 "pickle.m"
void MR_CALL 
libs__pickle____Compare____picklers_0_0(
#line 111 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 111 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2,
#line 111 "pickle.m"
  MR_Word libs__pickle__HeadVar__3_3)
#line 111 "pickle.m"
{
#line 111 "pickle.m"
  {
#line 111 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 111 "pickle.m"
    MR_Integer libs__pickle__CastX_6 = (MR_Integer) libs__pickle__HeadVar__2_2;
#line 111 "pickle.m"
    MR_Integer libs__pickle__CastY_7 = (MR_Integer) libs__pickle__HeadVar__3_3;

#line 111 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__CastX_6 == libs__pickle__CastY_7);
#line 111 "pickle.m"
    if (libs__pickle__succeeded)
#line 1529 "libs.pickle.c"
      *libs__pickle__HeadVar__1_1 = (MR_Integer) 0;
#line 111 "pickle.m"
    else
#line 111 "pickle.m"
      {
#line 111 "pickle.m"
        MR_Word libs__pickle__V_4_4 = (MR_Word) libs__pickle__HeadVar__2_2;
#line 111 "pickle.m"
        MR_Word libs__pickle__V_5_5 = (MR_Word) libs__pickle__HeadVar__3_3;

#line 111 "pickle.m"
        {
#line 111 "pickle.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__pickle_scalar_common_3[0], libs__pickle__HeadVar__1_1, ((MR_Box) (libs__pickle__V_4_4)), ((MR_Box) (libs__pickle__V_5_5)));
        }
#line 111 "pickle.m"
      }
#line 111 "pickle.m"
  }
#line 111 "pickle.m"
}

#line 111 "pickle.m"
MR_bool MR_CALL 
libs__pickle____Unify____picklers_0_0(
#line 111 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 111 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2)
#line 111 "pickle.m"
{
#line 111 "pickle.m"
  {
#line 111 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 111 "pickle.m"
    MR_Integer libs__pickle__CastX_5 = (MR_Integer) libs__pickle__HeadVar__1_1;
#line 111 "pickle.m"
    MR_Integer libs__pickle__CastY_6 = (MR_Integer) libs__pickle__HeadVar__2_2;

#line 111 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__CastX_5 == libs__pickle__CastY_6);
#line 111 "pickle.m"
    if (libs__pickle__succeeded)
#line 111 "pickle.m"
      libs__pickle__succeeded = MR_TRUE;
#line 111 "pickle.m"
    else
#line 111 "pickle.m"
      {
#line 111 "pickle.m"
        MR_Word libs__pickle__V_3_3 = (MR_Word) libs__pickle__HeadVar__1_1;
#line 111 "pickle.m"
        MR_Word libs__pickle__V_4_4 = (MR_Word) libs__pickle__HeadVar__2_2;

#line 1585 "libs.pickle.c"
        {
#line 1587 "libs.pickle.c"
          libs__pickle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__pickle_scalar_common_3[0], ((MR_Box) (libs__pickle__V_3_3)), ((MR_Box) (libs__pickle__V_4_4)));
        }
#line 111 "pickle.m"
      }
#line 111 "pickle.m"
    return libs__pickle__succeeded;
#line 111 "pickle.m"
  }
#line 111 "pickle.m"
}

#line 35 "pickle.m"
void MR_CALL 
libs__pickle____Compare____pickler_pred_0_0(
#line 35 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 35 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2,
#line 35 "pickle.m"
  MR_Word libs__pickle__HeadVar__3_3)
#line 35 "pickle.m"
{
#line 35 "pickle.m"
  {
#line 35 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 35 "pickle.m"
    MR_Word libs__pickle__Cast_HeadVar1_4 = libs__pickle__HeadVar__2_2;
#line 35 "pickle.m"
    MR_Word libs__pickle__Cast_HeadVar2_5 = libs__pickle__HeadVar__3_3;

#line 35 "pickle.m"
    {
#line 35 "pickle.m"
      mercury__builtin__compare_3_p_0((MR_Word) &libs__pickle_scalar_common_1[0], libs__pickle__HeadVar__1_1, ((MR_Box) (libs__pickle__Cast_HeadVar1_4)), ((MR_Box) (libs__pickle__Cast_HeadVar2_5)));
    }
#line 35 "pickle.m"
  }
#line 35 "pickle.m"
}

#line 35 "pickle.m"
MR_bool MR_CALL 
libs__pickle____Unify____pickler_pred_0_0(
#line 35 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 35 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2)
#line 35 "pickle.m"
{
#line 35 "pickle.m"
  {
#line 35 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 35 "pickle.m"
    MR_Word libs__pickle__Cast_HeadVar1_3 = libs__pickle__HeadVar__1_1;
#line 35 "pickle.m"
    MR_Word libs__pickle__Cast_HeadVar2_4 = libs__pickle__HeadVar__2_2;

#line 35 "pickle.m"
    {
#line 35 "pickle.m"
      libs__pickle__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) libs__pickle__Cast_HeadVar1_3, (MR_Word) libs__pickle__Cast_HeadVar2_4);
    }
#line 35 "pickle.m"
    return libs__pickle__succeeded;
#line 35 "pickle.m"
  }
#line 35 "pickle.m"
}

#line 124 "pickle.m"
static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0(
#line 124 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 124 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2,
#line 124 "pickle.m"
  MR_Word libs__pickle__HeadVar__3_3)
#line 124 "pickle.m"
{
#line 124 "pickle.m"
  {
#line 124 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 124 "pickle.m"
    MR_Integer libs__pickle__CastX_6 = (MR_Integer) libs__pickle__HeadVar__2_2;
#line 124 "pickle.m"
    MR_Integer libs__pickle__CastY_7 = (MR_Integer) libs__pickle__HeadVar__3_3;

#line 124 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__CastX_6 == libs__pickle__CastY_7);
#line 124 "pickle.m"
    if (libs__pickle__succeeded)
#line 1683 "libs.pickle.c"
      *libs__pickle__HeadVar__1_1 = (MR_Integer) 0;
#line 124 "pickle.m"
    else
#line 124 "pickle.m"
      {
#line 124 "pickle.m"
        MR_String libs__pickle__V_4_4 = (MR_String) libs__pickle__HeadVar__2_2;
#line 124 "pickle.m"
        MR_String libs__pickle__V_5_5 = (MR_String) libs__pickle__HeadVar__3_3;

#line 124 "pickle.m"
        {
#line 124 "pickle.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(libs__pickle__HeadVar__1_1, libs__pickle__V_4_4, libs__pickle__V_5_5);
        }
#line 124 "pickle.m"
      }
#line 124 "pickle.m"
  }
#line 124 "pickle.m"
}

#line 124 "pickle.m"
static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0(
#line 124 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 124 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2)
#line 124 "pickle.m"
{
#line 124 "pickle.m"
  {
#line 124 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 124 "pickle.m"
    MR_Integer libs__pickle__CastX_5 = (MR_Integer) libs__pickle__HeadVar__1_1;
#line 124 "pickle.m"
    MR_Integer libs__pickle__CastY_6 = (MR_Integer) libs__pickle__HeadVar__2_2;

#line 124 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__CastX_5 == libs__pickle__CastY_6);
#line 124 "pickle.m"
    if (libs__pickle__succeeded)
#line 124 "pickle.m"
      libs__pickle__succeeded = MR_TRUE;
#line 124 "pickle.m"
    else
#line 124 "pickle.m"
      {
#line 124 "pickle.m"
        MR_String libs__pickle__V_3_3 = (MR_String) libs__pickle__HeadVar__1_1;
#line 124 "pickle.m"
        MR_String libs__pickle__V_4_4 = (MR_String) libs__pickle__HeadVar__2_2;

#line 1739 "libs.pickle.c"
        libs__pickle__succeeded = (strcmp(libs__pickle__V_3_3, libs__pickle__V_4_4) == 0);
#line 124 "pickle.m"
      }
#line 124 "pickle.m"
    return libs__pickle__succeeded;
#line 124 "pickle.m"
  }
#line 124 "pickle.m"
}

#line 522 "pickle.m"
static void MR_CALL 
libs__pickle__reinterpret_ints_as_float_3_p_0(
#line 522 "pickle.m"
  MR_Integer libs__pickle__A_1,
#line 522 "pickle.m"
  MR_Integer libs__pickle__B_2,
#line 522 "pickle.m"
  MR_Float * libs__pickle__Flt_3)
#line 522 "pickle.m"
{
#line 524 "pickle.m"
  {
#line 524 "pickle.m"
    MR_bool libs__pickle__succeeded;

#line 527 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__reinterpret_ints_as_float_3_p_0

	MR_Integer A;
	MR_Integer B;
	MR_Float Flt;

	A =  libs__pickle__A_1 ;
	B =  libs__pickle__B_2 ;
		{
#line 527 "pickle.m"

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

#line 1795 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__Flt_3  = Flt;
#line 527 "pickle.m"
}
#line 524 "pickle.m"
  }
#line 522 "pickle.m"
}

#line 514 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_float_4_p_0(
#line 514 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 514 "pickle.m"
  MR_Float * libs__pickle__Float_6,
#line 514 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_10,
#line 514 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_11)
#line 514 "pickle.m"
{
#line 517 "pickle.m"
  {
#line 517 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 517 "pickle.m"
    MR_Integer libs__pickle__A_8;
#line 517 "pickle.m"
    MR_Integer libs__pickle__B_9;
#line 517 "pickle.m"
    MR_Integer libs__pickle__STATE_VARIABLE_State_12_12;

#line 518 "pickle.m"
    {
#line 518 "pickle.m"
      libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_5, &libs__pickle__A_8, libs__pickle__STATE_VARIABLE_State_0_10, &libs__pickle__STATE_VARIABLE_State_12_12);
    }
#line 519 "pickle.m"
    {
#line 519 "pickle.m"
      libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_5, &libs__pickle__B_9, libs__pickle__STATE_VARIABLE_State_12_12, libs__pickle__STATE_VARIABLE_State_11);
    }
#line 527 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__unpickle_float_4_p_0

	MR_Integer A;
	MR_Integer B;
	MR_Float Flt;

	A =  libs__pickle__A_8 ;
	B =  libs__pickle__B_9 ;
		{
#line 527 "pickle.m"

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

#line 1870 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__Float_6  = Flt;
#line 527 "pickle.m"
}
#line 517 "pickle.m"
  }
#line 514 "pickle.m"
}

#line 489 "pickle.m"
static void MR_CALL 
libs__pickle__reinterpret_float_as_ints_3_p_0(
#line 489 "pickle.m"
  MR_Float libs__pickle__Flt_1,
#line 489 "pickle.m"
  MR_Integer * libs__pickle__A_2,
#line 489 "pickle.m"
  MR_Integer * libs__pickle__B_3)
#line 489 "pickle.m"
{
#line 492 "pickle.m"
  {
#line 492 "pickle.m"
    MR_bool libs__pickle__succeeded;

#line 495 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__reinterpret_float_as_ints_3_p_0

	MR_Float Flt;
	MR_Integer A;
	MR_Integer B;

	Flt =  libs__pickle__Flt_1 ;
		{
#line 495 "pickle.m"

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

#line 1924 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__A_2  = A;
	 *libs__pickle__B_3  = B;
#line 495 "pickle.m"
}
#line 492 "pickle.m"
  }
#line 489 "pickle.m"
}

#line 480 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_float_3_p_0(
#line 480 "pickle.m"
  MR_Float libs__pickle__Float_4)
#line 480 "pickle.m"
{
#line 482 "pickle.m"
  {
#line 482 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 482 "pickle.m"
    MR_Integer libs__pickle__A_6;
#line 482 "pickle.m"
    MR_Integer libs__pickle__B_7;
#line 482 "pickle.m"
    MR_Integer libs__pickle__A_21;
#line 482 "pickle.m"
    MR_Integer libs__pickle__B_22;
#line 482 "pickle.m"
    MR_Integer libs__pickle__C_23;
#line 482 "pickle.m"
    MR_Integer libs__pickle__D_24;
#line 482 "pickle.m"
    MR_Integer libs__pickle__V_25_25;
#line 482 "pickle.m"
    MR_Integer libs__pickle__V_28_28;
#line 482 "pickle.m"
    MR_Integer libs__pickle__V_31_31;
#line 482 "pickle.m"
    MR_Integer libs__pickle__V_34_34;
#line 482 "pickle.m"
    MR_Integer libs__pickle__A_45;
#line 482 "pickle.m"
    MR_Integer libs__pickle__B_46;
#line 482 "pickle.m"
    MR_Integer libs__pickle__C_47;
#line 482 "pickle.m"
    MR_Integer libs__pickle__D_48;
#line 482 "pickle.m"
    MR_Integer libs__pickle__V_49_49;
#line 482 "pickle.m"
    MR_Integer libs__pickle__V_52_52;
#line 482 "pickle.m"
    MR_Integer libs__pickle__V_55_55;
#line 482 "pickle.m"
    MR_Integer libs__pickle__V_58_58;

#line 495 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__pickle_float_3_p_0

	MR_Float Flt;
	MR_Integer A;
	MR_Integer B;

	Flt =  libs__pickle__Float_4 ;
		{
#line 495 "pickle.m"

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

#line 2011 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 libs__pickle__A_6  = A;
	 libs__pickle__B_7  = B;
#line 495 "pickle.m"
}
#line 380 "pickle.m"
    {
#line 380 "pickle.m"
      libs__pickle__V_25_25 = mercury__int__f_62_62_2_f_0(libs__pickle__A_6, (MR_Integer) 24);
    }
#line 380 "pickle.m"
    libs__pickle__A_21 = (libs__pickle__V_25_25 & (MR_Integer) 255);
#line 381 "pickle.m"
    {
#line 381 "pickle.m"
      libs__pickle__V_28_28 = mercury__int__f_62_62_2_f_0(libs__pickle__A_6, (MR_Integer) 16);
    }
#line 381 "pickle.m"
    libs__pickle__B_22 = (libs__pickle__V_28_28 & (MR_Integer) 255);
#line 382 "pickle.m"
    {
#line 382 "pickle.m"
      libs__pickle__V_31_31 = mercury__int__f_62_62_2_f_0(libs__pickle__A_6, (MR_Integer) 8);
    }
#line 382 "pickle.m"
    libs__pickle__C_23 = (libs__pickle__V_31_31 & (MR_Integer) 255);
#line 383 "pickle.m"
    {
#line 383 "pickle.m"
      libs__pickle__V_34_34 = mercury__int__f_62_62_2_f_0(libs__pickle__A_6, (MR_Integer) 0);
    }
#line 383 "pickle.m"
    libs__pickle__D_24 = (libs__pickle__V_34_34 & (MR_Integer) 255);
#line 384 "pickle.m"
    {
#line 384 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__A_21);
    }
#line 385 "pickle.m"
    {
#line 385 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__B_22);
    }
#line 386 "pickle.m"
    {
#line 386 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__C_23);
    }
#line 387 "pickle.m"
    {
#line 387 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__D_24);
    }
#line 380 "pickle.m"
    {
#line 380 "pickle.m"
      libs__pickle__V_49_49 = mercury__int__f_62_62_2_f_0(libs__pickle__B_7, (MR_Integer) 24);
    }
#line 380 "pickle.m"
    libs__pickle__A_45 = (libs__pickle__V_49_49 & (MR_Integer) 255);
#line 381 "pickle.m"
    {
#line 381 "pickle.m"
      libs__pickle__V_52_52 = mercury__int__f_62_62_2_f_0(libs__pickle__B_7, (MR_Integer) 16);
    }
#line 381 "pickle.m"
    libs__pickle__B_46 = (libs__pickle__V_52_52 & (MR_Integer) 255);
#line 382 "pickle.m"
    {
#line 382 "pickle.m"
      libs__pickle__V_55_55 = mercury__int__f_62_62_2_f_0(libs__pickle__B_7, (MR_Integer) 8);
    }
#line 382 "pickle.m"
    libs__pickle__C_47 = (libs__pickle__V_55_55 & (MR_Integer) 255);
#line 383 "pickle.m"
    {
#line 383 "pickle.m"
      libs__pickle__V_58_58 = mercury__int__f_62_62_2_f_0(libs__pickle__B_7, (MR_Integer) 0);
    }
#line 383 "pickle.m"
    libs__pickle__D_48 = (libs__pickle__V_58_58 & (MR_Integer) 255);
#line 384 "pickle.m"
    {
#line 384 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__A_45);
    }
#line 385 "pickle.m"
    {
#line 385 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__B_46);
    }
#line 386 "pickle.m"
    {
#line 386 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__C_47);
    }
#line 387 "pickle.m"
    {
#line 387 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__D_48);
    }
#line 482 "pickle.m"
  }
#line 480 "pickle.m"
}

#line 466 "pickle.m"
static void MR_CALL 
libs__pickle__local_unsafe_set_char_4_p_0(
#line 466 "pickle.m"
  MR_Char libs__pickle__Chr_1,
#line 466 "pickle.m"
  MR_Integer libs__pickle__Index_2,
#line 466 "pickle.m"
  MR_String libs__pickle__Str0_3,
#line 466 "pickle.m"
  MR_String * libs__pickle__Str_4)
#line 466 "pickle.m"
{
#line 469 "pickle.m"
  {
#line 469 "pickle.m"
    MR_bool libs__pickle__succeeded;

#line 472 "pickle.m"
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
#line 472 "pickle.m"

    Str0[Index] = Chr;
    Str = Str0;

#line 2156 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__Str_4  = Str;
#line 472 "pickle.m"
}
#line 469 "pickle.m"
  }
#line 466 "pickle.m"
}

#line 451 "pickle.m"
static void MR_CALL 
libs__pickle__allocate_string_2_p_0(
#line 451 "pickle.m"
  MR_Integer libs__pickle__Length_1,
#line 451 "pickle.m"
  MR_String * libs__pickle__Str_2)
#line 451 "pickle.m"
{
#line 453 "pickle.m"
  {
#line 453 "pickle.m"
    MR_bool libs__pickle__succeeded;

#line 456 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__allocate_string_2_p_0

	MR_Integer Length;
	MR_String Str;

	Length =  libs__pickle__Length_1 ;
		{
#line 456 "pickle.m"

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';

#line 2196 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__Str_2  = Str;
#line 456 "pickle.m"
}
#line 453 "pickle.m"
  }
#line 451 "pickle.m"
}

#line 439 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_string_2_7_p_0(
#line 439 "pickle.m"
  MR_Box libs__pickle__Handle_8,
#line 439 "pickle.m"
  MR_Integer libs__pickle__Index_9,
#line 439 "pickle.m"
  MR_Integer libs__pickle__Length_10,
#line 439 "pickle.m"
  MR_String libs__pickle__STATE_VARIABLE_String_0_14,
#line 439 "pickle.m"
  MR_String * libs__pickle__STATE_VARIABLE_String_15,
#line 439 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_16,
#line 439 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_17)
#line 439 "pickle.m"
{
#line 443 "pickle.m"
  while (MR_TRUE)
#line 443 "pickle.m"
    {
#line 443 "pickle.m"
      /* tailcall optimized into a loop */
#line 443 "pickle.m"
      {
#line 443 "pickle.m"
        MR_bool libs__pickle__succeeded = (libs__pickle__Index_9 == libs__pickle__Length_10);

#line 443 "pickle.m"
        if (libs__pickle__succeeded)
#line 444 "pickle.m"
          {
#line 444 "pickle.m"
            *libs__pickle__STATE_VARIABLE_State_17 = libs__pickle__STATE_VARIABLE_State_0_16;
#line 444 "pickle.m"
            *libs__pickle__STATE_VARIABLE_String_15 = libs__pickle__STATE_VARIABLE_String_0_14;
#line 444 "pickle.m"
          }
#line 443 "pickle.m"
        else
#line 446 "pickle.m"
          {
#line 446 "pickle.m"
            MR_Char libs__pickle__Char_13;
#line 446 "pickle.m"
            MR_Integer libs__pickle__STATE_VARIABLE_State_18_18 = (libs__pickle__STATE_VARIABLE_State_0_16 + (MR_Integer) 1);
#line 446 "pickle.m"
            MR_String libs__pickle__STATE_VARIABLE_String_19_19;
#line 446 "pickle.m"
            MR_Integer libs__pickle__V_20_20;
#line 446 "pickle.m"
            MR_Integer libs__pickle__Byte_29;

#line 552 "pickle.m"
            {
#line 552 "pickle.m"
              libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_8, libs__pickle__STATE_VARIABLE_State_0_16);
            }
#line 552 "pickle.m"
            if (libs__pickle__succeeded)
#line 553 "pickle.m"
              {
#line 553 "pickle.m"
                libs__pickle__Byte_29 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_0_16, libs__pickle__Handle_8);
              }
#line 552 "pickle.m"
            else
#line 555 "pickle.m"
              {
#line 555 "pickle.m"
                MR_String libs__pickle__Msg_34;
#line 555 "pickle.m"
                MR_String libs__pickle__V_37_37;
#line 555 "pickle.m"
                MR_String libs__pickle__V_38_38;
#line 555 "pickle.m"
                MR_Word libs__pickle__V_40_40;

#line 555 "pickle.m"
                {
#line 555 "pickle.m"
                  libs__pickle__V_38_38 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_0_16);
                }
#line 555 "pickle.m"
                {
#line 555 "pickle.m"
                  libs__pickle__V_37_37 = mercury__string__f_43_43_2_f_0(libs__pickle__V_38_38, (MR_String) " is out of range");
                }
#line 555 "pickle.m"
                {
#line 555 "pickle.m"
                  libs__pickle__Msg_34 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_37_37);
                }
#line 556 "pickle.m"
                libs__pickle__V_40_40 = (MR_Word) libs__pickle__Msg_34;
#line 556 "pickle.m"
                {
#line 556 "pickle.m"
                  mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_40_40)));
#line 556 "pickle.m"
                  return;
                }
#line 555 "pickle.m"
              }
#line 422 "pickle.m"
            {
#line 422 "pickle.m"
              mercury__char__det_from_int_2_p_0(libs__pickle__Byte_29, &libs__pickle__Char_13);
            }
#line 472 "pickle.m"
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
#line 472 "pickle.m"

    Str0[Index] = Chr;
    Str = Str0;

#line 2337 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 libs__pickle__STATE_VARIABLE_String_19_19  = Str;
#line 472 "pickle.m"
}
#line 448 "pickle.m"
            libs__pickle__V_20_20 = (libs__pickle__Index_9 + (MR_Integer) 1);
#line 448 "pickle.m"
            /* direct tailcall eliminated */
#line 448 "pickle.m"
            {
#line 448 "pickle.m"
              MR_Integer libs__pickle__Index__tmp_copy_9 = libs__pickle__V_20_20;
#line 448 "pickle.m"
              MR_String libs__pickle__STATE_VARIABLE_String_0__tmp_copy_14 = libs__pickle__STATE_VARIABLE_String_19_19;
#line 448 "pickle.m"
              MR_Integer libs__pickle__STATE_VARIABLE_State_0__tmp_copy_16 = libs__pickle__STATE_VARIABLE_State_18_18;

#line 448 "pickle.m"
              libs__pickle__STATE_VARIABLE_State_0_16 = libs__pickle__STATE_VARIABLE_State_0__tmp_copy_16;
#line 448 "pickle.m"
              libs__pickle__STATE_VARIABLE_String_0_14 = libs__pickle__STATE_VARIABLE_String_0__tmp_copy_14;
#line 448 "pickle.m"
              libs__pickle__Index_9 = libs__pickle__Index__tmp_copy_9;
#line 448 "pickle.m"
            }
#line 448 "pickle.m"
            continue;
#line 446 "pickle.m"
          }
#line 443 "pickle.m"
      }
#line 443 "pickle.m"
      break;
#line 443 "pickle.m"
    }
#line 439 "pickle.m"
}

#line 431 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_string_4_p_0(
#line 431 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 431 "pickle.m"
  MR_String * libs__pickle__String_6,
#line 431 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_10,
#line 431 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_11)
#line 431 "pickle.m"
{
#line 434 "pickle.m"
  {
#line 434 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 434 "pickle.m"
    MR_Integer libs__pickle__Length_8;
#line 434 "pickle.m"
    MR_String libs__pickle__String0_9;
#line 434 "pickle.m"
    MR_Integer libs__pickle__STATE_VARIABLE_State_12_12;

#line 435 "pickle.m"
    {
#line 435 "pickle.m"
      libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_5, &libs__pickle__Length_8, libs__pickle__STATE_VARIABLE_State_0_10, &libs__pickle__STATE_VARIABLE_State_12_12);
    }
#line 456 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__unpickle_string_4_p_0

	MR_Integer Length;
	MR_String Str;

	Length =  libs__pickle__Length_8 ;
		{
#line 456 "pickle.m"

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';

#line 2421 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 libs__pickle__String0_9  = Str;
#line 456 "pickle.m"
}
#line 437 "pickle.m"
    {
#line 437 "pickle.m"
      libs__pickle__unpickle_string_2_7_p_0(libs__pickle__Handle_5, (MR_Integer) 0, libs__pickle__Length_8, libs__pickle__String0_9, libs__pickle__String_6, libs__pickle__STATE_VARIABLE_State_12_12, libs__pickle__STATE_VARIABLE_State_11);
    }
#line 434 "pickle.m"
  }
#line 431 "pickle.m"
}

#line 429 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_string_3_p_0_1(
#line 429 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 429 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_1,
#line 429 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_2,
#line 429 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_3)
#line 429 "pickle.m"
{
#line 429 "pickle.m"
  {
#line 429 "pickle.m"
    MR_Box libs__pickle__closure = libs__pickle__closure_arg;

#line 429 "pickle.m"
    {
#line 429 "pickle.m"
      libs__pickle__pickle_char_3_p_0(((MR_Char) (MR_Word) libs__pickle__wrapper_arg_1));
    }
#line 429 "pickle.m"
  }
#line 429 "pickle.m"
}

#line 424 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_string_3_p_0(
#line 424 "pickle.m"
  MR_String libs__pickle__String_4)
#line 424 "pickle.m"
{
#line 426 "pickle.m"
  {
#line 426 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 426 "pickle.m"
    MR_Integer libs__pickle__Length_6;
#line 426 "pickle.m"
    MR_Integer libs__pickle__A_20;
#line 426 "pickle.m"
    MR_Integer libs__pickle__B_21;
#line 426 "pickle.m"
    MR_Integer libs__pickle__C_22;
#line 426 "pickle.m"
    MR_Integer libs__pickle__D_23;
#line 426 "pickle.m"
    MR_Integer libs__pickle__V_24_24;
#line 426 "pickle.m"
    MR_Integer libs__pickle__V_27_27;
#line 426 "pickle.m"
    MR_Integer libs__pickle__V_30_30;
#line 426 "pickle.m"
    MR_Integer libs__pickle__V_33_33;
#line 429 "pickle.m"
    MR_Box libs__pickle__conv0_STATE_VARIABLE_IO_8;

#line 427 "pickle.m"
    {
#line 427 "pickle.m"
      libs__pickle__Length_6 = mercury__string__length_1_f_0(libs__pickle__String_4);
    }
#line 380 "pickle.m"
    {
#line 380 "pickle.m"
      libs__pickle__V_24_24 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_6, (MR_Integer) 24);
    }
#line 380 "pickle.m"
    libs__pickle__A_20 = (libs__pickle__V_24_24 & (MR_Integer) 255);
#line 381 "pickle.m"
    {
#line 381 "pickle.m"
      libs__pickle__V_27_27 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_6, (MR_Integer) 16);
    }
#line 381 "pickle.m"
    libs__pickle__B_21 = (libs__pickle__V_27_27 & (MR_Integer) 255);
#line 382 "pickle.m"
    {
#line 382 "pickle.m"
      libs__pickle__V_30_30 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_6, (MR_Integer) 8);
    }
#line 382 "pickle.m"
    libs__pickle__C_22 = (libs__pickle__V_30_30 & (MR_Integer) 255);
#line 383 "pickle.m"
    {
#line 383 "pickle.m"
      libs__pickle__V_33_33 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_6, (MR_Integer) 0);
    }
#line 383 "pickle.m"
    libs__pickle__D_23 = (libs__pickle__V_33_33 & (MR_Integer) 255);
#line 384 "pickle.m"
    {
#line 384 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__A_20);
    }
#line 385 "pickle.m"
    {
#line 385 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__B_21);
    }
#line 386 "pickle.m"
    {
#line 386 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__C_22);
    }
#line 387 "pickle.m"
    {
#line 387 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__D_23);
    }
#line 429 "pickle.m"
    {
#line 429 "pickle.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &libs__pickle_scalar_common_3[3], libs__pickle__String_4, ((MR_Box) ((MR_Integer) 0)), &libs__pickle__conv0_STATE_VARIABLE_IO_8);
    }
#line 426 "pickle.m"
  }
#line 424 "pickle.m"
}

#line 417 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_char_4_p_0(
#line 417 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 417 "pickle.m"
  MR_Char * libs__pickle__Char_6,
#line 417 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_9,
#line 417 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_10)
#line 417 "pickle.m"
{
#line 420 "pickle.m"
  {
#line 420 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 420 "pickle.m"
    MR_Integer libs__pickle__Byte_8;

#line 551 "pickle.m"
    *libs__pickle__STATE_VARIABLE_State_10 = (libs__pickle__STATE_VARIABLE_State_0_9 + (MR_Integer) 1);
#line 552 "pickle.m"
    {
#line 552 "pickle.m"
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_0_9);
    }
#line 552 "pickle.m"
    if (libs__pickle__succeeded)
#line 553 "pickle.m"
      {
#line 553 "pickle.m"
        libs__pickle__Byte_8 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_0_9, libs__pickle__Handle_5);
      }
#line 552 "pickle.m"
    else
#line 555 "pickle.m"
      {
#line 555 "pickle.m"
        MR_String libs__pickle__Msg_15;
#line 555 "pickle.m"
        MR_String libs__pickle__V_18_18;
#line 555 "pickle.m"
        MR_String libs__pickle__V_19_19;
#line 555 "pickle.m"
        MR_Word libs__pickle__V_21_21;

#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__V_19_19 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_0_9);
        }
#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__V_18_18 = mercury__string__f_43_43_2_f_0(libs__pickle__V_19_19, (MR_String) " is out of range");
        }
#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_18_18);
        }
#line 556 "pickle.m"
        libs__pickle__V_21_21 = (MR_Word) libs__pickle__Msg_15;
#line 556 "pickle.m"
        {
#line 556 "pickle.m"
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_21_21)));
#line 556 "pickle.m"
          return;
        }
#line 555 "pickle.m"
      }
#line 422 "pickle.m"
    {
#line 422 "pickle.m"
      mercury__char__det_from_int_2_p_0(libs__pickle__Byte_8, libs__pickle__Char_6);
    }
#line 420 "pickle.m"
  }
#line 417 "pickle.m"
}

#line 410 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_char_3_p_0(
#line 410 "pickle.m"
  MR_Char libs__pickle__Char_4)
#line 410 "pickle.m"
{
#line 412 "pickle.m"
  {
#line 412 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 412 "pickle.m"
    MR_Integer libs__pickle__Int_6;

#line 414 "pickle.m"
    {
#line 414 "pickle.m"
      mercury__char__to_int_2_p_0(libs__pickle__Char_4, &libs__pickle__Int_6);
    }
#line 415 "pickle.m"
    {
#line 415 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__Int_6);
    }
#line 412 "pickle.m"
  }
#line 410 "pickle.m"
}

#line 389 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_int32_4_p_0(
#line 389 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 389 "pickle.m"
  MR_Integer * libs__pickle__Int_6,
#line 389 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_13,
#line 389 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_14)
#line 389 "pickle.m"
{
#line 392 "pickle.m"
  {
#line 392 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 392 "pickle.m"
    MR_Integer libs__pickle__A_8;
#line 392 "pickle.m"
    MR_Integer libs__pickle__B_9;
#line 392 "pickle.m"
    MR_Integer libs__pickle__C_10;
#line 392 "pickle.m"
    MR_Integer libs__pickle__D_11;
#line 392 "pickle.m"
    MR_Integer libs__pickle__Int0_12;
#line 392 "pickle.m"
    MR_Integer libs__pickle__STATE_VARIABLE_State_15_15 = (libs__pickle__STATE_VARIABLE_State_0_13 + (MR_Integer) 1);
#line 392 "pickle.m"
    MR_Integer libs__pickle__STATE_VARIABLE_State_16_16;
#line 392 "pickle.m"
    MR_Integer libs__pickle__STATE_VARIABLE_State_17_17;
#line 392 "pickle.m"
    MR_Integer libs__pickle__V_19_19;
#line 392 "pickle.m"
    MR_Integer libs__pickle__V_20_20;
#line 392 "pickle.m"
    MR_Integer libs__pickle__V_21_21;
#line 392 "pickle.m"
    MR_Integer libs__pickle__V_23_23;
#line 392 "pickle.m"
    MR_Integer libs__pickle__V_25_25;
#line 392 "pickle.m"
    MR_Integer libs__pickle__V_27_27;
#line 392 "pickle.m"
    MR_Integer libs__pickle__Mask_75;
#line 392 "pickle.m"
    MR_Integer libs__pickle__V_78_78;

#line 552 "pickle.m"
    {
#line 552 "pickle.m"
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_0_13);
    }
#line 552 "pickle.m"
    if (libs__pickle__succeeded)
#line 553 "pickle.m"
      {
#line 553 "pickle.m"
        libs__pickle__A_8 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_0_13, libs__pickle__Handle_5);
      }
#line 552 "pickle.m"
    else
#line 555 "pickle.m"
      {
#line 555 "pickle.m"
        MR_String libs__pickle__Msg_32;
#line 555 "pickle.m"
        MR_String libs__pickle__V_35_35;
#line 555 "pickle.m"
        MR_String libs__pickle__V_36_36;
#line 555 "pickle.m"
        MR_Word libs__pickle__V_38_38;

#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__V_36_36 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_0_13);
        }
#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__V_35_35 = mercury__string__f_43_43_2_f_0(libs__pickle__V_36_36, (MR_String) " is out of range");
        }
#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__Msg_32 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_35_35);
        }
#line 556 "pickle.m"
        libs__pickle__V_38_38 = (MR_Word) libs__pickle__Msg_32;
#line 556 "pickle.m"
        {
#line 556 "pickle.m"
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_38_38)));
#line 556 "pickle.m"
          return;
        }
#line 555 "pickle.m"
      }
#line 551 "pickle.m"
    libs__pickle__STATE_VARIABLE_State_16_16 = (libs__pickle__STATE_VARIABLE_State_15_15 + (MR_Integer) 1);
#line 552 "pickle.m"
    {
#line 552 "pickle.m"
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_15_15);
    }
#line 552 "pickle.m"
    if (libs__pickle__succeeded)
#line 553 "pickle.m"
      {
#line 553 "pickle.m"
        libs__pickle__B_9 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_15_15, libs__pickle__Handle_5);
      }
#line 552 "pickle.m"
    else
#line 555 "pickle.m"
      {
#line 555 "pickle.m"
        MR_String libs__pickle__Msg_43;
#line 555 "pickle.m"
        MR_String libs__pickle__V_46_46;
#line 555 "pickle.m"
        MR_String libs__pickle__V_47_47;
#line 555 "pickle.m"
        MR_Word libs__pickle__V_49_49;

#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__V_47_47 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_15_15);
        }
#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__V_46_46 = mercury__string__f_43_43_2_f_0(libs__pickle__V_47_47, (MR_String) " is out of range");
        }
#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__Msg_43 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_46_46);
        }
#line 556 "pickle.m"
        libs__pickle__V_49_49 = (MR_Word) libs__pickle__Msg_43;
#line 556 "pickle.m"
        {
#line 556 "pickle.m"
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_49_49)));
#line 556 "pickle.m"
          return;
        }
#line 555 "pickle.m"
      }
#line 551 "pickle.m"
    libs__pickle__STATE_VARIABLE_State_17_17 = (libs__pickle__STATE_VARIABLE_State_16_16 + (MR_Integer) 1);
#line 552 "pickle.m"
    {
#line 552 "pickle.m"
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_16_16);
    }
#line 552 "pickle.m"
    if (libs__pickle__succeeded)
#line 553 "pickle.m"
      {
#line 553 "pickle.m"
        libs__pickle__C_10 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_16_16, libs__pickle__Handle_5);
      }
#line 552 "pickle.m"
    else
#line 555 "pickle.m"
      {
#line 555 "pickle.m"
        MR_String libs__pickle__Msg_54;
#line 555 "pickle.m"
        MR_String libs__pickle__V_57_57;
#line 555 "pickle.m"
        MR_String libs__pickle__V_58_58;
#line 555 "pickle.m"
        MR_Word libs__pickle__V_60_60;

#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__V_58_58 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_16_16);
        }
#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__V_57_57 = mercury__string__f_43_43_2_f_0(libs__pickle__V_58_58, (MR_String) " is out of range");
        }
#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__Msg_54 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_57_57);
        }
#line 556 "pickle.m"
        libs__pickle__V_60_60 = (MR_Word) libs__pickle__Msg_54;
#line 556 "pickle.m"
        {
#line 556 "pickle.m"
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_60_60)));
#line 556 "pickle.m"
          return;
        }
#line 555 "pickle.m"
      }
#line 551 "pickle.m"
    *libs__pickle__STATE_VARIABLE_State_14 = (libs__pickle__STATE_VARIABLE_State_17_17 + (MR_Integer) 1);
#line 552 "pickle.m"
    {
#line 552 "pickle.m"
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_17_17);
    }
#line 552 "pickle.m"
    if (libs__pickle__succeeded)
#line 553 "pickle.m"
      {
#line 553 "pickle.m"
        libs__pickle__D_11 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_17_17, libs__pickle__Handle_5);
      }
#line 552 "pickle.m"
    else
#line 555 "pickle.m"
      {
#line 555 "pickle.m"
        MR_String libs__pickle__Msg_65;
#line 555 "pickle.m"
        MR_String libs__pickle__V_68_68;
#line 555 "pickle.m"
        MR_String libs__pickle__V_69_69;
#line 555 "pickle.m"
        MR_Word libs__pickle__V_71_71;

#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__V_69_69 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_17_17);
        }
#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__V_68_68 = mercury__string__f_43_43_2_f_0(libs__pickle__V_69_69, (MR_String) " is out of range");
        }
#line 555 "pickle.m"
        {
#line 555 "pickle.m"
          libs__pickle__Msg_65 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_68_68);
        }
#line 556 "pickle.m"
        libs__pickle__V_71_71 = (MR_Word) libs__pickle__Msg_65;
#line 556 "pickle.m"
        {
#line 556 "pickle.m"
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_71_71)));
#line 556 "pickle.m"
          return;
        }
#line 555 "pickle.m"
      }
#line 397 "pickle.m"
    libs__pickle__V_21_21 = (libs__pickle__A_8 << (MR_Integer) 24);
#line 398 "pickle.m"
    libs__pickle__V_23_23 = (libs__pickle__B_9 << (MR_Integer) 16);
#line 398 "pickle.m"
    libs__pickle__V_20_20 = (libs__pickle__V_21_21 | libs__pickle__V_23_23);
#line 399 "pickle.m"
    libs__pickle__V_25_25 = (libs__pickle__C_10 << (MR_Integer) 8);
#line 399 "pickle.m"
    libs__pickle__V_19_19 = (libs__pickle__V_20_20 | libs__pickle__V_25_25);
#line 400 "pickle.m"
    libs__pickle__V_27_27 = (libs__pickle__D_11 << (MR_Integer) 0);
#line 400 "pickle.m"
    libs__pickle__Int0_12 = (libs__pickle__V_19_19 | libs__pickle__V_27_27);
#line 407 "pickle.m"
    libs__pickle__Mask_75 = ((MR_Integer) 1 << (MR_Integer) 31);
#line 408 "pickle.m"
    libs__pickle__V_78_78 = (libs__pickle__Int0_12 ^ libs__pickle__Mask_75);
#line 408 "pickle.m"
    *libs__pickle__Int_6 = (libs__pickle__V_78_78 - libs__pickle__Mask_75);
#line 392 "pickle.m"
  }
#line 389 "pickle.m"
}

#line 377 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_int32_3_p_0(
#line 377 "pickle.m"
  MR_Integer libs__pickle__Int_4)
#line 377 "pickle.m"
{
#line 379 "pickle.m"
  {
#line 379 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 379 "pickle.m"
    MR_Integer libs__pickle__A_6;
#line 379 "pickle.m"
    MR_Integer libs__pickle__B_7;
#line 379 "pickle.m"
    MR_Integer libs__pickle__C_8;
#line 379 "pickle.m"
    MR_Integer libs__pickle__D_9;
#line 379 "pickle.m"
    MR_Integer libs__pickle__V_12_12;
#line 379 "pickle.m"
    MR_Integer libs__pickle__V_15_15;
#line 379 "pickle.m"
    MR_Integer libs__pickle__V_18_18;
#line 379 "pickle.m"
    MR_Integer libs__pickle__V_21_21;

#line 380 "pickle.m"
    {
#line 380 "pickle.m"
      libs__pickle__V_12_12 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_4, (MR_Integer) 24);
    }
#line 380 "pickle.m"
    libs__pickle__A_6 = (libs__pickle__V_12_12 & (MR_Integer) 255);
#line 381 "pickle.m"
    {
#line 381 "pickle.m"
      libs__pickle__V_15_15 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_4, (MR_Integer) 16);
    }
#line 381 "pickle.m"
    libs__pickle__B_7 = (libs__pickle__V_15_15 & (MR_Integer) 255);
#line 382 "pickle.m"
    {
#line 382 "pickle.m"
      libs__pickle__V_18_18 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_4, (MR_Integer) 8);
    }
#line 382 "pickle.m"
    libs__pickle__C_8 = (libs__pickle__V_18_18 & (MR_Integer) 255);
#line 383 "pickle.m"
    {
#line 383 "pickle.m"
      libs__pickle__V_21_21 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_4, (MR_Integer) 0);
    }
#line 383 "pickle.m"
    libs__pickle__D_9 = (libs__pickle__V_21_21 & (MR_Integer) 255);
#line 384 "pickle.m"
    {
#line 384 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__A_6);
    }
#line 385 "pickle.m"
    {
#line 385 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__B_7);
    }
#line 386 "pickle.m"
    {
#line 386 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__C_8);
    }
#line 387 "pickle.m"
    {
#line 387 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__D_9);
    }
#line 379 "pickle.m"
  }
#line 377 "pickle.m"
}

#line 341 "pickle.m"
static void MR_CALL 
libs__pickle__unpickler_inst_cast_2_p_0(
#line 341 "pickle.m"
  MR_Word libs__pickle__A_1,
#line 341 "pickle.m"
  MR_Word * libs__pickle__B_2)
#line 341 "pickle.m"
{
#line 344 "pickle.m"
  {
#line 344 "pickle.m"
    MR_bool libs__pickle__succeeded;

#line 347 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__unpickler_inst_cast_2_p_0

	MR_Word A;
	MR_Word B;

	A =  libs__pickle__A_1 ;
		{
#line 347 "pickle.m"

    B = A;

#line 3066 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__B_2  = B;
#line 347 "pickle.m"
}
#line 344 "pickle.m"
  }
#line 341 "pickle.m"
}

#line 316 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_2_6_p_0_1(
#line 316 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 316 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_1,
#line 316 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_2,
#line 316 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_3,
#line 316 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_4)
#line 316 "pickle.m"
{
#line 316 "pickle.m"
  {
#line 316 "pickle.m"
    MR_Box libs__pickle__closure = libs__pickle__closure_arg;
#line 316 "pickle.m"
    MR_Word libs__pickle__conv5_Univ_10;
#line 316 "pickle.m"
    MR_Integer libs__pickle__conv4_STATE_VARIABLE_State_30;

#line 316 "pickle.m"
    {
#line 316 "pickle.m"
      libs__pickle__unpickle_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 3))), ((MR_Box) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 4))), ((MR_Word) libs__pickle__wrapper_arg_1), &libs__pickle__conv5_Univ_10, ((MR_Integer) libs__pickle__wrapper_arg_3), &libs__pickle__conv4_STATE_VARIABLE_State_30);
    }
#line 316 "pickle.m"
    *libs__pickle__wrapper_arg_2 = ((MR_Box) (libs__pickle__conv5_Univ_10));
#line 316 "pickle.m"
    *libs__pickle__wrapper_arg_4 = ((MR_Box) (libs__pickle__conv4_STATE_VARIABLE_State_30));
#line 316 "pickle.m"
  }
#line 316 "pickle.m"
}

#line 273 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_2_6_p_0(
#line 273 "pickle.m"
  MR_Word libs__pickle__Unpicklers_7,
#line 273 "pickle.m"
  MR_Box libs__pickle__Handle_8,
#line 273 "pickle.m"
  MR_Word libs__pickle__TypeDesc_9,
#line 273 "pickle.m"
  MR_Word * libs__pickle__Univ_10,
#line 273 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_29,
#line 273 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_30)
#line 273 "pickle.m"
{
#line 278 "pickle.m"
  {
#line 278 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 279 "pickle.m"
    MR_Word libs__pickle__V_66_66;
#line 279 "pickle.m"
    MR_String libs__pickle__V_31_31;

#line 279 "pickle.m"
    {
#line 279 "pickle.m"
      libs__pickle__V_66_66 = mercury__type_desc__type_of_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 279 "pickle.m"
    {
#line 279 "pickle.m"
      libs__pickle__succeeded = mercury__type_desc____Unify____type_desc_0_0(libs__pickle__TypeDesc_9, libs__pickle__V_66_66);
    }
#line 278 "pickle.m"
    if (libs__pickle__succeeded)
#line 281 "pickle.m"
      {
#line 281 "pickle.m"
        MR_String libs__pickle__String_13;
#line 281 "pickle.m"
        MR_Integer libs__pickle__Length_79;
#line 281 "pickle.m"
        MR_String libs__pickle__String0_80;
#line 281 "pickle.m"
        MR_Integer libs__pickle__STATE_VARIABLE_State_12_81;

#line 435 "pickle.m"
        {
#line 435 "pickle.m"
          libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_8, &libs__pickle__Length_79, libs__pickle__STATE_VARIABLE_State_0_29, &libs__pickle__STATE_VARIABLE_State_12_81);
        }
#line 456 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__unpickle_2_6_p_0

	MR_Integer Length;
	MR_String Str;

	Length =  libs__pickle__Length_79 ;
		{
#line 456 "pickle.m"

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';

#line 3184 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 libs__pickle__String0_80  = Str;
#line 456 "pickle.m"
}
#line 437 "pickle.m"
        {
#line 437 "pickle.m"
          libs__pickle__unpickle_string_2_7_p_0(libs__pickle__Handle_8, (MR_Integer) 0, libs__pickle__Length_79, libs__pickle__String0_80, &libs__pickle__String_13, libs__pickle__STATE_VARIABLE_State_12_81, libs__pickle__STATE_VARIABLE_State_30);
        }
#line 282 "pickle.m"
        {
#line 282 "pickle.m"
          *libs__pickle__Univ_10 = mercury__univ__univ_1_f_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (libs__pickle__String_13)));
        }
#line 281 "pickle.m"
      }
#line 278 "pickle.m"
    else
#line 283 "pickle.m"
      {
#line 284 "pickle.m"
        MR_Word libs__pickle__V_67_67;
#line 284 "pickle.m"
        MR_Integer libs__pickle__V_33_33;

#line 284 "pickle.m"
        {
#line 284 "pickle.m"
          libs__pickle__V_67_67 = mercury__type_desc__type_of_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        }
#line 284 "pickle.m"
        {
#line 284 "pickle.m"
          libs__pickle__succeeded = mercury__type_desc____Unify____type_desc_0_0(libs__pickle__TypeDesc_9, libs__pickle__V_67_67);
        }
#line 283 "pickle.m"
        if (libs__pickle__succeeded)
#line 286 "pickle.m"
          {
#line 286 "pickle.m"
            MR_Integer libs__pickle__Int_15;

#line 286 "pickle.m"
            {
#line 286 "pickle.m"
              libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_8, &libs__pickle__Int_15, libs__pickle__STATE_VARIABLE_State_0_29, libs__pickle__STATE_VARIABLE_State_30);
            }
#line 287 "pickle.m"
            {
#line 287 "pickle.m"
              *libs__pickle__Univ_10 = mercury__univ__univ_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (libs__pickle__Int_15)));
            }
#line 286 "pickle.m"
          }
#line 283 "pickle.m"
        else
#line 288 "pickle.m"
          {
#line 289 "pickle.m"
            MR_Word libs__pickle__V_68_68;
#line 289 "pickle.m"
            MR_Float libs__pickle__V_35_35;

#line 289 "pickle.m"
            {
#line 289 "pickle.m"
              libs__pickle__V_68_68 = mercury__type_desc__type_of_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0);
            }
#line 289 "pickle.m"
            {
#line 289 "pickle.m"
              libs__pickle__succeeded = mercury__type_desc____Unify____type_desc_0_0(libs__pickle__TypeDesc_9, libs__pickle__V_68_68);
            }
#line 288 "pickle.m"
            if (libs__pickle__succeeded)
#line 291 "pickle.m"
              {
#line 291 "pickle.m"
                MR_Float libs__pickle__Float_17;

#line 291 "pickle.m"
                {
#line 291 "pickle.m"
                  libs__pickle__unpickle_float_4_p_0(libs__pickle__Handle_8, &libs__pickle__Float_17, libs__pickle__STATE_VARIABLE_State_0_29, libs__pickle__STATE_VARIABLE_State_30);
                }
#line 292 "pickle.m"
                {
#line 292 "pickle.m"
                  *libs__pickle__Univ_10 = mercury__univ__univ_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, MR_box_float(libs__pickle__Float_17));
                }
#line 291 "pickle.m"
              }
#line 288 "pickle.m"
            else
#line 293 "pickle.m"
              {
#line 294 "pickle.m"
                MR_Word libs__pickle__V_69_69;
#line 294 "pickle.m"
                MR_Char libs__pickle__V_37_37;

#line 294 "pickle.m"
                {
#line 294 "pickle.m"
                  libs__pickle__V_69_69 = mercury__type_desc__type_of_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0);
                }
#line 294 "pickle.m"
                {
#line 294 "pickle.m"
                  libs__pickle__succeeded = mercury__type_desc____Unify____type_desc_0_0(libs__pickle__TypeDesc_9, libs__pickle__V_69_69);
                }
#line 293 "pickle.m"
                if (libs__pickle__succeeded)
#line 296 "pickle.m"
                  {
#line 296 "pickle.m"
                    MR_Char libs__pickle__Char_19;

#line 296 "pickle.m"
                    {
#line 296 "pickle.m"
                      libs__pickle__unpickle_char_4_p_0(libs__pickle__Handle_8, &libs__pickle__Char_19, libs__pickle__STATE_VARIABLE_State_0_29, libs__pickle__STATE_VARIABLE_State_30);
                    }
#line 297 "pickle.m"
                    {
#line 297 "pickle.m"
                      *libs__pickle__Univ_10 = mercury__univ__univ_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, ((MR_Box) (MR_Word) (libs__pickle__Char_19)));
                    }
#line 296 "pickle.m"
                  }
#line 293 "pickle.m"
                else
#line 298 "pickle.m"
                  {
#line 298 "pickle.m"
                    MR_Word libs__pickle__Unpickle_20;
#line 299 "pickle.m"
                    MR_Word libs__pickle__V_39_39;
#line 299 "pickle.m"
                    MR_Word libs__pickle__Unpicklers_90;
#line 299 "pickle.m"
                    MR_Word libs__pickle__Unpickle0_91;
#line 338 "pickle.m"
                    MR_Box libs__pickle__conv0_Unpickle0_91;

#line 299 "pickle.m"
                    {
#line 299 "pickle.m"
                      libs__pickle__V_39_39 = mercury__type_desc__type_ctor_1_f_0(libs__pickle__TypeDesc_9);
                    }
#line 337 "pickle.m"
                    libs__pickle__Unpicklers_90 = (MR_Word) libs__pickle__Unpicklers_7;
#line 338 "pickle.m"
                    {
#line 338 "pickle.m"
                      libs__pickle__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_2[0], libs__pickle__Unpicklers_90, ((MR_Box) (libs__pickle__V_39_39)), &libs__pickle__conv0_Unpickle0_91);
                    }
#line 338 "pickle.m"
                    if (libs__pickle__succeeded)
#line 338 "pickle.m"
                      {
#line 338 "pickle.m"
                        libs__pickle__Unpickle0_91 = ((MR_Word) libs__pickle__conv0_Unpickle0_91);
#line 338 "pickle.m"
                        libs__pickle__succeeded = MR_TRUE;
#line 338 "pickle.m"
                      }
#line 299 "pickle.m"
                    if (libs__pickle__succeeded)
#line 299 "pickle.m"
                      {
#line 347 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__unpickle_2_6_p_0

	MR_Word A;
	MR_Word B;

	A =  libs__pickle__Unpickle0_91 ;
		{
#line 347 "pickle.m"

    B = A;

#line 3371 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 libs__pickle__Unpickle_20  = B;
#line 347 "pickle.m"
}
#line 344 "pickle.m"
                        libs__pickle__succeeded = MR_TRUE;
#line 299 "pickle.m"
                      }
#line 298 "pickle.m"
                    if (libs__pickle__succeeded)
#line 301 "pickle.m"
                      {
#line 301 "pickle.m"
                        void MR_CALL (* libs__pickle__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__pickle__Unpickle_20, (MR_Integer) 1)));
#line 301 "pickle.m"
                        MR_Box libs__pickle__conv3_Univ_10;
#line 301 "pickle.m"
                        MR_Box libs__pickle__conv2_STATE_VARIABLE_State_30;

#line 301 "pickle.m"
                        {
#line 301 "pickle.m"
                          libs__pickle__func_1(((MR_Box) libs__pickle__Unpickle_20), ((MR_Box) (libs__pickle__Unpicklers_7)), ((MR_Box) (libs__pickle__Handle_8)), ((MR_Box) (libs__pickle__TypeDesc_9)), &libs__pickle__conv3_Univ_10, ((MR_Box) (libs__pickle__STATE_VARIABLE_State_0_29)), &libs__pickle__conv2_STATE_VARIABLE_State_30);
                        }
#line 301 "pickle.m"
                        *libs__pickle__Univ_10 = ((MR_Word) libs__pickle__conv3_Univ_10);
#line 301 "pickle.m"
                        *libs__pickle__STATE_VARIABLE_State_30 = ((MR_Integer) libs__pickle__conv2_STATE_VARIABLE_State_30);
#line 301 "pickle.m"
                      }
#line 298 "pickle.m"
                    else
#line 303 "pickle.m"
                      {
#line 303 "pickle.m"
                        MR_String libs__pickle__Functor_21;
#line 303 "pickle.m"
                        MR_Integer libs__pickle__Arity_22;
#line 303 "pickle.m"
                        MR_Integer libs__pickle__STATE_VARIABLE_State_41_41;
#line 303 "pickle.m"
                        MR_Integer libs__pickle__STATE_VARIABLE_State_42_42;
#line 305 "pickle.m"
                        MR_Word libs__pickle__IsTuple_23;
#line 305 "pickle.m"
                        MR_Word libs__pickle__ArgTypes_25;
#line 305 "pickle.m"
                        MR_Integer libs__pickle__N_26;

#line 303 "pickle.m"
                        {
#line 303 "pickle.m"
                          libs__pickle__unpickle_string_4_p_0(libs__pickle__Handle_8, &libs__pickle__Functor_21, libs__pickle__STATE_VARIABLE_State_0_29, &libs__pickle__STATE_VARIABLE_State_41_41);
                        }
#line 304 "pickle.m"
                        {
#line 304 "pickle.m"
                          libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_8, &libs__pickle__Arity_22, libs__pickle__STATE_VARIABLE_State_41_41, &libs__pickle__STATE_VARIABLE_State_42_42);
                        }
#line 306 "pickle.m"
                        libs__pickle__succeeded = (strcmp(libs__pickle__Functor_21, (MR_String) "{}") == 0);
#line 306 "pickle.m"
                        if (libs__pickle__succeeded)
#line 307 "pickle.m"
                          {
#line 308 "pickle.m"
                            MR_Word libs__pickle__V_24_24;

#line 307 "pickle.m"
                            libs__pickle__IsTuple_23 = (MR_Integer) 1;
#line 308 "pickle.m"
                            {
#line 308 "pickle.m"
                              mercury__type_desc__type_ctor_and_args_3_p_0(libs__pickle__TypeDesc_9, &libs__pickle__V_24_24, &libs__pickle__ArgTypes_25);
                            }
#line 309 "pickle.m"
                            libs__pickle__N_26 = (MR_Integer) 0;
#line 307 "pickle.m"
                            libs__pickle__succeeded = MR_TRUE;
#line 307 "pickle.m"
                          }
#line 306 "pickle.m"
                        else
#line 311 "pickle.m"
                          {
#line 311 "pickle.m"
                            libs__pickle__IsTuple_23 = (MR_Integer) 0;
#line 313 "pickle.m"
                            {
#line 313 "pickle.m"
                              libs__pickle__succeeded = mercury__construct__find_functor_5_p_0(libs__pickle__TypeDesc_9, libs__pickle__Functor_21, libs__pickle__Arity_22, &libs__pickle__N_26, &libs__pickle__ArgTypes_25);
                            }
#line 311 "pickle.m"
                          }
#line 305 "pickle.m"
                        if (libs__pickle__succeeded)
#line 317 "pickle.m"
                          {
#line 317 "pickle.m"
                            MR_Word libs__pickle__ArgUnivs_27;
#line 317 "pickle.m"
                            MR_Word libs__pickle__V_43_43;
#line 316 "pickle.m"
                            MR_Box libs__pickle__conv6_STATE_VARIABLE_State_30;

#line 316 "pickle.m"
                            {
#line 316 "pickle.m"
                              libs__pickle__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 316 "pickle.m"
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 0) = ((MR_Box) (&libs__pickle_scalar_common_6[0]));
#line 316 "pickle.m"
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 1) = ((MR_Box) (libs__pickle__unpickle_2_6_p_0_1));
#line 316 "pickle.m"
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 316 "pickle.m"
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 3) = ((MR_Box) (libs__pickle__Unpicklers_7));
#line 316 "pickle.m"
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 4) = ((MR_Box) (libs__pickle__Handle_8));
#line 316 "pickle.m"
                            }
#line 316 "pickle.m"
                            {
#line 316 "pickle.m"
                              mercury__list__map_foldl_5_p_2((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__pickle__V_43_43, libs__pickle__ArgTypes_25, &libs__pickle__ArgUnivs_27, ((MR_Box) (libs__pickle__STATE_VARIABLE_State_42_42)), &libs__pickle__conv6_STATE_VARIABLE_State_30);
                            }
#line 316 "pickle.m"
                            *libs__pickle__STATE_VARIABLE_State_30 = ((MR_Integer) libs__pickle__conv6_STATE_VARIABLE_State_30);
#line 321 "pickle.m"
#line 321 "pickle.m"
                            switch (libs__pickle__IsTuple_23) {
#line 321 "pickle.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 321 "pickle.m"
                              case (MR_Integer) 0:
#line 323 "pickle.m"
                                {
#line 323 "pickle.m"
                                  MR_Word libs__pickle__Univ0_28;

#line 323 "pickle.m"
                                  {
#line 323 "pickle.m"
                                    libs__pickle__succeeded = mercury__construct__construct_3_f_0(libs__pickle__TypeDesc_9, libs__pickle__N_26, libs__pickle__ArgUnivs_27, &libs__pickle__Univ0_28);
                                  }
#line 323 "pickle.m"
                                  if (libs__pickle__succeeded)
#line 324 "pickle.m"
                                    *libs__pickle__Univ_10 = libs__pickle__Univ0_28;
#line 323 "pickle.m"
                                  else
#line 326 "pickle.m"
                                    {
#line 326 "pickle.m"
                                      {
#line 326 "pickle.m"
                                        mercury__require__unexpected_3_p_0((MR_String) "libs.pickle", (MR_String) "predicate \140libs.pickle.unpickle_2\'/6", (MR_String) "unable to construct");
#line 326 "pickle.m"
                                        return;
                                      }
#line 326 "pickle.m"
                                    }
#line 323 "pickle.m"
                                }
#line 321 "pickle.m"
                                break;
#line 321 "pickle.m"
                              case (MR_Integer) 1:
#line 320 "pickle.m"
                                {
#line 320 "pickle.m"
                                  *libs__pickle__Univ_10 = mercury__construct__construct_tuple_1_f_0(libs__pickle__ArgUnivs_27);
                                }
#line 321 "pickle.m"
                                break;
#line 321 "pickle.m"
                            }
#line 317 "pickle.m"
                          }
#line 305 "pickle.m"
                        else
#line 330 "pickle.m"
                          {
#line 330 "pickle.m"
                            {
#line 330 "pickle.m"
                              mercury__require__unexpected_3_p_0((MR_String) "libs.pickle", (MR_String) "predicate \140libs.pickle.unpickle_2\'/6", (MR_String) "unable to unpickle");
#line 330 "pickle.m"
                              return;
                            }
#line 330 "pickle.m"
                          }
#line 303 "pickle.m"
                      }
#line 298 "pickle.m"
                  }
#line 293 "pickle.m"
              }
#line 288 "pickle.m"
          }
#line 283 "pickle.m"
      }
#line 278 "pickle.m"
  }
#line 273 "pickle.m"
}

#line 191 "pickle.m"
static void MR_CALL 
libs__pickle__pickler_inst_cast_2_p_0(
#line 191 "pickle.m"
  MR_Word libs__pickle__A_1,
#line 191 "pickle.m"
  MR_Word * libs__pickle__B_2)
#line 191 "pickle.m"
{
#line 194 "pickle.m"
  {
#line 194 "pickle.m"
    MR_bool libs__pickle__succeeded;

#line 197 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__pickler_inst_cast_2_p_0

	MR_Word A;
	MR_Word B;

	A =  libs__pickle__A_1 ;
		{
#line 197 "pickle.m"

    B = A;

#line 3608 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__B_2  = B;
#line 197 "pickle.m"
}
#line 194 "pickle.m"
  }
#line 191 "pickle.m"
}

#line 184 "pickle.m"
static MR_bool MR_CALL 
libs__pickle__user_defined_pickler_3_p_0(
#line 184 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 184 "pickle.m"
  MR_Word libs__pickle__TypeCtorDesc_5,
#line 184 "pickle.m"
  MR_Word * libs__pickle__Pickle_6)
#line 184 "pickle.m"
{
#line 187 "pickle.m"
  {
#line 187 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 187 "pickle.m"
    MR_Word libs__pickle__Pickles_4 = (MR_Word) libs__pickle__HeadVar__1_1;
#line 187 "pickle.m"
    MR_Word libs__pickle__Pickle0_7;
#line 188 "pickle.m"
    MR_Box libs__pickle__conv0_Pickle0_7;

#line 188 "pickle.m"
    {
#line 188 "pickle.m"
      libs__pickle__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_1[0], libs__pickle__Pickles_4, ((MR_Box) (libs__pickle__TypeCtorDesc_5)), &libs__pickle__conv0_Pickle0_7);
    }
#line 188 "pickle.m"
    if (libs__pickle__succeeded)
#line 188 "pickle.m"
      {
#line 188 "pickle.m"
        libs__pickle__Pickle0_7 = ((MR_Word) libs__pickle__conv0_Pickle0_7);
#line 188 "pickle.m"
        libs__pickle__succeeded = MR_TRUE;
#line 188 "pickle.m"
      }
#line 187 "pickle.m"
    if (libs__pickle__succeeded)
#line 187 "pickle.m"
      {
#line 197 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__user_defined_pickler_3_p_0

	MR_Word A;
	MR_Word B;

	A =  libs__pickle__Pickle0_7 ;
		{
#line 197 "pickle.m"

    B = A;

#line 3674 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__Pickle_6  = B;
#line 197 "pickle.m"
}
#line 194 "pickle.m"
        libs__pickle__succeeded = MR_TRUE;
#line 187 "pickle.m"
      }
#line 187 "pickle.m"
    return libs__pickle__succeeded;
#line 187 "pickle.m"
  }
#line 184 "pickle.m"
}

#line 169 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_args_6_p_0(
#line 169 "pickle.m"
  MR_Word libs__pickle__TypeInfo_for_T_23,
#line 169 "pickle.m"
  MR_Word libs__pickle__Pickles_7,
#line 169 "pickle.m"
  MR_Integer libs__pickle__N_8,
#line 169 "pickle.m"
  MR_Integer libs__pickle__Arity_9,
#line 169 "pickle.m"
  MR_Box libs__pickle__T_10)
#line 169 "pickle.m"
{
#line 173 "pickle.m"
  while (MR_TRUE)
#line 173 "pickle.m"
    {
#line 173 "pickle.m"
      /* tailcall optimized into a loop */
#line 173 "pickle.m"
      {
#line 173 "pickle.m"
        MR_bool libs__pickle__succeeded = (libs__pickle__N_8 == libs__pickle__Arity_9);

#line 173 "pickle.m"
        if (libs__pickle__succeeded)
#line 173 "pickle.m"
          {
#line 173 "pickle.m"
          }
#line 173 "pickle.m"
        else
#line 176 "pickle.m"
          {
#line 176 "pickle.m"
            MR_Word libs__pickle__TypeInfo_24_24;
#line 176 "pickle.m"
            MR_Box libs__pickle__Arg_12;

#line 176 "pickle.m"
            {
#line 176 "pickle.m"
              libs__pickle__succeeded = mercury__deconstruct__arg_4_p_0(libs__pickle__TypeInfo_for_T_23, &libs__pickle__TypeInfo_24_24, libs__pickle__T_10, (MR_Integer) 0, libs__pickle__N_8, &libs__pickle__Arg_12);
            }
#line 176 "pickle.m"
            if (libs__pickle__succeeded)
#line 177 "pickle.m"
              {
#line 177 "pickle.m"
                MR_Integer libs__pickle__V_17_17;

#line 177 "pickle.m"
                {
#line 177 "pickle.m"
                  libs__pickle__pickle_4_p_0(libs__pickle__TypeInfo_24_24, libs__pickle__Pickles_7, libs__pickle__Arg_12);
                }
#line 178 "pickle.m"
                libs__pickle__V_17_17 = (libs__pickle__N_8 + (MR_Integer) 1);
#line 178 "pickle.m"
                /* direct tailcall eliminated */
#line 178 "pickle.m"
                {
#line 178 "pickle.m"
                  MR_Integer libs__pickle__N__tmp_copy_8 = libs__pickle__V_17_17;

#line 178 "pickle.m"
                  libs__pickle__N_8 = libs__pickle__N__tmp_copy_8;
#line 178 "pickle.m"
                }
#line 178 "pickle.m"
                continue;
#line 177 "pickle.m"
              }
#line 176 "pickle.m"
            else
#line 180 "pickle.m"
              {
#line 180 "pickle.m"
                {
#line 180 "pickle.m"
                  mercury__require__unexpected_3_p_0((MR_String) "libs.pickle", (MR_String) "predicate \140libs.pickle.pickle_args\'/6", (MR_String) "unable to deconstruct arg");
#line 180 "pickle.m"
                  return;
                }
#line 180 "pickle.m"
              }
#line 176 "pickle.m"
          }
#line 173 "pickle.m"
      }
#line 173 "pickle.m"
      break;
#line 173 "pickle.m"
    }
#line 169 "pickle.m"
}

#line 89 "pickle.m"
void MR_CALL 
libs__pickle__unpickle_5_p_0(
#line 89 "pickle.m"
  MR_Word libs__pickle__TypeInfo_for_T_15,
#line 89 "pickle.m"
  MR_Word libs__pickle__Unpicklers_6,
#line 89 "pickle.m"
  MR_Box libs__pickle__Handle_7,
#line 89 "pickle.m"
  MR_Box * libs__pickle__T_8,
#line 89 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_11,
#line 89 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_12)
#line 89 "pickle.m"
{
#line 269 "pickle.m"
  {
#line 269 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 269 "pickle.m"
    MR_Word libs__pickle__Univ_10;
#line 269 "pickle.m"
    MR_Word libs__pickle__V_13_13;

#line 270 "pickle.m"
    {
#line 270 "pickle.m"
      libs__pickle__V_13_13 = mercury__type_desc__type_of_1_f_0(libs__pickle__TypeInfo_for_T_15);
    }
#line 270 "pickle.m"
    {
#line 270 "pickle.m"
      libs__pickle__unpickle_2_6_p_0(libs__pickle__Unpicklers_6, libs__pickle__Handle_7, libs__pickle__V_13_13, &libs__pickle__Univ_10, libs__pickle__STATE_VARIABLE_State_0_11, libs__pickle__STATE_VARIABLE_State_12);
    }
#line 271 "pickle.m"
    {
#line 271 "pickle.m"
      mercury__univ__det_univ_to_type_2_p_0(libs__pickle__TypeInfo_for_T_15, libs__pickle__Univ_10, libs__pickle__T_8);
    }
#line 269 "pickle.m"
  }
#line 89 "pickle.m"
}

#line 245 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_from_file_5_p_0_1(
#line 245 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 245 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_1)
#line 245 "pickle.m"
{
#line 245 "pickle.m"
  {
#line 245 "pickle.m"
    MR_Box libs__pickle__closure = libs__pickle__closure_arg;

#line 245 "pickle.m"
    {
#line 245 "pickle.m"
      libs__pickle__IntroducedFrom__pred__unpickle_from_file__245__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 4))), ((MR_Box) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 5))), libs__pickle__wrapper_arg_1);
    }
#line 245 "pickle.m"
  }
#line 245 "pickle.m"
}

#line 84 "pickle.m"
void MR_CALL 
libs__pickle__unpickle_from_file_5_p_0(
#line 84 "pickle.m"
  MR_Word libs__pickle__TypeInfo_for_T_32,
#line 84 "pickle.m"
  MR_Word libs__pickle__Unpicklers_6,
#line 84 "pickle.m"
  MR_String libs__pickle__FileName_7,
#line 84 "pickle.m"
  MR_Word * libs__pickle__Result_8)
#line 84 "pickle.m"
{
#line 234 "pickle.m"
  {
#line 234 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 234 "pickle.m"
    MR_Word libs__pickle__SeeResult_10;

#line 235 "pickle.m"
    {
#line 235 "pickle.m"
      mercury__io__see_binary_4_p_0(libs__pickle__FileName_7, &libs__pickle__SeeResult_10);
    }
#line 264 "pickle.m"
    if ((libs__pickle__SeeResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "pickle.m"
      {
#line 237 "pickle.m"
        MR_Word libs__pickle__ReadResult_11;

#line 240 "pickle.m"
        {
#line 240 "pickle.m"
          mercury__io__read_binary_file_as_bitmap_3_p_0(&libs__pickle__ReadResult_11);
        }
#line 241 "pickle.m"
        {
#line 241 "pickle.m"
          mercury__io__seen_binary_2_p_0();
        }
#line 260 "pickle.m"
        if (((MR_tag((MR_Word) libs__pickle__ReadResult_11)) == (MR_mktag((MR_Integer) 1))))
#line 262 "pickle.m"
          *libs__pickle__Result_8 = libs__pickle__ReadResult_11;
#line 260 "pickle.m"
        else
#line 243 "pickle.m"
          {
#line 243 "pickle.m"
            MR_Box libs__pickle__Bitmap_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), libs__pickle__ReadResult_11, (MR_Integer) 0)));
#line 243 "pickle.m"
            MR_Word libs__pickle__TryResult_13;
#line 245 "pickle.m"
            MR_Word libs__pickle__V_25_25;

#line 245 "pickle.m"
            {
#line 245 "pickle.m"
              libs__pickle__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 245 "pickle.m"
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 0) = ((MR_Box) (&libs__pickle_scalar_common_5[0]));
#line 245 "pickle.m"
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 1) = ((MR_Box) (libs__pickle__unpickle_from_file_5_p_0_1));
#line 245 "pickle.m"
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 245 "pickle.m"
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 3) = ((MR_Box) (libs__pickle__TypeInfo_for_T_32));
#line 245 "pickle.m"
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 4) = ((MR_Box) (libs__pickle__Unpicklers_6));
#line 245 "pickle.m"
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 5) = ((MR_Box) (libs__pickle__Bitmap_12));
#line 245 "pickle.m"
            }
#line 245 "pickle.m"
            {
#line 245 "pickle.m"
              mercury__exception__try_2_p_0(libs__pickle__TypeInfo_for_T_32, libs__pickle__V_25_25, &libs__pickle__TryResult_13);
            }
#line 252 "pickle.m"
            if (((MR_tag((MR_Word) libs__pickle__TryResult_13)) == (MR_mktag((MR_Integer) 2))))
#line 253 "pickle.m"
              {
#line 253 "pickle.m"
                MR_Word libs__pickle__Excp_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__pickle__TryResult_13, (MR_Integer) 0)));
#line 254 "pickle.m"
                MR_String libs__pickle__Msg_18;
#line 254 "pickle.m"
                MR_Word libs__pickle__V_28_28;
#line 254 "pickle.m"
                MR_Box libs__pickle__conv0_V_28_28;

#line 254 "pickle.m"
                {
#line 254 "pickle.m"
                  libs__pickle__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, libs__pickle__Excp_17, &libs__pickle__conv0_V_28_28);
                }
#line 254 "pickle.m"
                if (libs__pickle__succeeded)
#line 254 "pickle.m"
                  {
#line 254 "pickle.m"
                    libs__pickle__V_28_28 = ((MR_Word) libs__pickle__conv0_V_28_28);
#line 254 "pickle.m"
                    libs__pickle__succeeded = MR_TRUE;
#line 254 "pickle.m"
                  }
#line 254 "pickle.m"
                if (libs__pickle__succeeded)
#line 254 "pickle.m"
                  {
#line 254 "pickle.m"
                    libs__pickle__Msg_18 = (MR_String) libs__pickle__V_28_28;
#line 254 "pickle.m"
                    libs__pickle__succeeded = MR_TRUE;
#line 254 "pickle.m"
                  }
#line 254 "pickle.m"
                if (libs__pickle__succeeded)
#line 255 "pickle.m"
                  {
#line 255 "pickle.m"
                    MR_Word libs__pickle__V_29_29;

#line 255 "pickle.m"
                    {
#line 255 "pickle.m"
                      libs__pickle__V_29_29 = mercury__io__make_io_error_1_f_0(libs__pickle__Msg_18);
                    }
#line 255 "pickle.m"
                    {
#line 255 "pickle.m"
                      MR_Word base;
#line 255 "pickle.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 255 "pickle.m"
                      *libs__pickle__Result_8 = base;
#line 255 "pickle.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__pickle__V_29_29));
#line 255 "pickle.m"
                    }
#line 255 "pickle.m"
                  }
#line 254 "pickle.m"
                else
#line 257 "pickle.m"
                  {
#line 257 "pickle.m"
                    mercury__exception__rethrow_1_p_0(libs__pickle__TypeInfo_for_T_32, libs__pickle__TryResult_13);
#line 257 "pickle.m"
                    return;
                  }
#line 253 "pickle.m"
              }
#line 252 "pickle.m"
            else
#line 250 "pickle.m"
              {
#line 250 "pickle.m"
                MR_Box libs__pickle__T_16 = (MR_hl_field(MR_mktag(1), libs__pickle__TryResult_13, (MR_Integer) 0));

#line 251 "pickle.m"
                {
#line 251 "pickle.m"
                  MR_Word base;
#line 251 "pickle.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 251 "pickle.m"
                  *libs__pickle__Result_8 = base;
#line 251 "pickle.m"
                  MR_hl_field(MR_mktag(0), base, 0) = libs__pickle__T_16;
#line 251 "pickle.m"
                }
#line 250 "pickle.m"
              }
#line 243 "pickle.m"
          }
#line 237 "pickle.m"
      }
#line 264 "pickle.m"
    else
#line 265 "pickle.m"
      {
#line 265 "pickle.m"
        MR_Word libs__pickle__Error_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__pickle__SeeResult_10, (MR_Integer) 0)));

#line 266 "pickle.m"
        {
#line 266 "pickle.m"
          MR_Word base;
#line 266 "pickle.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 266 "pickle.m"
          *libs__pickle__Result_8 = base;
#line 266 "pickle.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__pickle__Error_31));
#line 266 "pickle.m"
        }
#line 265 "pickle.m"
      }
#line 234 "pickle.m"
  }
#line 84 "pickle.m"
}

#line 77 "pickle.m"
void MR_CALL 
libs__pickle__register_unpickler_4_p_0(
#line 77 "pickle.m"
  MR_Word libs__pickle__TypeCtorDesc_5,
#line 77 "pickle.m"
  MR_Word libs__pickle__Unpickle_6,
#line 77 "pickle.m"
  MR_Word libs__pickle__Unpicklers0_7,
#line 77 "pickle.m"
  MR_Word * libs__pickle__Unpicklers_8)
#line 77 "pickle.m"
{
#line 229 "pickle.m"
  {
#line 229 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 229 "pickle.m"
    MR_Word libs__pickle__Map0_9 = (MR_Word) libs__pickle__Unpicklers0_7;
#line 229 "pickle.m"
    MR_Word libs__pickle__Map_10;

#line 231 "pickle.m"
    {
#line 231 "pickle.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_2[0], ((MR_Box) (libs__pickle__TypeCtorDesc_5)), ((MR_Box) (libs__pickle__Unpickle_6)), libs__pickle__Map0_9, &libs__pickle__Map_10);
    }
#line 232 "pickle.m"
    *libs__pickle__Unpicklers_8 = (MR_Word) libs__pickle__Map_10;
#line 229 "pickle.m"
  }
#line 77 "pickle.m"
}

#line 72 "pickle.m"
MR_Word MR_CALL 
libs__pickle__init_unpicklers_0_f_0(void)
#line 72 "pickle.m"
{
#line 227 "pickle.m"
  {
#line 227 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 227 "pickle.m"
    MR_Word libs__pickle__HeadVar__1_1;
#line 227 "pickle.m"
    MR_Word libs__pickle__V_2_2;

#line 227 "pickle.m"
    {
#line 227 "pickle.m"
      libs__pickle__V_2_2 = mercury__map__init_0_f_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_2[0]);
    }
#line 227 "pickle.m"
    libs__pickle__HeadVar__1_1 = (MR_Word) libs__pickle__V_2_2;
#line 227 "pickle.m"
    return libs__pickle__HeadVar__1_1;
#line 227 "pickle.m"
  }
#line 72 "pickle.m"
}

#line 429 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_4_p_0_1(
#line 429 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 429 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_1,
#line 429 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_2,
#line 429 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_3)
#line 429 "pickle.m"
{
#line 429 "pickle.m"
  {
#line 429 "pickle.m"
    MR_Box libs__pickle__closure = libs__pickle__closure_arg;

#line 429 "pickle.m"
    {
#line 429 "pickle.m"
      libs__pickle__pickle_char_3_p_0(((MR_Char) (MR_Word) libs__pickle__wrapper_arg_1));
    }
#line 429 "pickle.m"
  }
#line 429 "pickle.m"
}

#line 54 "pickle.m"
void MR_CALL 
libs__pickle__pickle_4_p_0(
#line 54 "pickle.m"
  MR_Word libs__pickle__TypeInfo_for_T_30,
#line 54 "pickle.m"
  MR_Word libs__pickle__Pickles_5,
#line 54 "pickle.m"
  MR_Box libs__pickle__T_6)
#line 54 "pickle.m"
{
#line 140 "pickle.m"
  {
#line 140 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 140 "pickle.m"
    MR_String libs__pickle__String_8;
#line 141 "pickle.m"
    MR_Box libs__pickle__conv0_String_8;

#line 141 "pickle.m"
    {
#line 141 "pickle.m"
      libs__pickle__succeeded = mercury__builtin__dynamic_cast_2_p_0(libs__pickle__TypeInfo_for_T_30, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, libs__pickle__T_6, &libs__pickle__conv0_String_8);
    }
#line 141 "pickle.m"
    if (libs__pickle__succeeded)
#line 141 "pickle.m"
      {
#line 141 "pickle.m"
        libs__pickle__String_8 = ((MR_String) libs__pickle__conv0_String_8);
#line 141 "pickle.m"
        libs__pickle__succeeded = MR_TRUE;
#line 141 "pickle.m"
      }
#line 140 "pickle.m"
    if (libs__pickle__succeeded)
#line 426 "pickle.m"
      {
#line 426 "pickle.m"
        MR_Integer libs__pickle__Length_40;
#line 426 "pickle.m"
        MR_Integer libs__pickle__A_52;
#line 426 "pickle.m"
        MR_Integer libs__pickle__B_53;
#line 426 "pickle.m"
        MR_Integer libs__pickle__C_54;
#line 426 "pickle.m"
        MR_Integer libs__pickle__D_55;
#line 426 "pickle.m"
        MR_Integer libs__pickle__V_56_56;
#line 426 "pickle.m"
        MR_Integer libs__pickle__V_59_59;
#line 426 "pickle.m"
        MR_Integer libs__pickle__V_62_62;
#line 426 "pickle.m"
        MR_Integer libs__pickle__V_65_65;
#line 429 "pickle.m"
        MR_Box libs__pickle__conv1_STATE_VARIABLE_IO_18;

#line 427 "pickle.m"
        {
#line 427 "pickle.m"
          libs__pickle__Length_40 = mercury__string__length_1_f_0(libs__pickle__String_8);
        }
#line 380 "pickle.m"
        {
#line 380 "pickle.m"
          libs__pickle__V_56_56 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_40, (MR_Integer) 24);
        }
#line 380 "pickle.m"
        libs__pickle__A_52 = (libs__pickle__V_56_56 & (MR_Integer) 255);
#line 381 "pickle.m"
        {
#line 381 "pickle.m"
          libs__pickle__V_59_59 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_40, (MR_Integer) 16);
        }
#line 381 "pickle.m"
        libs__pickle__B_53 = (libs__pickle__V_59_59 & (MR_Integer) 255);
#line 382 "pickle.m"
        {
#line 382 "pickle.m"
          libs__pickle__V_62_62 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_40, (MR_Integer) 8);
        }
#line 382 "pickle.m"
        libs__pickle__C_54 = (libs__pickle__V_62_62 & (MR_Integer) 255);
#line 383 "pickle.m"
        {
#line 383 "pickle.m"
          libs__pickle__V_65_65 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_40, (MR_Integer) 0);
        }
#line 383 "pickle.m"
        libs__pickle__D_55 = (libs__pickle__V_65_65 & (MR_Integer) 255);
#line 384 "pickle.m"
        {
#line 384 "pickle.m"
          mercury__io__write_byte_3_p_0(libs__pickle__A_52);
        }
#line 385 "pickle.m"
        {
#line 385 "pickle.m"
          mercury__io__write_byte_3_p_0(libs__pickle__B_53);
        }
#line 386 "pickle.m"
        {
#line 386 "pickle.m"
          mercury__io__write_byte_3_p_0(libs__pickle__C_54);
        }
#line 387 "pickle.m"
        {
#line 387 "pickle.m"
          mercury__io__write_byte_3_p_0(libs__pickle__D_55);
        }
#line 429 "pickle.m"
        {
#line 429 "pickle.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &libs__pickle_scalar_common_3[2], libs__pickle__String_8, ((MR_Box) ((MR_Integer) 0)), &libs__pickle__conv1_STATE_VARIABLE_IO_18);
        }
#line 426 "pickle.m"
      }
#line 140 "pickle.m"
    else
#line 144 "pickle.m"
      {
#line 144 "pickle.m"
        MR_Integer libs__pickle__Int_9;
#line 145 "pickle.m"
        MR_Box libs__pickle__conv2_Int_9;

#line 145 "pickle.m"
        {
#line 145 "pickle.m"
          libs__pickle__succeeded = mercury__builtin__dynamic_cast_2_p_0(libs__pickle__TypeInfo_for_T_30, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__pickle__T_6, &libs__pickle__conv2_Int_9);
        }
#line 145 "pickle.m"
        if (libs__pickle__succeeded)
#line 145 "pickle.m"
          {
#line 145 "pickle.m"
            libs__pickle__Int_9 = ((MR_Integer) libs__pickle__conv2_Int_9);
#line 145 "pickle.m"
            libs__pickle__succeeded = MR_TRUE;
#line 145 "pickle.m"
          }
#line 144 "pickle.m"
        if (libs__pickle__succeeded)
#line 379 "pickle.m"
          {
#line 379 "pickle.m"
            MR_Integer libs__pickle__A_76;
#line 379 "pickle.m"
            MR_Integer libs__pickle__B_77;
#line 379 "pickle.m"
            MR_Integer libs__pickle__C_78;
#line 379 "pickle.m"
            MR_Integer libs__pickle__D_79;
#line 379 "pickle.m"
            MR_Integer libs__pickle__V_80_80;
#line 379 "pickle.m"
            MR_Integer libs__pickle__V_83_83;
#line 379 "pickle.m"
            MR_Integer libs__pickle__V_86_86;
#line 379 "pickle.m"
            MR_Integer libs__pickle__V_89_89;

#line 380 "pickle.m"
            {
#line 380 "pickle.m"
              libs__pickle__V_80_80 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_9, (MR_Integer) 24);
            }
#line 380 "pickle.m"
            libs__pickle__A_76 = (libs__pickle__V_80_80 & (MR_Integer) 255);
#line 381 "pickle.m"
            {
#line 381 "pickle.m"
              libs__pickle__V_83_83 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_9, (MR_Integer) 16);
            }
#line 381 "pickle.m"
            libs__pickle__B_77 = (libs__pickle__V_83_83 & (MR_Integer) 255);
#line 382 "pickle.m"
            {
#line 382 "pickle.m"
              libs__pickle__V_86_86 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_9, (MR_Integer) 8);
            }
#line 382 "pickle.m"
            libs__pickle__C_78 = (libs__pickle__V_86_86 & (MR_Integer) 255);
#line 383 "pickle.m"
            {
#line 383 "pickle.m"
              libs__pickle__V_89_89 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_9, (MR_Integer) 0);
            }
#line 383 "pickle.m"
            libs__pickle__D_79 = (libs__pickle__V_89_89 & (MR_Integer) 255);
#line 384 "pickle.m"
            {
#line 384 "pickle.m"
              mercury__io__write_byte_3_p_0(libs__pickle__A_76);
            }
#line 385 "pickle.m"
            {
#line 385 "pickle.m"
              mercury__io__write_byte_3_p_0(libs__pickle__B_77);
            }
#line 386 "pickle.m"
            {
#line 386 "pickle.m"
              mercury__io__write_byte_3_p_0(libs__pickle__C_78);
            }
#line 387 "pickle.m"
            {
#line 387 "pickle.m"
              mercury__io__write_byte_3_p_0(libs__pickle__D_79);
            }
#line 379 "pickle.m"
          }
#line 144 "pickle.m"
        else
#line 148 "pickle.m"
          {
#line 148 "pickle.m"
            MR_Float libs__pickle__Float_10;
#line 149 "pickle.m"
            MR_Box libs__pickle__conv3_Float_10;

#line 149 "pickle.m"
            {
#line 149 "pickle.m"
              libs__pickle__succeeded = mercury__builtin__dynamic_cast_2_p_0(libs__pickle__TypeInfo_for_T_30, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, libs__pickle__T_6, &libs__pickle__conv3_Float_10);
            }
#line 149 "pickle.m"
            if (libs__pickle__succeeded)
#line 149 "pickle.m"
              {
#line 149 "pickle.m"
                libs__pickle__Float_10 = MR_unbox_float(libs__pickle__conv3_Float_10);
#line 149 "pickle.m"
                libs__pickle__succeeded = MR_TRUE;
#line 149 "pickle.m"
              }
#line 148 "pickle.m"
            if (libs__pickle__succeeded)
#line 151 "pickle.m"
              {
#line 151 "pickle.m"
                libs__pickle__pickle_float_3_p_0(libs__pickle__Float_10);
              }
#line 148 "pickle.m"
            else
#line 152 "pickle.m"
              {
#line 152 "pickle.m"
                MR_Char libs__pickle__Char_11;
#line 153 "pickle.m"
                MR_Box libs__pickle__conv4_Char_11;

#line 153 "pickle.m"
                {
#line 153 "pickle.m"
                  libs__pickle__succeeded = mercury__builtin__dynamic_cast_2_p_0(libs__pickle__TypeInfo_for_T_30, (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, libs__pickle__T_6, &libs__pickle__conv4_Char_11);
                }
#line 153 "pickle.m"
                if (libs__pickle__succeeded)
#line 153 "pickle.m"
                  {
#line 153 "pickle.m"
                    libs__pickle__Char_11 = ((MR_Char) (MR_Word) libs__pickle__conv4_Char_11);
#line 153 "pickle.m"
                    libs__pickle__succeeded = MR_TRUE;
#line 153 "pickle.m"
                  }
#line 152 "pickle.m"
                if (libs__pickle__succeeded)
#line 155 "pickle.m"
                  {
#line 155 "pickle.m"
                    libs__pickle__pickle_char_3_p_0(libs__pickle__Char_11);
                  }
#line 152 "pickle.m"
                else
#line 156 "pickle.m"
                  {
#line 156 "pickle.m"
                    MR_Word libs__pickle__Pickle_14;
#line 157 "pickle.m"
                    MR_Word libs__pickle__TypeDesc_12;
#line 157 "pickle.m"
                    MR_Word libs__pickle__TypeCtorDesc_13;
#line 157 "pickle.m"
                    MR_Box libs__pickle__V_35_35;

#line 157 "pickle.m"
                    {
#line 157 "pickle.m"
                      libs__pickle__TypeDesc_12 = mercury__type_desc__type_of_1_f_0(libs__pickle__TypeInfo_for_T_30);
                    }
#line 158 "pickle.m"
                    {
#line 158 "pickle.m"
                      libs__pickle__TypeCtorDesc_13 = mercury__type_desc__type_ctor_1_f_0(libs__pickle__TypeDesc_12);
                    }
#line 159 "pickle.m"
                    {
#line 159 "pickle.m"
                      libs__pickle__succeeded = libs__pickle__user_defined_pickler_3_p_0(libs__pickle__Pickles_5, libs__pickle__TypeCtorDesc_13, &libs__pickle__Pickle_14);
                    }
#line 156 "pickle.m"
                    if (libs__pickle__succeeded)
#line 161 "pickle.m"
                      {
#line 161 "pickle.m"
                        MR_Word libs__pickle__V_23_23;
#line 161 "pickle.m"
                        void MR_CALL (* libs__pickle__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 161 "pickle.m"
                        MR_Box libs__pickle__conv6_STATE_VARIABLE_IO_18;

#line 161 "pickle.m"
                        {
#line 161 "pickle.m"
                          libs__pickle__V_23_23 = mercury__univ__univ_1_f_0(libs__pickle__TypeInfo_for_T_30, libs__pickle__T_6);
                        }
#line 161 "pickle.m"
                        libs__pickle__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__pickle__Pickle_14, (MR_Integer) 1)));
#line 161 "pickle.m"
                        {
#line 161 "pickle.m"
                          libs__pickle__func_5(((MR_Box) libs__pickle__Pickle_14), ((MR_Box) (libs__pickle__Pickles_5)), ((MR_Box) (libs__pickle__V_23_23)), ((MR_Box) ((MR_Integer) 0)), &libs__pickle__conv6_STATE_VARIABLE_IO_18);
                        }
#line 161 "pickle.m"
                      }
#line 156 "pickle.m"
                    else
#line 163 "pickle.m"
                      {
#line 163 "pickle.m"
                        MR_String libs__pickle__Functor_15;
#line 163 "pickle.m"
                        MR_Integer libs__pickle__Arity_16;

#line 163 "pickle.m"
                        {
#line 163 "pickle.m"
                          mercury__deconstruct__functor_4_p_0(libs__pickle__TypeInfo_for_T_30, libs__pickle__T_6, (MR_Integer) 0, &libs__pickle__Functor_15, &libs__pickle__Arity_16);
                        }
#line 164 "pickle.m"
                        {
#line 164 "pickle.m"
                          libs__pickle__pickle_string_3_p_0(libs__pickle__Functor_15);
                        }
#line 165 "pickle.m"
                        {
#line 165 "pickle.m"
                          libs__pickle__pickle_int32_3_p_0(libs__pickle__Arity_16);
                        }
#line 166 "pickle.m"
                        {
#line 166 "pickle.m"
                          libs__pickle__pickle_args_6_p_0(libs__pickle__TypeInfo_for_T_30, libs__pickle__Pickles_5, (MR_Integer) 0, libs__pickle__Arity_16, libs__pickle__T_6);
                        }
#line 163 "pickle.m"
                      }
#line 156 "pickle.m"
                  }
#line 152 "pickle.m"
              }
#line 148 "pickle.m"
          }
#line 144 "pickle.m"
      }
#line 140 "pickle.m"
  }
#line 54 "pickle.m"
}

#line 45 "pickle.m"
void MR_CALL 
libs__pickle__register_pickler_4_p_0(
#line 45 "pickle.m"
  MR_Word libs__pickle__TypeCtorDesc_5,
#line 45 "pickle.m"
  MR_Word libs__pickle__Pickle_6,
#line 45 "pickle.m"
  MR_Word libs__pickle__Pickles0_7,
#line 45 "pickle.m"
  MR_Word * libs__pickle__Pickles_8)
#line 45 "pickle.m"
{
#line 134 "pickle.m"
  {
#line 134 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 134 "pickle.m"
    MR_Word libs__pickle__Map0_9 = (MR_Word) libs__pickle__Pickles0_7;
#line 134 "pickle.m"
    MR_Word libs__pickle__Map_10;

#line 136 "pickle.m"
    {
#line 136 "pickle.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_1[0], ((MR_Box) (libs__pickle__TypeCtorDesc_5)), ((MR_Box) (libs__pickle__Pickle_6)), libs__pickle__Map0_9, &libs__pickle__Map_10);
    }
#line 137 "pickle.m"
    *libs__pickle__Pickles_8 = (MR_Word) libs__pickle__Map_10;
#line 134 "pickle.m"
  }
#line 45 "pickle.m"
}

#line 40 "pickle.m"
MR_Word MR_CALL 
libs__pickle__init_picklers_0_f_0(void)
#line 40 "pickle.m"
{
#line 132 "pickle.m"
  {
#line 132 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 132 "pickle.m"
    MR_Word libs__pickle__HeadVar__1_1;
#line 132 "pickle.m"
    MR_Word libs__pickle__V_2_2;

#line 132 "pickle.m"
    {
#line 132 "pickle.m"
      libs__pickle__V_2_2 = mercury__map__init_0_f_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_1[0]);
    }
#line 132 "pickle.m"
    libs__pickle__HeadVar__1_1 = (MR_Word) libs__pickle__V_2_2;
#line 132 "pickle.m"
    return libs__pickle__HeadVar__1_1;
#line 132 "pickle.m"
  }
#line 40 "pickle.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.pickle. */
