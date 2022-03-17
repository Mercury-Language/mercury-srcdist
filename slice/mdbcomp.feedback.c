/*
** Automatically generated from `feedback.m'
** by the Mercury compiler,
** version rotd-2022-03-17
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


// :- module mdbcomp.feedback.
// :- implementation.

/*
INIT mercury__mdbcomp__feedback__init
ENDINIT
*/

#include "mdbcomp.feedback.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exception.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__maybe__pti_maybe_1__plain_mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0;

static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_component_wrapper_0[1];

static const MR_NotagFunctorDesc mdbcomp__feedback__mdbcomp__feedback__notag_functor_desc_feedback_component_wrapper_0;

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0;

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_0_0[2];

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_0_0[2];

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0;

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_0_0[1];

static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_0[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_0[1];

static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_0[1];

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_candidate_parallel_conjunctions_0_0[2];

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_candidate_parallel_conjunctions_0_0[2];

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_candidate_parallel_conjunctions_0_0;

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_candidate_parallel_conjunctions_0_0[1];

static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_candidate_parallel_conjunctions_0[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_candidate_parallel_conjunctions_0[1];

static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_candidate_parallel_conjunctions_0[1];

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_0[1];

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0;

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_1[1];

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1;

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_2[2];

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_2[2];

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2;

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3;

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_4[1];

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4;

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5;

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_6[2];

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_6[2];

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6;

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_7[1];

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_7[1];

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_7;

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_0[2];

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_1[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_2[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_3[4];

static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_read_error_0[4];

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_read_error_0[8];

static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_read_error_0[8];

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__feedback__maybe__pti_maybe_error_2__pseudo_1__plain_mdbcomp__feedback__type_ctor_info_feedback_read_error_0;

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0;

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_1[1];

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1;

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_2[1];

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2;

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_0[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_1[1];

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_2[1];

static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_write_result_0[3];

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_write_result_0[3];

static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_write_result_0[3];

static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__replace_feedback_candidate_parallel_conjunctions__299__1_2_p_0(
  MR_String ProfiledProgramName_5,
  MR_String HeadVar__2_13);

static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__293__1_2_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18);

static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__291__1_2_p_0(
  MR_String ProfiledProgramName_5,
  MR_String HeadVar__2_13);

static void MR_CALL 
mdbcomp__feedback__write_feedback_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_component_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_component_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_write_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdbcomp__feedback_scalar_common_1[7][2];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_2[1][3];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_3[3][1];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_4[2][5];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_5[1][8];




static /* final */ const MR_Box mdbcomp__feedback_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_component_wrapper_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1)),
    ((MR_Box) (&mdbcomp__feedback_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__feedback_scalar_common_2[0]))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_String) "candidate_parallel_conjunctions"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_String) "19"))
  },
};

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mdbcomp__feedback_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_3[3][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mdbcomp__feedback_scalar_common_1[5])))
  },
};

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_4[2][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__feedback__maybe__pti_maybe_1__plain_mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0)),
    ((MR_Box) (&mdbcomp__feedback__maybe__pti_maybe_1__plain_mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0))
  },
};

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdbcomp.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__maybe__pti_maybe_1__plain_mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0)
  }
};

static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_component_wrapper_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdbcomp__feedback__mdbcomp__feedback__notag_functor_desc_feedback_component_wrapper_0 = {
  (MR_String) "fcw_candidate_parallel_conjunctions",
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_component_wrapper_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_component_wrapper_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_component_wrapper_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_component_wrapper",
  { &mdbcomp__feedback__mdbcomp__feedback__notag_functor_desc_feedback_component_wrapper_0 },
  { &mdbcomp__feedback__mdbcomp__feedback__notag_functor_desc_feedback_component_wrapper_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_component_wrapper_0,

};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0)
  }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0)
};

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_0_0[2] = {
  (MR_String) "fi_profiled_program_name",
  (MR_String) "fi_maybe_candidate_parallel_conjunctions"
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0 = {
  (MR_String) "feedback_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_0_0,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0
};

static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0
};

