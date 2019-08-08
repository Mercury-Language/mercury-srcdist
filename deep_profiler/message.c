/*
** Automatically generated from `message.m'
** by the Mercury compiler,
** version rotd-2019-08-08
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


// :- module message.
// :- implementation.

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

static const MR_DuArgLocn message__message__field_locns_message_type_0_8[1];

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

static void MR_CALL 
message__unsafe_set_verbosity_level_mut_1_p_0(
  MR_Integer X_1);

static void MR_CALL 
message__unsafe_get_verbosity_level_mut_1_p_0(
  MR_Integer * X_1);

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
  MR_Word Stream_5,
  MR_Word Message_6);

static void MR_CALL 
message__write_out_messages_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
message__message_type_to_string_1_f_0(
  MR_Word MessageType_3);

static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
message____Compare____message_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
message____Compare____message_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
message____Compare____message_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
message____Compare____program_location_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box message_scalar_common_2[1][1];

static /* final */ const MR_Box message_scalar_common_3[1][7];


/* sealed */ struct message__vector_common_type_1_0_s {
  const MR_Integer message__vector_common_type_1_0__vct_1_f_0;
};

static /* final */ const struct message__vector_common_type_1_0_s message_vector_common_1[8];



static /* final */ const MR_Box message_scalar_common_2[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box message_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
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
  (MR_PseudoTypeInfo) (&message__message__type_ctor_info_program_location_0),
  (MR_PseudoTypeInfo) (&message__message__type_ctor_info_message_type_0)
};

