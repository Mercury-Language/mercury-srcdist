/*
** Automatically generated from `declarative_debugger.m'
** by the Mercury compiler,
** version rotd-2019-03-19
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


#include "mdb.mih"
#include "mdbcomp.mih"
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

static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_confirmation_0[3];

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

static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_truth_0[3];

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
  MR_Word STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * STATE_VARIABLE_Diagnoser_8);

static void MR_CALL 
mdb__declarative_debugger__trust_standard_library_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_5,
  MR_Word * STATE_VARIABLE_Diagnoser_6);

static void MR_CALL 
mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(
  MR_Box ProcLayout_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * STATE_VARIABLE_Diagnoser_8);

static void MR_CALL 
mdb__declarative_debugger__add_trusted_module_3_p_0(
  MR_String ModuleName_4,
  MR_Word Diagnoser0_5,
  MR_Word * Diagnoser_6);

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
mdb__declarative_debugger__set_diagnoser_testing_flag_3_p_0(
  MR_Word Testing_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_8,
  MR_Word * STATE_VARIABLE_Diagnoser_9);

static void MR_CALL 
mdb__declarative_debugger__diagnoser_session_init_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_4,
  MR_Word * STATE_VARIABLE_Diagnoser_5);

static void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_store_5_p_0(
  MR_Word InStr_6,
  MR_Word OutStr_7,
  MR_Word Browser_8,
  MR_Word HelpSystem_9,
  MR_Word * Diagnoser_10);

static void MR_CALL 
mdb__declarative_debugger__diagnosis_2_6_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_33,
  MR_Box Store_7,
  MR_Word AnalysisType_8,
  MR_Word Diagnoser0_9,
  MR_Tuple * HeadVar__4_4);

static void MR_CALL 
mdb__declarative_debugger__confirm_bug_8_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeClassInfo_for_annotated_trace_34,
  MR_Box Store_9,
  MR_Word Bug_10,
  MR_Word Evidence_11,
  MR_Word * Response_12,
  MR_Word STATE_VARIABLE_Diagnoser_0_19,
  MR_Word * STATE_VARIABLE_Diagnoser_20);

static void MR_CALL 
mdb__declarative_debugger__handle_oracle_response_7_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_108,
  MR_Box Store_8,
  MR_Word OracleResponse_9,
  MR_Word * DiagnoserResponse_10,
  MR_Word STATE_VARIABLE_Diagnoser_0_27,
  MR_Word * STATE_VARIABLE_Diagnoser_28);

static void MR_CALL 
mdb__declarative_debugger__handle_analyser_response_8_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_113,
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
mdb__declarative_debugger__write_origin_4_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_38,
  MR_Word HeadVar__1_1,
  MR_Word Origin_6);

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
  MR_Word TypeInfo_for_R_108,
  MR_Word HeadVar__1_1,
  MR_Word * Response_2,
  MR_Word STATE_VARIABLE_Diagnoser_0_3,
  MR_Word * STATE_VARIABLE_Diagnoser_4);

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
  /* row 0 */
  {
    ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__io_action__mdb__io_action__type_ctor_info_io_action_range_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "handle_analyser_response")),
    ((MR_Box) ((MR_String) "subtree requested for node which is not an implicit root"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "handle_oracle_response")),
    ((MR_Box) ((MR_String) "no last question when got show_info request"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "handle_oracle_response")),
    ((MR_Box) ((MR_String) "no last question when got undo request"))
  },
};

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0))
  },
};

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__)),
    ((MR_Box) (&mdb__declarative_debugger_scalar_common_2[0])),
    ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[0])),
    ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[1]))
  },
};

static /* final */ const MR_Integer mdb__declarative_debugger_scalar_common_4[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_5[1][10] = {
  /* row 0 */
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



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.declarative_debugger.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#line 979 "declarative_debugger.m"


/*
** The declarative debugger will print diagnostic information about the origins
** computed by dependency tracking if this flag has a positive value.
*/

int MR_DD_debug_origin = 0;



#line 665 "declarative_debugger.m"
void 
MR_DD_decl_diagnosis_state_init(
  MR_Word InStr_6,
  MR_Word OutStr_7,
  MR_Word Browser_8,
  MR_Word HelpSystem_9,
  MR_Word * Diagnoser_10)
#line 665 "declarative_debugger.m"
{
#line 665 "declarative_debugger.m"
	mdb__declarative_debugger__diagnoser_state_init_store_5_p_0((MR_Word) InStr_6, (MR_Word) OutStr_7, (MR_Word) Browser_8, (MR_Word) HelpSystem_9, (MR_Word *) Diagnoser_10);
}

#line 681 "declarative_debugger.m"
void 
MR_DD_decl_session_init(
  MR_Word STATE_VARIABLE_Diagnoser_0_4,
  MR_Word * STATE_VARIABLE_Diagnoser_5)
#line 681 "declarative_debugger.m"
{
#line 681 "declarative_debugger.m"
	mdb__declarative_debugger__diagnoser_session_init_2_p_0((MR_Word) STATE_VARIABLE_Diagnoser_0_4, (MR_Word *) STATE_VARIABLE_Diagnoser_5);
}

#line 690 "declarative_debugger.m"
void 
MR_DD_decl_set_diagnoser_testing_flag(
  MR_Word Testing_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_8,
  MR_Word * STATE_VARIABLE_Diagnoser_9)
#line 690 "declarative_debugger.m"
{
#line 690 "declarative_debugger.m"
	mdb__declarative_debugger__set_diagnoser_testing_flag_3_p_0((MR_Word) Testing_4, (MR_Word) STATE_VARIABLE_Diagnoser_0_8, (MR_Word *) STATE_VARIABLE_Diagnoser_9);
}

#line 703 "declarative_debugger.m"
void 
MR_DD_decl_set_fallback_search_mode(
  MR_Word Store_5,
  MR_Word SearchMode_6,
  MR_Word STATE_VARIABLE_Diagnoser_0_10,
  MR_Word * STATE_VARIABLE_Diagnoser_11)
#line 703 "declarative_debugger.m"
{
#line 703 "declarative_debugger.m"
	mdb__declarative_debugger__set_fallback_search_mode_4_p_0((MR_Word) Store_5, (MR_Word) SearchMode_6, (MR_Word) STATE_VARIABLE_Diagnoser_0_10, (MR_Word *) STATE_VARIABLE_Diagnoser_11);
}

#line 717 "declarative_debugger.m"
void 
MR_DD_decl_reset_knowledge_base(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7)
#line 717 "declarative_debugger.m"
{
#line 717 "declarative_debugger.m"
	mdb__declarative_debugger__reset_knowledge_base_2_p_0((MR_Word) STATE_VARIABLE_Diagnoser_0_6, (MR_Word *) STATE_VARIABLE_Diagnoser_7);
}

#line 730 "declarative_debugger.m"
MR_Word 
MR_DD_decl_top_down_search_mode(void)
#line 730 "declarative_debugger.m"
{
#line 730 "declarative_debugger.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_debugger__top_down_search_mode_0_f_0();
	return ret_value;
}

#line 739 "declarative_debugger.m"
MR_Word 
MR_DD_decl_divide_and_query_search_mode(void)
#line 739 "declarative_debugger.m"
{
#line 739 "declarative_debugger.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_debugger__divide_and_query_search_mode_0_f_0();
	return ret_value;
}

#line 749 "declarative_debugger.m"
MR_Word 
MR_DD_decl_suspicion_divide_and_query_search_mode(void)
#line 749 "declarative_debugger.m"
{
#line 749 "declarative_debugger.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_f_0();
	return ret_value;
}

#line 762 "declarative_debugger.m"
void 
MR_DD_decl_diagnosis_new_tree(
  MR_Word Store_10,
  MR_Word Node_11,
  MR_Word * Response_12,
  MR_Word STATE_VARIABLE_State_0_16,
  MR_Word * STATE_VARIABLE_State_17,
  MR_Word STATE_VARIABLE_Browser_0_18,
  MR_Word * STATE_VARIABLE_Browser_19)
#line 762 "declarative_debugger.m"
{
#line 762 "declarative_debugger.m"
	mdb__declarative_debugger__diagnosis_new_tree_9_p_0((MR_Word) Store_10, (MR_Word) Node_11, (MR_Word *) Response_12, (MR_Word) STATE_VARIABLE_State_0_16, (MR_Word *) STATE_VARIABLE_State_17, (MR_Word) STATE_VARIABLE_Browser_0_18, (MR_Word *) STATE_VARIABLE_Browser_19);
}

#line 778 "declarative_debugger.m"
void 
MR_DD_decl_diagnosis_resume_previous(
  MR_Word Store_9,
  MR_Word * Response_10,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15,
  MR_Word STATE_VARIABLE_Browser_0_16,
  MR_Word * STATE_VARIABLE_Browser_17)
#line 778 "declarative_debugger.m"
{
#line 778 "declarative_debugger.m"
	mdb__declarative_debugger__diagnosis_resume_previous_8_p_0((MR_Word) Store_9, (MR_Word *) Response_10, (MR_Word) STATE_VARIABLE_State_0_14, (MR_Word *) STATE_VARIABLE_State_15, (MR_Word) STATE_VARIABLE_Browser_0_16, (MR_Word *) STATE_VARIABLE_Browser_17);
}

#line 791 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_bug_found(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_3)
#line 791 "declarative_debugger.m"
{
#line 791 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_bug_found_2_p_0((MR_Word) HeadVar__1_1, (MR_Integer *) Event_3);
	return ret_value;
}

#line 799 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_symptom_found(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_3)
#line 799 "declarative_debugger.m"
{
#line 799 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_symptom_found_2_p_0((MR_Word) HeadVar__1_1, (MR_Integer *) Event_3);
	return ret_value;
}

#line 807 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_no_bug_found(
  MR_Word HeadVar__1_1)
#line 807 "declarative_debugger.m"
{
#line 807 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0((MR_Word) HeadVar__1_1);
	return ret_value;
}

#line 816 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_require_subtree(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_6,
  MR_Integer * SeqNo_7,
  MR_Word * CallPreceding_8,
  MR_Integer * MaxDepth_9)
