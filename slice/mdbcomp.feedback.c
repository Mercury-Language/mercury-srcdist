/*
** Automatically generated from `mdbcomp.feedback.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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




#line 81 "mdbcomp.feedback.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__maybe__pti_maybe_1__plain_mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0;

#line 84 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_component_wrapper_0[1];

#line 87 "mdbcomp.feedback.c"
static const MR_NotagFunctorDesc mdbcomp__feedback__mdbcomp__feedback__notag_functor_desc_feedback_component_wrapper_0;

#line 90 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0;

#line 93 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_0_0[2];

#line 96 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_0_0[2];

#line 99 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0;

#line 102 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_0_0[1];

#line 105 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_0[1];

#line 108 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_0[1];

#line 111 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_0[1];

#line 114 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 117 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 120 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 123 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 126 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_candidate_parallel_conjunctions_0_0[2];

#line 129 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_candidate_parallel_conjunctions_0_0[2];

#line 132 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_candidate_parallel_conjunctions_0_0;

#line 135 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_candidate_parallel_conjunctions_0_0[1];

#line 138 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_candidate_parallel_conjunctions_0[1];

#line 141 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_candidate_parallel_conjunctions_0[1];

#line 144 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_candidate_parallel_conjunctions_0[1];

#line 147 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_0[1];

#line 150 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0;

#line 153 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_1[1];

#line 156 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1;

#line 159 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_2[2];

#line 162 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_2[2];

#line 165 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2;

#line 168 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3;

#line 171 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_4[1];

#line 174 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4;

#line 177 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5;

#line 180 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_6[2];

#line 183 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_6[2];

#line 186 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6;

#line 189 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_7[1];

#line 192 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_7[1];

#line 195 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_7;

#line 198 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_0[2];

#line 201 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_1[1];

#line 204 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_2[1];

#line 207 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_3[4];

#line 210 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_read_error_0[4];

#line 213 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_read_error_0[8];

#line 216 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_read_error_0[8];

#line 219 "mdbcomp.feedback.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__feedback__maybe__pti_maybe_error_2__pseudo_1__plain_mdbcomp__feedback__type_ctor_info_feedback_read_error_0;

#line 222 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0;

#line 225 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_1[1];

#line 228 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1;

#line 231 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_2[1];

#line 234 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2;

#line 237 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_0[1];

#line 240 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_1[1];

#line 243 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_2[1];

#line 246 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_write_result_0[3];

#line 249 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_write_result_0[3];

#line 252 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_write_result_0[3];

#line 255 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_component_wrapper_0_0_10001(
#line 258 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 260 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2);

#line 263 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_component_wrapper_0_0_10001(
#line 266 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 268 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 270 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3);

#line 273 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_0_0_10001(
#line 276 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 278 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2);

#line 281 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0_10001(
#line 284 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 286 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 288 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3);

#line 291 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0_10001(
#line 294 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 296 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2);

#line 299 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0_10001(
#line 302 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 304 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 306 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3);

#line 309 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0_10001(
#line 312 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 314 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2);

#line 317 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0_10001(
#line 320 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 322 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 324 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3);

#line 327 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0_10001(
#line 330 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 332 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 334 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3);

#line 337 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0_10001(
#line 340 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 342 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_2,
#line 344 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3,
#line 346 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_4);

#line 349 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_write_result_0_0_10001(
#line 352 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 354 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2);

#line 357 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0_10001(
#line 360 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 362 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 364 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3);

#line 300 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__replace_feedback_candidate_parallel_conjunctions__300__1_2_p_0(
#line 300 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
#line 300 "feedback.m"
  MR_String mdbcomp__feedback__HeadVar__2_13);

#line 294 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__294__1_2_p_0(
#line 294 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_17,
#line 294 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_18);

#line 292 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__292__1_2_p_0(
#line 292 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
#line 292 "feedback.m"
  MR_String mdbcomp__feedback__HeadVar__2_13);

#line 542 "feedback.m"
static void MR_CALL 
mdbcomp__feedback__write_feedback_file_5_p_0_1(
#line 542 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg,
#line 542 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 542 "feedback.m"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 542 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_3);

#line 300 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0_1(
#line 300 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg);

#line 294 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_2(
#line 294 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg);

#line 292 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_1(
#line 292 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg);


static /* final */ const MR_Box mdbcomp__feedback_scalar_common_1[7][2];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_2[1][3];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_3[2][5];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_4[4][1];

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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "19"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "candidate_parallel_conjunctions"))
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

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &mdbcomp__feedback_scalar_common_1[6])))
  },
  /* row 3 */
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



#line 545 "mdbcomp.feedback.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__maybe__pti_maybe_1__plain_mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0
  }
};

#line 553 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_component_wrapper_0[1] = {
  (MR_Integer) 0
};

#line 558 "mdbcomp.feedback.c"
static const MR_NotagFunctorDesc mdbcomp__feedback__mdbcomp__feedback__notag_functor_desc_feedback_component_wrapper_0 = {
  (MR_String) "fcw_candidate_parallel_conjunctions",
  (MR_PseudoTypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0,
  NULL
};

#line 565 "mdbcomp.feedback.c"
const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_component_wrapper_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
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

#line 582 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0
  }
};

#line 590 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0
};

#line 596 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_0_0[2] = {
  (MR_String) "fi_profiled_program_name",
  (MR_String) "fi_maybe_candidate_parallel_conjunctions"
};

#line 602 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0 = {
  (MR_String) "feedback_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_0_0,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_0_0,
  NULL,
  NULL
};

#line 617 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0
};

#line 622 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_0_0
  }
};

#line 631 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0
};

#line 636 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_0[1] = {
  (MR_Integer) 0
};

#line 641 "mdbcomp.feedback.c"
const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 658 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 666 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 674 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 683 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 691 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_candidate_parallel_conjunctions_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
};

#line 697 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_candidate_parallel_conjunctions_0_0[2] = {
  (MR_String) "cpc_parameters",
  (MR_String) "cpc_conjunctions"
};

#line 703 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_candidate_parallel_conjunctions_0_0 = {
  (MR_String) "feedback_info_candidate_parallel_conjunctions",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_candidate_parallel_conjunctions_0_0,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_candidate_parallel_conjunctions_0_0,
  NULL,
  NULL
};

#line 718 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_candidate_parallel_conjunctions_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_candidate_parallel_conjunctions_0_0
};

#line 723 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_candidate_parallel_conjunctions_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_candidate_parallel_conjunctions_0_0
  }
};

#line 732 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_candidate_parallel_conjunctions_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_candidate_parallel_conjunctions_0_0
};

#line 737 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_candidate_parallel_conjunctions_0[1] = {
  (MR_Integer) 0
};

#line 742 "mdbcomp.feedback.c"
const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 759 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 764 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0 = {
  (MR_String) "fre_open_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_0,
  NULL,
  NULL,
  NULL
};

#line 779 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 784 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1 = {
  (MR_String) "fre_read_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_1,
  NULL,
  NULL,
  NULL
};

#line 799 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 805 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_2[2] = {
  (MR_String) "fre_pe_message",
  (MR_String) "fre_pe_line_no"
};

#line 811 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2 = {
  (MR_String) "fre_parse_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_2,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_2,
  NULL,
  NULL
};

#line 826 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3 = {
  (MR_String) "fre_unexpected_eof",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 841 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 846 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4 = {
  (MR_String) "fre_incorrect_version",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_4,
  NULL,
  NULL,
  NULL
};

#line 861 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5 = {
  (MR_String) "fre_incorrect_first_line",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 876 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 882 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_6[2] = {
  (MR_String) "fre_ippn_expected",
  (MR_String) "fre_ippn_got"
};

#line 888 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6 = {
  (MR_String) "fre_incorrect_profiled_program_name",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 6,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_6,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_6,
  NULL,
  NULL
};

#line 903 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 908 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_7[1] = {
  (MR_String) "fre_component_name"
};

#line 913 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_7 = {
  (MR_String) "fre_repeated_component",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 7,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_7,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_7,
  NULL,
  NULL
};

#line 928 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_0[2] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5
};

#line 934 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_1[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0
};

#line 939 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_2[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1
};

#line 944 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_3[4] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_7
};

#line 952 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_read_error_0[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_2
  },
  {
    (MR_Integer) 4,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_3
  }
};

#line 976 "mdbcomp.feedback.c"
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

#line 988 "mdbcomp.feedback.c"
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

#line 1000 "mdbcomp.feedback.c"
const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1017 "mdbcomp.feedback.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__feedback__maybe__pti_maybe_error_2__pseudo_1__plain_mdbcomp__feedback__type_ctor_info_feedback_read_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0
  }
};

#line 1026 "mdbcomp.feedback.c"
const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
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

#line 1043 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0 = {
  (MR_String) "fwr_ok",
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

#line 1058 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 1063 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1 = {
  (MR_String) "fwr_open_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_1,
  NULL,
  NULL,
  NULL
};

#line 1078 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 1083 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2 = {
  (MR_String) "fwr_write_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_2,
  NULL,
  NULL,
  NULL
};

#line 1098 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0
};

#line 1103 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_1[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1
};

#line 1108 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_2[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2
};

#line 1113 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_write_result_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_2
  }
};

#line 1132 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_write_result_0[3] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2
};

#line 1139 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_write_result_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1146 "mdbcomp.feedback.c"
const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_write_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

