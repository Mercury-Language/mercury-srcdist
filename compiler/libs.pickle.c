/*
** Automatically generated from `pickle.m'
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


/* :- module libs.pickle. */
/* :- implementation. */

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
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
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

#line 238 "pickle.m"
static void MR_CALL 
libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_p_0(
#line 238 "pickle.m"
  MR_Word libs__pickle__TypeInfo_for_T_32,
#line 238 "pickle.m"
  MR_Word libs__pickle__Unpicklers_6,
#line 238 "pickle.m"
  MR_Box libs__pickle__Bitmap_12,
#line 238 "pickle.m"
  MR_Box * libs__pickle__HeadVar__4_26);

#line 125 "pickle.m"
static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0(
#line 125 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 125 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2,
#line 125 "pickle.m"
  MR_Word libs__pickle__HeadVar__3_3);

#line 125 "pickle.m"
static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0(
#line 125 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 125 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2);

#line 505 "pickle.m"
static void MR_CALL 
libs__pickle__reinterpret_ints_as_float_3_p_0(
#line 505 "pickle.m"
  MR_Integer libs__pickle__A_1,
#line 505 "pickle.m"
  MR_Integer libs__pickle__B_2,
#line 505 "pickle.m"
  MR_Float * libs__pickle__Flt_3);

#line 497 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_float_4_p_0(
#line 497 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 497 "pickle.m"
  MR_Float * libs__pickle__Float_6,
#line 497 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_10,
#line 497 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_11);

#line 472 "pickle.m"
static void MR_CALL 
libs__pickle__reinterpret_float_as_ints_3_p_0(
#line 472 "pickle.m"
  MR_Float libs__pickle__Flt_1,
#line 472 "pickle.m"
  MR_Integer * libs__pickle__A_2,
#line 472 "pickle.m"
  MR_Integer * libs__pickle__B_3);

#line 463 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_float_3_p_0(
#line 463 "pickle.m"
  MR_Float libs__pickle__Float_4);

#line 449 "pickle.m"
static void MR_CALL 
libs__pickle__local_unsafe_set_char_4_p_0(
#line 449 "pickle.m"
  MR_Char libs__pickle__Chr_1,
#line 449 "pickle.m"
  MR_Integer libs__pickle__Index_2,
#line 449 "pickle.m"
  MR_String libs__pickle__Str0_3,
#line 449 "pickle.m"
  MR_String * libs__pickle__Str_4);

#line 434 "pickle.m"
static void MR_CALL 
libs__pickle__allocate_string_2_p_0(
#line 434 "pickle.m"
  MR_Integer libs__pickle__Length_1,
#line 434 "pickle.m"
  MR_String * libs__pickle__Str_2);

#line 422 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_string_2_7_p_0(
#line 422 "pickle.m"
  MR_Box libs__pickle__Handle_8,
#line 422 "pickle.m"
  MR_Integer libs__pickle__Index_9,
#line 422 "pickle.m"
  MR_Integer libs__pickle__Length_10,
#line 422 "pickle.m"
  MR_String libs__pickle__STATE_VARIABLE_String_0_14,
#line 422 "pickle.m"
  MR_String * libs__pickle__STATE_VARIABLE_String_15,
#line 422 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_16,
#line 422 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_17);

#line 414 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_string_4_p_0(
#line 414 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 414 "pickle.m"
  MR_String * libs__pickle__String_6,
#line 414 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_10,
#line 414 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_11);

#line 412 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_string_3_p_0_1(
#line 412 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 412 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_1,
#line 412 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_2,
#line 412 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_3);

#line 407 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_string_3_p_0(
#line 407 "pickle.m"
  MR_String libs__pickle__String_4);

#line 400 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_char_4_p_0(
#line 400 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 400 "pickle.m"
  MR_Char * libs__pickle__Char_6,
#line 400 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_9,
#line 400 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_10);

#line 393 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_char_3_p_0(
#line 393 "pickle.m"
  MR_Char libs__pickle__Char_4);

#line 372 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_int32_4_p_0(
#line 372 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 372 "pickle.m"
  MR_Integer * libs__pickle__Int_6,
#line 372 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_13,
#line 372 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_14);

#line 360 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_int32_3_p_0(
#line 360 "pickle.m"
  MR_Integer libs__pickle__Int_4);

#line 324 "pickle.m"
static void MR_CALL 
libs__pickle__unpickler_inst_cast_2_p_0(
#line 324 "pickle.m"
  MR_Word libs__pickle__A_1,
#line 324 "pickle.m"
  MR_Word * libs__pickle__B_2);

#line 299 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_2_6_p_0_1(
#line 299 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 299 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_1,
#line 299 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_2,
#line 299 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_3,
#line 299 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_4);

#line 266 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_2_6_p_0(
#line 266 "pickle.m"
  MR_Word libs__pickle__Unpicklers_7,
#line 266 "pickle.m"
  MR_Box libs__pickle__Handle_8,
#line 266 "pickle.m"
  MR_Word libs__pickle__TypeDesc_9,
#line 266 "pickle.m"
  MR_Word * libs__pickle__Univ_10,
#line 266 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_29,
#line 266 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_30);

#line 184 "pickle.m"
static void MR_CALL 
libs__pickle__pickler_inst_cast_2_p_0(
#line 184 "pickle.m"
  MR_Word libs__pickle__A_1,
#line 184 "pickle.m"
  MR_Word * libs__pickle__B_2);

#line 177 "pickle.m"
static MR_bool MR_CALL 
libs__pickle__user_defined_pickler_3_p_0(
#line 177 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 177 "pickle.m"
  MR_Word libs__pickle__TypeCtorDesc_5,
#line 177 "pickle.m"
  MR_Word * libs__pickle__Pickle_6);

#line 162 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_args_6_p_0(
#line 162 "pickle.m"
  MR_Word libs__pickle__TypeInfo_for_T_23,
#line 162 "pickle.m"
  MR_Word libs__pickle__Pickles_7,
#line 162 "pickle.m"
  MR_Integer libs__pickle__N_8,
#line 162 "pickle.m"
  MR_Integer libs__pickle__Arity_9,
#line 162 "pickle.m"
  MR_Box libs__pickle__T_10);

#line 238 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_from_file_5_p_0_1(
#line 238 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 238 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_1);

#line 412 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_4_p_0_1(
#line 412 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 412 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_1,
#line 412 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_2,
#line 412 "pickle.m"
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



#include "libs.pickle.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 615 "libs.pickle.c"
static const MR_Integer libs__pickle__libs__pickle__functor_number_map_get_byte_out_of_range_0[1] = {
  (MR_Integer) 0
};

#line 620 "libs.pickle.c"
static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_get_byte_out_of_range_0 = {
  (MR_String) "get_byte_out_of_range",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 627 "libs.pickle.c"
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

#line 644 "libs.pickle.c"
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

#line 656 "libs.pickle.c"
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

#line 673 "libs.pickle.c"
static const MR_Integer libs__pickle__libs__pickle__functor_number_map_picklers_0[1] = {
  (MR_Integer) 0
};

#line 678 "libs.pickle.c"
static const MR_FA_TypeInfo_Struct2 libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0,
    (MR_TypeInfo) &libs__pickle____vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0
  }
};

#line 687 "libs.pickle.c"
static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_picklers_0 = {
  (MR_String) "picklers",
  (MR_PseudoTypeInfo) &libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_4libs__pickle__type_ctor_info_picklers_0univ__type_ctor_info_univ_0io__type_ctor_info_state_0io__type_ctor_info_state_0,
  NULL
};

#line 694 "libs.pickle.c"
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

#line 711 "libs.pickle.c"
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

#line 728 "libs.pickle.c"
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

#line 745 "libs.pickle.c"
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

#line 759 "libs.pickle.c"
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

#line 776 "libs.pickle.c"
static const MR_Integer libs__pickle__libs__pickle__functor_number_map_unpicklers_0[1] = {
  (MR_Integer) 0
};

#line 781 "libs.pickle.c"
static const MR_FA_TypeInfo_Struct2 libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0,
    (MR_TypeInfo) &libs__pickle____vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 790 "libs.pickle.c"
static const MR_NotagFunctorDesc libs__pickle__libs__pickle__notag_functor_desc_unpicklers_0 = {
  (MR_String) "unpicklers",
  (MR_PseudoTypeInfo) &libs__pickle__tree234__ti_tree234_2type_desc__type_ctor_info_type_ctor_desc_0__vti_pred_6libs__pickle__type_ctor_info_unpicklers_0bitmap__type_ctor_info_bitmap_0type_desc__type_ctor_info_type_desc_0univ__type_ctor_info_univ_0builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  NULL
};

#line 797 "libs.pickle.c"
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

#line 814 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0_10001(
#line 817 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 819 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 821 "libs.pickle.c"
{
#line 823 "libs.pickle.c"
  {
#line 825 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 828 "libs.pickle.c"
    {
#line 830 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____get_byte_out_of_range_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
#line 833 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 835 "libs.pickle.c"
  }
#line 837 "libs.pickle.c"
}

#line 840 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0_10001(
#line 843 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 845 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 847 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 849 "libs.pickle.c"
{
#line 851 "libs.pickle.c"
  {
#line 853 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 856 "libs.pickle.c"
    {
#line 858 "libs.pickle.c"
      libs__pickle____Compare____get_byte_out_of_range_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
#line 861 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 863 "libs.pickle.c"
  }
#line 865 "libs.pickle.c"
}

#line 868 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____pickler_pred_0_0_10001(
#line 871 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 873 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 875 "libs.pickle.c"
{
#line 877 "libs.pickle.c"
  {
#line 879 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 882 "libs.pickle.c"
    {
#line 884 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____pickler_pred_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
#line 887 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 889 "libs.pickle.c"
  }
#line 891 "libs.pickle.c"
}

#line 894 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____pickler_pred_0_0_10001(
#line 897 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 899 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 901 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 903 "libs.pickle.c"
{
#line 905 "libs.pickle.c"
  {
#line 907 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 910 "libs.pickle.c"
    {
#line 912 "libs.pickle.c"
      libs__pickle____Compare____pickler_pred_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
#line 915 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 917 "libs.pickle.c"
  }
#line 919 "libs.pickle.c"
}

#line 922 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____picklers_0_0_10001(
#line 925 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 927 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 929 "libs.pickle.c"
{
#line 931 "libs.pickle.c"
  {
#line 933 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 936 "libs.pickle.c"
    {
#line 938 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____picklers_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
#line 941 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 943 "libs.pickle.c"
  }
#line 945 "libs.pickle.c"
}

#line 948 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____picklers_0_0_10001(
#line 951 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 953 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 955 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 957 "libs.pickle.c"
{
#line 959 "libs.pickle.c"
  {
#line 961 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 964 "libs.pickle.c"
    {
#line 966 "libs.pickle.c"
      libs__pickle____Compare____picklers_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
#line 969 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 971 "libs.pickle.c"
  }
#line 973 "libs.pickle.c"
}

#line 976 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_handle_0_0_10001(
#line 979 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 981 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 983 "libs.pickle.c"
{
#line 985 "libs.pickle.c"
  {
#line 987 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 990 "libs.pickle.c"
    {
#line 992 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____unpickle_handle_0_0(((MR_Box) libs__pickle__wrapper_arg_1), ((MR_Box) libs__pickle__wrapper_arg_2));
    }
#line 995 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 997 "libs.pickle.c"
  }
#line 999 "libs.pickle.c"
}

#line 1002 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____unpickle_handle_0_0_10001(
#line 1005 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 1007 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 1009 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 1011 "libs.pickle.c"
{
#line 1013 "libs.pickle.c"
  {
#line 1015 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 1018 "libs.pickle.c"
    {
#line 1020 "libs.pickle.c"
      libs__pickle____Compare____unpickle_handle_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Box) libs__pickle__wrapper_arg_2), ((MR_Box) libs__pickle__wrapper_arg_3));
    }
#line 1023 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 1025 "libs.pickle.c"
  }
#line 1027 "libs.pickle.c"
}

#line 1030 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____unpickle_state_0_0_10001(
#line 1033 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 1035 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 1037 "libs.pickle.c"
{
#line 1039 "libs.pickle.c"
  {
#line 1041 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 1044 "libs.pickle.c"
    {
#line 1046 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____unpickle_state_0_0(((MR_Integer) libs__pickle__wrapper_arg_1), ((MR_Integer) libs__pickle__wrapper_arg_2));
    }
#line 1049 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 1051 "libs.pickle.c"
  }
#line 1053 "libs.pickle.c"
}

#line 1056 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____unpickle_state_0_0_10001(
#line 1059 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 1061 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 1063 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 1065 "libs.pickle.c"
{
#line 1067 "libs.pickle.c"
  {
#line 1069 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 1072 "libs.pickle.c"
    {
#line 1074 "libs.pickle.c"
      libs__pickle____Compare____unpickle_state_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Integer) libs__pickle__wrapper_arg_2), ((MR_Integer) libs__pickle__wrapper_arg_3));
    }
#line 1077 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 1079 "libs.pickle.c"
  }
#line 1081 "libs.pickle.c"
}

