/*
** Automatically generated from `declarative_analyser.m'
** by the Mercury compiler,
** version rotd-2017-07-25
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


/* :- module mdb.declarative_analyser. */
/* :- implementation. */

/*
INIT mercury__mdb__declarative_analyser__init
ENDINIT
*/

#include "mdb.declarative_analyser.mih"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_edt.mih"
#include "mdb.declarative_execution.mih"
#include "mdb.declarative_oracle.mih"
#include "mdb.declarative_tree.mih"
#include "mdb.declarative_user.mih"
#include "mdb.help.mih"
#include "mdb.io_action.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
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
#include "float.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2;

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1[2];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2[1];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3[1];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4[1];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5[1];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5;

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3[3];

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_response_1[4];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1[6];

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1[6];

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0[6];

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_analyser_state_1_0[6];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0;

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0[1];

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1[1];

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1[1];

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0[1];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0;

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1;

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1[1];

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analysis_type_1[2];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1[2];

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1[2];

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0[1];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0;

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1;

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1[1];

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0[2];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0[2];

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0[2];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0;

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2[6];

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2[6];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2;

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3;

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5[3];

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5[3];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6[3];

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6[3];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6;

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7;

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8;

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0[6];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3[1];

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_reason_for_question_0[4];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_reason_for_question_0[9];

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_reason_for_question_0[9];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1[5];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2[3];

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2[3];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3[1];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3;

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_2[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_3[1];

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_mode_0[4];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0[4];

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0[4];

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0[2];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1[1];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1;

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2;

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4[3];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4;

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_0[2];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_2[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_3[1];

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_response_0[4];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0[5];

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0[5];

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0[2];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0[1];

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0[1];

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0[1];

static void MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1122__1_7_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
  MR_Integer mdb__declarative_analyser__HeadVar__3_66,
  MR_Integer mdb__declarative_analyser__HeadVar__4_67,
  MR_Integer * mdb__declarative_analyser__HeadVar__5_68,
  MR_Integer mdb__declarative_analyser__HeadVar__6_69,
  MR_Integer * mdb__declarative_analyser__HeadVar__7_70);

static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__741__1_3_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
  MR_Integer mdb__declarative_analyser__HeadVar__3_52);

static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__738__1_3_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
  MR_Integer mdb__declarative_analyser__HeadVar__3_48);

static MR_Box MR_CALL 
mdb__declarative_analyser__IntroducedFrom__func__bug_response__656__1_3_f_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
  MR_Word mdb__declarative_analyser__SearchSpace_8,
  MR_Integer mdb__declarative_analyser__HeadVar__3_30);

