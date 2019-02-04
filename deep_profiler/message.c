/*
** Automatically generated from `message.m'
** by the Mercury compiler,
** version rotd-2017-06-22
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




static const MR_PseudoTypeInfo message__message__field_types_message_0_0[2];

static const MR_ConstString message__message__field_names_message_0_0[2];

static const MR_DuFunctorDesc message__message__du_functor_desc_message_0_0;

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_0_0[1];

static const MR_DuPtagLayout message__message__du_ptag_ordered_message_0[1];

static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_0[1];

static const MR_Integer message__message__functor_number_map_message_0[1];

static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_0;

static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_1;

static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_2;

static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_3;

static const MR_EnumFunctorDescPtr message__message__enum_value_ordered_message_level_0[4];

static const MR_EnumFunctorDescPtr message__message__enum_name_ordered_message_level_0[4];

static const MR_Integer message__message__functor_number_map_message_level_0[4];

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_0;

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_1[1];

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_1;

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_2;

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_3[1];

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_3;

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_4[1];

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_4;

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_5[1];

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_5;

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_6;

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_7[2];

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_7;

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_8[1];

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_8;

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_9;

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_10[1];

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_10;

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_11[1];

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_11;

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_12[1];

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_12;

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_13;

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_14;

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_15[1];

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_15;

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_0[6];

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_1[1];

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_2[1];

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_3[8];

static const MR_DuPtagLayout message__message__du_ptag_ordered_message_type_0[4];

static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_type_0[16];

static const MR_Integer message__message__functor_number_map_message_type_0[16];

static const MR_PseudoTypeInfo message__message__field_types_program_location_0_0[1];

static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_0;

static const MR_PseudoTypeInfo message__message__field_types_program_location_0_1[2];

static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_1;

static const MR_PseudoTypeInfo message__message__field_types_program_location_0_2[1];

static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_2;

static const MR_PseudoTypeInfo message__message__field_types_program_location_0_3[1];

static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_3;

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_0[1];

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_1[1];

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_2[1];

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_3[1];

static const MR_DuPtagLayout message__message__du_ptag_ordered_program_location_0[4];

static const MR_DuFunctorDescPtr message__message__du_name_ordered_program_location_0[4];

static const MR_Integer message__message__functor_number_map_program_location_0[4];

static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
  MR_Box message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2);

static void MR_CALL 
message____Compare____message_0_0_10001(
  MR_Box * message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2,
  MR_Box message__wrapper_arg_3);

static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
  MR_Box message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2);

static void MR_CALL 
message____Compare____message_level_0_0_10001(
  MR_Box * message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2,
  MR_Box message__wrapper_arg_3);

static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
  MR_Box message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2);

static void MR_CALL 
message____Compare____message_type_0_0_10001(
  MR_Box * message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2,
  MR_Box message__wrapper_arg_3);

static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
  MR_Box message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2);

static void MR_CALL 
message____Compare____program_location_0_0_10001(
  MR_Box * message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2,
  MR_Box message__wrapper_arg_3);

static void MR_CALL 
message__unsafe_set_verbosity_level_mut_1_p_0(
  MR_Integer message__X_1);

static void MR_CALL 
message__unsafe_get_verbosity_level_mut_1_p_0(
  MR_Integer * message__X_1);

static void MR_CALL 
message__unlock_verbosity_level_mut_0_p_0(void);

static void MR_CALL 
message__lock_verbosity_level_mut_0_p_0(void);

static void MR_CALL 
message__initialise_mutable_verbosity_level_mut_0_p_0(void);

static void MR_CALL 
message__pre_initialise_mutable_verbosity_level_mut_0_p_0(void);

static void MR_CALL 
message__write_out_message_4_p_0(
  MR_Word message__Stream_5,
  MR_Word message__Message_6);

static MR_Word MR_CALL 
message__message_type_to_string_1_f_0(
  MR_Word message__MessageType_3);

static void MR_CALL 
message__write_out_messages_4_p_0_1(
  MR_Box message__closure_arg,
  MR_Box message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2,
  MR_Box * message__wrapper_arg_3);


static /* final */ const MR_Box message_scalar_common_2[1][1];

static /* final */ const MR_Box message_scalar_common_3[1][7];


/* sealed */ struct message__vector_common_type_1_0_s {
  const MR_Integer message__vector_common_type_1_0__vct_1_f_0;
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


static const MR_PseudoTypeInfo message__message__field_types_message_0_0[2] = {
  (MR_PseudoTypeInfo) &message__message__type_ctor_info_program_location_0,
  (MR_PseudoTypeInfo) &message__message__type_ctor_info_message_type_0
};

static const MR_ConstString message__message__field_names_message_0_0[2] = {
  (MR_String) "message_location",
  (MR_String) "message_type"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_0_0[1] = {
  &message__message__du_functor_desc_message_0_0
};

static const MR_DuPtagLayout message__message__du_ptag_ordered_message_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    message__message__du_stag_ordered_message_0_0
  }
};

static const MR_DuFunctorDescPtr message__message__du_name_ordered_message_0[1] = {
  &message__message__du_functor_desc_message_0_0
};

