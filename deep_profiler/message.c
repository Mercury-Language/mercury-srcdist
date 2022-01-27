/*
** Automatically generated from `message.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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


/* :- module message. */
/* :- implementation. */

/*
INIT mercury__message__init
REQUIRED_INIT mercury__message__required_init
ENDINIT
*/

#include "message.mih"
#include "message.mh"


#include "exclude.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
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
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 88 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_0_0[2];

#line 91 "message.c"
static const MR_ConstString message__message__field_names_message_0_0[2];

#line 94 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_0_0;

#line 97 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_0_0[1];

#line 100 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_0[1];

#line 103 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_0[1];

#line 106 "message.c"
static const MR_Integer message__message__functor_number_map_message_0[1];

#line 109 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_0;

#line 112 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_1;

#line 115 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_2;

#line 118 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_3;

#line 121 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_value_ordered_message_level_0[4];

#line 124 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_name_ordered_message_level_0[4];

#line 127 "message.c"
static const MR_Integer message__message__functor_number_map_message_level_0[4];

#line 130 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_0;

#line 133 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_1[1];

#line 136 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_1;

#line 139 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_2;

#line 142 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_3[1];

#line 145 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_3;

#line 148 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_4[1];

#line 151 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_4;

#line 154 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_5[1];

#line 157 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_5;

#line 160 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_6;

#line 163 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_7[2];

#line 166 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_7;

#line 169 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_8[1];

#line 172 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_8;

#line 175 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_9;

#line 178 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_10[1];

#line 181 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_10;

#line 184 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_11[1];

#line 187 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_11;

#line 190 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_12[1];

#line 193 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_12;

#line 196 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_13;

#line 199 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_14;

#line 202 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_15[1];

#line 205 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_15;

#line 208 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_0[6];

#line 211 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_1[1];

#line 214 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_2[1];

#line 217 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_3[8];

#line 220 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_type_0[4];

#line 223 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_type_0[16];

#line 226 "message.c"
static const MR_Integer message__message__functor_number_map_message_type_0[16];

#line 229 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_0[1];

#line 232 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_0;

#line 235 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_1[2];

#line 238 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_1;

#line 241 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_2[1];

#line 244 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_2;

#line 247 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_3[1];

#line 250 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_3;

#line 253 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_0[1];

#line 256 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_1[1];

#line 259 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_2[1];

#line 262 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_3[1];

#line 265 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_program_location_0[4];

#line 268 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_program_location_0[4];

#line 271 "message.c"
static const MR_Integer message__message__functor_number_map_program_location_0[4];

#line 274 "message.c"
static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
#line 277 "message.c"
  MR_Box message__wrapper_arg_1,
#line 279 "message.c"
  MR_Box message__wrapper_arg_2);

#line 282 "message.c"
static void MR_CALL 
message____Compare____message_0_0_10001(
#line 285 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 287 "message.c"
  MR_Box message__wrapper_arg_2,
#line 289 "message.c"
  MR_Box message__wrapper_arg_3);

#line 292 "message.c"
static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
#line 295 "message.c"
  MR_Box message__wrapper_arg_1,
#line 297 "message.c"
  MR_Box message__wrapper_arg_2);

#line 300 "message.c"
static void MR_CALL 
message____Compare____message_level_0_0_10001(
#line 303 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 305 "message.c"
  MR_Box message__wrapper_arg_2,
#line 307 "message.c"
  MR_Box message__wrapper_arg_3);

#line 310 "message.c"
static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
#line 313 "message.c"
  MR_Box message__wrapper_arg_1,
#line 315 "message.c"
  MR_Box message__wrapper_arg_2);

#line 318 "message.c"
static void MR_CALL 
message____Compare____message_type_0_0_10001(
#line 321 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 323 "message.c"
  MR_Box message__wrapper_arg_2,
#line 325 "message.c"
  MR_Box message__wrapper_arg_3);

#line 328 "message.c"
static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
#line 331 "message.c"
  MR_Box message__wrapper_arg_1,
#line 333 "message.c"
  MR_Box message__wrapper_arg_2);

#line 336 "message.c"
static void MR_CALL 
message____Compare____program_location_0_0_10001(
#line 339 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 341 "message.c"
  MR_Box message__wrapper_arg_2,
#line 343 "message.c"
  MR_Box message__wrapper_arg_3);

#line 407 "message.m"
static void MR_CALL 
message__write_out_message_4_p_0(
#line 407 "message.m"
  MR_Word message__Stream_5,
#line 407 "message.m"
  MR_Word message__Message_6);

#line 401 "message.m"
static void MR_CALL 
message__unsafe_set_verbosity_level_mut_1_p_0(
#line 401 "message.m"
  MR_Integer message__X_1);

#line 401 "message.m"
static void MR_CALL 
message__unsafe_get_verbosity_level_mut_1_p_0(
#line 401 "message.m"
  MR_Integer * message__X_1);

#line 401 "message.m"
static void MR_CALL 
message__unlock_verbosity_level_mut_0_p_0(void);

#line 401 "message.m"
static void MR_CALL 
message__lock_verbosity_level_mut_0_p_0(void);

#line 401 "message.m"
static void MR_CALL 
message__initialise_mutable_verbosity_level_mut_0_p_0(void);

#line 401 "message.m"
static void MR_CALL 
message__pre_initialise_mutable_verbosity_level_mut_0_p_0(void);

#line 306 "message.m"
static MR_Word MR_CALL 
message__message_type_to_string_1_f_0(
#line 306 "message.m"
  MR_Word message__MessageType_3);

#line 405 "message.m"
static void MR_CALL 
message__write_out_messages_4_p_0_1(
#line 405 "message.m"
  MR_Box message__closure_arg,
#line 405 "message.m"
  MR_Box message__wrapper_arg_1,
#line 405 "message.m"
  MR_Box message__wrapper_arg_2,
#line 405 "message.m"
  MR_Box * message__wrapper_arg_3);


static /* final */ const MR_Box message_scalar_common_2[1][1];

static /* final */ const MR_Box message_scalar_common_3[1][7];


#line 264 "message.m"
/* sealed */ struct message__vector_common_type_1_0_s {
#line 264 "message.m"
  const MR_Integer message__vector_common_type_1_0__vct_1_f_0;
#line 264 "message.m"
};

static /* final */ const struct message__vector_common_type_1_0_s message_vector_common_1[8];



static /* final */ const MR_Box message_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box message_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&message__message__type_ctor_info_message_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct message__vector_common_type_1_0_s message_vector_common_1[8] = {
  /* row 0 */   {     (MR_Integer) 4 },
  /* row 1 */   {     (MR_Integer) 3 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 1 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 3 },
  /* row 6 */   {     (MR_Integer) 2 },
  /* row 7 */   {     (MR_Integer) 1 },
};


#include "io.mh"
#include "message.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#line 401 "message.m"
MR_Integer message__mutable_variable_verbosity_level_mut;
#ifdef MR_THREAD_SAFE
    MercuryLock message__mutable_variable_verbosity_level_mut_lock;
#endif

#line 401 "message.m"
void 
message__user_init_pred_0(void)
#line 401 "message.m"
{
#line 401 "message.m"
	message__initialise_mutable_verbosity_level_mut_0_p_0();
}


#line 473 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_0_0[2] = {
  (MR_PseudoTypeInfo) &message__message__type_ctor_info_program_location_0,
  (MR_PseudoTypeInfo) &message__message__type_ctor_info_message_type_0
};

#line 479 "message.c"
static const MR_ConstString message__message__field_names_message_0_0[2] = {
  (MR_String) "message_location",
  (MR_String) "message_type"
};

#line 485 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_0_0 = {
  (MR_String) "message",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  message__message__field_types_message_0_0,
  message__message__field_names_message_0_0,
  NULL,
  NULL
};

#line 500 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_0_0[1] = {
  &message__message__du_functor_desc_message_0_0
};

#line 505 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    message__message__du_stag_ordered_message_0_0
  }
};

#line 514 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_0[1] = {
  &message__message__du_functor_desc_message_0_0
};

#line 519 "message.c"
static const MR_Integer message__message__functor_number_map_message_0[1] = {
  (MR_Integer) 0
};

#line 524 "message.c"
const MR_TypeCtorInfo_Struct message__message__type_ctor_info_message_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (message____Unify____message_0_0_10001)),
  ((MR_Box) (message____Compare____message_0_0_10001)),
  (MR_String) "message",
  (MR_String) "message",
  {     message__message__du_name_ordered_message_0 },
  {     message__message__du_ptag_ordered_message_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  message__message__functor_number_map_message_0
};

#line 541 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_0 = {
  (MR_String) "message_info",
  (MR_Integer) 0
};

#line 547 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_1 = {
  (MR_String) "message_notice",
  (MR_Integer) 1
};

#line 553 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_2 = {
  (MR_String) "message_warning",
  (MR_Integer) 2
};

#line 559 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_3 = {
  (MR_String) "message_error",
  (MR_Integer) 3
};

#line 565 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_value_ordered_message_level_0[4] = {
  &message__message__enum_functor_desc_message_level_0_0,
  &message__message__enum_functor_desc_message_level_0_1,
  &message__message__enum_functor_desc_message_level_0_2,
  &message__message__enum_functor_desc_message_level_0_3
};

#line 573 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_name_ordered_message_level_0[4] = {
  &message__message__enum_functor_desc_message_level_0_3,
  &message__message__enum_functor_desc_message_level_0_0,
  &message__message__enum_functor_desc_message_level_0_1,
  &message__message__enum_functor_desc_message_level_0_2
};

#line 581 "message.c"
static const MR_Integer message__message__functor_number_map_message_level_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 589 "message.c"
const MR_TypeCtorInfo_Struct message__message__type_ctor_info_message_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (message____Unify____message_level_0_0_10001)),
  ((MR_Box) (message____Compare____message_level_0_0_10001)),
  (MR_String) "message",
  (MR_String) "message_level",
  {     message__message__enum_name_ordered_message_level_0 },
  {     message__message__enum_value_ordered_message_level_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  message__message__functor_number_map_message_level_0
};

#line 606 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_0 = {
  (MR_String) "info_found_candidate_conjunction",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 621 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 626 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_1 = {
  (MR_String) "info_found_conjs_above_callsite_threshold",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  message__message__field_types_message_type_0_1,
  NULL,
  NULL,
  NULL
};

#line 641 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_2 = {
  (MR_String) "info_found_pushed_conjs_above_callsite_threshold",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 656 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 661 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_3 = {
  (MR_String) "info_split_conjunction_into_partitions",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  message__message__field_types_message_type_0_3,
  NULL,
  NULL,
  NULL
};

#line 676 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 681 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_4 = {
  (MR_String) "info_found_n_conjunctions_with_positive_speedup",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4,
  message__message__field_types_message_type_0_4,
  NULL,
  NULL,
  NULL
};

#line 696 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 701 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_5 = {
  (MR_String) "notice_duplicate_instantiation",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5,
  message__message__field_types_message_type_0_5,
  NULL,
  NULL,
  NULL
};

#line 716 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_6 = {
  (MR_String) "notice_callpair_has_more_than_one_dependant_var",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 731 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_7[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 737 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_7 = {
  (MR_String) "notice_partition_does_not_have_costly_calls",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 7,
  message__message__field_types_message_type_0_7,
  NULL,
  NULL,
  NULL
};

#line 752 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_8[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0
};

#line 757 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_8 = {
  (MR_String) "notice_candidate_conjunction_not_det",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 8,
  message__message__field_types_message_type_0_8,
  NULL,
  NULL,
  NULL
};

#line 772 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_9 = {
  (MR_String) "warning_cannot_lookup_proc_defn",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 787 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 792 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_10 = {
  (MR_String) "warning_cannot_compute_procrep_coverage_fallback",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 10,
  message__message__field_types_message_type_0_10,
  NULL,
  NULL,
  NULL
};

#line 807 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 812 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_11 = {
  (MR_String) "warning_cannot_compute_cost_of_recursive_calls",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 11,
  message__message__field_types_message_type_0_11,
  NULL,
  NULL,
  NULL
};

#line 827 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 832 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_12 = {
  (MR_String) "warning_cannot_compute_first_use_time",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 12,
  message__message__field_types_message_type_0_12,
  NULL,
  NULL,
  NULL
};

#line 847 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_13 = {
  (MR_String) "error_extra_proc_dynamics_in_clique_proc",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 13,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 862 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_14 = {
  (MR_String) "error_cannot_lookup_coverage_points",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 14,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 877 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_15[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 882 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_15 = {
  (MR_String) "error_exception_thrown",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 15,
  message__message__field_types_message_type_0_15,
  NULL,
  NULL,
  NULL
};

#line 897 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_0[6] = {
  &message__message__du_functor_desc_message_type_0_0,
  &message__message__du_functor_desc_message_type_0_2,
  &message__message__du_functor_desc_message_type_0_6,
  &message__message__du_functor_desc_message_type_0_9,
  &message__message__du_functor_desc_message_type_0_13,
  &message__message__du_functor_desc_message_type_0_14
};

#line 907 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_1[1] = {
  &message__message__du_functor_desc_message_type_0_1
};

#line 912 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_2[1] = {
  &message__message__du_functor_desc_message_type_0_3
};

#line 917 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_3[8] = {
  &message__message__du_functor_desc_message_type_0_4,
  &message__message__du_functor_desc_message_type_0_5,
  &message__message__du_functor_desc_message_type_0_7,
  &message__message__du_functor_desc_message_type_0_8,
  &message__message__du_functor_desc_message_type_0_10,
  &message__message__du_functor_desc_message_type_0_11,
  &message__message__du_functor_desc_message_type_0_12,
  &message__message__du_functor_desc_message_type_0_15
};