#line 816 "declarative_debugger.m"
{
#line 816 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_require_subtree_5_p_0((MR_Word) HeadVar__1_1, (MR_Integer *) Event_6, (MR_Integer *) SeqNo_7, (MR_Word *) CallPreceding_8, (MR_Integer *) MaxDepth_9);
	return ret_value;
}

#line 826 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_require_supertree(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_4,
  MR_Integer * SeqNo_5)
#line 826 "declarative_debugger.m"
{
#line 826 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_require_supertree_3_p_0((MR_Word) HeadVar__1_1, (MR_Integer *) Event_4, (MR_Integer *) SeqNo_5);
	return ret_value;
}

#line 839 "declarative_debugger.m"
void 
MR_DD_decl_add_trusted_module(
  MR_String ModuleName_4,
  MR_Word Diagnoser0_5,
  MR_Word * Diagnoser_6)
#line 839 "declarative_debugger.m"
{
#line 839 "declarative_debugger.m"
	mdb__declarative_debugger__add_trusted_module_3_p_0((MR_String) ModuleName_4, (MR_Word) Diagnoser0_5, (MR_Word *) Diagnoser_6);
}

#line 854 "declarative_debugger.m"
void 
MR_DD_decl_add_trusted_pred_or_func(
  const MR_ProcLayout * ProcLayout_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * STATE_VARIABLE_Diagnoser_8)
#line 854 "declarative_debugger.m"
{
#line 854 "declarative_debugger.m"
	MR_Box boxed_ProcLayout_4;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_ProcLayout *, ProcLayout_4, boxed_ProcLayout_4);
	mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(boxed_ProcLayout_4, (MR_Word) STATE_VARIABLE_Diagnoser_0_7, (MR_Word *) STATE_VARIABLE_Diagnoser_8);
}

#line 865 "declarative_debugger.m"
void 
MR_DD_decl_trust_standard_library(
  MR_Word STATE_VARIABLE_Diagnoser_0_5,
  MR_Word * STATE_VARIABLE_Diagnoser_6)
#line 865 "declarative_debugger.m"
{
#line 865 "declarative_debugger.m"
	mdb__declarative_debugger__trust_standard_library_2_p_0((MR_Word) STATE_VARIABLE_Diagnoser_0_5, (MR_Word *) STATE_VARIABLE_Diagnoser_6);
}

#line 877 "declarative_debugger.m"
MR_bool 
MR_DD_decl_remove_trusted(
  MR_Integer N_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * STATE_VARIABLE_Diagnoser_8)
#line 877 "declarative_debugger.m"
{
#line 877 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__remove_trusted_3_p_0((MR_Integer) N_4, (MR_Word) STATE_VARIABLE_Diagnoser_0_7, (MR_Word *) STATE_VARIABLE_Diagnoser_8);
	return ret_value;
}

#line 894 "declarative_debugger.m"
void 
MR_DD_decl_get_trusted_list(
  MR_Word Diagnoser_4,
  MR_Word MDBCommandFormat_5,
  MR_String * List_6)
#line 894 "declarative_debugger.m"
{
#line 894 "declarative_debugger.m"
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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_answer_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_answer_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_answer",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_answer_1 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_answer_1 },
  (MR_Integer) 4,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_answer_1
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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_bug_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_bug_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_bug",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_bug_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_bug_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_bug_0
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

static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_confirmation_0[3] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_confirmation_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_confirmation_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_confirmation",
  {     mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_confirmation_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_confirmation_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_confirmation_0
};

static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)
  }
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_contour_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_contour_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_contour_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_contour",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_2,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_e_bug_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_e_bug_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_e_bug",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_e_bug_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_e_bug_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_e_bug_0
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_evidence_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_evidence_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_evidence",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdb__declarative_debugger__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_exception_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_exception_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_exception_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_exception",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_i_bug_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_i_bug_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_i_bug",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_i_bug_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_i_bug_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_i_bug_0
};

const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_position_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_position_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_position_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_position",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_2,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_question_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_question_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_question",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_question_1 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_question_1 },
  (MR_Integer) 3,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_question_1
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

static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_truth_0[3] = {
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_truth_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_truth_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_truth",
  {     mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_truth_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_truth_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_truth_0
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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_2,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____diagnoser_exception_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____diagnoser_exception_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "diagnoser_exception",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_exception_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_exception_0 },
  (MR_Integer) 3,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_exception_0
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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_2,
    INT8_C(-1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_3,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____diagnoser_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____diagnoser_response_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "diagnoser_response",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_response_1 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_response_1 },
  (MR_Integer) 5,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_response_1
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____diagnoser_state_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____diagnoser_state_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "diagnoser_state",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_state_1 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_state_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_state_1
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
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____final_decl_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____final_decl_atom_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "final_decl_atom",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_final_decl_atom_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_final_decl_atom_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_final_decl_atom_0
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____init_decl_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____init_decl_atom_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "init_decl_atom",
  {     &mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 },
  {     &mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_init_decl_atom_0
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
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____some_decl_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____some_decl_atom_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "some_decl_atom",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_some_decl_atom_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_some_decl_atom_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_some_decl_atom_0
};

void MR_CALL 
mdb__declarative_debugger____Compare____some_decl_atom_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____some_decl_atom_0_0(
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
}

void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_state_1_0(
  MR_Word TypeInfo_for_R_17,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_state_1_0(
  MR_Word TypeInfo_for_R_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_response_1_0(
  MR_Word TypeInfo_for_R_90,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_response_1_0(
  MR_Word TypeInfo_for_R_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_exception_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_exception_0_0(
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
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_truth_0_0(
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
mdb__declarative_debugger____Unify____decl_truth_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_question_1_0(
  MR_Word TypeInfo_for_T_66,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
                    {
                      mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_73)), ((MR_Box) (ArgY3_37)));
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
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_question_1_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    return succeeded;
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
{
  {
    return MR_TRUE;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_exception_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mdb__term_rep____Compare____term_rep_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_exception_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mdb__term_rep____Unify____term_rep_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_evidence_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_evidence_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_contour_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_contour_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_confirmation_0_0(
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
mdb__declarative_debugger____Unify____decl_confirmation_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_bug_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_i_bug_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_e_bug_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

void MR_CALL 
mdb__declarative_debugger____Compare____init_decl_atom_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

void MR_CALL 
mdb__declarative_debugger____Compare____final_decl_atom_0_0(
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

      mdb__declarative_execution____Compare____trace_atom_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_bug_0_0(
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
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_i_bug_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_e_bug_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____init_decl_atom_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____final_decl_atom_0_0(
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
}

void MR_CALL 
mdb__declarative_debugger____Compare____decl_answer_1_0(
  MR_Word TypeInfo_for_T_83,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_answer_1_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
}

static void MR_CALL 
mdb__declarative_debugger__get_trusted_list_3_p_0(
  MR_Word Diagnoser_4,
  MR_Word MDBCommandFormat_5,
  MR_String * List_6)
{
  {
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser_4, (MR_Integer) 1))));

    mdb__declarative_oracle__get_trusted_list_3_p_0(Var_7, MDBCommandFormat_5, List_6);
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__remove_trusted_3_p_0(
  MR_Integer N_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * STATE_VARIABLE_Diagnoser_8)
{
  {
    MR_bool succeeded;
    MR_Word Oracle_6;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1))));
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_17;

    succeeded = mdb__declarative_oracle__remove_trusted_3_p_0(N_4, Var_9, &Oracle_6);
    if (succeeded)
    {
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0))));
      Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2))) & (MR_Integer) 1);
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Diagnoser_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_6));
        MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_16));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger__trust_standard_library_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_5,
  MR_Word * STATE_VARIABLE_Diagnoser_6)
{
  {
    MR_Word Oracle_4;
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 1))));
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_15;

    mdb__declarative_oracle__trust_standard_library_2_p_0(Var_7, &Oracle_4);
    Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 0))));
    Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Diagnoser_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_4));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_14));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_15));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(
  MR_Box ProcLayout_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * STATE_VARIABLE_Diagnoser_8)
{
  {
    MR_Word Oracle_6;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1))));
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_17;

    mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(ProcLayout_4, Var_9, &Oracle_6);
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0))));
    Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Diagnoser_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_6));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__add_trusted_module_3_p_0(
  MR_String ModuleName_4,
  MR_Word Diagnoser0_5,
  MR_Word * Diagnoser_6)
{
  {
    MR_Word SymModuleName_7;
    MR_Word Oracle_8;
    MR_Word Var_9;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Word Var_16;

    SymModuleName_7 = mdbcomp__sym_name__string_to_sym_name_1_f_0(ModuleName_4);
    Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser0_5, (MR_Integer) 1))));
    mdb__declarative_oracle__add_trusted_module_3_p_0(SymModuleName_7, Var_9, &Oracle_8);
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser0_5, (MR_Integer) 0))));
    Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Diagnoser0_5, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser0_5, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Diagnoser_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_8));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_supertree_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_4,
  MR_Integer * SeqNo_5)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1)));

    if (succeeded)
    {
      *Event_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
      *SeqNo_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_subtree_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_6,
  MR_Integer * SeqNo_7,
  MR_Word * CallPreceding_8,
  MR_Integer * MaxDepth_9)
{
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
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_symptom_found_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2);

    if (succeeded)
      *Event_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_bug_found_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * Event_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);

    if (succeeded)
      *Event_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    return succeeded;
  }
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
  {
    mdb__declarative_debugger__diagnosis_9_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_2[0]), ((MR_Box) (Store_9)), (MR_Word) ((MR_Unsigned) 0U), Response_10, STATE_VARIABLE_State_0_14, STATE_VARIABLE_State_15, STATE_VARIABLE_Browser_0_16, STATE_VARIABLE_Browser_17);
  }
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
  {
    MR_Word Var_22;
    MR_Word Var_26 = (MR_Word) (Node_11);

    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_26));
    }
    mdb__declarative_debugger__diagnosis_9_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_2[0]), ((MR_Box) (Store_10)), Var_22, Response_12, STATE_VARIABLE_State_0_16, STATE_VARIABLE_State_17, STATE_VARIABLE_Browser_0_18, STATE_VARIABLE_Browser_19);
  }
}