static const MR_ConstString message__message__field_names_message_0_0[2] = {
  (MR_String) "message_location",
  (MR_String) "message_type"
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_0_0 = {
  (MR_String) "message",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  message__message__field_types_message_0_0,
  message__message__field_names_message_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr message__message__du_stag_ordered_message_0_0[1] = {
  &message__message__du_functor_desc_message_0_0
};

static const MR_DuPtagLayout message__message__du_ptag_ordered_message_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    message__message__du_stag_ordered_message_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (message____Unify____message_0_0_10001)),
  ((MR_Box) (message____Compare____message_0_0_10001)),
  (MR_String) "message",
  (MR_String) "message",
  {     message__message__du_name_ordered_message_0 },
  {     message__message__du_ptag_ordered_message_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  message__message__functor_number_map_message_0
};

static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_0 = {
  (MR_String) "message_info",
  INT32_C(0)
};

static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_1 = {
  (MR_String) "message_notice",
  INT32_C(1)
};

static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_2 = {
  (MR_String) "message_warning",
  INT32_C(2)
};

static const MR_EnumFunctorDesc message__message__enum_functor_desc_message_level_0_3 = {
  (MR_String) "message_error",
  INT32_C(3)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (message____Unify____message_level_0_0_10001)),
  ((MR_Box) (message____Compare____message_level_0_0_10001)),
  (MR_String) "message",
  (MR_String) "message_level",
  {     message__message__enum_name_ordered_message_level_0 },
  {     message__message__enum_value_ordered_message_level_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  message__message__functor_number_map_message_level_0
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_0 = {
  (MR_String) "info_found_candidate_conjunction",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_1 = {
  (MR_String) "info_found_conjs_above_callsite_threshold",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  message__message__field_types_message_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_2 = {
  (MR_String) "info_found_pushed_conjs_above_callsite_threshold",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_3 = {
  (MR_String) "info_split_conjunction_into_partitions",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(3),
  message__message__field_types_message_type_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_4 = {
  (MR_String) "info_found_n_conjunctions_with_positive_speedup",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(4),
  message__message__field_types_message_type_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_5[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_5 = {
  (MR_String) "notice_duplicate_instantiation",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(5),
  message__message__field_types_message_type_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_6 = {
  (MR_String) "notice_callpair_has_more_than_one_dependant_var",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_7[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_7 = {
  (MR_String) "notice_partition_does_not_have_costly_calls",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(7),
  message__message__field_types_message_type_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_8[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0)
};

static const MR_DuArgLocn message__message__field_locns_message_type_0_8[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 3
  }
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_8 = {
  (MR_String) "notice_candidate_conjunction_not_det",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(8),
  message__message__field_types_message_type_0_8,
  NULL,
  message__message__field_locns_message_type_0_8,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_9 = {
  (MR_String) "warning_cannot_lookup_proc_defn",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_10[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_10 = {
  (MR_String) "warning_cannot_compute_procrep_coverage_fallback",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(10),
  message__message__field_types_message_type_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_11[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_11 = {
  (MR_String) "warning_cannot_compute_cost_of_recursive_calls",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(11),
  message__message__field_types_message_type_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_12[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_12 = {
  (MR_String) "warning_cannot_compute_first_use_time",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(12),
  message__message__field_types_message_type_0_12,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_13 = {
  (MR_String) "error_extra_proc_dynamics_in_clique_proc",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(13),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_14 = {
  (MR_String) "error_cannot_lookup_coverage_points",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(14),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo message__message__field_types_message_type_0_15[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_message_type_0_15 = {
  (MR_String) "error_exception_thrown",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(15),
  message__message__field_types_message_type_0_15,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(6),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    message__message__du_stag_ordered_message_type_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    message__message__du_stag_ordered_message_type_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    message__message__du_stag_ordered_message_type_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(8),
    MR_SECTAG_REMOTE_FULL_WORD,
    message__message__du_stag_ordered_message_type_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (message____Unify____message_type_0_0_10001)),
  ((MR_Box) (message____Compare____message_type_0_0_10001)),
  (MR_String) "message",
  (MR_String) "message_type",
  {     message__message__du_name_ordered_message_type_0 },
  {     message__message__du_ptag_ordered_message_type_0 },
  (MR_Integer) 16,
  UINT16_C(4),
  message__message__functor_number_map_message_type_0
};

static const MR_PseudoTypeInfo message__message__field_types_program_location_0_0[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_0 = {
  (MR_String) "pl_proc",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  message__message__field_types_program_location_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo message__message__field_types_program_location_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0),
  (MR_PseudoTypeInfo) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_1 = {
  (MR_String) "pl_goal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  message__message__field_types_program_location_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo message__message__field_types_program_location_0_2[1] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_2 = {
  (MR_String) "pl_clique",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  message__message__field_types_program_location_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo message__message__field_types_program_location_0_3[1] = {
  (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)
};

static const MR_DuFunctorDesc message__message__du_functor_desc_program_location_0_3 = {
  (MR_String) "pl_csd",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  message__message__field_types_program_location_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    message__message__du_stag_ordered_program_location_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    message__message__du_stag_ordered_program_location_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    message__message__du_stag_ordered_program_location_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    message__message__du_stag_ordered_program_location_0_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (message____Unify____program_location_0_0_10001)),
  ((MR_Box) (message____Compare____program_location_0_0_10001)),
  (MR_String) "message",
  (MR_String) "program_location",
  {     message__message__du_name_ordered_program_location_0 },
  {     message__message__du_ptag_ordered_program_location_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  message__message__functor_number_map_program_location_0
};

void MR_CALL 
message____Compare____message_level_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
message____Unify____message_level_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
message____Compare____message_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      message____Compare____program_location_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        message____Compare____message_type_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

void MR_CALL 
message____Compare____program_location_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_45 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_46 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_45 == CastY_46);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

                  mdbcomp__program_representation____Compare____string_proc_label_0_0(HeadVar__1_1, Var_56, ArgY1_5);
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_18;

                  mdbcomp__program_representation____Compare____string_proc_label_0_0(&SubResult1_18, Var_55, ArgY1_17);
                  succeeded = (SubResult1_18 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_18;
                  else
                    mdbcomp__goal_path____Compare____reverse_goal_path_0_0(HeadVar__1_1, Var_54, ArgY2_20);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer Var_57 = (MR_Integer) (Var_52);
                  MR_Integer Var_58 = (MR_Integer) (ArgY1_33);

                  succeeded = (Var_57 < Var_58);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_57 > Var_58);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer Var_59 = (MR_Integer) (Var_53);
                  MR_Integer Var_60 = (MR_Integer) (ArgY1_44);

                  succeeded = (Var_59 < Var_60);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_59 > Var_60);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
message____Compare____message_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_30 == CastY_31);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer Var_4;
      MR_Integer Var_5;

      message____Index____message_type_0_0(HeadVar__2_2, &Var_4);
      message____Index____message_type_0_0(HeadVar__3_3, &Var_5);
      succeeded = (Var_4 < Var_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_4 > Var_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
        {
          MR_Word Var_6;

          switch (MR_tag((MR_Word) HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__2_2)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    Var_6 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
                MR_Integer ArgY1_8;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1);
                if (succeeded)
                {
                  ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  succeeded = (ArgX1_7 < ArgY1_8);
                  if (succeeded)
                    Var_6 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX1_7 > ArgY1_8);
                    if (succeeded)
                      Var_6 = (MR_Integer) 2;
                    else
                      Var_6 = (MR_Integer) 0;
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
                MR_Integer ArgY1_10;

                succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  succeeded = (ArgX1_9 < ArgY1_10);
                  if (succeeded)
                    Var_6 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (ArgX1_9 > ArgY1_10);
                    if (succeeded)
                      Var_6 = (MR_Integer) 2;
                    else
                      Var_6 = (MR_Integer) 0;
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_12;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
                    if (succeeded)
                    {
                      ArgY1_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_11 < ArgY1_12);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_11 > ArgY1_12);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_14;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      ArgY1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      succeeded = (ArgX1_13 < ArgY1_14);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (ArgX1_13 > ArgY1_14);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer ArgX1_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_Integer ArgY1_16;
                    MR_Integer ArgX2_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                    MR_Integer ArgY2_19;
                    MR_Word SubResult1_17;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
                    if (succeeded)
                    {
                      ArgY1_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      ArgY2_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                      succeeded = (ArgX1_15 < ArgY1_16);
                      if (succeeded)
                      {
                        SubResult1_17 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX1_15 > ArgY1_16);
                        if (succeeded)
                        {
                          SubResult1_17 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult1_17 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        Var_6 = SubResult1_17;
                      else
                      {
                        succeeded = (ArgX2_18 < ArgY2_19);
                        if (succeeded)
                          Var_6 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_18 > ArgY2_19);
                          if (succeeded)
                            Var_6 = (MR_Integer) 2;
                          else
                            Var_6 = (MR_Integer) 0;
                        }
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word ArgX1_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                    MR_Word ArgY1_21;
                    MR_Integer Var_43;
                    MR_Integer Var_44;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (succeeded)
                    {
                      ArgY1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 7);
                      Var_43 = (MR_Integer) (ArgX1_20);
                      Var_44 = (MR_Integer) (ArgY1_21);
                      succeeded = (Var_43 < Var_44);
                      if (succeeded)
                        Var_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_43 > Var_44);
                        if (succeeded)
                          Var_6 = (MR_Integer) 2;
                        else
                          Var_6 = (MR_Integer) 0;
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_String ArgX1_22 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_23;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      ArgY1_23 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_22, ArgY1_23);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_String ArgX1_24 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_25;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
                    if (succeeded)
                    {
                      ArgY1_25 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_24, ArgY1_25);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_String ArgX1_26 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_27;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      ArgY1_27 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_26, ArgY1_27);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    MR_String ArgX1_28 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                    MR_String ArgY1_29;

                    succeeded = ((((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      ArgY1_29 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                      mercury__private_builtin__builtin_compare_string_3_p_0(&Var_6, ArgX1_28, ArgY1_29);
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
          if (succeeded)
            *HeadVar__1_1 = Var_6;
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
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 2;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 6;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 9;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 13;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 14;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 3;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 4;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 5;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 7;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 8;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 10;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 11;
          break;
        case (MR_Integer) 6:
          *HeadVar__2_2 = (MR_Integer) 12;
          break;
        case (MR_Integer) 7:
          *HeadVar__2_2 = (MR_Integer) 15;
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
message____Unify____message_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = message____Unify____program_location_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = message____Unify____message_type_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
message____Unify____program_location_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mdbcomp__program_representation____Unify____string_proc_label_0_0(ArgX1_5, ArgY1_6);
              if (succeeded)
                succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(ArgX2_7, ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Integer Var_20;
            MR_Integer Var_21;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              Var_20 = (MR_Integer) (ArgX1_9);
              Var_21 = (MR_Integer) (ArgY1_10);
              succeeded = (Var_20 == Var_21);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_12;
            MR_Integer Var_22;
            MR_Integer Var_23;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              Var_22 = (MR_Integer) (ArgX1_11);
              Var_23 = (MR_Integer) (ArgY1_12);
              succeeded = (Var_22 == Var_23);
            }
          }
          break;
      }
    return succeeded;
  }
}

MR_bool MR_CALL 
message____Unify____message_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_37 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_38 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_37 == CastY_38);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_16 == CastX_15);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_24 == CastX_23);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_31 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_32 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_32 == CastX_31);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_34 == CastX_33);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_9 == ArgY1_10);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer ArgX1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_11 == ArgY1_12);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (ArgX1_13 == ArgY1_14);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgX1_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Integer ArgY1_18;
                MR_Integer ArgX2_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (ArgX1_17 == ArgY1_18);
                  if (succeeded)
                    succeeded = (ArgX2_19 == ArgY2_20);
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ArgX1_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
                MR_Word ArgY1_22;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 7);
                  succeeded = (ArgX1_21 == ArgY1_22);
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String ArgX1_25 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_26;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_26 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_25, ArgY1_26) == 0);
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_String ArgX1_27 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_28;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_28 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_27, ArgY1_28) == 0);
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_String ArgX1_29 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_30;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  ArgY1_30 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_29, ArgY1_30) == 0);
                }
              }
              break;
            case (MR_Integer) 7:
              {
                MR_String ArgX1_35 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_36;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
                if (succeeded)
                {
                  ArgY1_36 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_35, ArgY1_36) == 0);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
message__unsafe_set_verbosity_level_mut_1_p_0(
  MR_Integer X_1)
{
  {
{
#define MR_PROC_LABEL message__unsafe_set_verbosity_level_mut_1_p_0

	MR_Integer X;

	X =  X_1 ;
		{
message__mutable_variable_verbosity_level_mut = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
message__unsafe_get_verbosity_level_mut_1_p_0(
  MR_Integer * X_1)
{
  {
{
#define MR_PROC_LABEL message__unsafe_get_verbosity_level_mut_1_p_0

	MR_Integer X;

		{
X = message__mutable_variable_verbosity_level_mut;


		;}
#undef MR_PROC_LABEL
	 *X_1  = X;
}
  }
}

static void MR_CALL 
message__unlock_verbosity_level_mut_0_p_0(void)
{
  {
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
  MR_Word Stream_5,
  MR_Word Message_6)
{
  {
    MR_bool succeeded;
    MR_Word Level_8;
    MR_Integer VerbosityLevel_9;
    MR_Word Type_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Message_6, (MR_Integer) 1))));
    MR_Integer Var_14;

    switch (MR_tag((MR_Word) Type_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Type_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            Level_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            Level_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            Level_8 = (MR_Integer) 2;
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            Level_8 = (MR_Integer) 3;
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        Level_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Level_8 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            Level_8 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            Level_8 = (MR_Integer) 2;
            break;
          case (MR_Integer) 7:
            Level_8 = (MR_Integer) 3;
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
	 VerbosityLevel_9  = X;
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
    Var_14 = ((&message_vector_common_1[4 + Level_8]))->message__vector_common_type_1_0__vct_1_f_0;
    succeeded = (Var_14 <= VerbosityLevel_9);
    if (succeeded)
    {
      MR_String MessageStr_10;

      message__message_to_string_2_p_0(Message_6, &MessageStr_10);
      mercury__io__write_string_4_p_0(Stream_5, MessageStr_10);
      mercury__io__nl_3_p_0(Stream_5);
    }
  }
}

MR_Integer MR_CALL 
message__default_verbosity_level_0_f_0(void)
{
  {
    return (MR_Integer) 2;
  }
}

void MR_CALL 
message__set_verbosity_level_3_p_0(
  MR_Integer VerbosityLevel_4)
{
  {
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

	X =  VerbosityLevel_4 ;
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
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    message__write_out_message_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
message__write_out_messages_4_p_0(
  MR_Word Stream_5,
  MR_Word Messages_6)
{
  {
    MR_Word Var_10;
    MR_Box conv0_STATE_VARIABLE_IO_9;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&message_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (message__write_out_messages_4_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Stream_5));
    }
    mercury__cord__foldl_pred_4_p_2((MR_Word) (&message__message__type_ctor_info_message_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_10, Messages_6, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_9);
  }
}

MR_Integer MR_CALL 
message__indent_size_1_f_0(
  MR_Integer N_3)
{
  {
    MR_Integer HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) 2 * (MR_Unsigned) N_3);

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
message__nl_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
    return HeadVar__1_1;
  }
}

MR_Word MR_CALL 
message__nl_indent_1_f_0(
  MR_Integer N_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_5;

    Var_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
    Var_5 = message__indent_1_f_0(N_3);
    HeadVar__2_2 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_4, Var_5);
    return HeadVar__2_2;
  }
}

void MR_CALL 
message__append_message_4_p_0(
  MR_Word Location_5,
  MR_Word MessageType_6,
  MR_Word STATE_VARIABLE_Messages_0_9,
  MR_Word * STATE_VARIABLE_Messages_10)
{
  {
    MR_Word Message_8;

    {
      Message_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Message_8, 0) = ((MR_Box) (Location_5));
      MR_hl_field(MR_mktag(0), Message_8, 1) = ((MR_Box) (MessageType_6));
    }
    *STATE_VARIABLE_Messages_10 = mercury__cord__snoc_2_f_0((MR_Word) (&message__message__type_ctor_info_message_0), STATE_VARIABLE_Messages_0_9, ((MR_Box) (Message_8)));
  }
}

void MR_CALL 
message__message_to_string_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * String_5)
{
  {
    MR_Word Location_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word MessageType_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word LocationString_6;
    MR_Word LevelString_8;
    MR_Word MessageStr_9;
    MR_Word Cord_10;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;

    message__location_to_string_3_p_0((MR_Integer) 1, Location_3, &LocationString_6);
    switch (MR_tag((MR_Word) MessageType_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(MessageType_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Info")));
            }
            break;
          case (MR_Integer) 2:
            {
              LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Notice")));
            }
            break;
          case (MR_Integer) 3:
            {
              LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Warning")));
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            {
              LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Error")));
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Info")));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), MessageType_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Info")));
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            {
              LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Notice")));
            }
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            {
              LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Warning")));
            }
            break;
          case (MR_Integer) 7:
            {
              LevelString_8 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Error")));
            }
            break;
        }
        break;
    }
    MessageStr_9 = message__message_type_to_string_1_f_0(MessageType_4);
    Var_13 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) ":\n")));
    Var_17 = message__indent_1_f_0((MR_Integer) 1);
    Var_20 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
    Var_19 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MessageStr_9, Var_20);
    Var_16 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_17, Var_19);
    Var_15 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LocationString_6, Var_16);
    Var_12 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_13, Var_15);
    Cord_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LevelString_8, Var_12);
    Var_22 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Cord_10);
    mercury__string__append_list_2_p_0(Var_22, String_5);
  }
}