static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0(
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0(
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0(
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0(
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0(
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0(
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0(
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0(
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

static MR_String MR_CALL 
mdb__declarative_analyser__search_mode_to_string_1_f_0(
  MR_Word mdb__declarative_analyser__SearchMode_3);

static MR_Box MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0_1(
  MR_Box mdb__declarative_analyser__closure_arg,
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

static MR_String MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0(
  MR_Word mdb__declarative_analyser__Reason_3);

static MR_String MR_CALL 
mdb__declarative_analyser__weighting_to_reason_string_3_f_0(
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Integer mdb__declarative_analyser__Weight1_2,
  MR_Integer mdb__declarative_analyser__Weight2_3);

static void MR_CALL 
mdb__declarative_analyser__process_answer_5_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137,
  MR_Box mdb__declarative_analyser__Store_6,
  MR_Word mdb__declarative_analyser__Answer_7,
  MR_Integer mdb__declarative_analyser__SuspectId_8,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_25);

static void MR_CALL 
mdb__declarative_analyser__decide_analyser_response_5_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63,
  MR_Box mdb__declarative_analyser__Store_6,
  MR_Word mdb__declarative_analyser__Oracle_7,
  MR_Word * mdb__declarative_analyser__Response_8,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_14);

static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70,
  MR_Box mdb__declarative_analyser__Store_15,
  MR_Word mdb__declarative_analyser__Oracle_16,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45,
  MR_Word mdb__declarative_analyser__HowTrack_18,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47,
  MR_Word mdb__declarative_analyser__LastUnknown_20,
  MR_Integer mdb__declarative_analyser__SuspectId_21,
  MR_Word mdb__declarative_analyser__ArgPos_22,
  MR_Word mdb__declarative_analyser__TermPath_23,
  MR_Word mdb__declarative_analyser__FallBackSearchMode_24,
  MR_Word * mdb__declarative_analyser__NewMode_25,
  MR_Word * mdb__declarative_analyser__SearchResponse_26);

static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_12_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_29,
  MR_Box mdb__declarative_analyser__Store_13,
  MR_Word mdb__declarative_analyser__Oracle_14,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_25,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26,
  MR_Word mdb__declarative_analyser__HowTrack_16,
  MR_Word mdb__declarative_analyser__LastUnknown_17,
  MR_Integer mdb__declarative_analyser__SuspectId_18,
  MR_Word mdb__declarative_analyser__ArgPos_19,
  MR_Word mdb__declarative_analyser__TermPath_20,
  MR_Word mdb__declarative_analyser__FallBackSearchMode_21,
  MR_Word * mdb__declarative_analyser__NewMode_22,
  MR_Word * mdb__declarative_analyser__SearchResponse_23);

static void MR_CALL 
mdb__declarative_analyser__search_for_question_8_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33,
  MR_Box mdb__declarative_analyser__Store_9,
  MR_Word mdb__declarative_analyser__Oracle_10,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
  MR_Word mdb__declarative_analyser__OldMode_12,
  MR_Word mdb__declarative_analyser__FallBackSearchMode_13,
  MR_Word * mdb__declarative_analyser__NewMode_14,
  MR_Word * mdb__declarative_analyser__Response_15);

static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0_1(
  MR_Box mdb__declarative_analyser__closure_arg,
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box * mdb__declarative_analyser__wrapper_arg_3,
  MR_Box mdb__declarative_analyser__wrapper_arg_4,
  MR_Box * mdb__declarative_analyser__wrapper_arg_5);

static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
  MR_Box mdb__declarative_analyser__Store_1,
  MR_Word mdb__declarative_analyser__Oracle_2,
  MR_Word mdb__declarative_analyser__Weighting_3,
  MR_Word mdb__declarative_analyser__HeadVar__4_4,
  MR_Integer mdb__declarative_analyser__TopId_5,
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_6,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8,
  MR_Word * mdb__declarative_analyser__Response_9);

static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23,
  MR_Box mdb__declarative_analyser__Store_10,
  MR_Word mdb__declarative_analyser__Oracle_11,
  MR_Word mdb__declarative_analyser__Weighting_12,
  MR_Integer mdb__declarative_analyser__SuspectId_13,
  MR_Integer mdb__declarative_analyser__TopId_14,
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_15,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20,
  MR_Word * mdb__declarative_analyser__Response_17);

static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_middle_5_p_0(
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_16,
  MR_Word mdb__declarative_analyser__SearchSpace_6,
  MR_ArrayPtr mdb__declarative_analyser__PathArray_7,
  MR_Integer mdb__declarative_analyser__Top_8,
  MR_Integer mdb__declarative_analyser__Bottom_9,
  MR_Integer * mdb__declarative_analyser__Unknown_10);

static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_21,
  MR_Word mdb__declarative_analyser__SearchSpace_8,
  MR_ArrayPtr mdb__declarative_analyser__PathArray_9,
  MR_Integer mdb__declarative_analyser__OuterTop_10,
  MR_Integer mdb__declarative_analyser__OuterBottom_11,
  MR_Integer mdb__declarative_analyser__InnerTop_12,
  MR_Integer mdb__declarative_analyser__InnerBottom_13,
  MR_Integer * mdb__declarative_analyser__Unknown_14);

static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_2(
  MR_Box mdb__declarative_analyser__closure_arg,
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_1(
  MR_Box mdb__declarative_analyser__closure_arg,
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

static void MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
  MR_Box mdb__declarative_analyser__Store_6,
  MR_Word mdb__declarative_analyser__Oracle_7,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25,
  MR_Word * mdb__declarative_analyser__Response_9);

static void MR_CALL 
mdb__declarative_analyser__handle_search_response_5_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78,
  MR_Box mdb__declarative_analyser__Store_6,
  MR_Word mdb__declarative_analyser__SearchResponse_7,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_21,
  MR_Word * mdb__declarative_analyser__AnalyserResponse_9);

static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_2(
  MR_Box mdb__declarative_analyser__closure_arg,
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box * mdb__declarative_analyser__wrapper_arg_2);

static MR_Box MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_1(
  MR_Box mdb__declarative_analyser__closure_arg,
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
  MR_Box mdb__declarative_analyser__Store_7,
  MR_Word mdb__declarative_analyser__SearchSpace_8,
  MR_Integer mdb__declarative_analyser__BugId_9,
  MR_Word mdb__declarative_analyser__Evidence_10,
  MR_Word mdb__declarative_analyser__InadmissibleChildren_11,
  MR_Word * mdb__declarative_analyser__Response_12);

static MR_Word MR_CALL 
mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_f_0(
  MR_Word mdb__declarative_analyser__SearchMode_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_response_1_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

static void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001(
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0_10001(
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0_10001(
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0_10001(
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001(
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3);


static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_1[17][2];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_2[2][3];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_3[3][1];

static /* final */ const MR_Integer mdb__declarative_analyser_scalar_common_4[2][3];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_5[2][7];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_6[1][6];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_7[1][10];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_8[1][5];




static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_1[17][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "handle_search_response")),
    ((MR_Box) ((MR_String) "search responded with query about ignored suspect"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "top_down_search")),
    ((MR_Box) ((MR_String) "bug has unexplored or unknown children"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "continue_analysis")),
    ((MR_Box) ((MR_String) "received answer to unasked question"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "change_search_mode")),
    ((MR_Box) ((MR_String) "binary mode requested, but no last question"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "setup_binary_search")),
    ((MR_Box) ((MR_String) "TopId not an ancestor of BottomId"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "revise_analysis")),
    ((MR_Box) ((MR_String) "no root"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "show_info")),
    ((MR_Box) ((MR_String) "no last question"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "Context of current question")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "Search mode")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "Estimated questions remaining")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "Number of suspect events")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_8[0])),
    ((MR_Box) (mdb__declarative_analyser__reason_to_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Integer mdb__declarative_analyser_scalar_common_4[2][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 67663
  },
  /* row 1 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_4[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_8[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0 = {
  (MR_String) "analyser_response_no_suspects",
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

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_bug_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1 = {
  (MR_String) "analyser_response_bug_found",
  (MR_Integer) 2,
  (MR_Integer) 2,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2 = {
  (MR_String) "analyser_response_oracle_question",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3 = {
  (MR_String) "analyser_response_require_explicit_subtree",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4 = {
  (MR_String) "analyser_response_require_explicit_supertree",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5 = {
  (MR_String) "analyser_response_revise",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3[3] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5
};

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_response_1[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2
  },
  {
    (MR_Integer) 3,
    MR_SECTAG_REMOTE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1[6] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5
};

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1[6] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_response_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____analyser_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____analyser_response_1_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "analyser_response",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_response_1 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1
};

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_analyser_state_1_0[6] = {
  (MR_String) "search_space",
  (MR_String) "require_explicit",
  (MR_String) "search_mode",
  (MR_String) "fallback_search_mode",
  (MR_String) "last_search_question",
  (MR_String) "debug_origin"
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0 = {
  (MR_String) "analyser",
  (MR_Integer) 6,
  (MR_Integer) 33,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_analyser_state_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0
};

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0
};

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_state_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____analyser_state_1_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____analyser_state_1_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "analyser_state",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0 = {
  (MR_String) "new_tree",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1 = {
  (MR_String) "resume_previous",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0
};

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analysis_type_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1
};

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analysis_type_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____analysis_type_1_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____analysis_type_1_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "analysis_type",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analysis_type_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0 = {
  (MR_String) "explicit_subtree",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1 = {
  (MR_String) "explicit_supertree",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0
};

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1
};

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "explicit_tree_type",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0 = {
  (MR_String) "ques_reason_start",
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

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1 = {
  (MR_String) "ques_reason_top_down",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2[6] = {
  (MR_String) "binding_prim_op",
  (MR_String) "binding_filename",
  (MR_String) "binding_line_no",
  (MR_String) "maybe_atom_path",
  (MR_String) "binding_proc",
  (MR_String) "binding_node_eliminated"
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2 = {
  (MR_String) "ques_reason_binding_node",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3 = {
  (MR_String) "ques_reason_subterm_no_proc_rep",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4 = {
  (MR_String) "ques_reason_binding_node_eliminated",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5[3] = {
  (MR_String) "binary_reason_bottom",
  (MR_String) "binary_reason_top",
  (MR_String) "binary_reason_split"
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5 = {
  (MR_String) "ques_reason_binary",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 5,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6[3] = {
  (MR_String) "dq_weighting",
  (MR_String) "dq_old_weight",
  (MR_String) "dq_chosen_subtree_weight"
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6 = {
  (MR_String) "ques_reason_divide_and_query",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 6,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7 = {
  (MR_String) "ques_reason_skipped",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8 = {
  (MR_String) "ques_reason_revise",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0[6] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6
};

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_reason_for_question_0[4] = {
  {
    (MR_Integer) 6,
    MR_SECTAG_LOCAL,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_reason_for_question_0[9] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1
};

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_reason_for_question_0[9] = {
  (MR_Integer) 6,
  (MR_Integer) 8,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____reason_for_question_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____reason_for_question_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "reason_for_question",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_reason_for_question_0 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_reason_for_question_0 },
  (MR_Integer) 9,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_reason_for_question_0
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0 = {
  (MR_String) "analyser_top_down",
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

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1 = {
  (MR_String) "analyser_follow_subterm_end",
  (MR_Integer) 5,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2[3] = {
  (MR_String) "suspects",
  (MR_String) "range",
  (MR_String) "last_tested"
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2 = {
  (MR_String) "analyser_binary",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3 = {
  (MR_String) "analyser_divide_and_query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3
};

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_mode_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_3
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0[4] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0
};

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____search_mode_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____search_mode_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "search_mode",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_mode_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0 = {
  (MR_String) "search_response_question",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1 = {
  (MR_String) "search_response_require_explicit_subtree",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2 = {
  (MR_String) "search_response_require_explicit_supertree",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3 = {
  (MR_String) "search_response_no_suspects",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4 = {
  (MR_String) "search_response_found_bug",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_0[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4
};

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_response_0[4] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_3
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0[5] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2
};

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_response_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____search_response_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____search_response_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "search_response",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_response_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0 = {
  (MR_String) "suspect_and_reason",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0
};

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0
};

static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "suspect_and_reason",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0
};

static void MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1122__1_7_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
  MR_Integer mdb__declarative_analyser__HeadVar__3_66,
  MR_Integer mdb__declarative_analyser__HeadVar__4_67,
  MR_Integer * mdb__declarative_analyser__HeadVar__5_68,
  MR_Integer mdb__declarative_analyser__HeadVar__6_69,
  MR_Integer * mdb__declarative_analyser__HeadVar__7_70)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__TypeInfo_72_72;
    MR_Integer mdb__declarative_analyser__Weight_86;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_72_72);
    }
    {
      mdb__declarative_analyser__Weight_86 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_72_72, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__HeadVar__3_66);
    }
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Weight_86 > mdb__declarative_analyser__HeadVar__4_67);
    if (mdb__declarative_analyser__succeeded)
      {
        *mdb__declarative_analyser__HeadVar__5_68 = mdb__declarative_analyser__Weight_86;
        *mdb__declarative_analyser__HeadVar__7_70 = mdb__declarative_analyser__HeadVar__3_66;
      }
    else
      {
        *mdb__declarative_analyser__HeadVar__5_68 = mdb__declarative_analyser__HeadVar__4_67;
        *mdb__declarative_analyser__HeadVar__7_70 = mdb__declarative_analyser__HeadVar__6_69;
      }
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__741__1_3_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
  MR_Integer mdb__declarative_analyser__HeadVar__3_52)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__TypeInfo_54_54;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_54_54);
    }
    {
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_inadmissible_2_p_0(mdb__declarative_analyser__TypeInfo_54_54, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29, mdb__declarative_analyser__HeadVar__3_52);
    }
    return mdb__declarative_analyser__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__738__1_3_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
  MR_Integer mdb__declarative_analyser__HeadVar__3_48)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__TypeInfo_50_50;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_50_50);
    }
    {
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_correct_or_inadmissible_2_p_0(mdb__declarative_analyser__TypeInfo_50_50, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29, mdb__declarative_analyser__HeadVar__3_48);
    }
    return mdb__declarative_analyser__succeeded;
  }
}

static MR_Box MR_CALL 
mdb__declarative_analyser__IntroducedFrom__func__bug_response__656__1_3_f_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
  MR_Word mdb__declarative_analyser__SearchSpace_8,
  MR_Integer mdb__declarative_analyser__HeadVar__3_30)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Box mdb__declarative_analyser__HeadVar__4_31;
    MR_Word mdb__declarative_analyser__TypeInfo_33_33;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_33_33);
    }
    {
      mdb__declarative_analyser__HeadVar__4_31 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_33_33, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__HeadVar__3_30);
    }
    return mdb__declarative_analyser__HeadVar__4_31;
  }
}

static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0(
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
    MR_Integer mdb__declarative_analyser__CastY_10 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_9 == mdb__declarative_analyser__CastY_10);
    if (mdb__declarative_analyser__succeeded)
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mdb__declarative_analyser__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer mdb__declarative_analyser__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_analyser__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_analyser__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_analyser__Var_8;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__Var_8, mdb__declarative_analyser__ArgX1_4, mdb__declarative_analyser__ArgY1_5);
        }
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_8 == (MR_Integer) 0);
        mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
        if (mdb__declarative_analyser__succeeded)
          *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_8;
        else
          {
            mdb__declarative_analyser____Compare____reason_for_question_0_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__ArgX2_6, mdb__declarative_analyser__ArgY2_7);
          }
      }
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0(
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_7 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
    MR_Integer mdb__declarative_analyser__CastY_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_7 == mdb__declarative_analyser__CastY_8);
    if (mdb__declarative_analyser__succeeded)
      mdb__declarative_analyser__succeeded = MR_TRUE;
    else
      {
        MR_Integer mdb__declarative_analyser__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mdb__declarative_analyser__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_analyser__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__declarative_analyser__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));

        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX1_3 == mdb__declarative_analyser__ArgY1_4);
        if (mdb__declarative_analyser__succeeded)
          {
            mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(mdb__declarative_analyser__ArgX2_5, mdb__declarative_analyser__ArgY2_6);
          }
      }
    return mdb__declarative_analyser__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0(
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_67 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
    MR_Integer mdb__declarative_analyser__CastY_68 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_67 == mdb__declarative_analyser__CastY_68);
    if (mdb__declarative_analyser__succeeded)
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_analyser__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mdb__declarative_analyser__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mdb__declarative_analyser__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdb__declarative_analyser__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_analyser__Var_8;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__Var_8, mdb__declarative_analyser__Var_79, mdb__declarative_analyser__ArgY1_5);
                  }
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_8 == (MR_Integer) 0);
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                  if (mdb__declarative_analyser__succeeded)
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_8;
                  else
                    {
                      mdb__declarative_analyser____Compare____reason_for_question_0_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_78, mdb__declarative_analyser__ArgY2_7);
                    }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__declarative_analyser__Var_80 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mdb__declarative_analyser__ArgY1_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_80, mdb__declarative_analyser__ArgY1_25);
                  }
                }
                break;
              case (MR_Integer) 3:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mdb__declarative_analyser__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mdb__declarative_analyser__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mdb__declarative_analyser__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Integer mdb__declarative_analyser__ArgY1_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdb__declarative_analyser__ArgY2_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_analyser__ArgY3_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_analyser__Var_65;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__Var_65, mdb__declarative_analyser__Var_77, mdb__declarative_analyser__ArgY1_60);
                  }
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_65 == (MR_Integer) 0);
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                  if (mdb__declarative_analyser__succeeded)
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_65;
                  else
                    {
                      MR_Word mdb__declarative_analyser__Var_66;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[2], &mdb__declarative_analyser__Var_66, ((MR_Box) (mdb__declarative_analyser__Var_76)), ((MR_Box) (mdb__declarative_analyser__ArgY2_62)));
                      }
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_66 == (MR_Integer) 0);
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                      if (mdb__declarative_analyser__succeeded)
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_66;
                      else
                        {
                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[2], mdb__declarative_analyser__HeadVar__1_1, ((MR_Box) (mdb__declarative_analyser__Var_75)), ((MR_Box) (mdb__declarative_analyser__ArgY3_64)));
                          }
                        }
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0(
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_19 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
    MR_Integer mdb__declarative_analyser__CastY_20 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_19 == mdb__declarative_analyser__CastY_20);
    if (mdb__declarative_analyser__succeeded)
      mdb__declarative_analyser__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__declarative_analyser__CastX_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
                MR_Integer mdb__declarative_analyser__CastY_10 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_10 == mdb__declarative_analyser__CastX_9);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__declarative_analyser__CastX_11 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
                MR_Integer mdb__declarative_analyser__CastY_12 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_12 == mdb__declarative_analyser__CastX_11);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mdb__declarative_analyser__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__declarative_analyser__ArgY1_4;
            MR_Word mdb__declarative_analyser__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_analyser__ArgY2_6;

            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_analyser__succeeded)
              {
                mdb__declarative_analyser__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_analyser__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX1_3 == mdb__declarative_analyser__ArgY1_4);
                if (mdb__declarative_analyser__succeeded)
                  {
                    mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(mdb__declarative_analyser__ArgX2_5, mdb__declarative_analyser__ArgY2_6);
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__declarative_analyser__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__declarative_analyser__ArgY1_8;

            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_analyser__succeeded)
              {
                mdb__declarative_analyser__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX1_7 == mdb__declarative_analyser__ArgY1_8);
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mdb__declarative_analyser__TypeInfo_21_21;
            MR_Word mdb__declarative_analyser__TypeInfo_22_22;
            MR_Integer mdb__declarative_analyser__ArgX1_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__declarative_analyser__ArgY1_14;
            MR_Word mdb__declarative_analyser__ArgX2_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_analyser__ArgY2_16;
            MR_Word mdb__declarative_analyser__ArgX3_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mdb__declarative_analyser__ArgY3_18;

            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (mdb__declarative_analyser__succeeded)
              {
                mdb__declarative_analyser__ArgY1_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_analyser__ArgY2_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_analyser__ArgY3_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX1_13 == mdb__declarative_analyser__ArgY1_14);
                if (mdb__declarative_analyser__succeeded)
                  {
                    mdb__declarative_analyser__TypeInfo_21_21 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[2];
                    {
                      mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_21_21, ((MR_Box) (mdb__declarative_analyser__ArgX2_15)), ((MR_Box) (mdb__declarative_analyser__ArgY2_16)));
                    }
                    if (mdb__declarative_analyser__succeeded)
                      {
                        mdb__declarative_analyser__TypeInfo_22_22 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[2];
                        {
                          mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_22_22, ((MR_Box) (mdb__declarative_analyser__ArgX3_17)), ((MR_Box) (mdb__declarative_analyser__ArgY3_18)));
                        }
                      }
                  }
              }
          }
          break;
      }
    return mdb__declarative_analyser__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0(
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_229 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
    MR_Integer mdb__declarative_analyser__CastY_230 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_229 == mdb__declarative_analyser__CastY_230);
    if (mdb__declarative_analyser__succeeded)
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 5:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 5:
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_analyser__Var_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));
            MR_Word mdb__declarative_analyser__Var_247 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
            MR_Word mdb__declarative_analyser__Var_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
            MR_Integer mdb__declarative_analyser__Var_249 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
            MR_String mdb__declarative_analyser__Var_250 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__declarative_analyser__Var_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__declarative_analyser__ArgY1_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
                  MR_String mdb__declarative_analyser__ArgY2_43 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer mdb__declarative_analyser__ArgY3_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_analyser__ArgY4_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word mdb__declarative_analyser__ArgY5_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 4)));
                  MR_Word mdb__declarative_analyser__ArgY6_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 5)));
                  MR_Word mdb__declarative_analyser__Var_52;
                  MR_Integer mdb__declarative_analyser__Var_255 = (MR_Integer) mdb__declarative_analyser__Var_251;
                  MR_Integer mdb__declarative_analyser__Var_256 = (MR_Integer) mdb__declarative_analyser__ArgY1_41;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__Var_52, mdb__declarative_analyser__Var_255, mdb__declarative_analyser__Var_256);
                  }
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_52 == (MR_Integer) 0);
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                  if (mdb__declarative_analyser__succeeded)
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_52;
                  else
                    {
                      MR_Word mdb__declarative_analyser__Var_53;

                      {
                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_analyser__Var_53, mdb__declarative_analyser__Var_250, mdb__declarative_analyser__ArgY2_43);
                      }
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_53 == (MR_Integer) 0);
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                      if (mdb__declarative_analyser__succeeded)
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_53;
                      else
                        {
                          MR_Word mdb__declarative_analyser__Var_54;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__Var_54, mdb__declarative_analyser__Var_249, mdb__declarative_analyser__ArgY3_45);
                          }
                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_54 == (MR_Integer) 0);
                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                          if (mdb__declarative_analyser__succeeded)
                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_54;
                          else
                            {
                              MR_Word mdb__declarative_analyser__Var_55;

                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[3], &mdb__declarative_analyser__Var_55, ((MR_Box) (mdb__declarative_analyser__Var_248)), ((MR_Box) (mdb__declarative_analyser__ArgY4_47)));
                              }
                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_55 == (MR_Integer) 0);
                              mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                              if (mdb__declarative_analyser__succeeded)
                                *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_55;
                              else
                                {
                                  MR_Word mdb__declarative_analyser__Var_56;

                                  {
                                    mdbcomp__prim_data____Compare____proc_label_0_0(&mdb__declarative_analyser__Var_56, mdb__declarative_analyser__Var_247, mdb__declarative_analyser__ArgY5_49);
                                  }
                                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_56 == (MR_Integer) 0);
                                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                                  if (mdb__declarative_analyser__succeeded)
                                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_56;
                                  else
                                    {
                                      MR_Integer mdb__declarative_analyser__Var_257 = (MR_Integer) mdb__declarative_analyser__Var_246;
                                      MR_Integer mdb__declarative_analyser__Var_258 = (MR_Integer) mdb__declarative_analyser__ArgY6_51;

                                      {
                                        mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_257, mdb__declarative_analyser__Var_258);
                                      }
                                    }
                                }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__declarative_analyser__Var_243 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mdb__declarative_analyser__Var_244 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mdb__declarative_analyser__Var_245 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mdb__declarative_analyser__ArgY1_145 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mdb__declarative_analyser__ArgY2_147 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer mdb__declarative_analyser__ArgY3_149 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_analyser__Var_150;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__Var_150, mdb__declarative_analyser__Var_245, mdb__declarative_analyser__ArgY1_145);
                  }
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_150 == (MR_Integer) 0);
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                  if (mdb__declarative_analyser__succeeded)
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_150;
                  else
                    {
                      MR_Word mdb__declarative_analyser__Var_151;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__Var_151, mdb__declarative_analyser__Var_244, mdb__declarative_analyser__ArgY2_147);
                      }
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_151 == (MR_Integer) 0);
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                      if (mdb__declarative_analyser__succeeded)
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_151;
                      else
                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_243, mdb__declarative_analyser__ArgY3_149);
                        }
                    }
                }
                break;
              case (MR_Integer) 3:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Integer mdb__declarative_analyser__Var_252 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mdb__declarative_analyser__Var_253 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__declarative_analyser__Var_254 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word mdb__declarative_analyser__ArgY1_192 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mdb__declarative_analyser__ArgY2_194 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer mdb__declarative_analyser__ArgY3_196 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_analyser__Var_197;
                  MR_Integer mdb__declarative_analyser__Var_259 = (MR_Integer) mdb__declarative_analyser__Var_254;
                  MR_Integer mdb__declarative_analyser__Var_260 = (MR_Integer) mdb__declarative_analyser__ArgY1_192;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__Var_197, mdb__declarative_analyser__Var_259, mdb__declarative_analyser__Var_260);
                  }
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_197 == (MR_Integer) 0);
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                  if (mdb__declarative_analyser__succeeded)
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_197;
                  else
                    {
                      MR_Word mdb__declarative_analyser__Var_198;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__Var_198, mdb__declarative_analyser__Var_253, mdb__declarative_analyser__ArgY2_194);
                      }
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_198 == (MR_Integer) 0);
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                      if (mdb__declarative_analyser__succeeded)
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_198;
                      else
                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_252, mdb__declarative_analyser__ArgY3_196);
                        }
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0(
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_39 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
    MR_Integer mdb__declarative_analyser__CastY_40 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_39 == mdb__declarative_analyser__CastY_40);
    if (mdb__declarative_analyser__succeeded)
      mdb__declarative_analyser__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mdb__declarative_analyser__CastX_3 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
                MR_Integer mdb__declarative_analyser__CastY_4 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_4 == mdb__declarative_analyser__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mdb__declarative_analyser__CastX_5 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
                MR_Integer mdb__declarative_analyser__CastY_6 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_6 == mdb__declarative_analyser__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mdb__declarative_analyser__CastX_19 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
                MR_Integer mdb__declarative_analyser__CastY_20 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_20 == mdb__declarative_analyser__CastX_19);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer mdb__declarative_analyser__CastX_21 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
                MR_Integer mdb__declarative_analyser__CastY_22 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_22 == mdb__declarative_analyser__CastX_21);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mdb__declarative_analyser__CastX_35 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
                MR_Integer mdb__declarative_analyser__CastY_36 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_36 == mdb__declarative_analyser__CastX_35);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer mdb__declarative_analyser__CastX_37 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
                MR_Integer mdb__declarative_analyser__CastY_38 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_38 == mdb__declarative_analyser__CastX_37);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_analyser__TypeInfo_41_41;
            MR_Word mdb__declarative_analyser__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_analyser__ArgY1_8;
            MR_String mdb__declarative_analyser__ArgX2_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
            MR_String mdb__declarative_analyser__ArgY2_10;
            MR_Integer mdb__declarative_analyser__ArgX3_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mdb__declarative_analyser__ArgY3_12;
            MR_Word mdb__declarative_analyser__ArgX4_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mdb__declarative_analyser__ArgY4_14;
            MR_Word mdb__declarative_analyser__ArgX5_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
            MR_Word mdb__declarative_analyser__ArgY5_16;
            MR_Word mdb__declarative_analyser__ArgX6_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 5)));
            MR_Word mdb__declarative_analyser__ArgY6_18;

            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_analyser__succeeded)
              {
                mdb__declarative_analyser__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_analyser__ArgY2_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_analyser__ArgY3_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
                mdb__declarative_analyser__ArgY4_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
                mdb__declarative_analyser__ArgY5_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
                mdb__declarative_analyser__ArgY6_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX1_7 == mdb__declarative_analyser__ArgY1_8);
                if (mdb__declarative_analyser__succeeded)
                  {
                    mdb__declarative_analyser__succeeded = (strcmp(mdb__declarative_analyser__ArgX2_9, mdb__declarative_analyser__ArgY2_10) == 0);
                    if (mdb__declarative_analyser__succeeded)
                      {
                        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX3_11 == mdb__declarative_analyser__ArgY3_12);
                        if (mdb__declarative_analyser__succeeded)
                          {
                            mdb__declarative_analyser__TypeInfo_41_41 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[3];
                            {
                              mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_41_41, ((MR_Box) (mdb__declarative_analyser__ArgX4_13)), ((MR_Box) (mdb__declarative_analyser__ArgY4_14)));
                            }
                            if (mdb__declarative_analyser__succeeded)
                              {
                                {
                                  mdb__declarative_analyser__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mdb__declarative_analyser__ArgX5_15, mdb__declarative_analyser__ArgY5_16);
                                }
                                if (mdb__declarative_analyser__succeeded)
                                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX6_17 == mdb__declarative_analyser__ArgY6_18);
                              }
                          }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__declarative_analyser__ArgX1_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__declarative_analyser__ArgY1_24;
            MR_Integer mdb__declarative_analyser__ArgX2_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mdb__declarative_analyser__ArgY2_26;
            MR_Integer mdb__declarative_analyser__ArgX3_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mdb__declarative_analyser__ArgY3_28;

            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_analyser__succeeded)
              {
                mdb__declarative_analyser__ArgY1_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_analyser__ArgY2_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_analyser__ArgY3_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX1_23 == mdb__declarative_analyser__ArgY1_24);
                if (mdb__declarative_analyser__succeeded)
                  {
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX2_25 == mdb__declarative_analyser__ArgY2_26);
                    if (mdb__declarative_analyser__succeeded)
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX3_27 == mdb__declarative_analyser__ArgY3_28);
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mdb__declarative_analyser__ArgX1_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_analyser__ArgY1_30;
            MR_Integer mdb__declarative_analyser__ArgX2_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mdb__declarative_analyser__ArgY2_32;
            MR_Integer mdb__declarative_analyser__ArgX3_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mdb__declarative_analyser__ArgY3_34;

            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (mdb__declarative_analyser__succeeded)
              {
                mdb__declarative_analyser__ArgY1_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_analyser__ArgY2_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_analyser__ArgY3_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX1_29 == mdb__declarative_analyser__ArgY1_30);
                if (mdb__declarative_analyser__succeeded)
                  {
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX2_31 == mdb__declarative_analyser__ArgY2_32);
                    if (mdb__declarative_analyser__succeeded)
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX3_33 == mdb__declarative_analyser__ArgY3_34);
                  }
              }
          }
          break;
      }
    return mdb__declarative_analyser__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0(
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
    MR_Integer mdb__declarative_analyser__CastY_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_8 == mdb__declarative_analyser__CastY_9);
    if (mdb__declarative_analyser__succeeded)
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Integer mdb__declarative_analyser__Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Integer mdb__declarative_analyser__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_11, mdb__declarative_analyser__ArgY1_5);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0(
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_7 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
    MR_Integer mdb__declarative_analyser__CastY_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_7 == mdb__declarative_analyser__CastY_8);
    if (mdb__declarative_analyser__succeeded)
      mdb__declarative_analyser__succeeded = MR_TRUE;
    else
    if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mdb__declarative_analyser__CastX_5 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
        MR_Integer mdb__declarative_analyser__CastY_6 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_6 == mdb__declarative_analyser__CastX_5);
      }
    else
      {
        MR_Integer mdb__declarative_analyser__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mdb__declarative_analyser__ArgY1_4;

        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__declarative_analyser__succeeded)
          {
            mdb__declarative_analyser__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX1_3 == mdb__declarative_analyser__ArgY1_4);
          }
      }
    return mdb__declarative_analyser__succeeded;
  }
}

void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0(
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_10,
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
    MR_Integer mdb__declarative_analyser__CastY_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_8 == mdb__declarative_analyser__CastY_9);
    if (mdb__declarative_analyser__succeeded)
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
    else
      {
        MR_Box mdb__declarative_analyser__Var_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0));

        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Box mdb__declarative_analyser__ArgY1_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0));

            {
              mercury__builtin__compare_3_p_0(mdb__declarative_analyser__TypeInfo_for_T_10, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_11, mdb__declarative_analyser__ArgY1_5);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0(
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_9,
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_7 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
    MR_Integer mdb__declarative_analyser__CastY_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_7 == mdb__declarative_analyser__CastY_8);
    if (mdb__declarative_analyser__succeeded)
      mdb__declarative_analyser__succeeded = MR_TRUE;
    else
    if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mdb__declarative_analyser__CastX_5 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
        MR_Integer mdb__declarative_analyser__CastY_6 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_6 == mdb__declarative_analyser__CastX_5);
      }
    else
      {
        MR_Box mdb__declarative_analyser__ArgX1_3 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0));
        MR_Box mdb__declarative_analyser__ArgY1_4;

        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__declarative_analyser__succeeded)
          {
            mdb__declarative_analyser__ArgY1_4 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0));
            {
              mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_9, mdb__declarative_analyser__ArgX1_3, mdb__declarative_analyser__ArgY1_4);
            }
          }
      }
    return mdb__declarative_analyser__succeeded;
  }
}

void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0(
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_23,
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_21 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
    MR_Integer mdb__declarative_analyser__CastY_22 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_21 == mdb__declarative_analyser__CastY_22);
    if (mdb__declarative_analyser__succeeded)
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mdb__declarative_analyser__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_analyser__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__declarative_analyser__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_analyser__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__declarative_analyser__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__declarative_analyser__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__declarative_analyser__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__declarative_analyser__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mdb__declarative_analyser__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mdb__declarative_analyser__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word mdb__declarative_analyser__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word mdb__declarative_analyser__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word mdb__declarative_analyser__Var_16;

        {
          mdb__declarative_edt____Compare____search_space_1_0(mdb__declarative_analyser__TypeInfo_for_T_23, &mdb__declarative_analyser__Var_16, mdb__declarative_analyser__ArgX1_4, mdb__declarative_analyser__ArgY1_5);
        }
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_16 == (MR_Integer) 0);
        mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
        if (mdb__declarative_analyser__succeeded)
          *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_16;
        else
          {
            MR_Word mdb__declarative_analyser__Var_17;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[0], &mdb__declarative_analyser__Var_17, ((MR_Box) (mdb__declarative_analyser__ArgX2_6)), ((MR_Box) (mdb__declarative_analyser__ArgY2_7)));
            }
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_17 == (MR_Integer) 0);
            mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
            if (mdb__declarative_analyser__succeeded)
              *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_17;
            else
              {
                MR_Word mdb__declarative_analyser__Var_18;

                {
                  mdb__declarative_analyser____Compare____search_mode_0_0(&mdb__declarative_analyser__Var_18, mdb__declarative_analyser__ArgX3_8, mdb__declarative_analyser__ArgY3_9);
                }
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_18 == (MR_Integer) 0);
                mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                if (mdb__declarative_analyser__succeeded)
                  *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_18;
                else
                  {
                    MR_Word mdb__declarative_analyser__Var_19;

                    {
                      mdb__declarative_analyser____Compare____search_mode_0_0(&mdb__declarative_analyser__Var_19, mdb__declarative_analyser__ArgX4_10, mdb__declarative_analyser__ArgY4_11);
                    }
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_19 == (MR_Integer) 0);
                    mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                    if (mdb__declarative_analyser__succeeded)
                      *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_19;
                    else
                      {
                        MR_Word mdb__declarative_analyser__Var_20;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[1], &mdb__declarative_analyser__Var_20, ((MR_Box) (mdb__declarative_analyser__ArgX5_12)), ((MR_Box) (mdb__declarative_analyser__ArgY5_13)));
                        }
                        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_20 == (MR_Integer) 0);
                        mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                        if (mdb__declarative_analyser__succeeded)
                          *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_20;
                        else
                          {
                            MR_Word mdb__declarative_analyser__TypeInfo_31_31;

                            {
                              mdb__declarative_analyser__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_31_31, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1));
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_31_31, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_23));
                            }
                            {
                              mercury__maybe____Compare____maybe_1_0(mdb__declarative_analyser__TypeInfo_31_31, mdb__declarative_analyser__HeadVar__1_1, (MR_Word) mdb__declarative_analyser__ArgX6_14, (MR_Word) mdb__declarative_analyser__ArgY6_15);
                            }
                          }
                      }
                  }
              }
          }
      }
  }
}

void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0(
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_82 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
    MR_Integer mdb__declarative_analyser__CastY_83 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_82 == mdb__declarative_analyser__CastY_83);
    if (mdb__declarative_analyser__succeeded)
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_analyser__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
            MR_Word mdb__declarative_analyser__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word mdb__declarative_analyser__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mdb__declarative_analyser__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mdb__declarative_analyser__Var_101 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mdb__declarative_analyser__ArgY1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdb__declarative_analyser__ArgY2_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_analyser__ArgY3_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_analyser__ArgY4_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word mdb__declarative_analyser__ArgY5_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 4)));
                  MR_Word mdb__declarative_analyser__Var_28;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__Var_28, mdb__declarative_analyser__Var_101, mdb__declarative_analyser__ArgY1_19);
                  }
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_28 == (MR_Integer) 0);
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                  if (mdb__declarative_analyser__succeeded)
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_28;
                  else
                    {
                      MR_Word mdb__declarative_analyser__Var_29;

                      {
                        mdbcomp__program_representation____Compare____arg_pos_0_0(&mdb__declarative_analyser__Var_29, mdb__declarative_analyser__Var_100, mdb__declarative_analyser__ArgY2_21);
                      }
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_29 == (MR_Integer) 0);
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                      if (mdb__declarative_analyser__succeeded)
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_29;
                      else
                        {
                          MR_Word mdb__declarative_analyser__Var_30;

                          {
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[2], &mdb__declarative_analyser__Var_30, ((MR_Box) (mdb__declarative_analyser__Var_99)), ((MR_Box) (mdb__declarative_analyser__ArgY3_23)));
                          }
                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_30 == (MR_Integer) 0);
                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                          if (mdb__declarative_analyser__succeeded)
                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_30;
                          else
                            {
                              MR_Word mdb__declarative_analyser__Var_31;

                              {
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[5], &mdb__declarative_analyser__Var_31, ((MR_Box) (mdb__declarative_analyser__Var_98)), ((MR_Box) (mdb__declarative_analyser__ArgY4_25)));
                              }
                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_31 == (MR_Integer) 0);
                              mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                              if (mdb__declarative_analyser__succeeded)
                                *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_31;
                              else
                                {
                                  MR_Integer mdb__declarative_analyser__Var_104 = (MR_Integer) mdb__declarative_analyser__Var_97;
                                  MR_Integer mdb__declarative_analyser__Var_105 = (MR_Integer) mdb__declarative_analyser__ArgY5_27;

                                  {
                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_104, mdb__declarative_analyser__Var_105);
                                  }
                                }
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mdb__declarative_analyser__Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mdb__declarative_analyser__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
            MR_ArrayPtr mdb__declarative_analyser__Var_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_ArrayPtr mdb__declarative_analyser__ArgY1_58 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdb__declarative_analyser__ArgY2_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer mdb__declarative_analyser__ArgY3_62 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mdb__declarative_analyser__Var_63;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[4], &mdb__declarative_analyser__Var_63, ((MR_Box) (mdb__declarative_analyser__Var_95)), ((MR_Box) (mdb__declarative_analyser__ArgY1_58)));
                  }
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_63 == (MR_Integer) 0);
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                  if (mdb__declarative_analyser__succeeded)
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_63;
                  else
                    {
                      MR_Word mdb__declarative_analyser__Var_64;

                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_2[0], &mdb__declarative_analyser__Var_64, ((MR_Box) (mdb__declarative_analyser__Var_94)), ((MR_Box) (mdb__declarative_analyser__ArgY2_60)));
                      }
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_64 == (MR_Integer) 0);
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                      if (mdb__declarative_analyser__succeeded)
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_64;
                      else
                        {
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_93, mdb__declarative_analyser__ArgY3_62);
                        }
                    }
                }
                break;
              case (MR_Integer) 3:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mdb__declarative_analyser__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word mdb__declarative_analyser__ArgY1_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mdb__declarative_analyser__Var_102 = (MR_Integer) mdb__declarative_analyser__Var_96;
                  MR_Integer mdb__declarative_analyser__Var_103 = (MR_Integer) mdb__declarative_analyser__ArgY1_81;

                  {
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_102, mdb__declarative_analyser__Var_103);
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
mdb__declarative_analyser____Unify____analyser_state_1_0(
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_17,
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_15 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
    MR_Integer mdb__declarative_analyser__CastY_16 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_15 == mdb__declarative_analyser__CastY_16);
    if (mdb__declarative_analyser__succeeded)
      mdb__declarative_analyser__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__declarative_analyser__TypeInfo_20_20;
        MR_Word mdb__declarative_analyser__TypeInfo_21_21;
        MR_Word mdb__declarative_analyser__TypeCtorInfo_22_22;
        MR_Word mdb__declarative_analyser__TypeInfo_23_23;
        MR_Word mdb__declarative_analyser__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__declarative_analyser__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__declarative_analyser__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__declarative_analyser__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__declarative_analyser__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mdb__declarative_analyser__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mdb__declarative_analyser__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mdb__declarative_analyser__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mdb__declarative_analyser__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word mdb__declarative_analyser__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word mdb__declarative_analyser__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word mdb__declarative_analyser__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));

        {
          mdb__declarative_analyser__succeeded = mdb__declarative_edt____Unify____search_space_1_0(mdb__declarative_analyser__TypeInfo_for_T_17, mdb__declarative_analyser__ArgX1_3, mdb__declarative_analyser__ArgY1_4);
        }
        if (mdb__declarative_analyser__succeeded)
          {
            mdb__declarative_analyser__TypeInfo_20_20 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[0];
            {
              mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_20_20, ((MR_Box) (mdb__declarative_analyser__ArgX2_5)), ((MR_Box) (mdb__declarative_analyser__ArgY2_6)));
            }
            if (mdb__declarative_analyser__succeeded)
              {
                {
                  mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(mdb__declarative_analyser__ArgX3_7, mdb__declarative_analyser__ArgY3_8);
                }
                if (mdb__declarative_analyser__succeeded)
                  {
                    {
                      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(mdb__declarative_analyser__ArgX4_9, mdb__declarative_analyser__ArgY4_10);
                    }
                    if (mdb__declarative_analyser__succeeded)
                      {
                        mdb__declarative_analyser__TypeInfo_21_21 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[1];
                        {
                          mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_21_21, ((MR_Box) (mdb__declarative_analyser__ArgX5_11)), ((MR_Box) (mdb__declarative_analyser__ArgY5_12)));
                        }
                        if (mdb__declarative_analyser__succeeded)
                          {
                            mdb__declarative_analyser__TypeCtorInfo_22_22 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1;
                            {
                              mdb__declarative_analyser__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_23_23, 0) = ((MR_Box) (mdb__declarative_analyser__TypeCtorInfo_22_22));
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_17));
                            }
                            {
                              mdb__declarative_analyser__succeeded = mercury__maybe____Unify____maybe_1_0(mdb__declarative_analyser__TypeInfo_23_23, (MR_Word) mdb__declarative_analyser__ArgX6_13, (MR_Word) mdb__declarative_analyser__ArgY6_14);
                            }
                          }
                      }
                  }
              }
          }
      }
    return mdb__declarative_analyser__succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0(
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_23 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
    MR_Integer mdb__declarative_analyser__CastY_24 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_23 == mdb__declarative_analyser__CastY_24);
    if (mdb__declarative_analyser__succeeded)
      mdb__declarative_analyser__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mdb__declarative_analyser__CastX_3 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
            MR_Integer mdb__declarative_analyser__CastY_4 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_4 == mdb__declarative_analyser__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_analyser__TypeInfo_28_28;
            MR_Word mdb__declarative_analyser__TypeInfo_29_29;
            MR_Integer mdb__declarative_analyser__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mdb__declarative_analyser__ArgY1_6;
            MR_Word mdb__declarative_analyser__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_analyser__ArgY2_8;
            MR_Word mdb__declarative_analyser__ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mdb__declarative_analyser__ArgY3_10;
            MR_Word mdb__declarative_analyser__ArgX4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mdb__declarative_analyser__ArgY4_12;
            MR_Word mdb__declarative_analyser__ArgX5_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
            MR_Word mdb__declarative_analyser__ArgY5_14;

            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_analyser__succeeded)
              {
                mdb__declarative_analyser__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_analyser__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_analyser__ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
                mdb__declarative_analyser__ArgY4_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
                mdb__declarative_analyser__ArgY5_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX1_5 == mdb__declarative_analyser__ArgY1_6);
                if (mdb__declarative_analyser__succeeded)
                  {
                    {
                      mdb__declarative_analyser__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_analyser__ArgX2_7, mdb__declarative_analyser__ArgY2_8);
                    }
                    if (mdb__declarative_analyser__succeeded)
                      {
                        mdb__declarative_analyser__TypeInfo_28_28 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[2];
                        {
                          mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_28_28, ((MR_Box) (mdb__declarative_analyser__ArgX3_9)), ((MR_Box) (mdb__declarative_analyser__ArgY3_10)));
                        }
                        if (mdb__declarative_analyser__succeeded)
                          {
                            mdb__declarative_analyser__TypeInfo_29_29 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[5];
                            {
                              mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_29_29, ((MR_Box) (mdb__declarative_analyser__ArgX4_11)), ((MR_Box) (mdb__declarative_analyser__ArgY4_12)));
                            }
                            if (mdb__declarative_analyser__succeeded)
                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX5_13 == mdb__declarative_analyser__ArgY5_14);
                          }
                      }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_analyser__TypeCtorInfo_25_25;
            MR_Word mdb__declarative_analyser__TypeInfo_26_26;
            MR_ArrayPtr mdb__declarative_analyser__ArgX1_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
            MR_ArrayPtr mdb__declarative_analyser__ArgY1_16;
            MR_Word mdb__declarative_analyser__ArgX2_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_analyser__ArgY2_18;
            MR_Integer mdb__declarative_analyser__ArgX3_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer mdb__declarative_analyser__ArgY3_20;

            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_analyser__succeeded)
              {
                mdb__declarative_analyser__ArgY1_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_analyser__ArgY2_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
                mdb__declarative_analyser__ArgY3_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
                mdb__declarative_analyser__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                {
                  mdb__declarative_analyser__succeeded = mercury__array____Unify____array_1_0(mdb__declarative_analyser__TypeCtorInfo_25_25, (MR_ArrayPtr) mdb__declarative_analyser__ArgX1_15, (MR_ArrayPtr) mdb__declarative_analyser__ArgY1_16);
                }
                if (mdb__declarative_analyser__succeeded)
                  {
                    mdb__declarative_analyser__TypeInfo_26_26 = (MR_Word) &mdb__declarative_analyser_scalar_common_2[0];
                    {
                      mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_26_26, ((MR_Box) (mdb__declarative_analyser__ArgX2_17)), ((MR_Box) (mdb__declarative_analyser__ArgY2_18)));
                    }
                    if (mdb__declarative_analyser__succeeded)
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX3_19 == mdb__declarative_analyser__ArgY3_20);
                  }
              }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mdb__declarative_analyser__ArgX1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_analyser__ArgY1_22;

            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (mdb__declarative_analyser__succeeded)
              {
                mdb__declarative_analyser__ArgY1_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__ArgX1_21 == mdb__declarative_analyser__ArgY1_22);
              }
          }
          break;
      }
    return mdb__declarative_analyser__succeeded;
  }
}

void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0(
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_79,
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_77 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
    MR_Integer mdb__declarative_analyser__CastY_78 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_77 == mdb__declarative_analyser__CastY_78);
    if (mdb__declarative_analyser__succeeded)
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_analyser__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mdb__declarative_analyser__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mdb__declarative_analyser__ArgY1_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mdb__declarative_analyser__ArgY2_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mdb__declarative_analyser__Var_16;

                  {
                    mdb__declarative_debugger____Compare____decl_bug_0_0(&mdb__declarative_analyser__Var_16, mdb__declarative_analyser__Var_90, mdb__declarative_analyser__ArgY1_13);
                  }
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_16 == (MR_Integer) 0);
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
                  if (mdb__declarative_analyser__succeeded)
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__Var_16;
                  else
                    {
                      MR_Word mdb__declarative_analyser__TypeInfo_86_86;

                      {
                        mdb__declarative_analyser__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_86_86, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
                        MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_86_86, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_79));
                      }
                      {
                        mercury__list____Compare____list_1_0(mdb__declarative_analyser__TypeInfo_86_86, mdb__declarative_analyser__HeadVar__1_1, (MR_Word) mdb__declarative_analyser__Var_89, (MR_Word) mdb__declarative_analyser__ArgY2_15);
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_analyser__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mdb__declarative_analyser__ArgY1_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_analyser__TypeInfo_for_T_79, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_91, mdb__declarative_analyser__ArgY1_34);
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mdb__declarative_analyser__Var_92 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Box mdb__declarative_analyser__ArgY1_48 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1));

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_analyser__TypeInfo_for_T_79, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_92, mdb__declarative_analyser__ArgY1_48);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mdb__declarative_analyser__Var_93 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1));

                switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Box mdb__declarative_analyser__ArgY1_62 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1));

                          {
                            mercury__builtin__compare_3_p_0(mdb__declarative_analyser__TypeInfo_for_T_79, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_93, mdb__declarative_analyser__ArgY1_62);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdb__declarative_analyser__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word mdb__declarative_analyser__ArgY1_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));

                          {
                            mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_analyser__TypeInfo_for_T_79, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__Var_94, mdb__declarative_analyser__ArgY1_76);
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
mdb__declarative_analyser____Unify____analyser_response_1_0(
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_19,
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__CastX_17 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
    MR_Integer mdb__declarative_analyser__CastY_18 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_17 == mdb__declarative_analyser__CastY_18);
    if (mdb__declarative_analyser__succeeded)
      mdb__declarative_analyser__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mdb__declarative_analyser__CastX_3 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
            MR_Integer mdb__declarative_analyser__CastY_4 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_4 == mdb__declarative_analyser__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mdb__declarative_analyser__TypeCtorInfo_21_21;
            MR_Word mdb__declarative_analyser__TypeInfo_22_22;
            MR_Word mdb__declarative_analyser__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_analyser__ArgY1_6;
            MR_Word mdb__declarative_analyser__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__declarative_analyser__ArgY2_8;

            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mdb__declarative_analyser__succeeded)
              {
                mdb__declarative_analyser__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
                mdb__declarative_analyser__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
                {
                  mdb__declarative_analyser__succeeded = mdb__declarative_debugger____Unify____decl_bug_0_0(mdb__declarative_analyser__ArgX1_5, mdb__declarative_analyser__ArgY1_6);
                }
                if (mdb__declarative_analyser__succeeded)
                  {
                    mdb__declarative_analyser__TypeCtorInfo_21_21 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1;
                    {
                      mdb__declarative_analyser__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_22_22, 0) = ((MR_Box) (mdb__declarative_analyser__TypeCtorInfo_21_21));
                      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_22_22, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_19));
                    }
                    {
                      mdb__declarative_analyser__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_analyser__TypeInfo_22_22, (MR_Word) mdb__declarative_analyser__ArgX2_7, (MR_Word) mdb__declarative_analyser__ArgY2_8);
                    }
                  }
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mdb__declarative_analyser__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__declarative_analyser__ArgY1_10;

            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mdb__declarative_analyser__succeeded)
              {
                mdb__declarative_analyser__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
                {
                  mdb__declarative_analyser__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_analyser__TypeInfo_for_T_19, mdb__declarative_analyser__ArgX1_9, mdb__declarative_analyser__ArgY1_10);
                }
              }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mdb__declarative_analyser__ArgX1_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_analyser__ArgY1_12;

                mdb__declarative_analyser__succeeded = ((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mdb__declarative_analyser__succeeded)
                  {
                    mdb__declarative_analyser__ArgY1_12 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1));
                    {
                      mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_19, mdb__declarative_analyser__ArgX1_11, mdb__declarative_analyser__ArgY1_12);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mdb__declarative_analyser__ArgX1_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1));
                MR_Box mdb__declarative_analyser__ArgY1_14;

                mdb__declarative_analyser__succeeded = ((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mdb__declarative_analyser__succeeded)
                  {
                    mdb__declarative_analyser__ArgY1_14 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1));
                    {
                      mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_19, mdb__declarative_analyser__ArgX1_13, mdb__declarative_analyser__ArgY1_14);
                    }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdb__declarative_analyser__ArgX1_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mdb__declarative_analyser__ArgY1_16;

                mdb__declarative_analyser__succeeded = ((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mdb__declarative_analyser__succeeded)
                  {
                    mdb__declarative_analyser__ArgY1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      mdb__declarative_analyser__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_analyser__TypeInfo_for_T_19, mdb__declarative_analyser__ArgX1_15, mdb__declarative_analyser__ArgY1_16);
                    }
                  }
              }
              break;
          }
          break;
      }
    return mdb__declarative_analyser__succeeded;
  }
}

void MR_CALL 
mdb__declarative_analyser__debug_analyser_state_2_p_0(
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_9,
  MR_Word mdb__declarative_analyser__Analyser_3,
  MR_Word * mdb__declarative_analyser__HeadVar__2_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 0)));
    MR_Word mdb__declarative_analyser__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 1)));
    MR_Word mdb__declarative_analyser__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 2)));
    MR_Word mdb__declarative_analyser__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 3)));
    MR_Word mdb__declarative_analyser__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 4)));

    *mdb__declarative_analyser__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 5)));
  }
}

void MR_CALL 
mdb__declarative_analyser__show_info_5_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135,
  MR_Box mdb__declarative_analyser__Store_6,
  MR_Word mdb__declarative_analyser__OutStream_7,
  MR_Word mdb__declarative_analyser__Analyser_8)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__TypeCtorInfo_140_140;
    MR_Word mdb__declarative_analyser__TypeInfo_142_142;
    MR_Word mdb__declarative_analyser__SearchSpace_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 0)));
    MR_Word mdb__declarative_analyser__Reason_14;
    MR_Word mdb__declarative_analyser__MaybeWeighting_21;
    MR_String mdb__declarative_analyser__InfoMessage_26;
    MR_String mdb__declarative_analyser__ReasonStr_27;
    MR_String mdb__declarative_analyser__ReasonSent_28;
    MR_String mdb__declarative_analyser__WrappedReason_29;
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59;
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_63_63;
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65;
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_69_69;
    MR_Word mdb__declarative_analyser__Var_70;
    MR_String mdb__declarative_analyser__Var_71;
    MR_Word mdb__declarative_analyser__Var_72;
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_87_87;
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_91_91;
    MR_Word mdb__declarative_analyser__Var_95;
    MR_Word mdb__declarative_analyser__Var_96;
    MR_Word mdb__declarative_analyser__Var_97;
    MR_Word mdb__declarative_analyser__Var_98;
    MR_Word mdb__declarative_analyser__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 4)));
    MR_Word mdb__declarative_analyser__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 1)));
    MR_Word mdb__declarative_analyser__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 2)));
    MR_Word mdb__declarative_analyser__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 3)));
    MR_Word mdb__declarative_analyser__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 5)));
    MR_Word mdb__declarative_analyser__Var_125;
    MR_Word mdb__declarative_analyser__Var_126;
    MR_Word mdb__declarative_analyser__Var_127;
    MR_Word mdb__declarative_analyser__Var_128;
    MR_Word mdb__declarative_analyser__Var_129;
    MR_Word mdb__declarative_analyser__Var_74;

    if ((mdb__declarative_analyser__Var_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[12])));
          return;
        }
      }
    else
      {
        MR_Integer mdb__declarative_analyser__LastId_13;
        MR_Word mdb__declarative_analyser__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_113, (MR_Integer) 0)));
        MR_String mdb__declarative_analyser__FileName_15;
        MR_Integer mdb__declarative_analyser__LineNo_16;
        MR_Word mdb__declarative_analyser__MaybeReturnContext_17;
        MR_Word mdb__declarative_analyser__TypeInfo_137_137;
        MR_Box mdb__declarative_analyser__Var_40;
        MR_Word mdb__declarative_analyser__Var_41;

        mdb__declarative_analyser__LastId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_39, (MR_Integer) 0)));
        mdb__declarative_analyser__Reason_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_39, (MR_Integer) 1)));
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_137_137);
        }
        {
          mdb__declarative_analyser__Var_40 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_137_137, mdb__declarative_analyser__SearchSpace_10, mdb__declarative_analyser__LastId_13);
        }
        {
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__edt_context_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Var_40, &mdb__declarative_analyser__Var_41, &mdb__declarative_analyser__MaybeReturnContext_17);
        }
        if (mdb__declarative_analyser__succeeded)
          {
            mdb__declarative_analyser__FileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_41, (MR_Integer) 0)));
            mdb__declarative_analyser__LineNo_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_41, (MR_Integer) 1)));
            mdb__declarative_analyser__succeeded = MR_TRUE;
          }
        if (mdb__declarative_analyser__succeeded)
          {
            MR_Word mdb__declarative_analyser__TypeCtorInfo_138_138;
            MR_String mdb__declarative_analyser__ContextStr_20;
            MR_Word mdb__declarative_analyser__Var_62;

            if ((mdb__declarative_analyser__MaybeReturnContext_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_String mdb__declarative_analyser__Var_42;
                MR_String mdb__declarative_analyser__Var_44;

                {
                  mdb__declarative_analyser__Var_44 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__LineNo_16);
                }
                {
                  mdb__declarative_analyser__Var_42 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdb__declarative_analyser__Var_44);
                }
                {
                  mdb__declarative_analyser__ContextStr_20 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__FileName_15, mdb__declarative_analyser__Var_42);
                }
              }
            else
              {
                MR_String mdb__declarative_analyser__ReturnFileName_18;
                MR_Integer mdb__declarative_analyser__ReturnLineNo_19;
                MR_Word mdb__declarative_analyser__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeReturnContext_17, (MR_Integer) 0)));
                MR_String mdb__declarative_analyser__Var_46;
                MR_String mdb__declarative_analyser__Var_48;
                MR_String mdb__declarative_analyser__Var_49;
                MR_String mdb__declarative_analyser__Var_50;
                MR_String mdb__declarative_analyser__Var_52;
                MR_String mdb__declarative_analyser__Var_53;
                MR_String mdb__declarative_analyser__Var_55;
                MR_String mdb__declarative_analyser__Var_56;

                mdb__declarative_analyser__ReturnFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_45, (MR_Integer) 0)));
                mdb__declarative_analyser__ReturnLineNo_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_45, (MR_Integer) 1)));
                {
                  mdb__declarative_analyser__Var_49 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__LineNo_16);
                }
                {
                  mdb__declarative_analyser__Var_56 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__ReturnLineNo_19);
                }
                {
                  mdb__declarative_analyser__Var_55 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Var_56, (MR_String) ")");
                }
                {
                  mdb__declarative_analyser__Var_53 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdb__declarative_analyser__Var_55);
                }
                {
                  mdb__declarative_analyser__Var_52 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__ReturnFileName_18, mdb__declarative_analyser__Var_53);
                }
                {
                  mdb__declarative_analyser__Var_50 = mercury__string__f_43_43_2_f_0((MR_String) " (", mdb__declarative_analyser__Var_52);
                }
                {
                  mdb__declarative_analyser__Var_48 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Var_49, mdb__declarative_analyser__Var_50);
                }
                {
                  mdb__declarative_analyser__Var_46 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdb__declarative_analyser__Var_48);
                }
                {
                  mdb__declarative_analyser__ContextStr_20 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__FileName_15, mdb__declarative_analyser__Var_46);
                }
              }
            mdb__declarative_analyser__TypeCtorInfo_138_138 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              mercury__list__append_3_p_0(mdb__declarative_analyser__TypeCtorInfo_138_138, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_32_32, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[13]), &mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59);
            }
            {
              mdb__declarative_analyser__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_62, 0) = ((MR_Box) (mdb__declarative_analyser__ContextStr_20));
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mercury__list__append_3_p_0(mdb__declarative_analyser__TypeCtorInfo_138_138, mdb__declarative_analyser__STATE_VARIABLE_Data_33_33, mdb__declarative_analyser__Var_62, &mdb__declarative_analyser__STATE_VARIABLE_Data_63_63);
            }
          }
        else
          {
            mdb__declarative_analyser__STATE_VARIABLE_Data_63_63 = mdb__declarative_analyser__STATE_VARIABLE_Data_33_33;
            mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59 = mdb__declarative_analyser__STATE_VARIABLE_FieldNames_32_32;
          }
      }
    mdb__declarative_analyser__TypeCtorInfo_140_140 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[14]));
    }
    mdb__declarative_analyser__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 0)));
    mdb__declarative_analyser__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 1)));
    mdb__declarative_analyser__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 2)));
    mdb__declarative_analyser__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 3)));
    mdb__declarative_analyser__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 4)));
    mdb__declarative_analyser__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 5)));
    {
      mdb__declarative_analyser__Var_71 = mdb__declarative_analyser__search_mode_to_string_1_f_0(mdb__declarative_analyser__Var_72);
    }
    {
      mdb__declarative_analyser__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_70, 0) = ((MR_Box) (mdb__declarative_analyser__Var_71));
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdb__declarative_analyser__STATE_VARIABLE_Data_69_69 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_Data_63_63, mdb__declarative_analyser__Var_70);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_142_142);
    }
    {
      mdb__declarative_analyser__MaybeWeighting_21 = mdb__declarative_edt__get_current_maybe_weighting_1_f_0(mdb__declarative_analyser__TypeInfo_142_142, mdb__declarative_analyser__SearchSpace_10);
    }
    mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeWeighting_21)) == (MR_mktag((MR_Integer) 1)));
    if (mdb__declarative_analyser__succeeded)
      {
        mdb__declarative_analyser__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeWeighting_21, (MR_Integer) 0)));
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_74 == (MR_Integer) 0);
      }
    if (mdb__declarative_analyser__succeeded)
      {
        MR_Word mdb__declarative_analyser__TypeInfo_145_145;
        MR_Integer mdb__declarative_analyser__StartId_23;
        MR_Integer mdb__declarative_analyser__Weight_24;
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77;
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_83_83;
        MR_Word mdb__declarative_analyser__Var_92;
        MR_String mdb__declarative_analyser__Var_93;
        MR_Integer mdb__declarative_analyser__RootId_22;
        MR_Word mdb__declarative_analyser__TypeInfo_143_143;
        MR_Word mdb__declarative_analyser__Var_75;
        MR_Word mdb__declarative_analyser__Var_76;
        MR_Word mdb__declarative_analyser__Var_130;
        MR_Word mdb__declarative_analyser__Var_131;
        MR_Word mdb__declarative_analyser__Var_132;
        MR_Word mdb__declarative_analyser__Var_133;
        MR_Word mdb__declarative_analyser__Var_134;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_143_143);
        }
        {
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_143_143, mdb__declarative_analyser__SearchSpace_10, &mdb__declarative_analyser__RootId_22);
        }
        if (mdb__declarative_analyser__succeeded)
          mdb__declarative_analyser__StartId_23 = mdb__declarative_analyser__RootId_22;
        else
          {
            MR_Word mdb__declarative_analyser__TypeInfo_144_144;

            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_144_144);
            }
            {
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_144_144, mdb__declarative_analyser__SearchSpace_10, &mdb__declarative_analyser__StartId_23);
            }
          }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_145_145);
        }
        {
          mdb__declarative_analyser__Weight_24 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_145_145, mdb__declarative_analyser__SearchSpace_10, mdb__declarative_analyser__StartId_23);
        }
        mdb__declarative_analyser__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 0)));
        mdb__declarative_analyser__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 1)));
        mdb__declarative_analyser__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 2)));
        mdb__declarative_analyser__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 3)));
        mdb__declarative_analyser__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 4)));
        mdb__declarative_analyser__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 5)));
        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__Var_75)) == (MR_mktag((MR_Integer) 3)));
        if (mdb__declarative_analyser__succeeded)
          {
            mdb__declarative_analyser__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_75, (MR_Integer) 0)));
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_76 == (MR_Integer) 0);
          }
        if (mdb__declarative_analyser__succeeded)
          {
            MR_Integer mdb__declarative_analyser__EstimatedQuestions_25;
            MR_Float mdb__declarative_analyser__Var_81;
            MR_Float mdb__declarative_analyser__Var_82;
            MR_Word mdb__declarative_analyser__Var_84;
            MR_String mdb__declarative_analyser__Var_85;

            {
              mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[15]));
            }
            {
              mdb__declarative_analyser__Var_82 = mercury__float__float_1_f_0(mdb__declarative_analyser__Weight_24);
            }
            {
              mdb__declarative_analyser__Var_81 = mercury__math__log2_1_f_0(mdb__declarative_analyser__Var_82);
            }
            {
              mdb__declarative_analyser__EstimatedQuestions_25 = mercury__float__ceiling_to_int_1_f_0(mdb__declarative_analyser__Var_81);
            }
            {
              mdb__declarative_analyser__Var_85 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__EstimatedQuestions_25);
            }
            {
              mdb__declarative_analyser__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_84, 0) = ((MR_Box) (mdb__declarative_analyser__Var_85));
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mdb__declarative_analyser__STATE_VARIABLE_Data_83_83 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_Data_69_69, mdb__declarative_analyser__Var_84);
            }
          }
        else
          {
            mdb__declarative_analyser__STATE_VARIABLE_Data_83_83 = mdb__declarative_analyser__STATE_VARIABLE_Data_69_69;
            mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77 = mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65;
          }
        {
          mdb__declarative_analyser__STATE_VARIABLE_FieldNames_87_87 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[16]));
        }
        {
          mdb__declarative_analyser__Var_93 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight_24);
        }
        {
          mdb__declarative_analyser__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_92, 0) = ((MR_Box) (mdb__declarative_analyser__Var_93));
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mdb__declarative_analyser__STATE_VARIABLE_Data_91_91 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_Data_83_83, mdb__declarative_analyser__Var_92);
        }
      }
    else
      {
        mdb__declarative_analyser__STATE_VARIABLE_Data_91_91 = mdb__declarative_analyser__STATE_VARIABLE_Data_69_69;
        mdb__declarative_analyser__STATE_VARIABLE_FieldNames_87_87 = mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65;
      }
    {
      mdb__declarative_analyser__Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_96, 0) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_FieldNames_87_87));
    }
    {
      mdb__declarative_analyser__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_98, 0) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_Data_91_91));
    }
    {
      mdb__declarative_analyser__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_97, 0) = ((MR_Box) (mdb__declarative_analyser__Var_98));
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdb__declarative_analyser__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_95, 0) = ((MR_Box) (mdb__declarative_analyser__Var_96));
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_95, 1) = ((MR_Box) (mdb__declarative_analyser__Var_97));
    }
    {
      mdb__declarative_analyser__InfoMessage_26 = mercury__string__format_table_2_f_0(mdb__declarative_analyser__Var_95, (MR_String) " : ");
    }
    {
      mdb__declarative_analyser__ReasonStr_27 = mdb__declarative_analyser__reason_to_string_1_f_0(mdb__declarative_analyser__Reason_14);
    }
    {
      mdb__declarative_analyser__ReasonSent_28 = mercury__string__f_43_43_2_f_0((MR_String) "The current question was chosen because ", mdb__declarative_analyser__ReasonStr_27);
    }
    {
      mdb__declarative_analyser__WrappedReason_29 = mercury__string__word_wrap_2_f_0(mdb__declarative_analyser__ReasonSent_28, (MR_Integer) 72);
    }
    {
      mercury__io__write_string_4_p_0(mdb__declarative_analyser__OutStream_7, mdb__declarative_analyser__InfoMessage_26);
    }
    {
      mercury__io__write_string_4_p_0(mdb__declarative_analyser__OutStream_7, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(mdb__declarative_analyser__OutStream_7, mdb__declarative_analyser__WrappedReason_29);
    }
    {
      mercury__io__write_string_4_p_0(mdb__declarative_analyser__OutStream_7, (MR_String) "\n");
    }
  }
}

static MR_String MR_CALL 
mdb__declarative_analyser__search_mode_to_string_1_f_0(
  MR_Word mdb__declarative_analyser__SearchMode_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_String mdb__declarative_analyser__Str_4;

    switch (MR_tag((MR_Word) mdb__declarative_analyser__SearchMode_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mdb__declarative_analyser__Str_4 = (MR_String) "top down";
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_analyser__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__SearchMode_3, (MR_Integer) 4)));
          MR_Word mdb__declarative_analyser__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__SearchMode_3, (MR_Integer) 3)));
          MR_Word mdb__declarative_analyser__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__SearchMode_3, (MR_Integer) 2)));
          MR_Word mdb__declarative_analyser__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__SearchMode_3, (MR_Integer) 1)));
          MR_Integer mdb__declarative_analyser__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__SearchMode_3, (MR_Integer) 0)));

          switch (mdb__declarative_analyser__Var_21) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mdb__declarative_analyser__Str_4 = (MR_String) "tracking marked sub-term (using accurate algorithm)";
              break;
            case (MR_Integer) 1:
              mdb__declarative_analyser__Str_4 = (MR_String) "tracking marked sub-term (using fast algorithm)";
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        mdb__declarative_analyser__Str_4 = (MR_String) "binary search on path";
        break;
      case (MR_Integer) 3:
        {
          MR_Word mdb__declarative_analyser__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchMode_3, (MR_Integer) 0)));

          switch (mdb__declarative_analyser__Var_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mdb__declarative_analyser__Str_4 = (MR_String) "divide and query";
              break;
            case (MR_Integer) 1:
              mdb__declarative_analyser__Str_4 = (MR_String) "suspicion divide and query";
              break;
          }
        }
        break;
    }
    return mdb__declarative_analyser__Str_4;
  }
}

static MR_Box MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0_1(
  MR_Box mdb__declarative_analyser__closure_arg,
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
{
  {
    MR_Box mdb__declarative_analyser__wrapper_arg_2;
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;
    MR_String mdb__declarative_analyser__conv0_HeadVar__2_2;

    {
      mdb__declarative_analyser__conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
    mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__2_2));
    return mdb__declarative_analyser__wrapper_arg_2;
  }
}

static MR_String MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0(
  MR_Word mdb__declarative_analyser__Reason_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_String mdb__declarative_analyser__Str_4;

    switch (MR_tag((MR_Word) mdb__declarative_analyser__Reason_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__declarative_analyser__Reason_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mdb__declarative_analyser__Str_4 = (MR_String) "this is the node where the \140dd\' command was issued.";
            break;
          case (MR_Integer) 1:
            mdb__declarative_analyser__Str_4 = (MR_String) "this is the next node in the top-down search.";
            break;
          case (MR_Integer) 2:
            mdb__declarative_analyser__Str_4 = (MR_String) "tracking of the marked subterm had to be aborted here, because of missing tracing information.";
            break;
          case (MR_Integer) 3:
            mdb__declarative_analyser__Str_4 = (MR_String) "tracking of the marked subterm was stopped here, because the binding node lies in a portion of the tree which has been eliminated.";
            break;
          case (MR_Integer) 4:
            mdb__declarative_analyser__Str_4 = (MR_String) "there are no more non-skipped questions left.";
            break;
          case (MR_Integer) 5:
            mdb__declarative_analyser__Str_4 = (MR_String) "this question is being revisited, because of an unsuccessful previous bug search.";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_analyser__PrimOpType_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_3, (MR_Integer) 0)));
          MR_String mdb__declarative_analyser__FileName_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_3, (MR_Integer) 1)));
          MR_Integer mdb__declarative_analyser__LineNo_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_3, (MR_Integer) 2)));
          MR_Word mdb__declarative_analyser__MaybePath_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_3, (MR_Integer) 3)));
          MR_Word mdb__declarative_analyser__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_3, (MR_Integer) 4)));
          MR_Word mdb__declarative_analyser__Eliminated_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_3, (MR_Integer) 5)));
          MR_String mdb__declarative_analyser__PrimOpStr_11;
          MR_String mdb__declarative_analyser__LineNoStr_12;
          MR_Word mdb__declarative_analyser__SymModule_13;
          MR_String mdb__declarative_analyser__Name_14;
          MR_Integer mdb__declarative_analyser__Arity_15;
          MR_Word mdb__declarative_analyser__PredOrFunc_16;
          MR_String mdb__declarative_analyser__PredOrFuncStr_17;
          MR_String mdb__declarative_analyser__Module_18;
          MR_String mdb__declarative_analyser__ArityStr_19;
          MR_String mdb__declarative_analyser__EliminatedSent_20;
          MR_String mdb__declarative_analyser__PathSent_24;
          MR_String mdb__declarative_analyser__Var_67;
          MR_String mdb__declarative_analyser__Var_68;
          MR_String mdb__declarative_analyser__Var_70;
          MR_String mdb__declarative_analyser__Var_71;
          MR_String mdb__declarative_analyser__Var_73;
          MR_String mdb__declarative_analyser__Var_74;
          MR_String mdb__declarative_analyser__Var_76;
          MR_String mdb__declarative_analyser__Var_77;
          MR_String mdb__declarative_analyser__Var_79;
          MR_String mdb__declarative_analyser__Var_80;
          MR_String mdb__declarative_analyser__Var_82;
          MR_String mdb__declarative_analyser__Var_83;
          MR_String mdb__declarative_analyser__Var_85;
          MR_String mdb__declarative_analyser__Var_86;
          MR_String mdb__declarative_analyser__Var_88;

          {
            mdb__declarative_analyser__PrimOpStr_11 = mdb__declarative_edt__primitive_op_type_to_string_1_f_0(mdb__declarative_analyser__PrimOpType_5);
          }
          {
            mdb__declarative_analyser__LineNoStr_12 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__LineNo_7);
          }
          {
            mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_analyser__ProcLabel_9, &mdb__declarative_analyser__SymModule_13, &mdb__declarative_analyser__Name_14, &mdb__declarative_analyser__Arity_15, &mdb__declarative_analyser__PredOrFunc_16);
          }
          switch (mdb__declarative_analyser__PredOrFunc_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              mdb__declarative_analyser__PredOrFuncStr_17 = (MR_String) "function";
              break;
            case (MR_Integer) 0:
              mdb__declarative_analyser__PredOrFuncStr_17 = (MR_String) "predicate";
              break;
          }
          {
            mdb__declarative_analyser__Module_18 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_analyser__SymModule_13);
          }
          {
            mdb__declarative_analyser__ArityStr_19 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__Arity_15);
          }
          switch (mdb__declarative_analyser__Eliminated_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mdb__declarative_analyser__EliminatedSent_20 = (MR_String) "";
              break;
            case (MR_Integer) 1:
              mdb__declarative_analyser__EliminatedSent_20 = (MR_String) " That node was, however, previously eliminated from the bug search.";
              break;
          }
          if ((mdb__declarative_analyser__MaybePath_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            mdb__declarative_analyser__PathSent_24 = (MR_String) "";
          else
            {
              MR_Word mdb__declarative_analyser__Path_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybePath_8, (MR_Integer) 0)));
              MR_Word mdb__declarative_analyser__PathStrings_22;
              MR_String mdb__declarative_analyser__PathStr_23;
              MR_String mdb__declarative_analyser__Var_64;

              {
                mdb__declarative_analyser__PathStrings_22 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdb__declarative_analyser_scalar_common_2[1], mdb__declarative_analyser__Path_21);
              }
              {
                mdb__declarative_analyser__PathStr_23 = mercury__string__join_list_2_f_0((MR_String) "/", mdb__declarative_analyser__PathStrings_22);
              }
              {
                mdb__declarative_analyser__Var_64 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PathStr_23, (MR_String) ".");
              }
              {
                mdb__declarative_analyser__PathSent_24 = mercury__string__f_43_43_2_f_0((MR_String) "The path to the subterm in the atom is ", mdb__declarative_analyser__Var_64);
              }
            }
          {
            mdb__declarative_analyser__Var_88 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PathSent_24, mdb__declarative_analyser__EliminatedSent_20);
          }
          {
            mdb__declarative_analyser__Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "). ", mdb__declarative_analyser__Var_88);
          }
          {
            mdb__declarative_analyser__Var_85 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__LineNoStr_12, mdb__declarative_analyser__Var_86);
          }
          {
            mdb__declarative_analyser__Var_83 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdb__declarative_analyser__Var_85);
          }
          {
            mdb__declarative_analyser__Var_82 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__FileName_6, mdb__declarative_analyser__Var_83);
          }
          {
            mdb__declarative_analyser__Var_80 = mercury__string__f_43_43_2_f_0((MR_String) " (", mdb__declarative_analyser__Var_82);
          }
          {
            mdb__declarative_analyser__Var_79 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__ArityStr_19, mdb__declarative_analyser__Var_80);
          }
          {
            mdb__declarative_analyser__Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_analyser__Var_79);
          }
          {
            mdb__declarative_analyser__Var_76 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Name_14, mdb__declarative_analyser__Var_77);
          }
          {
            mdb__declarative_analyser__Var_74 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_analyser__Var_76);
          }
          {
            mdb__declarative_analyser__Var_73 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Module_18, mdb__declarative_analyser__Var_74);
          }
          {
            mdb__declarative_analyser__Var_71 = mercury__string__f_43_43_2_f_0((MR_String) " ", mdb__declarative_analyser__Var_73);
          }
          {
            mdb__declarative_analyser__Var_70 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PredOrFuncStr_17, mdb__declarative_analyser__Var_71);
          }
          {
            mdb__declarative_analyser__Var_68 = mercury__string__f_43_43_2_f_0((MR_String) " inside the ", mdb__declarative_analyser__Var_70);
          }
          {
            mdb__declarative_analyser__Var_67 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PrimOpStr_11, mdb__declarative_analyser__Var_68);
          }
          {
            mdb__declarative_analyser__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "the marked subterm was bound by the ", mdb__declarative_analyser__Var_67);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer mdb__declarative_analyser__Bottom_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__Reason_3, (MR_Integer) 0)));
          MR_Integer mdb__declarative_analyser__Top_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__Reason_3, (MR_Integer) 1)));
          MR_Integer mdb__declarative_analyser__Split_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__Reason_3, (MR_Integer) 2)));
          MR_String mdb__declarative_analyser__PathLengthStr_28;
          MR_String mdb__declarative_analyser__SubPath1LengthStr_29;
          MR_String mdb__declarative_analyser__SubPath2LengthStr_30;
          MR_Integer mdb__declarative_analyser__Var_37;
          MR_Integer mdb__declarative_analyser__Var_38 = (mdb__declarative_analyser__Bottom_25 - mdb__declarative_analyser__Top_26);
          MR_Integer mdb__declarative_analyser__Var_40;
          MR_Integer mdb__declarative_analyser__Var_41;
          MR_Integer mdb__declarative_analyser__Var_42;
          MR_String mdb__declarative_analyser__Var_45;
          MR_String mdb__declarative_analyser__Var_46;
          MR_String mdb__declarative_analyser__Var_48;
          MR_String mdb__declarative_analyser__Var_49;
          MR_String mdb__declarative_analyser__Var_51;

          mdb__declarative_analyser__Var_37 = (mdb__declarative_analyser__Var_38 + (MR_Integer) 1);
          {
            mdb__declarative_analyser__PathLengthStr_28 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Var_37);
          }
          mdb__declarative_analyser__Var_40 = (mdb__declarative_analyser__Bottom_25 - mdb__declarative_analyser__Split_27);
          {
            mdb__declarative_analyser__SubPath1LengthStr_29 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Var_40);
          }
          mdb__declarative_analyser__Var_42 = (mdb__declarative_analyser__Split_27 - mdb__declarative_analyser__Top_26);
          mdb__declarative_analyser__Var_41 = (mdb__declarative_analyser__Var_42 + (MR_Integer) 1);
          {
            mdb__declarative_analyser__SubPath2LengthStr_30 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Var_41);
          }
          {
            mdb__declarative_analyser__Var_51 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__SubPath2LengthStr_30, (MR_String) ".");
          }
          {
            mdb__declarative_analyser__Var_49 = mercury__string__f_43_43_2_f_0((MR_String) " and ", mdb__declarative_analyser__Var_51);
          }
          {
            mdb__declarative_analyser__Var_48 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__SubPath1LengthStr_29, mdb__declarative_analyser__Var_49);
          }
          {
            mdb__declarative_analyser__Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " into two paths of length ", mdb__declarative_analyser__Var_48);
          }
          {
            mdb__declarative_analyser__Var_45 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PathLengthStr_28, mdb__declarative_analyser__Var_46);
          }
          {
            mdb__declarative_analyser__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides a path of length ", mdb__declarative_analyser__Var_45);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word mdb__declarative_analyser__Weighting_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Reason_3, (MR_Integer) 0)));
          MR_Integer mdb__declarative_analyser__OldWeight_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Reason_3, (MR_Integer) 1)));
          MR_Integer mdb__declarative_analyser__SubtreeWeight_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Reason_3, (MR_Integer) 2)));
          MR_Integer mdb__declarative_analyser__Var_36 = (mdb__declarative_analyser__OldWeight_32 - mdb__declarative_analyser__SubtreeWeight_33);

          {
            mdb__declarative_analyser__Str_4 = mdb__declarative_analyser__weighting_to_reason_string_3_f_0(mdb__declarative_analyser__Weighting_31, mdb__declarative_analyser__Var_36, mdb__declarative_analyser__SubtreeWeight_33);
          }
        }
        break;
    }
    return mdb__declarative_analyser__Str_4;
  }
}

static MR_String MR_CALL 
mdb__declarative_analyser__weighting_to_reason_string_3_f_0(
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
  MR_Integer mdb__declarative_analyser__Weight1_2,
  MR_Integer mdb__declarative_analyser__Weight2_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_String mdb__declarative_analyser__Str_4;

    switch (mdb__declarative_analyser__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String mdb__declarative_analyser__Weight1Str_8;
          MR_String mdb__declarative_analyser__Weight2Str_9;
          MR_String mdb__declarative_analyser__Var_11;
          MR_String mdb__declarative_analyser__Var_12;
          MR_String mdb__declarative_analyser__Var_14;

          {
            mdb__declarative_analyser__Weight1Str_8 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight1_2);
          }
          {
            mdb__declarative_analyser__Weight2Str_9 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight2_3);
          }
          {
            mdb__declarative_analyser__Var_14 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Weight2Str_9, (MR_String) " events each.");
          }
          {
            mdb__declarative_analyser__Var_12 = mercury__string__f_43_43_2_f_0((MR_String) " and ", mdb__declarative_analyser__Var_14);
          }
          {
            mdb__declarative_analyser__Var_11 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Weight1Str_8, mdb__declarative_analyser__Var_12);
          }
          {
            mdb__declarative_analyser__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides the suspect area into two regions of ", mdb__declarative_analyser__Var_11);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String mdb__declarative_analyser__Weight1Str_19;
          MR_String mdb__declarative_analyser__Weight2Str_20;
          MR_String mdb__declarative_analyser__Var_22;
          MR_String mdb__declarative_analyser__Var_24;
          MR_String mdb__declarative_analyser__Var_25;
          MR_String mdb__declarative_analyser__Var_27;

          {
            mdb__declarative_analyser__Weight1Str_19 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight1_2);
          }
          {
            mdb__declarative_analyser__Weight2Str_20 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight2_3);
          }
          {
            mdb__declarative_analyser__Var_27 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Weight2Str_20, (MR_String) ".");
          }
          {
            mdb__declarative_analyser__Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " and\n        ", mdb__declarative_analyser__Var_27);
          }
          {
            mdb__declarative_analyser__Var_24 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Weight1Str_19, mdb__declarative_analyser__Var_25);
          }
          {
            mdb__declarative_analyser__Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "two regions of suspicion ", mdb__declarative_analyser__Var_24);
          }
          {
            mdb__declarative_analyser__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides the suspect area into ", mdb__declarative_analyser__Var_22);
          }
        }
        break;
    }
    return mdb__declarative_analyser__Str_4;
  }
}

void MR_CALL 
mdb__declarative_analyser__revise_analysis_4_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59,
  MR_Box mdb__declarative_analyser__Store_5,
  MR_Word * mdb__declarative_analyser__Response_6,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_14)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__SearchSpace_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
    MR_Word mdb__declarative_analyser__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
    MR_Word mdb__declarative_analyser__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
    MR_Word mdb__declarative_analyser__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
    MR_Word mdb__declarative_analyser__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
    MR_Word mdb__declarative_analyser__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
    MR_Integer mdb__declarative_analyser__RootId_9;
    MR_Word mdb__declarative_analyser__TypeInfo_61_61;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_61_61);
    }
    {
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_61_61, mdb__declarative_analyser__SearchSpace_8, &mdb__declarative_analyser__RootId_9);
    }
    if (mdb__declarative_analyser__succeeded)
      {
        MR_Word mdb__declarative_analyser__TypeInfo_63_63;
        MR_Box mdb__declarative_analyser__Node_10;
        MR_Word mdb__declarative_analyser__Question_11;
        MR_Word mdb__declarative_analyser__SearchSpace1_12;
        MR_Word mdb__declarative_analyser__Var_15;
        MR_Word mdb__declarative_analyser__Var_18;
        MR_Word mdb__declarative_analyser__Var_19;
        MR_Word mdb__declarative_analyser__Var_37;
        MR_Word mdb__declarative_analyser__Var_39;
        MR_Word mdb__declarative_analyser__Var_41;
        MR_Word mdb__declarative_analyser__Var_42;
        MR_Word mdb__declarative_analyser__Var_43;
        MR_Word mdb__declarative_analyser__Var_45;
        MR_Word mdb__declarative_analyser__Var_47;
        MR_Word mdb__declarative_analyser__Var_31;
        MR_Word mdb__declarative_analyser__Var_32;
        MR_Word mdb__declarative_analyser__Var_33;
        MR_Word mdb__declarative_analyser__Var_34;
        MR_Word mdb__declarative_analyser__Var_35;
        void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box mdb__declarative_analyser__conv1_Question_11;
        MR_Word mdb__declarative_analyser__Var_36;
        MR_Word mdb__declarative_analyser__Var_38;
        MR_Word mdb__declarative_analyser__Var_40;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_63_63);
        }
        mdb__declarative_analyser__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
        mdb__declarative_analyser__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
        mdb__declarative_analyser__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
        mdb__declarative_analyser__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
        mdb__declarative_analyser__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
        mdb__declarative_analyser__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
        {
          mdb__declarative_analyser__Node_10 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_63_63, mdb__declarative_analyser__Var_15, mdb__declarative_analyser__RootId_9);
        }
        mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59), mdb__declarative_analyser__Store_5, mdb__declarative_analyser__Node_10, &mdb__declarative_analyser__conv1_Question_11);
        }
        mdb__declarative_analyser__Question_11 = ((MR_Word) mdb__declarative_analyser__conv1_Question_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdb__declarative_analyser__Response_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__Question_11));
        }
        {
          mdb__declarative_edt__revise_root_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, mdb__declarative_analyser__Store_5, mdb__declarative_analyser__SearchSpace_8, &mdb__declarative_analyser__SearchSpace1_12);
        }
        mdb__declarative_analyser__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
        mdb__declarative_analyser__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
        mdb__declarative_analyser__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
        mdb__declarative_analyser__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
        mdb__declarative_analyser__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
        mdb__declarative_analyser__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
        {
          mdb__declarative_analyser__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_19, 0) = ((MR_Box) (mdb__declarative_analyser__RootId_9));
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
        }
        {
          mdb__declarative_analyser__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_18, 0) = ((MR_Box) (mdb__declarative_analyser__Var_19));
        }
        mdb__declarative_analyser__Var_42 = mdb__declarative_analyser__SearchSpace1_12;
        mdb__declarative_analyser__Var_43 = mdb__declarative_analyser__Var_37;
        mdb__declarative_analyser__Var_45 = mdb__declarative_analyser__Var_39;
        mdb__declarative_analyser__Var_47 = mdb__declarative_analyser__Var_41;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__Var_42));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_43));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__Var_45));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__Var_45));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__Var_18));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__Var_47));
        }
      }
    else
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[11])));
          return;
        }
      }
  }
}

void MR_CALL 
mdb__declarative_analyser__change_search_mode_6_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55,
  MR_Box mdb__declarative_analyser__Store_7,
  MR_Word mdb__declarative_analyser__Oracle_8,
  MR_Word mdb__declarative_analyser__UserMode_9,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_16,
  MR_Word * mdb__declarative_analyser__Response_11)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32;

    switch (mdb__declarative_analyser__UserMode_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
        {
          MR_Word mdb__declarative_analyser__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 4)));
          MR_Word mdb__declarative_analyser__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 0)));
          MR_Word mdb__declarative_analyser__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 5)));
          MR_Word mdb__declarative_analyser__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 3)));
          MR_Word mdb__declarative_analyser__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 2)));
          MR_Word mdb__declarative_analyser__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 1)));

          if ((mdb__declarative_analyser__Var_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[9])));
                return;
              }
            }
          else
            {
              MR_Word mdb__declarative_analyser__TypeInfo_57_57;
              MR_Integer mdb__declarative_analyser__SuspectId_12;
              MR_Word mdb__declarative_analyser__SearchMode_14;
              MR_Word mdb__declarative_analyser__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_60, (MR_Integer) 0)));
              MR_Integer mdb__declarative_analyser__TopId_69;
              MR_Integer mdb__declarative_analyser__BottomId_70;
              MR_Word mdb__declarative_analyser__Var_13;
              MR_Integer mdb__declarative_analyser__RootId_68;
              MR_Word mdb__declarative_analyser__Path_71;
              MR_Word mdb__declarative_analyser__Var_44;
              MR_Word mdb__declarative_analyser__Var_45;
              MR_Word mdb__declarative_analyser__Var_47;
              MR_Word mdb__declarative_analyser__Var_48;
              MR_Word mdb__declarative_analyser__Var_49;
              MR_Word mdb__declarative_analyser__Var_46;

              mdb__declarative_analyser__SuspectId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_22, (MR_Integer) 0)));
              mdb__declarative_analyser__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_22, (MR_Integer) 1)));
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_57_57);
              }
              {
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_57_57, mdb__declarative_analyser__Var_64, &mdb__declarative_analyser__RootId_68);
              }
              if (mdb__declarative_analyser__succeeded)
                {
                  mdb__declarative_analyser__TopId_69 = mdb__declarative_analyser__RootId_68;
                  mdb__declarative_analyser__BottomId_70 = mdb__declarative_analyser__SuspectId_12;
                }
              else
                {
                  {
                    mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_57_57, mdb__declarative_analyser__Var_64, &mdb__declarative_analyser__TopId_69);
                  }
                  mdb__declarative_analyser__BottomId_70 = mdb__declarative_analyser__SuspectId_12;
                }
              {
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__get_path_4_p_0(mdb__declarative_analyser__TypeInfo_57_57, mdb__declarative_analyser__Var_64, mdb__declarative_analyser__BottomId_70, mdb__declarative_analyser__TopId_69, &mdb__declarative_analyser__Path_71);
              }
              if (mdb__declarative_analyser__succeeded)
                {
                  MR_Word mdb__declarative_analyser__TypeCtorInfo_19_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                  MR_ArrayPtr mdb__declarative_analyser__PathArray_72;
                  MR_Integer mdb__declarative_analyser__Top_73;
                  MR_Integer mdb__declarative_analyser__Bottom_74;
                  MR_Word mdb__declarative_analyser__Var_75;
                  MR_ArrayPtr mdb__declarative_analyser__conv0_PathArray_72;

                  {
                    mdb__declarative_analyser__conv0_PathArray_72 = mercury__array__from_list_1_f_0(mdb__declarative_analyser__TypeCtorInfo_19_79, mdb__declarative_analyser__Path_71);
                  }
                  mdb__declarative_analyser__PathArray_72 = (MR_ArrayPtr) mdb__declarative_analyser__conv0_PathArray_72;
                  {
                    mercury__array__bounds_3_p_0(mdb__declarative_analyser__TypeCtorInfo_19_79, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_72, &mdb__declarative_analyser__Top_73, &mdb__declarative_analyser__Bottom_74);
                  }
                  {
                    mdb__declarative_analyser__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_75, 0) = ((MR_Box) (mdb__declarative_analyser__Top_73));
                    MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_75, 1) = ((MR_Box) (mdb__declarative_analyser__Bottom_74));
                  }
                  {
                    mdb__declarative_analyser__SearchMode_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchMode_14, 0) = ((MR_Box) (mdb__declarative_analyser__PathArray_72));
                    MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchMode_14, 1) = ((MR_Box) (mdb__declarative_analyser__Var_75));
                    MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchMode_14, 2) = ((MR_Box) (mdb__declarative_analyser__Bottom_74));
                  }
                }
              else
                {
                  {
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[10])));
                    return;
                  }
                }
              mdb__declarative_analyser__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 0)));
              mdb__declarative_analyser__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 1)));
              mdb__declarative_analyser__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 2)));
              mdb__declarative_analyser__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 3)));
              mdb__declarative_analyser__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 4)));
              mdb__declarative_analyser__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 5)));
              {
                mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 0) = ((MR_Box) (mdb__declarative_analyser__Var_44));
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__Var_45));
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 2) = ((MR_Box) (mdb__declarative_analyser__SearchMode_14));
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 3) = ((MR_Box) (mdb__declarative_analyser__Var_47));
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 4) = ((MR_Box) (mdb__declarative_analyser__Var_48));
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 5) = ((MR_Box) (mdb__declarative_analyser__Var_49));
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mdb__declarative_analyser__set_fallback_search_mode_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_3[0]), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mdb__declarative_analyser__set_fallback_search_mode_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_3[1]), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          {
            mdb__declarative_analyser__set_fallback_search_mode_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32);
          }
        }
        break;
    }
    {
      mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_11, mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, mdb__declarative_analyser__STATE_VARIABLE_Analyser_16);
    }
  }
}

void MR_CALL 
mdb__declarative_analyser__continue_analysis_6_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_34,
  MR_Box mdb__declarative_analyser__Store_7,
  MR_Word mdb__declarative_analyser__Oracle_8,
  MR_Word mdb__declarative_analyser__Answer_9,
  MR_Word * mdb__declarative_analyser__Response_10,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_15)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22;
    MR_Word mdb__declarative_analyser__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 4)));
    MR_Word mdb__declarative_analyser__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 5)));
    MR_Word mdb__declarative_analyser__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 3)));
    MR_Word mdb__declarative_analyser__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 2)));
    MR_Word mdb__declarative_analyser__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 1)));
    MR_Word mdb__declarative_analyser__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 0)));

    if ((mdb__declarative_analyser__Var_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[8])));
          return;
        }
      }
    else
      {
        MR_Integer mdb__declarative_analyser__SuspectId_12;
        MR_Word mdb__declarative_analyser__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_37, (MR_Integer) 0)));
        MR_Word mdb__declarative_analyser__Var_13;

        mdb__declarative_analyser__SuspectId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_21, (MR_Integer) 0)));
        mdb__declarative_analyser__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_21, (MR_Integer) 1)));
        {
          mdb__declarative_analyser__process_answer_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_34, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Answer_9, mdb__declarative_analyser__SuspectId_12, mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22);
        }
      }
    {
      mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_34, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_10, mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, mdb__declarative_analyser__STATE_VARIABLE_Analyser_15);
    }
  }
}

static void MR_CALL 
mdb__declarative_analyser__process_answer_5_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137,
  MR_Box mdb__declarative_analyser__Store_6,
  MR_Word mdb__declarative_analyser__Answer_7,
  MR_Integer mdb__declarative_analyser__SuspectId_8,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_25)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_analyser__Answer_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mdb__declarative_analyser__Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Answer_7, (MR_Integer) 1)));
          MR_Word mdb__declarative_analyser__Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
          MR_Box mdb__declarative_analyser__Var_157 = (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Answer_7, (MR_Integer) 0));
          MR_Word mdb__declarative_analyser__Var_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
          MR_Word mdb__declarative_analyser__Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
          MR_Word mdb__declarative_analyser__Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
          MR_Word mdb__declarative_analyser__Var_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
          MR_Word mdb__declarative_analyser__Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));

          switch (mdb__declarative_analyser__Var_156) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdb__declarative_analyser__TypeInfo_141_141;
                MR_Word mdb__declarative_analyser__SearchSpace_48;
                MR_Word mdb__declarative_analyser__Var_82;
                MR_Word mdb__declarative_analyser__Var_83;
                MR_Word mdb__declarative_analyser__Var_84;
                MR_Word mdb__declarative_analyser__Var_85;
                MR_Word mdb__declarative_analyser__Var_86;
                MR_Word mdb__declarative_analyser__Var_81;

                {
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_141_141);
                }
                {
                  mdb__declarative_edt__assert_suspect_is_correct_3_p_0(mdb__declarative_analyser__TypeInfo_141_141, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__Var_163, &mdb__declarative_analyser__SearchSpace_48);
                }
                mdb__declarative_analyser__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
                mdb__declarative_analyser__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
                mdb__declarative_analyser__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
                mdb__declarative_analyser__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
                mdb__declarative_analyser__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
                mdb__declarative_analyser__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_48));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_82));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__Var_83));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__Var_84));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__Var_85));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__Var_86));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mdb__declarative_analyser__TypeInfo_145_145;
                MR_Word mdb__declarative_analyser__SearchSpace_50;
                MR_Word mdb__declarative_analyser__Var_104;
                MR_Word mdb__declarative_analyser__Var_105;
                MR_Word mdb__declarative_analyser__Var_106;
                MR_Word mdb__declarative_analyser__Var_107;
                MR_Word mdb__declarative_analyser__Var_108;
                MR_Word mdb__declarative_analyser__Var_103;

                {
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_145_145);
                }
                {
                  mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(mdb__declarative_analyser__TypeInfo_145_145, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__Var_163, &mdb__declarative_analyser__SearchSpace_50);
                }
                mdb__declarative_analyser__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
                mdb__declarative_analyser__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
                mdb__declarative_analyser__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
                mdb__declarative_analyser__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
                mdb__declarative_analyser__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
                mdb__declarative_analyser__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_50));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_104));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__Var_105));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__Var_106));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__Var_107));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__Var_108));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mdb__declarative_analyser__TypeInfo_143_143;
                MR_Word mdb__declarative_analyser__SearchSpace_49;
                MR_Word mdb__declarative_analyser__Var_93;
                MR_Word mdb__declarative_analyser__Var_94;
                MR_Word mdb__declarative_analyser__Var_95;
                MR_Word mdb__declarative_analyser__Var_96;
                MR_Word mdb__declarative_analyser__Var_97;
                MR_Word mdb__declarative_analyser__Var_92;

                {
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_143_143);
                }
                {
                  mdb__declarative_edt__assert_suspect_is_inadmissible_3_p_0(mdb__declarative_analyser__TypeInfo_143_143, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__Var_163, &mdb__declarative_analyser__SearchSpace_49);
                }
                mdb__declarative_analyser__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
                mdb__declarative_analyser__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
                mdb__declarative_analyser__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
                mdb__declarative_analyser__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
                mdb__declarative_analyser__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
                mdb__declarative_analyser__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_49));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_93));
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__Var_94));
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__Var_95));
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__Var_96));
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__Var_97));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mdb__declarative_analyser__Node_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 0));
          MR_Word mdb__declarative_analyser__ArgPos_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 1)));
          MR_Word mdb__declarative_analyser__TermPath_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 2)));
          MR_Word mdb__declarative_analyser__HowTrack_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 3)))) & (MR_Integer) 1);
          MR_Word mdb__declarative_analyser__ShouldAssertInvalid_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word mdb__declarative_analyser__DebugOrigin_22;
          MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26;
          MR_Word mdb__declarative_analyser__Var_27;
          MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30;
          MR_Word mdb__declarative_analyser__Var_32;
          MR_Word mdb__declarative_analyser__Var_21;
          MR_Word mdb__declarative_analyser__Var_109;
          MR_Word mdb__declarative_analyser__Var_110;
          MR_Word mdb__declarative_analyser__Var_111;
          MR_Word mdb__declarative_analyser__Var_112;
          MR_Word mdb__declarative_analyser__Var_113;
          MR_Word mdb__declarative_analyser__Var_114;
          MR_Word mdb__declarative_analyser__Var_131;
          MR_Word mdb__declarative_analyser__Var_132;
          MR_Word mdb__declarative_analyser__Var_134;
          MR_Word mdb__declarative_analyser__Var_135;
          MR_Word mdb__declarative_analyser__Var_136;
          MR_Word mdb__declarative_analyser__Var_133;

          {
            mdb__declarative_edt__edt_dependency_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Node_16, mdb__declarative_analyser__ArgPos_17, mdb__declarative_analyser__TermPath_18, &mdb__declarative_analyser__Var_21, &mdb__declarative_analyser__DebugOrigin_22);
          }
          {
            mdb__declarative_analyser__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_27, 0) = ((MR_Box) (mdb__declarative_analyser__DebugOrigin_22));
          }
          mdb__declarative_analyser__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
          mdb__declarative_analyser__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
          mdb__declarative_analyser__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
          mdb__declarative_analyser__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
          mdb__declarative_analyser__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
          mdb__declarative_analyser__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
          {
            mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 0) = ((MR_Box) (mdb__declarative_analyser__Var_109));
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 1) = ((MR_Box) (mdb__declarative_analyser__Var_110));
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 2) = ((MR_Box) (mdb__declarative_analyser__Var_111));
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 3) = ((MR_Box) (mdb__declarative_analyser__Var_112));
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 4) = ((MR_Box) (mdb__declarative_analyser__Var_113));
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 5) = ((MR_Box) (mdb__declarative_analyser__Var_27));
          }
          switch (mdb__declarative_analyser__ShouldAssertInvalid_20) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mdb__declarative_analyser__Mode_23;
                MR_Word mdb__declarative_analyser__SearchSpace_51;
                MR_Word mdb__declarative_analyser__Var_150;
                MR_Word mdb__declarative_analyser__Var_151;
                MR_Word mdb__declarative_analyser__Var_152;
                MR_Word mdb__declarative_analyser__Var_153;
                MR_Word mdb__declarative_analyser__Var_154;
                MR_Word mdb__declarative_analyser__Var_155;

                {
                  mdb__declarative_edt__edt_subterm_mode_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Node_16, mdb__declarative_analyser__ArgPos_17, mdb__declarative_analyser__TermPath_18, &mdb__declarative_analyser__Mode_23);
                }
                mdb__declarative_analyser__Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 0)));
                mdb__declarative_analyser__Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 1)));
                mdb__declarative_analyser__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 2)));
                mdb__declarative_analyser__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 3)));
                mdb__declarative_analyser__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 4)));
                mdb__declarative_analyser__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 5)));
                switch (mdb__declarative_analyser__Mode_23) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word mdb__declarative_analyser__TypeInfo_147_147;

                      {
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_147_147);
                      }
                      {
                        mdb__declarative_edt__assert_suspect_is_inadmissible_3_p_0(mdb__declarative_analyser__TypeInfo_147_147, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__Var_155, &mdb__declarative_analyser__SearchSpace_51);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word mdb__declarative_analyser__TypeInfo_149_149;

                      {
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_149_149);
                      }
                      {
                        mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(mdb__declarative_analyser__TypeInfo_149_149, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__Var_155, &mdb__declarative_analyser__SearchSpace_51);
                      }
                    }
                    break;
                }
                {
                  mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_51));
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 1) = ((MR_Box) (mdb__declarative_analyser__Var_154));
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 2) = ((MR_Box) (mdb__declarative_analyser__Var_153));
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 3) = ((MR_Box) (mdb__declarative_analyser__Var_152));
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 4) = ((MR_Box) (mdb__declarative_analyser__Var_151));
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 5) = ((MR_Box) (mdb__declarative_analyser__Var_150));
                }
              }
              break;
            case (MR_Integer) 1:
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26;
              break;
          }
          {
            mdb__declarative_analyser__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_32, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_8));
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_32, 1) = ((MR_Box) (mdb__declarative_analyser__ArgPos_17));
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_32, 2) = ((MR_Box) (mdb__declarative_analyser__TermPath_18));
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_32, 4) = ((MR_Box) (mdb__declarative_analyser__HowTrack_19));
          }
          mdb__declarative_analyser__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 0)));
          mdb__declarative_analyser__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 1)));
          mdb__declarative_analyser__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 2)));
          mdb__declarative_analyser__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 3)));
          mdb__declarative_analyser__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 4)));
          mdb__declarative_analyser__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 5)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__Var_131));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_132));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__Var_32));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__Var_134));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__Var_135));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__Var_136));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_analyser__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
          MR_Word mdb__declarative_analyser__SearchSpace_47;
          MR_Word mdb__declarative_analyser__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
          MR_Word mdb__declarative_analyser__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
          MR_Word mdb__declarative_analyser__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
          MR_Word mdb__declarative_analyser__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
          MR_Word mdb__declarative_analyser__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
          MR_Word mdb__declarative_analyser__Var_71;
          MR_Word mdb__declarative_analyser__Var_72;
          MR_Word mdb__declarative_analyser__Var_73;
          MR_Word mdb__declarative_analyser__Var_74;
          MR_Word mdb__declarative_analyser__Var_75;
          MR_Word mdb__declarative_analyser__Var_70;

          {
            mdb__declarative_edt__ignore_suspect_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__Var_43, &mdb__declarative_analyser__SearchSpace_47);
          }
          mdb__declarative_analyser__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
          mdb__declarative_analyser__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
          mdb__declarative_analyser__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
          mdb__declarative_analyser__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
          mdb__declarative_analyser__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
          mdb__declarative_analyser__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_47));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_71));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__Var_72));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__Var_73));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__Var_74));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__Var_75));
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word mdb__declarative_analyser__TypeInfo_139_139;
          MR_Word mdb__declarative_analyser__SearchSpace_11;
          MR_Word mdb__declarative_analyser__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
          MR_Word mdb__declarative_analyser__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
          MR_Word mdb__declarative_analyser__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
          MR_Word mdb__declarative_analyser__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
          MR_Word mdb__declarative_analyser__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
          MR_Word mdb__declarative_analyser__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
          MR_Word mdb__declarative_analyser__Var_60;
          MR_Word mdb__declarative_analyser__Var_61;
          MR_Word mdb__declarative_analyser__Var_62;
          MR_Word mdb__declarative_analyser__Var_63;
          MR_Word mdb__declarative_analyser__Var_64;
          MR_Word mdb__declarative_analyser__Var_59;

          {
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_139_139);
          }
          {
            mdb__declarative_edt__skip_suspect_3_p_0(mdb__declarative_analyser__TypeInfo_139_139, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__Var_45, &mdb__declarative_analyser__SearchSpace_11);
          }
          mdb__declarative_analyser__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
          mdb__declarative_analyser__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
          mdb__declarative_analyser__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
          mdb__declarative_analyser__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
          mdb__declarative_analyser__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
          mdb__declarative_analyser__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_11));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_60));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__Var_61));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__Var_62));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__Var_63));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__Var_64));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mdb__declarative_analyser__start_or_resume_analysis_6_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76,
  MR_Box mdb__declarative_analyser__Store_7,
  MR_Word mdb__declarative_analyser__Oracle_8,
  MR_Word mdb__declarative_analyser__AnalysisType_9,
  MR_Word * mdb__declarative_analyser__Response_10,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_23)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    if ((mdb__declarative_analyser__AnalysisType_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mdb__declarative_analyser__Response0_21;

        {
          mdb__declarative_analyser__succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, &mdb__declarative_analyser__Response0_21);
        }
        if (mdb__declarative_analyser__succeeded)
          {
            *mdb__declarative_analyser__Response_10 = mdb__declarative_analyser__Response0_21;
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_23 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22;
          }
        else
          {
            mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_10, mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, mdb__declarative_analyser__STATE_VARIABLE_Analyser_23);
          }
      }
    else
      {
        MR_Box mdb__declarative_analyser__Node_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__AnalysisType_9, (MR_Integer) 0));
        MR_Word mdb__declarative_analyser__MaybeRequireExplicit_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 1)));
        MR_Word mdb__declarative_analyser__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 0)));
        MR_Word mdb__declarative_analyser__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 2)));
        MR_Word mdb__declarative_analyser__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 3)));
        MR_Word mdb__declarative_analyser__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 4)));
        MR_Word mdb__declarative_analyser__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 5)));

        if ((mdb__declarative_analyser__MaybeRequireExplicit_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mdb__declarative_analyser__TypeInfo_80_80;
            MR_Word mdb__declarative_analyser__TypeInfo_81_81;
            MR_Word mdb__declarative_analyser__MaybeWeighting_18;
            MR_Integer mdb__declarative_analyser__TopMostId_19;
            MR_Word mdb__declarative_analyser__Question_20;
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25;
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27;
            MR_Word mdb__declarative_analyser__Var_29;
            MR_Word mdb__declarative_analyser__Var_30;
            MR_Word mdb__declarative_analyser__SearchSpace_36;
            MR_Word mdb__declarative_analyser__FallBack_85;
            MR_Word mdb__declarative_analyser__Var_87;
            MR_Word mdb__declarative_analyser__Var_92;
            MR_Word mdb__declarative_analyser__Var_93;
            MR_Word mdb__declarative_analyser__Var_94;
            MR_Word mdb__declarative_analyser__Var_95;
            MR_Word mdb__declarative_analyser__Var_96;
            MR_Word mdb__declarative_analyser__Var_65;
            MR_Word mdb__declarative_analyser__Var_66;
            MR_Word mdb__declarative_analyser__Var_67;
            MR_Word mdb__declarative_analyser__Var_68;
            MR_Word mdb__declarative_analyser__Var_69;
            MR_Word mdb__declarative_analyser__Var_64;
            MR_Word mdb__declarative_analyser__Var_70;
            MR_Word mdb__declarative_analyser__Var_71;
            MR_Word mdb__declarative_analyser__Var_72;
            MR_Word mdb__declarative_analyser__Var_73;
            MR_Word mdb__declarative_analyser__Var_75;
            MR_Word mdb__declarative_analyser__Var_74;
            void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
            MR_Box mdb__declarative_analyser__conv1_Question_20;

            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_80_80);
            }
            mdb__declarative_analyser__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 0)));
            mdb__declarative_analyser__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 1)));
            mdb__declarative_analyser__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 2)));
            mdb__declarative_analyser__FallBack_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 3)));
            mdb__declarative_analyser__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 4)));
            mdb__declarative_analyser__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 5)));
            {
              mdb__declarative_analyser__Var_87 = mdb__declarative_edt__empty_search_space_0_f_0(mdb__declarative_analyser__TypeInfo_80_80);
            }
            {
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 0) = ((MR_Box) (mdb__declarative_analyser__Var_87));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 2) = ((MR_Box) (mdb__declarative_analyser__FallBack_85));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 3) = ((MR_Box) (mdb__declarative_analyser__FallBack_85));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mdb__declarative_analyser__MaybeWeighting_18 = mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_f_0(mdb__declarative_analyser__FallBack_85);
            }
            {
              mdb__declarative_edt__initialise_search_space_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__MaybeWeighting_18, mdb__declarative_analyser__Node_12, &mdb__declarative_analyser__SearchSpace_36);
            }
            mdb__declarative_analyser__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 0)));
            mdb__declarative_analyser__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 1)));
            mdb__declarative_analyser__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 2)));
            mdb__declarative_analyser__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 3)));
            mdb__declarative_analyser__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 4)));
            mdb__declarative_analyser__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 5)));
            {
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_36));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 1) = ((MR_Box) (mdb__declarative_analyser__Var_65));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 2) = ((MR_Box) (mdb__declarative_analyser__Var_66));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 3) = ((MR_Box) (mdb__declarative_analyser__Var_67));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 4) = ((MR_Box) (mdb__declarative_analyser__Var_68));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 5) = ((MR_Box) (mdb__declarative_analyser__Var_69));
            }
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_81_81);
            }
            {
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_81_81, mdb__declarative_analyser__SearchSpace_36, &mdb__declarative_analyser__TopMostId_19);
            }
            {
              mdb__declarative_analyser__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_30, 0) = ((MR_Box) (mdb__declarative_analyser__TopMostId_19));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              mdb__declarative_analyser__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_29, 0) = ((MR_Box) (mdb__declarative_analyser__Var_30));
            }
            mdb__declarative_analyser__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 0)));
            mdb__declarative_analyser__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 1)));
            mdb__declarative_analyser__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 2)));
            mdb__declarative_analyser__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 3)));
            mdb__declarative_analyser__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 4)));
            mdb__declarative_analyser__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 5)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              *mdb__declarative_analyser__STATE_VARIABLE_Analyser_23 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__Var_70));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_71));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__Var_72));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__Var_73));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__Var_29));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__Var_75));
            }
            mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 0)), (MR_Integer) 5)));
            {
              mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Node_12, &mdb__declarative_analyser__conv1_Question_20);
            }
            mdb__declarative_analyser__Question_20 = ((MR_Word) mdb__declarative_analyser__conv1_Question_20);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mdb__declarative_analyser__Response_10 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__Question_20));
            }
          }
        else
          {
            MR_Word mdb__declarative_analyser__TreeType_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeRequireExplicit_13, (MR_Integer) 0)));
            MR_Word mdb__declarative_analyser__SearchSpace_16;
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33;
            MR_Word mdb__declarative_analyser__Var_49;
            MR_Word mdb__declarative_analyser__Var_50;
            MR_Word mdb__declarative_analyser__Var_51;
            MR_Word mdb__declarative_analyser__Var_52;

            if ((mdb__declarative_analyser__TreeType_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mdb__declarative_edt__incorporate_explicit_supertree_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Node_12, mdb__declarative_analyser__Var_37, &mdb__declarative_analyser__SearchSpace_16);
              }
            else
              {
                MR_Word mdb__declarative_analyser__TypeInfo_78_78;
                MR_Integer mdb__declarative_analyser__SuspectId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__TreeType_14, (MR_Integer) 0)));

                {
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_78_78);
                }
                {
                  mdb__declarative_edt__incorporate_explicit_subtree_4_p_0(mdb__declarative_analyser__TypeInfo_78_78, mdb__declarative_analyser__SuspectId_17, mdb__declarative_analyser__Node_12, mdb__declarative_analyser__Var_37, &mdb__declarative_analyser__SearchSpace_16);
                }
              }
            mdb__declarative_analyser__Var_49 = mdb__declarative_analyser__Var_38;
            mdb__declarative_analyser__Var_50 = mdb__declarative_analyser__Var_39;
            mdb__declarative_analyser__Var_51 = mdb__declarative_analyser__Var_40;
            mdb__declarative_analyser__Var_52 = mdb__declarative_analyser__Var_41;
            {
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_16));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 2) = ((MR_Box) (mdb__declarative_analyser__Var_49));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 3) = ((MR_Box) (mdb__declarative_analyser__Var_50));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 4) = ((MR_Box) (mdb__declarative_analyser__Var_51));
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 5) = ((MR_Box) (mdb__declarative_analyser__Var_52));
            }
            {
              mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_10, mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, mdb__declarative_analyser__STATE_VARIABLE_Analyser_23);
            }
          }
      }
  }
}

static void MR_CALL 
mdb__declarative_analyser__decide_analyser_response_5_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63,
  MR_Box mdb__declarative_analyser__Store_6,
  MR_Word mdb__declarative_analyser__Oracle_7,
  MR_Word * mdb__declarative_analyser__Response_8,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_14)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__NewMode_11;
    MR_Word mdb__declarative_analyser__SearchResponse_12;
    MR_Word mdb__declarative_analyser__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_17;
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_18_18;
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22;
    MR_Word mdb__declarative_analyser__Var_24;
    MR_Word mdb__declarative_analyser__Var_32;
    MR_Word mdb__declarative_analyser__Var_33;
    MR_Word mdb__declarative_analyser__Var_47;
    MR_Word mdb__declarative_analyser__Var_49;
    MR_Word mdb__declarative_analyser__Var_50;
    MR_Word mdb__declarative_analyser__Var_51;
    MR_Word mdb__declarative_analyser__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
    MR_Word mdb__declarative_analyser__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
    MR_Word mdb__declarative_analyser__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
    MR_Word mdb__declarative_analyser__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
    MR_Word mdb__declarative_analyser__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
    MR_Word mdb__declarative_analyser__Var_31;
    MR_Word mdb__declarative_analyser__Var_34;
    MR_Word mdb__declarative_analyser__Var_35;
    MR_Word mdb__declarative_analyser__Var_46;
    MR_Word mdb__declarative_analyser__Var_48;
    MR_Word mdb__declarative_analyser__Var_58;
    MR_Word mdb__declarative_analyser__Var_59;
    MR_Word mdb__declarative_analyser__Var_60;
    MR_Word mdb__declarative_analyser__Var_61;
    MR_Word mdb__declarative_analyser__Var_62;

    {
      mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Var_15, (MR_String) "Start of decide_analyser_response");
    }
    mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
    mdb__declarative_analyser__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
    mdb__declarative_analyser__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
    mdb__declarative_analyser__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
    mdb__declarative_analyser__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
    mdb__declarative_analyser__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
    {
      mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_17, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_18_18, mdb__declarative_analyser__Var_32, mdb__declarative_analyser__Var_33, &mdb__declarative_analyser__NewMode_11, &mdb__declarative_analyser__SearchResponse_12);
    }
    mdb__declarative_analyser__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
    mdb__declarative_analyser__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
    mdb__declarative_analyser__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
    mdb__declarative_analyser__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
    mdb__declarative_analyser__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
    mdb__declarative_analyser__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
    {
      mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 0) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_18_18));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 1) = ((MR_Box) (mdb__declarative_analyser__Var_47));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 2) = ((MR_Box) (mdb__declarative_analyser__NewMode_11));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 3) = ((MR_Box) (mdb__declarative_analyser__Var_49));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 4) = ((MR_Box) (mdb__declarative_analyser__Var_50));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 5) = ((MR_Box) (mdb__declarative_analyser__Var_51));
    }
    {
      mdb__declarative_analyser__handle_search_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__SearchResponse_12, mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, mdb__declarative_analyser__Response_8);
    }
    mdb__declarative_analyser__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 0)));
    mdb__declarative_analyser__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 1)));
    mdb__declarative_analyser__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 2)));
    mdb__declarative_analyser__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 3)));
    mdb__declarative_analyser__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 4)));
    mdb__declarative_analyser__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 5)));
    {
      mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Var_24, (MR_String) "End of decide_analyser_response");
    }
  }
}

static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70,
  MR_Box mdb__declarative_analyser__Store_15,
  MR_Word mdb__declarative_analyser__Oracle_16,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45,
  MR_Word mdb__declarative_analyser__HowTrack_18,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47,
  MR_Word mdb__declarative_analyser__LastUnknown_20,
  MR_Integer mdb__declarative_analyser__SuspectId_21,
  MR_Word mdb__declarative_analyser__ArgPos_22,
  MR_Word mdb__declarative_analyser__TermPath_23,
  MR_Word mdb__declarative_analyser__FallBackSearchMode_24,
  MR_Word * mdb__declarative_analyser__NewMode_25,
  MR_Word * mdb__declarative_analyser__SearchResponse_26)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_analyser__succeeded;
        MR_Word mdb__declarative_analyser__FindOriginResponse_27;
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;

        {
          mdb__declarative_edt__find_subterm_origin_11_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__SuspectId_21, mdb__declarative_analyser__ArgPos_22, mdb__declarative_analyser__TermPath_23, mdb__declarative_analyser__HowTrack_18, mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46, &mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, &mdb__declarative_analyser__FindOriginResponse_27);
        }
        switch (MR_tag((MR_Word) mdb__declarative_analyser__FindOriginResponse_27)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(mdb__declarative_analyser__FindOriginResponse_27)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Integer mdb__declarative_analyser__Unknown_64;
                  MR_Word mdb__declarative_analyser__TypeInfo_80_80;
                  MR_Integer mdb__declarative_analyser__PolyConst2_79;

                  mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__LastUnknown_20)) == (MR_mktag((MR_Integer) 1)));
                  if (mdb__declarative_analyser__succeeded)
                    {
                      mdb__declarative_analyser__Unknown_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__LastUnknown_20, (MR_Integer) 0)));
                      mdb__declarative_analyser__PolyConst2_79 = (MR_Integer) 2;
                      {
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__PolyConst2_79, &mdb__declarative_analyser__TypeInfo_80_80);
                      }
                      {
                        mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_80_80, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__Unknown_64);
                      }
                    }
                  if (mdb__declarative_analyser__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mdb__declarative_analyser__SearchResponse_26 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_64));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                      }
                      *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
                      *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
                    }
                  else
                    {
                      mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__NewMode_25, mdb__declarative_analyser__SearchResponse_26);
                    }
                  *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
                }
                break;
              case (MR_Integer) 1:
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *mdb__declarative_analyser__SearchResponse_26 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_21));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                    *mdb__declarative_analyser__NewMode_25 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_21));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__ArgPos_22));
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_analyser__TermPath_23));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_20));
                    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mdb__declarative_analyser__HowTrack_18));
                  }
                  *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
                  *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
                }
                break;
              case (MR_Integer) 2:
                {
                  *mdb__declarative_analyser__SearchResponse_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                    *mdb__declarative_analyser__NewMode_25 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_21));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__ArgPos_22));
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_analyser__TermPath_23));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_20));
                    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mdb__declarative_analyser__HowTrack_18));
                  }
                  *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
                  *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mdb__declarative_analyser__OriginId_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 0)));
              MR_Word mdb__declarative_analyser__OriginArgPos_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 1)));
              MR_Word mdb__declarative_analyser__OriginTermPath_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 2)));
              MR_Word mdb__declarative_analyser__SubtermMode_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 3)));
              MR_Word mdb__declarative_analyser__NewLastUnknown_43;
              MR_Word mdb__declarative_analyser__TypeInfo_82_82;
              MR_Word mdb__declarative_analyser__TypeInfo_84_84;

              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_82_82);
              }
              {
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_82_82, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__OriginId_39);
              }
              if (mdb__declarative_analyser__succeeded)
                {
                  mdb__declarative_analyser__NewLastUnknown_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mdb__declarative_analyser__NewLastUnknown_43, 0) = ((MR_Box) (mdb__declarative_analyser__OriginId_39));
                }
              else
                mdb__declarative_analyser__NewLastUnknown_43 = mdb__declarative_analyser__LastUnknown_20;
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_84_84);
              }
              {
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__give_up_subterm_tracking_3_p_0(mdb__declarative_analyser__TypeInfo_84_84, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__OriginId_39, mdb__declarative_analyser__SubtermMode_42);
              }
              if (mdb__declarative_analyser__succeeded)
                {
                  MR_Integer mdb__declarative_analyser__Unknown_66;
                  MR_Word mdb__declarative_analyser__TypeInfo_86_86;
                  MR_Integer mdb__declarative_analyser__PolyConst2_85;

                  mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__LastUnknown_20)) == (MR_mktag((MR_Integer) 1)));
                  if (mdb__declarative_analyser__succeeded)
                    {
                      mdb__declarative_analyser__Unknown_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__LastUnknown_20, (MR_Integer) 0)));
                      mdb__declarative_analyser__PolyConst2_85 = (MR_Integer) 2;
                      {
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__PolyConst2_85, &mdb__declarative_analyser__TypeInfo_86_86);
                      }
                      {
                        mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_86_86, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__Unknown_66);
                      }
                    }
                  if (mdb__declarative_analyser__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mdb__declarative_analyser__SearchResponse_26 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_66));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      }
                      *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
                      *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
                    }
                  else
                    {
                      mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__NewMode_25, mdb__declarative_analyser__SearchResponse_26);
                    }
                  *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
                }
              else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mdb__declarative_analyser__next_value_of_STATE_VARIABLE_SearchSpace_0_44 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
                    MR_Word mdb__declarative_analyser__next_value_of_STATE_VARIABLE_TriedShortcutProcs_0_46 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
                    MR_Word mdb__declarative_analyser__next_value_of_LastUnknown_20 = mdb__declarative_analyser__NewLastUnknown_43;
                    MR_Integer mdb__declarative_analyser__next_value_of_SuspectId_21 = mdb__declarative_analyser__OriginId_39;
                    MR_Word mdb__declarative_analyser__next_value_of_ArgPos_22 = mdb__declarative_analyser__OriginArgPos_40;
                    MR_Word mdb__declarative_analyser__next_value_of_TermPath_23 = mdb__declarative_analyser__OriginTermPath_41;

                    mdb__declarative_analyser__TermPath_23 = mdb__declarative_analyser__next_value_of_TermPath_23;
                    mdb__declarative_analyser__ArgPos_22 = mdb__declarative_analyser__next_value_of_ArgPos_22;
                    mdb__declarative_analyser__SuspectId_21 = mdb__declarative_analyser__next_value_of_SuspectId_21;
                    mdb__declarative_analyser__LastUnknown_20 = mdb__declarative_analyser__next_value_of_LastUnknown_20;
                    mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46 = mdb__declarative_analyser__next_value_of_STATE_VARIABLE_TriedShortcutProcs_0_46;
                    mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44 = mdb__declarative_analyser__next_value_of_STATE_VARIABLE_SearchSpace_0_44;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mdb__declarative_analyser__BindingSuspectId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 0)));
              MR_String mdb__declarative_analyser__FileName_29 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 1)));
              MR_Integer mdb__declarative_analyser__LineNo_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 2)));
              MR_Word mdb__declarative_analyser__PrimOpType_31 = ((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 3)))) & (MR_Integer) 3);
              MR_Word mdb__declarative_analyser__Output_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word mdb__declarative_analyser__ProcLabel_33;
              MR_Word mdb__declarative_analyser__MaybePath_36;

              {
                mdb__declarative_analyser__ProcLabel_33 = mdb__declarative_edt__get_proc_label_for_suspect_3_f_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__BindingSuspectId_28);
              }
              switch (mdb__declarative_analyser__Output_32) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mdb__declarative_analyser__MaybePath_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mdb__declarative_analyser__TypeInfo_72_72;
                    MR_Box mdb__declarative_analyser__BindingNode_34;
                    MR_Integer mdb__declarative_analyser__ArgNum_35;
                    MR_Word mdb__declarative_analyser__Var_58;
                    MR_Box MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
                    MR_Box mdb__declarative_analyser__conv1_ArgNum_35;

                    {
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_72_72);
                    }
                    {
                      mdb__declarative_analyser__BindingNode_34 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_72_72, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__SuspectId_21);
                    }
                    mdb__declarative_analyser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 0)), (MR_Integer) 19)));
                    {
                      mdb__declarative_analyser__conv1_ArgNum_35 = mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70), mdb__declarative_analyser__Store_15, mdb__declarative_analyser__BindingNode_34, ((MR_Box) (mdb__declarative_analyser__ArgPos_22)));
                    }
                    mdb__declarative_analyser__ArgNum_35 = ((MR_Integer) mdb__declarative_analyser__conv1_ArgNum_35);
                    {
                      mdb__declarative_analyser__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_58, 0) = ((MR_Box) (mdb__declarative_analyser__ArgNum_35));
                      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_58, 1) = ((MR_Box) (mdb__declarative_analyser__TermPath_23));
                    }
                    {
                      mdb__declarative_analyser__MaybePath_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybePath_36, 0) = ((MR_Box) (mdb__declarative_analyser__Var_58));
                    }
                  }
                  break;
              }
              {
                MR_Word mdb__declarative_analyser__TypeInfo_74_74;

                {
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_74_74);
                }
                {
                  mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_74_74, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__BindingSuspectId_28);
                }
              }
              if (!(mdb__declarative_analyser__succeeded))
                {
                  MR_Word mdb__declarative_analyser__TypeInfo_76_76;

                  {
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_76_76);
                  }
                  {
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_skipped_2_p_0(mdb__declarative_analyser__TypeInfo_76_76, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__BindingSuspectId_28);
                  }
                }
              if (mdb__declarative_analyser__succeeded)
                {
                  MR_Word mdb__declarative_analyser__Var_59;

                  {
                    mdb__declarative_analyser__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_59, 0) = ((MR_Box) (mdb__declarative_analyser__PrimOpType_31));
                    MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_59, 1) = ((MR_Box) (mdb__declarative_analyser__FileName_29));
                    MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_59, 2) = ((MR_Box) (mdb__declarative_analyser__LineNo_30));
                    MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_59, 3) = ((MR_Box) (mdb__declarative_analyser__MaybePath_36));
                    MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_59, 4) = ((MR_Box) (mdb__declarative_analyser__ProcLabel_33));
                    MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_59, 5) = ((MR_Box) ((MR_Integer) 0));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mdb__declarative_analyser__SearchResponse_26 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__BindingSuspectId_28));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_59));
                  }
                  *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
                  *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
                }
              else
                {
                  MR_Integer mdb__declarative_analyser__Unknown_37;
                  MR_Word mdb__declarative_analyser__TypeInfo_78_78;
                  MR_Integer mdb__declarative_analyser__PolyConst2_77;

                  mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__LastUnknown_20)) == (MR_mktag((MR_Integer) 1)));
                  if (mdb__declarative_analyser__succeeded)
                    {
                      mdb__declarative_analyser__Unknown_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__LastUnknown_20, (MR_Integer) 0)));
                      mdb__declarative_analyser__PolyConst2_77 = (MR_Integer) 2;
                      {
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__PolyConst2_77, &mdb__declarative_analyser__TypeInfo_78_78);
                      }
                      {
                        mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_78_78, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__Unknown_37);
                      }
                    }
                  if (mdb__declarative_analyser__succeeded)
                    {
                      MR_Word mdb__declarative_analyser__Reason_38;

                      {
                        mdb__declarative_analyser__Reason_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 0) = ((MR_Box) (mdb__declarative_analyser__PrimOpType_31));
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 1) = ((MR_Box) (mdb__declarative_analyser__FileName_29));
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 2) = ((MR_Box) (mdb__declarative_analyser__LineNo_30));
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 3) = ((MR_Box) (mdb__declarative_analyser__MaybePath_36));
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 4) = ((MR_Box) (mdb__declarative_analyser__ProcLabel_33));
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 5) = ((MR_Box) ((MR_Integer) 1));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mdb__declarative_analyser__SearchResponse_26 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_37));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__Reason_38));
                      }
                      *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
                      *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
                    }
                  else
                    {
                      mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__NewMode_25, mdb__declarative_analyser__SearchResponse_26);
                    }
                }
              *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_12_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_29,
  MR_Box mdb__declarative_analyser__Store_13,
  MR_Word mdb__declarative_analyser__Oracle_14,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_25,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26,
  MR_Word mdb__declarative_analyser__HowTrack_16,
  MR_Word mdb__declarative_analyser__LastUnknown_17,
  MR_Integer mdb__declarative_analyser__SuspectId_18,
  MR_Word mdb__declarative_analyser__ArgPos_19,
  MR_Word mdb__declarative_analyser__TermPath_20,
  MR_Word mdb__declarative_analyser__FallBackSearchMode_21,
  MR_Word * mdb__declarative_analyser__NewMode_22,
  MR_Word * mdb__declarative_analyser__SearchResponse_23)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__Var_28;
    MR_Word mdb__declarative_analyser__Var_24;

    {
      mdb__declarative_analyser__Var_28 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0);
    }
    {
      mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_29, mdb__declarative_analyser__Store_13, mdb__declarative_analyser__Oracle_14, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_25, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26, mdb__declarative_analyser__HowTrack_16, mdb__declarative_analyser__Var_28, &mdb__declarative_analyser__Var_24, mdb__declarative_analyser__LastUnknown_17, mdb__declarative_analyser__SuspectId_18, mdb__declarative_analyser__ArgPos_19, mdb__declarative_analyser__TermPath_20, mdb__declarative_analyser__FallBackSearchMode_21, mdb__declarative_analyser__NewMode_22, mdb__declarative_analyser__SearchResponse_23);
    }
  }
}

static void MR_CALL 
mdb__declarative_analyser__search_for_question_8_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33,
  MR_Box mdb__declarative_analyser__Store_9,
  MR_Word mdb__declarative_analyser__Oracle_10,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
  MR_Word mdb__declarative_analyser__OldMode_12,
  MR_Word mdb__declarative_analyser__FallBackSearchMode_13,
  MR_Word * mdb__declarative_analyser__NewMode_14,
  MR_Word * mdb__declarative_analyser__Response_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_analyser__succeeded;

        switch (MR_tag((MR_Word) mdb__declarative_analyser__OldMode_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mdb__declarative_analyser__top_down_search_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__Response_15);
              }
              *mdb__declarative_analyser__NewMode_14 = mdb__declarative_analyser__FallBackSearchMode_13;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mdb__declarative_analyser__SuspectId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 0)));
              MR_Word mdb__declarative_analyser__ArgPos_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 1)));
              MR_Word mdb__declarative_analyser__TermPath_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 2)));
              MR_Word mdb__declarative_analyser__LastUnknown_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 3)));
              MR_Word mdb__declarative_analyser__HowTrack_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 4)));

              {
                mdb__declarative_analyser__follow_subterm_end_search_12_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__HowTrack_20, mdb__declarative_analyser__LastUnknown_19, mdb__declarative_analyser__SuspectId_16, mdb__declarative_analyser__ArgPos_17, mdb__declarative_analyser__TermPath_18, mdb__declarative_analyser__FallBackSearchMode_13, mdb__declarative_analyser__NewMode_14, mdb__declarative_analyser__Response_15);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mdb__declarative_analyser__TypeCtorInfo_38_59;
              MR_ArrayPtr mdb__declarative_analyser__PathArray_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__OldMode_12, (MR_Integer) 0)));
              MR_Integer mdb__declarative_analyser__Top_22;
              MR_Integer mdb__declarative_analyser__Bottom_23;
              MR_Integer mdb__declarative_analyser__LastTested_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__OldMode_12, (MR_Integer) 2)));
              MR_Word mdb__declarative_analyser__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__OldMode_12, (MR_Integer) 1)));
              MR_Integer mdb__declarative_analyser__SuspectId_46;
              MR_Integer mdb__declarative_analyser__NewTop_47;
              MR_Integer mdb__declarative_analyser__NewBottom_48;
              MR_Box mdb__declarative_analyser__conv0_SuspectId_46;
              MR_Word mdb__declarative_analyser__TypeInfo_40_61;

              mdb__declarative_analyser__Top_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_29, (MR_Integer) 0)));
              mdb__declarative_analyser__Bottom_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_29, (MR_Integer) 1)));
              mdb__declarative_analyser__TypeCtorInfo_38_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              {
                mdb__declarative_analyser__conv0_SuspectId_46 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_38_59, mdb__declarative_analyser__LastTested_24, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_21);
              }
              mdb__declarative_analyser__SuspectId_46 = ((MR_Integer) mdb__declarative_analyser__conv0_SuspectId_46);
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_40_61);
              }
              {
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_in_excluded_complement_2_p_0(mdb__declarative_analyser__TypeInfo_40_61, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__SuspectId_46);
              }
              if (mdb__declarative_analyser__succeeded)
                {
                  mdb__declarative_analyser__NewTop_47 = (mdb__declarative_analyser__LastTested_24 + (MR_Integer) 1);
                  mdb__declarative_analyser__NewBottom_48 = mdb__declarative_analyser__Bottom_23;
                }
              else
                {
                  MR_Word mdb__declarative_analyser__TypeInfo_42_63;

                  {
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_42_63);
                  }
                  {
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_in_excluded_subtree_2_p_0(mdb__declarative_analyser__TypeInfo_42_63, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__SuspectId_46);
                  }
                  if (mdb__declarative_analyser__succeeded)
                    {
                      mdb__declarative_analyser__NewTop_47 = mdb__declarative_analyser__Top_22;
                      mdb__declarative_analyser__NewBottom_48 = (mdb__declarative_analyser__LastTested_24 - (MR_Integer) 1);
                    }
                  else
                    {
                      mdb__declarative_analyser__NewTop_47 = mdb__declarative_analyser__Top_22;
                      mdb__declarative_analyser__NewBottom_48 = mdb__declarative_analyser__Bottom_23;
                    }
                }
              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__NewTop_47 > mdb__declarative_analyser__NewBottom_48);
              if (mdb__declarative_analyser__succeeded)
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mdb__declarative_analyser__next_value_of_OldMode_12 = mdb__declarative_analyser__FallBackSearchMode_13;

                    mdb__declarative_analyser__OldMode_12 = mdb__declarative_analyser__next_value_of_OldMode_12;
                  }
                  continue;
                }
              else
                {
                  MR_Integer mdb__declarative_analyser__UnknownClosestToMiddle_49;
                  MR_Word mdb__declarative_analyser__TypeInfo_44_65;

                  {
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_44_65);
                  }
                  {
                    mdb__declarative_analyser__succeeded = mdb__declarative_analyser__find_unknown_closest_to_middle_5_p_0(mdb__declarative_analyser__TypeInfo_44_65, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__PathArray_21, mdb__declarative_analyser__NewTop_47, mdb__declarative_analyser__NewBottom_48, &mdb__declarative_analyser__UnknownClosestToMiddle_49);
                  }
                  if (mdb__declarative_analyser__succeeded)
                    {
                      MR_Word mdb__declarative_analyser__Var_54;
                      MR_Integer mdb__declarative_analyser__Var_55;
                      MR_Word mdb__declarative_analyser__Var_56;
                      MR_Box mdb__declarative_analyser__conv1_Var_55;

                      {
                        mdb__declarative_analyser__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_54, 0) = ((MR_Box) (mdb__declarative_analyser__NewTop_47));
                        MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_54, 1) = ((MR_Box) (mdb__declarative_analyser__NewBottom_48));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        *mdb__declarative_analyser__NewMode_14 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__PathArray_21));
                        MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_54));
                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mdb__declarative_analyser__UnknownClosestToMiddle_49));
                      }
                      {
                        mdb__declarative_analyser__conv1_Var_55 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_38_59, mdb__declarative_analyser__UnknownClosestToMiddle_49, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_21);
                      }
                      mdb__declarative_analyser__Var_55 = ((MR_Integer) mdb__declarative_analyser__conv1_Var_55);
                      {
                        mdb__declarative_analyser__Var_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), mdb__declarative_analyser__Var_56, 0) = ((MR_Box) (mdb__declarative_analyser__NewBottom_48));
                        MR_hl_field(MR_mktag(2), mdb__declarative_analyser__Var_56, 1) = ((MR_Box) (mdb__declarative_analyser__NewTop_47));
                        MR_hl_field(MR_mktag(2), mdb__declarative_analyser__Var_56, 2) = ((MR_Box) (mdb__declarative_analyser__UnknownClosestToMiddle_49));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *mdb__declarative_analyser__Response_15 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Var_55));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_56));
                      }
                      *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26;
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mdb__declarative_analyser__next_value_of_OldMode_12 = mdb__declarative_analyser__FallBackSearchMode_13;

                        mdb__declarative_analyser__OldMode_12 = mdb__declarative_analyser__next_value_of_OldMode_12;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word mdb__declarative_analyser__Weighting_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__OldMode_12, (MR_Integer) 0)));
              MR_Integer mdb__declarative_analyser__RootId_73;
              MR_Word mdb__declarative_analyser__TypeInfo_23_80;

              *mdb__declarative_analyser__NewMode_14 = mdb__declarative_analyser__OldMode_12;
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_23_80);
              }
              {
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_23_80, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, &mdb__declarative_analyser__RootId_73);
              }
              if (mdb__declarative_analyser__succeeded)
                {
                  MR_Word mdb__declarative_analyser__Children_74;
                  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_75;

                  {
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__RootId_73, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_75, &mdb__declarative_analyser__Children_74);
                  }
                  if (mdb__declarative_analyser__succeeded)
                    {
                      {
                        mdb__declarative_analyser__find_middle_weight_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__Weighting_25, mdb__declarative_analyser__Children_74, mdb__declarative_analyser__RootId_73, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_75, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__Response_15);
                      }
                    }
                  else
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        *mdb__declarative_analyser__Response_15 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__RootId_73));
                      }
                      *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26;
                    }
                }
              else
                {
                  mdb__declarative_analyser__top_down_search_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__Response_15);
                }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0_1(
  MR_Box mdb__declarative_analyser__closure_arg,
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box * mdb__declarative_analyser__wrapper_arg_3,
  MR_Box mdb__declarative_analyser__wrapper_arg_4,
  MR_Box * mdb__declarative_analyser__wrapper_arg_5)
{
  {
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;
    MR_Integer mdb__declarative_analyser__conv1_HeadVar__5_68;
    MR_Integer mdb__declarative_analyser__conv0_HeadVar__7_70;

    {
      mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1122__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_2), &mdb__declarative_analyser__conv1_HeadVar__5_68, ((MR_Integer) mdb__declarative_analyser__wrapper_arg_4), &mdb__declarative_analyser__conv0_HeadVar__7_70);
    }
    *mdb__declarative_analyser__wrapper_arg_3 = ((MR_Box) (mdb__declarative_analyser__conv1_HeadVar__5_68));
    *mdb__declarative_analyser__wrapper_arg_5 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__7_70));
  }
}

static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
  MR_Box mdb__declarative_analyser__Store_1,
  MR_Word mdb__declarative_analyser__Oracle_2,
  MR_Word mdb__declarative_analyser__Weighting_3,
  MR_Word mdb__declarative_analyser__HeadVar__4_4,
  MR_Integer mdb__declarative_analyser__TopId_5,
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_6,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8,
  MR_Word * mdb__declarative_analyser__Response_9)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    if ((mdb__declarative_analyser__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mdb__declarative_analyser__LastUnknown_17;
        MR_Word mdb__declarative_analyser__TypeInfo_59_59;
        MR_Integer mdb__declarative_analyser__PolyConst2_58;

        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastUnknown_6)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__declarative_analyser__succeeded)
          {
            mdb__declarative_analyser__LastUnknown_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastUnknown_6, (MR_Integer) 0)));
            mdb__declarative_analyser__PolyConst2_58 = (MR_Integer) 2;
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__PolyConst2_58, &mdb__declarative_analyser__TypeInfo_59_59);
            }
            {
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_59_59, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_17);
            }
          }
        if (mdb__declarative_analyser__succeeded)
          {
            MR_Word mdb__declarative_analyser__TypeInfo_61_61;
            MR_Word mdb__declarative_analyser__TypeInfo_62_62;
            MR_Word mdb__declarative_analyser__Var_20;
            MR_Integer mdb__declarative_analyser__Var_21;
            MR_Integer mdb__declarative_analyser__Var_22;

            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_61_61);
            }
            {
              mdb__declarative_analyser__Var_21 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_61_61, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__TopId_5);
            }
            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_62_62);
            }
            {
              mdb__declarative_analyser__Var_22 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_62_62, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_17);
            }
            {
              mdb__declarative_analyser__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_20, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_20, 1) = ((MR_Box) (mdb__declarative_analyser__Var_21));
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_20, 2) = ((MR_Box) (mdb__declarative_analyser__Var_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mdb__declarative_analyser__Response_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_17));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_20));
            }
            *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7;
          }
        else
          {
            mdb__declarative_analyser__top_down_search_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__Store_1, mdb__declarative_analyser__Oracle_2, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8, mdb__declarative_analyser__Response_9);
          }
      }
    else
      {
        MR_Word mdb__declarative_analyser__TypeInfo_64_64;
        MR_Word mdb__declarative_analyser__TypeInfo_65_65;
        MR_Word mdb__declarative_analyser__TypeCtorInfo_73_73;
        MR_Integer mdb__declarative_analyser__SuspectId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word mdb__declarative_analyser__SuspectIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__4_4, (MR_Integer) 1)));
        MR_Integer mdb__declarative_analyser__TopWeight_33;
        MR_Integer mdb__declarative_analyser__Target_34;
        MR_Integer mdb__declarative_analyser__Weight_35;
        MR_Integer mdb__declarative_analyser__MaxWeight_36;
        MR_Integer mdb__declarative_analyser__Heaviest_37;
        MR_Word mdb__declarative_analyser__Var_44;
        MR_Box mdb__declarative_analyser__conv3_MaxWeight_36;
        MR_Box mdb__declarative_analyser__conv2_Heaviest_37;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_64_64);
        }
        {
          mdb__declarative_analyser__TopWeight_33 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_64_64, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__TopId_5);
        }
        {
          mdb__declarative_analyser__Target_34 = mercury__int__f_47_47_2_f_0(mdb__declarative_analyser__TopWeight_33, (MR_Integer) 2);
        }
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_65_65);
        }
        {
          mdb__declarative_analyser__Weight_35 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_65_65, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__SuspectId_27);
        }
        {
          mdb__declarative_analyser__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_44, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_44, 1) = ((MR_Box) (mdb__declarative_analyser__find_middle_weight_9_p_0_1));
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_44, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57));
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_44, 4) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7));
        }
        mdb__declarative_analyser__TypeCtorInfo_73_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__list__foldl2_6_p_0(mdb__declarative_analyser__TypeCtorInfo_73_73, mdb__declarative_analyser__TypeCtorInfo_73_73, mdb__declarative_analyser__TypeCtorInfo_73_73, mdb__declarative_analyser__Var_44, mdb__declarative_analyser__SuspectIds_28, ((MR_Box) (mdb__declarative_analyser__Weight_35)), &mdb__declarative_analyser__conv3_MaxWeight_36, ((MR_Box) (mdb__declarative_analyser__SuspectId_27)), &mdb__declarative_analyser__conv2_Heaviest_37);
        }
        mdb__declarative_analyser__MaxWeight_36 = ((MR_Integer) mdb__declarative_analyser__conv3_MaxWeight_36);
        mdb__declarative_analyser__Heaviest_37 = ((MR_Integer) mdb__declarative_analyser__conv2_Heaviest_37);
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__MaxWeight_36 > mdb__declarative_analyser__Target_34);
        if (mdb__declarative_analyser__succeeded)
          {
            MR_Word mdb__declarative_analyser__NewMaybeLastUnknown_38;
            MR_Word mdb__declarative_analyser__TypeInfo_74_74;

            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_74_74);
            }
            {
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_74_74, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__Heaviest_37);
            }
            if (mdb__declarative_analyser__succeeded)
              {
                mdb__declarative_analyser__NewMaybeLastUnknown_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mdb__declarative_analyser__NewMaybeLastUnknown_38, 0) = ((MR_Box) (mdb__declarative_analyser__Heaviest_37));
              }
            else
              mdb__declarative_analyser__NewMaybeLastUnknown_38 = mdb__declarative_analyser__MaybeLastUnknown_6;
            {
              mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__Store_1, mdb__declarative_analyser__Oracle_2, mdb__declarative_analyser__Weighting_3, mdb__declarative_analyser__Heaviest_37, mdb__declarative_analyser__TopId_5, mdb__declarative_analyser__NewMaybeLastUnknown_38, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8, mdb__declarative_analyser__Response_9);
            }
          }
        else
          {
            MR_Word mdb__declarative_analyser__TypeInfo_75_75;

            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_75_75);
            }
            {
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_75_75, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__Heaviest_37);
            }
            if (mdb__declarative_analyser__succeeded)
              {
                MR_Integer mdb__declarative_analyser__LastUnknown_39;
                MR_Word mdb__declarative_analyser__TypeInfo_76_76;

                mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastUnknown_6)) == (MR_mktag((MR_Integer) 1)));
                if (mdb__declarative_analyser__succeeded)
                  {
                    mdb__declarative_analyser__LastUnknown_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastUnknown_6, (MR_Integer) 0)));
                    {
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_76_76);
                    }
                    {
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_76_76, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_39);
                    }
                  }
                if (mdb__declarative_analyser__succeeded)
                  {
                    MR_Word mdb__declarative_analyser__TypeInfo_77_77;
                    MR_Integer mdb__declarative_analyser__LastUnknownWeight_40;
                    MR_Integer mdb__declarative_analyser__Var_46;
                    MR_Integer mdb__declarative_analyser__Var_47;

                    {
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_77_77);
                    }
                    {
                      mdb__declarative_analyser__LastUnknownWeight_40 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_77_77, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_39);
                    }
                    mdb__declarative_analyser__Var_46 = (mdb__declarative_analyser__LastUnknownWeight_40 - mdb__declarative_analyser__Target_34);
                    mdb__declarative_analyser__Var_47 = (mdb__declarative_analyser__Target_34 - mdb__declarative_analyser__MaxWeight_36);
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Var_46 < mdb__declarative_analyser__Var_47);
                    if (mdb__declarative_analyser__succeeded)
                      {
                        MR_Word mdb__declarative_analyser__Var_48;

                        {
                          mdb__declarative_analyser__Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_48, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_48, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_48, 2) = ((MR_Box) (mdb__declarative_analyser__LastUnknownWeight_40));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *mdb__declarative_analyser__Response_9 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_39));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_48));
                        }
                      }
                    else
                      {
                        MR_Word mdb__declarative_analyser__Var_49;

                        {
                          mdb__declarative_analyser__Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_49, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_49, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_49, 2) = ((MR_Box) (mdb__declarative_analyser__MaxWeight_36));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          *mdb__declarative_analyser__Response_9 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Heaviest_37));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_49));
                        }
                      }
                  }
                else
                  {
                    MR_Word mdb__declarative_analyser__Var_50;

                    {
                      mdb__declarative_analyser__Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_50, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_50, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_50, 2) = ((MR_Box) (mdb__declarative_analyser__MaxWeight_36));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mdb__declarative_analyser__Response_9 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Heaviest_37));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_50));
                    }
                  }
                *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7;
              }
            else
              {
                MR_Integer mdb__declarative_analyser__LastUnknown_55;
                MR_Word mdb__declarative_analyser__TypeInfo_78_78;

                mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastUnknown_6)) == (MR_mktag((MR_Integer) 1)));
                if (mdb__declarative_analyser__succeeded)
                  {
                    mdb__declarative_analyser__LastUnknown_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastUnknown_6, (MR_Integer) 0)));
                    {
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_78_78);
                    }
                    {
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_78_78, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_55);
                    }
                  }
                if (mdb__declarative_analyser__succeeded)
                  {
                    MR_Word mdb__declarative_analyser__TypeInfo_79_79;
                    MR_Word mdb__declarative_analyser__Var_51;
                    MR_Integer mdb__declarative_analyser__LastUnknownWeight_54;

                    {
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_79_79);
                    }
                    {
                      mdb__declarative_analyser__LastUnknownWeight_54 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_79_79, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_55);
                    }
                    {
                      mdb__declarative_analyser__Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_51, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_51, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__Var_51, 2) = ((MR_Box) (mdb__declarative_analyser__LastUnknownWeight_54));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *mdb__declarative_analyser__Response_9 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_55));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_51));
                    }
                    *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7;
                  }
                else
                  {
                    {
                      mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__Store_1, mdb__declarative_analyser__Oracle_2, mdb__declarative_analyser__Weighting_3, mdb__declarative_analyser__Heaviest_37, mdb__declarative_analyser__TopId_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8, mdb__declarative_analyser__Response_9);
                    }
                  }
              }
          }
      }
  }
}

static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23,
  MR_Box mdb__declarative_analyser__Store_10,
  MR_Word mdb__declarative_analyser__Oracle_11,
  MR_Word mdb__declarative_analyser__Weighting_12,
  MR_Integer mdb__declarative_analyser__SuspectId_13,
  MR_Integer mdb__declarative_analyser__TopId_14,
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_15,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20,
  MR_Word * mdb__declarative_analyser__Response_17)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__Children_18;
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_21_21;

    {
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23, mdb__declarative_analyser__Store_10, mdb__declarative_analyser__Oracle_11, mdb__declarative_analyser__SuspectId_13, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_21_21, &mdb__declarative_analyser__Children_18);
    }
    if (mdb__declarative_analyser__succeeded)
      {
        mdb__declarative_analyser__find_middle_weight_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23, mdb__declarative_analyser__Store_10, mdb__declarative_analyser__Oracle_11, mdb__declarative_analyser__Weighting_12, mdb__declarative_analyser__Children_18, mdb__declarative_analyser__TopId_14, mdb__declarative_analyser__MaybeLastUnknown_15, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_21_21, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20, mdb__declarative_analyser__Response_17);
      }
    else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdb__declarative_analyser__Response_17 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_13));
        }
        *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19;
      }
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_middle_5_p_0(
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_16,
  MR_Word mdb__declarative_analyser__SearchSpace_6,
  MR_ArrayPtr mdb__declarative_analyser__PathArray_7,
  MR_Integer mdb__declarative_analyser__Top_8,
  MR_Integer mdb__declarative_analyser__Bottom_9,
  MR_Integer * mdb__declarative_analyser__Unknown_10)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Integer mdb__declarative_analyser__Middle_11;
    MR_Integer mdb__declarative_analyser__Var_12;
    MR_Integer mdb__declarative_analyser__Var_13 = (mdb__declarative_analyser__Bottom_9 - mdb__declarative_analyser__Top_8);

    {
      mdb__declarative_analyser__Var_12 = mercury__int__f_47_47_2_f_0(mdb__declarative_analyser__Var_13, (MR_Integer) 2);
    }
    mdb__declarative_analyser__Middle_11 = (mdb__declarative_analyser__Top_8 + mdb__declarative_analyser__Var_12);
    {
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(mdb__declarative_analyser__TypeInfo_for_T_16, mdb__declarative_analyser__SearchSpace_6, mdb__declarative_analyser__PathArray_7, mdb__declarative_analyser__Top_8, mdb__declarative_analyser__Bottom_9, mdb__declarative_analyser__Middle_11, mdb__declarative_analyser__Middle_11, mdb__declarative_analyser__Unknown_10);
    }
    return mdb__declarative_analyser__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_21,
  MR_Word mdb__declarative_analyser__SearchSpace_8,
  MR_ArrayPtr mdb__declarative_analyser__PathArray_9,
  MR_Integer mdb__declarative_analyser__OuterTop_10,
  MR_Integer mdb__declarative_analyser__OuterBottom_11,
  MR_Integer mdb__declarative_analyser__InnerTop_12,
  MR_Integer mdb__declarative_analyser__InnerBottom_13,
  MR_Integer * mdb__declarative_analyser__Unknown_14)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__InnerTop_12 <= mdb__declarative_analyser__InnerBottom_13);
        MR_Word mdb__declarative_analyser__TypeCtorInfo_22_22;
        MR_Integer mdb__declarative_analyser__Var_15;
        MR_Box mdb__declarative_analyser__conv0_Var_15;

        if (mdb__declarative_analyser__succeeded)
          {
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__OuterTop_10 <= mdb__declarative_analyser__InnerTop_12);
            if (!(mdb__declarative_analyser__succeeded))
              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__InnerBottom_13 <= mdb__declarative_analyser__OuterBottom_11);
            if (mdb__declarative_analyser__succeeded)
              {
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__OuterTop_10 <= mdb__declarative_analyser__InnerTop_12);
                if (mdb__declarative_analyser__succeeded)
                  {
                    mdb__declarative_analyser__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                    {
                      mdb__declarative_analyser__conv0_Var_15 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_22_22, mdb__declarative_analyser__InnerTop_12, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_9);
                    }
                    mdb__declarative_analyser__Var_15 = ((MR_Integer) mdb__declarative_analyser__conv0_Var_15);
                    {
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_21, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__Var_15);
                    }
                  }
                if (mdb__declarative_analyser__succeeded)
                  {
                    *mdb__declarative_analyser__Unknown_14 = mdb__declarative_analyser__InnerTop_12;
                    mdb__declarative_analyser__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_Word mdb__declarative_analyser__TypeCtorInfo_23_23;
                    MR_Integer mdb__declarative_analyser__Var_16;
                    MR_Box mdb__declarative_analyser__conv1_Var_16;

                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__InnerBottom_13 <= mdb__declarative_analyser__OuterBottom_11);
                    if (mdb__declarative_analyser__succeeded)
                      {
                        mdb__declarative_analyser__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                        {
                          mdb__declarative_analyser__conv1_Var_16 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_23_23, mdb__declarative_analyser__InnerBottom_13, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_9);
                        }
                        mdb__declarative_analyser__Var_16 = ((MR_Integer) mdb__declarative_analyser__conv1_Var_16);
                        {
                          mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_21, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__Var_16);
                        }
                      }
                    if (mdb__declarative_analyser__succeeded)
                      {
                        *mdb__declarative_analyser__Unknown_14 = mdb__declarative_analyser__InnerBottom_13;
                        mdb__declarative_analyser__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_Integer mdb__declarative_analyser__Var_17 = (mdb__declarative_analyser__InnerTop_12 - (MR_Integer) 1);
                        MR_Integer mdb__declarative_analyser__Var_18 = (mdb__declarative_analyser__InnerBottom_13 + (MR_Integer) 1);

                        /* direct tailcall eliminated */
                        {
                          MR_Integer mdb__declarative_analyser__next_value_of_InnerTop_12 = mdb__declarative_analyser__Var_17;
                          MR_Integer mdb__declarative_analyser__next_value_of_InnerBottom_13 = mdb__declarative_analyser__Var_18;

                          mdb__declarative_analyser__InnerBottom_13 = mdb__declarative_analyser__next_value_of_InnerBottom_13;
                          mdb__declarative_analyser__InnerTop_12 = mdb__declarative_analyser__next_value_of_InnerTop_12;
                        }
                        continue;
                      }
                  }
              }
          }
        return mdb__declarative_analyser__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_2(
  MR_Box mdb__declarative_analyser__closure_arg,
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;

    {
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__741__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
    return mdb__declarative_analyser__succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_1(
  MR_Box mdb__declarative_analyser__closure_arg,
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;

    {
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__738__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
    return mdb__declarative_analyser__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
  MR_Box mdb__declarative_analyser__Store_6,
  MR_Word mdb__declarative_analyser__Oracle_7,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25,
  MR_Word * mdb__declarative_analyser__Response_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__declarative_analyser__succeeded;
        MR_Integer mdb__declarative_analyser__Start_11;
        MR_Word mdb__declarative_analyser__MaybeUnknownDescendant_12;
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
        MR_Integer mdb__declarative_analyser__RootId_10;
        MR_Word mdb__declarative_analyser__TypeInfo_41_41;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_41_41);
        }
        {
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_41_41, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_analyser__RootId_10);
        }
        if (mdb__declarative_analyser__succeeded)
          mdb__declarative_analyser__Start_11 = mdb__declarative_analyser__RootId_10;
        else
          {
            MR_Word mdb__declarative_analyser__TypeInfo_43_43;

            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_43_43);
            }
            {
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_43_43, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_analyser__Start_11);
            }
          }
        {
          mdb__declarative_edt__first_unknown_descendant_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__Start_11, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__MaybeUnknownDescendant_12);
        }
        switch (MR_tag((MR_Word) mdb__declarative_analyser__MaybeUnknownDescendant_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer mdb__declarative_analyser__SkippedSuspect_14;
              MR_Word mdb__declarative_analyser__TypeInfo_45_45;

              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_45_45);
              }
              {
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__choose_skipped_suspect_2_p_0(mdb__declarative_analyser__TypeInfo_45_45, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__SkippedSuspect_14);
              }
              if (mdb__declarative_analyser__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mdb__declarative_analyser__Response_9 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__SkippedSuspect_14));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  }
                  *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
                }
              else
                {
                  MR_Integer mdb__declarative_analyser__BugId_15;
                  MR_Word mdb__declarative_analyser__TypeInfo_47_47;

                  {
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_47_47);
                  }
                  {
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_47_47, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__BugId_15);
                  }
                  if (mdb__declarative_analyser__succeeded)
                    {
                      MR_Word mdb__declarative_analyser__BugChildren_16;
                      MR_Word mdb__declarative_analyser__CorrectDescendants_18;
                      MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29;
                      MR_Word mdb__declarative_analyser__TypeCtorInfo_51_51;
                      MR_Word mdb__declarative_analyser__TypeInfo_61_61;
                      MR_Word mdb__declarative_analyser__NonIgnoredDescendants_17;
                      MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_28_28;
                      MR_Word mdb__declarative_analyser__Var_30;
                      MR_Word mdb__declarative_analyser__Var_31;
                      MR_Word mdb__declarative_analyser__Var_60;

                      {
                        mdb__declarative_analyser__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__BugId_15, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_28_28, &mdb__declarative_analyser__BugChildren_16);
                      }
                      if (mdb__declarative_analyser__succeeded)
                        {
                          {
                            mdb__declarative_analyser__succeeded = mdb__declarative_edt__non_ignored_descendants_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__BugChildren_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_28_28, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29, &mdb__declarative_analyser__NonIgnoredDescendants_17);
                          }
                          if (mdb__declarative_analyser__succeeded)
                            {
                              mdb__declarative_analyser__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                              mdb__declarative_analyser__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                              {
                                mdb__declarative_analyser__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_30, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_6[0]));
                                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_30, 1) = ((MR_Box) (mdb__declarative_analyser__top_down_search_5_p_0_1));
                                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_30, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39));
                                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_30, 4) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29));
                              }
                              {
                                mercury__list__filter_4_p_0(mdb__declarative_analyser__TypeCtorInfo_51_51, mdb__declarative_analyser__Var_30, mdb__declarative_analyser__NonIgnoredDescendants_17, &mdb__declarative_analyser__CorrectDescendants_18, &mdb__declarative_analyser__Var_60);
                              }
                              mdb__declarative_analyser__TypeInfo_61_61 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[2];
                              {
                                mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_61_61, ((MR_Box) (mdb__declarative_analyser__Var_31)), ((MR_Box) (mdb__declarative_analyser__Var_60)));
                              }
                            }
                        }
                      if (mdb__declarative_analyser__succeeded)
                        {
                          MR_Word mdb__declarative_analyser__InadmissibleChildren_19;
                          MR_Word mdb__declarative_analyser__Var_32;

                          *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29;
                          {
                            mdb__declarative_analyser__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_32, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_6[0]));
                            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_32, 1) = ((MR_Box) (mdb__declarative_analyser__top_down_search_5_p_0_2));
                            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_32, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39));
                            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_32, 4) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29));
                          }
                          {
                            mercury__list__filter_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_analyser__Var_32, mdb__declarative_analyser__BugChildren_16, &mdb__declarative_analyser__InadmissibleChildren_19);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                            *mdb__declarative_analyser__Response_9 = base;
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_analyser__BugId_15));
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__CorrectDescendants_18));
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_analyser__InadmissibleChildren_19));
                          }
                        }
                      else
                        {
                          {
                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[7])));
                            return;
                          }
                        }
                    }
                  else
                    {
                      MR_Word mdb__declarative_analyser__ExtendedSearchSpace_20;

                      {
                        mdb__declarative_analyser__succeeded = mdb__declarative_edt__extend_search_space_upwards_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__ExtendedSearchSpace_20);
                      }
                      if (mdb__declarative_analyser__succeeded)
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word mdb__declarative_analyser__next_value_of_STATE_VARIABLE_SearchSpace_0_24 = mdb__declarative_analyser__ExtendedSearchSpace_20;

                            mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24 = mdb__declarative_analyser__next_value_of_STATE_VARIABLE_SearchSpace_0_24;
                          }
                          continue;
                        }
                      else
                        {
                          MR_Word mdb__declarative_analyser__TypeInfo_58_58;
                          MR_Word mdb__declarative_analyser__TypeInfo_59_59;
                          MR_Integer mdb__declarative_analyser__TopMostId_21;
                          MR_Box mdb__declarative_analyser__TopMostNode_22;
                          MR_bool MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box);

                          {
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_58_58);
                          }
                          {
                            mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_58_58, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__TopMostId_21);
                          }
                          {
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_59_59);
                          }
                          {
                            mdb__declarative_analyser__TopMostNode_22 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_59_59, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, mdb__declarative_analyser__TopMostId_21);
                          }
                          mdb__declarative_analyser__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 0)), (MR_Integer) 14)));
                          {
                            mdb__declarative_analyser__succeeded = mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39), mdb__declarative_analyser__Store_6, mdb__declarative_analyser__TopMostNode_22);
                          }
                          if (mdb__declarative_analyser__succeeded)
                            *mdb__declarative_analyser__Response_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                          else
                            *mdb__declarative_analyser__Response_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
                        }
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer mdb__declarative_analyser__Unknown_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeUnknownDescendant_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_analyser__Response_9 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_13));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
              }
              *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer mdb__declarative_analyser__RequireExplicitId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__MaybeUnknownDescendant_12, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_analyser__Response_9 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__RequireExplicitId_23));
              }
              *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mdb__declarative_analyser__handle_search_response_5_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78,
  MR_Box mdb__declarative_analyser__Store_6,
  MR_Word mdb__declarative_analyser__SearchResponse_7,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_21,
  MR_Word * mdb__declarative_analyser__AnalyserResponse_9)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    switch (MR_tag((MR_Word) mdb__declarative_analyser__SearchResponse_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mdb__declarative_analyser__SearchResponse_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mdb__declarative_analyser__TypeInfo_88_88;
              MR_Word mdb__declarative_analyser__TypeInfo_89_89;
              MR_Integer mdb__declarative_analyser__TopMostId_15;
              MR_Box mdb__declarative_analyser__TopMost_16;
              MR_Word mdb__declarative_analyser__SearchSpace_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
              MR_Word mdb__declarative_analyser__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
              MR_Word mdb__declarative_analyser__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
              MR_Word mdb__declarative_analyser__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
              MR_Word mdb__declarative_analyser__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
              MR_Word mdb__declarative_analyser__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_39));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_3[2])));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__Var_64));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__Var_65));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__Var_66));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__Var_67));
              }
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_88_88);
              }
              {
                mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_88_88, mdb__declarative_analyser__SearchSpace_39, &mdb__declarative_analyser__TopMostId_15);
              }
              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_89_89);
              }
              {
                mdb__declarative_analyser__TopMost_16 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_89_89, mdb__declarative_analyser__SearchSpace_39, mdb__declarative_analyser__TopMostId_15);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *mdb__declarative_analyser__AnalyserResponse_9 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = mdb__declarative_analyser__TopMost_16;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *mdb__declarative_analyser__AnalyserResponse_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mdb__declarative_analyser__TypeInfo_80_80;
          MR_Integer mdb__declarative_analyser__SuspectId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 0)));
          MR_Word mdb__declarative_analyser__Reason_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 1)));
          MR_Word mdb__declarative_analyser__SearchSpace_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
          MR_Box mdb__declarative_analyser__Node_13;
          MR_Word mdb__declarative_analyser__OracleQuestion_14;
          MR_Word mdb__declarative_analyser__Var_35;
          MR_Word mdb__declarative_analyser__Var_36;
          MR_Word mdb__declarative_analyser__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
          MR_Word mdb__declarative_analyser__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
          MR_Word mdb__declarative_analyser__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
          MR_Word mdb__declarative_analyser__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
          MR_Word mdb__declarative_analyser__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
          void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Box mdb__declarative_analyser__conv1_OracleQuestion_14;
          MR_Word mdb__declarative_analyser__Var_45;
          MR_Word mdb__declarative_analyser__Var_46;
          MR_Word mdb__declarative_analyser__Var_47;
          MR_Word mdb__declarative_analyser__Var_48;
          MR_Word mdb__declarative_analyser__Var_50;
          MR_Word mdb__declarative_analyser__Var_49;

          {
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_80_80);
          }
          {
            mdb__declarative_analyser__Node_13 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_80_80, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
          }
          mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 0)), (MR_Integer) 5)));
          {
            mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78), mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Node_13, &mdb__declarative_analyser__conv1_OracleQuestion_14);
          }
          mdb__declarative_analyser__OracleQuestion_14 = ((MR_Word) mdb__declarative_analyser__conv1_OracleQuestion_14);
          {
            MR_Word mdb__declarative_analyser__TypeInfo_81_81;

            {
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_81_81);
            }
            {
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_81_81, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
            }
          }
          if (!(mdb__declarative_analyser__succeeded))
            {
              MR_Word mdb__declarative_analyser__TypeInfo_82_82;

              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_82_82);
              }
              {
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_skipped_2_p_0(mdb__declarative_analyser__TypeInfo_82_82, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
              }
            }
          if (mdb__declarative_analyser__succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mdb__declarative_analyser__AnalyserResponse_9 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__OracleQuestion_14));
            }
          else
            {
              MR_Word mdb__declarative_analyser__TypeInfo_83_83;

              {
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_83_83);
              }
              {
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_ignored_2_p_0(mdb__declarative_analyser__TypeInfo_83_83, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
              }
              if (mdb__declarative_analyser__succeeded)
                {
                  {
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[6])));
                    return;
                  }
                }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mdb__declarative_analyser__AnalyserResponse_9 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__OracleQuestion_14));
                }
            }
          {
            mdb__declarative_analyser__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_36, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_10));
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_36, 1) = ((MR_Box) (mdb__declarative_analyser__Reason_11));
          }
          {
            mdb__declarative_analyser__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_35, 0) = ((MR_Box) (mdb__declarative_analyser__Var_36));
          }
          mdb__declarative_analyser__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
          mdb__declarative_analyser__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
          mdb__declarative_analyser__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
          mdb__declarative_analyser__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
          mdb__declarative_analyser__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
          mdb__declarative_analyser__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__Var_45));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_46));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__Var_47));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__Var_48));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__Var_35));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__Var_50));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mdb__declarative_analyser__TypeInfo_86_86;
          MR_Word mdb__declarative_analyser__Var_28;
          MR_Word mdb__declarative_analyser__Var_29;
          MR_Word mdb__declarative_analyser__Var_30;
          MR_Integer mdb__declarative_analyser__SuspectId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 0)));
          MR_Box mdb__declarative_analyser__Node_38;
          MR_Word mdb__declarative_analyser__Var_51;
          MR_Word mdb__declarative_analyser__Var_53;
          MR_Word mdb__declarative_analyser__Var_54;
          MR_Word mdb__declarative_analyser__Var_55;
          MR_Word mdb__declarative_analyser__Var_56;
          MR_Word mdb__declarative_analyser__Var_52;
          MR_Word mdb__declarative_analyser__Var_57;
          MR_Word mdb__declarative_analyser__Var_58;
          MR_Word mdb__declarative_analyser__Var_59;
          MR_Word mdb__declarative_analyser__Var_60;
          MR_Word mdb__declarative_analyser__Var_61;

          {
            mdb__declarative_analyser__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_29, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_37));
          }
          {
            mdb__declarative_analyser__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_28, 0) = ((MR_Box) (mdb__declarative_analyser__Var_29));
          }
          mdb__declarative_analyser__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
          mdb__declarative_analyser__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
          mdb__declarative_analyser__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
          mdb__declarative_analyser__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
          mdb__declarative_analyser__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
          mdb__declarative_analyser__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__Var_51));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_28));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__Var_53));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__Var_54));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__Var_55));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__Var_56));
          }
          {
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_86_86);
          }
          mdb__declarative_analyser__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 0)));
          mdb__declarative_analyser__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 1)));
          mdb__declarative_analyser__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 2)));
          mdb__declarative_analyser__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 3)));
          mdb__declarative_analyser__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 4)));
          mdb__declarative_analyser__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 5)));
          {
            mdb__declarative_analyser__Node_38 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_86_86, mdb__declarative_analyser__Var_30, mdb__declarative_analyser__SuspectId_37);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mdb__declarative_analyser__AnalyserResponse_9 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), base, 1) = mdb__declarative_analyser__Node_38;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Integer mdb__declarative_analyser__BugId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 0)));
          MR_Word mdb__declarative_analyser__CorrectDescendants_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 1)));
          MR_Word mdb__declarative_analyser__InadmissibleChildren_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 2)));
          MR_Word mdb__declarative_analyser__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
          MR_Word mdb__declarative_analyser__Var_23;
          MR_Word mdb__declarative_analyser__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
          MR_Word mdb__declarative_analyser__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
          MR_Word mdb__declarative_analyser__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
          MR_Word mdb__declarative_analyser__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
          MR_Word mdb__declarative_analyser__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));

          {
            mdb__declarative_analyser__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_23, 0) = ((MR_Box) (mdb__declarative_analyser__BugId_17));
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Var_23, 1) = ((MR_Box) (mdb__declarative_analyser__CorrectDescendants_18));
          }
          {
            mdb__declarative_analyser__bug_response_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Var_22, mdb__declarative_analyser__BugId_17, mdb__declarative_analyser__Var_23, mdb__declarative_analyser__InadmissibleChildren_19, mdb__declarative_analyser__AnalyserResponse_9);
          }
          *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20;
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_2(
  MR_Box mdb__declarative_analyser__closure_arg,
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box * mdb__declarative_analyser__wrapper_arg_2)
{
  {
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;
    MR_Word mdb__declarative_analyser__conv4_HeadVar__3_3;

    {
      mdb__declarative_edt__edt_question_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4)), mdb__declarative_analyser__wrapper_arg_1, &mdb__declarative_analyser__conv4_HeadVar__3_3);
    }
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv4_HeadVar__3_3));
  }
}