static MR_Word MR_CALL 
mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_f_0();
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
mdb__declarative_debugger__divide_and_query_search_mode_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mdb__declarative_analyser__divide_and_query_search_mode_0_f_0();
    return HeadVar__1_1;
  }
}

static MR_Word MR_CALL 
mdb__declarative_debugger__top_down_search_mode_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mdb__declarative_analyser__top_down_search_mode_0_f_0();
    return HeadVar__1_1;
  }
}

static void MR_CALL 
mdb__declarative_debugger__reset_knowledge_base_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_6,
  MR_Word * STATE_VARIABLE_Diagnoser_7)
{
  {
    MR_Word Oracle0_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 1))));
    MR_Word Oracle_5;
    MR_Word Var_12;
    MR_Word Var_14;
    MR_Word Var_15;

    mdb__declarative_oracle__reset_oracle_knowledge_base_2_p_0(Oracle0_4, &Oracle_5);
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
}

static void MR_CALL 
mdb__declarative_debugger__set_fallback_search_mode_4_p_0(
  MR_Word Store_5,
  MR_Word SearchMode_6,
  MR_Word STATE_VARIABLE_Diagnoser_0_10,
  MR_Word * STATE_VARIABLE_Diagnoser_11)
{
  {
    MR_Word Analyser0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 0))));
    MR_Word Analyser_9;
    MR_Word Var_12 = (MR_Word) (Store_5);
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    mdb__declarative_analyser__set_fallback_search_mode_4_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_3[0]), ((MR_Box) (Var_12)), SearchMode_6, Analyser0_8, &Analyser_9);
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 1))));
    Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Diagnoser_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Analyser_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__set_diagnoser_testing_flag_3_p_0(
  MR_Word Testing_4,
  MR_Word STATE_VARIABLE_Diagnoser_0_8,
  MR_Word * STATE_VARIABLE_Diagnoser_9)
{
  {
    MR_Word Oracle0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 1))));
    MR_Word Oracle_7;
    MR_Word Var_14;
    MR_Word Var_16;
    MR_Word Var_17;

    mdb__declarative_oracle__set_oracle_testing_flag_3_p_0(Testing_4, Oracle0_6, &Oracle_7);
    Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 0))));
    Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 3))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Diagnoser_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_7));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_16));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__diagnoser_session_init_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_4,
  MR_Word * STATE_VARIABLE_Diagnoser_5)
{
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
}

