/*
** Automatically generated from `mdbcomp.feedback.m'
** by the Mercury compiler,
** version rotd-2017-07-24
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


/* :- module mdbcomp.feedback. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__feedback__init
ENDINIT
*/

#include "mdbcomp.feedback.mih"


#include "mdbcomp.mih"
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
#include "deconstruct.mih"
#include "enum.mih"
#include "exception.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




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
mdbcomp__feedback__IntroducedFrom__pred__replace_feedback_candidate_parallel_conjunctions__300__1_2_p_0(
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
  MR_String mdbcomp__feedback__HeadVar__2_13);

static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__294__1_2_p_0(
  MR_Word mdbcomp__feedback__HeadVar__1_17,
  MR_Word mdbcomp__feedback__HeadVar__2_18);

static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__292__1_2_p_0(
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
  MR_String mdbcomp__feedback__HeadVar__2_13);

static void MR_CALL 
mdbcomp__feedback__write_feedback_file_5_p_0_1(
  MR_Box mdbcomp__feedback__closure_arg,
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box * mdbcomp__feedback__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0_1(
  MR_Box mdbcomp__feedback__closure_arg);

static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_2(
  MR_Box mdbcomp__feedback__closure_arg);

static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_1(
  MR_Box mdbcomp__feedback__closure_arg);

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_component_wrapper_0_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_component_wrapper_0_0_10001(
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_0_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0_10001(
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0_10001(
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0_10001(
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3);

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3);

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box * mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3,
  MR_Box mdbcomp__feedback__wrapper_arg_4);

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_write_result_0_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2);

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0_10001(
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3);


static /* final */ const MR_Box mdbcomp__feedback_scalar_common_1[7][2];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_2[1][3];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_3[2][5];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_4[3][1];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_5[1][8];




static /* final */ const MR_Box mdbcomp__feedback_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_component_wrapper_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1)),
    ((MR_Box) (&mdbcomp__feedback_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__feedback_scalar_common_2[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "candidate_parallel_conjunctions"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "19"))
  },
};

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mdbcomp__feedback_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_3[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__feedback__maybe__pti_maybe_1__plain_mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0)),
    ((MR_Box) (&mdbcomp__feedback__maybe__pti_maybe_1__plain_mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0))
  },
};

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_4[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mdbcomp__feedback_scalar_common_1[5])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__maybe__pti_maybe_1__plain_mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0
  }
};

