/*
** Automatically generated from `message.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 84 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_0_0[2];

#line 87 "message.c"
static const MR_ConstString message__message__field_names_message_0_0[2];

#line 90 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_0_0;

#line 93 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_0_0[1];

#line 96 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_0[1];

#line 99 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_0[1];

#line 102 "message.c"
static const MR_Integer message__message__functor_number_map_message_0[1];

#line 105 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_0;

#line 108 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_1;

#line 111 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_2;

#line 114 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_3;

#line 117 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_value_ordered_message_level_0[4];

#line 120 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_name_ordered_message_level_0[4];

#line 123 "message.c"
static const MR_Integer message__message__functor_number_map_message_level_0[4];

#line 126 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_0;

#line 129 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_1[1];

#line 132 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_1;

#line 135 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_2;

#line 138 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_3[1];

#line 141 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_3;

#line 144 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_4[1];

#line 147 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_4;

#line 150 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_5[1];

#line 153 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_5;

#line 156 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_6;

#line 159 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_7[2];

#line 162 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_7;

#line 165 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_8[1];

#line 168 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_8;

#line 171 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_9;

#line 174 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_10[1];

#line 177 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_10;

#line 180 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_11[1];

#line 183 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_11;

#line 186 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_12[1];

#line 189 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_12;

#line 192 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_13;

#line 195 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_14;

#line 198 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_15[1];

#line 201 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_15;

#line 204 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_0[6];

#line 207 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_1[1];

#line 210 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_2[1];

#line 213 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_3[8];

#line 216 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_type_0[4];

#line 219 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_type_0[16];

#line 222 "message.c"
static const MR_Integer message__message__functor_number_map_message_type_0[16];

#line 225 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_0[1];

#line 228 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_0;

#line 231 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_1[2];

#line 234 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_1;

#line 237 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_2[1];

#line 240 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_2;

#line 243 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_3[1];

#line 246 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_3;

#line 249 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_0[1];

#line 252 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_1[1];

#line 255 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_2[1];

#line 258 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_3[1];

#line 261 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_program_location_0[4];

#line 264 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_program_location_0[4];

#line 267 "message.c"
static const MR_Integer message__message__functor_number_map_program_location_0[4];

#line 270 "message.c"
static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
#line 273 "message.c"
  MR_Box message__wrapper_arg_1,
#line 275 "message.c"
  MR_Box message__wrapper_arg_2);

#line 278 "message.c"
static void MR_CALL 
message____Compare____message_0_0_10001(
#line 281 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 283 "message.c"
  MR_Box message__wrapper_arg_2,
#line 285 "message.c"
  MR_Box message__wrapper_arg_3);

#line 288 "message.c"
static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
#line 291 "message.c"
  MR_Box message__wrapper_arg_1,
#line 293 "message.c"
  MR_Box message__wrapper_arg_2);

#line 296 "message.c"
static void MR_CALL 
message____Compare____message_level_0_0_10001(
#line 299 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 301 "message.c"
  MR_Box message__wrapper_arg_2,
#line 303 "message.c"
  MR_Box message__wrapper_arg_3);

#line 306 "message.c"
static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
#line 309 "message.c"
  MR_Box message__wrapper_arg_1,
#line 311 "message.c"
  MR_Box message__wrapper_arg_2);

#line 314 "message.c"
static void MR_CALL 
message____Compare____message_type_0_0_10001(
#line 317 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 319 "message.c"
  MR_Box message__wrapper_arg_2,
#line 321 "message.c"
  MR_Box message__wrapper_arg_3);

#line 324 "message.c"
static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
#line 327 "message.c"
  MR_Box message__wrapper_arg_1,
#line 329 "message.c"
  MR_Box message__wrapper_arg_2);

#line 332 "message.c"
static void MR_CALL 
message____Compare____program_location_0_0_10001(
#line 335 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 337 "message.c"
  MR_Box message__wrapper_arg_2,
#line 339 "message.c"
  MR_Box message__wrapper_arg_3);

#line 410 "message.m"
static void MR_CALL 
message__write_out_message_4_p_0(
#line 410 "message.m"
  MR_Word message__Stream_5,
#line 410 "message.m"
  MR_Word message__Message_6);

#line 404 "message.m"
static void MR_CALL 
message__unsafe_set_verbosity_level_mut_1_p_0(
#line 404 "message.m"
  MR_Integer message__X_1);

#line 404 "message.m"
static void MR_CALL 
message__unsafe_get_verbosity_level_mut_1_p_0(
#line 404 "message.m"
  MR_Integer * message__X_1);

#line 404 "message.m"
static void MR_CALL 
message__unlock_verbosity_level_mut_0_p_0(void);

#line 404 "message.m"
static void MR_CALL 
message__lock_verbosity_level_mut_0_p_0(void);

#line 404 "message.m"
static void MR_CALL 
message__pre_initialise_mutable_verbosity_level_mut_0_p_0(void);

#line 404 "message.m"
static void MR_CALL 
message__initialise_mutable_verbosity_level_mut_0_p_0(void);

#line 309 "message.m"
static MR_Word MR_CALL 
message__message_type_to_string_1_f_0(
#line 309 "message.m"
  MR_Word message__MessageType_3);

#line 408 "message.m"
static void MR_CALL 
message__write_out_messages_4_p_0_1(
#line 408 "message.m"
  MR_Box message__closure_arg,
#line 408 "message.m"
  MR_Box message__wrapper_arg_1,
#line 408 "message.m"
  MR_Box message__wrapper_arg_2,
#line 408 "message.m"
  MR_Box * message__wrapper_arg_3);


static /* final */ const MR_Box message_scalar_common_1[1][7];




static /* final */ const MR_Box message_scalar_common_1[1][7] = {
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
#line 404 "message.m"
MR_Integer message__mutable_variable_verbosity_level_mut;
#ifdef MR_THREAD_SAFE
    MercuryLock message__mutable_variable_verbosity_level_mut_lock;
#endif

#line 404 "message.m"
void 
message__user_init_pred_0(void)
#line 404 "message.m"
{
#line 404 "message.m"
	message__initialise_mutable_verbosity_level_mut_0_p_0();
}


#line 450 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_0_0[2] = {
  (MR_PseudoTypeInfo) &message__message__type_ctor_info_program_location_0,
  (MR_PseudoTypeInfo) &message__message__type_ctor_info_message_type_0
};

#line 456 "message.c"
static const MR_ConstString message__message__field_names_message_0_0[2] = {
  (MR_String) "message_location",
  (MR_String) "message_type"
};

#line 462 "message.c"
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

#line 477 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_0_0[1] = {
  &message__message__du_functor_desc_message_0_0
};

#line 482 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    message__message__du_stag_ordered_message_0_0
  }
};

#line 491 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_0[1] = {
  &message__message__du_functor_desc_message_0_0
};

#line 496 "message.c"
static const MR_Integer message__message__functor_number_map_message_0[1] = {
  (MR_Integer) 0
};

#line 501 "message.c"
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

#line 522 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_0 = {
  (MR_String) "message_info",
  (MR_Integer) 0
};

#line 528 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_1 = {
  (MR_String) "message_notice",
  (MR_Integer) 1
};

#line 534 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_2 = {
  (MR_String) "message_warning",
  (MR_Integer) 2
};

#line 540 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_3 = {
  (MR_String) "message_error",
  (MR_Integer) 3
};

#line 546 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_value_ordered_message_level_0[4] = {
  &message__message__enum_functor_desc_message_level_0_0,
  &message__message__enum_functor_desc_message_level_0_1,
  &message__message__enum_functor_desc_message_level_0_2,
  &message__message__enum_functor_desc_message_level_0_3
};

#line 554 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_name_ordered_message_level_0[4] = {
  &message__message__enum_functor_desc_message_level_0_3,
  &message__message__enum_functor_desc_message_level_0_0,
  &message__message__enum_functor_desc_message_level_0_1,
  &message__message__enum_functor_desc_message_level_0_2
};

#line 562 "message.c"
static const MR_Integer message__message__functor_number_map_message_level_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 570 "message.c"
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

#line 591 "message.c"
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

#line 606 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 611 "message.c"
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

#line 626 "message.c"
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

#line 641 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 646 "message.c"
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

#line 661 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 666 "message.c"
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

#line 681 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 686 "message.c"
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

#line 701 "message.c"
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

#line 716 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_7[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 722 "message.c"
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

#line 737 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_8[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0
};

#line 742 "message.c"
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

#line 757 "message.c"
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

#line 772 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 777 "message.c"
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

#line 792 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 797 "message.c"
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

#line 812 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 817 "message.c"
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

#line 832 "message.c"
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

#line 847 "message.c"
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

#line 862 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_15[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 867 "message.c"
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

#line 882 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_0[6] = {
  &message__message__du_functor_desc_message_type_0_0,
  &message__message__du_functor_desc_message_type_0_2,
  &message__message__du_functor_desc_message_type_0_6,
  &message__message__du_functor_desc_message_type_0_9,
  &message__message__du_functor_desc_message_type_0_13,
  &message__message__du_functor_desc_message_type_0_14
};

#line 892 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_1[1] = {
  &message__message__du_functor_desc_message_type_0_1
};

#line 897 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_2[1] = {
  &message__message__du_functor_desc_message_type_0_3
};

#line 902 "message.c"
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

#line 914 "message.c"
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

#line 938 "message.c"
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

#line 958 "message.c"
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

#line 978 "message.c"
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

#line 999 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0
};

#line 1004 "message.c"
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

#line 1019 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 1025 "message.c"
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

#line 1040 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_2[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 1045 "message.c"
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

#line 1060 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_3[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 1065 "message.c"
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

#line 1080 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_0[1] = {
  &message__message__du_functor_desc_program_location_0_0
};

#line 1085 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_1[1] = {
  &message__message__du_functor_desc_program_location_0_1
};

#line 1090 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_2[1] = {
  &message__message__du_functor_desc_program_location_0_2
};

#line 1095 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_3[1] = {
  &message__message__du_functor_desc_program_location_0_3
};

#line 1100 "message.c"
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

#line 1124 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_program_location_0[4] = {
  &message__message__du_functor_desc_program_location_0_2,
  &message__message__du_functor_desc_program_location_0_3,
  &message__message__du_functor_desc_program_location_0_1,
  &message__message__du_functor_desc_program_location_0_0
};

#line 1132 "message.c"
static const MR_Integer message__message__functor_number_map_program_location_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1140 "message.c"
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