static void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_store_5_p_0(
  MR_Word InStr_6,
  MR_Word OutStr_7,
  MR_Word Browser_8,
  MR_Word HelpSystem_9,
  MR_Word * Diagnoser_10)
{
  {
    MR_Word Analyser_17;
    MR_Word Oracle_18;

    mdb__declarative_analyser__analyser_state_init_1_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[1]), &Analyser_17);
    mdb__declarative_oracle__oracle_state_init_5_p_0(InStr_6, OutStr_7, Browser_8, HelpSystem_9, &Oracle_18);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      *Diagnoser_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Analyser_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_18));
      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__diagnosis_2_6_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_33,
  MR_Box Store_7,
  MR_Word AnalysisType_8,
  MR_Word Diagnoser0_9,
  MR_Tuple * HeadVar__4_4)
{
  {
    MR_Word TypeInfo_35_35;
    MR_Word TypeInfo_37_37;
    MR_Word TypeInfo_39_39;
    MR_Word TypeInfo_41_41;
    MR_Word TypeClassInfo_for_mercury_edt_43;
    MR_Word Response_10;
    MR_Word Diagnoser_11;
    MR_Word Analyser0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser0_9, (MR_Integer) 0))));
    MR_Word AnalyserResponse_14;
    MR_Word Analyser_15;
    MR_Word Diagnoser1_16;
    MR_Word MaybeOrigin_17;
    MR_Word Var_20 = ((MR_Word) (Store_7));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser0_9, (MR_Integer) 1))));
    MR_Word conv1_AnalyserResponse_14;
    MR_Word conv0_Analyser_15;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_33, (MR_Integer) 1, &TypeInfo_35_35);
    {
      TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_37_37, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
      MR_hl_field(MR_mktag(0), TypeInfo_37_37, 1) = ((MR_Box) (TypeInfo_35_35));
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_33, (MR_Integer) 2, &TypeInfo_39_39);
    {
      TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_41_41, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
      MR_hl_field(MR_mktag(0), TypeInfo_41_41, 1) = ((MR_Box) (TypeInfo_39_39));
    }
    {
      TypeClassInfo_for_mercury_edt_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_43, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_43, 1) = ((MR_Box) (TypeClassInfo_for_annotated_trace_33));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_43, 2) = ((MR_Box) (TypeInfo_37_37));
      MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_43, 3) = ((MR_Box) (TypeInfo_41_41));
    }
    mdb__declarative_analyser__start_or_resume_analysis_6_p_0(TypeClassInfo_for_mercury_edt_43, ((MR_Box) (Var_20)), Var_23, (MR_Word) (AnalysisType_8), &conv1_AnalyserResponse_14, (MR_Word) (Analyser0_13), &conv0_Analyser_15);
    AnalyserResponse_14 = (MR_Word) (conv1_AnalyserResponse_14);
    Analyser_15 = (MR_Word) (conv0_Analyser_15);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser0_9, (MR_Integer) 1))));
    Var_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Diagnoser0_9, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser0_9, (MR_Integer) 3))));
    {
      Diagnoser1_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Diagnoser1_16, 0) = ((MR_Box) (Analyser_15));
      MR_hl_field(MR_mktag(0), Diagnoser1_16, 1) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Diagnoser1_16, 2) = (MR_Box) ((MR_Unsigned) (Var_31));
      MR_hl_field(MR_mktag(0), Diagnoser1_16, 3) = ((MR_Box) (Var_32));
    }
    mdb__declarative_analyser__debug_analyser_state_2_p_0(TypeInfo_41_41, Analyser_15, &MaybeOrigin_17);
    mdb__declarative_debugger__handle_analyser_response_8_p_0(TypeClassInfo_for_annotated_trace_33, Store_7, AnalyserResponse_14, MaybeOrigin_17, &Response_10, Diagnoser1_16, &Diagnoser_11);
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Response_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Diagnoser_11));
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__confirm_bug_8_p_0(
  MR_Word TypeInfo_for_T_35,
  MR_Word TypeClassInfo_for_annotated_trace_34,
  MR_Box Store_9,
  MR_Word Bug_10,
  MR_Word Evidence_11,
  MR_Word * Response_12,
  MR_Word STATE_VARIABLE_Diagnoser_0_19,
  MR_Word * STATE_VARIABLE_Diagnoser_20)
{
  {
    MR_Word Oracle0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 1))));
    MR_Word Confirmation_16;
    MR_Word Oracle_17;
    MR_Word STATE_VARIABLE_Diagnoser_24_24;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_33;

    mdb__declarative_oracle__oracle_confirm_bug_7_p_0(TypeInfo_for_T_35, Bug_10, Evidence_11, &Confirmation_16, Oracle0_15, &Oracle_17);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 0))));
    Var_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 3))));
    {
      STATE_VARIABLE_Diagnoser_24_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, 1) = ((MR_Box) (Oracle_17));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, 2) = (MR_Box) ((MR_Unsigned) (Var_32));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, 3) = ((MR_Box) (Var_33));
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
            MR_Word EBug_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Bug_10, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) EBug_36)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                Event_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), EBug_36, (MR_Integer) 3))));
                break;
              case (MR_Integer) 1:
                Event_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), EBug_36, (MR_Integer) 1))));
                break;
              case (MR_Integer) 2:
                Event_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), EBug_36, (MR_Integer) 2))));
                break;
            }
          }
          else
          {
            MR_Word IBug_44 = (MR_Word) ((MR_Word) (Bug_10));

            Event_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), IBug_44, (MR_Integer) 3))));
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
          MR_Word TypeInfo_30_71;
          MR_Word TypeInfo_32_73;
          MR_Word TypeInfo_34_75;
          MR_Word TypeInfo_36_77;
          MR_Word TypeClassInfo_for_mercury_edt_79;
          MR_Word AnalyserResponse_57;
          MR_Word Analyser_58;
          MR_Word Diagnoser1_59;
          MR_Word MaybeOrigin_60;
          MR_Word Var_61 = ((MR_Word) (Store_9));
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_34, (MR_Integer) 1, &TypeInfo_30_71);
          {
            TypeInfo_32_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_32_73, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
            MR_hl_field(MR_mktag(0), TypeInfo_32_73, 1) = ((MR_Box) (TypeInfo_30_71));
          }
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_34, (MR_Integer) 2, &TypeInfo_34_75);
          {
            TypeInfo_36_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_36_77, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
            MR_hl_field(MR_mktag(0), TypeInfo_36_77, 1) = ((MR_Box) (TypeInfo_34_75));
          }
          {
            TypeClassInfo_for_mercury_edt_79 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_79, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
            MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_79, 1) = ((MR_Box) (TypeClassInfo_for_annotated_trace_34));
            MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_79, 2) = ((MR_Box) (TypeInfo_32_73));
            MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_79, 3) = ((MR_Box) (TypeInfo_36_77));
          }
          mdb__declarative_analyser__revise_analysis_4_p_0(TypeClassInfo_for_mercury_edt_79, ((MR_Box) (Var_61)), &AnalyserResponse_57, Var_30, &Analyser_58);
          Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, (MR_Integer) 1))));
          Var_68 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, (MR_Integer) 2))) & (MR_Integer) 1);
          Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_24_24, (MR_Integer) 3))));
          {
            Diagnoser1_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Diagnoser1_59, 0) = ((MR_Box) (Analyser_58));
            MR_hl_field(MR_mktag(0), Diagnoser1_59, 1) = ((MR_Box) (Var_67));
            MR_hl_field(MR_mktag(0), Diagnoser1_59, 2) = (MR_Box) ((MR_Unsigned) (Var_68));
            MR_hl_field(MR_mktag(0), Diagnoser1_59, 3) = ((MR_Box) (Var_69));
          }
          mdb__declarative_analyser__debug_analyser_state_2_p_0(TypeInfo_36_77, Analyser_58, &MaybeOrigin_60);
          mdb__declarative_debugger__handle_analyser_response_8_p_0(TypeClassInfo_for_annotated_trace_34, Store_9, AnalyserResponse_57, MaybeOrigin_60, Response_12, Diagnoser1_59, STATE_VARIABLE_Diagnoser_20);
        }
        break;
    }
  }
}