static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_component_wrapper_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdbcomp__feedback__mdbcomp__feedback__notag_functor_desc_feedback_component_wrapper_0 = {
  (MR_String) "fcw_candidate_parallel_conjunctions",
  (MR_PseudoTypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_component_wrapper_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_component_wrapper_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_component_wrapper_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_component_wrapper",
  {     &mdbcomp__feedback__mdbcomp__feedback__notag_functor_desc_feedback_component_wrapper_0 },
  {     &mdbcomp__feedback__mdbcomp__feedback__notag_functor_desc_feedback_component_wrapper_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_component_wrapper_0
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0
  }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0
};

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_0_0[2] = {
  (MR_String) "fi_profiled_program_name",
  (MR_String) "fi_maybe_candidate_parallel_conjunctions"
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0 = {
  (MR_String) "feedback_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_0_0,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0
};

static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_info_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_info_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_info",
  {     mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_0 },
  {     mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_0
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_candidate_parallel_conjunctions_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
};

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_candidate_parallel_conjunctions_0_0[2] = {
  (MR_String) "cpc_parameters",
  (MR_String) "cpc_conjunctions"
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_candidate_parallel_conjunctions_0_0 = {
  (MR_String) "feedback_info_candidate_parallel_conjunctions",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_candidate_parallel_conjunctions_0_0,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_candidate_parallel_conjunctions_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_candidate_parallel_conjunctions_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_candidate_parallel_conjunctions_0_0
};

static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_candidate_parallel_conjunctions_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_candidate_parallel_conjunctions_0_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_info_candidate_parallel_conjunctions",
  {     mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_candidate_parallel_conjunctions_0 },
  {     mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_candidate_parallel_conjunctions_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_candidate_parallel_conjunctions_0
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0 = {
  (MR_String) "fre_open_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1 = {
  (MR_String) "fre_read_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_2[2] = {
  (MR_String) "fre_pe_message",
  (MR_String) "fre_pe_line_no"
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2 = {
  (MR_String) "fre_parse_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_2,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3 = {
  (MR_String) "fre_unexpected_eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4 = {
  (MR_String) "fre_incorrect_version",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5 = {
  (MR_String) "fre_incorrect_first_line",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_6[2] = {
  (MR_String) "fre_ippn_expected",
  (MR_String) "fre_ippn_got"
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6 = {
  (MR_String) "fre_incorrect_profiled_program_name",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 6,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_6,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_6,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_7[1] = {
  (MR_String) "fre_component_name"
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_7 = {
  (MR_String) "fre_repeated_component",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 7,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_7,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_7,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_2
  },
  {
    (MR_Integer) 4,
    MR_SECTAG_REMOTE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_read_error_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_read_error_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_read_error",
  {     mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_read_error_0 },
  {     mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_read_error_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_read_error_0
};

static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__feedback__maybe__pti_maybe_error_2__pseudo_1__plain_mdbcomp__feedback__type_ctor_info_feedback_read_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0
  }
};

const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_read_result_1_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_read_result_1_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_read_result",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__feedback__maybe__pti_maybe_error_2__pseudo_1__plain_mdbcomp__feedback__type_ctor_info_feedback_read_error_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0 = {
  (MR_String) "fwr_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1 = {
  (MR_String) "fwr_open_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2 = {
  (MR_String) "fwr_write_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_write_result_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_write_result_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_write_result",
  {     mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_write_result_0 },
  {     mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_write_result_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_write_result_0
};

static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__replace_feedback_candidate_parallel_conjunctions__300__1_2_p_0(
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
  MR_String mdbcomp__feedback__HeadVar__2_13)
{
  {
    MR_bool mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__HeadVar__2_13, mdbcomp__feedback__ProfiledProgramName_5) == 0);

    return mdbcomp__feedback__succeeded;
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__294__1_2_p_0(
  MR_Word mdbcomp__feedback__HeadVar__1_17,
  MR_Word mdbcomp__feedback__HeadVar__2_18)
{
  {
    MR_bool mdbcomp__feedback__succeeded;

    {
      mdbcomp__feedback__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[0], ((MR_Box) (mdbcomp__feedback__HeadVar__1_17)), ((MR_Box) (mdbcomp__feedback__HeadVar__2_18)));
    }
    return mdbcomp__feedback__succeeded;
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__292__1_2_p_0(
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
  MR_String mdbcomp__feedback__HeadVar__2_13)
{
  {
    MR_bool mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__HeadVar__2_13, mdbcomp__feedback__ProfiledProgramName_5) == 0);

    return mdbcomp__feedback__succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0(
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
  MR_Word mdbcomp__feedback__HeadVar__2_2,
  MR_Word mdbcomp__feedback__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Integer mdbcomp__feedback__CastX_16 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
    MR_Integer mdbcomp__feedback__CastY_17 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_16 == mdbcomp__feedback__CastY_17);
    if (mdbcomp__feedback__succeeded)
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdbcomp__feedback__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdbcomp__feedback__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__Var_20, mdbcomp__feedback__ArgY1_8);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdbcomp__feedback__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdbcomp__feedback__ArgY1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__Var_21, mdbcomp__feedback__ArgY1_15);
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
mdbcomp__feedback____Unify____feedback_write_result_0_0(
  MR_Word mdbcomp__feedback__HeadVar__1_1,
  MR_Word mdbcomp__feedback__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Integer mdbcomp__feedback__CastX_9 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
    MR_Integer mdbcomp__feedback__CastY_10 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_9 == mdbcomp__feedback__CastY_10);
    if (mdbcomp__feedback__succeeded)
      mdbcomp__feedback__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mdbcomp__feedback__CastX_3 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
            MR_Integer mdbcomp__feedback__CastY_4 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

            mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastY_4 == mdbcomp__feedback__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdbcomp__feedback__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdbcomp__feedback__ArgY1_6;

            mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdbcomp__feedback__succeeded)
              {
                mdbcomp__feedback__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__ArgX1_5, mdbcomp__feedback__ArgY1_6);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdbcomp__feedback__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdbcomp__feedback__ArgY1_8;

            mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdbcomp__feedback__succeeded)
              {
                mdbcomp__feedback__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__ArgX1_7, mdbcomp__feedback__ArgY1_8);
                }
              }
          }
          break;
      }
    return mdbcomp__feedback__succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0(
  MR_Word mdbcomp__feedback__TypeInfo_for_T_6,
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
  MR_Word mdbcomp__feedback__HeadVar__2_2,
  MR_Word mdbcomp__feedback__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Word mdbcomp__feedback__Cast_HeadVar1_4 = mdbcomp__feedback__HeadVar__2_2;
    MR_Word mdbcomp__feedback__Cast_HeadVar2_5 = mdbcomp__feedback__HeadVar__3_3;

    {
      mercury__maybe____Compare____maybe_error_2_0(mdbcomp__feedback__TypeInfo_for_T_6, (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0, mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__Cast_HeadVar1_4, mdbcomp__feedback__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0(
  MR_Word mdbcomp__feedback__TypeInfo_for_T_5,
  MR_Word mdbcomp__feedback__HeadVar__1_1,
  MR_Word mdbcomp__feedback__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Word mdbcomp__feedback__Cast_HeadVar1_3 = mdbcomp__feedback__HeadVar__1_1;
    MR_Word mdbcomp__feedback__Cast_HeadVar2_4 = mdbcomp__feedback__HeadVar__2_2;

    {
      mdbcomp__feedback__succeeded = mercury__maybe____Unify____maybe_error_2_0(mdbcomp__feedback__TypeInfo_for_T_5, (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0, mdbcomp__feedback__Cast_HeadVar1_3, mdbcomp__feedback__Cast_HeadVar2_4);
    }
    return mdbcomp__feedback__succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0(
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
  MR_Word mdbcomp__feedback__HeadVar__2_2,
  MR_Word mdbcomp__feedback__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Integer mdbcomp__feedback__CastX_134 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
    MR_Integer mdbcomp__feedback__CastY_135 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_134 == mdbcomp__feedback__CastY_135);
    if (mdbcomp__feedback__succeeded)
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdbcomp__feedback__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdbcomp__feedback__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdbcomp__feedback__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__Var_147, mdbcomp__feedback__ArgY1_5);
                  }
                }
                break;
              case (MR_Integer) 2:
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdbcomp__feedback__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdbcomp__feedback__ArgY1_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__Var_150, mdbcomp__feedback__ArgY1_23);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdbcomp__feedback__Var_148 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
                MR_String mdbcomp__feedback__Var_149 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String mdbcomp__feedback__ArgY1_43 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mdbcomp__feedback__ArgY2_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mdbcomp__feedback__Var_46;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__feedback__Var_46, mdbcomp__feedback__Var_149, mdbcomp__feedback__ArgY1_43);
                          }
                          mdbcomp__feedback__succeeded = (mdbcomp__feedback__Var_46 == (MR_Integer) 0);
                          mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
                          if (mdbcomp__feedback__succeeded)
                            *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__Var_46;
                          else
                            {
                              mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__Var_148, mdbcomp__feedback__ArgY2_45);
                            }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mdbcomp__feedback__Var_146 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String mdbcomp__feedback__ArgY1_78 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__Var_146, mdbcomp__feedback__ArgY1_78);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String mdbcomp__feedback__Var_144 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
                MR_String mdbcomp__feedback__Var_145 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String mdbcomp__feedback__ArgY1_111 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
                          MR_String mdbcomp__feedback__ArgY2_113 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word mdbcomp__feedback__Var_114;

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__feedback__Var_114, mdbcomp__feedback__Var_145, mdbcomp__feedback__ArgY1_111);
                          }
                          mdbcomp__feedback__succeeded = (mdbcomp__feedback__Var_114 == (MR_Integer) 0);
                          mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
                          if (mdbcomp__feedback__succeeded)
                            *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__Var_114;
                          else
                            {
                              mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__Var_144, mdbcomp__feedback__ArgY2_113);
                            }
                        }
                        break;
                      case (MR_Integer) 3:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String mdbcomp__feedback__Var_151 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_String mdbcomp__feedback__ArgY1_133 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__Var_151, mdbcomp__feedback__ArgY1_133);
                          }
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
}

MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0(
  MR_Word mdbcomp__feedback__HeadVar__1_1,
  MR_Word mdbcomp__feedback__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Integer mdbcomp__feedback__CastX_23 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
    MR_Integer mdbcomp__feedback__CastY_24 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_23 == mdbcomp__feedback__CastY_24);
    if (mdbcomp__feedback__succeeded)
      mdbcomp__feedback__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdbcomp__feedback__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdbcomp__feedback__CastX_11 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
                MR_Integer mdbcomp__feedback__CastY_12 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

                mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastY_12 == mdbcomp__feedback__CastX_11);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdbcomp__feedback__CastX_15 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
                MR_Integer mdbcomp__feedback__CastY_16 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

                mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastY_16 == mdbcomp__feedback__CastX_15);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdbcomp__feedback__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdbcomp__feedback__ArgY1_4;

            mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdbcomp__feedback__succeeded)
              {
                mdbcomp__feedback__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__ArgX1_3, mdbcomp__feedback__ArgY1_4);
                }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdbcomp__feedback__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdbcomp__feedback__ArgY1_6;

            mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdbcomp__feedback__succeeded)
              {
                mdbcomp__feedback__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__ArgX1_5, mdbcomp__feedback__ArgY1_6);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mdbcomp__feedback__ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdbcomp__feedback__ArgY1_8;
                MR_Integer mdbcomp__feedback__ArgX2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 2)));
                MR_Integer mdbcomp__feedback__ArgY2_10;

                mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdbcomp__feedback__succeeded)
                  {
                    mdbcomp__feedback__ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
                    mdbcomp__feedback__ArgY2_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
                    mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__ArgX1_7, mdbcomp__feedback__ArgY1_8) == 0);
                    if (mdbcomp__feedback__succeeded)
                      mdbcomp__feedback__succeeded = (mdbcomp__feedback__ArgX2_9 == mdbcomp__feedback__ArgY2_10);
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mdbcomp__feedback__ArgX1_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdbcomp__feedback__ArgY1_14;

                mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdbcomp__feedback__succeeded)
                  {
                    mdbcomp__feedback__ArgY1_14 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
                    mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__ArgX1_13, mdbcomp__feedback__ArgY1_14) == 0);
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String mdbcomp__feedback__ArgX1_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdbcomp__feedback__ArgY1_18;
                MR_String mdbcomp__feedback__ArgX2_19 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 2)));
                MR_String mdbcomp__feedback__ArgY2_20;

                mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mdbcomp__feedback__succeeded)
                  {
                    mdbcomp__feedback__ArgY1_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
                    mdbcomp__feedback__ArgY2_20 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
                    mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__ArgX1_17, mdbcomp__feedback__ArgY1_18) == 0);
                    if (mdbcomp__feedback__succeeded)
                      mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__ArgX2_19, mdbcomp__feedback__ArgY2_20) == 0);
                  }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String mdbcomp__feedback__ArgX1_21 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mdbcomp__feedback__ArgY1_22;

                mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (mdbcomp__feedback__succeeded)
                  {
                    mdbcomp__feedback__ArgY1_22 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
                    mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__ArgX1_21, mdbcomp__feedback__ArgY1_22) == 0);
                  }
              }
              break;
          }
          break;
      }
    return mdbcomp__feedback__succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0(
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
  MR_Word mdbcomp__feedback__HeadVar__2_2,
  MR_Word mdbcomp__feedback__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Integer mdbcomp__feedback__CastX_9 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
    MR_Integer mdbcomp__feedback__CastY_10 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_9 == mdbcomp__feedback__CastY_10);
    if (mdbcomp__feedback__succeeded)
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mdbcomp__feedback__ArgX1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
        MR_String mdbcomp__feedback__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdbcomp__feedback__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__feedback__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdbcomp__feedback__Var_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__feedback__Var_8, mdbcomp__feedback__ArgX1_4, mdbcomp__feedback__ArgY1_5);
        }
        mdbcomp__feedback__succeeded = (mdbcomp__feedback__Var_8 == (MR_Integer) 0);
        mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
        if (mdbcomp__feedback__succeeded)
          *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[0], mdbcomp__feedback__HeadVar__1_1, ((MR_Box) (mdbcomp__feedback__ArgX2_6)), ((MR_Box) (mdbcomp__feedback__ArgY2_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_0_0(
  MR_Word mdbcomp__feedback__HeadVar__1_1,
  MR_Word mdbcomp__feedback__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Integer mdbcomp__feedback__CastX_7 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
    MR_Integer mdbcomp__feedback__CastY_8 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_7 == mdbcomp__feedback__CastY_8);
    if (mdbcomp__feedback__succeeded)
      mdbcomp__feedback__succeeded = MR_TRUE;
    else
      {
        MR_Word mdbcomp__feedback__TypeInfo_9_9;
        MR_String mdbcomp__feedback__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mdbcomp__feedback__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdbcomp__feedback__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdbcomp__feedback__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

        mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__ArgX1_3, mdbcomp__feedback__ArgY1_4) == 0);
        if (mdbcomp__feedback__succeeded)
          {
            mdbcomp__feedback__TypeInfo_9_9 = (MR_Word) &mdbcomp__feedback_scalar_common_1[0];
            {
              mdbcomp__feedback__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__feedback__TypeInfo_9_9, ((MR_Box) (mdbcomp__feedback__ArgX2_5)), ((MR_Box) (mdbcomp__feedback__ArgY2_6)));
            }
          }
      }
    return mdbcomp__feedback__succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback____Compare____feedback_component_wrapper_0_0(
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
  MR_Word mdbcomp__feedback__HeadVar__2_2,
  MR_Word mdbcomp__feedback__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Integer mdbcomp__feedback__CastX_6 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
    MR_Integer mdbcomp__feedback__CastY_7 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_6 == mdbcomp__feedback__CastY_7);
    if (mdbcomp__feedback__succeeded)
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdbcomp__feedback__ArgX1_4 = (MR_Word) mdbcomp__feedback__HeadVar__2_2;
        MR_Word mdbcomp__feedback__ArgY1_5 = (MR_Word) mdbcomp__feedback__HeadVar__3_3;

        {
          mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__ArgX1_4, mdbcomp__feedback__ArgY1_5);
        }
      }
  }
}

void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0(
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
  MR_Word mdbcomp__feedback__HeadVar__2_2,
  MR_Word mdbcomp__feedback__HeadVar__3_3)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Integer mdbcomp__feedback__CastX_9 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
    MR_Integer mdbcomp__feedback__CastY_10 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_9 == mdbcomp__feedback__CastY_10);
    if (mdbcomp__feedback__succeeded)
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdbcomp__feedback__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdbcomp__feedback__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdbcomp__feedback__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdbcomp__feedback__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdbcomp__feedback__Var_8;

        {
          mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0(&mdbcomp__feedback__Var_8, mdbcomp__feedback__ArgX1_4, mdbcomp__feedback__ArgY1_5);
        }
        mdbcomp__feedback__succeeded = (mdbcomp__feedback__Var_8 == (MR_Integer) 0);
        mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
        if (mdbcomp__feedback__succeeded)
          *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__Var_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[4], mdbcomp__feedback__HeadVar__1_1, ((MR_Box) (mdbcomp__feedback__ArgX2_6)), ((MR_Box) (mdbcomp__feedback__ArgY2_7)));
            }
          }
      }
  }
}

MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_component_wrapper_0_0(
  MR_Word mdbcomp__feedback__HeadVar__1_1,
  MR_Word mdbcomp__feedback__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Integer mdbcomp__feedback__CastX_5 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
    MR_Integer mdbcomp__feedback__CastY_6 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_5 == mdbcomp__feedback__CastY_6);
    if (mdbcomp__feedback__succeeded)
      mdbcomp__feedback__succeeded = MR_TRUE;
    else
      {
        MR_Word mdbcomp__feedback__ArgX1_3 = (MR_Word) mdbcomp__feedback__HeadVar__1_1;
        MR_Word mdbcomp__feedback__ArgY1_4 = (MR_Word) mdbcomp__feedback__HeadVar__2_2;

        {
          mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0(mdbcomp__feedback__ArgX1_3, mdbcomp__feedback__ArgY1_4);
        }
      }
    return mdbcomp__feedback__succeeded;
  }
}

MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0(
  MR_Word mdbcomp__feedback__HeadVar__1_1,
  MR_Word mdbcomp__feedback__HeadVar__2_2)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Integer mdbcomp__feedback__CastX_7 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
    MR_Integer mdbcomp__feedback__CastY_8 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_7 == mdbcomp__feedback__CastY_8);
    if (mdbcomp__feedback__succeeded)
      mdbcomp__feedback__succeeded = MR_TRUE;
    else
      {
        MR_Word mdbcomp__feedback__TypeInfo_10_10;
        MR_Word mdbcomp__feedback__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdbcomp__feedback__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdbcomp__feedback__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdbcomp__feedback__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

        {
          mdbcomp__feedback__succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0(mdbcomp__feedback__ArgX1_3, mdbcomp__feedback__ArgY1_4);
        }
        if (mdbcomp__feedback__succeeded)
          {
            mdbcomp__feedback__TypeInfo_10_10 = (MR_Word) &mdbcomp__feedback_scalar_common_1[4];
            {
              mdbcomp__feedback__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__feedback__TypeInfo_10_10, ((MR_Box) (mdbcomp__feedback__ArgX2_5)), ((MR_Box) (mdbcomp__feedback__ArgY2_6)));
            }
          }
      }
    return mdbcomp__feedback__succeeded;
  }
}

MR_String MR_CALL 
mdbcomp__feedback__feedback_version_0_f_0(void)
{
  {
    MR_bool mdbcomp__feedback__succeeded;

    return (MR_String) "19";
  }
}

MR_String MR_CALL 
mdbcomp__feedback__feedback_first_line_0_f_0(void)
{
  {
    MR_bool mdbcomp__feedback__succeeded;

    return (MR_String) "Mercury Compiler Feedback";
  }
}

void MR_CALL 
mdbcomp__feedback__actually_write_feedback_file_5_p_0(
  MR_Word mdbcomp__feedback__Stream_6,
  MR_Word mdbcomp__feedback__FeedbackInfo_7)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_String mdbcomp__feedback__ProfiledProgramName_9;
    MR_Word mdbcomp__feedback__MaybeCandidateParallelConjs_10;
    MR_Word mdbcomp__feedback__Components_14;
    MR_Word mdbcomp__feedback__STATE_VARIABLE_RevComponents_25_25;
    MR_Word mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mdbcomp__feedback__ProfiledProgramName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__FeedbackInfo_7, (MR_Integer) 0)));
    mdbcomp__feedback__MaybeCandidateParallelConjs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__FeedbackInfo_7, (MR_Integer) 1)));
    {
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_6, (MR_String) "Mercury Compiler Feedback");
    }
    {
      mercury__io__nl_3_p_0(mdbcomp__feedback__Stream_6);
    }
    {
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_6, (MR_String) "19");
    }
    {
      mercury__io__nl_3_p_0(mdbcomp__feedback__Stream_6);
    }
    {
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_6, mdbcomp__feedback__ProfiledProgramName_9);
    }
    {
      mercury__io__nl_3_p_0(mdbcomp__feedback__Stream_6);
    }
    mdbcomp__feedback__STATE_VARIABLE_RevComponents_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    if ((mdbcomp__feedback__MaybeCandidateParallelConjs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26 = mdbcomp__feedback__STATE_VARIABLE_RevComponents_25_25;
    else
      {
        MR_Word mdbcomp__feedback__Candidates_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__MaybeCandidateParallelConjs_10, (MR_Integer) 0)));
        MR_Word mdbcomp__feedback__CandComponent_13 = (MR_Word) mdbcomp__feedback__Candidates_12;

        {
          mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26, 0) = ((MR_Box) (mdbcomp__feedback__CandComponent_13));
          MR_hl_field(MR_mktag(1), mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26, 1) = ((MR_Box) (mdbcomp__feedback__STATE_VARIABLE_RevComponents_25_25));
        }
      }
    {
      mercury__list__reverse_2_p_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_component_wrapper_0, mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26, &mdbcomp__feedback__Components_14);
    }
    {
      mercury__io__write_4_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[1], mdbcomp__feedback__Stream_6, ((MR_Box) (mdbcomp__feedback__Components_14)));
    }
    {
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_6, (MR_String) ".\n");
    }
    {
      mercury__io__close_output_3_p_0(mdbcomp__feedback__Stream_6);
    }
  }
}

void MR_CALL 
mdbcomp__feedback__read_profiled_program_name_6_p_0(
  MR_Word mdbcomp__feedback__MaybeExpectedProfiledProgramName_7,
  MR_Word mdbcomp__feedback__Stream_8,
  MR_Word * mdbcomp__feedback__Result_10)
{
  {
    MR_bool mdbcomp__feedback__succeeded;

    {
      mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_102_105_108_101_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_51_93_95_48_6_p_0(mdbcomp__feedback__MaybeExpectedProfiledProgramName_7, mdbcomp__feedback__Stream_8, mdbcomp__feedback__Result_10);
    }
  }
}

void MR_CALL 
mdbcomp__feedback__read_check_line_7_p_0(
  MR_String mdbcomp__feedback__TestLine_8,
  MR_Word mdbcomp__feedback__NotMatchError_9,
  MR_Word mdbcomp__feedback__Stream_10,
  MR_Word * mdbcomp__feedback__Result_12)
{
  {
    MR_bool mdbcomp__feedback__succeeded;

    {
      mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0(mdbcomp__feedback__TestLine_8, mdbcomp__feedback__NotMatchError_9, mdbcomp__feedback__Stream_10, mdbcomp__feedback__Result_12);
    }
  }
}

void MR_CALL 
mdbcomp__feedback__maybe_read_5_p_0(
  MR_Word mdbcomp__feedback__TypeInfo_for_A_15,
  MR_Word mdbcomp__feedback__TypeInfo_for_B_16,
  MR_Word mdbcomp__feedback__Pred_6,
  MR_Word mdbcomp__feedback__Result0_7,
  MR_Word * mdbcomp__feedback__Result_8)
{
  {
    MR_bool mdbcomp__feedback__succeeded;

    if (((MR_tag((MR_Word) mdbcomp__feedback__Result0_7)) == (MR_mktag((MR_Integer) 1))))
      *mdbcomp__feedback__Result_8 = mdbcomp__feedback__Result0_7;
    else
      {
        MR_Box mdbcomp__feedback__Acc_10 = (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Result0_7, (MR_Integer) 0));
        void MR_CALL (* mdbcomp__feedback__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Pred_6, (MR_Integer) 1)));
        MR_Box mdbcomp__feedback__conv2_Result_8;
        MR_Box mdbcomp__feedback__conv1_STATE_VARIABLE_IO_13;

        {
          mdbcomp__feedback__func_0(((MR_Box) mdbcomp__feedback__Pred_6), mdbcomp__feedback__Acc_10, &mdbcomp__feedback__conv2_Result_8, ((MR_Box) ((MR_Integer) 0)), &mdbcomp__feedback__conv1_STATE_VARIABLE_IO_13);
        }
        *mdbcomp__feedback__Result_8 = ((MR_Word) mdbcomp__feedback__conv2_Result_8);
      }
  }
}

