/*
** Automatically generated from `mdbcomp.feedback.m'
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
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 76 "mdbcomp.feedback.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__feedback__tree234__pti_tree234_2__plain_mdbcomp__feedback__type_ctor_info_feedback_type_0__plain_mdbcomp__feedback__type_ctor_info_feedback_data_0;

#line 79 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__list__ti_list_1mdbcomp__program_representation__type_ctor_info_call_site_0;

#line 82 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_data_0_0[3];

#line 85 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_data_0_0[3];

#line 88 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_data_0_0;

#line 91 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 94 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 97 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 100 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0;

#line 103 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_data_0_1[2];

#line 106 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_data_0_1[2];

#line 109 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_data_0_1;

#line 112 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_data_0_0[1];

#line 115 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_data_0_1[1];

#line 118 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_data_0[2];

#line 121 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_data_0[2];

#line 124 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_data_0[2];

#line 127 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__tree234__ti_tree234_2mdbcomp__feedback__type_ctor_info_feedback_type_0mdbcomp__feedback__type_ctor_info_feedback_data_0;

#line 130 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_0_0[2];

#line 133 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_0_0[2];

#line 136 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0;

#line 139 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_0_0[1];

#line 142 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_0[1];

#line 145 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_0[1];

#line 148 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_0[1];

#line 151 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_0[1];

#line 154 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0;

#line 157 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_1[1];

#line 160 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1;

#line 163 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_2[2];

#line 166 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_2[2];

#line 169 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2;

#line 172 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3;

#line 175 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_4[1];

#line 178 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4;

#line 181 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5;

#line 184 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_6[2];

#line 187 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_6[2];

#line 190 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6;

#line 193 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_0[2];

#line 196 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_1[1];

#line 199 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_2[1];

#line 202 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_3[3];

#line 205 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_read_error_0[4];

#line 208 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_read_error_0[7];

#line 211 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_read_error_0[7];

#line 214 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_result_1_0[1];

#line 217 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_result_1_0;

#line 220 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_result_1_1[1];

#line 223 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_result_1_1;

#line 226 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_result_1_0[1];

#line 229 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_result_1_1[1];

#line 232 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_read_result_1[2];

#line 235 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_read_result_1[2];

#line 238 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_read_result_1[2];

#line 241 "mdbcomp.feedback.c"
static const MR_EnumFunctorDesc mdbcomp__feedback__mdbcomp__feedback__enum_functor_desc_feedback_type_0_0;

#line 244 "mdbcomp.feedback.c"
static const MR_EnumFunctorDesc mdbcomp__feedback__mdbcomp__feedback__enum_functor_desc_feedback_type_0_1;

#line 247 "mdbcomp.feedback.c"
static const MR_EnumFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__enum_value_ordered_feedback_type_0[2];

#line 250 "mdbcomp.feedback.c"
static const MR_EnumFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__enum_name_ordered_feedback_type_0[2];

#line 253 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_type_0[2];

#line 256 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0;

#line 259 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_1[1];

#line 262 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1;

#line 265 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_2[1];

#line 268 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2;

#line 271 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_0[1];

#line 274 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_1[1];

#line 277 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_2[1];

#line 280 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_write_result_0[3];

#line 283 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_write_result_0[3];

#line 286 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_write_result_0[3];

#line 289 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_data_0_0_10001(
#line 292 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 294 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2);

#line 297 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_data_0_0_10001(
#line 300 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 302 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 304 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3);

#line 307 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_0_0_10001(
#line 310 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 312 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2);

#line 315 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0_10001(
#line 318 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 320 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 322 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3);

#line 325 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0_10001(
#line 328 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 330 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2);

#line 333 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0_10001(
#line 336 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 338 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 340 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3);

#line 343 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0_10001(
#line 346 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 348 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 350 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3);

#line 353 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0_10001(
#line 356 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 358 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_2,
#line 360 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3,
#line 362 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_4);

#line 365 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_type_0_0_10001(
#line 368 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 370 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2);

#line 373 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_type_0_0_10001(
#line 376 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 378 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 380 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3);

#line 383 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_write_result_0_0_10001(
#line 386 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 388 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2);

#line 391 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0_10001(
#line 394 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 396 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 398 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3);

#line 388 "feedback.m"
static void MR_CALL 
mdbcomp__feedback__read_data_5_p_0_1(
#line 388 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg,
#line 388 "feedback.m"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 388 "feedback.m"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 388 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_3);

#line 486 "feedback.m"
static void MR_CALL 
mdbcomp__feedback__write_feedback_file_6_p_0_1(
#line 486 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg,
#line 486 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 486 "feedback.m"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 486 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_3);


static /* final */ const MR_Box mdbcomp__feedback_scalar_common_1[6][2];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_2[3][3];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_3[1][9];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_4[2][1];

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_5[1][6];




static /* final */ const MR_Box mdbcomp__feedback_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1)),
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1)),
    ((MR_Box) (&mdbcomp__feedback_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__feedback_scalar_common_2[1]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_call_site_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "18"))
  },
};

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0)),
    ((MR_Box) (&mdbcomp__feedback_scalar_common_1[2]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdbcomp__feedback_scalar_common_5[0])),
    ((MR_Box) (mdbcomp__feedback__read_data_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_3[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdbcomp__feedback_scalar_common_5[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0)),
    ((MR_Box) (&mdbcomp__feedback__tree234__pti_tree234_2__plain_mdbcomp__feedback__type_ctor_info_feedback_type_0__plain_mdbcomp__feedback__type_ctor_info_feedback_data_0)),
    ((MR_Box) (&mdbcomp__feedback__tree234__pti_tree234_2__plain_mdbcomp__feedback__type_ctor_info_feedback_type_0__plain_mdbcomp__feedback__type_ctor_info_feedback_data_0))
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



#line 555 "mdbcomp.feedback.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdbcomp__feedback__tree234__pti_tree234_2__plain_mdbcomp__feedback__type_ctor_info_feedback_type_0__plain_mdbcomp__feedback__type_ctor_info_feedback_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0,
    (MR_PseudoTypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0
  }
};

#line 564 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__list__ti_list_1mdbcomp__program_representation__type_ctor_info_call_site_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_call_site_0
  }
};

#line 572 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_stat_measure_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__list__ti_list_1mdbcomp__program_representation__type_ctor_info_call_site_0
};

#line 579 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_data_0_0[3] = {
  (MR_String) "threshold",
  (MR_String) "stat_measure",
  (MR_String) "calls"
};

#line 586 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_data_0_0 = {
  (MR_String) "feedback_data_calls_above_threshold_sorted",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_data_0_0,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_data_0_0,
  NULL,
  NULL
};

#line 601 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_goal_rep_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 609 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_proc_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 617 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_string_proc_label_0,
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 626 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct1 mdbcomp__feedback__list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdbcomp__feedback__pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
  }
};

#line 634 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_data_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__feedback__automatic_parallelism__mdbcomp__feedback__automatic_parallelism__type_ctor_info_candidate_par_conjunctions_params_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__list__ti_list_1pair__ti_pair_2mdbcomp__program_representation__type_ctor_info_string_proc_label_0mdbcomp__feedback__automatic_parallelism__ti_candidate_par_conjunctions_proc_1mdbcomp__program_representation__ti_goal_rep_1mdbcomp__feedback__automatic_parallelism__type_ctor_info_pard_goal_annotation_0
};

#line 640 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_data_0_1[2] = {
  (MR_String) "parameters",
  (MR_String) "conjunctions"
};

#line 646 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_data_0_1 = {
  (MR_String) "feedback_data_candidate_parallel_conjunctions",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_data_0_1,
  mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_data_0_1,
  NULL,
  NULL
};

#line 661 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_data_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_data_0_0
};

#line 666 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_data_0_1[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_data_0_1
};

#line 671 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_data_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_data_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_data_0_1
  }
};

#line 685 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_data_0[2] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_data_0_0,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_data_0_1
};

#line 691 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_data_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 697 "mdbcomp.feedback.c"
const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_data_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_data_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_data",
  {
    mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_data_0
  },
  {
    mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_data_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_data_0
};

#line 718 "mdbcomp.feedback.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__feedback__tree234__ti_tree234_2mdbcomp__feedback__type_ctor_info_feedback_type_0mdbcomp__feedback__type_ctor_info_feedback_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0,
    (MR_TypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0
  }
};

#line 727 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdbcomp__feedback__tree234__ti_tree234_2mdbcomp__feedback__type_ctor_info_feedback_type_0mdbcomp__feedback__type_ctor_info_feedback_data_0
};

#line 733 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_info_0_0[2] = {
  (MR_String) "fi_program_name",
  (MR_String) "fi_map"
};

#line 739 "mdbcomp.feedback.c"
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

#line 754 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0
};

#line 759 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_info_0_0
  }
};

#line 768 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_info_0_0
};

#line 773 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_0[1] = {
  (MR_Integer) 0
};

#line 778 "mdbcomp.feedback.c"
const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_info_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_info_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_info",
  {
    mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_info_0
  },
  {
    mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_info_0
};

#line 799 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 804 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0 = {
  (MR_String) "open_error",
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

#line 819 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 824 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1 = {
  (MR_String) "read_error",
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

#line 839 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 845 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_2[2] = {
  (MR_String) "fre_pe_message",
  (MR_String) "fre_pe_line_no"
};

#line 851 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2 = {
  (MR_String) "parse_error",
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

#line 866 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3 = {
  (MR_String) "unexpected_eof",
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

#line 881 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 886 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4 = {
  (MR_String) "incorrect_version",
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

#line 901 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5 = {
  (MR_String) "incorrect_first_line",
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

#line 916 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_error_0_6[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 922 "mdbcomp.feedback.c"
static const MR_ConstString mdbcomp__feedback__mdbcomp__feedback__field_names_feedback_read_error_0_6[2] = {
  (MR_String) "fre_ipn_expected",
  (MR_String) "fre_ipn_got"
};

#line 928 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6 = {
  (MR_String) "incorrect_program_name",
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

#line 943 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_0[2] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5
};

#line 949 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_1[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0
};

#line 954 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_2[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1
};

#line 959 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_3[3] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6
};

#line 966 "mdbcomp.feedback.c"
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
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_error_0_3
  }
};

#line 990 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_read_error_0[7] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_5,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_6,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_4,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_0,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_2,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_1,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_error_0_3
};

#line 1001 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_read_error_0[7] = {
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1012 "mdbcomp.feedback.c"
const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_read_error_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_read_error_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_read_error",
  {
    mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_read_error_0
  },
  {
    mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_read_error_0
  },
  (MR_Integer) 7,
  (MR_Integer) 4,
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_read_error_0
};

#line 1033 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_result_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1038 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_result_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_result_1_0,
  NULL,
  NULL,
  NULL
};

#line 1053 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_result_1_1[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0
};

#line 1058 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_result_1_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_read_result_1_1,
  NULL,
  NULL,
  NULL
};

#line 1073 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_result_1_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_result_1_0
};

#line 1078 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_result_1_1[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_result_1_1
};

#line 1083 "mdbcomp.feedback.c"
static const MR_DuPtagLayout mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_read_result_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_result_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_read_result_1_1
  }
};

#line 1097 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_read_result_1[2] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_result_1_1,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_read_result_1_0
};

#line 1103 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_read_result_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1109 "mdbcomp.feedback.c"
const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_result_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_read_result_1_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_read_result_1_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_read_result",
  {
    mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_read_result_1
  },
  {
    mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_read_result_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_read_result_1
};

#line 1130 "mdbcomp.feedback.c"
static const MR_EnumFunctorDesc mdbcomp__feedback__mdbcomp__feedback__enum_functor_desc_feedback_type_0_0 = {
  (MR_String) "feedback_type_calls_above_threshold_sorted",
  (MR_Integer) 0
};

#line 1136 "mdbcomp.feedback.c"
static const MR_EnumFunctorDesc mdbcomp__feedback__mdbcomp__feedback__enum_functor_desc_feedback_type_0_1 = {
  (MR_String) "feedback_type_candidate_parallel_conjunctions",
  (MR_Integer) 1
};

#line 1142 "mdbcomp.feedback.c"
static const MR_EnumFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__enum_value_ordered_feedback_type_0[2] = {
  &mdbcomp__feedback__mdbcomp__feedback__enum_functor_desc_feedback_type_0_0,
  &mdbcomp__feedback__mdbcomp__feedback__enum_functor_desc_feedback_type_0_1
};

#line 1148 "mdbcomp.feedback.c"
static const MR_EnumFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__enum_name_ordered_feedback_type_0[2] = {
  &mdbcomp__feedback__mdbcomp__feedback__enum_functor_desc_feedback_type_0_0,
  &mdbcomp__feedback__mdbcomp__feedback__enum_functor_desc_feedback_type_0_1
};

#line 1154 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1160 "mdbcomp.feedback.c"
const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_type_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_type_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_type",
  {
    mdbcomp__feedback__mdbcomp__feedback__enum_name_ordered_feedback_type_0
  },
  {
    mdbcomp__feedback__mdbcomp__feedback__enum_value_ordered_feedback_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_type_0
};

#line 1181 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0 = {
  (MR_String) "ok",
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

#line 1196 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 1201 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1 = {
  (MR_String) "open_error",
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

#line 1216 "mdbcomp.feedback.c"
static const MR_PseudoTypeInfo mdbcomp__feedback__mdbcomp__feedback__field_types_feedback_write_result_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

#line 1221 "mdbcomp.feedback.c"
static const MR_DuFunctorDesc mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2 = {
  (MR_String) "write_error",
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

#line 1236 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_0[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0
};

#line 1241 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_1[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1
};

#line 1246 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_stag_ordered_feedback_write_result_0_2[1] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2
};

#line 1251 "mdbcomp.feedback.c"
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

#line 1270 "mdbcomp.feedback.c"
static const MR_DuFunctorDescPtr mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_write_result_0[3] = {
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_0,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_1,
  &mdbcomp__feedback__mdbcomp__feedback__du_functor_desc_feedback_write_result_0_2
};

#line 1277 "mdbcomp.feedback.c"
static const MR_Integer mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_write_result_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 1284 "mdbcomp.feedback.c"
const MR_TypeCtorInfo_Struct mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_write_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__feedback____Unify____feedback_write_result_0_0_10001)),
  ((MR_Box) (mdbcomp__feedback____Compare____feedback_write_result_0_0_10001)),
  (MR_String) "mdbcomp.feedback",
  (MR_String) "feedback_write_result",
  {
    mdbcomp__feedback__mdbcomp__feedback__du_name_ordered_feedback_write_result_0
  },
  {
    mdbcomp__feedback__mdbcomp__feedback__du_ptag_ordered_feedback_write_result_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdbcomp__feedback__mdbcomp__feedback__functor_number_map_feedback_write_result_0
};