static void MR_CALL 
mdb__declarative_debugger__handle_oracle_response_7_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_108,
  MR_Box Store_8,
  MR_Word OracleResponse_9,
  MR_Word * DiagnoserResponse_10,
  MR_Word STATE_VARIABLE_Diagnoser_0_27,
  MR_Word * STATE_VARIABLE_Diagnoser_28)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) OracleResponse_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OracleResponse_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_154_154;
              MR_Word TypeInfo_156_156;
              MR_Word STATE_VARIABLE_Diagnoser_33_33;
              MR_Word Var_42;
              MR_Word AnalyserResponse_72;
              MR_Word MaybeOrigin_73;
              MR_Word PoppedDiagnoser_22;
              MR_Word TypeInfo_141_141;
              MR_Word AnalyserResponse0_71;
              MR_Word TypeInfo_143_143;
              MR_Word TypeInfo_145_145;
              MR_Word TypeInfo_147_147;
              MR_Word TypeInfo_149_149;
              MR_Word TypeClassInfo_for_mercury_edt_151;
              MR_Word Var_37;
              MR_Word Var_38;
              MR_Word conv5_AnalyserResponse0_71;

              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &TypeInfo_141_141);
              succeeded = mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(STATE_VARIABLE_Diagnoser_0_27, &PoppedDiagnoser_22);
              if (succeeded)
                STATE_VARIABLE_Diagnoser_33_33 = PoppedDiagnoser_22;
              else
              {
                MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1))));
                MR_Word OutStream_69;

                OutStream_69 = mdb__declarative_oracle__get_user_output_stream_1_f_0(Var_34);
                mercury__io__write_string_4_p_0(OutStream_69, (MR_String) "Undo stack empty.\n");
                STATE_VARIABLE_Diagnoser_33_33 = STATE_VARIABLE_Diagnoser_0_27;
              }
              Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 0))));
              Var_37 = ((MR_Word) (Store_8));
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &TypeInfo_143_143);
              {
                TypeInfo_145_145 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_145_145, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
                MR_hl_field(MR_mktag(0), TypeInfo_145_145, 1) = ((MR_Box) (TypeInfo_143_143));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &TypeInfo_147_147);
              {
                TypeInfo_149_149 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_149_149, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
                MR_hl_field(MR_mktag(0), TypeInfo_149_149, 1) = ((MR_Box) (TypeInfo_147_147));
              }
              {
                TypeClassInfo_for_mercury_edt_151 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_151, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
                MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_151, 1) = ((MR_Box) (TypeClassInfo_for_annotated_trace_108));
                MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_151, 2) = ((MR_Box) (TypeInfo_145_145));
                MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_151, 3) = ((MR_Box) (TypeInfo_149_149));
              }
              succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(TypeClassInfo_for_mercury_edt_151, ((MR_Box) (Var_37)), (MR_Word) (Var_38), &conv5_AnalyserResponse0_71);
              if (succeeded)
              {
                AnalyserResponse0_71 = (MR_Word) (conv5_AnalyserResponse0_71);
                succeeded = MR_TRUE;
              }
              if (succeeded)
                AnalyserResponse_72 = AnalyserResponse0_71;
              else
              {
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[7])));
                  return;
                }
              }
              Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 0))));
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &TypeInfo_154_154);
              {
                TypeInfo_156_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_156_156, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
                MR_hl_field(MR_mktag(0), TypeInfo_156_156, 1) = ((MR_Box) (TypeInfo_154_154));
              }
              mdb__declarative_analyser__debug_analyser_state_2_p_0(TypeInfo_156_156, Var_42, &MaybeOrigin_73);
              mdb__declarative_debugger__handle_analyser_response_8_p_0(TypeClassInfo_for_annotated_trace_108, Store_8, AnalyserResponse_72, MaybeOrigin_73, DiagnoserResponse_10, STATE_VARIABLE_Diagnoser_33_33, STATE_VARIABLE_Diagnoser_28);
            }
            break;
          case (MR_Integer) 1:
            {
              *DiagnoserResponse_10 = (MR_Word) ((MR_Unsigned) 0U);
              mercury__io__write_string_3_p_0((MR_String) "Diagnosis aborted.\n");
              *STATE_VARIABLE_Diagnoser_28 = STATE_VARIABLE_Diagnoser_0_27;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_110_110;
          MR_Word TypeInfo_112_112;
          MR_Word TypeInfo_114_114;
          MR_Word TypeInfo_116_116;
          MR_Word TypeClassInfo_for_mercury_edt_118;
          MR_Word Answer_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OracleResponse_9, (MR_Integer) 0))));
          MR_Word Analyser0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0))));
          MR_Word AnalyserResponse_15;
          MR_Word Analyser_16;
          MR_Word MaybeOrigin_17;
          MR_Word Var_57 = ((MR_Word) (Store_8));
          MR_Word STATE_VARIABLE_Diagnoser_59_59;
          MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1))));
          MR_Word conv1_AnalyserResponse_15;
          MR_Word conv0_Analyser_16;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word Var_85;

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &TypeInfo_110_110);
          {
            TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_112_112, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
            MR_hl_field(MR_mktag(0), TypeInfo_112_112, 1) = ((MR_Box) (TypeInfo_110_110));
          }
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &TypeInfo_114_114);
          {
            TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_116_116, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
            MR_hl_field(MR_mktag(0), TypeInfo_116_116, 1) = ((MR_Box) (TypeInfo_114_114));
          }
          {
            TypeClassInfo_for_mercury_edt_118 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_118, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
            MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_118, 1) = ((MR_Box) (TypeClassInfo_for_annotated_trace_108));
            MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_118, 2) = ((MR_Box) (TypeInfo_112_112));
            MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_118, 3) = ((MR_Box) (TypeInfo_116_116));
          }
          mdb__declarative_analyser__continue_analysis_6_p_0(TypeClassInfo_for_mercury_edt_118, ((MR_Box) (Var_57)), Var_76, (MR_Word) (Answer_13), &conv1_AnalyserResponse_15, (MR_Word) (Analyser0_14), &conv0_Analyser_16);
          AnalyserResponse_15 = (MR_Word) (conv1_AnalyserResponse_15);
          Analyser_16 = (MR_Word) (conv0_Analyser_16);
          Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1))));
          Var_84 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2))) & (MR_Integer) 1);
          Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3))));
          {
            STATE_VARIABLE_Diagnoser_59_59 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_59_59, 0) = ((MR_Box) (Analyser_16));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_59_59, 1) = ((MR_Box) (Var_83));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_59_59, 2) = (MR_Box) ((MR_Unsigned) (Var_84));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_59_59, 3) = ((MR_Box) (Var_85));
          }
          mdb__declarative_analyser__debug_analyser_state_2_p_0(TypeInfo_116_116, Analyser_16, &MaybeOrigin_17);
          mdb__declarative_debugger__handle_analyser_response_8_p_0(TypeClassInfo_for_annotated_trace_108, Store_8, AnalyserResponse_15, MaybeOrigin_17, DiagnoserResponse_10, STATE_VARIABLE_Diagnoser_59_59, STATE_VARIABLE_Diagnoser_28);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_120_120;
          MR_Word TypeInfo_122_122;
          MR_Word TypeInfo_124_124;
          MR_Word TypeInfo_126_126;
          MR_Word TypeClassInfo_for_mercury_edt_128;
          MR_Word OutStream_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OracleResponse_9, (MR_Integer) 0))));
          MR_Word Var_49 = ((MR_Word) (Store_8));
          MR_Word AnalyserResponse_62;
          MR_Word Analyser_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0))));
          MR_Word MaybeOrigin_64;
          MR_Word AnalyserResponse0_19;
          MR_Word conv4_AnalyserResponse0_19;

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &TypeInfo_120_120);
          {
            TypeInfo_122_122 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_122_122, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
            MR_hl_field(MR_mktag(0), TypeInfo_122_122, 1) = ((MR_Box) (TypeInfo_120_120));
          }
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &TypeInfo_124_124);
          {
            TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_126_126, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
            MR_hl_field(MR_mktag(0), TypeInfo_126_126, 1) = ((MR_Box) (TypeInfo_124_124));
          }
          {
            TypeClassInfo_for_mercury_edt_128 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_128, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
            MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_128, 1) = ((MR_Box) (TypeClassInfo_for_annotated_trace_108));
            MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_128, 2) = ((MR_Box) (TypeInfo_122_122));
            MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_128, 3) = ((MR_Box) (TypeInfo_126_126));
          }
          mdb__declarative_analyser__show_info_5_p_0(TypeClassInfo_for_mercury_edt_128, ((MR_Box) (Var_49)), OutStream_18, (MR_Word) (Analyser_63));
          succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(TypeClassInfo_for_mercury_edt_128, ((MR_Box) (Var_49)), (MR_Word) (Analyser_63), &conv4_AnalyserResponse0_19);
          if (succeeded)
          {
            AnalyserResponse0_19 = (MR_Word) (conv4_AnalyserResponse0_19);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            AnalyserResponse_62 = AnalyserResponse0_19;
          else
          {
            {
              mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[6])));
              return;
            }
          }
          mdb__declarative_analyser__debug_analyser_state_2_p_0(TypeInfo_126_126, Analyser_63, &MaybeOrigin_64);
          mdb__declarative_debugger__handle_analyser_response_8_p_0(TypeClassInfo_for_annotated_trace_108, Store_8, AnalyserResponse_62, MaybeOrigin_64, DiagnoserResponse_10, STATE_VARIABLE_Diagnoser_0_27, STATE_VARIABLE_Diagnoser_28);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OracleResponse_9, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_131_131;
              MR_Word TypeInfo_133_133;
              MR_Word TypeInfo_135_135;
              MR_Word TypeInfo_137_137;
              MR_Word TypeClassInfo_for_mercury_edt_139;
              MR_Word Mode_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), OracleResponse_9, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_Word Oracle_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1))));
              MR_Word Var_45 = ((MR_Word) (Store_8));
              MR_Word STATE_VARIABLE_Diagnoser_46_46;
              MR_Word Analyser0_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0))));
              MR_Word AnalyserResponse_66;
              MR_Word Analyser_67;
              MR_Word MaybeOrigin_68;
              MR_Word conv3_Analyser_67;
              MR_Word conv2_AnalyserResponse_66;
              MR_Word Var_96;
              MR_Word Var_97;
              MR_Word Var_98;

              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &TypeInfo_131_131);
              {
                TypeInfo_133_133 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_133_133, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
                MR_hl_field(MR_mktag(0), TypeInfo_133_133, 1) = ((MR_Box) (TypeInfo_131_131));
              }
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &TypeInfo_135_135);
              {
                TypeInfo_137_137 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_137_137, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
                MR_hl_field(MR_mktag(0), TypeInfo_137_137, 1) = ((MR_Box) (TypeInfo_135_135));
              }
              {
                TypeClassInfo_for_mercury_edt_139 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_139, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
                MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_139, 1) = ((MR_Box) (TypeClassInfo_for_annotated_trace_108));
                MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_139, 2) = ((MR_Box) (TypeInfo_133_133));
                MR_hl_field(MR_mktag(0), TypeClassInfo_for_mercury_edt_139, 3) = ((MR_Box) (TypeInfo_137_137));
              }
              mdb__declarative_analyser__change_search_mode_6_p_0(TypeClassInfo_for_mercury_edt_139, ((MR_Box) (Var_45)), Oracle_21, Mode_20, (MR_Word) (Analyser0_65), &conv3_Analyser_67, &conv2_AnalyserResponse_66);
              Analyser_67 = (MR_Word) (conv3_Analyser_67);
              AnalyserResponse_66 = (MR_Word) (conv2_AnalyserResponse_66);
              Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1))));
              Var_97 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2))) & (MR_Integer) 1);
              Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3))));
              {
                STATE_VARIABLE_Diagnoser_46_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_46_46, 0) = ((MR_Box) (Analyser_67));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_46_46, 1) = ((MR_Box) (Var_96));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_46_46, 2) = (MR_Box) ((MR_Unsigned) (Var_97));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_46_46, 3) = ((MR_Box) (Var_98));
              }
              mdb__declarative_analyser__debug_analyser_state_2_p_0(TypeInfo_137_137, Analyser_67, &MaybeOrigin_68);
              mdb__declarative_debugger__handle_analyser_response_8_p_0(TypeClassInfo_for_annotated_trace_108, Store_8, AnalyserResponse_66, MaybeOrigin_68, DiagnoserResponse_10, STATE_VARIABLE_Diagnoser_46_46, STATE_VARIABLE_Diagnoser_28);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Node_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OracleResponse_9, (MR_Integer) 1))));
              MR_Integer Event_24;
              MR_Integer Var_25;
              MR_Box Var_26;

              mdb__declarative_tree__edt_subtree_details_5_p_0(TypeClassInfo_for_annotated_trace_108, Store_8, Node_23, &Event_24, &Var_25, &Var_26);
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
}