static const MR_Integer message__message__functor_number_map_message_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct message__message__type_ctor_info_message_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_0 = {
  (MR_String) "message_info",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_1 = {
  (MR_String) "message_notice",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_2 = {
  (MR_String) "message_warning",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_3 = {
  (MR_String) "message_error",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr message__message__enum_value_ordered_message_level_0[4] = {
  &message__message__enum_functor_desc_message_level_0_0,
  &message__message__enum_functor_desc_message_level_0_1,
  &message__message__enum_functor_desc_message_level_0_2,
  &message__message__enum_functor_desc_message_level_0_3
};

static const MR_EnumFunctorDescPtr message__message__enum_name_ordered_message_level_0[4] = {
  &message__message__enum_functor_desc_message_level_0_3,
  &message__message__enum_functor_desc_message_level_0_0,
  &message__message__enum_functor_desc_message_level_0_1,
  &message__message__enum_functor_desc_message_level_0_2
};

static const MR_Integer message__message__functor_number_map_message_level_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct message__message__type_ctor_info_message_level_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_7[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_8[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_15[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_0[6] = {
  &message__message__du_functor_desc_message_type_0_0,
  &message__message__du_functor_desc_message_type_0_2,
  &message__message__du_functor_desc_message_type_0_6,
  &message__message__du_functor_desc_message_type_0_9,
  &message__message__du_functor_desc_message_type_0_13,
  &message__message__du_functor_desc_message_type_0_14
};

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_1[1] = {
  &message__message__du_functor_desc_message_type_0_1
};

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_type_0_2[1] = {
  &message__message__du_functor_desc_message_type_0_3
};

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

const MR_TypeCtorInfo_Struct message__message__type_ctor_info_message_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static const MR_PseudoTypeInfo message__message__field_types_program_location_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo message__message__field_types_program_location_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo message__message__field_types_program_location_0_2[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo message__message__field_types_program_location_0_3[1] = {
  (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_0[1] = {
  &message__message__du_functor_desc_program_location_0_0
};

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_1[1] = {
  &message__message__du_functor_desc_program_location_0_1
};

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_2[1] = {
  &message__message__du_functor_desc_program_location_0_2
};

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_program_location_0_3[1] = {
  &message__message__du_functor_desc_program_location_0_3
};

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

static const MR_DuFunctorDescPtr message__message__du_name_ordered_program_location_0[4] = {
  &message__message__du_functor_desc_program_location_0_2,
  &message__message__du_functor_desc_program_location_0_3,
  &message__message__du_functor_desc_program_location_0_1,
  &message__message__du_functor_desc_program_location_0_0
};

static const MR_Integer message__message__functor_number_map_program_location_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct message__message__type_ctor_info_program_location_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
  MR_Box message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2)
{
  {
    MR_bool message__succeeded;

    {
      message__succeeded = message____Unify____message_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
    return message__succeeded;
  }
}

static void MR_CALL 
message____Compare____message_0_0_10001(
  MR_Box * message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2,
  MR_Box message__wrapper_arg_3)
{
  {
    MR_Word message__conv0_HeadVar__1_1;

    {
      message____Compare____message_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
  MR_Box message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2)
{
  {
    MR_bool message__succeeded;

    {
      message__succeeded = message____Unify____message_level_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
    return message__succeeded;
  }
}

static void MR_CALL 
message____Compare____message_level_0_0_10001(
  MR_Box * message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2,
  MR_Box message__wrapper_arg_3)
{
  {
    MR_Word message__conv0_HeadVar__1_1;

    {
      message____Compare____message_level_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
  MR_Box message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2)
{
  {
    MR_bool message__succeeded;

    {
      message__succeeded = message____Unify____message_type_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
    return message__succeeded;
  }
}

static void MR_CALL 
message____Compare____message_type_0_0_10001(
  MR_Box * message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2,
  MR_Box message__wrapper_arg_3)
{
  {
    MR_Word message__conv0_HeadVar__1_1;

    {
      message____Compare____message_type_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
  MR_Box message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2)
{
  {
    MR_bool message__succeeded;

    {
      message__succeeded = message____Unify____program_location_0_0(((MR_Word) message__wrapper_arg_1), ((MR_Word) message__wrapper_arg_2));
    }
    return message__succeeded;
  }
}

static void MR_CALL 
message____Compare____program_location_0_0_10001(
  MR_Box * message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2,
  MR_Box message__wrapper_arg_3)
{
  {
    MR_Word message__conv0_HeadVar__1_1;

    {
      message____Compare____program_location_0_0(&message__conv0_HeadVar__1_1, ((MR_Word) message__wrapper_arg_2), ((MR_Word) message__wrapper_arg_3));
    }
    *message__wrapper_arg_1 = ((MR_Box) (message__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
message____Compare____program_location_0_0(
  MR_Word * message__HeadVar__1_1,
  MR_Word message__HeadVar__2_2,
  MR_Word message__HeadVar__3_3)
{
  {
    MR_bool message__succeeded;
    MR_Integer message__CastX_45 = (MR_Integer) message__HeadVar__2_2;
    MR_Integer message__CastY_46 = (MR_Integer) message__HeadVar__3_3;

    message__succeeded = (message__CastX_45 == message__CastY_46);
    if (message__succeeded)
      *message__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) message__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word message__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) message__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word message__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mdbcomp__program_representation____Compare____string_proc_label_0_0(message__HeadVar__1_1, message__Var_56, message__ArgY1_5);
                  }
                }
                break;
              case (MR_Integer) 1:
                *message__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *message__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *message__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word message__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word message__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) message__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *message__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word message__ArgY1_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word message__ArgY2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word message__Var_20;

                  {
                    mdbcomp__program_representation____Compare____string_proc_label_0_0(&message__Var_20, message__Var_55, message__ArgY1_17);
                  }
                  message__succeeded = (message__Var_20 == (MR_Integer) 0);
                  message__succeeded = !(message__succeeded);
                  if (message__succeeded)
                    *message__HeadVar__1_1 = message__Var_20;
                  else
                    {
                      mdbcomp__goal_path____Compare____reverse_goal_path_0_0(message__HeadVar__1_1, message__Var_54, message__ArgY2_19);
                    }
                }
                break;
              case (MR_Integer) 2:
                *message__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *message__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word message__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), message__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) message__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *message__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *message__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word message__ArgY1_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), message__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer message__Var_57 = (MR_Integer) message__Var_52;
                  MR_Integer message__Var_58 = (MR_Integer) message__ArgY1_33;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(message__HeadVar__1_1, message__Var_57, message__Var_58);
                  }
                }
                break;
              case (MR_Integer) 3:
                *message__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word message__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) message__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *message__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *message__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *message__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word message__ArgY1_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer message__Var_59 = (MR_Integer) message__Var_53;
                  MR_Integer message__Var_60 = (MR_Integer) message__ArgY1_44;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(message__HeadVar__1_1, message__Var_59, message__Var_60);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
message____Unify____program_location_0_0(
  MR_Word message__HeadVar__1_1,
  MR_Word message__HeadVar__2_2)
{
  {
    MR_bool message__succeeded;
    MR_Integer message__CastX_13 = (MR_Integer) message__HeadVar__1_1;
    MR_Integer message__CastY_14 = (MR_Integer) message__HeadVar__2_2;

    message__succeeded = (message__CastX_13 == message__CastY_14);
    if (message__succeeded)
      message__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) message__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word message__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word message__ArgY1_4;

            message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (message__succeeded)
              {
                message__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__2_2, (MR_Integer) 0)));
                {
                  message__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(message__ArgX1_3, message__ArgY1_4);
                }
              }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word message__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word message__ArgY1_6;
            MR_Word message__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word message__ArgY2_8;

            message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (message__succeeded)
              {
                message__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 0)));
                message__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 1)));
                {
                  message__succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(message__ArgX1_5, message__ArgY1_6);
                }
                if (message__succeeded)
                  {
                    message__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(message__ArgX2_7, message__ArgY2_8);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word message__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), message__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word message__ArgY1_10;
            MR_Integer message__Var_20;
            MR_Integer message__Var_21;

            message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (message__succeeded)
              {
                message__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), message__HeadVar__2_2, (MR_Integer) 0)));
                message__Var_20 = (MR_Integer) message__ArgX1_9;
                message__Var_21 = (MR_Integer) message__ArgY1_10;
                message__succeeded = (message__Var_20 == message__Var_21);
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word message__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word message__ArgY1_12;
            MR_Integer message__Var_22;
            MR_Integer message__Var_23;

            message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (message__succeeded)
              {
                message__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)));
                message__Var_22 = (MR_Integer) message__ArgX1_11;
                message__Var_23 = (MR_Integer) message__ArgY1_12;
                message__succeeded = (message__Var_22 == message__Var_23);
              }
          }
          break;
      }
    return message__succeeded;
  }
}