static void MR_CALL 
mdbcomp__feedback__write_feedback_file_5_p_0_1(
  MR_Box mdbcomp__feedback__closure_arg,
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box * mdbcomp__feedback__wrapper_arg_3)
{
  {
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;

    {
      mdbcomp__feedback__actually_write_feedback_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 4))));
    }
  }
}

void MR_CALL 
mdbcomp__feedback__write_feedback_file_5_p_0(
  MR_String mdbcomp__feedback__Path_6,
  MR_Word mdbcomp__feedback__Feedback_7,
  MR_Word * mdbcomp__feedback__Result_8)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Word mdbcomp__feedback__OpenResult_10;

    {
      mercury__io__open_output_4_p_0(mdbcomp__feedback__Path_6, &mdbcomp__feedback__OpenResult_10);
    }
    if (((MR_tag((MR_Word) mdbcomp__feedback__OpenResult_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdbcomp__feedback__ErrorCode_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__OpenResult_10, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdbcomp__feedback__Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__ErrorCode_16));
        }
      }
    else
      {
        MR_Word mdbcomp__feedback__Stream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__OpenResult_10, (MR_Integer) 0)));
        MR_Word mdbcomp__feedback__ExcpResult_12;
        MR_Word mdbcomp__feedback__Var_20;

        {
          mdbcomp__feedback__Var_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_20, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_20, 1) = ((MR_Box) (mdbcomp__feedback__write_feedback_file_5_p_0_1));
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_20, 3) = ((MR_Box) (mdbcomp__feedback__Stream_11));
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_20, 4) = ((MR_Box) (mdbcomp__feedback__Feedback_7));
        }
        {
          mercury__exception__try_io_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, mdbcomp__feedback__Var_20, &mdbcomp__feedback__ExcpResult_12);
        }
        if (((MR_tag((MR_Word) mdbcomp__feedback__ExcpResult_12)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Word mdbcomp__feedback__ExcpUniv_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__ExcpResult_12, (MR_Integer) 0)));
            MR_Word mdbcomp__feedback__Excp_15;
            MR_Box mdbcomp__feedback__conv0_Excp_15;

            {
              mdbcomp__feedback__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, mdbcomp__feedback__ExcpUniv_14, &mdbcomp__feedback__conv0_Excp_15);
            }
            if (mdbcomp__feedback__succeeded)
              {
                mdbcomp__feedback__Excp_15 = ((MR_Word) mdbcomp__feedback__conv0_Excp_15);
                mdbcomp__feedback__succeeded = MR_TRUE;
              }
            if (mdbcomp__feedback__succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdbcomp__feedback__Result_8 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdbcomp__feedback__Excp_15));
              }
            else
              {
                {
                  mercury__exception__rethrow_1_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, mdbcomp__feedback__ExcpResult_12);
                  return;
                }
              }
          }
        else
          *mdbcomp__feedback__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

void MR_CALL 
mdbcomp__feedback__read_or_create_feedback_file_5_p_0(
  MR_String mdbcomp__feedback__Path_6,
  MR_String mdbcomp__feedback__ExpectedProfiledProgramName_7,
  MR_Word * mdbcomp__feedback__FeedbackResult_8)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Word mdbcomp__feedback__ReadResult_10;
    MR_Word mdbcomp__feedback__Var_23;

    {
      mdbcomp__feedback__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__feedback__Var_23, 0) = ((MR_Box) (mdbcomp__feedback__ExpectedProfiledProgramName_7));
    }
    {
      mdbcomp__feedback__read_feedback_file_5_p_0(mdbcomp__feedback__Path_6, mdbcomp__feedback__Var_23, &mdbcomp__feedback__ReadResult_10);
    }
    if (((MR_tag((MR_Word) mdbcomp__feedback__ReadResult_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdbcomp__feedback__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__ReadResult_10, (MR_Integer) 0)));

        switch (MR_tag((MR_Word) mdbcomp__feedback__Error_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mdbcomp__feedback__FeedbackResult_8 = mdbcomp__feedback__ReadResult_10;
            break;
          case (MR_Integer) 1:
            {
              MR_Word mdbcomp__feedback__Var_25;

              {
                mdbcomp__feedback__Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_25, 0) = ((MR_Box) (mdbcomp__feedback__ExpectedProfiledProgramName_7));
                MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mdbcomp__feedback__FeedbackResult_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__Var_25));
              }
            }
            break;
          case (MR_Integer) 2:
            *mdbcomp__feedback__FeedbackResult_8 = mdbcomp__feedback__ReadResult_10;
            break;
          case (MR_Integer) 3:
            *mdbcomp__feedback__FeedbackResult_8 = mdbcomp__feedback__ReadResult_10;
            break;
        }
      }
    else
      *mdbcomp__feedback__FeedbackResult_8 = mdbcomp__feedback__ReadResult_10;
  }
}