#line 929 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_type_0[4] = {
  {
    (MR_Integer) 6,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    message__message__du_stag_ordered_message_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    message__message__du_stag_ordered_message_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    message__message__du_stag_ordered_message_type_0_2
  },
  {
    (MR_Integer) 8,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    message__message__du_stag_ordered_message_type_0_3
  }
};

#line 953 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_type_0[16] = {
  &message__message__du_functor_desc_message_type_0_14,
  &message__message__du_functor_desc_message_type_0_15,
  &message__message__du_functor_desc_message_type_0_13,
  &message__message__du_functor_desc_message_type_0_0,
  &message__message__du_functor_desc_message_type_0_1,
  &message__message__du_functor_desc_message_type_0_4,
  &message__message__du_functor_desc_message_type_0_2,
  &message__message__du_functor_desc_message_type_0_3,
  &message__message__du_functor_desc_message_type_0_6,
  &message__message__du_functor_desc_message_type_0_8,
  &message__message__du_functor_desc_message_type_0_5,
  &message__message__du_functor_desc_message_type_0_7,
  &message__message__du_functor_desc_message_type_0_11,
  &message__message__du_functor_desc_message_type_0_12,
  &message__message__du_functor_desc_message_type_0_10,
  &message__message__du_functor_desc_message_type_0_9
};

#line 973 "message.c"
static const MR_Integer message__message__functor_number_map_message_type_0[16] = {
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 5,
  (MR_Integer) 10,
  (MR_Integer) 8,
  (MR_Integer) 11,
  (MR_Integer) 9,
  (MR_Integer) 15,
  (MR_Integer) 14,
  (MR_Integer) 12,
  (MR_Integer) 13,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 993 "message.c"
const MR_TypeCtorInfo_Struct message__message__type_ctor_info_message_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (message____Unify____message_type_0_0_10001)),
  ((MR_Box) (message____Compare____message_type_0_0_10001)),
  (MR_String) "message",
  (MR_String) "message_type",
  {     message__message__du_name_ordered_message_type_0 },
  {     message__message__du_ptag_ordered_message_type_0 },
  (MR_Integer) 16,
  (MR_Integer) 4,
  message__message__functor_number_map_message_type_0
};

#line 1010 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0
};

#line 1015 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_0 = {
  (MR_String) "pl_proc",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  message__message__field_types_program_location_0_0,
  NULL,
  NULL,
  NULL
};

#line 1030 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 1036 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_1 = {
  (MR_String) "pl_goal",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  message__message__field_types_program_location_0_1,
  NULL,
  NULL,
  NULL
};

#line 1051 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_2[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 1056 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_2 = {
  (MR_String) "pl_clique",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  message__message__field_types_program_location_0_2,
  NULL,
  NULL,
  NULL
};

#line 1071 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_3[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 1076 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_3 = {
  (MR_String) "pl_csd",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  message__message__field_types_program_location_0_3,
  NULL,
  NULL,
  NULL
};

#line 1091 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_0[1] = {
  &message__message__du_functor_desc_program_location_0_0
};

#line 1096 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_1[1] = {
  &message__message__du_functor_desc_program_location_0_1
};

#line 1101 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_2[1] = {
  &message__message__du_functor_desc_program_location_0_2
};

#line 1106 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_3[1] = {
  &message__message__du_functor_desc_program_location_0_3
};

#line 1111 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_program_location_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    message__message__du_stag_ordered_program_location_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    message__message__du_stag_ordered_program_location_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    message__message__du_stag_ordered_program_location_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    message__message__du_stag_ordered_program_location_0_3
  }
};

#line 1135 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_program_location_0[4] = {
  &message__message__du_functor_desc_program_location_0_2,
  &message__message__du_functor_desc_program_location_0_3,
  &message__message__du_functor_desc_program_location_0_1,
  &message__message__du_functor_desc_program_location_0_0
};

#line 1143 "message.c"
static const MR_Integer message__message__functor_number_map_program_location_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1151 "message.c"
const MR_TypeCtorInfo_Struct message__message__type_ctor_info_program_location_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (message____Unify____program_location_0_0_10001)),
  ((MR_Box) (message____Compare____program_location_0_0_10001)),
  (MR_String) "message",
  (MR_String) "program_location",
  {     message__message__du_name_ordered_program_location_0 },
  {     message__message__du_ptag_ordered_program_location_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  message__message__functor_number_map_program_location_0
};

#line 1168 "message.c"
static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
#line 1171 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1173 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1175 "message.c"
{
#line 1177 "message.c"
  {
#line 1179 "message.c"
    MR_bool message__succeeded;

#line 1182 "message.c"
    {
#line 1184 "message.c"
      message__succeeded = message____Unify____message_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1187 "message.c"
    return message__succeeded;
#line 1189 "message.c"
  }
#line 1191 "message.c"
}

#line 1194 "message.c"
static void MR_CALL 
message____Compare____message_0_0_10001(
#line 1197 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1199 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1201 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1203 "message.c"
{
#line 1205 "message.c"
  {
#line 1207 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1210 "message.c"
    {
#line 1212 "message.c"
      message____Compare____message_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1215 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1217 "message.c"
  }
#line 1219 "message.c"
}

#line 1222 "message.c"
static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
#line 1225 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1227 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1229 "message.c"
{
#line 1231 "message.c"
  {
#line 1233 "message.c"
    MR_bool message__succeeded;

#line 1236 "message.c"
    {
#line 1238 "message.c"
      message__succeeded = message____Unify____message_level_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1241 "message.c"
    return message__succeeded;
#line 1243 "message.c"
  }
#line 1245 "message.c"
}

#line 1248 "message.c"
static void MR_CALL 
message____Compare____message_level_0_0_10001(
#line 1251 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1253 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1255 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1257 "message.c"
{
#line 1259 "message.c"
  {
#line 1261 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1264 "message.c"
    {
#line 1266 "message.c"
      message____Compare____message_level_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1269 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1271 "message.c"
  }
#line 1273 "message.c"
}

#line 1276 "message.c"
static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
#line 1279 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1281 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1283 "message.c"
{
#line 1285 "message.c"
  {
#line 1287 "message.c"
    MR_bool message__succeeded;

#line 1290 "message.c"
    {
#line 1292 "message.c"
      message__succeeded = message____Unify____message_type_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1295 "message.c"
    return message__succeeded;
#line 1297 "message.c"
  }
#line 1299 "message.c"
}

#line 1302 "message.c"
static void MR_CALL 
message____Compare____message_type_0_0_10001(
#line 1305 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1307 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1309 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1311 "message.c"
{
#line 1313 "message.c"
  {
#line 1315 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1318 "message.c"
    {
#line 1320 "message.c"
      message____Compare____message_type_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1323 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1325 "message.c"
  }
#line 1327 "message.c"
}

#line 1330 "message.c"
static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
#line 1333 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1335 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1337 "message.c"
{
#line 1339 "message.c"
  {
#line 1341 "message.c"
    MR_bool message__succeeded;

#line 1344 "message.c"
    {
#line 1346 "message.c"
      message__succeeded = message____Unify____program_location_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1349 "message.c"
    return message__succeeded;
#line 1351 "message.c"
  }
#line 1353 "message.c"
}

#line 1356 "message.c"
static void MR_CALL 
message____Compare____program_location_0_0_10001(
#line 1359 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1361 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1363 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1365 "message.c"
{
#line 1367 "message.c"
  {
#line 1369 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1372 "message.c"
    {
#line 1374 "message.c"
      message____Compare____program_location_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1377 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1379 "message.c"
  }
#line 1381 "message.c"
}

#line 49 "message.m"
void MR_CALL 
message____Compare____program_location_0_0(
#line 49 "message.m"
  MR_Word * message__HeadVar__1_1,
#line 49 "message.m"
  MR_Word message__HeadVar__2_2,
#line 49 "message.m"
  MR_Word message__HeadVar__3_3)
#line 49 "message.m"
{
#line 49 "message.m"
  {
#line 49 "message.m"
    MR_bool message__succeeded;
#line 49 "message.m"
    MR_Integer message__CastX_45 = (MR_Integer) message__HeadVar__2_2;
#line 49 "message.m"
    MR_Integer message__CastY_46 = (MR_Integer) message__HeadVar__3_3;

#line 49 "message.m"
    message__succeeded = (message__CastX_45 == message__CastY_46);
#line 49 "message.m"
    if (message__succeeded)
#line 1408 "message.c"
      *message__HeadVar__1_1 = (MR_Integer) 0;
#line 49 "message.m"
    else
#line 49 "message.m"
#line 49 "message.m"
      switch (MR_tag((MR_Word) message__HeadVar__2_2)) {
#line 49 "message.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 49 "message.m"
        case (MR_Integer) 0:
#line 49 "message.m"
          {
#line 49 "message.m"
            MR_Word message__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "message.m"
#line 49 "message.m"
            switch (MR_tag((MR_Word) message__HeadVar__3_3)) {
#line 49 "message.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 49 "message.m"
              case (MR_Integer) 0:
#line 49 "message.m"
                {
#line 49 "message.m"
                  MR_Word message__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__3_3, (MR_Integer) 0)));

#line 49 "message.m"
                  {
#line 49 "message.m"
                    mdbcomp__program_representation____Compare____string_proc_label_0_0(message__HeadVar__1_1, message__V_56_56, message__V_5_5);
#line 49 "message.m"
                    return;
                  }
#line 49 "message.m"
                }
#line 49 "message.m"
                break;
#line 49 "message.m"
              case (MR_Integer) 1:
#line 1449 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
                break;
#line 49 "message.m"
              case (MR_Integer) 2:
#line 1455 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
                break;
#line 49 "message.m"
              case (MR_Integer) 3:
#line 1461 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
                break;
#line 49 "message.m"
            }
#line 49 "message.m"
          }
#line 49 "message.m"
          break;
#line 49 "message.m"
        case (MR_Integer) 1:
#line 49 "message.m"
          {
#line 49 "message.m"
            MR_Word message__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 1)));
#line 49 "message.m"
            MR_Word message__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "message.m"
#line 49 "message.m"
            switch (MR_tag((MR_Word) message__HeadVar__3_3)) {
#line 49 "message.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 49 "message.m"
              case (MR_Integer) 0:
#line 1487 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
                break;
#line 49 "message.m"
              case (MR_Integer) 1:
#line 49 "message.m"
                {
#line 49 "message.m"
                  MR_Word message__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__3_3, (MR_Integer) 0)));
#line 49 "message.m"
                  MR_Word message__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__3_3, (MR_Integer) 1)));
#line 49 "message.m"
                  MR_Word message__V_20_20;

#line 49 "message.m"
                  {
#line 49 "message.m"
                    mdbcomp__program_representation____Compare____string_proc_label_0_0(&message__V_20_20, message__V_55_55, message__V_18_18);
                  }
#line 1507 "message.c"
                  message__succeeded = (message__V_20_20 == (MR_Integer) 0);
#line 49 "message.m"
                  message__succeeded = !(message__succeeded);
#line 49 "message.m"
                  if (message__succeeded)
#line 49 "message.m"
                    *message__HeadVar__1_1 = message__V_20_20;
#line 49 "message.m"
                  else
#line 49 "message.m"
                    {
#line 49 "message.m"
                      mdbcomp__goal_path____Compare____reverse_goal_path_0_0(message__HeadVar__1_1, message__V_54_54, message__V_19_19);
#line 49 "message.m"
                      return;
                    }
#line 49 "message.m"
                }
#line 49 "message.m"
                break;
#line 49 "message.m"
              case (MR_Integer) 2:
#line 1530 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
                break;
#line 49 "message.m"
              case (MR_Integer) 3:
#line 1536 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
                break;
#line 49 "message.m"
            }
#line 49 "message.m"
          }
#line 49 "message.m"
          break;
#line 49 "message.m"
        case (MR_Integer) 2:
#line 49 "message.m"
          {
#line 49 "message.m"
            MR_Word message__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), message__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "message.m"
#line 49 "message.m"
            switch (MR_tag((MR_Word) message__HeadVar__3_3)) {
#line 49 "message.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 49 "message.m"
              case (MR_Integer) 0:
#line 1560 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
                break;
#line 49 "message.m"
              case (MR_Integer) 1:
#line 1566 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
                break;
#line 49 "message.m"
              case (MR_Integer) 2:
#line 49 "message.m"
                {
#line 49 "message.m"
                  MR_Word message__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), message__HeadVar__3_3, (MR_Integer) 0)));
#line 49 "message.m"
                  MR_Integer message__V_57_57 = (MR_Integer) message__V_52_52;
#line 49 "message.m"
                  MR_Integer message__V_58_58 = (MR_Integer) message__V_33_33;

#line 49 "message.m"
                  {
#line 49 "message.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(message__HeadVar__1_1, message__V_57_57, message__V_58_58);
#line 49 "message.m"
                    return;
                  }
#line 49 "message.m"
                }
#line 49 "message.m"
                break;
#line 49 "message.m"
              case (MR_Integer) 3:
#line 1594 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
                break;
#line 49 "message.m"
            }
#line 49 "message.m"
          }
#line 49 "message.m"
          break;
#line 49 "message.m"
        case (MR_Integer) 3:
#line 49 "message.m"
          {
#line 49 "message.m"
            MR_Word message__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "message.m"
#line 49 "message.m"
            switch (MR_tag((MR_Word) message__HeadVar__3_3)) {
#line 49 "message.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 49 "message.m"
              case (MR_Integer) 0:
#line 1618 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
                break;
#line 49 "message.m"
              case (MR_Integer) 1:
#line 1624 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
                break;
#line 49 "message.m"
              case (MR_Integer) 2:
#line 1630 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
                break;
#line 49 "message.m"
              case (MR_Integer) 3:
#line 49 "message.m"
                {
#line 49 "message.m"
                  MR_Word message__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)));