#line 1163 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_component_wrapper_0_0_10001(
#line 1166 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1168 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1170 "mdbcomp.feedback.c"
{
#line 1172 "mdbcomp.feedback.c"
  {
#line 1174 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1177 "mdbcomp.feedback.c"
    {
#line 1179 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_component_wrapper_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1182 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1184 "mdbcomp.feedback.c"
  }
#line 1186 "mdbcomp.feedback.c"
}

#line 1189 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_component_wrapper_0_0_10001(
#line 1192 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1194 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1196 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1198 "mdbcomp.feedback.c"
{
#line 1200 "mdbcomp.feedback.c"
  {
#line 1202 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1205 "mdbcomp.feedback.c"
    {
#line 1207 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_component_wrapper_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1210 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1212 "mdbcomp.feedback.c"
  }
#line 1214 "mdbcomp.feedback.c"
}

#line 1217 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_0_0_10001(
#line 1220 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1222 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1224 "mdbcomp.feedback.c"
{
#line 1226 "mdbcomp.feedback.c"
  {
#line 1228 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1231 "mdbcomp.feedback.c"
    {
#line 1233 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_info_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1236 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1238 "mdbcomp.feedback.c"
  }
#line 1240 "mdbcomp.feedback.c"
}

#line 1243 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0_10001(
#line 1246 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1248 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1250 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1252 "mdbcomp.feedback.c"
{
#line 1254 "mdbcomp.feedback.c"
  {
#line 1256 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1259 "mdbcomp.feedback.c"
    {
#line 1261 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_info_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1264 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1266 "mdbcomp.feedback.c"
  }
#line 1268 "mdbcomp.feedback.c"
}

#line 1271 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0_10001(
#line 1274 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1276 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1278 "mdbcomp.feedback.c"
{
#line 1280 "mdbcomp.feedback.c"
  {
#line 1282 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1285 "mdbcomp.feedback.c"
    {
#line 1287 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1290 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1292 "mdbcomp.feedback.c"
  }
#line 1294 "mdbcomp.feedback.c"
}

#line 1297 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0_10001(
#line 1300 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1302 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1304 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1306 "mdbcomp.feedback.c"
{
#line 1308 "mdbcomp.feedback.c"
  {
#line 1310 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1313 "mdbcomp.feedback.c"
    {
#line 1315 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1318 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1320 "mdbcomp.feedback.c"
  }
#line 1322 "mdbcomp.feedback.c"
}

#line 1325 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0_10001(
#line 1328 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1330 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1332 "mdbcomp.feedback.c"
{
#line 1334 "mdbcomp.feedback.c"
  {
#line 1336 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1339 "mdbcomp.feedback.c"
    {
#line 1341 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_read_error_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1344 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1346 "mdbcomp.feedback.c"
  }
#line 1348 "mdbcomp.feedback.c"
}

#line 1351 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0_10001(
#line 1354 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1356 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1358 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1360 "mdbcomp.feedback.c"
{
#line 1362 "mdbcomp.feedback.c"
  {
#line 1364 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1367 "mdbcomp.feedback.c"
    {
#line 1369 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_read_error_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1372 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1374 "mdbcomp.feedback.c"
  }
#line 1376 "mdbcomp.feedback.c"
}

#line 1379 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0_10001(
#line 1382 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1384 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1386 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1388 "mdbcomp.feedback.c"
{
#line 1390 "mdbcomp.feedback.c"
  {
#line 1392 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1395 "mdbcomp.feedback.c"
    {
#line 1397 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_read_result_1_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1400 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1402 "mdbcomp.feedback.c"
  }
#line 1404 "mdbcomp.feedback.c"
}

#line 1407 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0_10001(
#line 1410 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1412 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_2,
#line 1414 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3,
#line 1416 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_4)
#line 1418 "mdbcomp.feedback.c"
{
#line 1420 "mdbcomp.feedback.c"
  {
#line 1422 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1425 "mdbcomp.feedback.c"
    {
#line 1427 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_read_result_1_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), &mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_3), ((MR_Word) mdbcomp__feedback__wrapper_arg_4));
    }
#line 1430 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_2 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1432 "mdbcomp.feedback.c"
  }
#line 1434 "mdbcomp.feedback.c"
}

#line 1437 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_write_result_0_0_10001(
#line 1440 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1442 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1444 "mdbcomp.feedback.c"
{
#line 1446 "mdbcomp.feedback.c"
  {
#line 1448 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1451 "mdbcomp.feedback.c"
    {
#line 1453 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_write_result_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1456 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1458 "mdbcomp.feedback.c"
  }
#line 1460 "mdbcomp.feedback.c"
}

#line 1463 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0_10001(
#line 1466 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1468 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1470 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1472 "mdbcomp.feedback.c"
{
#line 1474 "mdbcomp.feedback.c"
  {
#line 1476 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1479 "mdbcomp.feedback.c"
    {
#line 1481 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_write_result_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1484 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1486 "mdbcomp.feedback.c"
  }
#line 1488 "mdbcomp.feedback.c"
}

#line 454 "feedback.m"
void MR_CALL 
mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_102_105_108_101_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_51_93_95_48_6_p_0(
#line 454 "feedback.m"
  MR_Word mdbcomp__feedback__MaybeExpectedProfiledProgramName_7,
#line 454 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_8,
#line 454 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_10)
#line 454 "feedback.m"
{
#line 458 "feedback.m"
  {
#line 458 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 458 "feedback.m"
    MR_Word mdbcomp__feedback__IOResultLine_12;

#line 459 "feedback.m"
    {
#line 459 "feedback.m"
      mercury__io__read_line_as_string_4_p_0(mdbcomp__feedback__Stream_8, &mdbcomp__feedback__IOResultLine_12);
    }
#line 477 "feedback.m"
#line 477 "feedback.m"
    switch (MR_tag((MR_Word) mdbcomp__feedback__IOResultLine_12)) {
#line 477 "feedback.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 477 "feedback.m"
      case (MR_Integer) 0:
#line 478 "feedback.m"
        {
#line 479 "feedback.m"
          *mdbcomp__feedback__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[1]);
#line 478 "feedback.m"
        }
#line 477 "feedback.m"
        break;
#line 477 "feedback.m"
      case (MR_Integer) 1:
#line 461 "feedback.m"
        {
#line 461 "feedback.m"
          MR_String mdbcomp__feedback__String_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__IOResultLine_12, (MR_Integer) 0)));
#line 461 "feedback.m"
          MR_String mdbcomp__feedback__ActualProfiledProgramName_14;

#line 462 "feedback.m"
          {
#line 462 "feedback.m"
            mdbcomp__feedback__ActualProfiledProgramName_14 = mercury__string__strip_1_f_0(mdbcomp__feedback__String_13);
          }
#line 466 "feedback.m"
          if ((mdbcomp__feedback__MaybeExpectedProfiledProgramName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "feedback.m"
            {
#line 465 "feedback.m"
              MR_Word base;
#line 465 "feedback.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 465 "feedback.m"
              *mdbcomp__feedback__Result_10 = base;
#line 465 "feedback.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__ActualProfiledProgramName_14));
#line 465 "feedback.m"
            }
#line 466 "feedback.m"
          else
#line 468 "feedback.m"
            {
#line 468 "feedback.m"
              MR_String mdbcomp__feedback__ExpectedProfiledProgramName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__MaybeExpectedProfiledProgramName_7, (MR_Integer) 0)));

#line 469 "feedback.m"
              mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__ActualProfiledProgramName_14, mdbcomp__feedback__ExpectedProfiledProgramName_15) == 0);
#line 469 "feedback.m"
              if (mdbcomp__feedback__succeeded)
#line 470 "feedback.m"
                {
#line 470 "feedback.m"
                  MR_Word base;
#line 470 "feedback.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 470 "feedback.m"
                  *mdbcomp__feedback__Result_10 = base;
#line 470 "feedback.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__ActualProfiledProgramName_14));
#line 470 "feedback.m"
                }
#line 469 "feedback.m"
              else
#line 472 "feedback.m"
                {
#line 472 "feedback.m"
                  MR_Word mdbcomp__feedback__V_22_22;

#line 472 "feedback.m"
                  {
#line 472 "feedback.m"
                    mdbcomp__feedback__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 472 "feedback.m"
                    MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 472 "feedback.m"
                    MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_22_22, 1) = ((MR_Box) (mdbcomp__feedback__ExpectedProfiledProgramName_15));
#line 472 "feedback.m"
                    MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_22_22, 2) = ((MR_Box) (mdbcomp__feedback__ActualProfiledProgramName_14));
#line 472 "feedback.m"
                  }
#line 472 "feedback.m"
                  {
#line 472 "feedback.m"
                    MR_Word base;
#line 472 "feedback.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 472 "feedback.m"
                    *mdbcomp__feedback__Result_10 = base;
#line 472 "feedback.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_22_22));
#line 472 "feedback.m"
                  }
#line 472 "feedback.m"
                }
#line 468 "feedback.m"
            }
#line 461 "feedback.m"
        }
#line 477 "feedback.m"
        break;
#line 477 "feedback.m"
      case (MR_Integer) 2:
#line 481 "feedback.m"
        {
#line 481 "feedback.m"
          MR_Word mdbcomp__feedback__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__IOResultLine_12, (MR_Integer) 0)));
#line 481 "feedback.m"
          MR_Word mdbcomp__feedback__V_20_20;

#line 482 "feedback.m"
          {
#line 482 "feedback.m"
            mdbcomp__feedback__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 482 "feedback.m"
            MR_hl_field(MR_mktag(2), mdbcomp__feedback__V_20_20, 0) = ((MR_Box) (mdbcomp__feedback__Error_16));
#line 482 "feedback.m"
          }
#line 482 "feedback.m"
          {
#line 482 "feedback.m"
            MR_Word base;
#line 482 "feedback.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 482 "feedback.m"
            *mdbcomp__feedback__Result_10 = base;
#line 482 "feedback.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_20_20));
#line 482 "feedback.m"
          }
#line 481 "feedback.m"
        }
#line 477 "feedback.m"
        break;
#line 477 "feedback.m"
    }
#line 458 "feedback.m"
  }
#line 454 "feedback.m"
}

#line 429 "feedback.m"
void MR_CALL 
mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0(
#line 429 "feedback.m"
  MR_String mdbcomp__feedback__TestLine_8,
#line 429 "feedback.m"
  MR_Word mdbcomp__feedback__NotMatchError_9,
#line 429 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_10,
#line 429 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_12)
#line 429 "feedback.m"
{
#line 433 "feedback.m"
  {
#line 433 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 433 "feedback.m"
    MR_Word mdbcomp__feedback__IOResultLine_14;

#line 434 "feedback.m"
    {
#line 434 "feedback.m"
      mercury__io__read_line_as_string_4_p_0(mdbcomp__feedback__Stream_10, &mdbcomp__feedback__IOResultLine_14);
    }
#line 446 "feedback.m"
#line 446 "feedback.m"
    switch (MR_tag((MR_Word) mdbcomp__feedback__IOResultLine_14)) {
#line 446 "feedback.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 446 "feedback.m"
      case (MR_Integer) 0:
#line 447 "feedback.m"
        {
#line 448 "feedback.m"
          *mdbcomp__feedback__Result_12 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[1]);
#line 447 "feedback.m"
        }
#line 446 "feedback.m"
        break;
#line 446 "feedback.m"
      case (MR_Integer) 1:
#line 436 "feedback.m"
        {
#line 436 "feedback.m"
          MR_String mdbcomp__feedback__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__IOResultLine_14, (MR_Integer) 0)));

#line 438 "feedback.m"
          mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__Line_15, mdbcomp__feedback__TestLine_8) == 0);
#line 439 "feedback.m"
          if (!(mdbcomp__feedback__succeeded))
#line 439 "feedback.m"
            {
#line 439 "feedback.m"
              MR_String mdbcomp__feedback__V_25_25;

#line 439 "feedback.m"
              {
#line 439 "feedback.m"
                mdbcomp__feedback__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__TestLine_8, (MR_String) "\n");
              }
#line 439 "feedback.m"
              mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__Line_15, mdbcomp__feedback__V_25_25) == 0);
#line 439 "feedback.m"
            }
#line 437 "feedback.m"
          if (mdbcomp__feedback__succeeded)
#line 442 "feedback.m"
            {
#line 442 "feedback.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 442 "feedback.m"
              *mdbcomp__feedback__Result_12 = (MR_Word) &mdbcomp__feedback_scalar_common_4[3];
#line 442 "feedback.m"
            }
#line 437 "feedback.m"
          else
#line 444 "feedback.m"
            {
#line 444 "feedback.m"
              MR_Word base;
#line 444 "feedback.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 444 "feedback.m"
              *mdbcomp__feedback__Result_12 = base;
#line 444 "feedback.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__NotMatchError_9));
#line 444 "feedback.m"
            }
#line 436 "feedback.m"
        }
#line 446 "feedback.m"
        break;
#line 446 "feedback.m"
      case (MR_Integer) 2:
#line 450 "feedback.m"
        {
#line 450 "feedback.m"
          MR_Word mdbcomp__feedback__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__IOResultLine_14, (MR_Integer) 0)));
#line 450 "feedback.m"
          MR_Word mdbcomp__feedback__V_20_20;

#line 451 "feedback.m"
          {
#line 451 "feedback.m"
            mdbcomp__feedback__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 451 "feedback.m"
            MR_hl_field(MR_mktag(2), mdbcomp__feedback__V_20_20, 0) = ((MR_Box) (mdbcomp__feedback__Error_16));
#line 451 "feedback.m"
          }
#line 451 "feedback.m"
          {
#line 451 "feedback.m"
            MR_Word base;
#line 451 "feedback.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 451 "feedback.m"
            *mdbcomp__feedback__Result_12 = base;
#line 451 "feedback.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_20_20));
#line 451 "feedback.m"
          }
#line 450 "feedback.m"
        }
#line 446 "feedback.m"
        break;
#line 446 "feedback.m"
    }
#line 433 "feedback.m"
  }
#line 429 "feedback.m"
}

#line 300 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__replace_feedback_candidate_parallel_conjunctions__300__1_2_p_0(
#line 300 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
#line 300 "feedback.m"
  MR_String mdbcomp__feedback__HeadVar__2_13)
#line 300 "feedback.m"
{
#line 300 "feedback.m"
  {
#line 300 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__HeadVar__2_13, mdbcomp__feedback__ProfiledProgramName_5) == 0);

#line 300 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 300 "feedback.m"
  }
#line 300 "feedback.m"
}

#line 294 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__294__1_2_p_0(
#line 294 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_17,
#line 294 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_18)
#line 294 "feedback.m"
{
#line 294 "feedback.m"
  {
#line 294 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 294 "feedback.m"
    {
#line 294 "feedback.m"
      mdbcomp__feedback__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[0], ((MR_Box) (mdbcomp__feedback__HeadVar__1_17)), ((MR_Box) (mdbcomp__feedback__HeadVar__2_18)));
    }
#line 294 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 294 "feedback.m"
  }
#line 294 "feedback.m"
}

#line 292 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__292__1_2_p_0(
#line 292 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
#line 292 "feedback.m"
  MR_String mdbcomp__feedback__HeadVar__2_13)
#line 292 "feedback.m"
{
#line 292 "feedback.m"
  {
#line 292 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__HeadVar__2_13, mdbcomp__feedback__ProfiledProgramName_5) == 0);

#line 292 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 292 "feedback.m"
  }
#line 292 "feedback.m"
}

#line 204 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0(
#line 204 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 204 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 204 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 204 "feedback.m"
{
#line 204 "feedback.m"
  {
#line 204 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 204 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_16 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 204 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_17 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 204 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_16 == mdbcomp__feedback__CastY_17);
#line 204 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 1884 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 204 "feedback.m"
    else
#line 204 "feedback.m"
#line 204 "feedback.m"
      switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) {
#line 204 "feedback.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 204 "feedback.m"
        case (MR_Integer) 0:
#line 204 "feedback.m"
#line 204 "feedback.m"
          switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
#line 204 "feedback.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 204 "feedback.m"
            case (MR_Integer) 0:
#line 204 "feedback.m"
              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 204 "feedback.m"
              break;
#line 204 "feedback.m"
            case (MR_Integer) 1:
#line 1908 "mdbcomp.feedback.c"
              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 204 "feedback.m"
              break;
#line 204 "feedback.m"
            case (MR_Integer) 2:
#line 1914 "mdbcomp.feedback.c"
              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 204 "feedback.m"
              break;
#line 204 "feedback.m"
          }
#line 204 "feedback.m"
          break;
#line 204 "feedback.m"
        case (MR_Integer) 1:
#line 204 "feedback.m"
          {
#line 204 "feedback.m"
            MR_Word mdbcomp__feedback__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 204 "feedback.m"
#line 204 "feedback.m"
            switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
#line 204 "feedback.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 204 "feedback.m"
              case (MR_Integer) 0:
#line 1936 "mdbcomp.feedback.c"
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 204 "feedback.m"
                break;
#line 204 "feedback.m"
              case (MR_Integer) 1:
#line 204 "feedback.m"
                {
#line 204 "feedback.m"
                  MR_Word mdbcomp__feedback__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

#line 204 "feedback.m"
                  {
#line 204 "feedback.m"
                    mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_20_20, mdbcomp__feedback__V_8_8);
                  }
#line 204 "feedback.m"
                }
#line 204 "feedback.m"
                break;
#line 204 "feedback.m"
              case (MR_Integer) 2:
#line 1958 "mdbcomp.feedback.c"
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 204 "feedback.m"
                break;
#line 204 "feedback.m"
            }
#line 204 "feedback.m"
          }
#line 204 "feedback.m"
          break;
#line 204 "feedback.m"
        case (MR_Integer) 2:
