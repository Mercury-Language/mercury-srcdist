/*
** Automatically generated from `message.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
#include "exclude.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "program_representation_utils.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 87 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_0_0[2];

#line 90 "message.c"
static const MR_ConstString message__message__field_names_message_0_0[2];

#line 93 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_0_0;

#line 96 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_0_0[1];

#line 99 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_0[1];

#line 102 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_0[1];

#line 105 "message.c"
static const MR_Integer message__message__functor_number_map_message_0[1];

#line 108 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_0;

#line 111 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_1;

#line 114 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_2;

#line 117 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_3;

#line 120 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_value_ordered_message_level_0[4];

#line 123 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_name_ordered_message_level_0[4];

#line 126 "message.c"
static const MR_Integer message__message__functor_number_map_message_level_0[4];

#line 129 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_0;

#line 132 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_1[1];

#line 135 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_1;

#line 138 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_2;

#line 141 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_3[1];

#line 144 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_3;

#line 147 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_4[1];

#line 150 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_4;

#line 153 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_5[1];

#line 156 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_5;

#line 159 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_6;

#line 162 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_7[2];

#line 165 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_7;

#line 168 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_8[1];

#line 171 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_8;

#line 174 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_9;

#line 177 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_10[1];

#line 180 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_10;

#line 183 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_11[1];

#line 186 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_11;

#line 189 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_12[1];

#line 192 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_12;

#line 195 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_13;

#line 198 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_14;

#line 201 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_15[1];

#line 204 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_15;

#line 207 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_0[6];

#line 210 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_1[1];

#line 213 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_2[1];

#line 216 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_3[8];

#line 219 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_type_0[4];

#line 222 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_type_0[16];

#line 225 "message.c"
static const MR_Integer message__message__functor_number_map_message_type_0[16];

#line 228 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_0[1];

#line 231 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_0;

#line 234 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_1[2];

#line 237 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_1;

#line 240 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_2[1];

#line 243 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_2;

#line 246 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_3[1];

#line 249 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_3;

#line 252 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_0[1];

#line 255 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_1[1];

#line 258 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_2[1];

#line 261 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_3[1];

#line 264 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_program_location_0[4];

#line 267 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_program_location_0[4];

#line 270 "message.c"
static const MR_Integer message__message__functor_number_map_program_location_0[4];

#line 273 "message.c"
static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
#line 276 "message.c"
  MR_Box message__wrapper_arg_1,
#line 278 "message.c"
  MR_Box message__wrapper_arg_2);

#line 281 "message.c"
static void MR_CALL 
message____Compare____message_0_0_10001(
#line 284 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 286 "message.c"
  MR_Box message__wrapper_arg_2,
#line 288 "message.c"
  MR_Box message__wrapper_arg_3);

#line 291 "message.c"
static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
#line 294 "message.c"
  MR_Box message__wrapper_arg_1,
#line 296 "message.c"
  MR_Box message__wrapper_arg_2);

#line 299 "message.c"
static void MR_CALL 
message____Compare____message_level_0_0_10001(
#line 302 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 304 "message.c"
  MR_Box message__wrapper_arg_2,
#line 306 "message.c"
  MR_Box message__wrapper_arg_3);

#line 309 "message.c"
static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
#line 312 "message.c"
  MR_Box message__wrapper_arg_1,
#line 314 "message.c"
  MR_Box message__wrapper_arg_2);

#line 317 "message.c"
static void MR_CALL 
message____Compare____message_type_0_0_10001(
#line 320 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 322 "message.c"
  MR_Box message__wrapper_arg_2,
#line 324 "message.c"
  MR_Box message__wrapper_arg_3);

#line 327 "message.c"
static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
#line 330 "message.c"
  MR_Box message__wrapper_arg_1,
#line 332 "message.c"
  MR_Box message__wrapper_arg_2);

#line 335 "message.c"
static void MR_CALL 
message____Compare____program_location_0_0_10001(
#line 338 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 340 "message.c"
  MR_Box message__wrapper_arg_2,
#line 342 "message.c"
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
message__pre_initialise_mutable_verbosity_level_mut_0_p_0(void);

#line 401 "message.m"
static void MR_CALL 
message__initialise_mutable_verbosity_level_mut_0_p_0(void);

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


static /* final */ const MR_Box message_scalar_common_1[1][1];

static /* final */ const MR_Box message_scalar_common_2[1][7];




static /* final */ const MR_Box message_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box message_scalar_common_2[1][7] = {
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



#include "message.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "profile.mh"
#include "profile.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
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


#line 462 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_0_0[2] = {
  (MR_PseudoTypeInfo) &message__message__type_ctor_info_program_location_0,
  (MR_PseudoTypeInfo) &message__message__type_ctor_info_message_type_0
};

#line 468 "message.c"
static const MR_ConstString message__message__field_names_message_0_0[2] = {
  (MR_String) "message_location",
  (MR_String) "message_type"
};

#line 474 "message.c"
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

#line 489 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_0_0[1] = {
  &message__message__du_functor_desc_message_0_0
};

#line 494 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    message__message__du_stag_ordered_message_0_0
  }
};

#line 503 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_0[1] = {
  &message__message__du_functor_desc_message_0_0
};

