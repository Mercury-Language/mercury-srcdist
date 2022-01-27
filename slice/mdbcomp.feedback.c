/*
** Automatically generated from `mdbcomp.feedback.m'
** by the Mercury compiler,
** version rotd-2015-03-24
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
#include "mdbcomp.mih"
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
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




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

#line 301 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__replace_feedback_candidate_parallel_conjunctions__301__1_2_p_0(
#line 301 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
#line 301 "feedback.m"
  MR_String mdbcomp__feedback__HeadVar__2_13);

#line 295 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__295__1_2_p_0(
#line 295 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_17,
#line 295 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_18);

#line 293 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__293__1_2_p_0(
#line 293 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
#line 293 "feedback.m"
  MR_String mdbcomp__feedback__HeadVar__2_13);

#line 543 "feedback.m"
static void MR_CALL 
mdbcomp__feedback__write_feedback_file_5_p_0_1(
#line 543 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg,
#line 543 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 543 "feedback.m"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 543 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_3);

#line 301 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0_1(
#line 301 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg);

#line 295 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_2(
#line 295 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg);

#line 293 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_1(
#line 293 "feedback.m"
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



#include "mdbcomp.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"



#line 558 "mdbcomp.feedback.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__feedback__maybe__pti_maybe_1__plain_mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0
  }
};

#line 566 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_component_wrapper_0[1] = {
  (MR_Integer) 0
};

#line 571 "mdbcomp.feedback.c"
static const MR_NotagFunctorDesc mdbcomp__feedback__mdbcomp__feedback__notag_functor_desc_feedback_component_wrapper_0 = {
  (MR_String) "fcw_candidate_parallel_conjunctions",
  (MR_PseudoTypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0,
  NULL
};

#line 578 "mdbcomp.feedback.c"
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

#line 595 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0
  }
};

#line 603 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__maybe__ti_maybe_1mdbcomp__feedback__type_ctor_info_feedback_info_candidate_parallel_conjunctions_0
};

#line 609 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_0_0[2] = {
  (MR_String) "fi_profiled_program_name",
  (MR_String) "fi_maybe_candidate_parallel_conjunctions"
};

#line 615 "mdbcomp.feedback.c"
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

#line 630 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0
};

#line 635 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_0_0
  }
};

#line 644 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0
};

#line 649 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_0[1] = {
  (MR_Integer) 0
};

#line 654 "mdbcomp.feedback.c"
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

#line 671 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 679 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 687 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 696 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 704 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_candidate_parallel_conjunctions_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
};

#line 710 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_candidate_parallel_conjunctions_0_0[2] = {
  (MR_String) "cpc_parameters",
  (MR_String) "cpc_conjunctions"
};

#line 716 "mdbcomp.feedback.c"
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

#line 731 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_candidate_parallel_conjunctions_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_candidate_parallel_conjunctions_0_0
};

#line 736 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_candidate_parallel_conjunctions_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_candidate_parallel_conjunctions_0_0
  }
};

#line 745 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_candidate_parallel_conjunctions_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_candidate_parallel_conjunctions_0_0
};

#line 750 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_candidate_parallel_conjunctions_0[1] = {
  (MR_Integer) 0
};

#line 755 "mdbcomp.feedback.c"
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

#line 772 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 777 "mdbcomp.feedback.c"
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

#line 792 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 797 "mdbcomp.feedback.c"
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

#line 812 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 818 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_2[2] = {
  (MR_String) "fre_pe_message",
  (MR_String) "fre_pe_line_no"
};

#line 824 "mdbcomp.feedback.c"
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

#line 839 "mdbcomp.feedback.c"
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

#line 854 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 859 "mdbcomp.feedback.c"
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

#line 874 "mdbcomp.feedback.c"
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

#line 889 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 895 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_6[2] = {
  (MR_String) "fre_ippn_expected",
  (MR_String) "fre_ippn_got"
};

#line 901 "mdbcomp.feedback.c"
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

#line 916 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 921 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_7[1] = {
  (MR_String) "fre_component_name"
};

#line 926 "mdbcomp.feedback.c"
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

#line 941 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_0[2] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5
};

#line 947 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_1[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0
};

#line 952 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_2[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1
};

#line 957 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_3[4] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_7
};

#line 965 "mdbcomp.feedback.c"
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

#line 989 "mdbcomp.feedback.c"
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

#line 1001 "mdbcomp.feedback.c"
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

#line 1013 "mdbcomp.feedback.c"
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

#line 1030 "mdbcomp.feedback.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__feedback__maybe__pti_maybe_error_2__pseudo_1__plain_mdbcomp__feedback__type_ctor_info_feedback_read_error_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0
  }
};

#line 1039 "mdbcomp.feedback.c"
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

#line 1056 "mdbcomp.feedback.c"
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

#line 1071 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 1076 "mdbcomp.feedback.c"
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

#line 1091 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 1096 "mdbcomp.feedback.c"
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

#line 1111 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0
};

#line 1116 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_1[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1
};

#line 1121 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_2[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2
};

#line 1126 "mdbcomp.feedback.c"
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

#line 1145 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_write_result_0[3] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2
};

#line 1152 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_write_result_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1159 "mdbcomp.feedback.c"
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

#line 1176 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_component_wrapper_0_0_10001(
#line 1179 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1181 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1183 "mdbcomp.feedback.c"
{
#line 1185 "mdbcomp.feedback.c"
  {
#line 1187 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1190 "mdbcomp.feedback.c"
    {
#line 1192 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_component_wrapper_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1195 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1197 "mdbcomp.feedback.c"
  }
#line 1199 "mdbcomp.feedback.c"
}

#line 1202 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_component_wrapper_0_0_10001(
#line 1205 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1207 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1209 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1211 "mdbcomp.feedback.c"
{
#line 1213 "mdbcomp.feedback.c"
  {
#line 1215 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1218 "mdbcomp.feedback.c"
    {
#line 1220 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_component_wrapper_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1223 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1225 "mdbcomp.feedback.c"
  }
#line 1227 "mdbcomp.feedback.c"
}

#line 1230 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_0_0_10001(
#line 1233 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1235 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1237 "mdbcomp.feedback.c"
{
#line 1239 "mdbcomp.feedback.c"
  {
#line 1241 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1244 "mdbcomp.feedback.c"
    {
#line 1246 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_info_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1249 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1251 "mdbcomp.feedback.c"
  }
#line 1253 "mdbcomp.feedback.c"
}

#line 1256 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0_10001(
#line 1259 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1261 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1263 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1265 "mdbcomp.feedback.c"
{
#line 1267 "mdbcomp.feedback.c"
  {
#line 1269 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1272 "mdbcomp.feedback.c"
    {
#line 1274 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_info_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1277 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1279 "mdbcomp.feedback.c"
  }
#line 1281 "mdbcomp.feedback.c"
}

#line 1284 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0_10001(
#line 1287 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1289 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1291 "mdbcomp.feedback.c"
{
#line 1293 "mdbcomp.feedback.c"
  {
#line 1295 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1298 "mdbcomp.feedback.c"
    {
#line 1300 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1303 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1305 "mdbcomp.feedback.c"
  }
#line 1307 "mdbcomp.feedback.c"
}

#line 1310 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0_10001(
#line 1313 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1315 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1317 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1319 "mdbcomp.feedback.c"
{
#line 1321 "mdbcomp.feedback.c"
  {
#line 1323 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1326 "mdbcomp.feedback.c"
    {
#line 1328 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1331 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1333 "mdbcomp.feedback.c"
  }
#line 1335 "mdbcomp.feedback.c"
}

#line 1338 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0_10001(
#line 1341 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1343 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1345 "mdbcomp.feedback.c"
{
#line 1347 "mdbcomp.feedback.c"
  {
#line 1349 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1352 "mdbcomp.feedback.c"
    {
#line 1354 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_read_error_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1357 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1359 "mdbcomp.feedback.c"
  }
#line 1361 "mdbcomp.feedback.c"
}

#line 1364 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0_10001(
#line 1367 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1369 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1371 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1373 "mdbcomp.feedback.c"
{
#line 1375 "mdbcomp.feedback.c"
  {
#line 1377 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1380 "mdbcomp.feedback.c"
    {
#line 1382 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_read_error_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1385 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1387 "mdbcomp.feedback.c"
  }
#line 1389 "mdbcomp.feedback.c"
}

#line 1392 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0_10001(
#line 1395 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1397 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1399 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1401 "mdbcomp.feedback.c"
{
#line 1403 "mdbcomp.feedback.c"
  {
#line 1405 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1408 "mdbcomp.feedback.c"
    {
#line 1410 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_read_result_1_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1413 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1415 "mdbcomp.feedback.c"
  }
#line 1417 "mdbcomp.feedback.c"
}

#line 1420 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0_10001(
#line 1423 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1425 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_2,
#line 1427 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3,
#line 1429 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_4)
#line 1431 "mdbcomp.feedback.c"
{
#line 1433 "mdbcomp.feedback.c"
  {
#line 1435 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1438 "mdbcomp.feedback.c"
    {
#line 1440 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_read_result_1_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), &mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_3), ((MR_Word) mdbcomp__feedback__wrapper_arg_4));
    }
#line 1443 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_2 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1445 "mdbcomp.feedback.c"
  }
#line 1447 "mdbcomp.feedback.c"
}

#line 1450 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_write_result_0_0_10001(
#line 1453 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1455 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1457 "mdbcomp.feedback.c"
{
#line 1459 "mdbcomp.feedback.c"
  {
#line 1461 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1464 "mdbcomp.feedback.c"
    {
#line 1466 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_write_result_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1469 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1471 "mdbcomp.feedback.c"
  }
#line 1473 "mdbcomp.feedback.c"
}

#line 1476 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0_10001(
#line 1479 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1481 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1483 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1485 "mdbcomp.feedback.c"
{
#line 1487 "mdbcomp.feedback.c"
  {
#line 1489 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1492 "mdbcomp.feedback.c"
    {
#line 1494 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_write_result_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1497 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1499 "mdbcomp.feedback.c"
  }
#line 1501 "mdbcomp.feedback.c"
}

#line 455 "feedback.m"
void MR_CALL 
mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_102_105_108_101_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_51_93_95_48_6_p_0(
#line 455 "feedback.m"
  MR_Word mdbcomp__feedback__MaybeExpectedProfiledProgramName_7,
#line 455 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_8,
#line 455 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_10)
#line 455 "feedback.m"
{
#line 459 "feedback.m"
  {
#line 459 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 459 "feedback.m"
    MR_Word mdbcomp__feedback__IOResultLine_12;

#line 460 "feedback.m"
    {
#line 460 "feedback.m"
      mercury__io__read_line_as_string_4_p_0(mdbcomp__feedback__Stream_8, &mdbcomp__feedback__IOResultLine_12);
    }
#line 478 "feedback.m"
    if ((mdbcomp__feedback__IOResultLine_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "feedback.m"
      {
#line 480 "feedback.m"
        *mdbcomp__feedback__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[1]);
#line 479 "feedback.m"
      }
#line 478 "feedback.m"
    else
#line 478 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__IOResultLine_12)) == (MR_mktag((MR_Integer) 2))))
#line 482 "feedback.m"
      {
#line 482 "feedback.m"
        MR_Word mdbcomp__feedback__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__IOResultLine_12, (MR_Integer) 0)));
#line 482 "feedback.m"
        MR_Word mdbcomp__feedback__V_20_20;

#line 483 "feedback.m"
        {
#line 483 "feedback.m"
          mdbcomp__feedback__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "feedback.m"
          MR_hl_field(MR_mktag(2), mdbcomp__feedback__V_20_20, 0) = ((MR_Box) (mdbcomp__feedback__Error_16));
#line 483 "feedback.m"
        }
#line 483 "feedback.m"
        {
#line 483 "feedback.m"
          MR_Word base;
#line 483 "feedback.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "feedback.m"
          *mdbcomp__feedback__Result_10 = base;
#line 483 "feedback.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_20_20));
#line 483 "feedback.m"
        }
#line 482 "feedback.m"
      }
#line 478 "feedback.m"
    else
#line 462 "feedback.m"
      {
#line 462 "feedback.m"
        MR_String mdbcomp__feedback__String_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__IOResultLine_12, (MR_Integer) 0)));
#line 462 "feedback.m"
        MR_String mdbcomp__feedback__ActualProfiledProgramName_14;

#line 463 "feedback.m"
        {
#line 463 "feedback.m"
          mdbcomp__feedback__ActualProfiledProgramName_14 = mercury__string__strip_1_f_0(mdbcomp__feedback__String_13);
        }
#line 467 "feedback.m"
        if ((mdbcomp__feedback__MaybeExpectedProfiledProgramName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 466 "feedback.m"
          {
#line 466 "feedback.m"
            MR_Word base;
#line 466 "feedback.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 466 "feedback.m"
            *mdbcomp__feedback__Result_10 = base;
#line 466 "feedback.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__ActualProfiledProgramName_14));
#line 466 "feedback.m"
          }
#line 467 "feedback.m"
        else
#line 469 "feedback.m"
          {
#line 469 "feedback.m"
            MR_String mdbcomp__feedback__ExpectedProfiledProgramName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__MaybeExpectedProfiledProgramName_7, (MR_Integer) 0)));

#line 470 "feedback.m"
            mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__ActualProfiledProgramName_14, mdbcomp__feedback__ExpectedProfiledProgramName_15) == 0);
#line 472 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 471 "feedback.m"
              {
#line 471 "feedback.m"
                MR_Word base;
#line 471 "feedback.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 471 "feedback.m"
                *mdbcomp__feedback__Result_10 = base;
#line 471 "feedback.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__ActualProfiledProgramName_14));
#line 471 "feedback.m"
              }
#line 472 "feedback.m"
            else
#line 473 "feedback.m"
              {
#line 473 "feedback.m"
                MR_Word mdbcomp__feedback__V_22_22;

#line 473 "feedback.m"
                {
#line 473 "feedback.m"
                  mdbcomp__feedback__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 473 "feedback.m"
                  MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 473 "feedback.m"
                  MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_22_22, 1) = ((MR_Box) (mdbcomp__feedback__ExpectedProfiledProgramName_15));
#line 473 "feedback.m"
                  MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_22_22, 2) = ((MR_Box) (mdbcomp__feedback__ActualProfiledProgramName_14));
#line 473 "feedback.m"
                }
#line 473 "feedback.m"
                {
#line 473 "feedback.m"
                  MR_Word base;
#line 473 "feedback.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 473 "feedback.m"
                  *mdbcomp__feedback__Result_10 = base;
#line 473 "feedback.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_22_22));
#line 473 "feedback.m"
                }
#line 473 "feedback.m"
              }
#line 469 "feedback.m"
          }
#line 462 "feedback.m"
      }
#line 459 "feedback.m"
  }
#line 455 "feedback.m"
}

#line 430 "feedback.m"
void MR_CALL 
mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0(
#line 430 "feedback.m"
  MR_String mdbcomp__feedback__TestLine_8,
#line 430 "feedback.m"
  MR_Word mdbcomp__feedback__NotMatchError_9,
#line 430 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_10,
#line 430 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_12)
#line 430 "feedback.m"
{
#line 434 "feedback.m"
  {
#line 434 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 434 "feedback.m"
    MR_Word mdbcomp__feedback__IOResultLine_14;

#line 435 "feedback.m"
    {
#line 435 "feedback.m"
      mercury__io__read_line_as_string_4_p_0(mdbcomp__feedback__Stream_10, &mdbcomp__feedback__IOResultLine_14);
    }
#line 447 "feedback.m"
    if ((mdbcomp__feedback__IOResultLine_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "feedback.m"
      {
#line 449 "feedback.m"
        *mdbcomp__feedback__Result_12 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[1]);
#line 448 "feedback.m"
      }
#line 447 "feedback.m"
    else
#line 447 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__IOResultLine_14)) == (MR_mktag((MR_Integer) 2))))
#line 451 "feedback.m"
      {
#line 451 "feedback.m"
        MR_Word mdbcomp__feedback__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__IOResultLine_14, (MR_Integer) 0)));
#line 451 "feedback.m"
        MR_Word mdbcomp__feedback__V_20_20;

#line 452 "feedback.m"
        {
#line 452 "feedback.m"
          mdbcomp__feedback__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 452 "feedback.m"
          MR_hl_field(MR_mktag(2), mdbcomp__feedback__V_20_20, 0) = ((MR_Box) (mdbcomp__feedback__Error_16));
#line 452 "feedback.m"
        }
#line 452 "feedback.m"
        {
#line 452 "feedback.m"
          MR_Word base;
#line 452 "feedback.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 452 "feedback.m"
          *mdbcomp__feedback__Result_12 = base;
#line 452 "feedback.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_20_20));
#line 452 "feedback.m"
        }
#line 451 "feedback.m"
      }
#line 447 "feedback.m"
    else
#line 437 "feedback.m"
      {
#line 437 "feedback.m"
        MR_String mdbcomp__feedback__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__IOResultLine_14, (MR_Integer) 0)));

#line 439 "feedback.m"
        mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__Line_15, mdbcomp__feedback__TestLine_8) == 0);
#line 440 "feedback.m"
        if (!(mdbcomp__feedback__succeeded))
#line 440 "feedback.m"
          {
#line 440 "feedback.m"
            MR_String mdbcomp__feedback__V_25_25;

#line 440 "feedback.m"
            {
#line 440 "feedback.m"
              mdbcomp__feedback__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__TestLine_8, (MR_String) "\n");
            }
#line 440 "feedback.m"
            mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__Line_15, mdbcomp__feedback__V_25_25) == 0);
#line 440 "feedback.m"
          }
#line 444 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 443 "feedback.m"
          {
#line 443 "feedback.m"
            mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 443 "feedback.m"
            *mdbcomp__feedback__Result_12 = (MR_Word) &mdbcomp__feedback_scalar_common_4[3];
#line 443 "feedback.m"
          }
#line 444 "feedback.m"
        else
#line 445 "feedback.m"
          {
#line 445 "feedback.m"
            MR_Word base;
#line 445 "feedback.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 445 "feedback.m"
            *mdbcomp__feedback__Result_12 = base;
#line 445 "feedback.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__NotMatchError_9));
#line 445 "feedback.m"
          }
#line 437 "feedback.m"
      }
#line 434 "feedback.m"
  }
#line 430 "feedback.m"
}

#line 301 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__replace_feedback_candidate_parallel_conjunctions__301__1_2_p_0(
#line 301 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
#line 301 "feedback.m"
  MR_String mdbcomp__feedback__HeadVar__2_13)
#line 301 "feedback.m"
{
#line 301 "feedback.m"
  {
#line 301 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__HeadVar__2_13, mdbcomp__feedback__ProfiledProgramName_5) == 0);

#line 301 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 301 "feedback.m"
  }
#line 301 "feedback.m"
}

#line 295 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__295__1_2_p_0(
#line 295 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_17,
#line 295 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_18)
#line 295 "feedback.m"
{
#line 295 "feedback.m"
  {
#line 295 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 295 "feedback.m"
    {
#line 295 "feedback.m"
      return mdbcomp__feedback__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[0], ((MR_Box) (mdbcomp__feedback__HeadVar__1_17)), ((MR_Box) (mdbcomp__feedback__HeadVar__2_18)));
    }
#line 295 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 295 "feedback.m"
  }
#line 295 "feedback.m"
}

#line 293 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__293__1_2_p_0(
#line 293 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
#line 293 "feedback.m"
  MR_String mdbcomp__feedback__HeadVar__2_13)
#line 293 "feedback.m"
{
#line 293 "feedback.m"
  {
#line 293 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__HeadVar__2_13, mdbcomp__feedback__ProfiledProgramName_5) == 0);

#line 293 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 293 "feedback.m"
  }
#line 293 "feedback.m"
}

#line 205 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0(
#line 205 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 205 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 205 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 205 "feedback.m"
{
#line 205 "feedback.m"
  {
#line 205 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 205 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_16 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 205 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_17 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 205 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_16 == mdbcomp__feedback__CastY_17);
#line 205 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 1875 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "feedback.m"
    else
#line 205 "feedback.m"
    if ((mdbcomp__feedback__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "feedback.m"
      if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "feedback.m"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "feedback.m"
      else
#line 205 "feedback.m"
      if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1889 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 205 "feedback.m"
      else
#line 1893 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 205 "feedback.m"
    else
#line 205 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 205 "feedback.m"
      {
#line 205 "feedback.m"
        MR_Word mdbcomp__feedback__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 205 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1906 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 205 "feedback.m"
        else
#line 205 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 205 "feedback.m"
          {
#line 205 "feedback.m"
            MR_Word mdbcomp__feedback__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

#line 205 "feedback.m"
            {
#line 205 "feedback.m"
              mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_20_20, mdbcomp__feedback__V_8_8);
#line 205 "feedback.m"
              return;
            }
#line 205 "feedback.m"
          }
#line 205 "feedback.m"
        else
#line 1928 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 205 "feedback.m"
      }
#line 205 "feedback.m"
    else
#line 205 "feedback.m"
      {
#line 205 "feedback.m"
        MR_Word mdbcomp__feedback__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 205 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1941 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 205 "feedback.m"
        else
#line 205 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1947 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 205 "feedback.m"
        else
#line 205 "feedback.m"
          {
#line 205 "feedback.m"
            MR_Word mdbcomp__feedback__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

#line 205 "feedback.m"
            {
#line 205 "feedback.m"
              mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_21_21, mdbcomp__feedback__V_15_15);
#line 205 "feedback.m"
              return;
            }
#line 205 "feedback.m"
          }
#line 205 "feedback.m"
      }
#line 205 "feedback.m"
  }
#line 205 "feedback.m"
}

#line 205 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_write_result_0_0(
#line 205 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 205 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 205 "feedback.m"
{
#line 205 "feedback.m"
  {
#line 205 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 205 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_9 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 205 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_10 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 205 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_9 == mdbcomp__feedback__CastY_10);
#line 205 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 205 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 205 "feedback.m"
    else
#line 205 "feedback.m"
    if ((mdbcomp__feedback__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 205 "feedback.m"
      {
#line 205 "feedback.m"
        MR_Integer mdbcomp__feedback__CastX_3 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 205 "feedback.m"
        MR_Integer mdbcomp__feedback__CastY_4 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 205 "feedback.m"
        mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastY_4 == mdbcomp__feedback__CastX_3);
#line 205 "feedback.m"
      }
#line 205 "feedback.m"
    else
#line 205 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 205 "feedback.m"
      {
#line 205 "feedback.m"
        MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "feedback.m"
        MR_Word mdbcomp__feedback__V_6_6;

#line 205 "feedback.m"
        mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 205 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 205 "feedback.m"
          {
#line 205 "feedback.m"
            mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 2030 "mdbcomp.feedback.c"
            {
#line 2032 "mdbcomp.feedback.c"
              return mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__V_5_5, mdbcomp__feedback__V_6_6);
            }
#line 205 "feedback.m"
          }
#line 205 "feedback.m"
      }
#line 205 "feedback.m"
    else
#line 205 "feedback.m"
      {
#line 205 "feedback.m"
        MR_Word mdbcomp__feedback__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "feedback.m"
        MR_Word mdbcomp__feedback__V_8_8;

#line 205 "feedback.m"
        mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 205 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 205 "feedback.m"
          {
#line 205 "feedback.m"
            mdbcomp__feedback__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 2056 "mdbcomp.feedback.c"
            {
#line 2058 "mdbcomp.feedback.c"
              return mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__V_7_7, mdbcomp__feedback__V_8_8);
            }
#line 205 "feedback.m"
          }
#line 205 "feedback.m"
      }
#line 205 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 205 "feedback.m"
  }
#line 205 "feedback.m"
}

#line 146 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0(
#line 146 "feedback.m"
  MR_Word mdbcomp__feedback__TypeInfo_for_T_6,
#line 146 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 146 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 146 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 146 "feedback.m"
{
#line 146 "feedback.m"
  {
#line 146 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 146 "feedback.m"
    MR_Word mdbcomp__feedback__Cast_HeadVar1_4 = mdbcomp__feedback__HeadVar__2_2;
#line 146 "feedback.m"
    MR_Word mdbcomp__feedback__Cast_HeadVar2_5 = mdbcomp__feedback__HeadVar__3_3;

#line 146 "feedback.m"
    {
#line 146 "feedback.m"
      mercury__maybe____Compare____maybe_error_2_0(mdbcomp__feedback__TypeInfo_for_T_6, (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0, mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__Cast_HeadVar1_4, mdbcomp__feedback__Cast_HeadVar2_5);
#line 146 "feedback.m"
      return;
    }
#line 146 "feedback.m"
  }
#line 146 "feedback.m"
}

#line 146 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0(
#line 146 "feedback.m"
  MR_Word mdbcomp__feedback__TypeInfo_for_T_5,
#line 146 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 146 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 146 "feedback.m"
{
#line 146 "feedback.m"
  {
#line 146 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 146 "feedback.m"
    MR_Word mdbcomp__feedback__Cast_HeadVar1_3 = mdbcomp__feedback__HeadVar__1_1;
#line 146 "feedback.m"
    MR_Word mdbcomp__feedback__Cast_HeadVar2_4 = mdbcomp__feedback__HeadVar__2_2;

#line 146 "feedback.m"
    {
#line 146 "feedback.m"
      return mdbcomp__feedback__succeeded = mercury__maybe____Unify____maybe_error_2_0(mdbcomp__feedback__TypeInfo_for_T_5, (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0, mdbcomp__feedback__Cast_HeadVar1_3, mdbcomp__feedback__Cast_HeadVar2_4);
    }
#line 146 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 146 "feedback.m"
  }
#line 146 "feedback.m"
}

#line 148 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0(
#line 148 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 148 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 148 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 148 "feedback.m"
{
#line 148 "feedback.m"
  {
#line 148 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 148 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_134 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 148 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_135 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 148 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_134 == mdbcomp__feedback__CastY_135);
#line 148 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 2162 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if ((mdbcomp__feedback__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 148 "feedback.m"
      if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 148 "feedback.m"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 148 "feedback.m"
      else
#line 148 "feedback.m"
      if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "feedback.m"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
      else
#line 148 "feedback.m"
      if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2182 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
      else
#line 148 "feedback.m"
      if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2188 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
      else
#line 148 "feedback.m"
      if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2194 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
      else
#line 148 "feedback.m"
      if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2200 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
      else
#line 148 "feedback.m"
      if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2206 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
      else
#line 2210 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if ((mdbcomp__feedback__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "feedback.m"
      if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 148 "feedback.m"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
      else
#line 148 "feedback.m"
      if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "feedback.m"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 148 "feedback.m"
      else
#line 148 "feedback.m"
      if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2230 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
      else
#line 148 "feedback.m"
      if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2236 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
      else
#line 148 "feedback.m"
      if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2242 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
      else
#line 148 "feedback.m"
      if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2248 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
      else
#line 148 "feedback.m"
      if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2254 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
      else
#line 2258 "mdbcomp.feedback.c"
        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_Word mdbcomp__feedback__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 148 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2271 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2277 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 148 "feedback.m"
          {
#line 148 "feedback.m"
            MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

#line 148 "feedback.m"
            {
#line 148 "feedback.m"
              mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_147_147, mdbcomp__feedback__V_5_5);
#line 148 "feedback.m"
              return;
            }
#line 148 "feedback.m"
          }
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2301 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2307 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2313 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2319 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 2323 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_Word mdbcomp__feedback__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 148 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2338 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2344 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2350 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 148 "feedback.m"
          {
#line 148 "feedback.m"
            MR_Word mdbcomp__feedback__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

#line 148 "feedback.m"
            {
#line 148 "feedback.m"
              mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_150_150, mdbcomp__feedback__V_23_23);
#line 148 "feedback.m"
              return;
            }
#line 148 "feedback.m"
          }
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2374 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2380 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2386 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 2390 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_144_144 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 148 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2407 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2413 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2419 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2425 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 148 "feedback.m"
          {
#line 148 "feedback.m"
            MR_String mdbcomp__feedback__V_112_112 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
#line 148 "feedback.m"
            MR_String mdbcomp__feedback__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 2)));
#line 148 "feedback.m"
            MR_Word mdbcomp__feedback__V_114_114;

#line 148 "feedback.m"
            {
#line 148 "feedback.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__feedback__V_114_114, mdbcomp__feedback__V_145_145, mdbcomp__feedback__V_112_112);
            }
#line 2445 "mdbcomp.feedback.c"
            mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_114_114 == (MR_Integer) 0);
#line 148 "feedback.m"
            mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 148 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 148 "feedback.m"
              *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_114_114;
#line 148 "feedback.m"
            else
#line 148 "feedback.m"
              {
#line 148 "feedback.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_144_144, mdbcomp__feedback__V_113_113);
#line 148 "feedback.m"
                return;
              }
#line 148 "feedback.m"
          }
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2468 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2474 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 2478 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_146_146 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 148 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2493 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2499 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2505 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2511 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2517 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 148 "feedback.m"
          {
#line 148 "feedback.m"
            MR_String mdbcomp__feedback__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));

#line 148 "feedback.m"
            {
#line 148 "feedback.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_146_146, mdbcomp__feedback__V_78_78);
#line 148 "feedback.m"
              return;
            }
#line 148 "feedback.m"
          }
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2541 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 2545 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_Integer mdbcomp__feedback__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_149_149 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 148 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2562 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2568 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2574 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2580 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2586 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2592 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 148 "feedback.m"
          {
#line 148 "feedback.m"
            MR_String mdbcomp__feedback__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
#line 148 "feedback.m"
            MR_Integer mdbcomp__feedback__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 2)));
#line 148 "feedback.m"
            MR_Word mdbcomp__feedback__V_46_46;

#line 148 "feedback.m"
            {
#line 148 "feedback.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__feedback__V_46_46, mdbcomp__feedback__V_149_149, mdbcomp__feedback__V_44_44);
            }
#line 2612 "mdbcomp.feedback.c"
            mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_46_46 == (MR_Integer) 0);
#line 148 "feedback.m"
            mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 148 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 148 "feedback.m"
              *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_46_46;
#line 148 "feedback.m"
            else
#line 148 "feedback.m"
              {
#line 148 "feedback.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_148_148, mdbcomp__feedback__V_45_45);
#line 148 "feedback.m"
                return;
              }
#line 148 "feedback.m"
          }
#line 148 "feedback.m"
        else
#line 2633 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_151_151 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 148 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2646 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2652 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2658 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2664 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2670 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2676 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2682 "mdbcomp.feedback.c"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "feedback.m"
        else
#line 148 "feedback.m"
          {
#line 148 "feedback.m"
            MR_String mdbcomp__feedback__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));

#line 148 "feedback.m"
            {
#line 148 "feedback.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_151_151, mdbcomp__feedback__V_133_133);
#line 148 "feedback.m"
              return;
            }
#line 148 "feedback.m"
          }
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
  }
#line 148 "feedback.m"
}

#line 148 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0(
#line 148 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 148 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 148 "feedback.m"
{
#line 148 "feedback.m"
  {
#line 148 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 148 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_23 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 148 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_24 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 148 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_23 == mdbcomp__feedback__CastY_24);
#line 148 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 148 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if ((mdbcomp__feedback__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_Integer mdbcomp__feedback__CastX_15 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 148 "feedback.m"
        MR_Integer mdbcomp__feedback__CastY_16 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 148 "feedback.m"
        mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastY_16 == mdbcomp__feedback__CastX_15);
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if ((mdbcomp__feedback__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_Integer mdbcomp__feedback__CastX_11 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 148 "feedback.m"
        MR_Integer mdbcomp__feedback__CastY_12 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 148 "feedback.m"
        mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastY_12 == mdbcomp__feedback__CastX_11);
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_Word mdbcomp__feedback__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "feedback.m"
        MR_Word mdbcomp__feedback__V_4_4;

#line 148 "feedback.m"
        mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 148 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 148 "feedback.m"
          {
#line 148 "feedback.m"
            mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 2780 "mdbcomp.feedback.c"
            {
#line 2782 "mdbcomp.feedback.c"
              return mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__V_3_3, mdbcomp__feedback__V_4_4);
            }
#line 148 "feedback.m"
          }
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "feedback.m"
        MR_Word mdbcomp__feedback__V_6_6;

#line 148 "feedback.m"
        mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 148 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 148 "feedback.m"
          {
#line 148 "feedback.m"
            mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 2808 "mdbcomp.feedback.c"
            {
#line 2810 "mdbcomp.feedback.c"
              return mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__V_5_5, mdbcomp__feedback__V_6_6);
            }
#line 148 "feedback.m"
          }
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 2)));
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_19_19;
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_20_20;

#line 148 "feedback.m"
        mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 148 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 148 "feedback.m"
          {
#line 148 "feedback.m"
            mdbcomp__feedback__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "feedback.m"
            mdbcomp__feedback__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 2842 "mdbcomp.feedback.c"
            mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_17_17, mdbcomp__feedback__V_19_19) == 0);
#line 148 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 2846 "mdbcomp.feedback.c"
              mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_18_18, mdbcomp__feedback__V_20_20) == 0);
#line 148 "feedback.m"
          }
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_14_14;

#line 148 "feedback.m"
        mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 148 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 148 "feedback.m"
          {
#line 148 "feedback.m"
            mdbcomp__feedback__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 2871 "mdbcomp.feedback.c"
            mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_13_13, mdbcomp__feedback__V_14_14) == 0);
#line 148 "feedback.m"
          }
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
    if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "feedback.m"
        MR_Integer mdbcomp__feedback__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 2)));
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_9_9;
#line 148 "feedback.m"
        MR_Integer mdbcomp__feedback__V_10_10;

#line 148 "feedback.m"
        mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 148 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 148 "feedback.m"
          {
#line 148 "feedback.m"
            mdbcomp__feedback__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "feedback.m"
            mdbcomp__feedback__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 2902 "mdbcomp.feedback.c"
            mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_7_7, mdbcomp__feedback__V_9_9) == 0);
#line 148 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 2906 "mdbcomp.feedback.c"
              mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_8_8 == mdbcomp__feedback__V_10_10);
#line 148 "feedback.m"
          }
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
    else
#line 148 "feedback.m"
      {
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "feedback.m"
        MR_String mdbcomp__feedback__V_22_22;

#line 148 "feedback.m"
        mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 148 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 148 "feedback.m"
          {
#line 148 "feedback.m"
            mdbcomp__feedback__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 2929 "mdbcomp.feedback.c"
            mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_21_21, mdbcomp__feedback__V_22_22) == 0);
#line 148 "feedback.m"
          }
#line 148 "feedback.m"
      }
#line 148 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 148 "feedback.m"
  }
#line 148 "feedback.m"
}

#line 79 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0(
#line 79 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 79 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 79 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 79 "feedback.m"
{
#line 79 "feedback.m"
  {
#line 79 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 79 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_9 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 79 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_10 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 79 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_9 == mdbcomp__feedback__CastY_10);
#line 79 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 2966 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 79 "feedback.m"
    else
#line 79 "feedback.m"
      {
#line 79 "feedback.m"
        MR_Word mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 79 "feedback.m"
        MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 79 "feedback.m"
        MR_Word mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));
#line 79 "feedback.m"
        MR_Word mdbcomp__feedback__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
#line 79 "feedback.m"
        MR_Word mdbcomp__feedback__V_8_8;

#line 79 "feedback.m"
        {
#line 79 "feedback.m"
          mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0(&mdbcomp__feedback__V_8_8, mdbcomp__feedback__V_4_4, mdbcomp__feedback__V_6_6);
        }
#line 2988 "mdbcomp.feedback.c"
        mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_8_8 == (MR_Integer) 0);
#line 79 "feedback.m"
        mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 79 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 79 "feedback.m"
          *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_8_8;
#line 79 "feedback.m"
        else
#line 79 "feedback.m"
          {
#line 79 "feedback.m"
            {
#line 79 "feedback.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[4], mdbcomp__feedback__HeadVar__1_1, ((MR_Box) (mdbcomp__feedback__V_5_5)), ((MR_Box) (mdbcomp__feedback__V_7_7)));
#line 79 "feedback.m"
              return;
            }
#line 79 "feedback.m"
          }
#line 79 "feedback.m"
      }
#line 79 "feedback.m"
  }
#line 79 "feedback.m"
}

#line 79 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0(
#line 79 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 79 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 79 "feedback.m"
{
#line 79 "feedback.m"
  {
#line 79 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 79 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_7 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 79 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_8 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 79 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_7 == mdbcomp__feedback__CastY_8);
#line 79 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 79 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 79 "feedback.m"
    else
#line 79 "feedback.m"
      {
#line 79 "feedback.m"
        MR_Word mdbcomp__feedback__TypeInfo_10_10;
#line 79 "feedback.m"
        MR_Word mdbcomp__feedback__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 79 "feedback.m"
        MR_Word mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 79 "feedback.m"
        MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 79 "feedback.m"
        MR_Word mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 3055 "mdbcomp.feedback.c"
        {
#line 3057 "mdbcomp.feedback.c"
          mdbcomp__feedback__succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0(mdbcomp__feedback__V_3_3, mdbcomp__feedback__V_5_5);
        }
#line 79 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 79 "feedback.m"
          {
#line 3064 "mdbcomp.feedback.c"
            mdbcomp__feedback__TypeInfo_10_10 = (MR_Word) &mdbcomp__feedback_scalar_common_1[4];
#line 3066 "mdbcomp.feedback.c"
            {
#line 3068 "mdbcomp.feedback.c"
              return mdbcomp__feedback__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__feedback__TypeInfo_10_10, ((MR_Box) (mdbcomp__feedback__V_4_4)), ((MR_Box) (mdbcomp__feedback__V_6_6)));
            }
#line 79 "feedback.m"
          }
#line 79 "feedback.m"
      }
#line 79 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 79 "feedback.m"
  }
#line 79 "feedback.m"
}

#line 256 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0(
#line 256 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 256 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 256 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 256 "feedback.m"
{
#line 256 "feedback.m"
  {
#line 256 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 256 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_9 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 256 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_10 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 256 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_9 == mdbcomp__feedback__CastY_10);
#line 256 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 3106 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 256 "feedback.m"
    else
#line 256 "feedback.m"
      {
#line 256 "feedback.m"
        MR_String mdbcomp__feedback__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 256 "feedback.m"
        MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 256 "feedback.m"
        MR_String mdbcomp__feedback__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));
#line 256 "feedback.m"
        MR_Word mdbcomp__feedback__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
#line 256 "feedback.m"
        MR_Word mdbcomp__feedback__V_8_8;

#line 256 "feedback.m"
        {
#line 256 "feedback.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__feedback__V_8_8, mdbcomp__feedback__V_4_4, mdbcomp__feedback__V_6_6);
        }
#line 3128 "mdbcomp.feedback.c"
        mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_8_8 == (MR_Integer) 0);
#line 256 "feedback.m"
        mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 256 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 256 "feedback.m"
          *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_8_8;
#line 256 "feedback.m"
        else
#line 256 "feedback.m"
          {
#line 256 "feedback.m"
            {
#line 256 "feedback.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[0], mdbcomp__feedback__HeadVar__1_1, ((MR_Box) (mdbcomp__feedback__V_5_5)), ((MR_Box) (mdbcomp__feedback__V_7_7)));
#line 256 "feedback.m"
              return;
            }
#line 256 "feedback.m"
          }
#line 256 "feedback.m"
      }
#line 256 "feedback.m"
  }
#line 256 "feedback.m"
}

#line 256 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_0_0(
#line 256 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 256 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 256 "feedback.m"
{
#line 256 "feedback.m"
  {
#line 256 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 256 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_7 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 256 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_8 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 256 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_7 == mdbcomp__feedback__CastY_8);
#line 256 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 256 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 256 "feedback.m"
    else
#line 256 "feedback.m"
      {
#line 256 "feedback.m"
        MR_Word mdbcomp__feedback__TypeInfo_9_9;
#line 256 "feedback.m"
        MR_String mdbcomp__feedback__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 256 "feedback.m"
        MR_Word mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 256 "feedback.m"
        MR_String mdbcomp__feedback__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 256 "feedback.m"
        MR_Word mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 3195 "mdbcomp.feedback.c"
        mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_3_3, mdbcomp__feedback__V_5_5) == 0);
#line 256 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 256 "feedback.m"
          {
#line 3201 "mdbcomp.feedback.c"
            mdbcomp__feedback__TypeInfo_9_9 = (MR_Word) &mdbcomp__feedback_scalar_common_1[0];
#line 3203 "mdbcomp.feedback.c"
            {
#line 3205 "mdbcomp.feedback.c"
              return mdbcomp__feedback__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__feedback__TypeInfo_9_9, ((MR_Box) (mdbcomp__feedback__V_4_4)), ((MR_Box) (mdbcomp__feedback__V_6_6)));
            }
#line 256 "feedback.m"
          }
#line 256 "feedback.m"
      }
#line 256 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 256 "feedback.m"
  }
#line 256 "feedback.m"
}

#line 271 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_component_wrapper_0_0(
#line 271 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 271 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 271 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 271 "feedback.m"
{
#line 271 "feedback.m"
  {
#line 271 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 271 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_6 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 271 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_7 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 271 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_6 == mdbcomp__feedback__CastY_7);
#line 271 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 3243 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 271 "feedback.m"
    else
#line 271 "feedback.m"
      {
#line 271 "feedback.m"
        MR_Word mdbcomp__feedback__V_4_4 = (MR_Word) mdbcomp__feedback__HeadVar__2_2;
#line 271 "feedback.m"
        MR_Word mdbcomp__feedback__V_5_5 = (MR_Word) mdbcomp__feedback__HeadVar__3_3;

#line 271 "feedback.m"
        {
#line 271 "feedback.m"
          mdbcomp__feedback____Compare____feedback_info_candidate_parallel_conjunctions_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_4_4, mdbcomp__feedback__V_5_5);
#line 271 "feedback.m"
          return;
        }
#line 271 "feedback.m"
      }
#line 271 "feedback.m"
  }
#line 271 "feedback.m"
}

#line 271 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_component_wrapper_0_0(
#line 271 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 271 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 271 "feedback.m"
{
#line 271 "feedback.m"
  {
#line 271 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 271 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_5 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 271 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_6 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 271 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_5 == mdbcomp__feedback__CastY_6);
#line 271 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 271 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 271 "feedback.m"
    else
#line 271 "feedback.m"
      {
#line 271 "feedback.m"
        MR_Word mdbcomp__feedback__V_3_3 = (MR_Word) mdbcomp__feedback__HeadVar__1_1;
#line 271 "feedback.m"
        MR_Word mdbcomp__feedback__V_4_4 = (MR_Word) mdbcomp__feedback__HeadVar__2_2;

#line 3301 "mdbcomp.feedback.c"
        {
#line 3303 "mdbcomp.feedback.c"
          return mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_info_candidate_parallel_conjunctions_0_0(mdbcomp__feedback__V_3_3, mdbcomp__feedback__V_4_4);
        }
#line 271 "feedback.m"
      }
#line 271 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 271 "feedback.m"
  }
#line 271 "feedback.m"
}

#line 605 "feedback.m"
MR_String MR_CALL 
mdbcomp__feedback__feedback_version_0_f_0(void)
#line 605 "feedback.m"
{
#line 607 "feedback.m"
  {
#line 607 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 607 "feedback.m"
    return (MR_String) "19";
#line 607 "feedback.m"
  }
#line 605 "feedback.m"
}

#line 601 "feedback.m"
MR_String MR_CALL 
mdbcomp__feedback__feedback_first_line_0_f_0(void)
#line 601 "feedback.m"
{
#line 603 "feedback.m"
  {
#line 603 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 603 "feedback.m"
    return (MR_String) "Mercury Compiler Feedback";
#line 603 "feedback.m"
  }
#line 601 "feedback.m"
}

#line 568 "feedback.m"
void MR_CALL 
mdbcomp__feedback__actually_write_feedback_file_5_p_0(
#line 568 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_6,
#line 568 "feedback.m"
  MR_Word mdbcomp__feedback__FeedbackInfo_7)
#line 568 "feedback.m"
{
#line 571 "feedback.m"
  {
#line 571 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 571 "feedback.m"
    MR_String mdbcomp__feedback__ProfiledProgramName_9;
#line 571 "feedback.m"
    MR_Word mdbcomp__feedback__MaybeCandidateParallelConjs_10;
#line 571 "feedback.m"
    MR_Word mdbcomp__feedback__Components_14;
#line 571 "feedback.m"
    MR_Word mdbcomp__feedback__STATE_VARIABLE_RevComponents_25_25;
#line 571 "feedback.m"
    MR_Word mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26;

#line 571 "feedback.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 572 "feedback.m"
    mdbcomp__feedback__ProfiledProgramName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__FeedbackInfo_7, (MR_Integer) 0)));
#line 572 "feedback.m"
    mdbcomp__feedback__MaybeCandidateParallelConjs_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__FeedbackInfo_7, (MR_Integer) 1)));
#line 574 "feedback.m"
    {
#line 574 "feedback.m"
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_6, (MR_String) "Mercury Compiler Feedback");
    }
#line 575 "feedback.m"
    {
#line 575 "feedback.m"
      mercury__io__nl_3_p_0(mdbcomp__feedback__Stream_6);
    }
#line 576 "feedback.m"
    {
#line 576 "feedback.m"
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_6, (MR_String) "19");
    }
#line 577 "feedback.m"
    {
#line 577 "feedback.m"
      mercury__io__nl_3_p_0(mdbcomp__feedback__Stream_6);
    }
#line 578 "feedback.m"
    {
#line 578 "feedback.m"
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_6, mdbcomp__feedback__ProfiledProgramName_9);
    }
#line 579 "feedback.m"
    {
#line 579 "feedback.m"
      mercury__io__nl_3_p_0(mdbcomp__feedback__Stream_6);
    }
#line 582 "feedback.m"
    mdbcomp__feedback__STATE_VARIABLE_RevComponents_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 585 "feedback.m"
    if ((mdbcomp__feedback__MaybeCandidateParallelConjs_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 584 "feedback.m"
      mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26 = mdbcomp__feedback__STATE_VARIABLE_RevComponents_25_25;
#line 585 "feedback.m"
    else
#line 586 "feedback.m"
      {
#line 586 "feedback.m"
        MR_Word mdbcomp__feedback__Candidates_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__MaybeCandidateParallelConjs_10, (MR_Integer) 0)));
#line 586 "feedback.m"
        MR_Word mdbcomp__feedback__CandComponent_13 = (MR_Word) mdbcomp__feedback__Candidates_12;

#line 588 "feedback.m"
        {
#line 588 "feedback.m"
          mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "feedback.m"
          MR_hl_field(MR_mktag(1), mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26, 0) = ((MR_Box) (mdbcomp__feedback__CandComponent_13));
#line 588 "feedback.m"
          MR_hl_field(MR_mktag(1), mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26, 1) = ((MR_Box) (mdbcomp__feedback__STATE_VARIABLE_RevComponents_25_25));
#line 588 "feedback.m"
        }
#line 586 "feedback.m"
      }
#line 590 "feedback.m"
    {
#line 590 "feedback.m"
      mercury__list__reverse_2_p_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_component_wrapper_0, mdbcomp__feedback__STATE_VARIABLE_RevComponents_26_26, &mdbcomp__feedback__Components_14);
    }
#line 592 "feedback.m"
    {
#line 592 "feedback.m"
      mercury__io__write_4_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[1], mdbcomp__feedback__Stream_6, ((MR_Box) (mdbcomp__feedback__Components_14)));
    }
#line 593 "feedback.m"
    {
#line 593 "feedback.m"
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_6, (MR_String) ".\n");
    }
#line 594 "feedback.m"
    {
#line 594 "feedback.m"
      mercury__io__close_output_3_p_0(mdbcomp__feedback__Stream_6);
#line 594 "feedback.m"
      return;
    }
#line 571 "feedback.m"
  }
#line 568 "feedback.m"
}

#line 512 "feedback.m"
void MR_CALL 
mdbcomp__feedback__add_feedback_components_3_p_0(
#line 512 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 512 "feedback.m"
  MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_0_2,
#line 512 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_3)
#line 512 "feedback.m"
{
#line 515 "feedback.m"
  while (MR_TRUE)
#line 515 "feedback.m"
    {
#line 515 "feedback.m"
      /* tailcall optimized into a loop */