#line 1161 "message.c"
static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
#line 1164 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1166 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1168 "message.c"
{
#line 1170 "message.c"
  {
#line 1172 "message.c"
    MR_bool message__succeeded;

#line 1175 "message.c"
    {
#line 1177 "message.c"
      message__succeeded = message____Unify____message_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1180 "message.c"
    return message__succeeded;
#line 1182 "message.c"
  }
#line 1184 "message.c"
}

#line 1187 "message.c"
static void MR_CALL 
message____Compare____message_0_0_10001(
#line 1190 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1192 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1194 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1196 "message.c"
{
#line 1198 "message.c"
  {
#line 1200 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1203 "message.c"
    {
#line 1205 "message.c"
      message____Compare____message_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1208 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1210 "message.c"
  }
#line 1212 "message.c"
}

#line 1215 "message.c"
static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
#line 1218 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1220 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1222 "message.c"
{
#line 1224 "message.c"
  {
#line 1226 "message.c"
    MR_bool message__succeeded;

#line 1229 "message.c"
    {
#line 1231 "message.c"
      message__succeeded = message____Unify____message_level_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1234 "message.c"
    return message__succeeded;
#line 1236 "message.c"
  }
#line 1238 "message.c"
}

#line 1241 "message.c"
static void MR_CALL 
message____Compare____message_level_0_0_10001(
#line 1244 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1246 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1248 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1250 "message.c"
{
#line 1252 "message.c"
  {
#line 1254 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1257 "message.c"
    {
#line 1259 "message.c"
      message____Compare____message_level_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1262 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1264 "message.c"
  }
#line 1266 "message.c"
}

#line 1269 "message.c"
static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
#line 1272 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1274 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1276 "message.c"
{
#line 1278 "message.c"
  {
#line 1280 "message.c"
    MR_bool message__succeeded;

#line 1283 "message.c"
    {
#line 1285 "message.c"
      message__succeeded = message____Unify____message_type_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1288 "message.c"
    return message__succeeded;
#line 1290 "message.c"
  }
#line 1292 "message.c"
}

#line 1295 "message.c"
static void MR_CALL 
message____Compare____message_type_0_0_10001(
#line 1298 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1300 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1302 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1304 "message.c"
{
#line 1306 "message.c"
  {
#line 1308 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1311 "message.c"
    {
#line 1313 "message.c"
      message____Compare____message_type_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1316 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1318 "message.c"
  }
#line 1320 "message.c"
}

#line 1323 "message.c"
static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
#line 1326 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1328 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1330 "message.c"
{
#line 1332 "message.c"
  {
#line 1334 "message.c"
    MR_bool message__succeeded;

#line 1337 "message.c"
    {
#line 1339 "message.c"
      message__succeeded = message____Unify____program_location_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1342 "message.c"
    return message__succeeded;
#line 1344 "message.c"
  }
#line 1346 "message.c"
}

#line 1349 "message.c"
static void MR_CALL 
message____Compare____program_location_0_0_10001(
#line 1352 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1354 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1356 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1358 "message.c"
{
#line 1360 "message.c"
  {
#line 1362 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1365 "message.c"
    {
#line 1367 "message.c"
      message____Compare____program_location_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1370 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1372 "message.c"
  }
#line 1374 "message.c"
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
#line 1401 "message.c"
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
#line 1436 "message.c"
              *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
            else
#line 49 "message.m"
              if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1442 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
              else
#line 1446 "message.c"
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
#line 1461 "message.c"
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
#line 1489 "message.c"
                  *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
                else
#line 1493 "message.c"
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
#line 1510 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
              else
#line 49 "message.m"
                if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1516 "message.c"
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
#line 1536 "message.c"
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
#line 1557 "message.c"
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
#line 1570 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
              else
#line 49 "message.m"
                if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1576 "message.c"
                  *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
                else
#line 49 "message.m"
                  if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1582 "message.c"
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
#line 1654 "message.c"
              message__V_20_20 = (MR_Integer) message__V_9_9;
#line 1656 "message.c"
              message__V_21_21 = (MR_Integer) message__V_10_10;
#line 1658 "message.c"
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
#line 1687 "message.c"
                message__V_22_22 = (MR_Integer) message__V_11_11;
#line 1689 "message.c"
                message__V_23_23 = (MR_Integer) message__V_12_12;
#line 1691 "message.c"
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
#line 1722 "message.c"
                  {
#line 1724 "message.c"
                    message__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(message__V_5_5, message__V_7_7);
                  }
#line 49 "message.m"
                  if (message__succeeded)
#line 1729 "message.c"
                    {
#line 1731 "message.c"
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
#line 1755 "message.c"
                  {
#line 1757 "message.c"
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

#line 78 "message.m"
void MR_CALL 
message____Compare____message_type_0_0(
#line 78 "message.m"
  MR_Word * message__HeadVar__1_1,
#line 78 "message.m"
  MR_Word message__HeadVar__2_2,
#line 78 "message.m"
  MR_Word message__HeadVar__3_3)
#line 78 "message.m"
{
#line 78 "message.m"
  {
#line 78 "message.m"
    MR_bool message__succeeded;
#line 78 "message.m"
    MR_Integer message__CastX_30 = (MR_Integer) message__HeadVar__2_2;
#line 78 "message.m"
    MR_Integer message__CastY_31 = (MR_Integer) message__HeadVar__3_3;

#line 78 "message.m"
    message__succeeded = (message__CastX_30 == message__CastY_31);
#line 78 "message.m"
    if (message__succeeded)
#line 1795 "message.c"
      *message__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "message.m"
    else
#line 78 "message.m"
      {
#line 78 "message.m"
        MR_Integer message__V_4_4;
#line 78 "message.m"
        MR_Integer message__V_5_5;

#line 78 "message.m"
        {
#line 78 "message.m"
          message____Index____message_type_0_0(message__HeadVar__2_2, &message__V_4_4);
        }
#line 78 "message.m"
        {
#line 78 "message.m"
          message____Index____message_type_0_0(message__HeadVar__3_3, &message__V_5_5);
        }
#line 78 "message.m"
        message__succeeded = (message__V_4_4 < message__V_5_5);
#line 78 "message.m"
        if (message__succeeded)
#line 1820 "message.c"
          *message__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "message.m"
        else
#line 78 "message.m"
          {
#line 78 "message.m"
            message__succeeded = (message__V_4_4 > message__V_5_5);
#line 78 "message.m"
            if (message__succeeded)
#line 1830 "message.c"
              *message__HeadVar__1_1 = (MR_Integer) 2;
#line 78 "message.m"
            else
#line 78 "message.m"
              {
#line 78 "message.m"
                MR_Word message__V_6_6;

#line 78 "message.m"
                if ((message__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 78 "message.m"
                  {
#line 78 "message.m"
                    message__V_6_6 = (MR_Integer) 0;
#line 78 "message.m"
                    message__succeeded = MR_TRUE;
#line 78 "message.m"
                  }
#line 78 "message.m"
                else
#line 78 "message.m"
                  if ((message__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 78 "message.m"
                    {
#line 78 "message.m"
                      message__V_6_6 = (MR_Integer) 0;
#line 78 "message.m"
                      message__succeeded = MR_TRUE;
#line 78 "message.m"
                    }
#line 78 "message.m"
                  else
#line 78 "message.m"
                    if ((message__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 78 "message.m"
                      {
#line 78 "message.m"
                        message__V_6_6 = (MR_Integer) 0;
#line 78 "message.m"
                        message__succeeded = MR_TRUE;
#line 78 "message.m"
                      }
#line 78 "message.m"
                    else
#line 78 "message.m"
                      if ((message__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 78 "message.m"
                        {
#line 78 "message.m"
                          message__V_6_6 = (MR_Integer) 0;
#line 78 "message.m"
                          message__succeeded = MR_TRUE;
#line 78 "message.m"
                        }
#line 78 "message.m"
                      else
#line 78 "message.m"
                        if ((message__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 78 "message.m"
                          {
#line 78 "message.m"
                            message__V_6_6 = (MR_Integer) 0;
#line 78 "message.m"
                            message__succeeded = MR_TRUE;
#line 78 "message.m"
                          }
#line 78 "message.m"
                        else
#line 78 "message.m"
                          if ((message__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 78 "message.m"
                            {
#line 78 "message.m"
                              message__V_6_6 = (MR_Integer) 0;
#line 78 "message.m"
                              message__succeeded = MR_TRUE;
#line 78 "message.m"
                            }
#line 78 "message.m"
                          else
#line 78 "message.m"
                            if (((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 78 "message.m"
                              {
#line 78 "message.m"
                                MR_Integer message__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 0)));
#line 78 "message.m"
                                MR_Integer message__V_8_8;

#line 78 "message.m"
                                message__succeeded = ((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 78 "message.m"
                                if (message__succeeded)
#line 78 "message.m"
                                  {
#line 78 "message.m"
                                    message__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__HeadVar__3_3, (MR_Integer) 0)));
#line 78 "message.m"
                                    {
#line 78 "message.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_6_6, message__V_7_7, message__V_8_8);
                                    }
#line 78 "message.m"
                                    message__succeeded = MR_TRUE;
#line 78 "message.m"
                                  }
#line 78 "message.m"
                              }
#line 78 "message.m"
                            else
#line 78 "message.m"
                              if (((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 78 "message.m"
                                {
#line 78 "message.m"
                                  MR_Integer message__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__HeadVar__2_2, (MR_Integer) 0)));
#line 78 "message.m"
                                  MR_Integer message__V_10_10;

#line 78 "message.m"
                                  message__succeeded = ((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 78 "message.m"
                                  if (message__succeeded)
#line 78 "message.m"
                                    {
#line 78 "message.m"
                                      message__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__HeadVar__3_3, (MR_Integer) 0)));
#line 78 "message.m"
                                      {
#line 78 "message.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_6_6, message__V_9_9, message__V_10_10);
                                      }
#line 78 "message.m"
                                      message__succeeded = MR_TRUE;
#line 78 "message.m"
                                    }
#line 78 "message.m"
                                }
#line 78 "message.m"
                              else
#line 78 "message.m"
                                if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 78 "message.m"
                                  {
#line 78 "message.m"
                                    MR_String message__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "message.m"
                                    MR_String message__V_29_29;

#line 78 "message.m"
                                    message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 78 "message.m"
                                    if (message__succeeded)
#line 78 "message.m"
                                      {
#line 78 "message.m"
                                        message__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "message.m"
                                        {
#line 78 "message.m"
                                          mercury__private_builtin__builtin_compare_string_3_p_0(&message__V_6_6, message__V_28_28, message__V_29_29);
                                        }
#line 78 "message.m"
                                        message__succeeded = MR_TRUE;
#line 78 "message.m"
                                      }
#line 78 "message.m"
                                  }
#line 78 "message.m"
                                else
#line 78 "message.m"
                                  if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 78 "message.m"
                                    {
#line 78 "message.m"
                                      MR_Integer message__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "message.m"
                                      MR_Integer message__V_12_12;

#line 78 "message.m"
                                      message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 78 "message.m"
                                      if (message__succeeded)
#line 78 "message.m"
                                        {
#line 78 "message.m"
                                          message__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "message.m"
                                          {
#line 78 "message.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_6_6, message__V_11_11, message__V_12_12);
                                          }
#line 78 "message.m"
                                          message__succeeded = MR_TRUE;
#line 78 "message.m"
                                        }
#line 78 "message.m"
                                    }
#line 78 "message.m"
                                  else
#line 78 "message.m"
                                    if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 78 "message.m"
                                      {
#line 78 "message.m"
                                        MR_Word message__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "message.m"
                                        MR_Word message__V_21_21;
#line 78 "message.m"
                                        MR_Integer message__V_43_43;
#line 78 "message.m"
                                        MR_Integer message__V_44_44;

#line 78 "message.m"
                                        message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 78 "message.m"
                                        if (message__succeeded)
#line 78 "message.m"
                                          {
#line 78 "message.m"
                                            message__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "message.m"
                                            message__V_43_43 = (MR_Integer) message__V_20_20;
#line 78 "message.m"
                                            message__V_44_44 = (MR_Integer) message__V_21_21;
#line 78 "message.m"
                                            {
#line 78 "message.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_6_6, message__V_43_43, message__V_44_44);
                                            }
#line 78 "message.m"
                                            message__succeeded = MR_TRUE;
#line 78 "message.m"
                                          }
#line 78 "message.m"
                                      }
#line 78 "message.m"
                                    else
#line 78 "message.m"
                                      if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 78 "message.m"
                                        {
#line 78 "message.m"
                                          MR_Integer message__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "message.m"
                                          MR_Integer message__V_14_14;

#line 78 "message.m"
                                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 78 "message.m"
                                          if (message__succeeded)
#line 78 "message.m"
                                            {
#line 78 "message.m"
                                              message__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "message.m"
                                              {
#line 78 "message.m"
                                                mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_6_6, message__V_13_13, message__V_14_14);
                                              }
#line 78 "message.m"
                                              message__succeeded = MR_TRUE;
#line 78 "message.m"
                                            }
#line 78 "message.m"
                                        }
#line 78 "message.m"
                                      else
#line 78 "message.m"
                                        if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 78 "message.m"
                                          {
#line 78 "message.m"
                                            MR_Integer message__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "message.m"
                                            MR_Integer message__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 2)));
#line 78 "message.m"
                                            MR_Integer message__V_17_17;
#line 78 "message.m"
                                            MR_Integer message__V_18_18;
#line 78 "message.m"
                                            MR_Word message__V_19_19;

#line 78 "message.m"
                                            message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 78 "message.m"
                                            if (message__succeeded)
#line 78 "message.m"
                                              {
#line 78 "message.m"
                                                message__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "message.m"
                                                message__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 2)));
#line 78 "message.m"
                                                {
#line 78 "message.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_19_19, message__V_15_15, message__V_17_17);
                                                }
#line 2129 "message.c"
                                                message__succeeded = (message__V_19_19 == (MR_Integer) 0);
#line 78 "message.m"
                                                message__succeeded = !(message__succeeded);
#line 78 "message.m"
                                                if (message__succeeded)
#line 78 "message.m"
                                                  message__V_6_6 = message__V_19_19;
#line 78 "message.m"
                                                else
#line 78 "message.m"
                                                  {
#line 78 "message.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&message__V_6_6, message__V_16_16, message__V_18_18);
                                                  }
#line 78 "message.m"
                                                message__succeeded = MR_TRUE;
#line 78 "message.m"
                                              }
#line 78 "message.m"
                                          }
#line 78 "message.m"
                                        else
#line 78 "message.m"
                                          if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 78 "message.m"
                                            {
#line 78 "message.m"
                                              MR_String message__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "message.m"
                                              MR_String message__V_25_25;

#line 78 "message.m"
                                              message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 78 "message.m"
                                              if (message__succeeded)
#line 78 "message.m"
                                                {
#line 78 "message.m"
                                                  message__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "message.m"
                                                  {
#line 78 "message.m"
                                                    mercury__private_builtin__builtin_compare_string_3_p_0(&message__V_6_6, message__V_24_24, message__V_25_25);
                                                  }
#line 78 "message.m"
                                                  message__succeeded = MR_TRUE;
#line 78 "message.m"
                                                }
#line 78 "message.m"
                                            }
#line 78 "message.m"
                                          else
#line 78 "message.m"
                                            if (((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 78 "message.m"
                                              {
#line 78 "message.m"
                                                MR_String message__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "message.m"
                                                MR_String message__V_27_27;

#line 78 "message.m"
                                                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 78 "message.m"
                                                if (message__succeeded)
#line 78 "message.m"
                                                  {
#line 78 "message.m"
                                                    message__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "message.m"
                                                    {
#line 78 "message.m"
                                                      mercury__private_builtin__builtin_compare_string_3_p_0(&message__V_6_6, message__V_26_26, message__V_27_27);
                                                    }
#line 78 "message.m"
                                                    message__succeeded = MR_TRUE;
#line 78 "message.m"
                                                  }
#line 78 "message.m"
                                              }
#line 78 "message.m"
                                            else
#line 78 "message.m"
                                              {
#line 78 "message.m"
                                                MR_String message__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "message.m"
                                                MR_String message__V_23_23;

#line 78 "message.m"
                                                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 78 "message.m"
                                                if (message__succeeded)
#line 78 "message.m"
                                                  {
#line 78 "message.m"
                                                    message__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "message.m"
                                                    {
#line 78 "message.m"
                                                      mercury__private_builtin__builtin_compare_string_3_p_0(&message__V_6_6, message__V_22_22, message__V_23_23);
                                                    }
#line 78 "message.m"
                                                    message__succeeded = MR_TRUE;
#line 78 "message.m"
                                                  }
#line 78 "message.m"
                                              }
#line 78 "message.m"
                if (message__succeeded)
#line 78 "message.m"
                  *message__HeadVar__1_1 = message__V_6_6;
#line 78 "message.m"
                else
#line 78 "message.m"
                  {
#line 78 "message.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 78 "message.m"
                    return;
                  }
#line 78 "message.m"
              }
#line 78 "message.m"
          }
#line 78 "message.m"
      }
#line 78 "message.m"
  }
#line 78 "message.m"
}

#line 78 "message.m"
void MR_CALL 
message____Index____message_type_0_0(
#line 78 "message.m"
  MR_Word message__HeadVar__1_1,
#line 78 "message.m"
  MR_Integer * message__HeadVar__2_2)
#line 78 "message.m"
{
#line 78 "message.m"
  {
#line 78 "message.m"
    MR_bool message__succeeded;

#line 78 "message.m"
    if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 2278 "message.c"
      *message__HeadVar__2_2 = (MR_Integer) 14;
#line 78 "message.m"
    else
#line 78 "message.m"
      if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2284 "message.c"
        *message__HeadVar__2_2 = (MR_Integer) 13;
#line 78 "message.m"
      else
#line 78 "message.m"
        if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2290 "message.c"
          *message__HeadVar__2_2 = (MR_Integer) 0;
#line 78 "message.m"
        else
#line 78 "message.m"
          if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2296 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 2;
#line 78 "message.m"
          else
#line 78 "message.m"
            if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2302 "message.c"
              *message__HeadVar__2_2 = (MR_Integer) 6;
#line 78 "message.m"
            else
#line 78 "message.m"
              if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2308 "message.c"
                *message__HeadVar__2_2 = (MR_Integer) 9;
#line 78 "message.m"
              else
#line 78 "message.m"
                if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2314 "message.c"
                  *message__HeadVar__2_2 = (MR_Integer) 1;
#line 78 "message.m"
                else
#line 78 "message.m"
                  if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 2320 "message.c"
                    *message__HeadVar__2_2 = (MR_Integer) 3;
#line 78 "message.m"
                  else
#line 78 "message.m"
                    if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2326 "message.c"
                      *message__HeadVar__2_2 = (MR_Integer) 15;
#line 78 "message.m"
                    else
#line 78 "message.m"
                      if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2332 "message.c"
                        *message__HeadVar__2_2 = (MR_Integer) 4;
#line 78 "message.m"
                      else
#line 78 "message.m"
                        if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2338 "message.c"
                          *message__HeadVar__2_2 = (MR_Integer) 8;
#line 78 "message.m"
                        else
#line 78 "message.m"
                          if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2344 "message.c"
                            *message__HeadVar__2_2 = (MR_Integer) 5;
#line 78 "message.m"
                          else
#line 78 "message.m"
                            if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2350 "message.c"
                              *message__HeadVar__2_2 = (MR_Integer) 7;
#line 78 "message.m"
                            else
#line 78 "message.m"
                              if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2356 "message.c"
                                *message__HeadVar__2_2 = (MR_Integer) 11;
#line 78 "message.m"
                              else
#line 78 "message.m"
                                if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2362 "message.c"
                                  *message__HeadVar__2_2 = (MR_Integer) 12;
#line 78 "message.m"
                                else
#line 2366 "message.c"
                                  *message__HeadVar__2_2 = (MR_Integer) 10;
#line 78 "message.m"
  }
#line 78 "message.m"
}

#line 78 "message.m"
MR_bool MR_CALL 
message____Unify____message_type_0_0(
#line 78 "message.m"
  MR_Word message__HeadVar__1_1,
#line 78 "message.m"
  MR_Word message__HeadVar__2_2)
#line 78 "message.m"
{
#line 78 "message.m"
  {
#line 78 "message.m"
    MR_bool message__succeeded;
#line 78 "message.m"
    MR_Integer message__CastX_37 = (MR_Integer) message__HeadVar__1_1;
#line 78 "message.m"
    MR_Integer message__CastY_38 = (MR_Integer) message__HeadVar__2_2;

#line 78 "message.m"
    message__succeeded = (message__CastX_37 == message__CastY_38);
#line 78 "message.m"
    if (message__succeeded)
#line 78 "message.m"
      message__succeeded = MR_TRUE;
#line 78 "message.m"
    else
#line 78 "message.m"
      if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 78 "message.m"
        {
#line 78 "message.m"
          MR_Integer message__CastX_33 = (MR_Integer) message__HeadVar__1_1;
#line 78 "message.m"
          MR_Integer message__CastY_34 = (MR_Integer) message__HeadVar__2_2;

#line 78 "message.m"
          message__succeeded = (message__CastY_34 == message__CastX_33);
#line 78 "message.m"
        }
#line 78 "message.m"
      else
#line 78 "message.m"
        if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 78 "message.m"
          {
#line 78 "message.m"
            MR_Integer message__CastX_31 = (MR_Integer) message__HeadVar__1_1;
#line 78 "message.m"
            MR_Integer message__CastY_32 = (MR_Integer) message__HeadVar__2_2;

#line 78 "message.m"
            message__succeeded = (message__CastY_32 == message__CastX_31);
#line 78 "message.m"
          }
#line 78 "message.m"
        else
#line 78 "message.m"
          if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 78 "message.m"
            {
#line 78 "message.m"
              MR_Integer message__CastX_3 = (MR_Integer) message__HeadVar__1_1;
#line 78 "message.m"
              MR_Integer message__CastY_4 = (MR_Integer) message__HeadVar__2_2;

#line 78 "message.m"
              message__succeeded = (message__CastY_4 == message__CastX_3);
#line 78 "message.m"
            }
#line 78 "message.m"
          else
#line 78 "message.m"
            if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 78 "message.m"
              {
#line 78 "message.m"
                MR_Integer message__CastX_7 = (MR_Integer) message__HeadVar__1_1;
#line 78 "message.m"
                MR_Integer message__CastY_8 = (MR_Integer) message__HeadVar__2_2;

#line 78 "message.m"
                message__succeeded = (message__CastY_8 == message__CastX_7);
#line 78 "message.m"
              }
#line 78 "message.m"
            else
#line 78 "message.m"
              if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 78 "message.m"
                {
#line 78 "message.m"
                  MR_Integer message__CastX_15 = (MR_Integer) message__HeadVar__1_1;
#line 78 "message.m"
                  MR_Integer message__CastY_16 = (MR_Integer) message__HeadVar__2_2;

#line 78 "message.m"
                  message__succeeded = (message__CastY_16 == message__CastX_15);
#line 78 "message.m"
                }
#line 78 "message.m"
              else
#line 78 "message.m"
                if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 78 "message.m"
                  {
#line 78 "message.m"
                    MR_Integer message__CastX_23 = (MR_Integer) message__HeadVar__1_1;
#line 78 "message.m"
                    MR_Integer message__CastY_24 = (MR_Integer) message__HeadVar__2_2;

#line 78 "message.m"
                    message__succeeded = (message__CastY_24 == message__CastX_23);
#line 78 "message.m"
                  }
#line 78 "message.m"
                else
#line 78 "message.m"
                  if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 78 "message.m"
                    {
#line 78 "message.m"
                      MR_Integer message__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__HeadVar__1_1, (MR_Integer) 0)));
#line 78 "message.m"
                      MR_Integer message__V_6_6;

#line 78 "message.m"
                      message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 78 "message.m"
                      if (message__succeeded)
#line 78 "message.m"
                        {
#line 78 "message.m"
                          message__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 0)));
#line 2506 "message.c"
                          message__succeeded = (message__V_5_5 == message__V_6_6);
#line 78 "message.m"
                        }
#line 78 "message.m"
                    }
#line 78 "message.m"
                  else
#line 78 "message.m"
                    if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 78 "message.m"
                      {
#line 78 "message.m"
                        MR_Integer message__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__HeadVar__1_1, (MR_Integer) 0)));
#line 78 "message.m"
                        MR_Integer message__V_10_10;

#line 78 "message.m"
                        message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 78 "message.m"
                        if (message__succeeded)
#line 78 "message.m"
                          {
#line 78 "message.m"
                            message__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__HeadVar__2_2, (MR_Integer) 0)));
#line 2531 "message.c"
                            message__succeeded = (message__V_9_9 == message__V_10_10);
#line 78 "message.m"
                          }
#line 78 "message.m"
                      }
#line 78 "message.m"
                    else
#line 78 "message.m"
                      if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 78 "message.m"
                        {
#line 78 "message.m"
                          MR_String message__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "message.m"
                          MR_String message__V_36_36;

#line 78 "message.m"
                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 78 "message.m"
                          if (message__succeeded)
#line 78 "message.m"
                            {
#line 78 "message.m"
                              message__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2556 "message.c"
                              message__succeeded = (strcmp(message__V_35_35, message__V_36_36) == 0);
#line 78 "message.m"
                            }
#line 78 "message.m"
                        }
#line 78 "message.m"
                      else
#line 78 "message.m"
                        if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 78 "message.m"
                          {
#line 78 "message.m"
                            MR_Integer message__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "message.m"
                            MR_Integer message__V_12_12;

#line 78 "message.m"
                            message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 78 "message.m"
                            if (message__succeeded)
#line 78 "message.m"
                              {
#line 78 "message.m"
                                message__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2581 "message.c"
                                message__succeeded = (message__V_11_11 == message__V_12_12);
#line 78 "message.m"
                              }
#line 78 "message.m"
                          }
#line 78 "message.m"
                        else
#line 78 "message.m"
                          if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 78 "message.m"
                            {
#line 78 "message.m"
                              MR_Word message__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "message.m"
                              MR_Word message__V_22_22;

#line 78 "message.m"
                              message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 78 "message.m"
                              if (message__succeeded)
#line 78 "message.m"
                                {
#line 78 "message.m"
                                  message__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2606 "message.c"
                                  message__succeeded = (message__V_21_21 == message__V_22_22);
#line 78 "message.m"
                                }
#line 78 "message.m"
                            }
#line 78 "message.m"
                          else
#line 78 "message.m"
                            if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 78 "message.m"
                              {
#line 78 "message.m"
                                MR_Integer message__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "message.m"
                                MR_Integer message__V_14_14;

#line 78 "message.m"
                                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 78 "message.m"
                                if (message__succeeded)
#line 78 "message.m"
                                  {
#line 78 "message.m"
                                    message__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2631 "message.c"
                                    message__succeeded = (message__V_13_13 == message__V_14_14);
#line 78 "message.m"
                                  }
#line 78 "message.m"
                              }
#line 78 "message.m"
                            else
#line 78 "message.m"
                              if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 78 "message.m"
                                {
#line 78 "message.m"
                                  MR_Integer message__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "message.m"
                                  MR_Integer message__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 2)));
#line 78 "message.m"
                                  MR_Integer message__V_19_19;
#line 78 "message.m"
                                  MR_Integer message__V_20_20;

#line 78 "message.m"
                                  message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 78 "message.m"
                                  if (message__succeeded)
#line 78 "message.m"
                                    {
#line 78 "message.m"
                                      message__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "message.m"
                                      message__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 2)));
#line 2662 "message.c"
                                      message__succeeded = (message__V_17_17 == message__V_19_19);
#line 78 "message.m"
                                      if (message__succeeded)
#line 2666 "message.c"
                                        message__succeeded = (message__V_18_18 == message__V_20_20);
#line 78 "message.m"
                                    }
#line 78 "message.m"
                                }
#line 78 "message.m"
                              else
#line 78 "message.m"
                                if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 78 "message.m"
                                  {
#line 78 "message.m"
                                    MR_String message__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "message.m"
                                    MR_String message__V_28_28;

#line 78 "message.m"
                                    message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 78 "message.m"
                                    if (message__succeeded)
#line 78 "message.m"
                                      {
#line 78 "message.m"
                                        message__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2691 "message.c"
                                        message__succeeded = (strcmp(message__V_27_27, message__V_28_28) == 0);
#line 78 "message.m"
                                      }
#line 78 "message.m"
                                  }
#line 78 "message.m"
                                else
#line 78 "message.m"
                                  if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 78 "message.m"
                                    {
#line 78 "message.m"
                                      MR_String message__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "message.m"
                                      MR_String message__V_30_30;

#line 78 "message.m"
                                      message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 78 "message.m"
                                      if (message__succeeded)
#line 78 "message.m"
                                        {
#line 78 "message.m"
                                          message__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2716 "message.c"
                                          message__succeeded = (strcmp(message__V_29_29, message__V_30_30) == 0);
#line 78 "message.m"
                                        }
#line 78 "message.m"
                                    }
#line 78 "message.m"
                                  else
#line 78 "message.m"
                                    {
#line 78 "message.m"
                                      MR_String message__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "message.m"
                                      MR_String message__V_26_26;

#line 78 "message.m"
                                      message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 78 "message.m"
                                      if (message__succeeded)
#line 78 "message.m"
                                        {
#line 78 "message.m"
                                          message__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
#line 2739 "message.c"
                                          message__succeeded = (strcmp(message__V_25_25, message__V_26_26) == 0);
#line 78 "message.m"
                                        }
#line 78 "message.m"
                                    }
#line 78 "message.m"
    return message__succeeded;
#line 78 "message.m"
  }
#line 78 "message.m"
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
#line 2793 "message.c"
  {
#line 2795 "message.c"
    MR_bool message__succeeded = (message__HeadVar__2_1 == message__HeadVar__2_2);

#line 2798 "message.c"
    return message__succeeded;
#line 2800 "message.c"
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
#line 2829 "message.c"
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
#line 2851 "message.c"
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

#line 2912 "message.c"
        {
#line 2914 "message.c"
          message__succeeded = message____Unify____program_location_0_0(message__V_3_3, message__V_5_5);
        }
#line 33 "message.m"
        if (message__succeeded)
#line 2919 "message.c"
          {
#line 2921 "message.c"
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

#line 410 "message.m"
static void MR_CALL 
message__write_out_message_4_p_0(
#line 410 "message.m"
  MR_Word message__Stream_5,
#line 410 "message.m"
  MR_Word message__Message_6)
#line 410 "message.m"
{
#line 413 "message.m"
  {
#line 413 "message.m"
    MR_bool message__succeeded;
#line 413 "message.m"
    MR_Word message__Level_8;
#line 413 "message.m"
    MR_Integer message__VerbosityLevel_9;
#line 413 "message.m"
    MR_Word message__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__Message_6, (MR_Integer) 1)));
#line 206 "message.m"
    MR_Word message__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__Message_6, (MR_Integer) 0)));
#line 416 "message.m"
    MR_Integer message__V_14_14;

#line 283 "message.m"
    if ((((((message__Type_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))) || (((((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_18, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || ((message__Type_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))))
#line 304 "message.m"
      message__Level_8 = (MR_Integer) 3;
#line 283 "message.m"
    else
#line 283 "message.m"
      if ((((((((((message__Type_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_18, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || ((message__Type_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || (((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 2))))))
#line 284 "message.m"
        message__Level_8 = (MR_Integer) 0;
#line 283 "message.m"
      else
#line 283 "message.m"
        if ((((((((message__Type_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || (((((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_18, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_18, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__Type_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_18, (MR_Integer) 0)))) == (MR_Integer) 2))))))
#line 291 "message.m"
          message__Level_8 = (MR_Integer) 1;
#line 283 "message.m"
        else
#line 298 "message.m"
          message__Level_8 = (MR_Integer) 2;
#line 404 "message.m"
{
#define MR_PROC_LABEL message__write_out_message_4_p_0


		{
#line 404 "message.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 2989 "message.c"

		;}
#undef MR_PROC_LABEL
#line 404 "message.m"
}
#line 404 "message.m"
{
#define MR_PROC_LABEL message__write_out_message_4_p_0

	MR_Integer X;

		{
#line 404 "message.m"
X = message__mutable_variable_verbosity_level_mut;

#line 3005 "message.c"

		;}
#undef MR_PROC_LABEL
	 message__VerbosityLevel_9  = X;
#line 404 "message.m"
}
#line 404 "message.m"
{
#define MR_PROC_LABEL message__write_out_message_4_p_0


		{
#line 404 "message.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3024 "message.c"

		;}
#undef MR_PROC_LABEL
#line 404 "message.m"
}
#line 267 "message.m"
    if ((message__Level_8 == (MR_Integer) 3))
#line 270 "message.m"
      message__V_14_14 = (MR_Integer) 1;
#line 267 "message.m"
    else
#line 267 "message.m"
      if ((message__Level_8 == (MR_Integer) 0))
#line 267 "message.m"
        message__V_14_14 = (MR_Integer) 4;
#line 267 "message.m"
      else
#line 267 "message.m"
        if ((message__Level_8 == (MR_Integer) 1))
#line 268 "message.m"
          message__V_14_14 = (MR_Integer) 3;
#line 267 "message.m"
        else
#line 269 "message.m"
          message__V_14_14 = (MR_Integer) 2;
#line 416 "message.m"
    message__succeeded = (message__V_14_14 <= message__VerbosityLevel_9);
#line 420 "message.m"
    if (message__succeeded)
#line 417 "message.m"
      {
#line 417 "message.m"
        MR_String message__MessageStr_10;

#line 417 "message.m"
        {
#line 417 "message.m"
          message__message_to_string_2_p_0(message__Message_6, &message__MessageStr_10);
        }
#line 418 "message.m"
        {
#line 418 "message.m"
          mercury__io__write_string_4_p_0(message__Stream_5, message__MessageStr_10);
        }
#line 419 "message.m"
        {
#line 419 "message.m"
          mercury__io__nl_3_p_0(message__Stream_5);
#line 419 "message.m"
          return;
        }
#line 417 "message.m"
      }
#line 420 "message.m"
    else
#line 419 "message.m"
      {
#line 419 "message.m"
      }
#line 413 "message.m"
  }
#line 410 "message.m"
}

#line 404 "message.m"
static void MR_CALL 
message__unsafe_set_verbosity_level_mut_1_p_0(
#line 404 "message.m"
  MR_Integer message__X_1)
#line 404 "message.m"
{
#line 404 "message.m"
  {
#line 404 "message.m"
    MR_bool message__succeeded;

#line 404 "message.m"
{
#define MR_PROC_LABEL message__unsafe_set_verbosity_level_mut_1_p_0

	MR_Integer X;

	X =  message__X_1 ;
		{
#line 404 "message.m"
message__mutable_variable_verbosity_level_mut = X;

#line 3112 "message.c"

		;}
#undef MR_PROC_LABEL
#line 404 "message.m"
}
#line 404 "message.m"
  }
#line 404 "message.m"
}

#line 404 "message.m"
static void MR_CALL 
message__unsafe_get_verbosity_level_mut_1_p_0(
#line 404 "message.m"
  MR_Integer * message__X_1)
#line 404 "message.m"
{
#line 404 "message.m"
  {
#line 404 "message.m"
    MR_bool message__succeeded;

#line 404 "message.m"
{
#define MR_PROC_LABEL message__unsafe_get_verbosity_level_mut_1_p_0

	MR_Integer X;

		{
#line 404 "message.m"
X = message__mutable_variable_verbosity_level_mut;

#line 3145 "message.c"

		;}
#undef MR_PROC_LABEL
	 *message__X_1  = X;
#line 404 "message.m"
}
#line 404 "message.m"
  }
#line 404 "message.m"
}

#line 404 "message.m"
static void MR_CALL 
message__unlock_verbosity_level_mut_0_p_0(void)
#line 404 "message.m"
{
#line 404 "message.m"
  {
#line 404 "message.m"
    MR_bool message__succeeded;

#line 404 "message.m"
{
#define MR_PROC_LABEL message__unlock_verbosity_level_mut_0_p_0


		{
#line 404 "message.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3179 "message.c"

		;}
#undef MR_PROC_LABEL
#line 404 "message.m"
}
#line 404 "message.m"
  }
#line 404 "message.m"
}

#line 404 "message.m"
static void MR_CALL 
message__lock_verbosity_level_mut_0_p_0(void)
#line 404 "message.m"
{
#line 404 "message.m"
  {
#line 404 "message.m"
    MR_bool message__succeeded;

#line 404 "message.m"
{
#define MR_PROC_LABEL message__lock_verbosity_level_mut_0_p_0


		{
#line 404 "message.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3212 "message.c"

		;}
#undef MR_PROC_LABEL
#line 404 "message.m"
}
#line 404 "message.m"
  }
#line 404 "message.m"
}

#line 404 "message.m"
static void MR_CALL 
message__pre_initialise_mutable_verbosity_level_mut_0_p_0(void)
#line 404 "message.m"
{
#line 404 "message.m"
  {
#line 404 "message.m"
    MR_bool message__succeeded;

#line 404 "message.m"
{
#define MR_PROC_LABEL message__pre_initialise_mutable_verbosity_level_mut_0_p_0


		{
#line 404 "message.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&message__mutable_variable_verbosity_level_mut_lock, MR_MUTEX_ATTR);
#endif

#line 3244 "message.c"

		;}
#undef MR_PROC_LABEL
#line 404 "message.m"
}
#line 404 "message.m"
  }
#line 404 "message.m"
}

#line 404 "message.m"
static void MR_CALL 
message__initialise_mutable_verbosity_level_mut_0_p_0(void)
#line 404 "message.m"
{
#line 404 "message.m"
  {
#line 404 "message.m"
    MR_bool message__succeeded;

#line 404 "message.m"
{
#define MR_PROC_LABEL message__initialise_mutable_verbosity_level_mut_0_p_0


		{
#line 404 "message.m"
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&message__mutable_variable_verbosity_level_mut_lock, MR_MUTEX_ATTR);
#endif

#line 3276 "message.c"

		;}
#undef MR_PROC_LABEL
#line 404 "message.m"
}
#line 404 "message.m"
{
#define MR_PROC_LABEL message__initialise_mutable_verbosity_level_mut_0_p_0


		{
#line 404 "message.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3294 "message.c"

		;}
#undef MR_PROC_LABEL
#line 404 "message.m"
}
#line 404 "message.m"
{
#define MR_PROC_LABEL message__initialise_mutable_verbosity_level_mut_0_p_0

	MR_Integer X;

	X =  (MR_Integer) 2 ;
		{
#line 404 "message.m"
message__mutable_variable_verbosity_level_mut = X;

#line 3311 "message.c"

		;}
#undef MR_PROC_LABEL
#line 404 "message.m"
}
#line 404 "message.m"
{
#define MR_PROC_LABEL message__initialise_mutable_verbosity_level_mut_0_p_0


		{
#line 404 "message.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3329 "message.c"

		;}
#undef MR_PROC_LABEL
#line 404 "message.m"
}
#line 404 "message.m"
  }
#line 404 "message.m"
}

#line 309 "message.m"
static MR_Word MR_CALL 
message__message_type_to_string_1_f_0(
#line 309 "message.m"
  MR_Word message__MessageType_3)
#line 309 "message.m"
{
#line 311 "message.m"
  {
#line 311 "message.m"
    MR_bool message__succeeded;
#line 311 "message.m"
    MR_Word message__Cord_4;
#line 311 "message.m"
    MR_String message__String_5;

#line 315 "message.m"
    if ((message__MessageType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 317 "message.m"
      message__String_5 = (MR_String) "Cannot lookup coverage points";
#line 315 "message.m"
    else
#line 315 "message.m"
      if ((message__MessageType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 366 "message.m"
        message__String_5 = (MR_String) "extra proc dynamnics for a clique proc are not currenty handled.";
#line 315 "message.m"
      else
#line 315 "message.m"
        if ((message__MessageType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 314 "message.m"
          message__String_5 = (MR_String) "Found candidate conjunction";
#line 315 "message.m"
        else
#line 315 "message.m"
          if ((message__MessageType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 334 "message.m"
            message__String_5 = (MR_String) "Found pushed conjuncts above callsite threashold";
#line 315 "message.m"
          else
#line 315 "message.m"
            if ((message__MessageType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 343 "message.m"
              message__String_5 = (MR_String) "Parallelising call pairs that have more than one dependent variable is not yet supported.";
#line 315 "message.m"
            else
#line 315 "message.m"
              if ((message__MessageType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 358 "message.m"
                message__String_5 = (MR_String) "Could not look up proc defn, perhaps this procedure is built-in";
#line 315 "message.m"
              else
#line 315 "message.m"
                if (((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 1))))
#line 330 "message.m"
                  {
#line 330 "message.m"
                    MR_Integer message__Num_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__MessageType_3, (MR_Integer) 0)));
#line 330 "message.m"
                    MR_String message__V_79_79;
#line 330 "message.m"
                    MR_String message__V_80_80;

#line 3403 "message.c"
                    {
#line 3405 "message.c"
                      message__V_79_79 = mercury__string__int_to_string_1_f_0(message__Num_6);
                    }
#line 3408 "message.c"
                    {
#line 3410 "message.c"
                      message__V_80_80 = mercury__string__f_43_43_2_f_0(message__V_79_79, (MR_String) " conjuncts above callsite threashold");
                    }
#line 3413 "message.c"
                    {
#line 3415 "message.c"
                      message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Found ", message__V_80_80);
                    }
#line 330 "message.m"
                  }
#line 315 "message.m"
                else
#line 315 "message.m"
                  if (((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 2))))
#line 330 "message.m"
                    {
#line 330 "message.m"
                      MR_Integer message__Num_62 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__MessageType_3, (MR_Integer) 0)));
#line 330 "message.m"
                      MR_String message__V_90_90;
#line 330 "message.m"
                      MR_String message__V_91_91;

#line 3433 "message.c"
                      {
#line 3435 "message.c"
                        message__V_90_90 = mercury__string__int_to_string_1_f_0(message__Num_62);
                      }
#line 3438 "message.c"
                      {
#line 3440 "message.c"
                        message__V_91_91 = mercury__string__f_43_43_2_f_0(message__V_90_90, (MR_String) " partitions, this may reduce parallelism");
                      }
#line 3443 "message.c"
                      {
#line 3445 "message.c"
                        message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Split conjunction into ", message__V_91_91);
                      }
#line 330 "message.m"
                    }
#line 315 "message.m"
                  else
#line 315 "message.m"
                    if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 380 "message.m"
                      {
#line 380 "message.m"
                        MR_String message__ErrorStr_13 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));

#line 3459 "message.c"
                        {
#line 3461 "message.c"
                          message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Exception thrown: ", message__ErrorStr_13);
                        }
#line 380 "message.m"
                      }
#line 315 "message.m"
                    else
#line 315 "message.m"
                      if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 330 "message.m"
                        {
#line 330 "message.m"
                          MR_Integer message__Num_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 330 "message.m"
                          MR_String message__V_86_86;
#line 330 "message.m"
                          MR_String message__V_87_87;

#line 3479 "message.c"
                          {
#line 3481 "message.c"
                            message__V_86_86 = mercury__string__int_to_string_1_f_0(message__Num_57);
                          }
#line 3484 "message.c"
                          {
#line 3486 "message.c"
                            message__V_87_87 = mercury__string__f_43_43_2_f_0(message__V_86_86, (MR_String) " conjunctions with a positive speedup due to parallelisation");
                          }
#line 3489 "message.c"
                          {
#line 3491 "message.c"
                            message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Found ", message__V_87_87);
                          }
#line 330 "message.m"
                        }
#line 315 "message.m"
                      else
#line 315 "message.m"
                        if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 351 "message.m"
                          {
#line 351 "message.m"
                            MR_Word message__Detism_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 351 "message.m"
                            MR_Word message__V_28_28;
#line 351 "message.m"
                            MR_Word message__V_31_31;
#line 351 "message.m"
                            MR_String message__V_32_32;

#line 354 "message.m"
                            {
#line 354 "message.m"
                              message__V_32_32 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0, ((MR_Box) (message__Detism_11)));
                            }
#line 354 "message.m"
                            {
#line 354 "message.m"
                              message__V_31_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 354 "message.m"
                              MR_hl_field(MR_mktag(2), message__V_31_31, 0) = ((MR_Box) (message__V_32_32));
#line 354 "message.m"
                            }
#line 354 "message.m"
                            {
#line 354 "message.m"
                              message__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "message.m"
                              MR_hl_field(MR_mktag(1), message__V_28_28, 0) = ((MR_Box) (message__V_31_31));
#line 354 "message.m"
                              MR_hl_field(MR_mktag(1), message__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "message.m"
                            }
#line 352 "message.m"
                            {
#line 352 "message.m"
                              mercury__string__format_3_p_0((MR_String) "There are %d goals amoungst goals above the parallelisation overhead.", message__V_28_28, &message__String_5);
                            }
#line 351 "message.m"
                          }
#line 315 "message.m"
                        else
#line 315 "message.m"
                          if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 336 "message.m"
                            {
#line 336 "message.m"
                              MR_Integer message__CandidateConjuncts_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 336 "message.m"
                              MR_String message__V_83_83;

#line 3552 "message.c"
                              {
#line 3554 "message.c"
                                message__V_83_83 = mercury__string__int_to_string_1_f_0(message__CandidateConjuncts_8);
                              }
#line 3557 "message.c"
                              {
#line 3559 "message.c"
                                message__String_5 = mercury__string__f_43_43_2_f_0(message__V_83_83, (MR_String) " conjunctions not parallelised: Seen duplicate instantiations");
                              }
#line 336 "message.m"
                            }
#line 315 "message.m"
                          else
#line 315 "message.m"
                            if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 346 "message.m"
                              {
#line 346 "message.m"
                                MR_Integer message__PartNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 346 "message.m"
                                MR_Integer message__NumCalls_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 2)));
#line 346 "message.m"
                                MR_String message__V_94_94;
#line 346 "message.m"
                                MR_String message__V_95_95;
#line 346 "message.m"
                                MR_String message__V_97_97;
#line 346 "message.m"
                                MR_String message__V_98_98;
#line 346 "message.m"
                                MR_String message__V_99_99;

#line 3585 "message.c"
                                {
#line 3587 "message.c"
                                  message__V_94_94 = mercury__string__int_to_string_1_f_0(message__NumCalls_10);
                                }
#line 3590 "message.c"
                                {
#line 3592 "message.c"
                                  message__V_95_95 = mercury__string__f_43_43_2_f_0(message__V_94_94, (MR_String) " costly calls and cannot be parallelised");
                                }
#line 3595 "message.c"
                                {
#line 3597 "message.c"
                                  message__V_97_97 = mercury__string__f_43_43_2_f_0((MR_String) " has only ", message__V_95_95);
                                }
#line 3600 "message.c"
                                {
#line 3602 "message.c"
                                  message__V_98_98 = mercury__string__int_to_string_1_f_0(message__PartNum_9);
                                }
#line 3605 "message.c"
                                {
#line 3607 "message.c"
                                  message__V_99_99 = mercury__string__f_43_43_2_f_0(message__V_98_98, message__V_97_97);
                                }
#line 3610 "message.c"
                                {
#line 3612 "message.c"
                                  message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Partition ", message__V_99_99);
                                }
#line 346 "message.m"
                              }
#line 315 "message.m"
                            else
#line 315 "message.m"
                              if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 380 "message.m"
                                {
#line 380 "message.m"
                                  MR_String message__ErrorStr_67 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));

#line 3626 "message.c"
                                  {
#line 3628 "message.c"
                                    message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute cost of recursive calls: ", message__ErrorStr_67);
                                  }
#line 380 "message.m"
                                }
#line 315 "message.m"
                              else
#line 315 "message.m"
                                if (((((MR_tag((MR_Word) message__MessageType_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 380 "message.m"
                                  {
#line 380 "message.m"
                                    MR_String message__ErrorStr_72 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));

#line 3642 "message.c"
                                    {
#line 3644 "message.c"
                                      message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute the production or consumption time of a variable: ", message__ErrorStr_72);
                                    }
#line 380 "message.m"
                                  }
#line 315 "message.m"
                                else
#line 360 "message.m"
                                  {
#line 360 "message.m"
                                    MR_String message__Error_12 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
#line 360 "message.m"
                                    MR_String message__V_23_23;

#line 362 "message.m"
                                    {
#line 362 "message.m"
                                      message__V_23_23 = mercury__string__f_43_43_2_f_0(message__Error_12, (MR_String) "\n  falling back to some other method");
                                    }
#line 361 "message.m"
                                    {
#line 361 "message.m"
                                      message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute procrep coverage annotation: ", message__V_23_23);
                                    }
#line 360 "message.m"
                                  }
#line 383 "message.m"
    {
#line 383 "message.m"
      message__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (message__String_5)));
    }
#line 311 "message.m"
    return message__Cord_4;
#line 311 "message.m"
  }
#line 309 "message.m"
}

#line 190 "message.m"
MR_Integer MR_CALL 
message__default_verbosity_level_0_f_0(void)
#line 190 "message.m"
{
#line 427 "message.m"
  {
#line 427 "message.m"
    MR_bool message__succeeded;

#line 427 "message.m"
    return (MR_Integer) 2;
#line 427 "message.m"
  }
#line 190 "message.m"
}

#line 186 "message.m"
void MR_CALL 
message__set_verbosity_level_3_p_0(
#line 186 "message.m"
  MR_Integer message__VerbosityLevel_4)
#line 186 "message.m"
{
#line 404 "message.m"
  {
#line 404 "message.m"
    MR_bool message__succeeded;

#line 404 "message.m"
{
#define MR_PROC_LABEL message__set_verbosity_level_3_p_0


		{
#line 404 "message.m"
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3723 "message.c"

		;}
#undef MR_PROC_LABEL
#line 404 "message.m"
}
#line 404 "message.m"
{
#define MR_PROC_LABEL message__set_verbosity_level_3_p_0

	MR_Integer X;

	X =  message__VerbosityLevel_4 ;
		{
#line 404 "message.m"
message__mutable_variable_verbosity_level_mut = X;

#line 3740 "message.c"

		;}
#undef MR_PROC_LABEL
#line 404 "message.m"
}
#line 404 "message.m"
{
#define MR_PROC_LABEL message__set_verbosity_level_3_p_0


		{
#line 404 "message.m"
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                "message__mutable_variable_verbosity_level_mut_lock");
#endif

#line 3758 "message.c"

		;}
#undef MR_PROC_LABEL
#line 404 "message.m"
}
#line 404 "message.m"
  }
#line 186 "message.m"
}

#line 408 "message.m"
static void MR_CALL 
message__write_out_messages_4_p_0_1(
#line 408 "message.m"
  MR_Box message__closure_arg,
#line 408 "message.m"
  MR_Box message__wrapper_arg_1,
#line 408 "message.m"
  MR_Box message__wrapper_arg_2,
#line 408 "message.m"
  MR_Box * message__wrapper_arg_3)
#line 408 "message.m"
{
#line 408 "message.m"
  {
#line 408 "message.m"
    MR_Box message__closure = message__closure_arg;

#line 408 "message.m"
    {
#line 408 "message.m"
      message__write_out_message_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), message__closure, (MR_Integer) 3))), ((MR_Word) message__wrapper_arg_1));
#line 408 "message.m"
      return;
    }
#line 408 "message.m"
  }
#line 408 "message.m"
}

#line 180 "message.m"
void MR_CALL 
message__write_out_messages_4_p_0(
#line 180 "message.m"
  MR_Word message__Stream_5,
#line 180 "message.m"
  MR_Word message__Messages_6)
#line 180 "message.m"
{
#line 407 "message.m"
  {
#line 407 "message.m"
    MR_bool message__succeeded;
#line 407 "message.m"
    MR_Word message__V_10_10;
#line 408 "message.m"
    MR_Box message__conv0_STATE_VARIABLE_IO_9;

#line 408 "message.m"
    {
#line 408 "message.m"
      message__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 408 "message.m"
      MR_hl_field(MR_mktag(0), message__V_10_10, 0) = ((MR_Box) (&message_scalar_common_1[0]));
#line 408 "message.m"
      MR_hl_field(MR_mktag(0), message__V_10_10, 1) = ((MR_Box) (message__write_out_messages_4_p_0_1));
#line 408 "message.m"
      MR_hl_field(MR_mktag(0), message__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 408 "message.m"
      MR_hl_field(MR_mktag(0), message__V_10_10, 3) = ((MR_Box) (message__Stream_5));
#line 408 "message.m"
    }
#line 408 "message.m"
    {
#line 408 "message.m"
      mercury__cord__foldl_pred_4_p_2((MR_Word) &message__message__type_ctor_info_message_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, message__V_10_10, message__Messages_6, ((MR_Box) ((MR_Integer) 0)), &message__conv0_STATE_VARIABLE_IO_9);
    }
#line 407 "message.m"
  }
#line 180 "message.m"
}

#line 174 "message.m"
MR_Integer MR_CALL 
message__indent_size_1_f_0(
#line 174 "message.m"
  MR_Integer message__N_3)
#line 174 "message.m"
{
#line 400 "message.m"
  {
#line 400 "message.m"
    MR_bool message__succeeded;
#line 400 "message.m"
    MR_Integer message__HeadVar__2_2 = ((MR_Integer) 2 * message__N_3);

#line 400 "message.m"
    return message__HeadVar__2_2;
#line 400 "message.m"
  }
#line 174 "message.m"
}

#line 170 "message.m"
MR_Word MR_CALL 
message__nl_0_f_0(void)
#line 170 "message.m"
{
#line 398 "message.m"
  {
#line 398 "message.m"
    MR_bool message__succeeded;
#line 398 "message.m"
    MR_Word message__HeadVar__1_1;

#line 398 "message.m"
    {
#line 398 "message.m"
      message__HeadVar__1_1 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
#line 398 "message.m"
    return message__HeadVar__1_1;
#line 398 "message.m"
  }
#line 170 "message.m"
}

#line 167 "message.m"
MR_Word MR_CALL 
message__nl_indent_1_f_0(
#line 167 "message.m"
  MR_Integer message__N_3)
#line 167 "message.m"
{
#line 396 "message.m"
  {
#line 396 "message.m"
    MR_bool message__succeeded;
#line 396 "message.m"
    MR_Word message__HeadVar__2_2;
#line 396 "message.m"
    MR_Word message__V_4_4;
#line 396 "message.m"
    MR_Word message__V_5_5;

#line 398 "message.m"
    {
#line 398 "message.m"
      message__V_4_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
#line 396 "message.m"
    {
#line 396 "message.m"
      message__V_5_5 = message__indent_1_f_0(message__N_3);
    }
#line 396 "message.m"
    {
#line 396 "message.m"
      message__HeadVar__2_2 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, message__V_4_4, message__V_5_5);
    }
#line 396 "message.m"
    return message__HeadVar__2_2;
#line 396 "message.m"
  }
#line 167 "message.m"
}

#line 163 "message.m"
MR_Word MR_CALL 
message__indent_1_f_0(
#line 163 "message.m"
  MR_Integer message__N_3)
#line 163 "message.m"
{
#line 390 "message.m"
  {
#line 390 "message.m"
    MR_bool message__succeeded = (message__N_3 < (MR_Integer) 0);
#line 390 "message.m"
    MR_Word message__Indent_4;

#line 390 "message.m"
    if (message__succeeded)
#line 389 "message.m"
      {
#line 389 "message.m"
        {
#line 389 "message.m"
          mercury__require__error_1_p_0((MR_String) "automatic_parallelism: Negative indent");
        }
#line 389 "message.m"
      }
#line 390 "message.m"
    else
#line 392 "message.m"
      {
#line 390 "message.m"
        message__succeeded = (message__N_3 == (MR_Integer) 0);
#line 392 "message.m"
        if (message__succeeded)
#line 391 "message.m"
          {
#line 391 "message.m"
            {
#line 391 "message.m"
              message__Indent_4 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 391 "message.m"
          }
#line 392 "message.m"
        else
#line 393 "message.m"
          {
#line 393 "message.m"
            MR_Word message__V_7_7;
#line 393 "message.m"
            MR_Integer message__V_8_8 = (message__N_3 - (MR_Integer) 1);

#line 393 "message.m"
            {
#line 393 "message.m"
              message__V_7_7 = message__indent_1_f_0(message__V_8_8);
            }
#line 393 "message.m"
            {
#line 393 "message.m"
              message__Indent_4 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, message__V_7_7, ((MR_Box) ((MR_String) "  ")));
            }
#line 393 "message.m"
          }
#line 392 "message.m"
      }
#line 390 "message.m"
    return message__Indent_4;
#line 390 "message.m"
  }
#line 163 "message.m"
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
#line 252 "message.m"
  {
#line 252 "message.m"
    MR_bool message__succeeded;
#line 252 "message.m"
    MR_Word message__Message_8;

#line 253 "message.m"
    {
#line 253 "message.m"
      message__Message_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "message.m"
      MR_hl_field(MR_mktag(0), message__Message_8, 0) = ((MR_Box) (message__Location_5));
#line 253 "message.m"
      MR_hl_field(MR_mktag(0), message__Message_8, 1) = ((MR_Box) (message__MessageType_6));
#line 253 "message.m"
    }
#line 254 "message.m"
    {
#line 254 "message.m"
      *message__STATE_VARIABLE_Messages_10 = mercury__cord__snoc_2_f_0((MR_Word) &message__message__type_ctor_info_message_0, message__STATE_VARIABLE_Messages_0_9, ((MR_Box) (message__Message_8)));
    }
#line 252 "message.m"
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
#line 222 "message.m"
  {
#line 222 "message.m"
    MR_bool message__succeeded;

#line 222 "message.m"
    if (((MR_tag((MR_Word) message__Location_5)) == (MR_mktag((MR_Integer) 2))))
#line 240 "message.m"
      {
#line 240 "message.m"
        MR_Word message__TypeCtorInfo_56_56;
#line 240 "message.m"
        MR_Integer message__Id_15;
#line 240 "message.m"
        MR_String message__String0_16;
#line 240 "message.m"
        MR_Word message__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), message__Location_5, (MR_Integer) 0)));
#line 240 "message.m"
        MR_Word message__V_30_30;
#line 240 "message.m"
        MR_Word message__V_31_31;
#line 240 "message.m"
        MR_String message__V_58_58;

#line 240 "message.m"
        message__Id_15 = (MR_Integer) message__V_25_25;
#line 4075 "message.c"
        {
#line 4077 "message.c"
          message__V_58_58 = mercury__string__int_to_string_1_f_0(message__Id_15);
        }
#line 4080 "message.c"
        {
#line 4082 "message.c"
          message__String0_16 = mercury__string__f_43_43_2_f_0((MR_String) "clique ", message__V_58_58);
        }
#line 4085 "message.c"
        message__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 242 "message.m"
        {
#line 242 "message.m"
          message__V_30_30 = message__indent_1_f_0(message__Level_4);
        }
#line 242 "message.m"
        {
#line 242 "message.m"
          message__V_31_31 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_56_56, ((MR_Box) (message__String0_16)));
        }
#line 242 "message.m"
        {
#line 242 "message.m"
          *message__String_6 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_56_56, message__V_30_30, message__V_31_31);
        }
#line 240 "message.m"
      }
#line 222 "message.m"
    else
#line 222 "message.m"
      if (((MR_tag((MR_Word) message__Location_5)) == (MR_mktag((MR_Integer) 3))))
#line 244 "message.m"
        {
#line 244 "message.m"
          MR_Word message__TypeCtorInfo_57_57;
#line 244 "message.m"
          MR_Word message__CSDPtr_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__Location_5, (MR_Integer) 0)));
#line 244 "message.m"
          MR_Integer message__CSDNum_18 = (MR_Integer) message__CSDPtr_17;
#line 244 "message.m"
          MR_Word message__V_23_23;
#line 244 "message.m"
          MR_Word message__V_24_24;
#line 244 "message.m"
          MR_String message__String0_51;
#line 244 "message.m"
          MR_String message__V_60_60;

#line 4125 "message.c"
          {
#line 4127 "message.c"
            message__V_60_60 = mercury__string__int_to_string_1_f_0(message__CSDNum_18);
          }
#line 4130 "message.c"
          {
#line 4132 "message.c"
            message__String0_51 = mercury__string__f_43_43_2_f_0((MR_String) "call site dynamic ", message__V_60_60);
          }
#line 4135 "message.c"
          message__TypeCtorInfo_57_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 247 "message.m"
          {
#line 247 "message.m"
            message__V_23_23 = message__indent_1_f_0(message__Level_4);
          }
#line 247 "message.m"
          {
#line 247 "message.m"
            message__V_24_24 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_57_57, ((MR_Box) (message__String0_51)));
          }
#line 247 "message.m"
          {
#line 247 "message.m"
            *message__String_6 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_57_57, message__V_23_23, message__V_24_24);
          }
#line 244 "message.m"
        }
#line 222 "message.m"
      else
#line 222 "message.m"
        if (((MR_tag((MR_Word) message__Location_5)) == (MR_mktag((MR_Integer) 1))))
#line 227 "message.m"
          {
#line 227 "message.m"
            MR_Word message__TypeCtorInfo_55_55;
#line 227 "message.m"
            MR_Word message__RevGoalPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__Location_5, (MR_Integer) 1)));
#line 227 "message.m"
            MR_Word message__FirstLine_10;
#line 227 "message.m"
            MR_Word message__GoalPathString_11;
#line 227 "message.m"
            MR_Word message__SecondLine_14;
#line 227 "message.m"
            MR_Word message__V_32_32;
#line 227 "message.m"
            MR_Word message__V_38_38;
#line 227 "message.m"
            MR_Word message__V_39_39;
#line 227 "message.m"
            MR_Word message__V_40_40;
#line 227 "message.m"
            MR_Word message__ProcLabel_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__Location_5, (MR_Integer) 0)));