void MR_CALL 
mdbcomp__feedback__read_feedback_file_5_p_0(
  MR_String mdbcomp__feedback__Path_6,
  MR_Word mdbcomp__feedback__MaybeExpectedProfiledProgramName_7,
  MR_Word * mdbcomp__feedback__ResultFeedbackInfo_8)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Word mdbcomp__feedback__IOResStream_10;

    {
      mercury__io__open_input_4_p_0(mdbcomp__feedback__Path_6, &mdbcomp__feedback__IOResStream_10);
    }
    if (((MR_tag((MR_Word) mdbcomp__feedback__IOResStream_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mdbcomp__feedback__ErrorCode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__IOResStream_10, (MR_Integer) 0)));
        MR_Word mdbcomp__feedback__Var_17;

        {
          mdbcomp__feedback__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdbcomp__feedback__Var_17, 0) = ((MR_Box) (mdbcomp__feedback__ErrorCode_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdbcomp__feedback__ResultFeedbackInfo_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__Var_17));
        }
      }
    else
      {
        MR_Word mdbcomp__feedback__Stream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__IOResStream_10, (MR_Integer) 0)));
        MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_21_21;

        {
          mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0((MR_String) "Mercury Compiler Feedback", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), mdbcomp__feedback__Stream_11, &mdbcomp__feedback__STATE_VARIABLE_Result_21_21);
        }
        if (((MR_tag((MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_21_21)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_24_24 = mdbcomp__feedback__STATE_VARIABLE_Result_21_21;
            MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_30_30 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_24_24;

            *mdbcomp__feedback__ResultFeedbackInfo_8 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_30_30;
          }
        else
          {
            MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_24_84;

            {
              mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0((MR_String) "19", (MR_Word) MR_mkword(MR_mktag(3), &mdbcomp__feedback_scalar_common_1[6]), mdbcomp__feedback__Stream_11, &mdbcomp__feedback__STATE_VARIABLE_Result_24_84);
            }
            if (((MR_tag((MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_24_84)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_30_86 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_24_84;

                *mdbcomp__feedback__ResultFeedbackInfo_8 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_30_86;
              }
            else
              {
                MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_30_88;

                {
                  mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_102_105_108_101_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_51_93_95_48_6_p_0(mdbcomp__feedback__MaybeExpectedProfiledProgramName_7, mdbcomp__feedback__Stream_11, &mdbcomp__feedback__STATE_VARIABLE_Result_30_88);
                }
                if (((MR_tag((MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_30_88)) == (MR_mktag((MR_Integer) 1))))
                  *mdbcomp__feedback__ResultFeedbackInfo_8 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_30_88;
                else
                  {
                    MR_String mdbcomp__feedback__Acc_79 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Result_30_88, (MR_Integer) 0)));

                    {
                      mdbcomp__feedback__read_all_feedback_data_5_p_0(mdbcomp__feedback__Stream_11, mdbcomp__feedback__Acc_79, mdbcomp__feedback__ResultFeedbackInfo_8);
                    }
                  }
              }
          }
        {
          mercury__io__close_input_3_p_0(mdbcomp__feedback__Stream_11);
        }
      }
  }
}

void MR_CALL 
mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_102_105_108_101_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_51_93_95_48_6_p_0(
  MR_Word mdbcomp__feedback__MaybeExpectedProfiledProgramName_7,
  MR_Word mdbcomp__feedback__Stream_8,
  MR_Word * mdbcomp__feedback__Result_10)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Word mdbcomp__feedback__IOResultLine_12;

    {
      mercury__io__read_line_as_string_4_p_0(mdbcomp__feedback__Stream_8, &mdbcomp__feedback__IOResultLine_12);
    }
    switch (MR_tag((MR_Word) mdbcomp__feedback__IOResultLine_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mdbcomp__feedback__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[1]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String mdbcomp__feedback__String_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__IOResultLine_12, (MR_Integer) 0)));
          MR_String mdbcomp__feedback__ActualProfiledProgramName_14;

          {
            mdbcomp__feedback__ActualProfiledProgramName_14 = mercury__string__strip_1_f_0(mdbcomp__feedback__String_13);
          }
          if ((mdbcomp__feedback__MaybeExpectedProfiledProgramName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mdbcomp__feedback__Result_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__ActualProfiledProgramName_14));
            }
          else
            {
              MR_String mdbcomp__feedback__ExpectedProfiledProgramName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__MaybeExpectedProfiledProgramName_7, (MR_Integer) 0)));

              mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__ActualProfiledProgramName_14, mdbcomp__feedback__ExpectedProfiledProgramName_15) == 0);
              if (mdbcomp__feedback__succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mdbcomp__feedback__Result_10 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__ActualProfiledProgramName_14));
                }
              else
                {
                  MR_Word mdbcomp__feedback__Var_22;

                  {
                    mdbcomp__feedback__Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mdbcomp__feedback__Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), mdbcomp__feedback__Var_22, 1) = ((MR_Box) (mdbcomp__feedback__ExpectedProfiledProgramName_15));
                    MR_hl_field(MR_mktag(3), mdbcomp__feedback__Var_22, 2) = ((MR_Box) (mdbcomp__feedback__ActualProfiledProgramName_14));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *mdbcomp__feedback__Result_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__Var_22));
                  }
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdbcomp__feedback__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__IOResultLine_12, (MR_Integer) 0)));
          MR_Word mdbcomp__feedback__Var_20;

          {
            mdbcomp__feedback__Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), mdbcomp__feedback__Var_20, 0) = ((MR_Box) (mdbcomp__feedback__Error_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdbcomp__feedback__Result_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__Var_20));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0(
  MR_String mdbcomp__feedback__TestLine_8,
  MR_Word mdbcomp__feedback__NotMatchError_9,
  MR_Word mdbcomp__feedback__Stream_10,
  MR_Word * mdbcomp__feedback__Result_12)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Word mdbcomp__feedback__IOResultLine_14;

    {
      mercury__io__read_line_as_string_4_p_0(mdbcomp__feedback__Stream_10, &mdbcomp__feedback__IOResultLine_14);
    }
    switch (MR_tag((MR_Word) mdbcomp__feedback__IOResultLine_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mdbcomp__feedback__Result_12 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[1]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String mdbcomp__feedback__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__IOResultLine_14, (MR_Integer) 0)));

          mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__Line_15, mdbcomp__feedback__TestLine_8) == 0);
          if (!(mdbcomp__feedback__succeeded))
            {
              MR_String mdbcomp__feedback__Var_25;

              {
                mdbcomp__feedback__Var_25 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__TestLine_8, (MR_String) "\n");
              }
              mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__Line_15, mdbcomp__feedback__Var_25) == 0);
            }
          if (mdbcomp__feedback__succeeded)
            {
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
              *mdbcomp__feedback__Result_12 = (MR_Word) &mdbcomp__feedback_scalar_common_4[2];
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mdbcomp__feedback__Result_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__NotMatchError_9));
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdbcomp__feedback__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__IOResultLine_14, (MR_Integer) 0)));
          MR_Word mdbcomp__feedback__Var_20;

          {
            mdbcomp__feedback__Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), mdbcomp__feedback__Var_20, 0) = ((MR_Box) (mdbcomp__feedback__Error_16));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdbcomp__feedback__Result_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__Var_20));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mdbcomp__feedback__read_all_feedback_data_5_p_0(
  MR_Word mdbcomp__feedback__Stream_6,
  MR_String mdbcomp__feedback__ProfiledProgramName_7,
  MR_Word * mdbcomp__feedback__Result_8)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Word mdbcomp__feedback__ReadResult_10;

    {
      mercury__io__read_4_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[1], mdbcomp__feedback__Stream_6, &mdbcomp__feedback__ReadResult_10);
    }
    switch (MR_tag((MR_Word) mdbcomp__feedback__ReadResult_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mdbcomp__feedback__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[1]);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdbcomp__feedback__Components_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__ReadResult_10, (MR_Integer) 0)));
          MR_Word mdbcomp__feedback__Info0_12;

          {
            mdbcomp__feedback__Info0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info0_12, 0) = ((MR_Box) (mdbcomp__feedback__ProfiledProgramName_7));
            MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info0_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            mdbcomp__feedback__add_feedback_components_3_p_0(mdbcomp__feedback__Components_11, mdbcomp__feedback__Info0_12, mdbcomp__feedback__Result_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String mdbcomp__feedback__Error_13 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__ReadResult_10, (MR_Integer) 0)));
          MR_Integer mdbcomp__feedback__Line_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__ReadResult_10, (MR_Integer) 1)));
          MR_Word mdbcomp__feedback__Var_18;

          {
            mdbcomp__feedback__Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), mdbcomp__feedback__Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), mdbcomp__feedback__Var_18, 1) = ((MR_Box) (mdbcomp__feedback__Error_13));
            MR_hl_field(MR_mktag(3), mdbcomp__feedback__Var_18, 2) = ((MR_Box) (mdbcomp__feedback__Line_14));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mdbcomp__feedback__Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__Var_18));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mdbcomp__feedback__add_feedback_components_3_p_0(
  MR_Word mdbcomp__feedback__HeadVar__1_1,
  MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_0_2,
  MR_Word * mdbcomp__feedback__Result_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdbcomp__feedback__succeeded;

        if ((mdbcomp__feedback__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mdbcomp__feedback__Result_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__STATE_VARIABLE_Info_0_2));
          }
        else
          {
            MR_Word mdbcomp__feedback__Wrapper_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdbcomp__feedback__Wrappers_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdbcomp__feedback__Candidates_11 = (MR_Word) mdbcomp__feedback__Wrapper_7;
            MR_Word mdbcomp__feedback__MaybeCandidates0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_2, (MR_Integer) 1)));
            MR_String mdbcomp__feedback__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_2, (MR_Integer) 0)));

            if ((mdbcomp__feedback__MaybeCandidates0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_17_17;
                MR_Word mdbcomp__feedback__Var_18;

                {
                  mdbcomp__feedback__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdbcomp__feedback__Var_18, 0) = ((MR_Box) (mdbcomp__feedback__Candidates_11));
                }
                {
                  mdbcomp__feedback__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (mdbcomp__feedback__Var_21));
                  MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (mdbcomp__feedback__Var_18));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mdbcomp__feedback__next_value_of_HeadVar__1_1 = mdbcomp__feedback__Wrappers_8;
                  MR_Word mdbcomp__feedback__next_value_of_STATE_VARIABLE_Info_0_2 = mdbcomp__feedback__STATE_VARIABLE_Info_17_17;

                  mdbcomp__feedback__STATE_VARIABLE_Info_0_2 = mdbcomp__feedback__next_value_of_STATE_VARIABLE_Info_0_2;
                  mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__next_value_of_HeadVar__1_1;
                }
                continue;
              }
            else
              {
                *mdbcomp__feedback__Result_3 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[0]);
              }
          }
      }
      break;
    }
}