void MR_CALL 
message____Compare____message_type_0_0(
  MR_Word * message__HeadVar__1_1,
  MR_Word message__HeadVar__2_2,
  MR_Word message__HeadVar__3_3)
{
  {
    MR_bool message__succeeded;
    MR_Integer message__CastX_30 = (MR_Integer) message__HeadVar__2_2;
    MR_Integer message__CastY_31 = (MR_Integer) message__HeadVar__3_3;

    message__succeeded = (message__CastX_30 == message__CastY_31);
    if (message__succeeded)
      *message__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer message__Var_4;
        MR_Integer message__Var_5;

        {
          message____Index____message_type_0_0(message__HeadVar__2_2, &message__Var_4);
        }
        {
          message____Index____message_type_0_0(message__HeadVar__3_3, &message__Var_5);
        }
        message__succeeded = (message__Var_4 < message__Var_5);
        if (message__succeeded)
          *message__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            message__succeeded = (message__Var_4 > message__Var_5);
            if (message__succeeded)
              *message__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Word message__Var_6;

                switch (MR_tag((MR_Word) message__HeadVar__2_2)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(message__HeadVar__2_2)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          message__Var_6 = (MR_Integer) 0;
                          message__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          message__Var_6 = (MR_Integer) 0;
                          message__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          message__Var_6 = (MR_Integer) 0;
                          message__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          message__Var_6 = (MR_Integer) 0;
                          message__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          message__Var_6 = (MR_Integer) 0;
                          message__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          message__Var_6 = (MR_Integer) 0;
                          message__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Integer message__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Integer message__ArgY1_8;

                      message__succeeded = ((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                      if (message__succeeded)
                        {
                          message__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__HeadVar__3_3, (MR_Integer) 0)));
                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&message__Var_6, message__ArgX1_7, message__ArgY1_8);
                          }
                          message__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Integer message__ArgX1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__HeadVar__2_2, (MR_Integer) 0)));
                      MR_Integer message__ArgY1_10;

                      message__succeeded = ((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
                      if (message__succeeded)
                        {
                          message__ArgY1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__HeadVar__3_3, (MR_Integer) 0)));
                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&message__Var_6, message__ArgX1_9, message__ArgY1_10);
                          }
                          message__succeeded = MR_TRUE;
                        }
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Integer message__ArgX1_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Integer message__ArgY1_12;

                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (message__succeeded)
                            {
                              message__ArgY1_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&message__Var_6, message__ArgX1_11, message__ArgY1_12);
                              }
                              message__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Integer message__ArgX1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Integer message__ArgY1_14;

                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (message__succeeded)
                            {
                              message__ArgY1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&message__Var_6, message__ArgX1_13, message__ArgY1_14);
                              }
                              message__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Integer message__ArgX1_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Integer message__ArgY1_16;
                          MR_Integer message__ArgX2_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 2)));
                          MR_Integer message__ArgY2_18;
                          MR_Word message__Var_19;

                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                          if (message__succeeded)
                            {
                              message__ArgY1_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
                              message__ArgY2_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 2)));
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&message__Var_19, message__ArgX1_15, message__ArgY1_16);
                              }
                              message__succeeded = (message__Var_19 == (MR_Integer) 0);
                              message__succeeded = !(message__succeeded);
                              if (message__succeeded)
                                message__Var_6 = message__Var_19;
                              else
                                {
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&message__Var_6, message__ArgX2_17, message__ArgY2_18);
                                }
                              message__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word message__ArgX1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                          MR_Word message__ArgY1_21;
                          MR_Integer message__Var_43;
                          MR_Integer message__Var_44;

                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                          if (message__succeeded)
                            {
                              message__ArgY1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
                              message__Var_43 = (MR_Integer) message__ArgX1_20;
                              message__Var_44 = (MR_Integer) message__ArgY1_21;
                              {
                                mercury__private_builtin__builtin_compare_int_3_p_0(&message__Var_6, message__Var_43, message__Var_44);
                              }
                              message__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_String message__ArgX1_22 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String message__ArgY1_23;

                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                          if (message__succeeded)
                            {
                              message__ArgY1_23 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&message__Var_6, message__ArgX1_22, message__ArgY1_23);
                              }
                              message__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          MR_String message__ArgX1_24 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String message__ArgY1_25;

                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                          if (message__succeeded)
                            {
                              message__ArgY1_25 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&message__Var_6, message__ArgX1_24, message__ArgY1_25);
                              }
                              message__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_String message__ArgX1_26 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String message__ArgY1_27;

                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                          if (message__succeeded)
                            {
                              message__ArgY1_27 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&message__Var_6, message__ArgX1_26, message__ArgY1_27);
                              }
                              message__succeeded = MR_TRUE;
                            }
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          MR_String message__ArgX1_28 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                          MR_String message__ArgY1_29;

                          message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                          if (message__succeeded)
                            {
                              message__ArgY1_29 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__3_3, (MR_Integer) 1)));
                              {
                                mercury__private_builtin__builtin_compare_string_3_p_0(&message__Var_6, message__ArgX1_28, message__ArgY1_29);
                              }
                              message__succeeded = MR_TRUE;
                            }
                        }
                        break;
                    }
                    break;
                }
                if (message__succeeded)
                  *message__HeadVar__1_1 = message__Var_6;
                else
                  {
                    mercury__private_builtin__compare_error_0_p_0();
                    return;
                  }
              }
          }
      }
  }
}