#line 228 "message.m"
            {
#line 228 "message.m"
              message__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 228 "message.m"
              MR_hl_field(MR_mktag(0), message__V_32_32, 0) = ((MR_Box) (message__ProcLabel_50));
#line 228 "message.m"
            }
#line 228 "message.m"
            {
#line 228 "message.m"
              message__location_to_string_3_p_0(message__Level_4, message__V_32_32, &message__FirstLine_10);
            }
#line 232 "message.m"
            if ((message__RevGoalPath_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "message.m"
              {
#line 231 "message.m"
                {
#line 231 "message.m"
                  message__GoalPathString_11 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Root goal")));
                }
#line 230 "message.m"
              }
#line 232 "message.m"
            else
#line 233 "message.m"
              {
#line 233 "message.m"
                MR_Word message__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 233 "message.m"
                MR_Word message__V_33_33;
#line 233 "message.m"
                MR_Word message__V_35_35;
#line 233 "message.m"
                MR_String message__V_36_36;

#line 234 "message.m"
                {
#line 234 "message.m"
                  message__V_33_33 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_54_54, ((MR_Box) ((MR_String) "Goal: ")));
                }
#line 235 "message.m"
                {
#line 235 "message.m"
                  message__V_36_36 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(message__RevGoalPath_9);
                }
#line 235 "message.m"
                {
#line 235 "message.m"
                  message__V_35_35 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_54_54, ((MR_Box) (message__V_36_36)));
                }
#line 234 "message.m"
                {
#line 234 "message.m"
                  message__GoalPathString_11 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_54_54, message__V_33_33, message__V_35_35);
                }