#line 1084 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____unpickler_pred_0_0_10001(
#line 1087 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 1089 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 1091 "libs.pickle.c"
{
#line 1093 "libs.pickle.c"
  {
#line 1095 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 1098 "libs.pickle.c"
    {
#line 1100 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____unpickler_pred_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
#line 1103 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 1105 "libs.pickle.c"
  }
#line 1107 "libs.pickle.c"
}

#line 1110 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____unpickler_pred_0_0_10001(
#line 1113 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 1115 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 1117 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 1119 "libs.pickle.c"
{
#line 1121 "libs.pickle.c"
  {
#line 1123 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 1126 "libs.pickle.c"
    {
#line 1128 "libs.pickle.c"
      libs__pickle____Compare____unpickler_pred_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
#line 1131 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 1133 "libs.pickle.c"
  }
#line 1135 "libs.pickle.c"
}

#line 1138 "libs.pickle.c"
static MR_bool MR_CALL 
libs__pickle____Unify____unpicklers_0_0_10001(
#line 1141 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_1,
#line 1143 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2)
#line 1145 "libs.pickle.c"
{
#line 1147 "libs.pickle.c"
  {
#line 1149 "libs.pickle.c"
    MR_bool libs__pickle__succeeded;

#line 1152 "libs.pickle.c"
    {
#line 1154 "libs.pickle.c"
      libs__pickle__succeeded = libs__pickle____Unify____unpicklers_0_0(((MR_Word) libs__pickle__wrapper_arg_1), ((MR_Word) libs__pickle__wrapper_arg_2));
    }
#line 1157 "libs.pickle.c"
    return libs__pickle__succeeded;
#line 1159 "libs.pickle.c"
  }
#line 1161 "libs.pickle.c"
}

#line 1164 "libs.pickle.c"
static void MR_CALL 
libs__pickle____Compare____unpicklers_0_0_10001(
#line 1167 "libs.pickle.c"
  MR_Box * libs__pickle__wrapper_arg_1,
#line 1169 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_2,
#line 1171 "libs.pickle.c"
  MR_Box libs__pickle__wrapper_arg_3)
#line 1173 "libs.pickle.c"
{
#line 1175 "libs.pickle.c"
  {
#line 1177 "libs.pickle.c"
    MR_Word libs__pickle__conv0_HeadVar__1_1;

#line 1180 "libs.pickle.c"
    {
#line 1182 "libs.pickle.c"
      libs__pickle____Compare____unpicklers_0_0(&libs__pickle__conv0_HeadVar__1_1, ((MR_Word) libs__pickle__wrapper_arg_2), ((MR_Word) libs__pickle__wrapper_arg_3));
    }
#line 1185 "libs.pickle.c"
    *libs__pickle__wrapper_arg_1 = ((MR_Box) (libs__pickle__conv0_HeadVar__1_1));
#line 1187 "libs.pickle.c"
  }
#line 1189 "libs.pickle.c"
}

#line 238 "pickle.m"
static void MR_CALL 
libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_p_0(
#line 238 "pickle.m"
  MR_Word libs__pickle__TypeInfo_for_T_32,
#line 238 "pickle.m"
  MR_Word libs__pickle__Unpicklers_6,
#line 238 "pickle.m"
  MR_Box libs__pickle__Bitmap_12,
#line 238 "pickle.m"
  MR_Box * libs__pickle__HeadVar__4_26)
#line 238 "pickle.m"
{
#line 238 "pickle.m"
  {
#line 238 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 238 "pickle.m"
    MR_Word libs__pickle__Univ_40;
#line 238 "pickle.m"
    MR_Word libs__pickle__V_41_41;
#line 263 "pickle.m"
    MR_Integer libs__pickle___State_15;

#line 263 "pickle.m"
    {
#line 263 "pickle.m"
      libs__pickle__V_41_41 = mercury__type_desc__type_of_1_f_0(libs__pickle__TypeInfo_for_T_32);
    }
#line 263 "pickle.m"
    {
#line 263 "pickle.m"
      libs__pickle__unpickle_2_6_p_0(libs__pickle__Unpicklers_6, libs__pickle__Bitmap_12, libs__pickle__V_41_41, &libs__pickle__Univ_40, (MR_Integer) 0, &libs__pickle___State_15);
    }
#line 264 "pickle.m"
    {
#line 264 "pickle.m"
      mercury__univ__det_univ_to_type_2_p_0(libs__pickle__TypeInfo_for_T_32, libs__pickle__Univ_40, libs__pickle__HeadVar__4_26);
#line 264 "pickle.m"
      return;
    }
#line 238 "pickle.m"
  }
#line 238 "pickle.m"
}

#line 117 "pickle.m"
void MR_CALL 
libs__pickle____Compare____unpicklers_0_0(
#line 117 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 117 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2,
#line 117 "pickle.m"
  MR_Word libs__pickle__HeadVar__3_3)
#line 117 "pickle.m"
{
#line 117 "pickle.m"
  {
#line 117 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 117 "pickle.m"
    MR_Integer libs__pickle__CastX_6 = (MR_Integer) libs__pickle__HeadVar__2_2;
#line 117 "pickle.m"
    MR_Integer libs__pickle__CastY_7 = (MR_Integer) libs__pickle__HeadVar__3_3;

#line 117 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__CastX_6 == libs__pickle__CastY_7);
#line 117 "pickle.m"
    if (libs__pickle__succeeded)
#line 1262 "libs.pickle.c"
      *libs__pickle__HeadVar__1_1 = (MR_Integer) 0;
#line 117 "pickle.m"
    else
#line 117 "pickle.m"
      {
#line 117 "pickle.m"
        MR_Word libs__pickle__V_4_4 = (MR_Word) libs__pickle__HeadVar__2_2;
#line 117 "pickle.m"
        MR_Word libs__pickle__V_5_5 = (MR_Word) libs__pickle__HeadVar__3_3;

#line 117 "pickle.m"
        {
#line 117 "pickle.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__pickle_scalar_common_3[1], libs__pickle__HeadVar__1_1, ((MR_Box) (libs__pickle__V_4_4)), ((MR_Box) (libs__pickle__V_5_5)));
#line 117 "pickle.m"
          return;
        }
#line 117 "pickle.m"
      }
#line 117 "pickle.m"
  }
#line 117 "pickle.m"
}

#line 117 "pickle.m"
MR_bool MR_CALL 
libs__pickle____Unify____unpicklers_0_0(
#line 117 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 117 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2)
#line 117 "pickle.m"
{
#line 117 "pickle.m"
  {
#line 117 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 117 "pickle.m"
    MR_Integer libs__pickle__CastX_5 = (MR_Integer) libs__pickle__HeadVar__1_1;
#line 117 "pickle.m"
    MR_Integer libs__pickle__CastY_6 = (MR_Integer) libs__pickle__HeadVar__2_2;

#line 117 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__CastX_5 == libs__pickle__CastY_6);
#line 117 "pickle.m"
    if (libs__pickle__succeeded)
#line 117 "pickle.m"
      libs__pickle__succeeded = MR_TRUE;
#line 117 "pickle.m"
    else
#line 117 "pickle.m"
      {
#line 117 "pickle.m"
        MR_Word libs__pickle__V_3_3 = (MR_Word) libs__pickle__HeadVar__1_1;
#line 117 "pickle.m"
        MR_Word libs__pickle__V_4_4 = (MR_Word) libs__pickle__HeadVar__2_2;

#line 1320 "libs.pickle.c"
        {
#line 1322 "libs.pickle.c"
          return libs__pickle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__pickle_scalar_common_3[1], ((MR_Box) (libs__pickle__V_3_3)), ((MR_Box) (libs__pickle__V_4_4)));
        }
#line 117 "pickle.m"
      }
#line 117 "pickle.m"
    return libs__pickle__succeeded;
#line 117 "pickle.m"
  }
#line 117 "pickle.m"
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
#line 66 "pickle.m"
      return;
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
      return libs__pickle__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) libs__pickle__Cast_HeadVar1_3, (MR_Word) libs__pickle__Cast_HeadVar2_4);
    }
#line 66 "pickle.m"
    return libs__pickle__succeeded;
#line 66 "pickle.m"
  }
#line 66 "pickle.m"
}

#line 123 "pickle.m"
void MR_CALL 
libs__pickle____Compare____unpickle_state_0_0(
#line 123 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 123 "pickle.m"
  MR_Integer libs__pickle__HeadVar__2_2,
#line 123 "pickle.m"
  MR_Integer libs__pickle__HeadVar__3_3)
#line 123 "pickle.m"
{
#line 123 "pickle.m"
  {
#line 123 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 123 "pickle.m"
    MR_Integer libs__pickle__Cast_HeadVar1_4 = libs__pickle__HeadVar__2_2;
#line 123 "pickle.m"
    MR_Integer libs__pickle__Cast_HeadVar2_5 = libs__pickle__HeadVar__3_3;

#line 123 "pickle.m"
    {
#line 123 "pickle.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__pickle__HeadVar__1_1, libs__pickle__Cast_HeadVar1_4, libs__pickle__Cast_HeadVar2_5);
#line 123 "pickle.m"
      return;
    }
#line 123 "pickle.m"
  }
#line 123 "pickle.m"
}

#line 123 "pickle.m"
MR_bool MR_CALL 
libs__pickle____Unify____unpickle_state_0_0(
#line 123 "pickle.m"
  MR_Integer libs__pickle__HeadVar__1_1,
#line 123 "pickle.m"
  MR_Integer libs__pickle__HeadVar__2_2)
#line 123 "pickle.m"
{
#line 123 "pickle.m"
  {
#line 123 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 123 "pickle.m"
    MR_Integer libs__pickle__Cast_HeadVar1_3 = libs__pickle__HeadVar__1_1;
#line 123 "pickle.m"
    MR_Integer libs__pickle__Cast_HeadVar2_4 = libs__pickle__HeadVar__2_2;

#line 123 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__Cast_HeadVar1_3 == libs__pickle__Cast_HeadVar2_4);
#line 123 "pickle.m"
    return libs__pickle__succeeded;
#line 123 "pickle.m"
  }
#line 123 "pickle.m"
}

#line 122 "pickle.m"
void MR_CALL 
libs__pickle____Compare____unpickle_handle_0_0(
#line 122 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 122 "pickle.m"
  MR_Box libs__pickle__HeadVar__2_2,
#line 122 "pickle.m"
  MR_Box libs__pickle__HeadVar__3_3)
#line 122 "pickle.m"
{
#line 122 "pickle.m"
  {
#line 122 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 122 "pickle.m"
    MR_Box libs__pickle__Cast_HeadVar1_4 = libs__pickle__HeadVar__2_2;
#line 122 "pickle.m"
    MR_Box libs__pickle__Cast_HeadVar2_5 = libs__pickle__HeadVar__3_3;

#line 122 "pickle.m"
    {
#line 122 "pickle.m"
      mercury__bitmap____Compare____bitmap_0_0(libs__pickle__HeadVar__1_1, libs__pickle__Cast_HeadVar1_4, libs__pickle__Cast_HeadVar2_5);
#line 122 "pickle.m"
      return;
    }
#line 122 "pickle.m"
  }
#line 122 "pickle.m"
}

#line 122 "pickle.m"
MR_bool MR_CALL 
libs__pickle____Unify____unpickle_handle_0_0(
#line 122 "pickle.m"
  MR_Box libs__pickle__HeadVar__1_1,
#line 122 "pickle.m"
  MR_Box libs__pickle__HeadVar__2_2)
#line 122 "pickle.m"
{
#line 122 "pickle.m"
  {
#line 122 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 122 "pickle.m"
    MR_Box libs__pickle__Cast_HeadVar1_3 = libs__pickle__HeadVar__1_1;
#line 122 "pickle.m"
    MR_Box libs__pickle__Cast_HeadVar2_4 = libs__pickle__HeadVar__2_2;

#line 122 "pickle.m"
    {
#line 122 "pickle.m"
      return libs__pickle__succeeded = mercury__bitmap____Unify____bitmap_0_0(libs__pickle__Cast_HeadVar1_3, libs__pickle__Cast_HeadVar2_4);
    }
#line 122 "pickle.m"
    return libs__pickle__succeeded;
#line 122 "pickle.m"
  }
#line 122 "pickle.m"
}

#line 112 "pickle.m"
void MR_CALL 
libs__pickle____Compare____picklers_0_0(
#line 112 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 112 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2,
#line 112 "pickle.m"
  MR_Word libs__pickle__HeadVar__3_3)
#line 112 "pickle.m"
{
#line 112 "pickle.m"
  {
#line 112 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 112 "pickle.m"
    MR_Integer libs__pickle__CastX_6 = (MR_Integer) libs__pickle__HeadVar__2_2;
#line 112 "pickle.m"
    MR_Integer libs__pickle__CastY_7 = (MR_Integer) libs__pickle__HeadVar__3_3;

#line 112 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__CastX_6 == libs__pickle__CastY_7);
#line 112 "pickle.m"
    if (libs__pickle__succeeded)
#line 1541 "libs.pickle.c"
      *libs__pickle__HeadVar__1_1 = (MR_Integer) 0;
#line 112 "pickle.m"
    else
#line 112 "pickle.m"
      {
#line 112 "pickle.m"
        MR_Word libs__pickle__V_4_4 = (MR_Word) libs__pickle__HeadVar__2_2;
#line 112 "pickle.m"
        MR_Word libs__pickle__V_5_5 = (MR_Word) libs__pickle__HeadVar__3_3;

#line 112 "pickle.m"
        {
#line 112 "pickle.m"
          mercury__builtin__compare_3_p_0((MR_Word) &libs__pickle_scalar_common_3[0], libs__pickle__HeadVar__1_1, ((MR_Box) (libs__pickle__V_4_4)), ((MR_Box) (libs__pickle__V_5_5)));
#line 112 "pickle.m"
          return;
        }
#line 112 "pickle.m"
      }
#line 112 "pickle.m"
  }
#line 112 "pickle.m"
}

#line 112 "pickle.m"
MR_bool MR_CALL 
libs__pickle____Unify____picklers_0_0(
#line 112 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 112 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2)
#line 112 "pickle.m"
{
#line 112 "pickle.m"
  {
#line 112 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 112 "pickle.m"
    MR_Integer libs__pickle__CastX_5 = (MR_Integer) libs__pickle__HeadVar__1_1;
#line 112 "pickle.m"
    MR_Integer libs__pickle__CastY_6 = (MR_Integer) libs__pickle__HeadVar__2_2;

#line 112 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__CastX_5 == libs__pickle__CastY_6);
#line 112 "pickle.m"
    if (libs__pickle__succeeded)
#line 112 "pickle.m"
      libs__pickle__succeeded = MR_TRUE;
#line 112 "pickle.m"
    else
#line 112 "pickle.m"
      {
#line 112 "pickle.m"
        MR_Word libs__pickle__V_3_3 = (MR_Word) libs__pickle__HeadVar__1_1;
#line 112 "pickle.m"
        MR_Word libs__pickle__V_4_4 = (MR_Word) libs__pickle__HeadVar__2_2;

#line 1599 "libs.pickle.c"
        {
#line 1601 "libs.pickle.c"
          return libs__pickle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &libs__pickle_scalar_common_3[0], ((MR_Box) (libs__pickle__V_3_3)), ((MR_Box) (libs__pickle__V_4_4)));
        }
#line 112 "pickle.m"
      }
#line 112 "pickle.m"
    return libs__pickle__succeeded;
#line 112 "pickle.m"
  }
#line 112 "pickle.m"
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
#line 35 "pickle.m"
      return;
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
      return libs__pickle__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) libs__pickle__Cast_HeadVar1_3, (MR_Word) libs__pickle__Cast_HeadVar2_4);
    }
#line 35 "pickle.m"
    return libs__pickle__succeeded;
#line 35 "pickle.m"
  }
#line 35 "pickle.m"
}

#line 125 "pickle.m"
static void MR_CALL 
libs__pickle____Compare____get_byte_out_of_range_0_0(
#line 125 "pickle.m"
  MR_Word * libs__pickle__HeadVar__1_1,
#line 125 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2,
#line 125 "pickle.m"
  MR_Word libs__pickle__HeadVar__3_3)
#line 125 "pickle.m"
{
#line 125 "pickle.m"
  {
#line 125 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 125 "pickle.m"
    MR_Integer libs__pickle__CastX_6 = (MR_Integer) libs__pickle__HeadVar__2_2;
#line 125 "pickle.m"
    MR_Integer libs__pickle__CastY_7 = (MR_Integer) libs__pickle__HeadVar__3_3;

#line 125 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__CastX_6 == libs__pickle__CastY_7);
#line 125 "pickle.m"
    if (libs__pickle__succeeded)
#line 1699 "libs.pickle.c"
      *libs__pickle__HeadVar__1_1 = (MR_Integer) 0;
#line 125 "pickle.m"
    else
#line 125 "pickle.m"
      {
#line 125 "pickle.m"
        MR_String libs__pickle__V_4_4 = (MR_String) libs__pickle__HeadVar__2_2;
#line 125 "pickle.m"
        MR_String libs__pickle__V_5_5 = (MR_String) libs__pickle__HeadVar__3_3;

#line 125 "pickle.m"
        {
#line 125 "pickle.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(libs__pickle__HeadVar__1_1, libs__pickle__V_4_4, libs__pickle__V_5_5);
#line 125 "pickle.m"
          return;
        }
#line 125 "pickle.m"
      }
#line 125 "pickle.m"
  }
#line 125 "pickle.m"
}