#line 1305 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_data_0_0_10001(
#line 1308 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1310 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1312 "mdbcomp.feedback.c"
{
#line 1314 "mdbcomp.feedback.c"
  {
#line 1316 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1319 "mdbcomp.feedback.c"
    {
#line 1321 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_data_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1324 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1326 "mdbcomp.feedback.c"
  }
#line 1328 "mdbcomp.feedback.c"
}

#line 1331 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_data_0_0_10001(
#line 1334 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1336 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1338 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1340 "mdbcomp.feedback.c"
{
#line 1342 "mdbcomp.feedback.c"
  {
#line 1344 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1347 "mdbcomp.feedback.c"
    {
#line 1349 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_data_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1352 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1354 "mdbcomp.feedback.c"
  }
#line 1356 "mdbcomp.feedback.c"
}

#line 1359 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_info_0_0_10001(
#line 1362 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1364 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1366 "mdbcomp.feedback.c"
{
#line 1368 "mdbcomp.feedback.c"
  {
#line 1370 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1373 "mdbcomp.feedback.c"
    {
#line 1375 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_info_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1378 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1380 "mdbcomp.feedback.c"
  }
#line 1382 "mdbcomp.feedback.c"
}

#line 1385 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0_10001(
#line 1388 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1390 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1392 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1394 "mdbcomp.feedback.c"
{
#line 1396 "mdbcomp.feedback.c"
  {
#line 1398 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1401 "mdbcomp.feedback.c"
    {
#line 1403 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_info_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1406 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1408 "mdbcomp.feedback.c"
  }
#line 1410 "mdbcomp.feedback.c"
}

#line 1413 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0_10001(
#line 1416 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1418 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1420 "mdbcomp.feedback.c"
{
#line 1422 "mdbcomp.feedback.c"
  {
#line 1424 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1427 "mdbcomp.feedback.c"
    {
#line 1429 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_read_error_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1432 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1434 "mdbcomp.feedback.c"
  }
#line 1436 "mdbcomp.feedback.c"
}

#line 1439 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0_10001(
#line 1442 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1444 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1446 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1448 "mdbcomp.feedback.c"
{
#line 1450 "mdbcomp.feedback.c"
  {
#line 1452 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1455 "mdbcomp.feedback.c"
    {
#line 1457 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_read_error_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1460 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1462 "mdbcomp.feedback.c"
  }
#line 1464 "mdbcomp.feedback.c"
}

#line 1467 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0_10001(
#line 1470 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1472 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1474 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1476 "mdbcomp.feedback.c"
{
#line 1478 "mdbcomp.feedback.c"
  {
#line 1480 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1483 "mdbcomp.feedback.c"
    {
#line 1485 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_read_result_1_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1488 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1490 "mdbcomp.feedback.c"
  }
#line 1492 "mdbcomp.feedback.c"
}

#line 1495 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0_10001(
#line 1498 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1500 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_2,
#line 1502 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3,
#line 1504 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_4)
#line 1506 "mdbcomp.feedback.c"
{
#line 1508 "mdbcomp.feedback.c"
  {
#line 1510 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1513 "mdbcomp.feedback.c"
    {
#line 1515 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_read_result_1_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), &mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_3), ((MR_Word) mdbcomp__feedback__wrapper_arg_4));
    }
#line 1518 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_2 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1520 "mdbcomp.feedback.c"
  }
#line 1522 "mdbcomp.feedback.c"
}

#line 1525 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_type_0_0_10001(
#line 1528 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1530 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1532 "mdbcomp.feedback.c"
{
#line 1534 "mdbcomp.feedback.c"
  {
#line 1536 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1539 "mdbcomp.feedback.c"
    {
#line 1541 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_type_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1544 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1546 "mdbcomp.feedback.c"
  }
#line 1548 "mdbcomp.feedback.c"
}

#line 1551 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_type_0_0_10001(
#line 1554 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1556 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1558 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1560 "mdbcomp.feedback.c"
{
#line 1562 "mdbcomp.feedback.c"
  {
#line 1564 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1567 "mdbcomp.feedback.c"
    {
#line 1569 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_type_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1572 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1574 "mdbcomp.feedback.c"
  }
#line 1576 "mdbcomp.feedback.c"
}

#line 1579 "mdbcomp.feedback.c"
static MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_write_result_0_0_10001(
#line 1582 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 1584 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2)
#line 1586 "mdbcomp.feedback.c"
{
#line 1588 "mdbcomp.feedback.c"
  {
#line 1590 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded;

#line 1593 "mdbcomp.feedback.c"
    {
#line 1595 "mdbcomp.feedback.c"
      mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_write_result_0_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2));
    }
#line 1598 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 1600 "mdbcomp.feedback.c"
  }
#line 1602 "mdbcomp.feedback.c"
}

#line 1605 "mdbcomp.feedback.c"
static void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0_10001(
#line 1608 "mdbcomp.feedback.c"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 1610 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 1612 "mdbcomp.feedback.c"
  MR_Box mdbcomp__feedback__wrapper_arg_3)
#line 1614 "mdbcomp.feedback.c"
{
#line 1616 "mdbcomp.feedback.c"
  {
#line 1618 "mdbcomp.feedback.c"
    MR_Word mdbcomp__feedback__conv0_HeadVar__1_1;

#line 1621 "mdbcomp.feedback.c"
    {
#line 1623 "mdbcomp.feedback.c"
      mdbcomp__feedback____Compare____feedback_write_result_0_0(&mdbcomp__feedback__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__feedback__wrapper_arg_2), ((MR_Word) mdbcomp__feedback__wrapper_arg_3));
    }
#line 1626 "mdbcomp.feedback.c"
    *mdbcomp__feedback__wrapper_arg_1 = ((MR_Box) (mdbcomp__feedback__conv0_HeadVar__1_1));
#line 1628 "mdbcomp.feedback.c"
  }
#line 1630 "mdbcomp.feedback.c"
}

#line 363 "feedback.m"
void MR_CALL 
mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_p_0(
#line 363 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_6,
#line 363 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_8)
#line 363 "feedback.m"
{
#line 366 "feedback.m"
  {
#line 366 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 366 "feedback.m"
    MR_Word mdbcomp__feedback__IOResultLine_10;

#line 367 "feedback.m"
    {
#line 367 "feedback.m"
      mercury__io__read_line_as_string_4_p_0(mdbcomp__feedback__Stream_6, &mdbcomp__feedback__IOResultLine_10);
    }
#line 371 "feedback.m"
    if ((mdbcomp__feedback__IOResultLine_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 372 "feedback.m"
      {
#line 373 "feedback.m"
        *mdbcomp__feedback__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[0]);
#line 372 "feedback.m"
      }
#line 371 "feedback.m"
    else
#line 371 "feedback.m"
      if (((MR_tag((MR_Word) mdbcomp__feedback__IOResultLine_10)) == (MR_mktag((MR_Integer) 2))))
#line 375 "feedback.m"
        {
#line 375 "feedback.m"
          MR_Word mdbcomp__feedback__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__IOResultLine_10, (MR_Integer) 0)));
#line 375 "feedback.m"
          MR_Word mdbcomp__feedback__V_16_16;

#line 376 "feedback.m"
          {
#line 376 "feedback.m"
            mdbcomp__feedback__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 376 "feedback.m"
            MR_hl_field(MR_mktag(2), mdbcomp__feedback__V_16_16, 0) = ((MR_Box) (mdbcomp__feedback__Error_12));
#line 376 "feedback.m"
          }
#line 376 "feedback.m"
          {
#line 376 "feedback.m"
            MR_Word base;
#line 376 "feedback.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 376 "feedback.m"
            *mdbcomp__feedback__Result_8 = base;
#line 376 "feedback.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_16_16));
#line 376 "feedback.m"
          }
#line 375 "feedback.m"
        }
#line 371 "feedback.m"
      else
#line 369 "feedback.m"
        {
#line 369 "feedback.m"
          MR_String mdbcomp__feedback__String_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__IOResultLine_10, (MR_Integer) 0)));
#line 369 "feedback.m"
          MR_String mdbcomp__feedback__V_18_18;

#line 370 "feedback.m"
          {
#line 370 "feedback.m"
            mdbcomp__feedback__V_18_18 = mercury__string__strip_1_f_0(mdbcomp__feedback__String_11);
          }
#line 370 "feedback.m"
          {
#line 370 "feedback.m"
            MR_Word base;
#line 370 "feedback.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 370 "feedback.m"
            *mdbcomp__feedback__Result_8 = base;
#line 370 "feedback.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__V_18_18));
#line 370 "feedback.m"
          }
#line 369 "feedback.m"
        }
#line 366 "feedback.m"
  }
#line 363 "feedback.m"
}

#line 347 "feedback.m"
void MR_CALL 
mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_p_0(
#line 347 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_6,
#line 347 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_8)
#line 347 "feedback.m"
{
#line 350 "feedback.m"
  {
#line 350 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 350 "feedback.m"
    MR_Word mdbcomp__feedback__IOResultLine_10;

#line 351 "feedback.m"
    {
#line 351 "feedback.m"
      mercury__io__read_line_as_string_4_p_0(mdbcomp__feedback__Stream_6, &mdbcomp__feedback__IOResultLine_10);
    }
#line 355 "feedback.m"
    if ((mdbcomp__feedback__IOResultLine_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "feedback.m"
      {
#line 357 "feedback.m"
        *mdbcomp__feedback__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[0]);
#line 356 "feedback.m"
      }
#line 355 "feedback.m"
    else
#line 355 "feedback.m"
      if (((MR_tag((MR_Word) mdbcomp__feedback__IOResultLine_10)) == (MR_mktag((MR_Integer) 2))))
#line 359 "feedback.m"
        {
#line 359 "feedback.m"
          MR_Word mdbcomp__feedback__Error_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__IOResultLine_10, (MR_Integer) 0)));
#line 359 "feedback.m"
          MR_Word mdbcomp__feedback__V_16_16;

#line 360 "feedback.m"
          {
#line 360 "feedback.m"
            mdbcomp__feedback__V_16_16 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 360 "feedback.m"
            MR_hl_field(MR_mktag(2), mdbcomp__feedback__V_16_16, 0) = ((MR_Box) (mdbcomp__feedback__Error_12));
#line 360 "feedback.m"
          }
#line 360 "feedback.m"
          {
#line 360 "feedback.m"
            MR_Word base;
#line 360 "feedback.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 360 "feedback.m"
            *mdbcomp__feedback__Result_8 = base;
#line 360 "feedback.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_16_16));
#line 360 "feedback.m"
          }
#line 359 "feedback.m"
        }
#line 355 "feedback.m"
      else
#line 353 "feedback.m"
        {
#line 354 "feedback.m"
          mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 354 "feedback.m"
          *mdbcomp__feedback__Result_8 = (MR_Word) &mdbcomp__feedback_scalar_common_4[1];
#line 353 "feedback.m"
        }
#line 350 "feedback.m"
  }
#line 347 "feedback.m"
}

#line 320 "feedback.m"
void MR_CALL 
mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0(
#line 320 "feedback.m"
  MR_String mdbcomp__feedback__TestLine_8,
#line 320 "feedback.m"
  MR_Word mdbcomp__feedback__NotMatchError_9,
#line 320 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_10,
#line 320 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_12)
#line 320 "feedback.m"
{
#line 324 "feedback.m"
  {
#line 324 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 324 "feedback.m"
    MR_Word mdbcomp__feedback__IOResultLine_14;

#line 325 "feedback.m"
    {
#line 325 "feedback.m"
      mercury__io__read_line_as_string_4_p_0(mdbcomp__feedback__Stream_10, &mdbcomp__feedback__IOResultLine_14);
    }
#line 337 "feedback.m"
    if ((mdbcomp__feedback__IOResultLine_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "feedback.m"
      {
#line 339 "feedback.m"
        *mdbcomp__feedback__Result_12 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[0]);
#line 338 "feedback.m"
      }
#line 337 "feedback.m"
    else
#line 337 "feedback.m"
      if (((MR_tag((MR_Word) mdbcomp__feedback__IOResultLine_14)) == (MR_mktag((MR_Integer) 2))))
#line 341 "feedback.m"
        {
#line 341 "feedback.m"
          MR_Word mdbcomp__feedback__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__IOResultLine_14, (MR_Integer) 0)));
#line 341 "feedback.m"
          MR_Word mdbcomp__feedback__V_20_20;

#line 342 "feedback.m"
          {
#line 342 "feedback.m"
            mdbcomp__feedback__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "feedback.m"
            MR_hl_field(MR_mktag(2), mdbcomp__feedback__V_20_20, 0) = ((MR_Box) (mdbcomp__feedback__Error_16));
#line 342 "feedback.m"
          }
#line 342 "feedback.m"
          {
#line 342 "feedback.m"
            MR_Word base;
#line 342 "feedback.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "feedback.m"
            *mdbcomp__feedback__Result_12 = base;
#line 342 "feedback.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_20_20));
#line 342 "feedback.m"
          }
#line 341 "feedback.m"
        }
#line 337 "feedback.m"
      else
#line 327 "feedback.m"
        {
#line 327 "feedback.m"
          MR_String mdbcomp__feedback__Line_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__IOResultLine_14, (MR_Integer) 0)));

#line 329 "feedback.m"
          mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__Line_15, mdbcomp__feedback__TestLine_8) == 0);
#line 330 "feedback.m"
          if (!(mdbcomp__feedback__succeeded))
#line 330 "feedback.m"
            {
#line 330 "feedback.m"
              MR_String mdbcomp__feedback__V_25_25;

#line 330 "feedback.m"
              {
#line 330 "feedback.m"
                mdbcomp__feedback__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__TestLine_8, (MR_String) "\n");
              }
#line 330 "feedback.m"
              mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__Line_15, mdbcomp__feedback__V_25_25) == 0);
#line 330 "feedback.m"
            }
#line 334 "feedback.m"
          if (mdbcomp__feedback__succeeded)
#line 333 "feedback.m"
            {
#line 333 "feedback.m"
              mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 333 "feedback.m"
              *mdbcomp__feedback__Result_12 = (MR_Word) &mdbcomp__feedback_scalar_common_4[1];
#line 333 "feedback.m"
            }
#line 334 "feedback.m"
          else
#line 335 "feedback.m"
            {
#line 335 "feedback.m"
              MR_Word base;
#line 335 "feedback.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 335 "feedback.m"
              *mdbcomp__feedback__Result_12 = base;
#line 335 "feedback.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__NotMatchError_9));
#line 335 "feedback.m"
            }
#line 327 "feedback.m"
        }
#line 324 "feedback.m"
  }
#line 320 "feedback.m"
}

