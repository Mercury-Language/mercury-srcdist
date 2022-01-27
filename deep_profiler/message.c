/*
** Automatically generated from `message.m'
** by the Mercury compiler,
** version rotd-2014-09-30
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 85 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_0_0[2];

#line 88 "message.c"
static const MR_ConstString message__message__field_names_message_0_0[2];

#line 91 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_0_0;

#line 94 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_0_0[1];

#line 97 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_0[1];

#line 100 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_0[1];

#line 103 "message.c"
static const MR_Integer message__message__functor_number_map_message_0[1];

#line 106 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_0;

#line 109 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_1;

#line 112 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_2;

#line 115 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_3;

#line 118 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_value_ordered_message_level_0[4];

#line 121 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_name_ordered_message_level_0[4];

#line 124 "message.c"
static const MR_Integer message__message__functor_number_map_message_level_0[4];

#line 127 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_0;

#line 130 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_1[1];

#line 133 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_1;

#line 136 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_2;

#line 139 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_3[1];

#line 142 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_3;

#line 145 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_4[1];

#line 148 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_4;

#line 151 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_5[1];

#line 154 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_5;

#line 157 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_6;

#line 160 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_7[2];

#line 163 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_7;

#line 166 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_8[1];

#line 169 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_8;

#line 172 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_9;

#line 175 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_10[1];

#line 178 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_10;

#line 181 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_11[1];

#line 184 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_11;

#line 187 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_12[1];

#line 190 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_12;

#line 193 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_13;

#line 196 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_14;

#line 199 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_15[1];

#line 202 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_15;

#line 205 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_0[6];

#line 208 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_1[1];

#line 211 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_2[1];

#line 214 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_3[8];

#line 217 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_type_0[4];

#line 220 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_type_0[16];

#line 223 "message.c"
static const MR_Integer message__message__functor_number_map_message_type_0[16];

#line 226 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_0[1];

#line 229 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_0;

#line 232 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_1[2];

#line 235 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_1;

#line 238 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_2[1];

#line 241 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_2;

#line 244 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_3[1];

#line 247 "message.c"
static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_3;

#line 250 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_0[1];

#line 253 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_1[1];

#line 256 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_2[1];

#line 259 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_3[1];

#line 262 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_program_location_0[4];

#line 265 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_program_location_0[4];

#line 268 "message.c"
static const MR_Integer message__message__functor_number_map_program_location_0[4];

#line 271 "message.c"
static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
#line 274 "message.c"
  MR_Box message__wrapper_arg_1,
#line 276 "message.c"
  MR_Box message__wrapper_arg_2);

#line 279 "message.c"
static void MR_CALL 
message____Compare____message_0_0_10001(
#line 282 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 284 "message.c"
  MR_Box message__wrapper_arg_2,
#line 286 "message.c"
  MR_Box message__wrapper_arg_3);

#line 289 "message.c"
static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
#line 292 "message.c"
  MR_Box message__wrapper_arg_1,
#line 294 "message.c"
  MR_Box message__wrapper_arg_2);

#line 297 "message.c"
static void MR_CALL 
message____Compare____message_level_0_0_10001(
#line 300 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 302 "message.c"
  MR_Box message__wrapper_arg_2,
#line 304 "message.c"
  MR_Box message__wrapper_arg_3);

#line 307 "message.c"
static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
#line 310 "message.c"
  MR_Box message__wrapper_arg_1,
#line 312 "message.c"
  MR_Box message__wrapper_arg_2);

#line 315 "message.c"
static void MR_CALL 
message____Compare____message_type_0_0_10001(
#line 318 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 320 "message.c"
  MR_Box message__wrapper_arg_2,
#line 322 "message.c"
  MR_Box message__wrapper_arg_3);

#line 325 "message.c"
static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
#line 328 "message.c"
  MR_Box message__wrapper_arg_1,
#line 330 "message.c"
  MR_Box message__wrapper_arg_2);

#line 333 "message.c"
static void MR_CALL 
message____Compare____program_location_0_0_10001(
#line 336 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 338 "message.c"
  MR_Box message__wrapper_arg_2,
#line 340 "message.c"
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


#line 451 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_0_0[2] = {
  (MR_PseudoTypeInfo) &message__message__type_ctor_info_program_location_0,
  (MR_PseudoTypeInfo) &message__message__type_ctor_info_message_type_0
};

#line 457 "message.c"
static const MR_ConstString message__message__field_names_message_0_0[2] = {
  (MR_String) "message_location",
  (MR_String) "message_type"
};

#line 463 "message.c"
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

#line 478 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_0_0[1] = {
  &message__message__du_functor_desc_message_0_0
};

#line 483 "message.c"
static const MR_DuPtagLayout message__message__du_ptag_ordered_message_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    message__message__du_stag_ordered_message_0_0
  }
};

#line 492 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_0[1] = {
  &message__message__du_functor_desc_message_0_0
};

#line 497 "message.c"
static const MR_Integer message__message__functor_number_map_message_0[1] = {
  (MR_Integer) 0
};

#line 502 "message.c"
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

#line 523 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_0 = {
  (MR_String) "message_info",
  (MR_Integer) 0
};

#line 529 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_1 = {
  (MR_String) "message_notice",
  (MR_Integer) 1
};

#line 535 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_2 = {
  (MR_String) "message_warning",
  (MR_Integer) 2
};

#line 541 "message.c"
static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_3 = {
  (MR_String) "message_error",
  (MR_Integer) 3
};

#line 547 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_value_ordered_message_level_0[4] = {
  &message__message__enum_functor_desc_message_level_0_0,
  &message__message__enum_functor_desc_message_level_0_1,
  &message__message__enum_functor_desc_message_level_0_2,
  &message__message__enum_functor_desc_message_level_0_3
};

#line 555 "message.c"
static const MR_EnumFunctorDescPtr message__message__enum_name_ordered_message_level_0[4] = {
  &message__message__enum_functor_desc_message_level_0_3,
  &message__message__enum_functor_desc_message_level_0_0,
  &message__message__enum_functor_desc_message_level_0_1,
  &message__message__enum_functor_desc_message_level_0_2
};

#line 563 "message.c"
static const MR_Integer message__message__functor_number_map_message_level_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 571 "message.c"
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

#line 592 "message.c"
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

#line 607 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 612 "message.c"
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

#line 627 "message.c"
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

#line 642 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 647 "message.c"
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

#line 662 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 667 "message.c"
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

#line 682 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 687 "message.c"
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

#line 702 "message.c"
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

#line 717 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_7[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 723 "message.c"
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

#line 738 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_8[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0
};

#line 743 "message.c"
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

#line 758 "message.c"
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

#line 773 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 778 "message.c"
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

#line 793 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 798 "message.c"
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

#line 813 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 818 "message.c"
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

#line 833 "message.c"
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

#line 848 "message.c"
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

#line 863 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_message_type_0_15[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 868 "message.c"
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

#line 883 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_0[6] = {
  &message__message__du_functor_desc_message_type_0_0,
  &message__message__du_functor_desc_message_type_0_2,
  &message__message__du_functor_desc_message_type_0_6,
  &message__message__du_functor_desc_message_type_0_9,
  &message__message__du_functor_desc_message_type_0_13,
  &message__message__du_functor_desc_message_type_0_14
};

#line 893 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_1[1] = {
  &message__message__du_functor_desc_message_type_0_1
};

#line 898 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_2[1] = {
  &message__message__du_functor_desc_message_type_0_3
};

#line 903 "message.c"
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

#line 915 "message.c"
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

#line 939 "message.c"
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

#line 959 "message.c"
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

#line 979 "message.c"
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

#line 1000 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0
};

#line 1005 "message.c"
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

#line 1020 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

#line 1026 "message.c"
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

#line 1041 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_2[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

#line 1046 "message.c"
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

#line 1061 "message.c"
static const MR_PseudoTypeInfo message__message__field_types_program_location_0_3[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

#line 1066 "message.c"
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

#line 1081 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_0[1] = {
  &message__message__du_functor_desc_program_location_0_0
};

#line 1086 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_1[1] = {
  &message__message__du_functor_desc_program_location_0_1
};

#line 1091 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_2[1] = {
  &message__message__du_functor_desc_program_location_0_2
};

#line 1096 "message.c"
static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_3[1] = {
  &message__message__du_functor_desc_program_location_0_3
};

#line 1101 "message.c"
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

#line 1125 "message.c"
static const MR_DuFunctorDescPtr message__message__du_name_ordered_program_location_0[4] = {
  &message__message__du_functor_desc_program_location_0_2,
  &message__message__du_functor_desc_program_location_0_3,
  &message__message__du_functor_desc_program_location_0_1,
  &message__message__du_functor_desc_program_location_0_0
};

#line 1133 "message.c"
static const MR_Integer message__message__functor_number_map_program_location_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1141 "message.c"
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

#line 1162 "message.c"
static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
#line 1165 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1167 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1169 "message.c"
{
#line 1171 "message.c"
  {
#line 1173 "message.c"
    MR_bool message__succeeded;

#line 1176 "message.c"
    {
#line 1178 "message.c"
      message__succeeded = message____Unify____message_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1181 "message.c"
    return message__succeeded;
#line 1183 "message.c"
  }
#line 1185 "message.c"
}

#line 1188 "message.c"
static void MR_CALL 
message____Compare____message_0_0_10001(
#line 1191 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1193 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1195 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1197 "message.c"
{
#line 1199 "message.c"
  {
#line 1201 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1204 "message.c"
    {
#line 1206 "message.c"
      message____Compare____message_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1209 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1211 "message.c"
  }
#line 1213 "message.c"
}

#line 1216 "message.c"
static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
#line 1219 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1221 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1223 "message.c"
{
#line 1225 "message.c"
  {
#line 1227 "message.c"
    MR_bool message__succeeded;

#line 1230 "message.c"
    {
#line 1232 "message.c"
      message__succeeded = message____Unify____message_level_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1235 "message.c"
    return message__succeeded;
#line 1237 "message.c"
  }
#line 1239 "message.c"
}

#line 1242 "message.c"
static void MR_CALL 
message____Compare____message_level_0_0_10001(
#line 1245 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1247 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1249 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1251 "message.c"
{
#line 1253 "message.c"
  {
#line 1255 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1258 "message.c"
    {
#line 1260 "message.c"
      message____Compare____message_level_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1263 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1265 "message.c"
  }
#line 1267 "message.c"
}

#line 1270 "message.c"
static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
#line 1273 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1275 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1277 "message.c"
{
#line 1279 "message.c"
  {
#line 1281 "message.c"
    MR_bool message__succeeded;

#line 1284 "message.c"
    {
#line 1286 "message.c"
      message__succeeded = message____Unify____message_type_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1289 "message.c"
    return message__succeeded;
#line 1291 "message.c"
  }
#line 1293 "message.c"
}

#line 1296 "message.c"
static void MR_CALL 
message____Compare____message_type_0_0_10001(
#line 1299 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1301 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1303 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1305 "message.c"
{
#line 1307 "message.c"
  {
#line 1309 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1312 "message.c"
    {
#line 1314 "message.c"
      message____Compare____message_type_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1317 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1319 "message.c"
  }
#line 1321 "message.c"
}

#line 1324 "message.c"
static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
#line 1327 "message.c"
  MR_Box message__wrapper_arg_1,
#line 1329 "message.c"
  MR_Box message__wrapper_arg_2)
#line 1331 "message.c"
{
#line 1333 "message.c"
  {
#line 1335 "message.c"
    MR_bool message__succeeded;

#line 1338 "message.c"
    {
#line 1340 "message.c"
      message__succeeded = message____Unify____program_location_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
#line 1343 "message.c"
    return message__succeeded;
#line 1345 "message.c"
  }
#line 1347 "message.c"
}

#line 1350 "message.c"
static void MR_CALL 
message____Compare____program_location_0_0_10001(
#line 1353 "message.c"
  MR_Box * message__wrapper_arg_1,
#line 1355 "message.c"
  MR_Box message__wrapper_arg_2,
#line 1357 "message.c"
  MR_Box message__wrapper_arg_3)
#line 1359 "message.c"
{
#line 1361 "message.c"
  {
#line 1363 "message.c"
    MR_Word message__conv0_HeadVar__1_1;

#line 1366 "message.c"
    {
#line 1368 "message.c"
      message____Compare____program_location_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
#line 1371 "message.c"
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
#line 1373 "message.c"
  }
#line 1375 "message.c"
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
#line 1402 "message.c"
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
#line 1437 "message.c"
              *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
            else
#line 49 "message.m"
              if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1443 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
              else
#line 1447 "message.c"
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
#line 1462 "message.c"
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
#line 1490 "message.c"
                  *message__HeadVar__1_1 = (MR_Integer) 2;
#line 49 "message.m"
                else
#line 1494 "message.c"
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
#line 1511 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
              else
#line 49 "message.m"
                if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1517 "message.c"
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
#line 1537 "message.c"
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
#line 1558 "message.c"
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
#line 1571 "message.c"
                *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
              else
#line 49 "message.m"
                if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1577 "message.c"
                  *message__HeadVar__1_1 = (MR_Integer) 1;
#line 49 "message.m"
                else
#line 49 "message.m"
                  if (((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1583 "message.c"
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
#line 1655 "message.c"
              message__V_20_20 = (MR_Integer) message__V_9_9;
#line 1657 "message.c"
              message__V_21_21 = (MR_Integer) message__V_10_10;
#line 1659 "message.c"
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
#line 1688 "message.c"
                message__V_22_22 = (MR_Integer) message__V_11_11;
#line 1690 "message.c"
                message__V_23_23 = (MR_Integer) message__V_12_12;
#line 1692 "message.c"
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
#line 1723 "message.c"
                  {
#line 1725 "message.c"
                    message__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(message__V_5_5, message__V_7_7);
                  }
#line 49 "message.m"
                  if (message__succeeded)
#line 1730 "message.c"
                    {
#line 1732 "message.c"
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
#line 1756 "message.c"
                  {
#line 1758 "message.c"
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
#line 1796 "message.c"
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
#line 1821 "message.c"
          *message__HeadVar__1_1 = (MR_Integer) 1;
#line 78 "message.m"
        else
#line 78 "message.m"
          {
#line 78 "message.m"
            message__succeeded = (message__V_4_4 > message__V_5_5);
#line 78 "message.m"
            if (message__succeeded)
#line 1831 "message.c"
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
#line 2130 "message.c"
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
#line 2279 "message.c"
      *message__HeadVar__2_2 = (MR_Integer) 14;
#line 78 "message.m"
    else
#line 78 "message.m"
      if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 2285 "message.c"
        *message__HeadVar__2_2 = (MR_Integer) 13;
#line 78 "message.m"
      else
#line 78 "message.m"
        if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2291 "message.c"
          *message__HeadVar__2_2 = (MR_Integer) 0;
#line 78 "message.m"
        else
#line 78 "message.m"
          if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2297 "message.c"
            *message__HeadVar__2_2 = (MR_Integer) 2;
#line 78 "message.m"
          else
#line 78 "message.m"
            if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2303 "message.c"
              *message__HeadVar__2_2 = (MR_Integer) 6;
#line 78 "message.m"
            else
#line 78 "message.m"
              if ((message__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 2309 "message.c"
                *message__HeadVar__2_2 = (MR_Integer) 9;
#line 78 "message.m"
              else
#line 78 "message.m"
                if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 2315 "message.c"
                  *message__HeadVar__2_2 = (MR_Integer) 1;
#line 78 "message.m"
                else
#line 78 "message.m"
                  if (((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 2321 "message.c"
                    *message__HeadVar__2_2 = (MR_Integer) 3;
#line 78 "message.m"
                  else
#line 78 "message.m"
                    if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 2327 "message.c"
                      *message__HeadVar__2_2 = (MR_Integer) 15;
#line 78 "message.m"
                    else
#line 78 "message.m"
                      if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2333 "message.c"
                        *message__HeadVar__2_2 = (MR_Integer) 4;
#line 78 "message.m"
                      else
#line 78 "message.m"
                        if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 2339 "message.c"
                          *message__HeadVar__2_2 = (MR_Integer) 8;
#line 78 "message.m"
                        else
#line 78 "message.m"
                          if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2345 "message.c"
                            *message__HeadVar__2_2 = (MR_Integer) 5;
#line 78 "message.m"
                          else
#line 78 "message.m"
                            if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2351 "message.c"
                              *message__HeadVar__2_2 = (MR_Integer) 7;
#line 78 "message.m"
                            else
#line 78 "message.m"
                              if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 2357 "message.c"
                                *message__HeadVar__2_2 = (MR_Integer) 11;
#line 78 "message.m"
                              else
#line 78 "message.m"
                                if (((((MR_tag((MR_Word) message__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 2363 "message.c"
                                  *message__HeadVar__2_2 = (MR_Integer) 12;
#line 78 "message.m"
                                else
#line 2367 "message.c"
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
#line 2507 "message.c"
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
#line 2532 "message.c"
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
#line 2557 "message.c"
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
#line 2582 "message.c"
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
#line 2607 "message.c"
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
#line 2632 "message.c"
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
#line 2663 "message.c"
                                      message__succeeded = (message__V_17_17 == message__V_19_19);
#line 78 "message.m"
                                      if (message__succeeded)
#line 2667 "message.c"
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
#line 2692 "message.c"
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
#line 2717 "message.c"
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
#line 2740 "message.c"
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
#line 2794 "message.c"
  {
#line 2796 "message.c"
    MR_bool message__succeeded = (message__HeadVar__2_1 == message__HeadVar__2_2);

#line 2799 "message.c"
    return message__succeeded;
#line 2801 "message.c"
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
#line 2830 "message.c"
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
#line 2852 "message.c"
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

#line 2913 "message.c"
        {
#line 2915 "message.c"
          message__succeeded = message____Unify____program_location_0_0(message__V_3_3, message__V_5_5);
        }
#line 33 "message.m"
        if (message__succeeded)
#line 2920 "message.c"
          {
#line 2922 "message.c"
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

#line 2990 "message.c"

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

#line 3006 "message.c"

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

#line 3025 "message.c"

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

#line 3113 "message.c"

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

#line 3146 "message.c"

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

#line 3180 "message.c"

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

#line 3213 "message.c"

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

#line 3245 "message.c"

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

#line 3277 "message.c"

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

#line 3295 "message.c"

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

#line 3312 "message.c"

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

#line 3330 "message.c"

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

#line 3404 "message.c"
                    {
#line 3406 "message.c"
                      message__V_79_79 = mercury__string__int_to_string_1_f_0(message__Num_6);
                    }
#line 3409 "message.c"
                    {
#line 3411 "message.c"
                      message__V_80_80 = mercury__string__f_43_43_2_f_0(message__V_79_79, (MR_String) " conjuncts above callsite threashold");
                    }
#line 3414 "message.c"
                    {
#line 3416 "message.c"
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

#line 3434 "message.c"
                      {
#line 3436 "message.c"
                        message__V_90_90 = mercury__string__int_to_string_1_f_0(message__Num_62);
                      }
#line 3439 "message.c"
                      {
#line 3441 "message.c"
                        message__V_91_91 = mercury__string__f_43_43_2_f_0(message__V_90_90, (MR_String) " partitions, this may reduce parallelism");
                      }
#line 3444 "message.c"
                      {
#line 3446 "message.c"
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

#line 3460 "message.c"
                        {
#line 3462 "message.c"
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

#line 3480 "message.c"
                          {
#line 3482 "message.c"
                            message__V_86_86 = mercury__string__int_to_string_1_f_0(message__Num_57);
                          }
#line 3485 "message.c"
                          {
#line 3487 "message.c"
                            message__V_87_87 = mercury__string__f_43_43_2_f_0(message__V_86_86, (MR_String) " conjunctions with a positive speedup due to parallelisation");
                          }
#line 3490 "message.c"
                          {
#line 3492 "message.c"
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

#line 3553 "message.c"
                              {
#line 3555 "message.c"
                                message__V_83_83 = mercury__string__int_to_string_1_f_0(message__CandidateConjuncts_8);
                              }
#line 3558 "message.c"
                              {
#line 3560 "message.c"
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

#line 3586 "message.c"
                                {
#line 3588 "message.c"
                                  message__V_94_94 = mercury__string__int_to_string_1_f_0(message__NumCalls_10);
                                }
#line 3591 "message.c"
                                {
#line 3593 "message.c"
                                  message__V_95_95 = mercury__string__f_43_43_2_f_0(message__V_94_94, (MR_String) " costly calls and cannot be parallelised");
                                }
#line 3596 "message.c"
                                {
#line 3598 "message.c"
                                  message__V_97_97 = mercury__string__f_43_43_2_f_0((MR_String) " has only ", message__V_95_95);
                                }
#line 3601 "message.c"
                                {
#line 3603 "message.c"
                                  message__V_98_98 = mercury__string__int_to_string_1_f_0(message__PartNum_9);
                                }
#line 3606 "message.c"
                                {
#line 3608 "message.c"
                                  message__V_99_99 = mercury__string__f_43_43_2_f_0(message__V_98_98, message__V_97_97);
                                }
#line 3611 "message.c"
                                {
#line 3613 "message.c"
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

#line 3627 "message.c"
                                  {
#line 3629 "message.c"
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

#line 3643 "message.c"
                                    {
#line 3645 "message.c"
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

#line 3724 "message.c"

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

#line 3741 "message.c"

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

#line 3759 "message.c"

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
#line 4076 "message.c"
        {
#line 4078 "message.c"
          message__V_58_58 = mercury__string__int_to_string_1_f_0(message__Id_15);
        }
#line 4081 "message.c"
        {
#line 4083 "message.c"
          message__String0_16 = mercury__string__f_43_43_2_f_0((MR_String) "clique ", message__V_58_58);
        }
#line 4086 "message.c"
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

#line 4126 "message.c"
          {
#line 4128 "message.c"
            message__V_60_60 = mercury__string__int_to_string_1_f_0(message__CSDNum_18);
          }
#line 4131 "message.c"
          {
#line 4133 "message.c"
            message__String0_51 = mercury__string__f_43_43_2_f_0((MR_String) "call site dynamic ", message__V_60_60);
          }
#line 4136 "message.c"
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
#line 4241 "message.c"
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
#line 4298 "message.c"
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
#line 4391 "message.c"
    if ((((((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 7)))))) || ((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))))
#line 4393 "message.c"
      {
#line 263 "message.m"
        {
#line 263 "message.m"
          message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Error")));
        }
#line 4400 "message.c"
      }
#line 4402 "message.c"
    else
#line 4404 "message.c"
      if ((((((((((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))) || (((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || ((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))))))) || (((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 2))))))
#line 4406 "message.c"
        {
#line 260 "message.m"
          {
#line 260 "message.m"
            message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Info")));
          }
#line 4413 "message.c"
        }
#line 4415 "message.c"
      else
#line 4417 "message.c"
        if ((((((((message__MessageType_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 3)))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) message__MessageType_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) == (MR_Integer) 2))))))
#line 4419 "message.c"
          {
#line 261 "message.m"
            {
#line 261 "message.m"
              message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Notice")));
            }
#line 4426 "message.c"
          }
#line 4428 "message.c"
        else
#line 4430 "message.c"
          {
#line 262 "message.m"
            {
#line 262 "message.m"
              message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Warning")));
            }
#line 4437 "message.c"
          }
#line 215 "message.m"
    {
#line 215 "message.m"
      message__MessageStr_9 = message__message_type_to_string_1_f_0(message__MessageType_4);
    }
#line 4444 "message.c"
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