#line 125 "pickle.m"
static MR_bool MR_CALL 
libs__pickle____Unify____get_byte_out_of_range_0_0(
#line 125 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 125 "pickle.m"
  MR_Word libs__pickle__HeadVar__2_2)
#line 125 "pickle.m"
{
#line 125 "pickle.m"
  {
#line 125 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 125 "pickle.m"
    MR_Integer libs__pickle__CastX_5 = (MR_Integer) libs__pickle__HeadVar__1_1;
#line 125 "pickle.m"
    MR_Integer libs__pickle__CastY_6 = (MR_Integer) libs__pickle__HeadVar__2_2;

#line 125 "pickle.m"
    libs__pickle__succeeded = (libs__pickle__CastX_5 == libs__pickle__CastY_6);
#line 125 "pickle.m"
    if (libs__pickle__succeeded)
#line 125 "pickle.m"
      libs__pickle__succeeded = MR_TRUE;
#line 125 "pickle.m"
    else
#line 125 "pickle.m"
      {
#line 125 "pickle.m"
        MR_String libs__pickle__V_3_3 = (MR_String) libs__pickle__HeadVar__1_1;
#line 125 "pickle.m"
        MR_String libs__pickle__V_4_4 = (MR_String) libs__pickle__HeadVar__2_2;

#line 1757 "libs.pickle.c"
        libs__pickle__succeeded = (strcmp(libs__pickle__V_3_3, libs__pickle__V_4_4) == 0);
#line 125 "pickle.m"
      }
#line 125 "pickle.m"
    return libs__pickle__succeeded;
#line 125 "pickle.m"
  }
#line 125 "pickle.m"
}

#line 505 "pickle.m"
static void MR_CALL 
libs__pickle__reinterpret_ints_as_float_3_p_0(
#line 505 "pickle.m"
  MR_Integer libs__pickle__A_1,
#line 505 "pickle.m"
  MR_Integer libs__pickle__B_2,
#line 505 "pickle.m"
  MR_Float * libs__pickle__Flt_3)
#line 505 "pickle.m"
{
#line 507 "pickle.m"
  {
#line 507 "pickle.m"
    MR_bool libs__pickle__succeeded;

#line 510 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__reinterpret_ints_as_float_3_p_0

	MR_Integer A;
	MR_Integer B;
	MR_Float Flt;

	A =  libs__pickle__A_1 ;
	B =  libs__pickle__B_2 ;
		{
#line 510 "pickle.m"

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

#line 1813 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__Flt_3  = Flt;
#line 510 "pickle.m"
}
#line 507 "pickle.m"
  }
#line 505 "pickle.m"
}

#line 497 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_float_4_p_0(
#line 497 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 497 "pickle.m"
  MR_Float * libs__pickle__Float_6,
#line 497 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_10,
#line 497 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_11)
#line 497 "pickle.m"
{
#line 500 "pickle.m"
  {
#line 500 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 500 "pickle.m"
    MR_Integer libs__pickle__A_8;
#line 500 "pickle.m"
    MR_Integer libs__pickle__B_9;
#line 500 "pickle.m"
    MR_Integer libs__pickle__STATE_VARIABLE_State_12_12;

#line 501 "pickle.m"
    {
#line 501 "pickle.m"
      libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_5, &libs__pickle__A_8, libs__pickle__STATE_VARIABLE_State_0_10, &libs__pickle__STATE_VARIABLE_State_12_12);
    }
#line 502 "pickle.m"
    {
#line 502 "pickle.m"
      libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_5, &libs__pickle__B_9, libs__pickle__STATE_VARIABLE_State_12_12, libs__pickle__STATE_VARIABLE_State_11);
    }
#line 510 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__unpickle_float_4_p_0

	MR_Integer A;
	MR_Integer B;
	MR_Float Flt;

	A =  libs__pickle__A_8 ;
	B =  libs__pickle__B_9 ;
		{
#line 510 "pickle.m"

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

#line 1888 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__Float_6  = Flt;
#line 510 "pickle.m"
}
#line 500 "pickle.m"
  }
#line 497 "pickle.m"
}

#line 472 "pickle.m"
static void MR_CALL 
libs__pickle__reinterpret_float_as_ints_3_p_0(
#line 472 "pickle.m"
  MR_Float libs__pickle__Flt_1,
#line 472 "pickle.m"
  MR_Integer * libs__pickle__A_2,
#line 472 "pickle.m"
  MR_Integer * libs__pickle__B_3)
#line 472 "pickle.m"
{
#line 475 "pickle.m"
  {
#line 475 "pickle.m"
    MR_bool libs__pickle__succeeded;

#line 478 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__reinterpret_float_as_ints_3_p_0

	MR_Float Flt;
	MR_Integer A;
	MR_Integer B;

	Flt =  libs__pickle__Flt_1 ;
		{
#line 478 "pickle.m"

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

#line 1942 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__A_2  = A;
	 *libs__pickle__B_3  = B;
#line 478 "pickle.m"
}
#line 475 "pickle.m"
  }
#line 472 "pickle.m"
}

#line 463 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_float_3_p_0(
#line 463 "pickle.m"
  MR_Float libs__pickle__Float_4)
#line 463 "pickle.m"
{
#line 465 "pickle.m"
  {
#line 465 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 465 "pickle.m"
    MR_Integer libs__pickle__A_6;
#line 465 "pickle.m"
    MR_Integer libs__pickle__B_7;
#line 465 "pickle.m"
    MR_Integer libs__pickle__A_21;
#line 465 "pickle.m"
    MR_Integer libs__pickle__B_22;
#line 465 "pickle.m"
    MR_Integer libs__pickle__C_23;
#line 465 "pickle.m"
    MR_Integer libs__pickle__D_24;
#line 465 "pickle.m"
    MR_Integer libs__pickle__V_25_25;
#line 465 "pickle.m"
    MR_Integer libs__pickle__V_28_28;
#line 465 "pickle.m"
    MR_Integer libs__pickle__V_31_31;
#line 465 "pickle.m"
    MR_Integer libs__pickle__V_34_34;
#line 465 "pickle.m"
    MR_Integer libs__pickle__A_45;
#line 465 "pickle.m"
    MR_Integer libs__pickle__B_46;
#line 465 "pickle.m"
    MR_Integer libs__pickle__C_47;
#line 465 "pickle.m"
    MR_Integer libs__pickle__D_48;
#line 465 "pickle.m"
    MR_Integer libs__pickle__V_49_49;
#line 465 "pickle.m"
    MR_Integer libs__pickle__V_52_52;
#line 465 "pickle.m"
    MR_Integer libs__pickle__V_55_55;
#line 465 "pickle.m"
    MR_Integer libs__pickle__V_58_58;

#line 478 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__pickle_float_3_p_0

	MR_Float Flt;
	MR_Integer A;
	MR_Integer B;

	Flt =  libs__pickle__Float_4 ;
		{
#line 478 "pickle.m"

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

#line 2029 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 libs__pickle__A_6  = A;
	 libs__pickle__B_7  = B;
#line 478 "pickle.m"
}
#line 363 "pickle.m"
    {
#line 363 "pickle.m"
      libs__pickle__V_25_25 = mercury__int__f_62_62_2_f_0(libs__pickle__A_6, (MR_Integer) 24);
    }
#line 363 "pickle.m"
    libs__pickle__A_21 = (libs__pickle__V_25_25 & (MR_Integer) 255);
#line 364 "pickle.m"
    {
#line 364 "pickle.m"
      libs__pickle__V_28_28 = mercury__int__f_62_62_2_f_0(libs__pickle__A_6, (MR_Integer) 16);
    }
#line 364 "pickle.m"
    libs__pickle__B_22 = (libs__pickle__V_28_28 & (MR_Integer) 255);
#line 365 "pickle.m"
    {
#line 365 "pickle.m"
      libs__pickle__V_31_31 = mercury__int__f_62_62_2_f_0(libs__pickle__A_6, (MR_Integer) 8);
    }
#line 365 "pickle.m"
    libs__pickle__C_23 = (libs__pickle__V_31_31 & (MR_Integer) 255);
#line 366 "pickle.m"
    {
#line 366 "pickle.m"
      libs__pickle__V_34_34 = mercury__int__f_62_62_2_f_0(libs__pickle__A_6, (MR_Integer) 0);
    }
#line 366 "pickle.m"
    libs__pickle__D_24 = (libs__pickle__V_34_34 & (MR_Integer) 255);
#line 367 "pickle.m"
    {
#line 367 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__A_21);
    }
#line 368 "pickle.m"
    {
#line 368 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__B_22);
    }
#line 369 "pickle.m"
    {
#line 369 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__C_23);
    }
#line 370 "pickle.m"
    {
#line 370 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__D_24);
    }
#line 363 "pickle.m"
    {
#line 363 "pickle.m"
      libs__pickle__V_49_49 = mercury__int__f_62_62_2_f_0(libs__pickle__B_7, (MR_Integer) 24);
    }
#line 363 "pickle.m"
    libs__pickle__A_45 = (libs__pickle__V_49_49 & (MR_Integer) 255);
#line 364 "pickle.m"
    {
#line 364 "pickle.m"
      libs__pickle__V_52_52 = mercury__int__f_62_62_2_f_0(libs__pickle__B_7, (MR_Integer) 16);
    }
#line 364 "pickle.m"
    libs__pickle__B_46 = (libs__pickle__V_52_52 & (MR_Integer) 255);
#line 365 "pickle.m"
    {
#line 365 "pickle.m"
      libs__pickle__V_55_55 = mercury__int__f_62_62_2_f_0(libs__pickle__B_7, (MR_Integer) 8);
    }
#line 365 "pickle.m"
    libs__pickle__C_47 = (libs__pickle__V_55_55 & (MR_Integer) 255);
#line 366 "pickle.m"
    {
#line 366 "pickle.m"
      libs__pickle__V_58_58 = mercury__int__f_62_62_2_f_0(libs__pickle__B_7, (MR_Integer) 0);
    }
#line 366 "pickle.m"
    libs__pickle__D_48 = (libs__pickle__V_58_58 & (MR_Integer) 255);
#line 367 "pickle.m"
    {
#line 367 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__A_45);
    }
#line 368 "pickle.m"
    {
#line 368 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__B_46);
    }
#line 369 "pickle.m"
    {
#line 369 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__C_47);
    }
#line 370 "pickle.m"
    {
#line 370 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__D_48);
#line 370 "pickle.m"
      return;
    }
#line 465 "pickle.m"
  }
#line 463 "pickle.m"
}

#line 449 "pickle.m"
static void MR_CALL 
libs__pickle__local_unsafe_set_char_4_p_0(
#line 449 "pickle.m"
  MR_Char libs__pickle__Chr_1,
#line 449 "pickle.m"
  MR_Integer libs__pickle__Index_2,
#line 449 "pickle.m"
  MR_String libs__pickle__Str0_3,
#line 449 "pickle.m"
  MR_String * libs__pickle__Str_4)
#line 449 "pickle.m"
{
#line 452 "pickle.m"
  {
#line 452 "pickle.m"
    MR_bool libs__pickle__succeeded;

#line 455 "pickle.m"
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
#line 455 "pickle.m"

    Str0[Index] = Chr;
    Str = Str0;

#line 2176 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__Str_4  = Str;
#line 455 "pickle.m"
}
#line 452 "pickle.m"
  }
#line 449 "pickle.m"
}

#line 434 "pickle.m"
static void MR_CALL 
libs__pickle__allocate_string_2_p_0(
#line 434 "pickle.m"
  MR_Integer libs__pickle__Length_1,
#line 434 "pickle.m"
  MR_String * libs__pickle__Str_2)
#line 434 "pickle.m"
{
#line 436 "pickle.m"
  {
#line 436 "pickle.m"
    MR_bool libs__pickle__succeeded;

#line 439 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__allocate_string_2_p_0

	MR_Integer Length;
	MR_String Str;

	Length =  libs__pickle__Length_1 ;
		{
#line 439 "pickle.m"

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';

#line 2216 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__Str_2  = Str;
#line 439 "pickle.m"
}
#line 436 "pickle.m"
  }
#line 434 "pickle.m"
}

#line 422 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_string_2_7_p_0(
#line 422 "pickle.m"
  MR_Box libs__pickle__Handle_8,
#line 422 "pickle.m"
  MR_Integer libs__pickle__Index_9,
#line 422 "pickle.m"
  MR_Integer libs__pickle__Length_10,
#line 422 "pickle.m"
  MR_String libs__pickle__STATE_VARIABLE_String_0_14,
#line 422 "pickle.m"
  MR_String * libs__pickle__STATE_VARIABLE_String_15,
#line 422 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_16,
#line 422 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_17)
#line 422 "pickle.m"
{
#line 428 "pickle.m"
  while (MR_TRUE)
#line 428 "pickle.m"
    {
#line 428 "pickle.m"
      /* tailcall optimized into a loop */
#line 428 "pickle.m"
      {
#line 428 "pickle.m"
        MR_bool libs__pickle__succeeded = (libs__pickle__Index_9 == libs__pickle__Length_10);

#line 428 "pickle.m"
        if (libs__pickle__succeeded)
#line 427 "pickle.m"
          {
#line 427 "pickle.m"
            *libs__pickle__STATE_VARIABLE_State_17 = libs__pickle__STATE_VARIABLE_State_0_16;
#line 427 "pickle.m"
            *libs__pickle__STATE_VARIABLE_String_15 = libs__pickle__STATE_VARIABLE_String_0_14;
#line 427 "pickle.m"
          }
#line 428 "pickle.m"
        else
#line 429 "pickle.m"
          {
#line 429 "pickle.m"
            MR_Char libs__pickle__Char_13;
#line 429 "pickle.m"
            MR_Integer libs__pickle__STATE_VARIABLE_State_18_18 = (libs__pickle__STATE_VARIABLE_State_0_16 + (MR_Integer) 1);
#line 429 "pickle.m"
            MR_String libs__pickle__STATE_VARIABLE_String_19_19;
#line 429 "pickle.m"
            MR_Integer libs__pickle__V_20_20;
#line 429 "pickle.m"
            MR_Integer libs__pickle__Byte_29;

#line 535 "pickle.m"
            {
#line 535 "pickle.m"
              libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_8, libs__pickle__STATE_VARIABLE_State_0_16);
            }
#line 537 "pickle.m"
            if (libs__pickle__succeeded)
#line 536 "pickle.m"
              {
#line 536 "pickle.m"
                libs__pickle__Byte_29 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_0_16, libs__pickle__Handle_8);
              }
#line 537 "pickle.m"
            else
#line 538 "pickle.m"
              {
#line 538 "pickle.m"
                MR_String libs__pickle__Msg_34;
#line 538 "pickle.m"
                MR_String libs__pickle__V_37_37;
#line 538 "pickle.m"
                MR_String libs__pickle__V_38_38;
#line 538 "pickle.m"
                MR_Word libs__pickle__V_40_40;

#line 538 "pickle.m"
                {
#line 538 "pickle.m"
                  libs__pickle__V_38_38 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_0_16);
                }
#line 538 "pickle.m"
                {
#line 538 "pickle.m"
                  libs__pickle__V_37_37 = mercury__string__f_43_43_2_f_0(libs__pickle__V_38_38, (MR_String) " is out of range");
                }
#line 538 "pickle.m"
                {
#line 538 "pickle.m"
                  libs__pickle__Msg_34 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_37_37);
                }
#line 539 "pickle.m"
                libs__pickle__V_40_40 = (MR_Word) libs__pickle__Msg_34;
#line 539 "pickle.m"
                {
#line 539 "pickle.m"
                  mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_40_40)));