static void MR_CALL 
mdb__declarative_debugger__handle_analyser_response_8_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_113,
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
          *DiagnoserResponse_12 = (MR_Word) ((MR_Unsigned) 0U);
          mercury__io__write_string_3_p_0((MR_String) "No bug found.\n");
          *STATE_VARIABLE_Diagnoser_34 = STATE_VARIABLE_Diagnoser_0_33;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_115_115;
          MR_Word TypeInfo_117_117;
          MR_Word Bug_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AnalyserResponse_10, (MR_Integer) 0))));
          MR_Word Evidence_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AnalyserResponse_10, (MR_Integer) 1))));

          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &TypeInfo_115_115);
          {
            TypeInfo_117_117 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_117_117, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
            MR_hl_field(MR_mktag(0), TypeInfo_117_117, 1) = ((MR_Box) (TypeInfo_115_115));
          }
          mdb__declarative_debugger__confirm_bug_8_p_0(TypeInfo_117_117, TypeClassInfo_for_annotated_trace_113, Store_9, Bug_15, (MR_Word) (Evidence_16), DiagnoserResponse_12, STATE_VARIABLE_Diagnoser_0_33, STATE_VARIABLE_Diagnoser_34);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_119_119;
          MR_Word TypeInfo_121_121;
          MR_Word Question_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AnalyserResponse_10, (MR_Integer) 0))));
          MR_Word Oracle0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1))));
          MR_Integer Flag_19;
          MR_Word OracleResponse_21;
          MR_Word FromUser_22;
          MR_Word Oracle_23;
          MR_Word STATE_VARIABLE_Diagnoser_68_68;
          MR_Word STATE_VARIABLE_Diagnoser_69_69;
          MR_Word Origin_20;
          MR_Integer Var_59;
          MR_Word Var_89;
          MR_Word Var_91;
          MR_Word Var_92;

          mdb__declarative_debugger__debug_origin_3_p_0(&Flag_19);
          succeeded = (MaybeOrigin_11 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Origin_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeOrigin_11, (MR_Integer) 0))));
            Var_59 = (MR_Integer) 0;
            succeeded = (Flag_19 > Var_59);
          }
          if (succeeded)
          {
            MR_Word Var_62;

            mercury__io__write_string_3_p_0((MR_String) "Origin: ");
            Var_62 = ((MR_Word) (Store_9));
            mdb__declarative_debugger__write_origin_4_p_0(TypeClassInfo_for_annotated_trace_113, Var_62, Origin_20);
            mercury__io__nl_2_p_0();
          }
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &TypeInfo_119_119);
          {
            TypeInfo_121_121 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), TypeInfo_121_121, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
            MR_hl_field(MR_mktag(0), TypeInfo_121_121, 1) = ((MR_Box) (TypeInfo_119_119));
          }
          mdb__declarative_oracle__query_oracle_7_p_0(TypeInfo_121_121, Question_17, &OracleResponse_21, &FromUser_22, Oracle0_18, &Oracle_23);
          switch (FromUser_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Diagnoser_68_68 = STATE_VARIABLE_Diagnoser_0_33;
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_Diagnoser_66_66;
                MR_Word Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0))));
                MR_Word Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1))));
                MR_Word Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3))));

                {
                  STATE_VARIABLE_Diagnoser_66_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_66_66, 0) = ((MR_Box) (Var_85));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_66_66, 1) = ((MR_Box) (Var_86));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_66_66, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_66_66, 3) = ((MR_Box) (Var_88));
                }
                succeeded = mdb__declarative_oracle__oracle_response_undoable_1_p_0(TypeInfo_121_121, OracleResponse_21);
                if (succeeded)
                {
                  MR_Word TypeInfo_122_122;

                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &TypeInfo_122_122);
                  mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(STATE_VARIABLE_Diagnoser_66_66, &STATE_VARIABLE_Diagnoser_68_68);
                }
                else
                  STATE_VARIABLE_Diagnoser_68_68 = STATE_VARIABLE_Diagnoser_66_66;
              }
              break;
          }
          Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 0))));
          Var_91 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 2))) & (MR_Integer) 1);
          Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 3))));
          {
            STATE_VARIABLE_Diagnoser_69_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_69_69, 0) = ((MR_Box) (Var_89));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_69_69, 1) = ((MR_Box) (Oracle_23));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_69_69, 2) = (MR_Box) ((MR_Unsigned) (Var_91));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_69_69, 3) = ((MR_Box) (Var_92));
          }
          mdb__declarative_debugger__handle_oracle_response_7_p_0(TypeClassInfo_for_annotated_trace_113, Store_9, OracleResponse_21, DiagnoserResponse_12, STATE_VARIABLE_Diagnoser_69_69, STATE_VARIABLE_Diagnoser_34);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AnalyserResponse_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Node_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AnalyserResponse_10, (MR_Integer) 1))));
              MR_Integer Event_25;
              MR_Integer Seqno_26;
              MR_Box CallPreceding_27;
              MR_Integer IdealDepth_29;
              MR_Word ImplicitTreeInfo_28;
              MR_Word Var_54;

              mdb__declarative_tree__edt_subtree_details_5_p_0(TypeClassInfo_for_annotated_trace_113, Store_9, Node_24, &Event_25, &Seqno_26, &CallPreceding_27);
              Var_54 = ((MR_Word) (Store_9));
              succeeded = mdb__declarative_tree__trace_implicit_tree_info_3_p_0(TypeClassInfo_for_annotated_trace_113, Var_54, Node_24, &ImplicitTreeInfo_28);
              if (succeeded)
                IdealDepth_29 = (MR_Integer) (ImplicitTreeInfo_28);
              else
              {
                {
                  mercury__exception__throw_1_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[5])));
                  return;
                }
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *DiagnoserResponse_12 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Event_25));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Seqno_26));
                MR_hl_field(MR_mktag(3), base, 3) = CallPreceding_27;
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (IdealDepth_29));
              }
              *STATE_VARIABLE_Diagnoser_34 = STATE_VARIABLE_Diagnoser_0_33;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Node_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AnalyserResponse_10, (MR_Integer) 1))));
              MR_Integer Event_77;
              MR_Integer Seqno_78;
              MR_Word Var_131;
              MR_Word Var_132;
              MR_Box Var_30;

              mdb__declarative_tree__edt_subtree_details_5_p_0(TypeClassInfo_for_annotated_trace_113, Store_9, Node_76, &Event_77, &Seqno_78, &Var_30);
              Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1))));
              Var_131 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (Var_131) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      *DiagnoserResponse_12 = base;
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Event_77));
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Seqno_78));
                    }
                    *STATE_VARIABLE_Diagnoser_34 = STATE_VARIABLE_Diagnoser_0_33;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Out_31;
                    MR_Word Response_32;
                    MR_Word TypeInfo_125_125;
                    MR_Word Var_102;
                    MR_Word Var_103;
                    MR_Word Var_105;

                    Out_31 = mdb__declarative_oracle__get_user_output_stream_1_f_0(Var_132);
                    mercury__io__write_string_4_p_0(Out_31, (MR_String) "All descendent calls are trusted.\nShall I continue searching in ancestor calls\?\n");
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &TypeInfo_125_125);
                    mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_p_0(STATE_VARIABLE_Diagnoser_0_33, &Response_32);
                    switch (Response_32) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mercury__io__write_string_4_p_0(Out_31, (MR_String) "Diagnosis aborted.\n");
                          *DiagnoserResponse_12 = (MR_Word) ((MR_Unsigned) 0U);
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          *DiagnoserResponse_12 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Event_77));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Seqno_78));
                        }
                        break;
                    }
                    Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0))));
                    Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1))));
                    Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3))));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      *STATE_VARIABLE_Diagnoser_34 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_102));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_103));
                      MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_105));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeInfo_127_127;
              MR_Word TypeInfo_129_129;
              MR_Word STATE_VARIABLE_Diagnoser_37_37;
              MR_Word Var_38;
              MR_Word Question_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AnalyserResponse_10, (MR_Integer) 1))));
              MR_Word Oracle0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1))));
              MR_Word Oracle_81;
              MR_Word Var_109;
              MR_Word Var_111;
              MR_Word Var_112;
              MR_Word next_value_of_AnalyserResponse_10;
              MR_Word next_value_of_STATE_VARIABLE_Diagnoser_0_33;

              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &TypeInfo_127_127);
              {
                TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeInfo_129_129, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
                MR_hl_field(MR_mktag(0), TypeInfo_129_129, 1) = ((MR_Box) (TypeInfo_127_127));
              }
              mdb__declarative_oracle__revise_oracle_3_p_0(TypeInfo_129_129, Question_79, Oracle0_80, &Oracle_81);
              Var_109 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0))));
              Var_111 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2))) & (MR_Integer) 1);
              Var_112 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3))));
              {
                STATE_VARIABLE_Diagnoser_37_37 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_37_37, 0) = ((MR_Box) (Var_109));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_37_37, 1) = ((MR_Box) (Oracle_81));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_37_37, 2) = (MR_Box) ((MR_Unsigned) (Var_111));
                MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_37_37, 3) = ((MR_Box) (Var_112));
              }
              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (Question_79));
              }
              // direct tailcall eliminated
              ;
              next_value_of_AnalyserResponse_10 = Var_38;
              next_value_of_STATE_VARIABLE_Diagnoser_0_33 = STATE_VARIABLE_Diagnoser_37_37;
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
    MR_Word In_8;
    MR_Word Out_9;
    MR_Word Result_11;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser_5, (MR_Integer) 1))));
    MR_Word Var_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    In_8 = mdb__declarative_oracle__get_user_input_stream_1_f_0(Var_17);
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Diagnoser_5, (MR_Integer) 1))));
    Out_9 = mdb__declarative_oracle__get_user_output_stream_1_f_0(Var_18);
    mdb__util__trace_getline_6_p_0((MR_String) "> ", &Result_11, In_8, Out_9);
    switch (MR_tag((MR_Word) Result_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_4_p_0(Out_9, (MR_String) "Unexpected EOF. Aborting.\n");
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
              mercury__io__write_string_4_p_0(Out_9, (MR_String) "Please answer yes or no.\n");
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
          MR_String Var_22;
          MR_String Var_25;
          MR_String Var_26;

          Var_26 = mercury__io__error_message_1_f_0(ErrNo_14);
          Var_25 = mercury__string__f_43_43_2_f_0(Var_26, (MR_String) ". Aborting.\n");
          Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading input: ", Var_25);
          mercury__io__write_string_4_p_0(Out_9, Var_22);
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
}

static void MR_CALL 
mdb__declarative_debugger__debug_origin_3_p_0(
  MR_Integer * Flag_1)
{
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
}

static void MR_CALL 
mdb__declarative_debugger__write_origin_4_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_38,
  MR_Word HeadVar__1_1,
  MR_Word Origin_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Origin_6)) == (MR_Integer) 1);
    MR_Box Store_5 = ((MR_Box) (HeadVar__1_1));
    MR_Box NodeId_8;
    MR_Word ArgPos_9;
    MR_Word TermPath_10;
    MR_Word Var_17;

    if (succeeded)
    {
      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_6, (MR_Integer) 0))));
      ArgPos_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_6, (MR_Integer) 1))));
      TermPath_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Origin_6, (MR_Integer) 2))));
      NodeId_8 = ((MR_Box) (Var_17));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word ExitNode_11;
      MR_Box ProcLayout_12;
      MR_Word ProcLabel_13;
      MR_String ProcName_14;
      MR_Box Var_18;

      mdb__declarative_execution__exit_node_from_id_3_p_0(TypeClassInfo_for_annotated_trace_38, Store_5, NodeId_8, &ExitNode_11);
      Var_18 = ((MR_Box) ((MR_hl_field(MR_mktag(1), ExitNode_11, (MR_Integer) 5))));
      ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(Var_18);
      ProcLabel_13 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(ProcLayout_12);
      ProcName_14 = mdbcomp__rtti_access__get_proc_name_1_f_0(ProcLabel_13);
      mercury__io__write_string_3_p_0((MR_String) "output(");
      mercury__io__write_string_3_p_0(ProcName_14);
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__io__write_3_p_0((MR_Word) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0), ((MR_Box) (ArgPos_9)));
      mercury__io__write_string_3_p_0((MR_String) ", ");
      mercury__io__write_3_p_0((MR_Word) (&mdb__declarative_debugger_scalar_common_1[2]), ((MR_Box) (TermPath_10)));
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    else
    {
      MR_Word TypeInfo_42_42;
      MR_Word TypeInfo_44_44;
      MR_Word TypeInfo_46_46;

      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_38, (MR_Integer) 2, &TypeInfo_42_42);
      {
        TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_44_44, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
        MR_hl_field(MR_mktag(0), TypeInfo_44_44, 1) = ((MR_Box) (TypeInfo_42_42));
      }
      {
        TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeInfo_46_46, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1));
        MR_hl_field(MR_mktag(0), TypeInfo_46_46, 1) = ((MR_Box) (TypeInfo_44_44));
      }
      mercury__io__write_3_p_0(TypeInfo_46_46, ((MR_Box) (Origin_6)));
    }
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
  MR_Word STATE_VARIABLE_Diagnoser_0_7,
  MR_Word * STATE_VARIABLE_Diagnoser_8)
{
  {
    MR_bool succeeded;
    MR_Word LatestOracle_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1))));
    MR_Word LastPushedOracle_5;
    MR_Word Oracle_6;
    MR_Word STATE_VARIABLE_Diagnoser_10_10;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3))));
    MR_Word Var_21;
    MR_Word Var_23;
    MR_Word Var_24;

    succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      STATE_VARIABLE_Diagnoser_10_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
      LastPushedOracle_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 1))));
      mdb__declarative_oracle__update_revised_knowledge_base_3_p_0(LastPushedOracle_5, LatestOracle_4, &Oracle_6);
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 0))));
      Var_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 2))) & (MR_Integer) 1);
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 3))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Diagnoser_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Oracle_6));
        MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_23));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_24));
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv0_HeadVar__4_4;

    mdb__declarative_debugger__diagnosis_2_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), &conv0_HeadVar__4_4);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0(
  MR_Word TypeClassInfo_for_annotated_trace_46,
  MR_Box Store_10,
  MR_Word AnalysisType_11,
  MR_Word * Response_12,
  MR_Word STATE_VARIABLE_Diagnoser_0_20,
  MR_Word * STATE_VARIABLE_Diagnoser_21,
  MR_Word STATE_VARIABLE_Browser_0_22,
  MR_Word * STATE_VARIABLE_Browser_23)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_51_51;
    MR_Word TypeInfo_53_53;
    MR_Word TypeInfo_54_54;
    MR_Word TypeInfo_56_56;
    MR_Word TypeInfo_58_58;
    MR_Word Oracle_16;
    MR_Word Result_17;
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_Diagnoser_27_27;
    MR_Word Var_28;
    MR_Word Var_35;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;

    mdb__declarative_oracle__set_browser_state_3_p_0(STATE_VARIABLE_Browser_0_22, Var_26, &Oracle_16);
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 0))));
    Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 2))) & (MR_Integer) 1);
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 3))));
    {
      STATE_VARIABLE_Diagnoser_27_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_27_27, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_27_27, 1) = ((MR_Box) (Oracle_16));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_27_27, 2) = (MR_Box) ((MR_Unsigned) (Var_41));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_27_27, 3) = ((MR_Box) (Var_42));
    }
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_28, 0) = ((MR_Box) (&mdb__declarative_debugger_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_28, 1) = ((MR_Box) (mdb__declarative_debugger__diagnosis_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_28, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_28, 3) = ((MR_Box) (TypeClassInfo_for_annotated_trace_46));
      MR_hl_field(MR_mktag(0), Var_28, 4) = Store_10;
      MR_hl_field(MR_mktag(0), Var_28, 5) = ((MR_Box) (AnalysisType_11));
      MR_hl_field(MR_mktag(0), Var_28, 6) = ((MR_Box) (STATE_VARIABLE_Diagnoser_27_27));
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_46, (MR_Integer) 2, &TypeInfo_51_51);
    {
      TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_53_53, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_response_1));
      MR_hl_field(MR_mktag(0), TypeInfo_53_53, 1) = ((MR_Box) (TypeInfo_51_51));
    }
    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_46, (MR_Integer) 2, &TypeInfo_54_54);
    {
      TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_56_56, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1));
      MR_hl_field(MR_mktag(0), TypeInfo_56_56, 1) = ((MR_Box) (TypeInfo_54_54));
    }
    {
      TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_58_58, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
      MR_hl_field(MR_mktag(0), TypeInfo_58_58, 1) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), TypeInfo_58_58, 2) = ((MR_Box) (TypeInfo_53_53));
      MR_hl_field(MR_mktag(0), TypeInfo_58_58, 3) = ((MR_Box) (TypeInfo_56_56));
    }
    mercury__exception__try_io_4_p_1(TypeInfo_58_58, Var_28, &Result_17);
    if (((MR_tag((MR_Word) Result_17)) == (MR_Integer) 2))
    {
      MR_Word UnivException_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Result_17, (MR_Integer) 0))));
      MR_Word DiagnoserException_19;
      MR_Box conv1_DiagnoserException_19;

      succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0), UnivException_18, &conv1_DiagnoserException_19);
      if (succeeded)
      {
        DiagnoserException_19 = ((MR_Word) (conv1_DiagnoserException_19));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word TypeInfo_60_60;

        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(TypeClassInfo_for_annotated_trace_46, (MR_Integer) 2, &TypeInfo_60_60);
        mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(TypeInfo_60_60, DiagnoserException_19, Response_12, STATE_VARIABLE_Diagnoser_27_27, STATE_VARIABLE_Diagnoser_21);
      }
      else
        {
          mercury__exception__rethrow_1_p_0(TypeInfo_58_58, Result_17);
          return;
        }
    }
    else
    {
      MR_Tuple Var_32 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), Result_17, (MR_Integer) 0))));

      *Response_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 0))));
      *STATE_VARIABLE_Diagnoser_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_32, (MR_Integer) 1))));
    }
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_Diagnoser_21, (MR_Integer) 1))));
    *STATE_VARIABLE_Browser_23 = mdb__declarative_oracle__get_browser_state_1_f_0(Var_35);
  }
}