static MR_Box MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_1(
  MR_Box mdb__declarative_analyser__closure_arg,
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
{
  {
    MR_Box mdb__declarative_analyser__wrapper_arg_2;
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;

    {
      mdb__declarative_analyser__wrapper_arg_2 = mdb__declarative_analyser__IntroducedFrom__func__bug_response__656__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
    return mdb__declarative_analyser__wrapper_arg_2;
  }
}

static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
  MR_Box mdb__declarative_analyser__Store_7,
  MR_Word mdb__declarative_analyser__SearchSpace_8,
  MR_Integer mdb__declarative_analyser__BugId_9,
  MR_Word mdb__declarative_analyser__Evidence_10,
  MR_Word mdb__declarative_analyser__InadmissibleChildren_11,
  MR_Word * mdb__declarative_analyser__Response_12)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__TypeInfo_26_26;
    MR_Word mdb__declarative_analyser__TypeInfo_29_29;
    MR_Word mdb__declarative_analyser__TypeInfo_36_36;
    MR_Word mdb__declarative_analyser__TypeInfo_37_37;
    MR_Word mdb__declarative_analyser__TypeInfo_39_39;
    MR_Box mdb__declarative_analyser__BugNode_13;
    MR_Word mdb__declarative_analyser__Bug_17;
    MR_Word mdb__declarative_analyser__EDTNodes_19;
    MR_Word mdb__declarative_analyser__EvidenceAsQuestions_20;
    MR_Word mdb__declarative_analyser__Var_22;
    MR_Word mdb__declarative_analyser__Var_23;
    MR_Word mdb__declarative_analyser__conv5_EvidenceAsQuestions_20;

    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_26_26);
    }
    {
      mdb__declarative_analyser__BugNode_13 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_26_26, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__BugId_9);
    }
    if ((mdb__declarative_analyser__InadmissibleChildren_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mdb__declarative_analyser__EBug_18;
        void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 6)));
        MR_Box mdb__declarative_analyser__conv1_EBug_18;

        {
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__BugNode_13, &mdb__declarative_analyser__conv1_EBug_18);
        }
        mdb__declarative_analyser__EBug_18 = ((MR_Word) mdb__declarative_analyser__conv1_EBug_18);
        {
          mdb__declarative_analyser__Bug_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Bug_17, 0) = ((MR_Box) (mdb__declarative_analyser__EBug_18));
        }
      }
    else
      {
        MR_Word mdb__declarative_analyser__TypeInfo_27_27;
        MR_Integer mdb__declarative_analyser__InadmissibleChild_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__InadmissibleChildren_11, (MR_Integer) 0)));
        MR_Word mdb__declarative_analyser__IBug_16;
        MR_Box mdb__declarative_analyser__Var_21;
        MR_Word mdb__declarative_analyser__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__InadmissibleChildren_11, (MR_Integer) 1)));
        void MR_CALL (* mdb__declarative_analyser__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box mdb__declarative_analyser__conv3_IBug_16;

        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_27_27);
        }
        {
          mdb__declarative_analyser__Var_21 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_27_27, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__InadmissibleChild_14);
        }
        mdb__declarative_analyser__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 7)));
        {
          mdb__declarative_analyser__func_2(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__BugNode_13, mdb__declarative_analyser__Var_21, &mdb__declarative_analyser__conv3_IBug_16);
        }
        mdb__declarative_analyser__IBug_16 = ((MR_Word) mdb__declarative_analyser__conv3_IBug_16);
        mdb__declarative_analyser__Bug_17 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) mdb__declarative_analyser__IBug_16);
      }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_29_29);
    }
    {
      mdb__declarative_analyser__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_22, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_22, 1) = ((MR_Box) (mdb__declarative_analyser__bug_response_6_p_0_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_22, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_22, 4) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_8));
    }
    {
      mdb__declarative_analyser__EDTNodes_19 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_analyser__TypeInfo_29_29, mdb__declarative_analyser__Var_22, mdb__declarative_analyser__Evidence_10);
    }
    {
      mdb__declarative_analyser__Var_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_23, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_23, 1) = ((MR_Box) (mdb__declarative_analyser__bug_response_6_p_0_2));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_23, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_23, 4) = mdb__declarative_analyser__Store_7;
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_36_36);
    }
    {
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_37_37);
    }
    {
      mdb__declarative_analyser__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_39_39, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_39_39, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_37_37));
    }
    {
      mercury__list__map_3_p_0(mdb__declarative_analyser__TypeInfo_36_36, mdb__declarative_analyser__TypeInfo_39_39, (MR_Word) mdb__declarative_analyser__Var_23, mdb__declarative_analyser__EDTNodes_19, &mdb__declarative_analyser__conv5_EvidenceAsQuestions_20);
    }
    mdb__declarative_analyser__EvidenceAsQuestions_20 = (MR_Word) mdb__declarative_analyser__conv5_EvidenceAsQuestions_20;
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mdb__declarative_analyser__Response_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Bug_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__EvidenceAsQuestions_20));
    }
  }
}