#line 186 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_write_result_0_0(
#line 186 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 186 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 186 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 186 "feedback.m"
{
#line 186 "feedback.m"
  {
#line 186 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 186 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_16 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 186 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_17 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 186 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_16 == mdbcomp__feedback__CastY_17);
#line 186 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 1951 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 186 "feedback.m"
    else
#line 186 "feedback.m"
      if ((mdbcomp__feedback__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "feedback.m"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 186 "feedback.m"
        else
#line 186 "feedback.m"
          if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1965 "mdbcomp.feedback.c"
            *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "feedback.m"
          else
#line 1969 "mdbcomp.feedback.c"
            *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "feedback.m"
      else
#line 186 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 186 "feedback.m"
          {
#line 186 "feedback.m"
            MR_Word mdbcomp__feedback__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 186 "feedback.m"
            if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1982 "mdbcomp.feedback.c"
              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "feedback.m"
            else
#line 186 "feedback.m"
              if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 186 "feedback.m"
                {
#line 186 "feedback.m"
                  MR_Word mdbcomp__feedback__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

#line 186 "feedback.m"
                  {
#line 186 "feedback.m"
                    mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_20_20, mdbcomp__feedback__V_8_8);
#line 186 "feedback.m"
                    return;
                  }
#line 186 "feedback.m"
                }
#line 186 "feedback.m"
              else
#line 2004 "mdbcomp.feedback.c"
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 186 "feedback.m"
          }
#line 186 "feedback.m"
        else
#line 186 "feedback.m"
          {
#line 186 "feedback.m"
            MR_Word mdbcomp__feedback__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 186 "feedback.m"
            if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2017 "mdbcomp.feedback.c"
              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "feedback.m"
            else
#line 186 "feedback.m"
              if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2023 "mdbcomp.feedback.c"
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 186 "feedback.m"
              else
#line 186 "feedback.m"
                {
#line 186 "feedback.m"
                  MR_Word mdbcomp__feedback__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

#line 186 "feedback.m"
                  {
#line 186 "feedback.m"
                    mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_21_21, mdbcomp__feedback__V_15_15);
#line 186 "feedback.m"
                    return;
                  }
#line 186 "feedback.m"
                }
#line 186 "feedback.m"
          }
#line 186 "feedback.m"
  }
#line 186 "feedback.m"
}

#line 186 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_write_result_0_0(
#line 186 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 186 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 186 "feedback.m"
{
#line 186 "feedback.m"
  {
#line 186 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 186 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_9 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 186 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_10 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 186 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_9 == mdbcomp__feedback__CastY_10);
#line 186 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 186 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 186 "feedback.m"
    else
#line 186 "feedback.m"
      if ((mdbcomp__feedback__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "feedback.m"
        {
#line 186 "feedback.m"
          MR_Integer mdbcomp__feedback__CastX_3 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 186 "feedback.m"
          MR_Integer mdbcomp__feedback__CastY_4 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 186 "feedback.m"
          mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastY_4 == mdbcomp__feedback__CastX_3);
#line 186 "feedback.m"
        }
#line 186 "feedback.m"
      else
#line 186 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 186 "feedback.m"
          {
#line 186 "feedback.m"
            MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "feedback.m"
            MR_Word mdbcomp__feedback__V_6_6;

#line 186 "feedback.m"
            mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 186 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 186 "feedback.m"
              {
#line 186 "feedback.m"
                mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 2106 "mdbcomp.feedback.c"
                {
#line 2108 "mdbcomp.feedback.c"
                  return mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__V_5_5, mdbcomp__feedback__V_6_6);
                }
#line 186 "feedback.m"
              }
#line 186 "feedback.m"
          }
#line 186 "feedback.m"
        else
#line 186 "feedback.m"
          {
#line 186 "feedback.m"
            MR_Word mdbcomp__feedback__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 186 "feedback.m"
            MR_Word mdbcomp__feedback__V_8_8;

#line 186 "feedback.m"
            mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 186 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 186 "feedback.m"
              {
#line 186 "feedback.m"
                mdbcomp__feedback__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 2132 "mdbcomp.feedback.c"
                {
#line 2134 "mdbcomp.feedback.c"
                  return mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__V_7_7, mdbcomp__feedback__V_8_8);
                }
#line 186 "feedback.m"
              }
#line 186 "feedback.m"
          }
#line 186 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 186 "feedback.m"
  }
#line 186 "feedback.m"
}

#line 216 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_type_0_0(
#line 216 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 216 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 216 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 216 "feedback.m"
{
#line 216 "feedback.m"
  {
#line 216 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 216 "feedback.m"
    MR_Integer mdbcomp__feedback__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 216 "feedback.m"
    MR_Integer mdbcomp__feedback__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 216 "feedback.m"
    {
#line 216 "feedback.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__Cast_HeadVar1_4, mdbcomp__feedback__Cast_HeadVar2_5);
#line 216 "feedback.m"
      return;
    }
#line 216 "feedback.m"
  }
#line 216 "feedback.m"
}

#line 216 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_type_0_0(
#line 216 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_1,
#line 216 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 216 "feedback.m"
{
#line 2189 "mdbcomp.feedback.c"
  {
#line 2191 "mdbcomp.feedback.c"
    MR_bool mdbcomp__feedback__succeeded = (mdbcomp__feedback__HeadVar__2_1 == mdbcomp__feedback__HeadVar__2_2);

#line 2194 "mdbcomp.feedback.c"
    return mdbcomp__feedback__succeeded;
#line 2196 "mdbcomp.feedback.c"
  }
#line 216 "feedback.m"
}

#line 126 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_result_1_0(
#line 126 "feedback.m"
  MR_Word mdbcomp__feedback__TypeInfo_for_T_14,
#line 126 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 126 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 126 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 126 "feedback.m"
{
#line 126 "feedback.m"
  {
#line 126 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 126 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_12 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 126 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_13 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 126 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_12 == mdbcomp__feedback__CastY_13);
#line 126 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 2227 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "feedback.m"
    else
#line 126 "feedback.m"
      if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 126 "feedback.m"
        {
#line 126 "feedback.m"
          MR_Word mdbcomp__feedback__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 126 "feedback.m"
          if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 126 "feedback.m"
            {
#line 126 "feedback.m"
              MR_Word mdbcomp__feedback__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

#line 126 "feedback.m"
              {
#line 126 "feedback.m"
                mdbcomp__feedback____Compare____feedback_read_error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_16_16, mdbcomp__feedback__V_11_11);
#line 126 "feedback.m"
                return;
              }
#line 126 "feedback.m"
            }
#line 126 "feedback.m"
          else
#line 2256 "mdbcomp.feedback.c"
            *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 126 "feedback.m"
        }
#line 126 "feedback.m"
      else
#line 126 "feedback.m"
        {
#line 126 "feedback.m"
          MR_Box mdbcomp__feedback__V_17_17 = (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0));

#line 126 "feedback.m"
          if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2269 "mdbcomp.feedback.c"
            *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 126 "feedback.m"
          else
#line 126 "feedback.m"
            {
#line 126 "feedback.m"
              MR_Box mdbcomp__feedback__V_5_5 = (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0));

#line 126 "feedback.m"
              {
#line 126 "feedback.m"
                mercury__builtin__compare_3_p_0(mdbcomp__feedback__TypeInfo_for_T_14, mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_17_17, mdbcomp__feedback__V_5_5);
#line 126 "feedback.m"
                return;
              }
#line 126 "feedback.m"
            }
#line 126 "feedback.m"
        }
#line 126 "feedback.m"
  }
#line 126 "feedback.m"
}

#line 126 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_result_1_0(
#line 126 "feedback.m"
  MR_Word mdbcomp__feedback__TypeInfo_for_T_9,
#line 126 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 126 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 126 "feedback.m"
{
#line 126 "feedback.m"
  {
#line 126 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 126 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_7 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 126 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_8 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 126 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_7 == mdbcomp__feedback__CastY_8);
#line 126 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 126 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 126 "feedback.m"
    else
#line 126 "feedback.m"
      if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 126 "feedback.m"
        {
#line 126 "feedback.m"
          MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 126 "feedback.m"
          MR_Word mdbcomp__feedback__V_6_6;

#line 126 "feedback.m"
          mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 126 "feedback.m"
          if (mdbcomp__feedback__succeeded)
#line 126 "feedback.m"
            {
#line 126 "feedback.m"
              mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 2339 "mdbcomp.feedback.c"
              {
#line 2341 "mdbcomp.feedback.c"
                return mdbcomp__feedback__succeeded = mdbcomp__feedback____Unify____feedback_read_error_0_0(mdbcomp__feedback__V_5_5, mdbcomp__feedback__V_6_6);
              }
#line 126 "feedback.m"
            }
#line 126 "feedback.m"
        }
#line 126 "feedback.m"
      else
#line 126 "feedback.m"
        {
#line 126 "feedback.m"
          MR_Box mdbcomp__feedback__V_3_3 = (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0));
#line 126 "feedback.m"
          MR_Box mdbcomp__feedback__V_4_4;

#line 126 "feedback.m"
          mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 126 "feedback.m"
          if (mdbcomp__feedback__succeeded)
#line 126 "feedback.m"
            {
#line 126 "feedback.m"
              mdbcomp__feedback__V_4_4 = (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0));
#line 2365 "mdbcomp.feedback.c"
              {
#line 2367 "mdbcomp.feedback.c"
                return mdbcomp__feedback__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__feedback__TypeInfo_for_T_9, mdbcomp__feedback__V_3_3, mdbcomp__feedback__V_4_4);
              }
#line 126 "feedback.m"
            }
#line 126 "feedback.m"
        }
#line 126 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 126 "feedback.m"
  }
#line 126 "feedback.m"
}

#line 130 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_read_error_0_0(
#line 130 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 130 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 130 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 130 "feedback.m"
{
#line 130 "feedback.m"
  {
#line 130 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 130 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_104 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 130 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_105 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 130 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_104 == mdbcomp__feedback__CastY_105);
#line 130 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 2405 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "feedback.m"
    else
#line 130 "feedback.m"
      if ((mdbcomp__feedback__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 130 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 130 "feedback.m"
          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "feedback.m"
        else
#line 130 "feedback.m"
          if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "feedback.m"
            *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
          else
#line 130 "feedback.m"
            if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2425 "mdbcomp.feedback.c"
              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
            else
#line 130 "feedback.m"
              if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2431 "mdbcomp.feedback.c"
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
              else
#line 130 "feedback.m"
                if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2437 "mdbcomp.feedback.c"
                  *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                else
#line 130 "feedback.m"
                  if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2443 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                  else
#line 2447 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
      else
#line 130 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "feedback.m"
          if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 130 "feedback.m"
            *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
          else
#line 130 "feedback.m"
            if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "feedback.m"
              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 130 "feedback.m"
            else
#line 130 "feedback.m"
              if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2467 "mdbcomp.feedback.c"
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
              else
#line 130 "feedback.m"
                if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2473 "mdbcomp.feedback.c"
                  *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                else
#line 130 "feedback.m"
                  if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2479 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                  else
#line 130 "feedback.m"
                    if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2485 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                    else
#line 2489 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
        else
#line 130 "feedback.m"
          if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 130 "feedback.m"
            {
#line 130 "feedback.m"
              MR_Word mdbcomp__feedback__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 130 "feedback.m"
              if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2502 "mdbcomp.feedback.c"
                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
              else
#line 130 "feedback.m"
                if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2508 "mdbcomp.feedback.c"
                  *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                else
#line 130 "feedback.m"
                  if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 130 "feedback.m"
                    {
#line 130 "feedback.m"
                      MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

#line 130 "feedback.m"
                      {
#line 130 "feedback.m"
                        mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_116_116, mdbcomp__feedback__V_5_5);
#line 130 "feedback.m"
                        return;
                      }
#line 130 "feedback.m"
                    }
#line 130 "feedback.m"
                  else
#line 130 "feedback.m"
                    if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2532 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                    else
#line 130 "feedback.m"
                      if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2538 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                      else
#line 130 "feedback.m"
                        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2544 "mdbcomp.feedback.c"
                          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                        else
#line 2548 "mdbcomp.feedback.c"
                          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
            }
#line 130 "feedback.m"
          else
#line 130 "feedback.m"
            if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 130 "feedback.m"
              {
#line 130 "feedback.m"
                MR_Word mdbcomp__feedback__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 130 "feedback.m"
                if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2563 "mdbcomp.feedback.c"
                  *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                else
#line 130 "feedback.m"
                  if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2569 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                  else
#line 130 "feedback.m"
                    if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2575 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                    else
#line 130 "feedback.m"
                      if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 130 "feedback.m"
                        {
#line 130 "feedback.m"
                          MR_Word mdbcomp__feedback__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));

#line 130 "feedback.m"
                          {
#line 130 "feedback.m"
                            mercury__io____Compare____error_0_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_119_119, mdbcomp__feedback__V_21_21);
#line 130 "feedback.m"
                            return;
                          }
#line 130 "feedback.m"
                        }
#line 130 "feedback.m"
                      else
#line 130 "feedback.m"
                        if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2599 "mdbcomp.feedback.c"
                          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                        else
#line 130 "feedback.m"
                          if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2605 "mdbcomp.feedback.c"
                            *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                          else
#line 2609 "mdbcomp.feedback.c"
                            *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
              }
#line 130 "feedback.m"
            else
#line 130 "feedback.m"
              if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 130 "feedback.m"
                {
#line 130 "feedback.m"
                  MR_String mdbcomp__feedback__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 130 "feedback.m"
                  MR_String mdbcomp__feedback__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 130 "feedback.m"
                  if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2626 "mdbcomp.feedback.c"
                    *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                  else
#line 130 "feedback.m"
                    if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2632 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                    else
#line 130 "feedback.m"
                      if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2638 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                      else
#line 130 "feedback.m"
                        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2644 "mdbcomp.feedback.c"
                          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                        else
#line 130 "feedback.m"
                          if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 130 "feedback.m"
                            {
#line 130 "feedback.m"
                              MR_String mdbcomp__feedback__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
#line 130 "feedback.m"
                              MR_String mdbcomp__feedback__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 2)));
#line 130 "feedback.m"
                              MR_Word mdbcomp__feedback__V_103_103;

#line 130 "feedback.m"
                              {
#line 130 "feedback.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__feedback__V_103_103, mdbcomp__feedback__V_114_114, mdbcomp__feedback__V_101_101);
                              }
#line 2664 "mdbcomp.feedback.c"
                              mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_103_103 == (MR_Integer) 0);
#line 130 "feedback.m"
                              mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 130 "feedback.m"
                              if (mdbcomp__feedback__succeeded)
#line 130 "feedback.m"
                                *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_103_103;
#line 130 "feedback.m"
                              else
#line 130 "feedback.m"
                                {
#line 130 "feedback.m"
                                  mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_113_113, mdbcomp__feedback__V_102_102);
#line 130 "feedback.m"
                                  return;
                                }
#line 130 "feedback.m"
                            }
#line 130 "feedback.m"
                          else
#line 130 "feedback.m"
                            if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2687 "mdbcomp.feedback.c"
                              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                            else
#line 2691 "mdbcomp.feedback.c"
                              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                }
#line 130 "feedback.m"
              else
#line 130 "feedback.m"
                if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 130 "feedback.m"
                  {
#line 130 "feedback.m"
                    MR_String mdbcomp__feedback__V_115_115 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 130 "feedback.m"
                    if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2706 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                    else
#line 130 "feedback.m"
                      if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2712 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                      else
#line 130 "feedback.m"
                        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2718 "mdbcomp.feedback.c"
                          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                        else
#line 130 "feedback.m"
                          if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2724 "mdbcomp.feedback.c"
                            *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                          else
#line 130 "feedback.m"
                            if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2730 "mdbcomp.feedback.c"
                              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                            else
#line 130 "feedback.m"
                              if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 130 "feedback.m"
                                {
#line 130 "feedback.m"
                                  MR_String mdbcomp__feedback__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));