#line 233 "message.m"
              }
#line 4240 "message.c"
            message__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 237 "message.m"
            {
#line 237 "message.m"
              message__V_38_38 = message__indent_1_f_0(message__Level_4);
            }
#line 237 "message.m"
            {
#line 237 "message.m"
              message__V_40_40 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_55_55, ((MR_Box) ((MR_String) "\n")));
            }
#line 237 "message.m"
            {
#line 237 "message.m"
              message__V_39_39 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_55_55, message__GoalPathString_11, message__V_40_40);
            }
#line 237 "message.m"
            {
#line 237 "message.m"
              message__SecondLine_14 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_55_55, message__V_38_38, message__V_39_39);
            }
#line 238 "message.m"
            {
#line 238 "message.m"
              *message__String_6 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_55_55, message__FirstLine_10, message__SecondLine_14);
            }
#line 227 "message.m"
          }
#line 222 "message.m"
        else
#line 222 "message.m"
          {
#line 222 "message.m"
            MR_Word message__TypeCtorInfo_52_52;
#line 222 "message.m"
            MR_Word message__ProcLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__Location_5, (MR_Integer) 0)));
#line 222 "message.m"
            MR_String message__ProcLabelString_8;
#line 222 "message.m"
            MR_Word message__V_42_42;
#line 222 "message.m"
            MR_Word message__V_43_43;