#line 515 "feedback.m"
      {
#line 515 "feedback.m"
        MR_bool mdbcomp__feedback__succeeded;

#line 515 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "feedback.m"
          {
#line 516 "feedback.m"
            MR_Word base;
#line 516 "feedback.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 516 "feedback.m"
            *mdbcomp__feedback__Result_3 = base;
#line 516 "feedback.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__STATE_VARIABLE_Info_0_2));
#line 516 "feedback.m"
          }
#line 515 "feedback.m"
        else
#line 517 "feedback.m"
          {
#line 517 "feedback.m"
            MR_Word mdbcomp__feedback__Wrapper_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 517 "feedback.m"
            MR_Word mdbcomp__feedback__Wrappers_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 517 "feedback.m"
            MR_Word mdbcomp__feedback__Candidates_11 = (MR_Word) mdbcomp__feedback__Wrapper_7;
#line 517 "feedback.m"
            MR_Word mdbcomp__feedback__MaybeCandidates0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_2, (MR_Integer) 1)));
#line 517 "feedback.m"
            MR_String mdbcomp__feedback__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_2, (MR_Integer) 0)));

#line 526 "feedback.m"
            if ((mdbcomp__feedback__MaybeCandidates0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 522 "feedback.m"
              {
#line 522 "feedback.m"
                MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_17_17;
#line 522 "feedback.m"
                MR_Word mdbcomp__feedback__V_18_18;

#line 524 "feedback.m"
                {
#line 524 "feedback.m"
                  mdbcomp__feedback__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 524 "feedback.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__feedback__V_18_18, 0) = ((MR_Box) (mdbcomp__feedback__Candidates_11));
#line 524 "feedback.m"
                }
#line 524 "feedback.m"
                {
#line 524 "feedback.m"
                  mdbcomp__feedback__STATE_VARIABLE_Info_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 524 "feedback.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_17_17, 0) = ((MR_Box) (mdbcomp__feedback__V_21_21));
#line 524 "feedback.m"
                  MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_17_17, 1) = ((MR_Box) (mdbcomp__feedback__V_18_18));
#line 524 "feedback.m"
                }
#line 525 "feedback.m"
                /* direct tailcall eliminated */
#line 525 "feedback.m"
                {
#line 525 "feedback.m"
                  MR_Word mdbcomp__feedback__HeadVar__1__tmp_copy_1 = mdbcomp__feedback__Wrappers_8;
#line 525 "feedback.m"
                  MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_0__tmp_copy_2 = mdbcomp__feedback__STATE_VARIABLE_Info_17_17;

#line 525 "feedback.m"
                  mdbcomp__feedback__STATE_VARIABLE_Info_0_2 = mdbcomp__feedback__STATE_VARIABLE_Info_0__tmp_copy_2;
#line 525 "feedback.m"
                  mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__HeadVar__1__tmp_copy_1;
#line 525 "feedback.m"
                }
#line 525 "feedback.m"
                continue;
#line 522 "feedback.m"
              }
#line 526 "feedback.m"
            else
#line 527 "feedback.m"
              {
#line 528 "feedback.m"
                *mdbcomp__feedback__Result_3 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[2]);
#line 527 "feedback.m"
              }