#line 49 "message.m"
                  MR_Integer message__V_59_59 = (MR_Integer) message__V_53_53;
#line 49 "message.m"
                  MR_Integer message__V_60_60 = (MR_Integer) message__V_44_44;

#line 49 "message.m"
                  {
#line 49 "message.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(message__HeadVar__1_1, message__V_59_59, message__V_60_60);
#line 49 "message.m"
                    return;
                  }
#line 49 "message.m"
                }
#line 49 "message.m"
                break;
#line 49 "message.m"
            }
#line 49 "message.m"
          }
#line 49 "message.m"
          break;
#line 49 "message.m"
      }
#line 49 "message.m"
  }
#line 49 "message.m"
}

#line 49 "message.m"
MR_bool MR_CALL 
message____Unify____program_location_0_0(
#line 49 "message.m"
  MR_Word message__HeadVar__1_1,
#line 49 "message.m"
  MR_Word message__HeadVar__2_2)
#line 49 "message.m"
{
#line 49 "message.m"
  {
#line 49 "message.m"
    MR_bool message__succeeded;
#line 49 "message.m"
    MR_Integer message__CastX_13 = (MR_Integer) message__HeadVar__1_1;
#line 49 "message.m"
    MR_Integer message__CastY_14 = (MR_Integer) message__HeadVar__2_2;

#line 49 "message.m"
    message__succeeded = (message__CastX_13 == message__CastY_14);
#line 49 "message.m"
    if (message__succeeded)
#line 49 "message.m"
      message__succeeded = MR_TRUE;
#line 49 "message.m"
    else
#line 49 "message.m"
#line 49 "message.m"
      switch (MR_tag((MR_Word) message__HeadVar__1_1)) {
#line 49 "message.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 49 "message.m"
        case (MR_Integer) 0:
#line 49 "message.m"
          {
#line 49 "message.m"
            MR_Word message__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 0)));
#line 49 "message.m"
            MR_Word message__V_4_4;

#line 49 "message.m"
            message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 49 "message.m"
            if (message__succeeded)
#line 49 "message.m"
              {
#line 49 "message.m"
                message__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__2_2, (MR_Integer) 0)));
#line 1717 "message.c"
                {
#line 1719 "message.c"
                  return message__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(message__V_3_3, message__V_4_4);
                }
#line 49 "message.m"
              }
#line 49 "message.m"
          }
#line 49 "message.m"
          break;
#line 49 "message.m"
        case (MR_Integer) 1:
#line 49 "message.m"
          {
#line 49 "message.m"
            MR_Word message__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__1_1, (MR_Integer) 0)));
#line 49 "message.m"
            MR_Word message__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__1_1, (MR_Integer) 1)));
#line 49 "message.m"
            MR_Word message__V_7_7;
#line 49 "message.m"
            MR_Word message__V_8_8;

#line 49 "message.m"
            message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 49 "message.m"
            if (message__succeeded)
#line 49 "message.m"
              {
#line 49 "message.m"
                message__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 0)));
#line 49 "message.m"
                message__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 1)));
#line 1751 "message.c"
                {
#line 1753 "message.c"
                  message__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(message__V_5_5, message__V_7_7);
                }
#line 49 "message.m"
                if (message__succeeded)
#line 1758 "message.c"
                  {
#line 1760 "message.c"
                    return message__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(message__V_6_6, message__V_8_8);
                  }
#line 49 "message.m"
              }
#line 49 "message.m"
          }
#line 49 "message.m"
          break;
#line 49 "message.m"
        case (MR_Integer) 2:
#line 49 "message.m"
          {
#line 49 "message.m"
            MR_Word message__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), message__HeadVar__1_1, (MR_Integer) 0)));
#line 49 "message.m"
            MR_Word message__V_10_10;
#line 49 "message.m"
            MR_Integer message__V_20_20;
#line 49 "message.m"
            MR_Integer message__V_21_21;

#line 49 "message.m"
            message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 49 "message.m"
            if (message__succeeded)
#line 49 "message.m"
              {
#line 49 "message.m"
                message__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), message__HeadVar__2_2, (MR_Integer) 0)));
#line 1790 "message.c"
                message__V_20_20 = (MR_Integer) message__V_9_9;
#line 1792 "message.c"
                message__V_21_21 = (MR_Integer) message__V_10_10;
#line 1794 "message.c"
                message__succeeded = (message__V_20_20 == message__V_21_21);
#line 49 "message.m"
              }
#line 49 "message.m"
          }
#line 49 "message.m"
          break;
#line 49 "message.m"
        case (MR_Integer) 3:
#line 49 "message.m"
          {
#line 49 "message.m"
            MR_Word message__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)));
#line 49 "message.m"
            MR_Word message__V_12_12;
#line 49 "message.m"
            MR_Integer message__V_22_22;
#line 49 "message.m"
            MR_Integer message__V_23_23;

#line 49 "message.m"
            message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 49 "message.m"
            if (message__succeeded)
#line 49 "message.m"
              {
#line 49 "message.m"
                message__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)));
#line 1823 "message.c"
                message__V_22_22 = (MR_Integer) message__V_11_11;
#line 1825 "message.c"
                message__V_23_23 = (MR_Integer) message__V_12_12;
#line 1827 "message.c"
                message__succeeded = (message__V_22_22 == message__V_23_23);
#line 49 "message.m"
              }
#line 49 "message.m"
          }
#line 49 "message.m"
          break;
#line 49 "message.m"
      }
#line 49 "message.m"
    return message__succeeded;
#line 49 "message.m"
  }
#line 49 "message.m"
}

#line 75 "message.m"
void MR_CALL 
message____Compare____message_type_0_0(
#line 75 "message.m"
  MR_Word * message__HeadVar__1_1,
#line 75 "message.m"
  MR_Word message__HeadVar__2_2,
#line 75 "message.m"
  MR_Word message__HeadVar__3_3)
#line 75 "message.m"
{
#line 75 "message.m"
  {
#line 75 "message.m"
    MR_bool message__succeeded;
#line 75 "message.m"
    MR_Integer message__CastX_30 = (MR_Integer) message__HeadVar__2_2;
#line 75 "message.m"
    MR_Integer message__CastY_31 = (MR_Integer) message__HeadVar__3_3;

#line 75 "message.m"
    message__succeeded = (message__CastX_30 == message__CastY_31);
#line 75 "message.m"
    if (message__succeeded)
#line 1868 "message.c"
      *message__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "message.m"
    else
#line 75 "message.m"
      {
#line 75 "message.m"
        MR_Integer message__V_4_4;
#line 75 "message.m"
        MR_Integer message__V_5_5;

#line 75 "message.m"
        {
#line 75 "message.m"
          message____Index____message_type_0_0(message__HeadVar__2_2, &message__V_4_4);
        }
#line 75 "message.m"
        {
#line 75 "message.m"
          message____Index____message_type_0_0(message__HeadVar__3_3, &message__V_5_5);
        }
#line 75 "message.m"
        message__succeeded = (message__V_4_4 < message__V_5_5);
#line 75 "message.m"
        if (message__succeeded)
#line 1893 "message.c"
          *message__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "message.m"
        else
#line 75 "message.m"
          {
#line 75 "message.m"
            message__succeeded = (message__V_4_4 > message__V_5_5);
#line 75 "message.m"
            if (message__succeeded)
#line 1903 "message.c"
              *message__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "message.m"
            else
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_Word message__V_6_6;

#line 75 "message.m"
#line 75 "message.m"
                switch (MR_tag((MR_Word) message__HeadVar__2_2)) {
#line 75 "message.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 75 "message.m"
                  case (MR_Integer) 0:
#line 75 "message.m"
#line 75 "message.m"
                    switch (MR_unmkbody(message__HeadVar__2_2)) {
#line 75 "message.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "message.m"
                      case (MR_Integer) 0:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          message__V_6_6 = (MR_Integer) 0;
#line 75 "message.m"
                          message__succeeded = MR_TRUE;
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                      case (MR_Integer) 1:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          message__V_6_6 = (MR_Integer) 0;
#line 75 "message.m"
                          message__succeeded = MR_TRUE;
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                      case (MR_Integer) 2:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          message__V_6_6 = (MR_Integer) 0;
#line 75 "message.m"
                          message__succeeded = MR_TRUE;
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                      case (MR_Integer) 3:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          message__V_6_6 = (MR_Integer) 0;
#line 75 "message.m"
                          message__succeeded = MR_TRUE;
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                      case (MR_Integer) 4:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          message__V_6_6 = (MR_Integer) 0;
#line 75 "message.m"
                          message__succeeded = MR_TRUE;
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                      case (MR_Integer) 5:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          message__V_6_6 = (MR_Integer) 0;
#line 75 "message.m"
                          message__succeeded = MR_TRUE;
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                    }
#line 75 "message.m"
                    break;
#line 75 "message.m"
                  case (MR_Integer) 1:
#line 75 "message.m"
                    {
#line 75 "message.m"
                      MR_Integer message__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "message.m"
                      MR_Integer message__V_8_8;

#line 75 "message.m"
                      message__succeeded = ((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 75 "message.m"
                      if (message__succeeded)
#line 75 "message.m"
                        {
#line 75 "message.m"
                          message__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "message.m"
                          {
#line 75 "message.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_6_6, message__V_7_7, message__V_8_8);
                          }
#line 75 "message.m"
                          message__succeeded = MR_TRUE;
#line 75 "message.m"
                        }
#line 75 "message.m"
                    }
#line 75 "message.m"
                    break;
#line 75 "message.m"
                  case (MR_Integer) 2:
#line 75 "message.m"
                    {
#line 75 "message.m"
                      MR_Integer message__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "message.m"
                      MR_Integer message__V_10_10;

#line 75 "message.m"
                      message__succeeded = ((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 75 "message.m"
                      if (message__succeeded)
#line 75 "message.m"
                        {
#line 75 "message.m"
                          message__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "message.m"
                          {
#line 75 "message.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_6_6, message__V_9_9, message__V_10_10);
                          }
#line 75 "message.m"
                          message__succeeded = MR_TRUE;
#line 75 "message.m"
                        }
#line 75 "message.m"
                    }
#line 75 "message.m"
                    break;
#line 75 "message.m"
                  case (MR_Integer) 3:
#line 75 "message.m"
#line 75 "message.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) {
#line 75 "message.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "message.m"
                      case (MR_Integer) 0:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          MR_Integer message__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "message.m"
                          MR_Integer message__V_12_12;

#line 75 "message.m"
                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 75 "message.m"
                          if (message__succeeded)
#line 75 "message.m"
                            {
#line 75 "message.m"
                              message__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "message.m"
                              {
#line 75 "message.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_6_6, message__V_11_11, message__V_12_12);
                              }
#line 75 "message.m"
                              message__succeeded = MR_TRUE;
#line 75 "message.m"
                            }
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                      case (MR_Integer) 1:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          MR_Integer message__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "message.m"
                          MR_Integer message__V_14_14;

#line 75 "message.m"
                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 75 "message.m"
                          if (message__succeeded)
#line 75 "message.m"
                            {
#line 75 "message.m"
                              message__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "message.m"
                              {
#line 75 "message.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_6_6, message__V_13_13, message__V_14_14);
                              }
#line 75 "message.m"
                              message__succeeded = MR_TRUE;
#line 75 "message.m"
                            }
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                      case (MR_Integer) 2:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          MR_Integer message__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "message.m"
                          MR_Integer message__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 2)));
#line 75 "message.m"
                          MR_Integer message__V_17_17;
#line 75 "message.m"
                          MR_Integer message__V_18_18;
#line 75 "message.m"
                          MR_Word message__V_19_19;

#line 75 "message.m"
                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 75 "message.m"
                          if (message__succeeded)
#line 75 "message.m"
                            {
#line 75 "message.m"
                              message__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "message.m"
                              message__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 2)));
#line 75 "message.m"
                              {
#line 75 "message.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_19_19, message__V_15_15, message__V_17_17);
                              }
#line 2157 "message.c"
                              message__succeeded = (message__V_19_19 == (MR_Integer) 0);
#line 75 "message.m"
                              message__succeeded = !(message__succeeded);
#line 75 "message.m"
                              if (message__succeeded)
#line 75 "message.m"
                                message__V_6_6 = message__V_19_19;
#line 75 "message.m"
                              else
#line 75 "message.m"
                                {
#line 75 "message.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_6_6, message__V_16_16, message__V_18_18);
                                }
#line 75 "message.m"
                              message__succeeded = MR_TRUE;
#line 75 "message.m"
                            }
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                      case (MR_Integer) 3:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          MR_Word message__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "message.m"
                          MR_Word message__V_21_21;
#line 75 "message.m"
                          MR_Integer message__V_43_43;
#line 75 "message.m"
                          MR_Integer message__V_44_44;

#line 75 "message.m"
                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 75 "message.m"
                          if (message__succeeded)
#line 75 "message.m"
                            {
#line 75 "message.m"
                              message__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "message.m"
                              message__V_43_43 = (MR_Integer) message__V_20_20;
#line 75 "message.m"
                              message__V_44_44 = (MR_Integer) message__V_21_21;
#line 75 "message.m"
                              {
#line 75 "message.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_6_6, message__V_43_43, message__V_44_44);
                              }
#line 75 "message.m"
                              message__succeeded = MR_TRUE;
#line 75 "message.m"
                            }
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                      case (MR_Integer) 4:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          MR_String message__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "message.m"
                          MR_String message__V_23_23;

#line 75 "message.m"
                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 75 "message.m"
                          if (message__succeeded)
#line 75 "message.m"
                            {
#line 75 "message.m"
                              message__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "message.m"
                              {
#line 75 "message.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&message__V_6_6, message__V_22_22, message__V_23_23);
                              }
#line 75 "message.m"
                              message__succeeded = MR_TRUE;
#line 75 "message.m"
                            }
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                      case (MR_Integer) 5:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          MR_String message__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "message.m"
                          MR_String message__V_25_25;

#line 75 "message.m"
                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 75 "message.m"
                          if (message__succeeded)
#line 75 "message.m"
                            {
#line 75 "message.m"
                              message__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "message.m"
                              {
#line 75 "message.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&message__V_6_6, message__V_24_24, message__V_25_25);
                              }
#line 75 "message.m"
                              message__succeeded = MR_TRUE;
#line 75 "message.m"
                            }
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                      case (MR_Integer) 6:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          MR_String message__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "message.m"
                          MR_String message__V_27_27;

#line 75 "message.m"
                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 75 "message.m"
                          if (message__succeeded)
#line 75 "message.m"
                            {
#line 75 "message.m"
                              message__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "message.m"
                              {
#line 75 "message.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&message__V_6_6, message__V_26_26, message__V_27_27);
                              }
#line 75 "message.m"
                              message__succeeded = MR_TRUE;
#line 75 "message.m"
                            }
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                      case (MR_Integer) 7:
#line 75 "message.m"
                        {
#line 75 "message.m"
                          MR_String message__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "message.m"
                          MR_String message__V_29_29;

#line 75 "message.m"
                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 75 "message.m"
                          if (message__succeeded)
#line 75 "message.m"
                            {
#line 75 "message.m"
                              message__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "message.m"
                              {
#line 75 "message.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&message__V_6_6, message__V_28_28, message__V_29_29);
                              }
#line 75 "message.m"
                              message__succeeded = MR_TRUE;
#line 75 "message.m"
                            }
#line 75 "message.m"
                        }
#line 75 "message.m"
                        break;
#line 75 "message.m"
                    }
#line 75 "message.m"
                    break;
#line 75 "message.m"
                }
#line 75 "message.m"
                if (message__succeeded)
#line 75 "message.m"
                  *message__HeadVar__1_1 = message__V_6_6;
#line 75 "message.m"
                else
#line 75 "message.m"
                  {
#line 75 "message.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 75 "message.m"
                    return;
                  }
#line 75 "message.m"
              }