static MR_Word MR_CALL 
message__message_type_to_string_1_f_0(
  MR_Word MessageType_3)
{
  {
    MR_Word Cord_4;
    MR_String String_5;

    switch (MR_tag((MR_Word) MessageType_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(MessageType_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            String_5 = (MR_String) "Found candidate conjunction";
            break;
          case (MR_Integer) 1:
            String_5 = (MR_String) "Found pushed conjuncts above callsite threshold";
            break;
          case (MR_Integer) 2:
            String_5 = (MR_String) "Parallelising call pairs that have more than one dependent variable is not yet supported.";
            break;
          case (MR_Integer) 3:
            String_5 = (MR_String) "Could not look up proc defn, perhaps this procedure is built-in";
            break;
          case (MR_Integer) 4:
            String_5 = (MR_String) "extra proc dynamics for a clique proc are not currently handled.";
            break;
          case (MR_Integer) 5:
            String_5 = (MR_String) "Cannot lookup coverage points";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Num_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MessageType_3, (MR_Integer) 0))));
          MR_String Var_131;
          MR_String Var_138;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&message_scalar_common_2[0]), Num_6, &Var_131);
          Var_138 = mercury__string__f_43_43_2_f_0(Var_131, (MR_String) " conjuncts above callsite threshold");
          String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Found ", Var_138);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Num_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), MessageType_3, (MR_Integer) 0))));
          MR_String Var_111;
          MR_String Var_118;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&message_scalar_common_2[0]), Num_62, &Var_111);
          Var_118 = mercury__string__f_43_43_2_f_0(Var_111, (MR_String) " partitions, this may reduce parallelism");
          String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Split conjunction into ", Var_118);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), MessageType_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Num_57 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), MessageType_3, (MR_Integer) 1))));
              MR_String Var_121;
              MR_String Var_128;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&message_scalar_common_2[0]), Num_57, &Var_121);
              Var_128 = mercury__string__f_43_43_2_f_0(Var_121, (MR_String) " conjunctions with a positive speedup due to parallelisation");
              String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Found ", Var_128);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CandidateConjuncts_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), MessageType_3, (MR_Integer) 1))));
              MR_String Var_100;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&message_scalar_common_2[0]), CandidateConjuncts_8, &Var_100);
              String_5 = mercury__string__f_43_43_2_f_0(Var_100, (MR_String) " conjunctions not parallelised: Seen duplicate instantiations");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer PartNum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), MessageType_3, (MR_Integer) 1))));
              MR_Integer NumCalls_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), MessageType_3, (MR_Integer) 2))));
              MR_String Var_80;
              MR_String Var_87;
              MR_String Var_89;
              MR_String Var_90;
              MR_String Var_97;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&message_scalar_common_2[0]), NumCalls_10, &Var_80);
              Var_87 = mercury__string__f_43_43_2_f_0(Var_80, (MR_String) " costly calls and cannot be parallelised");
              Var_89 = mercury__string__f_43_43_2_f_0((MR_String) " has only ", Var_87);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&message_scalar_common_2[0]), PartNum_9, &Var_90);
              Var_97 = mercury__string__f_43_43_2_f_0(Var_90, Var_89);
              String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Partition ", Var_97);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Detism_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), MessageType_3, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_String Var_32;
              MR_String Var_108;

              Var_32 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_detism_rep_0), ((MR_Box) (Detism_11)));
              Var_108 = mercury__string__f_43_43_2_f_0(Var_32, (MR_String) " goals amongst goals above the parallelisation overhead.");
              String_5 = mercury__string__f_43_43_2_f_0((MR_String) "There are ", Var_108);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String Error_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), MessageType_3, (MR_Integer) 1))));
              MR_String Var_23;

              Var_23 = mercury__string__f_43_43_2_f_0(Error_12, (MR_String) "\n  falling back to some other method");
              String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute procrep coverage annotation: ", Var_23);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String ErrorStr_67 = ((MR_String) ((MR_hl_field(MR_mktag(3), MessageType_3, (MR_Integer) 1))));

              String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute cost of recursive calls: ", ErrorStr_67);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String ErrorStr_72 = ((MR_String) ((MR_hl_field(MR_mktag(3), MessageType_3, (MR_Integer) 1))));

              String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Cannot compute the production or consumption time of a variable: ", ErrorStr_72);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String ErrorStr_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), MessageType_3, (MR_Integer) 1))));

              String_5 = mercury__string__f_43_43_2_f_0((MR_String) "Exception thrown: ", ErrorStr_13);
            }
            break;
        }
        break;
    }
    Cord_4 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (String_5)));
    return Cord_4;
  }
}