#line 204 "feedback.m"
          {
#line 204 "feedback.m"
            MR_Word mdbcomp__feedback__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 204 "feedback.m"
#line 204 "feedback.m"
            switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
#line 204 "feedback.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 204 "feedback.m"
              case (MR_Integer) 0:
#line 1982 "mdbcomp.feedback.c"
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 204 "feedback.m"
                break;
#line 204 "feedback.m"
              case (MR_Integer) 1:
#line 1988 "mdbcomp.feedback.c"
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 204 "feedback.m"
                break;
#line 204 "feedback.m"
              case (MR_Integer) 2:
#line 204 "feedback.m"
                {
#line 204 "feedback.m"
                  MR_Word mdbcomp__feedback__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

#line 204 "feedback.m"
                  {
#line 204 "feedback.m"
                    mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_21_21, mdbcomp__feedback__V_15_15);
                  }
#line 204 "feedback.m"
                }
#line 204 "feedback.m"
                break;
#line 204 "feedback.m"
            }
#line 204 "feedback.m"
          }
#line 204 "feedback.m"
          break;
#line 204 "feedback.m"
      }
#line 204 "feedback.m"
  }
#line 204 "feedback.m"
}

#line 204 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_write_result_0_0(
#line 204 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 204 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 204 "feedback.m"
{
#line 204 "feedback.m"
  {
#line 204 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 204 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_9 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 204 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_10 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 204 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_9 == mdbcomp__feedback__CastY_10);
#line 204 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 204 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 204 "feedback.m"
    else
#line 204 "feedback.m"
#line 204 "feedback.m"
      switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) {
#line 204 "feedback.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 204 "feedback.m"
        case (MR_Integer) 0:
#line 204 "feedback.m"
          {
#line 204 "feedback.m"
            MR_Integer mdbcomp__feedback__CastX_3 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 204 "feedback.m"
            MR_Integer mdbcomp__feedback__CastY_4 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 204 "feedback.m"
            mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastY_4 == mdbcomp__feedback__CastX_3);
#line 204 "feedback.m"
          }
#line 204 "feedback.m"
          break;
#line 204 "feedback.m"
        case (MR_Integer) 1:
#line 204 "feedback.m"
          {
#line 204 "feedback.m"
            MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "feedback.m"
            MR_Word mdbcomp__feedback__V_6_6;

#line 204 "feedback.m"
            mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 204 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 204 "feedback.m"
              {
#line 204 "feedback.m"
                mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 2084 "mdbcomp.feedback.c"
                {
#line 2086 "mdbcomp.feedback.c"
                  mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__V_5_5, mdbcomp__feedback__V_6_6);
                }
#line 204 "feedback.m"
              }
#line 204 "feedback.m"
          }
#line 204 "feedback.m"
          break;
#line 204 "feedback.m"
        case (MR_Integer) 2:
#line 204 "feedback.m"
          {
#line 204 "feedback.m"
            MR_Word mdbcomp__feedback__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 204 "feedback.m"
            MR_Word mdbcomp__feedback__V_8_8;

#line 204 "feedback.m"
            mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 204 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 204 "feedback.m"
              {
#line 204 "feedback.m"
                mdbcomp__feedback__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 2112 "mdbcomp.feedback.c"
                {
#line 2114 "mdbcomp.feedback.c"
                  mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__V_7_7, mdbcomp__feedback__V_8_8);
                }
#line 204 "feedback.m"
              }
#line 204 "feedback.m"
          }
#line 204 "feedback.m"
          break;
#line 204 "feedback.m"
      }
#line 204 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 204 "feedback.m"
  }
#line 204 "feedback.m"
}

#line 145 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0(
#line 145 "feedback.m"
  MR_Word mdbcomp__feedback__TypeInfo_for_T_6,
#line 145 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 145 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 145 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 145 "feedback.m"
{
#line 145 "feedback.m"
  {
#line 145 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 145 "feedback.m"
    MR_Word mdbcomp__feedback__Cast_HeadVar1_4 = mdbcomp__feedback__HeadVar__2_2;
#line 145 "feedback.m"
    MR_Word mdbcomp__feedback__Cast_HeadVar2_5 = mdbcomp__feedback__HeadVar__3_3;

#line 145 "feedback.m"
    {
#line 145 "feedback.m"
      mercury__maybe____Compare____maybe_error_2_0(mdbcomp__feedback__TypeInfo_for_T_6, (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0, mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__Cast_HeadVar1_4, mdbcomp__feedback__Cast_HeadVar2_5);
    }
#line 145 "feedback.m"
  }
#line 145 "feedback.m"
}

#line 145 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0(
#line 145 "feedback.m"
  MR_Word mdbcomp__feedback__TypeInfo_for_T_5,
#line 145 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 145 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 145 "feedback.m"
{
#line 145 "feedback.m"
  {
#line 145 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 145 "feedback.m"
    MR_Word mdbcomp__feedback__Cast_HeadVar1_3 = mdbcomp__feedback__HeadVar__1_1;
#line 145 "feedback.m"
    MR_Word mdbcomp__feedback__Cast_HeadVar2_4 = mdbcomp__feedback__HeadVar__2_2;

#line 145 "feedback.m"
    {
#line 145 "feedback.m"
      mdbcomp__feedback__succeeded = mercury__maybe____Unify____maybe_error_2_0(mdbcomp__feedback__TypeInfo_for_T_5, (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0, mdbcomp__feedback__Cast_HeadVar1_3, mdbcomp__feedback__Cast_HeadVar2_4);
    }
#line 145 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 145 "feedback.m"
  }
#line 145 "feedback.m"
}

#line 147 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0(
#line 147 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 147 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 147 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 147 "feedback.m"
{
#line 147 "feedback.m"
  {
#line 147 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 147 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_134 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 147 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_135 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 147 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_134 == mdbcomp__feedback__CastY_135);
#line 147 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 2220 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "feedback.m"
    else
#line 147 "feedback.m"
#line 147 "feedback.m"
      switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) {
#line 147 "feedback.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
        case (MR_Integer) 0:
#line 147 "feedback.m"
#line 147 "feedback.m"
          switch (MR_unmkbody(mdbcomp__feedback__HeadVar__2_2)) {
#line 147 "feedback.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
            case (MR_Integer) 0:
#line 147 "feedback.m"
#line 147 "feedback.m"
              switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                case (MR_Integer) 0:
#line 147 "feedback.m"
#line 147 "feedback.m"
                  switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                    case (MR_Integer) 0:
#line 147 "feedback.m"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "feedback.m"
                      break;
#line 147 "feedback.m"
                    case (MR_Integer) 1:
#line 147 "feedback.m"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                      break;
#line 147 "feedback.m"
                  }
#line 147 "feedback.m"
                  break;
#line 147 "feedback.m"
                case (MR_Integer) 1:
#line 2268 "mdbcomp.feedback.c"
                  *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                  break;
#line 147 "feedback.m"
                case (MR_Integer) 2:
#line 2274 "mdbcomp.feedback.c"
                  *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                  break;
#line 147 "feedback.m"
                case (MR_Integer) 3:
#line 147 "feedback.m"
#line 147 "feedback.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
#line 147 "feedback.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                    case (MR_Integer) 0:
#line 2287 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                      break;
#line 147 "feedback.m"
                    case (MR_Integer) 1:
#line 2293 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                      break;
#line 147 "feedback.m"
                    case (MR_Integer) 2:
#line 2299 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                      break;
#line 147 "feedback.m"
                    case (MR_Integer) 3:
#line 2305 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                      break;
#line 147 "feedback.m"
                  }
#line 147 "feedback.m"
                  break;
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
              break;
#line 147 "feedback.m"
            case (MR_Integer) 1:
#line 147 "feedback.m"
#line 147 "feedback.m"
              switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                case (MR_Integer) 0:
#line 147 "feedback.m"
#line 147 "feedback.m"
                  switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                    case (MR_Integer) 0:
#line 147 "feedback.m"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                      break;
#line 147 "feedback.m"
                    case (MR_Integer) 1:
#line 147 "feedback.m"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "feedback.m"
                      break;
#line 147 "feedback.m"
                  }
#line 147 "feedback.m"
                  break;
#line 147 "feedback.m"
                case (MR_Integer) 1:
#line 2349 "mdbcomp.feedback.c"
                  *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                  break;
#line 147 "feedback.m"
                case (MR_Integer) 2:
#line 2355 "mdbcomp.feedback.c"
                  *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                  break;
#line 147 "feedback.m"
                case (MR_Integer) 3:
#line 147 "feedback.m"
#line 147 "feedback.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
#line 147 "feedback.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                    case (MR_Integer) 0:
#line 2368 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                      break;
#line 147 "feedback.m"
                    case (MR_Integer) 1:
#line 2374 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                      break;
#line 147 "feedback.m"
                    case (MR_Integer) 2:
#line 2380 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                      break;
#line 147 "feedback.m"
                    case (MR_Integer) 3:
#line 2386 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                      break;
#line 147 "feedback.m"
                  }
#line 147 "feedback.m"
                  break;
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
              break;
#line 147 "feedback.m"
          }
#line 147 "feedback.m"
          break;
#line 147 "feedback.m"
        case (MR_Integer) 1:
#line 147 "feedback.m"
          {
#line 147 "feedback.m"
            MR_Word mdbcomp__feedback__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 147 "feedback.m"
#line 147 "feedback.m"
            switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
              case (MR_Integer) 0:
#line 147 "feedback.m"
#line 147 "feedback.m"
                switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                  case (MR_Integer) 0:
#line 2423 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 1:
#line 2429 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                }
#line 147 "feedback.m"
                break;
#line 147 "feedback.m"
              case (MR_Integer) 1:
#line 147 "feedback.m"
                {
#line 147 "feedback.m"
                  MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

#line 147 "feedback.m"
                  {
#line 147 "feedback.m"
                    mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_147_147, mdbcomp__feedback__V_5_5);
                  }
#line 147 "feedback.m"
                }
#line 147 "feedback.m"
                break;
#line 147 "feedback.m"
              case (MR_Integer) 2:
#line 2455 "mdbcomp.feedback.c"
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                break;
#line 147 "feedback.m"
              case (MR_Integer) 3:
#line 147 "feedback.m"
#line 147 "feedback.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
#line 147 "feedback.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                  case (MR_Integer) 0:
#line 2468 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 1:
#line 2474 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 2:
#line 2480 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 3:
#line 2486 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                }
#line 147 "feedback.m"
                break;
#line 147 "feedback.m"
            }
#line 147 "feedback.m"
          }
#line 147 "feedback.m"
          break;
#line 147 "feedback.m"
        case (MR_Integer) 2:
#line 147 "feedback.m"
          {
#line 147 "feedback.m"
            MR_Word mdbcomp__feedback__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 147 "feedback.m"
#line 147 "feedback.m"
            switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
              case (MR_Integer) 0:
#line 147 "feedback.m"
#line 147 "feedback.m"
                switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                  case (MR_Integer) 0:
#line 2521 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 1:
#line 2527 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                }
#line 147 "feedback.m"
                break;
#line 147 "feedback.m"
              case (MR_Integer) 1:
#line 2537 "mdbcomp.feedback.c"
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                break;
#line 147 "feedback.m"
              case (MR_Integer) 2:
#line 147 "feedback.m"
                {
#line 147 "feedback.m"
                  MR_Word mdbcomp__feedback__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

#line 147 "feedback.m"
                  {
#line 147 "feedback.m"
                    mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_150_150, mdbcomp__feedback__V_23_23);
                  }
#line 147 "feedback.m"
                }
#line 147 "feedback.m"
                break;
#line 147 "feedback.m"
              case (MR_Integer) 3:
#line 147 "feedback.m"
#line 147 "feedback.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
#line 147 "feedback.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                  case (MR_Integer) 0:
#line 2566 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 1:
#line 2572 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 2:
#line 2578 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 3:
#line 2584 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                }
#line 147 "feedback.m"
                break;
#line 147 "feedback.m"
            }
#line 147 "feedback.m"
          }
#line 147 "feedback.m"
          break;
#line 147 "feedback.m"
        case (MR_Integer) 3:
#line 147 "feedback.m"
#line 147 "feedback.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) {
#line 147 "feedback.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
            case (MR_Integer) 0:
#line 147 "feedback.m"
              {
#line 147 "feedback.m"
                MR_Integer mdbcomp__feedback__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_149_149 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 147 "feedback.m"
#line 147 "feedback.m"
                switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                  case (MR_Integer) 0:
#line 147 "feedback.m"
#line 147 "feedback.m"
                    switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                      case (MR_Integer) 0:
#line 2628 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 1:
#line 2634 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                    }
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 1:
#line 2644 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 2:
#line 2650 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 3:
#line 147 "feedback.m"
#line 147 "feedback.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
#line 147 "feedback.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                      case (MR_Integer) 0:
#line 147 "feedback.m"
                        {
#line 147 "feedback.m"
                          MR_String mdbcomp__feedback__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
#line 147 "feedback.m"
                          MR_Integer mdbcomp__feedback__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 2)));
#line 147 "feedback.m"
                          MR_Word mdbcomp__feedback__V_46_46;

#line 147 "feedback.m"
                          {
#line 147 "feedback.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__feedback__V_46_46, mdbcomp__feedback__V_149_149, mdbcomp__feedback__V_44_44);
                          }
#line 2677 "mdbcomp.feedback.c"
                          mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_46_46 == (MR_Integer) 0);
#line 147 "feedback.m"
                          mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 147 "feedback.m"
                          if (mdbcomp__feedback__succeeded)
#line 147 "feedback.m"
                            *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_46_46;
#line 147 "feedback.m"
                          else
#line 147 "feedback.m"
                            {
#line 147 "feedback.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_148_148, mdbcomp__feedback__V_45_45);
                            }