static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_info_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_info_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_info",
  { mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_0 },
  { mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_0,

};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  {
    (MR_TypeInfo) (&mdbcomp__feedback__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0),
    (MR_TypeInfo) (&mdbcomp__feedback__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mdbcomp__feedback__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
  }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_candidate_parallel_conjunctions_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0),
  (MR_PseudoTypeInfo) (&mdbcomp__feedback__list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0)
};

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_candidate_parallel_conjunctions_0_0[2] = {
  (MR_String) "cpc_parameters",
  (MR_String) "cpc_conjunctions"
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_candidate_parallel_conjunctions_0_0 = {
  (MR_String) "feedback_info_candidate_parallel_conjunctions",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_candidate_parallel_conjunctions_0_0,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_candidate_parallel_conjunctions_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_candidate_parallel_conjunctions_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_candidate_parallel_conjunctions_0_0
};

static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_candidate_parallel_conjunctions_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_candidate_parallel_conjunctions_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_candidate_parallel_conjunctions_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_candidate_parallel_conjunctions_0_0
};

static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_candidate_parallel_conjunctions_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_info_candidate_parallel_conjunctions",
  { mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_candidate_parallel_conjunctions_0 },
  { mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_candidate_parallel_conjunctions_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_candidate_parallel_conjunctions_0,

};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0 = {
  (MR_String) "fre_open_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1 = {
  (MR_String) "fre_read_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_2[2] = {
  (MR_String) "fre_pe_message",
  (MR_String) "fre_pe_line_no"
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2 = {
  (MR_String) "fre_parse_error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_2,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3 = {
  (MR_String) "fre_unexpected_eof",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4 = {
  (MR_String) "fre_incorrect_version",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5 = {
  (MR_String) "fre_incorrect_first_line",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_6[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_6[2] = {
  (MR_String) "fre_ippn_expected",
  (MR_String) "fre_ippn_got"
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6 = {
  (MR_String) "fre_incorrect_profiled_program_name",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(6),
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_6,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_6,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_7[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_7[1] = {
  (MR_String) "fre_component_name"
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_7 = {
  (MR_String) "fre_repeated_component",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(7),
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_7,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_7,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_0[2] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_1[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_2[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_3[4] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_7
};

static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_read_error_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_read_error_0[8] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_7,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3
};

static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_read_error_0[8] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 7,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 6
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_read_error_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_read_error_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_read_error",
  { mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_read_error_0 },
  { mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_read_error_0 },
  (MR_Integer) 8,
  UINT16_C(12),
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_read_error_0,

};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__feedback__maybe__pti_maybe_error_2__pseudo_1__plain_mdbcomp__feedback__type_ctor_info_feedback_read_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0)
  }
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_read_result_1_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_read_result_1_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_read_result",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdbcomp__feedback__maybe__pti_maybe_error_2__pseudo_1__plain_mdbcomp__feedback__type_ctor_info_feedback_read_error_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0 = {
  (MR_String) "fwr_ok",
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

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1 = {
  (MR_String) "fwr_open_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2 = {
  (MR_String) "fwr_write_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_1[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_2[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2
};

static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_write_result_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_write_result_0[3] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2
};

static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_write_result_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_write_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_write_result_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_write_result_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_write_result",
  { mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_write_result_0 },
  { mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_write_result_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_write_result_0,

};

static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__replace_feedback_candidate_parallel_conjunctions__299__1_2_p_0(
  MR_String ProfiledProgramName_5,
  MR_String HeadVar__2_13)
{
  MR_bool succeeded = (strcmp(HeadVar__2_13, ProfiledProgramName_5) == 0);

  return succeeded;
}

static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__293__1_2_p_0(
  MR_Word HeadVar__1_17,
  MR_Word HeadVar__2_18)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdbcomp__feedback_scalar_common_1[0]), ((MR_Box) (HeadVar__1_17)), ((MR_Box) (HeadVar__2_18)));
  return succeeded;
}

static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__291__1_2_p_0(
  MR_String ProfiledProgramName_5,
  MR_String HeadVar__2_13)
{
  MR_bool succeeded = (strcmp(HeadVar__2_13, ProfiledProgramName_5) == 0);

  return succeeded;
}

void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_16 == CastY_17);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                mercury__io____Compare____error_0_0(HeadVar__1_1, Var_20, ArgY1_8);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                mercury__io____Compare____error_0_0(HeadVar__1_1, Var_21, ArgY1_15);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_write_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
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
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_7, ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__maybe____Compare____maybe_error_2_0(TypeInfo_for_T_6, (MR_Word) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__maybe____Unify____maybe_error_2_0(TypeInfo_for_T_5, (MR_Word) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_134 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_135 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_134 == CastY_135);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
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
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                mercury__io____Compare____error_0_0(HeadVar__1_1, Var_147, ArgY1_5);
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
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
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_150 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                mercury__io____Compare____error_0_0(HeadVar__1_1, Var_150, ArgY1_23);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
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
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Var_148 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_String Var_149 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String ArgY1_43 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_46 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_44;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_44, Var_149, ArgY1_43);
                        succeeded = (SubResult1_44 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_44;
                        else
                        {
                          succeeded = (Var_148 < ArgY2_46);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_148 > ArgY2_46);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
                        }
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
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_146 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String ArgY1_78 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_146, ArgY1_78);
                      }
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_144 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_String Var_145 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_String ArgY1_111 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_String ArgY2_114 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_112;

                        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_112, Var_145, ArgY1_111);
                        succeeded = (SubResult1_112 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_112;
                        else
                          mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_144, ArgY2_114);
                      }
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_151 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
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
                        MR_String ArgY1_133 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_151, ArgY1_133);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_23 == CastY_24);
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
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_16 == CastX_15);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_3, ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mercury__io____Unify____error_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_8;
              MR_Integer ArgX2_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
                if (succeeded)
                  succeeded = (ArgX2_9 == ArgY2_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_13, ArgY1_14) == 0);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_18;
              MR_String ArgX2_19 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_String ArgY2_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
                if (succeeded)
                  succeeded = (strcmp(ArgX2_19, ArgY2_20) == 0);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ArgX1_21 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_22 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_21, ArgY1_22) == 0);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__feedback_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_9_9;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&mdbcomp__feedback_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback____Compare____feedback_component_wrapper_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

    mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&mdbcomp__feedback_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_component_wrapper_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&mdbcomp__feedback_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