void MR_CALL 
message____Index____message_type_0_0(
  MR_Word message__HeadVar__1_1,
  MR_Integer * message__HeadVar__2_2)
{
  {
    MR_bool message__succeeded;

    switch (MR_tag((MR_Word) message__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(message__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *message__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *message__HeadVar__2_2 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *message__HeadVar__2_2 = (MR_Integer) 6;
            break;
          case (MR_Integer) 3:
            *message__HeadVar__2_2 = (MR_Integer) 9;
            break;
          case (MR_Integer) 4:
            *message__HeadVar__2_2 = (MR_Integer) 13;
            break;
          case (MR_Integer) 5:
            *message__HeadVar__2_2 = (MR_Integer) 14;
            break;
        }
        break;
      case (MR_Integer) 1:
        *message__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        *message__HeadVar__2_2 = (MR_Integer) 3;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *message__HeadVar__2_2 = (MR_Integer) 4;
            break;
          case (MR_Integer) 1:
            *message__HeadVar__2_2 = (MR_Integer) 5;
            break;
          case (MR_Integer) 2:
            *message__HeadVar__2_2 = (MR_Integer) 7;
            break;
          case (MR_Integer) 3:
            *message__HeadVar__2_2 = (MR_Integer) 8;
            break;
          case (MR_Integer) 4:
            *message__HeadVar__2_2 = (MR_Integer) 10;
            break;
          case (MR_Integer) 5:
            *message__HeadVar__2_2 = (MR_Integer) 11;
            break;
          case (MR_Integer) 6:
            *message__HeadVar__2_2 = (MR_Integer) 12;
            break;
          case (MR_Integer) 7:
            *message__HeadVar__2_2 = (MR_Integer) 15;
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
message____Unify____message_type_0_0(
  MR_Word message__HeadVar__1_1,
  MR_Word message__HeadVar__2_2)
{
  {
    MR_bool message__succeeded;
    MR_Integer message__CastX_37 = (MR_Integer) message__HeadVar__1_1;
    MR_Integer message__CastY_38 = (MR_Integer) message__HeadVar__2_2;

    message__succeeded = (message__CastX_37 == message__CastY_38);
    if (message__succeeded)
      message__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) message__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(message__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer message__CastX_3 = (MR_Integer) message__HeadVar__1_1;
                MR_Integer message__CastY_4 = (MR_Integer) message__HeadVar__2_2;

                message__succeeded = (message__CastY_4 == message__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer message__CastX_7 = (MR_Integer) message__HeadVar__1_1;
                MR_Integer message__CastY_8 = (MR_Integer) message__HeadVar__2_2;

                message__succeeded = (message__CastY_8 == message__CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer message__CastX_15 = (MR_Integer) message__HeadVar__1_1;
                MR_Integer message__CastY_16 = (MR_Integer) message__HeadVar__2_2;

                message__succeeded = (message__CastY_16 == message__CastX_15);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer message__CastX_23 = (MR_Integer) message__HeadVar__1_1;
                MR_Integer message__CastY_24 = (MR_Integer) message__HeadVar__2_2;

                message__succeeded = (message__CastY_24 == message__CastX_23);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer message__CastX_31 = (MR_Integer) message__HeadVar__1_1;
                MR_Integer message__CastY_32 = (MR_Integer) message__HeadVar__2_2;

                message__succeeded = (message__CastY_32 == message__CastX_31);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer message__CastX_33 = (MR_Integer) message__HeadVar__1_1;
                MR_Integer message__CastY_34 = (MR_Integer) message__HeadVar__2_2;

                message__succeeded = (message__CastY_34 == message__CastX_33);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer message__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer message__ArgY1_6;

            message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (message__succeeded)
              {
                message__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__HeadVar__2_2, (MR_Integer) 0)));
                message__succeeded = (message__ArgX1_5 == message__ArgY1_6);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer message__ArgX1_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer message__ArgY1_10;

            message__succeeded = ((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (message__succeeded)
              {
                message__ArgY1_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__HeadVar__2_2, (MR_Integer) 0)));
                message__succeeded = (message__ArgX1_9 == message__ArgY1_10);
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer message__ArgX1_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer message__ArgY1_12;

                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (message__succeeded)
                  {
                    message__ArgY1_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                    message__succeeded = (message__ArgX1_11 == message__ArgY1_12);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer message__ArgX1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer message__ArgY1_14;

                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (message__succeeded)
                  {
                    message__ArgY1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                    message__succeeded = (message__ArgX1_13 == message__ArgY1_14);
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer message__ArgX1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
                MR_Integer message__ArgY1_18;
                MR_Integer message__ArgX2_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer message__ArgY2_20;

                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (message__succeeded)
                  {
                    message__ArgY1_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                    message__ArgY2_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 2)));
                    message__succeeded = (message__ArgX1_17 == message__ArgY1_18);
                    if (message__succeeded)
                      message__succeeded = (message__ArgX2_19 == message__ArgY2_20);
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word message__ArgX1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word message__ArgY1_22;

                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (message__succeeded)
                  {
                    message__ArgY1_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                    message__succeeded = (message__ArgX1_21 == message__ArgY1_22);
                  }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String message__ArgX1_25 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
                MR_String message__ArgY1_26;

                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (message__succeeded)
                  {
                    message__ArgY1_26 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                    message__succeeded = (strcmp(message__ArgX1_25, message__ArgY1_26) == 0);
                  }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String message__ArgX1_27 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
                MR_String message__ArgY1_28;

                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (message__succeeded)
                  {
                    message__ArgY1_28 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                    message__succeeded = (strcmp(message__ArgX1_27, message__ArgY1_28) == 0);
                  }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String message__ArgX1_29 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
                MR_String message__ArgY1_30;

                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (message__succeeded)
                  {
                    message__ArgY1_30 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                    message__succeeded = (strcmp(message__ArgX1_29, message__ArgY1_30) == 0);
                  }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String message__ArgX1_35 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__1_1, (MR_Integer) 1)));
                MR_String message__ArgY1_36;

                message__succeeded = ((((MR_tag((MR_Word) message__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (message__succeeded)
                  {
                    message__ArgY1_36 = ((MR_String) (MR_hl_field(MR_mktag(3), message__HeadVar__2_2, (MR_Integer) 1)));
                    message__succeeded = (strcmp(message__ArgX1_35, message__ArgY1_36) == 0);
                  }
              }
              break;
          }
          break;
      }
    return message__succeeded;
  }
}

void MR_CALL 
message____Compare____message_level_0_0(
  MR_Word * message__HeadVar__1_1,
  MR_Word message__HeadVar__2_2,
  MR_Word message__HeadVar__3_3)
{
  {
    MR_bool message__succeeded;
    MR_Integer message__Cast_HeadVar1_4 = (MR_Integer) message__HeadVar__2_2;
    MR_Integer message__Cast_HeadVar2_5 = (MR_Integer) message__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(message__HeadVar__1_1, message__Cast_HeadVar1_4, message__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
message____Unify____message_level_0_0(
  MR_Word message__HeadVar__2_1,
  MR_Word message__HeadVar__2_2)
{
  {
    MR_bool message__succeeded = (message__HeadVar__2_1 == message__HeadVar__2_2);

    return message__succeeded;
  }
}

void MR_CALL 
message____Compare____message_0_0(
  MR_Word * message__HeadVar__1_1,
  MR_Word message__HeadVar__2_2,
  MR_Word message__HeadVar__3_3)
{
  {
    MR_bool message__succeeded;
    MR_Integer message__CastX_9 = (MR_Integer) message__HeadVar__2_2;
    MR_Integer message__CastY_10 = (MR_Integer) message__HeadVar__3_3;

    message__succeeded = (message__CastX_9 == message__CastY_10);
    if (message__succeeded)
      *message__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word message__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word message__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word message__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word message__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word message__Var_8;

        {
          message____Compare____program_location_0_0(&message__Var_8, message__ArgX1_4, message__ArgY1_5);
        }
        message__succeeded = (message__Var_8 == (MR_Integer) 0);
        message__succeeded = !(message__succeeded);
        if (message__succeeded)
          *message__HeadVar__1_1 = message__Var_8;
        else
          {
            message____Compare____message_type_0_0(message__HeadVar__1_1, message__ArgX2_6, message__ArgY2_7);
          }
      }
  }
}

MR_bool MR_CALL 
message____Unify____message_0_0(
  MR_Word message__HeadVar__1_1,
  MR_Word message__HeadVar__2_2)
{
  {
    MR_bool message__succeeded;
    MR_Integer message__CastX_7 = (MR_Integer) message__HeadVar__1_1;
    MR_Integer message__CastY_8 = (MR_Integer) message__HeadVar__2_2;

    message__succeeded = (message__CastX_7 == message__CastY_8);
    if (message__succeeded)
      message__succeeded = MR_TRUE;
    else
      {
        MR_Word message__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word message__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word message__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word message__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__2_2, (MR_Integer) 1)));

        {
          message__succeeded = message____Unify____program_location_0_0(message__ArgX1_3, message__ArgY1_4);
        }
        if (message__succeeded)
          {
            message__succeeded = message____Unify____message_type_0_0(message__ArgX2_5, message__ArgY2_6);
          }
      }
    return message__succeeded;
  }
}

static void MR_CALL 
message__unsafe_set_verbosity_level_mut_1_p_0(
  MR_Integer message__X_1)
{
  {
    MR_bool message__succeeded;

{
#define MR_PROC_LABEL message__unsafe_set_verbosity_level_mut_1_p_0

	MR_Integer X;

	X =  message__X_1 ;
		{
message__mutable_variable_verbosity_level_mut = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
message__unsafe_get_verbosity_level_mut_1_p_0(
  MR_Integer * message__X_1)
{
  {
    MR_bool message__succeeded;

{
#define MR_PROC_LABEL message__unsafe_get_verbosity_level_mut_1_p_0

	MR_Integer X;

		{
X = message__mutable_variable_verbosity_level_mut;


		;}
#undef MR_PROC_LABEL
	 *message__X_1  = X;
}
  }
}

static void MR_CALL 
message__unlock_verbosity_level_mut_0_p_0(void)
{
  {
    MR_bool message__succeeded;

{
#define MR_PROC_LABEL message__unlock_verbosity_level_mut_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
message__lock_verbosity_level_mut_0_p_0(void)
{
  {
    MR_bool message__succeeded;

{
#define MR_PROC_LABEL message__lock_verbosity_level_mut_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
message__initialise_mutable_verbosity_level_mut_0_p_0(void)
{
  {
    MR_bool message__succeeded;

{
#define MR_PROC_LABEL message__initialise_mutable_verbosity_level_mut_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&message__mutable_variable_verbosity_level_mut_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL message__initialise_mutable_verbosity_level_mut_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL message__initialise_mutable_verbosity_level_mut_0_p_0

	MR_Integer X;

	X =  (MR_Integer) 2 ;
		{
message__mutable_variable_verbosity_level_mut = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL message__initialise_mutable_verbosity_level_mut_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
message__pre_initialise_mutable_verbosity_level_mut_0_p_0(void)
{
  {
    MR_bool message__succeeded;

{
#define MR_PROC_LABEL message__pre_initialise_mutable_verbosity_level_mut_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&message__mutable_variable_verbosity_level_mut_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
message__write_out_message_4_p_0(
  MR_Word message__Stream_5,
  MR_Word message__Message_6)
{
  {
    MR_bool message__succeeded;
    MR_Word message__Level_8;
    MR_Integer message__VerbosityLevel_9;
    MR_Word message__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__Message_6, (MR_Integer) 1)));
    MR_Word message__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__Message_6, (MR_Integer) 0)));
    MR_Integer message__Var_14;

    switch (MR_tag((MR_Word) message__Type_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(message__Type_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            message__Level_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            message__Level_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            message__Level_8 = (MR_Integer) 2;
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            message__Level_8 = (MR_Integer) 3;
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        message__Level_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_18, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            message__Level_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            message__Level_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            message__Level_8 = (MR_Integer) 2;
            break;
          case (MR_Integer) 7:
            message__Level_8 = (MR_Integer) 3;
            break;
        }
        break;
    }
{
#define MR_PROC_LABEL message__write_out_message_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL message__write_out_message_4_p_0

	MR_Integer X;

		{
X = message__mutable_variable_verbosity_level_mut;


		;}
#undef MR_PROC_LABEL
	 message__VerbosityLevel_9  = X;
}
{
#define MR_PROC_LABEL message__write_out_message_4_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    message__Var_14 = ((&message_vector_common_1[4 + message__Level_8]))->message__vector_common_type_1_0__vct_1_f_0;
    message__succeeded = (message__Var_14 <= message__VerbosityLevel_9);
    if (message__succeeded)
      {
        MR_String message__MessageStr_10;

        {
          message__message_to_string_2_p_0(message__Message_6, &message__MessageStr_10);
        }
        {
          mercury__io__write_string_4_p_0(message__Stream_5, message__MessageStr_10);
        }
        {
          mercury__io__nl_3_p_0(message__Stream_5);
        }
      }
    else
      {
      }
  }
}

static MR_Word MR_CALL 
message__message_type_to_string_1_f_0(
  MR_Word message__MessageType_3)
{
  {
    MR_bool message__succeeded;
    MR_Word message__Cord_4;
    MR_String message__String_5;

    switch (MR_tag((MR_Word) message__MessageType_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(message__MessageType_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            message__String_5 = (MR_String) "Found candidate conjunction";
            break;
          case (MR_Integer) 1:
            message__String_5 = (MR_String) "Found pushed conjuncts above callsite threshold";
            break;
          case (MR_Integer) 2:
            message__String_5 = (MR_String) "Parallelising call pairs that have more than one dependent variable is not yet supported.";
            break;
          case (MR_Integer) 3:
            message__String_5 = (MR_String) "Could not look up proc defn, perhaps this procedure is built-in";
            break;
          case (MR_Integer) 4:
            message__String_5 = (MR_String) "extra proc dynamics for a clique proc are not currently handled.";
            break;
          case (MR_Integer) 5:
            message__String_5 = (MR_String) "Cannot lookup coverage points";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer message__Num_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), message__MessageType_3, (MR_Integer) 0)));
          MR_String message__Var_131;
          MR_String message__Var_138;

          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__Num_6, &message__Var_131);
          }
          {
            message__Var_138 = mercury__string__f_43_43_2_f_0(message__Var_131, (MR_String) " conjuncts above callsite threshold");
          }
          {
            message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Found ", message__Var_138);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer message__Num_62 = ((MR_Integer) (MR_hl_field(MR_mktag(2), message__MessageType_3, (MR_Integer) 0)));
          MR_String message__Var_111;
          MR_String message__Var_118;

          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__Num_62, &message__Var_111);
          }
          {
            message__Var_118 = mercury__string__f_43_43_2_f_0(message__Var_111, (MR_String) " partitions, this may reduce parallelism");
          }
          {
            message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Split conjunction into ", message__Var_118);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer message__Num_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
              MR_String message__Var_121;
              MR_String message__Var_128;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__Num_57, &message__Var_121);
              }
              {
                message__Var_128 = mercury__string__f_43_43_2_f_0(message__Var_121, (MR_String) " conjunctions with a positive speedup due to parallelisation");
              }
              {
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Found ", message__Var_128);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer message__CandidateConjuncts_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
              MR_String message__Var_100;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__CandidateConjuncts_8, &message__Var_100);
              }
              {
                message__String_5 = mercury__string__f_43_43_2_f_0(message__Var_100, (MR_String) " conjunctions not parallelised: Seen duplicate instantiations");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer message__PartNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
              MR_Integer message__NumCalls_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 2)));
              MR_String message__Var_80;
              MR_Word message__Var_86 = (MR_Word) &message_scalar_common_2[0];
              MR_String message__Var_87;
              MR_String message__Var_89;
              MR_String message__Var_90;
              MR_String message__Var_97;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(message__Var_86, message__NumCalls_10, &message__Var_80);
              }
              {
                message__Var_87 = mercury__string__f_43_43_2_f_0(message__Var_80, (MR_String) " costly calls and cannot be parallelised");
              }
              {
                message__Var_89 = mercury__string__f_43_43_2_f_0((MR_String) " has only ", message__Var_87);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(message__Var_86, message__PartNum_9, &message__Var_90);
              }
              {
                message__Var_97 = mercury__string__f_43_43_2_f_0(message__Var_90, message__Var_89);
              }
              {
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Partition ", message__Var_97);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word message__Detism_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
              MR_String message__Var_32;
              MR_String message__Var_108;

              {
                message__Var_32 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0, ((MR_Box) (message__Detism_11)));
              }
              {
                message__Var_108 = mercury__string__f_43_43_2_f_0(message__Var_32, (MR_String) " goals amongst goals above the parallelisation overhead.");
              }
              {
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "There are ", message__Var_108);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String message__Error_12 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));
              MR_String message__Var_23;

              {
                message__Var_23 = mercury__string__f_43_43_2_f_0(message__Error_12, (MR_String) "\n  falling back to some other method");
              }
              {
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute procrep coverage annotation: ", message__Var_23);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String message__ErrorStr_67 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));

              {
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute cost of recursive calls: ", message__ErrorStr_67);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String message__ErrorStr_72 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));

              {
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute the production or consumption time of a variable: ", message__ErrorStr_72);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String message__ErrorStr_13 = ((MR_String) (MR_hl_field(MR_mktag(3), message__MessageType_3, (MR_Integer) 1)));

              {
                message__String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Exception thrown: ", message__ErrorStr_13);
              }
            }
            break;
        }
        break;
    }
    {
      message__Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (message__String_5)));
    }
    return message__Cord_4;
  }
}

MR_Integer MR_CALL 
message__default_verbosity_level_0_f_0(void)
{
  {
    MR_bool message__succeeded;

    return (MR_Integer) 2;
  }
}

void MR_CALL 
message__set_verbosity_level_3_p_0(
  MR_Integer message__VerbosityLevel_4)
{
  {
    MR_bool message__succeeded;

{
#define MR_PROC_LABEL message__set_verbosity_level_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL message__set_verbosity_level_3_p_0

	MR_Integer X;

	X =  message__VerbosityLevel_4 ;
		{
message__mutable_variable_verbosity_level_mut = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL message__set_verbosity_level_3_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&message__mutable_variable_verbosity_level_mut_lock,
                    "message__mutable_variable_verbosity_level_mut_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
message__write_out_messages_4_p_0_1(
  MR_Box message__closure_arg,
  MR_Box message__wrapper_arg_1,
  MR_Box message__wrapper_arg_2,
  MR_Box * message__wrapper_arg_3)
{
  {
    MR_Box message__closure = message__closure_arg;

    {
      message__write_out_message_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), message__closure, (MR_Integer) 3))), ((MR_Word) message__wrapper_arg_1));
    }
  }
}

void MR_CALL 
message__write_out_messages_4_p_0(
  MR_Word message__Stream_5,
  MR_Word message__Messages_6)
{
  {
    MR_bool message__succeeded;
    MR_Word message__Var_10;
    MR_Box message__conv0_STATE_VARIABLE_IO_9;

    {
      message__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), message__Var_10, 0) = ((MR_Box) (&message_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), message__Var_10, 1) = ((MR_Box) (message__write_out_messages_4_p_0_1));
      MR_hl_field(MR_mktag(0), message__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), message__Var_10, 3) = ((MR_Box) (message__Stream_5));
    }
    {
      mercury__cord__foldl_pred_4_p_2((MR_Word) &message__message__type_ctor_info_message_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, message__Var_10, message__Messages_6, ((MR_Box) ((MR_Integer) 0)), &message__conv0_STATE_VARIABLE_IO_9);
    }
  }
}