#line 539 "pickle.m"
                  return;
                }
#line 538 "pickle.m"
              }
#line 405 "pickle.m"
            {
#line 405 "pickle.m"
              mercury__char__det_from_int_2_p_0(libs__pickle__Byte_29, &libs__pickle__Char_13);
            }
#line 455 "pickle.m"
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
#line 455 "pickle.m"

    Str0[Index] = Chr;
    Str = Str0;

#line 2357 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 libs__pickle__STATE_VARIABLE_String_19_19  = Str;
#line 455 "pickle.m"
}
#line 431 "pickle.m"
            libs__pickle__V_20_20 = (libs__pickle__Index_9 + (MR_Integer) 1);
#line 431 "pickle.m"
            /* direct tailcall eliminated */
#line 431 "pickle.m"
            {
#line 431 "pickle.m"
              MR_Integer libs__pickle__Index__tmp_copy_9 = libs__pickle__V_20_20;
#line 431 "pickle.m"
              MR_String libs__pickle__STATE_VARIABLE_String_0__tmp_copy_14 = libs__pickle__STATE_VARIABLE_String_19_19;
#line 431 "pickle.m"
              MR_Integer libs__pickle__STATE_VARIABLE_State_0__tmp_copy_16 = libs__pickle__STATE_VARIABLE_State_18_18;

#line 431 "pickle.m"
              libs__pickle__STATE_VARIABLE_State_0_16 = libs__pickle__STATE_VARIABLE_State_0__tmp_copy_16;
#line 431 "pickle.m"
              libs__pickle__STATE_VARIABLE_String_0_14 = libs__pickle__STATE_VARIABLE_String_0__tmp_copy_14;
#line 431 "pickle.m"
              libs__pickle__Index_9 = libs__pickle__Index__tmp_copy_9;
#line 431 "pickle.m"
            }
#line 431 "pickle.m"
            continue;
#line 429 "pickle.m"
          }
#line 428 "pickle.m"
      }
#line 428 "pickle.m"
      break;
#line 428 "pickle.m"
    }
#line 422 "pickle.m"
}

#line 414 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_string_4_p_0(
#line 414 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 414 "pickle.m"
  MR_String * libs__pickle__String_6,
#line 414 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_10,
#line 414 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_11)
#line 414 "pickle.m"
{
#line 417 "pickle.m"
  {
#line 417 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 417 "pickle.m"
    MR_Integer libs__pickle__Length_8;
#line 417 "pickle.m"
    MR_String libs__pickle__String0_9;
#line 417 "pickle.m"
    MR_Integer libs__pickle__STATE_VARIABLE_State_12_12;

#line 418 "pickle.m"
    {
#line 418 "pickle.m"
      libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_5, &libs__pickle__Length_8, libs__pickle__STATE_VARIABLE_State_0_10, &libs__pickle__STATE_VARIABLE_State_12_12);
    }
#line 439 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__unpickle_string_4_p_0

	MR_Integer Length;
	MR_String Str;

	Length =  libs__pickle__Length_8 ;
		{
#line 439 "pickle.m"

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';

#line 2441 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 libs__pickle__String0_9  = Str;
#line 439 "pickle.m"
}
#line 420 "pickle.m"
    {
#line 420 "pickle.m"
      libs__pickle__unpickle_string_2_7_p_0(libs__pickle__Handle_5, (MR_Integer) 0, libs__pickle__Length_8, libs__pickle__String0_9, libs__pickle__String_6, libs__pickle__STATE_VARIABLE_State_12_12, libs__pickle__STATE_VARIABLE_State_11);
#line 420 "pickle.m"
      return;
    }
#line 417 "pickle.m"
  }
#line 414 "pickle.m"
}

#line 412 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_string_3_p_0_1(
#line 412 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 412 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_1,
#line 412 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_2,
#line 412 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_3)
#line 412 "pickle.m"
{
#line 412 "pickle.m"
  {
#line 412 "pickle.m"
    MR_Box libs__pickle__closure = libs__pickle__closure_arg;

#line 412 "pickle.m"
    {
#line 412 "pickle.m"
      libs__pickle__pickle_char_3_p_0(((MR_Char) (MR_Word) libs__pickle__wrapper_arg_1));
#line 412 "pickle.m"
      return;
    }
#line 412 "pickle.m"
  }
#line 412 "pickle.m"
}

#line 407 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_string_3_p_0(
#line 407 "pickle.m"
  MR_String libs__pickle__String_4)
#line 407 "pickle.m"
{
#line 409 "pickle.m"
  {
#line 409 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 409 "pickle.m"
    MR_Integer libs__pickle__Length_6;
#line 409 "pickle.m"
    MR_Integer libs__pickle__A_20;
#line 409 "pickle.m"
    MR_Integer libs__pickle__B_21;
#line 409 "pickle.m"
    MR_Integer libs__pickle__C_22;
#line 409 "pickle.m"
    MR_Integer libs__pickle__D_23;
#line 409 "pickle.m"
    MR_Integer libs__pickle__V_24_24;
#line 409 "pickle.m"
    MR_Integer libs__pickle__V_27_27;
#line 409 "pickle.m"
    MR_Integer libs__pickle__V_30_30;
#line 409 "pickle.m"
    MR_Integer libs__pickle__V_33_33;
#line 412 "pickle.m"
    MR_Box libs__pickle__conv0_STATE_VARIABLE_IO_8;

#line 410 "pickle.m"
    {
#line 410 "pickle.m"
      libs__pickle__Length_6 = mercury__string__length_1_f_0(libs__pickle__String_4);
    }
#line 363 "pickle.m"
    {
#line 363 "pickle.m"
      libs__pickle__V_24_24 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_6, (MR_Integer) 24);
    }
#line 363 "pickle.m"
    libs__pickle__A_20 = (libs__pickle__V_24_24 & (MR_Integer) 255);
#line 364 "pickle.m"
    {
#line 364 "pickle.m"
      libs__pickle__V_27_27 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_6, (MR_Integer) 16);
    }
#line 364 "pickle.m"
    libs__pickle__B_21 = (libs__pickle__V_27_27 & (MR_Integer) 255);
#line 365 "pickle.m"
    {
#line 365 "pickle.m"
      libs__pickle__V_30_30 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_6, (MR_Integer) 8);
    }
#line 365 "pickle.m"
    libs__pickle__C_22 = (libs__pickle__V_30_30 & (MR_Integer) 255);
#line 366 "pickle.m"
    {
#line 366 "pickle.m"
      libs__pickle__V_33_33 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_6, (MR_Integer) 0);
    }
#line 366 "pickle.m"
    libs__pickle__D_23 = (libs__pickle__V_33_33 & (MR_Integer) 255);
#line 367 "pickle.m"
    {
#line 367 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__A_20);
    }
#line 368 "pickle.m"
    {
#line 368 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__B_21);
    }
#line 369 "pickle.m"
    {
#line 369 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__C_22);
    }
#line 370 "pickle.m"
    {
#line 370 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__D_23);
    }
#line 412 "pickle.m"
    {
#line 412 "pickle.m"
      mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &libs__pickle_scalar_common_3[3], libs__pickle__String_4, ((MR_Box) ((MR_Integer) 0)), &libs__pickle__conv0_STATE_VARIABLE_IO_8);
    }
#line 409 "pickle.m"
  }
#line 407 "pickle.m"
}

#line 400 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_char_4_p_0(
#line 400 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 400 "pickle.m"
  MR_Char * libs__pickle__Char_6,
#line 400 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_9,
#line 400 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_10)
#line 400 "pickle.m"
{
#line 403 "pickle.m"
  {
#line 403 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 403 "pickle.m"
    MR_Integer libs__pickle__Byte_8;

#line 534 "pickle.m"
    *libs__pickle__STATE_VARIABLE_State_10 = (libs__pickle__STATE_VARIABLE_State_0_9 + (MR_Integer) 1);
#line 535 "pickle.m"
    {
#line 535 "pickle.m"
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_0_9);
    }
#line 537 "pickle.m"
    if (libs__pickle__succeeded)
#line 536 "pickle.m"
      {
#line 536 "pickle.m"
        libs__pickle__Byte_8 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_0_9, libs__pickle__Handle_5);
      }
#line 537 "pickle.m"
    else
#line 538 "pickle.m"
      {
#line 538 "pickle.m"
        MR_String libs__pickle__Msg_15;
#line 538 "pickle.m"
        MR_String libs__pickle__V_18_18;
#line 538 "pickle.m"
        MR_String libs__pickle__V_19_19;
#line 538 "pickle.m"
        MR_Word libs__pickle__V_21_21;

#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__V_19_19 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_0_9);
        }
#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__V_18_18 = mercury__string__f_43_43_2_f_0(libs__pickle__V_19_19, (MR_String) " is out of range");
        }
#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__Msg_15 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_18_18);
        }
#line 539 "pickle.m"
        libs__pickle__V_21_21 = (MR_Word) libs__pickle__Msg_15;
#line 539 "pickle.m"
        {
#line 539 "pickle.m"
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_21_21)));
#line 539 "pickle.m"
          return;
        }
#line 538 "pickle.m"
      }
#line 405 "pickle.m"
    {
#line 405 "pickle.m"
      mercury__char__det_from_int_2_p_0(libs__pickle__Byte_8, libs__pickle__Char_6);
#line 405 "pickle.m"
      return;
    }
#line 403 "pickle.m"
  }
#line 400 "pickle.m"
}

#line 393 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_char_3_p_0(
#line 393 "pickle.m"
  MR_Char libs__pickle__Char_4)
#line 393 "pickle.m"
{
#line 395 "pickle.m"
  {
#line 395 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 395 "pickle.m"
    MR_Integer libs__pickle__Int_6;

#line 397 "pickle.m"
    {
#line 397 "pickle.m"
      mercury__char__to_int_2_p_0(libs__pickle__Char_4, &libs__pickle__Int_6);
    }
#line 398 "pickle.m"
    {
#line 398 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__Int_6);
#line 398 "pickle.m"
      return;
    }
#line 395 "pickle.m"
  }
#line 393 "pickle.m"
}

#line 372 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_int32_4_p_0(
#line 372 "pickle.m"
  MR_Box libs__pickle__Handle_5,
#line 372 "pickle.m"
  MR_Integer * libs__pickle__Int_6,
#line 372 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_13,
#line 372 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_14)
#line 372 "pickle.m"
{
#line 375 "pickle.m"
  {
#line 375 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 375 "pickle.m"
    MR_Integer libs__pickle__A_8;
#line 375 "pickle.m"
    MR_Integer libs__pickle__B_9;
#line 375 "pickle.m"
    MR_Integer libs__pickle__C_10;
#line 375 "pickle.m"
    MR_Integer libs__pickle__D_11;
#line 375 "pickle.m"
    MR_Integer libs__pickle__Int0_12;
#line 375 "pickle.m"
    MR_Integer libs__pickle__STATE_VARIABLE_State_15_15 = (libs__pickle__STATE_VARIABLE_State_0_13 + (MR_Integer) 1);
#line 375 "pickle.m"
    MR_Integer libs__pickle__STATE_VARIABLE_State_16_16;
#line 375 "pickle.m"
    MR_Integer libs__pickle__STATE_VARIABLE_State_17_17;
#line 375 "pickle.m"
    MR_Integer libs__pickle__V_19_19;
#line 375 "pickle.m"
    MR_Integer libs__pickle__V_20_20;
#line 375 "pickle.m"
    MR_Integer libs__pickle__V_21_21;
#line 375 "pickle.m"
    MR_Integer libs__pickle__V_23_23;
#line 375 "pickle.m"
    MR_Integer libs__pickle__V_25_25;
#line 375 "pickle.m"
    MR_Integer libs__pickle__V_27_27;
#line 375 "pickle.m"
    MR_Integer libs__pickle__Mask_75;
#line 375 "pickle.m"
    MR_Integer libs__pickle__V_78_78;

#line 535 "pickle.m"
    {
#line 535 "pickle.m"
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_0_13);
    }
#line 537 "pickle.m"
    if (libs__pickle__succeeded)
#line 536 "pickle.m"
      {
#line 536 "pickle.m"
        libs__pickle__A_8 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_0_13, libs__pickle__Handle_5);
      }
#line 537 "pickle.m"
    else
#line 538 "pickle.m"
      {
#line 538 "pickle.m"
        MR_String libs__pickle__Msg_32;
#line 538 "pickle.m"
        MR_String libs__pickle__V_35_35;
#line 538 "pickle.m"
        MR_String libs__pickle__V_36_36;
#line 538 "pickle.m"
        MR_Word libs__pickle__V_38_38;

#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__V_36_36 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_0_13);
        }
#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__V_35_35 = mercury__string__f_43_43_2_f_0(libs__pickle__V_36_36, (MR_String) " is out of range");
        }
#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__Msg_32 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_35_35);
        }
#line 539 "pickle.m"
        libs__pickle__V_38_38 = (MR_Word) libs__pickle__Msg_32;
#line 539 "pickle.m"
        {
#line 539 "pickle.m"
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_38_38)));
#line 539 "pickle.m"
          return;
        }
#line 538 "pickle.m"
      }
#line 534 "pickle.m"
    libs__pickle__STATE_VARIABLE_State_16_16 = (libs__pickle__STATE_VARIABLE_State_15_15 + (MR_Integer) 1);
#line 535 "pickle.m"
    {
#line 535 "pickle.m"
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_15_15);
    }
#line 537 "pickle.m"
    if (libs__pickle__succeeded)
#line 536 "pickle.m"
      {
#line 536 "pickle.m"
        libs__pickle__B_9 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_15_15, libs__pickle__Handle_5);
      }
#line 537 "pickle.m"
    else
#line 538 "pickle.m"
      {
#line 538 "pickle.m"
        MR_String libs__pickle__Msg_43;
#line 538 "pickle.m"
        MR_String libs__pickle__V_46_46;
#line 538 "pickle.m"
        MR_String libs__pickle__V_47_47;
#line 538 "pickle.m"
        MR_Word libs__pickle__V_49_49;

#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__V_47_47 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_15_15);
        }