static MR_Word MR_CALL 
mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_f_0(
  MR_Word mdb__declarative_analyser__SearchMode_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__MaybeHeuristic_4;

    switch (MR_tag((MR_Word) mdb__declarative_analyser__SearchMode_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mdb__declarative_analyser__MaybeHeuristic_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        mdb__declarative_analyser__MaybeHeuristic_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        {
          MR_Word mdb__declarative_analyser__Weighting_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchMode_3, (MR_Integer) 0)));

          {
            mdb__declarative_analyser__MaybeHeuristic_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeHeuristic_4, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_5));
          }
        }
        break;
    }
    return mdb__declarative_analyser__MaybeHeuristic_4;
  }
}

MR_bool MR_CALL 
mdb__declarative_analyser__reask_last_question_3_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
  MR_Box mdb__declarative_analyser__Store_4,
  MR_Word mdb__declarative_analyser__Analyser_5,
  MR_Word * mdb__declarative_analyser__Response_6)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__TypeInfo_26_26;
    MR_Word mdb__declarative_analyser__MaybeLastQuestion_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 4)));
    MR_Integer mdb__declarative_analyser__SuspectId_8;
    MR_Word mdb__declarative_analyser__SearchSpace_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 0)));
    MR_Box mdb__declarative_analyser__Node_11;
    MR_Word mdb__declarative_analyser__OracleQuestion_12;
    MR_Word mdb__declarative_analyser__Var_13;
    MR_Integer mdb__declarative_analyser__PolyConst2_25;
    MR_Word mdb__declarative_analyser__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 1)));
    MR_Word mdb__declarative_analyser__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 2)));
    MR_Word mdb__declarative_analyser__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 3)));
    MR_Word mdb__declarative_analyser__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 5)));
    MR_Word mdb__declarative_analyser__Var_9;
    void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box mdb__declarative_analyser__conv1_OracleQuestion_12;

    mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastQuestion_7)) == (MR_mktag((MR_Integer) 1)));
    if (mdb__declarative_analyser__succeeded)
      {
        mdb__declarative_analyser__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastQuestion_7, (MR_Integer) 0)));
        mdb__declarative_analyser__SuspectId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_13, (MR_Integer) 0)));
        mdb__declarative_analyser__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Var_13, (MR_Integer) 1)));
        mdb__declarative_analyser__PolyConst2_25 = (MR_Integer) 2;
        {
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, mdb__declarative_analyser__PolyConst2_25, &mdb__declarative_analyser__TypeInfo_26_26);
        }
        {
          mdb__declarative_analyser__Node_11 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_26_26, mdb__declarative_analyser__SearchSpace_10, mdb__declarative_analyser__SuspectId_8);
        }
        mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 5)));
        {
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_4, mdb__declarative_analyser__Node_11, &mdb__declarative_analyser__conv1_OracleQuestion_12);
        }
        mdb__declarative_analyser__OracleQuestion_12 = ((MR_Word) mdb__declarative_analyser__conv1_OracleQuestion_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mdb__declarative_analyser__Response_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__OracleQuestion_12));
        }
        mdb__declarative_analyser__succeeded = MR_TRUE;
      }
    return mdb__declarative_analyser__succeeded;
  }
}

