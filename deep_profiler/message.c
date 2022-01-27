/*
** Automatically generated from `message.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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




#line 83 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_0_0[2];

#line 86 "message.c"
static const MR_ConstString message__message__field_names_message_0_0[2];

#line 89 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_0_0;

#line 92 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_0_0[1];

#line 95 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_0[1];

#line 98 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_0[1];

#line 101 "message.c"
static const MR_Integer message__message__functor_number_map_message_0[1];

#line 104 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_0;

#line 107 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_1;

#line 110 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_2;

#line 113 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_3;

#line 116 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_value_ordered_message_level_0[4];

#line 119 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_name_ordered_message_level_0[4];

#line 122 "message.c"
static const MR_Integer message__message__functor_number_map_message_level_0[4];

#line 125 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_0;

#line 128 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_1[1];

#line 131 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_1;

#line 134 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_2;

#line 137 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_3[1];

#line 140 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_3;

#line 143 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_4[1];

#line 146 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_4;

#line 149 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_5[1];

#line 152 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_5;

#line 155 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_6;

#line 158 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_7[2];

#line 161 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_7;

#line 164 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_8[1];

#line 167 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_8;

#line 170 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_9;

#line 173 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_10[1];

#line 176 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_10;

#line 179 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_11[1];

#line 182 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_11;

#line 185 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_12[1];

#line 188 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_12;

#line 191 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_13;

#line 194 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_14;

#line 197 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_15[1];

#line 200 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_15;

#line 203 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_0[6];

#line 206 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_1[1];

#line 209 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_2[1];

#line 212 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_3[8];

#line 215 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_type_0[4];

#line 218 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_type_0[16];

#line 221 "message.c"
static const MR_Integer message__message__functor_number_map_message_type_0[16];

#line 224 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_0[1];

#line 227 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_0;

#line 230 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_1[2];

#line 233 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_1;

#line 236 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_2[1];

#line 239 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_2;

#line 242 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_3[1];

#line 245 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_3;

#line 248 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_0[1];

#line 251 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_1[1];

#line 254 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_2[1];

#line 257 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_3[1];

#line 260 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_program_location_0[4];

#line 263 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_program_location_0[4];

#line 266 "message.c"
static const MR_Integer message__message__functor_number_map_program_location_0[4];

#line 269 "message.c"
static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
#line 272 "message.c"
  MR_Box message__wrapper_arg_1,
#line 274 "message.c"
  MR_Box message__wrapper_arg_2);

#line 277 "message.c"
static void MR_CALL 
message____Compare____message_0_0_10001(
#line 280 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 282 "message.c"
  MR_Box message__wrapper_arg_2,
#line 284 "message.c"
  MR_Box message__wrapper_arg_3);

#line 287 "message.c"
static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
#line 290 "message.c"
  MR_Box message__wrapper_arg_1,
#line 292 "message.c"
  MR_Box message__wrapper_arg_2);

#line 295 "message.c"
static void MR_CALL 
message____Compare____message_level_0_0_10001(
#line 298 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 300 "message.c"
  MR_Box message__wrapper_arg_2,
#line 302 "message.c"
  MR_Box message__wrapper_arg_3);

#line 305 "message.c"
static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
#line 308 "message.c"
  MR_Box message__wrapper_arg_1,
#line 310 "message.c"
  MR_Box message__wrapper_arg_2);

#line 313 "message.c"
static void MR_CALL 
message____Compare____message_type_0_0_10001(
#line 316 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 318 "message.c"
  MR_Box message__wrapper_arg_2,
#line 320 "message.c"
  MR_Box message__wrapper_arg_3);

#line 323 "message.c"
static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
#line 326 "message.c"
  MR_Box message__wrapper_arg_1,
#line 328 "message.c"
  MR_Box message__wrapper_arg_2);

#line 331 "message.c"
static void MR_CALL 
message____Compare____program_location_0_0_10001(
#line 334 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 336 "message.c"
  MR_Box message__wrapper_arg_2,
#line 338 "message.c"
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


#line 449 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_0_0[2] = {
  (MR_PseudoTypeInfo) &message__message__type_ctor_info_program_location_0,
  (MR_PseudoTypeInfo) &message__message__type_ctor_info_message_type_0
};

#line 455 "message.c"
static const MR_ConstString message__message__field_names_message_0_0[2] = {
  (MR_String) "message_location",
  (MR_String) "message_type"
};

#line 461 "message.c"
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

#line 476 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_0_0[1] = {
  &message__message__du_functor_desc_message_0_0
};

#line 481 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    message__message__du_stag_ordered_message_0_0
  }
};

#line 490 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_0[1] = {
  &message__message__du_functor_desc_message_0_0
};

#line 495 "message.c"
static const MR_Integer message__message__functor_number_map_message_0[1] = {
  (MR_Integer) 0
};

#line 500 "message.c"
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

#line 521 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_0 = {
  (MR_String) "message_info",
  (MR_Integer) 0
};

#line 527 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_1 = {
  (MR_String) "message_notice",
  (MR_Integer) 1
};

#line 533 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_2 = {
  (MR_String) "message_warning",
  (MR_Integer) 2
};

#line 539 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_3 = {
  (MR_String) "message_error",
  (MR_Integer) 3
};

#line 545 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_value_ordered_message_level_0[4] = {
  &message__message__enum_functor_desc_message_level_0_0,
  &message__message__enum_functor_desc_message_level_0_1,
  &message__message__enum_functor_desc_message_level_0_2,
  &message__message__enum_functor_desc_message_level_0_3
};

#line 553 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_name_ordered_message_level_0[4] = {
  &message__message__enum_functor_desc_message_level_0_3,
  &message__message__enum_functor_desc_message_level_0_0,
  &message__message__enum_functor_desc_message_level_0_1,
  &message__message__enum_functor_desc_message_level_0_2
};

#line 561 "message.c"
static const MR_Integer message__message__functor_number_map_message_level_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 569 "message.c"
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

#line 590 "message.c"
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

#line 605 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 610 "message.c"
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

#line 625 "message.c"
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

#line 640 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 645 "message.c"
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

#line 660 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 665 "message.c"
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

#line 680 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 685 "message.c"
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

#line 700 "message.c"
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

#line 715 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_7[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 721 "message.c"
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

#line 736 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_8[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0
};

#line 741 "message.c"
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

#line 756 "message.c"
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

#line 771 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 776 "message.c"
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

#line 791 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 796 "message.c"
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

#line 811 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 816 "message.c"
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

#line 831 "message.c"
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

#line 846 "message.c"
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

#line 861 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_15[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 866 "message.c"
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

#line 881 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_0[6] = {
  &message__message__du_functor_desc_message_type_0_0,
  &message__message__du_functor_desc_message_type_0_2,
  &message__message__du_functor_desc_message_type_0_6,
  &message__message__du_functor_desc_message_type_0_9,
  &message__message__du_functor_desc_message_type_0_13,
  &message__message__du_functor_desc_message_type_0_14
};

#line 891 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_1[1] = {
  &message__message__du_functor_desc_message_type_0_1
};

#line 896 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_2[1] = {
  &message__message__du_functor_desc_message_type_0_3
};

#line 901 "message.c"
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

#line 913 "message.c"
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

#line 937 "message.c"
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

#line 957 "message.c"
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

#line 977 "message.c"
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

#line 998 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0
};

#line 1003 "message.c"
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

#line 1018 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 1024 "message.c"
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

#line 1039 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_2[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 1044 "message.c"
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

#line 1059 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_3[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 1064 "message.c"
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

#line 1079 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_0[1] = {
  &message__message__du_functor_desc_program_location_0_0
};

#line 1084 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_1[1] = {
  &message__message__du_functor_desc_program_location_0_1
};

#line 1089 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_2[1] = {
  &message__message__du_functor_desc_program_location_0_2
};

#line 1094 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_3[1] = {
  &message__message__du_functor_desc_program_location_0_3
};

#line 1099 "message.c"
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

#line 1123 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_program_location_0[4] = {
  &message__message__du_functor_desc_program_location_0_2,
  &message__message__du_functor_desc_program_location_0_3,
  &message__message__du_functor_desc_program_location_0_1,
  &message__message__du_functor_desc_program_location_0_0
};

#line 1131 "message.c"
static const MR_Integer message__message__functor_number_map_program_location_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1139 "message.c"
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

#line 1160 "message.c"
static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
#line 1163 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1165 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1167 "message.c"
{
#line 1169 "message.c"
  {
#line 1171 "message.c"
    MR_bool message__succeeded;

#line 1174 "message.c"
    {
#line 1176 "message.c"
      message__succeeded = message____Unify____message_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1179 "message.c"
    return message__succeeded;
#line 1181 "message.c"
  }
#line 1183 "message.c"
}

#line 1186 "message.c"
static void MR_CALL 
message____Compare____message_0_0_10001(
#line 1189 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1191 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1193 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1195 "message.c"
{
#line 1197 "message.c"
  {
#line 1199 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1202 "message.c"
    {
#line 1204 "message.c"
      message____Compare____message_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1207 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1209 "message.c"
  }
#line 1211 "message.c"
}

#line 1214 "message.c"
static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
#line 1217 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1219 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1221 "message.c"
{
#line 1223 "message.c"
  {
#line 1225 "message.c"
    MR_bool message__succeeded;

#line 1228 "message.c"
    {
#line 1230 "message.c"
      message__succeeded = message____Unify____message_level_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1233 "message.c"
    return message__succeeded;
#line 1235 "message.c"
  }
#line 1237 "message.c"
}

#line 1240 "message.c"
static void MR_CALL 
message____Compare____message_level_0_0_10001(
#line 1243 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1245 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1247 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1249 "message.c"
{
#line 1251 "message.c"
  {
#line 1253 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1256 "message.c"
    {
#line 1258 "message.c"
      message____Compare____message_level_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1261 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1263 "message.c"
  }
#line 1265 "message.c"
}

#line 1268 "message.c"
static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
#line 1271 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1273 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1275 "message.c"
{
#line 1277 "message.c"
  {
#line 1279 "message.c"
    MR_bool message__succeeded;

#line 1282 "message.c"
    {
#line 1284 "message.c"
      message__succeeded = message____Unify____message_type_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1287 "message.c"
    return message__succeeded;
#line 1289 "message.c"
  }
#line 1291 "message.c"
}

#line 1294 "message.c"
static void MR_CALL 
message____Compare____message_type_0_0_10001(
#line 1297 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1299 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1301 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1303 "message.c"
{
#line 1305 "message.c"
  {
#line 1307 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1310 "message.c"
    {
#line 1312 "message.c"
      message____Compare____message_type_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1315 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1317 "message.c"
  }
#line 1319 "message.c"
}

#line 1322 "message.c"
static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
#line 1325 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1327 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1329 "message.c"
{
#line 1331 "message.c"
  {
#line 1333 "message.c"
    MR_bool message__succeeded;

#line 1336 "message.c"
    {
#line 1338 "message.c"
      message__succeeded = message____Unify____program_location_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1341 "message.c"
    return message__succeeded;
#line 1343 "message.c"
  }
#line 1345 "message.c"
}

#line 1348 "message.c"
static void MR_CALL 
message____Compare____program_location_0_0_10001(
#line 1351 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1353 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1355 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1357 "message.c"
{
#line 1359 "message.c"
  {
#line 1361 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1364 "message.c"
    {
#line 1366 "message.c"
      message____Compare____program_location_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1369 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1371 "message.c"
  }
#line 1373 "message.c"
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
#line 1400 "message.c"
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
#line 1435 "message.c"
              *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
            else
#line 49 "message.m"
              if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1441 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
              else
#line 1445 "message.c"
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
#line 1460 "message.c"
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
#line 1488 "message.c"
                  *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
                else
#line 1492 "message.c"
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
#line 1509 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
              else
#line 49 "message.m"
                if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1515 "message.c"
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
#line 1535 "message.c"
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
#line 1556 "message.c"
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
#line 1569 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
              else
#line 49 "message.m"
                if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1575 "message.c"
                  *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
                else
#line 49 "message.m"
                  if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1581 "message.c"
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
#line 1653 "message.c"
              message__V_20_20 = (MR_Integer) message__V_9_9;
#line 1655 "message.c"
              message__V_21_21 = (MR_Integer) message__V_10_10;
#line 1657 "message.c"
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
#line 1686 "message.c"
                message__V_22_22 = (MR_Integer) message__V_11_11;
#line 1688 "message.c"
                message__V_23_23 = (MR_Integer) message__V_12_12;
#line 1690 "message.c"
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
#line 1721 "message.c"
                  {
#line 1723 "message.c"
                    message__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(message__V_5_5, message__V_7_7);
                  }
#line 49 "message.m"
                  if (message__succeeded)
#line 1728 "message.c"
                    {
#line 1730 "message.c"
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
#line 1754 "message.c"
                  {
#line 1756 "message.c"
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
#line 1794 "message.c"
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
#line 1819 "message.c"
          *message__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "message.m"
        else
#line 78 "message.m"
          {
#line 78 "message.m"
            message__succeeded = (message__V_4_4 > message__V_5_5);
#line 78 "message.m"
            if (message__succeeded)
#line 1829 "message.c"
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
#line 2128 "message.c"
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
#line 2277 "message.c"
      *message__HeadVar__2_2 = (MR_Integer) 14;
#line 78 "message.m"
    else
#line 78 "message.m"
      if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2283 "message.c"
        *message__HeadVar__2_2 = (MR_Integer) 13;
#line 78 "message.m"
      else
#line 78 "message.m"
        if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2289 "message.c"
          *message__HeadVar__2_2 = (MR_Integer) 0;
#line 78 "message.m"
        else
#line 78 "message.m"
          if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2295 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 2;
#line 78 "message.m"
          else
#line 78 "message.m"
            if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2301 "message.c"
              *message__HeadVar__2_2 = (MR_Integer) 6;
#line 78 "message.m"
            else
#line 78 "message.m"
              if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2307 "message.c"
                *message__HeadVar__2_2 = (MR_Integer) 9;
#line 78 "message.m"
              else
#line 78 "message.m"
                if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2313 "message.c"
                  *message__HeadVar__2_2 = (MR_Integer) 1;
#line 78 "message.m"
                else
#line 78 "message.m"
                  if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 2319 "message.c"
                    *message__HeadVar__2_2 = (MR_Integer) 3;
#line 78 "message.m"
                  else
#line 78 "message.m"
                    if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2325 "message.c"
                      *message__HeadVar__2_2 = (MR_Integer) 15;
#line 78 "message.m"
                    else
#line 78 "message.m"
                      if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2331 "message.c"
                        *message__HeadVar__2_2 = (MR_Integer) 4;
#line 78 "message.m"
                      else
#line 78 "message.m"
                        if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2337 "message.c"
                          *message__HeadVar__2_2 = (MR_Integer) 8;
#line 78 "message.m"
                        else
#line 78 "message.m"
                          if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2343 "message.c"
                            *message__HeadVar__2_2 = (MR_Integer) 5;
#line 78 "message.m"
                          else
#line 78 "message.m"
                            if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2349 "message.c"
                              *message__HeadVar__2_2 = (MR_Integer) 7;
#line 78 "message.m"
                            else
#line 78 "message.m"
                              if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2355 "message.c"
                                *message__HeadVar__2_2 = (MR_Integer) 11;
#line 78 "message.m"
                              else
#line 78 "message.m"
                                if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2361 "message.c"
                                  *message__HeadVar__2_2 = (MR_Integer) 12;
#line 78 "message.m"
                                else
#line 2365 "message.c"
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
#line 2505 "message.c"
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
#line 2530 "message.c"
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
#line 2555 "message.c"
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
#line 2580 "message.c"
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
#line 2605 "message.c"
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
#line 2630 "message.c"
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
#line 2661 "message.c"
                                      message__succeeded = (message__V_17_17 == message__V_19_19);
#line 78 "message.m"
                                      if (message__succeeded)
#line 2665 "message.c"
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
#line 2690 "message.c"
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
#line 2715 "message.c"
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
#line 2738 "message.c"
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
#line 2792 "message.c"
  {
#line 2794 "message.c"
    MR_bool message__succeeded = (message__HeadVar__2_1 == message__HeadVar__2_2);

#line 2797 "message.c"
    return message__succeeded;
#line 2799 "message.c"
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
#line 2828 "message.c"
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
#line 2850 "message.c"
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

#line 2911 "message.c"
        {
#line 2913 "message.c"
          message__succeeded = message____Unify____program_location_0_0(message__V_3_3, message__V_5_5);
        }
#line 33 "message.m"
        if (message__succeeded)
#line 2918 "message.c"
          {
#line 2920 "message.c"
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

#line 2988 "message.c"

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

#line 3004 "message.c"

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

#line 3023 "message.c"

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

#line 3111 "message.c"

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

#line 3144 "message.c"

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

#line 3178 "message.c"

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

#line 3211 "message.c"

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

#line 3243 "message.c"

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

#line 3275 "message.c"

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

#line 3293 "message.c"

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

#line 3310 "message.c"

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

#line 3328 "message.c"

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
#line 365 "message.m"
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
#line 342 "message.m"
              message__String_5 = (MR_String) "Parallelising call pairs that have more than one dependent variable is not yet supported.";
#line 315 "message.m"
            else
#line 315 "message.m"
              if ((message__MessageType_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 357 "message.m"
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

#line 3402 "message.c"
                    {
#line 3404 "message.c"
                      message__V_79_79 = mercury__string__int_to_string_1_f_0(message__Num_6);
                    }
#line 3407 "message.c"
                    {
#line 3409 "message.c"
                      message__V_80_80 = mercury__string__f_43_43_2_f_0(message__V_79_79, (MR_String) " conjuncts above callsite threashold");
                    }
#line 3412 "message.c"
                    {
#line 3414 "message.c"
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

#line 3432 "message.c"
                      {
#line 3434 "message.c"
                        message__V_90_90 = mercury__string__int_to_string_1_f_0(message__Num_62);
                      }
#line 3437 "message.c"
                      {
#line 3439 "message.c"
                        message__V_91_91 = mercury__string__f_43_43_2_f_0(message__V_90_90, (MR_String) " partitions, this may reduce parallelism");
                      }
#line 3442 "message.c"
                      {
#line 3444 "message.c"
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

#line 3458 "message.c"
                        {
#line 3460 "message.c"
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

#line 3478 "message.c"
                          {
#line 3480 "message.c"
                            message__V_86_86 = mercury__string__int_to_string_1_f_0(message__Num_57);
                          }
#line 3483 "message.c"
                          {
#line 3485 "message.c"
                            message__V_87_87 = mercury__string__f_43_43_2_f_0(message__V_86_86, (MR_String) " conjunctions with a positive speedup due to parallelisation");
                          }
#line 3488 "message.c"
                          {
#line 3490 "message.c"
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
#line 352 "message.m"
                            {
#line 352 "message.m"
                              message__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "message.m"
                              MR_hl_field(MR_mktag(1), message__V_28_28, 0) = ((MR_Box) (message__V_31_31));
#line 352 "message.m"
                              MR_hl_field(MR_mktag(1), message__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "message.m"
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

#line 3551 "message.c"
                              {
#line 3553 "message.c"
                                message__V_83_83 = mercury__string__int_to_string_1_f_0(message__CandidateConjuncts_8);
                              }
#line 3556 "message.c"
                              {
#line 3558 "message.c"
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

#line 3584 "message.c"
                                {
#line 3586 "message.c"
                                  message__V_94_94 = mercury__string__int_to_string_1_f_0(message__NumCalls_10);
                                }
#line 3589 "message.c"
                                {
#line 3591 "message.c"
                                  message__V_95_95 = mercury__string__f_43_43_2_f_0(message__V_94_94, (MR_String) " costly calls and cannot be parallelised");
                                }
#line 3594 "message.c"
                                {
#line 3596 "message.c"
                                  message__V_97_97 = mercury__string__f_43_43_2_f_0((MR_String) " has only ", message__V_95_95);
                                }
#line 3599 "message.c"
                                {
#line 3601 "message.c"
                                  message__V_98_98 = mercury__string__int_to_string_1_f_0(message__PartNum_9);
                                }
#line 3604 "message.c"
                                {
#line 3606 "message.c"
                                  message__V_99_99 = mercury__string__f_43_43_2_f_0(message__V_98_98, message__V_97_97);
                                }
#line 3609 "message.c"
                                {
#line 3611 "message.c"
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

#line 3625 "message.c"
                                  {
#line 3627 "message.c"
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

#line 3641 "message.c"
                                    {
#line 3643 "message.c"
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

#line 361 "message.m"
                                    {
#line 361 "message.m"
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

#line 3722 "message.c"

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

#line 3739 "message.c"

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

#line 3757 "message.c"

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
#line 4074 "message.c"
        {
#line 4076 "message.c"
          message__V_58_58 = mercury__string__int_to_string_1_f_0(message__Id_15);
        }
#line 4079 "message.c"
        {
#line 4081 "message.c"
          message__String0_16 = mercury__string__f_43_43_2_f_0((MR_String) "clique ", message__V_58_58);
        }
#line 4084 "message.c"
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

#line 4124 "message.c"
          {
#line 4126 "message.c"
            message__V_60_60 = mercury__string__int_to_string_1_f_0(message__CSDNum_18);
          }
#line 4129 "message.c"
          {
#line 4131 "message.c"
            message__String0_51 = mercury__string__f_43_43_2_f_0((MR_String) "call site dynamic ", message__V_60_60);
          }
#line 4134 "message.c"
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
#line 234 "message.m"
                {
#line 234 "message.m"
                  message__V_35_35 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_54_54, ((MR_Box) (message__V_36_36)));
                }
#line 234 "message.m"
                {
#line 234 "message.m"
                  message__GoalPathString_11 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_54_54, message__V_33_33, message__V_35_35);
                }
#line 233 "message.m"
              }
#line 4239 "message.c"
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
#line 4296 "message.c"
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
#line 224 "message.m"
            {
#line 224 "message.m"
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
#line 4389 "message.c"
    if ((((((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || ((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))))
#line 4391 "message.c"
      {
#line 263 "message.m"
        {
#line 263 "message.m"
          message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Error")));
        }
#line 4398 "message.c"
      }
#line 4400 "message.c"
    else
#line 4402 "message.c"
      if ((((((((((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || ((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || (((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 2))))))
#line 4404 "message.c"
        {
#line 260 "message.m"
          {
#line 260 "message.m"
            message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Info")));
          }
#line 4411 "message.c"
        }
#line 4413 "message.c"
      else
#line 4415 "message.c"
        if ((((((((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 2))))))
#line 4417 "message.c"
          {
#line 261 "message.m"
            {
#line 261 "message.m"
              message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Notice")));
            }
#line 4424 "message.c"
          }
#line 4426 "message.c"
        else
#line 4428 "message.c"
          {
#line 262 "message.m"
            {
#line 262 "message.m"
              message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Warning")));
            }
#line 4435 "message.c"
          }
#line 215 "message.m"
    {
#line 215 "message.m"
      message__MessageStr_9 = message__message_type_to_string_1_f_0(message__MessageType_4);
    }
#line 4442 "message.c"
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
#line 216 "message.m"
    {
#line 216 "message.m"
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