MR_String MR_CALL 
mdbcomp__feedback__feedback_version_0_f_0(void)
{
  return (MR_String) "19";
}

MR_String MR_CALL 
mdbcomp__feedback__feedback_first_line_0_f_0(void)
{
  return (MR_String) "Mercury Compiler Feedback";
}

void MR_CALL 
mdbcomp__feedback__actually_write_feedback_file_5_p_0(
  MR_Word Stream_6,
  MR_Word FeedbackInfo_7)
{
  MR_String ProfiledProgramName_9;
  MR_Word MaybeCandidateParallelConjs_10;
  MR_Word Components_14;
  MR_Word STATE_VARIABLE_RevComponents_29_29;

  ProfiledProgramName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), FeedbackInfo_7, (MR_Integer) 0))));
  MaybeCandidateParallelConjs_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FeedbackInfo_7, (MR_Integer) 1))));
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "Mercury Compiler Feedback");
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "19");
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_6, ProfiledProgramName_9);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  if ((MaybeCandidateParallelConjs_10 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_RevComponents_29_29 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Candidates_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCandidateParallelConjs_10, (MR_Integer) 0))));
    MR_Word CandComponent_13 = (MR_Word) (Candidates_12);

    {
      STATE_VARIABLE_RevComponents_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevComponents_29_29, 0) = ((MR_Box) (CandComponent_13));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevComponents_29_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  mercury__list__reverse_2_p_0((MR_Word) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_component_wrapper_0), STATE_VARIABLE_RevComponents_29_29, &Components_14);
  mercury__io__write_4_p_0((MR_Word) (&mdbcomp__feedback_scalar_common_1[1]), Stream_6, ((MR_Box) (Components_14)));
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
  mercury__io__close_output_3_p_0(Stream_6);
}

void MR_CALL 
mdbcomp__feedback__read_profiled_program_name_6_p_0(
  MR_Word MaybeExpectedProfiledProgramName_7,
  MR_Word Stream_8,
  MR_Word * Result_10)
{
  mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_102_105_108_101_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_51_93_95_48_6_p_0(MaybeExpectedProfiledProgramName_7, Stream_8, Result_10);
}

void MR_CALL 
mdbcomp__feedback__read_check_line_7_p_0(
  MR_String TestLine_8,
  MR_Word NotMatchError_9,
  MR_Word Stream_10,
  MR_Word * Result_12)
{
  mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0(TestLine_8, NotMatchError_9, Stream_10, Result_12);
}