static void MR_CALL 
mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(
  MR_Word TypeInfo_for_R_108,
  MR_Word HeadVar__1_1,
  MR_Word * Response_2,
  MR_Word STATE_VARIABLE_Diagnoser_0_3,
  MR_Word * STATE_VARIABLE_Diagnoser_4)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TypeInfo_110_110;
        MR_String Loc_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
        MR_String Msg_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word StdErr_12;
        MR_Word Analyser_13;
        MR_String Var_19;
        MR_String Var_22;
        MR_String Var_24;
        MR_String Var_26;
        MR_String Var_27;
        MR_String Var_29;
        MR_Word Var_37;
        MR_Word conv0_Analyser_13;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;

        mercury__io__stderr_stream_3_p_0(&StdErr_12);
        Var_29 = mercury__string__f_43_43_2_f_0(Msg_8, (MR_String) "\nPlease report bugs via the Mercury bug tracking system at\n<https://www.mercurylang.org/bugs> or via e-mail tobugs\100mercurylang.org.\n");
        Var_27 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_29);
        Var_26 = mercury__string__f_43_43_2_f_0(Loc_7, Var_27);
        Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "message follows:\n", Var_26);
        Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "diagnosis will be aborted. Debugging\n", Var_24);
        Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "An internal error has occurred; ", Var_22);
        mercury__io__write_string_4_p_0(StdErr_12, Var_19);
        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0))));
        {
          TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_110_110, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
          MR_hl_field(MR_mktag(0), TypeInfo_110_110, 1) = ((MR_Box) (TypeInfo_for_R_108));
        }
        mdb__declarative_analyser__reset_analyser_2_p_0(TypeInfo_110_110, (MR_Word) (Var_37), &conv0_Analyser_13);
        Analyser_13 = (MR_Word) (conv0_Analyser_13);
        Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1))));
        Var_92 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2))) & (MR_Integer) 1);
        Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Diagnoser_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Analyser_13));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_92));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_93));
        }
        *Response_2 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_112_112;
        MR_String Loc_39 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_String Msg_40 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word StdErr_44;
        MR_Word Analyser_45;
        MR_String Var_51;
        MR_String Var_54;
        MR_String Var_55;
        MR_String Var_57;
        MR_Word Var_61;
        MR_Word conv1_Analyser_45;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_100;

        mercury__io__stderr_stream_3_p_0(&StdErr_44);
        Var_57 = mercury__string__f_43_43_2_f_0(Msg_40, (MR_String) ".\nDiagnosis will be aborted.\n");
        Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_57);
        Var_54 = mercury__string__f_43_43_2_f_0(Loc_39, Var_55);
        Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", Var_54);
        mercury__io__write_string_4_p_0(StdErr_44, Var_51);
        Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0))));
        {
          TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_112_112, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
          MR_hl_field(MR_mktag(0), TypeInfo_112_112, 1) = ((MR_Box) (TypeInfo_for_R_108));
        }
        mdb__declarative_analyser__reset_analyser_2_p_0(TypeInfo_112_112, (MR_Word) (Var_61), &conv1_Analyser_45);
        Analyser_45 = (MR_Word) (conv1_Analyser_45);
        Var_98 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1))));
        Var_99 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2))) & (MR_Integer) 1);
        Var_100 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Diagnoser_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Analyser_45));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_98));
          MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_99));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_100));
        }
        *Response_2 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeInfo_114_114;
        MR_String Feature_63 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Analyser_67;
        MR_String Var_72;
        MR_String Var_75;
        MR_String Var_77;
        MR_String Var_79;
        MR_Word Var_85;
        MR_Word conv2_Analyser_67;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_107;

        Var_79 = mercury__string__f_43_43_2_f_0(Feature_63, (MR_String) ".\nThe debugger is a work in progress, and this is not supported in the\ncurrent version.\n");
        Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "the following: ", Var_79);
        Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "it requires support for\n", Var_77);
        Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "Sorry, the diagnosis cannot continue because ", Var_75);
        mercury__io__write_string_3_p_0(Var_72);
        Var_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0))));
        {
          TypeInfo_114_114 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_114_114, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
          MR_hl_field(MR_mktag(0), TypeInfo_114_114, 1) = ((MR_Box) (TypeInfo_for_R_108));
        }
        mdb__declarative_analyser__reset_analyser_2_p_0(TypeInfo_114_114, (MR_Word) (Var_85), &conv2_Analyser_67);
        Analyser_67 = (MR_Word) (conv2_Analyser_67);
        Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1))));
        Var_106 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2))) & (MR_Integer) 1);
        Var_107 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Diagnoser_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Analyser_67));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (Var_106));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_107));
        }
        *Response_2 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_5_p_0(
  MR_Word TypeInfo_for_R_15,
  MR_Word InStr_6,
  MR_Word OutStr_7,
  MR_Word Browser_8,
  MR_Word HelpSystem_9,
  MR_Word * Diagnoser_10)
{
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
    mdb__declarative_oracle__oracle_state_init_5_p_0(InStr_6, OutStr_7, Browser_8, HelpSystem_9, &Oracle_12);
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
}