#line 130 "feedback.m"
                                  {
#line 130 "feedback.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_115_115, mdbcomp__feedback__V_70_70);
#line 130 "feedback.m"
                                    return;
                                  }
#line 130 "feedback.m"
                                }
#line 130 "feedback.m"
                              else
#line 2752 "mdbcomp.feedback.c"
                                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                  }
#line 130 "feedback.m"
                else
#line 130 "feedback.m"
                  {
#line 130 "feedback.m"
                    MR_Integer mdbcomp__feedback__V_117_117 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 130 "feedback.m"
                    MR_String mdbcomp__feedback__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 130 "feedback.m"
                    if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2767 "mdbcomp.feedback.c"
                      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                    else
#line 130 "feedback.m"
                      if ((mdbcomp__feedback__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2773 "mdbcomp.feedback.c"
                        *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                      else
#line 130 "feedback.m"
                        if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2779 "mdbcomp.feedback.c"
                          *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                        else
#line 130 "feedback.m"
                          if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2785 "mdbcomp.feedback.c"
                            *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 130 "feedback.m"
                          else
#line 130 "feedback.m"
                            if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 2791 "mdbcomp.feedback.c"
                              *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                            else
#line 130 "feedback.m"
                              if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2797 "mdbcomp.feedback.c"
                                *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 130 "feedback.m"
                              else
#line 130 "feedback.m"
                                {
#line 130 "feedback.m"
                                  MR_String mdbcomp__feedback__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
#line 130 "feedback.m"
                                  MR_Integer mdbcomp__feedback__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 2)));
#line 130 "feedback.m"
                                  MR_Word mdbcomp__feedback__V_42_42;

#line 130 "feedback.m"
                                  {
#line 130 "feedback.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__feedback__V_42_42, mdbcomp__feedback__V_118_118, mdbcomp__feedback__V_40_40);
                                  }
#line 2815 "mdbcomp.feedback.c"
                                  mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_42_42 == (MR_Integer) 0);
#line 130 "feedback.m"
                                  mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 130 "feedback.m"
                                  if (mdbcomp__feedback__succeeded)
#line 130 "feedback.m"
                                    *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_42_42;
#line 130 "feedback.m"
                                  else
#line 130 "feedback.m"
                                    {
#line 130 "feedback.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__feedback__HeadVar__1_1, mdbcomp__feedback__V_117_117, mdbcomp__feedback__V_41_41);
#line 130 "feedback.m"
                                      return;
                                    }
#line 130 "feedback.m"
                                }
#line 130 "feedback.m"
                  }
#line 130 "feedback.m"
  }
#line 130 "feedback.m"
}

#line 130 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_read_error_0_0(
#line 130 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 130 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 130 "feedback.m"
{
#line 130 "feedback.m"
  {
#line 130 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 130 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_21 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 130 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_22 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 130 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_21 == mdbcomp__feedback__CastY_22);
#line 130 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 130 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 130 "feedback.m"
    else
#line 130 "feedback.m"
      if ((mdbcomp__feedback__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 130 "feedback.m"
        {
#line 130 "feedback.m"
          MR_Integer mdbcomp__feedback__CastX_15 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 130 "feedback.m"
          MR_Integer mdbcomp__feedback__CastY_16 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 130 "feedback.m"
          mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastY_16 == mdbcomp__feedback__CastX_15);
#line 130 "feedback.m"
        }
#line 130 "feedback.m"
      else
#line 130 "feedback.m"
        if ((mdbcomp__feedback__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 130 "feedback.m"
          {
#line 130 "feedback.m"
            MR_Integer mdbcomp__feedback__CastX_11 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 130 "feedback.m"
            MR_Integer mdbcomp__feedback__CastY_12 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 130 "feedback.m"
            mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastY_12 == mdbcomp__feedback__CastX_11);
#line 130 "feedback.m"
          }
#line 130 "feedback.m"
        else
#line 130 "feedback.m"
          if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 130 "feedback.m"
            {
#line 130 "feedback.m"
              MR_Word mdbcomp__feedback__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "feedback.m"
              MR_Word mdbcomp__feedback__V_4_4;

#line 130 "feedback.m"
              mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 130 "feedback.m"
              if (mdbcomp__feedback__succeeded)
#line 130 "feedback.m"
                {
#line 130 "feedback.m"
                  mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 2914 "mdbcomp.feedback.c"
                  {
#line 2916 "mdbcomp.feedback.c"
                    return mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__V_3_3, mdbcomp__feedback__V_4_4);
                  }
#line 130 "feedback.m"
                }
#line 130 "feedback.m"
            }
#line 130 "feedback.m"
          else
#line 130 "feedback.m"
            if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 130 "feedback.m"
              {
#line 130 "feedback.m"
                MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 130 "feedback.m"
                MR_Word mdbcomp__feedback__V_6_6;

#line 130 "feedback.m"
                mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 130 "feedback.m"
                if (mdbcomp__feedback__succeeded)
#line 130 "feedback.m"
                  {
#line 130 "feedback.m"
                    mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 2942 "mdbcomp.feedback.c"
                    {
#line 2944 "mdbcomp.feedback.c"
                      return mdbcomp__feedback__succeeded = mercury__io____Unify____error_0_0(mdbcomp__feedback__V_5_5, mdbcomp__feedback__V_6_6);
                    }
#line 130 "feedback.m"
                  }
#line 130 "feedback.m"
              }
#line 130 "feedback.m"
            else
#line 130 "feedback.m"
              if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 130 "feedback.m"
                {
#line 130 "feedback.m"
                  MR_String mdbcomp__feedback__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "feedback.m"
                  MR_String mdbcomp__feedback__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 2)));
#line 130 "feedback.m"
                  MR_String mdbcomp__feedback__V_19_19;
#line 130 "feedback.m"
                  MR_String mdbcomp__feedback__V_20_20;

#line 130 "feedback.m"
                  mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 130 "feedback.m"
                  if (mdbcomp__feedback__succeeded)
#line 130 "feedback.m"
                    {
#line 130 "feedback.m"
                      mdbcomp__feedback__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "feedback.m"
                      mdbcomp__feedback__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 2976 "mdbcomp.feedback.c"
                      mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_17_17, mdbcomp__feedback__V_19_19) == 0);
#line 130 "feedback.m"
                      if (mdbcomp__feedback__succeeded)
#line 2980 "mdbcomp.feedback.c"
                        mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_18_18, mdbcomp__feedback__V_20_20) == 0);
#line 130 "feedback.m"
                    }
#line 130 "feedback.m"
                }
#line 130 "feedback.m"
              else
#line 130 "feedback.m"
                if (((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 130 "feedback.m"
                  {
#line 130 "feedback.m"
                    MR_String mdbcomp__feedback__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "feedback.m"
                    MR_String mdbcomp__feedback__V_14_14;

#line 130 "feedback.m"
                    mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 130 "feedback.m"
                    if (mdbcomp__feedback__succeeded)
#line 130 "feedback.m"
                      {
#line 130 "feedback.m"
                        mdbcomp__feedback__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 3005 "mdbcomp.feedback.c"
                        mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_13_13, mdbcomp__feedback__V_14_14) == 0);
#line 130 "feedback.m"
                      }
#line 130 "feedback.m"
                  }
#line 130 "feedback.m"
                else
#line 130 "feedback.m"
                  {
#line 130 "feedback.m"
                    MR_String mdbcomp__feedback__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 130 "feedback.m"
                    MR_Integer mdbcomp__feedback__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 2)));
#line 130 "feedback.m"
                    MR_String mdbcomp__feedback__V_9_9;
#line 130 "feedback.m"
                    MR_Integer mdbcomp__feedback__V_10_10;

#line 130 "feedback.m"
                    mdbcomp__feedback__succeeded = ((((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 130 "feedback.m"
                    if (mdbcomp__feedback__succeeded)
#line 130 "feedback.m"
                      {
#line 130 "feedback.m"
                        mdbcomp__feedback__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 130 "feedback.m"
                        mdbcomp__feedback__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 3034 "mdbcomp.feedback.c"
                        mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_7_7, mdbcomp__feedback__V_9_9) == 0);
#line 130 "feedback.m"
                        if (mdbcomp__feedback__succeeded)
#line 3038 "mdbcomp.feedback.c"
                          mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_8_8 == mdbcomp__feedback__V_10_10);
#line 130 "feedback.m"
                      }
#line 130 "feedback.m"
                  }
#line 130 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 130 "feedback.m"
  }
#line 130 "feedback.m"
}

#line 205 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_info_0_0(
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
    MR_Integer mdbcomp__feedback__CastX_9 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 205 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_10 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 205 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_9 == mdbcomp__feedback__CastY_10);
#line 205 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 3075 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "feedback.m"
    else
#line 205 "feedback.m"
      {
#line 205 "feedback.m"
        MR_String mdbcomp__feedback__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "feedback.m"
        MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "feedback.m"
        MR_String mdbcomp__feedback__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));
#line 205 "feedback.m"
        MR_Word mdbcomp__feedback__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "feedback.m"
        MR_Word mdbcomp__feedback__V_8_8;

#line 205 "feedback.m"
        {
#line 205 "feedback.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdbcomp__feedback__V_8_8, mdbcomp__feedback__V_4_4, mdbcomp__feedback__V_6_6);
        }
#line 3097 "mdbcomp.feedback.c"
        mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_8_8 == (MR_Integer) 0);
#line 205 "feedback.m"
        mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 205 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 205 "feedback.m"
          *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_8_8;
#line 205 "feedback.m"
        else
#line 205 "feedback.m"
          {
#line 205 "feedback.m"
            {
#line 205 "feedback.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback_scalar_common_2[0], mdbcomp__feedback__HeadVar__1_1, ((MR_Box) (mdbcomp__feedback__V_5_5)), ((MR_Box) (mdbcomp__feedback__V_7_7)));
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
mdbcomp__feedback____Unify____feedback_info_0_0(
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
    MR_Integer mdbcomp__feedback__CastX_7 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 205 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_8 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 205 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_7 == mdbcomp__feedback__CastY_8);
#line 205 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 205 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 205 "feedback.m"
    else
#line 205 "feedback.m"
      {
#line 205 "feedback.m"
        MR_Word mdbcomp__feedback__TypeInfo_9_9;
#line 205 "feedback.m"
        MR_String mdbcomp__feedback__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "feedback.m"
        MR_Word mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "feedback.m"
        MR_String mdbcomp__feedback__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "feedback.m"
        MR_Word mdbcomp__feedback__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));

#line 3164 "mdbcomp.feedback.c"
        mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__V_3_3, mdbcomp__feedback__V_5_5) == 0);
#line 205 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 205 "feedback.m"
          {
#line 3170 "mdbcomp.feedback.c"
            mdbcomp__feedback__TypeInfo_9_9 = (MR_Word) &mdbcomp__feedback_scalar_common_2[0];
#line 3172 "mdbcomp.feedback.c"
            {
#line 3174 "mdbcomp.feedback.c"
              return mdbcomp__feedback__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__feedback__TypeInfo_9_9, ((MR_Box) (mdbcomp__feedback__V_4_4)), ((MR_Box) (mdbcomp__feedback__V_6_6)));
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

#line 58 "feedback.m"
void MR_CALL 
mdbcomp__feedback____Compare____feedback_data_0_0(
#line 58 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 58 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2,
#line 58 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__3_3)
#line 58 "feedback.m"
{
#line 58 "feedback.m"
  {
#line 58 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 58 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_27 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;
#line 58 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_28 = (MR_Integer) mdbcomp__feedback__HeadVar__3_3;

#line 58 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_27 == mdbcomp__feedback__CastY_28);
#line 58 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 3212 "mdbcomp.feedback.c"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 58 "feedback.m"
    else
#line 58 "feedback.m"
      if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 58 "feedback.m"
        {
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 58 "feedback.m"
          MR_Integer mdbcomp__feedback__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 58 "feedback.m"
          if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 58 "feedback.m"
            {
#line 58 "feedback.m"
              MR_Integer mdbcomp__feedback__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));
#line 58 "feedback.m"
              MR_Word mdbcomp__feedback__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
#line 58 "feedback.m"
              MR_Word mdbcomp__feedback__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 2)));
#line 58 "feedback.m"
              MR_Word mdbcomp__feedback__V_10_10;

#line 58 "feedback.m"
              {
#line 58 "feedback.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__feedback__V_10_10, mdbcomp__feedback__V_36_36, mdbcomp__feedback__V_7_7);
              }
#line 3245 "mdbcomp.feedback.c"
              mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_10_10 == (MR_Integer) 0);
#line 58 "feedback.m"
              mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 58 "feedback.m"
              if (mdbcomp__feedback__succeeded)
#line 58 "feedback.m"
                *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_10_10;
#line 58 "feedback.m"
              else
#line 58 "feedback.m"
                {
#line 58 "feedback.m"
                  MR_Word mdbcomp__feedback__V_11_11;
#line 58 "feedback.m"
                  MR_Integer mdbcomp__feedback__V_39_39 = (MR_Integer) mdbcomp__feedback__V_35_35;
#line 58 "feedback.m"
                  MR_Integer mdbcomp__feedback__V_40_40 = (MR_Integer) mdbcomp__feedback__V_8_8;

#line 58 "feedback.m"
                  {
#line 58 "feedback.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__feedback__V_11_11, mdbcomp__feedback__V_39_39, mdbcomp__feedback__V_40_40);
                  }
#line 3269 "mdbcomp.feedback.c"
                  mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_11_11 == (MR_Integer) 0);
#line 58 "feedback.m"
                  mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 58 "feedback.m"
                  if (mdbcomp__feedback__succeeded)
#line 58 "feedback.m"
                    *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_11_11;
#line 58 "feedback.m"
                  else
#line 58 "feedback.m"
                    {
#line 58 "feedback.m"
                      {
#line 58 "feedback.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[4], mdbcomp__feedback__HeadVar__1_1, ((MR_Box) (mdbcomp__feedback__V_34_34)), ((MR_Box) (mdbcomp__feedback__V_9_9)));
#line 58 "feedback.m"
                        return;
                      }
#line 58 "feedback.m"
                    }
#line 58 "feedback.m"
                }
#line 58 "feedback.m"
            }
#line 58 "feedback.m"
          else
#line 3296 "mdbcomp.feedback.c"
            *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 58 "feedback.m"
        }
#line 58 "feedback.m"
      else
#line 58 "feedback.m"
        {
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));

#line 58 "feedback.m"
          if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3311 "mdbcomp.feedback.c"
            *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 2;
#line 58 "feedback.m"
          else
#line 58 "feedback.m"
            {
#line 58 "feedback.m"
              MR_Word mdbcomp__feedback__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 0)));
#line 58 "feedback.m"
              MR_Word mdbcomp__feedback__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__3_3, (MR_Integer) 1)));
#line 58 "feedback.m"
              MR_Word mdbcomp__feedback__V_26_26;

#line 58 "feedback.m"
              {
#line 58 "feedback.m"
                mdbcomp__feedback__automatic_parallelism____Compare____candidate_par_conjunctions_params_0_0(&mdbcomp__feedback__V_26_26, mdbcomp__feedback__V_38_38, mdbcomp__feedback__V_24_24);
              }