void MR_CALL 
mdb__declarative_analyser__set_fallback_search_mode_4_p_0(
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55,
  MR_Box mdb__declarative_analyser__Store_5,
  MR_Word mdb__declarative_analyser__FallBackSearchMode_6,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_20)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
    MR_Word mdb__declarative_analyser__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 0)));
    MR_Word mdb__declarative_analyser__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 1)));
    MR_Word mdb__declarative_analyser__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 5)));
    MR_Word mdb__declarative_analyser__Var_32 = mdb__declarative_analyser__Var_26;
    MR_Word mdb__declarative_analyser__Var_33 = mdb__declarative_analyser__Var_27;
    MR_Word mdb__declarative_analyser__Var_35 = mdb__declarative_analyser__FallBackSearchMode_6;
    MR_Word mdb__declarative_analyser__Var_37 = mdb__declarative_analyser__Var_31;
    MR_Word mdb__declarative_analyser__Var_38 = mdb__declarative_analyser__Var_32;
    MR_Word mdb__declarative_analyser__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 2)));
    MR_Word mdb__declarative_analyser__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 3)));
    MR_Word mdb__declarative_analyser__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 4)));

    {
      mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 0) = ((MR_Box) (mdb__declarative_analyser__Var_38));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__Var_33));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 2) = ((MR_Box) (mdb__declarative_analyser__FallBackSearchMode_6));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 3) = ((MR_Box) (mdb__declarative_analyser__Var_35));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 5) = ((MR_Box) (mdb__declarative_analyser__Var_37));
    }
    switch (MR_tag((MR_Word) mdb__declarative_analyser__FallBackSearchMode_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
        break;
      case (MR_Integer) 1:
        *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
        break;
      case (MR_Integer) 2:
        *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
        break;
      case (MR_Integer) 3:
        {
          MR_Word mdb__declarative_analyser__Weighting_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__FallBackSearchMode_6, (MR_Integer) 0)));
          MR_Word mdb__declarative_analyser__SearchSpace_10;
          MR_Word mdb__declarative_analyser__Var_50;
          MR_Word mdb__declarative_analyser__Var_51;
          MR_Word mdb__declarative_analyser__Var_52;
          MR_Word mdb__declarative_analyser__Var_53;
          MR_Word mdb__declarative_analyser__Var_54;
          MR_Word mdb__declarative_analyser__Var_49;

          {
            mdb__declarative_edt__update_weighting_heuristic_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_5, mdb__declarative_analyser__Weighting_8, mdb__declarative_analyser__Var_38, &mdb__declarative_analyser__SearchSpace_10);
          }
          mdb__declarative_analyser__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 0)));
          mdb__declarative_analyser__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 1)));
          mdb__declarative_analyser__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 2)));
          mdb__declarative_analyser__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 3)));
          mdb__declarative_analyser__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 4)));
          mdb__declarative_analyser__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 5)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_10));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__Var_50));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__Var_51));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__Var_52));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__Var_53));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__Var_54));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mdb__declarative_analyser__reset_analyser_2_p_0(
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_18,
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5,
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_6)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__FallBack_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 3)));
    MR_Word mdb__declarative_analyser__Var_8;
    MR_Word mdb__declarative_analyser__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 0)));
    MR_Word mdb__declarative_analyser__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 1)));
    MR_Word mdb__declarative_analyser__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 2)));
    MR_Word mdb__declarative_analyser__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 4)));
    MR_Word mdb__declarative_analyser__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 5)));

    {
      mdb__declarative_analyser__Var_8 = mdb__declarative_edt__empty_search_space_0_f_0(mdb__declarative_analyser__TypeInfo_for_T_18);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_analyser__STATE_VARIABLE_Analyser_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__Var_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__FallBack_4));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__FallBack_4));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