void MR_CALL 
message__location_to_string_3_p_0(
  MR_Integer Level_4,
  MR_Word Location_5,
  MR_Word * String_6)
{
  switch (MR_tag((MR_Word) Location_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ProcLabel_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Location_5, (MR_Integer) 0))));
        MR_String ProcLabelString_8;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;

        program_representation_utils__print_proc_label_to_string_2_p_0(ProcLabel_7, &ProcLabelString_8);
        Var_42 = message__indent_1_f_0(Level_4);
        Var_44 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Proc: ")));
        Var_47 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ProcLabelString_8)));
        Var_48 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
        Var_46 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_47, Var_48);
        Var_43 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_44, Var_46);
        *String_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_42, Var_43);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RevGoalPath_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Location_5, (MR_Integer) 1))));
        MR_Word FirstLine_10;
        MR_Word GoalPathString_11;
        MR_Word SecondLine_14;
        MR_Word Var_32;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word ProcLabel_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Location_5, (MR_Integer) 0))));

        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (ProcLabel_50));
        }
        message__location_to_string_3_p_0(Level_4, Var_32, &FirstLine_10);
        if ((RevGoalPath_9 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          GoalPathString_11 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Root goal")));
        }
        else
        {
          MR_Word Var_33;
          MR_Word Var_35;
          MR_String Var_36;

          Var_33 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "Goal: ")));
          Var_36 = mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(RevGoalPath_9);
          Var_35 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Var_36)));
          GoalPathString_11 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_33, Var_35);
        }
        Var_38 = message__indent_1_f_0(Level_4);
        Var_40 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "\n")));
        Var_39 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), GoalPathString_11, Var_40);
        SecondLine_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_38, Var_39);
        *String_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FirstLine_10, SecondLine_14);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Id_15;
        MR_String String0_16;
        MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Location_5, (MR_Integer) 0))));
        MR_Word Var_30;
        MR_Word Var_31;
        MR_String Var_66;

        Id_15 = (MR_Integer) (Var_25);
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&message_scalar_common_2[0]), Id_15, &Var_66);
        String0_16 = mercury__string__f_43_43_2_f_0((MR_String) "clique ", Var_66);
        Var_30 = message__indent_1_f_0(Level_4);
        Var_31 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (String0_16)));
        *String_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_30, Var_31);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word CSDPtr_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Location_5, (MR_Integer) 0))));
        MR_Integer CSDNum_18 = (MR_Integer) (CSDPtr_17);
        MR_Word Var_23;
        MR_Word Var_24;
        MR_String String0_51;
        MR_String Var_58;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&message_scalar_common_2[0]), CSDNum_18, &Var_58);
        String0_51 = mercury__string__f_43_43_2_f_0((MR_String) "call site dynamic ", Var_58);
        Var_23 = message__indent_1_f_0(Level_4);
        Var_24 = mercury__cord__singleton_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (String0_51)));
        *String_6 = mercury__cord__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, Var_24);
      }
      break;
  }
}