#line 147 "feedback.m"
                        }
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 1:
#line 2698 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 2:
#line 2704 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 3:
#line 2710 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                    }
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                }
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
              break;
#line 147 "feedback.m"
            case (MR_Integer) 1:
#line 147 "feedback.m"
              {
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_146_146 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 147 "feedback.m"
#line 147 "feedback.m"
                switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                  case (MR_Integer) 0:
#line 147 "feedback.m"
#line 147 "feedback.m"
                    switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                      case (MR_Integer) 0:
#line 2745 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 1:
#line 2751 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                    }
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 1:
#line 2761 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 2:
#line 2767 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 3:
#line 147 "feedback.m"
#line 147 "feedback.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
#line 147 "feedback.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                      case (MR_Integer) 0:
#line 2780 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 1:
#line 147 "feedback.m"
                        {
#line 147 "feedback.m"
                          MR_String mdbcomp__feedback__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));

#line 147 "feedback.m"
                          {
#line 147 "feedback.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_146_146, mdbcomp__feedback__V_78_78);
                          }
#line 147 "feedback.m"
                        }
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 2:
#line 2802 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 3:
#line 2808 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                    }
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                }
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
              break;
#line 147 "feedback.m"
            case (MR_Integer) 2:
#line 147 "feedback.m"
              {
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_144_144 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 147 "feedback.m"
#line 147 "feedback.m"
                switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                  case (MR_Integer) 0:
#line 147 "feedback.m"
#line 147 "feedback.m"
                    switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                      case (MR_Integer) 0:
#line 2845 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 1:
#line 2851 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                    }
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 1:
#line 2861 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 2:
#line 2867 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 3:
#line 147 "feedback.m"
#line 147 "feedback.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
#line 147 "feedback.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                      case (MR_Integer) 0:
#line 2880 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 1:
#line 2886 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 2:
#line 147 "feedback.m"
                        {
#line 147 "feedback.m"
                          MR_String mdbcomp__feedback__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
#line 147 "feedback.m"
                          MR_String mdbcomp__feedback__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 2)));
#line 147 "feedback.m"
                          MR_Word mdbcomp__feedback__V_114_114;

#line 147 "feedback.m"
                          {
#line 147 "feedback.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__feedback__V_114_114, mdbcomp__feedback__V_145_145, mdbcomp__feedback__V_112_112);
                          }
#line 2906 "mdbcomp.feedback.c"
                          mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_114_114 == (MR_Integer) 0);
#line 147 "feedback.m"
                          mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 147 "feedback.m"
                          if (mdbcomp__feedback__succeeded)
#line 147 "feedback.m"
                            *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_114_114;
#line 147 "feedback.m"
                          else
#line 147 "feedback.m"
                            {
#line 147 "feedback.m"
                              mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_144_144, mdbcomp__feedback__V_113_113);
                            }
#line 147 "feedback.m"
                        }
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 3:
#line 2927 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                    }
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                }
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
              break;
#line 147 "feedback.m"
            case (MR_Integer) 3:
#line 147 "feedback.m"
              {
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_151_151 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 147 "feedback.m"
#line 147 "feedback.m"
                switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                  case (MR_Integer) 0:
#line 147 "feedback.m"
#line 147 "feedback.m"
                    switch (MR_unmkbody(mdbcomp__feedback__HeadVar__3_3)) {
#line 147 "feedback.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                      case (MR_Integer) 0:
#line 2962 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 1:
#line 2968 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                    }
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 1:
#line 2978 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 2:
#line 2984 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                  case (MR_Integer) 3:
#line 147 "feedback.m"
#line 147 "feedback.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) {
#line 147 "feedback.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
                      case (MR_Integer) 0:
#line 2997 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 1:
#line 3003 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 2:
#line 3009 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                      case (MR_Integer) 3:
#line 147 "feedback.m"
                        {
#line 147 "feedback.m"
                          MR_String mdbcomp__feedback__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));

#line 147 "feedback.m"
                          {
#line 147 "feedback.m"
                            mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_151_151, mdbcomp__feedback__V_133_133);
                          }
#line 147 "feedback.m"
                        }
#line 147 "feedback.m"
                        break;
#line 147 "feedback.m"
                    }
#line 147 "feedback.m"
                    break;
#line 147 "feedback.m"
                }
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
              break;
#line 147 "feedback.m"
          }
#line 147 "feedback.m"
          break;
#line 147 "feedback.m"
      }
#line 147 "feedback.m"
  }
#line 147 "feedback.m"
}

#line 147 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0(
#line 147 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 147 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 147 "feedback.m"
{
#line 147 "feedback.m"
  {
#line 147 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 147 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_23 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 147 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_24 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 147 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_23 == mdbcomp__feedback__CastY_24);
#line 147 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 147 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 147 "feedback.m"
    else
#line 147 "feedback.m"
#line 147 "feedback.m"
      switch (MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) {
#line 147 "feedback.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
        case (MR_Integer) 0:
#line 147 "feedback.m"
#line 147 "feedback.m"
          switch (MR_unmkbody(mdbcomp__feedback__HeadVar__1_1)) {
#line 147 "feedback.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
            case (MR_Integer) 0:
#line 147 "feedback.m"
              {
#line 147 "feedback.m"
                MR_Integer mdbcomp__feedback__CastX_11 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 147 "feedback.m"
                MR_Integer mdbcomp__feedback__CastY_12 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 147 "feedback.m"
                mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastY_12 == mdbcomp__feedback__CastX_11);
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
              break;
#line 147 "feedback.m"
            case (MR_Integer) 1:
#line 147 "feedback.m"
              {
#line 147 "feedback.m"
                MR_Integer mdbcomp__feedback__CastX_15 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 147 "feedback.m"
                MR_Integer mdbcomp__feedback__CastY_16 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 147 "feedback.m"
                mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastY_16 == mdbcomp__feedback__CastX_15);
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
              break;
#line 147 "feedback.m"
          }
#line 147 "feedback.m"
          break;
#line 147 "feedback.m"
        case (MR_Integer) 1:
#line 147 "feedback.m"
          {
#line 147 "feedback.m"
            MR_Word mdbcomp__feedback__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 147 "feedback.m"
            MR_Word mdbcomp__feedback__V_4_4;

#line 147 "feedback.m"
            mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 147 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 147 "feedback.m"
              {
#line 147 "feedback.m"
                mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 3139 "mdbcomp.feedback.c"
                {
#line 3141 "mdbcomp.feedback.c"
                  mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__V_3_3, mdbcomp__feedback__V_4_4);
                }
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
          }
#line 147 "feedback.m"
          break;
#line 147 "feedback.m"
        case (MR_Integer) 2:
#line 147 "feedback.m"
          {
#line 147 "feedback.m"
            MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 147 "feedback.m"
            MR_Word mdbcomp__feedback__V_6_6;

#line 147 "feedback.m"
            mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 147 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 147 "feedback.m"
              {
#line 147 "feedback.m"
                mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 3167 "mdbcomp.feedback.c"
                {
#line 3169 "mdbcomp.feedback.c"
                  mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__V_5_5, mdbcomp__feedback__V_6_6);
                }
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
          }
#line 147 "feedback.m"
          break;
#line 147 "feedback.m"
        case (MR_Integer) 3:
#line 147 "feedback.m"
#line 147 "feedback.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)))) {
#line 147 "feedback.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 147 "feedback.m"
            case (MR_Integer) 0:
#line 147 "feedback.m"
              {
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 147 "feedback.m"
                MR_Integer mdbcomp__feedback__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 2)));
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_9_9;
#line 147 "feedback.m"
                MR_Integer mdbcomp__feedback__V_10_10;

#line 147 "feedback.m"
                mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 147 "feedback.m"
                if (mdbcomp__feedback__succeeded)
#line 147 "feedback.m"
                  {
#line 147 "feedback.m"
                    mdbcomp__feedback__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 147 "feedback.m"
                    mdbcomp__feedback__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 3208 "mdbcomp.feedback.c"
                    mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_7_7, mdbcomp__feedback__V_9_9) == 0);
#line 147 "feedback.m"
                    if (mdbcomp__feedback__succeeded)
#line 3212 "mdbcomp.feedback.c"
                      mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_8_8 == mdbcomp__feedback__V_10_10);
#line 147 "feedback.m"
                  }
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
              break;
#line 147 "feedback.m"
            case (MR_Integer) 1:
#line 147 "feedback.m"
              {
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_14_14;

#line 147 "feedback.m"
                mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 147 "feedback.m"
                if (mdbcomp__feedback__succeeded)
#line 147 "feedback.m"
                  {
#line 147 "feedback.m"
                    mdbcomp__feedback__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 3237 "mdbcomp.feedback.c"
                    mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_13_13, mdbcomp__feedback__V_14_14) == 0);
#line 147 "feedback.m"
                  }
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
              break;
#line 147 "feedback.m"
            case (MR_Integer) 2:
#line 147 "feedback.m"
              {
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 2)));
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_19_19;
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_20_20;

#line 147 "feedback.m"
                mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 147 "feedback.m"
                if (mdbcomp__feedback__succeeded)
#line 147 "feedback.m"
                  {
#line 147 "feedback.m"
                    mdbcomp__feedback__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 147 "feedback.m"
                    mdbcomp__feedback__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 3268 "mdbcomp.feedback.c"
                    mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_17_17, mdbcomp__feedback__V_19_19) == 0);
#line 147 "feedback.m"
                    if (mdbcomp__feedback__succeeded)
#line 3272 "mdbcomp.feedback.c"
                      mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_18_18, mdbcomp__feedback__V_20_20) == 0);
#line 147 "feedback.m"
                  }
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
              break;
#line 147 "feedback.m"
            case (MR_Integer) 3:
#line 147 "feedback.m"
              {
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 147 "feedback.m"
                MR_String mdbcomp__feedback__V_22_22;

#line 147 "feedback.m"
                mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 147 "feedback.m"
                if (mdbcomp__feedback__succeeded)
#line 147 "feedback.m"
                  {
#line 147 "feedback.m"
                    mdbcomp__feedback__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 3297 "mdbcomp.feedback.c"
                    mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_21_21, mdbcomp__feedback__V_22_22) == 0);
#line 147 "feedback.m"
                  }
#line 147 "feedback.m"
              }
#line 147 "feedback.m"
              break;
#line 147 "feedback.m"
          }
#line 147 "feedback.m"
          break;
#line 147 "feedback.m"
      }
#line 147 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 147 "feedback.m"
  }
#line 147 "feedback.m"
}

#line 78 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0(
#line 78 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 78 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 78 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 78 "feedback.m"
{
#line 78 "feedback.m"
  {
#line 78 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 78 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_9 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 78 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_10 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 78 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_9 == mdbcomp__feedback__CastY_10);
#line 78 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 3342 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "feedback.m"
    else
#line 78 "feedback.m"
      {
#line 78 "feedback.m"
        MR_Word mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 78 "feedback.m"
        MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "feedback.m"
        MR_Word mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));
#line 78 "feedback.m"
        MR_Word mdbcomp__feedback__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "feedback.m"
        MR_Word mdbcomp__feedback__V_8_8;

#line 78 "feedback.m"
        {
#line 78 "feedback.m"
          mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0(&mdbcomp__feedback__V_8_8, mdbcomp__feedback__V_4_4, mdbcomp__feedback__V_6_6);
        }
#line 3364 "mdbcomp.feedback.c"
        mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_8_8 == (MR_Integer) 0);
#line 78 "feedback.m"
        mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 78 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 78 "feedback.m"
          *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_8_8;
#line 78 "feedback.m"
        else
#line 78 "feedback.m"
          {
#line 78 "feedback.m"
            {
#line 78 "feedback.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[4], mdbcomp__feedback__HeadVar__1_1, ((MR_Box) (mdbcomp__feedback__V_5_5)), ((MR_Box) (mdbcomp__feedback__V_7_7)));
            }
#line 78 "feedback.m"
          }
#line 78 "feedback.m"
      }
#line 78 "feedback.m"
  }
#line 78 "feedback.m"
}

#line 78 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0(
#line 78 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 78 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 78 "feedback.m"
{
#line 78 "feedback.m"
  {
#line 78 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 78 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_7 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 78 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_8 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 78 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_7 == mdbcomp__feedback__CastY_8);
#line 78 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 78 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 78 "feedback.m"
    else
#line 78 "feedback.m"
      {
#line 78 "feedback.m"
        MR_Word mdbcomp__feedback__TypeInfo_10_10;
#line 78 "feedback.m"
        MR_Word mdbcomp__feedback__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 78 "feedback.m"
        MR_Word mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "feedback.m"
        MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 78 "feedback.m"
        MR_Word mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 3429 "mdbcomp.feedback.c"
        {
#line 3431 "mdbcomp.feedback.c"
          mdbcomp__feedback__succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0(mdbcomp__feedback__V_3_3, mdbcomp__feedback__V_5_5);
        }
#line 78 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 78 "feedback.m"
          {
#line 3438 "mdbcomp.feedback.c"
            mdbcomp__feedback__TypeInfo_10_10 = (MR_Word) &mdbcomp__feedback_scalar_common_1[4];
#line 3440 "mdbcomp.feedback.c"
            {
#line 3442 "mdbcomp.feedback.c"
              mdbcomp__feedback__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__feedback__TypeInfo_10_10, ((MR_Box) (mdbcomp__feedback__V_4_4)), ((MR_Box) (mdbcomp__feedback__V_6_6)));
            }
#line 78 "feedback.m"
          }
#line 78 "feedback.m"
      }
#line 78 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 78 "feedback.m"
  }
#line 78 "feedback.m"
}