#line 508 "message.c"
static const MR_Integer message__message__functor_number_map_message_0[1] = {
  (MR_Integer) 0
};

#line 513 "message.c"
const MR_TypeCtorInfo_Struct message__message__type_ctor_info_message_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (message____Unify____message_0_0_10001)),
  ((MR_Box) (message____Compare____message_0_0_10001)),
  (MR_String) "message",
  (MR_String) "message",
  {
    message__message__du_name_ordered_message_0
  },
  {
    message__message__du_ptag_ordered_message_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  message__message__functor_number_map_message_0
};

#line 534 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_0 = {
  (MR_String) "message_info",
  (MR_Integer) 0
};

#line 540 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_1 = {
  (MR_String) "message_notice",
  (MR_Integer) 1
};

#line 546 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_2 = {
  (MR_String) "message_warning",
  (MR_Integer) 2
};

#line 552 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_3 = {
  (MR_String) "message_error",
  (MR_Integer) 3
};

#line 558 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_value_ordered_message_level_0[4] = {
  &message__message__enum_functor_desc_message_level_0_0,
  &message__message__enum_functor_desc_message_level_0_1,
  &message__message__enum_functor_desc_message_level_0_2,
  &message__message__enum_functor_desc_message_level_0_3
};

#line 566 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_name_ordered_message_level_0[4] = {
  &message__message__enum_functor_desc_message_level_0_3,
  &message__message__enum_functor_desc_message_level_0_0,
  &message__message__enum_functor_desc_message_level_0_1,
  &message__message__enum_functor_desc_message_level_0_2
};

#line 574 "message.c"
static const MR_Integer message__message__functor_number_map_message_level_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 582 "message.c"
const MR_TypeCtorInfo_Struct message__message__type_ctor_info_message_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (message____Unify____message_level_0_0_10001)),
  ((MR_Box) (message____Compare____message_level_0_0_10001)),
  (MR_String) "message",
  (MR_String) "message_level",
  {
    message__message__enum_name_ordered_message_level_0
  },
  {
    message__message__enum_value_ordered_message_level_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  message__message__functor_number_map_message_level_0
};

#line 603 "message.c"
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

#line 618 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 623 "message.c"
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

#line 638 "message.c"
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

#line 653 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 658 "message.c"
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

#line 673 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 678 "message.c"
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

#line 693 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 698 "message.c"
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

#line 713 "message.c"
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

#line 728 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_7[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 734 "message.c"
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

#line 749 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_8[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0
};

#line 754 "message.c"
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

#line 769 "message.c"
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

#line 784 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 789 "message.c"
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

#line 804 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 809 "message.c"
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

#line 824 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 829 "message.c"
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

#line 844 "message.c"
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

#line 859 "message.c"
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

#line 874 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_15[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 879 "message.c"
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

#line 894 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_0[6] = {
  &message__message__du_functor_desc_message_type_0_0,
  &message__message__du_functor_desc_message_type_0_2,
  &message__message__du_functor_desc_message_type_0_6,
  &message__message__du_functor_desc_message_type_0_9,
  &message__message__du_functor_desc_message_type_0_13,
  &message__message__du_functor_desc_message_type_0_14
};

#line 904 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_1[1] = {
  &message__message__du_functor_desc_message_type_0_1
};

#line 909 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_2[1] = {
  &message__message__du_functor_desc_message_type_0_3
};

#line 914 "message.c"
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

#line 926 "message.c"
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

#line 950 "message.c"
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

#line 970 "message.c"
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

#line 990 "message.c"
const MR_TypeCtorInfo_Struct message__message__type_ctor_info_message_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (message____Unify____message_type_0_0_10001)),
  ((MR_Box) (message____Compare____message_type_0_0_10001)),
  (MR_String) "message",
  (MR_String) "message_type",
  {
    message__message__du_name_ordered_message_type_0
  },
  {
    message__message__du_ptag_ordered_message_type_0
  },
  (MR_Integer) 16,
  (MR_Integer) 4,
  message__message__functor_number_map_message_type_0
};

#line 1011 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0
};

#line 1016 "message.c"
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

#line 1031 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 1037 "message.c"
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

#line 1052 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_2[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 1057 "message.c"
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

#line 1072 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_3[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 1077 "message.c"
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

#line 1092 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_0[1] = {
  &message__message__du_functor_desc_program_location_0_0
};

#line 1097 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_1[1] = {
  &message__message__du_functor_desc_program_location_0_1
};

#line 1102 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_2[1] = {
  &message__message__du_functor_desc_program_location_0_2
};

#line 1107 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_3[1] = {
  &message__message__du_functor_desc_program_location_0_3
};

#line 1112 "message.c"
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

#line 1136 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_program_location_0[4] = {
  &message__message__du_functor_desc_program_location_0_2,
  &message__message__du_functor_desc_program_location_0_3,
  &message__message__du_functor_desc_program_location_0_1,
  &message__message__du_functor_desc_program_location_0_0
};

#line 1144 "message.c"
static const MR_Integer message__message__functor_number_map_program_location_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1152 "message.c"
const MR_TypeCtorInfo_Struct message__message__type_ctor_info_program_location_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (message____Unify____program_location_0_0_10001)),
  ((MR_Box) (message____Compare____program_location_0_0_10001)),
  (MR_String) "message",
  (MR_String) "program_location",
  {
    message__message__du_name_ordered_program_location_0
  },
  {
    message__message__du_ptag_ordered_program_location_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  message__message__functor_number_map_program_location_0
};