#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__V_46_46 = mercury__string__f_43_43_2_f_0(libs__pickle__V_47_47, (MR_String) " is out of range");
        }
#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__Msg_43 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_46_46);
        }
#line 539 "pickle.m"
        libs__pickle__V_49_49 = (MR_Word) libs__pickle__Msg_43;
#line 539 "pickle.m"
        {
#line 539 "pickle.m"
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_49_49)));
#line 539 "pickle.m"
          return;
        }
#line 538 "pickle.m"
      }
#line 534 "pickle.m"
    libs__pickle__STATE_VARIABLE_State_17_17 = (libs__pickle__STATE_VARIABLE_State_16_16 + (MR_Integer) 1);
#line 535 "pickle.m"
    {
#line 535 "pickle.m"
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_16_16);
    }
#line 537 "pickle.m"
    if (libs__pickle__succeeded)
#line 536 "pickle.m"
      {
#line 536 "pickle.m"
        libs__pickle__C_10 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_16_16, libs__pickle__Handle_5);
      }
#line 537 "pickle.m"
    else
#line 538 "pickle.m"
      {
#line 538 "pickle.m"
        MR_String libs__pickle__Msg_54;
#line 538 "pickle.m"
        MR_String libs__pickle__V_57_57;
#line 538 "pickle.m"
        MR_String libs__pickle__V_58_58;
#line 538 "pickle.m"
        MR_Word libs__pickle__V_60_60;

#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__V_58_58 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_16_16);
        }
#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__V_57_57 = mercury__string__f_43_43_2_f_0(libs__pickle__V_58_58, (MR_String) " is out of range");
        }
#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__Msg_54 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_57_57);
        }
#line 539 "pickle.m"
        libs__pickle__V_60_60 = (MR_Word) libs__pickle__Msg_54;
#line 539 "pickle.m"
        {
#line 539 "pickle.m"
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_60_60)));
#line 539 "pickle.m"
          return;
        }
#line 538 "pickle.m"
      }
#line 534 "pickle.m"
    *libs__pickle__STATE_VARIABLE_State_14 = (libs__pickle__STATE_VARIABLE_State_17_17 + (MR_Integer) 1);
#line 535 "pickle.m"
    {
#line 535 "pickle.m"
      libs__pickle__succeeded = mercury__bitmap__byte_in_range_2_p_0(libs__pickle__Handle_5, libs__pickle__STATE_VARIABLE_State_17_17);
    }
#line 537 "pickle.m"
    if (libs__pickle__succeeded)
#line 536 "pickle.m"
      {
#line 536 "pickle.m"
        libs__pickle__D_11 = mercury__bitmap__unsafe_byte_2_f_0(libs__pickle__STATE_VARIABLE_State_17_17, libs__pickle__Handle_5);
      }
#line 537 "pickle.m"
    else
#line 538 "pickle.m"
      {
#line 538 "pickle.m"
        MR_String libs__pickle__Msg_65;
#line 538 "pickle.m"
        MR_String libs__pickle__V_68_68;
#line 538 "pickle.m"
        MR_String libs__pickle__V_69_69;
#line 538 "pickle.m"
        MR_Word libs__pickle__V_71_71;

#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__V_69_69 = mercury__string__from_int_1_f_0(libs__pickle__STATE_VARIABLE_State_17_17);
        }
#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__V_68_68 = mercury__string__f_43_43_2_f_0(libs__pickle__V_69_69, (MR_String) " is out of range");
        }
#line 538 "pickle.m"
        {
#line 538 "pickle.m"
          libs__pickle__Msg_65 = mercury__string__f_43_43_2_f_0((MR_String) "byte ", libs__pickle__V_68_68);
        }
#line 539 "pickle.m"
        libs__pickle__V_71_71 = (MR_Word) libs__pickle__Msg_65;
#line 539 "pickle.m"
        {
#line 539 "pickle.m"
          mercury__exception__throw_1_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, ((MR_Box) (libs__pickle__V_71_71)));
#line 539 "pickle.m"
          return;
        }
#line 538 "pickle.m"
      }
#line 380 "pickle.m"
    libs__pickle__V_21_21 = (libs__pickle__A_8 << (MR_Integer) 24);
#line 381 "pickle.m"
    libs__pickle__V_23_23 = (libs__pickle__B_9 << (MR_Integer) 16);
#line 381 "pickle.m"
    libs__pickle__V_20_20 = (libs__pickle__V_21_21 | libs__pickle__V_23_23);
#line 382 "pickle.m"
    libs__pickle__V_25_25 = (libs__pickle__C_10 << (MR_Integer) 8);
#line 382 "pickle.m"
    libs__pickle__V_19_19 = (libs__pickle__V_20_20 | libs__pickle__V_25_25);
#line 383 "pickle.m"
    libs__pickle__V_27_27 = (libs__pickle__D_11 << (MR_Integer) 0);
#line 383 "pickle.m"
    libs__pickle__Int0_12 = (libs__pickle__V_19_19 | libs__pickle__V_27_27);
#line 390 "pickle.m"
    libs__pickle__Mask_75 = ((MR_Integer) 1 << (MR_Integer) 31);
#line 391 "pickle.m"
    libs__pickle__V_78_78 = (libs__pickle__Int0_12 ^ libs__pickle__Mask_75);
#line 391 "pickle.m"
    *libs__pickle__Int_6 = (libs__pickle__V_78_78 - libs__pickle__Mask_75);
#line 375 "pickle.m"
  }
#line 372 "pickle.m"
}

#line 360 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_int32_3_p_0(
#line 360 "pickle.m"
  MR_Integer libs__pickle__Int_4)
#line 360 "pickle.m"
{
#line 362 "pickle.m"
  {
#line 362 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 362 "pickle.m"
    MR_Integer libs__pickle__A_6;
#line 362 "pickle.m"
    MR_Integer libs__pickle__B_7;
#line 362 "pickle.m"
    MR_Integer libs__pickle__C_8;
#line 362 "pickle.m"
    MR_Integer libs__pickle__D_9;
#line 362 "pickle.m"
    MR_Integer libs__pickle__V_12_12;
#line 362 "pickle.m"
    MR_Integer libs__pickle__V_15_15;
#line 362 "pickle.m"
    MR_Integer libs__pickle__V_18_18;
#line 362 "pickle.m"
    MR_Integer libs__pickle__V_21_21;

#line 363 "pickle.m"
    {
#line 363 "pickle.m"
      libs__pickle__V_12_12 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_4, (MR_Integer) 24);
    }
#line 363 "pickle.m"
    libs__pickle__A_6 = (libs__pickle__V_12_12 & (MR_Integer) 255);
#line 364 "pickle.m"
    {
#line 364 "pickle.m"
      libs__pickle__V_15_15 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_4, (MR_Integer) 16);
    }
#line 364 "pickle.m"
    libs__pickle__B_7 = (libs__pickle__V_15_15 & (MR_Integer) 255);
#line 365 "pickle.m"
    {
#line 365 "pickle.m"
      libs__pickle__V_18_18 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_4, (MR_Integer) 8);
    }
#line 365 "pickle.m"
    libs__pickle__C_8 = (libs__pickle__V_18_18 & (MR_Integer) 255);
#line 366 "pickle.m"
    {
#line 366 "pickle.m"
      libs__pickle__V_21_21 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_4, (MR_Integer) 0);
    }
#line 366 "pickle.m"
    libs__pickle__D_9 = (libs__pickle__V_21_21 & (MR_Integer) 255);
#line 367 "pickle.m"
    {
#line 367 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__A_6);
    }
#line 368 "pickle.m"
    {
#line 368 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__B_7);
    }
#line 369 "pickle.m"
    {
#line 369 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__C_8);
    }
#line 370 "pickle.m"
    {
#line 370 "pickle.m"
      mercury__io__write_byte_3_p_0(libs__pickle__D_9);
#line 370 "pickle.m"
      return;
    }
#line 362 "pickle.m"
  }
#line 360 "pickle.m"
}

#line 324 "pickle.m"
static void MR_CALL 
libs__pickle__unpickler_inst_cast_2_p_0(
#line 324 "pickle.m"
  MR_Word libs__pickle__A_1,
#line 324 "pickle.m"
  MR_Word * libs__pickle__B_2)
#line 324 "pickle.m"
{
#line 327 "pickle.m"
  {
#line 327 "pickle.m"
    MR_bool libs__pickle__succeeded;

#line 330 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__unpickler_inst_cast_2_p_0

	MR_Word A;
	MR_Word B;

	A =  libs__pickle__A_1 ;
		{
#line 330 "pickle.m"

    B = A;

#line 3096 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__B_2  = B;
#line 330 "pickle.m"
}
#line 327 "pickle.m"
  }
#line 324 "pickle.m"
}

#line 299 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_2_6_p_0_1(
#line 299 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 299 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_1,
#line 299 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_2,
#line 299 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_3,
#line 299 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_4)
#line 299 "pickle.m"
{
#line 299 "pickle.m"
  {
#line 299 "pickle.m"
    MR_Box libs__pickle__closure = libs__pickle__closure_arg;
#line 299 "pickle.m"
    MR_Word libs__pickle__conv5_Univ_10;
#line 299 "pickle.m"
    MR_Integer libs__pickle__conv4_STATE_VARIABLE_State_30;

#line 299 "pickle.m"
    {
#line 299 "pickle.m"
      libs__pickle__unpickle_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 3))), ((MR_Box) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 4))), ((MR_Word) libs__pickle__wrapper_arg_1), &libs__pickle__conv5_Univ_10, ((MR_Integer) libs__pickle__wrapper_arg_3), &libs__pickle__conv4_STATE_VARIABLE_State_30);
    }
#line 299 "pickle.m"
    *libs__pickle__wrapper_arg_2 = ((MR_Box) (libs__pickle__conv5_Univ_10));
#line 299 "pickle.m"
    *libs__pickle__wrapper_arg_4 = ((MR_Box) (libs__pickle__conv4_STATE_VARIABLE_State_30));
#line 299 "pickle.m"
  }
#line 299 "pickle.m"
}

#line 266 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_2_6_p_0(
#line 266 "pickle.m"
  MR_Word libs__pickle__Unpicklers_7,
#line 266 "pickle.m"
  MR_Box libs__pickle__Handle_8,
#line 266 "pickle.m"
  MR_Word libs__pickle__TypeDesc_9,
#line 266 "pickle.m"
  MR_Word * libs__pickle__Univ_10,
#line 266 "pickle.m"
  MR_Integer libs__pickle__STATE_VARIABLE_State_0_29,
#line 266 "pickle.m"
  MR_Integer * libs__pickle__STATE_VARIABLE_State_30)
#line 266 "pickle.m"
{
#line 274 "pickle.m"
  {
#line 274 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 271 "pickle.m"
    MR_Word libs__pickle__V_66_66;
#line 271 "pickle.m"
    MR_String libs__pickle__V_31_31;

#line 271 "pickle.m"
    {
#line 271 "pickle.m"
      libs__pickle__V_66_66 = mercury__type_desc__type_of_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 271 "pickle.m"
    {
#line 271 "pickle.m"
      libs__pickle__succeeded = mercury__type_desc____Unify____type_desc_0_0(libs__pickle__TypeDesc_9, libs__pickle__V_66_66);
    }
#line 274 "pickle.m"
    if (libs__pickle__succeeded)
#line 272 "pickle.m"
      {
#line 272 "pickle.m"
        MR_String libs__pickle__String_13;
#line 272 "pickle.m"
        MR_Integer libs__pickle__Length_79;
#line 272 "pickle.m"
        MR_String libs__pickle__String0_80;
#line 272 "pickle.m"
        MR_Integer libs__pickle__STATE_VARIABLE_State_12_81;

#line 418 "pickle.m"
        {
#line 418 "pickle.m"
          libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_8, &libs__pickle__Length_79, libs__pickle__STATE_VARIABLE_State_0_29, &libs__pickle__STATE_VARIABLE_State_12_81);
        }
#line 439 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__unpickle_2_6_p_0

	MR_Integer Length;
	MR_String Str;

	Length =  libs__pickle__Length_79 ;
		{
#line 439 "pickle.m"

    MR_allocate_aligned_string_msg(Str, Length, MR_ALLOC_ID);
    Str[Length] = '\0';

#line 3214 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 libs__pickle__String0_80  = Str;
#line 439 "pickle.m"
}
#line 420 "pickle.m"
        {
#line 420 "pickle.m"
          libs__pickle__unpickle_string_2_7_p_0(libs__pickle__Handle_8, (MR_Integer) 0, libs__pickle__Length_79, libs__pickle__String0_80, &libs__pickle__String_13, libs__pickle__STATE_VARIABLE_State_12_81, libs__pickle__STATE_VARIABLE_State_30);
        }
#line 273 "pickle.m"
        {
#line 273 "pickle.m"
          *libs__pickle__Univ_10 = mercury__univ__univ_1_f_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (libs__pickle__String_13)));
        }
#line 272 "pickle.m"
      }
#line 274 "pickle.m"
    else
#line 277 "pickle.m"
      {
#line 274 "pickle.m"
        MR_Word libs__pickle__V_67_67;
#line 274 "pickle.m"
        MR_Integer libs__pickle__V_33_33;

#line 274 "pickle.m"
        {
#line 274 "pickle.m"
          libs__pickle__V_67_67 = mercury__type_desc__type_of_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
        }
#line 274 "pickle.m"
        {
#line 274 "pickle.m"
          libs__pickle__succeeded = mercury__type_desc____Unify____type_desc_0_0(libs__pickle__TypeDesc_9, libs__pickle__V_67_67);
        }
#line 277 "pickle.m"
        if (libs__pickle__succeeded)
#line 275 "pickle.m"
          {
#line 275 "pickle.m"
            MR_Integer libs__pickle__Int_15;

#line 275 "pickle.m"
            {
#line 275 "pickle.m"
              libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_8, &libs__pickle__Int_15, libs__pickle__STATE_VARIABLE_State_0_29, libs__pickle__STATE_VARIABLE_State_30);
            }
#line 276 "pickle.m"
            {
#line 276 "pickle.m"
              *libs__pickle__Univ_10 = mercury__univ__univ_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (libs__pickle__Int_15)));
            }
#line 275 "pickle.m"
          }
#line 277 "pickle.m"
        else
#line 280 "pickle.m"
          {
#line 277 "pickle.m"
            MR_Word libs__pickle__V_68_68;
#line 277 "pickle.m"
            MR_Float libs__pickle__V_35_35;

#line 277 "pickle.m"
            {
#line 277 "pickle.m"
              libs__pickle__V_68_68 = mercury__type_desc__type_of_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0);
            }
#line 277 "pickle.m"
            {
#line 277 "pickle.m"
              libs__pickle__succeeded = mercury__type_desc____Unify____type_desc_0_0(libs__pickle__TypeDesc_9, libs__pickle__V_68_68);
            }