#line 255 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0(
#line 255 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 255 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 255 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 255 "feedback.m"
{
#line 255 "feedback.m"
  {
#line 255 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 255 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_9 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 255 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_10 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 255 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_9 == mdbcomp__feedback__CastY_10);
#line 255 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 3480 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 255 "feedback.m"
    else
#line 255 "feedback.m"
      {
#line 255 "feedback.m"
        MR_String mdbcomp__feedback__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 255 "feedback.m"
        MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 255 "feedback.m"
        MR_String mdbcomp__feedback__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));
#line 255 "feedback.m"
        MR_Word mdbcomp__feedback__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
#line 255 "feedback.m"
        MR_Word mdbcomp__feedback__V_8_8;

#line 255 "feedback.m"
        {
#line 255 "feedback.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__feedback__V_8_8, mdbcomp__feedback__V_4_4, mdbcomp__feedback__V_6_6);
        }
#line 3502 "mdbcomp.feedback.c"
        mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_8_8 == (MR_Integer) 0);
#line 255 "feedback.m"
        mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 255 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 255 "feedback.m"
          *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_8_8;
#line 255 "feedback.m"
        else
#line 255 "feedback.m"
          {
#line 255 "feedback.m"
            {
#line 255 "feedback.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[0], mdbcomp__feedback__HeadVar__1_1, ((MR_Box) (mdbcomp__feedback__V_5_5)), ((MR_Box) (mdbcomp__feedback__V_7_7)));
            }
#line 255 "feedback.m"
          }
#line 255 "feedback.m"
      }
#line 255 "feedback.m"
  }
#line 255 "feedback.m"
}

#line 255 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_0_0(
#line 255 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 255 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 255 "feedback.m"
{
#line 255 "feedback.m"
  {
#line 255 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 255 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_7 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 255 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_8 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 255 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_7 == mdbcomp__feedback__CastY_8);
#line 255 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 255 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 255 "feedback.m"
    else
#line 255 "feedback.m"
      {
#line 255 "feedback.m"
        MR_Word mdbcomp__feedback__TypeInfo_9_9;
#line 255 "feedback.m"
        MR_String mdbcomp__feedback__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 255 "feedback.m"
        MR_Word mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 255 "feedback.m"
        MR_String mdbcomp__feedback__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 255 "feedback.m"
        MR_Word mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 3567 "mdbcomp.feedback.c"
        mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_3_3, mdbcomp__feedback__V_5_5) == 0);
#line 255 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 255 "feedback.m"
          {
#line 3573 "mdbcomp.feedback.c"
            mdbcomp__feedback__TypeInfo_9_9 = (MR_Word) &mdbcomp__feedback_scalar_common_1[0];
#line 3575 "mdbcomp.feedback.c"
            {
#line 3577 "mdbcomp.feedback.c"
              mdbcomp__feedback__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__feedback__TypeInfo_9_9, ((MR_Box) (mdbcomp__feedback__V_4_4)), ((MR_Box) (mdbcomp__feedback__V_6_6)));
            }
#line 255 "feedback.m"
          }
#line 255 "feedback.m"
      }
#line 255 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 255 "feedback.m"
  }
#line 255 "feedback.m"
}

#line 270 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_component_wrapper_0_0(
#line 270 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 270 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 270 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 270 "feedback.m"
{
#line 270 "feedback.m"
  {
#line 270 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 270 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_6 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 270 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_7 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 270 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_6 == mdbcomp__feedback__CastY_7);
#line 270 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 3615 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 270 "feedback.m"
    else
#line 270 "feedback.m"
      {
#line 270 "feedback.m"
        MR_Word mdbcomp__feedback__V_4_4 = (MR_Word) mdbcomp__feedback__HeadVar__2_2;
#line 270 "feedback.m"
        MR_Word mdbcomp__feedback__V_5_5 = (MR_Word) mdbcomp__feedback__HeadVar__3_3;

#line 270 "feedback.m"
        {
#line 270 "feedback.m"
          mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_4_4, mdbcomp__feedback__V_5_5);
        }
#line 270 "feedback.m"
      }
#line 270 "feedback.m"
  }
#line 270 "feedback.m"
}

#line 270 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_component_wrapper_0_0(
#line 270 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 270 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 270 "feedback.m"
{
#line 270 "feedback.m"
  {
#line 270 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 270 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_5 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 270 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_6 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 270 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_5 == mdbcomp__feedback__CastY_6);
#line 270 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 270 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 270 "feedback.m"
    else
#line 270 "feedback.m"
      {
#line 270 "feedback.m"
        MR_Word mdbcomp__feedback__V_3_3 = (MR_Word) mdbcomp__feedback__HeadVar__1_1;
#line 270 "feedback.m"
        MR_Word mdbcomp__feedback__V_4_4 = (MR_Word) mdbcomp__feedback__HeadVar__2_2;

#line 3671 "mdbcomp.feedback.c"
        {
#line 3673 "mdbcomp.feedback.c"
          mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0(mdbcomp__feedback__V_3_3, mdbcomp__feedback__V_4_4);
        }
#line 270 "feedback.m"
      }
#line 270 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 270 "feedback.m"
  }
#line 270 "feedback.m"
}

#line 604 "feedback.m"
MR_String MR_CALL 
mdbcomp__feedback__feedback_version_0_f_0(void)
#line 604 "feedback.m"
{
#line 606 "feedback.m"
  {
#line 606 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 606 "feedback.m"
    return (MR_String) "19";
#line 606 "feedback.m"
  }
#line 604 "feedback.m"
}

#line 600 "feedback.m"
MR_String MR_CALL 
mdbcomp__feedback__feedback_first_line_0_f_0(void)
#line 600 "feedback.m"
{
#line 602 "feedback.m"
  {
#line 602 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 602 "feedback.m"
    return (MR_String) "Mercury Compiler Feedback";
#line 602 "feedback.m"
  }
#line 600 "feedback.m"
}

#line 567 "feedback.m"
void MR_CALL 
mdbcomp__feedback__actually_write_feedback_file_5_p_0(
#line 567 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_6,
#line 567 "feedback.m"
  MR_Word mdbcomp__feedback__FeedbackInfo_7)
#line 567 "feedback.m"
{
#line 570 "feedback.m"
  {
#line 570 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 570 "feedback.m"
    MR_String mdbcomp__feedback__ProfiledProgramName_9;
#line 570 "feedback.m"
    MR_Word mdbcomp__feedback__MaybeCandidateParallelConjs_10;
#line 570 "feedback.m"
    MR_Word mdbcomp__feedback__Components_14;
#line 570 "feedback.m"
    MR_Word mdbcomp__feedback__STATE_VARIABLE_RevComponents_25_25;
#line 570 "feedback.m"
    MR_Word mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26;

#line 570 "feedback.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 571 "feedback.m"
    mdbcomp__feedback__ProfiledProgramName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__FeedbackInfo_7, (MR_Integer) 0)));
#line 571 "feedback.m"
    mdbcomp__feedback__MaybeCandidateParallelConjs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__FeedbackInfo_7, (MR_Integer) 1)));
#line 573 "feedback.m"
    {
#line 573 "feedback.m"
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_6, (MR_String) "Mercury Compiler Feedback");
    }
#line 574 "feedback.m"
    {
#line 574 "feedback.m"
      mercury__io__nl_3_p_0(mdbcomp__feedback__Stream_6);
    }
#line 575 "feedback.m"
    {
#line 575 "feedback.m"
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_6, (MR_String) "19");
    }
#line 576 "feedback.m"
    {
#line 576 "feedback.m"
      mercury__io__nl_3_p_0(mdbcomp__feedback__Stream_6);
    }
#line 577 "feedback.m"
    {
#line 577 "feedback.m"
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_6, mdbcomp__feedback__ProfiledProgramName_9);
    }
#line 578 "feedback.m"
    {
#line 578 "feedback.m"
      mercury__io__nl_3_p_0(mdbcomp__feedback__Stream_6);
    }
#line 581 "feedback.m"
    mdbcomp__feedback__STATE_VARIABLE_RevComponents_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 584 "feedback.m"
    if ((mdbcomp__feedback__MaybeCandidateParallelConjs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 583 "feedback.m"
      mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26 = mdbcomp__feedback__STATE_VARIABLE_RevComponents_25_25;
#line 584 "feedback.m"
    else
#line 585 "feedback.m"
      {
#line 585 "feedback.m"
        MR_Word mdbcomp__feedback__Candidates_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__MaybeCandidateParallelConjs_10, (MR_Integer) 0)));
#line 585 "feedback.m"
        MR_Word mdbcomp__feedback__CandComponent_13 = (MR_Word) mdbcomp__feedback__Candidates_12;

#line 587 "feedback.m"
        {
#line 587 "feedback.m"
          mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 587 "feedback.m"
          MR_hl_field(MR_mktag(1), mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26, 0) = ((MR_Box) (mdbcomp__feedback__CandComponent_13));
#line 587 "feedback.m"
          MR_hl_field(MR_mktag(1), mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26, 1) = ((MR_Box) (mdbcomp__feedback__STATE_VARIABLE_RevComponents_25_25));
#line 587 "feedback.m"
        }
#line 585 "feedback.m"
      }
#line 589 "feedback.m"
    {
#line 589 "feedback.m"
      mercury__list__reverse_2_p_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_component_wrapper_0, mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26, &mdbcomp__feedback__Components_14);
    }
#line 591 "feedback.m"
    {
#line 591 "feedback.m"
      mercury__io__write_4_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[1], mdbcomp__feedback__Stream_6, ((MR_Box) (mdbcomp__feedback__Components_14)));
    }
#line 592 "feedback.m"
    {
#line 592 "feedback.m"
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_6, (MR_String) ".\n");
    }
#line 593 "feedback.m"
    {
#line 593 "feedback.m"
      mercury__io__close_output_3_p_0(mdbcomp__feedback__Stream_6);
    }
#line 570 "feedback.m"
  }
#line 567 "feedback.m"
}

#line 511 "feedback.m"
void MR_CALL 
mdbcomp__feedback__add_feedback_components_3_p_0(
#line 511 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 511 "feedback.m"
  MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_0_2,
#line 511 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_3)
#line 511 "feedback.m"
{
#line 514 "feedback.m"
  while (MR_TRUE)
#line 514 "feedback.m"
    {
#line 514 "feedback.m"
      /* tailcall optimized into a loop */
#line 514 "feedback.m"
      {
#line 514 "feedback.m"
        MR_bool mdbcomp__feedback__succeeded;

#line 514 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "feedback.m"
          {
#line 515 "feedback.m"
            MR_Word base;
#line 515 "feedback.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 515 "feedback.m"
            *mdbcomp__feedback__Result_3 = base;
#line 515 "feedback.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__STATE_VARIABLE_Info_0_2));
#line 515 "feedback.m"
          }
#line 514 "feedback.m"
        else
#line 516 "feedback.m"
          {
#line 516 "feedback.m"
            MR_Word mdbcomp__feedback__Wrapper_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 516 "feedback.m"
            MR_Word mdbcomp__feedback__Wrappers_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 516 "feedback.m"
            MR_Word mdbcomp__feedback__Candidates_11 = (MR_Word) mdbcomp__feedback__Wrapper_7;
#line 516 "feedback.m"
            MR_Word mdbcomp__feedback__MaybeCandidates0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_2, (MR_Integer) 1)));
#line 516 "feedback.m"
            MR_String mdbcomp__feedback__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_2, (MR_Integer) 0)));

#line 525 "feedback.m"
            if ((mdbcomp__feedback__MaybeCandidates0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 521 "feedback.m"
              {
#line 521 "feedback.m"
                MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_17_17;
#line 521 "feedback.m"
                MR_Word mdbcomp__feedback__V_18_18;

#line 523 "feedback.m"
                {
#line 523 "feedback.m"
                  mdbcomp__feedback__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 523 "feedback.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__feedback__V_18_18, 0) = ((MR_Box) (mdbcomp__feedback__Candidates_11));
#line 523 "feedback.m"
                }
#line 523 "feedback.m"
                {
#line 523 "feedback.m"
                  mdbcomp__feedback__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 523 "feedback.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (mdbcomp__feedback__V_21_21));
#line 523 "feedback.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (mdbcomp__feedback__V_18_18));
#line 523 "feedback.m"
                }
#line 524 "feedback.m"
                /* direct tailcall eliminated */
#line 524 "feedback.m"
                {
#line 524 "feedback.m"
                  MR_Word mdbcomp__feedback__HeadVar__1__tmp_copy_1 = mdbcomp__feedback__Wrappers_8;
#line 524 "feedback.m"
                  MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_0__tmp_copy_2 = mdbcomp__feedback__STATE_VARIABLE_Info_17_17;

#line 524 "feedback.m"
                  mdbcomp__feedback__STATE_VARIABLE_Info_0_2 = mdbcomp__feedback__STATE_VARIABLE_Info_0__tmp_copy_2;
#line 524 "feedback.m"
                  mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__HeadVar__1__tmp_copy_1;
#line 524 "feedback.m"
                }
#line 524 "feedback.m"
                continue;
#line 521 "feedback.m"
              }
#line 525 "feedback.m"
            else
#line 526 "feedback.m"
              {
#line 527 "feedback.m"
                *mdbcomp__feedback__Result_3 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[2]);
#line 526 "feedback.m"
              }
#line 516 "feedback.m"
          }
#line 514 "feedback.m"
      }
#line 514 "feedback.m"
      break;
#line 514 "feedback.m"
    }
#line 511 "feedback.m"
}