void MR_CALL 
mdbcomp__feedback__feedback_read_error_message_string_3_p_0(
  MR_String mdbcomp__feedback__File_4,
  MR_Word mdbcomp__feedback__Error_5,
  MR_String * mdbcomp__feedback__Message_6)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_String mdbcomp__feedback__MessagePart_8;
    MR_String mdbcomp__feedback__Var_47;
    MR_String mdbcomp__feedback__Var_49;

    switch (MR_tag((MR_Word) mdbcomp__feedback__Error_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdbcomp__feedback__Error_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mdbcomp__feedback__MessagePart_8 = (MR_String) "Unexpected end of file";
            break;
          case (MR_Integer) 1:
            mdbcomp__feedback__MessagePart_8 = (MR_String) "Incorrect file format";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdbcomp__feedback__Code_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__Error_5, (MR_Integer) 0)));

          {
            mercury__io__error_message_2_p_0(mdbcomp__feedback__Code_7, &mdbcomp__feedback__MessagePart_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdbcomp__feedback__Code_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__Error_5, (MR_Integer) 0)));

          {
            mercury__io__error_message_2_p_0(mdbcomp__feedback__Code_39, &mdbcomp__feedback__MessagePart_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String mdbcomp__feedback__ParseMessage_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));
              MR_Integer mdbcomp__feedback__Line_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 2)));
              MR_String mdbcomp__feedback__Var_28;
              MR_String mdbcomp__feedback__Var_30;

              {
                mdbcomp__feedback__Var_30 = mercury__string__string_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdbcomp__feedback__Line_10)));
              }
              {
                mdbcomp__feedback__Var_28 = mercury__string__f_43_43_2_f_0((MR_String) " on line ", mdbcomp__feedback__Var_30);
              }
              {
                mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__ParseMessage_9, mdbcomp__feedback__Var_28);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String mdbcomp__feedback__Expected_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));

              {
                mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "Incorrect file format version; expected ", mdbcomp__feedback__Expected_11);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String mdbcomp__feedback__Got_12 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 2)));
              MR_String mdbcomp__feedback__Var_18;
              MR_String mdbcomp__feedback__Var_20;
              MR_String mdbcomp__feedback__Expected_37 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));
              MR_String mdbcomp__feedback__Var_41;
              MR_String mdbcomp__feedback__Var_43;
              MR_String mdbcomp__feedback__Var_44;

              {
                mdbcomp__feedback__Var_41 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__Got_12, (MR_String) "\'");
              }
              {
                mdbcomp__feedback__Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "\' Got: \'", mdbcomp__feedback__Var_41);
              }
              {
                mdbcomp__feedback__Var_44 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__Expected_37, mdbcomp__feedback__Var_43);
              }
              {
                mdbcomp__feedback__Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "Expected: \'", mdbcomp__feedback__Var_44);
              }
              {
                mdbcomp__feedback__Var_18 = mercury__string__f_43_43_2_f_0((MR_String) " is this the right feedback file\?\n", mdbcomp__feedback__Var_20);
              }
              {
                mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "The name of the program the feedback is for didn\'t match,", mdbcomp__feedback__Var_18);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String mdbcomp__feedback__ComponentName_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));
              MR_String mdbcomp__feedback__Var_15;

              {
                mdbcomp__feedback__Var_15 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__ComponentName_13, (MR_String) " component");
              }
              {
                mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "File contains more than one ", mdbcomp__feedback__Var_15);
              }
            }
            break;
        }
        break;
    }
    {
      mdbcomp__feedback__Var_47 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__MessagePart_8, (MR_String) "\n");
    }
    {
      mdbcomp__feedback__Var_49 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdbcomp__feedback__Var_47);
    }
    {
      *mdbcomp__feedback__Message_6 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__File_4, mdbcomp__feedback__Var_49);
    }
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0_1(
  MR_Box mdbcomp__feedback__closure_arg)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;

    {
      mdbcomp__feedback__succeeded = mdbcomp__feedback__IntroducedFrom__pred__replace_feedback_candidate_parallel_conjunctions__300__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 4))));
    }
    return mdbcomp__feedback__succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0(
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
  MR_Word mdbcomp__feedback__Data_6,
  MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_0_8,
  MR_Word * mdbcomp__feedback__STATE_VARIABLE_Info_9)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Word mdbcomp__feedback__Var_10;
    MR_String mdbcomp__feedback__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word mdbcomp__feedback__Var_15;
    MR_Word mdbcomp__feedback__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_String mdbcomp__feedback__Var_17;
    MR_Word mdbcomp__feedback__Var_18;

    {
      mdbcomp__feedback__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_10, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_10, 1) = ((MR_Box) (mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0_1));
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_10, 3) = ((MR_Box) (mdbcomp__feedback__ProfiledProgramName_5));
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_10, 4) = ((MR_Box) (mdbcomp__feedback__Var_13));
    }
    {
      mercury__require__expect_3_p_0(mdbcomp__feedback__Var_10, (MR_String) "predicate \140mdbcomp.feedback.replace_feedback_candidate_parallel_conjunctions\'/4", (MR_String) "replacing candidate parallel conjunctions for wrong program");
    }
    {
      mdbcomp__feedback__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__feedback__Var_15, 0) = ((MR_Box) (mdbcomp__feedback__Data_6));
    }
    mdbcomp__feedback__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    mdbcomp__feedback__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mdbcomp__feedback__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__feedback__Var_15));
    }
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_2(
  MR_Box mdbcomp__feedback__closure_arg)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;

    {
      mdbcomp__feedback__succeeded = mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__294__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 4))));
    }
    return mdbcomp__feedback__succeeded;
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_1(
  MR_Box mdbcomp__feedback__closure_arg)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;

    {
      mdbcomp__feedback__succeeded = mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__292__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 4))));
    }
    return mdbcomp__feedback__succeeded;
  }
}

void MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0(
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
  MR_Word mdbcomp__feedback__Data_6,
  MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_0_8,
  MR_Word * mdbcomp__feedback__STATE_VARIABLE_Info_9)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Word mdbcomp__feedback__Var_10;
    MR_String mdbcomp__feedback__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word mdbcomp__feedback__Var_14;
    MR_Word mdbcomp__feedback__Var_17;
    MR_Word mdbcomp__feedback__Var_20;
    MR_Word mdbcomp__feedback__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_String mdbcomp__feedback__Var_22;
    MR_String mdbcomp__feedback__Var_23;
    MR_Word mdbcomp__feedback__Var_24;

    {
      mdbcomp__feedback__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_10, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_10, 1) = ((MR_Box) (mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_1));
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_10, 3) = ((MR_Box) (mdbcomp__feedback__ProfiledProgramName_5));
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_10, 4) = ((MR_Box) (mdbcomp__feedback__Var_13));
    }
    {
      mercury__require__expect_3_p_0(mdbcomp__feedback__Var_10, (MR_String) "predicate \140mdbcomp.feedback.add_feedback_candidate_parallel_conjunctions\'/4", (MR_String) "adding candidate parallel conjunctions for wrong program");
    }
    mdbcomp__feedback__Var_22 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    mdbcomp__feedback__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    {
      mdbcomp__feedback__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_14, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_14, 1) = ((MR_Box) (mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_2));
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_14, 3) = ((MR_Box) (mdbcomp__feedback__Var_17));
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__Var_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_3_p_0(mdbcomp__feedback__Var_14, (MR_String) "predicate \140mdbcomp.feedback.add_feedback_candidate_parallel_conjunctions\'/4", (MR_String) "overwriting old candidate_parallel_conjunctions data");
    }
    {
      mdbcomp__feedback__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdbcomp__feedback__Var_20, 0) = ((MR_Box) (mdbcomp__feedback__Data_6));
    }
    mdbcomp__feedback__Var_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    mdbcomp__feedback__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mdbcomp__feedback__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__feedback__Var_20));
    }
  }
}

void MR_CALL 
mdbcomp__feedback__get_all_feedback_info_3_p_0(
  MR_Word mdbcomp__feedback__Info_4,
  MR_String * mdbcomp__feedback__ProfiledProgramName_5,
  MR_Word * mdbcomp__feedback__MaybeCandidateParallelConjs_6)
{
  {
    MR_bool mdbcomp__feedback__succeeded;

    *mdbcomp__feedback__ProfiledProgramName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_4, (MR_Integer) 0)));
    *mdbcomp__feedback__MaybeCandidateParallelConjs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_4, (MR_Integer) 1)));
  }
}

MR_Word MR_CALL 
mdbcomp__feedback__get_feedback_candidate_parallel_conjunctions_1_f_0(
  MR_Word mdbcomp__feedback__Info_3)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Word mdbcomp__feedback__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 1)));
    MR_String mdbcomp__feedback__Var_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 0)));

    return mdbcomp__feedback__HeadVar__2_2;
  }
}

MR_String MR_CALL 
mdbcomp__feedback__get_feedback_profiled_program_name_1_f_0(
  MR_Word mdbcomp__feedback__Info_3)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_String mdbcomp__feedback__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 0)));
    MR_Word mdbcomp__feedback__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 1)));

    return mdbcomp__feedback__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mdbcomp__feedback__init_feedback_info_1_f_0(
  MR_String mdbcomp__feedback__ProgramName_3)
{
  {
    MR_bool mdbcomp__feedback__succeeded;
    MR_Word mdbcomp__feedback__HeadVar__2_2;

    {
      mdbcomp__feedback__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, 0) = ((MR_Box) (mdbcomp__feedback__ProgramName_3));
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return mdbcomp__feedback__HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_component_wrapper_0_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__feedback__succeeded;

    {
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_component_wrapper_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
    return mdbcomp__feedback__succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_component_wrapper_0_0_10001(
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

    {
      mdbcomp__feedback____Compare____feedback_component_wrapper_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_0_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__feedback__succeeded;

    {
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_info_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
    return mdbcomp__feedback__succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0_10001(
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

    {
      mdbcomp__feedback____Compare____feedback_info_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__feedback__succeeded;

    {
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
    return mdbcomp__feedback__succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0_10001(
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

    {
      mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__feedback__succeeded;

    {
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_read_error_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
    return mdbcomp__feedback__succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0_10001(
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

    {
      mdbcomp__feedback____Compare____feedback_read_error_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3)
{
  {
    MR_bool mdbcomp__feedback__succeeded;

    {
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_read_result_1_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
    return mdbcomp__feedback__succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box * mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3,
  MR_Box mdbcomp__feedback__wrapper_arg_4)
{
  {
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

    {
      mdbcomp__feedback____Compare____feedback_read_result_1_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), &mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_3), ((MR_Word) mdbcomp__feedback__wrapper_arg_4));
    }
    *mdbcomp__feedback__wrapper_arg_2 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_write_result_0_0_10001(
  MR_Box mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2)
{
  {
    MR_bool mdbcomp__feedback__succeeded;

    {
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_write_result_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
    return mdbcomp__feedback__succeeded;
  }
}

static void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0_10001(
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
  MR_Box mdbcomp__feedback__wrapper_arg_2,
  MR_Box mdbcomp__feedback__wrapper_arg_3)
{
  {
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

    {
      mdbcomp__feedback____Compare____feedback_write_result_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
  }
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

/* :- end_module mdbcomp.feedback. */