#line 75 "message.m"
          }
#line 75 "message.m"
      }
#line 75 "message.m"
  }
#line 75 "message.m"
}

#line 75 "message.m"
void MR_CALL 
message____Index____message_type_0_0(
#line 75 "message.m"
  MR_Word message__HeadVar__1_1,
#line 75 "message.m"
  MR_Integer * message__HeadVar__2_2)
#line 75 "message.m"
{
#line 75 "message.m"
  {
#line 75 "message.m"
    MR_bool message__succeeded;

#line 75 "message.m"
#line 75 "message.m"
    switch (MR_tag((MR_Word) message__HeadVar__1_1)) {
#line 75 "message.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 75 "message.m"
      case (MR_Integer) 0:
#line 75 "message.m"
#line 75 "message.m"
        switch (MR_unmkbody(message__HeadVar__1_1)) {
#line 75 "message.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 75 "message.m"
          case (MR_Integer) 0:
#line 2396 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 0;
#line 75 "message.m"
            break;
#line 75 "message.m"
          case (MR_Integer) 1:
#line 2402 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 2;
#line 75 "message.m"
            break;
#line 75 "message.m"
          case (MR_Integer) 2:
#line 2408 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 6;
#line 75 "message.m"
            break;
#line 75 "message.m"
          case (MR_Integer) 3:
#line 2414 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 9;
#line 75 "message.m"
            break;
#line 75 "message.m"
          case (MR_Integer) 4:
#line 2420 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 13;
#line 75 "message.m"
            break;
#line 75 "message.m"
          case (MR_Integer) 5:
#line 2426 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 14;
#line 75 "message.m"
            break;
#line 75 "message.m"
        }
#line 75 "message.m"
        break;
#line 75 "message.m"
      case (MR_Integer) 1:
#line 2436 "message.c"
        *message__HeadVar__2_2 = (MR_Integer) 1;
#line 75 "message.m"
        break;
#line 75 "message.m"
      case (MR_Integer) 2:
#line 2442 "message.c"
        *message__HeadVar__2_2 = (MR_Integer) 3;
#line 75 "message.m"
        break;
#line 75 "message.m"
      case (MR_Integer) 3:
#line 75 "message.m"
#line 75 "message.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) {
#line 75 "message.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 75 "message.m"
          case (MR_Integer) 0:
#line 2455 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 4;
#line 75 "message.m"
            break;
#line 75 "message.m"
          case (MR_Integer) 1:
#line 2461 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 5;
#line 75 "message.m"
            break;
#line 75 "message.m"
          case (MR_Integer) 2:
#line 2467 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 7;
#line 75 "message.m"
            break;
#line 75 "message.m"
          case (MR_Integer) 3:
#line 2473 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 8;
#line 75 "message.m"
            break;
#line 75 "message.m"
          case (MR_Integer) 4:
#line 2479 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 10;
#line 75 "message.m"
            break;
#line 75 "message.m"
          case (MR_Integer) 5:
#line 2485 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 11;
#line 75 "message.m"
            break;
#line 75 "message.m"
          case (MR_Integer) 6:
#line 2491 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 12;
#line 75 "message.m"
            break;
#line 75 "message.m"
          case (MR_Integer) 7:
#line 2497 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 15;
#line 75 "message.m"
            break;
#line 75 "message.m"
        }
#line 75 "message.m"
        break;
#line 75 "message.m"
    }
#line 75 "message.m"
  }
#line 75 "message.m"
}

#line 75 "message.m"
MR_bool MR_CALL 
message____Unify____message_type_0_0(
#line 75 "message.m"
  MR_Word message__HeadVar__1_1,
#line 75 "message.m"
  MR_Word message__HeadVar__2_2)
#line 75 "message.m"
{
#line 75 "message.m"
  {
#line 75 "message.m"
    MR_bool message__succeeded;
#line 75 "message.m"
    MR_Integer message__CastX_37 = (MR_Integer) message__HeadVar__1_1;
#line 75 "message.m"
    MR_Integer message__CastY_38 = (MR_Integer) message__HeadVar__2_2;

#line 75 "message.m"
    message__succeeded = (message__CastX_37 == message__CastY_38);
#line 75 "message.m"
    if (message__succeeded)
#line 75 "message.m"
      message__succeeded = MR_TRUE;
#line 75 "message.m"
    else
#line 75 "message.m"
#line 75 "message.m"
      switch (MR_tag((MR_Word) message__HeadVar__1_1)) {
#line 75 "message.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 75 "message.m"
        case (MR_Integer) 0:
#line 75 "message.m"
#line 75 "message.m"
          switch (MR_unmkbody(message__HeadVar__1_1)) {
#line 75 "message.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 75 "message.m"
            case (MR_Integer) 0:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_Integer message__CastX_3 = (MR_Integer) message__HeadVar__1_1;
#line 75 "message.m"
                MR_Integer message__CastY_4 = (MR_Integer) message__HeadVar__2_2;

#line 75 "message.m"
                message__succeeded = (message__CastY_4 == message__CastX_3);
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
            case (MR_Integer) 1:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_Integer message__CastX_7 = (MR_Integer) message__HeadVar__1_1;
#line 75 "message.m"
                MR_Integer message__CastY_8 = (MR_Integer) message__HeadVar__2_2;

#line 75 "message.m"
                message__succeeded = (message__CastY_8 == message__CastX_7);
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
            case (MR_Integer) 2:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_Integer message__CastX_15 = (MR_Integer) message__HeadVar__1_1;
#line 75 "message.m"
                MR_Integer message__CastY_16 = (MR_Integer) message__HeadVar__2_2;

#line 75 "message.m"
                message__succeeded = (message__CastY_16 == message__CastX_15);
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
            case (MR_Integer) 3:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_Integer message__CastX_23 = (MR_Integer) message__HeadVar__1_1;
#line 75 "message.m"
                MR_Integer message__CastY_24 = (MR_Integer) message__HeadVar__2_2;

#line 75 "message.m"
                message__succeeded = (message__CastY_24 == message__CastX_23);
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
            case (MR_Integer) 4:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_Integer message__CastX_31 = (MR_Integer) message__HeadVar__1_1;
#line 75 "message.m"
                MR_Integer message__CastY_32 = (MR_Integer) message__HeadVar__2_2;

#line 75 "message.m"
                message__succeeded = (message__CastY_32 == message__CastX_31);
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
            case (MR_Integer) 5:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_Integer message__CastX_33 = (MR_Integer) message__HeadVar__1_1;
#line 75 "message.m"
                MR_Integer message__CastY_34 = (MR_Integer) message__HeadVar__2_2;

#line 75 "message.m"
                message__succeeded = (message__CastY_34 == message__CastX_33);
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
          }
#line 75 "message.m"
          break;
#line 75 "message.m"
        case (MR_Integer) 1:
#line 75 "message.m"
          {
#line 75 "message.m"
            MR_Integer message__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "message.m"
            MR_Integer message__V_6_6;

#line 75 "message.m"
            message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 75 "message.m"
            if (message__succeeded)
#line 75 "message.m"
              {
#line 75 "message.m"
                message__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 0)));
#line 2661 "message.c"
                message__succeeded = (message__V_5_5 == message__V_6_6);
#line 75 "message.m"
              }
#line 75 "message.m"
          }
#line 75 "message.m"
          break;
#line 75 "message.m"
        case (MR_Integer) 2:
#line 75 "message.m"
          {
#line 75 "message.m"
            MR_Integer message__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "message.m"
            MR_Integer message__V_10_10;

#line 75 "message.m"
            message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 75 "message.m"
            if (message__succeeded)
#line 75 "message.m"
              {
#line 75 "message.m"
                message__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__HeadVar__2_2, (MR_Integer) 0)));
#line 2686 "message.c"
                message__succeeded = (message__V_9_9 == message__V_10_10);
#line 75 "message.m"
              }
#line 75 "message.m"
          }
#line 75 "message.m"
          break;
#line 75 "message.m"
        case (MR_Integer) 3:
#line 75 "message.m"
#line 75 "message.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) {
#line 75 "message.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 75 "message.m"
            case (MR_Integer) 0:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_Integer message__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "message.m"
                MR_Integer message__V_12_12;

#line 75 "message.m"
                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 75 "message.m"
                if (message__succeeded)
#line 75 "message.m"
                  {
#line 75 "message.m"
                    message__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2718 "message.c"
                    message__succeeded = (message__V_11_11 == message__V_12_12);
#line 75 "message.m"
                  }
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
            case (MR_Integer) 1:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_Integer message__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "message.m"
                MR_Integer message__V_14_14;

#line 75 "message.m"
                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 75 "message.m"
                if (message__succeeded)
#line 75 "message.m"
                  {
#line 75 "message.m"
                    message__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2743 "message.c"
                    message__succeeded = (message__V_13_13 == message__V_14_14);
#line 75 "message.m"
                  }
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
            case (MR_Integer) 2:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_Integer message__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "message.m"
                MR_Integer message__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 2)));
#line 75 "message.m"
                MR_Integer message__V_19_19;
#line 75 "message.m"
                MR_Integer message__V_20_20;

#line 75 "message.m"
                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 75 "message.m"
                if (message__succeeded)
#line 75 "message.m"
                  {
#line 75 "message.m"
                    message__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "message.m"
                    message__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 2)));
#line 2774 "message.c"
                    message__succeeded = (message__V_17_17 == message__V_19_19);
#line 75 "message.m"
                    if (message__succeeded)
#line 2778 "message.c"
                      message__succeeded = (message__V_18_18 == message__V_20_20);
#line 75 "message.m"
                  }
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
            case (MR_Integer) 3:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_Word message__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "message.m"
                MR_Word message__V_22_22;

#line 75 "message.m"
                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 75 "message.m"
                if (message__succeeded)
#line 75 "message.m"
                  {
#line 75 "message.m"
                    message__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2803 "message.c"
                    message__succeeded = (message__V_21_21 == message__V_22_22);
#line 75 "message.m"
                  }
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
            case (MR_Integer) 4:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_String message__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "message.m"
                MR_String message__V_26_26;

#line 75 "message.m"
                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 75 "message.m"
                if (message__succeeded)
#line 75 "message.m"
                  {
#line 75 "message.m"
                    message__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2828 "message.c"
                    message__succeeded = (strcmp(message__V_25_25, message__V_26_26) == 0);
#line 75 "message.m"
                  }
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
            case (MR_Integer) 5:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_String message__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "message.m"
                MR_String message__V_28_28;

#line 75 "message.m"
                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 75 "message.m"
                if (message__succeeded)
#line 75 "message.m"
                  {
#line 75 "message.m"
                    message__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2853 "message.c"
                    message__succeeded = (strcmp(message__V_27_27, message__V_28_28) == 0);
#line 75 "message.m"
                  }
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
            case (MR_Integer) 6:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_String message__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "message.m"
                MR_String message__V_30_30;

#line 75 "message.m"
                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 75 "message.m"
                if (message__succeeded)
#line 75 "message.m"
                  {
#line 75 "message.m"
                    message__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2878 "message.c"
                    message__succeeded = (strcmp(message__V_29_29, message__V_30_30) == 0);
#line 75 "message.m"
                  }
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
            case (MR_Integer) 7:
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_String message__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "message.m"
                MR_String message__V_36_36;

#line 75 "message.m"
                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 75 "message.m"
                if (message__succeeded)
#line 75 "message.m"
                  {
#line 75 "message.m"
                    message__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2903 "message.c"
                    message__succeeded = (strcmp(message__V_35_35, message__V_36_36) == 0);
#line 75 "message.m"
                  }