#line 3329 "mdbcomp.feedback.c"
              mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_26_26 == (MR_Integer) 0);
#line 58 "feedback.m"
              mdbcomp__feedback__succeeded = !(mdbcomp__feedback__succeeded);
#line 58 "feedback.m"
              if (mdbcomp__feedback__succeeded)
#line 58 "feedback.m"
                *mdbcomp__feedback__HeadVar__1_1 = mdbcomp__feedback__V_26_26;
#line 58 "feedback.m"
              else
#line 58 "feedback.m"
                {
#line 58 "feedback.m"
                  {
#line 58 "feedback.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[3], mdbcomp__feedback__HeadVar__1_1, ((MR_Box) (mdbcomp__feedback__V_37_37)), ((MR_Box) (mdbcomp__feedback__V_25_25)));
#line 58 "feedback.m"
                    return;
                  }
#line 58 "feedback.m"
                }
#line 58 "feedback.m"
            }
#line 58 "feedback.m"
        }
#line 58 "feedback.m"
  }
#line 58 "feedback.m"
}

#line 58 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback____Unify____feedback_data_0_0(
#line 58 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__1_1,
#line 58 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 58 "feedback.m"
{
#line 58 "feedback.m"
  {
#line 58 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 58 "feedback.m"
    MR_Integer mdbcomp__feedback__CastX_13 = (MR_Integer) mdbcomp__feedback__HeadVar__1_1;
#line 58 "feedback.m"
    MR_Integer mdbcomp__feedback__CastY_14 = (MR_Integer) mdbcomp__feedback__HeadVar__2_2;

#line 58 "feedback.m"
    mdbcomp__feedback__succeeded = (mdbcomp__feedback__CastX_13 == mdbcomp__feedback__CastY_14);
#line 58 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 58 "feedback.m"
      mdbcomp__feedback__succeeded = MR_TRUE;
#line 58 "feedback.m"
    else
#line 58 "feedback.m"
      if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 58 "feedback.m"
        {
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__TypeInfo_15_15;
#line 58 "feedback.m"
          MR_Integer mdbcomp__feedback__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 2)));
#line 58 "feedback.m"
          MR_Integer mdbcomp__feedback__V_6_6;
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__V_7_7;
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__V_8_8;

#line 58 "feedback.m"
          mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 58 "feedback.m"
          if (mdbcomp__feedback__succeeded)
#line 58 "feedback.m"
            {
#line 58 "feedback.m"
              mdbcomp__feedback__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 58 "feedback.m"
              mdbcomp__feedback__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 58 "feedback.m"
              mdbcomp__feedback__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 2)));
#line 3416 "mdbcomp.feedback.c"
              mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_3_3 == mdbcomp__feedback__V_6_6);
#line 58 "feedback.m"
              if (mdbcomp__feedback__succeeded)
#line 58 "feedback.m"
                {
#line 3422 "mdbcomp.feedback.c"
                  mdbcomp__feedback__succeeded = (mdbcomp__feedback__V_4_4 == mdbcomp__feedback__V_7_7);
#line 58 "feedback.m"
                  if (mdbcomp__feedback__succeeded)
#line 58 "feedback.m"
                    {
#line 3428 "mdbcomp.feedback.c"
                      mdbcomp__feedback__TypeInfo_15_15 = (MR_Word) &mdbcomp__feedback_scalar_common_1[4];
#line 3430 "mdbcomp.feedback.c"
                      {
#line 3432 "mdbcomp.feedback.c"
                        return mdbcomp__feedback__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__feedback__TypeInfo_15_15, ((MR_Box) (mdbcomp__feedback__V_5_5)), ((MR_Box) (mdbcomp__feedback__V_8_8)));
                      }
#line 58 "feedback.m"
                    }
#line 58 "feedback.m"
                }
#line 58 "feedback.m"
            }
#line 58 "feedback.m"
        }
#line 58 "feedback.m"
      else
#line 58 "feedback.m"
        {
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__TypeInfo_17_17;
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 0)));
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__1_1, (MR_Integer) 1)));
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__V_11_11;
#line 58 "feedback.m"
          MR_Word mdbcomp__feedback__V_12_12;

#line 58 "feedback.m"
          mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 58 "feedback.m"
          if (mdbcomp__feedback__succeeded)
#line 58 "feedback.m"
            {
#line 58 "feedback.m"
              mdbcomp__feedback__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 0)));
#line 58 "feedback.m"
              mdbcomp__feedback__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__HeadVar__2_2, (MR_Integer) 1)));
#line 3468 "mdbcomp.feedback.c"
              {
#line 3470 "mdbcomp.feedback.c"
                mdbcomp__feedback__succeeded = mdbcomp__feedback__automatic_parallelism____Unify____candidate_par_conjunctions_params_0_0(mdbcomp__feedback__V_9_9, mdbcomp__feedback__V_11_11);
              }
#line 58 "feedback.m"
              if (mdbcomp__feedback__succeeded)
#line 58 "feedback.m"
                {
#line 3477 "mdbcomp.feedback.c"
                  mdbcomp__feedback__TypeInfo_17_17 = (MR_Word) &mdbcomp__feedback_scalar_common_1[3];
#line 3479 "mdbcomp.feedback.c"
                  {
#line 3481 "mdbcomp.feedback.c"
                    return mdbcomp__feedback__succeeded = mercury__builtin__unify_2_p_0(mdbcomp__feedback__TypeInfo_17_17, ((MR_Box) (mdbcomp__feedback__V_10_10)), ((MR_Box) (mdbcomp__feedback__V_12_12)));
                  }
#line 58 "feedback.m"
                }
#line 58 "feedback.m"
            }
#line 58 "feedback.m"
        }
#line 58 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 58 "feedback.m"
  }
#line 58 "feedback.m"
}

#line 533 "feedback.m"
MR_String MR_CALL 
mdbcomp__feedback__feedback_version_0_f_0(void)
#line 533 "feedback.m"
{
#line 535 "feedback.m"
  {
#line 535 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 535 "feedback.m"
    return (MR_String) "18";
#line 535 "feedback.m"
  }
#line 533 "feedback.m"
}

#line 529 "feedback.m"
MR_String MR_CALL 
mdbcomp__feedback__feedback_first_line_0_f_0(void)
#line 529 "feedback.m"
{
#line 531 "feedback.m"
  {
#line 531 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 531 "feedback.m"
    return (MR_String) "Mercury Compiler Feedback";
#line 531 "feedback.m"
  }
#line 529 "feedback.m"
}

#line 511 "feedback.m"
void MR_CALL 
mdbcomp__feedback__write_feedback_file_2_6_p_0(
#line 511 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_7,
#line 511 "feedback.m"
  MR_String mdbcomp__feedback__ProgName_8,
#line 511 "feedback.m"
  MR_Word mdbcomp__feedback__Feedback_9)
#line 511 "feedback.m"
{
#line 514 "feedback.m"
  {
#line 514 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 514 "feedback.m"
    MR_Word mdbcomp__feedback__Map_11;
#line 514 "feedback.m"
    MR_Word mdbcomp__feedback__FeedbackList_12;
#line 521 "feedback.m"
    MR_String mdbcomp__feedback__V_27_27;

#line 514 "feedback.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 515 "feedback.m"
    {
#line 515 "feedback.m"
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_7, (MR_String) "Mercury Compiler Feedback");
    }
#line 516 "feedback.m"
    {
#line 516 "feedback.m"
      mercury__io__nl_3_p_0(mdbcomp__feedback__Stream_7);
    }
#line 517 "feedback.m"
    {
#line 517 "feedback.m"
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_7, (MR_String) "18");
    }
#line 518 "feedback.m"
    {
#line 518 "feedback.m"
      mercury__io__nl_3_p_0(mdbcomp__feedback__Stream_7);
    }
#line 519 "feedback.m"
    {
#line 519 "feedback.m"
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_7, mdbcomp__feedback__ProgName_8);
    }
#line 520 "feedback.m"
    {
#line 520 "feedback.m"
      mercury__io__nl_3_p_0(mdbcomp__feedback__Stream_7);
    }
#line 521 "feedback.m"
    mdbcomp__feedback__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Feedback_9, (MR_Integer) 0)));
#line 521 "feedback.m"
    mdbcomp__feedback__Map_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Feedback_9, (MR_Integer) 1)));
#line 522 "feedback.m"
    {
#line 522 "feedback.m"
      mercury__map__values_2_p_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0, (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0, mdbcomp__feedback__Map_11, &mdbcomp__feedback__FeedbackList_12);
    }
#line 523 "feedback.m"
    {
#line 523 "feedback.m"
      mercury__io__write_4_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[0], mdbcomp__feedback__Stream_7, ((MR_Box) (mdbcomp__feedback__FeedbackList_12)));
    }
#line 524 "feedback.m"
    {
#line 524 "feedback.m"
      mercury__io__write_string_4_p_0(mdbcomp__feedback__Stream_7, (MR_String) ".\n");
    }
#line 525 "feedback.m"
    {
#line 525 "feedback.m"
      mercury__io__close_output_3_p_0(mdbcomp__feedback__Stream_7);
#line 525 "feedback.m"
      return;
    }
#line 514 "feedback.m"
  }
#line 511 "feedback.m"
}

#line 468 "feedback.m"
void MR_CALL 
mdbcomp__feedback__display_read_error_4_p_0(
#line 468 "feedback.m"
  MR_String mdbcomp__feedback__File_5,
#line 468 "feedback.m"
  MR_Word mdbcomp__feedback__Error_6)
#line 468 "feedback.m"
{
#line 471 "feedback.m"
  {
#line 471 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 471 "feedback.m"
    MR_String mdbcomp__feedback__Message_8;

#line 472 "feedback.m"
    {
#line 472 "feedback.m"
      mdbcomp__feedback__read_error_message_string_3_p_0(mdbcomp__feedback__File_5, mdbcomp__feedback__Error_6, &mdbcomp__feedback__Message_8);
    }
#line 473 "feedback.m"
    {
#line 473 "feedback.m"
      mercury__io__write_string_3_p_0(mdbcomp__feedback__Message_8);
#line 473 "feedback.m"
      return;
    }
#line 471 "feedback.m"
  }
#line 468 "feedback.m"
}

#line 398 "feedback.m"
void MR_CALL 
mdbcomp__feedback__det_insert_feedback_data_3_p_0(
#line 398 "feedback.m"
  MR_Word mdbcomp__feedback__Data_4,
#line 398 "feedback.m"
  MR_Word mdbcomp__feedback__STATE_VARIABLE_Map_0_7,
#line 398 "feedback.m"
  MR_Word * mdbcomp__feedback__STATE_VARIABLE_Map_8)
#line 398 "feedback.m"
{
#line 401 "feedback.m"
  {
#line 401 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 401 "feedback.m"
    MR_Word mdbcomp__feedback__Key_6;

#line 258 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__Data_4)) == (MR_mktag((MR_Integer) 0))))
#line 258 "feedback.m"
      mdbcomp__feedback__Key_6 = (MR_Integer) 0;
#line 258 "feedback.m"
    else
#line 260 "feedback.m"
      mdbcomp__feedback__Key_6 = (MR_Integer) 1;
#line 403 "feedback.m"
    {
#line 403 "feedback.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0, (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0, ((MR_Box) (mdbcomp__feedback__Key_6)), ((MR_Box) (mdbcomp__feedback__Data_4)), mdbcomp__feedback__STATE_VARIABLE_Map_0_7, mdbcomp__feedback__STATE_VARIABLE_Map_8);
#line 403 "feedback.m"
      return;
    }
#line 401 "feedback.m"
  }
#line 398 "feedback.m"
}

#line 388 "feedback.m"
static void MR_CALL 
mdbcomp__feedback__read_data_5_p_0_1(
#line 388 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg,
#line 388 "feedback.m"
  MR_Box mdbcomp__feedback__wrapper_arg_1,
#line 388 "feedback.m"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 388 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_3)
#line 388 "feedback.m"
{
#line 388 "feedback.m"
  {
#line 388 "feedback.m"
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;
#line 388 "feedback.m"
    MR_Word mdbcomp__feedback__conv0_STATE_VARIABLE_Map_8;

#line 388 "feedback.m"
    {
#line 388 "feedback.m"
      mdbcomp__feedback__det_insert_feedback_data_3_p_0(((MR_Word) mdbcomp__feedback__wrapper_arg_1), ((MR_Word) mdbcomp__feedback__wrapper_arg_2), &mdbcomp__feedback__conv0_STATE_VARIABLE_Map_8);
    }
#line 388 "feedback.m"
    *mdbcomp__feedback__wrapper_arg_3 = ((MR_Box) (mdbcomp__feedback__conv0_STATE_VARIABLE_Map_8));
#line 388 "feedback.m"
  }
#line 388 "feedback.m"
}

#line 381 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_data_5_p_0(
#line 381 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_6,
#line 381 "feedback.m"
  MR_String mdbcomp__feedback__ProgramName_7,
#line 381 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_8)
#line 381 "feedback.m"
{
#line 384 "feedback.m"
  {
#line 384 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 384 "feedback.m"
    MR_Word mdbcomp__feedback__ReadResultDataAssocList_10;

#line 385 "feedback.m"
    {
#line 385 "feedback.m"
      mercury__io__read_4_p_0((MR_Word) &mdbcomp__feedback_scalar_common_1[0], mdbcomp__feedback__Stream_6, &mdbcomp__feedback__ReadResultDataAssocList_10);
    }
#line 390 "feedback.m"
    if ((mdbcomp__feedback__ReadResultDataAssocList_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "feedback.m"
      {
#line 392 "feedback.m"
        *mdbcomp__feedback__Result_8 = (MR_Word) MR_mkword(MR_mktag(1), &mdbcomp__feedback_scalar_common_4[0]);
#line 391 "feedback.m"
      }
#line 390 "feedback.m"
    else
#line 390 "feedback.m"
      if (((MR_tag((MR_Word) mdbcomp__feedback__ReadResultDataAssocList_10)) == (MR_mktag((MR_Integer) 2))))
#line 394 "feedback.m"
        {
#line 394 "feedback.m"
          MR_String mdbcomp__feedback__Error_13 = ((MR_String) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__ReadResultDataAssocList_10, (MR_Integer) 0)));
#line 394 "feedback.m"
          MR_Integer mdbcomp__feedback__Line_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__ReadResultDataAssocList_10, (MR_Integer) 1)));
#line 394 "feedback.m"
          MR_Word mdbcomp__feedback__V_18_18;

#line 395 "feedback.m"
          {
#line 395 "feedback.m"
            mdbcomp__feedback__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 395 "feedback.m"
            MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 395 "feedback.m"
            MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_18_18, 1) = ((MR_Box) (mdbcomp__feedback__Error_13));
#line 395 "feedback.m"
            MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_18_18, 2) = ((MR_Box) (mdbcomp__feedback__Line_14));
#line 395 "feedback.m"
          }
#line 395 "feedback.m"
          {
#line 395 "feedback.m"
            MR_Word base;
#line 395 "feedback.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 395 "feedback.m"
            *mdbcomp__feedback__Result_8 = base;
#line 395 "feedback.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_18_18));
#line 395 "feedback.m"
          }