#line 517 "feedback.m"
          }
#line 515 "feedback.m"
      }
#line 515 "feedback.m"
      break;
#line 515 "feedback.m"
    }
#line 512 "feedback.m"
}

#line 495 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_all_feedback_data_5_p_0(
#line 495 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_6,
#line 495 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_7,
#line 495 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_8)
#line 495 "feedback.m"
{
#line 498 "feedback.m"
  {
#line 498 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 498 "feedback.m"
    MR_Word mdbcomp__feedback__ReadResult_10;

#line 499 "feedback.m"
    {
#line 499 "feedback.m"
      mercury__io__read_4_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[1], mdbcomp__feedback__Stream_6, &mdbcomp__feedback__ReadResult_10);
    }
#line 504 "feedback.m"
    if ((mdbcomp__feedback__ReadResult_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "feedback.m"
      {
#line 506 "feedback.m"
        *mdbcomp__feedback__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[1]);
#line 505 "feedback.m"
      }
#line 504 "feedback.m"
    else
#line 504 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__ReadResult_10)) == (MR_mktag((MR_Integer) 2))))
#line 508 "feedback.m"
      {
#line 508 "feedback.m"
        MR_String mdbcomp__feedback__Error_13 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__ReadResult_10, (MR_Integer) 0)));
#line 508 "feedback.m"
        MR_Integer mdbcomp__feedback__Line_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__ReadResult_10, (MR_Integer) 1)));