#line 494 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_all_feedback_data_5_p_0(
#line 494 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_6,
#line 494 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_7,
#line 494 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_8)
#line 494 "feedback.m"
{
#line 497 "feedback.m"
  {
#line 497 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 497 "feedback.m"
    MR_Word mdbcomp__feedback__ReadResult_10;

#line 498 "feedback.m"
    {
#line 498 "feedback.m"
      mercury__io__read_4_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[1], mdbcomp__feedback__Stream_6, &mdbcomp__feedback__ReadResult_10);
    }
#line 503 "feedback.m"
#line 503 "feedback.m"
    switch (MR_tag((MR_Word) mdbcomp__feedback__ReadResult_10)) {
#line 503 "feedback.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 503 "feedback.m"
      case (MR_Integer) 0:
#line 504 "feedback.m"
        {
#line 505 "feedback.m"
          *mdbcomp__feedback__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[1]);
#line 504 "feedback.m"
        }
#line 503 "feedback.m"
        break;
#line 503 "feedback.m"
      case (MR_Integer) 1:
#line 500 "feedback.m"
        {
#line 500 "feedback.m"
          MR_Word mdbcomp__feedback__Components_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__ReadResult_10, (MR_Integer) 0)));
#line 500 "feedback.m"
          MR_Word mdbcomp__feedback__Info0_12;

#line 280 "feedback.m"
          {
#line 280 "feedback.m"
            mdbcomp__feedback__Info0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "feedback.m"
            MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info0_12, 0) = ((MR_Box) (mdbcomp__feedback__ProfiledProgramName_7));
#line 280 "feedback.m"
            MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info0_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "feedback.m"
          }
#line 502 "feedback.m"
          {
#line 502 "feedback.m"
            mdbcomp__feedback__add_feedback_components_3_p_0(mdbcomp__feedback__Components_11, mdbcomp__feedback__Info0_12, mdbcomp__feedback__Result_8);
          }
#line 500 "feedback.m"
        }
#line 503 "feedback.m"
        break;
#line 503 "feedback.m"
      case (MR_Integer) 2:
#line 507 "feedback.m"
        {
#line 507 "feedback.m"
          MR_String mdbcomp__feedback__Error_13 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__ReadResult_10, (MR_Integer) 0)));
#line 507 "feedback.m"
          MR_Integer mdbcomp__feedback__Line_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__ReadResult_10, (MR_Integer) 1)));
#line 507 "feedback.m"
          MR_Word mdbcomp__feedback__V_18_18;

#line 508 "feedback.m"
          {
#line 508 "feedback.m"
            mdbcomp__feedback__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 508 "feedback.m"
            MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 508 "feedback.m"
            MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_18_18, 1) = ((MR_Box) (mdbcomp__feedback__Error_13));
#line 508 "feedback.m"
            MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_18_18, 2) = ((MR_Box) (mdbcomp__feedback__Line_14));
#line 508 "feedback.m"
          }
#line 508 "feedback.m"
          {
#line 508 "feedback.m"
            MR_Word base;
#line 508 "feedback.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 508 "feedback.m"
            *mdbcomp__feedback__Result_8 = base;
#line 508 "feedback.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_18_18));
#line 508 "feedback.m"
          }
#line 507 "feedback.m"
        }
#line 503 "feedback.m"
        break;
#line 503 "feedback.m"
    }
#line 497 "feedback.m"
  }
#line 494 "feedback.m"
}

#line 454 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_profiled_program_name_6_p_0(
#line 454 "feedback.m"
  MR_Word mdbcomp__feedback__MaybeExpectedProfiledProgramName_7,
#line 454 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_8,
#line 454 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_10)
#line 454 "feedback.m"
{
#line 458 "feedback.m"
  {
#line 458 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 458 "feedback.m"
    {
#line 458 "feedback.m"
      mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_102_105_108_101_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_51_93_95_48_6_p_0(mdbcomp__feedback__MaybeExpectedProfiledProgramName_7, mdbcomp__feedback__Stream_8, mdbcomp__feedback__Result_10);
    }
#line 458 "feedback.m"
  }
#line 454 "feedback.m"
}

#line 429 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_check_line_7_p_0(
#line 429 "feedback.m"
  MR_String mdbcomp__feedback__TestLine_8,
#line 429 "feedback.m"
  MR_Word mdbcomp__feedback__NotMatchError_9,
#line 429 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_10,
#line 429 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_12)
#line 429 "feedback.m"
{
#line 433 "feedback.m"
  {
#line 433 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 433 "feedback.m"
    {
#line 433 "feedback.m"
      mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0(mdbcomp__feedback__TestLine_8, mdbcomp__feedback__NotMatchError_9, mdbcomp__feedback__Stream_10, mdbcomp__feedback__Result_12);
    }
#line 433 "feedback.m"
  }
#line 429 "feedback.m"
}

#line 412 "feedback.m"
void MR_CALL 
mdbcomp__feedback__maybe_read_5_p_0(
#line 412 "feedback.m"
  MR_Word mdbcomp__feedback__TypeInfo_for_A_15,
#line 412 "feedback.m"
  MR_Word mdbcomp__feedback__TypeInfo_for_B_16,
#line 412 "feedback.m"
  MR_Word mdbcomp__feedback__Pred_6,
#line 412 "feedback.m"
  MR_Word mdbcomp__feedback__Result0_7,
#line 412 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_8)
#line 412 "feedback.m"
{
#line 422 "feedback.m"
  {
#line 422 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 422 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__Result0_7)) == (MR_mktag((MR_Integer) 1))))
#line 424 "feedback.m"
      *mdbcomp__feedback__Result_8 = mdbcomp__feedback__Result0_7;
#line 422 "feedback.m"
    else
#line 420 "feedback.m"
      {
#line 420 "feedback.m"
        MR_Box mdbcomp__feedback__Acc_10 = (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Result0_7, (MR_Integer) 0));
#line 421 "feedback.m"
        void MR_CALL (* mdbcomp__feedback__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Pred_6, (MR_Integer) 1)));
#line 421 "feedback.m"
        MR_Box mdbcomp__feedback__conv2_Result_8;
#line 421 "feedback.m"
        MR_Box mdbcomp__feedback__conv1_STATE_VARIABLE_IO_13;

#line 421 "feedback.m"
        {
#line 421 "feedback.m"
          mdbcomp__feedback__func_0(((MR_Box) mdbcomp__feedback__Pred_6), mdbcomp__feedback__Acc_10, &mdbcomp__feedback__conv2_Result_8, ((MR_Box) ((MR_Integer) 0)), &mdbcomp__feedback__conv1_STATE_VARIABLE_IO_13);
        }
#line 421 "feedback.m"
        *mdbcomp__feedback__Result_8 = ((MR_Word) mdbcomp__feedback__conv2_Result_8);
#line 420 "feedback.m"
      }
#line 422 "feedback.m"
  }
#line 412 "feedback.m"
}

#line 542 "feedback.m"
static void MR_CALL 
mdbcomp__feedback__write_feedback_file_5_p_0_1(
#line 542 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg,
#line 542 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 542 "feedback.m"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 542 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_3)
#line 542 "feedback.m"
{
#line 542 "feedback.m"
  {
#line 542 "feedback.m"
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;

#line 542 "feedback.m"
    {
#line 542 "feedback.m"
      mdbcomp__feedback__actually_write_feedback_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 4))));
    }
#line 542 "feedback.m"
  }
#line 542 "feedback.m"
}

#line 213 "feedback.m"
void MR_CALL 
mdbcomp__feedback__write_feedback_file_5_p_0(
#line 213 "feedback.m"
  MR_String mdbcomp__feedback__Path_6,
#line 213 "feedback.m"
  MR_Word mdbcomp__feedback__Feedback_7,
#line 213 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_8)
#line 213 "feedback.m"
{
#line 537 "feedback.m"
  {
#line 537 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 537 "feedback.m"
    MR_Word mdbcomp__feedback__OpenResult_10;

#line 538 "feedback.m"
    {
#line 538 "feedback.m"
      mercury__io__open_output_4_p_0(mdbcomp__feedback__Path_6, &mdbcomp__feedback__OpenResult_10);
    }
#line 558 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__OpenResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 559 "feedback.m"
      {
#line 559 "feedback.m"
        MR_Word mdbcomp__feedback__ErrorCode_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__OpenResult_10, (MR_Integer) 0)));

#line 560 "feedback.m"
        {
#line 560 "feedback.m"
          MR_Word base;
#line 560 "feedback.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 560 "feedback.m"
          *mdbcomp__feedback__Result_8 = base;
#line 560 "feedback.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__ErrorCode_16));
#line 560 "feedback.m"
        }
#line 559 "feedback.m"
      }
#line 558 "feedback.m"
    else
#line 540 "feedback.m"
      {
#line 540 "feedback.m"
        MR_Word mdbcomp__feedback__Stream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__OpenResult_10, (MR_Integer) 0)));
#line 540 "feedback.m"
        MR_Word mdbcomp__feedback__ExcpResult_12;
#line 542 "feedback.m"
        MR_Word mdbcomp__feedback__V_20_20;

#line 542 "feedback.m"
        {
#line 542 "feedback.m"
          mdbcomp__feedback__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 542 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_20_20, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_5[0]));
#line 542 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_20_20, 1) = ((MR_Box) (mdbcomp__feedback__write_feedback_file_5_p_0_1));
#line 542 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 542 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_20_20, 3) = ((MR_Box) (mdbcomp__feedback__Stream_11));
#line 542 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_20_20, 4) = ((MR_Box) (mdbcomp__feedback__Feedback_7));
#line 542 "feedback.m"
        }
#line 542 "feedback.m"
        {
#line 542 "feedback.m"
          mercury__exception__try_io_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, mdbcomp__feedback__V_20_20, &mdbcomp__feedback__ExcpResult_12);
        }
#line 548 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__ExcpResult_12)) == (MR_mktag((MR_Integer) 2))))
#line 549 "feedback.m"
          {
#line 549 "feedback.m"
            MR_Word mdbcomp__feedback__ExcpUniv_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__ExcpResult_12, (MR_Integer) 0)));
#line 552 "feedback.m"
            MR_Word mdbcomp__feedback__Excp_15;
#line 552 "feedback.m"
            MR_Box mdbcomp__feedback__conv0_Excp_15;

#line 552 "feedback.m"
            {
#line 552 "feedback.m"
              mdbcomp__feedback__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, mdbcomp__feedback__ExcpUniv_14, &mdbcomp__feedback__conv0_Excp_15);
            }
#line 552 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 552 "feedback.m"
              {
#line 552 "feedback.m"
                mdbcomp__feedback__Excp_15 = ((MR_Word) mdbcomp__feedback__conv0_Excp_15);
#line 552 "feedback.m"
                mdbcomp__feedback__succeeded = MR_TRUE;
#line 552 "feedback.m"
              }
#line 552 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 553 "feedback.m"
              {
#line 553 "feedback.m"
                MR_Word base;
#line 553 "feedback.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 553 "feedback.m"
                *mdbcomp__feedback__Result_8 = base;
#line 553 "feedback.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdbcomp__feedback__Excp_15));
#line 553 "feedback.m"
              }
#line 552 "feedback.m"
            else
#line 555 "feedback.m"
              {
#line 555 "feedback.m"
                {
#line 555 "feedback.m"
                  mercury__exception__rethrow_1_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, mdbcomp__feedback__ExcpResult_12);
#line 555 "feedback.m"
                  return;
                }
#line 555 "feedback.m"
              }
#line 549 "feedback.m"
          }
#line 548 "feedback.m"
        else
#line 547 "feedback.m"
          *mdbcomp__feedback__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 540 "feedback.m"
      }
#line 537 "feedback.m"
  }
#line 213 "feedback.m"
}

#line 196 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_feedback_file_5_p_0(
#line 196 "feedback.m"
  MR_String mdbcomp__feedback__Path_6,
#line 196 "feedback.m"
  MR_Word mdbcomp__feedback__MaybeExpectedProfiledProgramName_7,
#line 196 "feedback.m"
  MR_Word * mdbcomp__feedback__ResultFeedbackInfo_8)
#line 196 "feedback.m"
{
#line 375 "feedback.m"
  {
#line 375 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 375 "feedback.m"
    MR_Word mdbcomp__feedback__IOResStream_10;

#line 376 "feedback.m"
    {
#line 376 "feedback.m"
      mercury__io__open_input_4_p_0(mdbcomp__feedback__Path_6, &mdbcomp__feedback__IOResStream_10);
    }
#line 403 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__IOResStream_10)) == (MR_mktag((MR_Integer) 1))))
#line 404 "feedback.m"
      {
#line 404 "feedback.m"
        MR_Word mdbcomp__feedback__ErrorCode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__IOResStream_10, (MR_Integer) 0)));
#line 404 "feedback.m"
        MR_Word mdbcomp__feedback__V_17_17;

#line 405 "feedback.m"
        {
#line 405 "feedback.m"
          mdbcomp__feedback__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 405 "feedback.m"
          MR_hl_field(MR_mktag(1), mdbcomp__feedback__V_17_17, 0) = ((MR_Box) (mdbcomp__feedback__ErrorCode_13));
#line 405 "feedback.m"
        }
#line 405 "feedback.m"
        {
#line 405 "feedback.m"
          MR_Word base;
#line 405 "feedback.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 405 "feedback.m"
          *mdbcomp__feedback__ResultFeedbackInfo_8 = base;
#line 405 "feedback.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_17_17));
#line 405 "feedback.m"
        }
#line 404 "feedback.m"
      }
#line 403 "feedback.m"
    else
#line 378 "feedback.m"
      {
#line 378 "feedback.m"
        MR_Word mdbcomp__feedback__Stream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__IOResStream_10, (MR_Integer) 0)));