void MR_CALL 
mdbcomp__feedback__maybe_read_5_p_0(
  MR_Word TypeInfo_for_A_15,
  MR_Word TypeInfo_for_B_16,
  MR_Word Pred_6,
  MR_Word Result0_7,
  MR_Word * Result_8)
{
  if (((MR_tag((MR_Word) Result0_7)) == (MR_Integer) 1))
    *Result_8 = Result0_7;
  else
  {
    MR_Box Acc_10 = (MR_hl_field(MR_mktag(0), Result0_7, (MR_Integer) 0));
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_6, (MR_Integer) 1))));
    MR_Box conv2_Result_8;
    MR_Box conv1_STATE_VARIABLE_IO_13;

    func_0(((MR_Box) (Pred_6)), Acc_10, &conv2_Result_8, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
    *Result_8 = ((MR_Word) (conv2_Result_8));
  }
}

static void MR_CALL 
mdbcomp__feedback__write_feedback_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  mdbcomp__feedback__actually_write_feedback_file_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
}

void MR_CALL 
mdbcomp__feedback__write_feedback_file_5_p_0(
  MR_String Path_6,
  MR_Word Feedback_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word PathResult_10;

  mercury__io__open_output_4_p_0(Path_6, &PathResult_10);
  if (((MR_tag((MR_Word) PathResult_10)) == (MR_Integer) 1))
  {
    MR_Word ErrorCode_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PathResult_10, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ErrorCode_16));
    }
  }
  else
  {
    MR_Word PathStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PathResult_10, (MR_Integer) 0))));
    MR_Word ExcpResult_12;
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (mdbcomp__feedback__write_feedback_file_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (PathStream_11));
      MR_hl_field(MR_mktag(0), Var_20, 4) = ((MR_Box) (Feedback_7));
    }
    mercury__exception__try_io_4_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Var_20, &ExcpResult_12);
    if (((MR_tag((MR_Word) ExcpResult_12)) == (MR_Integer) 2))
    {
      MR_Word ExcpUniv_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ExcpResult_12, (MR_Integer) 0))));
      MR_Word Excp_15;
      MR_Box conv0_Excp_15;

      succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ExcpUniv_14, &conv0_Excp_15);
      if (succeeded)
      {
        Excp_15 = ((MR_Word) (conv0_Excp_15));
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Excp_15));
        }
      else
        {
          mercury__exception__rethrow_1_p_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), ExcpResult_12);
          return;
        }
    }
    else
      *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
mdbcomp__feedback__read_or_create_feedback_file_5_p_0(
  MR_String Path_6,
  MR_String ExpectedProfiledProgramName_7,
  MR_Word * FeedbackResult_8)
{
  MR_Word ReadResult_10;
  MR_Word Var_23;

  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (ExpectedProfiledProgramName_7));
  }
  mdbcomp__feedback__read_feedback_file_5_p_0(Path_6, Var_23, &ReadResult_10);
  if (((MR_tag((MR_Word) ReadResult_10)) == (MR_Integer) 1))
  {
    MR_Word Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadResult_10, (MR_Integer) 0))));

    switch (MR_tag((MR_Word) Error_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *FeedbackResult_8 = ReadResult_10;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (ExpectedProfiledProgramName_7));
            MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *FeedbackResult_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_25));
          }
        }
        break;
      case (MR_Integer) 2:
        *FeedbackResult_8 = ReadResult_10;
        break;
      case (MR_Integer) 3:
        *FeedbackResult_8 = ReadResult_10;
        break;
    }
  }
  else
    *FeedbackResult_8 = ReadResult_10;
}