#line 394 "feedback.m"
        }
#line 390 "feedback.m"
      else
#line 387 "feedback.m"
        {
#line 387 "feedback.m"
          MR_Word mdbcomp__feedback__TypeCtorInfo_28_28 = (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0;
#line 387 "feedback.m"
          MR_Word mdbcomp__feedback__DataList_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__ReadResultDataAssocList_10, (MR_Integer) 0)));
#line 387 "feedback.m"
          MR_Word mdbcomp__feedback__Map_12;
#line 387 "feedback.m"
          MR_Word mdbcomp__feedback__V_21_21;
#line 387 "feedback.m"
          MR_Word mdbcomp__feedback__V_22_22;
#line 388 "feedback.m"
          MR_Box mdbcomp__feedback__conv1_Map_12;

#line 388 "feedback.m"
          {
#line 388 "feedback.m"
            mdbcomp__feedback__V_21_21 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0, mdbcomp__feedback__TypeCtorInfo_28_28);
          }
#line 388 "feedback.m"
          {
#line 388 "feedback.m"
            mercury__list__foldl_4_p_0(mdbcomp__feedback__TypeCtorInfo_28_28, (MR_Word) &mdbcomp__feedback_scalar_common_2[0], (MR_Word) &mdbcomp__feedback_scalar_common_2[2], mdbcomp__feedback__DataList_11, ((MR_Box) (mdbcomp__feedback__V_21_21)), &mdbcomp__feedback__conv1_Map_12);
          }
#line 388 "feedback.m"
          mdbcomp__feedback__Map_12 = ((MR_Word) mdbcomp__feedback__conv1_Map_12);
#line 389 "feedback.m"
          {
#line 389 "feedback.m"
            mdbcomp__feedback__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "feedback.m"
            MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_22_22, 0) = ((MR_Box) (mdbcomp__feedback__ProgramName_7));
#line 389 "feedback.m"
            MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_22_22, 1) = ((MR_Box) (mdbcomp__feedback__Map_12));
#line 389 "feedback.m"
          }
#line 389 "feedback.m"
          {
#line 389 "feedback.m"
            MR_Word base;
#line 389 "feedback.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 389 "feedback.m"
            *mdbcomp__feedback__Result_8 = base;
#line 389 "feedback.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__V_22_22));
#line 389 "feedback.m"
          }
#line 387 "feedback.m"
        }
#line 384 "feedback.m"
  }
#line 381 "feedback.m"
}

#line 363 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_program_name_5_p_0(
#line 363 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_6,
#line 363 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_8)
#line 363 "feedback.m"
{
#line 366 "feedback.m"
  {
#line 366 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 366 "feedback.m"
    {
#line 366 "feedback.m"
      mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_p_0(mdbcomp__feedback__Stream_6, mdbcomp__feedback__Result_8);
#line 366 "feedback.m"
      return;
    }
#line 366 "feedback.m"
  }
#line 363 "feedback.m"
}

#line 347 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_no_check_line_5_p_0(
#line 347 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_6,
#line 347 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_8)
#line 347 "feedback.m"
{
#line 350 "feedback.m"
  {
#line 350 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 350 "feedback.m"
    {
#line 350 "feedback.m"
      mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_110_111_95_99_104_101_99_107_95_108_105_110_101_95_95_91_50_93_95_48_5_p_0(mdbcomp__feedback__Stream_6, mdbcomp__feedback__Result_8);
#line 350 "feedback.m"
      return;
    }
#line 350 "feedback.m"
  }
#line 347 "feedback.m"
}

#line 320 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_check_line_7_p_0(
#line 320 "feedback.m"
  MR_String mdbcomp__feedback__TestLine_8,
#line 320 "feedback.m"
  MR_Word mdbcomp__feedback__NotMatchError_9,
#line 320 "feedback.m"
  MR_Word mdbcomp__feedback__Stream_10,
#line 320 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_12)
#line 320 "feedback.m"
{
#line 324 "feedback.m"
  {
#line 324 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 324 "feedback.m"
    {
#line 324 "feedback.m"
      mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0(mdbcomp__feedback__TestLine_8, mdbcomp__feedback__NotMatchError_9, mdbcomp__feedback__Stream_10, mdbcomp__feedback__Result_12);
#line 324 "feedback.m"
      return;
    }
#line 324 "feedback.m"
  }
#line 320 "feedback.m"
}

#line 303 "feedback.m"
void MR_CALL 
mdbcomp__feedback__maybe_read_5_p_0(
#line 303 "feedback.m"
  MR_Word mdbcomp__feedback__TypeInfo_for_A_15,
#line 303 "feedback.m"
  MR_Word mdbcomp__feedback__TypeInfo_for_B_16,
#line 303 "feedback.m"
  MR_Word mdbcomp__feedback__Pred_6,
#line 303 "feedback.m"
  MR_Word mdbcomp__feedback__Result0_7,
#line 303 "feedback.m"
  MR_Word * mdbcomp__feedback__Result_8)
#line 303 "feedback.m"
{
#line 313 "feedback.m"
  {
#line 313 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 313 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__Result0_7)) == (MR_mktag((MR_Integer) 1))))
#line 315 "feedback.m"
      *mdbcomp__feedback__Result_8 = mdbcomp__feedback__Result0_7;
#line 313 "feedback.m"
    else
#line 311 "feedback.m"
      {
#line 311 "feedback.m"
        MR_Box mdbcomp__feedback__Acc_10 = (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Result0_7, (MR_Integer) 0));
#line 312 "feedback.m"
        void MR_CALL (* mdbcomp__feedback__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Pred_6, (MR_Integer) 1)));
#line 312 "feedback.m"
        MR_Box mdbcomp__feedback__conv2_Result_8;
#line 312 "feedback.m"
        MR_Box mdbcomp__feedback__conv1_STATE_VARIABLE_IO_13;

#line 312 "feedback.m"
        {
#line 312 "feedback.m"
          mdbcomp__feedback__func_0(((MR_Box) mdbcomp__feedback__Pred_6), mdbcomp__feedback__Acc_10, &mdbcomp__feedback__conv2_Result_8, ((MR_Box) ((MR_Integer) 0)), &mdbcomp__feedback__conv1_STATE_VARIABLE_IO_13);
        }
#line 312 "feedback.m"
        *mdbcomp__feedback__Result_8 = ((MR_Word) mdbcomp__feedback__conv2_Result_8);
#line 311 "feedback.m"
      }
#line 313 "feedback.m"
  }
#line 303 "feedback.m"
}

#line 263 "feedback.m"
void MR_CALL 
mdbcomp__feedback__feedback_data_mismatch_error_3_p_0(
#line 263 "feedback.m"
  MR_String mdbcomp__feedback__Predicate_4,
#line 263 "feedback.m"
  MR_Word mdbcomp__feedback__Type_5,
#line 263 "feedback.m"
  MR_Word mdbcomp__feedback__Data_6)
#line 263 "feedback.m"
{
#line 266 "feedback.m"
  {
#line 266 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 266 "feedback.m"
    MR_String mdbcomp__feedback__V_7_7;
#line 266 "feedback.m"
    MR_String mdbcomp__feedback__V_13_13;
#line 266 "feedback.m"
    MR_String mdbcomp__feedback__V_16_16;
#line 266 "feedback.m"
    MR_String mdbcomp__feedback__V_21_21;
#line 266 "feedback.m"
    MR_String mdbcomp__feedback__V_23_23;
#line 266 "feedback.m"
    MR_String mdbcomp__feedback__V_24_24;
#line 266 "feedback.m"
    MR_String mdbcomp__feedback__V_26_26;

#line 269 "feedback.m"
    {
#line 269 "feedback.m"
      mdbcomp__feedback__V_13_13 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0, ((MR_Box) (mdbcomp__feedback__Type_5)));
    }
#line 269 "feedback.m"
    {
#line 269 "feedback.m"
      mdbcomp__feedback__V_16_16 = mercury__string__string_1_f_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0, ((MR_Box) (mdbcomp__feedback__Data_6)));
    }
#line 4020 "mdbcomp.feedback.c"
    {
#line 4022 "mdbcomp.feedback.c"
      mdbcomp__feedback__V_21_21 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__V_16_16, (MR_String) "\n");
    }
#line 4025 "mdbcomp.feedback.c"
    {
#line 4027 "mdbcomp.feedback.c"
      mdbcomp__feedback__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "\n\tData: ", mdbcomp__feedback__V_21_21);
    }
#line 4030 "mdbcomp.feedback.c"
    {
#line 4032 "mdbcomp.feedback.c"
      mdbcomp__feedback__V_24_24 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__V_13_13, mdbcomp__feedback__V_23_23);
    }
#line 4035 "mdbcomp.feedback.c"
    {
#line 4037 "mdbcomp.feedback.c"
      mdbcomp__feedback__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) ": Feedback data doesn\'t match type\n\tType: ", mdbcomp__feedback__V_24_24);
    }
#line 4040 "mdbcomp.feedback.c"
    {
#line 4042 "mdbcomp.feedback.c"
      mdbcomp__feedback__V_7_7 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__Predicate_4, mdbcomp__feedback__V_26_26);
    }
#line 267 "feedback.m"
    {
#line 267 "feedback.m"
      mercury__require__error_1_p_0(mdbcomp__feedback__V_7_7);
#line 267 "feedback.m"
      return;
    }
#line 266 "feedback.m"
  }
#line 263 "feedback.m"
}

#line 256 "feedback.m"
void MR_CALL 
mdbcomp__feedback__feedback_data_type_2_p_1(
#line 256 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 256 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 256 "feedback.m"
{
#line 258 "feedback.m"
  {
#line 258 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 258 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 258 "feedback.m"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 258 "feedback.m"
    else
#line 260 "feedback.m"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 258 "feedback.m"
  }
#line 256 "feedback.m"
}

#line 255 "feedback.m"
void MR_CALL 
mdbcomp__feedback__feedback_data_type_2_p_0(
#line 255 "feedback.m"
  MR_Word * mdbcomp__feedback__HeadVar__1_1,
#line 255 "feedback.m"
  MR_Word mdbcomp__feedback__HeadVar__2_2)
#line 255 "feedback.m"
{
#line 258 "feedback.m"
  {
#line 258 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;

#line 258 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 258 "feedback.m"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 0;
#line 258 "feedback.m"
    else
#line 260 "feedback.m"
      *mdbcomp__feedback__HeadVar__1_1 = (MR_Integer) 1;
#line 258 "feedback.m"
  }
#line 255 "feedback.m"
}

#line 486 "feedback.m"
static void MR_CALL 
mdbcomp__feedback__write_feedback_file_6_p_0_1(
#line 486 "feedback.m"
  MR_Box mdbcomp__feedback__closure_arg,
#line 486 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_1,
#line 486 "feedback.m"
  MR_Box mdbcomp__feedback__wrapper_arg_2,
#line 486 "feedback.m"
  MR_Box * mdbcomp__feedback__wrapper_arg_3)
#line 486 "feedback.m"
{
#line 486 "feedback.m"
  {
#line 486 "feedback.m"
    MR_Box mdbcomp__feedback__closure = mdbcomp__feedback__closure_arg;

#line 486 "feedback.m"
    {
#line 486 "feedback.m"
      mdbcomp__feedback__write_feedback_file_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__closure, (MR_Integer) 5))));
#line 486 "feedback.m"
      return;
    }
#line 486 "feedback.m"
  }
#line 486 "feedback.m"
}

#line 183 "feedback.m"
void MR_CALL 
mdbcomp__feedback__write_feedback_file_6_p_0(
#line 183 "feedback.m"
  MR_String mdbcomp__feedback__Path_7,
#line 183 "feedback.m"
  MR_String mdbcomp__feedback__ProgName_8,
#line 183 "feedback.m"
  MR_Word mdbcomp__feedback__Feedback_9,
#line 183 "feedback.m"
  MR_Word * mdbcomp__feedback__Res_10)
#line 183 "feedback.m"
{
#line 481 "feedback.m"
  {
#line 481 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 481 "feedback.m"
    MR_Word mdbcomp__feedback__OpenRes_12;

#line 482 "feedback.m"
    {
#line 482 "feedback.m"
      mercury__io__open_output_4_p_0(mdbcomp__feedback__Path_7, &mdbcomp__feedback__OpenRes_12);
    }
#line 502 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__OpenRes_12)) == (MR_mktag((MR_Integer) 1))))
#line 503 "feedback.m"
      {
#line 503 "feedback.m"
        MR_Word mdbcomp__feedback__ErrorCode_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__OpenRes_12, (MR_Integer) 0)));

#line 504 "feedback.m"
        {
#line 504 "feedback.m"
          MR_Word base;
#line 504 "feedback.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 504 "feedback.m"
          *mdbcomp__feedback__Res_10 = base;
#line 504 "feedback.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__ErrorCode_18));
#line 504 "feedback.m"
        }
#line 503 "feedback.m"
      }
#line 502 "feedback.m"
    else
#line 484 "feedback.m"
      {
#line 484 "feedback.m"
        MR_Word mdbcomp__feedback__Stream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__OpenRes_12, (MR_Integer) 0)));
#line 484 "feedback.m"
        MR_Word mdbcomp__feedback__ExcpRes_14;
#line 486 "feedback.m"
        MR_Word mdbcomp__feedback__V_22_22;

#line 486 "feedback.m"
        {
#line 486 "feedback.m"
          mdbcomp__feedback__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 486 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_22_22, 0) = ((MR_Box) (&mdbcomp__feedback_scalar_common_3[0]));
#line 486 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_22_22, 1) = ((MR_Box) (mdbcomp__feedback__write_feedback_file_6_p_0_1));
#line 486 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 486 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_22_22, 3) = ((MR_Box) (mdbcomp__feedback__Stream_13));
#line 486 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_22_22, 4) = ((MR_Box) (mdbcomp__feedback__ProgName_8));
#line 486 "feedback.m"
          MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_22_22, 5) = ((MR_Box) (mdbcomp__feedback__Feedback_9));
#line 486 "feedback.m"
        }
#line 486 "feedback.m"
        {
#line 486 "feedback.m"
          mercury__exception__try_io_4_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, mdbcomp__feedback__V_22_22, &mdbcomp__feedback__ExcpRes_14);
        }
#line 492 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__ExcpRes_14)) == (MR_mktag((MR_Integer) 2))))
#line 493 "feedback.m"
          {
#line 493 "feedback.m"
            MR_Word mdbcomp__feedback__ExcpUniv_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__ExcpRes_14, (MR_Integer) 0)));
#line 498 "feedback.m"
            MR_Word mdbcomp__feedback__Excp_17;
#line 496 "feedback.m"
            MR_Box mdbcomp__feedback__conv0_Excp_17;

#line 496 "feedback.m"
            {
#line 496 "feedback.m"
              mdbcomp__feedback__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, mdbcomp__feedback__ExcpUniv_16, &mdbcomp__feedback__conv0_Excp_17);
            }
#line 496 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 496 "feedback.m"
              {
#line 496 "feedback.m"
                mdbcomp__feedback__Excp_17 = ((MR_Word) mdbcomp__feedback__conv0_Excp_17);
#line 496 "feedback.m"
                mdbcomp__feedback__succeeded = MR_TRUE;
#line 496 "feedback.m"
              }