#line 222 "message.m"
            MR_Word message__V_44_44;
#line 222 "message.m"
            MR_Word message__V_46_46;
#line 222 "message.m"
            MR_Word message__V_47_47;
#line 222 "message.m"
            MR_Word message__V_48_48;

#line 223 "message.m"
            {
#line 223 "message.m"
              program_representation_utils__print_proc_label_to_string_2_p_0(message__ProcLabel_7, &message__ProcLabelString_8);
            }
#line 4297 "message.c"
            message__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 224 "message.m"
            {
#line 224 "message.m"
              message__V_42_42 = message__indent_1_f_0(message__Level_4);
            }
#line 224 "message.m"
            {
#line 224 "message.m"
              message__V_44_44 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_52_52, ((MR_Box) ((MR_String) "Proc: ")));
            }
#line 225 "message.m"
            {
#line 225 "message.m"
              message__V_47_47 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_52_52, ((MR_Box) (message__ProcLabelString_8)));
            }
#line 225 "message.m"
            {
#line 225 "message.m"
              message__V_48_48 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_52_52, ((MR_Box) ((MR_String) "\n")));
            }
#line 225 "message.m"
            {
#line 225 "message.m"
              message__V_46_46 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_52_52, message__V_47_47, message__V_48_48);
            }
#line 224 "message.m"
            {
#line 224 "message.m"
              message__V_43_43 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_52_52, message__V_44_44, message__V_46_46);
            }