#line 1173 "message.c"
static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
#line 1176 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1178 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1180 "message.c"
{
#line 1182 "message.c"
  {
#line 1184 "message.c"
    MR_bool message__succeeded;

#line 1187 "message.c"
    {
#line 1189 "message.c"
      message__succeeded = message____Unify____message_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1192 "message.c"
    return message__succeeded;
#line 1194 "message.c"
  }
#line 1196 "message.c"
}

#line 1199 "message.c"
static void MR_CALL 
message____Compare____message_0_0_10001(
#line 1202 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1204 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1206 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1208 "message.c"
{
#line 1210 "message.c"
  {
#line 1212 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1215 "message.c"
    {
#line 1217 "message.c"
      message____Compare____message_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1220 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1222 "message.c"
  }
#line 1224 "message.c"
}

#line 1227 "message.c"
static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
#line 1230 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1232 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1234 "message.c"
{
#line 1236 "message.c"
  {
#line 1238 "message.c"
    MR_bool message__succeeded;

#line 1241 "message.c"
    {
#line 1243 "message.c"
      message__succeeded = message____Unify____message_level_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1246 "message.c"
    return message__succeeded;
#line 1248 "message.c"
  }
#line 1250 "message.c"
}

#line 1253 "message.c"
static void MR_CALL 
message____Compare____message_level_0_0_10001(
#line 1256 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1258 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1260 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1262 "message.c"
{
#line 1264 "message.c"
  {
#line 1266 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1269 "message.c"
    {
#line 1271 "message.c"
      message____Compare____message_level_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1274 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1276 "message.c"
  }
#line 1278 "message.c"
}

#line 1281 "message.c"
static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
#line 1284 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1286 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1288 "message.c"
{
#line 1290 "message.c"
  {
#line 1292 "message.c"
    MR_bool message__succeeded;

#line 1295 "message.c"
    {
#line 1297 "message.c"
      message__succeeded = message____Unify____message_type_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1300 "message.c"
    return message__succeeded;
#line 1302 "message.c"
  }
#line 1304 "message.c"
}

#line 1307 "message.c"
static void MR_CALL 
message____Compare____message_type_0_0_10001(
#line 1310 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1312 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1314 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1316 "message.c"
{
#line 1318 "message.c"
  {
#line 1320 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1323 "message.c"
    {
#line 1325 "message.c"
      message____Compare____message_type_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1328 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1330 "message.c"
  }
#line 1332 "message.c"
}

#line 1335 "message.c"
static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
#line 1338 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1340 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1342 "message.c"
{
#line 1344 "message.c"
  {
#line 1346 "message.c"
    MR_bool message__succeeded;

#line 1349 "message.c"
    {
#line 1351 "message.c"
      message__succeeded = message____Unify____program_location_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1354 "message.c"
    return message__succeeded;
#line 1356 "message.c"
  }
#line 1358 "message.c"
}

#line 1361 "message.c"
static void MR_CALL 
message____Compare____program_location_0_0_10001(
#line 1364 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1366 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1368 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1370 "message.c"
{
#line 1372 "message.c"
  {
#line 1374 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1377 "message.c"
    {
#line 1379 "message.c"
      message____Compare____program_location_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1382 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1384 "message.c"
  }
#line 1386 "message.c"
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
#line 1413 "message.c"
      *message__HeadVar__1_1 = (MR_Integer) 0;
#line 49 "message.m"
    else
#line 49 "message.m"
      if (((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 49 "message.m"
        {
#line 49 "message.m"
          MR_Word message__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), message__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "message.m"
          if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
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
          else
#line 49 "message.m"
            if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1448 "message.c"
              *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
            else
#line 49 "message.m"
              if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1454 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
              else
#line 1458 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
        }
#line 49 "message.m"
      else
#line 49 "message.m"
        if (((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 49 "message.m"
          {
#line 49 "message.m"
            MR_Word message__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "message.m"
            if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1473 "message.c"
              *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
            else
#line 49 "message.m"
              if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
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
              else
#line 49 "message.m"
                if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1501 "message.c"
                  *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
                else
#line 1505 "message.c"
                  *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
          }
#line 49 "message.m"
        else
#line 49 "message.m"
          if (((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 49 "message.m"
            {
#line 49 "message.m"
              MR_Word message__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 1)));
#line 49 "message.m"
              MR_Word message__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "message.m"
              if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1522 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
              else
#line 49 "message.m"
                if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1528 "message.c"
                  *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
                else
#line 49 "message.m"
                  if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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
#line 1548 "message.c"
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
                  else
#line 1569 "message.c"
                    *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
            }
#line 49 "message.m"
          else
#line 49 "message.m"
            {
#line 49 "message.m"
              MR_Word message__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__2_2, (MR_Integer) 0)));

#line 49 "message.m"
              if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1582 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
              else
#line 49 "message.m"
                if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1588 "message.c"
                  *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
                else
#line 49 "message.m"
                  if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1594 "message.c"
                    *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
                  else
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
      if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 1666 "message.c"
              message__V_20_20 = (MR_Integer) message__V_9_9;
#line 1668 "message.c"
              message__V_21_21 = (MR_Integer) message__V_10_10;
#line 1670 "message.c"
              message__succeeded = (message__V_20_20 == message__V_21_21);
#line 49 "message.m"
            }
#line 49 "message.m"
        }
#line 49 "message.m"
      else
#line 49 "message.m"
        if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
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
#line 1699 "message.c"
                message__V_22_22 = (MR_Integer) message__V_11_11;
#line 1701 "message.c"
                message__V_23_23 = (MR_Integer) message__V_12_12;
#line 1703 "message.c"
                message__succeeded = (message__V_22_22 == message__V_23_23);
#line 49 "message.m"
              }
#line 49 "message.m"
          }
#line 49 "message.m"
        else
#line 49 "message.m"
          if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 1734 "message.c"
                  {
#line 1736 "message.c"
                    message__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(message__V_5_5, message__V_7_7);
                  }
#line 49 "message.m"
                  if (message__succeeded)
#line 1741 "message.c"
                    {
#line 1743 "message.c"
                      return message__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(message__V_6_6, message__V_8_8);
                    }
#line 49 "message.m"
                }
#line 49 "message.m"
            }
#line 49 "message.m"
          else
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
#line 1767 "message.c"
                  {
#line 1769 "message.c"
                    return message__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(message__V_3_3, message__V_4_4);
                  }
#line 49 "message.m"
                }
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
#line 1807 "message.c"
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
#line 1832 "message.c"
          *message__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "message.m"
        else
#line 75 "message.m"
          {
#line 75 "message.m"
            message__succeeded = (message__V_4_4 > message__V_5_5);
#line 75 "message.m"
            if (message__succeeded)
#line 1842 "message.c"
              *message__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "message.m"
            else
#line 75 "message.m"
              {
#line 75 "message.m"
                MR_Word message__V_6_6;

#line 75 "message.m"
                if ((message__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 75 "message.m"
                  {
#line 75 "message.m"
                    message__V_6_6 = (MR_Integer) 0;
#line 75 "message.m"
                    message__succeeded = MR_TRUE;
#line 75 "message.m"
                  }
#line 75 "message.m"
                else
#line 75 "message.m"
                  if ((message__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 75 "message.m"
                    {
#line 75 "message.m"
                      message__V_6_6 = (MR_Integer) 0;
#line 75 "message.m"
                      message__succeeded = MR_TRUE;
#line 75 "message.m"
                    }
#line 75 "message.m"
                  else
#line 75 "message.m"
                    if ((message__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 75 "message.m"
                      {
#line 75 "message.m"
                        message__V_6_6 = (MR_Integer) 0;
#line 75 "message.m"
                        message__succeeded = MR_TRUE;
#line 75 "message.m"
                      }
#line 75 "message.m"
                    else
#line 75 "message.m"
                      if ((message__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 75 "message.m"
                        {
#line 75 "message.m"
                          message__V_6_6 = (MR_Integer) 0;
#line 75 "message.m"
                          message__succeeded = MR_TRUE;
#line 75 "message.m"
                        }
#line 75 "message.m"
                      else
#line 75 "message.m"
                        if ((message__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 75 "message.m"
                          {
#line 75 "message.m"
                            message__V_6_6 = (MR_Integer) 0;
#line 75 "message.m"
                            message__succeeded = MR_TRUE;
#line 75 "message.m"
                          }
#line 75 "message.m"
                        else
#line 75 "message.m"
                          if ((message__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 75 "message.m"
                            {
#line 75 "message.m"
                              message__V_6_6 = (MR_Integer) 0;
#line 75 "message.m"
                              message__succeeded = MR_TRUE;
#line 75 "message.m"
                            }
#line 75 "message.m"
                          else
#line 75 "message.m"
                            if (((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
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
                            else
#line 75 "message.m"
                              if (((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
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
                              else
#line 75 "message.m"
                                if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
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
                                else
#line 75 "message.m"
                                  if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
                                  else
#line 75 "message.m"
                                    if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
                                    else
#line 75 "message.m"
                                      if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
                                      else
#line 75 "message.m"
                                        if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
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
#line 2141 "message.c"
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
                                        else
#line 75 "message.m"
                                          if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
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
                                          else
#line 75 "message.m"
                                            if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
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
                                            else
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
    if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 2290 "message.c"
      *message__HeadVar__2_2 = (MR_Integer) 14;
#line 75 "message.m"
    else
#line 75 "message.m"
      if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2296 "message.c"
        *message__HeadVar__2_2 = (MR_Integer) 13;
#line 75 "message.m"
      else
#line 75 "message.m"
        if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2302 "message.c"
          *message__HeadVar__2_2 = (MR_Integer) 0;
#line 75 "message.m"
        else
#line 75 "message.m"
          if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2308 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 2;
#line 75 "message.m"
          else
#line 75 "message.m"
            if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2314 "message.c"
              *message__HeadVar__2_2 = (MR_Integer) 6;
#line 75 "message.m"
            else
#line 75 "message.m"
              if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2320 "message.c"
                *message__HeadVar__2_2 = (MR_Integer) 9;
#line 75 "message.m"
              else
#line 75 "message.m"
                if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2326 "message.c"
                  *message__HeadVar__2_2 = (MR_Integer) 1;
#line 75 "message.m"
                else
#line 75 "message.m"
                  if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 2332 "message.c"
                    *message__HeadVar__2_2 = (MR_Integer) 3;
#line 75 "message.m"
                  else
#line 75 "message.m"
                    if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2338 "message.c"
                      *message__HeadVar__2_2 = (MR_Integer) 15;
#line 75 "message.m"
                    else
#line 75 "message.m"
                      if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2344 "message.c"
                        *message__HeadVar__2_2 = (MR_Integer) 4;
#line 75 "message.m"
                      else
#line 75 "message.m"
                        if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2350 "message.c"
                          *message__HeadVar__2_2 = (MR_Integer) 8;
#line 75 "message.m"
                        else
#line 75 "message.m"
                          if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2356 "message.c"
                            *message__HeadVar__2_2 = (MR_Integer) 5;
#line 75 "message.m"
                          else
#line 75 "message.m"
                            if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2362 "message.c"
                              *message__HeadVar__2_2 = (MR_Integer) 7;
#line 75 "message.m"
                            else
#line 75 "message.m"
                              if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2368 "message.c"
                                *message__HeadVar__2_2 = (MR_Integer) 11;
#line 75 "message.m"
                              else
#line 75 "message.m"
                                if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2374 "message.c"
                                  *message__HeadVar__2_2 = (MR_Integer) 12;
#line 75 "message.m"
                                else
#line 2378 "message.c"
                                  *message__HeadVar__2_2 = (MR_Integer) 10;
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
      if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
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
      else
#line 75 "message.m"
        if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
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
        else
#line 75 "message.m"
          if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
          else
#line 75 "message.m"
            if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
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
            else
#line 75 "message.m"
              if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
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
              else
#line 75 "message.m"
                if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
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
                else
#line 75 "message.m"
                  if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 2518 "message.c"
                          message__succeeded = (message__V_5_5 == message__V_6_6);
#line 75 "message.m"
                        }
#line 75 "message.m"
                    }
#line 75 "message.m"
                  else
#line 75 "message.m"
                    if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 2543 "message.c"
                            message__succeeded = (message__V_9_9 == message__V_10_10);
#line 75 "message.m"
                          }
#line 75 "message.m"
                      }
#line 75 "message.m"
                    else
#line 75 "message.m"
                      if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
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
#line 2568 "message.c"
                              message__succeeded = (strcmp(message__V_35_35, message__V_36_36) == 0);
#line 75 "message.m"
                            }
#line 75 "message.m"
                        }
#line 75 "message.m"
                      else
#line 75 "message.m"
                        if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
#line 2593 "message.c"
                                message__succeeded = (message__V_11_11 == message__V_12_12);
#line 75 "message.m"
                              }
#line 75 "message.m"
                          }
#line 75 "message.m"
                        else
#line 75 "message.m"
                          if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
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
#line 2618 "message.c"
                                  message__succeeded = (message__V_21_21 == message__V_22_22);
#line 75 "message.m"
                                }
#line 75 "message.m"
                            }
#line 75 "message.m"
                          else
#line 75 "message.m"
                            if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
#line 2643 "message.c"
                                    message__succeeded = (message__V_13_13 == message__V_14_14);
#line 75 "message.m"
                                  }
#line 75 "message.m"
                              }
#line 75 "message.m"
                            else
#line 75 "message.m"
                              if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
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
#line 2674 "message.c"
                                      message__succeeded = (message__V_17_17 == message__V_19_19);
#line 75 "message.m"
                                      if (message__succeeded)
#line 2678 "message.c"
                                        message__succeeded = (message__V_18_18 == message__V_20_20);
#line 75 "message.m"
                                    }
#line 75 "message.m"
                                }
#line 75 "message.m"
                              else
#line 75 "message.m"
                                if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
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
#line 2703 "message.c"
                                        message__succeeded = (strcmp(message__V_27_27, message__V_28_28) == 0);
#line 75 "message.m"
                                      }
#line 75 "message.m"
                                  }
#line 75 "message.m"
                                else
#line 75 "message.m"
                                  if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
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
#line 2728 "message.c"
                                          message__succeeded = (strcmp(message__V_29_29, message__V_30_30) == 0);
#line 75 "message.m"
                                        }
#line 75 "message.m"
                                    }
#line 75 "message.m"
                                  else
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
#line 2751 "message.c"
                                          message__succeeded = (strcmp(message__V_25_25, message__V_26_26) == 0);
#line 75 "message.m"
                                        }
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
#line 2805 "message.c"
  {
#line 2807 "message.c"
    MR_bool message__succeeded = (message__HeadVar__2_1 == message__HeadVar__2_2);

#line 2810 "message.c"
    return message__succeeded;
#line 2812 "message.c"
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
#line 2841 "message.c"
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
#line 2863 "message.c"
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

#line 2924 "message.c"
        {
#line 2926 "message.c"
          message__succeeded = message____Unify____program_location_0_0(message__V_3_3, message__V_5_5);
        }
#line 33 "message.m"
        if (message__succeeded)
#line 2931 "message.c"
          {
#line 2933 "message.c"
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
    if ((((((message__Type_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))) || (((((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_18, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || ((message__Type_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))))
#line 301 "message.m"
      message__Level_8 = (MR_Integer) 3;
#line 280 "message.m"
    else
#line 280 "message.m"
      if ((((((((((message__Type_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_18, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || ((message__Type_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || (((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 2))))))
#line 281 "message.m"
        message__Level_8 = (MR_Integer) 0;
#line 280 "message.m"
      else
#line 280 "message.m"
        if ((((((((message__Type_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || (((((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_18, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_18, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_18, (MR_Integer) 0)))) == (MR_Integer) 2))))))
#line 288 "message.m"
          message__Level_8 = (MR_Integer) 1;
#line 280 "message.m"
        else
#line 295 "message.m"
          message__Level_8 = (MR_Integer) 2;
#line 401 "message.m"
{
#define MR_PROC_LABEL message__write_out_message_4_p_0


		{
#line 401 "message.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3001 "message.c"

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

#line 3017 "message.c"

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

#line 3036 "message.c"

		;}
#undef MR_PROC_LABEL
#line 401 "message.m"
}
#line 264 "message.m"
    if ((message__Level_8 == (MR_Integer) 3))
#line 267 "message.m"
      message__V_14_14 = (MR_Integer) 1;
#line 264 "message.m"
    else
#line 264 "message.m"
      if ((message__Level_8 == (MR_Integer) 0))
#line 264 "message.m"
        message__V_14_14 = (MR_Integer) 4;
#line 264 "message.m"
      else
#line 264 "message.m"
        if ((message__Level_8 == (MR_Integer) 1))
#line 265 "message.m"
          message__V_14_14 = (MR_Integer) 3;
#line 264 "message.m"
        else
#line 266 "message.m"
          message__V_14_14 = (MR_Integer) 2;
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
#line 416 "message.m"
      {
#line 416 "message.m"
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

#line 3124 "message.c"

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

#line 3157 "message.c"

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

#line 3191 "message.c"

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

#line 3224 "message.c"

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

#line 3256 "message.c"

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

#line 3288 "message.c"

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

#line 3306 "message.c"

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

#line 3323 "message.c"

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

#line 3341 "message.c"

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
    if ((message__MessageType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 314 "message.m"
      message__String_5 = (MR_String) "Cannot lookup coverage points";
#line 312 "message.m"
    else
#line 312 "message.m"
      if ((message__MessageType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 363 "message.m"
        message__String_5 = (MR_String) "extra proc dynamics for a clique proc are not currently handled.";
#line 312 "message.m"
      else
#line 312 "message.m"
        if ((message__MessageType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 311 "message.m"
          message__String_5 = (MR_String) "Found candidate conjunction";
#line 312 "message.m"
        else
#line 312 "message.m"
          if ((message__MessageType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 331 "message.m"
            message__String_5 = (MR_String) "Found pushed conjuncts above callsite threshold";
#line 312 "message.m"
          else
#line 312 "message.m"
            if ((message__MessageType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 340 "message.m"
              message__String_5 = (MR_String) "Parallelising call pairs that have more than one dependent variable is not yet supported.";
#line 312 "message.m"
            else
#line 312 "message.m"
              if ((message__MessageType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 355 "message.m"
                message__String_5 = (MR_String) "Could not look up proc defn, perhaps this procedure is built-in";
#line 312 "message.m"
              else
#line 312 "message.m"
                if (((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 1))))
#line 327 "message.m"
                  {
#line 327 "message.m"
                    MR_Integer message__Num_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__MessageType_3, (MR_Integer) 0)));
#line 327 "message.m"
                    MR_String message__V_94_94;
#line 327 "message.m"
                    MR_String message__V_101_101;

#line 328 "message.m"
                    {
#line 328 "message.m"
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_1[0], message__Num_6, &message__V_94_94);
                    }
#line 328 "message.m"
                    {
#line 328 "message.m"
                      message__V_101_101 = mercury__string__f_43_43_2_f_0(message__V_94_94, (MR_String) " conjuncts above callsite threshold");
                    }
#line 328 "message.m"
                    {
#line 328 "message.m"
                      message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Found ", message__V_101_101);
                    }
#line 327 "message.m"
                  }
#line 312 "message.m"
                else
#line 312 "message.m"
                  if (((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 2))))
#line 327 "message.m"
                    {
#line 327 "message.m"
                      MR_Integer message__Num_62 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__MessageType_3, (MR_Integer) 0)));
#line 327 "message.m"
                      MR_String message__V_140_140;
#line 327 "message.m"
                      MR_String message__V_147_147;

#line 328 "message.m"
                      {
#line 328 "message.m"
                        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_1[0], message__Num_62, &message__V_140_140);
                      }
#line 328 "message.m"
                      {
#line 328 "message.m"
                        message__V_147_147 = mercury__string__f_43_43_2_f_0(message__V_140_140, (MR_String) " partitions, this may reduce parallelism");
                      }
#line 328 "message.m"
                      {
#line 328 "message.m"
                        message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Split conjunction into ", message__V_147_147);
                      }
#line 327 "message.m"
                    }
#line 312 "message.m"
                  else
#line 312 "message.m"
                    if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 377 "message.m"
                      {
#line 377 "message.m"
                        MR_String message__ErrorStr_13 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 377 "message.m"
                        MR_String message__V_103_103;

#line 378 "message.m"
                        {
#line 378 "message.m"
                          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_1[0], message__ErrorStr_13, &message__V_103_103);
                        }
#line 378 "message.m"
                        {
#line 378 "message.m"
                          message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Exception thrown: ", message__V_103_103);
                        }
#line 377 "message.m"
                      }
#line 312 "message.m"
                    else
#line 312 "message.m"
                      if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 327 "message.m"
                        {
#line 327 "message.m"
                          MR_Integer message__Num_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 327 "message.m"
                          MR_String message__V_150_150;
#line 327 "message.m"
                          MR_String message__V_157_157;

#line 328 "message.m"
                          {
#line 328 "message.m"
                            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_1[0], message__Num_57, &message__V_150_150);
                          }
#line 328 "message.m"
                          {
#line 328 "message.m"
                            message__V_157_157 = mercury__string__f_43_43_2_f_0(message__V_150_150, (MR_String) " conjunctions with a positive speedup due to parallelisation");
                          }
#line 328 "message.m"
                          {
#line 328 "message.m"
                            message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Found ", message__V_157_157);
                          }
#line 327 "message.m"
                        }
#line 312 "message.m"
                      else
#line 312 "message.m"
                        if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 348 "message.m"
                          {
#line 348 "message.m"
                            MR_Word message__Detism_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 348 "message.m"
                            MR_Word message__V_28_28;
#line 348 "message.m"
                            MR_Word message__V_31_31;
#line 348 "message.m"
                            MR_String message__V_32_32;

#line 351 "message.m"
                            {
#line 351 "message.m"
                              message__V_32_32 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0, ((MR_Box) (message__Detism_11)));
                            }
#line 351 "message.m"
                            {
#line 351 "message.m"
                              message__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 351 "message.m"
                              MR_hl_field(MR_mktag(2), message__V_31_31, 0) = ((MR_Box) (message__V_32_32));
#line 351 "message.m"
                            }
#line 351 "message.m"
                            {
#line 351 "message.m"
                              message__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "message.m"
                              MR_hl_field(MR_mktag(1), message__V_28_28, 0) = ((MR_Box) (message__V_31_31));
#line 351 "message.m"
                              MR_hl_field(MR_mktag(1), message__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 351 "message.m"
                            }
#line 349 "message.m"
                            {
#line 349 "message.m"
                              mercury__string__format_3_p_0((MR_String) "There are %d goals amongst goals above the parallelisation overhead.", message__V_28_28, &message__String_5);
                            }
#line 348 "message.m"
                          }
#line 312 "message.m"
                        else
#line 312 "message.m"
                          if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 333 "message.m"
                            {
#line 333 "message.m"
                              MR_Integer message__CandidateConjuncts_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 333 "message.m"
                              MR_String message__V_86_86;

#line 336 "message.m"
                              {
#line 336 "message.m"
                                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_1[0], message__CandidateConjuncts_8, &message__V_86_86);
                              }
#line 334 "message.m"
                              {
#line 334 "message.m"
                                message__String_5 = mercury__string__f_43_43_2_f_0(message__V_86_86, (MR_String) " conjunctions not parallelised: Seen duplicate instantiations");
                              }
#line 333 "message.m"
                            }
#line 312 "message.m"
                          else
#line 312 "message.m"
                            if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 343 "message.m"
                              {
#line 343 "message.m"
                                MR_Integer message__PartNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 343 "message.m"
                                MR_Integer message__NumCalls_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 2)));
#line 343 "message.m"
                                MR_String message__V_120_120;
#line 343 "message.m"
                                MR_Word message__V_126_126 = (MR_Word) &message_scalar_common_1[0];
#line 343 "message.m"
                                MR_String message__V_127_127;
#line 343 "message.m"
                                MR_String message__V_129_129;
#line 343 "message.m"
                                MR_String message__V_130_130;
#line 343 "message.m"
                                MR_String message__V_137_137;

#line 346 "message.m"
                                {
#line 346 "message.m"
                                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(message__V_126_126, message__NumCalls_10, &message__V_120_120);
                                }
#line 344 "message.m"
                                {
#line 344 "message.m"
                                  message__V_127_127 = mercury__string__f_43_43_2_f_0(message__V_120_120, (MR_String) " costly calls and cannot be parallelised");
                                }
#line 344 "message.m"
                                {
#line 344 "message.m"
                                  message__V_129_129 = mercury__string__f_43_43_2_f_0((MR_String) " has only ", message__V_127_127);
                                }
#line 346 "message.m"
                                {
#line 346 "message.m"
                                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(message__V_126_126, message__PartNum_9, &message__V_130_130);
                                }
#line 344 "message.m"
                                {
#line 344 "message.m"
                                  message__V_137_137 = mercury__string__f_43_43_2_f_0(message__V_130_130, message__V_129_129);
                                }
#line 344 "message.m"
                                {
#line 344 "message.m"
                                  message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Partition ", message__V_137_137);
                                }
#line 343 "message.m"
                              }
#line 312 "message.m"
                            else
#line 312 "message.m"
                              if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 377 "message.m"
                                {
#line 377 "message.m"
                                  MR_String message__ErrorStr_67 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 377 "message.m"
                                  MR_String message__V_77_77;

#line 378 "message.m"
                                  {
#line 378 "message.m"
                                    mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_1[0], message__ErrorStr_67, &message__V_77_77);
                                  }
#line 378 "message.m"
                                  {
#line 378 "message.m"
                                    message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute cost of recursive calls: ", message__V_77_77);
                                  }
#line 377 "message.m"
                                }
#line 312 "message.m"
                              else
#line 312 "message.m"
                                if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 377 "message.m"
                                  {
#line 377 "message.m"
                                    MR_String message__ErrorStr_72 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 377 "message.m"
                                    MR_String message__V_111_111;

#line 378 "message.m"
                                    {
#line 378 "message.m"
                                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_1[0], message__ErrorStr_72, &message__V_111_111);
                                    }
#line 378 "message.m"
                                    {
#line 378 "message.m"
                                      message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute the production or consumption time of a variable: ", message__V_111_111);
                                    }
#line 377 "message.m"
                                  }
#line 312 "message.m"
                                else
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

#line 3758 "message.c"

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

#line 3775 "message.c"

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

#line 3793 "message.c"

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
      MR_hl_field(MR_mktag(0), message__V_10_10, 0) = ((MR_Box) (&message_scalar_common_2[0]));
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
    if (((MR_tag((MR_Word) message__Location_5)) == (MR_mktag((MR_Integer) 2))))
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
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_1[0], message__Id_15, &message__V_66_66);
        }
#line 238 "message.m"
        {
#line 238 "message.m"
          message__String0_16 = mercury__string__f_43_43_2_f_0((MR_String) "clique ", message__V_66_66);
        }
#line 4120 "message.c"
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
    else
#line 219 "message.m"
      if (((MR_tag((MR_Word) message__Location_5)) == (MR_mktag((MR_Integer) 3))))
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
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_1[0], message__CSDNum_18, &message__V_58_58);
          }
#line 243 "message.m"
          {
#line 243 "message.m"
            message__String0_51 = mercury__string__f_43_43_2_f_0((MR_String) "call site dynamic ", message__V_58_58);
          }
#line 4170 "message.c"
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
      else
#line 219 "message.m"
        if (((MR_tag((MR_Word) message__Location_5)) == (MR_mktag((MR_Integer) 1))))
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
#line 4275 "message.c"
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
        else
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
#line 4332 "message.c"
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
#line 4425 "message.c"
    if ((((((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || ((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))))
#line 4427 "message.c"
      {
#line 260 "message.m"
        {
#line 260 "message.m"
          message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Error")));
        }
#line 4434 "message.c"
      }
#line 4436 "message.c"
    else
#line 4438 "message.c"
      if ((((((((((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || ((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || (((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 2))))))
#line 4440 "message.c"
        {
#line 257 "message.m"
          {
#line 257 "message.m"
            message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Info")));
          }
#line 4447 "message.c"
        }
#line 4449 "message.c"
      else
#line 4451 "message.c"
        if ((((((((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 2))))))
#line 4453 "message.c"
          {
#line 258 "message.m"
            {
#line 258 "message.m"
              message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Notice")));
            }
#line 4460 "message.c"
          }
#line 4462 "message.c"
        else
#line 4464 "message.c"
          {
#line 259 "message.m"
            {
#line 259 "message.m"
              message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Warning")));
            }
#line 4471 "message.c"
          }
#line 212 "message.m"
    {
#line 212 "message.m"
      message__MessageStr_9 = message__message_type_to_string_1_f_0(message__MessageType_4);
    }
#line 4478 "message.c"
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
    MR_Integer message__HeadVar__2_2;

#line 264 "message.m"
    if ((message__HeadVar__1_1 == (MR_Integer) 3))
#line 267 "message.m"
      message__HeadVar__2_2 = (MR_Integer) 1;
#line 264 "message.m"
    else
#line 264 "message.m"
      if ((message__HeadVar__1_1 == (MR_Integer) 0))
#line 264 "message.m"
        message__HeadVar__2_2 = (MR_Integer) 4;
#line 264 "message.m"
      else
#line 264 "message.m"
        if ((message__HeadVar__1_1 == (MR_Integer) 1))
#line 265 "message.m"
          message__HeadVar__2_2 = (MR_Integer) 3;
#line 264 "message.m"
        else
#line 266 "message.m"
          message__HeadVar__2_2 = (MR_Integer) 2;
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
    if ((((((message__Type_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))) || (((((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_4, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || ((message__Type_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))))
#line 301 "message.m"
      message__HeadVar__2_2 = (MR_Integer) 3;
#line 280 "message.m"
    else
#line 280 "message.m"
      if ((((((((((message__Type_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_4, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || ((message__Type_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || (((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 2))))))
#line 281 "message.m"
        message__HeadVar__2_2 = (MR_Integer) 0;
#line 280 "message.m"
      else
#line 280 "message.m"
        if ((((((((message__Type_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || (((((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_4, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_4, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_4, (MR_Integer) 0)))) == (MR_Integer) 2))))))
#line 288 "message.m"
          message__HeadVar__2_2 = (MR_Integer) 1;
#line 280 "message.m"
        else
#line 295 "message.m"
          message__HeadVar__2_2 = (MR_Integer) 2;
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