#line 508 "feedback.m"
        MR_Word mdbcomp__feedback__V_18_18;

#line 509 "feedback.m"
        {
#line 509 "feedback.m"
          mdbcomp__feedback__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 509 "feedback.m"
          MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 509 "feedback.m"
          MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_18_18, 1) = ((MR_Box) (mdbcomp__feedback__Error_13));
#line 509 "feedback.m"
          MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_18_18, 2) = ((MR_Box) (mdbcomp__feedback__Line_14));
#line 509 "feedback.m"
        }
#line 509 "feedback.m"
        {
#line 509 "feedback.m"
          MR_Word base;
#line 509 "feedback.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 509 "feedback.m"
          *mdbcomp__feedback__Result_8 = base;
#line 509 "feedback.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_18_18));
#line 509 "feedback.m"
        }
#line 508 "feedback.m"
      }
#line 504 "feedback.m"
    else
#line 501 "feedback.m"
      {
#line 501 "feedback.m"
        MR_Word mdbcomp__feedback__Components_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__ReadResult_10, (MR_Integer) 0)));
#line 501 "feedback.m"
        MR_Word mdbcomp__feedback__Info0_12;

#line 281 "feedback.m"
        {
#line 281 "feedback.m"
          mdbcomp__feedback__Info0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info0_12, 0) = ((MR_Box) (mdbcomp__feedback__ProfiledProgramName_7));