#line 224 "message.m"
            {
#line 224 "message.m"
              *message__String_6 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_52_52, message__V_42_42, message__V_43_43);
            }
#line 222 "message.m"
          }
#line 222 "message.m"
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
#line 211 "message.m"
  {
#line 211 "message.m"
    MR_bool message__succeeded;
#line 211 "message.m"
    MR_Word message__TypeCtorInfo_23_23;
#line 211 "message.m"
    MR_Word message__Location_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 0)));
#line 211 "message.m"
    MR_Word message__MessageType_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "message.m"
    MR_Word message__LocationString_6;
#line 211 "message.m"
    MR_Word message__LevelString_8;
#line 211 "message.m"
    MR_Word message__MessageStr_9;
#line 211 "message.m"
    MR_Word message__Cord_10;
#line 211 "message.m"
    MR_Word message__V_12_12;
#line 211 "message.m"
    MR_Word message__V_13_13;
#line 211 "message.m"
    MR_Word message__V_15_15;
#line 211 "message.m"
    MR_Word message__V_16_16;
#line 211 "message.m"
    MR_Word message__V_17_17;
#line 211 "message.m"
    MR_Word message__V_19_19;
#line 211 "message.m"
    MR_Word message__V_20_20;
#line 211 "message.m"
    MR_Word message__V_22_22;