void MR_CALL 
mdbcomp__feedback__read_feedback_file_5_p_0(
  MR_String Path_6,
  MR_Word MaybeExpectedProfiledProgramName_7,
  MR_Word * ResultFeedbackInfo_8)
{
  MR_Word PathResult_10;

  mercury__io__open_input_4_p_0(Path_6, &PathResult_10);
  if (((MR_tag((MR_Word) PathResult_10)) == (MR_Integer) 1))
  {
    MR_Word ErrorCode_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PathResult_10, (MR_Integer) 0))));
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (ErrorCode_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *ResultFeedbackInfo_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_17));
    }
  }
  else
  {
    MR_Word PathStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PathResult_10, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_Result_21_21;

    mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0((MR_String) "Mercury Compiler Feedback", (MR_Word) ((MR_Unsigned) 4U), PathStream_11, &STATE_VARIABLE_Result_21_21);
    if (((MR_tag((MR_Word) STATE_VARIABLE_Result_21_21)) == (MR_Integer) 1))
    {
      MR_Word STATE_VARIABLE_Result_24_24 = STATE_VARIABLE_Result_21_21;
      MR_Word STATE_VARIABLE_Result_30_30 = (MR_Word) (STATE_VARIABLE_Result_24_24);

      *ResultFeedbackInfo_8 = (MR_Word) (STATE_VARIABLE_Result_30_30);
    }
    else
    {
      MR_Word STATE_VARIABLE_Result_24_84;

      mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0((MR_String) "19", (MR_Word) (MR_mkword(MR_mktag(3), &mdbcomp__feedback_scalar_common_1[6])), PathStream_11, &STATE_VARIABLE_Result_24_84);
      if (((MR_tag((MR_Word) STATE_VARIABLE_Result_24_84)) == (MR_Integer) 1))
      {
        MR_Word STATE_VARIABLE_Result_30_86 = (MR_Word) (STATE_VARIABLE_Result_24_84);

        *ResultFeedbackInfo_8 = (MR_Word) (STATE_VARIABLE_Result_30_86);
      }
      else
      {
        MR_Word STATE_VARIABLE_Result_30_88;

        mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_102_105_108_101_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_51_93_95_48_6_p_0(MaybeExpectedProfiledProgramName_7, PathStream_11, &STATE_VARIABLE_Result_30_88);
        if (((MR_tag((MR_Word) STATE_VARIABLE_Result_30_88)) == (MR_Integer) 1))
          *ResultFeedbackInfo_8 = (MR_Word) (STATE_VARIABLE_Result_30_88);
        else
        {
          MR_String Acc_79 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Result_30_88, (MR_Integer) 0))));

          mdbcomp__feedback__read_all_feedback_data_5_p_0(PathStream_11, Acc_79, ResultFeedbackInfo_8);
        }
      }
    }
    mercury__io__close_input_3_p_0(PathStream_11);
  }
}

void MR_CALL 
mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_102_105_108_101_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_51_93_95_48_6_p_0(
  MR_Word MaybeExpectedProfiledProgramName_7,
  MR_Word Stream_8,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_Word LineResult_12;

  mercury__io__read_line_as_string_4_p_0(Stream_8, &LineResult_12);
  switch (MR_tag((MR_Word) LineResult_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_10 = (MR_Word) (MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_3[0]));
      break;
    case (MR_Integer) 1:
      {
        MR_String String_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), LineResult_12, (MR_Integer) 0))));
        MR_String ActualProfiledProgramName_14;

        ActualProfiledProgramName_14 = mercury__string__strip_1_f_0(String_13);
        if ((MaybeExpectedProfiledProgramName_7 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *Result_10 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ActualProfiledProgramName_14));
          }
        else
        {
          MR_String ExpectedProfiledProgramName_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeExpectedProfiledProgramName_7, (MR_Integer) 0))));

          succeeded = (strcmp(ActualProfiledProgramName_14, ExpectedProfiledProgramName_15) == 0);
          if (succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *Result_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ActualProfiledProgramName_14));
            }
          else
          {
            MR_Word Var_22;

            {
              Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (ExpectedProfiledProgramName_15));
              MR_hl_field(MR_mktag(3), Var_22, 2) = ((MR_Box) (ActualProfiledProgramName_14));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
            }
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LineResult_12, (MR_Integer) 0))));
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_20, 0) = ((MR_Box) (Error_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
        }
      }
      break;
  }
}

void MR_CALL 
mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0(
  MR_String TestLine_8,
  MR_Word NotMatchError_9,
  MR_Word Stream_10,
  MR_Word * Result_12)
{
  MR_bool succeeded;
  MR_Word LineResult_14;

  mercury__io__read_line_as_string_4_p_0(Stream_10, &LineResult_14);
  switch (MR_tag((MR_Word) LineResult_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_12 = (MR_Word) (MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_3[0]));
      break;
    case (MR_Integer) 1:
      {
        MR_String Line_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), LineResult_14, (MR_Integer) 0))));

        succeeded = (strcmp(Line_15, TestLine_8) == 0);
        if (!(succeeded))
        {
          MR_String Var_25;

          Var_25 = mercury__string__f_43_43_2_f_0(TestLine_8, (MR_String) "\n");
          succeeded = (strcmp(Line_15, Var_25) == 0);
        }
        if (succeeded)
          *Result_12 = (MR_Word) (&mdbcomp__feedback_scalar_common_3[1]);
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NotMatchError_9));
          }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Error_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), LineResult_14, (MR_Integer) 0))));
        MR_Word Var_20;

        {
          Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_20, 0) = ((MR_Box) (Error_16));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
        }
      }
      break;
  }
}

