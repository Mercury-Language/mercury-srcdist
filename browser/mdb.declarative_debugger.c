/*
** Automatically generated from `declarative_debugger.m'
** by the Mercury compiler,
** version rotd-2022-08-19
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


// :- module mdb.declarative_debugger.
// :- implementation.

/*
INIT mercury__mdb__declarative_debugger__init
ENDINIT
*/

#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_debugger.mh"


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
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
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
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "io.stream_db.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.declarative_analyser.mih"
#include "mdb.declarative_edt.mih"
#include "mdb.declarative_execution.mih"
#include "mdb.declarative_oracle.mih"
#include "mdb.declarative_tree.mih"
#include "mdb.declarative_user.mih"
#include "mdb.help.mih"
#include "mdb.io_action.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
#include "mdb.util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_analyser__pti_analysis_type_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2;

static const MR_VA_PseudoTypeInfo_Struct2 mdb__declarative_debugger____vpti_tuple_2__pseudo_mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_0[2];

static const MR_DuArgLocn mdb__declarative_debugger__mdb__declarative_debugger__field_locns_decl_answer_1_0[2];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_0;

static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_1[5];

static const MR_DuArgLocn mdb__declarative_debugger__mdb__declarative_debugger__field_locns_decl_answer_1_1[5];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_1;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_2[1];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_2;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_3[1];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_3;

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_2[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_3[1];

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_answer_1[4];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_answer_1[4];

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_answer_1[4];

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_0[1];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_0;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_1[1];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_1;

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_1[1];

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_bug_0[2];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_bug_0[2];

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_bug_0[2];

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0;

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1;

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2;

static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_ordinal_ordered_decl_confirmation_0[3];

static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_confirmation_0[3];

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_confirmation_0[3];

static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_0[4];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_1[2];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_2[3];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2;

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_2[1];

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_e_bug_0[3];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_e_bug_0[3];

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_e_bug_0[3];

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_i_bug_0_0[4];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_i_bug_0_0[1];

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_i_bug_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_i_bug_0[1];

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_i_bug_0[1];

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_0[3];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_0;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_1[3];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_1;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_2[3];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_2;

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_2[1];

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_question_1[3];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_question_1[3];

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_question_1[3];

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0;

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1;

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2;

static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_ordinal_ordered_decl_truth_0[3];

static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_truth_0[3];

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_truth_0[3];

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_0[2];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_1[2];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_2[1];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2;

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_2[1];

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_exception_0[3];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_exception_0[3];

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_exception_0[3];

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_0[1];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_1[1];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1;

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_3[4];

static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_response_1_3[4];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_4[2];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4;

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_2[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_3[2];

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_response_1[4];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_response_1[5];

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_response_1[5];

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_analyser__pti_analyser_state_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__maybe__pti_maybe_1__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_state_1_0[4];

static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_state_1_0[4];

static const MR_DuArgLocn mdb__declarative_debugger__mdb__declarative_debugger__field_locns_diagnoser_state_1_0[4];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0;

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_state_1_0[1];

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_state_1[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_state_1[1];

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_state_1[1];

static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__maybe__ti_maybe_1mdb__io_action__type_ctor_info_io_action_range_0;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_final_decl_atom_0_0[2];

static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_final_decl_atom_0_0[2];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0;

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_final_decl_atom_0_0[1];

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_final_decl_atom_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_final_decl_atom_0[1];

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_final_decl_atom_0[1];

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_init_decl_atom_0[1];

static const MR_NotagFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_0[1];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0;

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_1[1];

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1;

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_0[1];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_1[1];

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_some_decl_atom_0[2];

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_some_decl_atom_0[2];

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_some_decl_atom_0[2];

static void MR_CALL 
mdb__declarative_debugger__get_trusted_list_3_p_0(
  MR_Word Diagnoser_4,
  MR_Word MDBCommandFormat_5,
  MR_String * List_6);

static MR_bool MR_CALL 
mdb__declarative_debugger__remove_trusted_3_p_0(
  MR_Integer N_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_8,
  MR_Word * STATE_VARIABLE_Diagnoser_9);

static void MR_CALL 
mdb__declarative_debugger__trust_standard_library_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7);

static void MR_CALL 
mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(
  MR_Box ProcLayout_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_8,
  MR_Word * STATE_VARIABLE_Diagnoser_9);

static void MR_CALL 
mdb__declarative_debugger__add_trusted_module_3_p_0(
  MR_String ModuleName_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_9,
  MR_Word * STATE_VARIABLE_Diagnoser_10);

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_supertree_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_4,
  MR_Integer * SeqNo_5);

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_subtree_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_6,
  MR_Integer * SeqNo_7,
  MR_Word * CallPreceding_8,
  MR_Integer * MaxDepth_9);

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_symptom_found_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_3);

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_bug_found_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_3);

static void MR_CALL 
mdb__declarative_debugger__diagnosis_resume_previous_8_p_0(
  MR_Word Store_9,
  MR_Word * Response_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15,
  MR_Word STATE_VARIABLE_Browser_0_16,
  MR_Word * STATE_VARIABLE_Browser_17);

static void MR_CALL 
mdb__declarative_debugger__diagnosis_new_tree_9_p_0(
  MR_Word Store_10,
  MR_Word Node_11,
  MR_Word * Response_12,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17,
  MR_Word STATE_VARIABLE_Browser_0_18,
  MR_Word * STATE_VARIABLE_Browser_19);

static MR_Word MR_CALL 
mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_f_0(void);

static MR_Word MR_CALL 
mdb__declarative_debugger__divide_and_query_search_mode_0_f_0(void);

static MR_Word MR_CALL 
mdb__declarative_debugger__top_down_search_mode_0_f_0(void);

static void MR_CALL 
mdb__declarative_debugger__reset_knowledge_base_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7);

static void MR_CALL 
mdb__declarative_debugger__set_fallback_search_mode_4_p_0(
  MR_Word Store_5,
  MR_Word SearchMode_6,
  MR_Word STATE_VARIABLE_Diagnoser_0_10,
  MR_Word * STATE_VARIABLE_Diagnoser_11);

static void MR_CALL 
mdb__declarative_debugger__set_diagnoser_to_not_testing_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7);

static void MR_CALL 
mdb__declarative_debugger__set_diagnoser_to_testing_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7);

static void MR_CALL 
mdb__declarative_debugger__diagnoser_session_init_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_4,
  MR_Word * STATE_VARIABLE_Diagnoser_5);

static void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_store_5_p_0(
  MR_Word InputStream_6,
  MR_Word OutputStream_7,
  MR_Word Browser_8,
  MR_Word HelpSystem_9,
  MR_Word * Diagnoser_10);

static void MR_CALL 
mdb__declarative_debugger__diagnosis_2_6_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_32,
  MR_Box Store_7,
  MR_Word AnalysisType_8,
  MR_Word Diagnoser0_9,
  MR_Tuple * HeadVar__4_4);

static void MR_CALL 
mdb__declarative_debugger__confirm_bug_8_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_annotated_trace_32,
  MR_Box Store_9,
  MR_Word Bug_10,
  MR_Word Evidence_11,
  MR_Word * Response_12,
  MR_Word STATE_VARIABLE_Diagnoser_0_19,
  MR_Word * STATE_VARIABLE_Diagnoser_20);

static void MR_CALL 
mdb__declarative_debugger__handle_oracle_response_7_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_109,
  MR_Box Store_8,
  MR_Word OracleResponse_9,
  MR_Word * DiagnoserResponse_10,
  MR_Word STATE_VARIABLE_Diagnoser_0_27,
  MR_Word * STATE_VARIABLE_Diagnoser_28);

static void MR_CALL 
mdb__declarative_debugger__handle_analyser_response_8_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_123,
  MR_Box Store_9,
  MR_Word AnalyserResponse_10,
  MR_Word MaybeOrigin_11,
  MR_Word * DiagnoserResponse_12,
  MR_Word STATE_VARIABLE_Diagnoser_0_33,
  MR_Word * STATE_VARIABLE_Diagnoser_34);

static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word Diagnoser_5,
  MR_Word * Response_6);

static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_4,
  MR_Word * STATE_VARIABLE_Diagnoser_5);

static void MR_CALL 
mdb__declarative_debugger__debug_origin_3_p_0(
  MR_Integer * Flag_1);

static void MR_CALL 
mdb__declarative_debugger__write_origin_5_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_39,
  MR_Word Stream_6,
  MR_Word HeadVar__2_2,
  MR_Word Origin_8);

static MR_bool MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * STATE_VARIABLE_Diagnoser_8);

static void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(
  MR_Word TypeInfo_for_R_98,
  MR_Word DiagnoserException_7,
  MR_Word * Response_8,
  MR_Word STATE_VARIABLE_Diagnoser_0_17,
  MR_Word * STATE_VARIABLE_Diagnoser_18);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_answer_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_answer_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_bug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_bug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_confirmation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_confirmation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_contour_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_contour_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_e_bug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_e_bug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_evidence_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_evidence_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_i_bug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_i_bug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_position_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_position_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_question_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_question_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_truth_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_truth_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____final_decl_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____final_decl_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____init_decl_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____init_decl_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____some_decl_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__declarative_debugger____Compare____some_decl_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_1[8][2];

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_2[1][3];

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_3[1][4];

static /* final */ const MR_Integer mdb__declarative_debugger_scalar_common_4[1][3];

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_5[1][10];




static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_1[8][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__io_action__mdb__io_action__type_ctor_info_io_action_range_0))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "handle_analyser_response")),
    ((MR_Box) ((MR_String) "subtree requested for node which is not an implicit root"))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "handle_oracle_response")),
    ((MR_Box) ((MR_String) "no last question when got show_info request"))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "handle_oracle_response")),
    ((MR_Box) ((MR_String) "no last question when got undo request"))
  },
};

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0))
  },
};

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__)),
    ((MR_Box) (&mdb__declarative_debugger_scalar_common_2[0])),
    ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[0])),
    ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[1]))
  },
};