void MR_CALL 
mdb__declarative_analyser__analyser_state_init_1_p_0(
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_9,
  MR_Word * mdb__declarative_analyser__Analyser_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;
    MR_Word mdb__declarative_analyser__Var_3;

    {
      mdb__declarative_analyser__Var_3 = mdb__declarative_edt__empty_search_space_0_f_0(mdb__declarative_analyser__TypeInfo_for_T_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *mdb__declarative_analyser__Analyser_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__Var_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

MR_Word MR_CALL 
mdb__declarative_analyser__top_down_search_mode_0_f_0(void)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_f_0(void)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_3[1]);
  }
}

MR_Word MR_CALL 
mdb__declarative_analyser__divide_and_query_search_mode_0_f_0(void)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_3[0]);
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_response_1_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    {
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analyser_response_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
    return mdb__declarative_analyser__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

    {
      mdb__declarative_analyser____Compare____analyser_response_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    {
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analyser_state_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
    return mdb__declarative_analyser__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

    {
      mdb__declarative_analyser____Compare____analyser_state_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    {
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analysis_type_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
    return mdb__declarative_analyser__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
{
  {
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

    {
      mdb__declarative_analyser____Compare____analysis_type_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    {
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____explicit_tree_type_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
    return mdb__declarative_analyser__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001(
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

    {
      mdb__declarative_analyser____Compare____explicit_tree_type_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    {
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
    return mdb__declarative_analyser__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0_10001(
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

    {
      mdb__declarative_analyser____Compare____reason_for_question_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    {
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
    return mdb__declarative_analyser__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0_10001(
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

    {
      mdb__declarative_analyser____Compare____search_mode_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    {
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_response_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
    return mdb__declarative_analyser__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0_10001(
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

    {
      mdb__declarative_analyser____Compare____search_response_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001(
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
{
  {
    MR_bool mdb__declarative_analyser__succeeded;

    {
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____suspect_and_reason_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
    return mdb__declarative_analyser__succeeded;
  }
}

static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001(
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
{
  {
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

    {
      mdb__declarative_analyser____Compare____suspect_and_reason_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
  }
}

void mercury__mdb__declarative_analyser__init(void)
{
}

void mercury__mdb__declarative_analyser__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_response_1);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_state_1);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analysis_type_1);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_response_0);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0);
}

void mercury__mdb__declarative_analyser__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__declarative_analyser__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module mdb.declarative_analyser. */