#line 498 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 497 "feedback.m"
              {
#line 497 "feedback.m"
                MR_Word base;
#line 497 "feedback.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 497 "feedback.m"
                *mdbcomp__feedback__Res_10 = base;
#line 497 "feedback.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdbcomp__feedback__Excp_17));
#line 497 "feedback.m"
              }
#line 498 "feedback.m"
            else
#line 499 "feedback.m"
              {
#line 499 "feedback.m"
                {
#line 499 "feedback.m"
                  mercury__exception__rethrow_1_p_0((MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, mdbcomp__feedback__ExcpRes_14);
#line 499 "feedback.m"
                  return;
                }
#line 499 "feedback.m"
              }
#line 493 "feedback.m"
          }
#line 492 "feedback.m"
        else
#line 491 "feedback.m"
          *mdbcomp__feedback__Res_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "feedback.m"
      }
#line 481 "feedback.m"
  }
#line 183 "feedback.m"
}

#line 174 "feedback.m"
MR_Word MR_CALL 
mdbcomp__feedback__init_feedback_info_1_f_0(
#line 174 "feedback.m"
  MR_String mdbcomp__feedback__ProgramName_3)
#line 174 "feedback.m"
{
#line 477 "feedback.m"
  {
#line 477 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 477 "feedback.m"
    MR_Word mdbcomp__feedback__HeadVar__2_2;
#line 477 "feedback.m"
    MR_Word mdbcomp__feedback__V_4_4;

#line 477 "feedback.m"
    {
#line 477 "feedback.m"
      mdbcomp__feedback__V_4_4 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0, (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0);
    }
#line 477 "feedback.m"
    {
#line 477 "feedback.m"
      mdbcomp__feedback__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, 0) = ((MR_Box) (mdbcomp__feedback__ProgramName_3));
#line 477 "feedback.m"
      MR_hl_field(MR_mktag(0), mdbcomp__feedback__HeadVar__2_2, 1) = ((MR_Box) (mdbcomp__feedback__V_4_4));
#line 477 "feedback.m"
    }
#line 477 "feedback.m"
    return mdbcomp__feedback__HeadVar__2_2;
#line 477 "feedback.m"
  }
#line 174 "feedback.m"
}

#line 165 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_or_create_5_p_0(
#line 165 "feedback.m"
  MR_String mdbcomp__feedback__Path_6,
#line 165 "feedback.m"
  MR_String mdbcomp__feedback__ExpectedProgName_7,
#line 165 "feedback.m"
  MR_Word * mdbcomp__feedback__ReadResultFeedback_8)
#line 165 "feedback.m"
{
#line 407 "feedback.m"
  {
#line 407 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 407 "feedback.m"
    MR_Word mdbcomp__feedback__ReadResultFeedback1_10;

#line 408 "feedback.m"
    {
#line 408 "feedback.m"
      mdbcomp__feedback__read_feedback_file_4_p_0(mdbcomp__feedback__Path_6, &mdbcomp__feedback__ReadResultFeedback1_10);
    }
#line 418 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__ReadResultFeedback1_10)) == (MR_mktag((MR_Integer) 1))))
#line 419 "feedback.m"
      {
#line 419 "feedback.m"
        MR_Word mdbcomp__feedback__Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__ReadResultFeedback1_10, (MR_Integer) 0)));

#line 426 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__Error_13)) == (MR_mktag((MR_Integer) 1))))
#line 424 "feedback.m"
          {
#line 424 "feedback.m"
            MR_Word mdbcomp__feedback__V_24_24;
#line 424 "feedback.m"
            MR_Word mdbcomp__feedback__V_27_27;

#line 477 "feedback.m"
            {
#line 477 "feedback.m"
              mdbcomp__feedback__V_27_27 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0, (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0);
            }
#line 477 "feedback.m"
            {
#line 477 "feedback.m"
              mdbcomp__feedback__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "feedback.m"
              MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_24_24, 0) = ((MR_Box) (mdbcomp__feedback__ExpectedProgName_7));
#line 477 "feedback.m"
              MR_hl_field(MR_mktag(0), mdbcomp__feedback__V_24_24, 1) = ((MR_Box) (mdbcomp__feedback__V_27_27));
#line 477 "feedback.m"
            }
#line 425 "feedback.m"
            {
#line 425 "feedback.m"
              MR_Word base;
#line 425 "feedback.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 425 "feedback.m"
              *mdbcomp__feedback__ReadResultFeedback_8 = base;
#line 425 "feedback.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__V_24_24));
#line 425 "feedback.m"
            }
#line 424 "feedback.m"
          }
#line 426 "feedback.m"
        else
#line 434 "feedback.m"
          *mdbcomp__feedback__ReadResultFeedback_8 = mdbcomp__feedback__ReadResultFeedback1_10;
#line 419 "feedback.m"
      }
#line 418 "feedback.m"
    else
#line 410 "feedback.m"
      {
#line 410 "feedback.m"
        MR_Word mdbcomp__feedback__Feedback_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__ReadResultFeedback1_10, (MR_Integer) 0)));
#line 410 "feedback.m"
        MR_String mdbcomp__feedback__GotProgName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Feedback_11, (MR_Integer) 0)));
#line 240 "feedback.m"
        MR_Word mdbcomp__feedback__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Feedback_11, (MR_Integer) 1)));

#line 412 "feedback.m"
        mdbcomp__feedback__succeeded = (strcmp(mdbcomp__feedback__ExpectedProgName_7, mdbcomp__feedback__GotProgName_12) == 0);
#line 414 "feedback.m"
        if (mdbcomp__feedback__succeeded)
#line 413 "feedback.m"
          *mdbcomp__feedback__ReadResultFeedback_8 = mdbcomp__feedback__ReadResultFeedback1_10;
#line 414 "feedback.m"
        else
#line 415 "feedback.m"
          {
#line 415 "feedback.m"
            MR_Word mdbcomp__feedback__V_25_25;

#line 415 "feedback.m"
            {
#line 415 "feedback.m"
              mdbcomp__feedback__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 415 "feedback.m"
              MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 415 "feedback.m"
              MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_25_25, 1) = ((MR_Box) (mdbcomp__feedback__ExpectedProgName_7));
#line 415 "feedback.m"
              MR_hl_field(MR_mktag(3), mdbcomp__feedback__V_25_25, 2) = ((MR_Box) (mdbcomp__feedback__GotProgName_12));
#line 415 "feedback.m"
            }
#line 415 "feedback.m"
            {
#line 415 "feedback.m"
              MR_Word base;
#line 415 "feedback.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 415 "feedback.m"
              *mdbcomp__feedback__ReadResultFeedback_8 = base;
#line 415 "feedback.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_25_25));
#line 415 "feedback.m"
            }
#line 415 "feedback.m"
          }
#line 410 "feedback.m"
      }
#line 407 "feedback.m"
  }
#line 165 "feedback.m"
}

#line 151 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_error_message_string_3_p_0(
#line 151 "feedback.m"
  MR_String mdbcomp__feedback__File_4,
#line 151 "feedback.m"
  MR_Word mdbcomp__feedback__Error_5,
#line 151 "feedback.m"
  MR_String * mdbcomp__feedback__Message_6)
#line 151 "feedback.m"
{
#line 440 "feedback.m"
  {
#line 440 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 440 "feedback.m"
    MR_String mdbcomp__feedback__MessagePart_8;
#line 440 "feedback.m"
    MR_String mdbcomp__feedback__V_35_35;
#line 440 "feedback.m"
    MR_String mdbcomp__feedback__V_37_37;

#line 446 "feedback.m"
    if ((mdbcomp__feedback__Error_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 457 "feedback.m"
      mdbcomp__feedback__MessagePart_8 = (MR_String) "Incorrect file format";
#line 446 "feedback.m"
    else
#line 446 "feedback.m"
      if ((mdbcomp__feedback__Error_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "feedback.m"
        mdbcomp__feedback__MessagePart_8 = (MR_String) "Unexpected end of file";
#line 446 "feedback.m"
      else
#line 446 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__Error_5)) == (MR_mktag((MR_Integer) 1))))
#line 444 "feedback.m"
          {
#line 444 "feedback.m"
            MR_Word mdbcomp__feedback__Code_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__Error_5, (MR_Integer) 0)));

#line 445 "feedback.m"
            {
#line 445 "feedback.m"
              mercury__io__error_message_2_p_0(mdbcomp__feedback__Code_7, &mdbcomp__feedback__MessagePart_8);
            }
#line 444 "feedback.m"
          }
#line 446 "feedback.m"
        else
#line 446 "feedback.m"
          if (((MR_tag((MR_Word) mdbcomp__feedback__Error_5)) == (MR_mktag((MR_Integer) 2))))
#line 444 "feedback.m"
            {
#line 444 "feedback.m"
              MR_Word mdbcomp__feedback__Code_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdbcomp__feedback__Error_5, (MR_Integer) 0)));

#line 445 "feedback.m"
              {
#line 445 "feedback.m"
                mercury__io__error_message_2_p_0(mdbcomp__feedback__Code_33, &mdbcomp__feedback__MessagePart_8);
              }
#line 444 "feedback.m"
            }
#line 446 "feedback.m"
          else
#line 446 "feedback.m"
            if (((((MR_tag((MR_Word) mdbcomp__feedback__Error_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 459 "feedback.m"
              {
#line 459 "feedback.m"
                MR_String mdbcomp__feedback__Got_12 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 2)));
#line 459 "feedback.m"
                MR_String mdbcomp__feedback__V_14_14;
#line 459 "feedback.m"
                MR_String mdbcomp__feedback__Expected_31 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));
#line 459 "feedback.m"
                MR_String mdbcomp__feedback__V_39_39;
#line 459 "feedback.m"
                MR_String mdbcomp__feedback__V_41_41;
#line 459 "feedback.m"
                MR_String mdbcomp__feedback__V_42_42;

#line 4539 "mdbcomp.feedback.c"
                {
#line 4541 "mdbcomp.feedback.c"
                  mdbcomp__feedback__V_39_39 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__Got_12, (MR_String) "\'");
                }
#line 4544 "mdbcomp.feedback.c"
                {
#line 4546 "mdbcomp.feedback.c"
                  mdbcomp__feedback__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "\' Got: \'", mdbcomp__feedback__V_39_39);
                }
#line 4549 "mdbcomp.feedback.c"
                {
#line 4551 "mdbcomp.feedback.c"
                  mdbcomp__feedback__V_42_42 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__Expected_31, mdbcomp__feedback__V_41_41);
                }
#line 4554 "mdbcomp.feedback.c"
                {
#line 4556 "mdbcomp.feedback.c"
                  mdbcomp__feedback__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "Expected: \'", mdbcomp__feedback__V_42_42);
                }
#line 460 "feedback.m"
                {
#line 460 "feedback.m"
                  mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "Program name didn\'t match, is this the right feedback file\?\n", mdbcomp__feedback__V_14_14);
                }
#line 459 "feedback.m"
              }
#line 446 "feedback.m"
            else
#line 446 "feedback.m"
              if (((((MR_tag((MR_Word) mdbcomp__feedback__Error_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 453 "feedback.m"
                {
#line 453 "feedback.m"
                  MR_String mdbcomp__feedback__Expected_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));

#line 454 "feedback.m"
                  {
#line 454 "feedback.m"
                    mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0((MR_String) "Incorrect file format version; expected ", mdbcomp__feedback__Expected_11);
                  }
#line 453 "feedback.m"
                }
#line 446 "feedback.m"
              else
#line 447 "feedback.m"
                {
#line 447 "feedback.m"
                  MR_String mdbcomp__feedback__ParseMessage_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 1)));
#line 447 "feedback.m"
                  MR_Integer mdbcomp__feedback__Line_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__feedback__Error_5, (MR_Integer) 2)));
#line 447 "feedback.m"
                  MR_String mdbcomp__feedback__V_22_22;
#line 447 "feedback.m"
                  MR_String mdbcomp__feedback__V_24_24;

#line 448 "feedback.m"
                  {
#line 448 "feedback.m"
                    mdbcomp__feedback__V_24_24 = mercury__string__string_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdbcomp__feedback__Line_10)));
                  }
#line 448 "feedback.m"
                  {
#line 448 "feedback.m"
                    mdbcomp__feedback__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " on line ", mdbcomp__feedback__V_24_24);
                  }
#line 448 "feedback.m"
                  {
#line 448 "feedback.m"
                    mdbcomp__feedback__MessagePart_8 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__ParseMessage_9, mdbcomp__feedback__V_22_22);
                  }
#line 447 "feedback.m"
                }
#line 4612 "mdbcomp.feedback.c"
    {
#line 4614 "mdbcomp.feedback.c"
      mdbcomp__feedback__V_35_35 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__MessagePart_8, (MR_String) "\n");
    }
#line 4617 "mdbcomp.feedback.c"
    {
#line 4619 "mdbcomp.feedback.c"
      mdbcomp__feedback__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdbcomp__feedback__V_35_35);
    }
#line 4622 "mdbcomp.feedback.c"
    {
#line 4624 "mdbcomp.feedback.c"
      *mdbcomp__feedback__Message_6 = mercury__string__f_43_43_2_f_0(mdbcomp__feedback__File_4, mdbcomp__feedback__V_37_37);
    }
#line 440 "feedback.m"
  }
#line 151 "feedback.m"
}

#line 123 "feedback.m"
void MR_CALL 
mdbcomp__feedback__read_feedback_file_4_p_0(
#line 123 "feedback.m"
  MR_String mdbcomp__feedback__Path_5,
#line 123 "feedback.m"
  MR_Word * mdbcomp__feedback__ReadResultFeedbackInfo_6)
#line 123 "feedback.m"
{
#line 273 "feedback.m"
  {
#line 273 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 273 "feedback.m"
    MR_Word mdbcomp__feedback__IOResStream_8;

#line 274 "feedback.m"
    {
#line 274 "feedback.m"
      mercury__io__open_input_4_p_0(mdbcomp__feedback__Path_5, &mdbcomp__feedback__IOResStream_8);
    }
#line 294 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__IOResStream_8)) == (MR_mktag((MR_Integer) 1))))
#line 295 "feedback.m"
      {
#line 295 "feedback.m"
        MR_Word mdbcomp__feedback__ErrorCode_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__IOResStream_8, (MR_Integer) 0)));
#line 295 "feedback.m"
        MR_Word mdbcomp__feedback__V_15_15;

#line 296 "feedback.m"
        {
#line 296 "feedback.m"
          mdbcomp__feedback__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 296 "feedback.m"
          MR_hl_field(MR_mktag(1), mdbcomp__feedback__V_15_15, 0) = ((MR_Box) (mdbcomp__feedback__ErrorCode_11));
#line 296 "feedback.m"
        }
#line 296 "feedback.m"
        {
#line 296 "feedback.m"
          MR_Word base;
#line 296 "feedback.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 296 "feedback.m"
          *mdbcomp__feedback__ReadResultFeedbackInfo_6 = base;
#line 296 "feedback.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__feedback__V_15_15));
#line 296 "feedback.m"
        }