#line 75 "message.m"
              }
#line 75 "message.m"
              break;
#line 75 "message.m"
          }
#line 75 "message.m"
          break;
#line 75 "message.m"
      }
#line 75 "message.m"
    return message__succeeded;
#line 75 "message.m"
  }
#line 75 "message.m"
}

#line 43 "message.m"
void MR_CALL 
message____Compare____message_level_0_0(
#line 43 "message.m"
  MR_Word * message__HeadVar__1_1,
#line 43 "message.m"
  MR_Word message__HeadVar__2_2,
#line 43 "message.m"
  MR_Word message__HeadVar__3_3)
#line 43 "message.m"
{
#line 43 "message.m"
  {
#line 43 "message.m"
    MR_bool message__succeeded;
#line 43 "message.m"
    MR_Integer message__Cast_HeadVar1_4 = (MR_Integer) message__HeadVar__2_2;
#line 43 "message.m"
    MR_Integer message__Cast_HeadVar2_5 = (MR_Integer) message__HeadVar__3_3;

#line 43 "message.m"
    {
#line 43 "message.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(message__HeadVar__1_1, message__Cast_HeadVar1_4, message__Cast_HeadVar2_5);
#line 43 "message.m"
      return;
    }
#line 43 "message.m"
  }
#line 43 "message.m"
}

#line 43 "message.m"
MR_bool MR_CALL 
message____Unify____message_level_0_0(
#line 43 "message.m"
  MR_Word message__HeadVar__2_1,
#line 43 "message.m"
  MR_Word message__HeadVar__2_2)
#line 43 "message.m"
{
#line 2965 "message.c"
  {
#line 2967 "message.c"
    MR_bool message__succeeded = (message__HeadVar__2_1 == message__HeadVar__2_2);

#line 2970 "message.c"
    return message__succeeded;
#line 2972 "message.c"
  }
#line 43 "message.m"
}

#line 33 "message.m"
void MR_CALL 
message____Compare____message_0_0(
#line 33 "message.m"
  MR_Word * message__HeadVar__1_1,
#line 33 "message.m"
  MR_Word message__HeadVar__2_2,
#line 33 "message.m"
  MR_Word message__HeadVar__3_3)
#line 33 "message.m"
{
#line 33 "message.m"
  {
#line 33 "message.m"
    MR_bool message__succeeded;
#line 33 "message.m"
    MR_Integer message__CastX_9 = (MR_Integer) message__HeadVar__2_2;
#line 33 "message.m"
    MR_Integer message__CastY_10 = (MR_Integer) message__HeadVar__3_3;

#line 33 "message.m"
    message__succeeded = (message__CastX_9 == message__CastY_10);
#line 33 "message.m"
    if (message__succeeded)
#line 3001 "message.c"
      *message__HeadVar__1_1 = (MR_Integer) 0;
#line 33 "message.m"
    else
#line 33 "message.m"
      {
#line 33 "message.m"
        MR_Word message__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__2_2, (MR_Integer) 0)));
#line 33 "message.m"
        MR_Word message__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__2_2, (MR_Integer) 1)));
#line 33 "message.m"
        MR_Word message__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__3_3, (MR_Integer) 0)));
#line 33 "message.m"
        MR_Word message__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__3_3, (MR_Integer) 1)));
#line 33 "message.m"
        MR_Word message__V_8_8;

#line 33 "message.m"
        {
#line 33 "message.m"
          message____Compare____program_location_0_0(&message__V_8_8, message__V_4_4, message__V_6_6);
        }
#line 3023 "message.c"
        message__succeeded = (message__V_8_8 == (MR_Integer) 0);
#line 33 "message.m"
        message__succeeded = !(message__succeeded);
#line 33 "message.m"
        if (message__succeeded)
#line 33 "message.m"
          *message__HeadVar__1_1 = message__V_8_8;
#line 33 "message.m"
        else
#line 33 "message.m"
          {
#line 33 "message.m"
            message____Compare____message_type_0_0(message__HeadVar__1_1, message__V_5_5, message__V_7_7);
#line 33 "message.m"
            return;
          }
#line 33 "message.m"
      }
#line 33 "message.m"
  }
#line 33 "message.m"
}

#line 33 "message.m"
MR_bool MR_CALL 
message____Unify____message_0_0(
#line 33 "message.m"
  MR_Word message__HeadVar__1_1,
#line 33 "message.m"
  MR_Word message__HeadVar__2_2)
#line 33 "message.m"
{
#line 33 "message.m"
  {
#line 33 "message.m"
    MR_bool message__succeeded;
#line 33 "message.m"
    MR_Integer message__CastX_7 = (MR_Integer) message__HeadVar__1_1;
#line 33 "message.m"
    MR_Integer message__CastY_8 = (MR_Integer) message__HeadVar__2_2;

#line 33 "message.m"
    message__succeeded = (message__CastX_7 == message__CastY_8);
#line 33 "message.m"
    if (message__succeeded)
#line 33 "message.m"
      message__succeeded = MR_TRUE;
#line 33 "message.m"
    else
#line 33 "message.m"
      {
#line 33 "message.m"
        MR_Word message__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 0)));
#line 33 "message.m"
        MR_Word message__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 1)));
#line 33 "message.m"
        MR_Word message__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__2_2, (MR_Integer) 0)));
#line 33 "message.m"
        MR_Word message__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__2_2, (MR_Integer) 1)));

#line 3084 "message.c"
        {
#line 3086 "message.c"
          message__succeeded = message____Unify____program_location_0_0(message__V_3_3, message__V_5_5);
        }
#line 33 "message.m"
        if (message__succeeded)
#line 3091 "message.c"
          {
#line 3093 "message.c"
            return message__succeeded = message____Unify____message_type_0_0(message__V_4_4, message__V_6_6);
          }
#line 33 "message.m"
      }
#line 33 "message.m"
    return message__succeeded;
#line 33 "message.m"
  }
#line 33 "message.m"
}

#line 407 "message.m"
static void MR_CALL 
message__write_out_message_4_p_0(
#line 407 "message.m"
  MR_Word message__Stream_5,
#line 407 "message.m"
  MR_Word message__Message_6)
#line 407 "message.m"
{
#line 410 "message.m"
  {
#line 410 "message.m"
    MR_bool message__succeeded;
#line 410 "message.m"
    MR_Word message__Level_8;
#line 410 "message.m"
    MR_Integer message__VerbosityLevel_9;
#line 410 "message.m"
    MR_Word message__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__Message_6, (MR_Integer) 1)));
#line 203 "message.m"
    MR_Word message__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__Message_6, (MR_Integer) 0)));
#line 413 "message.m"
    MR_Integer message__V_14_14;

#line 280 "message.m"
#line 280 "message.m"
    switch (MR_tag((MR_Word) message__Type_18)) {
#line 280 "message.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 280 "message.m"
      case (MR_Integer) 0:
#line 280 "message.m"
#line 280 "message.m"
        switch (MR_unmkbody(message__Type_18)) {
#line 280 "message.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 280 "message.m"
          case (MR_Integer) 0:
#line 280 "message.m"
          case (MR_Integer) 1:
#line 281 "message.m"
            message__Level_8 = (MR_Integer) 0;
#line 280 "message.m"
            break;
#line 280 "message.m"
          case (MR_Integer) 2:
#line 288 "message.m"
            message__Level_8 = (MR_Integer) 1;
#line 280 "message.m"
            break;
#line 280 "message.m"
          case (MR_Integer) 3:
#line 295 "message.m"
            message__Level_8 = (MR_Integer) 2;
#line 280 "message.m"
            break;
#line 280 "message.m"
          case (MR_Integer) 4:
#line 280 "message.m"
          case (MR_Integer) 5:
#line 301 "message.m"
            message__Level_8 = (MR_Integer) 3;
#line 280 "message.m"
            break;
#line 280 "message.m"
        }
#line 280 "message.m"
        break;
#line 280 "message.m"
      case (MR_Integer) 1:
#line 280 "message.m"
      case (MR_Integer) 2:
#line 281 "message.m"
        message__Level_8 = (MR_Integer) 0;
#line 280 "message.m"
        break;
#line 280 "message.m"
      case (MR_Integer) 3:
#line 280 "message.m"
#line 280 "message.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_18, (MR_Integer) 0)))) {
#line 280 "message.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 280 "message.m"
          case (MR_Integer) 0:
#line 281 "message.m"
            message__Level_8 = (MR_Integer) 0;
#line 280 "message.m"
            break;
#line 280 "message.m"
          case (MR_Integer) 1:
#line 280 "message.m"
          case (MR_Integer) 2:
#line 280 "message.m"
          case (MR_Integer) 3:
#line 288 "message.m"
            message__Level_8 = (MR_Integer) 1;
#line 280 "message.m"
            break;
#line 280 "message.m"
          case (MR_Integer) 4:
#line 280 "message.m"
          case (MR_Integer) 5:
#line 280 "message.m"
          case (MR_Integer) 6:
#line 295 "message.m"
            message__Level_8 = (MR_Integer) 2;
#line 280 "message.m"
            break;
#line 280 "message.m"
          case (MR_Integer) 7:
#line 301 "message.m"
            message__Level_8 = (MR_Integer) 3;
#line 280 "message.m"
            break;
#line 280 "message.m"
        }
#line 280 "message.m"
        break;
#line 280 "message.m"
    }