#line 280 "pickle.m"
            if (libs__pickle__succeeded)
#line 278 "pickle.m"
              {
#line 278 "pickle.m"
                MR_Float libs__pickle__Float_17;

#line 278 "pickle.m"
                {
#line 278 "pickle.m"
                  libs__pickle__unpickle_float_4_p_0(libs__pickle__Handle_8, &libs__pickle__Float_17, libs__pickle__STATE_VARIABLE_State_0_29, libs__pickle__STATE_VARIABLE_State_30);
                }
#line 279 "pickle.m"
                {
#line 279 "pickle.m"
                  *libs__pickle__Univ_10 = mercury__univ__univ_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, MR_box_float(libs__pickle__Float_17));
                }
#line 278 "pickle.m"
              }
#line 280 "pickle.m"
            else
#line 283 "pickle.m"
              {
#line 280 "pickle.m"
                MR_Word libs__pickle__V_69_69;
#line 280 "pickle.m"
                MR_Char libs__pickle__V_37_37;

#line 280 "pickle.m"
                {
#line 280 "pickle.m"
                  libs__pickle__V_69_69 = mercury__type_desc__type_of_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0);
                }
#line 280 "pickle.m"
                {
#line 280 "pickle.m"
                  libs__pickle__succeeded = mercury__type_desc____Unify____type_desc_0_0(libs__pickle__TypeDesc_9, libs__pickle__V_69_69);
                }
#line 283 "pickle.m"
                if (libs__pickle__succeeded)
#line 281 "pickle.m"
                  {
#line 281 "pickle.m"
                    MR_Char libs__pickle__Char_19;

#line 281 "pickle.m"
                    {
#line 281 "pickle.m"
                      libs__pickle__unpickle_char_4_p_0(libs__pickle__Handle_8, &libs__pickle__Char_19, libs__pickle__STATE_VARIABLE_State_0_29, libs__pickle__STATE_VARIABLE_State_30);
                    }
#line 282 "pickle.m"
                    {
#line 282 "pickle.m"
                      *libs__pickle__Univ_10 = mercury__univ__univ_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, ((MR_Box) (MR_Word) (libs__pickle__Char_19)));
                    }
#line 281 "pickle.m"
                  }
#line 283 "pickle.m"
                else
#line 285 "pickle.m"
                  {
#line 285 "pickle.m"
                    MR_Word libs__pickle__Unpickle_20;
#line 283 "pickle.m"
                    MR_Word libs__pickle__V_39_39;
#line 283 "pickle.m"
                    MR_Word libs__pickle__Unpicklers_90;
#line 283 "pickle.m"
                    MR_Word libs__pickle__Unpickle0_91;
#line 321 "pickle.m"
                    MR_Box libs__pickle__conv0_Unpickle0_91;

#line 283 "pickle.m"
                    {
#line 283 "pickle.m"
                      libs__pickle__V_39_39 = mercury__type_desc__type_ctor_1_f_0(libs__pickle__TypeDesc_9);
                    }
#line 320 "pickle.m"
                    libs__pickle__Unpicklers_90 = (MR_Word) libs__pickle__Unpicklers_7;
#line 321 "pickle.m"
                    {
#line 321 "pickle.m"
                      libs__pickle__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_2[0], libs__pickle__Unpicklers_90, ((MR_Box) (libs__pickle__V_39_39)), &libs__pickle__conv0_Unpickle0_91);
                    }
#line 321 "pickle.m"
                    if (libs__pickle__succeeded)
#line 321 "pickle.m"
                      {
#line 321 "pickle.m"
                        libs__pickle__Unpickle0_91 = ((MR_Word) libs__pickle__conv0_Unpickle0_91);
#line 321 "pickle.m"
                        libs__pickle__succeeded = MR_TRUE;
#line 321 "pickle.m"
                      }
#line 283 "pickle.m"
                    if (libs__pickle__succeeded)
#line 283 "pickle.m"
                      {
#line 330 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__unpickle_2_6_p_0

	MR_Word A;
	MR_Word B;

	A =  libs__pickle__Unpickle0_91 ;
		{
#line 330 "pickle.m"

    B = A;

#line 3401 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 libs__pickle__Unpickle_20  = B;
#line 330 "pickle.m"
}
#line 327 "pickle.m"
                        libs__pickle__succeeded = MR_TRUE;
#line 283 "pickle.m"
                      }
#line 285 "pickle.m"
                    if (libs__pickle__succeeded)
#line 284 "pickle.m"
                      {
#line 284 "pickle.m"
                        void MR_CALL (* libs__pickle__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__pickle__Unpickle_20, (MR_Integer) 1)));
#line 284 "pickle.m"
                        MR_Box libs__pickle__conv3_Univ_10;
#line 284 "pickle.m"
                        MR_Box libs__pickle__conv2_STATE_VARIABLE_State_30;

#line 284 "pickle.m"
                        {
#line 284 "pickle.m"
                          libs__pickle__func_1(((MR_Box) libs__pickle__Unpickle_20), ((MR_Box) (libs__pickle__Unpicklers_7)), ((MR_Box) (libs__pickle__Handle_8)), ((MR_Box) (libs__pickle__TypeDesc_9)), &libs__pickle__conv3_Univ_10, ((MR_Box) (libs__pickle__STATE_VARIABLE_State_0_29)), &libs__pickle__conv2_STATE_VARIABLE_State_30);
                        }
#line 284 "pickle.m"
                        *libs__pickle__Univ_10 = ((MR_Word) libs__pickle__conv3_Univ_10);
#line 284 "pickle.m"
                        *libs__pickle__STATE_VARIABLE_State_30 = ((MR_Integer) libs__pickle__conv2_STATE_VARIABLE_State_30);
#line 284 "pickle.m"
                      }
#line 285 "pickle.m"
                    else
#line 286 "pickle.m"
                      {
#line 286 "pickle.m"
                        MR_String libs__pickle__Functor_21;
#line 286 "pickle.m"
                        MR_Integer libs__pickle__Arity_22;
#line 286 "pickle.m"
                        MR_Integer libs__pickle__STATE_VARIABLE_State_41_41;
#line 286 "pickle.m"
                        MR_Integer libs__pickle__STATE_VARIABLE_State_42_42;
#line 312 "pickle.m"
                        MR_Word libs__pickle__IsTuple_23;
#line 312 "pickle.m"
                        MR_Word libs__pickle__ArgTypes_25;
#line 312 "pickle.m"
                        MR_Integer libs__pickle__N_26;

#line 286 "pickle.m"
                        {
#line 286 "pickle.m"
                          libs__pickle__unpickle_string_4_p_0(libs__pickle__Handle_8, &libs__pickle__Functor_21, libs__pickle__STATE_VARIABLE_State_0_29, &libs__pickle__STATE_VARIABLE_State_41_41);
                        }
#line 287 "pickle.m"
                        {
#line 287 "pickle.m"
                          libs__pickle__unpickle_int32_4_p_0(libs__pickle__Handle_8, &libs__pickle__Arity_22, libs__pickle__STATE_VARIABLE_State_41_41, &libs__pickle__STATE_VARIABLE_State_42_42);
                        }
#line 289 "pickle.m"
                        libs__pickle__succeeded = (strcmp(libs__pickle__Functor_21, (MR_String) "{}") == 0);
#line 293 "pickle.m"
                        if (libs__pickle__succeeded)
#line 290 "pickle.m"
                          {
#line 291 "pickle.m"
                            MR_Word libs__pickle__V_24_24;

#line 290 "pickle.m"
                            libs__pickle__IsTuple_23 = (MR_Integer) 1;
#line 291 "pickle.m"
                            {
#line 291 "pickle.m"
                              mercury__type_desc__type_ctor_and_args_3_p_0(libs__pickle__TypeDesc_9, &libs__pickle__V_24_24, &libs__pickle__ArgTypes_25);
                            }
#line 292 "pickle.m"
                            libs__pickle__N_26 = (MR_Integer) 0;
#line 290 "pickle.m"
                            libs__pickle__succeeded = MR_TRUE;
#line 290 "pickle.m"
                          }
#line 293 "pickle.m"
                        else
#line 294 "pickle.m"
                          {
#line 294 "pickle.m"
                            libs__pickle__IsTuple_23 = (MR_Integer) 0;
#line 296 "pickle.m"
                            {
#line 296 "pickle.m"
                              libs__pickle__succeeded = mercury__construct__find_functor_5_p_0(libs__pickle__TypeDesc_9, libs__pickle__Functor_21, libs__pickle__Arity_22, &libs__pickle__N_26, &libs__pickle__ArgTypes_25);
                            }
#line 294 "pickle.m"
                          }
#line 312 "pickle.m"
                        if (libs__pickle__succeeded)
#line 300 "pickle.m"
                          {
#line 300 "pickle.m"
                            MR_Word libs__pickle__ArgUnivs_27;
#line 300 "pickle.m"
                            MR_Word libs__pickle__V_43_43;
#line 299 "pickle.m"
                            MR_Box libs__pickle__conv6_STATE_VARIABLE_State_30;

#line 299 "pickle.m"
                            {
#line 299 "pickle.m"
                              libs__pickle__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 299 "pickle.m"
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 0) = ((MR_Box) (&libs__pickle_scalar_common_6[0]));
#line 299 "pickle.m"
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 1) = ((MR_Box) (libs__pickle__unpickle_2_6_p_0_1));
#line 299 "pickle.m"
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 299 "pickle.m"
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 3) = ((MR_Box) (libs__pickle__Unpicklers_7));
#line 299 "pickle.m"
                              MR_hl_field(MR_mktag(0), libs__pickle__V_43_43, 4) = ((MR_Box) (libs__pickle__Handle_8));
#line 299 "pickle.m"
                            }
#line 299 "pickle.m"
                            {
#line 299 "pickle.m"
                              mercury__list__map_foldl_5_p_2((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_desc_0, (MR_Word) &mercury__univ__univ__type_ctor_info_univ_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__pickle__V_43_43, libs__pickle__ArgTypes_25, &libs__pickle__ArgUnivs_27, ((MR_Box) (libs__pickle__STATE_VARIABLE_State_42_42)), &libs__pickle__conv6_STATE_VARIABLE_State_30);
                            }
#line 299 "pickle.m"
                            *libs__pickle__STATE_VARIABLE_State_30 = ((MR_Integer) libs__pickle__conv6_STATE_VARIABLE_State_30);
#line 304 "pickle.m"
#line 304 "pickle.m"
                            switch (libs__pickle__IsTuple_23) {
#line 304 "pickle.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 304 "pickle.m"
                              case (MR_Integer) 0:
#line 308 "pickle.m"
                                {
#line 308 "pickle.m"
                                  MR_Word libs__pickle__Univ0_28;

#line 306 "pickle.m"
                                  {
#line 306 "pickle.m"
                                    libs__pickle__succeeded = mercury__construct__construct_3_f_0(libs__pickle__TypeDesc_9, libs__pickle__N_26, libs__pickle__ArgUnivs_27, &libs__pickle__Univ0_28);
                                  }
#line 308 "pickle.m"
                                  if (libs__pickle__succeeded)
#line 307 "pickle.m"
                                    *libs__pickle__Univ_10 = libs__pickle__Univ0_28;
#line 308 "pickle.m"
                                  else
#line 309 "pickle.m"
                                    {
#line 309 "pickle.m"
                                      {
#line 309 "pickle.m"
                                        mercury__require__unexpected_3_p_0((MR_String) "libs.pickle", (MR_String) "predicate \140libs.pickle.unpickle_2\'/6", (MR_String) "unable to construct");
#line 309 "pickle.m"
                                        return;
                                      }
#line 309 "pickle.m"
                                    }
#line 308 "pickle.m"
                                }
#line 304 "pickle.m"
                                break;
#line 304 "pickle.m"
                              case (MR_Integer) 1:
#line 303 "pickle.m"
                                {
#line 303 "pickle.m"
                                  *libs__pickle__Univ_10 = mercury__construct__construct_tuple_1_f_0(libs__pickle__ArgUnivs_27);
                                }
#line 304 "pickle.m"
                                break;
#line 304 "pickle.m"
                            }
#line 300 "pickle.m"
                          }
#line 312 "pickle.m"
                        else
#line 313 "pickle.m"
                          {
#line 313 "pickle.m"
                            {
#line 313 "pickle.m"
                              mercury__require__unexpected_3_p_0((MR_String) "libs.pickle", (MR_String) "predicate \140libs.pickle.unpickle_2\'/6", (MR_String) "unable to unpickle");
#line 313 "pickle.m"
                              return;
                            }
#line 313 "pickle.m"
                          }
#line 286 "pickle.m"
                      }
#line 285 "pickle.m"
                  }
#line 283 "pickle.m"
              }
#line 280 "pickle.m"
          }
#line 277 "pickle.m"
      }
#line 274 "pickle.m"
  }
#line 266 "pickle.m"
}

#line 184 "pickle.m"
static void MR_CALL 
libs__pickle__pickler_inst_cast_2_p_0(
#line 184 "pickle.m"
  MR_Word libs__pickle__A_1,
#line 184 "pickle.m"
  MR_Word * libs__pickle__B_2)
#line 184 "pickle.m"
{
#line 187 "pickle.m"
  {
#line 187 "pickle.m"
    MR_bool libs__pickle__succeeded;

#line 190 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__pickler_inst_cast_2_p_0

	MR_Word A;
	MR_Word B;

	A =  libs__pickle__A_1 ;
		{
#line 190 "pickle.m"

    B = A;

#line 3638 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__B_2  = B;
#line 190 "pickle.m"
}
#line 187 "pickle.m"
  }
#line 184 "pickle.m"
}

#line 177 "pickle.m"
static MR_bool MR_CALL 
libs__pickle__user_defined_pickler_3_p_0(
#line 177 "pickle.m"
  MR_Word libs__pickle__HeadVar__1_1,
#line 177 "pickle.m"
  MR_Word libs__pickle__TypeCtorDesc_5,
#line 177 "pickle.m"
  MR_Word * libs__pickle__Pickle_6)
#line 177 "pickle.m"
{
#line 180 "pickle.m"
  {
#line 180 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 180 "pickle.m"
    MR_Word libs__pickle__Pickles_4 = (MR_Word) libs__pickle__HeadVar__1_1;
#line 180 "pickle.m"
    MR_Word libs__pickle__Pickle0_7;
#line 181 "pickle.m"
    MR_Box libs__pickle__conv0_Pickle0_7;

#line 181 "pickle.m"
    {
#line 181 "pickle.m"
      libs__pickle__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_1[0], libs__pickle__Pickles_4, ((MR_Box) (libs__pickle__TypeCtorDesc_5)), &libs__pickle__conv0_Pickle0_7);
    }
#line 181 "pickle.m"
    if (libs__pickle__succeeded)
#line 181 "pickle.m"
      {
#line 181 "pickle.m"
        libs__pickle__Pickle0_7 = ((MR_Word) libs__pickle__conv0_Pickle0_7);
#line 181 "pickle.m"
        libs__pickle__succeeded = MR_TRUE;
#line 181 "pickle.m"
      }
#line 180 "pickle.m"
    if (libs__pickle__succeeded)
#line 180 "pickle.m"
      {
#line 190 "pickle.m"
{
#define MR_PROC_LABEL libs__pickle__user_defined_pickler_3_p_0

	MR_Word A;
	MR_Word B;

	A =  libs__pickle__Pickle0_7 ;
		{
#line 190 "pickle.m"

    B = A;

#line 3704 "libs.pickle.c"

		;}
#undef MR_PROC_LABEL
	 *libs__pickle__Pickle_6  = B;
#line 190 "pickle.m"
}
#line 187 "pickle.m"
        libs__pickle__succeeded = MR_TRUE;
#line 180 "pickle.m"
      }
#line 180 "pickle.m"
    return libs__pickle__succeeded;
#line 180 "pickle.m"
  }