static /* final */ const MR_Integer mdb__declarative_debugger_scalar_common_4[1][3] = {
  /* row   0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_5[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_debugger_scalar_common_4[0])),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_analyser__pti_analysis_type_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2)),
    ((MR_Box) (&mdb__declarative_debugger____vpti_tuple_2__pseudo_mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.declarative_debugger.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#line 1017 "declarative_debugger.m"

// The declarative debugger will print diagnostic information about the origins
// computed by dependency tracking if this flag has a positive value.

int MR_DD_debug_origin = 0;



#line 682 "declarative_debugger.m"
void 
MR_DD_decl_diagnosis_state_init(
  MR_Word InputStream_6,
  MR_Word OutputStream_7,
  MR_Word Browser_8,
  MR_Word HelpSystem_9,
  MR_Word * Diagnoser_10)
#line 682 "declarative_debugger.m"
{
#line 682 "declarative_debugger.m"
	mdb__declarative_debugger__diagnoser_state_init_store_5_p_0((MR_Word) InputStream_6, (MR_Word) OutputStream_7, (MR_Word) Browser_8, (MR_Word) HelpSystem_9, (MR_Word *) Diagnoser_10);
}

#line 699 "declarative_debugger.m"
void 
MR_DD_decl_session_init(
  MR_Word STATE_VARIABLE_Diagnoser_0_4,
  MR_Word * STATE_VARIABLE_Diagnoser_5)
#line 699 "declarative_debugger.m"
{
#line 699 "declarative_debugger.m"
	mdb__declarative_debugger__diagnoser_session_init_2_p_0((MR_Word) STATE_VARIABLE_Diagnoser_0_4, (MR_Word *) STATE_VARIABLE_Diagnoser_5);
}

#line 708 "declarative_debugger.m"
void 
MR_DD_decl_set_diagnoser_to_testing(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7)
#line 708 "declarative_debugger.m"
{
#line 708 "declarative_debugger.m"
	mdb__declarative_debugger__set_diagnoser_to_testing_2_p_0((MR_Word) STATE_VARIABLE_Diagnoser_0_6, (MR_Word *) STATE_VARIABLE_Diagnoser_7);
}

#line 722 "declarative_debugger.m"
void 
MR_DD_decl_set_diagnoser_to_not_testing(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7)
#line 722 "declarative_debugger.m"
{
#line 722 "declarative_debugger.m"
	mdb__declarative_debugger__set_diagnoser_to_not_testing_2_p_0((MR_Word) STATE_VARIABLE_Diagnoser_0_6, (MR_Word *) STATE_VARIABLE_Diagnoser_7);
}

#line 735 "declarative_debugger.m"
void 
MR_DD_decl_set_fallback_search_mode(
  MR_Word Store_5,
  MR_Word SearchMode_6,
  MR_Word STATE_VARIABLE_Diagnoser_0_10,
  MR_Word * STATE_VARIABLE_Diagnoser_11)
#line 735 "declarative_debugger.m"
{
#line 735 "declarative_debugger.m"
	mdb__declarative_debugger__set_fallback_search_mode_4_p_0((MR_Word) Store_5, (MR_Word) SearchMode_6, (MR_Word) STATE_VARIABLE_Diagnoser_0_10, (MR_Word *) STATE_VARIABLE_Diagnoser_11);
}

#line 749 "declarative_debugger.m"
void 
MR_DD_decl_reset_knowledge_base(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7)
#line 749 "declarative_debugger.m"
{
#line 749 "declarative_debugger.m"
	mdb__declarative_debugger__reset_knowledge_base_2_p_0((MR_Word) STATE_VARIABLE_Diagnoser_0_6, (MR_Word *) STATE_VARIABLE_Diagnoser_7);
}

#line 762 "declarative_debugger.m"
MR_Word 
MR_DD_decl_top_down_search_mode(void)
#line 762 "declarative_debugger.m"
{
#line 762 "declarative_debugger.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_debugger__top_down_search_mode_0_f_0();
	return ret_value;
}

#line 771 "declarative_debugger.m"
MR_Word 
MR_DD_decl_divide_and_query_search_mode(void)
#line 771 "declarative_debugger.m"
{
#line 771 "declarative_debugger.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_debugger__divide_and_query_search_mode_0_f_0();
	return ret_value;
}

#line 781 "declarative_debugger.m"
MR_Word 
MR_DD_decl_suspicion_divide_and_query_search_mode(void)
#line 781 "declarative_debugger.m"
{
#line 781 "declarative_debugger.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_f_0();
	return ret_value;
}

#line 794 "declarative_debugger.m"
void 
MR_DD_decl_diagnosis_new_tree(
  MR_Word Store_10,
  MR_Word Node_11,
  MR_Word * Response_12,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17,
  MR_Word STATE_VARIABLE_Browser_0_18,
  MR_Word * STATE_VARIABLE_Browser_19)
#line 794 "declarative_debugger.m"
{
#line 794 "declarative_debugger.m"
	mdb__declarative_debugger__diagnosis_new_tree_9_p_0((MR_Word) Store_10, (MR_Word) Node_11, (MR_Word *) Response_12, (MR_Word) STATE_VARIABLE_State_0_16, (MR_Word *) STATE_VARIABLE_State_17, (MR_Word) STATE_VARIABLE_Browser_0_18, (MR_Word *) STATE_VARIABLE_Browser_19);
}

#line 810 "declarative_debugger.m"
void 
MR_DD_decl_diagnosis_resume_previous(
  MR_Word Store_9,
  MR_Word * Response_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15,
  MR_Word STATE_VARIABLE_Browser_0_16,
  MR_Word * STATE_VARIABLE_Browser_17)
#line 810 "declarative_debugger.m"
{
#line 810 "declarative_debugger.m"
	mdb__declarative_debugger__diagnosis_resume_previous_8_p_0((MR_Word) Store_9, (MR_Word *) Response_10, (MR_Word) STATE_VARIABLE_State_0_14, (MR_Word *) STATE_VARIABLE_State_15, (MR_Word) STATE_VARIABLE_Browser_0_16, (MR_Word *) STATE_VARIABLE_Browser_17);
}

#line 823 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_bug_found(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_3)
#line 823 "declarative_debugger.m"
{
#line 823 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_bug_found_2_p_0((MR_Word) HeadVar__1_1, (MR_Integer *) Event_3);
	return ret_value;
}

#line 831 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_symptom_found(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_3)
#line 831 "declarative_debugger.m"
{
#line 831 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_symptom_found_2_p_0((MR_Word) HeadVar__1_1, (MR_Integer *) Event_3);
	return ret_value;
}

#line 839 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_no_bug_found(
  MR_Word HeadVar__1_1)
#line 839 "declarative_debugger.m"
{
#line 839 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0((MR_Word) HeadVar__1_1);
	return ret_value;
}

#line 848 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_require_subtree(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_6,
  MR_Integer * SeqNo_7,
  MR_Word * CallPreceding_8,
  MR_Integer * MaxDepth_9)
#line 848 "declarative_debugger.m"
{
#line 848 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_require_subtree_5_p_0((MR_Word) HeadVar__1_1, (MR_Integer *) Event_6, (MR_Integer *) SeqNo_7, (MR_Word *) CallPreceding_8, (MR_Integer *) MaxDepth_9);
	return ret_value;
}

#line 858 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_require_supertree(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_4,
  MR_Integer * SeqNo_5)
#line 858 "declarative_debugger.m"
{
#line 858 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_require_supertree_3_p_0((MR_Word) HeadVar__1_1, (MR_Integer *) Event_4, (MR_Integer *) SeqNo_5);
	return ret_value;
}

#line 871 "declarative_debugger.m"
void 
MR_DD_decl_add_trusted_module(
  MR_String ModuleName_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_9,
  MR_Word * STATE_VARIABLE_Diagnoser_10)
#line 871 "declarative_debugger.m"
{
#line 871 "declarative_debugger.m"
	mdb__declarative_debugger__add_trusted_module_3_p_0((MR_String) ModuleName_4, (MR_Word) STATE_VARIABLE_Diagnoser_0_9, (MR_Word *) STATE_VARIABLE_Diagnoser_10);
}

#line 887 "declarative_debugger.m"
void 
MR_DD_decl_add_trusted_pred_or_func(
  const MR_ProcLayout * ProcLayout_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_8,
  MR_Word * STATE_VARIABLE_Diagnoser_9)
#line 887 "declarative_debugger.m"
{
#line 887 "declarative_debugger.m"
	MR_Box boxed_ProcLayout_4;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_ProcLayout *, ProcLayout_4, boxed_ProcLayout_4);
	mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(boxed_ProcLayout_4, (MR_Word) STATE_VARIABLE_Diagnoser_0_8, (MR_Word *) STATE_VARIABLE_Diagnoser_9);
}

#line 899 "declarative_debugger.m"
void 
MR_DD_decl_trust_standard_library(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7)
#line 899 "declarative_debugger.m"
{
#line 899 "declarative_debugger.m"
	mdb__declarative_debugger__trust_standard_library_2_p_0((MR_Word) STATE_VARIABLE_Diagnoser_0_6, (MR_Word *) STATE_VARIABLE_Diagnoser_7);
}

#line 911 "declarative_debugger.m"
MR_bool 
MR_DD_decl_remove_trusted(
  MR_Integer N_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_8,
  MR_Word * STATE_VARIABLE_Diagnoser_9)
#line 911 "declarative_debugger.m"
{
#line 911 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__remove_trusted_3_p_0((MR_Integer) N_4, (MR_Word) STATE_VARIABLE_Diagnoser_0_8, (MR_Word *) STATE_VARIABLE_Diagnoser_9);
	return ret_value;
}

#line 930 "declarative_debugger.m"
void 
MR_DD_decl_get_trusted_list(
  MR_Word Diagnoser_4,
  MR_Word MDBCommandFormat_5,
  MR_String * List_6)
#line 930 "declarative_debugger.m"
{
#line 930 "declarative_debugger.m"
	mdb__declarative_debugger__get_trusted_list_3_p_0((MR_Word) Diagnoser_4, (MR_Word) MDBCommandFormat_5, (MR_String *) List_6);
}


static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_2 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_analyser__pti_analysis_type_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_2 = {
  &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analysis_type_1,
  {
    (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_response_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mdb__declarative_debugger____vpti_tuple_2__pseudo_mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2),
    (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0)
};

static const MR_DuArgLocn mdb__declarative_debugger__mdb__declarative_debugger__field_locns_decl_answer_1_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_0 = {
  (MR_String) "truth_value",
  INT16_C(2),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_0,
  NULL,
  mdb__declarative_debugger__mdb__declarative_debugger__field_locns_decl_answer_1_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_1[5] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__list__ti_list_1builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0),
  (MR_PseudoTypeInfo) (&mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0)
};

static const MR_DuArgLocn mdb__declarative_debugger__mdb__declarative_debugger__field_locns_decl_answer_1_1[5] = {
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
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_1 = {
  (MR_String) "suspicious_subterm",
  INT16_C(5),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_1,
  NULL,
  mdb__declarative_debugger__mdb__declarative_debugger__field_locns_decl_answer_1_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_2[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_2 = {
  (MR_String) "ignore",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_3[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_3 = {
  (MR_String) "skip",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_0
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_1
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_2
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_3[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_3
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_answer_1[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_answer_1[4] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_2,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_3,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_0
};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_answer_1[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_answer_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_answer_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_answer_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_answer",
  { mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_answer_1 },
  { mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_answer_1 },
  (MR_Integer) 4,
  UINT16_C(12),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_answer_1,

};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_0[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_e_bug_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_0 = {
  (MR_String) "e_bug",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_1[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_i_bug_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_1 = {
  (MR_String) "i_bug",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_1
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_0
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_bug_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_bug_0[2] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_1
};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_bug_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_bug_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_bug_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_bug_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_bug",
  { mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_bug_0 },
  { mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_bug_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_bug_0,

};

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0 = {
  (MR_String) "confirm_bug",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1 = {
  (MR_String) "overrule_bug",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2 = {
  (MR_String) "abort_diagnosis",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_ordinal_ordered_decl_confirmation_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2
};

static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_confirmation_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1
};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_confirmation_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_confirmation_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_confirmation_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_confirmation_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_confirmation",
  { mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_confirmation_0 },
  { mdb__declarative_debugger__mdb__declarative_debugger__enum_ordinal_ordered_decl_confirmation_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_confirmation_0,

};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)
  }
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_contour_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_contour_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_contour_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_contour",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0 = {
  (MR_String) "incorrect_contour",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_1[2] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1 = {
  (MR_String) "partially_uncovered_atom",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_2[3] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0),
  (MR_PseudoTypeInfo) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2 = {
  (MR_String) "unhandled_exception",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_e_bug_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_e_bug_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2
};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_e_bug_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_e_bug_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_e_bug_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_e_bug_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_e_bug",
  { mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_e_bug_0 },
  { mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_e_bug_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_e_bug_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__pti_decl_question_1__pseudo_1)
  }
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_evidence_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_evidence_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_evidence_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_evidence",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__declarative_debugger__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_exception_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_exception_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_exception_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_exception",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_i_bug_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0),
  (MR_PseudoTypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0 = {
  (MR_String) "inadmissible_call",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_i_bug_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_i_bug_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_i_bug_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_i_bug_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_i_bug_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0
};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_i_bug_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_i_bug_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_i_bug_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_i_bug_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_i_bug",
  { mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_i_bug_0 },
  { mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_i_bug_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_i_bug_0,

};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_position_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_position_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_position_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_position",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_0[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_0 = {
  (MR_String) "wrong_answer",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_1[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_1 = {
  (MR_String) "missing_answer",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_2[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0),
  (MR_PseudoTypeInfo) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_2 = {
  (MR_String) "unexpected_exception",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_0
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_1
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_2
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_question_1[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_question_1[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_2,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_0
};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_question_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_question_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_question_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_question",
  { mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_question_1 },
  { mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_question_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_question_1,

};

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0 = {
  (MR_String) "truth_correct",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1 = {
  (MR_String) "truth_erroneous",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2 = {
  (MR_String) "truth_inadmissible",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_ordinal_ordered_decl_truth_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2
};

static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_truth_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2
};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_truth_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_truth_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_truth_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_truth",
  { mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_truth_0 },
  { mdb__declarative_debugger__mdb__declarative_debugger__enum_ordinal_ordered_decl_truth_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_truth_0,

};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0 = {
  (MR_String) "internal_error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1 = {
  (MR_String) "io_error",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2 = {
  (MR_String) "unimplemented_feature",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_exception_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_exception_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2
};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_exception_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____diagnoser_exception_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____diagnoser_exception_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "diagnoser_exception",
  { mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_exception_0 },
  { mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_exception_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_exception_0,

};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0 = {
  (MR_String) "bug_found",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1 = {
  (MR_String) "symptom_found",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2 = {
  (MR_String) "no_bug_found",
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

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_3[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_response_1_3[4] = {
  (MR_String) "require_subtree_final_event",
  (MR_String) "require_subtree_seqno",
  (MR_String) "require_subtree_call_preceding_node",
  (MR_String) "require_subtree_max_depth"
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3 = {
  (MR_String) "require_subtree",
  INT16_C(4),
  UINT16_C(4),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_3,
  mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_response_1_3,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_4[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4 = {
  (MR_String) "require_supertree",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_3[2] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_response_1[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_response_1[5] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1
};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_response_1[5] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_response_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____diagnoser_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____diagnoser_response_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "diagnoser_response",
  { mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_response_1 },
  { mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_response_1 },
  (MR_Integer) 5,
  UINT16_C(12),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_response_1,

};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_1 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_analyser__pti_analyser_state_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_1 = {
  &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_state_1,
  {
    (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__maybe__pti_maybe_1__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_state_1_0[4] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_analyser__pti_analyser_state_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__maybe__pti_maybe_1__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1)
};

static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_state_1_0[4] = {
  (MR_String) "analyser_state",
  (MR_String) "oracle_state",
  (MR_String) "warn_if_searching_supertree",
  (MR_String) "previous_diagnoser"
};

static const MR_DuArgLocn mdb__declarative_debugger__mdb__declarative_debugger__field_locns_diagnoser_state_1_0[4] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0 = {
  (MR_String) "diagnoser",
  INT16_C(4),
  UINT16_C(9),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_state_1_0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_state_1_0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_locns_diagnoser_state_1_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_state_1_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_state_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_state_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_state_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0
};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_state_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____diagnoser_state_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____diagnoser_state_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "diagnoser_state",
  { mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_state_1 },
  { mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_state_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_state_1,

};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__maybe__ti_maybe_1mdb__io_action__type_ctor_info_io_action_range_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mdb__io_action__mdb__io_action__type_ctor_info_io_action_range_0)
  }
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_final_decl_atom_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0),
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__maybe__ti_maybe_1mdb__io_action__type_ctor_info_io_action_range_0)
};

static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_final_decl_atom_0_0[2] = {
  (MR_String) "final_atom",
  (MR_String) "final_io_actions"
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0 = {
  (MR_String) "final_decl_atom",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_final_decl_atom_0_0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_names_final_decl_atom_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_final_decl_atom_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_final_decl_atom_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_final_decl_atom_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_final_decl_atom_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0
};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_final_decl_atom_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____final_decl_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____final_decl_atom_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "final_decl_atom",
  { mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_final_decl_atom_0 },
  { mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_final_decl_atom_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_final_decl_atom_0,

};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_init_decl_atom_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 = {
  (MR_String) "init_decl_atom",
  (MR_PseudoTypeInfo) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0),
  (MR_String) "init_atom",
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____init_decl_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____init_decl_atom_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "init_decl_atom",
  { &mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 },
  { &mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_init_decl_atom_0,

};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_0[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0 = {
  (MR_String) "init",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_1[1] = {
  (MR_PseudoTypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)
};

static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1 = {
  (MR_String) "final",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0
};

static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_some_decl_atom_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_some_decl_atom_0[2] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0
};

static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_some_decl_atom_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_some_decl_atom_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____some_decl_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____some_decl_atom_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "some_decl_atom",
  { mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_some_decl_atom_0 },
  { mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_some_decl_atom_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_some_decl_atom_0,

};

void MR_CALL 
mdb__declarative_debugger____Compare____some_decl_atom_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Var_16 = (MR_Word) ((MR_Word) (HeadVar__2_2));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_11 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      mdb__declarative_debugger____Compare____final_decl_atom_0_0(HeadVar__1_1, Var_16, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      mdb__declarative_debugger____Compare____init_decl_atom_0_0(HeadVar__1_1, Var_17, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____some_decl_atom_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_5 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_6 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_state_1_0(
  MR_Word TypeInfo_for_R_17,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;
    MR_Word TypeInfo_19_19;

    {
      TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_19_19, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
      MR_hl_field(MR_mktag(0), TypeInfo_19_19, 1) = ((MR_Box) (TypeInfo_for_R_17));
    }
    mdb__declarative_analyser____Compare____analyser_state_1_0(TypeInfo_19_19, &SubResult1_6, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mdb__declarative_oracle____Compare____oracle_state_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_28 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_29 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_28 < Var_29);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_28 > Var_29);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word TypeInfo_25_25;

          {
            TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_25_25, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1));
            MR_hl_field(MR_mktag(0), TypeInfo_25_25, 1) = ((MR_Box) (TypeInfo_for_R_17));
          }
          mercury__maybe____Compare____maybe_1_0(TypeInfo_25_25, HeadVar__1_1, (MR_Word) (ArgX4_13), (MR_Word) (ArgY4_14));
        }
      }
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_state_1_0(
  MR_Word TypeInfo_for_R_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeCtorInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_R_13));
    }
    succeeded = mdb__declarative_analyser____Unify____analyser_state_1_0(TypeInfo_15_15, (MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
    if (succeeded)
    {
      succeeded = mdb__declarative_oracle____Unify____oracle_state_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeCtorInfo_19_19 = (MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1);
          {
            TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_20_20, 0) = ((MR_Box) (TypeCtorInfo_19_19));
            MR_hl_field(MR_mktag(0), TypeInfo_20_20, 1) = ((MR_Box) (TypeInfo_for_R_13));
          }
          succeeded = mercury__maybe____Unify____maybe_1_0(TypeInfo_20_20, (MR_Word) (ArgX4_9), (MR_Word) (ArgY4_10));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_response_1_0(
  MR_Word TypeInfo_for_R_90,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_88 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_89 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_88 == CastY_89);
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
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
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
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_98 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_98 < ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_98 > ArgY1_5);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
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
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Var_105 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Integer ArgY1_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_105 < ArgY1_20);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_105 > ArgY1_20);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
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
              MR_Integer Var_99 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
              MR_Box Var_100 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
              MR_Integer Var_101 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer Var_102 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Integer ArgY1_53 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_56 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Box ArgY3_59 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3));
                        MR_Integer ArgY4_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 4))));
                        MR_Word SubResult1_54;

                        succeeded = (Var_102 < ArgY1_53);
                        if (succeeded)
                        {
                          SubResult1_54 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_102 > ArgY1_53);
                          if (succeeded)
                          {
                            SubResult1_54 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult1_54 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_54;
                        else
                        {
                          MR_Word SubResult2_57;

                          succeeded = (Var_101 < ArgY2_56);
                          if (succeeded)
                          {
                            SubResult2_57 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_101 > ArgY2_56);
                            if (succeeded)
                            {
                              SubResult2_57 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = MR_TRUE;
                              succeeded = !(succeeded);
                              if (succeeded)
                              {
                                SubResult2_57 = (MR_Integer) 0;
                                succeeded = MR_TRUE;
                              }
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult2_57;
                          else
                          {
                            MR_Word SubResult3_60;

                            mercury__builtin__compare_3_p_0(TypeInfo_for_R_90, &SubResult3_60, Var_100, ArgY3_59);
                            succeeded = (SubResult3_60 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult3_60;
                            else
                            {
                              succeeded = (Var_99 < ArgY4_62);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 1;
                              else
                              {
                                succeeded = (Var_99 > ArgY4_62);
                                if (succeeded)
                                  *HeadVar__1_1 = (MR_Integer) 2;
                                else
                                  *HeadVar__1_1 = (MR_Integer) 0;
                              }
                            }
                          }
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_103 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              MR_Integer Var_104 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Integer ArgY1_84 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer ArgY2_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                        MR_Word SubResult1_85;

                        succeeded = (Var_104 < ArgY1_84);
                        if (succeeded)
                        {
                          SubResult1_85 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_104 > ArgY1_84);
                          if (succeeded)
                          {
                            SubResult1_85 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult1_85 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult1_85;
                        else
                        {
                          succeeded = (Var_103 < ArgY2_87);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_103 > ArgY2_87);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 2;
                            else
                              *HeadVar__1_1 = (MR_Integer) 0;
                          }
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

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_response_1_0(
  MR_Word TypeInfo_for_R_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ArgX1_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_10;
              MR_Integer ArgX2_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_12;
              MR_Box ArgX3_13 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3));
              MR_Box ArgY3_14;
              MR_Integer ArgX4_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
              MR_Integer ArgY4_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                ArgY3_14 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3));
                ArgY4_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 4))));
                succeeded = (ArgX1_9 == ArgY1_10);
                if (succeeded)
                {
                  succeeded = (ArgX2_11 == ArgY2_12);
                  if (succeeded)
                  {
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_R_23, ArgX3_13, ArgY3_14);
                    if (succeeded)
                      succeeded = (ArgX4_15 == ArgY4_16);
                  }
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ArgX1_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
              MR_Integer ArgY1_18;
              MR_Integer ArgX2_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
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
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_exception_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_36 == CastY_37);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_43 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_44 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_6;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, Var_44, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_43, ArgY2_8);
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_String Var_46 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgY1_21 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_String ArgY2_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_22;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_22, Var_46, ArgY1_21);
                succeeded = (SubResult1_22 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_22;
                else
                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_45, ArgY2_24);
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
          MR_String Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_String ArgY1_35 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_47, ArgY1_35);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_exception_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_4;
          MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            if (succeeded)
              succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_8;
          MR_String ArgX2_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_String ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            if (succeeded)
              succeeded = (strcmp(ArgX2_9, ArgY2_10) == 0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ArgX1_11 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_String ArgY1_12;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_12 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (strcmp(ArgX1_11, ArgY1_12) == 0);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_truth_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_truth_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_question_1_0(
  MR_Word TypeInfo_for_T_66,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_64 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_65 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_64 == CastY_65);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_79 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_81 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_6;

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_66, &SubResult1_6, Var_81, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  MR_Word SubResult2_9;

                  mdb__declarative_debugger____Compare____init_decl_atom_0_0(&SubResult2_9, Var_80, ArgY2_8);
                  succeeded = (SubResult2_9 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_9;
                  else
                    mdb__declarative_debugger____Compare____final_decl_atom_0_0(HeadVar__1_1, Var_79, ArgY3_11);
                }
              }
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_75 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgY1_31 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                MR_Word ArgY2_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_32;

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_66, &SubResult1_32, Var_75, ArgY1_31);
                succeeded = (SubResult1_32 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_32;
                else
                {
                  MR_Word SubResult2_35;

                  mdb__declarative_debugger____Compare____init_decl_atom_0_0(&SubResult2_35, Var_74, ArgY2_34);
                  succeeded = (SubResult2_35 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_35;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_73)), ((MR_Box) (ArgY3_37)));
                }
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
          MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_78 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

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
                MR_Box ArgY1_57 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));
                MR_Word ArgY2_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_58;

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_66, &SubResult1_58, Var_78, ArgY1_57);
                succeeded = (SubResult1_58 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_58;
                else
                {
                  MR_Word SubResult2_61;

                  mdb__declarative_debugger____Compare____init_decl_atom_0_0(&SubResult2_61, Var_77, ArgY2_60);
                  succeeded = (SubResult2_61 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_61;
                  else
                    mdb__term_rep____Compare____term_rep_0_0(HeadVar__1_1, Var_76, ArgY3_63);
                }
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_question_1_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_23, ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(ArgX2_5, ArgY2_6);
              if (succeeded)
                succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(ArgX3_7, ArgY3_8);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_24_24;
          MR_Box ArgX1_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_10;
          MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_12;
          MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
            ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_23, ArgX1_9, ArgY1_10);
            if (succeeded)
            {
              succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(ArgX2_11, ArgY2_12);
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&mdb__declarative_debugger_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX3_13)), ((MR_Box) (ArgY3_14)));
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box ArgX1_15 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_18;
          MR_Word ArgX3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
            ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_23, ArgX1_15, ArgY1_16);
            if (succeeded)
            {
              succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(ArgX2_17, ArgY2_18);
              if (succeeded)
                succeeded = mdb__term_rep____Unify____term_rep_0_0(ArgX3_19, ArgY3_20);
            }
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_position_0_0(
  MR_Word * HeadVar__1_1)
{
  mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_position_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_exception_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mdb__term_rep____Compare____term_rep_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_exception_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mdb__term_rep____Unify____term_rep_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_evidence_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word TypeInfo_8_8;
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__list____Compare____list_1_0(TypeInfo_8_8, HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_evidence_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word TypeInfo_7_7;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  {
    TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
    MR_hl_field(MR_mktag(0), TypeInfo_7_7, 1) = ((MR_Box) (TypeInfo_for_T_5));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_7_7, (MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_contour_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_contour_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_confirmation_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_confirmation_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_bug_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      mdb__declarative_debugger____Compare____decl_e_bug_0_0(HeadVar__1_1, Var_16, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_17 = (MR_Word) ((MR_Word) (HeadVar__2_2));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      mdb__declarative_debugger____Compare____decl_i_bug_0_0(HeadVar__1_1, Var_17, ArgY1_11);
    }
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_i_bug_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
    MR_Integer ArgX4_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
    MR_Integer ArgY4_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    mdb__declarative_debugger____Compare____init_decl_atom_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult3_11;

      mdb__declarative_debugger____Compare____init_decl_atom_0_0(&SubResult3_11, ArgX3_9, ArgY3_10);
      succeeded = (SubResult3_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult3_11;
      else
      {
        succeeded = (ArgX4_12 < ArgY4_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX4_12 > ArgY4_13);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_e_bug_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_64 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_65 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_64 == CastY_65);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer Var_75 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
          MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
                MR_Integer ArgY4_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
                MR_Word SubResult1_6;

                mdb__declarative_debugger____Compare____init_decl_atom_0_0(&SubResult1_6, Var_78, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  MR_Word SubResult2_9;

                  mdb__declarative_debugger____Compare____final_decl_atom_0_0(&SubResult2_9, Var_77, ArgY2_8);
                  succeeded = (SubResult2_9 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_9;
                  else
                  {
                    MR_Word SubResult3_12;

                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (Var_76)), ((MR_Box) (ArgY3_11)));
                    succeeded = (SubResult3_12 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_12;
                    else
                    {
                      succeeded = (Var_75 < ArgY4_14);
                      if (succeeded)
                        *HeadVar__1_1 = (MR_Integer) 1;
                      else
                      {
                        succeeded = (Var_75 > ArgY4_14);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 2;
                        else
                          *HeadVar__1_1 = (MR_Integer) 0;
                      }
                    }
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
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_79 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_36;

                mdb__declarative_debugger____Compare____init_decl_atom_0_0(&SubResult1_36, Var_80, ArgY1_35);
                succeeded = (SubResult1_36 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_36;
                else
                {
                  succeeded = (Var_79 < ArgY2_38);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_79 > ArgY2_38);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
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
          MR_Integer Var_81 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                MR_Word ArgY1_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_60 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                MR_Integer ArgY3_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word SubResult1_58;

                mdb__declarative_debugger____Compare____init_decl_atom_0_0(&SubResult1_58, Var_83, ArgY1_57);
                succeeded = (SubResult1_58 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_58;
                else
                {
                  MR_Word SubResult2_61;

                  mdb__term_rep____Compare____term_rep_0_0(&SubResult2_61, Var_82, ArgY2_60);
                  succeeded = (SubResult2_61 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_61;
                  else
                  {
                    succeeded = (Var_81 < ArgY3_63);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 1;
                    else
                    {
                      succeeded = (Var_81 > ArgY3_63);
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

void MR_CALL 
mdb__declarative_debugger____Compare____init_decl_atom_0_0(
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

    mdb__declarative_execution____Compare____trace_atom_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____final_decl_atom_0_0(
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

    mdb__declarative_execution____Compare____trace_atom_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_bug_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      succeeded = mdb__declarative_debugger____Unify____decl_e_bug_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word ArgX1_5 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_6 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = mdb__declarative_debugger____Unify____decl_i_bug_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_i_bug_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
    MR_Integer ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

    succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(ArgX3_7, ArgY3_8);
      if (succeeded)
        succeeded = (ArgX4_9 == ArgY4_10);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_e_bug_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word TypeInfo_23_23;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_6;
          MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_8;
          MR_Integer ArgX4_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
          MR_Integer ArgY4_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
            succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(ArgX2_5, ArgY2_6);
              if (succeeded)
              {
                TypeInfo_23_23 = (MR_Word) (&mdb__declarative_debugger_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
                if (succeeded)
                  succeeded = (ArgX4_9 == ArgY4_10);
              }
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_12;
          MR_Integer ArgX2_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_14;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(ArgX1_11, ArgY1_12);
            if (succeeded)
              succeeded = (ArgX2_13 == ArgY2_14);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_16;
          MR_Word ArgX2_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_18;
          MR_Integer ArgX3_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          MR_Integer ArgY3_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(ArgX1_15, ArgY1_16);
            if (succeeded)
            {
              succeeded = mdb__term_rep____Unify____term_rep_0_0(ArgX2_17, ArgY2_18);
              if (succeeded)
                succeeded = (ArgX3_19 == ArgY3_20);
            }
          }
        }
        break;
    }
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____init_decl_atom_0_0(
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

    succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____final_decl_atom_0_0(
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

    succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&mdb__declarative_debugger_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_answer_1_0(
  MR_Word TypeInfo_for_T_83,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_81 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_82 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_81 == CastY_82);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_96 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
          MR_Box Var_97 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));
                MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 3);
                MR_Word SubResult1_6;

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_83, &SubResult1_6, Var_97, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  MR_Integer Var_102 = (MR_Integer) (Var_96);
                  MR_Integer Var_103 = (MR_Integer) (ArgY2_8);

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
          MR_Word Var_91 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word Var_92 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
          MR_Word Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box Var_95 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgY1_30 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                MR_Word ArgY2_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                MR_Word ArgY3_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                MR_Word ArgY4_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
                MR_Word ArgY5_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
                MR_Word SubResult1_31;

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_83, &SubResult1_31, Var_95, ArgY1_30);
                succeeded = (SubResult1_31 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_31;
                else
                {
                  MR_Word SubResult2_34;

                  mdbcomp__program_representation____Compare____arg_pos_0_0(&SubResult2_34, Var_94, ArgY2_33);
                  succeeded = (SubResult2_34 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_34;
                  else
                  {
                    MR_Word SubResult3_37;

                    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[2]), &SubResult3_37, ((MR_Box) (Var_93)), ((MR_Box) (ArgY3_36)));
                    succeeded = (SubResult3_37 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_37;
                    else
                    {
                      MR_Word SubResult4_40;
                      MR_Integer Var_98 = (MR_Integer) (Var_92);
                      MR_Integer Var_99 = (MR_Integer) (ArgY4_39);

                      succeeded = (Var_98 < Var_99);
                      if (succeeded)
                      {
                        SubResult4_40 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_98 > Var_99);
                        if (succeeded)
                        {
                          SubResult4_40 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult4_40 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult4_40;
                      else
                      {
                        MR_Integer Var_100 = (MR_Integer) (Var_91);
                        MR_Integer Var_101 = (MR_Integer) (ArgY5_42);

                        succeeded = (Var_100 < Var_101);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_100 > Var_101);
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
          MR_Box Var_89 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

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
                MR_Box ArgY1_65 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_83, HeadVar__1_1, Var_89, ArgY1_65);
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
          MR_Box Var_90 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));

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
                MR_Box ArgY1_80 = (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0));

                mercury__builtin__compare_3_p_0(TypeInfo_for_T_83, HeadVar__1_1, Var_90, ArgY1_80);
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_answer_1_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_4;
          MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 3);
          MR_Word ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
            ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 3);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_23, ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_25_25;
          MR_Box ArgX1_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_10;
          MR_Word ArgX3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word ArgY3_12;
          MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
          MR_Word ArgY4_14;
          MR_Word ArgX5_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word ArgY5_16;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
            ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            ArgY3_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))) >> 1)) & (MR_Integer) 1);
            ArgY5_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_23, ArgX1_7, ArgY1_8);
            if (succeeded)
            {
              succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(ArgX2_9, ArgY2_10);
              if (succeeded)
              {
                TypeInfo_25_25 = (MR_Word) (&mdb__declarative_debugger_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX3_11)), ((MR_Box) (ArgY3_12)));
                if (succeeded)
                {
                  succeeded = (ArgX4_13 == ArgY4_14);
                  if (succeeded)
                    succeeded = (ArgX5_15 == ArgY5_16);
                }
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box ArgX1_17 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_18;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_23, ArgX1_17, ArgY1_18);
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Box ArgX1_19 = (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0));
          MR_Box ArgY1_20;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
          if (succeeded)
          {
            ArgY1_20 = (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0));
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_23, ArgX1_19, ArgY1_20);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger__get_trusted_list_3_p_0(
  MR_Word Diagnoser_4,
  MR_Word MDBCommandFormat_5,
  MR_String * List_6)
{
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser_4, (MR_Integer) 1))));

  mdb__declarative_oracle__get_trusted_list_3_p_0(Var_7, MDBCommandFormat_5, List_6);
}

static MR_bool MR_CALL 
mdb__declarative_debugger__remove_trusted_3_p_0(
  MR_Integer N_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_8,
  MR_Word * STATE_VARIABLE_Diagnoser_9)
{
  MR_bool succeeded;
  MR_Word Oracle0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 1))));
  MR_Word Oracle_7;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_16;

  succeeded = mdb__declarative_oracle__remove_trusted_3_p_0(N_4, Oracle0_6, &Oracle_7);
  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 0))));
    Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Diagnoser_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_7));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger__trust_standard_library_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7)
{
  MR_Word Oracle0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 1))));
  MR_Word Oracle_5;
  MR_Word Var_11;
  MR_Word Var_13;
  MR_Word Var_14;

  mdb__declarative_oracle__trust_standard_library_2_p_0(Oracle0_4, &Oracle_5);
  Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 0))));
  Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Diagnoser_7 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_5));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
  }
}

static void MR_CALL 
mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(
  MR_Box ProcLayout_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_8,
  MR_Word * STATE_VARIABLE_Diagnoser_9)
{
  MR_Word Oracle0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 1))));
  MR_Word Oracle_7;
  MR_Word Var_13;
  MR_Word Var_15;
  MR_Word Var_16;

  mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(ProcLayout_4, Oracle0_6, &Oracle_7);
  Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 0))));
  Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 2))) & (MR_Integer) 1);
  Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Diagnoser_9 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_7));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_15));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
  }
}

static void MR_CALL 
mdb__declarative_debugger__add_trusted_module_3_p_0(
  MR_String ModuleName_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_9,
  MR_Word * STATE_VARIABLE_Diagnoser_10)
{
  MR_Word SymModuleName_6;
  MR_Word Oracle0_7;
  MR_Word Oracle_8;
  MR_Word Var_14;
  MR_Word Var_16;
  MR_Word Var_17;

  SymModuleName_6 = mdbcomp__sym_name__string_to_sym_name_1_f_0(ModuleName_4);
  Oracle0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_9, (MR_Integer) 1))));
  mdb__declarative_oracle__add_trusted_module_3_p_0(SymModuleName_6, Oracle0_7, &Oracle_8);
  Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_9, (MR_Integer) 0))));
  Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_9, (MR_Integer) 2))) & (MR_Integer) 1);
  Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_9, (MR_Integer) 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Diagnoser_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_8));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_16));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_supertree_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_4,
  MR_Integer * SeqNo_5)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1)));

  if (succeeded)
  {
    *Event_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
    *SeqNo_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_subtree_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_6,
  MR_Integer * SeqNo_7,
  MR_Word * CallPreceding_8,
  MR_Integer * MaxDepth_9)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0)));

  if (succeeded)
  {
    *Event_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
    *SeqNo_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
    *CallPreceding_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
    *MaxDepth_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4))));
  }
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_symptom_found_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);

  if (succeeded)
    *Event_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
  return succeeded;
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_bug_found_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_3)
{
  MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);

  if (succeeded)
    *Event_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger__diagnosis_resume_previous_8_p_0(
  MR_Word Store_9,
  MR_Word * Response_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15,
  MR_Word STATE_VARIABLE_Browser_0_16,
  MR_Word * STATE_VARIABLE_Browser_17)
{
  mdb__declarative_debugger__diagnosis_9_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_2[0]), ((MR_Box) (Store_9)), (MR_Word) ((MR_Unsigned) 0U), Response_10, STATE_VARIABLE_State_0_14, STATE_VARIABLE_State_15, STATE_VARIABLE_Browser_0_16, STATE_VARIABLE_Browser_17);
}

static void MR_CALL 
mdb__declarative_debugger__diagnosis_new_tree_9_p_0(
  MR_Word Store_10,
  MR_Word Node_11,
  MR_Word * Response_12,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17,
  MR_Word STATE_VARIABLE_Browser_0_18,
  MR_Word * STATE_VARIABLE_Browser_19)
{
  MR_Word Var_22;
  MR_Word Var_26 = (MR_Word) (Node_11);

  {
    Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_26));
  }
  mdb__declarative_debugger__diagnosis_9_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_2[0]), ((MR_Box) (Store_10)), Var_22, Response_12, STATE_VARIABLE_State_0_16, STATE_VARIABLE_State_17, STATE_VARIABLE_Browser_0_18, STATE_VARIABLE_Browser_19);
}

static MR_Word MR_CALL 
mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_f_0();
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
mdb__declarative_debugger__divide_and_query_search_mode_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mdb__declarative_analyser__divide_and_query_search_mode_0_f_0();
  return HeadVar__1_1;
}

static MR_Word MR_CALL 
mdb__declarative_debugger__top_down_search_mode_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mdb__declarative_analyser__top_down_search_mode_0_f_0();
  return HeadVar__1_1;
}

static void MR_CALL 
mdb__declarative_debugger__reset_knowledge_base_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7)
{
  MR_Word Oracle0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 1))));
  MR_Word Oracle_5;
  MR_Word Var_11;
  MR_Word Var_13;
  MR_Word Var_14;

  mdb__declarative_oracle__reset_oracle_knowledge_base_2_p_0(Oracle0_4, &Oracle_5);
  Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 0))));
  Var_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Diagnoser_7 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_5));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_13));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
  }
}

static void MR_CALL 
mdb__declarative_debugger__set_fallback_search_mode_4_p_0(
  MR_Word Store_5,
  MR_Word SearchMode_6,
  MR_Word STATE_VARIABLE_Diagnoser_0_10,
  MR_Word * STATE_VARIABLE_Diagnoser_11)
{
  MR_Word Analyser0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 0))));
  MR_Word Analyser_9;
  MR_Word Var_12 = (MR_Word) (Store_5);
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  mdb__declarative_analyser__set_analyser_fallback_search_mode_4_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_3[0]), ((MR_Box) (Var_12)), SearchMode_6, Analyser0_8, &Analyser_9);
  Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 1))));
  Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 2))) & (MR_Integer) 1);
  Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Diagnoser_11 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Analyser_9));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_17));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_18));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_19));
  }
}

static void MR_CALL 
mdb__declarative_debugger__set_diagnoser_to_not_testing_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7)
{
  MR_Word Oracle0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 1))));
  MR_Word Oracle_5;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_15;

  mdb__declarative_oracle__set_oracle_testing_flag_3_p_0((MR_Integer) 0, Oracle0_4, &Oracle_5);
  Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 0))));
  Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Diagnoser_7 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_5));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_14));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_15));
  }
}

static void MR_CALL 
mdb__declarative_debugger__set_diagnoser_to_testing_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7)
{
  MR_Word Oracle0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 1))));
  MR_Word Oracle_5;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Word Var_15;

  mdb__declarative_oracle__set_oracle_testing_flag_3_p_0((MR_Integer) 1, Oracle0_4, &Oracle_5);
  Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 0))));
  Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 2))) & (MR_Integer) 1);
  Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 3))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Diagnoser_7 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_12));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_5));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_14));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_15));
  }
}

static void MR_CALL 
mdb__declarative_debugger__diagnoser_session_init_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_4,
  MR_Word * STATE_VARIABLE_Diagnoser_5)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 1))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 3))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Diagnoser_5 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_11));
  }
}

static void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_store_5_p_0(
  MR_Word InputStream_6,
  MR_Word OutputStream_7,
  MR_Word Browser_8,
  MR_Word HelpSystem_9,
  MR_Word * Diagnoser_10)
{
  MR_Word Analyser_12;
  MR_Word Oracle_13;

  mdb__declarative_analyser__analyser_state_init_1_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[1]), &Analyser_12);
  mdb__declarative_oracle__oracle_state_init_5_p_0(InputStream_6, OutputStream_7, Browser_8, HelpSystem_9, &Oracle_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *Diagnoser_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Analyser_12));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_13));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
mdb__declarative_debugger__diagnosis_2_6_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_32,
  MR_Box Store_7,
  MR_Word AnalysisType_8,
  MR_Word Diagnoser0_9,
  MR_Tuple * HeadVar__4_4)
{
  MR_Word TypeInfo_34_34;
  MR_Word TypeInfo_36_36;
  MR_Word TypeInfo_38_38;
  MR_Word TypeInfo_40_40;
  MR_Word TypeClassInfo_for_mercury_edt_42;
  MR_Word Response_10;
  MR_Word Diagnoser_11;
  MR_Word Oracle0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser0_9, (MR_Integer) 1))));
  MR_Word Analyser0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser0_9, (MR_Integer) 0))));
  MR_Word AnalyserResponse_15;
  MR_Word Analyser_16;
  MR_Word Diagnoser1_17;
  MR_Word MaybeOrigin_18;
  MR_Word Var_21 = ((MR_Word) (Store_7));
  MR_Word conv1_AnalyserResponse_15;
  MR_Word conv0_Analyser_16;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;

  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_32, (MR_Integer) 1, &TypeInfo_34_34);
  {
    TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_36_36, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
    MR_hl_field(MR_mktag(0), TypeInfo_36_36, 1) = ((MR_Box) (TypeInfo_34_34));
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_32, (MR_Integer) 2, &TypeInfo_38_38);
  {
    TypeInfo_40_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_40_40, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
    MR_hl_field(MR_mktag(0), TypeInfo_40_40, 1) = ((MR_Box) (TypeInfo_38_38));
  }
  {
    TypeClassInfo_for_mercury_edt_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_42, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_42, 1) = ((MR_Box) (TypeClassInfo_for_annotated_trace_32));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_42, 2) = ((MR_Box) (TypeInfo_36_36));
    MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_42, 3) = ((MR_Box) (TypeInfo_40_40));
  }
  mdb__declarative_analyser__start_or_resume_analysis_6_p_0(TypeClassInfo_for_mercury_edt_42, ((MR_Box) (Var_21)), Oracle0_13, (MR_Word) (AnalysisType_8), &conv1_AnalyserResponse_15, (MR_Word) (Analyser0_14), &conv0_Analyser_16);
  AnalyserResponse_15 = (MR_Word) (conv1_AnalyserResponse_15);
  Analyser_16 = (MR_Word) (conv0_Analyser_16);
  Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser0_9, (MR_Integer) 1))));
  Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Diagnoser0_9, (MR_Integer) 2))) & (MR_Integer) 1);
  Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser0_9, (MR_Integer) 3))));
  {
    Diagnoser1_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Diagnoser1_17, 0) = ((MR_Box) (Analyser_16));
    MR_hl_field(MR_mktag(0), Diagnoser1_17, 1) = ((MR_Box) (Var_29));
    MR_hl_field(MR_mktag(0), Diagnoser1_17, 2) = (MR_Box) ((MR_Unsigned) (Var_30));
    MR_hl_field(MR_mktag(0), Diagnoser1_17, 3) = ((MR_Box) (Var_31));
  }
  mdb__declarative_analyser__debug_analyser_state_2_p_0(TypeInfo_40_40, Analyser_16, &MaybeOrigin_18);
  mdb__declarative_debugger__handle_analyser_response_8_p_0(TypeClassInfo_for_annotated_trace_32, Store_7, AnalyserResponse_15, MaybeOrigin_18, &Response_10, Diagnoser1_17, &Diagnoser_11);
  {
    MR_Tuple base;
    base = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__4_4 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Response_10));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Diagnoser_11));
  }
}

static void MR_CALL 
mdb__declarative_debugger__confirm_bug_8_p_0(
  MR_Word TypeInfo_for_T_33,
  MR_Word TypeClassInfo_for_annotated_trace_32,
  MR_Box Store_9,
  MR_Word Bug_10,
  MR_Word Evidence_11,
  MR_Word * Response_12,
  MR_Word STATE_VARIABLE_Diagnoser_0_19,
  MR_Word * STATE_VARIABLE_Diagnoser_20)
{
  MR_Word Oracle0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 1))));
  MR_Word Confirmation_16;
  MR_Word Oracle_17;
  MR_Word STATE_VARIABLE_Diagnoser_24_24;
  MR_Word Var_28;
  MR_Word Var_30;
  MR_Word Var_31;

  mdb__declarative_oracle__oracle_confirm_bug_7_p_0(TypeInfo_for_T_33, Bug_10, Evidence_11, &Confirmation_16, Oracle0_15, &Oracle_17);
  Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 0))));
  Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 2))) & (MR_Integer) 1);
  Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 3))));
  {
    STATE_VARIABLE_Diagnoser_24_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, 0) = ((MR_Box) (Var_28));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, 1) = ((MR_Box) (Oracle_17));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, 2) = (MR_Box) ((MR_Unsigned) (Var_30));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, 3) = ((MR_Box) (Var_31));
  }
  switch (Confirmation_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      {
        *Response_12 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Diagnoser_20 = STATE_VARIABLE_Diagnoser_24_24;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Integer Event_18;

        if (((MR_tag((MR_Word) Bug_10)) == (MR_Integer) 1))
        {
          MR_Word EBug_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Bug_10, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) EBug_34)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Event_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EBug_34, (MR_Integer) 3))));
              break;
            case (MR_Integer) 1:
              Event_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), EBug_34, (MR_Integer) 1))));
              break;
            case (MR_Integer) 2:
              Event_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), EBug_34, (MR_Integer) 2))));
              break;
          }
        }
        else
        {
          MR_Word IBug_42 = (MR_Word) ((MR_Word) (Bug_10));

          Event_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IBug_42, (MR_Integer) 3))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Response_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Event_18));
        }
        *STATE_VARIABLE_Diagnoser_20 = STATE_VARIABLE_Diagnoser_24_24;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_29_61;
        MR_Word TypeInfo_31_63;
        MR_Word TypeInfo_33_65;
        MR_Word TypeInfo_35_67;
        MR_Word TypeClassInfo_for_mercury_edt_69;
        MR_Word AnalyserResponse_48;
        MR_Word Analyser_49;
        MR_Word Diagnoser1_50;
        MR_Word MaybeOrigin_51;
        MR_Word Var_52 = ((MR_Word) (Store_9));
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Word Var_59;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_32, (MR_Integer) 1, &TypeInfo_29_61);
        {
          TypeInfo_31_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_31_63, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
          MR_hl_field(MR_mktag(0), TypeInfo_31_63, 1) = ((MR_Box) (TypeInfo_29_61));
        }
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_32, (MR_Integer) 2, &TypeInfo_33_65);
        {
          TypeInfo_35_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_35_67, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
          MR_hl_field(MR_mktag(0), TypeInfo_35_67, 1) = ((MR_Box) (TypeInfo_33_65));
        }
        {
          TypeClassInfo_for_mercury_edt_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_69, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_69, 1) = ((MR_Box) (TypeClassInfo_for_annotated_trace_32));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_69, 2) = ((MR_Box) (TypeInfo_31_63));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_69, 3) = ((MR_Box) (TypeInfo_35_67));
        }
        mdb__declarative_analyser__revise_analysis_4_p_0(TypeClassInfo_for_mercury_edt_69, ((MR_Box) (Var_52)), &AnalyserResponse_48, Var_28, &Analyser_49);
        Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, (MR_Integer) 1))));
        Var_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, (MR_Integer) 2))) & (MR_Integer) 1);
        Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, (MR_Integer) 3))));
        {
          Diagnoser1_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Diagnoser1_50, 0) = ((MR_Box) (Analyser_49));
          MR_hl_field(MR_mktag(0), Diagnoser1_50, 1) = ((MR_Box) (Var_57));
          MR_hl_field(MR_mktag(0), Diagnoser1_50, 2) = (MR_Box) ((MR_Unsigned) (Var_58));
          MR_hl_field(MR_mktag(0), Diagnoser1_50, 3) = ((MR_Box) (Var_59));
        }
        mdb__declarative_analyser__debug_analyser_state_2_p_0(TypeInfo_35_67, Analyser_49, &MaybeOrigin_51);
        mdb__declarative_debugger__handle_analyser_response_8_p_0(TypeClassInfo_for_annotated_trace_32, Store_9, AnalyserResponse_48, MaybeOrigin_51, Response_12, Diagnoser1_50, STATE_VARIABLE_Diagnoser_20);
      }
      break;
  }
}

static void MR_CALL 
mdb__declarative_debugger__handle_oracle_response_7_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_109,
  MR_Box Store_8,
  MR_Word OracleResponse_9,
  MR_Word * DiagnoserResponse_10,
  MR_Word STATE_VARIABLE_Diagnoser_0_27,
  MR_Word * STATE_VARIABLE_Diagnoser_28)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) OracleResponse_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(OracleResponse_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_155_155;
            MR_Word TypeInfo_157_157;
            MR_Word STATE_VARIABLE_Diagnoser_47_47;
            MR_Word Analyser0_71;
            MR_Word AnalyserResponse_72;
            MR_Word MaybeOrigin_73;
            MR_Word PoppedDiagnoser_22;
            MR_Word TypeInfo_142_142;
            MR_Word AnalyserResponse0_70;
            MR_Word TypeInfo_144_144;
            MR_Word TypeInfo_146_146;
            MR_Word TypeInfo_148_148;
            MR_Word TypeInfo_150_150;
            MR_Word TypeClassInfo_for_mercury_edt_152;
            MR_Word Var_51;
            MR_Word conv5_AnalyserResponse0_70;

            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_109, (MR_Integer) 2, &TypeInfo_142_142);
            succeeded = mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(STATE_VARIABLE_Diagnoser_0_27, &PoppedDiagnoser_22);
            if (succeeded)
              STATE_VARIABLE_Diagnoser_47_47 = PoppedDiagnoser_22;
            else
            {
              MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1))));
              MR_Word OutputStream_68;

              OutputStream_68 = mdb__declarative_oracle__get_oracle_user_output_stream_1_f_0(Var_48);
              mercury__io__write_string_4_p_0(OutputStream_68, (MR_String) "Undo stack empty.\n");
              STATE_VARIABLE_Diagnoser_47_47 = STATE_VARIABLE_Diagnoser_0_27;
            }
            Analyser0_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_47_47, (MR_Integer) 0))));
            Var_51 = ((MR_Word) (Store_8));
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_109, (MR_Integer) 1, &TypeInfo_144_144);
            {
              TypeInfo_146_146 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_146_146, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
              MR_hl_field(MR_mktag(0), TypeInfo_146_146, 1) = ((MR_Box) (TypeInfo_144_144));
            }
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_109, (MR_Integer) 2, &TypeInfo_148_148);
            {
              TypeInfo_150_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_150_150, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
              MR_hl_field(MR_mktag(0), TypeInfo_150_150, 1) = ((MR_Box) (TypeInfo_148_148));
            }
            {
              TypeClassInfo_for_mercury_edt_152 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_152, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_152, 1) = ((MR_Box) (TypeClassInfo_for_annotated_trace_109));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_152, 2) = ((MR_Box) (TypeInfo_146_146));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_152, 3) = ((MR_Box) (TypeInfo_150_150));
            }
            succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(TypeClassInfo_for_mercury_edt_152, ((MR_Box) (Var_51)), (MR_Word) (Analyser0_71), &conv5_AnalyserResponse0_70);
            if (succeeded)
            {
              AnalyserResponse0_70 = (MR_Word) (conv5_AnalyserResponse0_70);
              succeeded = MR_TRUE;
            }
            if (succeeded)
              AnalyserResponse_72 = AnalyserResponse0_70;
            else
              {
                mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[7])));
                return;
              }
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_109, (MR_Integer) 2, &TypeInfo_155_155);
            {
              TypeInfo_157_157 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_157_157, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
              MR_hl_field(MR_mktag(0), TypeInfo_157_157, 1) = ((MR_Box) (TypeInfo_155_155));
            }
            mdb__declarative_analyser__debug_analyser_state_2_p_0(TypeInfo_157_157, Analyser0_71, &MaybeOrigin_73);
            mdb__declarative_debugger__handle_analyser_response_8_p_0(TypeClassInfo_for_annotated_trace_109, Store_8, AnalyserResponse_72, MaybeOrigin_73, DiagnoserResponse_10, STATE_VARIABLE_Diagnoser_47_47, STATE_VARIABLE_Diagnoser_28);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_57;
            MR_Word OutputStream_76;

            *DiagnoserResponse_10 = (MR_Word) ((MR_Unsigned) 0U);
            Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1))));
            OutputStream_76 = mdb__declarative_oracle__get_oracle_user_output_stream_1_f_0(Var_57);
            mercury__io__write_string_4_p_0(OutputStream_76, (MR_String) "Diagnosis aborted.\n");
            *STATE_VARIABLE_Diagnoser_28 = STATE_VARIABLE_Diagnoser_0_27;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_111_111;
        MR_Word TypeInfo_113_113;
        MR_Word TypeInfo_115_115;
        MR_Word TypeInfo_117_117;
        MR_Word TypeClassInfo_for_mercury_edt_119;
        MR_Word Answer_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OracleResponse_9, (MR_Integer) 0))));
        MR_Word Oracle0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1))));
        MR_Word Analyser0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0))));
        MR_Word AnalyserResponse_16;
        MR_Word Analyser_17;
        MR_Word MaybeOrigin_18;
        MR_Word Var_31 = ((MR_Word) (Store_8));
        MR_Word STATE_VARIABLE_Diagnoser_32_32;
        MR_Word conv1_AnalyserResponse_16;
        MR_Word conv0_Analyser_17;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_109, (MR_Integer) 1, &TypeInfo_111_111);
        {
          TypeInfo_113_113 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_113_113, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
          MR_hl_field(MR_mktag(0), TypeInfo_113_113, 1) = ((MR_Box) (TypeInfo_111_111));
        }
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_109, (MR_Integer) 2, &TypeInfo_115_115);
        {
          TypeInfo_117_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_117_117, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
          MR_hl_field(MR_mktag(0), TypeInfo_117_117, 1) = ((MR_Box) (TypeInfo_115_115));
        }
        {
          TypeClassInfo_for_mercury_edt_119 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_119, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_119, 1) = ((MR_Box) (TypeClassInfo_for_annotated_trace_109));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_119, 2) = ((MR_Box) (TypeInfo_113_113));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_119, 3) = ((MR_Box) (TypeInfo_117_117));
        }
        mdb__declarative_analyser__continue_analysis_6_p_0(TypeClassInfo_for_mercury_edt_119, ((MR_Box) (Var_31)), Oracle0_14, (MR_Word) (Answer_13), &conv1_AnalyserResponse_16, (MR_Word) (Analyser0_15), &conv0_Analyser_17);
        AnalyserResponse_16 = (MR_Word) (conv1_AnalyserResponse_16);
        Analyser_17 = (MR_Word) (conv0_Analyser_17);
        Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1))));
        Var_85 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2))) & (MR_Integer) 1);
        Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3))));
        {
          STATE_VARIABLE_Diagnoser_32_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_32_32, 0) = ((MR_Box) (Analyser_17));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_32_32, 1) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_32_32, 2) = (MR_Box) ((MR_Unsigned) (Var_85));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_32_32, 3) = ((MR_Box) (Var_86));
        }
        mdb__declarative_analyser__debug_analyser_state_2_p_0(TypeInfo_117_117, Analyser_17, &MaybeOrigin_18);
        mdb__declarative_debugger__handle_analyser_response_8_p_0(TypeClassInfo_for_annotated_trace_109, Store_8, AnalyserResponse_16, MaybeOrigin_18, DiagnoserResponse_10, STATE_VARIABLE_Diagnoser_32_32, STATE_VARIABLE_Diagnoser_28);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeInfo_121_121;
        MR_Word TypeInfo_123_123;
        MR_Word TypeInfo_125_125;
        MR_Word TypeInfo_127_127;
        MR_Word TypeClassInfo_for_mercury_edt_129;
        MR_Word OutputStream_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OracleResponse_9, (MR_Integer) 0))));
        MR_Word Var_35 = ((MR_Word) (Store_8));
        MR_Word AnalyserResponse_60;
        MR_Word Analyser_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0))));
        MR_Word MaybeOrigin_62;
        MR_Word AnalyserResponse0_20;
        MR_Word conv4_AnalyserResponse0_20;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_109, (MR_Integer) 1, &TypeInfo_121_121);
        {
          TypeInfo_123_123 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_123_123, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
          MR_hl_field(MR_mktag(0), TypeInfo_123_123, 1) = ((MR_Box) (TypeInfo_121_121));
        }
        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_109, (MR_Integer) 2, &TypeInfo_125_125);
        {
          TypeInfo_127_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_127_127, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
          MR_hl_field(MR_mktag(0), TypeInfo_127_127, 1) = ((MR_Box) (TypeInfo_125_125));
        }
        {
          TypeClassInfo_for_mercury_edt_129 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_129, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_129, 1) = ((MR_Box) (TypeClassInfo_for_annotated_trace_109));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_129, 2) = ((MR_Box) (TypeInfo_123_123));
          MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_129, 3) = ((MR_Box) (TypeInfo_127_127));
        }
        mdb__declarative_analyser__show_info_5_p_0(TypeClassInfo_for_mercury_edt_129, ((MR_Box) (Var_35)), OutputStream_19, (MR_Word) (Analyser_61));
        succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(TypeClassInfo_for_mercury_edt_129, ((MR_Box) (Var_35)), (MR_Word) (Analyser_61), &conv4_AnalyserResponse0_20);
        if (succeeded)
        {
          AnalyserResponse0_20 = (MR_Word) (conv4_AnalyserResponse0_20);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          AnalyserResponse_60 = AnalyserResponse0_20;
        else
          {
            mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[6])));
            return;
          }
        mdb__declarative_analyser__debug_analyser_state_2_p_0(TypeInfo_127_127, Analyser_61, &MaybeOrigin_62);
        mdb__declarative_debugger__handle_analyser_response_8_p_0(TypeClassInfo_for_annotated_trace_109, Store_8, AnalyserResponse_60, MaybeOrigin_62, DiagnoserResponse_10, STATE_VARIABLE_Diagnoser_0_27, STATE_VARIABLE_Diagnoser_28);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OracleResponse_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeInfo_132_132;
            MR_Word TypeInfo_134_134;
            MR_Word TypeInfo_136_136;
            MR_Word TypeInfo_138_138;
            MR_Word TypeClassInfo_for_mercury_edt_140;
            MR_Word Mode_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), OracleResponse_9, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word Var_43 = ((MR_Word) (Store_8));
            MR_Word STATE_VARIABLE_Diagnoser_44_44;
            MR_Word Oracle0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1))));
            MR_Word Analyser0_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0))));
            MR_Word AnalyserResponse_65;
            MR_Word Analyser_66;
            MR_Word MaybeOrigin_67;
            MR_Word conv3_AnalyserResponse_65;
            MR_Word conv2_Analyser_66;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_99;

            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_109, (MR_Integer) 1, &TypeInfo_132_132);
            {
              TypeInfo_134_134 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_134_134, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
              MR_hl_field(MR_mktag(0), TypeInfo_134_134, 1) = ((MR_Box) (TypeInfo_132_132));
            }
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_109, (MR_Integer) 2, &TypeInfo_136_136);
            {
              TypeInfo_138_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeInfo_138_138, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
              MR_hl_field(MR_mktag(0), TypeInfo_138_138, 1) = ((MR_Box) (TypeInfo_136_136));
            }
            {
              TypeClassInfo_for_mercury_edt_140 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_140, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_140, 1) = ((MR_Box) (TypeClassInfo_for_annotated_trace_109));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_140, 2) = ((MR_Box) (TypeInfo_134_134));
              MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_140, 3) = ((MR_Box) (TypeInfo_138_138));
            }
            mdb__declarative_analyser__change_search_mode_6_p_0(TypeClassInfo_for_mercury_edt_140, ((MR_Box) (Var_43)), Oracle0_63, Mode_21, &conv3_AnalyserResponse_65, (MR_Word) (Analyser0_64), &conv2_Analyser_66);
            AnalyserResponse_65 = (MR_Word) (conv3_AnalyserResponse_65);
            Analyser_66 = (MR_Word) (conv2_Analyser_66);
            Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1))));
            Var_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2))) & (MR_Integer) 1);
            Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3))));
            {
              STATE_VARIABLE_Diagnoser_44_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_44_44, 0) = ((MR_Box) (Analyser_66));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_44_44, 1) = ((MR_Box) (Var_97));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_44_44, 2) = (MR_Box) ((MR_Unsigned) (Var_98));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_44_44, 3) = ((MR_Box) (Var_99));
            }
            mdb__declarative_analyser__debug_analyser_state_2_p_0(TypeInfo_138_138, Analyser_66, &MaybeOrigin_67);
            mdb__declarative_debugger__handle_analyser_response_8_p_0(TypeClassInfo_for_annotated_trace_109, Store_8, AnalyserResponse_65, MaybeOrigin_67, DiagnoserResponse_10, STATE_VARIABLE_Diagnoser_44_44, STATE_VARIABLE_Diagnoser_28);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Node_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OracleResponse_9, (MR_Integer) 1))));
            MR_Integer Event_24;
            MR_Integer Var_25;
            MR_Box Var_26;

            mdb__declarative_tree__edt_subtree_details_5_p_0(TypeClassInfo_for_annotated_trace_109, Store_8, Node_23, &Event_24, &Var_25, &Var_26);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *DiagnoserResponse_10 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Event_24));
            }
            *STATE_VARIABLE_Diagnoser_28 = STATE_VARIABLE_Diagnoser_0_27;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
mdb__declarative_debugger__handle_analyser_response_8_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_123,
  MR_Box Store_9,
  MR_Word AnalyserResponse_10,
  MR_Word MaybeOrigin_11,
  MR_Word * DiagnoserResponse_12,
  MR_Word STATE_VARIABLE_Diagnoser_0_33,
  MR_Word * STATE_VARIABLE_Diagnoser_34)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) AnalyserResponse_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word OutputStream_15;
          MR_Word Var_37;

          *DiagnoserResponse_12 = (MR_Word) ((MR_Unsigned) 0U);
          Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1))));
          OutputStream_15 = mdb__declarative_oracle__get_oracle_user_output_stream_1_f_0(Var_37);
          mercury__io__write_string_4_p_0(OutputStream_15, (MR_String) "No bug found.\n");
          *STATE_VARIABLE_Diagnoser_34 = STATE_VARIABLE_Diagnoser_0_33;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_125_125;
          MR_Word TypeInfo_127_127;
          MR_Word Bug_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AnalyserResponse_10, (MR_Integer) 0))));
          MR_Word Evidence_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AnalyserResponse_10, (MR_Integer) 1))));

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_123, (MR_Integer) 2, &TypeInfo_125_125);
          {
            TypeInfo_127_127 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_127_127, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
            MR_hl_field(MR_mktag(0), TypeInfo_127_127, 1) = ((MR_Box) (TypeInfo_125_125));
          }
          mdb__declarative_debugger__confirm_bug_8_p_0(TypeInfo_127_127, TypeClassInfo_for_annotated_trace_123, Store_9, Bug_16, (MR_Word) (Evidence_17), DiagnoserResponse_12, STATE_VARIABLE_Diagnoser_0_33, STATE_VARIABLE_Diagnoser_34);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_129_129;
          MR_Word TypeInfo_131_131;
          MR_Word Question_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AnalyserResponse_10, (MR_Integer) 0))));
          MR_Word Oracle0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1))));
          MR_Integer Flag_20;
          MR_Word OracleResponse_22;
          MR_Word FromUser_23;
          MR_Word Oracle_24;
          MR_Word STATE_VARIABLE_Diagnoser_52_52;
          MR_Word STATE_VARIABLE_Diagnoser_53_53;
          MR_Word Origin_21;
          MR_Integer Var_43;
          MR_Word Var_99;
          MR_Word Var_101;
          MR_Word Var_102;

          mdb__declarative_debugger__debug_origin_3_p_0(&Flag_20);
          succeeded = (MaybeOrigin_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Origin_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOrigin_11, (MR_Integer) 0))));
            Var_43 = (MR_Integer) 0;
            succeeded = (Flag_20 > Var_43);
          }
          if (succeeded)
          {
            MR_Word Var_46;
            MR_Word OutputStream_77;

            OutputStream_77 = mdb__declarative_oracle__get_oracle_user_output_stream_1_f_0(Oracle0_19);
            mercury__io__write_string_4_p_0(OutputStream_77, (MR_String) "Origin: ");
            Var_46 = ((MR_Word) (Store_9));
            mdb__declarative_debugger__write_origin_5_p_0(TypeClassInfo_for_annotated_trace_123, OutputStream_77, Var_46, Origin_21);
            mercury__io__nl_3_p_0(OutputStream_77);
          }
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_123, (MR_Integer) 2, &TypeInfo_129_129);
          {
            TypeInfo_131_131 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_131_131, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
            MR_hl_field(MR_mktag(0), TypeInfo_131_131, 1) = ((MR_Box) (TypeInfo_129_129));
          }
          mdb__declarative_oracle__query_oracle_7_p_0(TypeInfo_131_131, Question_18, &OracleResponse_22, &FromUser_23, Oracle0_19, &Oracle_24);
          switch (FromUser_23) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Diagnoser_52_52 = STATE_VARIABLE_Diagnoser_0_33;
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_Diagnoser_50_50;
                MR_Word Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0))));
                MR_Word Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1))));
                MR_Word Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3))));

                {
                  STATE_VARIABLE_Diagnoser_50_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_50_50, 0) = ((MR_Box) (Var_95));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_50_50, 1) = ((MR_Box) (Var_96));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_50_50, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_50_50, 3) = ((MR_Box) (Var_98));
                }
                succeeded = mdb__declarative_oracle__oracle_response_undoable_1_p_0(TypeInfo_131_131, OracleResponse_22);
                if (succeeded)
                {
                  MR_Word TypeInfo_132_132;

                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_123, (MR_Integer) 2, &TypeInfo_132_132);
                  mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(STATE_VARIABLE_Diagnoser_50_50, &STATE_VARIABLE_Diagnoser_52_52);
                }
                else
                  STATE_VARIABLE_Diagnoser_52_52 = STATE_VARIABLE_Diagnoser_50_50;
              }
              break;
          }
          Var_99 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_52_52, (MR_Integer) 0))));
          Var_101 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_52_52, (MR_Integer) 2))) & (MR_Integer) 1);
          Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_52_52, (MR_Integer) 3))));
          {
            STATE_VARIABLE_Diagnoser_53_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_53_53, 0) = ((MR_Box) (Var_99));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_53_53, 1) = ((MR_Box) (Oracle_24));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_53_53, 2) = (MR_Box) ((MR_Unsigned) (Var_101));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_53_53, 3) = ((MR_Box) (Var_102));
          }
          mdb__declarative_debugger__handle_oracle_response_7_p_0(TypeClassInfo_for_annotated_trace_123, Store_9, OracleResponse_22, DiagnoserResponse_12, STATE_VARIABLE_Diagnoser_53_53, STATE_VARIABLE_Diagnoser_34);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AnalyserResponse_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Node_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AnalyserResponse_10, (MR_Integer) 1))));
              MR_Integer Event_26;
              MR_Integer Seqno_27;
              MR_Box CallPreceding_28;
              MR_Integer IdealDepth_30;
              MR_Word ImplicitTreeInfo_29;
              MR_Word Var_56;

              mdb__declarative_tree__edt_subtree_details_5_p_0(TypeClassInfo_for_annotated_trace_123, Store_9, Node_25, &Event_26, &Seqno_27, &CallPreceding_28);
              Var_56 = ((MR_Word) (Store_9));
              succeeded = mdb__declarative_tree__trace_implicit_tree_info_3_p_0(TypeClassInfo_for_annotated_trace_123, Var_56, Node_25, &ImplicitTreeInfo_29);
              if (succeeded)
                IdealDepth_30 = (MR_Integer) (ImplicitTreeInfo_29);
              else
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[5])));
                  return;
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *DiagnoserResponse_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Event_26));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Seqno_27));
                MR_hl_field(MR_mktag(3), base, 3) = CallPreceding_28;
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (IdealDepth_30));
              }
              *STATE_VARIABLE_Diagnoser_34 = STATE_VARIABLE_Diagnoser_0_33;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Node_83 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AnalyserResponse_10, (MR_Integer) 1))));
              MR_Integer Event_84;
              MR_Integer Seqno_85;
              MR_Word Var_141;
              MR_Word Var_142;
              MR_Box Var_31;

              mdb__declarative_tree__edt_subtree_details_5_p_0(TypeClassInfo_for_annotated_trace_123, Store_9, Node_83, &Event_84, &Seqno_85, &Var_31);
              Var_142 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1))));
              Var_141 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (Var_141) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *DiagnoserResponse_12 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Event_84));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Seqno_85));
                    }
                    *STATE_VARIABLE_Diagnoser_34 = STATE_VARIABLE_Diagnoser_0_33;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Response_32;
                    MR_String Var_63;
                    MR_Word OutputStream_80;
                    MR_Word TypeInfo_135_135;
                    MR_Word Var_112;
                    MR_Word Var_113;
                    MR_Word Var_115;

                    OutputStream_80 = mdb__declarative_oracle__get_oracle_user_output_stream_1_f_0(Var_142);
                    Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "All descendent calls are trusted.\n", (MR_String) "Shall I continue searching in ancestor calls\?\n");
                    mercury__io__write_string_4_p_0(OutputStream_80, Var_63);
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_123, (MR_Integer) 2, &TypeInfo_135_135);
                    mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Diagnoser_0_33, &Response_32);
                    switch (Response_32) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mercury__io__write_string_4_p_0(OutputStream_80, (MR_String) "Diagnosis aborted.\n");
                          *DiagnoserResponse_12 = (MR_Word) ((MR_Unsigned) 0U);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *DiagnoserResponse_12 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Event_84));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Seqno_85));
                        }
                        break;
                    }
                    Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0))));
                    Var_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1))));
                    Var_115 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3))));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Diagnoser_34 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_112));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_113));
                      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_115));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_137_137;
              MR_Word TypeInfo_139_139;
              MR_Word STATE_VARIABLE_Diagnoser_72_72;
              MR_Word Var_73;
              MR_Word Question_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AnalyserResponse_10, (MR_Integer) 1))));
              MR_Word Oracle0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1))));
              MR_Word Oracle_88;
              MR_Word Var_119;
              MR_Word Var_121;
              MR_Word Var_122;
              MR_Word next_value_of_AnalyserResponse_10;
              MR_Word next_value_of_STATE_VARIABLE_Diagnoser_0_33;

              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_123, (MR_Integer) 2, &TypeInfo_137_137);
              {
                TypeInfo_139_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_139_139, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
                MR_hl_field(MR_mktag(0), TypeInfo_139_139, 1) = ((MR_Box) (TypeInfo_137_137));
              }
              mdb__declarative_oracle__revise_oracle_3_p_0(TypeInfo_139_139, Question_86, Oracle0_87, &Oracle_88);
              Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0))));
              Var_121 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2))) & (MR_Integer) 1);
              Var_122 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3))));
              {
                STATE_VARIABLE_Diagnoser_72_72 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_72_72, 0) = ((MR_Box) (Var_119));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_72_72, 1) = ((MR_Box) (Oracle_88));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_72_72, 2) = (MR_Box) ((MR_Unsigned) (Var_121));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_72_72, 3) = ((MR_Box) (Var_122));
              }
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_73, 0) = ((MR_Box) (Question_86));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AnalyserResponse_10 = Var_73;
              next_value_of_STATE_VARIABLE_Diagnoser_0_33 = STATE_VARIABLE_Diagnoser_72_72;
              AnalyserResponse_10 = next_value_of_AnalyserResponse_10;
              MaybeOrigin_11 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_Diagnoser_0_33 = next_value_of_STATE_VARIABLE_Diagnoser_0_33;
              continue;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_p_0(
  MR_Word Diagnoser_5,
  MR_Word * Response_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word InputStream_8;
    MR_Word OutputStream_9;
    MR_Word Result_11;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser_5, (MR_Integer) 1))));
    MR_Word Var_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    InputStream_8 = mdb__declarative_oracle__get_oracle_user_input_stream_1_f_0(Var_17);
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser_5, (MR_Integer) 1))));
    OutputStream_9 = mdb__declarative_oracle__get_oracle_user_output_stream_1_f_0(Var_18);
    mdb__util__trace_getline_6_p_0(InputStream_8, OutputStream_9, (MR_String) "> ", &Result_11);
    switch (MR_tag((MR_Word) Result_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "Unexpected EOF. Aborting.\n");
          *Response_6 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_11, (MR_Integer) 0))));
          MR_String UpperLine_13;

          UpperLine_13 = mercury__string__to_upper_1_f_0(Line_12);
          if ((strcmp(UpperLine_13, (MR_String) "Y") == 0))
            succeeded = MR_TRUE;
          else
          if ((strcmp(UpperLine_13, (MR_String) "YES") == 0))
            succeeded = MR_TRUE;
          else
            succeeded = MR_FALSE;
          if (succeeded)
            *Response_6 = (MR_Integer) 1;
          else
          {
            if ((strcmp(UpperLine_13, (MR_String) "N") == 0))
              succeeded = MR_TRUE;
            else
            if ((strcmp(UpperLine_13, (MR_String) "NO") == 0))
              succeeded = MR_TRUE;
            else
              succeeded = MR_FALSE;
            if (succeeded)
              *Response_6 = (MR_Integer) 0;
            else
            {
              mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "Please answer yes or no.\n");
              // direct tailcall eliminated
              ;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ErrNo_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_11, (MR_Integer) 0))));
          MR_String Var_27;

          Var_27 = mercury__io__error_message_1_f_0(ErrNo_14);
          mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) "Error reading input: ");
          mercury__io__write_string_4_p_0(OutputStream_9, Var_27);
          mercury__io__write_string_4_p_0(OutputStream_9, (MR_String) ". Aborting.\n");
          *Response_6 = (MR_Integer) 0;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_4,
  MR_Word * STATE_VARIABLE_Diagnoser_5)
{
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_10;

  {
    Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (STATE_VARIABLE_Diagnoser_0_4));
  }
  Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 0))));
  Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 1))));
  Var_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 2))) & (MR_Integer) 1);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_Diagnoser_5 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_10));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_7));
  }
}

static void MR_CALL 
mdb__declarative_debugger__debug_origin_3_p_0(
  MR_Integer * Flag_1)
{
{
#define MR_PROC_LABEL mdb__declarative_debugger__debug_origin_3_p_0

	MR_Integer Flag;

		{

    Flag = MR_DD_debug_origin;


		;}
#undef MR_PROC_LABEL
	*Flag_1  = Flag;
}
}

static void MR_CALL 
mdb__declarative_debugger__write_origin_5_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_39,
  MR_Word Stream_6,
  MR_Word HeadVar__2_2,
  MR_Word Origin_8)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Origin_8)) == (MR_Integer) 1);
  MR_Box Store_7 = ((MR_Box) (HeadVar__2_2));
  MR_Box NodeId_10;
  MR_Word ArgPos_11;
  MR_Word TermPath_12;
  MR_Word Var_21;

  if (succeeded)
  {
    Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_8, (MR_Integer) 0))));
    ArgPos_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_8, (MR_Integer) 1))));
    TermPath_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_8, (MR_Integer) 2))));
    NodeId_10 = ((MR_Box) (Var_21));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ExitNode_13;
    MR_Box ProcLayout_14;
    MR_Word ProcLabel_15;
    MR_String ProcName_16;
    MR_String ArgPosStr_17;
    MR_String TermPathStr_18;
    MR_Box Var_22;

    mdb__declarative_execution__exit_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_39, Store_7, NodeId_10, &ExitNode_13);
    Var_22 = ((MR_Box) ((MR_hl_field(MR_mktag(1), ExitNode_13, (MR_Integer) 5))));
    ProcLayout_14 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(Var_22);
    ProcLabel_15 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(ProcLayout_14);
    ProcName_16 = mdbcomp__rtti_access__get_proc_name_1_f_0(ProcLabel_15);
    ArgPosStr_17 = mercury__string__string_1_f_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0), ((MR_Box) (ArgPos_11)));
    TermPathStr_18 = mercury__string__string_1_f_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[2]), ((MR_Box) (TermPath_12)));
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "output(");
    mercury__io__write_string_4_p_0(Stream_6, ProcName_16);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_6, ArgPosStr_17);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
    mercury__io__write_string_4_p_0(Stream_6, TermPathStr_18);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
  }
  else
  {
    MR_Word TypeInfo_43_43;
    MR_Word TypeInfo_45_45;
    MR_Word TypeInfo_47_47;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_39, (MR_Integer) 2, &TypeInfo_43_43);
    {
      TypeInfo_45_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_45_45, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
      MR_hl_field(MR_mktag(0), TypeInfo_45_45, 1) = ((MR_Box) (TypeInfo_43_43));
    }
    {
      TypeInfo_47_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_47_47, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1));
      MR_hl_field(MR_mktag(0), TypeInfo_47_47, 1) = ((MR_Box) (TypeInfo_45_45));
    }
    mercury__io__write_4_p_0(TypeInfo_47_47, Stream_6, ((MR_Box) (Origin_8)));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * STATE_VARIABLE_Diagnoser_8)
{
  MR_bool succeeded;
  MR_Word LatestOracle_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1))));
  MR_Word LastPushedOracle_5;
  MR_Word Oracle_6;
  MR_Word STATE_VARIABLE_Diagnoser_10_10;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3))));
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_23;

  succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    STATE_VARIABLE_Diagnoser_10_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0))));
    LastPushedOracle_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 1))));
    mdb__declarative_oracle__update_revised_knowledge_base_3_p_0(LastPushedOracle_5, LatestOracle_4, &Oracle_6);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 0))));
    Var_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Diagnoser_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_6));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_22));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_23));
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv0_HeadVar__4_4;

  mdb__declarative_debugger__diagnosis_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), &conv0_HeadVar__4_4);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__4_4));
}

void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_42,
  MR_Box Store_10,
  MR_Word AnalysisType_11,
  MR_Word * Response_12,
  MR_Word STATE_VARIABLE_Diagnoser_0_22,
  MR_Word * STATE_VARIABLE_Diagnoser_23,
  MR_Word STATE_VARIABLE_Browser_0_24,
  MR_Word * STATE_VARIABLE_Browser_25)
{
  MR_bool succeeded;
  MR_Word TypeInfo_47_47;
  MR_Word TypeInfo_49_49;
  MR_Word TypeInfo_50_50;
  MR_Word TypeInfo_52_52;
  MR_Word TypeInfo_54_54;
  MR_Word Oracle0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_22, (MR_Integer) 1))));
  MR_Word Oracle1_17;
  MR_Word Result_18;
  MR_Word Oracle_21;
  MR_Word STATE_VARIABLE_Diagnoser_28_28;
  MR_Word Var_29;
  MR_Word Var_35;
  MR_Word Var_37;
  MR_Word Var_38;

  mdb__declarative_oracle__set_oracle_browser_state_3_p_0(STATE_VARIABLE_Browser_0_24, Oracle0_16, &Oracle1_17);
  Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_22, (MR_Integer) 0))));
  Var_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_22, (MR_Integer) 2))) & (MR_Integer) 1);
  Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_22, (MR_Integer) 3))));
  {
    STATE_VARIABLE_Diagnoser_28_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_28_28, 0) = ((MR_Box) (Var_35));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_28_28, 1) = ((MR_Box) (Oracle1_17));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_28_28, 2) = (MR_Box) ((MR_Unsigned) (Var_37));
    MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_28_28, 3) = ((MR_Box) (Var_38));
  }
  {
    Var_29 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&mdb__declarative_debugger_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (mdb__declarative_debugger__diagnosis_9_p_0_1));
    MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (TypeClassInfo_for_annotated_trace_42));
    MR_hl_field(MR_mktag(0), Var_29, 4) = Store_10;
    MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (AnalysisType_11));
    MR_hl_field(MR_mktag(0), Var_29, 6) = ((MR_Box) (STATE_VARIABLE_Diagnoser_28_28));
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_42, (MR_Integer) 2, &TypeInfo_47_47);
  {
    TypeInfo_49_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_49_49, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_response_1));
    MR_hl_field(MR_mktag(0), TypeInfo_49_49, 1) = ((MR_Box) (TypeInfo_47_47));
  }
  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_42, (MR_Integer) 2, &TypeInfo_50_50);
  {
    TypeInfo_52_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_52_52, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1));
    MR_hl_field(MR_mktag(0), TypeInfo_52_52, 1) = ((MR_Box) (TypeInfo_50_50));
  }
  {
    TypeInfo_54_54 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_54_54, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
    MR_hl_field(MR_mktag(0), TypeInfo_54_54, 1) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), TypeInfo_54_54, 2) = ((MR_Box) (TypeInfo_49_49));
    MR_hl_field(MR_mktag(0), TypeInfo_54_54, 3) = ((MR_Box) (TypeInfo_52_52));
  }
  mercury__exception__try_io_4_p_1(TypeInfo_54_54, Var_29, &Result_18);
  if (((MR_tag((MR_Word) Result_18)) == (MR_Integer) 2))
  {
    MR_Word UnivException_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_18, (MR_Integer) 0))));
    MR_Word DiagnoserException_20;
    MR_Box conv1_DiagnoserException_20;

    succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), UnivException_19, &conv1_DiagnoserException_20);
    if (succeeded)
    {
      DiagnoserException_20 = ((MR_Word) (conv1_DiagnoserException_20));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word TypeInfo_56_56;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_42, (MR_Integer) 2, &TypeInfo_56_56);
      mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(TypeInfo_56_56, DiagnoserException_20, Response_12, STATE_VARIABLE_Diagnoser_28_28, STATE_VARIABLE_Diagnoser_23);
    }
    else
      {
        mercury__exception__rethrow_1_p_0(TypeInfo_54_54, Result_18);
        return;
      }
  }
  else
  {
    MR_Tuple Var_31 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), Result_18, (MR_Integer) 0))));

    *Response_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 0))));
    *STATE_VARIABLE_Diagnoser_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1))));
  }
  Oracle_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Diagnoser_23, (MR_Integer) 1))));
  *STATE_VARIABLE_Browser_25 = mdb__declarative_oracle__get_oracle_browser_state_1_f_0(Oracle_21);
}

static void MR_CALL 
mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(
  MR_Word TypeInfo_for_R_98,
  MR_Word DiagnoserException_7,
  MR_Word * Response_8,
  MR_Word STATE_VARIABLE_Diagnoser_0_17,
  MR_Word * STATE_VARIABLE_Diagnoser_18)
{
  switch (MR_tag((MR_Word) DiagnoserException_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeInfo_100_100;
        MR_String Loc_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), DiagnoserException_7, (MR_Integer) 0))));
        MR_String Msg_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), DiagnoserException_7, (MR_Integer) 1))));
        MR_Word StdErr_13;
        MR_Word Analyser_14;
        MR_String Var_22;
        MR_String Var_25;
        MR_String Var_27;
        MR_String Var_29;
        MR_String Var_30;
        MR_String Var_32;
        MR_String Var_33;
        MR_String Var_35;
        MR_String Var_37;
        MR_Word Var_40;
        MR_Word conv0_Analyser_14;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;

        mercury__io__stderr_stream_3_p_0(&StdErr_13);
        Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "<https://bugs.mercurylang.org> or via e-mail to ", (MR_String) "bugs\100mercurylang.org.\n");
        Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "Please report bugs via the Mercury bug tracking system at\n", Var_37);
        Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_35);
        Var_32 = mercury__string__f_43_43_2_f_0(Msg_12, Var_33);
        Var_30 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_32);
        Var_29 = mercury__string__f_43_43_2_f_0(Loc_11, Var_30);
        Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "message follows:\n", Var_29);
        Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "diagnosis will be aborted. Debugging\n", Var_27);
        Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "An internal error has occurred; ", Var_25);
        mercury__io__write_string_4_p_0(StdErr_13, Var_22);
        Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_17, (MR_Integer) 0))));
        {
          TypeInfo_100_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_100_100, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
          MR_hl_field(MR_mktag(0), TypeInfo_100_100, 1) = ((MR_Box) (TypeInfo_for_R_98));
        }
        mdb__declarative_analyser__reset_analyser_2_p_0(TypeInfo_100_100, (MR_Word) (Var_40), &conv0_Analyser_14);
        Analyser_14 = (MR_Word) (conv0_Analyser_14);
        Var_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_17, (MR_Integer) 1))));
        Var_79 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_17, (MR_Integer) 2))) & (MR_Integer) 1);
        Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_17, (MR_Integer) 3))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Diagnoser_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Analyser_14));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_78));
          MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_79));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_80));
        }
        *Response_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_102_102;
        MR_String Var_43;
        MR_String Var_46;
        MR_String Var_47;
        MR_String Var_49;
        MR_String Var_50;
        MR_Word Var_53;
        MR_String Loc_69 = ((MR_String) ((MR_hl_field(MR_mktag(1), DiagnoserException_7, (MR_Integer) 0))));
        MR_String Msg_70 = ((MR_String) ((MR_hl_field(MR_mktag(1), DiagnoserException_7, (MR_Integer) 1))));
        MR_Word StdErr_71;
        MR_Word Analyser_72;
        MR_Word conv1_Analyser_72;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;

        mercury__io__stderr_stream_3_p_0(&StdErr_71);
        Var_50 = mercury__string__f_43_43_2_f_0((MR_String) ".\n", (MR_String) "Diagnosis will be aborted.\n");
        Var_49 = mercury__string__f_43_43_2_f_0(Msg_70, Var_50);
        Var_47 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_49);
        Var_46 = mercury__string__f_43_43_2_f_0(Loc_69, Var_47);
        Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", Var_46);
        mercury__io__write_string_4_p_0(StdErr_71, Var_43);
        Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_17, (MR_Integer) 0))));
        {
          TypeInfo_102_102 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_102_102, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
          MR_hl_field(MR_mktag(0), TypeInfo_102_102, 1) = ((MR_Box) (TypeInfo_for_R_98));
        }
        mdb__declarative_analyser__reset_analyser_2_p_0(TypeInfo_102_102, (MR_Word) (Var_53), &conv1_Analyser_72);
        Analyser_72 = (MR_Word) (conv1_Analyser_72);
        Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_17, (MR_Integer) 1))));
        Var_86 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_17, (MR_Integer) 2))) & (MR_Integer) 1);
        Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_17, (MR_Integer) 3))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Diagnoser_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Analyser_72));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_85));
          MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_86));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_87));
        }
        *Response_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeInfo_104_104;
        MR_String Feature_15 = ((MR_String) ((MR_hl_field(MR_mktag(2), DiagnoserException_7, (MR_Integer) 0))));
        MR_Word OutputStream_16;
        MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_17, (MR_Integer) 1))));
        MR_String Var_56;
        MR_String Var_59;
        MR_String Var_61;
        MR_String Var_62;
        MR_String Var_64;
        MR_Word Var_67;
        MR_Word Analyser_73;
        MR_Word conv2_Analyser_73;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;

        OutputStream_16 = mdb__declarative_oracle__get_oracle_user_output_stream_1_f_0(Var_55);
        Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "The debugger is a work in progress, and this is not ", (MR_String) "supported in the\ncurrent version.\n");
        Var_62 = mercury__string__f_43_43_2_f_0((MR_String) ".\n", Var_64);
        Var_61 = mercury__string__f_43_43_2_f_0(Feature_15, Var_62);
        Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "because it requires support for the following: \n", Var_61);
        Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "Sorry, the diagnosis cannot continue ", Var_59);
        mercury__io__write_string_4_p_0(OutputStream_16, Var_56);
        Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_17, (MR_Integer) 0))));
        {
          TypeInfo_104_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_104_104, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
          MR_hl_field(MR_mktag(0), TypeInfo_104_104, 1) = ((MR_Box) (TypeInfo_for_R_98));
        }
        mdb__declarative_analyser__reset_analyser_2_p_0(TypeInfo_104_104, (MR_Word) (Var_67), &conv2_Analyser_73);
        Analyser_73 = (MR_Word) (conv2_Analyser_73);
        Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_17, (MR_Integer) 1))));
        Var_96 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_17, (MR_Integer) 2))) & (MR_Integer) 1);
        Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_17, (MR_Integer) 3))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Diagnoser_18 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Analyser_73));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_95));
          MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_96));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_97));
        }
        *Response_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_5_p_0(
  MR_Word TypeInfo_for_R_15,
  MR_Word InputStream_6,
  MR_Word OutputStream_7,
  MR_Word Browser_8,
  MR_Word HelpSystem_9,
  MR_Word * Diagnoser_10)
{
  MR_Word TypeInfo_17_17;
  MR_Word Analyser_11;
  MR_Word Oracle_12;
  MR_Word conv0_Analyser_11;

  {
    TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TypeInfo_17_17, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
    MR_hl_field(MR_mktag(0), TypeInfo_17_17, 1) = ((MR_Box) (TypeInfo_for_R_15));
  }
  mdb__declarative_analyser__analyser_state_init_1_p_0(TypeInfo_17_17, &conv0_Analyser_11);
  Analyser_11 = (MR_Word) (conv0_Analyser_11);
  mdb__declarative_oracle__oracle_state_init_5_p_0(InputStream_6, OutputStream_7, Browser_8, HelpSystem_9, &Oracle_12);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *Diagnoser_10 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Analyser_11));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_12));
    MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

void MR_CALL 
mdb__declarative_debugger__unravel_decl_atom_3_p_0(
  MR_Word DeclAtom_4,
  MR_Word * TraceAtom_5,
  MR_Word * MaybeIoActions_6)
{
  if (((MR_tag((MR_Word) DeclAtom_4)) == (MR_Integer) 0))
  {
    MR_Word Var_8 = (MR_Word) ((MR_Word) (DeclAtom_4));

    *TraceAtom_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
    *MaybeIoActions_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1))));
  }
  else
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DeclAtom_4, (MR_Integer) 0))));

    *TraceAtom_5 = (MR_Word) (Var_7);
    *MaybeIoActions_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

MR_Word MR_CALL 
mdb__declarative_debugger__get_decl_question_atom_1_f_0(
  MR_Word TypeInfo_16_16,
  MR_Word HeadVar__1_1)
{
  MR_Word Atom_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));

        Atom_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

        Atom_2 = (MR_Word) (Var_11);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));

        Atom_2 = (MR_Word) (Var_15);
      }
      break;
  }
  return Atom_2;
}

MR_Box MR_CALL 
mdb__declarative_debugger__get_decl_question_node_1_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1)
{
  MR_Box Node_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Node_2 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      break;
    case (MR_Integer) 1:
      Node_2 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      break;
    case (MR_Integer) 2:
      Node_2 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
      break;
  }
  return Node_2;
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_answer_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_answer_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____decl_answer_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_bug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____decl_bug_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_bug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____decl_bug_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_confirmation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____decl_confirmation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_confirmation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____decl_confirmation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_contour_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____decl_contour_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_contour_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____decl_contour_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_e_bug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____decl_e_bug_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_e_bug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____decl_e_bug_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_evidence_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____decl_evidence_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_evidence_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____decl_evidence_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____decl_exception_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____decl_exception_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_i_bug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____decl_i_bug_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_i_bug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____decl_i_bug_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_position_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____decl_position_0_0();
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_position_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____decl_position_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_question_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_question_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____decl_question_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_truth_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____decl_truth_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_truth_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____decl_truth_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____diagnoser_exception_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____diagnoser_exception_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____diagnoser_response_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____diagnoser_response_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____diagnoser_state_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____diagnoser_state_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____final_decl_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____final_decl_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____final_decl_atom_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____init_decl_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____init_decl_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____init_decl_atom_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____some_decl_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__declarative_debugger____Unify____some_decl_atom_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__declarative_debugger____Compare____some_decl_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__declarative_debugger____Compare____some_decl_atom_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdb__declarative_debugger__init(void)
{
}

void mercury__mdb__declarative_debugger__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_answer_1);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_bug_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_confirmation_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_contour_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_e_bug_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_evidence_1);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_exception_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_i_bug_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_position_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_response_1);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_some_decl_atom_0);
}

void mercury__mdb__declarative_debugger__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__declarative_debugger__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.declarative_debugger.