#line 281 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info0_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "feedback.m"
        }
#line 503 "feedback.m"
        {
#line 503 "feedback.m"
          mdbcomp__feedback__add_feedback_components_3_p_0(mdbcomp__feedback__Components_11, mdbcomp__feedback__Info0_12, mdbcomp__feedback__Result_8);
#line 503 "feedback.m"
          return;
        }
#line 501 "feedback.m"
      }
#line 498 "feedback.m"
  }
#line 495 "feedback.m"
}

#line 455 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_profiled_program_name_6_p_0(
#line 455 "feedback.m"
  MR_Word mdbcomp__feedback__MaybeExpectedProfiledProgramName_7,
#line 455 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_8,
#line 455 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_10)
#line 455 "feedback.m"
{
#line 459 "feedback.m"
  {
#line 459 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 459 "feedback.m"
    {
#line 459 "feedback.m"
      mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_102_105_108_101_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_51_93_95_48_6_p_0(mdbcomp__feedback__MaybeExpectedProfiledProgramName_7, mdbcomp__feedback__Stream_8, mdbcomp__feedback__Result_10);
#line 459 "feedback.m"
      return;
    }
#line 459 "feedback.m"
  }
#line 455 "feedback.m"
}

#line 430 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_check_line_7_p_0(
#line 430 "feedback.m"
  MR_String mdbcomp__feedback__TestLine_8,
#line 430 "feedback.m"
  MR_Word mdbcomp__feedback__NotMatchError_9,
#line 430 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_10,
#line 430 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_12)
#line 430 "feedback.m"
{
#line 434 "feedback.m"
  {
#line 434 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 434 "feedback.m"
    {
#line 434 "feedback.m"
      mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0(mdbcomp__feedback__TestLine_8, mdbcomp__feedback__NotMatchError_9, mdbcomp__feedback__Stream_10, mdbcomp__feedback__Result_12);
#line 434 "feedback.m"
      return;
    }
#line 434 "feedback.m"
  }
#line 430 "feedback.m"
}