#line 177 "pickle.m"
}

#line 162 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_args_6_p_0(
#line 162 "pickle.m"
  MR_Word libs__pickle__TypeInfo_for_T_23,
#line 162 "pickle.m"
  MR_Word libs__pickle__Pickles_7,
#line 162 "pickle.m"
  MR_Integer libs__pickle__N_8,
#line 162 "pickle.m"
  MR_Integer libs__pickle__Arity_9,
#line 162 "pickle.m"
  MR_Box libs__pickle__T_10)
#line 162 "pickle.m"
{
#line 168 "pickle.m"
  while (MR_TRUE)
#line 168 "pickle.m"
    {
#line 168 "pickle.m"
      /* tailcall optimized into a loop */
#line 168 "pickle.m"
      {
#line 168 "pickle.m"
        MR_bool libs__pickle__succeeded = (libs__pickle__N_8 == libs__pickle__Arity_9);

#line 168 "pickle.m"
        if (libs__pickle__succeeded)
#line 168 "pickle.m"
          {
#line 168 "pickle.m"
          }
#line 168 "pickle.m"
        else
#line 172 "pickle.m"
          {
#line 172 "pickle.m"
            MR_Word libs__pickle__TypeInfo_24_24;
#line 172 "pickle.m"
            MR_Box libs__pickle__Arg_12;

#line 169 "pickle.m"
            {
#line 169 "pickle.m"
              libs__pickle__succeeded = mercury__deconstruct__arg_4_p_0(libs__pickle__TypeInfo_for_T_23, &libs__pickle__TypeInfo_24_24, libs__pickle__T_10, (MR_Integer) 0, libs__pickle__N_8, &libs__pickle__Arg_12);
            }
#line 172 "pickle.m"
            if (libs__pickle__succeeded)
#line 170 "pickle.m"
              {
#line 170 "pickle.m"
                MR_Integer libs__pickle__V_17_17;

#line 170 "pickle.m"
                {
#line 170 "pickle.m"
                  libs__pickle__pickle_4_p_0(libs__pickle__TypeInfo_24_24, libs__pickle__Pickles_7, libs__pickle__Arg_12);
                }
#line 171 "pickle.m"
                libs__pickle__V_17_17 = (libs__pickle__N_8 + (MR_Integer) 1);
#line 171 "pickle.m"
                /* direct tailcall eliminated */
#line 171 "pickle.m"
                {
#line 171 "pickle.m"
                  MR_Integer libs__pickle__N__tmp_copy_8 = libs__pickle__V_17_17;

#line 171 "pickle.m"
                  libs__pickle__N_8 = libs__pickle__N__tmp_copy_8;
#line 171 "pickle.m"
                }
#line 171 "pickle.m"
                continue;
#line 170 "pickle.m"
              }
#line 172 "pickle.m"
            else
#line 173 "pickle.m"
              {
#line 173 "pickle.m"
                {
#line 173 "pickle.m"
                  mercury__require__unexpected_3_p_0((MR_String) "libs.pickle", (MR_String) "predicate \140libs.pickle.pickle_args\'/6", (MR_String) "unable to deconstruct arg");
#line 173 "pickle.m"
                  return;
                }
#line 173 "pickle.m"
              }
#line 172 "pickle.m"
          }
#line 168 "pickle.m"
      }
#line 168 "pickle.m"
      break;
#line 168 "pickle.m"
    }
#line 162 "pickle.m"
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
#line 262 "pickle.m"
  {
#line 262 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 262 "pickle.m"
    MR_Word libs__pickle__Univ_10;
#line 262 "pickle.m"
    MR_Word libs__pickle__V_13_13;

#line 263 "pickle.m"
    {
#line 263 "pickle.m"
      libs__pickle__V_13_13 = mercury__type_desc__type_of_1_f_0(libs__pickle__TypeInfo_for_T_15);
    }
#line 263 "pickle.m"
    {
#line 263 "pickle.m"
      libs__pickle__unpickle_2_6_p_0(libs__pickle__Unpicklers_6, libs__pickle__Handle_7, libs__pickle__V_13_13, &libs__pickle__Univ_10, libs__pickle__STATE_VARIABLE_State_0_11, libs__pickle__STATE_VARIABLE_State_12);
    }
#line 264 "pickle.m"
    {
#line 264 "pickle.m"
      mercury__univ__det_univ_to_type_2_p_0(libs__pickle__TypeInfo_for_T_15, libs__pickle__Univ_10, libs__pickle__T_8);
#line 264 "pickle.m"
      return;
    }
#line 262 "pickle.m"
  }
#line 89 "pickle.m"
}

#line 238 "pickle.m"
static void MR_CALL 
libs__pickle__unpickle_from_file_5_p_0_1(
#line 238 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 238 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_1)
#line 238 "pickle.m"
{
#line 238 "pickle.m"
  {
#line 238 "pickle.m"
    MR_Box libs__pickle__closure = libs__pickle__closure_arg;

#line 238 "pickle.m"
    {
#line 238 "pickle.m"
      libs__pickle__IntroducedFrom__pred__unpickle_from_file__238__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 4))), ((MR_Box) (MR_hl_field(MR_mktag(0), libs__pickle__closure, (MR_Integer) 5))), libs__pickle__wrapper_arg_1);
#line 238 "pickle.m"
      return;
    }
#line 238 "pickle.m"
  }
#line 238 "pickle.m"
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
#line 227 "pickle.m"
  {
#line 227 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 227 "pickle.m"
    MR_Word libs__pickle__SeeResult_10;

#line 228 "pickle.m"
    {
#line 228 "pickle.m"
      mercury__io__see_binary_4_p_0(libs__pickle__FileName_7, &libs__pickle__SeeResult_10);
    }
#line 257 "pickle.m"
    if ((libs__pickle__SeeResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "pickle.m"
      {
#line 230 "pickle.m"
        MR_Word libs__pickle__ReadResult_11;

#line 233 "pickle.m"
        {
#line 233 "pickle.m"
          mercury__io__read_binary_file_as_bitmap_3_p_0(&libs__pickle__ReadResult_11);
        }
#line 234 "pickle.m"
        {
#line 234 "pickle.m"
          mercury__io__seen_binary_2_p_0();
        }
#line 253 "pickle.m"
        if (((MR_tag((MR_Word) libs__pickle__ReadResult_11)) == (MR_mktag((MR_Integer) 1))))
#line 255 "pickle.m"
          *libs__pickle__Result_8 = libs__pickle__ReadResult_11;
#line 253 "pickle.m"
        else
#line 236 "pickle.m"
          {
#line 236 "pickle.m"
            MR_Box libs__pickle__Bitmap_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), libs__pickle__ReadResult_11, (MR_Integer) 0)));
#line 236 "pickle.m"
            MR_Word libs__pickle__TryResult_13;
#line 238 "pickle.m"
            MR_Word libs__pickle__V_25_25;

#line 238 "pickle.m"
            {
#line 238 "pickle.m"
              libs__pickle__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 238 "pickle.m"
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 0) = ((MR_Box) (&libs__pickle_scalar_common_5[0]));
#line 238 "pickle.m"
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 1) = ((MR_Box) (libs__pickle__unpickle_from_file_5_p_0_1));
#line 238 "pickle.m"
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 238 "pickle.m"
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 3) = ((MR_Box) (libs__pickle__TypeInfo_for_T_32));
#line 238 "pickle.m"
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 4) = ((MR_Box) (libs__pickle__Unpicklers_6));
#line 238 "pickle.m"
              MR_hl_field(MR_mktag(0), libs__pickle__V_25_25, 5) = ((MR_Box) (libs__pickle__Bitmap_12));
#line 238 "pickle.m"
            }
#line 238 "pickle.m"
            {
#line 238 "pickle.m"
              mercury__exception__try_2_p_0(libs__pickle__TypeInfo_for_T_32, libs__pickle__V_25_25, &libs__pickle__TryResult_13);
            }
#line 245 "pickle.m"
            if (((MR_tag((MR_Word) libs__pickle__TryResult_13)) == (MR_mktag((MR_Integer) 2))))
#line 246 "pickle.m"
              {
#line 246 "pickle.m"
                MR_Word libs__pickle__Excp_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__pickle__TryResult_13, (MR_Integer) 0)));
#line 249 "pickle.m"
                MR_String libs__pickle__Msg_18;
#line 247 "pickle.m"
                MR_Word libs__pickle__V_28_28;
#line 247 "pickle.m"
                MR_Box libs__pickle__conv0_V_28_28;

#line 247 "pickle.m"
                {
#line 247 "pickle.m"
                  libs__pickle__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &libs__pickle__libs__pickle__type_ctor_info_get_byte_out_of_range_0, libs__pickle__Excp_17, &libs__pickle__conv0_V_28_28);
                }
#line 247 "pickle.m"
                if (libs__pickle__succeeded)
#line 247 "pickle.m"
                  {
#line 247 "pickle.m"
                    libs__pickle__V_28_28 = ((MR_Word) libs__pickle__conv0_V_28_28);
#line 247 "pickle.m"
                    libs__pickle__succeeded = MR_TRUE;
#line 247 "pickle.m"
                  }
#line 247 "pickle.m"
                if (libs__pickle__succeeded)
#line 247 "pickle.m"
                  {
#line 247 "pickle.m"
                    libs__pickle__Msg_18 = (MR_String) libs__pickle__V_28_28;
#line 247 "pickle.m"
                    libs__pickle__succeeded = MR_TRUE;
#line 247 "pickle.m"
                  }
#line 249 "pickle.m"
                if (libs__pickle__succeeded)
#line 248 "pickle.m"
                  {
#line 248 "pickle.m"
                    MR_Word libs__pickle__V_29_29;

#line 248 "pickle.m"
                    {
#line 248 "pickle.m"
                      libs__pickle__V_29_29 = mercury__io__make_io_error_1_f_0(libs__pickle__Msg_18);
                    }
#line 248 "pickle.m"
                    {
#line 248 "pickle.m"
                      MR_Word base;
#line 248 "pickle.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 248 "pickle.m"
                      *libs__pickle__Result_8 = base;
#line 248 "pickle.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__pickle__V_29_29));
#line 248 "pickle.m"
                    }
#line 248 "pickle.m"
                  }
#line 249 "pickle.m"
                else
#line 250 "pickle.m"
                  {
#line 250 "pickle.m"
                    mercury__exception__rethrow_1_p_0(libs__pickle__TypeInfo_for_T_32, libs__pickle__TryResult_13);
#line 250 "pickle.m"
                    return;
                  }
#line 246 "pickle.m"
              }
#line 245 "pickle.m"
            else
#line 243 "pickle.m"
              {
#line 243 "pickle.m"
                MR_Box libs__pickle__T_16 = (MR_hl_field(MR_mktag(1), libs__pickle__TryResult_13, (MR_Integer) 0));

#line 244 "pickle.m"
                {
#line 244 "pickle.m"
                  MR_Word base;
#line 244 "pickle.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 244 "pickle.m"
                  *libs__pickle__Result_8 = base;
#line 244 "pickle.m"
                  MR_hl_field(MR_mktag(0), base, 0) = libs__pickle__T_16;
#line 244 "pickle.m"
                }
#line 243 "pickle.m"
              }
#line 236 "pickle.m"
          }
#line 230 "pickle.m"
      }
#line 257 "pickle.m"
    else
#line 258 "pickle.m"
      {
#line 258 "pickle.m"
        MR_Word libs__pickle__Error_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__pickle__SeeResult_10, (MR_Integer) 0)));

#line 259 "pickle.m"
        {
#line 259 "pickle.m"
          MR_Word base;
#line 259 "pickle.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 259 "pickle.m"
          *libs__pickle__Result_8 = base;
#line 259 "pickle.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__pickle__Error_31));
#line 259 "pickle.m"
        }
#line 258 "pickle.m"
      }
#line 227 "pickle.m"
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
#line 222 "pickle.m"
  {
#line 222 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 222 "pickle.m"
    MR_Word libs__pickle__Map0_9 = (MR_Word) libs__pickle__Unpicklers0_7;
#line 222 "pickle.m"
    MR_Word libs__pickle__Map_10;

#line 224 "pickle.m"
    {
#line 224 "pickle.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_2[0], ((MR_Box) (libs__pickle__TypeCtorDesc_5)), ((MR_Box) (libs__pickle__Unpickle_6)), libs__pickle__Map0_9, &libs__pickle__Map_10);
    }
#line 225 "pickle.m"
    *libs__pickle__Unpicklers_8 = (MR_Word) libs__pickle__Map_10;
#line 222 "pickle.m"
  }
#line 77 "pickle.m"
}

#line 72 "pickle.m"
MR_Word MR_CALL 
libs__pickle__init_unpicklers_0_f_0(void)
#line 72 "pickle.m"
{
#line 220 "pickle.m"
  {
#line 220 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 220 "pickle.m"
    MR_Word libs__pickle__HeadVar__1_1;
#line 220 "pickle.m"
    MR_Word libs__pickle__V_2_2;

#line 220 "pickle.m"
    {
#line 220 "pickle.m"
      libs__pickle__V_2_2 = mercury__map__init_0_f_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_2[0]);
    }
#line 220 "pickle.m"
    libs__pickle__HeadVar__1_1 = (MR_Word) libs__pickle__V_2_2;
#line 220 "pickle.m"
    return libs__pickle__HeadVar__1_1;
#line 220 "pickle.m"
  }
#line 72 "pickle.m"
}

#line 412 "pickle.m"
static void MR_CALL 
libs__pickle__pickle_4_p_0_1(
#line 412 "pickle.m"
  MR_Box libs__pickle__closure_arg,
#line 412 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_1,
#line 412 "pickle.m"
  MR_Box libs__pickle__wrapper_arg_2,
#line 412 "pickle.m"
  MR_Box * libs__pickle__wrapper_arg_3)