#line 378 "feedback.m"
        MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_21_21;

#line 389 "feedback.m"
        {
#line 389 "feedback.m"
          mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0((MR_String) "Mercury Compiler Feedback", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), mdbcomp__feedback__Stream_11, &mdbcomp__feedback__STATE_VARIABLE_Result_21_21);
        }
#line 4402 "mdbcomp.feedback.c"
        if (((MR_tag((MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_21_21)) == (MR_mktag((MR_Integer) 1))))
#line 4404 "mdbcomp.feedback.c"
          {
#line 4406 "mdbcomp.feedback.c"
            MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_24_24 = mdbcomp__feedback__STATE_VARIABLE_Result_21_21;
#line 4408 "mdbcomp.feedback.c"
            MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_30_30 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_24_24;

#line 424 "feedback.m"
            *mdbcomp__feedback__ResultFeedbackInfo_8 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_30_30;
#line 4413 "mdbcomp.feedback.c"
          }
#line 4415 "mdbcomp.feedback.c"
        else
#line 4417 "mdbcomp.feedback.c"
          {
#line 4419 "mdbcomp.feedback.c"
            MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_24_84;

#line 421 "feedback.m"
            {
#line 421 "feedback.m"
              mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0((MR_String) "19", (MR_Word) MR_mkword(MR_mktag(3), &mdbcomp__feedback_scalar_common_1[5]), mdbcomp__feedback__Stream_11, &mdbcomp__feedback__STATE_VARIABLE_Result_24_84);
            }
#line 4427 "mdbcomp.feedback.c"
            if (((MR_tag((MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_24_84)) == (MR_mktag((MR_Integer) 1))))
#line 4429 "mdbcomp.feedback.c"
              {
#line 4431 "mdbcomp.feedback.c"
                MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_30_86 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_24_84;

#line 424 "feedback.m"
                *mdbcomp__feedback__ResultFeedbackInfo_8 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_30_86;
#line 4436 "mdbcomp.feedback.c"
              }
#line 4438 "mdbcomp.feedback.c"
            else
#line 4440 "mdbcomp.feedback.c"
              {
#line 4442 "mdbcomp.feedback.c"
                MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_30_88;

#line 421 "feedback.m"
                {
#line 421 "feedback.m"
                  mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_102_105_108_101_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_51_93_95_48_6_p_0(mdbcomp__feedback__MaybeExpectedProfiledProgramName_7, mdbcomp__feedback__Stream_11, &mdbcomp__feedback__STATE_VARIABLE_Result_30_88);
                }
#line 422 "feedback.m"
                if (((MR_tag((MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_30_88)) == (MR_mktag((MR_Integer) 1))))
#line 424 "feedback.m"
                  *mdbcomp__feedback__ResultFeedbackInfo_8 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_30_88;
#line 422 "feedback.m"
                else
#line 420 "feedback.m"
                  {
#line 420 "feedback.m"
                    MR_String mdbcomp__feedback__Acc_79 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Result_30_88, (MR_Integer) 0)));

#line 421 "feedback.m"
                    {
#line 421 "feedback.m"
                      mdbcomp__feedback__read_all_feedback_data_5_p_0(mdbcomp__feedback__Stream_11, mdbcomp__feedback__Acc_79, mdbcomp__feedback__ResultFeedbackInfo_8);
                    }
#line 420 "feedback.m"
                  }
#line 4468 "mdbcomp.feedback.c"
              }
#line 4470 "mdbcomp.feedback.c"
          }
#line 402 "feedback.m"
        {
#line 402 "feedback.m"
          mercury__io__close_input_3_p_0(mdbcomp__feedback__Stream_11);
        }
#line 378 "feedback.m"
      }
#line 375 "feedback.m"
  }
#line 196 "feedback.m"
}

#line 185 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_or_create_feedback_file_5_p_0(
#line 185 "feedback.m"
  MR_String mdbcomp__feedback__Path_6,
#line 185 "feedback.m"
  MR_String mdbcomp__feedback__ExpectedProfiledProgramName_7,
#line 185 "feedback.m"
  MR_Word * mdbcomp__feedback__FeedbackResult_8)
#line 185 "feedback.m"
{
#line 346 "feedback.m"
  {
#line 346 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 346 "feedback.m"
    MR_Word mdbcomp__feedback__ReadResult_10;
#line 346 "feedback.m"
    MR_Word mdbcomp__feedback__V_23_23;

#line 347 "feedback.m"
    {
#line 347 "feedback.m"
      mdbcomp__feedback__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 347 "feedback.m"
      MR_hl_field(MR_mktag(1), mdbcomp__feedback__V_23_23, 0) = ((MR_Box) (mdbcomp__feedback__ExpectedProfiledProgramName_7));
#line 347 "feedback.m"
    }
#line 347 "feedback.m"
    {
#line 347 "feedback.m"
      mdbcomp__feedback__read_feedback_file_5_p_0(mdbcomp__feedback__Path_6, mdbcomp__feedback__V_23_23, &mdbcomp__feedback__ReadResult_10);
    }
#line 352 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__ReadResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 353 "feedback.m"
      {
#line 353 "feedback.m"
        MR_Word mdbcomp__feedback__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__ReadResult_10, (MR_Integer) 0)));

#line 361 "feedback.m"
#line 361 "feedback.m"
        switch (MR_tag((MR_Word) mdbcomp__feedback__Error_12)) {
#line 361 "feedback.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 361 "feedback.m"
          case (MR_Integer) 0:
#line 370 "feedback.m"
            *mdbcomp__feedback__FeedbackResult_8 = mdbcomp__feedback__ReadResult_10;
#line 361 "feedback.m"
            break;
#line 361 "feedback.m"
          case (MR_Integer) 1:
#line 358 "feedback.m"
            {
#line 358 "feedback.m"
              MR_Word mdbcomp__feedback__V_25_25;

#line 280 "feedback.m"
              {
#line 280 "feedback.m"
                mdbcomp__feedback__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "feedback.m"
                MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_25_25, 0) = ((MR_Box) (mdbcomp__feedback__ExpectedProfiledProgramName_7));
#line 280 "feedback.m"
                MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "feedback.m"
              }
#line 359 "feedback.m"
              {
#line 359 "feedback.m"
                MR_Word base;
#line 359 "feedback.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 359 "feedback.m"
                *mdbcomp__feedback__FeedbackResult_8 = base;
#line 359 "feedback.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__V_25_25));
#line 359 "feedback.m"
              }
#line 358 "feedback.m"
            }
#line 361 "feedback.m"
            break;
#line 361 "feedback.m"
          case (MR_Integer) 2:
#line 370 "feedback.m"
            *mdbcomp__feedback__FeedbackResult_8 = mdbcomp__feedback__ReadResult_10;
#line 361 "feedback.m"
            break;
#line 361 "feedback.m"
          case (MR_Integer) 3:
#line 370 "feedback.m"
            *mdbcomp__feedback__FeedbackResult_8 = mdbcomp__feedback__ReadResult_10;
#line 361 "feedback.m"
            break;
#line 361 "feedback.m"
        }
#line 353 "feedback.m"
      }
#line 352 "feedback.m"
    else
#line 351 "feedback.m"
      *mdbcomp__feedback__FeedbackResult_8 = mdbcomp__feedback__ReadResult_10;
#line 346 "feedback.m"
  }
#line 185 "feedback.m"
}

#line 169 "feedback.m"
void MR_CALL 
mdbcomp__feedback__feedback_read_error_message_string_3_p_0(
#line 169 "feedback.m"
  MR_String mdbcomp__feedback__File_4,
#line 169 "feedback.m"
  MR_Word mdbcomp__feedback__Error_5,
#line 169 "feedback.m"
  MR_String * mdbcomp__feedback__Message_6)
#line 169 "feedback.m"
{
#line 309 "feedback.m"
  {
#line 309 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 309 "feedback.m"
    MR_String mdbcomp__feedback__MessagePart_8;
#line 309 "feedback.m"
    MR_String mdbcomp__feedback__V_61_61;
#line 309 "feedback.m"
    MR_Word mdbcomp__feedback__V_67_67;
#line 309 "feedback.m"
    MR_String mdbcomp__feedback__V_68_68;
#line 309 "feedback.m"
    MR_String mdbcomp__feedback__V_70_70;
#line 309 "feedback.m"
    MR_String mdbcomp__feedback__V_71_71;

#line 315 "feedback.m"
#line 315 "feedback.m"
    switch (MR_tag((MR_Word) mdbcomp__feedback__Error_5)) {
#line 315 "feedback.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 315 "feedback.m"
      case (MR_Integer) 0:
#line 315 "feedback.m"
#line 315 "feedback.m"
        switch (MR_unmkbody(mdbcomp__feedback__Error_5)) {
#line 315 "feedback.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 315 "feedback.m"
          case (MR_Integer) 0:
#line 320 "feedback.m"
            mdbcomp__feedback__MessagePart_8 = (MR_String) "Unexpected end of file";
#line 315 "feedback.m"
            break;
#line 315 "feedback.m"
          case (MR_Integer) 1:
#line 326 "feedback.m"
            mdbcomp__feedback__MessagePart_8 = (MR_String) "Incorrect file format";
#line 315 "feedback.m"
            break;
#line 315 "feedback.m"
        }
#line 315 "feedback.m"
        break;
#line 315 "feedback.m"
      case (MR_Integer) 1:
#line 313 "feedback.m"
        {
#line 313 "feedback.m"
          MR_Word mdbcomp__feedback__Code_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__Error_5, (MR_Integer) 0)));

#line 314 "feedback.m"
          {
#line 314 "feedback.m"
            mercury__io__error_message_2_p_0(mdbcomp__feedback__Code_7, &mdbcomp__feedback__MessagePart_8);
          }
#line 313 "feedback.m"
        }
#line 315 "feedback.m"
        break;
#line 315 "feedback.m"
      case (MR_Integer) 2:
#line 313 "feedback.m"
        {
#line 313 "feedback.m"
          MR_Word mdbcomp__feedback__Code_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__Error_5, (MR_Integer) 0)));

#line 314 "feedback.m"
          {
#line 314 "feedback.m"
            mercury__io__error_message_2_p_0(mdbcomp__feedback__Code_39, &mdbcomp__feedback__MessagePart_8);
          }
#line 313 "feedback.m"
        }
#line 315 "feedback.m"
        break;
#line 315 "feedback.m"
      case (MR_Integer) 3:
#line 315 "feedback.m"
#line 315 "feedback.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 0)))) {
#line 315 "feedback.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 315 "feedback.m"
          case (MR_Integer) 0:
#line 316 "feedback.m"
            {
#line 316 "feedback.m"
              MR_String mdbcomp__feedback__ParseMessage_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));
#line 316 "feedback.m"
              MR_Integer mdbcomp__feedback__Line_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 2)));
#line 316 "feedback.m"
              MR_String mdbcomp__feedback__V_28_28;
#line 316 "feedback.m"
              MR_String mdbcomp__feedback__V_30_30;

#line 317 "feedback.m"
              {
#line 317 "feedback.m"
                mdbcomp__feedback__V_30_30 = mercury__string__string_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdbcomp__feedback__Line_10)));
              }
#line 317 "feedback.m"
              {
#line 317 "feedback.m"
                mdbcomp__feedback__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) " on line ", mdbcomp__feedback__V_30_30);
              }
#line 317 "feedback.m"
              {
#line 317 "feedback.m"
                mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__ParseMessage_9, mdbcomp__feedback__V_28_28);
              }
#line 316 "feedback.m"
            }
#line 315 "feedback.m"
            break;
#line 315 "feedback.m"
          case (MR_Integer) 1:
#line 322 "feedback.m"
            {
#line 322 "feedback.m"
              MR_String mdbcomp__feedback__Expected_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));

#line 323 "feedback.m"
              {
#line 323 "feedback.m"
                mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "Incorrect file format version; expected ", mdbcomp__feedback__Expected_11);
              }
#line 322 "feedback.m"
            }
#line 315 "feedback.m"
            break;
#line 315 "feedback.m"
          case (MR_Integer) 2:
#line 328 "feedback.m"
            {
#line 328 "feedback.m"
              MR_String mdbcomp__feedback__Got_12 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 2)));
#line 328 "feedback.m"
              MR_String mdbcomp__feedback__V_18_18;
#line 328 "feedback.m"
              MR_String mdbcomp__feedback__V_20_20;
#line 328 "feedback.m"
              MR_String mdbcomp__feedback__Expected_37 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));
#line 328 "feedback.m"
              MR_String mdbcomp__feedback__V_41_41;
#line 328 "feedback.m"
              MR_Word mdbcomp__feedback__V_47_47 = (MR_Word) &mdbcomp__feedback_scalar_common_4[0];
#line 328 "feedback.m"
              MR_String mdbcomp__feedback__V_48_48;
#line 328 "feedback.m"
              MR_String mdbcomp__feedback__V_50_50;
#line 328 "feedback.m"
              MR_String mdbcomp__feedback__V_51_51;
#line 328 "feedback.m"
              MR_String mdbcomp__feedback__V_58_58;

#line 332 "feedback.m"
              {
#line 332 "feedback.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdbcomp__feedback__V_47_47, mdbcomp__feedback__Got_12, &mdbcomp__feedback__V_41_41);
              }
#line 332 "feedback.m"
              {
#line 332 "feedback.m"
                mdbcomp__feedback__V_48_48 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__V_41_41, (MR_String) "\'");
              }
#line 332 "feedback.m"
              {
#line 332 "feedback.m"
                mdbcomp__feedback__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) "\' Got: \'", mdbcomp__feedback__V_48_48);
              }