#line 413 "feedback.m"
void MR_CALL 
mdbcomp__feedback__maybe_read_5_p_0(
#line 413 "feedback.m"
  MR_Word mdbcomp__feedback__TypeInfo_for_A_15,
#line 413 "feedback.m"
  MR_Word mdbcomp__feedback__TypeInfo_for_B_16,
#line 413 "feedback.m"
  MR_Word mdbcomp__feedback__Pred_6,
#line 413 "feedback.m"
  MR_Word mdbcomp__feedback__Result0_7,
#line 413 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_8)
#line 413 "feedback.m"
{
#line 423 "feedback.m"
  {
#line 423 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 423 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__Result0_7)) == (MR_mktag((MR_Integer) 1))))
#line 425 "feedback.m"
      *mdbcomp__feedback__Result_8 = mdbcomp__feedback__Result0_7;
#line 423 "feedback.m"
    else
#line 421 "feedback.m"
      {
#line 421 "feedback.m"
        MR_Box mdbcomp__feedback__Acc_10 = (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Result0_7, (MR_Integer) 0));
#line 422 "feedback.m"
        void MR_CALL (* mdbcomp__feedback__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Pred_6, (MR_Integer) 1)));
#line 422 "feedback.m"
        MR_Box mdbcomp__feedback__conv2_Result_8;
#line 422 "feedback.m"
        MR_Box mdbcomp__feedback__conv1_STATE_VARIABLE_IO_13;

#line 422 "feedback.m"
        {
#line 422 "feedback.m"
          mdbcomp__feedback__func_0(((MR_Box) mdbcomp__feedback__Pred_6), mdbcomp__feedback__Acc_10, &mdbcomp__feedback__conv2_Result_8, ((MR_Box) ((MR_Integer) 0)), &mdbcomp__feedback__conv1_STATE_VARIABLE_IO_13);
        }
#line 422 "feedback.m"
        *mdbcomp__feedback__Result_8 = ((MR_Word) mdbcomp__feedback__conv2_Result_8);
#line 421 "feedback.m"
      }
#line 423 "feedback.m"
  }
#line 413 "feedback.m"
}

#line 543 "feedback.m"
static void MR_CALL 
mdbcomp__feedback__write_feedback_file_5_p_0_1(
#line 543 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg,
#line 543 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 543 "feedback.m"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 543 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_3)
#line 543 "feedback.m"
{
#line 543 "feedback.m"
  {
#line 543 "feedback.m"
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;

#line 543 "feedback.m"
    {
#line 543 "feedback.m"
      mdbcomp__feedback__actually_write_feedback_file_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 4))));
#line 543 "feedback.m"
      return;
    }
#line 543 "feedback.m"
  }
#line 543 "feedback.m"
}

#line 214 "feedback.m"
void MR_CALL 
mdbcomp__feedback__write_feedback_file_5_p_0(
#line 214 "feedback.m"
  MR_String mdbcomp__feedback__Path_6,
#line 214 "feedback.m"
  MR_Word mdbcomp__feedback__Feedback_7,
#line 214 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_8)
#line 214 "feedback.m"
{
#line 538 "feedback.m"
  {
#line 538 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 538 "feedback.m"
    MR_Word mdbcomp__feedback__OpenResult_10;

#line 539 "feedback.m"
    {
#line 539 "feedback.m"
      mercury__io__open_output_4_p_0(mdbcomp__feedback__Path_6, &mdbcomp__feedback__OpenResult_10);
    }
#line 559 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__OpenResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 560 "feedback.m"
      {
#line 560 "feedback.m"
        MR_Word mdbcomp__feedback__ErrorCode_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__OpenResult_10, (MR_Integer) 0)));

#line 561 "feedback.m"
        {
#line 561 "feedback.m"
          MR_Word base;
#line 561 "feedback.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 561 "feedback.m"
          *mdbcomp__feedback__Result_8 = base;
#line 561 "feedback.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__ErrorCode_16));
#line 561 "feedback.m"
        }
#line 560 "feedback.m"
      }
#line 559 "feedback.m"
    else
#line 541 "feedback.m"
      {
#line 541 "feedback.m"
        MR_Word mdbcomp__feedback__Stream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__OpenResult_10, (MR_Integer) 0)));
#line 541 "feedback.m"
        MR_Word mdbcomp__feedback__ExcpResult_12;
#line 543 "feedback.m"
        MR_Word mdbcomp__feedback__V_20_20;

#line 543 "feedback.m"
        {
#line 543 "feedback.m"
          mdbcomp__feedback__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 543 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_20_20, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_5[0]));
#line 543 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_20_20, 1) = ((MR_Box) (mdbcomp__feedback__write_feedback_file_5_p_0_1));
#line 543 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 543 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_20_20, 3) = ((MR_Box) (mdbcomp__feedback__Stream_11));
#line 543 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_20_20, 4) = ((MR_Box) (mdbcomp__feedback__Feedback_7));
#line 543 "feedback.m"
        }
#line 543 "feedback.m"
        {
#line 543 "feedback.m"
          mercury__exception__try_io_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, mdbcomp__feedback__V_20_20, &mdbcomp__feedback__ExcpResult_12);
        }
#line 549 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__ExcpResult_12)) == (MR_mktag((MR_Integer) 2))))
#line 550 "feedback.m"
          {
#line 550 "feedback.m"
            MR_Word mdbcomp__feedback__ExcpUniv_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__ExcpResult_12, (MR_Integer) 0)));
#line 555 "feedback.m"
            MR_Word mdbcomp__feedback__Excp_15;
#line 553 "feedback.m"
            MR_Box mdbcomp__feedback__conv0_Excp_15;

#line 553 "feedback.m"
            {
#line 553 "feedback.m"
              mdbcomp__feedback__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, mdbcomp__feedback__ExcpUniv_14, &mdbcomp__feedback__conv0_Excp_15);
            }
#line 553 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 553 "feedback.m"
              {
#line 553 "feedback.m"
                mdbcomp__feedback__Excp_15 = ((MR_Word) mdbcomp__feedback__conv0_Excp_15);
#line 553 "feedback.m"
                mdbcomp__feedback__succeeded = MR_TRUE;
#line 553 "feedback.m"
              }
#line 555 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 554 "feedback.m"
              {
#line 554 "feedback.m"
                MR_Word base;
#line 554 "feedback.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 554 "feedback.m"
                *mdbcomp__feedback__Result_8 = base;
#line 554 "feedback.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdbcomp__feedback__Excp_15));
#line 554 "feedback.m"
              }
#line 555 "feedback.m"
            else
#line 556 "feedback.m"
              {
#line 556 "feedback.m"
                {
#line 556 "feedback.m"
                  mercury__exception__rethrow_1_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, mdbcomp__feedback__ExcpResult_12);
#line 556 "feedback.m"
                  return;
                }
#line 556 "feedback.m"
              }
#line 550 "feedback.m"
          }
#line 549 "feedback.m"
        else
#line 548 "feedback.m"
          *mdbcomp__feedback__Result_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 541 "feedback.m"
      }
#line 538 "feedback.m"
  }
#line 214 "feedback.m"
}

#line 197 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_feedback_file_5_p_0(
#line 197 "feedback.m"
  MR_String mdbcomp__feedback__Path_6,
#line 197 "feedback.m"
  MR_Word mdbcomp__feedback__MaybeExpectedProfiledProgramName_7,
#line 197 "feedback.m"
  MR_Word * mdbcomp__feedback__ResultFeedbackInfo_8)
#line 197 "feedback.m"
{
#line 376 "feedback.m"
  {
#line 376 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 376 "feedback.m"
    MR_Word mdbcomp__feedback__IOResStream_10;

#line 377 "feedback.m"
    {
#line 377 "feedback.m"
      mercury__io__open_input_4_p_0(mdbcomp__feedback__Path_6, &mdbcomp__feedback__IOResStream_10);
    }
#line 404 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__IOResStream_10)) == (MR_mktag((MR_Integer) 1))))
#line 405 "feedback.m"
      {
#line 405 "feedback.m"
        MR_Word mdbcomp__feedback__ErrorCode_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__IOResStream_10, (MR_Integer) 0)));
#line 405 "feedback.m"
        MR_Word mdbcomp__feedback__V_17_17;

#line 406 "feedback.m"
        {
#line 406 "feedback.m"
          mdbcomp__feedback__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 406 "feedback.m"
          MR_hl_field(MR_mktag(1), mdbcomp__feedback__V_17_17, 0) = ((MR_Box) (mdbcomp__feedback__ErrorCode_13));
#line 406 "feedback.m"
        }
#line 406 "feedback.m"
        {
#line 406 "feedback.m"
          MR_Word base;
#line 406 "feedback.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 406 "feedback.m"
          *mdbcomp__feedback__ResultFeedbackInfo_8 = base;
#line 406 "feedback.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_17_17));
#line 406 "feedback.m"
        }
#line 405 "feedback.m"
      }
#line 404 "feedback.m"
    else
#line 379 "feedback.m"
      {
#line 379 "feedback.m"
        MR_Word mdbcomp__feedback__Stream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__IOResStream_10, (MR_Integer) 0)));
#line 379 "feedback.m"
        MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_21_21;

#line 390 "feedback.m"
        {
#line 390 "feedback.m"
          mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0((MR_String) "Mercury Compiler Feedback", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), mdbcomp__feedback__Stream_11, &mdbcomp__feedback__STATE_VARIABLE_Result_21_21);
        }
#line 4031 "mdbcomp.feedback.c"
        if (((MR_tag((MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_21_21)) == (MR_mktag((MR_Integer) 1))))
#line 4033 "mdbcomp.feedback.c"
          {
#line 4035 "mdbcomp.feedback.c"
            MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_24_24 = mdbcomp__feedback__STATE_VARIABLE_Result_21_21;
#line 4037 "mdbcomp.feedback.c"
            MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_30_30 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_24_24;

#line 425 "feedback.m"
            *mdbcomp__feedback__ResultFeedbackInfo_8 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_30_30;
#line 4042 "mdbcomp.feedback.c"
          }
#line 4044 "mdbcomp.feedback.c"
        else
#line 4046 "mdbcomp.feedback.c"
          {
#line 4048 "mdbcomp.feedback.c"
            MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_24_84;

#line 422 "feedback.m"
            {
#line 422 "feedback.m"
              mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0((MR_String) "19", (MR_Word) MR_mkword(MR_mktag(3), &mdbcomp__feedback_scalar_common_1[5]), mdbcomp__feedback__Stream_11, &mdbcomp__feedback__STATE_VARIABLE_Result_24_84);
            }
#line 4056 "mdbcomp.feedback.c"
            if (((MR_tag((MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_24_84)) == (MR_mktag((MR_Integer) 1))))
#line 4058 "mdbcomp.feedback.c"
              {
#line 4060 "mdbcomp.feedback.c"
                MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_30_86 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_24_84;

#line 425 "feedback.m"
                *mdbcomp__feedback__ResultFeedbackInfo_8 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_30_86;
#line 4065 "mdbcomp.feedback.c"
              }
#line 4067 "mdbcomp.feedback.c"
            else
#line 4069 "mdbcomp.feedback.c"
              {
#line 4071 "mdbcomp.feedback.c"
                MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_30_88;

#line 422 "feedback.m"
                {
#line 422 "feedback.m"
                  mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_102_105_108_101_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_51_93_95_48_6_p_0(mdbcomp__feedback__MaybeExpectedProfiledProgramName_7, mdbcomp__feedback__Stream_11, &mdbcomp__feedback__STATE_VARIABLE_Result_30_88);
                }
#line 423 "feedback.m"
                if (((MR_tag((MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_30_88)) == (MR_mktag((MR_Integer) 1))))
#line 425 "feedback.m"
                  *mdbcomp__feedback__ResultFeedbackInfo_8 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_30_88;
#line 423 "feedback.m"
                else
#line 421 "feedback.m"
                  {
#line 421 "feedback.m"
                    MR_String mdbcomp__feedback__Acc_79 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Result_30_88, (MR_Integer) 0)));

#line 422 "feedback.m"
                    {
#line 422 "feedback.m"
                      mdbcomp__feedback__read_all_feedback_data_5_p_0(mdbcomp__feedback__Stream_11, mdbcomp__feedback__Acc_79, mdbcomp__feedback__ResultFeedbackInfo_8);
                    }
#line 421 "feedback.m"
                  }
#line 4097 "mdbcomp.feedback.c"
              }
#line 4099 "mdbcomp.feedback.c"
          }