#line 412 "pickle.m"
{
#line 412 "pickle.m"
  {
#line 412 "pickle.m"
    MR_Box libs__pickle__closure = libs__pickle__closure_arg;

#line 412 "pickle.m"
    {
#line 412 "pickle.m"
      libs__pickle__pickle_char_3_p_0(((MR_Char) (MR_Word) libs__pickle__wrapper_arg_1));
#line 412 "pickle.m"
      return;
    }
#line 412 "pickle.m"
  }
#line 412 "pickle.m"
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
#line 143 "pickle.m"
  {
#line 143 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 143 "pickle.m"
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
#line 143 "pickle.m"
    if (libs__pickle__succeeded)
#line 409 "pickle.m"
      {
#line 409 "pickle.m"
        MR_Integer libs__pickle__Length_40;
#line 409 "pickle.m"
        MR_Integer libs__pickle__A_52;
#line 409 "pickle.m"
        MR_Integer libs__pickle__B_53;
#line 409 "pickle.m"
        MR_Integer libs__pickle__C_54;
#line 409 "pickle.m"
        MR_Integer libs__pickle__D_55;
#line 409 "pickle.m"
        MR_Integer libs__pickle__V_56_56;
#line 409 "pickle.m"
        MR_Integer libs__pickle__V_59_59;
#line 409 "pickle.m"
        MR_Integer libs__pickle__V_62_62;
#line 409 "pickle.m"
        MR_Integer libs__pickle__V_65_65;
#line 412 "pickle.m"
        MR_Box libs__pickle__conv1_STATE_VARIABLE_IO_18;

#line 410 "pickle.m"
        {
#line 410 "pickle.m"
          libs__pickle__Length_40 = mercury__string__length_1_f_0(libs__pickle__String_8);
        }
#line 363 "pickle.m"
        {
#line 363 "pickle.m"
          libs__pickle__V_56_56 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_40, (MR_Integer) 24);
        }
#line 363 "pickle.m"
        libs__pickle__A_52 = (libs__pickle__V_56_56 & (MR_Integer) 255);
#line 364 "pickle.m"
        {
#line 364 "pickle.m"
          libs__pickle__V_59_59 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_40, (MR_Integer) 16);
        }
#line 364 "pickle.m"
        libs__pickle__B_53 = (libs__pickle__V_59_59 & (MR_Integer) 255);
#line 365 "pickle.m"
        {
#line 365 "pickle.m"
          libs__pickle__V_62_62 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_40, (MR_Integer) 8);
        }
#line 365 "pickle.m"
        libs__pickle__C_54 = (libs__pickle__V_62_62 & (MR_Integer) 255);
#line 366 "pickle.m"
        {
#line 366 "pickle.m"
          libs__pickle__V_65_65 = mercury__int__f_62_62_2_f_0(libs__pickle__Length_40, (MR_Integer) 0);
        }
#line 366 "pickle.m"
        libs__pickle__D_55 = (libs__pickle__V_65_65 & (MR_Integer) 255);
#line 367 "pickle.m"
        {
#line 367 "pickle.m"
          mercury__io__write_byte_3_p_0(libs__pickle__A_52);
        }
#line 368 "pickle.m"
        {
#line 368 "pickle.m"
          mercury__io__write_byte_3_p_0(libs__pickle__B_53);
        }
#line 369 "pickle.m"
        {
#line 369 "pickle.m"
          mercury__io__write_byte_3_p_0(libs__pickle__C_54);
        }
#line 370 "pickle.m"
        {
#line 370 "pickle.m"
          mercury__io__write_byte_3_p_0(libs__pickle__D_55);
        }
#line 412 "pickle.m"
        {
#line 412 "pickle.m"
          mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &libs__pickle_scalar_common_3[2], libs__pickle__String_8, ((MR_Box) ((MR_Integer) 0)), &libs__pickle__conv1_STATE_VARIABLE_IO_18);
        }
#line 409 "pickle.m"
      }
#line 143 "pickle.m"
    else
#line 145 "pickle.m"
      {
#line 145 "pickle.m"
        MR_Integer libs__pickle__Int_9;
#line 143 "pickle.m"
        MR_Box libs__pickle__conv2_Int_9;

#line 143 "pickle.m"
        {
#line 143 "pickle.m"
          libs__pickle__succeeded = mercury__builtin__dynamic_cast_2_p_0(libs__pickle__TypeInfo_for_T_30, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__pickle__T_6, &libs__pickle__conv2_Int_9);
        }
#line 143 "pickle.m"
        if (libs__pickle__succeeded)
#line 143 "pickle.m"
          {
#line 143 "pickle.m"
            libs__pickle__Int_9 = ((MR_Integer) libs__pickle__conv2_Int_9);
#line 143 "pickle.m"
            libs__pickle__succeeded = MR_TRUE;
#line 143 "pickle.m"
          }
#line 145 "pickle.m"
        if (libs__pickle__succeeded)
#line 362 "pickle.m"
          {
#line 362 "pickle.m"
            MR_Integer libs__pickle__A_76;
#line 362 "pickle.m"
            MR_Integer libs__pickle__B_77;
#line 362 "pickle.m"
            MR_Integer libs__pickle__C_78;
#line 362 "pickle.m"
            MR_Integer libs__pickle__D_79;
#line 362 "pickle.m"
            MR_Integer libs__pickle__V_80_80;
#line 362 "pickle.m"
            MR_Integer libs__pickle__V_83_83;
#line 362 "pickle.m"
            MR_Integer libs__pickle__V_86_86;
#line 362 "pickle.m"
            MR_Integer libs__pickle__V_89_89;

#line 363 "pickle.m"
            {
#line 363 "pickle.m"
              libs__pickle__V_80_80 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_9, (MR_Integer) 24);
            }
#line 363 "pickle.m"
            libs__pickle__A_76 = (libs__pickle__V_80_80 & (MR_Integer) 255);
#line 364 "pickle.m"
            {
#line 364 "pickle.m"
              libs__pickle__V_83_83 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_9, (MR_Integer) 16);
            }
#line 364 "pickle.m"
            libs__pickle__B_77 = (libs__pickle__V_83_83 & (MR_Integer) 255);
#line 365 "pickle.m"
            {
#line 365 "pickle.m"
              libs__pickle__V_86_86 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_9, (MR_Integer) 8);
            }
#line 365 "pickle.m"
            libs__pickle__C_78 = (libs__pickle__V_86_86 & (MR_Integer) 255);
#line 366 "pickle.m"
            {
#line 366 "pickle.m"
              libs__pickle__V_89_89 = mercury__int__f_62_62_2_f_0(libs__pickle__Int_9, (MR_Integer) 0);
            }
#line 366 "pickle.m"
            libs__pickle__D_79 = (libs__pickle__V_89_89 & (MR_Integer) 255);
#line 367 "pickle.m"
            {
#line 367 "pickle.m"
              mercury__io__write_byte_3_p_0(libs__pickle__A_76);
            }
#line 368 "pickle.m"
            {
#line 368 "pickle.m"
              mercury__io__write_byte_3_p_0(libs__pickle__B_77);
            }
#line 369 "pickle.m"
            {
#line 369 "pickle.m"
              mercury__io__write_byte_3_p_0(libs__pickle__C_78);
            }
#line 370 "pickle.m"
            {
#line 370 "pickle.m"
              mercury__io__write_byte_3_p_0(libs__pickle__D_79);
#line 370 "pickle.m"
              return;
            }
#line 362 "pickle.m"
          }
#line 145 "pickle.m"
        else
#line 147 "pickle.m"
          {
#line 147 "pickle.m"
            MR_Float libs__pickle__Float_10;
#line 145 "pickle.m"
            MR_Box libs__pickle__conv3_Float_10;

#line 145 "pickle.m"
            {
#line 145 "pickle.m"
              libs__pickle__succeeded = mercury__builtin__dynamic_cast_2_p_0(libs__pickle__TypeInfo_for_T_30, (MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, libs__pickle__T_6, &libs__pickle__conv3_Float_10);
            }
#line 145 "pickle.m"
            if (libs__pickle__succeeded)
#line 145 "pickle.m"
              {
#line 145 "pickle.m"
                libs__pickle__Float_10 = MR_unbox_float(libs__pickle__conv3_Float_10);
#line 145 "pickle.m"
                libs__pickle__succeeded = MR_TRUE;
#line 145 "pickle.m"
              }
#line 147 "pickle.m"
            if (libs__pickle__succeeded)
#line 146 "pickle.m"
              {
#line 146 "pickle.m"
                libs__pickle__pickle_float_3_p_0(libs__pickle__Float_10);
#line 146 "pickle.m"
                return;
              }
#line 147 "pickle.m"
            else
#line 149 "pickle.m"
              {
#line 149 "pickle.m"
                MR_Char libs__pickle__Char_11;
#line 147 "pickle.m"
                MR_Box libs__pickle__conv4_Char_11;

#line 147 "pickle.m"
                {
#line 147 "pickle.m"
                  libs__pickle__succeeded = mercury__builtin__dynamic_cast_2_p_0(libs__pickle__TypeInfo_for_T_30, (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, libs__pickle__T_6, &libs__pickle__conv4_Char_11);
                }
#line 147 "pickle.m"
                if (libs__pickle__succeeded)
#line 147 "pickle.m"
                  {
#line 147 "pickle.m"
                    libs__pickle__Char_11 = ((MR_Char) (MR_Word) libs__pickle__conv4_Char_11);
#line 147 "pickle.m"
                    libs__pickle__succeeded = MR_TRUE;
#line 147 "pickle.m"
                  }
#line 149 "pickle.m"
                if (libs__pickle__succeeded)
#line 148 "pickle.m"
                  {
#line 148 "pickle.m"
                    libs__pickle__pickle_char_3_p_0(libs__pickle__Char_11);
#line 148 "pickle.m"
                    return;
                  }
#line 149 "pickle.m"
                else
#line 155 "pickle.m"
                  {
#line 155 "pickle.m"
                    MR_Word libs__pickle__Pickle_14;
#line 150 "pickle.m"
                    MR_Word libs__pickle__TypeDesc_12;
#line 150 "pickle.m"
                    MR_Word libs__pickle__TypeCtorDesc_13;
#line 150 "pickle.m"
                    MR_Box libs__pickle__V_35_35;

#line 150 "pickle.m"
                    {
#line 150 "pickle.m"
                      libs__pickle__TypeDesc_12 = mercury__type_desc__type_of_1_f_0(libs__pickle__TypeInfo_for_T_30);
                    }
#line 151 "pickle.m"
                    {
#line 151 "pickle.m"
                      libs__pickle__TypeCtorDesc_13 = mercury__type_desc__type_ctor_1_f_0(libs__pickle__TypeDesc_12);
                    }
#line 152 "pickle.m"
                    {
#line 152 "pickle.m"
                      libs__pickle__succeeded = libs__pickle__user_defined_pickler_3_p_0(libs__pickle__Pickles_5, libs__pickle__TypeCtorDesc_13, &libs__pickle__Pickle_14);
                    }
#line 155 "pickle.m"
                    if (libs__pickle__succeeded)
#line 154 "pickle.m"
                      {
#line 154 "pickle.m"
                        MR_Word libs__pickle__V_23_23;
#line 154 "pickle.m"
                        void MR_CALL (* libs__pickle__func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 154 "pickle.m"
                        MR_Box libs__pickle__conv6_STATE_VARIABLE_IO_18;

#line 154 "pickle.m"
                        {
#line 154 "pickle.m"
                          libs__pickle__V_23_23 = mercury__univ__univ_1_f_0(libs__pickle__TypeInfo_for_T_30, libs__pickle__T_6);
                        }
#line 154 "pickle.m"
                        libs__pickle__func_5 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__pickle__Pickle_14, (MR_Integer) 1)));
#line 154 "pickle.m"
                        {
#line 154 "pickle.m"
                          libs__pickle__func_5(((MR_Box) libs__pickle__Pickle_14), ((MR_Box) (libs__pickle__Pickles_5)), ((MR_Box) (libs__pickle__V_23_23)), ((MR_Box) ((MR_Integer) 0)), &libs__pickle__conv6_STATE_VARIABLE_IO_18);
                        }
#line 154 "pickle.m"
                      }
#line 155 "pickle.m"
                    else
#line 156 "pickle.m"
                      {
#line 156 "pickle.m"
                        MR_String libs__pickle__Functor_15;
#line 156 "pickle.m"
                        MR_Integer libs__pickle__Arity_16;

#line 156 "pickle.m"
                        {
#line 156 "pickle.m"
                          mercury__deconstruct__functor_4_p_0(libs__pickle__TypeInfo_for_T_30, libs__pickle__T_6, (MR_Integer) 0, &libs__pickle__Functor_15, &libs__pickle__Arity_16);
                        }
#line 157 "pickle.m"
                        {
#line 157 "pickle.m"
                          libs__pickle__pickle_string_3_p_0(libs__pickle__Functor_15);
                        }
#line 158 "pickle.m"
                        {
#line 158 "pickle.m"
                          libs__pickle__pickle_int32_3_p_0(libs__pickle__Arity_16);
                        }
#line 159 "pickle.m"
                        {
#line 159 "pickle.m"
                          libs__pickle__pickle_args_6_p_0(libs__pickle__TypeInfo_for_T_30, libs__pickle__Pickles_5, (MR_Integer) 0, libs__pickle__Arity_16, libs__pickle__T_6);
#line 159 "pickle.m"
                          return;
                        }
#line 156 "pickle.m"
                      }
#line 155 "pickle.m"
                  }
#line 149 "pickle.m"
              }
#line 147 "pickle.m"
          }
#line 145 "pickle.m"
      }
#line 143 "pickle.m"
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
#line 135 "pickle.m"
  {
#line 135 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 135 "pickle.m"
    MR_Word libs__pickle__Map0_9 = (MR_Word) libs__pickle__Pickles0_7;
#line 135 "pickle.m"
    MR_Word libs__pickle__Map_10;

#line 137 "pickle.m"
    {
#line 137 "pickle.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_1[0], ((MR_Box) (libs__pickle__TypeCtorDesc_5)), ((MR_Box) (libs__pickle__Pickle_6)), libs__pickle__Map0_9, &libs__pickle__Map_10);
    }
#line 138 "pickle.m"
    *libs__pickle__Pickles_8 = (MR_Word) libs__pickle__Map_10;
#line 135 "pickle.m"
  }
#line 45 "pickle.m"
}

#line 40 "pickle.m"
MR_Word MR_CALL 
libs__pickle__init_picklers_0_f_0(void)
#line 40 "pickle.m"
{
#line 133 "pickle.m"
  {
#line 133 "pickle.m"
    MR_bool libs__pickle__succeeded;
#line 133 "pickle.m"
    MR_Word libs__pickle__HeadVar__1_1;
#line 133 "pickle.m"
    MR_Word libs__pickle__V_2_2;

#line 133 "pickle.m"
    {
#line 133 "pickle.m"
      libs__pickle__V_2_2 = mercury__map__init_0_f_0((MR_Word) &mercury__type_desc__type_desc__type_ctor_info_type_ctor_desc_0, (MR_Word) &libs__pickle_scalar_common_1[0]);
    }
#line 133 "pickle.m"
    libs__pickle__HeadVar__1_1 = (MR_Word) libs__pickle__V_2_2;
#line 133 "pickle.m"
    return libs__pickle__HeadVar__1_1;
#line 133 "pickle.m"
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