void MR_CALL 
mdb__declarative_debugger__unravel_decl_atom_3_p_0(
  MR_Word DeclAtom_4,
  MR_Word * TraceAtom_5,
  MR_Word * MaybeIoActions_6)
{
  if (((MR_tag((MR_Word) DeclAtom_4)) == (MR_Integer) 0))
  {
    MR_Word Var_7 = (MR_Word) ((MR_Word) (DeclAtom_4));

    *TraceAtom_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 0))));
    *MaybeIoActions_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_7, (MR_Integer) 1))));
  }
  else
  {
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DeclAtom_4, (MR_Integer) 0))));

    *TraceAtom_5 = (MR_Word) (Var_8);
    *MaybeIoActions_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

MR_Word MR_CALL 
mdb__declarative_debugger__get_decl_question_atom_1_f_0(
  MR_Word TypeInfo_16_16,
  MR_Word HeadVar__1_1)
{
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
}

MR_Box MR_CALL 
mdb__declarative_debugger__get_decl_question_node_1_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1)
{
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
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_answer_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_answer_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____decl_answer_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_bug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____decl_bug_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_bug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____decl_bug_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_confirmation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____decl_confirmation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_confirmation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____decl_confirmation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_contour_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____decl_contour_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_contour_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____decl_contour_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_e_bug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____decl_e_bug_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_e_bug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____decl_e_bug_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_evidence_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____decl_evidence_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_evidence_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____decl_evidence_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____decl_exception_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____decl_exception_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_i_bug_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____decl_i_bug_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_i_bug_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____decl_i_bug_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_position_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____decl_position_0_0();
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_position_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____decl_position_0_0(&conv0_HeadVar__1_1);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_question_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_question_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____decl_question_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_truth_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____decl_truth_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____decl_truth_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____decl_truth_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_exception_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____diagnoser_exception_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_exception_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____diagnoser_exception_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____diagnoser_response_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_response_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____diagnoser_response_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____diagnoser_state_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_state_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____diagnoser_state_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____final_decl_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____final_decl_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____final_decl_atom_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____init_decl_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____init_decl_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____init_decl_atom_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____some_decl_atom_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__declarative_debugger____Unify____some_decl_atom_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__declarative_debugger____Compare____some_decl_atom_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__declarative_debugger____Compare____some_decl_atom_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