#line 401 "message.m"
{
#define MR_PROC_LABEL message__write_out_message_4_p_0


		{
#line 401 "message.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3238 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 401 "message.m"
{
#define MR_PROC_LABEL message__write_out_message_4_p_0

	MR_Integer X;

		{
#line 401 "message.m"
X = message__mutable_variable_verbosity_level_mut;

#line 3254 "message.c"

		;}
#undef MR_PROC_LABEL
	 message__VerbosityLevel_9  = X;
#line 401 "message.m"
}
#line 401 "message.m"
{
#define MR_PROC_LABEL message__write_out_message_4_p_0


		{
#line 401 "message.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3273 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 264 "message.m"
    message__V_14_14 = ((&message_vector_common_1[4 + message__Level_8]))->message__vector_common_type_1_0__vct_1_f_0;
#line 413 "message.m"
    message__succeeded = (message__V_14_14 <= message__VerbosityLevel_9);
#line 417 "message.m"
    if (message__succeeded)
#line 414 "message.m"
      {
#line 414 "message.m"
        MR_String message__MessageStr_10;

#line 414 "message.m"
        {
#line 414 "message.m"
          message__message_to_string_2_p_0(message__Message_6, &message__MessageStr_10);
        }
#line 415 "message.m"
        {
#line 415 "message.m"
          mercury__io__write_string_4_p_0(message__Stream_5, message__MessageStr_10);
        }
#line 416 "message.m"
        {
#line 416 "message.m"
          mercury__io__nl_3_p_0(message__Stream_5);
#line 416 "message.m"
          return;
        }
#line 414 "message.m"
      }
#line 417 "message.m"
    else
#line 417 "message.m"
      {
#line 417 "message.m"
      }
#line 410 "message.m"
  }
#line 407 "message.m"
}

#line 401 "message.m"
static void MR_CALL 
message__unsafe_set_verbosity_level_mut_1_p_0(
#line 401 "message.m"
  MR_Integer message__X_1)
#line 401 "message.m"
{
#line 401 "message.m"
  {
#line 401 "message.m"
    MR_bool message__succeeded;

#line 401 "message.m"
{
#define MR_PROC_LABEL message__unsafe_set_verbosity_level_mut_1_p_0

	MR_Integer X;

	X =  message__X_1 ;
		{
#line 401 "message.m"
message__mutable_variable_verbosity_level_mut = X;

#line 3343 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 401 "message.m"
  }
#line 401 "message.m"
}

#line 401 "message.m"
static void MR_CALL 
message__unsafe_get_verbosity_level_mut_1_p_0(
#line 401 "message.m"
  MR_Integer * message__X_1)
#line 401 "message.m"
{
#line 401 "message.m"
  {
#line 401 "message.m"
    MR_bool message__succeeded;

#line 401 "message.m"
{
#define MR_PROC_LABEL message__unsafe_get_verbosity_level_mut_1_p_0

	MR_Integer X;

		{
#line 401 "message.m"
X = message__mutable_variable_verbosity_level_mut;

#line 3376 "message.c"

		;}
#undef MR_PROC_LABEL
	 *message__X_1  = X;
#line 401 "message.m"
}
#line 401 "message.m"
  }
#line 401 "message.m"
}

#line 401 "message.m"
static void MR_CALL 
message__unlock_verbosity_level_mut_0_p_0(void)
#line 401 "message.m"
{
#line 401 "message.m"
  {
#line 401 "message.m"
    MR_bool message__succeeded;

#line 401 "message.m"
{
#define MR_PROC_LABEL message__unlock_verbosity_level_mut_0_p_0


		{
#line 401 "message.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3410 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 401 "message.m"
  }
#line 401 "message.m"
}

#line 401 "message.m"
static void MR_CALL 
message__lock_verbosity_level_mut_0_p_0(void)
#line 401 "message.m"
{
#line 401 "message.m"
  {
#line 401 "message.m"
    MR_bool message__succeeded;

#line 401 "message.m"
{
#define MR_PROC_LABEL message__lock_verbosity_level_mut_0_p_0


		{
#line 401 "message.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3443 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 401 "message.m"
  }
#line 401 "message.m"
}

#line 401 "message.m"
static void MR_CALL 
message__initialise_mutable_verbosity_level_mut_0_p_0(void)
#line 401 "message.m"
{
#line 401 "message.m"
  {
#line 401 "message.m"
    MR_bool message__succeeded;

#line 401 "message.m"
{
#define MR_PROC_LABEL message__initialise_mutable_verbosity_level_mut_0_p_0


		{
#line 401 "message.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&message__mutable_variable_verbosity_level_mut_lock, MR_MUTEX_ATTR);
#endif

#line 3475 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 401 "message.m"
{
#define MR_PROC_LABEL message__initialise_mutable_verbosity_level_mut_0_p_0


		{
#line 401 "message.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3493 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 401 "message.m"
{
#define MR_PROC_LABEL message__initialise_mutable_verbosity_level_mut_0_p_0

	MR_Integer X;

	X =  (MR_Integer) 2 ;
		{
#line 401 "message.m"
message__mutable_variable_verbosity_level_mut = X;

#line 3510 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 401 "message.m"
{
#define MR_PROC_LABEL message__initialise_mutable_verbosity_level_mut_0_p_0


		{
#line 401 "message.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3528 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 401 "message.m"
  }
#line 401 "message.m"
}

#line 401 "message.m"
static void MR_CALL 
message__pre_initialise_mutable_verbosity_level_mut_0_p_0(void)
#line 401 "message.m"
{
#line 401 "message.m"
  {
#line 401 "message.m"
    MR_bool message__succeeded;

#line 401 "message.m"
{
#define MR_PROC_LABEL message__pre_initialise_mutable_verbosity_level_mut_0_p_0


		{
#line 401 "message.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&message__mutable_variable_verbosity_level_mut_lock, MR_MUTEX_ATTR);
#endif

#line 3560 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 401 "message.m"
  }
#line 401 "message.m"
}

#line 306 "message.m"
static MR_Word MR_CALL 
message__message_type_to_string_1_f_0(
#line 306 "message.m"
  MR_Word message__MessageType_3)
#line 306 "message.m"
{
#line 308 "message.m"
  {
#line 308 "message.m"
    MR_bool message__succeeded;
#line 308 "message.m"
    MR_Word message__Cord_4;
#line 308 "message.m"
    MR_String message__String_5;

#line 312 "message.m"
#line 312 "message.m"
    switch (MR_tag((MR_Word) message__MessageType_3)) {
#line 312 "message.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 312 "message.m"
      case (MR_Integer) 0:
#line 312 "message.m"
#line 312 "message.m"
        switch (MR_unmkbody(message__MessageType_3)) {
#line 312 "message.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 312 "message.m"
          case (MR_Integer) 0:
#line 311 "message.m"
            message__String_5 = (MR_String) "Found candidate conjunction";
#line 312 "message.m"
            break;
#line 312 "message.m"
          case (MR_Integer) 1:
#line 331 "message.m"
            message__String_5 = (MR_String) "Found pushed conjuncts above callsite threshold";
#line 312 "message.m"
            break;
#line 312 "message.m"
          case (MR_Integer) 2:
#line 340 "message.m"
            message__String_5 = (MR_String) "Parallelising call pairs that have more than one dependent variable is not yet supported.";
#line 312 "message.m"
            break;
#line 312 "message.m"
          case (MR_Integer) 3:
#line 355 "message.m"
            message__String_5 = (MR_String) "Could not look up proc defn, perhaps this procedure is built-in";
#line 312 "message.m"
            break;
#line 312 "message.m"
          case (MR_Integer) 4:
#line 363 "message.m"
            message__String_5 = (MR_String) "extra proc dynamics for a clique proc are not currently handled.";
#line 312 "message.m"
            break;
#line 312 "message.m"
          case (MR_Integer) 5:
#line 314 "message.m"
            message__String_5 = (MR_String) "Cannot lookup coverage points";
#line 312 "message.m"
            break;
#line 312 "message.m"
        }
#line 312 "message.m"
        break;
#line 312 "message.m"
      case (MR_Integer) 1:
#line 327 "message.m"
        {
#line 327 "message.m"
          MR_Integer message__Num_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__MessageType_3, (MR_Integer) 0)));
#line 327 "message.m"
          MR_String message__V_152_152;
#line 327 "message.m"
          MR_String message__V_159_159;

#line 328 "message.m"
          {
#line 328 "message.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__Num_6, &message__V_152_152);
          }
#line 328 "message.m"
          {
#line 328 "message.m"
            message__V_159_159 = mercury__string__f_43_43_2_f_0(message__V_152_152, (MR_String) " conjuncts above callsite threshold");
          }
#line 328 "message.m"
          {
#line 328 "message.m"
            message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Found ", message__V_159_159);
          }
#line 327 "message.m"
        }
#line 312 "message.m"
        break;
#line 312 "message.m"
      case (MR_Integer) 2:
#line 327 "message.m"
        {
#line 327 "message.m"
          MR_Integer message__Num_62 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__MessageType_3, (MR_Integer) 0)));
#line 327 "message.m"
          MR_String message__V_132_132;
#line 327 "message.m"
          MR_String message__V_139_139;

#line 328 "message.m"
          {
#line 328 "message.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__Num_62, &message__V_132_132);
          }
#line 328 "message.m"
          {
#line 328 "message.m"
            message__V_139_139 = mercury__string__f_43_43_2_f_0(message__V_132_132, (MR_String) " partitions, this may reduce parallelism");
          }
#line 328 "message.m"
          {
#line 328 "message.m"
            message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Split conjunction into ", message__V_139_139);
          }
#line 327 "message.m"
        }
#line 312 "message.m"
        break;
#line 312 "message.m"
      case (MR_Integer) 3:
#line 312 "message.m"
#line 312 "message.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) {
#line 312 "message.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 312 "message.m"
          case (MR_Integer) 0:
#line 327 "message.m"
            {
#line 327 "message.m"
              MR_Integer message__Num_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 327 "message.m"
              MR_String message__V_142_142;
#line 327 "message.m"
              MR_String message__V_149_149;

#line 328 "message.m"
              {
#line 328 "message.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__Num_57, &message__V_142_142);
              }
#line 328 "message.m"
              {
#line 328 "message.m"
                message__V_149_149 = mercury__string__f_43_43_2_f_0(message__V_142_142, (MR_String) " conjunctions with a positive speedup due to parallelisation");
              }
#line 328 "message.m"
              {
#line 328 "message.m"
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Found ", message__V_149_149);
              }
#line 327 "message.m"
            }
#line 312 "message.m"
            break;
#line 312 "message.m"
          case (MR_Integer) 1:
#line 333 "message.m"
            {
#line 333 "message.m"
              MR_Integer message__CandidateConjuncts_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 333 "message.m"
              MR_String message__V_114_114;

#line 336 "message.m"
              {
#line 336 "message.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__CandidateConjuncts_8, &message__V_114_114);
              }
#line 334 "message.m"
              {
#line 334 "message.m"
                message__String_5 = mercury__string__f_43_43_2_f_0(message__V_114_114, (MR_String) " conjunctions not parallelised: Seen duplicate instantiations");
              }
#line 333 "message.m"
            }
#line 312 "message.m"
            break;
#line 312 "message.m"
          case (MR_Integer) 2:
#line 343 "message.m"
            {
#line 343 "message.m"
              MR_Integer message__PartNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 343 "message.m"
              MR_Integer message__NumCalls_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 2)));
#line 343 "message.m"
              MR_String message__V_94_94;
#line 343 "message.m"
              MR_Word message__V_100_100 = (MR_Word) &message_scalar_common_2[0];
#line 343 "message.m"
              MR_String message__V_101_101;
#line 343 "message.m"
              MR_String message__V_103_103;
#line 343 "message.m"
              MR_String message__V_104_104;
#line 343 "message.m"
              MR_String message__V_111_111;

#line 346 "message.m"
              {
#line 346 "message.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(message__V_100_100, message__NumCalls_10, &message__V_94_94);
              }
#line 344 "message.m"
              {
#line 344 "message.m"
                message__V_101_101 = mercury__string__f_43_43_2_f_0(message__V_94_94, (MR_String) " costly calls and cannot be parallelised");
              }
#line 344 "message.m"
              {
#line 344 "message.m"
                message__V_103_103 = mercury__string__f_43_43_2_f_0((MR_String) " has only ", message__V_101_101);
              }
#line 346 "message.m"
              {
#line 346 "message.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(message__V_100_100, message__PartNum_9, &message__V_104_104);
              }
#line 344 "message.m"
              {
#line 344 "message.m"
                message__V_111_111 = mercury__string__f_43_43_2_f_0(message__V_104_104, message__V_103_103);
              }
#line 344 "message.m"
              {
#line 344 "message.m"
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Partition ", message__V_111_111);
              }
#line 343 "message.m"
            }
#line 312 "message.m"
            break;
#line 312 "message.m"
          case (MR_Integer) 3:
#line 348 "message.m"
            {
#line 348 "message.m"
              MR_Word message__Detism_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 348 "message.m"
              MR_String message__V_32_32;
#line 348 "message.m"
              MR_String message__V_122_122;
#line 348 "message.m"
              MR_String message__V_129_129;

#line 351 "message.m"
              {
#line 351 "message.m"
                message__V_32_32 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0, ((MR_Box) (message__Detism_11)));
              }
#line 351 "message.m"
              {
#line 351 "message.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__V_32_32, &message__V_122_122);
              }
#line 349 "message.m"
              {
#line 349 "message.m"
                message__V_129_129 = mercury__string__f_43_43_2_f_0(message__V_122_122, (MR_String) " goals amongst goals above the parallelisation overhead.");
              }
#line 349 "message.m"
              {
#line 349 "message.m"
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "There are ", message__V_129_129);
              }
#line 348 "message.m"
            }
#line 312 "message.m"
            break;
#line 312 "message.m"
          case (MR_Integer) 4:
#line 357 "message.m"
            {
#line 357 "message.m"
              MR_String message__Error_12 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 357 "message.m"
              MR_String message__V_23_23;

#line 359 "message.m"
              {
#line 359 "message.m"
                message__V_23_23 = mercury__string__f_43_43_2_f_0(message__Error_12, (MR_String) "\n  falling back to some other method");
              }
#line 358 "message.m"
              {
#line 358 "message.m"
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute procrep coverage annotation: ", message__V_23_23);
              }
#line 357 "message.m"
            }
#line 312 "message.m"
            break;
#line 312 "message.m"
          case (MR_Integer) 5:
#line 377 "message.m"
            {
#line 377 "message.m"
              MR_String message__ErrorStr_67 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 377 "message.m"
              MR_String message__V_85_85;

#line 378 "message.m"
              {
#line 378 "message.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__ErrorStr_67, &message__V_85_85);
              }
#line 378 "message.m"
              {
#line 378 "message.m"
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute cost of recursive calls: ", message__V_85_85);
              }
#line 377 "message.m"
            }
#line 312 "message.m"
            break;
#line 312 "message.m"
          case (MR_Integer) 6:
#line 377 "message.m"
            {
#line 377 "message.m"
              MR_String message__ErrorStr_72 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 377 "message.m"
              MR_String message__V_77_77;

#line 378 "message.m"
              {
#line 378 "message.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__ErrorStr_72, &message__V_77_77);
              }
#line 378 "message.m"
              {
#line 378 "message.m"
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute the production or consumption time of a variable: ", message__V_77_77);
              }
#line 377 "message.m"
            }
#line 312 "message.m"
            break;
#line 312 "message.m"
          case (MR_Integer) 7:
#line 377 "message.m"
            {
#line 377 "message.m"
              MR_String message__ErrorStr_13 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 377 "message.m"
              MR_String message__V_161_161;

#line 378 "message.m"
              {
#line 378 "message.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__ErrorStr_13, &message__V_161_161);
              }
#line 378 "message.m"
              {
#line 378 "message.m"
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Exception thrown: ", message__V_161_161);
              }
#line 377 "message.m"
            }
#line 312 "message.m"
            break;
#line 312 "message.m"
        }
#line 312 "message.m"
        break;
#line 312 "message.m"
    }
#line 380 "message.m"
    {
#line 380 "message.m"
      message__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (message__String_5)));
    }
#line 308 "message.m"
    return message__Cord_4;
#line 308 "message.m"
  }
#line 306 "message.m"
}

#line 187 "message.m"
MR_Integer MR_CALL 
message__default_verbosity_level_0_f_0(void)
#line 187 "message.m"
{
#line 424 "message.m"
  {
#line 424 "message.m"
    MR_bool message__succeeded;

#line 424 "message.m"
    return (MR_Integer) 2;
#line 424 "message.m"
  }
#line 187 "message.m"
}

#line 183 "message.m"
void MR_CALL 
message__set_verbosity_level_3_p_0(
#line 183 "message.m"
  MR_Integer message__VerbosityLevel_4)
#line 183 "message.m"
{
#line 401 "message.m"
  {
#line 401 "message.m"
    MR_bool message__succeeded;

#line 401 "message.m"
{
#define MR_PROC_LABEL message__set_verbosity_level_3_p_0


		{
#line 401 "message.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 4002 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 401 "message.m"
{
#define MR_PROC_LABEL message__set_verbosity_level_3_p_0

	MR_Integer X;

	X =  message__VerbosityLevel_4 ;
		{
#line 401 "message.m"
message__mutable_variable_verbosity_level_mut = X;

#line 4019 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 401 "message.m"
{
#define MR_PROC_LABEL message__set_verbosity_level_3_p_0


		{
#line 401 "message.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 4037 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 401 "message.m"
  }
#line 183 "message.m"
}

#line 405 "message.m"
static void MR_CALL 
message__write_out_messages_4_p_0_1(
#line 405 "message.m"
  MR_Box message__closure_arg,
#line 405 "message.m"
  MR_Box message__wrapper_arg_1,
#line 405 "message.m"
  MR_Box message__wrapper_arg_2,
#line 405 "message.m"
  MR_Box * message__wrapper_arg_3)
#line 405 "message.m"
{
#line 405 "message.m"
  {
#line 405 "message.m"
    MR_Box message__closure = message__closure_arg;

#line 405 "message.m"
    {
#line 405 "message.m"
      message__write_out_message_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), message__closure, (MR_Integer) 3))), ((MR_Word) message__wrapper_arg_1));
#line 405 "message.m"
      return;
    }
#line 405 "message.m"
  }
#line 405 "message.m"
}

#line 177 "message.m"
void MR_CALL 
message__write_out_messages_4_p_0(
#line 177 "message.m"
  MR_Word message__Stream_5,
#line 177 "message.m"
  MR_Word message__Messages_6)
#line 177 "message.m"
{
#line 404 "message.m"
  {
#line 404 "message.m"
    MR_bool message__succeeded;
#line 404 "message.m"
    MR_Word message__V_10_10;
#line 405 "message.m"
    MR_Box message__conv0_STATE_VARIABLE_IO_9;

#line 405 "message.m"
    {
#line 405 "message.m"
      message__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 405 "message.m"
      MR_hl_field(MR_mktag(0), message__V_10_10, 0) = ((MR_Box) (&message_scalar_common_3[0]));
#line 405 "message.m"
      MR_hl_field(MR_mktag(0), message__V_10_10, 1) = ((MR_Box) (message__write_out_messages_4_p_0_1));
#line 405 "message.m"
      MR_hl_field(MR_mktag(0), message__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 405 "message.m"
      MR_hl_field(MR_mktag(0), message__V_10_10, 3) = ((MR_Box) (message__Stream_5));
#line 405 "message.m"
    }
#line 405 "message.m"
    {
#line 405 "message.m"
      mercury__cord__foldl_pred_4_p_2((MR_Word) &message__message__type_ctor_info_message_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, message__V_10_10, message__Messages_6, ((MR_Box) ((MR_Integer) 0)), &message__conv0_STATE_VARIABLE_IO_9);
    }
#line 404 "message.m"
  }
#line 177 "message.m"
}

#line 171 "message.m"
MR_Integer MR_CALL 
message__indent_size_1_f_0(
#line 171 "message.m"
  MR_Integer message__N_3)
#line 171 "message.m"
{
#line 397 "message.m"
  {
#line 397 "message.m"
    MR_bool message__succeeded;
#line 397 "message.m"
    MR_Integer message__HeadVar__2_2 = ((MR_Integer) 2 * message__N_3);

#line 397 "message.m"
    return message__HeadVar__2_2;
#line 397 "message.m"
  }
#line 171 "message.m"
}

#line 167 "message.m"
MR_Word MR_CALL 
message__nl_0_f_0(void)
#line 167 "message.m"
{
#line 395 "message.m"
  {
#line 395 "message.m"
    MR_bool message__succeeded;
#line 395 "message.m"
    MR_Word message__HeadVar__1_1;

#line 395 "message.m"
    {
#line 395 "message.m"
      message__HeadVar__1_1 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
#line 395 "message.m"
    return message__HeadVar__1_1;
#line 395 "message.m"
  }
#line 167 "message.m"
}

#line 164 "message.m"
MR_Word MR_CALL 
message__nl_indent_1_f_0(
#line 164 "message.m"
  MR_Integer message__N_3)
#line 164 "message.m"
{
#line 393 "message.m"
  {
#line 393 "message.m"
    MR_bool message__succeeded;
#line 393 "message.m"
    MR_Word message__HeadVar__2_2;
#line 393 "message.m"
    MR_Word message__V_4_4;
#line 393 "message.m"
    MR_Word message__V_5_5;

#line 395 "message.m"
    {
#line 395 "message.m"
      message__V_4_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
#line 393 "message.m"
    {
#line 393 "message.m"
      message__V_5_5 = message__indent_1_f_0(message__N_3);
    }
#line 393 "message.m"
    {
#line 393 "message.m"
      message__HeadVar__2_2 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, message__V_4_4, message__V_5_5);
    }
#line 393 "message.m"
    return message__HeadVar__2_2;
#line 393 "message.m"
  }
#line 164 "message.m"
}

#line 160 "message.m"
MR_Word MR_CALL 
message__indent_1_f_0(
#line 160 "message.m"
  MR_Integer message__N_3)
#line 160 "message.m"
{
#line 387 "message.m"
  {
#line 387 "message.m"
    MR_bool message__succeeded = (message__N_3 < (MR_Integer) 0);
#line 387 "message.m"
    MR_Word message__Indent_4;

#line 387 "message.m"
    if (message__succeeded)
#line 386 "message.m"
      {
#line 386 "message.m"
        {
#line 386 "message.m"
          mercury__require__error_1_p_0((MR_String) "automatic_parallelism: Negative indent");
        }
#line 386 "message.m"
      }
#line 387 "message.m"
    else
#line 389 "message.m"
      {
#line 387 "message.m"
        message__succeeded = (message__N_3 == (MR_Integer) 0);
#line 389 "message.m"
        if (message__succeeded)
#line 388 "message.m"
          {
#line 388 "message.m"
            {
#line 388 "message.m"
              message__Indent_4 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 388 "message.m"
          }
#line 389 "message.m"
        else
#line 390 "message.m"
          {
#line 390 "message.m"
            MR_Word message__V_7_7;
#line 390 "message.m"
            MR_Integer message__V_8_8 = (message__N_3 - (MR_Integer) 1);

#line 390 "message.m"
            {
#line 390 "message.m"
              message__V_7_7 = message__indent_1_f_0(message__V_8_8);
            }
#line 390 "message.m"
            {
#line 390 "message.m"
              message__Indent_4 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, message__V_7_7, ((MR_Box) ((MR_String) "  ")));
            }
#line 390 "message.m"
          }
#line 389 "message.m"
      }
#line 387 "message.m"
    return message__Indent_4;
#line 387 "message.m"
  }
#line 160 "message.m"
}

#line 70 "message.m"
void MR_CALL 
message__append_message_4_p_0(
#line 70 "message.m"
  MR_Word message__Location_5,
#line 70 "message.m"
  MR_Word message__MessageType_6,
#line 70 "message.m"
  MR_Word message__STATE_VARIABLE_Messages_0_9,
#line 70 "message.m"
  MR_Word * message__STATE_VARIABLE_Messages_10)
#line 70 "message.m"
{
#line 249 "message.m"
  {
#line 249 "message.m"
    MR_bool message__succeeded;
#line 249 "message.m"
    MR_Word message__Message_8;

#line 250 "message.m"
    {
#line 250 "message.m"
      message__Message_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 250 "message.m"
      MR_hl_field(MR_mktag(0), message__Message_8, 0) = ((MR_Box) (message__Location_5));
#line 250 "message.m"
      MR_hl_field(MR_mktag(0), message__Message_8, 1) = ((MR_Box) (message__MessageType_6));
#line 250 "message.m"
    }
#line 251 "message.m"
    {
#line 251 "message.m"
      *message__STATE_VARIABLE_Messages_10 = mercury__cord__snoc_2_f_0((MR_Word) &message__message__type_ctor_info_message_0, message__STATE_VARIABLE_Messages_0_9, ((MR_Box) (message__Message_8)));
    }
#line 249 "message.m"
  }
#line 70 "message.m"
}

#line 67 "message.m"
void MR_CALL 
message__location_to_string_3_p_0(
#line 67 "message.m"
  MR_Integer message__Level_4,
#line 67 "message.m"
  MR_Word message__Location_5,
#line 67 "message.m"
  MR_Word * message__String_6)
#line 67 "message.m"
{
#line 219 "message.m"
  {
#line 219 "message.m"
    MR_bool message__succeeded;

#line 219 "message.m"
#line 219 "message.m"
    switch (MR_tag((MR_Word) message__Location_5)) {
#line 219 "message.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 219 "message.m"
      case (MR_Integer) 0:
#line 219 "message.m"
        {
#line 219 "message.m"
          MR_Word message__TypeCtorInfo_52_52;
#line 219 "message.m"
          MR_Word message__ProcLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__Location_5, (MR_Integer) 0)));
#line 219 "message.m"
          MR_String message__ProcLabelString_8;
#line 219 "message.m"
          MR_Word message__V_42_42;
#line 219 "message.m"
          MR_Word message__V_43_43;
#line 219 "message.m"
          MR_Word message__V_44_44;
#line 219 "message.m"
          MR_Word message__V_46_46;
#line 219 "message.m"
          MR_Word message__V_47_47;
#line 219 "message.m"
          MR_Word message__V_48_48;

#line 220 "message.m"
          {
#line 220 "message.m"
            program_representation_utils__print_proc_label_to_string_2_p_0(message__ProcLabel_7, &message__ProcLabelString_8);
          }
#line 4366 "message.c"
          message__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 221 "message.m"
          {
#line 221 "message.m"
            message__V_42_42 = message__indent_1_f_0(message__Level_4);
          }
#line 221 "message.m"
          {
#line 221 "message.m"
            message__V_44_44 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_52_52, ((MR_Box) ((MR_String) "Proc: ")));
          }
#line 222 "message.m"
          {
#line 222 "message.m"
            message__V_47_47 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_52_52, ((MR_Box) (message__ProcLabelString_8)));
          }
#line 222 "message.m"
          {
#line 222 "message.m"
            message__V_48_48 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_52_52, ((MR_Box) ((MR_String) "\n")));
          }
#line 222 "message.m"
          {
#line 222 "message.m"
            message__V_46_46 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_52_52, message__V_47_47, message__V_48_48);
          }
#line 221 "message.m"
          {
#line 221 "message.m"
            message__V_43_43 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_52_52, message__V_44_44, message__V_46_46);
          }
#line 221 "message.m"
          {
#line 221 "message.m"
            *message__String_6 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_52_52, message__V_42_42, message__V_43_43);
          }
#line 219 "message.m"
        }
#line 219 "message.m"
        break;
#line 219 "message.m"
      case (MR_Integer) 1:
#line 224 "message.m"
        {
#line 224 "message.m"
          MR_Word message__TypeCtorInfo_55_55;
#line 224 "message.m"
          MR_Word message__RevGoalPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__Location_5, (MR_Integer) 1)));