void MR_CALL 
mdbcomp__feedback__read_all_feedback_data_5_p_0(
  MR_Word Stream_6,
  MR_String ProfiledProgramName_7,
  MR_Word * Result_8)
{
  MR_Word ReadResult_10;

  mercury__io__read_4_p_0((MR_Word) (&mdbcomp__feedback_scalar_common_1[1]), Stream_6, &ReadResult_10);
  switch (MR_tag((MR_Word) ReadResult_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Result_8 = (MR_Word) (MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_3[0]));
      break;
    case (MR_Integer) 1:
      {
        MR_Word Components_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadResult_10, (MR_Integer) 0))));
        MR_Word Info0_12;

        {
          Info0_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Info0_12, 0) = ((MR_Box) (ProfiledProgramName_7));
          MR_hl_field(MR_mktag(0), Info0_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        mdbcomp__feedback__add_feedback_components_3_p_0(Components_11, Info0_12, Result_8);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Error_13 = ((MR_String) ((MR_hl_field(MR_mktag(2), ReadResult_10, (MR_Integer) 0))));
        MR_Integer Line_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), ReadResult_10, (MR_Integer) 1))));
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (Error_13));
          MR_hl_field(MR_mktag(3), Var_18, 2) = ((MR_Box) (Line_14));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
        }
      }
      break;
  }
}

void MR_CALL 
mdbcomp__feedback__add_feedback_components_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Info_0_2,
  MR_Word * Result_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_3 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_Info_0_2));
      }
    else
    {
      MR_Word Wrapper_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Wrappers_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Candidates_11 = (MR_Word) (Wrapper_7);
      MR_Word MaybeCandidates0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_2, (MR_Integer) 1))));
      MR_String Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_2, (MR_Integer) 0))));

      if ((MaybeCandidates0_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word STATE_VARIABLE_Info_17_17;
        MR_Word Var_18;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_Info_0_2;

        {
          Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Candidates_11));
        }
        {
          STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (Var_19));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (Var_18));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Wrappers_8;
        next_value_of_STATE_VARIABLE_Info_0_2 = STATE_VARIABLE_Info_17_17;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Info_0_2 = next_value_of_STATE_VARIABLE_Info_0_2;
        continue;
      }
      else
        *Result_3 = (MR_Word) (MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_3[2]));
    }
    break;
  }
}

void MR_CALL 
mdbcomp__feedback__feedback_read_error_message_string_3_p_0(
  MR_String File_4,
  MR_Word Error_5,
  MR_String * Message_6)
{
  MR_String MessagePart_8;
  MR_String Var_47;
  MR_String Var_49;

  switch (MR_tag((MR_Word) Error_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Error_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MessagePart_8 = (MR_String) "Unexpected end of file";
          break;
        case (MR_Integer) 1:
          MessagePart_8 = (MR_String) "Incorrect file format";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Code_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Error_5, (MR_Integer) 0))));

        mercury__io__error_message_2_p_0(Code_7, &MessagePart_8);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Code_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Error_5, (MR_Integer) 0))));

        mercury__io__error_message_2_p_0(Code_39, &MessagePart_8);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Error_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ParseMessage_9 = ((MR_String) ((MR_hl_field(MR_mktag(3), Error_5, (MR_Integer) 1))));
            MR_Integer Line_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Error_5, (MR_Integer) 2))));
            MR_String Var_28;
            MR_String Var_30;

            Var_30 = mercury__string__string_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Line_10)));
            Var_28 = mercury__string__f_43_43_2_f_0((MR_String) " on line ", Var_30);
            MessagePart_8 = mercury__string__f_43_43_2_f_0(ParseMessage_9, Var_28);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Expected_11 = ((MR_String) ((MR_hl_field(MR_mktag(3), Error_5, (MR_Integer) 1))));

            MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "Incorrect file format version; expected ", Expected_11);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Got_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Error_5, (MR_Integer) 2))));
            MR_String Var_18;
            MR_String Var_20;
            MR_String Expected_37 = ((MR_String) ((MR_hl_field(MR_mktag(3), Error_5, (MR_Integer) 1))));
            MR_String Var_41;
            MR_String Var_43;
            MR_String Var_44;

            Var_41 = mercury__string__f_43_43_2_f_0(Got_12, (MR_String) "\'");
            Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "\' Got: \'", Var_41);
            Var_44 = mercury__string__f_43_43_2_f_0(Expected_37, Var_43);
            Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "Expected: \'", Var_44);
            Var_18 = mercury__string__f_43_43_2_f_0((MR_String) " is this the right feedback file\?\n", Var_20);
            MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "The name of the program the feedback is for didn\'t match,", Var_18);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String ComponentName_13 = ((MR_String) ((MR_hl_field(MR_mktag(3), Error_5, (MR_Integer) 1))));
            MR_String Var_15;

            Var_15 = mercury__string__f_43_43_2_f_0(ComponentName_13, (MR_String) " component");
            MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "File contains more than one ", Var_15);
          }
          break;
      }
      break;
  }
  Var_47 = mercury__string__f_43_43_2_f_0(MessagePart_8, (MR_String) "\n");
  Var_49 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_47);
  *Message_6 = mercury__string__f_43_43_2_f_0(File_4, Var_49);
}

