/*
** Automatically generated from `declarative_analyser.m'
** by the Mercury compiler,
** version rotd-2023-01-18
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


// :- module mdb.declarative_analyser.
// :- implementation.

/*
INIT mercury__mdb__declarative_analyser__init
ENDINIT
*/

#include "mdb.declarative_analyser.mih"


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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "io.stream_db.mih"
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

static const MR_DuArgLocn mdb__declarative_analyser__mdb__declarative_analyser__field_locns_reason_for_question_0_2[6];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2;

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3;

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5[3];

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5[3];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6[3];

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6[3];

static const MR_DuArgLocn mdb__declarative_analyser__mdb__declarative_analyser__field_locns_reason_for_question_0_6[3];

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

static const MR_DuArgLocn mdb__declarative_analyser__mdb__declarative_analyser__field_locns_search_mode_0_1[5];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2[3];

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2[3];

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2;

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3[1];

static const MR_DuArgLocn mdb__declarative_analyser__mdb__declarative_analyser__field_locns_search_mode_0_3[1];

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
mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1116__1_7_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_56,
  MR_Word STATE_VARIABLE_SearchSpace_0_7,
  MR_Integer HeadVar__3_65,
  MR_Integer HeadVar__4_66,
  MR_Integer * HeadVar__5_67,
  MR_Integer HeadVar__6_68,
  MR_Integer * HeadVar__7_69);

static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__738__1_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_37,
  MR_Word STATE_VARIABLE_SearchSpace_30_30,
  MR_Integer HeadVar__3_50);

static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__735__1_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_37,
  MR_Word STATE_VARIABLE_SearchSpace_30_30,
  MR_Integer HeadVar__3_46);

static MR_Box MR_CALL 
mdb__declarative_analyser__IntroducedFrom__func__bug_response__654__1_3_f_0(
  MR_Word TypeClassInfo_for_mercury_edt_24,
  MR_Word SearchSpace_8,
  MR_Integer HeadVar__3_30);

static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
mdb__declarative_analyser__search_mode_to_string_1_f_0(
  MR_Word SearchMode_3);

static MR_Box MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_String MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0(
  MR_Word Reason_3);

static MR_String MR_CALL 
mdb__declarative_analyser__weighting_to_reason_string_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer Weight1_2,
  MR_Integer Weight2_3);

static void MR_CALL 
mdb__declarative_analyser__process_answer_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_129,
  MR_Box Store_6,
  MR_Word Answer_7,
  MR_Integer SuspectId_8,
  MR_Word STATE_VARIABLE_Analyser_0_26,
  MR_Word * STATE_VARIABLE_Analyser_27);

static void MR_CALL 
mdb__declarative_analyser__decide_analyser_response_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_62,
  MR_Box Store_6,
  MR_Word Oracle_7,
  MR_Word * Response_8,
  MR_Word STATE_VARIABLE_Analyser_0_14,
  MR_Word * STATE_VARIABLE_Analyser_15);

static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_67,
  MR_Box Store_15,
  MR_Word Oracle_16,
  MR_Word STATE_VARIABLE_SearchSpace_0_44,
  MR_Word * STATE_VARIABLE_SearchSpace_45,
  MR_Word HowTrack_18,
  MR_Word STATE_VARIABLE_TriedShortcutProcs_0_46,
  MR_Word * STATE_VARIABLE_TriedShortcutProcs_47,
  MR_Word LastUnknown_20,
  MR_Integer SuspectId_21,
  MR_Word ArgPos_22,
  MR_Word TermPath_23,
  MR_Word FallBackSearchMode_24,
  MR_Word * NewMode_25,
  MR_Word * SearchResponse_26);

static void MR_CALL 
mdb__declarative_analyser__search_for_question_8_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_31,
  MR_Box Store_9,
  MR_Word Oracle_10,
  MR_Word STATE_VARIABLE_SearchSpace_0_26,
  MR_Word * STATE_VARIABLE_SearchSpace_27,
  MR_Word OldMode_12,
  MR_Word FallBackSearchMode_13,
  MR_Word * NewMode_14,
  MR_Word * Response_15);

static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_56,
  MR_Box Store_1,
  MR_Word Oracle_2,
  MR_Word Weighting_3,
  MR_Word HeadVar__4_4,
  MR_Integer TopId_5,
  MR_Word MaybeLastUnknown_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_7,
  MR_Word * STATE_VARIABLE_SearchSpace_8,
  MR_Word * Response_9);

static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_middle_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word SearchSpace_6,
  MR_ArrayPtr PathArray_7,
  MR_Integer Top_8,
  MR_Integer Bottom_9,
  MR_Integer * Unknown_10);

static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word SearchSpace_8,
  MR_ArrayPtr PathArray_9,
  MR_Integer OuterTop_10,
  MR_Integer OuterBottom_11,
  MR_Integer InnerTop_12,
  MR_Integer InnerBottom_13,
  MR_Integer * Unknown_14);

static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_37,
  MR_Box Store_6,
  MR_Word Oracle_7,
  MR_Word STATE_VARIABLE_SearchSpace_0_24,
  MR_Word * STATE_VARIABLE_SearchSpace_25,
  MR_Word * Response_9);

static void MR_CALL 
mdb__declarative_analyser__handle_search_response_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_78,
  MR_Box Store_6,
  MR_Word SearchResponse_7,
  MR_Word STATE_VARIABLE_Analyser_0_20,
  MR_Word * STATE_VARIABLE_Analyser_21,
  MR_Word * AnalyserResponse_9);

static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_24,
  MR_Box Store_7,
  MR_Word SearchSpace_8,
  MR_Integer BugId_9,
  MR_Word Evidence_10,
  MR_Word InadmissibleChildren_11,
  MR_Word * Response_12);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_1[18][2];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_2[2][3];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_3[3][1];

static /* final */ const MR_Integer mdb__declarative_analyser_scalar_common_4[2][3];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_5[2][7];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_6[1][6];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_7[1][10];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_8[1][5];