MR_Integer MR_CALL 
message__indent_size_1_f_0(
  MR_Integer message__N_3)
{
  {
    MR_bool message__succeeded;
    MR_Integer message__HeadVar__2_2 = ((MR_Integer) 2 * message__N_3);

    return message__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
message__nl_0_f_0(void)
{
  {
    MR_bool message__succeeded;
    MR_Word message__HeadVar__1_1;

    {
      message__HeadVar__1_1 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
    return message__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
message__nl_indent_1_f_0(
  MR_Integer message__N_3)
{
  {
    MR_bool message__succeeded;
    MR_Word message__HeadVar__2_2;
    MR_Word message__Var_4;
    MR_Word message__Var_5;

    {
      message__Var_4 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "\n")));
    }
    {
      message__Var_5 = message__indent_1_f_0(message__N_3);
    }
    {
      message__HeadVar__2_2 = mercury__cord__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, message__Var_4, message__Var_5);
    }
    return message__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
message__indent_1_f_0(
  MR_Integer message__N_3)
{
  {
    MR_bool message__succeeded = (message__N_3 < (MR_Integer) 0);
    MR_Word message__Indent_4;

    if (message__succeeded)
      {
        {
          mercury__require__error_1_p_0((MR_String) "automatic_parallelism: Negative indent");
        }
      }
    else
      {
        message__succeeded = (message__N_3 == (MR_Integer) 0);
        if (message__succeeded)
          {
            {
              message__Indent_4 = mercury__cord__empty_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
          }
        else
          {
            MR_Word message__Var_7;
            MR_Integer message__Var_8 = (message__N_3 - (MR_Integer) 1);

            {
              message__Var_7 = message__indent_1_f_0(message__Var_8);
            }
            {
              message__Indent_4 = mercury__cord__snoc_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, message__Var_7, ((MR_Box) ((MR_String) "  ")));
            }
          }
      }
    return message__Indent_4;
  }
}

void MR_CALL 
message__append_message_4_p_0(
  MR_Word message__Location_5,
  MR_Word message__MessageType_6,
  MR_Word message__STATE_VARIABLE_Messages_0_9,
  MR_Word * message__STATE_VARIABLE_Messages_10)
{
  {
    MR_bool message__succeeded;
    MR_Word message__Message_8;

    {
      message__Message_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), message__Message_8, 0) = ((MR_Box) (message__Location_5));
      MR_hl_field(MR_mktag(0), message__Message_8, 1) = ((MR_Box) (message__MessageType_6));
    }
    {
      *message__STATE_VARIABLE_Messages_10 = mercury__cord__snoc_2_f_0((MR_Word) &message__message__type_ctor_info_message_0, message__STATE_VARIABLE_Messages_0_9, ((MR_Box) (message__Message_8)));
    }
  }
}

void MR_CALL 
message__location_to_string_3_p_0(
  MR_Integer message__Level_4,
  MR_Word message__Location_5,
  MR_Word * message__String_6)
{
  {
    MR_bool message__succeeded;

    switch (MR_tag((MR_Word) message__Location_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word message__TypeCtorInfo_52_52;
          MR_Word message__ProcLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__Location_5, (MR_Integer) 0)));
          MR_String message__ProcLabelString_8;
          MR_Word message__Var_42;
          MR_Word message__Var_43;
          MR_Word message__Var_44;
          MR_Word message__Var_46;
          MR_Word message__Var_47;
          MR_Word message__Var_48;

          {
            program_representation_utils__print_proc_label_to_string_2_p_0(message__ProcLabel_7, &message__ProcLabelString_8);
          }
          message__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            message__Var_42 = message__indent_1_f_0(message__Level_4);
          }
          {
            message__Var_44 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_52_52, ((MR_Box) ((MR_String) "Proc: ")));
          }
          {
            message__Var_47 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_52_52, ((MR_Box) (message__ProcLabelString_8)));
          }
          {
            message__Var_48 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_52_52, ((MR_Box) ((MR_String) "\n")));
          }
          {
            message__Var_46 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_52_52, message__Var_47, message__Var_48);
          }
          {
            message__Var_43 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_52_52, message__Var_44, message__Var_46);
          }
          {
            *message__String_6 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_52_52, message__Var_42, message__Var_43);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word message__TypeCtorInfo_55_55;
          MR_Word message__RevGoalPath_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__Location_5, (MR_Integer) 1)));
          MR_Word message__FirstLine_10;
          MR_Word message__GoalPathString_11;
          MR_Word message__SecondLine_14;
          MR_Word message__Var_32;
          MR_Word message__Var_38;
          MR_Word message__Var_39;
          MR_Word message__Var_40;
          MR_Word message__ProcLabel_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), message__Location_5, (MR_Integer) 0)));

          {
            message__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), message__Var_32, 0) = ((MR_Box) (message__ProcLabel_50));
          }
          {
            message__location_to_string_3_p_0(message__Level_4, message__Var_32, &message__FirstLine_10);
          }
          if ((message__RevGoalPath_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                message__GoalPathString_11 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Root goal")));
              }
            }
          else
            {
              MR_Word message__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
              MR_Word message__Var_33;
              MR_Word message__Var_35;
              MR_String message__Var_36;

              {
                message__Var_33 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_54_54, ((MR_Box) ((MR_String) "Goal: ")));
              }
              {
                message__Var_36 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(message__RevGoalPath_9);
              }
              {
                message__Var_35 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_54_54, ((MR_Box) (message__Var_36)));
              }
              {
                message__GoalPathString_11 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_54_54, message__Var_33, message__Var_35);
              }
            }
          message__TypeCtorInfo_55_55 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            message__Var_38 = message__indent_1_f_0(message__Level_4);
          }
          {
            message__Var_40 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_55_55, ((MR_Box) ((MR_String) "\n")));
          }
          {
            message__Var_39 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_55_55, message__GoalPathString_11, message__Var_40);
          }
          {
            message__SecondLine_14 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_55_55, message__Var_38, message__Var_39);
          }
          {
            *message__String_6 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_55_55, message__FirstLine_10, message__SecondLine_14);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word message__TypeCtorInfo_56_56;
          MR_Integer message__Id_15;
          MR_String message__String0_16;
          MR_Word message__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), message__Location_5, (MR_Integer) 0)));
          MR_Word message__Var_30;
          MR_Word message__Var_31;
          MR_String message__Var_66;

          message__Id_15 = (MR_Integer) message__Var_25;
          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__Id_15, &message__Var_66);
          }
          {
            message__String0_16 = mercury__string__f_43_43_2_f_0((MR_String) "clique ", message__Var_66);
          }
          message__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            message__Var_30 = message__indent_1_f_0(message__Level_4);
          }
          {
            message__Var_31 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_56_56, ((MR_Box) (message__String0_16)));
          }
          {
            *message__String_6 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_56_56, message__Var_30, message__Var_31);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word message__TypeCtorInfo_57_57;
          MR_Word message__CSDPtr_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), message__Location_5, (MR_Integer) 0)));
          MR_Integer message__CSDNum_18 = (MR_Integer) message__CSDPtr_17;
          MR_Word message__Var_23;
          MR_Word message__Var_24;
          MR_String message__String0_51;
          MR_String message__Var_58;

          {
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &message_scalar_common_2[0], message__CSDNum_18, &message__Var_58);
          }
          {
            message__String0_51 = mercury__string__f_43_43_2_f_0((MR_String) "call site dynamic ", message__Var_58);
          }
          message__TypeCtorInfo_57_57 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          {
            message__Var_23 = message__indent_1_f_0(message__Level_4);
          }
          {
            message__Var_24 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_57_57, ((MR_Box) (message__String0_51)));
          }
          {
            *message__String_6 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_57_57, message__Var_23, message__Var_24);
          }
        }
        break;
    }
  }
}