static MR_bool MR_CALL 
mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdbcomp__feedback__IntroducedFrom__pred__replace_feedback_candidate_parallel_conjunctions__299__1_2_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0(
  MR_String ProfiledProgramName_5,
  MR_Word Data_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_bool succeeded;
  MR_Word Var_10;
  MR_String Var_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  MR_Word Var_15;
  MR_String Var_17;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ProfiledProgramName_5));
    MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_13));
  }
  mercury__require__expect_3_p_0(Var_10, (MR_String) "predicate \140mdbcomp.feedback.replace_feedback_candidate_parallel_conjunctions\'/4", (MR_String) "replacing candidate parallel conjunctions for wrong program");
  {
    Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (Data_6));
  }
  Var_17 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__293__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__291__1_2_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0(
  MR_String ProfiledProgramName_5,
  MR_Word Data_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_bool succeeded;
  MR_Word Var_10;
  MR_String Var_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  MR_Word Var_14;
  MR_Word Var_17;
  MR_Word Var_20;
  MR_String Var_23;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (ProfiledProgramName_5));
    MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_13));
  }
  mercury__require__expect_3_p_0(Var_10, (MR_String) "predicate \140mdbcomp.feedback.add_feedback_candidate_parallel_conjunctions\'/4", (MR_String) "adding candidate parallel conjunctions for wrong program");
  Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_4[1]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_2));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__require__expect_3_p_0(Var_14, (MR_String) "predicate \140mdbcomp.feedback.add_feedback_candidate_parallel_conjunctions\'/4", (MR_String) "overwriting old candidate_parallel_conjunctions data");
  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Data_6));
  }
  Var_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Info_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
  }
}

void MR_CALL 
mdbcomp__feedback__get_all_feedback_info_3_p_0(
  MR_Word Info_4,
  MR_String * ProfiledProgramName_5,
  MR_Word * MaybeCandidateParallelConjs_6)
{
  *ProfiledProgramName_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 0))));
  *MaybeCandidateParallelConjs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 1))));
}

MR_Word MR_CALL 
mdbcomp__feedback__get_feedback_candidate_parallel_conjunctions_1_f_0(
  MR_Word Info_3)
{
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 1))));

  return HeadVar__2_2;
}

MR_String MR_CALL 
mdbcomp__feedback__get_feedback_profiled_program_name_1_f_0(
  MR_Word Info_3)
{
  MR_String HeadVar__2_2 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_3, (MR_Integer) 0))));

  return HeadVar__2_2;
}

MR_Word MR_CALL 
mdbcomp__feedback__init_feedback_info_1_f_0(
  MR_String ProgramName_3)
{
  MR_Word HeadVar__2_2;

  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (ProgramName_3));
    MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_component_wrapper_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback____Unify____feedback_component_wrapper_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_component_wrapper_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback____Compare____feedback_component_wrapper_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback____Unify____feedback_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback____Compare____feedback_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback____Unify____feedback_read_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback____Compare____feedback_read_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback____Unify____feedback_read_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback____Compare____feedback_read_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_write_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdbcomp__feedback____Unify____feedback_write_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdbcomp__feedback____Compare____feedback_write_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdbcomp__feedback__init(void)
{
}

void mercury__mdbcomp__feedback__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_component_wrapper_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_result_1);
	MR_register_type_ctor_info(&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_write_result_0);
}

void mercury__mdbcomp__feedback__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdbcomp__feedback__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdbcomp.feedback.