#line 212 "message.m"
    {
#line 212 "message.m"
      message__location_to_string_3_p_0((MR_Integer) 1, message__Location_3, &message__LocationString_6);
    }
#line 4390 "message.c"
    if ((((((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || ((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))))
#line 4392 "message.c"
      {
#line 263 "message.m"
        {
#line 263 "message.m"
          message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Error")));
        }
#line 4399 "message.c"
      }
#line 4401 "message.c"
    else
#line 4403 "message.c"
      if ((((((((((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || ((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || (((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 2))))))
#line 4405 "message.c"
        {
#line 260 "message.m"
          {
#line 260 "message.m"
            message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Info")));
          }
#line 4412 "message.c"
        }
#line 4414 "message.c"
      else
#line 4416 "message.c"
        if ((((((((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 2))))))
#line 4418 "message.c"
          {
#line 261 "message.m"
            {
#line 261 "message.m"
              message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Notice")));
            }
#line 4425 "message.c"
          }
#line 4427 "message.c"
        else
#line 4429 "message.c"
          {
#line 262 "message.m"
            {
#line 262 "message.m"
              message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Warning")));
            }
#line 4436 "message.c"
          }
#line 215 "message.m"
    {
#line 215 "message.m"
      message__MessageStr_9 = message__message_type_to_string_1_f_0(message__MessageType_4);
    }
#line 4443 "message.c"
    message__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 216 "message.m"
    {
#line 216 "message.m"
      message__V_13_13 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_23_23, ((MR_Box) ((MR_String) ":\n")));
    }
#line 217 "message.m"
    {
#line 217 "message.m"
      message__V_17_17 = message__indent_1_f_0((MR_Integer) 1);
    }
#line 217 "message.m"
    {
#line 217 "message.m"
      message__V_20_20 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_23_23, ((MR_Box) ((MR_String) "\n")));
    }
#line 217 "message.m"
    {
#line 217 "message.m"
      message__V_19_19 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__MessageStr_9, message__V_20_20);
    }
#line 217 "message.m"
    {
#line 217 "message.m"
      message__V_16_16 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__V_17_17, message__V_19_19);
    }
#line 216 "message.m"
    {
#line 216 "message.m"
      message__V_15_15 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__LocationString_6, message__V_16_16);
    }
#line 216 "message.m"
    {
#line 216 "message.m"
      message__V_12_12 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__V_13_13, message__V_15_15);
    }
#line 216 "message.m"
    {
#line 216 "message.m"
      message__Cord_10 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__LevelString_8, message__V_12_12);
    }
#line 218 "message.m"
    {
#line 218 "message.m"
      message__V_22_22 = mercury__cord__list_1_f_0(message__TypeCtorInfo_23_23, message__Cord_10);
    }
#line 218 "message.m"
    {
#line 218 "message.m"
      mercury__string__append_list_2_p_0(message__V_22_22, message__String_5);
#line 218 "message.m"
      return;
    }
#line 211 "message.m"
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
#line 267 "message.m"
  {
#line 267 "message.m"
    MR_bool message__succeeded;
#line 267 "message.m"
    MR_Integer message__HeadVar__2_2;

#line 267 "message.m"
    if ((message__HeadVar__1_1 == (MR_Integer) 3))
#line 270 "message.m"
      message__HeadVar__2_2 = (MR_Integer) 1;
#line 267 "message.m"
    else
#line 267 "message.m"
      if ((message__HeadVar__1_1 == (MR_Integer) 0))
#line 267 "message.m"
        message__HeadVar__2_2 = (MR_Integer) 4;
#line 267 "message.m"
      else
#line 267 "message.m"
        if ((message__HeadVar__1_1 == (MR_Integer) 1))
#line 268 "message.m"
          message__HeadVar__2_2 = (MR_Integer) 3;
#line 267 "message.m"
        else
#line 269 "message.m"
          message__HeadVar__2_2 = (MR_Integer) 2;
#line 267 "message.m"
    return message__HeadVar__2_2;
#line 267 "message.m"
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
#line 206 "message.m"
  {
#line 206 "message.m"
    MR_bool message__succeeded;
#line 206 "message.m"
    MR_Word message__HeadVar__2_2;
#line 206 "message.m"
    MR_Word message__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 1)));
#line 206 "message.m"
    MR_Word message__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 0)));

#line 283 "message.m"
    if ((((((message__Type_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))) || (((((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_4, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || ((message__Type_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))))
#line 304 "message.m"
      message__HeadVar__2_2 = (MR_Integer) 3;
#line 283 "message.m"
    else
#line 283 "message.m"
      if ((((((((((message__Type_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_4, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || ((message__Type_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || (((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 2))))))
#line 284 "message.m"
        message__HeadVar__2_2 = (MR_Integer) 0;
#line 283 "message.m"
      else
#line 283 "message.m"
        if ((((((((message__Type_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || (((((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_4, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_4, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__Type_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_4, (MR_Integer) 0)))) == (MR_Integer) 2))))))
#line 291 "message.m"
          message__HeadVar__2_2 = (MR_Integer) 1;
#line 283 "message.m"
        else
#line 298 "message.m"
          message__HeadVar__2_2 = (MR_Integer) 2;
#line 206 "message.m"
    return message__HeadVar__2_2;
#line 206 "message.m"
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