static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_1[18][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "continue_analysis")),
    ((MR_Box) ((MR_String) "received answer to unasked question"))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "change_search_mode")),
    ((MR_Box) ((MR_String) "binary mode requested, but no last question"))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "revise_analysis")),
    ((MR_Box) ((MR_String) "no root"))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "show_info")),
    ((MR_Box) ((MR_String) "no last question"))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "Context of current question")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "Search mode")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "Estimated questions remaining")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "Number of suspect events")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "handle_search_response")),
    ((MR_Box) ((MR_String) "search responded with query about ignored suspect"))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "top_down_search")),
    ((MR_Box) ((MR_String) "bug has unexplored or unknown children"))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "setup_binary_search")),
    ((MR_Box) ((MR_String) "TopId not an ancestor of BottomId"))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_8[0])),
    ((MR_Box) (mdb__declarative_analyser__reason_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_3[3][1] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Integer mdb__declarative_analyser_scalar_common_4[2][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 67663
  },
  /* row   1 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_4[1])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_7[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 7)),
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
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "float.mh"
#include "io.mh"
#include "mdb.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0 = {
  (MR_String) "analyser_response_no_suspects",
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

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1[2] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_bug_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1 = {
  (MR_String) "analyser_response_bug_found",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2 = {
  (MR_String) "analyser_response_oracle_question",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3 = {
  (MR_String) "analyser_response_require_explicit_subtree",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4 = {
  (MR_String) "analyser_response_require_explicit_supertree",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5 = {
  (MR_String) "analyser_response_revise",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____analyser_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____analyser_response_1_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "analyser_response",
  { mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1 },
  { mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_response_1 },
  (MR_Integer) 6,
  UINT16_C(12),
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1,

};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0[6] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1)
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
  INT16_C(6),
  UINT16_C(33),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_analyser_state_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0
};

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____analyser_state_1_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____analyser_state_1_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "analyser_state",
  { mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1 },
  { mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1,

};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0 = {
  (MR_String) "new_tree",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1 = {
  (MR_String) "resume_previous",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0
};

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analysis_type_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____analysis_type_1_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____analysis_type_1_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "analysis_type",
  { mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1 },
  { mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analysis_type_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1,

};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0 = {
  (MR_String) "explicit_subtree",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1 = {
  (MR_String) "explicit_supertree",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0
};

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "explicit_tree_type",
  { mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0 },
  { mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0,

};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0 = {
  (MR_String) "ques_reason_start",
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

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1 = {
  (MR_String) "ques_reason_top_down",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2[6] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)
};

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2[6] = {
  (MR_String) "binding_prim_op",
  (MR_String) "binding_node_eliminated",
  (MR_String) "binding_filename",
  (MR_String) "binding_line_no",
  (MR_String) "maybe_atom_path",
  (MR_String) "binding_proc"
};

static const MR_DuArgLocn mdb__declarative_analyser__mdb__declarative_analyser__field_locns_reason_for_question_0_2[6] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2 = {
  (MR_String) "ques_reason_binding_node",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2,
  mdb__declarative_analyser__mdb__declarative_analyser__field_locns_reason_for_question_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3 = {
  (MR_String) "ques_reason_subterm_no_proc_rep",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4 = {
  (MR_String) "ques_reason_binding_node_eliminated",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5[3] = {
  (MR_String) "binary_reason_bottom",
  (MR_String) "binary_reason_top",
  (MR_String) "binary_reason_split"
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5 = {
  (MR_String) "ques_reason_binary",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(5),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6[3] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6[3] = {
  (MR_String) "dq_weighting",
  (MR_String) "dq_old_weight",
  (MR_String) "dq_chosen_subtree_weight"
};

static const MR_DuArgLocn mdb__declarative_analyser__mdb__declarative_analyser__field_locns_reason_for_question_0_6[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6 = {
  (MR_String) "ques_reason_divide_and_query",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(6),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6,
  mdb__declarative_analyser__mdb__declarative_analyser__field_locns_reason_for_question_0_6,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7 = {
  (MR_String) "ques_reason_skipped",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8 = {
  (MR_String) "ques_reason_revise",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(6),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____reason_for_question_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____reason_for_question_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "reason_for_question",
  { mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_reason_for_question_0 },
  { mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_reason_for_question_0 },
  (MR_Integer) 9,
  UINT16_C(12),
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_reason_for_question_0,

};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0 = {
  (MR_String) "analyser_top_down",
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

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1[5] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0)
};

static const MR_DuArgLocn mdb__declarative_analyser__mdb__declarative_analyser__field_locns_search_mode_0_1[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1 = {
  (MR_String) "analyser_follow_subterm_end",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1,
  NULL,
  mdb__declarative_analyser__mdb__declarative_analyser__field_locns_search_mode_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct2 mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2[3] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2[3] = {
  (MR_String) "suspects",
  (MR_String) "range",
  (MR_String) "last_tested"
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2 = {
  (MR_String) "analyser_binary",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0)
};

static const MR_DuArgLocn mdb__declarative_analyser__mdb__declarative_analyser__field_locns_search_mode_0_3[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3 = {
  (MR_String) "analyser_divide_and_query",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3,
  NULL,
  mdb__declarative_analyser__mdb__declarative_analyser__field_locns_search_mode_0_3,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____search_mode_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____search_mode_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "search_mode",
  { mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0 },
  { mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_mode_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0,

};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0 = {
  (MR_String) "search_response_question",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1 = {
  (MR_String) "search_response_require_explicit_subtree",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2 = {
  (MR_String) "search_response_require_explicit_supertree",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3 = {
  (MR_String) "search_response_no_suspects",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4 = {
  (MR_String) "search_response_found_bug",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(4),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____search_response_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____search_response_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "search_response",
  { mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0 },
  { mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_response_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0,

};

static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0)
};

static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0 = {
  (MR_String) "suspect_and_reason",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0
};

static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "suspect_and_reason",
  { mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0 },
  { mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0,

};

static void MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1116__1_7_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_56,
  MR_Word STATE_VARIABLE_SearchSpace_0_7,
  MR_Integer HeadVar__3_65,
  MR_Integer HeadVar__4_66,
  MR_Integer * HeadVar__5_67,
  MR_Integer HeadVar__6_68,
  MR_Integer * HeadVar__7_69)
{
  MR_bool succeeded;
  MR_Word TypeInfo_71_71;
  MR_Integer Weight_72;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_56, (MR_Integer) 2, &TypeInfo_71_71);
  Weight_72 = mdb__declarative_edt__get_weight_2_f_0(TypeInfo_71_71, STATE_VARIABLE_SearchSpace_0_7, HeadVar__3_65);
  succeeded = (Weight_72 > HeadVar__4_66);
  if (succeeded)
  {
    *HeadVar__5_67 = Weight_72;
    *HeadVar__7_69 = HeadVar__3_65;
  }
  else
  {
    *HeadVar__5_67 = HeadVar__4_66;
    *HeadVar__7_69 = HeadVar__6_68;
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__738__1_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_37,
  MR_Word STATE_VARIABLE_SearchSpace_30_30,
  MR_Integer HeadVar__3_50)
{
  MR_bool succeeded;
  MR_Word TypeInfo_52_52;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &TypeInfo_52_52);
  succeeded = mdb__declarative_edt__suspect_inadmissible_2_p_0(TypeInfo_52_52, STATE_VARIABLE_SearchSpace_30_30, HeadVar__3_50);
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__735__1_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_37,
  MR_Word STATE_VARIABLE_SearchSpace_30_30,
  MR_Integer HeadVar__3_46)
{
  MR_bool succeeded;
  MR_Word TypeInfo_48_48;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &TypeInfo_48_48);
  succeeded = mdb__declarative_edt__suspect_correct_or_inadmissible_2_p_0(TypeInfo_48_48, STATE_VARIABLE_SearchSpace_30_30, HeadVar__3_46);
  return succeeded;
}

static MR_Box MR_CALL 
mdb__declarative_analyser__IntroducedFrom__func__bug_response__654__1_3_f_0(
  MR_Word TypeClassInfo_for_mercury_edt_24,
  MR_Word SearchSpace_8,
  MR_Integer HeadVar__3_30)
{
  MR_Box HeadVar__4_31;
  MR_Word TypeInfo_33_33;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &TypeInfo_33_33);
  HeadVar__4_31 = mdb__declarative_edt__get_edt_node_2_f_0(TypeInfo_33_33, SearchSpace_8, HeadVar__3_30);
  return HeadVar__4_31;
}

static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mdb__declarative_analyser____Compare____reason_for_question_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_67 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_68 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_67 == CastY_68);
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
                *HeadVar__1_1 = (MR_Integer) 1;
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
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_78 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_79 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_6;

                succeeded = (Var_79 < ArgY1_5);
                if (succeeded)
                {
                  SubResult1_6 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_79 > ArgY1_5);
                  if (succeeded)
                  {
                    SubResult1_6 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_6 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                  mdb__declarative_analyser____Compare____reason_for_question_0_0(HeadVar__1_1, Var_78, ArgY2_8);
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
          MR_Integer Var_80 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Integer ArgY1_25 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_80 < ArgY1_25);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_80 > ArgY1_25);
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
          MR_Word Var_75 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_76 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_77 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));

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
              {
                MR_Integer ArgY1_60 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_63 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_66 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_61;

                succeeded = (Var_77 < ArgY1_60);
                if (succeeded)
                {
                  SubResult1_61 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_77 > ArgY1_60);
                  if (succeeded)
                  {
                    SubResult1_61 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_61 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_61;
                else
                {
                  MR_Word SubResult2_64;

                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_analyser_scalar_common_1[6]), &SubResult2_64, ((MR_Box) (Var_76)), ((MR_Box) (ArgY2_63)));
                  succeeded = (SubResult2_64 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_64;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_analyser_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (Var_75)), ((MR_Box) (ArgY3_66)));
                }
              }
              break;
          }
        }
        break;
    }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_19 == CastY_20);
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
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (ArgX1_3 == ArgY1_4);
            if (succeeded)
              succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(ArgX2_5, ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word TypeInfo_22_22;
          MR_Word TypeInfo_23_23;
          MR_Integer ArgX1_13 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_14;
          MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_16;
          MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_14 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (ArgX1_13 == ArgY1_14);
            if (succeeded)
            {
              TypeInfo_22_22 = (MR_Word) (&mdb__declarative_analyser_scalar_common_1[6]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
              if (succeeded)
              {
                TypeInfo_23_23 = (MR_Word) (&mdb__declarative_analyser_scalar_common_1[6]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_17)), ((MR_Box) (ArgY3_18)));
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_229 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_230 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_229 == CastY_230);
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
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
          case (MR_Integer) 2:
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
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
          case (MR_Integer) 3:
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
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
          case (MR_Integer) 4:
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 5:
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
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 5:
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 5:
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
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_246 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
          MR_Word Var_247 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Integer Var_248 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_String Var_249 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_250 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Var_251 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);

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
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_41 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
                MR_Word ArgY2_44 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_String ArgY3_47 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY4_50 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY5_53 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word ArgY6_56 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 4))));
                MR_Word SubResult1_42;
                MR_Integer Var_255 = (MR_Integer) (Var_251);
                MR_Integer Var_256 = (MR_Integer) (ArgY1_41);

                succeeded = (Var_255 < Var_256);
                if (succeeded)
                {
                  SubResult1_42 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_255 > Var_256);
                  if (succeeded)
                  {
                    SubResult1_42 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_42 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_42;
                else
                {
                  MR_Word SubResult2_45;
                  MR_Integer Var_257 = (MR_Integer) (Var_250);
                  MR_Integer Var_258 = (MR_Integer) (ArgY2_44);

                  succeeded = (Var_257 < Var_258);
                  if (succeeded)
                  {
                    SubResult2_45 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_257 > Var_258);
                    if (succeeded)
                    {
                      SubResult2_45 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_45 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_45;
                  else
                  {
                    MR_Word SubResult3_48;

                    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_48, Var_249, ArgY3_47);
                    succeeded = (SubResult3_48 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_48;
                    else
                    {
                      MR_Word SubResult4_51;

                      succeeded = (Var_248 < ArgY4_50);
                      if (succeeded)
                      {
                        SubResult4_51 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_248 > ArgY4_50);
                        if (succeeded)
                        {
                          SubResult4_51 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult4_51 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult4_51;
                      else
                      {
                        MR_Word SubResult5_54;

                        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_analyser_scalar_common_1[3]), &SubResult5_54, ((MR_Box) (Var_247)), ((MR_Box) (ArgY5_53)));
                        succeeded = (SubResult5_54 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult5_54;
                        else
                          mdbcomp__prim_data____Compare____proc_label_0_0(HeadVar__1_1, Var_246, ArgY6_56);
                      }
                    }
                  }
                }
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
          MR_Integer Var_243 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Integer Var_244 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_245 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgY1_145 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_148 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_151 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_146;

                succeeded = (Var_245 < ArgY1_145);
                if (succeeded)
                {
                  SubResult1_146 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_245 > ArgY1_145);
                  if (succeeded)
                  {
                    SubResult1_146 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_146 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_146;
                else
                {
                  MR_Word SubResult2_149;

                  succeeded = (Var_244 < ArgY2_148);
                  if (succeeded)
                  {
                    SubResult2_149 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_244 > ArgY2_148);
                    if (succeeded)
                    {
                      SubResult2_149 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_149 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_149;
                  else
                  {
                    succeeded = (Var_243 < ArgY3_151);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_243 > ArgY3_151);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
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
          MR_Integer Var_252 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
          MR_Integer Var_253 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_254 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
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
              {
                MR_Word ArgY1_192 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Integer ArgY2_195 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_198 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_193;
                MR_Integer Var_259 = (MR_Integer) (Var_254);
                MR_Integer Var_260 = (MR_Integer) (ArgY1_192);

                succeeded = (Var_259 < Var_260);
                if (succeeded)
                {
                  SubResult1_193 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_259 > Var_260);
                  if (succeeded)
                  {
                    SubResult1_193 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_193 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_193;
                else
                {
                  MR_Word SubResult2_196;

                  succeeded = (Var_253 < ArgY2_195);
                  if (succeeded)
                  {
                    SubResult2_196 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_253 > ArgY2_195);
                    if (succeeded)
                    {
                      SubResult2_196 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult2_196 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_196;
                  else
                  {
                    succeeded = (Var_252 < ArgY3_198);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_252 > ArgY3_198);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
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

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_39 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_40 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_39 == CastY_40);
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
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_20 == CastX_19);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_22 == CastX_21);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_36 == CastX_35);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer CastX_37 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_38 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_38 == CastX_37);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_41_41;
          MR_Word ArgX1_7 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY2_10;
          MR_String ArgX3_11 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY3_12;
          MR_Integer ArgX4_13 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY4_14;
          MR_Word ArgX5_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY5_16;
          MR_Word ArgX6_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4))));
          MR_Word ArgY6_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
            ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY3_12 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY4_14 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            ArgY5_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
            ArgY6_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
            succeeded = (ArgX1_7 == ArgY1_8);
            if (succeeded)
            {
              succeeded = (ArgX2_9 == ArgY2_10);
              if (succeeded)
              {
                succeeded = (strcmp(ArgX3_11, ArgY3_12) == 0);
                if (succeeded)
                {
                  succeeded = (ArgX4_13 == ArgY4_14);
                  if (succeeded)
                  {
                    TypeInfo_41_41 = (MR_Word) (&mdb__declarative_analyser_scalar_common_1[3]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX5_15)), ((MR_Box) (ArgY5_16)));
                    if (succeeded)
                      succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ArgX6_17, ArgY6_18);
                  }
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_23 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_24;
          MR_Integer ArgX2_25 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_26;
          MR_Integer ArgX3_27 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_28;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_24 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_26 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_28 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (ArgX1_23 == ArgY1_24);
            if (succeeded)
            {
              succeeded = (ArgX2_25 == ArgY2_26);
              if (succeeded)
                succeeded = (ArgX3_27 == ArgY3_28);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_29 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_30;
          MR_Integer ArgX2_31 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_32;
          MR_Integer ArgX3_33 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_34;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_30 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            ArgY2_32 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_34 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
            succeeded = (ArgX1_29 == ArgY1_30);
            if (succeeded)
            {
              succeeded = (ArgX2_31 == ArgY2_32);
              if (succeeded)
                succeeded = (ArgX3_33 == ArgY3_34);
            }
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      succeeded = (Var_11 < ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_11 > ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Box Var_11 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0));

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, Var_11, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0(
  MR_Word TypeInfo_for_T_9,
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Box ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;

    mdb__declarative_edt____Compare____search_space_1_0(TypeInfo_for_T_23, &SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_analyser_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mdb__declarative_analyser____Compare____search_mode_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mdb__declarative_analyser____Compare____search_mode_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_analyser_scalar_common_1[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word TypeInfo_31_31;

              {
                TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_31_31, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1));
                MR_hl_field(0, TypeInfo_31_31, 1) = ((MR_Box) (TypeInfo_for_T_23));
              }
              mercury__maybe____Compare____maybe_1_0(TypeInfo_31_31, HeadVar__1_1, (MR_Word) (ArgX6_19), (MR_Word) (ArgY6_20));
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_82 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_83 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_82 == CastY_83);
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
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_97 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
          MR_Word Var_98 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_99 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_100 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Integer Var_101 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_19 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
                MR_Word ArgY5_31 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 4))) & (MR_Integer) 1);
                MR_Word SubResult1_20;

                succeeded = (Var_101 < ArgY1_19);
                if (succeeded)
                {
                  SubResult1_20 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (Var_101 > ArgY1_19);
                  if (succeeded)
                  {
                    SubResult1_20 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult1_20 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_20;
                else
                {
                  MR_Word SubResult2_23;

                  mdbcomp__program_representation____Compare____arg_pos_0_0(&SubResult2_23, Var_100, ArgY2_22);
                  succeeded = (SubResult2_23 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_23;
                  else
                  {
                    MR_Word SubResult3_26;

                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_analyser_scalar_common_1[2]), &SubResult3_26, ((MR_Box) (Var_99)), ((MR_Box) (ArgY3_25)));
                    succeeded = (SubResult3_26 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_26;
                    else
                    {
                      MR_Word SubResult4_29;

                      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_analyser_scalar_common_1[5]), &SubResult4_29, ((MR_Box) (Var_98)), ((MR_Box) (ArgY4_28)));
                      succeeded = (SubResult4_29 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult4_29;
                      else
                      {
                        MR_Integer Var_104 = (MR_Integer) (Var_97);
                        MR_Integer Var_105 = (MR_Integer) (ArgY5_31);

                        succeeded = (Var_104 < Var_105);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_104 > Var_105);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                    }
                  }
                }
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
          MR_Integer Var_93 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_94 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
          MR_ArrayPtr Var_95 = ((MR_ArrayPtr) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_ArrayPtr ArgY1_58 = ((MR_ArrayPtr) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_61 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_64 = ((MR_Integer) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_59;

                mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_analyser_scalar_common_1[4]), &SubResult1_59, ((MR_Box) (Var_95)), ((MR_Box) (ArgY1_58)));
                succeeded = (SubResult1_59 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_59;
                else
                {
                  MR_Word SubResult2_62;

                  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_analyser_scalar_common_2[0]), &SubResult2_62, ((MR_Box) (Var_94)), ((MR_Box) (ArgY2_61)));
                  succeeded = (SubResult2_62 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_62;
                  else
                  {
                    succeeded = (Var_93 < ArgY3_64);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_93 > ArgY3_64);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 2;
                      else
                        *HeadVar__1_1 = (MR_Integer) 0;
                    }
                  }
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
          MR_Word Var_96 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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
                MR_Word ArgY1_81 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Integer Var_102 = (MR_Integer) (Var_96);
                MR_Integer Var_103 = (MR_Integer) (ArgY1_81);

                succeeded = (Var_102 < Var_103);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_102 > Var_103);
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

MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word TypeCtorInfo_22_22;
    MR_Word TypeInfo_23_23;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

    succeeded = mdb__declarative_edt____Unify____search_space_1_0(TypeInfo_for_T_17, ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_20_20 = (MR_Word) (&mdb__declarative_analyser_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            TypeInfo_21_21 = (MR_Word) (&mdb__declarative_analyser_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeCtorInfo_22_22 = (MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1);
              {
                TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_23_23, 0) = ((MR_Box) (TypeCtorInfo_22_22));
                MR_hl_field(0, TypeInfo_23_23, 1) = ((MR_Box) (TypeInfo_for_T_17));
              }
              succeeded = mercury__maybe____Unify____maybe_1_0(TypeInfo_23_23, (MR_Word) (ArgX6_13), (MR_Word) (ArgY6_14));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0(
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
        {
          MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_4 == CastX_3);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_29_29;
          MR_Word TypeInfo_30_30;
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;
          MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_10;
          MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
          MR_Word ArgY4_12;
          MR_Word ArgX5_13 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4))) & (MR_Integer) 1);
          MR_Word ArgY5_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
            ArgY5_14 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))) & (MR_Integer) 1);
            succeeded = (ArgX1_5 == ArgY1_6);
            if (succeeded)
            {
              succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(ArgX2_7, ArgY2_8);
              if (succeeded)
              {
                TypeInfo_29_29 = (MR_Word) (&mdb__declarative_analyser_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
                if (succeeded)
                {
                  TypeInfo_30_30 = (MR_Word) (&mdb__declarative_analyser_scalar_common_1[5]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX4_11)), ((MR_Box) (ArgY4_12)));
                  if (succeeded)
                    succeeded = (ArgX5_13 == ArgY5_14);
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeCtorInfo_25_25;
          MR_Word TypeInfo_26_26;
          MR_ArrayPtr ArgX1_15 = ((MR_ArrayPtr) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_ArrayPtr ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_18;
          MR_Integer ArgX3_19 = ((MR_Integer) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_ArrayPtr) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_20 = ((MR_Integer) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 2))));
            TypeCtorInfo_25_25 = (MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0);
            succeeded = mercury__array____Unify____array_1_0(TypeCtorInfo_25_25, (MR_ArrayPtr) (ArgX1_15), (MR_ArrayPtr) (ArgY1_16));
            if (succeeded)
            {
              TypeInfo_26_26 = (MR_Word) (&mdb__declarative_analyser_scalar_common_2[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX2_17)), ((MR_Box) (ArgY2_18)));
              if (succeeded)
                succeeded = (ArgX3_19 == ArgY3_20);
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ArgX1_21 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_22;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_22 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_21 == ArgY1_22);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0(
  MR_Word TypeInfo_for_T_79,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_77 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_78 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_77 == CastY_78);
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
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_89 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_90 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_14;

                mdb__declarative_debugger____Compare____decl_bug_0_0(&SubResult1_14, Var_90, ArgY1_13);
                succeeded = (SubResult1_14 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_14;
                else
                {
                  MR_Word TypeInfo_86_86;

                  {
                    TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, TypeInfo_86_86, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
                    MR_hl_field(0, TypeInfo_86_86, 1) = ((MR_Box) (TypeInfo_for_T_79));
                  }
                  mercury__list____Compare____list_1_0(TypeInfo_86_86, HeadVar__1_1, (MR_Word) (Var_89), (MR_Word) (ArgY2_16));
                }
              }
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_91 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_34 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));

                mdb__declarative_debugger____Compare____decl_question_1_0(TypeInfo_for_T_79, HeadVar__1_1, Var_91, ArgY1_34);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box Var_92 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Box ArgY1_48 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));

                        mercury__builtin__compare_3_p_0(TypeInfo_for_T_79, HeadVar__1_1, Var_92, ArgY1_48);
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box Var_93 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Box ArgY1_62 = (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1));

                        mercury__builtin__compare_3_p_0(TypeInfo_for_T_79, HeadVar__1_1, Var_93, ArgY1_62);
                      }
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_94 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ArgY1_76 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        mdb__declarative_debugger____Compare____decl_question_1_0(TypeInfo_for_T_79, HeadVar__1_1, Var_94, ArgY1_76);
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
mdb__declarative_analyser____Unify____analyser_response_1_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
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
          MR_Word TypeCtorInfo_21_21;
          MR_Word TypeInfo_22_22;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mdb__declarative_debugger____Unify____decl_bug_0_0(ArgX1_5, ArgY1_6);
            if (succeeded)
            {
              TypeCtorInfo_21_21 = (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1);
              {
                TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, TypeInfo_22_22, 0) = ((MR_Box) (TypeCtorInfo_21_21));
                MR_hl_field(0, TypeInfo_22_22, 1) = ((MR_Box) (TypeInfo_for_T_19));
              }
              succeeded = mercury__list____Unify____list_1_0(TypeInfo_22_22, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(TypeInfo_for_T_19, ArgX1_9, ArgY1_10);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box ArgX1_11 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_12 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX1_11, ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box ArgX1_13 = (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1));
              MR_Box ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_14 = (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1));
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_19, ArgX1_13, ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(TypeInfo_for_T_19, ArgX1_15, ArgY1_16);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdb__declarative_analyser__debug_analyser_state_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word Analyser_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, Analyser_3, (MR_Integer) 5))));
}

void MR_CALL 
mdb__declarative_analyser__show_info_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_135,
  MR_Box Store_6,
  MR_Word OutStream_7,
  MR_Word Analyser_8)
{
  MR_bool succeeded;
  MR_Word TypeInfo_142_142;
  MR_Word SearchSpace_10 = ((MR_Word) ((MR_hl_field(0, Analyser_8, (MR_Integer) 0))));
  MR_Word Reason_14;
  MR_Word MaybeWeighting_21;
  MR_String InfoMessage_26;
  MR_String ReasonStr_27;
  MR_String ReasonSent_28;
  MR_String WrappedReason_29;
  MR_Word STATE_VARIABLE_FieldNames_55_55;
  MR_Word STATE_VARIABLE_Data_59_59;
  MR_Word STATE_VARIABLE_FieldNames_65_65;
  MR_Word STATE_VARIABLE_Data_69_69;
  MR_Word Var_70;
  MR_String Var_71;
  MR_Word Var_72;
  MR_Word STATE_VARIABLE_FieldNames_87_87;
  MR_Word STATE_VARIABLE_Data_91_91;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_113 = ((MR_Word) ((MR_hl_field(0, Analyser_8, (MR_Integer) 4))));
  MR_Word Var_74;

  if ((Var_113 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[10])));
      return;
    }
  else
  {
    MR_Integer LastId_13;
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, Var_113, (MR_Integer) 0))));
    MR_String FileName_15;
    MR_Integer LineNo_16;
    MR_Word MaybeReturnContext_17;
    MR_Word TypeInfo_137_137;
    MR_Box Var_36;
    MR_Word Var_37;

    LastId_13 = ((MR_Integer) ((MR_hl_field(0, Var_35, (MR_Integer) 0))));
    Reason_14 = ((MR_Word) ((MR_hl_field(0, Var_35, (MR_Integer) 1))));
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &TypeInfo_137_137);
    Var_36 = mdb__declarative_edt__get_edt_node_2_f_0(TypeInfo_137_137, SearchSpace_10, LastId_13);
    succeeded = mdb__declarative_edt__edt_context_4_p_0(TypeClassInfo_for_mercury_edt_135, Store_6, Var_36, &Var_37, &MaybeReturnContext_17);
    if (succeeded)
    {
      FileName_15 = ((MR_String) ((MR_hl_field(0, Var_37, (MR_Integer) 0))));
      LineNo_16 = ((MR_Integer) ((MR_hl_field(0, Var_37, (MR_Integer) 1))));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_String ContextStr_20;
      MR_Word Var_58;

      if ((MaybeReturnContext_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_51;
        MR_String Var_53;

        Var_53 = mercury__string__int_to_string_1_f_0(LineNo_16);
        Var_51 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_53);
        ContextStr_20 = mercury__string__f_43_43_2_f_0(FileName_15, Var_51);
      }
      else
      {
        MR_String ReturnFileName_18;
        MR_Integer ReturnLineNo_19;
        MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, MaybeReturnContext_17, (MR_Integer) 0))));
        MR_String Var_39;
        MR_String Var_41;
        MR_String Var_42;
        MR_String Var_43;
        MR_String Var_45;
        MR_String Var_46;
        MR_String Var_48;
        MR_String Var_49;

        ReturnFileName_18 = ((MR_String) ((MR_hl_field(0, Var_38, (MR_Integer) 0))));
        ReturnLineNo_19 = ((MR_Integer) ((MR_hl_field(0, Var_38, (MR_Integer) 1))));
        Var_42 = mercury__string__int_to_string_1_f_0(LineNo_16);
        Var_49 = mercury__string__int_to_string_1_f_0(ReturnLineNo_19);
        Var_48 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) ")");
        Var_46 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_48);
        Var_45 = mercury__string__f_43_43_2_f_0(ReturnFileName_18, Var_46);
        Var_43 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_45);
        Var_41 = mercury__string__f_43_43_2_f_0(Var_42, Var_43);
        Var_39 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_41);
        ContextStr_20 = mercury__string__f_43_43_2_f_0(FileName_15, Var_39);
      }
      mercury__list__append_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (MR_mkword(1, &mdb__declarative_analyser_scalar_common_1[11])), &STATE_VARIABLE_FieldNames_55_55);
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = ((MR_Box) (ContextStr_20));
        MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) ((MR_Unsigned) 0U), Var_58, &STATE_VARIABLE_Data_59_59);
    }
    else
    {
      STATE_VARIABLE_Data_59_59 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_FieldNames_55_55 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  STATE_VARIABLE_FieldNames_65_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_FieldNames_55_55, (MR_Word) (MR_mkword(1, &mdb__declarative_analyser_scalar_common_1[12])));
  Var_72 = ((MR_Word) ((MR_hl_field(0, Analyser_8, (MR_Integer) 2))));
  Var_71 = mdb__declarative_analyser__search_mode_to_string_1_f_0(Var_72);
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  STATE_VARIABLE_Data_69_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Data_59_59, Var_70);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &TypeInfo_142_142);
  MaybeWeighting_21 = mdb__declarative_edt__get_current_maybe_weighting_1_f_0(TypeInfo_142_142, SearchSpace_10);
  succeeded = (MaybeWeighting_21 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_74 = ((MR_Word) ((MR_hl_field(1, MaybeWeighting_21, (MR_Integer) 0))));
    succeeded = (Var_74 == (MR_Integer) 0);
  }
  if (succeeded)
  {
    MR_Word TypeInfo_145_145;
    MR_Integer StartId_23;
    MR_Integer Weight_24;
    MR_Word STATE_VARIABLE_FieldNames_77_77;
    MR_Word STATE_VARIABLE_Data_83_83;
    MR_Word Var_92;
    MR_String Var_93;
    MR_Integer RootId_22;
    MR_Word TypeInfo_143_143;
    MR_Word Var_75;
    MR_Word Var_76;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &TypeInfo_143_143);
    succeeded = mdb__declarative_edt__root_2_p_0(TypeInfo_143_143, SearchSpace_10, &RootId_22);
    if (succeeded)
      StartId_23 = RootId_22;
    else
    {
      MR_Word TypeInfo_144_144;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &TypeInfo_144_144);
      mdb__declarative_edt__topmost_det_2_p_0(TypeInfo_144_144, SearchSpace_10, &StartId_23);
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &TypeInfo_145_145);
    Weight_24 = mdb__declarative_edt__get_weight_2_f_0(TypeInfo_145_145, SearchSpace_10, StartId_23);
    Var_75 = ((MR_Word) ((MR_hl_field(0, Analyser_8, (MR_Integer) 2))));
    succeeded = ((MR_tag((MR_Word) Var_75)) == (MR_Integer) 3);
    if (succeeded)
    {
      Var_76 = ((MR_Unsigned) ((MR_hl_field(3, Var_75, (MR_Integer) 0))) & (MR_Integer) 1);
      succeeded = (Var_76 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Integer EstimatedQuestions_25;
      MR_Float Var_81;
      MR_Float Var_82;
      MR_Word Var_84;
      MR_String Var_85;

      STATE_VARIABLE_FieldNames_77_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_FieldNames_65_65, (MR_Word) (MR_mkword(1, &mdb__declarative_analyser_scalar_common_1[13])));
      Var_82 = mercury__float__float_1_f_0(Weight_24);
      Var_81 = mercury__math__log2_1_f_0(Var_82);
      EstimatedQuestions_25 = mercury__float__ceiling_to_int_1_f_0(Var_81);
      Var_85 = mercury__string__int_to_string_1_f_0(EstimatedQuestions_25);
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_Data_83_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Data_69_69, Var_84);
    }
    else
    {
      STATE_VARIABLE_Data_83_83 = STATE_VARIABLE_Data_69_69;
      STATE_VARIABLE_FieldNames_77_77 = STATE_VARIABLE_FieldNames_65_65;
    }
    STATE_VARIABLE_FieldNames_87_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_FieldNames_77_77, (MR_Word) (MR_mkword(1, &mdb__declarative_analyser_scalar_common_1[14])));
    Var_93 = mercury__string__int_to_string_thousands_1_f_0(Weight_24);
    {
      Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
      MR_hl_field(1, Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    STATE_VARIABLE_Data_91_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Data_83_83, Var_92);
  }
  else
  {
    STATE_VARIABLE_Data_91_91 = STATE_VARIABLE_Data_69_69;
    STATE_VARIABLE_FieldNames_87_87 = STATE_VARIABLE_FieldNames_65_65;
  }
  {
    Var_96 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_96, 0) = ((MR_Box) (STATE_VARIABLE_FieldNames_87_87));
  }
  {
    Var_98 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_98, 0) = ((MR_Box) (STATE_VARIABLE_Data_91_91));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_97));
  }
  InfoMessage_26 = mercury__string__format_table_2_f_0(Var_95, (MR_String) " : ");
  ReasonStr_27 = mdb__declarative_analyser__reason_to_string_1_f_0(Reason_14);
  ReasonSent_28 = mercury__string__f_43_43_2_f_0((MR_String) "The current question was chosen because ", ReasonStr_27);
  WrappedReason_29 = mercury__string__word_wrap_2_f_0(ReasonSent_28, (MR_Integer) 72);
  mercury__io__write_string_4_p_0(OutStream_7, InfoMessage_26);
  mercury__io__write_string_4_p_0(OutStream_7, (MR_String) "\n");
  mercury__io__write_string_4_p_0(OutStream_7, WrappedReason_29);
  mercury__io__write_string_4_p_0(OutStream_7, (MR_String) "\n");
}

static MR_String MR_CALL 
mdb__declarative_analyser__search_mode_to_string_1_f_0(
  MR_Word SearchMode_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) SearchMode_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Str_4 = (MR_String) "top down";
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_21 = ((MR_Unsigned) ((MR_hl_field(1, SearchMode_3, (MR_Integer) 4))) & (MR_Integer) 1);

        switch (Var_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Str_4 = (MR_String) "tracking marked sub-term (using accurate algorithm)";
            break;
          case (MR_Integer) 1:
            Str_4 = (MR_String) "tracking marked sub-term (using fast algorithm)";
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      Str_4 = (MR_String) "binary search on path";
      break;
    case (MR_Integer) 3:
      {
        MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(3, SearchMode_3, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (Var_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Str_4 = (MR_String) "divide and query";
            break;
          case (MR_Integer) 1:
            Str_4 = (MR_String) "suspicion divide and query";
            break;
        }
      }
      break;
  }
  return Str_4;
}

static MR_Box MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_String MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0(
  MR_Word Reason_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) Reason_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Reason_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Str_4 = (MR_String) "this is the node where the \140dd\' command was issued.";
          break;
        case (MR_Integer) 1:
          Str_4 = (MR_String) "this is the next node in the top-down search.";
          break;
        case (MR_Integer) 2:
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "tracking of the marked subterm had to be aborted here, ", (MR_String) "because of missing tracing information.");
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_67;

            Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "because the binding node lies in a portion of the tree ", (MR_String) "which has been eliminated.");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "tracking of the marked subterm was stopped here, ", Var_67);
          }
          break;
        case (MR_Integer) 4:
          Str_4 = (MR_String) "there are no more non-skipped questions left.";
          break;
        case (MR_Integer) 5:
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "this question is being revisited, because of ", (MR_String) "an unsuccessful previous bug search.");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word PrimOpType_5 = ((((MR_Unsigned) ((MR_hl_field(1, Reason_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 3);
        MR_Word Eliminated_6 = ((MR_Unsigned) ((MR_hl_field(1, Reason_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_String FileName_7 = ((MR_String) ((MR_hl_field(1, Reason_3, (MR_Integer) 1))));
        MR_Integer LineNo_8 = ((MR_Integer) ((MR_hl_field(1, Reason_3, (MR_Integer) 2))));
        MR_Word MaybePath_9 = ((MR_Word) ((MR_hl_field(1, Reason_3, (MR_Integer) 3))));
        MR_Word ProcLabel_10 = ((MR_Word) ((MR_hl_field(1, Reason_3, (MR_Integer) 4))));
        MR_String PrimOpStr_11;
        MR_String LineNoStr_12;
        MR_Word SymModule_13;
        MR_String Name_14;
        MR_Integer Arity_15;
        MR_Word PredOrFunc_16;
        MR_String PredOrFuncStr_17;
        MR_String Module_18;
        MR_String ArityStr_19;
        MR_String EliminatedSent_20;
        MR_String PathSent_24;
        MR_String Var_42;
        MR_String Var_43;
        MR_String Var_45;
        MR_String Var_46;
        MR_String Var_48;
        MR_String Var_49;
        MR_String Var_51;
        MR_String Var_52;
        MR_String Var_54;
        MR_String Var_55;
        MR_String Var_57;
        MR_String Var_58;
        MR_String Var_60;
        MR_String Var_61;
        MR_String Var_63;

        PrimOpStr_11 = mdb__declarative_edt__primitive_op_type_to_string_1_f_0(PrimOpType_5);
        LineNoStr_12 = mercury__string__int_to_string_1_f_0(LineNo_8);
        mdb__declarative_execution__get_pred_attributes_5_p_0(ProcLabel_10, &SymModule_13, &Name_14, &Arity_15, &PredOrFunc_16);
        switch (PredOrFunc_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            PredOrFuncStr_17 = (MR_String) "function";
            break;
          case (MR_Integer) 0:
            PredOrFuncStr_17 = (MR_String) "predicate";
            break;
        }
        Module_18 = mdbcomp__sym_name__sym_name_to_string_1_f_0(SymModule_13);
        ArityStr_19 = mercury__string__int_to_string_1_f_0(Arity_15);
        switch (Eliminated_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            EliminatedSent_20 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            EliminatedSent_20 = mercury__string__f_43_43_2_f_0((MR_String) " That node was, however, previously ", (MR_String) "eliminated from the bug search.");
            break;
        }
        if ((MaybePath_9 == (MR_Word) ((MR_Unsigned) 0U)))
          PathSent_24 = (MR_String) "";
        else
        {
          MR_Word Path_21 = ((MR_Word) ((MR_hl_field(1, MaybePath_9, (MR_Integer) 0))));
          MR_Word PathStrings_22;
          MR_String PathStr_23;
          MR_String Var_39;

          PathStrings_22 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdb__declarative_analyser_scalar_common_2[1]), Path_21);
          PathStr_23 = mercury__string__join_list_2_f_0((MR_String) "/", PathStrings_22);
          Var_39 = mercury__string__f_43_43_2_f_0(PathStr_23, (MR_String) ".");
          PathSent_24 = mercury__string__f_43_43_2_f_0((MR_String) "The path to the subterm in the atom is ", Var_39);
        }
        Var_63 = mercury__string__f_43_43_2_f_0(PathSent_24, EliminatedSent_20);
        Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "). ", Var_63);
        Var_60 = mercury__string__f_43_43_2_f_0(LineNoStr_12, Var_61);
        Var_58 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_60);
        Var_57 = mercury__string__f_43_43_2_f_0(FileName_7, Var_58);
        Var_55 = mercury__string__f_43_43_2_f_0((MR_String) " (", Var_57);
        Var_54 = mercury__string__f_43_43_2_f_0(ArityStr_19, Var_55);
        Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_54);
        Var_51 = mercury__string__f_43_43_2_f_0(Name_14, Var_52);
        Var_49 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_51);
        Var_48 = mercury__string__f_43_43_2_f_0(Module_18, Var_49);
        Var_46 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_48);
        Var_45 = mercury__string__f_43_43_2_f_0(PredOrFuncStr_17, Var_46);
        Var_43 = mercury__string__f_43_43_2_f_0((MR_String) " inside the ", Var_45);
        Var_42 = mercury__string__f_43_43_2_f_0(PrimOpStr_11, Var_43);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "the marked subterm was bound by the ", Var_42);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Bottom_25 = ((MR_Integer) ((MR_hl_field(2, Reason_3, (MR_Integer) 0))));
        MR_Integer Top_26 = ((MR_Integer) ((MR_hl_field(2, Reason_3, (MR_Integer) 1))));
        MR_Integer Split_27 = ((MR_Integer) ((MR_hl_field(2, Reason_3, (MR_Integer) 2))));
        MR_String PathLengthStr_28;
        MR_String SubPath1LengthStr_29;
        MR_String SubPath2LengthStr_30;
        MR_Integer Var_70;
        MR_Integer Var_71 = (MR_Integer) ((MR_Unsigned) Bottom_25 - (MR_Unsigned) Top_26);
        MR_Integer Var_73;
        MR_Integer Var_74;
        MR_Integer Var_75;
        MR_String Var_78;
        MR_String Var_79;
        MR_String Var_81;
        MR_String Var_82;
        MR_String Var_84;

        Var_70 = (MR_Integer) ((MR_Unsigned) Var_71 + (MR_Unsigned) 1);
        PathLengthStr_28 = mercury__string__int_to_string_thousands_1_f_0(Var_70);
        Var_73 = (MR_Integer) ((MR_Unsigned) Bottom_25 - (MR_Unsigned) Split_27);
        SubPath1LengthStr_29 = mercury__string__int_to_string_thousands_1_f_0(Var_73);
        Var_75 = (MR_Integer) ((MR_Unsigned) Split_27 - (MR_Unsigned) Top_26);
        Var_74 = (MR_Integer) ((MR_Unsigned) Var_75 + (MR_Unsigned) 1);
        SubPath2LengthStr_30 = mercury__string__int_to_string_thousands_1_f_0(Var_74);
        Var_84 = mercury__string__f_43_43_2_f_0(SubPath2LengthStr_30, (MR_String) ".");
        Var_82 = mercury__string__f_43_43_2_f_0((MR_String) " and ", Var_84);
        Var_81 = mercury__string__f_43_43_2_f_0(SubPath1LengthStr_29, Var_82);
        Var_79 = mercury__string__f_43_43_2_f_0((MR_String) " into two paths of length ", Var_81);
        Var_78 = mercury__string__f_43_43_2_f_0(PathLengthStr_28, Var_79);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides a path of length ", Var_78);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Weighting_31 = ((MR_Unsigned) ((MR_hl_field(3, Reason_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer OldWeight_32 = ((MR_Integer) ((MR_hl_field(3, Reason_3, (MR_Integer) 1))));
        MR_Integer SubtreeWeight_33 = ((MR_Integer) ((MR_hl_field(3, Reason_3, (MR_Integer) 2))));
        MR_Integer Var_86 = (MR_Integer) ((MR_Unsigned) OldWeight_32 - (MR_Unsigned) SubtreeWeight_33);

        Str_4 = mdb__declarative_analyser__weighting_to_reason_string_3_f_0(Weighting_31, Var_86, SubtreeWeight_33);
      }
      break;
  }
  return Str_4;
}

static MR_String MR_CALL 
mdb__declarative_analyser__weighting_to_reason_string_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer Weight1_2,
  MR_Integer Weight2_3)
{
  MR_String Str_4;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Weight1Str_8;
        MR_String Weight2Str_9;
        MR_String Var_11;
        MR_String Var_12;
        MR_String Var_14;

        Weight1Str_8 = mercury__string__int_to_string_thousands_1_f_0(Weight1_2);
        Weight2Str_9 = mercury__string__int_to_string_thousands_1_f_0(Weight2_3);
        Var_14 = mercury__string__f_43_43_2_f_0(Weight2Str_9, (MR_String) " events each.");
        Var_12 = mercury__string__f_43_43_2_f_0((MR_String) " and ", Var_14);
        Var_11 = mercury__string__f_43_43_2_f_0(Weight1Str_8, Var_12);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides the suspect area into two regions of ", Var_11);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Weight1Str_19;
        MR_String Weight2Str_20;
        MR_String Var_22;
        MR_String Var_24;
        MR_String Var_25;
        MR_String Var_27;

        Weight1Str_19 = mercury__string__int_to_string_thousands_1_f_0(Weight1_2);
        Weight2Str_20 = mercury__string__int_to_string_thousands_1_f_0(Weight2_3);
        Var_27 = mercury__string__f_43_43_2_f_0(Weight2Str_20, (MR_String) ".");
        Var_25 = mercury__string__f_43_43_2_f_0((MR_String) " and\n        ", Var_27);
        Var_24 = mercury__string__f_43_43_2_f_0(Weight1Str_19, Var_25);
        Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "two regions of suspicion ", Var_24);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides the suspect area into ", Var_22);
      }
      break;
  }
  return Str_4;
}

void MR_CALL 
mdb__declarative_analyser__revise_analysis_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_53,
  MR_Box Store_5,
  MR_Word * Response_6,
  MR_Word STATE_VARIABLE_Analyser_0_14,
  MR_Word * STATE_VARIABLE_Analyser_15)
{
  MR_bool succeeded;
  MR_Word SearchSpace0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_14, (MR_Integer) 0))));
  MR_Integer RootId_9;
  MR_Word TypeInfo_55_55;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_53, (MR_Integer) 2, &TypeInfo_55_55);
  succeeded = mdb__declarative_edt__root_2_p_0(TypeInfo_55_55, SearchSpace0_8, &RootId_9);
  if (succeeded)
  {
    MR_Word TypeInfo_57_57;
    MR_Box Node_10;
    MR_Word Question_11;
    MR_Word SearchSpace_12;
    MR_Word SuspectAndReason_13;
    MR_Word Var_19;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_35;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv1_Question_11;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_53, (MR_Integer) 2, &TypeInfo_57_57);
    Node_10 = mdb__declarative_edt__get_edt_node_2_f_0(TypeInfo_57_57, SearchSpace0_8, RootId_9);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_53, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_53)), Store_5, Node_10, &conv1_Question_11);
    Question_11 = ((MR_Word) (conv1_Question_11));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Response_6 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, base, 1) = ((MR_Box) (Question_11));
    }
    mdb__declarative_edt__revise_root_3_p_0(TypeClassInfo_for_mercury_edt_53, Store_5, SearchSpace0_8, &SearchSpace_12);
    Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_14, (MR_Integer) 1))));
    Var_33 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_14, (MR_Integer) 3))));
    Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_14, (MR_Integer) 5))));
    {
      SuspectAndReason_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SuspectAndReason_13, 0) = ((MR_Box) (RootId_9));
      MR_hl_field(0, SuspectAndReason_13, 1) = ((MR_Box) ((MR_Unsigned) 20U));
    }
    {
      Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_19, 0) = ((MR_Box) (SuspectAndReason_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Analyser_15 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (SearchSpace_12));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_33));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_35));
    }
  }
  else
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[9])));
      return;
    }
}

void MR_CALL 
mdb__declarative_analyser__change_search_mode_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_45,
  MR_Box Store_7,
  MR_Word Oracle_8,
  MR_Word UserMode_9,
  MR_Word * Response_10,
  MR_Word STATE_VARIABLE_Analyser_0_16,
  MR_Word * STATE_VARIABLE_Analyser_17)
{
  MR_bool succeeded;
  MR_Word STATE_VARIABLE_Analyser_20_20;

  switch (UserMode_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
      {
        MR_Word LastSearchQuestion_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_16, (MR_Integer) 4))));
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_16, (MR_Integer) 0))));

        if ((LastSearchQuestion_13 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[8])));
            return;
          }
        else
        {
          MR_Word TypeInfo_47_47;
          MR_Integer SuspectId_14;
          MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, LastSearchQuestion_13, (MR_Integer) 0))));
          MR_Word SearchMode_28;
          MR_Integer TopId_52;
          MR_Integer BottomId_53;
          MR_Integer RootId_51;
          MR_Word Path_54;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_44;

          SuspectId_14 = ((MR_Integer) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_45, (MR_Integer) 2, &TypeInfo_47_47);
          succeeded = mdb__declarative_edt__root_2_p_0(TypeInfo_47_47, Var_29, &RootId_51);
          if (succeeded)
          {
            TopId_52 = RootId_51;
            BottomId_53 = SuspectId_14;
          }
          else
          {
            mdb__declarative_edt__topmost_det_2_p_0(TypeInfo_47_47, Var_29, &TopId_52);
            BottomId_53 = SuspectId_14;
          }
          succeeded = mdb__declarative_edt__get_path_4_p_0(TypeInfo_47_47, Var_29, BottomId_53, TopId_52, &Path_54);
          if (succeeded)
          {
            MR_ArrayPtr PathArray_55;
            MR_Integer Top_56;
            MR_Integer Bottom_57;
            MR_Word Var_58;
            MR_ArrayPtr conv0_PathArray_55;

            conv0_PathArray_55 = mercury__array__from_list_1_f_0((MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0), Path_54);
            PathArray_55 = (MR_ArrayPtr) (conv0_PathArray_55);
            mercury__array__bounds_3_p_0((MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0), (MR_ArrayPtr) (PathArray_55), &Top_56, &Bottom_57);
            {
              Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_58, 0) = ((MR_Box) (Top_56));
              MR_hl_field(0, Var_58, 1) = ((MR_Box) (Bottom_57));
            }
            {
              SearchMode_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, SearchMode_28, 0) = ((MR_Box) (PathArray_55));
              MR_hl_field(2, SearchMode_28, 1) = ((MR_Box) (Var_58));
              MR_hl_field(2, SearchMode_28, 2) = ((MR_Box) (Bottom_57));
            }
          }
          else
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[17])));
              return;
            }
          Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_16, (MR_Integer) 0))));
          Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_16, (MR_Integer) 1))));
          Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_16, (MR_Integer) 3))));
          Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_16, (MR_Integer) 4))));
          Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_16, (MR_Integer) 5))));
          {
            STATE_VARIABLE_Analyser_20_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, STATE_VARIABLE_Analyser_20_20, 0) = ((MR_Box) (Var_39));
            MR_hl_field(0, STATE_VARIABLE_Analyser_20_20, 1) = ((MR_Box) (Var_40));
            MR_hl_field(0, STATE_VARIABLE_Analyser_20_20, 2) = ((MR_Box) (SearchMode_28));
            MR_hl_field(0, STATE_VARIABLE_Analyser_20_20, 3) = ((MR_Box) (Var_42));
            MR_hl_field(0, STATE_VARIABLE_Analyser_20_20, 4) = ((MR_Box) (Var_43));
            MR_hl_field(0, STATE_VARIABLE_Analyser_20_20, 5) = ((MR_Box) (Var_44));
          }
        }
      }
      break;
    case (MR_Integer) 1:
      mdb__declarative_analyser__set_analyser_fallback_search_mode_4_p_0(TypeClassInfo_for_mercury_edt_45, Store_7, (MR_Word) (MR_mkword(3, &mdb__declarative_analyser_scalar_common_3[0])), STATE_VARIABLE_Analyser_0_16, &STATE_VARIABLE_Analyser_20_20);
      break;
    case (MR_Integer) 2:
      mdb__declarative_analyser__set_analyser_fallback_search_mode_4_p_0(TypeClassInfo_for_mercury_edt_45, Store_7, (MR_Word) (MR_mkword(3, &mdb__declarative_analyser_scalar_common_3[1])), STATE_VARIABLE_Analyser_0_16, &STATE_VARIABLE_Analyser_20_20);
      break;
    case (MR_Integer) 0:
      mdb__declarative_analyser__set_analyser_fallback_search_mode_4_p_0(TypeClassInfo_for_mercury_edt_45, Store_7, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Analyser_0_16, &STATE_VARIABLE_Analyser_20_20);
      break;
  }
  mdb__declarative_analyser__decide_analyser_response_5_p_0(TypeClassInfo_for_mercury_edt_45, Store_7, Oracle_8, Response_10, STATE_VARIABLE_Analyser_20_20, STATE_VARIABLE_Analyser_17);
}

void MR_CALL 
mdb__declarative_analyser__continue_analysis_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_33,
  MR_Box Store_7,
  MR_Word Oracle_8,
  MR_Word Answer_9,
  MR_Word * Response_10,
  MR_Word STATE_VARIABLE_Analyser_0_14,
  MR_Word * STATE_VARIABLE_Analyser_15)
{
  MR_Word STATE_VARIABLE_Analyser_18_18;
  MR_Word Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_14, (MR_Integer) 4))));
  MR_Word SearchSpace0_41;
  MR_Word SearchSpace_42;
  MR_Word NewMode_43;
  MR_Word SearchResponse_44;
  MR_Word Var_45;
  MR_Word STATE_VARIABLE_Analyser_21_50;
  MR_Word Var_51;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_74;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_78;

  if ((Var_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[7])));
      return;
    }
  else
  {
    MR_Integer SuspectId_12;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, Var_36, (MR_Integer) 0))));

    SuspectId_12 = ((MR_Integer) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
    mdb__declarative_analyser__process_answer_5_p_0(TypeClassInfo_for_mercury_edt_33, Store_7, Answer_9, SuspectId_12, STATE_VARIABLE_Analyser_0_14, &STATE_VARIABLE_Analyser_18_18);
  }
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_18_18, (MR_Integer) 0))));
  mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(TypeClassInfo_for_mercury_edt_33, Store_7, Var_45, (MR_String) "Start of decide_analyser_response");
  SearchSpace0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_18_18, (MR_Integer) 0))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_18_18, (MR_Integer) 2))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_18_18, (MR_Integer) 3))));
  mdb__declarative_analyser__search_for_question_8_p_0(TypeClassInfo_for_mercury_edt_33, Store_7, Oracle_8, SearchSpace0_41, &SearchSpace_42, Var_59, Var_60, &NewMode_43, &SearchResponse_44);
  Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_18_18, (MR_Integer) 1))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_18_18, (MR_Integer) 3))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_18_18, (MR_Integer) 4))));
  Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_18_18, (MR_Integer) 5))));
  {
    STATE_VARIABLE_Analyser_21_50 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Analyser_21_50, 0) = ((MR_Box) (SearchSpace_42));
    MR_hl_field(0, STATE_VARIABLE_Analyser_21_50, 1) = ((MR_Box) (Var_74));
    MR_hl_field(0, STATE_VARIABLE_Analyser_21_50, 2) = ((MR_Box) (NewMode_43));
    MR_hl_field(0, STATE_VARIABLE_Analyser_21_50, 3) = ((MR_Box) (Var_76));
    MR_hl_field(0, STATE_VARIABLE_Analyser_21_50, 4) = ((MR_Box) (Var_77));
    MR_hl_field(0, STATE_VARIABLE_Analyser_21_50, 5) = ((MR_Box) (Var_78));
  }
  mdb__declarative_analyser__handle_search_response_5_p_0(TypeClassInfo_for_mercury_edt_33, Store_7, SearchResponse_44, STATE_VARIABLE_Analyser_21_50, STATE_VARIABLE_Analyser_15, Response_10);
  Var_51 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_Analyser_15, (MR_Integer) 0))));
  mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(TypeClassInfo_for_mercury_edt_33, Store_7, Var_51, (MR_String) "End of decide_analyser_response");
}

static void MR_CALL 
mdb__declarative_analyser__process_answer_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_129,
  MR_Box Store_6,
  MR_Word Answer_7,
  MR_Integer SuspectId_8,
  MR_Word STATE_VARIABLE_Analyser_0_26,
  MR_Word * STATE_VARIABLE_Analyser_27)
{
  switch (MR_tag((MR_Word) Answer_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_142 = ((MR_Unsigned) ((MR_hl_field(0, Answer_7, (MR_Integer) 1))) & (MR_Integer) 3);
        MR_Word Var_149 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 0))));

        switch (Var_142) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_133_133;
              MR_Word SearchSpace_44;
              MR_Word Var_79;
              MR_Word Var_80;
              MR_Word Var_81;
              MR_Word Var_82;
              MR_Word Var_83;

              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_129, (MR_Integer) 2, &TypeInfo_133_133);
              mdb__declarative_edt__assert_suspect_is_correct_3_p_0(TypeInfo_133_133, SuspectId_8, Var_149, &SearchSpace_44);
              Var_79 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 1))));
              Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 2))));
              Var_81 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 3))));
              Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 4))));
              Var_83 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 5))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Analyser_27 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (SearchSpace_44));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_79));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_80));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_81));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_82));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_83));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_137_137;
              MR_Word SearchSpace_48;
              MR_Word Var_101;
              MR_Word Var_102;
              MR_Word Var_103;
              MR_Word Var_104;
              MR_Word Var_105;

              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_129, (MR_Integer) 2, &TypeInfo_137_137);
              mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(TypeInfo_137_137, SuspectId_8, Var_149, &SearchSpace_48);
              Var_101 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 1))));
              Var_102 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 2))));
              Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 3))));
              Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 4))));
              Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 5))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Analyser_27 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (SearchSpace_48));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_101));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_102));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_103));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_104));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_105));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_135_135;
              MR_Word SearchSpace_46;
              MR_Word Var_90;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word Var_93;
              MR_Word Var_94;

              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_129, (MR_Integer) 2, &TypeInfo_135_135);
              mdb__declarative_edt__assert_suspect_is_inadmissible_3_p_0(TypeInfo_135_135, SuspectId_8, Var_149, &SearchSpace_46);
              Var_90 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 1))));
              Var_91 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 2))));
              Var_92 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 3))));
              Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 4))));
              Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 5))));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Analyser_27 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (SearchSpace_46));
                MR_hl_field(0, base, 1) = ((MR_Box) (Var_90));
                MR_hl_field(0, base, 2) = ((MR_Box) (Var_91));
                MR_hl_field(0, base, 3) = ((MR_Box) (Var_92));
                MR_hl_field(0, base, 4) = ((MR_Box) (Var_93));
                MR_hl_field(0, base, 5) = ((MR_Box) (Var_94));
              }
            }
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box Node_17 = (MR_hl_field(1, Answer_7, (MR_Integer) 0));
        MR_Word ArgPos_18 = ((MR_Word) ((MR_hl_field(1, Answer_7, (MR_Integer) 1))));
        MR_Word TermPath_19 = ((MR_Word) ((MR_hl_field(1, Answer_7, (MR_Integer) 2))));
        MR_Word HowTrack_20 = ((((MR_Unsigned) ((MR_hl_field(1, Answer_7, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
        MR_Word ShouldAssertInvalid_21 = ((MR_Unsigned) ((MR_hl_field(1, Answer_7, (MR_Integer) 3))) & (MR_Integer) 1);
        MR_Word DebugOrigin_23;
        MR_Word NewSearchMode_25;
        MR_Word STATE_VARIABLE_Analyser_36_36;
        MR_Word Var_37;
        MR_Word STATE_VARIABLE_Analyser_38_38;
        MR_Word Var_22;
        MR_Word Var_106;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_109;
        MR_Word Var_110;
        MR_Word Var_123;
        MR_Word Var_124;
        MR_Word Var_126;
        MR_Word Var_127;
        MR_Word Var_128;

        mdb__declarative_edt__edt_dependency_6_p_0(TypeClassInfo_for_mercury_edt_129, Store_6, Node_17, ArgPos_18, TermPath_19, &Var_22, &DebugOrigin_23);
        {
          Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_37, 0) = ((MR_Box) (DebugOrigin_23));
        }
        Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 0))));
        Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 1))));
        Var_108 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 2))));
        Var_109 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 3))));
        Var_110 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 4))));
        {
          STATE_VARIABLE_Analyser_36_36 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Analyser_36_36, 0) = ((MR_Box) (Var_106));
          MR_hl_field(0, STATE_VARIABLE_Analyser_36_36, 1) = ((MR_Box) (Var_107));
          MR_hl_field(0, STATE_VARIABLE_Analyser_36_36, 2) = ((MR_Box) (Var_108));
          MR_hl_field(0, STATE_VARIABLE_Analyser_36_36, 3) = ((MR_Box) (Var_109));
          MR_hl_field(0, STATE_VARIABLE_Analyser_36_36, 4) = ((MR_Box) (Var_110));
          MR_hl_field(0, STATE_VARIABLE_Analyser_36_36, 5) = ((MR_Box) (Var_37));
        }
        switch (ShouldAssertInvalid_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Mode_24;
              MR_Word SearchSpace0_49;
              MR_Word SearchSpace_50;
              MR_Word Var_112;
              MR_Word Var_113;
              MR_Word Var_114;
              MR_Word Var_115;
              MR_Word Var_116;

              mdb__declarative_edt__edt_subterm_mode_5_p_0(TypeClassInfo_for_mercury_edt_129, Store_6, Node_17, ArgPos_18, TermPath_19, &Mode_24);
              SearchSpace0_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_36_36, (MR_Integer) 0))));
              Var_112 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_36_36, (MR_Integer) 1))));
              Var_113 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_36_36, (MR_Integer) 2))));
              Var_114 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_36_36, (MR_Integer) 3))));
              Var_115 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_36_36, (MR_Integer) 4))));
              Var_116 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_36_36, (MR_Integer) 5))));
              switch (Mode_24) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word TypeInfo_139_139;

                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_129, (MR_Integer) 2, &TypeInfo_139_139);
                    mdb__declarative_edt__assert_suspect_is_inadmissible_3_p_0(TypeInfo_139_139, SuspectId_8, SearchSpace0_49, &SearchSpace_50);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeInfo_141_141;

                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_129, (MR_Integer) 2, &TypeInfo_141_141);
                    mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(TypeInfo_141_141, SuspectId_8, SearchSpace0_49, &SearchSpace_50);
                  }
                  break;
              }
              {
                STATE_VARIABLE_Analyser_38_38 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, STATE_VARIABLE_Analyser_38_38, 0) = ((MR_Box) (SearchSpace_50));
                MR_hl_field(0, STATE_VARIABLE_Analyser_38_38, 1) = ((MR_Box) (Var_112));
                MR_hl_field(0, STATE_VARIABLE_Analyser_38_38, 2) = ((MR_Box) (Var_113));
                MR_hl_field(0, STATE_VARIABLE_Analyser_38_38, 3) = ((MR_Box) (Var_114));
                MR_hl_field(0, STATE_VARIABLE_Analyser_38_38, 4) = ((MR_Box) (Var_115));
                MR_hl_field(0, STATE_VARIABLE_Analyser_38_38, 5) = ((MR_Box) (Var_116));
              }
            }
            break;
          case (MR_Integer) 1:
            STATE_VARIABLE_Analyser_38_38 = STATE_VARIABLE_Analyser_36_36;
            break;
        }
        {
          NewSearchMode_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, NewSearchMode_25, 0) = ((MR_Box) (SuspectId_8));
          MR_hl_field(1, NewSearchMode_25, 1) = ((MR_Box) (ArgPos_18));
          MR_hl_field(1, NewSearchMode_25, 2) = ((MR_Box) (TermPath_19));
          MR_hl_field(1, NewSearchMode_25, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, NewSearchMode_25, 4) = (MR_Box) ((MR_Unsigned) (HowTrack_20));
        }
        Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_38_38, (MR_Integer) 0))));
        Var_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_38_38, (MR_Integer) 1))));
        Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_38_38, (MR_Integer) 3))));
        Var_127 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_38_38, (MR_Integer) 4))));
        Var_128 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_38_38, (MR_Integer) 5))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Analyser_27 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_123));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_124));
          MR_hl_field(0, base, 2) = ((MR_Box) (NewSearchMode_25));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_126));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_127));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_128));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word SearchSpace0_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 0))));
        MR_Word SearchSpace_42;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;

        mdb__declarative_edt__ignore_suspect_4_p_0(TypeClassInfo_for_mercury_edt_129, Store_6, SuspectId_8, SearchSpace0_41, &SearchSpace_42);
        Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 1))));
        Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 2))));
        Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 3))));
        Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 4))));
        Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 5))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Analyser_27 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (SearchSpace_42));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_68));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_69));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_70));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_71));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_72));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word TypeInfo_131_131;
        MR_Word SearchSpace0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 0))));
        MR_Word SearchSpace_12;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_129, (MR_Integer) 2, &TypeInfo_131_131);
        mdb__declarative_edt__skip_suspect_3_p_0(TypeInfo_131_131, SuspectId_8, SearchSpace0_11, &SearchSpace_12);
        Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 1))));
        Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 2))));
        Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 3))));
        Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 4))));
        Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_26, (MR_Integer) 5))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Analyser_27 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (SearchSpace_12));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_57));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_58));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_59));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_60));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_61));
        }
      }
      break;
  }
}

void MR_CALL 
mdb__declarative_analyser__start_or_resume_analysis_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_76,
  MR_Box Store_7,
  MR_Word Oracle_8,
  MR_Word AnalysisType_9,
  MR_Word * Response_10,
  MR_Word STATE_VARIABLE_Analyser_0_22,
  MR_Word * STATE_VARIABLE_Analyser_23)
{
  MR_bool succeeded;

  if ((AnalysisType_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Response0_21;

    succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(TypeClassInfo_for_mercury_edt_76, Store_7, STATE_VARIABLE_Analyser_0_22, &Response0_21);
    if (succeeded)
    {
      *Response_10 = Response0_21;
      *STATE_VARIABLE_Analyser_23 = STATE_VARIABLE_Analyser_0_22;
    }
    else
      mdb__declarative_analyser__decide_analyser_response_5_p_0(TypeClassInfo_for_mercury_edt_76, Store_7, Oracle_8, Response_10, STATE_VARIABLE_Analyser_0_22, STATE_VARIABLE_Analyser_23);
  }
  else
  {
    MR_Box Node_12 = (MR_hl_field(1, AnalysisType_9, (MR_Integer) 0));
    MR_Word MaybeRequireExplicit_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_22, (MR_Integer) 1))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_22, (MR_Integer) 0))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_22, (MR_Integer) 2))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_22, (MR_Integer) 3))));
    MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_22, (MR_Integer) 4))));
    MR_Word Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_22, (MR_Integer) 5))));

    if ((MaybeRequireExplicit_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeInfo_80_80;
      MR_Word TypeInfo_81_81;
      MR_Word MaybeWeighting_18;
      MR_Integer TopMostId_19;
      MR_Word Question_20;
      MR_Word STATE_VARIABLE_Analyser_28_28;
      MR_Word STATE_VARIABLE_Analyser_30_30;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word SearchSpace_36;
      MR_Word FallBack_82;
      MR_Word Var_83;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_75;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
      MR_Box conv1_Question_20;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &TypeInfo_80_80);
      FallBack_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_22, (MR_Integer) 3))));
      Var_83 = mdb__declarative_edt__empty_search_space_0_f_0(TypeInfo_80_80);
      {
        STATE_VARIABLE_Analyser_28_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Analyser_28_28, 0) = ((MR_Box) (Var_83));
        MR_hl_field(0, STATE_VARIABLE_Analyser_28_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, STATE_VARIABLE_Analyser_28_28, 2) = ((MR_Box) (FallBack_82));
        MR_hl_field(0, STATE_VARIABLE_Analyser_28_28, 3) = ((MR_Box) (FallBack_82));
        MR_hl_field(0, STATE_VARIABLE_Analyser_28_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, STATE_VARIABLE_Analyser_28_28, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      switch (MR_tag((MR_Word) FallBack_82)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeWeighting_18 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          MaybeWeighting_18 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 3:
          {
            MR_Word Weighting_93 = ((MR_Unsigned) ((MR_hl_field(3, FallBack_82, (MR_Integer) 0))) & (MR_Integer) 1);

            {
              MaybeWeighting_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MaybeWeighting_18, 0) = ((MR_Box) (Weighting_93));
            }
          }
          break;
      }
      mdb__declarative_edt__initialise_search_space_4_p_0(TypeClassInfo_for_mercury_edt_76, Store_7, MaybeWeighting_18, Node_12, &SearchSpace_36);
      Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_28_28, (MR_Integer) 1))));
      Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_28_28, (MR_Integer) 2))));
      Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_28_28, (MR_Integer) 3))));
      Var_68 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_28_28, (MR_Integer) 4))));
      Var_69 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_28_28, (MR_Integer) 5))));
      {
        STATE_VARIABLE_Analyser_30_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Analyser_30_30, 0) = ((MR_Box) (SearchSpace_36));
        MR_hl_field(0, STATE_VARIABLE_Analyser_30_30, 1) = ((MR_Box) (Var_65));
        MR_hl_field(0, STATE_VARIABLE_Analyser_30_30, 2) = ((MR_Box) (Var_66));
        MR_hl_field(0, STATE_VARIABLE_Analyser_30_30, 3) = ((MR_Box) (Var_67));
        MR_hl_field(0, STATE_VARIABLE_Analyser_30_30, 4) = ((MR_Box) (Var_68));
        MR_hl_field(0, STATE_VARIABLE_Analyser_30_30, 5) = ((MR_Box) (Var_69));
      }
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &TypeInfo_81_81);
      mdb__declarative_edt__topmost_det_2_p_0(TypeInfo_81_81, SearchSpace_36, &TopMostId_19);
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (TopMostId_19));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      }
      Var_70 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_30_30, (MR_Integer) 0))));
      Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_30_30, (MR_Integer) 1))));
      Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_30_30, (MR_Integer) 2))));
      Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_30_30, (MR_Integer) 3))));
      Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_30_30, (MR_Integer) 5))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Analyser_23 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_71));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_72));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_73));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_32));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_75));
      }
      func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_76, (MR_Integer) 0)), (MR_Integer) 5))));
      func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_76)), Store_7, Node_12, &conv1_Question_20);
      Question_20 = ((MR_Word) (conv1_Question_20));
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Response_10 = base;
        MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, base, 1) = ((MR_Box) (Question_20));
      }
    }
    else
    {
      MR_Word TreeType_14 = ((MR_Word) ((MR_hl_field(1, MaybeRequireExplicit_13, (MR_Integer) 0))));
      MR_Word SearchSpace_16;
      MR_Word STATE_VARIABLE_Analyser_25_25;

      if ((TreeType_14 == (MR_Word) ((MR_Unsigned) 0U)))
        mdb__declarative_edt__incorporate_explicit_supertree_5_p_0(TypeClassInfo_for_mercury_edt_76, Store_7, Oracle_8, Node_12, Var_37, &SearchSpace_16);
      else
      {
        MR_Word TypeInfo_78_78;
        MR_Integer SuspectId_17 = ((MR_Integer) ((MR_hl_field(1, TreeType_14, (MR_Integer) 0))));

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &TypeInfo_78_78);
        mdb__declarative_edt__incorporate_explicit_subtree_4_p_0(TypeInfo_78_78, SuspectId_17, Node_12, Var_37, &SearchSpace_16);
      }
      {
        STATE_VARIABLE_Analyser_25_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Analyser_25_25, 0) = ((MR_Box) (SearchSpace_16));
        MR_hl_field(0, STATE_VARIABLE_Analyser_25_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, STATE_VARIABLE_Analyser_25_25, 2) = ((MR_Box) (Var_38));
        MR_hl_field(0, STATE_VARIABLE_Analyser_25_25, 3) = ((MR_Box) (Var_39));
        MR_hl_field(0, STATE_VARIABLE_Analyser_25_25, 4) = ((MR_Box) (Var_40));
        MR_hl_field(0, STATE_VARIABLE_Analyser_25_25, 5) = ((MR_Box) (Var_41));
      }
      mdb__declarative_analyser__decide_analyser_response_5_p_0(TypeClassInfo_for_mercury_edt_76, Store_7, Oracle_8, Response_10, STATE_VARIABLE_Analyser_25_25, STATE_VARIABLE_Analyser_23);
    }
  }
}

static void MR_CALL 
mdb__declarative_analyser__decide_analyser_response_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_62,
  MR_Box Store_6,
  MR_Word Oracle_7,
  MR_Word * Response_8,
  MR_Word STATE_VARIABLE_Analyser_0_14,
  MR_Word * STATE_VARIABLE_Analyser_15)
{
  MR_Word SearchSpace0_10;
  MR_Word SearchSpace_11;
  MR_Word NewMode_12;
  MR_Word SearchResponse_13;
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_14, (MR_Integer) 0))));
  MR_Word STATE_VARIABLE_Analyser_21_21;
  MR_Word Var_23;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_46;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;

  mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(TypeClassInfo_for_mercury_edt_62, Store_6, Var_16, (MR_String) "Start of decide_analyser_response");
  SearchSpace0_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_14, (MR_Integer) 0))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_14, (MR_Integer) 2))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_14, (MR_Integer) 3))));
  mdb__declarative_analyser__search_for_question_8_p_0(TypeClassInfo_for_mercury_edt_62, Store_6, Oracle_7, SearchSpace0_10, &SearchSpace_11, Var_31, Var_32, &NewMode_12, &SearchResponse_13);
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_14, (MR_Integer) 1))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_14, (MR_Integer) 3))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_14, (MR_Integer) 4))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_14, (MR_Integer) 5))));
  {
    STATE_VARIABLE_Analyser_21_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Analyser_21_21, 0) = ((MR_Box) (SearchSpace_11));
    MR_hl_field(0, STATE_VARIABLE_Analyser_21_21, 1) = ((MR_Box) (Var_46));
    MR_hl_field(0, STATE_VARIABLE_Analyser_21_21, 2) = ((MR_Box) (NewMode_12));
    MR_hl_field(0, STATE_VARIABLE_Analyser_21_21, 3) = ((MR_Box) (Var_48));
    MR_hl_field(0, STATE_VARIABLE_Analyser_21_21, 4) = ((MR_Box) (Var_49));
    MR_hl_field(0, STATE_VARIABLE_Analyser_21_21, 5) = ((MR_Box) (Var_50));
  }
  mdb__declarative_analyser__handle_search_response_5_p_0(TypeClassInfo_for_mercury_edt_62, Store_6, SearchResponse_13, STATE_VARIABLE_Analyser_21_21, STATE_VARIABLE_Analyser_15, Response_8);
  Var_23 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_Analyser_15, (MR_Integer) 0))));
  mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(TypeClassInfo_for_mercury_edt_62, Store_6, Var_23, (MR_String) "End of decide_analyser_response");
}

static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_67,
  MR_Box Store_15,
  MR_Word Oracle_16,
  MR_Word STATE_VARIABLE_SearchSpace_0_44,
  MR_Word * STATE_VARIABLE_SearchSpace_45,
  MR_Word HowTrack_18,
  MR_Word STATE_VARIABLE_TriedShortcutProcs_0_46,
  MR_Word * STATE_VARIABLE_TriedShortcutProcs_47,
  MR_Word LastUnknown_20,
  MR_Integer SuspectId_21,
  MR_Word ArgPos_22,
  MR_Word TermPath_23,
  MR_Word FallBackSearchMode_24,
  MR_Word * NewMode_25,
  MR_Word * SearchResponse_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word FindOriginResponse_27;
    MR_Word STATE_VARIABLE_TriedShortcutProcs_48_48;
    MR_Word STATE_VARIABLE_SearchSpace_49_49;

    // setup for model_det tailcalls optimized into a loop
    ;
    mdb__declarative_edt__find_subterm_origin_11_p_0(TypeClassInfo_for_mercury_edt_67, Store_15, Oracle_16, SuspectId_21, ArgPos_22, TermPath_23, HowTrack_18, STATE_VARIABLE_TriedShortcutProcs_0_46, &STATE_VARIABLE_TriedShortcutProcs_48_48, STATE_VARIABLE_SearchSpace_0_44, &STATE_VARIABLE_SearchSpace_49_49, &FindOriginResponse_27);
    switch (MR_tag((MR_Word) FindOriginResponse_27)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(FindOriginResponse_27)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Unknown_64;
              MR_Word TypeInfo_77_77;
              MR_Integer PolyConst2_76;

              succeeded = (LastUnknown_20 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Unknown_64 = ((MR_Integer) ((MR_hl_field(1, LastUnknown_20, (MR_Integer) 0))));
                PolyConst2_76 = (MR_Integer) 2;
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_67, PolyConst2_76, &TypeInfo_77_77);
                succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(TypeInfo_77_77, STATE_VARIABLE_SearchSpace_49_49, Unknown_64);
              }
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *SearchResponse_26 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Unknown_64));
                  MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 8U));
                }
                *NewMode_25 = FallBackSearchMode_24;
                *STATE_VARIABLE_SearchSpace_45 = STATE_VARIABLE_SearchSpace_49_49;
              }
              else
                mdb__declarative_analyser__search_for_question_8_p_0(TypeClassInfo_for_mercury_edt_67, Store_15, Oracle_16, STATE_VARIABLE_SearchSpace_49_49, STATE_VARIABLE_SearchSpace_45, FallBackSearchMode_24, FallBackSearchMode_24, NewMode_25, SearchResponse_26);
              *STATE_VARIABLE_TriedShortcutProcs_47 = STATE_VARIABLE_TriedShortcutProcs_48_48;
            }
            break;
          case (MR_Integer) 1:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *SearchResponse_26 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (SuspectId_21));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *NewMode_25 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (SuspectId_21));
                MR_hl_field(1, base, 1) = ((MR_Box) (ArgPos_22));
                MR_hl_field(1, base, 2) = ((MR_Box) (TermPath_23));
                MR_hl_field(1, base, 3) = ((MR_Box) (LastUnknown_20));
                MR_hl_field(1, base, 4) = (MR_Box) ((MR_Unsigned) (HowTrack_18));
              }
              *STATE_VARIABLE_SearchSpace_45 = STATE_VARIABLE_SearchSpace_49_49;
              *STATE_VARIABLE_TriedShortcutProcs_47 = STATE_VARIABLE_TriedShortcutProcs_48_48;
            }
            break;
          case (MR_Integer) 2:
            {
              *SearchResponse_26 = (MR_Word) ((MR_Unsigned) 0U);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *NewMode_25 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (SuspectId_21));
                MR_hl_field(1, base, 1) = ((MR_Box) (ArgPos_22));
                MR_hl_field(1, base, 2) = ((MR_Box) (TermPath_23));
                MR_hl_field(1, base, 3) = ((MR_Box) (LastUnknown_20));
                MR_hl_field(1, base, 4) = (MR_Box) ((MR_Unsigned) (HowTrack_18));
              }
              *STATE_VARIABLE_SearchSpace_45 = STATE_VARIABLE_SearchSpace_49_49;
              *STATE_VARIABLE_TriedShortcutProcs_47 = STATE_VARIABLE_TriedShortcutProcs_48_48;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer OriginId_39 = ((MR_Integer) ((MR_hl_field(1, FindOriginResponse_27, (MR_Integer) 0))));
          MR_Word OriginArgPos_40 = ((MR_Word) ((MR_hl_field(1, FindOriginResponse_27, (MR_Integer) 1))));
          MR_Word OriginTermPath_41 = ((MR_Word) ((MR_hl_field(1, FindOriginResponse_27, (MR_Integer) 2))));
          MR_Word SubtermMode_42 = ((MR_Unsigned) ((MR_hl_field(1, FindOriginResponse_27, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word NewLastUnknown_43;
          MR_Word TypeInfo_79_79;
          MR_Word TypeInfo_81_81;

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_67, (MR_Integer) 2, &TypeInfo_79_79);
          succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(TypeInfo_79_79, STATE_VARIABLE_SearchSpace_49_49, OriginId_39);
          if (succeeded)
            {
              NewLastUnknown_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, NewLastUnknown_43, 0) = ((MR_Box) (OriginId_39));
            }
          else
            NewLastUnknown_43 = LastUnknown_20;
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_67, (MR_Integer) 2, &TypeInfo_81_81);
          succeeded = mdb__declarative_edt__give_up_subterm_tracking_3_p_0(TypeInfo_81_81, STATE_VARIABLE_SearchSpace_49_49, OriginId_39, SubtermMode_42);
          if (succeeded)
          {
            MR_Integer Unknown_66;
            MR_Word TypeInfo_83_83;
            MR_Integer PolyConst2_82;

            succeeded = (LastUnknown_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Unknown_66 = ((MR_Integer) ((MR_hl_field(1, LastUnknown_20, (MR_Integer) 0))));
              PolyConst2_82 = (MR_Integer) 2;
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_67, PolyConst2_82, &TypeInfo_83_83);
              succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(TypeInfo_83_83, STATE_VARIABLE_SearchSpace_49_49, Unknown_66);
            }
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *SearchResponse_26 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Unknown_66));
                MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 12U));
              }
              *NewMode_25 = FallBackSearchMode_24;
              *STATE_VARIABLE_SearchSpace_45 = STATE_VARIABLE_SearchSpace_49_49;
            }
            else
              mdb__declarative_analyser__search_for_question_8_p_0(TypeClassInfo_for_mercury_edt_67, Store_15, Oracle_16, STATE_VARIABLE_SearchSpace_49_49, STATE_VARIABLE_SearchSpace_45, FallBackSearchMode_24, FallBackSearchMode_24, NewMode_25, SearchResponse_26);
            *STATE_VARIABLE_TriedShortcutProcs_47 = STATE_VARIABLE_TriedShortcutProcs_48_48;
          }
          else
          {
            MR_Word next_value_of_STATE_VARIABLE_SearchSpace_0_44 = STATE_VARIABLE_SearchSpace_49_49;
            MR_Word next_value_of_STATE_VARIABLE_TriedShortcutProcs_0_46 = STATE_VARIABLE_TriedShortcutProcs_48_48;
            MR_Word next_value_of_LastUnknown_20 = NewLastUnknown_43;
            MR_Integer next_value_of_SuspectId_21 = OriginId_39;
            MR_Word next_value_of_ArgPos_22 = OriginArgPos_40;
            MR_Word next_value_of_TermPath_23 = OriginTermPath_41;

            // direct tailcall eliminated
            ;
            STATE_VARIABLE_SearchSpace_0_44 = next_value_of_STATE_VARIABLE_SearchSpace_0_44;
            STATE_VARIABLE_TriedShortcutProcs_0_46 = next_value_of_STATE_VARIABLE_TriedShortcutProcs_0_46;
            LastUnknown_20 = next_value_of_LastUnknown_20;
            SuspectId_21 = next_value_of_SuspectId_21;
            ArgPos_22 = next_value_of_ArgPos_22;
            TermPath_23 = next_value_of_TermPath_23;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer BindingSuspectId_28 = ((MR_Integer) ((MR_hl_field(2, FindOriginResponse_27, (MR_Integer) 0))));
          MR_String FileName_29 = ((MR_String) ((MR_hl_field(2, FindOriginResponse_27, (MR_Integer) 1))));
          MR_Integer LineNo_30 = ((MR_Integer) ((MR_hl_field(2, FindOriginResponse_27, (MR_Integer) 2))));
          MR_Word PrimOpType_31 = ((((MR_Unsigned) ((MR_hl_field(2, FindOriginResponse_27, (MR_Integer) 3))) >> 1)) & (MR_Integer) 3);
          MR_Word Output_32 = ((MR_Unsigned) ((MR_hl_field(2, FindOriginResponse_27, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word ProcLabel_33;
          MR_Word MaybePath_36;

          ProcLabel_33 = mdb__declarative_edt__get_proc_label_for_suspect_3_f_0(TypeClassInfo_for_mercury_edt_67, Store_15, STATE_VARIABLE_SearchSpace_49_49, BindingSuspectId_28);
          switch (Output_32) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              MaybePath_36 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_69_69;
                MR_Box BindingNode_34;
                MR_Integer ArgNum_35;
                MR_Word Var_50;
                MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
                MR_Box conv1_ArgNum_35;

                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_67, (MR_Integer) 2, &TypeInfo_69_69);
                BindingNode_34 = mdb__declarative_edt__get_edt_node_2_f_0(TypeInfo_69_69, STATE_VARIABLE_SearchSpace_49_49, SuspectId_21);
                func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_67, (MR_Integer) 0)), (MR_Integer) 19))));
                conv1_ArgNum_35 = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_67)), Store_15, BindingNode_34, ((MR_Box) (ArgPos_22)));
                ArgNum_35 = ((MR_Integer) (conv1_ArgNum_35));
                {
                  Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_50, 0) = ((MR_Box) (ArgNum_35));
                  MR_hl_field(1, Var_50, 1) = ((MR_Box) (TermPath_23));
                }
                {
                  MaybePath_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MaybePath_36, 0) = ((MR_Box) (Var_50));
                }
              }
              break;
          }
          {
            MR_Word TypeInfo_71_71;

            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_67, (MR_Integer) 2, &TypeInfo_71_71);
            succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(TypeInfo_71_71, STATE_VARIABLE_SearchSpace_49_49, BindingSuspectId_28);
          }
          if (!(succeeded))
          {
            MR_Word TypeInfo_73_73;

            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_67, (MR_Integer) 2, &TypeInfo_73_73);
            succeeded = mdb__declarative_edt__suspect_skipped_2_p_0(TypeInfo_73_73, STATE_VARIABLE_SearchSpace_49_49, BindingSuspectId_28);
          }
          if (succeeded)
          {
            MR_Word Var_51;

            {
              Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_51, 0) = (MR_Box) (((((MR_Unsigned) (PrimOpType_31) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
              MR_hl_field(1, Var_51, 1) = ((MR_Box) (FileName_29));
              MR_hl_field(1, Var_51, 2) = ((MR_Box) (LineNo_30));
              MR_hl_field(1, Var_51, 3) = ((MR_Box) (MaybePath_36));
              MR_hl_field(1, Var_51, 4) = ((MR_Box) (ProcLabel_33));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *SearchResponse_26 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (BindingSuspectId_28));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_51));
            }
            *NewMode_25 = FallBackSearchMode_24;
            *STATE_VARIABLE_SearchSpace_45 = STATE_VARIABLE_SearchSpace_49_49;
          }
          else
          {
            MR_Integer Unknown_37;
            MR_Word TypeInfo_75_75;
            MR_Integer PolyConst2_74;

            succeeded = (LastUnknown_20 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Unknown_37 = ((MR_Integer) ((MR_hl_field(1, LastUnknown_20, (MR_Integer) 0))));
              PolyConst2_74 = (MR_Integer) 2;
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_67, PolyConst2_74, &TypeInfo_75_75);
              succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(TypeInfo_75_75, STATE_VARIABLE_SearchSpace_49_49, Unknown_37);
            }
            if (succeeded)
            {
              MR_Word Reason_38;

              {
                Reason_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Reason_38, 0) = (MR_Box) (((((MR_Unsigned) (PrimOpType_31) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                MR_hl_field(1, Reason_38, 1) = ((MR_Box) (FileName_29));
                MR_hl_field(1, Reason_38, 2) = ((MR_Box) (LineNo_30));
                MR_hl_field(1, Reason_38, 3) = ((MR_Box) (MaybePath_36));
                MR_hl_field(1, Reason_38, 4) = ((MR_Box) (ProcLabel_33));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *SearchResponse_26 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Unknown_37));
                MR_hl_field(1, base, 1) = ((MR_Box) (Reason_38));
              }
              *NewMode_25 = FallBackSearchMode_24;
              *STATE_VARIABLE_SearchSpace_45 = STATE_VARIABLE_SearchSpace_49_49;
            }
            else
              mdb__declarative_analyser__search_for_question_8_p_0(TypeClassInfo_for_mercury_edt_67, Store_15, Oracle_16, STATE_VARIABLE_SearchSpace_49_49, STATE_VARIABLE_SearchSpace_45, FallBackSearchMode_24, FallBackSearchMode_24, NewMode_25, SearchResponse_26);
          }
          *STATE_VARIABLE_TriedShortcutProcs_47 = STATE_VARIABLE_TriedShortcutProcs_48_48;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_analyser__search_for_question_8_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_31,
  MR_Box Store_9,
  MR_Word Oracle_10,
  MR_Word STATE_VARIABLE_SearchSpace_0_26,
  MR_Word * STATE_VARIABLE_SearchSpace_27,
  MR_Word OldMode_12,
  MR_Word FallBackSearchMode_13,
  MR_Word * NewMode_14,
  MR_Word * Response_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) OldMode_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mdb__declarative_analyser__top_down_search_5_p_0(TypeClassInfo_for_mercury_edt_31, Store_9, Oracle_10, STATE_VARIABLE_SearchSpace_0_26, STATE_VARIABLE_SearchSpace_27, Response_15);
          *NewMode_14 = FallBackSearchMode_13;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer SuspectId_16 = ((MR_Integer) ((MR_hl_field(1, OldMode_12, (MR_Integer) 0))));
          MR_Word ArgPos_17 = ((MR_Word) ((MR_hl_field(1, OldMode_12, (MR_Integer) 1))));
          MR_Word TermPath_18 = ((MR_Word) ((MR_hl_field(1, OldMode_12, (MR_Integer) 2))));
          MR_Word LastUnknown_19 = ((MR_Word) ((MR_hl_field(1, OldMode_12, (MR_Integer) 3))));
          MR_Word HowTrack_20 = ((MR_Unsigned) ((MR_hl_field(1, OldMode_12, (MR_Integer) 4))) & (MR_Integer) 1);
          MR_Word Var_57;
          MR_Word Var_56;

          Var_57 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0), (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0));
          mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(TypeClassInfo_for_mercury_edt_31, Store_9, Oracle_10, STATE_VARIABLE_SearchSpace_0_26, STATE_VARIABLE_SearchSpace_27, HowTrack_20, Var_57, &Var_56, LastUnknown_19, SuspectId_16, ArgPos_17, TermPath_18, FallBackSearchMode_13, NewMode_14, Response_15);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_ArrayPtr PathArray_21 = ((MR_ArrayPtr) ((MR_hl_field(2, OldMode_12, (MR_Integer) 0))));
          MR_Integer Top_22;
          MR_Integer Bottom_23;
          MR_Integer LastTested_24 = ((MR_Integer) ((MR_hl_field(2, OldMode_12, (MR_Integer) 2))));
          MR_Word Var_30 = ((MR_Word) ((MR_hl_field(2, OldMode_12, (MR_Integer) 1))));
          MR_Integer SuspectId_32;
          MR_Integer NewTop_33;
          MR_Integer NewBottom_34;
          MR_Box conv0_SuspectId_32;
          MR_Word TypeInfo_40_45;

          Top_22 = ((MR_Integer) ((MR_hl_field(0, Var_30, (MR_Integer) 0))));
          Bottom_23 = ((MR_Integer) ((MR_hl_field(0, Var_30, (MR_Integer) 1))));
          conv0_SuspectId_32 = mercury__array__elem_2_f_0((MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0), LastTested_24, (MR_ArrayPtr) (PathArray_21));
          SuspectId_32 = ((MR_Integer) (conv0_SuspectId_32));
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_31, (MR_Integer) 2, &TypeInfo_40_45);
          succeeded = mdb__declarative_edt__suspect_in_excluded_complement_2_p_0(TypeInfo_40_45, STATE_VARIABLE_SearchSpace_0_26, SuspectId_32);
          if (succeeded)
          {
            NewTop_33 = (MR_Integer) ((MR_Unsigned) LastTested_24 + (MR_Unsigned) 1);
            NewBottom_34 = Bottom_23;
          }
          else
          {
            MR_Word TypeInfo_42_47;

            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_31, (MR_Integer) 2, &TypeInfo_42_47);
            succeeded = mdb__declarative_edt__suspect_in_excluded_subtree_2_p_0(TypeInfo_42_47, STATE_VARIABLE_SearchSpace_0_26, SuspectId_32);
            if (succeeded)
            {
              NewTop_33 = Top_22;
              NewBottom_34 = (MR_Integer) ((MR_Unsigned) LastTested_24 - (MR_Unsigned) 1);
            }
            else
            {
              NewTop_33 = Top_22;
              NewBottom_34 = Bottom_23;
            }
          }
          succeeded = (NewTop_33 > NewBottom_34);
          if (succeeded)
          {
            MR_Word next_value_of_OldMode_12 = FallBackSearchMode_13;

            // direct tailcall eliminated
            ;
            OldMode_12 = next_value_of_OldMode_12;
            continue;
          }
          else
          {
            MR_Integer UnknownClosestToMiddle_35;
            MR_Word TypeInfo_44_49;

            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_31, (MR_Integer) 2, &TypeInfo_44_49);
            succeeded = mdb__declarative_analyser__find_unknown_closest_to_middle_5_p_0(TypeInfo_44_49, STATE_VARIABLE_SearchSpace_0_26, PathArray_21, NewTop_33, NewBottom_34, &UnknownClosestToMiddle_35);
            if (succeeded)
            {
              MR_Word Var_39;
              MR_Integer Var_40;
              MR_Word Var_41;
              MR_Box conv1_Var_40;

              {
                Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_39, 0) = ((MR_Box) (NewTop_33));
                MR_hl_field(0, Var_39, 1) = ((MR_Box) (NewBottom_34));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *NewMode_14 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (PathArray_21));
                MR_hl_field(2, base, 1) = ((MR_Box) (Var_39));
                MR_hl_field(2, base, 2) = ((MR_Box) (UnknownClosestToMiddle_35));
              }
              conv1_Var_40 = mercury__array__elem_2_f_0((MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0), UnknownClosestToMiddle_35, (MR_ArrayPtr) (PathArray_21));
              Var_40 = ((MR_Integer) (conv1_Var_40));
              {
                Var_41 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_41, 0) = ((MR_Box) (NewBottom_34));
                MR_hl_field(2, Var_41, 1) = ((MR_Box) (NewTop_33));
                MR_hl_field(2, Var_41, 2) = ((MR_Box) (UnknownClosestToMiddle_35));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Response_15 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Var_40));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_41));
              }
              *STATE_VARIABLE_SearchSpace_27 = STATE_VARIABLE_SearchSpace_0_26;
            }
            else
            {
              MR_Word next_value_of_OldMode_12 = FallBackSearchMode_13;

              // direct tailcall eliminated
              ;
              OldMode_12 = next_value_of_OldMode_12;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Weighting_25 = ((MR_Unsigned) ((MR_hl_field(3, OldMode_12, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Integer RootId_50;
          MR_Word TypeInfo_21_55;

          *NewMode_14 = OldMode_12;
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_31, (MR_Integer) 2, &TypeInfo_21_55);
          succeeded = mdb__declarative_edt__root_2_p_0(TypeInfo_21_55, STATE_VARIABLE_SearchSpace_0_26, &RootId_50);
          if (succeeded)
          {
            MR_Word Children_51;
            MR_Word STATE_VARIABLE_SearchSpace_17_52;

            succeeded = mdb__declarative_edt__children_6_p_0(TypeClassInfo_for_mercury_edt_31, Store_9, Oracle_10, RootId_50, STATE_VARIABLE_SearchSpace_0_26, &STATE_VARIABLE_SearchSpace_17_52, &Children_51);
            if (succeeded)
              mdb__declarative_analyser__find_middle_weight_9_p_0(TypeClassInfo_for_mercury_edt_31, Store_9, Oracle_10, Weighting_25, Children_51, RootId_50, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_SearchSpace_17_52, STATE_VARIABLE_SearchSpace_27, Response_15);
            else
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Response_15 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (RootId_50));
              }
              *STATE_VARIABLE_SearchSpace_27 = STATE_VARIABLE_SearchSpace_0_26;
            }
          }
          else
            mdb__declarative_analyser__top_down_search_5_p_0(TypeClassInfo_for_mercury_edt_31, Store_9, Oracle_10, STATE_VARIABLE_SearchSpace_0_26, STATE_VARIABLE_SearchSpace_27, Response_15);
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv1_HeadVar__5_67;
  MR_Integer conv0_HeadVar__7_69;

  mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1116__1_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv1_HeadVar__5_67, ((MR_Integer) (wrapper_arg_4)), &conv0_HeadVar__7_69);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__5_67));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__7_69));
}

static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_56,
  MR_Box Store_1,
  MR_Word Oracle_2,
  MR_Word Weighting_3,
  MR_Word HeadVar__4_4,
  MR_Integer TopId_5,
  MR_Word MaybeLastUnknown_6,
  MR_Word STATE_VARIABLE_SearchSpace_0_7,
  MR_Word * STATE_VARIABLE_SearchSpace_8,
  MR_Word * Response_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer LastUnknown_17;
      MR_Word TypeInfo_58_58;
      MR_Integer PolyConst2_57;

      succeeded = (MaybeLastUnknown_6 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        LastUnknown_17 = ((MR_Integer) ((MR_hl_field(1, MaybeLastUnknown_6, (MR_Integer) 0))));
        PolyConst2_57 = (MR_Integer) 2;
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_56, PolyConst2_57, &TypeInfo_58_58);
        succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(TypeInfo_58_58, STATE_VARIABLE_SearchSpace_0_7, LastUnknown_17);
      }
      if (succeeded)
      {
        MR_Word TypeInfo_60_60;
        MR_Word TypeInfo_61_61;
        MR_Word Var_20;
        MR_Integer Var_21;
        MR_Integer Var_22;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_56, (MR_Integer) 2, &TypeInfo_60_60);
        Var_21 = mdb__declarative_edt__get_weight_2_f_0(TypeInfo_60_60, STATE_VARIABLE_SearchSpace_0_7, TopId_5);
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_56, (MR_Integer) 2, &TypeInfo_61_61);
        Var_22 = mdb__declarative_edt__get_weight_2_f_0(TypeInfo_61_61, STATE_VARIABLE_SearchSpace_0_7, LastUnknown_17);
        {
          Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_20, 0) = (MR_Box) ((MR_Unsigned) (Weighting_3));
          MR_hl_field(3, Var_20, 1) = ((MR_Box) (Var_21));
          MR_hl_field(3, Var_20, 2) = ((MR_Box) (Var_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Response_9 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LastUnknown_17));
          MR_hl_field(1, base, 1) = ((MR_Box) (Var_20));
        }
        *STATE_VARIABLE_SearchSpace_8 = STATE_VARIABLE_SearchSpace_0_7;
      }
      else
        mdb__declarative_analyser__top_down_search_5_p_0(TypeClassInfo_for_mercury_edt_56, Store_1, Oracle_2, STATE_VARIABLE_SearchSpace_0_7, STATE_VARIABLE_SearchSpace_8, Response_9);
    }
    else
    {
      MR_Word TypeInfo_63_63;
      MR_Word TypeInfo_64_64;
      MR_Integer SuspectId_27 = ((MR_Integer) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word SuspectIds_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Integer TopWeight_33;
      MR_Integer Target_34;
      MR_Integer Weight_35;
      MR_Integer MaxWeight_36;
      MR_Integer Heaviest_37;
      MR_Word Var_44;
      MR_Box conv3_MaxWeight_36;
      MR_Box conv2_Heaviest_37;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_56, (MR_Integer) 2, &TypeInfo_63_63);
      TopWeight_33 = mdb__declarative_edt__get_weight_2_f_0(TypeInfo_63_63, STATE_VARIABLE_SearchSpace_0_7, TopId_5);
      Target_34 = mercury__int__f_47_47_2_f_0(TopWeight_33, (MR_Integer) 2);
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_56, (MR_Integer) 2, &TypeInfo_64_64);
      Weight_35 = mdb__declarative_edt__get_weight_2_f_0(TypeInfo_64_64, STATE_VARIABLE_SearchSpace_0_7, SuspectId_27);
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_44, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_7[0]));
        MR_hl_field(0, Var_44, 1) = ((MR_Box) (mdb__declarative_analyser__find_middle_weight_9_p_0_1));
        MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_44, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_56));
        MR_hl_field(0, Var_44, 4) = ((MR_Box) (STATE_VARIABLE_SearchSpace_0_7));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0), Var_44, SuspectIds_28, ((MR_Box) (Weight_35)), &conv3_MaxWeight_36, ((MR_Box) (SuspectId_27)), &conv2_Heaviest_37);
      MaxWeight_36 = ((MR_Integer) (conv3_MaxWeight_36));
      Heaviest_37 = ((MR_Integer) (conv2_Heaviest_37));
      succeeded = (MaxWeight_36 > Target_34);
      if (succeeded)
      {
        MR_Word NewMaybeLastUnknown_38;
        MR_Word TypeInfo_74_74;
        MR_Word Children_80;
        MR_Word STATE_VARIABLE_SearchSpace_21_81;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_56, (MR_Integer) 2, &TypeInfo_74_74);
        succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(TypeInfo_74_74, STATE_VARIABLE_SearchSpace_0_7, Heaviest_37);
        if (succeeded)
          {
            NewMaybeLastUnknown_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NewMaybeLastUnknown_38, 0) = ((MR_Box) (Heaviest_37));
          }
        else
          NewMaybeLastUnknown_38 = MaybeLastUnknown_6;
        succeeded = mdb__declarative_edt__children_6_p_0(TypeClassInfo_for_mercury_edt_56, Store_1, Oracle_2, Heaviest_37, STATE_VARIABLE_SearchSpace_0_7, &STATE_VARIABLE_SearchSpace_21_81, &Children_80);
        if (succeeded)
        {
          MR_Word next_value_of_HeadVar__4_4 = Children_80;
          MR_Word next_value_of_MaybeLastUnknown_6 = NewMaybeLastUnknown_38;
          MR_Word next_value_of_STATE_VARIABLE_SearchSpace_0_7 = STATE_VARIABLE_SearchSpace_21_81;

          // direct tailcall eliminated
          ;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          MaybeLastUnknown_6 = next_value_of_MaybeLastUnknown_6;
          STATE_VARIABLE_SearchSpace_0_7 = next_value_of_STATE_VARIABLE_SearchSpace_0_7;
          continue;
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Response_9 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (Heaviest_37));
          }
          *STATE_VARIABLE_SearchSpace_8 = STATE_VARIABLE_SearchSpace_0_7;
        }
      }
      else
      {
        MR_Word TypeInfo_75_75;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_56, (MR_Integer) 2, &TypeInfo_75_75);
        succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(TypeInfo_75_75, STATE_VARIABLE_SearchSpace_0_7, Heaviest_37);
        if (succeeded)
        {
          MR_Integer LastUnknown_39;
          MR_Word TypeInfo_76_76;

          succeeded = (MaybeLastUnknown_6 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LastUnknown_39 = ((MR_Integer) ((MR_hl_field(1, MaybeLastUnknown_6, (MR_Integer) 0))));
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_56, (MR_Integer) 2, &TypeInfo_76_76);
            succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(TypeInfo_76_76, STATE_VARIABLE_SearchSpace_0_7, LastUnknown_39);
          }
          if (succeeded)
          {
            MR_Word TypeInfo_77_77;
            MR_Integer LastUnknownWeight_40;
            MR_Integer Var_46;
            MR_Integer Var_47;

            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_56, (MR_Integer) 2, &TypeInfo_77_77);
            LastUnknownWeight_40 = mdb__declarative_edt__get_weight_2_f_0(TypeInfo_77_77, STATE_VARIABLE_SearchSpace_0_7, LastUnknown_39);
            Var_46 = (MR_Integer) ((MR_Unsigned) LastUnknownWeight_40 - (MR_Unsigned) Target_34);
            Var_47 = (MR_Integer) ((MR_Unsigned) Target_34 - (MR_Unsigned) MaxWeight_36);
            succeeded = (Var_46 < Var_47);
            if (succeeded)
            {
              MR_Word Var_48;

              {
                Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_48, 0) = (MR_Box) ((MR_Unsigned) (Weighting_3));
                MR_hl_field(3, Var_48, 1) = ((MR_Box) (TopWeight_33));
                MR_hl_field(3, Var_48, 2) = ((MR_Box) (LastUnknownWeight_40));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Response_9 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (LastUnknown_39));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_48));
              }
            }
            else
            {
              MR_Word Var_49;

              {
                Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_49, 0) = (MR_Box) ((MR_Unsigned) (Weighting_3));
                MR_hl_field(3, Var_49, 1) = ((MR_Box) (TopWeight_33));
                MR_hl_field(3, Var_49, 2) = ((MR_Box) (MaxWeight_36));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Response_9 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Heaviest_37));
                MR_hl_field(1, base, 1) = ((MR_Box) (Var_49));
              }
            }
          }
          else
          {
            MR_Word Var_50;

            {
              Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_50, 0) = (MR_Box) ((MR_Unsigned) (Weighting_3));
              MR_hl_field(3, Var_50, 1) = ((MR_Box) (TopWeight_33));
              MR_hl_field(3, Var_50, 2) = ((MR_Box) (MaxWeight_36));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Response_9 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Heaviest_37));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_50));
            }
          }
          *STATE_VARIABLE_SearchSpace_8 = STATE_VARIABLE_SearchSpace_0_7;
        }
        else
        {
          MR_Integer LastUnknown_55;
          MR_Word TypeInfo_78_78;

          succeeded = (MaybeLastUnknown_6 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LastUnknown_55 = ((MR_Integer) ((MR_hl_field(1, MaybeLastUnknown_6, (MR_Integer) 0))));
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_56, (MR_Integer) 2, &TypeInfo_78_78);
            succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(TypeInfo_78_78, STATE_VARIABLE_SearchSpace_0_7, LastUnknown_55);
          }
          if (succeeded)
          {
            MR_Word TypeInfo_79_79;
            MR_Word Var_51;
            MR_Integer LastUnknownWeight_54;

            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_56, (MR_Integer) 2, &TypeInfo_79_79);
            LastUnknownWeight_54 = mdb__declarative_edt__get_weight_2_f_0(TypeInfo_79_79, STATE_VARIABLE_SearchSpace_0_7, LastUnknown_55);
            {
              Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_51, 0) = (MR_Box) ((MR_Unsigned) (Weighting_3));
              MR_hl_field(3, Var_51, 1) = ((MR_Box) (TopWeight_33));
              MR_hl_field(3, Var_51, 2) = ((MR_Box) (LastUnknownWeight_54));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Response_9 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (LastUnknown_55));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_51));
            }
            *STATE_VARIABLE_SearchSpace_8 = STATE_VARIABLE_SearchSpace_0_7;
          }
          else
          {
            MR_Word Children_82;
            MR_Word STATE_VARIABLE_SearchSpace_21_83;

            succeeded = mdb__declarative_edt__children_6_p_0(TypeClassInfo_for_mercury_edt_56, Store_1, Oracle_2, Heaviest_37, STATE_VARIABLE_SearchSpace_0_7, &STATE_VARIABLE_SearchSpace_21_83, &Children_82);
            if (succeeded)
            {
              MR_Word next_value_of_HeadVar__4_4 = Children_82;
              MR_Word next_value_of_STATE_VARIABLE_SearchSpace_0_7 = STATE_VARIABLE_SearchSpace_21_83;

              // direct tailcall eliminated
              ;
              HeadVar__4_4 = next_value_of_HeadVar__4_4;
              MaybeLastUnknown_6 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_SearchSpace_0_7 = next_value_of_STATE_VARIABLE_SearchSpace_0_7;
              continue;
            }
            else
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Response_9 = base;
                MR_hl_field(2, base, 0) = ((MR_Box) (Heaviest_37));
              }
              *STATE_VARIABLE_SearchSpace_8 = STATE_VARIABLE_SearchSpace_0_7;
            }
          }
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_middle_5_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word SearchSpace_6,
  MR_ArrayPtr PathArray_7,
  MR_Integer Top_8,
  MR_Integer Bottom_9,
  MR_Integer * Unknown_10)
{
  MR_bool succeeded;
  MR_Integer Middle_11;
  MR_Integer Var_12;
  MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) Bottom_9 - (MR_Unsigned) Top_8);

  Var_12 = mercury__int__f_47_47_2_f_0(Var_13, (MR_Integer) 2);
  Middle_11 = (MR_Integer) ((MR_Unsigned) Top_8 + (MR_Unsigned) Var_12);
  succeeded = mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(TypeInfo_for_T_16, SearchSpace_6, PathArray_7, Top_8, Bottom_9, Middle_11, Middle_11, Unknown_10);
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(
  MR_Word TypeInfo_for_T_21,
  MR_Word SearchSpace_8,
  MR_ArrayPtr PathArray_9,
  MR_Integer OuterTop_10,
  MR_Integer OuterBottom_11,
  MR_Integer InnerTop_12,
  MR_Integer InnerBottom_13,
  MR_Integer * Unknown_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (InnerTop_12 <= InnerBottom_13);
    MR_Word TypeCtorInfo_22_22;
    MR_Integer Var_15;
    MR_Box conv0_Var_15;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      succeeded = (OuterTop_10 <= InnerTop_12);
      if (!(succeeded))
        succeeded = (InnerBottom_13 <= OuterBottom_11);
      if (succeeded)
      {
        succeeded = (OuterTop_10 <= InnerTop_12);
        if (succeeded)
        {
          TypeCtorInfo_22_22 = (MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0);
          conv0_Var_15 = mercury__array__elem_2_f_0(TypeCtorInfo_22_22, InnerTop_12, (MR_ArrayPtr) (PathArray_9));
          Var_15 = ((MR_Integer) (conv0_Var_15));
          succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(TypeInfo_for_T_21, SearchSpace_8, Var_15);
        }
        if (succeeded)
        {
          *Unknown_14 = InnerTop_12;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word TypeCtorInfo_23_23;
          MR_Integer Var_16;
          MR_Box conv1_Var_16;

          succeeded = (InnerBottom_13 <= OuterBottom_11);
          if (succeeded)
          {
            TypeCtorInfo_23_23 = (MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0);
            conv1_Var_16 = mercury__array__elem_2_f_0(TypeCtorInfo_23_23, InnerBottom_13, (MR_ArrayPtr) (PathArray_9));
            Var_16 = ((MR_Integer) (conv1_Var_16));
            succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(TypeInfo_for_T_21, SearchSpace_8, Var_16);
          }
          if (succeeded)
          {
            *Unknown_14 = InnerBottom_13;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) InnerTop_12 - (MR_Unsigned) 1);
            MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) InnerBottom_13 + (MR_Unsigned) 1);
            MR_Integer next_value_of_InnerTop_12 = Var_17;
            MR_Integer next_value_of_InnerBottom_13 = Var_18;

            // direct tailcall eliminated
            ;
            InnerTop_12 = next_value_of_InnerTop_12;
            InnerBottom_13 = next_value_of_InnerBottom_13;
            continue;
          }
        }
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__738__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__735__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_37,
  MR_Box Store_6,
  MR_Word Oracle_7,
  MR_Word STATE_VARIABLE_SearchSpace_0_24,
  MR_Word * STATE_VARIABLE_SearchSpace_25,
  MR_Word * Response_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Start_11;
    MR_Word MaybeUnknownDescendant_12;
    MR_Word STATE_VARIABLE_SearchSpace_26_26;
    MR_Integer RootId_10;
    MR_Word TypeInfo_39_39;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &TypeInfo_39_39);
    succeeded = mdb__declarative_edt__root_2_p_0(TypeInfo_39_39, STATE_VARIABLE_SearchSpace_0_24, &RootId_10);
    if (succeeded)
      Start_11 = RootId_10;
    else
    {
      MR_Word TypeInfo_41_41;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &TypeInfo_41_41);
      mdb__declarative_edt__topmost_det_2_p_0(TypeInfo_41_41, STATE_VARIABLE_SearchSpace_0_24, &Start_11);
    }
    mdb__declarative_edt__first_unknown_descendant_6_p_0(TypeClassInfo_for_mercury_edt_37, Store_6, Oracle_7, Start_11, STATE_VARIABLE_SearchSpace_0_24, &STATE_VARIABLE_SearchSpace_26_26, &MaybeUnknownDescendant_12);
    switch (MR_tag((MR_Word) MaybeUnknownDescendant_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer SkippedSuspect_14;
          MR_Word TypeInfo_43_43;

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &TypeInfo_43_43);
          succeeded = mdb__declarative_edt__choose_skipped_suspect_2_p_0(TypeInfo_43_43, STATE_VARIABLE_SearchSpace_26_26, &SkippedSuspect_14);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Response_9 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (SkippedSuspect_14));
              MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 16U));
            }
            *STATE_VARIABLE_SearchSpace_25 = STATE_VARIABLE_SearchSpace_26_26;
          }
          else
          {
            MR_Integer BugId_15;
            MR_Word TypeInfo_45_45;

            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &TypeInfo_45_45);
            succeeded = mdb__declarative_edt__root_2_p_0(TypeInfo_45_45, STATE_VARIABLE_SearchSpace_26_26, &BugId_15);
            if (succeeded)
            {
              MR_Word BugChildren_16;
              MR_Word CorrectDescendants_18;
              MR_Word STATE_VARIABLE_SearchSpace_30_30;
              MR_Word TypeCtorInfo_49_49;
              MR_Word TypeInfo_59_59;
              MR_Word NonIgnoredDescendants_17;
              MR_Word STATE_VARIABLE_SearchSpace_29_29;
              MR_Word Var_31;
              MR_Word Var_32;
              MR_Word Var_58;

              succeeded = mdb__declarative_edt__children_6_p_0(TypeClassInfo_for_mercury_edt_37, Store_6, Oracle_7, BugId_15, STATE_VARIABLE_SearchSpace_26_26, &STATE_VARIABLE_SearchSpace_29_29, &BugChildren_16);
              if (succeeded)
              {
                succeeded = mdb__declarative_edt__non_ignored_descendants_6_p_0(TypeClassInfo_for_mercury_edt_37, Store_6, Oracle_7, BugChildren_16, STATE_VARIABLE_SearchSpace_29_29, &STATE_VARIABLE_SearchSpace_30_30, &NonIgnoredDescendants_17);
                if (succeeded)
                {
                  Var_32 = (MR_Word) ((MR_Unsigned) 0U);
                  TypeCtorInfo_49_49 = (MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0);
                  {
                    Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_6[0]));
                    MR_hl_field(0, Var_31, 1) = ((MR_Box) (mdb__declarative_analyser__top_down_search_5_p_0_1));
                    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(0, Var_31, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_37));
                    MR_hl_field(0, Var_31, 4) = ((MR_Box) (STATE_VARIABLE_SearchSpace_30_30));
                  }
                  mercury__list__filter_4_p_0(TypeCtorInfo_49_49, Var_31, NonIgnoredDescendants_17, &CorrectDescendants_18, &Var_58);
                  TypeInfo_59_59 = (MR_Word) (&mdb__declarative_analyser_scalar_common_1[6]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) (Var_32)), ((MR_Box) (Var_58)));
                }
              }
              if (succeeded)
              {
                MR_Word InadmissibleChildren_19;
                MR_Word Var_33;

                *STATE_VARIABLE_SearchSpace_25 = STATE_VARIABLE_SearchSpace_30_30;
                {
                  Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_33, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_6[0]));
                  MR_hl_field(0, Var_33, 1) = ((MR_Box) (mdb__declarative_analyser__top_down_search_5_p_0_2));
                  MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(0, Var_33, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_37));
                  MR_hl_field(0, Var_33, 4) = ((MR_Box) (*STATE_VARIABLE_SearchSpace_25));
                }
                mercury__list__filter_3_p_0((MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0), Var_33, BugChildren_16, &InadmissibleChildren_19);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  *Response_9 = base;
                  MR_hl_field(3, base, 0) = ((MR_Box) (BugId_15));
                  MR_hl_field(3, base, 1) = ((MR_Box) (CorrectDescendants_18));
                  MR_hl_field(3, base, 2) = ((MR_Box) (InadmissibleChildren_19));
                }
              }
              else
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[16])));
                  return;
                }
            }
            else
            {
              MR_Word ExtendedSearchSpace_20;

              succeeded = mdb__declarative_edt__extend_search_space_upwards_4_p_0(TypeClassInfo_for_mercury_edt_37, Store_6, Oracle_7, STATE_VARIABLE_SearchSpace_26_26, &ExtendedSearchSpace_20);
              if (succeeded)
              {
                MR_Word next_value_of_STATE_VARIABLE_SearchSpace_0_24 = ExtendedSearchSpace_20;

                // direct tailcall eliminated
                ;
                STATE_VARIABLE_SearchSpace_0_24 = next_value_of_STATE_VARIABLE_SearchSpace_0_24;
                continue;
              }
              else
              {
                MR_Word TypeInfo_56_56;
                MR_Word TypeInfo_57_57;
                MR_Integer TopMostId_21;
                MR_Box TopMostNode_22;
                MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &TypeInfo_56_56);
                mdb__declarative_edt__topmost_det_2_p_0(TypeInfo_56_56, STATE_VARIABLE_SearchSpace_26_26, &TopMostId_21);
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &TypeInfo_57_57);
                TopMostNode_22 = mdb__declarative_edt__get_edt_node_2_f_0(TypeInfo_57_57, STATE_VARIABLE_SearchSpace_26_26, TopMostId_21);
                func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_37, (MR_Integer) 0)), (MR_Integer) 14))));
                succeeded = func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_37)), Store_6, TopMostNode_22);
                if (succeeded)
                  *Response_9 = (MR_Word) ((MR_Unsigned) 4U);
                else
                  *Response_9 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_SearchSpace_25 = STATE_VARIABLE_SearchSpace_26_26;
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Unknown_13 = ((MR_Integer) ((MR_hl_field(1, MaybeUnknownDescendant_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Response_9 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Unknown_13));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 4U));
          }
          *STATE_VARIABLE_SearchSpace_25 = STATE_VARIABLE_SearchSpace_26_26;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer RequireExplicitId_23 = ((MR_Integer) ((MR_hl_field(2, MaybeUnknownDescendant_12, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Response_9 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (RequireExplicitId_23));
          }
          *STATE_VARIABLE_SearchSpace_25 = STATE_VARIABLE_SearchSpace_26_26;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_analyser__handle_search_response_5_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_78,
  MR_Box Store_6,
  MR_Word SearchResponse_7,
  MR_Word STATE_VARIABLE_Analyser_0_20,
  MR_Word * STATE_VARIABLE_Analyser_21,
  MR_Word * AnalyserResponse_9)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) SearchResponse_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(SearchResponse_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_88_88;
            MR_Word TypeInfo_89_89;
            MR_Integer TopMostId_15;
            MR_Box TopMost_16;
            MR_Word SearchSpace_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0))));
            MR_Word Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2))));
            MR_Word Var_65 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3))));
            MR_Word Var_66 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4))));
            MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5))));

            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Analyser_21 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (SearchSpace_39));
              MR_hl_field(0, base, 1) = ((MR_Box) (MR_mkword(1, &mdb__declarative_analyser_scalar_common_3[2])));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_64));
              MR_hl_field(0, base, 3) = ((MR_Box) (Var_65));
              MR_hl_field(0, base, 4) = ((MR_Box) (Var_66));
              MR_hl_field(0, base, 5) = ((MR_Box) (Var_67));
            }
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &TypeInfo_88_88);
            mdb__declarative_edt__topmost_det_2_p_0(TypeInfo_88_88, SearchSpace_39, &TopMostId_15);
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &TypeInfo_89_89);
            TopMost_16 = mdb__declarative_edt__get_edt_node_2_f_0(TypeInfo_89_89, SearchSpace_39, TopMostId_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *AnalyserResponse_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, base, 1) = TopMost_16;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *AnalyserResponse_9 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Analyser_21 = STATE_VARIABLE_Analyser_0_20;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_80_80;
        MR_Integer SuspectId_10 = ((MR_Integer) ((MR_hl_field(1, SearchResponse_7, (MR_Integer) 0))));
        MR_Word Reason_11 = ((MR_Word) ((MR_hl_field(1, SearchResponse_7, (MR_Integer) 1))));
        MR_Word SearchSpace_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0))));
        MR_Box Node_13;
        MR_Word OracleQuestion_14;
        MR_Word Var_26;
        MR_Word Var_27;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
        MR_Box conv1_OracleQuestion_14;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_50;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &TypeInfo_80_80);
        Node_13 = mdb__declarative_edt__get_edt_node_2_f_0(TypeInfo_80_80, SearchSpace_12, SuspectId_10);
        func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_78, (MR_Integer) 0)), (MR_Integer) 5))));
        func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_78)), Store_6, Node_13, &conv1_OracleQuestion_14);
        OracleQuestion_14 = ((MR_Word) (conv1_OracleQuestion_14));
        {
          MR_Word TypeInfo_81_81;

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &TypeInfo_81_81);
          succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(TypeInfo_81_81, SearchSpace_12, SuspectId_10);
        }
        if (!(succeeded))
        {
          MR_Word TypeInfo_82_82;

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &TypeInfo_82_82);
          succeeded = mdb__declarative_edt__suspect_skipped_2_p_0(TypeInfo_82_82, SearchSpace_12, SuspectId_10);
        }
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *AnalyserResponse_9 = base;
            MR_hl_field(2, base, 0) = ((MR_Box) (OracleQuestion_14));
          }
        else
        {
          MR_Word TypeInfo_83_83;

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &TypeInfo_83_83);
          succeeded = mdb__declarative_edt__suspect_ignored_2_p_0(TypeInfo_83_83, SearchSpace_12, SuspectId_10);
          if (succeeded)
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[15])));
              return;
            }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *AnalyserResponse_9 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, base, 1) = ((MR_Box) (OracleQuestion_14));
            }
        }
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_27, 0) = ((MR_Box) (SuspectId_10));
          MR_hl_field(0, Var_27, 1) = ((MR_Box) (Reason_11));
        }
        {
          Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
        }
        Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0))));
        Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1))));
        Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2))));
        Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3))));
        Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Analyser_21 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_47));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_48));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_26));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_50));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeInfo_86_86;
        MR_Word Var_29;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Integer SuspectId_37 = ((MR_Integer) ((MR_hl_field(2, SearchResponse_7, (MR_Integer) 0))));
        MR_Box Node_38;
        MR_Word Var_51;
        MR_Word Var_53;
        MR_Word Var_54;
        MR_Word Var_55;
        MR_Word Var_56;

        {
          Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_30, 0) = ((MR_Box) (SuspectId_37));
        }
        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
        }
        Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0))));
        Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2))));
        Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3))));
        Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4))));
        Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Analyser_21 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_29));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_53));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_54));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_55));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_56));
        }
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &TypeInfo_86_86);
        Var_31 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_Analyser_21, (MR_Integer) 0))));
        Node_38 = mdb__declarative_edt__get_edt_node_2_f_0(TypeInfo_86_86, Var_31, SuspectId_37);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *AnalyserResponse_9 = base;
          MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, base, 1) = Node_38;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Integer BugId_17 = ((MR_Integer) ((MR_hl_field(3, SearchResponse_7, (MR_Integer) 0))));
        MR_Word CorrectDescendants_18 = ((MR_Word) ((MR_hl_field(3, SearchResponse_7, (MR_Integer) 1))));
        MR_Word InadmissibleChildren_19 = ((MR_Word) ((MR_hl_field(3, SearchResponse_7, (MR_Integer) 2))));
        MR_Word Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0))));
        MR_Word Var_36;

        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (BugId_17));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (CorrectDescendants_18));
        }
        mdb__declarative_analyser__bug_response_6_p_0(TypeClassInfo_for_mercury_edt_78, Store_6, Var_35, BugId_17, Var_36, InadmissibleChildren_19, AnalyserResponse_9);
        *STATE_VARIABLE_Analyser_21 = STATE_VARIABLE_Analyser_0_20;
      }
      break;
  }
}

static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__3_3;

  mdb__declarative_edt__edt_question_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), (MR_hl_field(0, closure, (MR_Integer) 4)), wrapper_arg_1, &conv4_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
}

static MR_Box MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;

  wrapper_arg_2 = mdb__declarative_analyser__IntroducedFrom__func__bug_response__654__1_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
  return wrapper_arg_2;
}

static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_24,
  MR_Box Store_7,
  MR_Word SearchSpace_8,
  MR_Integer BugId_9,
  MR_Word Evidence_10,
  MR_Word InadmissibleChildren_11,
  MR_Word * Response_12)
{
  MR_Word TypeInfo_26_26;
  MR_Word TypeInfo_29_29;
  MR_Word TypeInfo_36_36;
  MR_Word TypeInfo_37_37;
  MR_Word TypeInfo_39_39;
  MR_Box BugNode_13;
  MR_Word Bug_15;
  MR_Word EDTNodes_19;
  MR_Word EvidenceAsQuestions_20;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word conv5_EvidenceAsQuestions_20;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &TypeInfo_26_26);
  BugNode_13 = mdb__declarative_edt__get_edt_node_2_f_0(TypeInfo_26_26, SearchSpace_8, BugId_9);
  if ((InadmissibleChildren_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word EBug_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 6))));
    MR_Box conv1_EBug_14;

    func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_24)), Store_7, BugNode_13, &conv1_EBug_14);
    EBug_14 = ((MR_Word) (conv1_EBug_14));
    {
      Bug_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Bug_15, 0) = ((MR_Box) (EBug_14));
    }
  }
  else
  {
    MR_Word TypeInfo_27_27;
    MR_Integer InadmissibleChild_16 = ((MR_Integer) ((MR_hl_field(1, InadmissibleChildren_11, (MR_Integer) 0))));
    MR_Word IBug_18;
    MR_Box Var_21;
    void MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
    MR_Box conv3_IBug_18;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &TypeInfo_27_27);
    Var_21 = mdb__declarative_edt__get_edt_node_2_f_0(TypeInfo_27_27, SearchSpace_8, InadmissibleChild_16);
    func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 7))));
    func_2(((MR_Box) (TypeClassInfo_for_mercury_edt_24)), Store_7, BugNode_13, Var_21, &conv3_IBug_18);
    IBug_18 = ((MR_Word) (conv3_IBug_18));
    Bug_15 = (MR_Word) ((MR_Word) (IBug_18));
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &TypeInfo_29_29);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_5[0]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (mdb__declarative_analyser__bug_response_6_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_24));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (SearchSpace_8));
  }
  EDTNodes_19 = mercury__list__map_2_f_0((MR_Word) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0), TypeInfo_29_29, Var_22, Evidence_10);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_5[1]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (mdb__declarative_analyser__bug_response_6_p_0_2));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (TypeClassInfo_for_mercury_edt_24));
    MR_hl_field(0, Var_23, 4) = Store_7;
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &TypeInfo_36_36);
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &TypeInfo_37_37);
  {
    TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_39_39, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
    MR_hl_field(0, TypeInfo_39_39, 1) = ((MR_Box) (TypeInfo_37_37));
  }
  mercury__list__map_3_p_0(TypeInfo_36_36, TypeInfo_39_39, (MR_Word) (Var_23), EDTNodes_19, &conv5_EvidenceAsQuestions_20);
  EvidenceAsQuestions_20 = (MR_Word) (conv5_EvidenceAsQuestions_20);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Response_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Bug_15));
    MR_hl_field(1, base, 1) = ((MR_Box) (EvidenceAsQuestions_20));
  }
}

MR_bool MR_CALL 
mdb__declarative_analyser__reask_last_question_3_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_24,
  MR_Box Store_4,
  MR_Word Analyser_5,
  MR_Word * Response_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_26_26;
  MR_Word MaybeLastQuestion_7 = ((MR_Word) ((MR_hl_field(0, Analyser_5, (MR_Integer) 4))));
  MR_Integer SuspectId_8;
  MR_Word SearchSpace_10 = ((MR_Word) ((MR_hl_field(0, Analyser_5, (MR_Integer) 0))));
  MR_Box Node_11;
  MR_Word OracleQuestion_12;
  MR_Word Var_13;
  MR_Integer PolyConst2_25;
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
  MR_Box conv1_OracleQuestion_12;

  succeeded = (MaybeLastQuestion_7 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(1, MaybeLastQuestion_7, (MR_Integer) 0))));
    SuspectId_8 = ((MR_Integer) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
    PolyConst2_25 = (MR_Integer) 2;
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_mercury_edt_24, PolyConst2_25, &TypeInfo_26_26);
    Node_11 = mdb__declarative_edt__get_edt_node_2_f_0(TypeInfo_26_26, SearchSpace_10, SuspectId_8);
    func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 5))));
    func_0(((MR_Box) (TypeClassInfo_for_mercury_edt_24)), Store_4, Node_11, &conv1_OracleQuestion_12);
    OracleQuestion_12 = ((MR_Word) (conv1_OracleQuestion_12));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Response_6 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (OracleQuestion_12));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_analyser__set_analyser_fallback_search_mode_4_p_0(
  MR_Word TypeClassInfo_for_mercury_edt_54,
  MR_Box Store_5,
  MR_Word FallBackSearchMode_6,
  MR_Word STATE_VARIABLE_Analyser_0_19,
  MR_Word * STATE_VARIABLE_Analyser_20)
{
  MR_Word STATE_VARIABLE_Analyser_23_23;
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_19, (MR_Integer) 0))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_19, (MR_Integer) 1))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_19, (MR_Integer) 5))));

  {
    STATE_VARIABLE_Analyser_23_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_Analyser_23_23, 0) = ((MR_Box) (Var_25));
    MR_hl_field(0, STATE_VARIABLE_Analyser_23_23, 1) = ((MR_Box) (Var_26));
    MR_hl_field(0, STATE_VARIABLE_Analyser_23_23, 2) = ((MR_Box) (FallBackSearchMode_6));
    MR_hl_field(0, STATE_VARIABLE_Analyser_23_23, 3) = ((MR_Box) (FallBackSearchMode_6));
    MR_hl_field(0, STATE_VARIABLE_Analyser_23_23, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, STATE_VARIABLE_Analyser_23_23, 5) = ((MR_Box) (Var_30));
  }
  switch (MR_tag((MR_Word) FallBackSearchMode_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Analyser_20 = STATE_VARIABLE_Analyser_23_23;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Analyser_20 = STATE_VARIABLE_Analyser_23_23;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Analyser_20 = STATE_VARIABLE_Analyser_23_23;
      break;
    case (MR_Integer) 3:
      {
        MR_Word Weighting_8 = ((MR_Unsigned) ((MR_hl_field(3, FallBackSearchMode_6, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word SearchSpace_10;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_53;

        mdb__declarative_edt__update_weighting_heuristic_4_p_0(TypeClassInfo_for_mercury_edt_54, Store_5, Weighting_8, Var_25, &SearchSpace_10);
        Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_23_23, (MR_Integer) 1))));
        Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_23_23, (MR_Integer) 2))));
        Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_23_23, (MR_Integer) 3))));
        Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_23_23, (MR_Integer) 4))));
        Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_23_23, (MR_Integer) 5))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Analyser_20 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (SearchSpace_10));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_49));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_50));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_51));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_52));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_53));
        }
      }
      break;
  }
}

void MR_CALL 
mdb__declarative_analyser__reset_analyser_2_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word STATE_VARIABLE_Analyser_0_5,
  MR_Word * STATE_VARIABLE_Analyser_6)
{
  MR_Word FallBack_4 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Analyser_0_5, (MR_Integer) 3))));
  MR_Word Var_8;

  Var_8 = mdb__declarative_edt__empty_search_space_0_f_0(TypeInfo_for_T_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Analyser_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) (FallBack_4));
    MR_hl_field(0, base, 3) = ((MR_Box) (FallBack_4));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
mdb__declarative_analyser__analyser_state_init_1_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word * Analyser_2)
{
  MR_Word Var_3;

  Var_3 = mdb__declarative_edt__empty_search_space_0_f_0(TypeInfo_for_T_9);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Analyser_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_3));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

MR_Word MR_CALL 
mdb__declarative_analyser__top_down_search_mode_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

MR_Word MR_CALL 
mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_f_0(void)
{
  return (MR_Word) (MR_mkword(3, &mdb__declarative_analyser_scalar_common_3[1]));
}

MR_Word MR_CALL 
mdb__declarative_analyser__divide_and_query_search_mode_0_f_0(void)
{
  return (MR_Word) (MR_mkword(3, &mdb__declarative_analyser_scalar_common_3[0]));
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_analyser____Unify____analyser_response_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_analyser____Compare____analyser_response_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_analyser____Unify____analyser_state_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_analyser____Compare____analyser_state_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_analyser____Unify____analysis_type_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_analyser____Compare____analysis_type_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_analyser____Unify____explicit_tree_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_analyser____Compare____explicit_tree_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_analyser____Compare____reason_for_question_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_analyser____Compare____search_mode_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_analyser____Unify____search_response_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_analyser____Compare____search_response_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_analyser____Unify____suspect_and_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_analyser____Compare____suspect_and_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module mdb.declarative_analyser.