#line 224 "message.m"
          MR_Word message__FirstLine_10;
#line 224 "message.m"
          MR_Word message__GoalPathString_11;
#line 224 "message.m"
          MR_Word message__SecondLine_14;
#line 224 "message.m"
          MR_Word message__V_32_32;
#line 224 "message.m"
          MR_Word message__V_38_38;
#line 224 "message.m"
          MR_Word message__V_39_39;
#line 224 "message.m"
          MR_Word message__V_40_40;
#line 224 "message.m"
          MR_Word message__ProcLabel_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__Location_5, (MR_Integer) 0)));

#line 225 "message.m"
          {
#line 225 "message.m"
            message__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 225 "message.m"
            MR_hl_field(MR_mktag(0), message__V_32_32, 0) = ((MR_Box) (message__ProcLabel_50));
#line 225 "message.m"
          }
#line 225 "message.m"
          {
#line 225 "message.m"
            message__location_to_string_3_p_0(message__Level_4, message__V_32_32, &message__FirstLine_10);
          }
#line 229 "message.m"
          if ((message__RevGoalPath_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "message.m"
            {
#line 228 "message.m"
              {
#line 228 "message.m"
                message__GoalPathString_11 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Root goal")));
              }
#line 227 "message.m"
            }
#line 229 "message.m"
          else
#line 230 "message.m"
            {
#line 230 "message.m"
              MR_Word message__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 230 "message.m"
              MR_Word message__V_33_33;
#line 230 "message.m"
              MR_Word message__V_35_35;
#line 230 "message.m"
              MR_String message__V_36_36;

#line 231 "message.m"
              {
#line 231 "message.m"
                message__V_33_33 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_54_54, ((MR_Box) ((MR_String) "Goal: ")));
              }
#line 232 "message.m"
              {
#line 232 "message.m"
                message__V_36_36 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(message__RevGoalPath_9);
              }
#line 232 "message.m"
              {
#line 232 "message.m"
                message__V_35_35 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_54_54, ((MR_Box) (message__V_36_36)));
              }
#line 231 "message.m"
              {
#line 231 "message.m"
                message__GoalPathString_11 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_54_54, message__V_33_33, message__V_35_35);
              }
#line 230 "message.m"
            }
#line 4491 "message.c"
          message__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 234 "message.m"
          {
#line 234 "message.m"
            message__V_38_38 = message__indent_1_f_0(message__Level_4);
          }
#line 234 "message.m"
          {
#line 234 "message.m"
            message__V_40_40 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_55_55, ((MR_Box) ((MR_String) "\n")));
          }
#line 234 "message.m"
          {
#line 234 "message.m"
            message__V_39_39 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_55_55, message__GoalPathString_11, message__V_40_40);
          }
#line 234 "message.m"
          {
#line 234 "message.m"
            message__SecondLine_14 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_55_55, message__V_38_38, message__V_39_39);
          }
#line 235 "message.m"
          {
#line 235 "message.m"
            *message__String_6 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_55_55, message__FirstLine_10, message__SecondLine_14);
          }
#line 224 "message.m"
        }
#line 219 "message.m"
        break;
#line 219 "message.m"
      case (MR_Integer) 2:
#line 237 "message.m"
        {
#line 237 "message.m"
          MR_Word message__TypeCtorInfo_56_56;
#line 237 "message.m"
          MR_Integer message__Id_15;
#line 237 "message.m"
          MR_String message__String0_16;
#line 237 "message.m"
          MR_Word message__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), message__Location_5, (MR_Integer) 0)));
#line 237 "message.m"
          MR_Word message__V_30_30;
#line 237 "message.m"
          MR_Word message__V_31_31;
#line 237 "message.m"
          MR_String message__V_66_66;

#line 237 "message.m"
          message__Id_15 = (MR_Integer) message__V_25_25;