#line 332 "feedback.m"
              {
#line 332 "feedback.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdbcomp__feedback__V_47_47, mdbcomp__feedback__Expected_37, &mdbcomp__feedback__V_51_51);
              }
#line 332 "feedback.m"
              {
#line 332 "feedback.m"
                mdbcomp__feedback__V_58_58 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__V_51_51, mdbcomp__feedback__V_50_50);
              }
#line 332 "feedback.m"
              {
#line 332 "feedback.m"
                mdbcomp__feedback__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "Expected: \'", mdbcomp__feedback__V_58_58);
              }
#line 332 "feedback.m"
              {
#line 332 "feedback.m"
                mdbcomp__feedback__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) " is this the right feedback file\?\n", mdbcomp__feedback__V_20_20);
              }
#line 331 "feedback.m"
              {
#line 331 "feedback.m"
                mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "The name of the program the feedback is for didn\'t match,", mdbcomp__feedback__V_18_18);
              }
#line 328 "feedback.m"
            }
#line 315 "feedback.m"
            break;
#line 315 "feedback.m"
          case (MR_Integer) 3:
#line 334 "feedback.m"
            {
#line 334 "feedback.m"
              MR_String mdbcomp__feedback__ComponentName_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));
#line 334 "feedback.m"
              MR_String mdbcomp__feedback__V_15_15;

#line 336 "feedback.m"
              {
#line 336 "feedback.m"
                mdbcomp__feedback__V_15_15 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__ComponentName_13, (MR_String) " component");
              }
#line 336 "feedback.m"
              {
#line 336 "feedback.m"
                mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "File contains more than one ", mdbcomp__feedback__V_15_15);
              }
#line 334 "feedback.m"
            }
#line 315 "feedback.m"
            break;
#line 315 "feedback.m"
        }
#line 315 "feedback.m"
        break;
#line 315 "feedback.m"
    }
#line 4834 "mdbcomp.feedback.c"
    mdbcomp__feedback__V_67_67 = (MR_Word) &mdbcomp__feedback_scalar_common_4[0];
#line 338 "feedback.m"
    {
#line 338 "feedback.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdbcomp__feedback__V_67_67, mdbcomp__feedback__MessagePart_8, &mdbcomp__feedback__V_61_61);
    }
#line 338 "feedback.m"
    {
#line 338 "feedback.m"
      mdbcomp__feedback__V_68_68 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__V_61_61, (MR_String) "\n");
    }
#line 338 "feedback.m"
    {
#line 338 "feedback.m"
      mdbcomp__feedback__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdbcomp__feedback__V_68_68);
    }
#line 338 "feedback.m"
    {
#line 338 "feedback.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdbcomp__feedback__V_67_67, mdbcomp__feedback__File_4, &mdbcomp__feedback__V_71_71);
    }
#line 338 "feedback.m"
    {
#line 338 "feedback.m"
      *mdbcomp__feedback__Message_6 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__V_71_71, mdbcomp__feedback__V_70_70);
    }
#line 309 "feedback.m"
  }
#line 169 "feedback.m"
}

#line 300 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0_1(
#line 300 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg)
#line 300 "feedback.m"
{
#line 300 "feedback.m"
  {
#line 300 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 300 "feedback.m"
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;

#line 300 "feedback.m"
    {
#line 300 "feedback.m"
      mdbcomp__feedback__succeeded = mdbcomp__feedback__IntroducedFrom__pred__replace_feedback_candidate_parallel_conjunctions__300__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 4))));
    }
#line 300 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 300 "feedback.m"
  }
#line 300 "feedback.m"
}

#line 136 "feedback.m"
void MR_CALL 
mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0(
#line 136 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
#line 136 "feedback.m"
  MR_Word mdbcomp__feedback__Data_6,
#line 136 "feedback.m"
  MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_0_8,
#line 136 "feedback.m"
  MR_Word * mdbcomp__feedback__STATE_VARIABLE_Info_9)
#line 136 "feedback.m"
{
#line 299 "feedback.m"
  {
#line 299 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 299 "feedback.m"
    MR_Word mdbcomp__feedback__V_10_10;
#line 299 "feedback.m"
    MR_String mdbcomp__feedback__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 299 "feedback.m"
    MR_Word mdbcomp__feedback__V_15_15;
#line 300 "feedback.m"
    MR_Word mdbcomp__feedback__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 302 "feedback.m"
    MR_String mdbcomp__feedback__V_17_17;
#line 302 "feedback.m"
    MR_Word mdbcomp__feedback__V_18_18;

#line 300 "feedback.m"
    {
#line 300 "feedback.m"
      mdbcomp__feedback__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 300 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_3[0]));
#line 300 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 1) = ((MR_Box) (mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0_1));
#line 300 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 300 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 3) = ((MR_Box) (mdbcomp__feedback__ProfiledProgramName_5));
#line 300 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 4) = ((MR_Box) (mdbcomp__feedback__V_13_13));
#line 300 "feedback.m"
    }
#line 300 "feedback.m"
    {
#line 300 "feedback.m"
      mercury__require__expect_3_p_0(mdbcomp__feedback__V_10_10, (MR_String) "predicate \140mdbcomp.feedback.replace_feedback_candidate_parallel_conjunctions\'/4", (MR_String) "replacing candidate parallel conjunctions for wrong program");
    }
#line 302 "feedback.m"
    {
#line 302 "feedback.m"
      mdbcomp__feedback__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 302 "feedback.m"
      MR_hl_field(MR_mktag(1), mdbcomp__feedback__V_15_15, 0) = ((MR_Box) (mdbcomp__feedback__Data_6));
#line 302 "feedback.m"
    }
#line 302 "feedback.m"
    mdbcomp__feedback__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 302 "feedback.m"
    mdbcomp__feedback__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 302 "feedback.m"
    {
#line 302 "feedback.m"
      MR_Word base;
#line 302 "feedback.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 302 "feedback.m"
      *mdbcomp__feedback__STATE_VARIABLE_Info_9 = base;
#line 302 "feedback.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__V_17_17));
#line 302 "feedback.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__feedback__V_15_15));
#line 302 "feedback.m"
    }
#line 299 "feedback.m"
  }
#line 136 "feedback.m"
}

#line 294 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_2(
#line 294 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg)
#line 294 "feedback.m"
{
#line 294 "feedback.m"
  {
#line 294 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 294 "feedback.m"
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;

#line 294 "feedback.m"
    {
#line 294 "feedback.m"
      mdbcomp__feedback__succeeded = mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__294__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 4))));
    }
#line 294 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 294 "feedback.m"
  }
#line 294 "feedback.m"
}

#line 292 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_1(
#line 292 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg)
#line 292 "feedback.m"
{
#line 292 "feedback.m"
  {
#line 292 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 292 "feedback.m"
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;

#line 292 "feedback.m"
    {
#line 292 "feedback.m"
      mdbcomp__feedback__succeeded = mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__292__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 4))));
    }
#line 292 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 292 "feedback.m"
  }
#line 292 "feedback.m"
}

#line 125 "feedback.m"
void MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0(
#line 125 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
#line 125 "feedback.m"
  MR_Word mdbcomp__feedback__Data_6,
#line 125 "feedback.m"
  MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_0_8,
#line 125 "feedback.m"
  MR_Word * mdbcomp__feedback__STATE_VARIABLE_Info_9)
#line 125 "feedback.m"
{
#line 291 "feedback.m"
  {
#line 291 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 291 "feedback.m"
    MR_Word mdbcomp__feedback__V_10_10;
#line 291 "feedback.m"
    MR_String mdbcomp__feedback__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 291 "feedback.m"
    MR_Word mdbcomp__feedback__V_14_14;
#line 291 "feedback.m"
    MR_Word mdbcomp__feedback__V_17_17;
#line 291 "feedback.m"
    MR_Word mdbcomp__feedback__V_20_20;
#line 292 "feedback.m"
    MR_Word mdbcomp__feedback__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 294 "feedback.m"
    MR_String mdbcomp__feedback__V_22_22;
#line 296 "feedback.m"
    MR_String mdbcomp__feedback__V_23_23;
#line 296 "feedback.m"
    MR_Word mdbcomp__feedback__V_24_24;

#line 292 "feedback.m"
    {
#line 292 "feedback.m"
      mdbcomp__feedback__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 292 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_3[0]));
#line 292 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 1) = ((MR_Box) (mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_1));
#line 292 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 292 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 3) = ((MR_Box) (mdbcomp__feedback__ProfiledProgramName_5));
#line 292 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 4) = ((MR_Box) (mdbcomp__feedback__V_13_13));
#line 292 "feedback.m"
    }
#line 292 "feedback.m"
    {
#line 292 "feedback.m"
      mercury__require__expect_3_p_0(mdbcomp__feedback__V_10_10, (MR_String) "predicate \140mdbcomp.feedback.add_feedback_candidate_parallel_conjunctions\'/4", (MR_String) "adding candidate parallel conjunctions for wrong program");
    }
#line 294 "feedback.m"
    mdbcomp__feedback__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 294 "feedback.m"
    mdbcomp__feedback__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 294 "feedback.m"
    {
#line 294 "feedback.m"
      mdbcomp__feedback__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 294 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_14_14, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_3[1]));
#line 294 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_14_14, 1) = ((MR_Box) (mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_2));
#line 294 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 294 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_14_14, 3) = ((MR_Box) (mdbcomp__feedback__V_17_17));
#line 294 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_14_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "feedback.m"
    }
#line 294 "feedback.m"
    {
#line 294 "feedback.m"
      mercury__require__expect_3_p_0(mdbcomp__feedback__V_14_14, (MR_String) "predicate \140mdbcomp.feedback.add_feedback_candidate_parallel_conjunctions\'/4", (MR_String) "overwriting old candidate_parallel_conjunctions data");
    }
#line 296 "feedback.m"
    {
#line 296 "feedback.m"
      mdbcomp__feedback__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 296 "feedback.m"
      MR_hl_field(MR_mktag(1), mdbcomp__feedback__V_20_20, 0) = ((MR_Box) (mdbcomp__feedback__Data_6));
#line 296 "feedback.m"
    }
#line 296 "feedback.m"
    mdbcomp__feedback__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 296 "feedback.m"
    mdbcomp__feedback__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 296 "feedback.m"
    {
#line 296 "feedback.m"
      MR_Word base;
#line 296 "feedback.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 296 "feedback.m"
      *mdbcomp__feedback__STATE_VARIABLE_Info_9 = base;
#line 296 "feedback.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__V_23_23));
#line 296 "feedback.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__feedback__V_20_20));
#line 296 "feedback.m"
    }
#line 291 "feedback.m"
  }
#line 125 "feedback.m"
}

#line 110 "feedback.m"
void MR_CALL 
mdbcomp__feedback__get_all_feedback_info_3_p_0(
#line 110 "feedback.m"
  MR_Word mdbcomp__feedback__Info_4,
#line 110 "feedback.m"
  MR_String * mdbcomp__feedback__ProfiledProgramName_5,
#line 110 "feedback.m"
  MR_Word * mdbcomp__feedback__MaybeCandidateParallelConjs_6)
#line 110 "feedback.m"
{
#line 288 "feedback.m"
  {
#line 288 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 288 "feedback.m"
    *mdbcomp__feedback__ProfiledProgramName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_4, (MR_Integer) 0)));
#line 288 "feedback.m"
    *mdbcomp__feedback__MaybeCandidateParallelConjs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_4, (MR_Integer) 1)));
#line 288 "feedback.m"
  }
#line 110 "feedback.m"
}

#line 102 "feedback.m"
MR_Word MR_CALL 
mdbcomp__feedback__get_feedback_candidate_parallel_conjunctions_1_f_0(
#line 102 "feedback.m"
  MR_Word mdbcomp__feedback__Info_3)
#line 102 "feedback.m"
{
#line 283 "feedback.m"
  {
#line 283 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 283 "feedback.m"
    MR_Word mdbcomp__feedback__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 1)));
#line 283 "feedback.m"
    MR_String mdbcomp__feedback__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 0)));

#line 283 "feedback.m"
    return mdbcomp__feedback__HeadVar__2_2;
#line 283 "feedback.m"
  }
#line 102 "feedback.m"
}

#line 96 "feedback.m"
MR_String MR_CALL 
mdbcomp__feedback__get_feedback_profiled_program_name_1_f_0(
#line 96 "feedback.m"
  MR_Word mdbcomp__feedback__Info_3)
#line 96 "feedback.m"
{
#line 282 "feedback.m"
  {
#line 282 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 282 "feedback.m"
    MR_String mdbcomp__feedback__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 0)));
#line 282 "feedback.m"
    MR_Word mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 1)));

#line 282 "feedback.m"
    return mdbcomp__feedback__HeadVar__2_2;
#line 282 "feedback.m"
  }
#line 96 "feedback.m"
}

#line 60 "feedback.m"
MR_Word MR_CALL 
mdbcomp__feedback__init_feedback_info_1_f_0(
#line 60 "feedback.m"
  MR_String mdbcomp__feedback__ProgramName_3)
#line 60 "feedback.m"
{
#line 280 "feedback.m"
  {
#line 280 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 280 "feedback.m"
    MR_Word mdbcomp__feedback__HeadVar__2_2;

#line 280 "feedback.m"
    {
#line 280 "feedback.m"
      mdbcomp__feedback__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 280 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, 0) = ((MR_Box) (mdbcomp__feedback__ProgramName_3));
#line 280 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "feedback.m"
    }
#line 280 "feedback.m"
    return mdbcomp__feedback__HeadVar__2_2;
#line 280 "feedback.m"
  }
#line 60 "feedback.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdbcomp.feedback. */