#line 295 "feedback.m"
      }
#line 294 "feedback.m"
    else
#line 278 "feedback.m"
      {
#line 278 "feedback.m"
        MR_Word mdbcomp__feedback__Stream_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__IOResStream_8, (MR_Integer) 0)));
#line 278 "feedback.m"
        MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_19_19;

#line 283 "feedback.m"
        {
#line 283 "feedback.m"
          mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0((MR_String) "Mercury Compiler Feedback", (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), mdbcomp__feedback__Stream_9, &mdbcomp__feedback__STATE_VARIABLE_Result_19_19);
        }
#line 4698 "mdbcomp.feedback.c"
        if (((MR_tag((MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_19_19)) == (MR_mktag((MR_Integer) 1))))
#line 4700 "mdbcomp.feedback.c"
          {
#line 4702 "mdbcomp.feedback.c"
            MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_22_22 = mdbcomp__feedback__STATE_VARIABLE_Result_19_19;
#line 4704 "mdbcomp.feedback.c"
            MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_28_28 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_22_22;

#line 315 "feedback.m"
            *mdbcomp__feedback__ReadResultFeedbackInfo_6 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_28_28;
#line 4709 "mdbcomp.feedback.c"
          }
#line 4711 "mdbcomp.feedback.c"
        else
#line 4713 "mdbcomp.feedback.c"
          {
#line 4715 "mdbcomp.feedback.c"
            MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_22_82;

#line 312 "feedback.m"
            {
#line 312 "feedback.m"
              mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_99_104_101_99_107_95_108_105_110_101_95_95_91_52_93_95_48_7_p_0((MR_String) "18", (MR_Word) MR_mkword(MR_mktag(3), &mdbcomp__feedback_scalar_common_1[5]), mdbcomp__feedback__Stream_9, &mdbcomp__feedback__STATE_VARIABLE_Result_22_82);
            }
#line 4723 "mdbcomp.feedback.c"
            if (((MR_tag((MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_22_82)) == (MR_mktag((MR_Integer) 1))))
#line 4725 "mdbcomp.feedback.c"
              {
#line 4727 "mdbcomp.feedback.c"
                MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_28_84 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_22_82;

#line 315 "feedback.m"
                *mdbcomp__feedback__ReadResultFeedbackInfo_6 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_28_84;
#line 4732 "mdbcomp.feedback.c"
              }
#line 4734 "mdbcomp.feedback.c"
            else
#line 4736 "mdbcomp.feedback.c"
              {
#line 4738 "mdbcomp.feedback.c"
                MR_Word mdbcomp__feedback__STATE_VARIABLE_Result_28_86;

#line 312 "feedback.m"
                {
#line 312 "feedback.m"
                  mdbcomp__feedback__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_112_114_111_103_114_97_109_95_110_97_109_101_95_95_91_50_93_95_48_5_p_0(mdbcomp__feedback__Stream_9, &mdbcomp__feedback__STATE_VARIABLE_Result_28_86);
                }
#line 313 "feedback.m"
                if (((MR_tag((MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_28_86)) == (MR_mktag((MR_Integer) 1))))
#line 315 "feedback.m"
                  *mdbcomp__feedback__ReadResultFeedbackInfo_6 = (MR_Word) mdbcomp__feedback__STATE_VARIABLE_Result_28_86;
#line 313 "feedback.m"
                else
#line 311 "feedback.m"
                  {
#line 311 "feedback.m"
                    MR_String mdbcomp__feedback__Acc_77 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Result_28_86, (MR_Integer) 0)));

#line 312 "feedback.m"
                    {
#line 312 "feedback.m"
                      mdbcomp__feedback__read_data_5_p_0(mdbcomp__feedback__Stream_9, mdbcomp__feedback__Acc_77, mdbcomp__feedback__ReadResultFeedbackInfo_6);
                    }
#line 311 "feedback.m"
                  }
#line 4764 "mdbcomp.feedback.c"
              }
#line 4766 "mdbcomp.feedback.c"
          }
#line 293 "feedback.m"
        {
#line 293 "feedback.m"
          mercury__io__close_input_3_p_0(mdbcomp__feedback__Stream_9);
#line 293 "feedback.m"
          return;
        }
#line 278 "feedback.m"
      }
#line 273 "feedback.m"
  }
#line 123 "feedback.m"
}

#line 114 "feedback.m"
MR_String MR_CALL 
mdbcomp__feedback__get_feedback_program_name_1_f_0(
#line 114 "feedback.m"
  MR_Word mdbcomp__feedback__Info_3)
#line 114 "feedback.m"
{
#line 240 "feedback.m"
  {
#line 240 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 240 "feedback.m"
    MR_String mdbcomp__feedback__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 0)));
#line 240 "feedback.m"
    MR_Word mdbcomp__feedback__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 1)));

#line 240 "feedback.m"
    return mdbcomp__feedback__HeadVar__2_2;
#line 240 "feedback.m"
  }
#line 114 "feedback.m"
}

#line 109 "feedback.m"
void MR_CALL 
mdbcomp__feedback__get_all_feedback_data_2_p_0(
#line 109 "feedback.m"
  MR_Word mdbcomp__feedback__Info_3,
#line 109 "feedback.m"
  MR_Word * mdbcomp__feedback__AllData_4)
#line 109 "feedback.m"
{
#line 237 "feedback.m"
  {
#line 237 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 237 "feedback.m"
    MR_Word mdbcomp__feedback__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 1)));
#line 238 "feedback.m"
    MR_String mdbcomp__feedback__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 0)));

#line 238 "feedback.m"
    {
#line 238 "feedback.m"
      mercury__map__values_2_p_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0, (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0, mdbcomp__feedback__V_5_5, mdbcomp__feedback__AllData_4);
#line 238 "feedback.m"
      return;
    }
#line 237 "feedback.m"
  }
#line 109 "feedback.m"
}

#line 103 "feedback.m"
MR_bool MR_CALL 
mdbcomp__feedback__get_feedback_data_2_p_0(
#line 103 "feedback.m"
  MR_Word mdbcomp__feedback__Info_3,
#line 103 "feedback.m"
  MR_Word mdbcomp__feedback__Data_4)
#line 103 "feedback.m"
{
#line 222 "feedback.m"
  {
#line 222 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 222 "feedback.m"
    MR_Word mdbcomp__feedback__Type_5;
#line 222 "feedback.m"
    MR_Word mdbcomp__feedback__Map_6;
#line 222 "feedback.m"
    MR_Word mdbcomp__feedback__DataPrime_7;
#line 224 "feedback.m"
    MR_String mdbcomp__feedback__V_9_9;
#line 225 "feedback.m"
    MR_Box mdbcomp__feedback__conv0_DataPrime_7;

#line 258 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__Data_4)) == (MR_mktag((MR_Integer) 0))))
#line 258 "feedback.m"
      mdbcomp__feedback__Type_5 = (MR_Integer) 0;
#line 258 "feedback.m"
    else
#line 260 "feedback.m"
      mdbcomp__feedback__Type_5 = (MR_Integer) 1;
#line 224 "feedback.m"
    mdbcomp__feedback__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 0)));
#line 224 "feedback.m"
    mdbcomp__feedback__Map_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Info_3, (MR_Integer) 1)));
#line 225 "feedback.m"
    {
#line 225 "feedback.m"
      mdbcomp__feedback__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0, (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0, mdbcomp__feedback__Map_6, ((MR_Box) (mdbcomp__feedback__Type_5)), &mdbcomp__feedback__conv0_DataPrime_7);
    }
#line 225 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 225 "feedback.m"
      {
#line 225 "feedback.m"
        mdbcomp__feedback__DataPrime_7 = ((MR_Word) mdbcomp__feedback__conv0_DataPrime_7);
#line 225 "feedback.m"
        mdbcomp__feedback__succeeded = MR_TRUE;
#line 225 "feedback.m"
      }
#line 222 "feedback.m"
    if (mdbcomp__feedback__succeeded)
#line 222 "feedback.m"
      {
#line 231 "feedback.m"
        if (((MR_tag((MR_Word) mdbcomp__feedback__Data_4)) == (MR_mktag((MR_Integer) 0))))
#line 231 "feedback.m"
          {
#line 231 "feedback.m"
            MR_Integer mdbcomp__feedback__V_20_20;
#line 231 "feedback.m"
            MR_Word mdbcomp__feedback__V_21_21;
#line 231 "feedback.m"
            MR_Word mdbcomp__feedback__V_22_22;

#line 231 "feedback.m"
            mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__DataPrime_7)) == (MR_mktag((MR_Integer) 0)));
#line 231 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 231 "feedback.m"
              {
#line 231 "feedback.m"
                mdbcomp__feedback__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__DataPrime_7, (MR_Integer) 0)));
#line 231 "feedback.m"
                mdbcomp__feedback__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__DataPrime_7, (MR_Integer) 1)));
#line 231 "feedback.m"
                mdbcomp__feedback__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__DataPrime_7, (MR_Integer) 2)));
#line 231 "feedback.m"
                (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Data_4, (MR_Integer) 0)) = ((MR_Box) (mdbcomp__feedback__V_20_20));
#line 231 "feedback.m"
                (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Data_4, (MR_Integer) 1)) = ((MR_Box) (mdbcomp__feedback__V_21_21));
#line 231 "feedback.m"
                (MR_hl_field(MR_mktag(0), mdbcomp__feedback__Data_4, (MR_Integer) 2)) = ((MR_Box) (mdbcomp__feedback__V_22_22));
#line 231 "feedback.m"
                mdbcomp__feedback__succeeded = MR_TRUE;
#line 231 "feedback.m"
              }
#line 231 "feedback.m"
          }
#line 231 "feedback.m"
        else
#line 231 "feedback.m"
          {
#line 231 "feedback.m"
            MR_Word mdbcomp__feedback__V_25_25;
#line 231 "feedback.m"
            MR_Word mdbcomp__feedback__V_26_26;

#line 231 "feedback.m"
            mdbcomp__feedback__succeeded = ((MR_tag((MR_Word) mdbcomp__feedback__DataPrime_7)) == (MR_mktag((MR_Integer) 1)));
#line 231 "feedback.m"
            if (mdbcomp__feedback__succeeded)
#line 231 "feedback.m"
              {
#line 231 "feedback.m"
                mdbcomp__feedback__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__DataPrime_7, (MR_Integer) 0)));
#line 231 "feedback.m"
                mdbcomp__feedback__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__feedback__DataPrime_7, (MR_Integer) 1)));
#line 231 "feedback.m"
                (MR_hl_field(MR_mktag(1), mdbcomp__feedback__Data_4, (MR_Integer) 0)) = ((MR_Box) (mdbcomp__feedback__V_25_25));
#line 231 "feedback.m"
                (MR_hl_field(MR_mktag(1), mdbcomp__feedback__Data_4, (MR_Integer) 1)) = ((MR_Box) (mdbcomp__feedback__V_26_26));
#line 231 "feedback.m"
                mdbcomp__feedback__succeeded = MR_TRUE;
#line 231 "feedback.m"
              }
#line 231 "feedback.m"
          }
#line 232 "feedback.m"
        if (!(mdbcomp__feedback__succeeded))
#line 233 "feedback.m"
          {
#line 233 "feedback.m"
            {
#line 233 "feedback.m"
              mercury__builtin__impure_true_0_p_0();
            }
#line 234 "feedback.m"
            {
#line 234 "feedback.m"
              mdbcomp__feedback__feedback_data_mismatch_error_3_p_0((MR_String) "get_feedback_data/3: ", mdbcomp__feedback__Type_5, mdbcomp__feedback__DataPrime_7);
            }
#line 233 "feedback.m"
          }
#line 230 "feedback.m"
        mdbcomp__feedback__succeeded = MR_TRUE;
#line 222 "feedback.m"
      }
#line 222 "feedback.m"
    return mdbcomp__feedback__succeeded;
#line 222 "feedback.m"
  }
#line 103 "feedback.m"
}

#line 93 "feedback.m"
void MR_CALL 
mdbcomp__feedback__put_feedback_data_3_p_0(
#line 93 "feedback.m"
  MR_Word mdbcomp__feedback__Data_4,
#line 93 "feedback.m"
  MR_Word mdbcomp__feedback__STATE_VARIABLE_Info_0_8,
#line 93 "feedback.m"
  MR_Word * mdbcomp__feedback__STATE_VARIABLE_Info_9)
#line 93 "feedback.m"
{
#line 244 "feedback.m"
  {
#line 244 "feedback.m"
    MR_bool mdbcomp__feedback__succeeded;
#line 244 "feedback.m"
    MR_Word mdbcomp__feedback__Type_6;
#line 244 "feedback.m"
    MR_Word mdbcomp__feedback__STATE_VARIABLE_Map_10_10;
#line 244 "feedback.m"
    MR_Word mdbcomp__feedback__STATE_VARIABLE_Map_11_11;
#line 247 "feedback.m"
    MR_String mdbcomp__feedback__V_13_13;
#line 249 "feedback.m"
    MR_String mdbcomp__feedback__V_14_14;
#line 249 "feedback.m"
    MR_Word mdbcomp__feedback__V_15_15;

#line 258 "feedback.m"
    if (((MR_tag((MR_Word) mdbcomp__feedback__Data_4)) == (MR_mktag((MR_Integer) 0))))
#line 258 "feedback.m"
      mdbcomp__feedback__Type_6 = (MR_Integer) 0;
#line 258 "feedback.m"
    else
#line 260 "feedback.m"
      mdbcomp__feedback__Type_6 = (MR_Integer) 1;
#line 247 "feedback.m"
    mdbcomp__feedback__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 247 "feedback.m"
    mdbcomp__feedback__STATE_VARIABLE_Map_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 248 "feedback.m"
    {
#line 248 "feedback.m"
      mercury__map__set_4_p_0((MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0, (MR_Word) &mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0, ((MR_Box) (mdbcomp__feedback__Type_6)), ((MR_Box) (mdbcomp__feedback__Data_4)), mdbcomp__feedback__STATE_VARIABLE_Map_10_10, &mdbcomp__feedback__STATE_VARIABLE_Map_11_11);
    }
#line 249 "feedback.m"
    mdbcomp__feedback__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
#line 249 "feedback.m"
    mdbcomp__feedback__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__feedback__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
#line 249 "feedback.m"
    {
#line 249 "feedback.m"
      MR_Word base;
#line 249 "feedback.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "feedback.m"
      *mdbcomp__feedback__STATE_VARIABLE_Info_9 = base;
#line 249 "feedback.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdbcomp__feedback__V_14_14));
#line 249 "feedback.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdbcomp__feedback__STATE_VARIABLE_Map_11_11));
#line 249 "feedback.m"
    }
#line 244 "feedback.m"
  }
#line 93 "feedback.m"
}

void mercury__mdbcomp__feedback__init(void)
{
}

void mercury__mdbcomp__feedback__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_data_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_info_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_error_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_read_result_1);
	MR_register_type_ctor_info(&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_type_0);
	MR_register_type_ctor_info(&mdbcomp__feedback__mdbcomp__feedback__type_ctor_info_feedback_write_result_0);
}

void mercury__mdbcomp__feedback__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdbcomp.feedback. */