#line 403 "feedback.m"
        {
#line 403 "feedback.m"
          mercury__io__close_input_3_p_0(mdbcomp__feedback__Stream_11);
#line 403 "feedback.m"
          return;
        }
#line 379 "feedback.m"
      }
#line 376 "feedback.m"
  }
#line 197 "feedback.m"
}

#line 186 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_or_create_feedback_file_5_p_0(
#line 186 "feedback.m"
  MR_String mdbcomp__feedback__Path_6,
#line 186 "feedback.m"
  MR_String mdbcomp__feedback__ExpectedProfiledProgramName_7,
#line 186 "feedback.m"
  MR_Word * mdbcomp__feedback__FeedbackResult_8)
#line 186 "feedback.m"
{
#line 347 "feedback.m"
  {
#line 347 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 347 "feedback.m"
    MR_Word mdbcomp__feedback__ReadResult_10;
#line 347 "feedback.m"
    MR_Word mdbcomp__feedback__V_23_23;

#line 348 "feedback.m"
    {
#line 348 "feedback.m"
      mdbcomp__feedback__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 348 "feedback.m"
      MR_hl_field(MR_mktag(1), mdbcomp__feedback__V_23_23, 0) = ((MR_Box) (mdbcomp__feedback__ExpectedProfiledProgramName_7));
#line 348 "feedback.m"
    }
#line 348 "feedback.m"
    {
#line 348 "feedback.m"
      mdbcomp__feedback__read_feedback_file_5_p_0(mdbcomp__feedback__Path_6, mdbcomp__feedback__V_23_23, &mdbcomp__feedback__ReadResult_10);
    }
#line 353 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__ReadResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 354 "feedback.m"
      {
#line 354 "feedback.m"
        MR_Word mdbcomp__feedback__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__ReadResult_10, (MR_Integer) 0)));

#line 362 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__Error_12)) == (MR_mktag((MR_Integer) 1))))
#line 359 "feedback.m"
          {
#line 359 "feedback.m"
            MR_Word mdbcomp__feedback__V_25_25;

#line 281 "feedback.m"
            {
#line 281 "feedback.m"
              mdbcomp__feedback__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "feedback.m"
              MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_25_25, 0) = ((MR_Box) (mdbcomp__feedback__ExpectedProfiledProgramName_7));
#line 281 "feedback.m"
              MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "feedback.m"
            }
#line 360 "feedback.m"
            {
#line 360 "feedback.m"
              MR_Word base;
#line 360 "feedback.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 360 "feedback.m"
              *mdbcomp__feedback__FeedbackResult_8 = base;
#line 360 "feedback.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__V_25_25));
#line 360 "feedback.m"
            }
#line 359 "feedback.m"
          }
#line 362 "feedback.m"
        else
#line 371 "feedback.m"
          *mdbcomp__feedback__FeedbackResult_8 = mdbcomp__feedback__ReadResult_10;
#line 354 "feedback.m"
      }
#line 353 "feedback.m"
    else
#line 352 "feedback.m"
      *mdbcomp__feedback__FeedbackResult_8 = mdbcomp__feedback__ReadResult_10;
#line 347 "feedback.m"
  }
#line 186 "feedback.m"
}

#line 170 "feedback.m"
void MR_CALL 
mdbcomp__feedback__feedback_read_error_message_string_3_p_0(
#line 170 "feedback.m"
  MR_String mdbcomp__feedback__File_4,
#line 170 "feedback.m"
  MR_Word mdbcomp__feedback__Error_5,
#line 170 "feedback.m"
  MR_String * mdbcomp__feedback__Message_6)
#line 170 "feedback.m"
{
#line 310 "feedback.m"
  {
#line 310 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 310 "feedback.m"
    MR_String mdbcomp__feedback__MessagePart_8;
#line 310 "feedback.m"
    MR_String mdbcomp__feedback__V_61_61;
#line 310 "feedback.m"
    MR_Word mdbcomp__feedback__V_67_67;
#line 310 "feedback.m"
    MR_String mdbcomp__feedback__V_68_68;
#line 310 "feedback.m"
    MR_String mdbcomp__feedback__V_70_70;
#line 310 "feedback.m"
    MR_String mdbcomp__feedback__V_71_71;

#line 316 "feedback.m"
    if ((mdbcomp__feedback__Error_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 327 "feedback.m"
      mdbcomp__feedback__MessagePart_8 = (MR_String) "Incorrect file format";
#line 316 "feedback.m"
    else
#line 316 "feedback.m"
    if ((mdbcomp__feedback__Error_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 321 "feedback.m"
      mdbcomp__feedback__MessagePart_8 = (MR_String) "Unexpected end of file";
#line 316 "feedback.m"
    else
#line 316 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__Error_5)) == (MR_mktag((MR_Integer) 1))))
#line 314 "feedback.m"
      {
#line 314 "feedback.m"
        MR_Word mdbcomp__feedback__Code_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__Error_5, (MR_Integer) 0)));

#line 315 "feedback.m"
        {
#line 315 "feedback.m"
          mercury__io__error_message_2_p_0(mdbcomp__feedback__Code_7, &mdbcomp__feedback__MessagePart_8);
        }
#line 314 "feedback.m"
      }
#line 316 "feedback.m"
    else
#line 316 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__Error_5)) == (MR_mktag((MR_Integer) 2))))
#line 314 "feedback.m"
      {
#line 314 "feedback.m"
        MR_Word mdbcomp__feedback__Code_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__Error_5, (MR_Integer) 0)));

#line 315 "feedback.m"
        {
#line 315 "feedback.m"
          mercury__io__error_message_2_p_0(mdbcomp__feedback__Code_39, &mdbcomp__feedback__MessagePart_8);
        }
#line 314 "feedback.m"
      }
#line 316 "feedback.m"
    else
#line 316 "feedback.m"
    if (((((MR_tag((MR_Word) mdbcomp__feedback__Error_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 329 "feedback.m"
      {
#line 329 "feedback.m"
        MR_String mdbcomp__feedback__Got_12 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 2)));
#line 329 "feedback.m"
        MR_String mdbcomp__feedback__V_18_18;
#line 329 "feedback.m"
        MR_String mdbcomp__feedback__V_20_20;
#line 329 "feedback.m"
        MR_String mdbcomp__feedback__Expected_37 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));
#line 329 "feedback.m"
        MR_String mdbcomp__feedback__V_41_41;
#line 329 "feedback.m"
        MR_Word mdbcomp__feedback__V_47_47 = (MR_Word) &mdbcomp__feedback_scalar_common_4[0];
#line 329 "feedback.m"
        MR_String mdbcomp__feedback__V_48_48;
#line 329 "feedback.m"
        MR_String mdbcomp__feedback__V_50_50;
#line 329 "feedback.m"
        MR_String mdbcomp__feedback__V_51_51;
#line 329 "feedback.m"
        MR_String mdbcomp__feedback__V_58_58;

#line 333 "feedback.m"
        {
#line 333 "feedback.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdbcomp__feedback__V_47_47, mdbcomp__feedback__Got_12, &mdbcomp__feedback__V_41_41);
        }
#line 333 "feedback.m"
        {
#line 333 "feedback.m"
          mdbcomp__feedback__V_48_48 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__V_41_41, (MR_String) "\'");
        }
#line 333 "feedback.m"
        {
#line 333 "feedback.m"
          mdbcomp__feedback__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) "\' Got: \'", mdbcomp__feedback__V_48_48);
        }
#line 333 "feedback.m"
        {
#line 333 "feedback.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdbcomp__feedback__V_47_47, mdbcomp__feedback__Expected_37, &mdbcomp__feedback__V_51_51);
        }
#line 333 "feedback.m"
        {
#line 333 "feedback.m"
          mdbcomp__feedback__V_58_58 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__V_51_51, mdbcomp__feedback__V_50_50);
        }
#line 333 "feedback.m"
        {
#line 333 "feedback.m"
          mdbcomp__feedback__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "Expected: \'", mdbcomp__feedback__V_58_58);
        }
#line 333 "feedback.m"
        {
#line 333 "feedback.m"
          mdbcomp__feedback__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) " is this the right feedback file\?\n", mdbcomp__feedback__V_20_20);
        }
#line 332 "feedback.m"
        {
#line 332 "feedback.m"
          mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "The name of the program the feedback is for didn\'t match,", mdbcomp__feedback__V_18_18);
        }
#line 329 "feedback.m"
      }
#line 316 "feedback.m"
    else
#line 316 "feedback.m"
    if (((((MR_tag((MR_Word) mdbcomp__feedback__Error_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 323 "feedback.m"
      {
#line 323 "feedback.m"
        MR_String mdbcomp__feedback__Expected_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));

#line 324 "feedback.m"
        {
#line 324 "feedback.m"
          mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "Incorrect file format version; expected ", mdbcomp__feedback__Expected_11);
        }
#line 323 "feedback.m"
      }
#line 316 "feedback.m"
    else
#line 316 "feedback.m"
    if (((((MR_tag((MR_Word) mdbcomp__feedback__Error_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 317 "feedback.m"
      {
#line 317 "feedback.m"
        MR_String mdbcomp__feedback__ParseMessage_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));
#line 317 "feedback.m"
        MR_Integer mdbcomp__feedback__Line_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 2)));
#line 317 "feedback.m"
        MR_String mdbcomp__feedback__V_28_28;
#line 317 "feedback.m"
        MR_String mdbcomp__feedback__V_30_30;

#line 318 "feedback.m"
        {
#line 318 "feedback.m"
          mdbcomp__feedback__V_30_30 = mercury__string__string_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdbcomp__feedback__Line_10)));
        }
#line 318 "feedback.m"
        {
#line 318 "feedback.m"
          mdbcomp__feedback__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) " on line ", mdbcomp__feedback__V_30_30);
        }
#line 318 "feedback.m"
        {
#line 318 "feedback.m"
          mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__ParseMessage_9, mdbcomp__feedback__V_28_28);
        }
#line 317 "feedback.m"
      }
#line 316 "feedback.m"
    else
#line 335 "feedback.m"
      {
#line 335 "feedback.m"
        MR_String mdbcomp__feedback__ComponentName_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));
#line 335 "feedback.m"
        MR_String mdbcomp__feedback__V_15_15;

#line 337 "feedback.m"
        {
#line 337 "feedback.m"
          mdbcomp__feedback__V_15_15 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__ComponentName_13, (MR_String) " component");
        }
#line 337 "feedback.m"
        {
#line 337 "feedback.m"
          mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "File contains more than one ", mdbcomp__feedback__V_15_15);
        }
#line 335 "feedback.m"
      }
#line 4409 "mdbcomp.feedback.c"
    mdbcomp__feedback__V_67_67 = (MR_Word) &mdbcomp__feedback_scalar_common_4[0];
#line 339 "feedback.m"
    {
#line 339 "feedback.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdbcomp__feedback__V_67_67, mdbcomp__feedback__MessagePart_8, &mdbcomp__feedback__V_61_61);
    }
#line 339 "feedback.m"
    {
#line 339 "feedback.m"
      mdbcomp__feedback__V_68_68 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__V_61_61, (MR_String) "\n");
    }
#line 339 "feedback.m"
    {
#line 339 "feedback.m"
      mdbcomp__feedback__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdbcomp__feedback__V_68_68);
    }