#line 238 "message.m"
          {
#line 238 "message.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__Id_15, &message__V_66_66);
          }
#line 238 "message.m"
          {
#line 238 "message.m"
            message__String0_16 = mercury__string__f_43_43_2_f_0((MR_String) "clique ", message__V_66_66);
          }
#line 4553 "message.c"
          message__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 239 "message.m"
          {
#line 239 "message.m"
            message__V_30_30 = message__indent_1_f_0(message__Level_4);
          }
#line 239 "message.m"
          {
#line 239 "message.m"
            message__V_31_31 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_56_56, ((MR_Box) (message__String0_16)));
          }
#line 239 "message.m"
          {
#line 239 "message.m"
            *message__String_6 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_56_56, message__V_30_30, message__V_31_31);
          }
#line 237 "message.m"
        }
#line 219 "message.m"
        break;
#line 219 "message.m"
      case (MR_Integer) 3:
#line 241 "message.m"
        {
#line 241 "message.m"
          MR_Word message__TypeCtorInfo_57_57;
#line 241 "message.m"
          MR_Word message__CSDPtr_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__Location_5, (MR_Integer) 0)));
#line 241 "message.m"
          MR_Integer message__CSDNum_18 = (MR_Integer) message__CSDPtr_17;
#line 241 "message.m"
          MR_Word message__V_23_23;
#line 241 "message.m"
          MR_Word message__V_24_24;
#line 241 "message.m"
          MR_String message__String0_51;
#line 241 "message.m"
          MR_String message__V_58_58;

#line 243 "message.m"
          {
#line 243 "message.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__CSDNum_18, &message__V_58_58);
          }
#line 243 "message.m"
          {
#line 243 "message.m"
            message__String0_51 = mercury__string__f_43_43_2_f_0((MR_String) "call site dynamic ", message__V_58_58);
          }
#line 4603 "message.c"
          message__TypeCtorInfo_57_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 244 "message.m"
          {
#line 244 "message.m"
            message__V_23_23 = message__indent_1_f_0(message__Level_4);
          }
#line 244 "message.m"
          {
#line 244 "message.m"
            message__V_24_24 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_57_57, ((MR_Box) (message__String0_51)));
          }
#line 244 "message.m"
          {
#line 244 "message.m"
            *message__String_6 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_57_57, message__V_23_23, message__V_24_24);
          }
#line 241 "message.m"
        }
#line 219 "message.m"
        break;
#line 219 "message.m"
    }
#line 219 "message.m"
  }
#line 67 "message.m"
}

#line 61 "message.m"
void MR_CALL 
message__message_to_string_2_p_0(
#line 61 "message.m"
  MR_Word message__HeadVar__1_1,
#line 61 "message.m"
  MR_String * message__String_5)
#line 61 "message.m"
{
#line 208 "message.m"
  {
#line 208 "message.m"
    MR_bool message__succeeded;
#line 208 "message.m"
    MR_Word message__TypeCtorInfo_23_23;
#line 208 "message.m"
    MR_Word message__Location_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "message.m"
    MR_Word message__MessageType_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 1)));
#line 208 "message.m"
    MR_Word message__LocationString_6;
#line 208 "message.m"
    MR_Word message__LevelString_8;
#line 208 "message.m"
    MR_Word message__MessageStr_9;
#line 208 "message.m"
    MR_Word message__Cord_10;
#line 208 "message.m"
    MR_Word message__V_12_12;
#line 208 "message.m"
    MR_Word message__V_13_13;
#line 208 "message.m"
    MR_Word message__V_15_15;
#line 208 "message.m"
    MR_Word message__V_16_16;
#line 208 "message.m"
    MR_Word message__V_17_17;
#line 208 "message.m"
    MR_Word message__V_19_19;
#line 208 "message.m"
    MR_Word message__V_20_20;
#line 208 "message.m"
    MR_Word message__V_22_22;

#line 209 "message.m"
    {
#line 209 "message.m"
      message__location_to_string_3_p_0((MR_Integer) 1, message__Location_3, &message__LocationString_6);
    }
#line 4680 "message.c"
#line 4681 "message.c"
    switch (MR_tag((MR_Word) message__MessageType_4)) {
#line 4683 "message.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 4685 "message.c"
      case (MR_Integer) 0:
#line 4687 "message.c"
#line 4688 "message.c"
        switch (MR_unmkbody(message__MessageType_4)) {
#line 4690 "message.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 4692 "message.c"
          case (MR_Integer) 0:
#line 4694 "message.c"
          case (MR_Integer) 1:
#line 4696 "message.c"
            {
#line 257 "message.m"
              {
#line 257 "message.m"
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Info")));
              }
#line 4703 "message.c"
            }
#line 4705 "message.c"
            break;
#line 4707 "message.c"
          case (MR_Integer) 2:
#line 4709 "message.c"
            {
#line 258 "message.m"
              {
#line 258 "message.m"
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Notice")));
              }
#line 4716 "message.c"
            }
#line 4718 "message.c"
            break;
#line 4720 "message.c"
          case (MR_Integer) 3:
#line 4722 "message.c"
            {
#line 259 "message.m"
              {
#line 259 "message.m"
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Warning")));
              }
#line 4729 "message.c"
            }
#line 4731 "message.c"
            break;
#line 4733 "message.c"
          case (MR_Integer) 4:
#line 4735 "message.c"
          case (MR_Integer) 5:
#line 4737 "message.c"
            {
#line 260 "message.m"
              {
#line 260 "message.m"
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Error")));
              }
#line 4744 "message.c"
            }
#line 4746 "message.c"
            break;
#line 4748 "message.c"
        }
#line 4750 "message.c"
        break;
#line 4752 "message.c"
      case (MR_Integer) 1:
#line 4754 "message.c"
      case (MR_Integer) 2:
#line 4756 "message.c"
        {
#line 257 "message.m"
          {
#line 257 "message.m"
            message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Info")));
          }
#line 4763 "message.c"
        }
#line 4765 "message.c"
        break;
#line 4767 "message.c"
      case (MR_Integer) 3:
#line 4769 "message.c"
#line 4770 "message.c"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) {
#line 4772 "message.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 4774 "message.c"
          case (MR_Integer) 0:
#line 4776 "message.c"
            {
#line 257 "message.m"
              {
#line 257 "message.m"
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Info")));
              }
#line 4783 "message.c"
            }
#line 4785 "message.c"
            break;
#line 4787 "message.c"
          case (MR_Integer) 1:
#line 4789 "message.c"
          case (MR_Integer) 2:
#line 4791 "message.c"
          case (MR_Integer) 3:
#line 4793 "message.c"
            {
#line 258 "message.m"
              {
#line 258 "message.m"
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Notice")));
              }
#line 4800 "message.c"
            }
#line 4802 "message.c"
            break;
#line 4804 "message.c"
          case (MR_Integer) 4:
#line 4806 "message.c"
          case (MR_Integer) 5:
#line 4808 "message.c"
          case (MR_Integer) 6:
#line 4810 "message.c"
            {
#line 259 "message.m"
              {
#line 259 "message.m"
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Warning")));
              }
#line 4817 "message.c"
            }
#line 4819 "message.c"
            break;
#line 4821 "message.c"
          case (MR_Integer) 7:
#line 4823 "message.c"
            {
#line 260 "message.m"
              {
#line 260 "message.m"
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Error")));
              }
#line 4830 "message.c"
            }
#line 4832 "message.c"
            break;
#line 4834 "message.c"
        }
#line 4836 "message.c"
        break;
#line 4838 "message.c"
    }
#line 212 "message.m"
    {
#line 212 "message.m"
      message__MessageStr_9 = message__message_type_to_string_1_f_0(message__MessageType_4);
    }
#line 4845 "message.c"
    message__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 213 "message.m"
    {
#line 213 "message.m"
      message__V_13_13 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_23_23, ((MR_Box) ((MR_String) ":\n")));
    }
#line 214 "message.m"
    {
#line 214 "message.m"
      message__V_17_17 = message__indent_1_f_0((MR_Integer) 1);
    }
#line 214 "message.m"
    {
#line 214 "message.m"
      message__V_20_20 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_23_23, ((MR_Box) ((MR_String) "\n")));
    }
#line 214 "message.m"
    {
#line 214 "message.m"
      message__V_19_19 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__MessageStr_9, message__V_20_20);
    }
#line 214 "message.m"
    {
#line 214 "message.m"
      message__V_16_16 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__V_17_17, message__V_19_19);
    }
#line 213 "message.m"
    {
#line 213 "message.m"
      message__V_15_15 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__LocationString_6, message__V_16_16);
    }
#line 213 "message.m"
    {
#line 213 "message.m"
      message__V_12_12 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__V_13_13, message__V_15_15);
    }
#line 213 "message.m"
    {
#line 213 "message.m"
      message__Cord_10 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__LevelString_8, message__V_12_12);
    }
#line 215 "message.m"
    {
#line 215 "message.m"
      message__V_22_22 = mercury__cord__list_1_f_0(message__TypeCtorInfo_23_23, message__Cord_10);
    }
#line 215 "message.m"
    {
#line 215 "message.m"
      mercury__string__append_list_2_p_0(message__V_22_22, message__String_5);
#line 215 "message.m"
      return;
    }
#line 208 "message.m"
  }
#line 61 "message.m"
}

#line 59 "message.m"
MR_Integer MR_CALL 
message__message_level_to_int_1_f_0(
#line 59 "message.m"
  MR_Word message__HeadVar__1_1)
#line 59 "message.m"
{
#line 264 "message.m"
  {
#line 264 "message.m"
    MR_bool message__succeeded;
#line 264 "message.m"
    MR_Integer message__HeadVar__2_2 = ((&message_vector_common_1[0 + message__HeadVar__1_1]))->message__vector_common_type_1_0__vct_1_f_0;

#line 264 "message.m"
    return message__HeadVar__2_2;
#line 264 "message.m"
  }
#line 59 "message.m"
}

#line 57 "message.m"
MR_Word MR_CALL 
message__message_get_level_1_f_0(
#line 57 "message.m"
  MR_Word message__HeadVar__1_1)
#line 57 "message.m"
{
#line 203 "message.m"
  {
#line 203 "message.m"
    MR_bool message__succeeded;
#line 203 "message.m"
    MR_Word message__HeadVar__2_2;
#line 203 "message.m"
    MR_Word message__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 1)));
#line 203 "message.m"
    MR_Word message__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 0)));

#line 280 "message.m"
#line 280 "message.m"
    switch (MR_tag((MR_Word) message__Type_4)) {
#line 280 "message.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 280 "message.m"
      case (MR_Integer) 0:
#line 280 "message.m"
#line 280 "message.m"
        switch (MR_unmkbody(message__Type_4)) {
#line 280 "message.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 280 "message.m"
          case (MR_Integer) 0:
#line 280 "message.m"
          case (MR_Integer) 1:
#line 281 "message.m"
            message__HeadVar__2_2 = (MR_Integer) 0;
#line 280 "message.m"
            break;
#line 280 "message.m"
          case (MR_Integer) 2:
#line 288 "message.m"
            message__HeadVar__2_2 = (MR_Integer) 1;
#line 280 "message.m"
            break;
#line 280 "message.m"
          case (MR_Integer) 3:
#line 295 "message.m"
            message__HeadVar__2_2 = (MR_Integer) 2;
#line 280 "message.m"
            break;
#line 280 "message.m"
          case (MR_Integer) 4:
#line 280 "message.m"
          case (MR_Integer) 5:
#line 301 "message.m"
            message__HeadVar__2_2 = (MR_Integer) 3;
#line 280 "message.m"
            break;
#line 280 "message.m"
        }
#line 280 "message.m"
        break;
#line 280 "message.m"
      case (MR_Integer) 1:
#line 280 "message.m"
      case (MR_Integer) 2:
#line 281 "message.m"
        message__HeadVar__2_2 = (MR_Integer) 0;
#line 280 "message.m"
        break;
#line 280 "message.m"
      case (MR_Integer) 3:
#line 280 "message.m"
#line 280 "message.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_4, (MR_Integer) 0)))) {
#line 280 "message.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 280 "message.m"
          case (MR_Integer) 0:
#line 281 "message.m"
            message__HeadVar__2_2 = (MR_Integer) 0;
#line 280 "message.m"
            break;
#line 280 "message.m"
          case (MR_Integer) 1:
#line 280 "message.m"
          case (MR_Integer) 2:
#line 280 "message.m"
          case (MR_Integer) 3:
#line 288 "message.m"
            message__HeadVar__2_2 = (MR_Integer) 1;
#line 280 "message.m"
            break;
#line 280 "message.m"
          case (MR_Integer) 4:
#line 280 "message.m"
          case (MR_Integer) 5:
#line 280 "message.m"
          case (MR_Integer) 6:
#line 295 "message.m"
            message__HeadVar__2_2 = (MR_Integer) 2;
#line 280 "message.m"
            break;
#line 280 "message.m"
          case (MR_Integer) 7:
#line 301 "message.m"
            message__HeadVar__2_2 = (MR_Integer) 3;
#line 280 "message.m"
            break;
#line 280 "message.m"
        }
#line 280 "message.m"
        break;
#line 280 "message.m"
    }
#line 203 "message.m"
    return message__HeadVar__2_2;
#line 203 "message.m"
  }
#line 57 "message.m"
}

void mercury__message__init(void)
{
}

void mercury__message__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&message__message__type_ctor_info_message_0);
	MR_register_type_ctor_info(&message__message__type_ctor_info_message_level_0);
	MR_register_type_ctor_info(&message__message__type_ctor_info_message_type_0);
	MR_register_type_ctor_info(&message__message__type_ctor_info_program_location_0);
}

void mercury__message__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__message__required_init(void)
{
	message__user_init_pred_0();
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module message. */