MR_Word MR_CALL 
message__indent_1_f_0(
  MR_Integer N_3)
{
  {
    MR_bool succeeded = (N_3 < (MR_Integer) 0);
    MR_Word Indent_4;

    if (succeeded)
    {
      mercury__require__error_1_p_0((MR_String) "automatic_parallelism: Negative indent");
    }
    else
    {
      succeeded = (N_3 == (MR_Integer) 0);
      if (succeeded)
      {
        Indent_4 = mercury__cord__empty_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
      }
      else
      {
        MR_Word Var_7;
        MR_Integer Var_8 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) 1);

        Var_7 = message__indent_1_f_0(Var_8);
        Indent_4 = mercury__cord__snoc_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_7, ((MR_Box) ((MR_String) "  ")));
      }
    }
    return Indent_4;
  }
}

MR_Integer MR_CALL 
message__message_level_to_int_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2 = ((&message_vector_common_1[0 + HeadVar__1_1]))->message__vector_common_type_1_0__vct_1_f_0;

    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
message__message_get_level_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Type_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) Type_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Type_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 2;
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Integer) 3;
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Type_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_Integer) 2;
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_Integer) 3;
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
message____Unify____message_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = message____Unify____message_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
message____Compare____message_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    message____Compare____message_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
message____Unify____message_level_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = message____Unify____message_level_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
message____Compare____message_level_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    message____Compare____message_level_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
message____Unify____message_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = message____Unify____message_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
message____Compare____message_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    message____Compare____message_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
message____Unify____program_location_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = message____Unify____program_location_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
message____Compare____program_location_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    message____Compare____program_location_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module message.