#line 339 "feedback.m"
    {
#line 339 "feedback.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdbcomp__feedback__V_67_67, mdbcomp__feedback__File_4, &mdbcomp__feedback__V_71_71);
    }
#line 339 "feedback.m"
    {
#line 339 "feedback.m"
      *mdbcomp__feedback__Message_6 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__V_71_71, mdbcomp__feedback__V_70_70);
    }
#line 310 "feedback.m"
  }
#line 170 "feedback.m"
}

#line 301 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0_1(
#line 301 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg)
#line 301 "feedback.m"
{
#line 301 "feedback.m"
  {
#line 301 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 301 "feedback.m"
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;

#line 301 "feedback.m"
    {
#line 301 "feedback.m"
      return mdbcomp__feedback__succeeded = mdbcomp__feedback__IntroducedFrom__pred__replace_feedback_candidate_parallel_conjunctions__301__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 4))));
    }
#line 301 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 301 "feedback.m"
  }
#line 301 "feedback.m"
}

#line 137 "feedback.m"
void MR_CALL 
mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0(
#line 137 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
#line 137 "feedback.m"
  MR_Word mdbcomp__feedback__Data_6,
#line 137 "feedback.m"
  MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_0_8,
#line 137 "feedback.m"
  MR_Word * mdbcomp__feedback__STATE_VARIABLE_Info_9)
#line 137 "feedback.m"
{
#line 300 "feedback.m"
  {
#line 300 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 300 "feedback.m"
    MR_Word mdbcomp__feedback__V_10_10;
#line 300 "feedback.m"
    MR_String mdbcomp__feedback__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 300 "feedback.m"
    MR_Word mdbcomp__feedback__V_15_15;
#line 301 "feedback.m"
    MR_Word mdbcomp__feedback__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 303 "feedback.m"
    MR_String mdbcomp__feedback__V_17_17;
#line 303 "feedback.m"
    MR_Word mdbcomp__feedback__V_18_18;

#line 301 "feedback.m"
    {
#line 301 "feedback.m"
      mdbcomp__feedback__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 301 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_3[0]));
#line 301 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 1) = ((MR_Box) (mdbcomp__feedback__replace_feedback_candidate_parallel_conjunctions_4_p_0_1));
#line 301 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 301 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 3) = ((MR_Box) (mdbcomp__feedback__ProfiledProgramName_5));
#line 301 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 4) = ((MR_Box) (mdbcomp__feedback__V_13_13));
#line 301 "feedback.m"
    }
#line 301 "feedback.m"
    {
#line 301 "feedback.m"
      mercury__require__expect_3_p_0(mdbcomp__feedback__V_10_10, (MR_String) "predicate \140mdbcomp.feedback.replace_feedback_candidate_parallel_conjunctions\'/4", (MR_String) "replacing candidate parallel conjunctions for wrong program");
    }
#line 303 "feedback.m"
    {
#line 303 "feedback.m"
      mdbcomp__feedback__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 303 "feedback.m"
      MR_hl_field(MR_mktag(1), mdbcomp__feedback__V_15_15, 0) = ((MR_Box) (mdbcomp__feedback__Data_6));
#line 303 "feedback.m"
    }
#line 303 "feedback.m"
    mdbcomp__feedback__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 303 "feedback.m"
    mdbcomp__feedback__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 303 "feedback.m"
    {
#line 303 "feedback.m"
      MR_Word base;
#line 303 "feedback.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 303 "feedback.m"
      *mdbcomp__feedback__STATE_VARIABLE_Info_9 = base;
#line 303 "feedback.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__V_17_17));
#line 303 "feedback.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__feedback__V_15_15));
#line 303 "feedback.m"
    }
#line 300 "feedback.m"
  }
#line 137 "feedback.m"
}

#line 295 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_2(
#line 295 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg)
#line 295 "feedback.m"
{
#line 295 "feedback.m"
  {
#line 295 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 295 "feedback.m"
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;

#line 295 "feedback.m"
    {
#line 295 "feedback.m"
      return mdbcomp__feedback__succeeded = mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__295__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 4))));
    }
#line 295 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 295 "feedback.m"
  }
#line 295 "feedback.m"
}

#line 293 "feedback.m"
static MR_bool MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_1(
#line 293 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg)
#line 293 "feedback.m"
{
#line 293 "feedback.m"
  {
#line 293 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 293 "feedback.m"
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;

#line 293 "feedback.m"
    {
#line 293 "feedback.m"
      return mdbcomp__feedback__succeeded = mdbcomp__feedback__IntroducedFrom__pred__add_feedback_candidate_parallel_conjunctions__293__1_2_p_0(((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 4))));
    }
#line 293 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 293 "feedback.m"
  }
#line 293 "feedback.m"
}

#line 126 "feedback.m"
void MR_CALL 
mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0(
#line 126 "feedback.m"
  MR_String mdbcomp__feedback__ProfiledProgramName_5,
#line 126 "feedback.m"
  MR_Word mdbcomp__feedback__Data_6,
#line 126 "feedback.m"
  MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_0_8,
#line 126 "feedback.m"
  MR_Word * mdbcomp__feedback__STATE_VARIABLE_Info_9)
#line 126 "feedback.m"
{
#line 292 "feedback.m"
  {
#line 292 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 292 "feedback.m"
    MR_Word mdbcomp__feedback__V_10_10;
#line 292 "feedback.m"
    MR_String mdbcomp__feedback__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 292 "feedback.m"
    MR_Word mdbcomp__feedback__V_14_14;
#line 292 "feedback.m"
    MR_Word mdbcomp__feedback__V_17_17;
#line 292 "feedback.m"
    MR_Word mdbcomp__feedback__V_20_20;
#line 293 "feedback.m"
    MR_Word mdbcomp__feedback__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 295 "feedback.m"
    MR_String mdbcomp__feedback__V_22_22;
#line 297 "feedback.m"
    MR_String mdbcomp__feedback__V_23_23;
#line 297 "feedback.m"
    MR_Word mdbcomp__feedback__V_24_24;

#line 293 "feedback.m"
    {
#line 293 "feedback.m"
      mdbcomp__feedback__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 293 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_3[0]));
#line 293 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 1) = ((MR_Box) (mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_1));
#line 293 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 293 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 3) = ((MR_Box) (mdbcomp__feedback__ProfiledProgramName_5));
#line 293 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_10_10, 4) = ((MR_Box) (mdbcomp__feedback__V_13_13));
#line 293 "feedback.m"
    }
#line 293 "feedback.m"
    {
#line 293 "feedback.m"
      mercury__require__expect_3_p_0(mdbcomp__feedback__V_10_10, (MR_String) "predicate \140mdbcomp.feedback.add_feedback_candidate_parallel_conjunctions\'/4", (MR_String) "adding candidate parallel conjunctions for wrong program");
    }
#line 295 "feedback.m"
    mdbcomp__feedback__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 295 "feedback.m"
    mdbcomp__feedback__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 295 "feedback.m"
    {
#line 295 "feedback.m"
      mdbcomp__feedback__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 295 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_14_14, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_3[1]));
#line 295 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_14_14, 1) = ((MR_Box) (mdbcomp__feedback__add_feedback_candidate_parallel_conjunctions_4_p_0_2));
#line 295 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 295 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_14_14, 3) = ((MR_Box) (mdbcomp__feedback__V_17_17));
#line 295 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_14_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "feedback.m"
    }
#line 295 "feedback.m"
    {
#line 295 "feedback.m"
      mercury__require__expect_3_p_0(mdbcomp__feedback__V_14_14, (MR_String) "predicate \140mdbcomp.feedback.add_feedback_candidate_parallel_conjunctions\'/4", (MR_String) "overwriting old candidate_parallel_conjunctions data");
    }
#line 297 "feedback.m"
    {
#line 297 "feedback.m"
      mdbcomp__feedback__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 297 "feedback.m"
      MR_hl_field(MR_mktag(1), mdbcomp__feedback__V_20_20, 0) = ((MR_Box) (mdbcomp__feedback__Data_6));
#line 297 "feedback.m"
    }
#line 297 "feedback.m"
    mdbcomp__feedback__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 297 "feedback.m"
    mdbcomp__feedback__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 297 "feedback.m"
    {
#line 297 "feedback.m"
      MR_Word base;
#line 297 "feedback.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 297 "feedback.m"
      *mdbcomp__feedback__STATE_VARIABLE_Info_9 = base;
#line 297 "feedback.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__V_23_23));
#line 297 "feedback.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__feedback__V_20_20));
#line 297 "feedback.m"
    }
#line 292 "feedback.m"
  }
#line 126 "feedback.m"
}

#line 111 "feedback.m"
void MR_CALL 
mdbcomp__feedback__get_all_feedback_info_3_p_0(
#line 111 "feedback.m"
  MR_Word mdbcomp__feedback__Info_4,
#line 111 "feedback.m"
  MR_String * mdbcomp__feedback__ProfiledProgramName_5,
#line 111 "feedback.m"
  MR_Word * mdbcomp__feedback__MaybeCandidateParallelConjs_6)
#line 111 "feedback.m"
{
#line 289 "feedback.m"
  {
#line 289 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 289 "feedback.m"
    *mdbcomp__feedback__ProfiledProgramName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_4, (MR_Integer) 0)));
#line 289 "feedback.m"
    *mdbcomp__feedback__MaybeCandidateParallelConjs_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_4, (MR_Integer) 1)));
#line 289 "feedback.m"
  }
#line 111 "feedback.m"
}

#line 103 "feedback.m"
MR_Word MR_CALL 
mdbcomp__feedback__get_feedback_candidate_parallel_conjunctions_1_f_0(
#line 103 "feedback.m"
  MR_Word mdbcomp__feedback__Info_3)
#line 103 "feedback.m"
{
#line 284 "feedback.m"
  {
#line 284 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 284 "feedback.m"
    MR_Word mdbcomp__feedback__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 1)));
#line 284 "feedback.m"
    MR_String mdbcomp__feedback__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 0)));

#line 284 "feedback.m"
    return mdbcomp__feedback__HeadVar__2_2;
#line 284 "feedback.m"
  }
#line 103 "feedback.m"
}

#line 97 "feedback.m"
MR_String MR_CALL 
mdbcomp__feedback__get_feedback_profiled_program_name_1_f_0(
#line 97 "feedback.m"
  MR_Word mdbcomp__feedback__Info_3)
#line 97 "feedback.m"
{
#line 283 "feedback.m"
  {
#line 283 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 283 "feedback.m"
    MR_String mdbcomp__feedback__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 0)));
#line 283 "feedback.m"
    MR_Word mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 1)));

#line 283 "feedback.m"
    return mdbcomp__feedback__HeadVar__2_2;
#line 283 "feedback.m"
  }
#line 97 "feedback.m"
}

#line 61 "feedback.m"
MR_Word MR_CALL 
mdbcomp__feedback__init_feedback_info_1_f_0(
#line 61 "feedback.m"
  MR_String mdbcomp__feedback__ProgramName_3)
#line 61 "feedback.m"
{
#line 281 "feedback.m"
  {
#line 281 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 281 "feedback.m"
    MR_Word mdbcomp__feedback__HeadVar__2_2;

#line 281 "feedback.m"
    {
#line 281 "feedback.m"
      mdbcomp__feedback__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 281 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, 0) = ((MR_Box) (mdbcomp__feedback__ProgramName_3));
#line 281 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "feedback.m"
    }
#line 281 "feedback.m"
    return mdbcomp__feedback__HeadVar__2_2;
#line 281 "feedback.m"
  }
#line 61 "feedback.m"
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