void MR_CALL 
message__message_to_string_2_p_0(
  MR_Word message__HeadVar__1_1,
  MR_String * message__String_5)
{
  {
    MR_bool message__succeeded;
    MR_Word message__TypeCtorInfo_23_23;
    MR_Word message__Location_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word message__MessageType_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word message__LocationString_6;
    MR_Word message__LevelString_8;
    MR_Word message__MessageStr_9;
    MR_Word message__Cord_10;
    MR_Word message__Var_12;
    MR_Word message__Var_13;
    MR_Word message__Var_15;
    MR_Word message__Var_16;
    MR_Word message__Var_17;
    MR_Word message__Var_19;
    MR_Word message__Var_20;
    MR_Word message__Var_22;

    {
      message__location_to_string_3_p_0((MR_Integer) 1, message__Location_3, &message__LocationString_6);
    }
    switch (MR_tag((MR_Word) message__MessageType_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(message__MessageType_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              {
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Info")));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Notice")));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Warning")));
              }
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              {
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Error")));
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Info")));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__MessageType_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Info")));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              {
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Notice")));
              }
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            {
              {
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Warning")));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                message__LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "Error")));
              }
            }
            break;
        }
        break;
    }
    {
      message__MessageStr_9 = message__message_type_to_string_1_f_0(message__MessageType_4);
    }
    message__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      message__Var_13 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_23_23, ((MR_Box) ((MR_String) ":\n")));
    }
    {
      message__Var_17 = message__indent_1_f_0((MR_Integer) 1);
    }
    {
      message__Var_20 = mercury__cord__singleton_1_f_0(message__TypeCtorInfo_23_23, ((MR_Box) ((MR_String) "\n")));
    }
    {
      message__Var_19 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__MessageStr_9, message__Var_20);
    }
    {
      message__Var_16 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__Var_17, message__Var_19);
    }
    {
      message__Var_15 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__LocationString_6, message__Var_16);
    }
    {
      message__Var_12 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__Var_13, message__Var_15);
    }
    {
      message__Cord_10 = mercury__cord__f_43_43_2_f_0(message__TypeCtorInfo_23_23, message__LevelString_8, message__Var_12);
    }
    {
      message__Var_22 = mercury__cord__list_1_f_0(message__TypeCtorInfo_23_23, message__Cord_10);
    }
    {
      mercury__string__append_list_2_p_0(message__Var_22, message__String_5);
    }
  }
}

MR_Integer MR_CALL 
message__message_level_to_int_1_f_0(
  MR_Word message__HeadVar__1_1)
{
  {
    MR_bool message__succeeded;
    MR_Integer message__HeadVar__2_2 = ((&message_vector_common_1[0 + message__HeadVar__1_1]))->message__vector_common_type_1_0__vct_1_f_0;

    return message__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
message__message_get_level_1_f_0(
  MR_Word message__HeadVar__1_1)
{
  {
    MR_bool message__succeeded;
    MR_Word message__HeadVar__2_2;
    MR_Word message__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word message__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), message__HeadVar__1_1, (MR_Integer) 0)));

    switch (MR_tag((MR_Word) message__Type_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(message__Type_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            message__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            message__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            message__HeadVar__2_2 = (MR_Integer) 2;
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            message__HeadVar__2_2 = (MR_Integer) 3;
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        message__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), message__Type_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            message__HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            message__HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            message__HeadVar__2_2 = (MR_Integer) 2;
            break;
          case (MR_Integer) 7:
            message__HeadVar__2_2 = (MR_Integer) 3;
            break;
        }
        break;
    }
    return message__HeadVar__2_2;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__message__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module message. */
